#!/usr/bin/python3

import argparse
import os
import shlex
import subprocess
import typing

import tqdm

class Option:
    def __init__(self, label, *args:str):
        self._label = label
        self._args = args
    def __str__(self):
        return self._label
    def __radd__(self, x):
        if isinstance(x, str):
            return x + str(self)
        elif isinstance(x, list):
            return x + list(self._args)
        else:
            return NotImplemented

class Compiler:
    def __init__(self, suffix:str, extension:str) -> None:
        self._suffix = suffix
        self._extension = extension
    def compile_single(self, source:str, options:Option, target:str):
        pass
    def suffix(self) -> str:
        return self._suffix
    def extension(self) -> str:
        return self._extension
    def options(self) -> typing.List[Option]:
        return []

class GCCLike(Compiler):
    def __init__(self, suffix, extension) -> None:
        super().__init__(suffix, extension)
        self._script = "/usr/bin/gcc"

    def options(self) -> typing.List[Option]:
        return [
            Option("O1", "-O1"),
            Option("O3", "-O3"),
            Option("funroll-all", "-O1", "-funroll-all-loops"),
        ]

    def compile_single(self, source:str, options:Option, target:str):
        subprocess.run([self._script, source] + options + ["-o", target])

class GCChost(GCCLike):
    pass

class GCC_arm_linux(GCCLike):
    def __init__(self, suffix, extension) -> None:
        super().__init__(suffix, extension)
        self._script = "/usr/bin/arm-linux-gnueabi-gcc"

class GCC_arm64_linux(GCCLike):
    def __init__(self, suffix, extension) -> None:
        super().__init__(suffix, extension)
        self._script = "/usr/bin/aarch64-linux-gnu-gcc"

class Dockcross(GCCLike):
    def __init__(self, suffix, extension, image) -> None:
        super().__init__(suffix, extension)
        self._script = ".cache/" + suffix
        try:
            os.stat(self._script)
        except FileNotFoundError:
            os.makedirs(".cache", exist_ok=True)
            with open(self._script, "w+") as g:
                subprocess.run(["docker", "run", "--rm", image], stdout=g)
                if os.stat(self._script).st_size == 0:
                    os.unlink(self._script)
                else:
                    os.chmod(self._script, 0o755)

    def compile_single(self, source:str, options:Option, target:str):
        subprocess.run([self._script, "bash", "-c", "$CC " + shlex.join([source] + options + ["-o", target])])

class GCCDarwin(GCCLike):
    def __init__(self, arch) -> None:
        self._arch = arch
        super().__init__(f"gcc-{arch}-apple", "elf")

    def compile_single(self, source:str, options:Option, target:str):
        subprocess.run(["docker", "run", "--platform=linux/amd64", "--rm",
                       "-v", os.getcwd() + ":/workspace",
                       "ghcr.io/shepherdjerred/macos-cross-compiler:latest",
                       f"{self._arch}-apple-darwin24-gcc", source] + options + ["-o", target]) 

class Clang(Compiler):
    def __init__(self, suffix, extension, architecture = None) -> None:
        super().__init__(suffix, extension)
        self._architecture = architecture

    def options(self) -> typing.List[Option]:
        return [
            Option("defaults"),
            Option("O3", "-funroll-loops", "-O3"),
        ]

    def compile_single(self, source:str, options:Option, target:str):
        dest_arch = []
        if self._architecture is not None:
            dest_arch = f"--target={self._architecture}"
        subprocess.run(["/usr/bin/clang", source] + dest_arch + options + ["-o", target])

compilers = [
    #Dockcross("gcc-x86-linux", "elf", "dockcross/linux-x86"),
    #Dockcross("gcc-x86_64-linux", "elf", "dockcross/linux-x64"),
    #Dockcross("gcc-armv7-linux", "elf", "dockcross/linux-armv7"),
    #Dockcross("gcc-x86_64-windows", "exe", "dockcross/windows-shared-x64"),
    #GCCDarwin("aarch64"),
    #GCCDarwin("x86_64"),
    GCChost("gcc-x86_64-linux", "elf"),
    #GCC_arm_linux("gcc-armv7-linux", "elf"),
    GCC_arm64_linux("gcc-aarch64-linux", "elf"),
    Clang("clang-x86_64-linux", "elf"),
]

parser = argparse.ArgumentParser(
        prog="compilatron.py",
        description="Compileer broncode naar een boel platformen")
parser.add_argument("files", nargs="+")
args = parser.parse_args()

t = 0
for filename in args.files:
    for compiler in compilers:
        for option in compiler.options():
            t += 1
t = tqdm.tqdm(total=t)

for filename in args.files:
    base_file = os.path.basename(filename)
    if base_file[-2:] == ".c":
        base_file = base_file[:-2]

    for compiler in compilers:
        for option in compiler.options():
            target_filename = "build/" + base_file + "_" + compiler.suffix() + "_" + option + "." + compiler.extension()
            compiler.compile_single(filename, option, target_filename)

            t.update(1)
t.close()

