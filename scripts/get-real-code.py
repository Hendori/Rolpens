#!/usr/bin/python
import os
import multiprocessing
import random
import subprocess
import time

import requests
import tqdm

def download_as(project_dir, filename, url):
    file_stat = None
    dir_stat = None
    try:
        file_stat = os.stat(filename)
    except FileNotFoundError:
        print(f"Downloading '{url}'... ", end="", flush=True)
        r = requests.get(url)
        r.raise_for_status()
        with open(filename, "wb+") as f:
            f.write(r.content)
        file_stat = os.stat(filename)
        print("done.")

    try:
        dir_stat = os.stat(project_dir)
        if dir_stat.st_mtime < file_stat.st_mtime:
            subprocess.call(["rm", "-rf", project_dir])
            dir_stat = None
    except FileNotFoundError:
        pass
    if dir_stat is None:
        os.makedirs(project_dir)
        subprocess.call(["tar", "-C", project_dir, "-xf", filename])

os.chdir(os.path.dirname(__file__) + "/../samples")
try:
    os.mkdir(".cache")
except FileExistsError:
    pass
os.chdir(".cache")

project_versions = {
    "coreutils": "coreutils-9.7",
    "godot": "godot-4.4.1-stable",
    "openssl": "openssl-3.5.0"
}

download_as("coreutils", "coreutils-9.7.tar.gz", "https://ftp.gnu.org/gnu/coreutils/coreutils-9.7.tar.gz")
download_as("godot", "godot-4.4.1-stable.tar.gz", "https://github.com/godotengine/godot/archive/refs/tags/4.4.1-stable.tar.gz")
download_as("openssl", "openssl-3.5.0.tar.gz", "https://github.com/openssl/openssl/releases/download/openssl-3.5.0/openssl-3.5.0.tar.gz")

flagsets = {
    "O3": "-Wall -O3",
    "O2": "-Wall -O2",
    "no-unroll": "-Wall -O3 -fno-unroll-loops"
}

for (name, flags) in flagsets.items():
    pv = project_versions["openssl"]
    subprocess.check_call(["rm", "-rf", f"openssl/{pv}-{name}"])
    subprocess.check_call(["cp", "-r", f"openssl/{pv}", f"openssl/{pv}-{name}"])
    os.chdir(f"openssl/{pv}-{name}")
    if not os.path.exists("Makefile.in"):
        subprocess.check_call(["./Configure"], env={"CC": "/usr/bin/gcc", "CFLAGS": flags, "CXXFLAGS": flags})
    subprocess.check_call(["make", "-j", "6"])
    os.chdir("../..")

    pv = project_versions["coreutils"]
    subprocess.check_call(["rm", "-rf", f"coreutils/{pv}-{name}"])
    subprocess.check_call(["cp", "-r", f"coreutils/{pv}", f"coreutils/{pv}-{name}"])
    os.chdir(f"coreutils/{pv}-{name}")
    if not os.path.exists("Makefile"):
        with open("configure.log","w+") as f:
            subprocess.check_call(["./configure", f"CFLAGS={flags}", f"CPPFLAGS={flags}"], stdout=f)
    subprocess.check_call(["make", "-j", "6"])
    os.chdir("../..")

    pv = project_versions["godot"]
    subprocess.check_call(["rm", "-rf", f"godot/{pv}-{name}"])
    subprocess.check_call(["cp", "-r", f"godot/{pv}", f"godot/{pv}-{name}"])
    os.chdir(f"godot/{pv}-{name}")
    with open("scons.log","w+") as f:
        retries = 0
        while True:
            retries += 1
            try:
                subprocess.call(["scons", f"cflags={flags}", f"ccflags={flags}", f"cppflags={flags}"], stdout=f, stderr=f)
            except Exception as e:
                if retries > 20:
                    raise e
            if os.path.exists("bin/godot.linuxbsd.editor.x86_64"):
                break
            elif retries > 20:
                raise Exception("nothing seems to happen")
    os.chdir("../..")

os.chdir("..")
workload = []
for name in flagsets.keys():
    for project, pv in project_versions.items():
        try:
            os.mkdir(f"decompilations/{project}-{name}")
        except FileExistsError:
            pass

        findcmd = ["find", f".cache/{project}/{pv}-{name}", "-type", "f", "-name", "*.o"]
        objfiles = subprocess.run(findcmd, capture_output=True, encoding="utf-8", check=True).stdout.strip().split("\n")

        for objfile in objfiles:
            outfile = f"decompilations/{project}-{name}/" + " ".join(objfile.split("/")[3:])[:-2] + ".c"
            workload.append((objfile, outfile))

random.shuffle(workload)


def decompile(wu):
    objfile, outfile = wu
    if os.path.exists(outfile):
        return
    try:
        subprocess.call(["python", "../scripts/decomp-headless.py", objfile, "-o", outfile], timeout=60)
    except subprocess.TimeoutExpired:
        time.sleep(5)
        with open(outfile, "a+") as f:
            f.write("// This is taking way too long.")

t = tqdm.tqdm(total=len(workload))

with multiprocessing.Pool() as p:
    for _ in p.imap_unordered(decompile, workload):
        t.update(1)

t.close()
