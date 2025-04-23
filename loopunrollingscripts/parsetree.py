from typing import Self

from tree_sitter import Node as TSNode

class TreeError(Exception):
    pass


class Node:
    def __init__(self, node_type: str, node_text: bytes = b""):
        self.type = node_type

        self.parent = None
        self.next_sibling = None
        self.prev_sibling = None

        self.children = []
        self.child_names = []

        self.text = node_text
        self.grammar_id = 0
        self.grammar_name = ""
        self.id = 0

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

    @staticmethod
    def from_tree_sitter(node: TSNode):
        rv = Node(node.type, node.text or b"")
        for i, tschild in enumerate(node.children):
            child = Node.from_tree_sitter(tschild)
            child.parent = rv
            if i > 0:
                child.prev_sibling = rv.children[i - 1]
                rv.children[i - 1].next_sibling = child
            rv.children.append(child)
            rv.child_names.append(node.field_name_for_child(i) or "")
        return rv

    def child_by_field_name(self, name: str):
        for i, node_name in enumerate(self.child_names):
            if node_name == name:
                return self.children[i]
        return None

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
                return node
        raise TreeError("node not found")

    def append_child(self, node: Self, name: str = ""):
        node.parent = self
        if len(self.children) > 0:
            node.prev_sibling = self.children[-1]
            self.children[-1].next_sibling = node
        self.children.append(node)
        self.child_names.append(name)

    def insert_before(self, node: Self, reference_node: Self, name: str = ""):
        for i, child in enumerate(self.children):
            if child == reference_node:
                node.parent = self
                node.next_sibling = child
                child.prev_sibling = node
                if i > 0:
                    node.prev_sibling = self.children[i - 1]
                    self.children[i - 1].next_sibling = node
                self.children.insert(i, node)
                self.child_names.insert(i, name)
                return
        raise TreeError("reference node not found")
