
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 buffer_or_output(char *param_1,long *param_2,ulong *param_3)

{
  void *__dest;
  size_t sVar1;
  
  __dest = (void *)*param_2;
  if (__dest == (void *)0x0) {
    fputs_unlocked(param_1,_stdout);
  }
  else {
    sVar1 = strlen(param_1);
    if (*param_3 <= sVar1) {
      return 1;
    }
    memcpy(__dest,param_1,sVar1 + 1);
    *param_2 = *param_2 + sVar1;
    *param_3 = *param_3 - sVar1;
  }
  return 0;
}



uint relpath(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  uVar3 = 0;
  if (((param_2[1] == '/') == (param_1[1] == '/')) && (cVar2 = *param_2, cVar2 != '\0')) {
    iVar11 = 0;
    iVar9 = 0;
    pcVar8 = param_1;
    pcVar10 = param_2;
    do {
      pcVar7 = pcVar8;
      cVar1 = *pcVar7;
      if ((cVar1 != cVar2) || (cVar1 == '\0')) {
        if ((cVar2 == '/') && (cVar1 == '\0')) {
          iVar11 = iVar9;
        }
        goto LAB_00100107;
      }
      iVar9 = iVar9 + 1;
      if (cVar2 == '/') {
        iVar11 = iVar9;
      }
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
      pcVar8 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if ((pcVar7[1] != '\0') && (pcVar7[1] != '/')) {
LAB_00100107:
      iVar9 = iVar11;
      if (iVar11 == 0) {
        return 0;
      }
    }
    param_2 = param_2 + iVar9;
    cVar2 = *param_2;
    if (cVar2 == '/') {
      cVar2 = param_2[1];
      param_2 = param_2 + 1;
    }
    pcVar8 = param_1 + iVar9 + (param_1[iVar9] == '/');
    local_48 = param_4;
    local_40[0] = param_3;
    if (cVar2 == '\0') {
      if (*pcVar8 == '\0') {
        pcVar8 = ".";
      }
      uVar3 = buffer_or_output(pcVar8,local_40,&local_48);
    }
    else {
      uVar3 = buffer_or_output(&_LC1,local_40,&local_48);
      cVar2 = *param_2;
      while (cVar2 != '\0') {
        while (cVar2 != '/') {
          cVar2 = param_2[1];
          param_2 = param_2 + 1;
          if (cVar2 == '\0') goto LAB_00100200;
        }
        param_2 = param_2 + 1;
        uVar4 = buffer_or_output(&_LC2,local_40,&local_48);
        uVar3 = uVar3 | uVar4;
        cVar2 = *param_2;
      }
LAB_00100200:
      if (*pcVar8 != '\0') {
        uVar4 = buffer_or_output(&_LC3,local_40,&local_48);
        uVar5 = buffer_or_output(pcVar8,local_40,&local_48);
        uVar3 = uVar3 | uVar4 | uVar5;
      }
    }
    if ((char)uVar3 != '\0') {
      uVar6 = dcgettext(0,"generating relative path",5);
      error(0,0x24,&_LC5,uVar6);
    }
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}


