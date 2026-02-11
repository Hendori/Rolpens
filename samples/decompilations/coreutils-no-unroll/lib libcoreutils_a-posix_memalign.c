
int rpl_posix_memalign(void **param_1,size_t param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (param_2 - 1) + (ulong)(param_3 == 0);
  if (!CARRY8(uVar2,param_3)) {
    iVar1 = posix_memalign(param_1,param_2,-param_2 & uVar2 + param_3);
    return iVar1;
  }
  return 0xc;
}


