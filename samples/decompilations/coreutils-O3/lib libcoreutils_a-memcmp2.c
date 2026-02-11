
int memcmp2(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  ulong __n;
  
  __n = param_4;
  if (param_2 <= param_4) {
    __n = param_2;
  }
  iVar1 = memcmp(param_1,param_3,__n);
  if (iVar1 == 0) {
    iVar1 = (uint)(param_4 < param_2) - (uint)(param_2 < param_4);
  }
  return iVar1;
}


