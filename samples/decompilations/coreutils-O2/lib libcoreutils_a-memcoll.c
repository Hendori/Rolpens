
int strcoll_loop(char *param_1,long param_2,char *param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  
  piVar2 = __errno_location();
  while( true ) {
    *piVar2 = 0;
    iVar1 = strcoll(param_1,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    sVar3 = strlen(param_1);
    sVar4 = strlen(param_3);
    param_1 = param_1 + sVar3 + 1;
    param_3 = param_3 + sVar4 + 1;
    param_4 = param_4 - (sVar4 + 1);
    param_2 = param_2 - (sVar3 + 1);
    if (param_2 == 0) break;
    if (param_4 == 0) {
      return 1;
    }
  }
  return -(uint)(param_4 != 0);
}



undefined4 memcoll(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  if ((param_2 == param_4) && (iVar5 = memcmp(param_1,param_3,param_2), iVar5 == 0)) {
    piVar7 = __errno_location();
    *piVar7 = 0;
    return 0;
  }
  puVar1 = (undefined1 *)((long)param_1 + param_2);
  puVar2 = (undefined1 *)((long)param_3 + param_4);
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  *puVar1 = 0;
  *puVar2 = 0;
  uVar6 = strcoll_loop(param_1,param_2 + 1,param_3,param_4 + 1);
  *puVar1 = uVar3;
  *puVar2 = uVar4;
  return uVar6;
}



undefined8 memcoll0(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_2 == param_4) {
    iVar1 = memcmp(param_1,param_3,param_2);
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      return 0;
    }
  }
  uVar3 = strcoll_loop(param_1,param_2,param_3,param_4);
  return uVar3;
}


