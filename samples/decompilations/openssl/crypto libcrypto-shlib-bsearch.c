
long ossl_bsearch(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5,uint param_6
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 != 0) {
    if (param_3 < 1) {
      lVar4 = 0;
      iVar2 = 0;
LAB_00100098:
      if ((param_6 & 2) == 0) {
        return lVar4;
      }
      lVar4 = param_2 + (iVar2 + -1) * param_4;
      do {
        iVar3 = iVar2;
        if (iVar3 < 1) break;
        iVar1 = (*param_5)(param_1,lVar4);
        lVar4 = lVar4 + -param_4;
        iVar2 = iVar3 + -1;
      } while (iVar1 == 0);
      return param_2 + param_4 * iVar3;
    }
    iVar3 = 0;
    do {
      while( true ) {
        iVar2 = (iVar3 + param_3) / 2;
        lVar4 = param_4 * iVar2 + param_2;
        iVar1 = (*param_5)(param_1,lVar4);
        if (-1 < iVar1) break;
        param_3 = iVar2;
        if (iVar2 <= iVar3) goto LAB_00100081;
      }
      if (iVar1 == 0) goto LAB_00100098;
      iVar3 = iVar2 + 1;
    } while (iVar3 < param_3);
LAB_00100081:
    if ((param_6 & 1) != 0) {
      return lVar4;
    }
  }
  return 0;
}


