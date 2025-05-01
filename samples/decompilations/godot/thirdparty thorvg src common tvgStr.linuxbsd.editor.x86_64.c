
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::strToFloat(char const*, char**) */

float tvg::strToFloat(char *param_1,char **param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_40;
  
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  pbVar10 = (byte *)param_1;
  if (param_1 == (char *)0x0) {
    return 0.0;
  }
  while( true ) {
    bVar8 = *pbVar10;
    iVar9 = (int)(char)bVar8;
    iVar2 = isspace(iVar9);
    if (iVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
  }
  if (bVar8 == 0x2d) {
    iVar9 = (int)(char)pbVar10[1];
    local_40 = -1;
    pbVar10 = pbVar10 + 1;
  }
  else {
    local_40 = 1;
    if (bVar8 == 0x2b) {
      iVar9 = (int)(char)pbVar10[1];
      pbVar10 = pbVar10 + 1;
    }
  }
  iVar2 = tolower(iVar9);
  if (iVar2 == 0x69) {
    iVar2 = tolower((int)(char)pbVar10[1]);
    if ((iVar2 == 0x6e) && (iVar2 = tolower((int)(char)pbVar10[2]), iVar2 == 0x66)) {
      iVar2 = tolower((int)(char)pbVar10[3]);
      pbVar6 = pbVar10 + 3;
      if (iVar2 == 0x69) {
        iVar2 = tolower((int)(char)pbVar10[4]);
        if ((((iVar2 != 0x6e) || (iVar2 = tolower((int)(char)pbVar10[5]), iVar2 != 0x69)) ||
            (iVar2 = tolower((int)(char)pbVar10[6]), iVar2 != 0x74)) ||
           (iVar2 = tolower((int)(char)pbVar10[7]), iVar2 != 0x79)) goto LAB_001000d3;
        pbVar6 = pbVar10 + 8;
      }
      if (param_2 != (char **)0x0) {
        *param_2 = (char *)pbVar6;
      }
      if (local_40 == -1) {
        return _LC5;
      }
      return _LC2;
    }
LAB_001000d3:
    if (param_2 != (char **)0x0) {
      *param_2 = param_1;
    }
    return 0.0;
  }
  if (iVar2 == 0x6e) {
    iVar2 = tolower((int)(char)pbVar10[1]);
    if ((iVar2 == 0x61) && (iVar2 = tolower((int)(char)pbVar10[2]), iVar2 == 0x6e)) {
      if (param_2 != (char **)0x0) {
        *param_2 = (char *)(pbVar10 + 3);
      }
      if (local_40 == -1) {
        return _LC4;
      }
      return _LC3;
    }
    goto LAB_001000d3;
  }
  if (iVar9 - 0x30U < 10) {
    uVar5 = 0;
    do {
      pbVar10 = pbVar10 + 1;
      uVar5 = (long)(char)((char)iVar9 + -0x30) + uVar5 * 10;
      bVar8 = *pbVar10;
      iVar9 = (int)(char)bVar8;
    } while (iVar9 - 0x30U < 10);
    fVar11 = (float)uVar5;
    fVar13 = fVar11;
    if (bVar8 == 0x2e) goto LAB_00100374;
  }
  else {
    if ((char)iVar9 != '.') {
      if (param_2 != (char **)0x0) {
        *param_2 = param_1;
      }
      return (float)local_40 * 0.0;
    }
    fVar13 = 0.0;
LAB_00100374:
    bVar8 = pbVar10[1];
    iVar2 = (int)(char)bVar8;
    pbVar10 = pbVar10 + 1;
    if (iVar2 - 0x30U < 10) {
      uVar7 = 1;
      uVar5 = 0;
      iVar9 = 0;
      do {
        if (iVar9 < 0x13) {
          uVar7 = uVar7 * 10;
          uVar5 = (long)(char)((char)iVar2 + -0x30) + uVar5 * 10;
        }
        bVar8 = pbVar10[1];
        iVar2 = (int)(char)bVar8;
        pbVar10 = pbVar10 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar2 - 0x30U < 10);
      fVar11 = (float)uVar5 / (float)uVar7;
    }
    else {
      iVar2 = isspace(iVar2);
      fVar11 = fVar13;
      if (iVar2 != 0) goto LAB_0010033e;
      fVar11 = 0.0;
    }
    fVar11 = fVar13 + fVar11;
  }
  if ((bVar8 & 0xdf) != 0x45) {
    fVar13 = (float)((uint)fVar11 & __LC6);
    if ((param_1 < pbVar10) && (9 < (int)(char)pbVar10[-1] - 0x30U)) {
      pbVar10 = (byte *)param_1;
    }
    goto LAB_0010033e;
  }
  bVar8 = pbVar10[1];
  if ((bVar8 & 0xdf) == 0x4d) {
    fVar13 = (float)((uint)fVar11 & __LC6);
    pbVar10 = pbVar10 + 2;
    goto LAB_0010033e;
  }
  if (bVar8 == 0x2d) {
    bVar8 = pbVar10[2];
    pbVar6 = pbVar10 + 2;
    iVar2 = -1;
  }
  else if (bVar8 == 0x2b) {
    bVar8 = pbVar10[2];
    pbVar6 = pbVar10 + 2;
    iVar2 = 1;
  }
  else {
    pbVar6 = pbVar10 + 1;
    iVar2 = 1;
  }
  uVar3 = (int)(char)bVar8 - 0x30;
  fVar12 = _LC1;
  if (uVar3 < 10) {
    if (bVar8 == 0x30) {
      do {
        pbVar10 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar10 == 0x30);
      uVar3 = (int)(char)*pbVar10 - 0x30;
      if (uVar3 < 10) goto LAB_00100228;
    }
    else {
LAB_00100228:
      uVar4 = 0;
      do {
        pbVar6 = pbVar6 + 1;
        uVar4 = uVar3 + uVar4 * 10;
        uVar3 = (int)(char)*pbVar6 - 0x30;
      } while (uVar3 < 10);
      if ((fVar11 == 1.1754943) && ((int)(uVar4 * iVar2) < -0x25)) {
        fVar13 = (float)((uint)(__LC7 * 1.1754943) & __LC6);
        pbVar10 = pbVar6;
        fVar11 = __LC7 * 1.1754943;
        goto LAB_0010033e;
      }
      if (7 < uVar4) {
        uVar3 = uVar4;
        uVar1 = uVar4 - 8;
        fVar13 = _LC8;
        if ((uVar4 & 8) == 0) goto LAB_001004e8;
        while (fVar12 = fVar13, uVar3 = uVar1, 7 < uVar3) {
LAB_001004e8:
          fVar13 = fVar12 * _LC8 * _LC8;
          uVar1 = uVar3 - 0x10;
        }
        uVar4 = uVar4 & 7;
      }
      if (uVar4 != 0) {
        uVar3 = uVar4 - 1;
        if ((uVar4 & 1) == 0) goto LAB_00100520;
        while (uVar4 = uVar3, fVar12 = fVar12 * _LC9, uVar4 != 0) {
LAB_00100520:
          fVar12 = fVar12 * _LC9;
          uVar3 = uVar4 - 2;
        }
      }
    }
LAB_00100485:
    pbVar10 = pbVar6;
    if (iVar2 == -1) {
      fVar13 = (float)((uint)(fVar11 / fVar12) & __LC6);
      fVar11 = fVar11 / fVar12;
      goto LAB_0010033e;
    }
    fVar11 = fVar11 * fVar12;
  }
  else {
    if (9 < (int)(char)pbVar10[-1] - 0x30U) {
      fVar13 = (float)((uint)fVar11 & __LC6);
      pbVar10 = (byte *)param_1;
      goto LAB_0010033e;
    }
    if (bVar8 != 0) goto LAB_00100485;
  }
  fVar13 = (float)((uint)fVar11 & __LC6);
LAB_0010033e:
  if (param_2 != (char **)0x0) {
    *param_2 = (char *)pbVar10;
  }
  if (_LC10 < fVar13) {
    return 0.0;
  }
  return (float)local_40 * fVar11;
}



/* tvg::strDuplicate(char const*, unsigned long) */

undefined8 tvg::strDuplicate(char *param_1,ulong param_2)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  sVar1 = strlen(param_1);
  if (sVar1 <= param_2) {
    param_2 = sVar1;
  }
  pvVar2 = malloc(param_2 + 1);
  if (pvVar2 != (void *)0x0) {
    *(undefined1 *)((long)pvVar2 + param_2) = 0;
    uVar3 = __memcpy_chk(pvVar2,param_1,param_2,param_2 + 1);
    return uVar3;
  }
  return 0;
}



/* tvg::strAppend(char*, char const*, unsigned long) */

char * tvg::strAppend(char *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  void *pvVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    return param_1;
  }
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    sVar1 = param_3 + 1 + sVar1;
    pvVar2 = realloc(param_1,sVar1);
    pcVar3 = (char *)__strncat_chk(pvVar2,param_2,param_3,sVar1);
    return pcVar3;
  }
  pcVar3 = (char *)strDuplicate(param_2,param_3);
  return pcVar3;
}



/* tvg::strDirname(char const*) */

void tvg::strDirname(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2f);
  strDuplicate(param_1,(long)(((int)pcVar1 + 1) - (int)param_1));
  return;
}


