
long full_read(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = safe_read(param_1,param_2,param_3);
      if (lVar1 < 0) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0;
        return lVar3;
      }
      param_3 = param_3 - lVar1;
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
    } while (0 < param_3);
  }
  return lVar3;
}


