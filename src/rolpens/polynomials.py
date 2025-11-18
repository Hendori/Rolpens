from fractions import Fraction
import typing

from rolpens.parsetree import Node

class Polynomial:
    def __init__(self, coefficients: typing.List[typing.Union[int,Fraction]]):
        self.coefficients = [Fraction(numerator=x, denominator=1) if isinstance(x, int) else x for x in coefficients]

    @staticmethod
    def from_lagrange(points: typing.List[typing.Tuple[int,Fraction]]) -> typing.Self:
        rv = Polynomial([0])
        for i, (x0,y0) in enumerate(points):
            term = Polynomial([1])
            den = y0.denominator
            for j, (x,_) in enumerate(points):
                if i != j:
                    den *= x0 - x
                    term *= Polynomial([-x, 1])
            if den == 0:
                raise ValueError("X coordinates should be distinct")
            rv += term * Polynomial([Fraction(y0.numerator, den)])

        return rv

    def is_integer(self) -> bool:
        """is_integer returns true if all coefficients are integers"""
        for a in self.coefficients:
            if not a.is_integer():
                return False
        return True

    def as_node(self, variable_name: str) -> Node:
        if not self.is_integer():
            raise ValueError("cannot write polynomial with non-integer coefficients as a C expression")

        if len(self) == 0:
            return Node("number_literal", str(self.coefficients[0]).encode())

        node = None

        x = None
        for i,a in enumerate(self.coefficients):
            n, _ = a.as_integer_ratio()
            if n != 0:
                if x is None:
                    node = Node("number_literal", str(a).encode())
                else:
                    if n == 1 or (n == -1 and i == 1):
                        ax = x.clone()
                    else:
                        ax = Node("binary_expression")
                        ax.append_child(Node("number_literal", str(a).encode()), "left")
                        ax.append_child(Node("*", b"*"), "operator")
                        ax.append_child(x.clone(), "right")
                        ax.tight = True

                    if node is None:
                        node = ax
                    elif n == -1 and i == 1:
                        bx = Node("binary_expression")
                        bx.append_child(node, "left")
                        bx.append_child(Node("-", b"-"), "operator")
                        bx.append_child(ax, "right")
                        node = bx
                    else:
                        bx = Node("binary_expression")
                        bx.append_child(ax, "left")
                        bx.append_child(Node("+", b"+"), "operator")
                        bx.append_child(node, "right")
                        node = bx

            if x is None:
                x = Node("identifier", variable_name.encode())
            else:
                xx = Node("binary_expression")
                xx.append_child(Node("identifier", variable_name.encode()), "left")
                xx.append_child(Node("*", b"*"), "operator")
                xx.append_child(x, "right")
                xx.tight = True
                x = xx

        if node is not None and node.type == "identifier":
            return node

        rv = Node("parenthesized_expression")
        rv.append_child(Node("(", b"("))
        rv.append_child(node)
        rv.append_child(Node(")", b")"))
        return rv

    def __add__(self, other: typing.Self) -> typing.Self:
        left = list(self.coefficients)
        right = list(other.coefficients)
        if len(left) > len(right):
            right += [Fraction(0)] * (len(left) - len(right))
        if len(right) > len(left):
            left += [Fraction(0)] * (len(right) - len(left))

        return Polynomial([a+b for (a,b) in zip(left, right)])

    def __mul__(self, other: typing.Self) -> typing.Self:
        left = list(self.coefficients)
        rv = [0]*(len(left) + len(other.coefficients) - 1)
        for a in other.coefficients:
            if a.numerator != 0:
                for i, b in enumerate(left):
                    rv[i] += a*b
            left = [0] + left

        return Polynomial(rv)

    def __len__(self):
        """len(P) should just return the degree of P"""
        for i, a in enumerate(reversed(self.coefficients)):
            if a.numerator != 0:
                return len(self.coefficients) - i - 1
        return 0

    def __repr__(self) -> str:
        return str(self)

    def __str__(self) -> str:
        comps = []
        for (i, a) in reversed(list(enumerate(self.coefficients))):
            if a.numerator == 0:
                continue
            if i == 0:
                comps.append(str(a))
            else:
                if a.numerator == a.denominator:
                    if i == 1:
                        comps.append("x")
                    else:
                        comps.append(f"x^{i}")
                else:
                    if i == 1:
                        comps.append(f"{a}·x")
                    else:
                        comps.append(f"{a}·x^{i}")

        if len(comps) == 0:
            return "0"
        return " + ".join(comps)

if __name__ == "__main__":
    print(Polynomial([2, -6, 0, Fraction(1,2), Fraction(5,5)]))
    p = Polynomial([5, 2])
    q = Polynomial([1, 2])
    print(f"P = {p}, Q = {q}, PQ = {p * q}")
    ys = [5, -55, -93, -109, -103, -75, -25, 47, 141, 257, 395]
    xs = list(range(3, 3+len(ys)))
    data_points = list(zip(xs, ys))

    print(f"Interpolating: {data_points}")
    poly = Polynomial.from_lagrange(data_points)
    print(f"Result: {poly}, confidence {len(ys) - len(poly)}")
