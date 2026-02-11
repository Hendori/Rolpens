
int memcoll(char *param_1,size_t param_2,char *param_3,size_t param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  
  piVar6 = __errno_location();
  if (param_2 == param_4) {
    iVar5 = memcmp(param_1,param_3,param_2);
    if (iVar5 == 0) {
      *piVar6 = 0;
      return iVar5;
    }
  }
  pcVar2 = param_1 + param_2;
  pcVar1 = param_3 + param_4;
  lVar9 = param_2 + 1;
  lVar10 = param_4 + 1;
  cVar3 = *pcVar2;
  cVar4 = *pcVar1;
  *pcVar2 = '\0';
  *pcVar1 = '\0';
  do {
    *piVar6 = 0;
    iVar5 = strcoll(param_1,param_3);
    if (iVar5 != 0) goto LAB_001000b9;
    sVar7 = strlen(param_1);
    sVar8 = strlen(param_3);
    param_1 = param_1 + sVar7 + 1;
    param_3 = param_3 + sVar8 + 1;
    lVar10 = lVar10 - (sVar8 + 1);
    lVar9 = lVar9 - (sVar7 + 1);
    if (lVar9 == 0) {
      iVar5 = -(uint)(lVar10 != 0);
      goto LAB_001000b9;
    }
  } while (lVar10 != 0);
  iVar5 = 1;
LAB_001000b9:
  *pcVar2 = cVar3;
  *pcVar1 = cVar4;
  return iVar5;
}



int memcoll0(char *param_1,size_t param_2,char *param_3,size_t param_4)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  
  piVar2 = __errno_location();
  if ((param_2 == param_4) && (iVar1 = memcmp(param_1,param_3,param_2), iVar1 == 0)) {
    *piVar2 = 0;
    iVar1 = 0;
  }
  else {
    while( true ) {
      *piVar2 = 0;
      iVar1 = strcoll(param_1,param_3);
      if (iVar1 != 0) break;
      sVar3 = strlen(param_1);
      sVar4 = strlen(param_3);
      param_1 = param_1 + sVar3 + 1;
      param_3 = param_3 + sVar4 + 1;
      param_4 = param_4 - (sVar4 + 1);
      param_2 = param_2 - (sVar3 + 1);
      if (param_2 == 0) {
        return -(uint)(param_4 != 0);
      }
      if (param_4 == 0) {
        return 1;
      }
    }
  }
  return iVar1;
}


