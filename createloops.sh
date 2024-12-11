#!/bin/bash
createForLoop() {
  echo """
void loopWithSize$1() {
  int i;
  for (i=0; i<$1; i++) {
    $2
  }
}
  """
}

code="printf(\"inline%d\",i);"
start="#include <stdio.h>"
start_main="int main() {"
end_main="return 1;"
filename="createloops.c"
rm -f ${filename}
touch ${filename}
#first start the file by adding include
echo ${start} >>${filename}
#create all the loops with specific code
for i in $(seq 1 100); do
  createForLoop $i ${code} >>${filename}
done

#create the main method with all the loops in them
echo ${start_main} >>${filename}
for i in $(seq 1 100); do
  echo "  loopWithSize$i();" >>${filename}
done
echo ${end_main} >>${filename}
echo "}" >>${filename}

gcc ${filename} -O3 -o createloops.out
echo "createloops.out has been created"
