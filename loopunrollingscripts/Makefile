treesitter-decomp-c.so: treesitter-decomp-c/grammar.js
	cd treesitter-decomp-c && tree-sitter generate --abi 14
	cd treesitter-decomp-c && gcc -I src -shared src/parser.c -o ../treesitter-decomp-c.so
