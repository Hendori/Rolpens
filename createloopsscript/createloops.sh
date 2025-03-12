#!/bin/bash
#Geef als eerste paramater mee hoe lang je loops maximaal moeten zijn
#Geef als tweede parameter mee welke compilersetting je wil gebruiken. Bijvoorbeeld 1, 2 of 3
#Geef aan welke functie je wil analyseren

size=${1:-10}
functionname=${2}
filename="createloops$size.c"

if [ -z "${HIGHPEECODE_PATH}" ]; then
  echo "Please set "\$"HIGHPEECODE_PATH to the location of you highpeecode repo" >&2
  exit 1
fi
if [ -z "${UNROLLING_LOOPS_PATH}" ]; then
  echo "Please set "\$"UNROLLING_LOOPS_PATH to the location of you unrolling loops repo" >&2
  exit 1
fi

#Creating a c file
python3 createloops.py -s "${size}"
#compiling with different compilers and compiler settings and creating analysis file
#gcc
for compilersetting in $(seq 1 3); do
  logoutputfilename="createloops$size-$compilersetting.txt"
  executiongccfilename="createloops$size-$compilersetting-gcc.out"
  echo "filename is $filename"
  echo "compiling $executiongccfilename"
  cd ${UNROLLING_LOOPS_PATH}/createloopsscript
  gcc "${filename}" -O"$compilersetting" -o "$executiongccfilename"
  echo "analysing to $logoutputfilename"
  cd ${HIGHPEECODE_PATH} && ${UNROLLING_LOOPS_PATH}run_ghidra/run.sh ${UNROLLING_LOOPS_PATH}createloopsscript/${executiongccfilename} ${functionname} | tee ${UNROLLING_LOOPS_PATH}createloopsscript/${logoutputfilename}
done
