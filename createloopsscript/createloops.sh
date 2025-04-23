#!/bin/bash
#Geef als eerste paramater mee hoe lang je loops maximaal moeten zijn
#Geef als tweede parameter mee welke compilersetting je wil gebruiken. Bijvoorbeeld 1, 2 of 3
#Geef aan welke functie je wil analyseren

compilersetting=${2:-3}
size=${1:-10}
functionname=${3}
filename="createloops$size.c"
executionfilename="createloops$size-$compilersetting.out"
logoutputfilename="createloops$size-$compilersetting.txt"

if [ -z "${HIGHPEECODE_PATH}" ]; then
  echo "Please set "\$"HIGHPEECODE_PATH to the location of you highpeecode repo" >&2
  exit 1
fi
if [ -z "${UNROLLING_LOOPS_PATH}" ]; then
  echo "Please set "\$"UNROLLING_LOOPS_PATH to the location of you unrolling loops repo" >&2
  exit 1
fi

python3 createloops.py -s ${size}
gcc ${filename} -O$compilersetting -o $executionfilename
echo "createloops$size-$compilersetting.out has been created"
#echo "now going to analyze this file with functionname $functionname"
#set -x
#cd ${HIGHPEECODE_PATH} && ${UNROLLING_LOOPS_PATH}run_ghidra/run.sh ${UNROLLING_LOOPS_PATH}createloopsscript/${executionfilename} ${functionname} | tee ${UNROLLING_LOOPS_PATH}createloopsscript/${logoutputfilename}
#set +x
