#!/bin/bash
#Geef als eerste paramater mee hoe lang je loops maximaal moeten zijn
#Geef als tweede parameter mee welke compilersetting je wil gebruiken. Bijvoorbeeld 1, 2 of 3

compilersetting=${2:-3}
size=${1:-100}
filename="createloops$size.c"

python3 createloops.py -s ${size}
gcc ${filename} -O3 -o createloops$size-$compilersetting.out
echo "createloops$size-$compilersetting.out has been created"
objdump -d createloops$size-$compilersetting.out >createloops$size-$compilersetting.txt
echo "createloops$size-$compilersetting.txt gedumpt voor verdere analyze"
