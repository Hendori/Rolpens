
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 relpath(char *param_1,char *param_2,undefined4 *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *__dest;
  int iVar8;
  char *pcVar9;
  int iVar10;
  
  if ((param_2[1] == '/') != (param_1[1] == '/')) {
    return 0;
  }
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return 0;
  }
  iVar10 = 0;
  iVar8 = 0;
  pcVar7 = param_1;
  pcVar9 = param_2;
  do {
    pcVar6 = pcVar7;
    cVar1 = *pcVar6;
    if ((cVar1 != cVar3) || (cVar1 == '\0')) {
      if ((cVar3 == '/') && (cVar1 == '\0')) {
        iVar10 = iVar8;
      }
      goto LAB_0010008d;
    }
    iVar8 = iVar8 + 1;
    if (cVar3 == '/') {
      iVar10 = iVar8;
    }
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
    pcVar7 = pcVar6 + 1;
  } while (cVar3 != '\0');
  if ((pcVar6[1] != '/') && (pcVar6[1] != '\0')) {
LAB_0010008d:
    iVar8 = iVar10;
    if (iVar10 == 0) {
      return 0;
    }
  }
  param_2 = param_2 + iVar8;
  cVar3 = *param_2;
  if (cVar3 == '/') {
    cVar3 = param_2[1];
    param_2 = param_2 + 1;
  }
  pcVar7 = param_1 + iVar8 + (param_1[iVar8] == '/');
  if (cVar3 == '\0') {
    if (*pcVar7 == '\0') {
      pcVar7 = ".";
    }
    if (param_3 == (undefined4 *)0x0) {
      fputs_unlocked(pcVar7,_stdout);
      return 1;
    }
    sVar4 = strlen(pcVar7);
    if (sVar4 < param_4) {
      memcpy(param_3,pcVar7,sVar4 + 1);
      return 1;
    }
    goto LAB_001000e9;
  }
  if (param_3 == (undefined4 *)0x0) {
    fwrite_unlocked(&_LC1,1,2,_stdout);
    cVar3 = *param_2;
LAB_0010016f:
    if (cVar3 != '\0') {
      bVar2 = false;
      goto LAB_0010018d;
    }
    if (*pcVar7 == '\0') {
      return 1;
    }
    bVar2 = false;
LAB_00100220:
    if (param_3 == (undefined4 *)0x0) {
      fputc_unlocked(0x2f,_stdout);
      fputs_unlocked(pcVar7,_stdout);
    }
    else {
      if (param_4 < 2) {
        bVar2 = true;
        __dest = param_3;
      }
      else {
        __dest = (undefined4 *)((long)param_3 + 1);
        param_4 = param_4 - 1;
        *(undefined2 *)param_3 = 0x2f;
      }
      sVar4 = strlen(pcVar7);
      if (param_4 <= sVar4) goto LAB_001000e9;
      memcpy(__dest,pcVar7,sVar4 + 1);
    }
  }
  else {
    bVar2 = true;
    if (2 < param_4) {
      *(undefined1 *)((long)param_3 + 2) = 0;
      param_4 = param_4 - 2;
      *(undefined2 *)param_3 = 0x2e2e;
      cVar3 = *param_2;
      param_3 = (undefined4 *)((long)param_3 + 2);
      goto LAB_0010016f;
    }
LAB_0010018d:
    do {
      if (cVar3 == '/') {
        if (param_3 == (undefined4 *)0x0) {
          fwrite_unlocked(&_LC2,1,3,_stdout);
        }
        else {
          if (3 < param_4) {
            param_2 = param_2 + 1;
            *param_3 = 0x2e2e2f;
            param_4 = param_4 - 3;
            param_3 = (undefined4 *)((long)param_3 + 3);
            cVar3 = *param_2;
            if (cVar3 == '\0') break;
            goto LAB_0010018d;
          }
          bVar2 = true;
        }
      }
      cVar3 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar3 != '\0');
    if (*pcVar7 != '\0') goto LAB_00100220;
  }
  if (!bVar2) {
    return 1;
  }
LAB_001000e9:
  uVar5 = dcgettext(0,"generating relative path",5);
  error(0,0x24,&_LC4,uVar5);
  return 0;
}


