#!/bin/bash
#Geef als eerste paramater mee hoe lang je loops maximaal moeten zijn
#Geef als tweede parameter mee welke compilersetting je wil gebruiken. Bijvoorbeeld 1, 2 of 3

createForLoop() {
  echo "
void loopWithSize$1() {
  int i;
  for (i=0; i<$1; i++) {
    $2
  }
  printf("\"\\\\n\"");
}
  "
}
compilersetting=$2
size=$1
code="printf(\"inline%d\",i);"
start="#include <stdio.h>"
start_main="int main() {"
end_main="return 1;"
filename="createloops-$size-$compilersetting.c"

rm -f ${filename}
touch ${filename}
#first start the file by adding include
echo ${start} >>${filename}
#create all the loops with specific code
for i in $(seq 1 $size); do
  createForLoop $i ${code} >>${filename}
done

#create the main method with all the loops in them
echo ${start_main} >>${filename}
for i in $(seq 1 $size); do
  echo "  loopWithSize$i();" >>${filename}
done
echo ${end_main} >>${filename}
echo "}" >>${filename}

gcc ${filename} -O3 -o createloops$size-$compilersetting.out
echo "createloops$size-$compilersetting.out has been created"
objdump -d createloops$size-$compilersetting.out >createloops$size-$compilersetting.txt
echo "createloops$size-$compilersetting.txt gedumpt voor verdere analyze"
