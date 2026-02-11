
long xsum(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = -1;
  if (!CARRY8(param_1,param_2)) {
    lVar1 = param_1 + param_2;
  }
  return lVar1;
}



long xsum3(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    uVar2 = 0xffffffffffffffff;
  }
  lVar1 = -1;
  if (!CARRY8(param_3,uVar2)) {
    lVar1 = param_3 + uVar2;
  }
  return lVar1;
}



long xsum4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar2 = param_3 + uVar3;
  if (CARRY8(param_3,uVar3)) {
    uVar2 = 0xffffffffffffffff;
  }
  lVar1 = -1;
  if (!CARRY8(param_4,uVar2)) {
    lVar1 = param_4 + uVar2;
  }
  return lVar1;
}



ulong xmax(ulong param_1,ulong param_2)

{
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  return param_2;
}


