
void * concatenated_filename(byte *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  char *__dest;
  size_t sVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  uVar1 = *param_1 - 0x2e;
  if (uVar1 == 0) {
    uVar1 = (uint)param_1[1];
  }
  sVar2 = strlen(param_2);
  if (uVar1 == 0) {
    sVar2 = sVar2 + 1;
    if (param_3 == (char *)0x0) {
      pvVar4 = malloc(sVar2);
      if (pvVar4 != (void *)0x0) {
        __strcpy_chk(pvVar4,param_2,sVar2);
        return pvVar4;
      }
    }
    else {
      sVar3 = strlen(param_3);
      pvVar4 = malloc(sVar2 + sVar3);
      if (pvVar4 != (void *)0x0) {
        __dest = (char *)__stpcpy_chk(pvVar4,param_2,sVar2 + sVar3);
        goto LAB_00100075;
      }
    }
  }
  else {
    sVar3 = strlen((char *)param_1);
    if (sVar3 == 0) {
      bVar10 = false;
      uVar6 = 0;
    }
    else {
      bVar10 = param_1[sVar3 - 1] != 0x2f;
      uVar6 = (ulong)bVar10;
    }
    sVar5 = 0;
    if (param_3 != (char *)0x0) {
      sVar5 = strlen(param_3);
    }
    sVar5 = uVar6 + sVar2 + sVar3 + 1 + sVar5;
    pvVar4 = malloc(sVar5);
    if (pvVar4 != (void *)0x0) {
      __memcpy_chk(pvVar4,param_1,sVar3,sVar5);
      sVar2 = sVar3;
      if (sVar3 <= sVar5) {
        sVar2 = sVar5;
      }
      puVar7 = (undefined1 *)((long)pvVar4 + sVar3);
      uVar6 = sVar2 - sVar3;
      if (bVar10) {
        *puVar7 = 0x2f;
        if (sVar5 < uVar6) {
          sVar5 = uVar6;
        }
        uVar8 = (sVar3 + 1) - sVar2;
        uVar9 = uVar8 + sVar5;
        if (CARRY8(uVar8,sVar5)) {
          uVar9 = sVar5;
        }
        puVar7 = puVar7 + 1;
        uVar6 = ((uVar6 - 1) - sVar5) + uVar9;
      }
      __dest = (char *)__stpcpy_chk(puVar7,param_2,uVar6);
      if (param_3 == (char *)0x0) {
        return pvVar4;
      }
LAB_00100075:
      strcpy(__dest,param_3);
      return pvVar4;
    }
  }
  return (void *)0x0;
}


