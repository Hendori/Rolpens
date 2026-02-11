
long u32_strcat(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = u32_strlen();
  piVar1 = (int *)(param_1 + lVar3 * 4);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    lVar3 = 4;
    do {
      iVar2 = *(int *)((long)param_2 + lVar3);
      *(int *)((long)piVar1 + lVar3) = iVar2;
      lVar3 = lVar3 + 4;
    } while (iVar2 != 0);
  }
  return param_1;
}


