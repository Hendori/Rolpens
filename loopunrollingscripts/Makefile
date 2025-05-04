treesitter-decomp-c.so: treesitter-decomp-c/grammar.js
	cd treesitter-decomp-c && tree-sitter generate --abi 14
	cd treesitter-decomp-c && gcc -I src -shared src/parser.c -o ../treesitter-decomp-c.so


tree-sitter-cpp-0.22.3.tar.gz:
	wget -O tree-sitter-cpp-0.22.3.tar.gz https://github.com/tree-sitter/tree-sitter-cpp/archive/refs/tags/v0.22.3.tar.gz

treesitter-cpp.so: tree-sitter-cpp-0.22.3.tar.gz
	tar -xf tree-sitter-cpp-0.22.3.tar.gz
	cd tree-sitter-cpp-0.22.3 && tree-sitter generate --abi 14
	cd tree-sitter-cpp-0.22.3 && gcc -I src -c src/parser.c -o src/parser.a
	cd tree-sitter-cpp-0.22.3 && gcc -I src -c src/scanner.c -o src/scanner.a
	cd tree-sitter-cpp-0.22.3 && gcc -shared src/parser.a src/scanner.a -o ../treesitter-cpp.so

