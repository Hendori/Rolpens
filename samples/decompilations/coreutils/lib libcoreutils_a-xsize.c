
/* WARNING: Unknown calling convention */

size_t xsum(size_t size1,size_t size2)

{
  size_t sVar1;
  
  sVar1 = 0xffffffffffffffff;
  if (!CARRY8(size1,size2)) {
    sVar1 = size1 + size2;
  }
  return sVar1;
}



/* WARNING: Unknown calling convention */

size_t xsum3(size_t size1,size_t size2,size_t size3)

{
  size_t sVar1;
  ulong uVar2;
  
  uVar2 = size1 + size2;
  if (CARRY8(size1,size2)) {
    uVar2 = 0xffffffffffffffff;
  }
  sVar1 = 0xffffffffffffffff;
  if (!CARRY8(size3,uVar2)) {
    sVar1 = size3 + uVar2;
  }
  return sVar1;
}



/* WARNING: Unknown calling convention */

size_t xsum4(size_t size1,size_t size2,size_t size3,size_t size4)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = size1 + size2;
  if (CARRY8(size1,size2)) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar2 = size3 + uVar3;
  if (CARRY8(size3,uVar3)) {
    uVar2 = 0xffffffffffffffff;
  }
  sVar1 = 0xffffffffffffffff;
  if (!CARRY8(size4,uVar2)) {
    sVar1 = size4 + uVar2;
  }
  return sVar1;
}



/* WARNING: Unknown calling convention */

size_t xmax(size_t size1,size_t size2)

{
  if (size2 <= size1) {
    size2 = size1;
  }
  return size2;
}


