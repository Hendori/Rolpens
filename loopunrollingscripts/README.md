Installatie
-----------
Installeer een versie van treesitter.
Op bijvoorbeeld Ubuntu, gebruik: `sudo apt-get install tree-sitter-cli`.

Bouw de grammar-plugin voor decompilatie-C met:

    make treesitter-decomp-c.so

In een virtualenv (`python -m venv venv` gevolgd door `. venv/bin/activate`), installeer de python-dependencies met:

    pip install -r requirements.txt

Uitvoeren
---------
Nog steeds in je virtualenv, gebruik:

    python tree-analyse-l-0.py

