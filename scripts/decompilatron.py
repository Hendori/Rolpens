#!/usr/bin/python3

import argparse
import json
import os
import time

import tqdm
import requests
import urllib3


parser = argparse.ArgumentParser(
        prog="decompilatron.py",
        description="Decompileer binaries met een boel decompilers")
parser.add_argument("files", nargs="+")
parser.add_argument("--dce_url", default="https://dce.localhost/", type=str, nargs="?", help="URL van privé-instance Decompiler Explorer (standaard: %(default)s)")
parser.add_argument("--insecure", default=False, action="store_true", help="Sla certificaatverificatie over")
args = parser.parse_args()

args.dce_url = args.dce_url.rstrip("/")

if args.insecure:
    urllib3.disable_warnings()

resp = requests.get(args.dce_url + "/api/decompilers/", verify=(not args.insecure))
decompilers = json.loads(resp.text)["results"]

print("Available decompilers:")
for decomp in decompilers:
    print(f"   * {decomp['name']} version {decomp['version']}")
print("")


t = tqdm.tqdm(total=(len(decompilers)+2) * len(args.files))

for file_name in args.files:
    binary_id = None
    base_name = os.path.basename(file_name)
    
    with open(file_name, "rb") as f:
        files = {"file": (base_name, f, "application/octet-stream")}
        upload_resp = requests.post(args.dce_url + "/api/binaries/", verify=(not args.insecure), files=files)
        if upload_resp.status_code not in [200, 201]:
            print(upload_resp, upload_resp.text)
            t.update(len(decompilers)+2)
            continue
        upload_resp = json.loads(upload_resp.text)
        binary_id = upload_resp["id"]
        t.update(1)

    last_count = 0
    decomp_resp = {"count": 0, "results": []}
    time.sleep(0.5)
    while decomp_resp["count"] < len(decompilers):
        time.sleep(0.35)
        decomp_resp = requests.get(args.dce_url + f"/api/binaries/{binary_id}/decompilations/", verify=(not args.insecure))
        decomp_resp = json.loads(decomp_resp.text)
        t.update(decomp_resp["count"] - last_count)
        last_count = decomp_resp["count"]

    for decomp in decomp_resp["results"]:
        if 'url' in decomp and decomp['url'].startswith(args.dce_url + f"/api/binaries/{binary_id}/"):
            download = requests.get(decomp['url'].rstrip("/") + "/download/", verify=(not args.insecure))
            if download.status_code == 200:
                with open(f"decompilations/{base_name}.{decomp['decompiler']['name']}_{decomp['decompiler']['version']}.c", "wb+") as f:
                    f.write(download.content)
            else:
                with open(f"decompilations/{base_name}.{decomp['decompiler']['name']}_{decomp['decompiler']['version']}.txt", "w+") as f:
                    if len(decomp["error"]) > 0:
                        f.write(decomp["error"])
                    else:
                        f.write(f"{str(download)}\n\n{download.text}")

    t.update(1)

t.close()

