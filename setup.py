from contextlib import suppress
from pathlib import Path
from setuptools import Command, setup
from setuptools.command.build import build
import os, subprocess

import requests

class CustomCommand(Command):
    def initialize_options(self) -> None:
        pass

    def finalize_options(self) -> None:
        pass

    def run(self) -> None:

        SO_PATH = "treesitter-cpp.so"

        VERSION = "0.22.3"
        TAR_FILE = f"tree-sitter-cpp-{VERSION}.tar.gz"
        DIR_NAME = f"tree-sitter-cpp-{VERSION}"
        SRC_URL = f"https://github.com/tree-sitter/tree-sitter-cpp/archive/refs/tags/v{VERSION}.tar.gz"

        def exists(filepath):
            try:
                return os.stat(filepath).st_size > 0
            except FileNotFoundError: return False

        current_dir = os.getcwd()
        os.chdir("src/rolpens")

        if not exists(TAR_FILE):
            with open(TAR_FILE, "wb+") as f:
                f.write(requests.get(SRC_URL).content)

        if not exists(SO_PATH):
            subprocess.call(["rm","-rf",DIR_NAME])
            subprocess.call(["tar","-xf",TAR_FILE])
            os.chdir(DIR_NAME)
            subprocess.call(["npm", "install"])
            subprocess.call(["tree-sitter", "generate", "--abi", "14"])
            subprocess.call(["gcc", "-I", "src", "-c", "src/parser.c", "-o", "src/parser.a"])
            subprocess.call(["gcc", "-I", "src", "-c", "src/scanner.c", "-o", "src/scanner.a"])
            subprocess.call(["gcc", "-shared", "src/parser.a", "src/scanner.a", "-o", "../"+SO_PATH])

        os.chdir(current_dir)

class CustomBuild(build):
    sub_commands = [('build_custom', None)] + build.sub_commands

setup(cmdclass={'build': CustomBuild, 'build_custom': CustomCommand})

