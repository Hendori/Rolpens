
void endelt(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void startelt(undefined8 *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  size_t __n;
  undefined8 *puVar3;
  int iVar4;
  char *__s;
  undefined **ppuVar5;
  
  __n = 0x10;
  ppuVar5 = &PTR_s_NewRemoteHost_001005d8;
  __s = "PortMappingEntry";
  iVar4 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  while ((__n != (long)param_3 || (iVar2 = memcmp(param_2,__s,__n), iVar2 != 0))) {
    __s = *ppuVar5;
    ppuVar5 = ppuVar5 + 2;
    iVar4 = iVar4 + 1;
    if (__s == (char *)0x0) {
      return;
    }
    __n = strlen(__s);
  }
  iVar4 = (&elements)[(long)iVar4 * 4];
  *(int *)(param_1 + 1) = iVar4;
  if ((iVar4 == 1) && (puVar3 = (undefined8 *)calloc(1,0xe0), puVar3 != (undefined8 *)0x0)) {
    uVar1 = *param_1;
    *param_1 = puVar3;
    *puVar3 = uVar1;
  }
  return;
}



void data(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  short sVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = 0x3f;
    if (param_3 < 0x40) {
      uVar6 = (long)param_3;
    }
    iVar5 = (int)uVar6;
    iVar3 = (int)param_2;
    switch((int)param_1[1]) {
    case 2:
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*(char *)(lVar2 + 0x14) = *param_2, (uVar6 & 2) != 0)) {
            *(undefined2 *)(lVar2 + 0x12 + uVar6) = *(undefined2 *)(param_2 + (uVar6 - 2));
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)param_2;
          *(undefined4 *)(lVar2 + 0x10 + uVar6) = *(undefined4 *)(param_2 + (uVar6 - 4));
        }
      }
      else {
        uVar12 = lVar2 + 0x1cU & 0xfffffffffffffff8;
        *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)param_2;
        *(undefined8 *)(lVar2 + 0xc + uVar6) = *(undefined8 *)(param_2 + (uVar6 - 8));
        lVar7 = (lVar2 + 0x14) - uVar12;
        uVar8 = lVar7 + uVar6 & 0xfffffffffffffff8;
        if (7 < uVar8) {
          uVar11 = 0;
          do {
            *(undefined8 *)(uVar12 + uVar11) = *(undefined8 *)(param_2 + (uVar11 - lVar7));
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar8);
        }
      }
      *(undefined1 *)(lVar2 + 0x14 + uVar6) = 0;
      return;
    case 3:
      sVar10 = 0;
      sVar4 = 0;
      if (0 < param_3) {
        do {
          sVar10 = sVar4;
          cVar9 = *param_2;
          if (9 < (byte)(cVar9 - 0x30U)) break;
          param_2 = param_2 + 1;
          sVar10 = cVar9 + -0x30 + sVar10 * 10;
          sVar4 = sVar10;
        } while (0 < (iVar5 + iVar3) - (int)param_2);
      }
      *(short *)(lVar2 + 0x10) = sVar10;
      return;
    case 4:
      uVar8 = 3;
      if (iVar5 < 4) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        uVar6 = 0;
        do {
          *(char *)(lVar2 + 0xd4 + uVar6) = param_2[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      *(undefined1 *)(lVar2 + 0xd4 + uVar8) = 0;
      return;
    case 5:
      sVar10 = 0;
      sVar4 = 0;
      if (0 < param_3) {
        do {
          sVar10 = sVar4;
          cVar9 = *param_2;
          if (9 < (byte)(cVar9 - 0x30U)) break;
          param_2 = param_2 + 1;
          sVar10 = cVar9 + -0x30 + sVar10 * 10;
          sVar4 = sVar10;
        } while (0 < (iVar5 + iVar3) - (int)param_2);
      }
      *(short *)(lVar2 + 0x12) = sVar10;
      return;
    case 6:
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*(char *)(lVar2 + 0x54) = *param_2, (uVar6 & 2) != 0)) {
            *(undefined2 *)(lVar2 + 0x52 + uVar6) = *(undefined2 *)(param_2 + (uVar6 - 2));
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)param_2;
          *(undefined4 *)(lVar2 + 0x50 + uVar6) = *(undefined4 *)(param_2 + (uVar6 - 4));
        }
      }
      else {
        uVar12 = lVar2 + 0x5cU & 0xfffffffffffffff8;
        *(undefined8 *)(lVar2 + 0x54) = *(undefined8 *)param_2;
        *(undefined8 *)(lVar2 + 0x4c + uVar6) = *(undefined8 *)(param_2 + (uVar6 - 8));
        lVar7 = (lVar2 + 0x54) - uVar12;
        uVar8 = lVar7 + uVar6 & 0xfffffffffffffff8;
        if (7 < uVar8) {
          uVar11 = 0;
          do {
            *(undefined8 *)(uVar12 + uVar11) = *(undefined8 *)(param_2 + (uVar11 - lVar7));
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar8);
        }
      }
      *(undefined1 *)(lVar2 + 0x54 + uVar6) = 0;
      return;
    case 7:
      cVar9 = '\0';
      cVar1 = '\0';
      if (0 < param_3) {
        do {
          cVar9 = cVar1;
          cVar1 = *param_2;
          if (9 < (byte)(cVar1 - 0x30U)) break;
          param_2 = param_2 + 1;
          cVar9 = cVar1 + -0x30 + cVar9 * '\n';
          cVar1 = cVar9;
        } while (0 < (iVar5 + iVar3) - (int)param_2);
      }
      *(char *)(lVar2 + 0xd8) = cVar9;
      return;
    case 8:
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*(char *)(lVar2 + 0x94) = *param_2, (uVar6 & 2) != 0)) {
            *(undefined2 *)(lVar2 + 0x92 + uVar6) = *(undefined2 *)(param_2 + (uVar6 - 2));
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x94) = *(undefined4 *)param_2;
          *(undefined4 *)(lVar2 + 0x90 + uVar6) = *(undefined4 *)(param_2 + (uVar6 - 4));
        }
      }
      else {
        uVar12 = lVar2 + 0x9cU & 0xfffffffffffffff8;
        *(undefined8 *)(lVar2 + 0x94) = *(undefined8 *)param_2;
        *(undefined8 *)(lVar2 + 0x8c + uVar6) = *(undefined8 *)(param_2 + (uVar6 - 8));
        lVar7 = (lVar2 + 0x94) - uVar12;
        uVar8 = lVar7 + uVar6 & 0xfffffffffffffff8;
        if (7 < uVar8) {
          uVar11 = 0;
          do {
            *(undefined8 *)(uVar12 + uVar11) = *(undefined8 *)(param_2 + (uVar11 - lVar7));
            uVar11 = uVar11 + 8;
          } while (uVar11 < uVar8);
        }
      }
      *(undefined1 *)(lVar2 + 0x94 + uVar6) = 0;
      return;
    case 9:
      lVar7 = 0;
      if (0 < param_3) {
        do {
          cVar9 = *param_2;
          if (9 < (byte)(cVar9 - 0x30U)) break;
          param_2 = param_2 + 1;
          lVar7 = (long)(cVar9 + -0x30) + lVar7 * 10;
        } while (0 < (iVar5 + iVar3) - (int)param_2);
      }
      *(long *)(lVar2 + 8) = lVar7;
    }
  }
  return;
}



void ParsePortListing(undefined8 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  undefined4 local_40;
  undefined1 (*local_38) [16];
  code *local_30;
  undefined8 uStack_28;
  code *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = (undefined1  [16])0x0;
  local_20 = data;
  local_18 = 0;
  local_30 = startelt;
  uStack_28 = 0x100000;
  local_58[0] = param_1;
  local_40 = param_2;
  local_38 = param_3;
  parsexml(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FreePortListing(undefined8 *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*param_1;
  while (__ptr != (undefined8 *)0x0) {
    *param_1 = *__ptr;
    free(__ptr);
    __ptr = (undefined8 *)*param_1;
  }
  return;
}


