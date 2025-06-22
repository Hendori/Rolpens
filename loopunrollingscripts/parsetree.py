import os
import hashlib
from typing import Self, Union, Optional, List, Callable
from ctypes import cdll, c_void_p

from tree_sitter import Node as TSNode
from tree_sitter import Language, Parser


def get_parser(sofile="treesitter-decomp-c.so", language_name="decompc"):
    def lang_from_so(path: str, name: str) -> Language:
        lib = cdll.LoadLibrary(os.fspath(path))
        language_function = getattr(lib, f"tree_sitter_{name}")
        language_function.restype = c_void_p
        language_ptr = language_function()
        return Language(language_ptr)

    C_LANGUAGE = lang_from_so(os.path.dirname(__file__) + "/" + sofile, language_name)

    parser = Parser()
    parser.language = C_LANGUAGE
    return parser


class TreeError(Exception):
    pass


class Node:
    def __init__(self, node_type: str, node_text: bytes = b""):
        self.type = node_type

        self.parent: Optional[Self] = None
        self.next_sibling: Optional[Self] = None
        self.prev_sibling: Optional[Self] = None

        self.children: List[Self] = []
        self.child_names: List[str] = []

        self.text = node_text
        self.grammar_id = 0
        self.grammar_name = ""
        self.id = 0
        self.byte_range = (0, 0)

        # Velden die niet voorkomen in tree-sitter:

        # Candidate cache: een dict die een node en de lengte van een loop-body
        # mapt naar de CandidateLoop met die body-lengte die daar begint
        self.candidate_cache = {}
        self.cache_hits = 0

        # Lokale iterator: deze variabele is speciaal gedefinieerd voor deze
        # for-loop, en is daarbuiten niet in scope.
        self.local_iterator = ""

        # Strak: moet deze binaire expressie witruimte rondom de operator
        # krijgen, of juist liever niet?
        self.tight = False

        # Content hash: de gecachete versie van de content_hash()
        self._hash: bytes = b""

    def __repr__(self) -> str:
        return str(self)

    def __str__(self) -> str:
        # Formatteer een S-expressie
        rv = f"({self.type}"
        for i, child in enumerate(self.children):
            chstr = str(child)
            if len(chstr) < 5:
                continue

            if len(self.child_names) > i and self.child_names[i] != "":
                rv += f" {self.child_names[i]}: {chstr}"
            else:
                rv += " " + chstr
        return rv + ")"

    def clone(self) -> Self:
        rv = Node(self.type, self.text)

        rv.local_iterator = self.local_iterator
        rv.tight = self.tight

        for i, ch in enumerate(self.children):
            rv.append_child(ch.clone(), self.child_names[i])

        rv._hash = self._hash

        return rv

    @staticmethod
    def from_tree_sitter(node: TSNode):
        rv = Node(node.type, node.text or b"")
        rv.id = node.id
        rv.byte_range = node.byte_range
        for i, tschild in enumerate(node.children):
            child = Node.from_tree_sitter(tschild)
            child.parent = rv
            if i > 0:
                child.prev_sibling = rv.children[i - 1]
                rv.children[i - 1].next_sibling = child
            rv.children.append(child)
            rv.child_names.append(node.field_name_for_child(i) or "")
        return rv

    def child_by_field_name(self, name: str) -> Optional[Self]:
        for i, node_name in enumerate(self.child_names):
            if node_name == name:
                return self.children[i]
        return None

    def field_name_for_child(self, child_index: Union[Self, int]) -> str:
        if isinstance(child_index, Node):
            for i, ch in enumerate(self.children):
                if ch == child_index:
                    return self.child_names[i]
            return ""
        else:
            return self.child_names[child_index]

    def remove_child(self, node: Self):
        for i, child in enumerate(self.children):
            if child == node:
                node.parent = None
                if node.next_sibling is not None:
                    node.next_sibling.prev_sibling = node.prev_sibling
                if node.prev_sibling is not None:
                    node.prev_sibling.next_sibling = node.next_sibling
                node.next_sibling = None
                node.prev_sibling = None
                del self.children[i]
                del self.child_names[i]
                self._invalidate_content_hash()
                return node
        raise TreeError("node not found")

    def append_child(self, node: Self, name: str = ""):
        if node.parent is not None:
            node.parent.remove_child(node)

        node.parent = self
        if len(self.children) > 0:
            node.prev_sibling = self.children[-1]
            self.children[-1].next_sibling = node
        self.children.append(node)
        self.child_names.append(name)
        self._invalidate_content_hash()

    def insert_before(self, node: Self, reference_node: Self, name: str = ""):
        for i, child in enumerate(self.children):
            if child == reference_node:
                if node.parent is not None:
                    node.parent.remove_child(node)
                node.parent = self
                node.next_sibling = child
                child.prev_sibling = node
                if i > 0:
                    node.prev_sibling = self.children[i - 1]
                    self.children[i - 1].next_sibling = node
                self.children.insert(i, node)
                self.child_names.insert(i, name)
                self._invalidate_content_hash()
                return
        raise TreeError("reference node not found")

    def get_nodes_by_type(
        self,
        node_type: Union[str, List[str]],
        lazy: Union[bool, Callable[[Self], bool]] = False,
        descend_denylist: List[str] = [],
    ):
        if isinstance(node_type, str):
            node_type = [node_type]

        descend = True
        if self.type in node_type:
            yield self
            if isinstance(lazy, bool):
                descend = not lazy
            else:
                descend = lazy(self)

        if descend:
            for child in self.children:
                if child.type in descend_denylist:
                    continue
                yield from child.get_nodes_by_type(node_type, lazy, descend_denylist)

    def content_hash(self) -> bytes:
        if len(self._hash) > 0:
            return self._hash

        m = hashlib.sha256()
        m.update(self.type.encode())

        if self.type in (
            "identifier",
            "field_identifier",
            "type_identifier",
            "statement_identifier",
        ):
            m.update(self.text)
        elif self.type in ("string_literal",):
            m.update(self.text)
        elif self.type in ("comment",):
            m.update(self.text)
            m.update(os.urandom(16))
        elif self.type in ("number_literal",):
            pass
        else:
            for child in self.children:
                m.update(child.content_hash())

        self._hash = m.digest()
        return self._hash

    def _invalidate_content_hash(self):
        nd = self
        while nd is not None:
            nd._hash = b""
            nd = nd.parent
