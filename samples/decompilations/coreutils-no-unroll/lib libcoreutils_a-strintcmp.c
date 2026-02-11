
uint strintcmp(char *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  uVar7 = (uint)*param_1;
  cVar3 = *param_2;
  iVar10 = (int)cVar3;
  if (*param_1 == '-') {
    do {
      cVar5 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar5 == '0');
    iVar11 = (int)cVar5;
    if (cVar3 != '-') {
      if (iVar11 - 0x30U < 10) {
        return 0xffffffff;
      }
      while ((char)iVar10 == '0') {
        param_2 = param_2 + 1;
        iVar10 = (int)*param_2;
      }
      return -(uint)(iVar10 - 0x30U < 10);
    }
    do {
      cVar3 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar3 == '0');
    if (cVar5 == cVar3) {
      if (9 < iVar11 - 0x30U) {
        return 0;
      }
      do {
        cVar5 = param_1[1];
        cVar3 = param_2[1];
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if (cVar5 != cVar3) {
          iVar11 = (int)cVar5;
          goto LAB_001001bf;
        }
        iVar10 = (int)cVar5;
      } while (iVar10 - 0x30U < 10);
      uVar7 = 0;
    }
    else {
LAB_001001bf:
      iVar10 = (int)cVar3;
      uVar7 = iVar10 - iVar11;
      uVar8 = 0;
      if (iVar11 - 0x30U < 10) {
        do {
          lVar6 = uVar8 + 1;
          uVar8 = uVar8 + 1;
        } while ((int)param_1[lVar6] - 0x30U < 10);
        if (9 < iVar10 - 0x30U) {
          return -(uint)(uVar8 != 0);
        }
        goto LAB_0010014d;
      }
    }
    if (iVar10 - 0x30U < 10) {
      uVar8 = 0;
LAB_0010014d:
      uVar9 = 0;
      do {
        lVar6 = uVar9 + 1;
        uVar9 = uVar9 + 1;
      } while ((int)param_2[lVar6] - 0x30U < 10);
      if (uVar9 != uVar8) {
        return (-(uint)(uVar8 < uVar9) & 2) - 1;
      }
      if (uVar9 != 0) {
        return uVar7;
      }
      return 0;
    }
LAB_00100079:
    uVar7 = 0;
  }
  else {
    if (cVar3 == '-') {
      do {
        pcVar2 = param_2 + 1;
        param_2 = param_2 + 1;
      } while (*pcVar2 == '0');
      if ((int)*pcVar2 - 0x30U < 10) {
        return 1;
      }
      while ((char)uVar7 == '0') {
        param_1 = param_1 + 1;
        uVar7 = (uint)*param_1;
      }
      return (uint)(uVar7 - 0x30 < 10);
    }
    while ((char)uVar7 == '0') {
      param_1 = param_1 + 1;
      uVar7 = (uint)*param_1;
    }
    while ((char)iVar10 == '0') {
      param_2 = param_2 + 1;
      iVar10 = (int)*param_2;
    }
    if ((char)uVar7 == (char)iVar10) {
      if (9 < uVar7 - 0x30) {
        return 0;
      }
      do {
        pbVar1 = (byte *)(param_1 + 1);
        uVar7 = (uint)*pbVar1;
        bVar4 = param_2[1];
        iVar10 = (int)(char)bVar4;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if (*pbVar1 != bVar4) goto LAB_00100200;
        iVar11 = (int)(char)bVar4;
        uVar7 = iVar11 - 0x30;
      } while (uVar7 < 10);
LAB_0010006d:
      uVar8 = 0;
      if (9 < uVar7) goto LAB_00100079;
    }
    else {
LAB_00100200:
      iVar11 = (int)(char)uVar7;
      uVar8 = 0;
      uVar7 = (int)(char)iVar10 - 0x30;
      if (9 < iVar11 - 0x30U) goto LAB_0010006d;
      do {
        lVar6 = uVar8 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)param_1[lVar6] - 0x30U < 10);
      if (9 < uVar7) {
        return (uint)(uVar8 != 0);
      }
    }
    uVar9 = 0;
    do {
      lVar6 = uVar9 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)param_2[lVar6] - 0x30U < 10);
    if (uVar9 == uVar8) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = iVar11 - iVar10;
      }
    }
    else {
      uVar7 = -(uint)(uVar8 < uVar9) | 1;
    }
  }
  return uVar7;
}


