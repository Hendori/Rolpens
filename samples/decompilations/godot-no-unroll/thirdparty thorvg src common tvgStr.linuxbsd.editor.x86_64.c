
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg::strToFloat(char const*, char**) */

float tvg::strToFloat(char *param_1,char **param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_40;
  
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  pbVar9 = (byte *)param_1;
  if (param_1 == (char *)0x0) {
    return 0.0;
  }
  while( true ) {
    bVar7 = *pbVar9;
    iVar8 = (int)(char)bVar7;
    iVar1 = isspace(iVar8);
    if (iVar1 == 0) break;
    pbVar9 = pbVar9 + 1;
  }
  if (bVar7 == 0x2d) {
    iVar8 = (int)(char)pbVar9[1];
    local_40 = -1;
    pbVar9 = pbVar9 + 1;
  }
  else {
    local_40 = 1;
    if (bVar7 == 0x2b) {
      iVar8 = (int)(char)pbVar9[1];
      pbVar9 = pbVar9 + 1;
    }
  }
  iVar1 = tolower(iVar8);
  if (iVar1 == 0x69) {
    iVar1 = tolower((int)(char)pbVar9[1]);
    if ((iVar1 == 0x6e) && (iVar1 = tolower((int)(char)pbVar9[2]), iVar1 == 0x66)) {
      iVar1 = tolower((int)(char)pbVar9[3]);
      pbVar5 = pbVar9 + 3;
      if (iVar1 == 0x69) {
        iVar1 = tolower((int)(char)pbVar9[4]);
        if ((((iVar1 != 0x6e) || (iVar1 = tolower((int)(char)pbVar9[5]), iVar1 != 0x69)) ||
            (iVar1 = tolower((int)(char)pbVar9[6]), iVar1 != 0x74)) ||
           (iVar1 = tolower((int)(char)pbVar9[7]), iVar1 != 0x79)) goto LAB_001000d3;
        pbVar5 = pbVar9 + 8;
      }
      if (param_2 != (char **)0x0) {
        *param_2 = (char *)pbVar5;
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
  if (iVar1 == 0x6e) {
    iVar1 = tolower((int)(char)pbVar9[1]);
    if ((iVar1 == 0x61) && (iVar1 = tolower((int)(char)pbVar9[2]), iVar1 == 0x6e)) {
      if (param_2 != (char **)0x0) {
        *param_2 = (char *)(pbVar9 + 3);
      }
      if (local_40 == -1) {
        return _LC4;
      }
      return _LC3;
    }
    goto LAB_001000d3;
  }
  if (iVar8 - 0x30U < 10) {
    uVar4 = 0;
    do {
      pbVar9 = pbVar9 + 1;
      uVar4 = (long)(char)((char)iVar8 + -0x30) + uVar4 * 10;
      bVar7 = *pbVar9;
      iVar8 = (int)(char)bVar7;
    } while (iVar8 - 0x30U < 10);
    fVar10 = (float)uVar4;
    fVar12 = fVar10;
    if (bVar7 == 0x2e) goto LAB_00100374;
  }
  else {
    if ((char)iVar8 != '.') {
      if (param_2 != (char **)0x0) {
        *param_2 = param_1;
      }
      return (float)local_40 * 0.0;
    }
    fVar12 = 0.0;
LAB_00100374:
    bVar7 = pbVar9[1];
    iVar1 = (int)(char)bVar7;
    pbVar9 = pbVar9 + 1;
    if (iVar1 - 0x30U < 10) {
      uVar6 = 1;
      uVar4 = 0;
      iVar8 = 0;
      do {
        if (iVar8 < 0x13) {
          uVar6 = uVar6 * 10;
          uVar4 = (long)(char)((char)iVar1 + -0x30) + uVar4 * 10;
        }
        bVar7 = pbVar9[1];
        iVar1 = (int)(char)bVar7;
        pbVar9 = pbVar9 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar1 - 0x30U < 10);
      fVar10 = (float)uVar4 / (float)uVar6;
    }
    else {
      iVar1 = isspace(iVar1);
      fVar10 = fVar12;
      if (iVar1 != 0) goto LAB_0010033e;
      fVar10 = 0.0;
    }
    fVar10 = fVar12 + fVar10;
  }
  if ((bVar7 & 0xdf) != 0x45) {
    fVar12 = (float)((uint)fVar10 & __LC6);
    if ((param_1 < pbVar9) && (9 < (int)(char)pbVar9[-1] - 0x30U)) {
      pbVar9 = (byte *)param_1;
    }
    goto LAB_0010033e;
  }
  bVar7 = pbVar9[1];
  if ((bVar7 & 0xdf) == 0x4d) {
    fVar12 = (float)((uint)fVar10 & __LC6);
    pbVar9 = pbVar9 + 2;
    goto LAB_0010033e;
  }
  if (bVar7 == 0x2d) {
    bVar7 = pbVar9[2];
    pbVar5 = pbVar9 + 2;
    iVar1 = -1;
  }
  else if (bVar7 == 0x2b) {
    bVar7 = pbVar9[2];
    pbVar5 = pbVar9 + 2;
    iVar1 = 1;
  }
  else {
    pbVar5 = pbVar9 + 1;
    iVar1 = 1;
  }
  uVar2 = (int)(char)bVar7 - 0x30;
  fVar11 = _LC1;
  if (uVar2 < 10) {
    if (bVar7 == 0x30) {
      do {
        pbVar9 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar9 == 0x30);
      uVar2 = (int)(char)*pbVar9 - 0x30;
      if (uVar2 < 10) goto LAB_00100228;
    }
    else {
LAB_00100228:
      uVar3 = 0;
      do {
        pbVar5 = pbVar5 + 1;
        uVar3 = uVar2 + uVar3 * 10;
        uVar2 = (int)(char)*pbVar5 - 0x30;
      } while (uVar2 < 10);
      if ((fVar10 == 1.1754943) && ((int)(uVar3 * iVar1) < -0x25)) {
        fVar12 = (float)((uint)(__LC7 * 1.1754943) & __LC6);
        pbVar9 = pbVar5;
        fVar10 = __LC7 * 1.1754943;
        goto LAB_0010033e;
      }
      uVar2 = uVar3;
      if (7 < uVar3) {
        do {
          fVar11 = fVar11 * _LC8;
          uVar2 = uVar2 - 8;
        } while (7 < uVar2);
        uVar3 = uVar3 & 7;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        fVar11 = fVar11 * _LC9;
      }
    }
LAB_00100485:
    pbVar9 = pbVar5;
    if (iVar1 == -1) {
      fVar12 = (float)((uint)(fVar10 / fVar11) & __LC6);
      fVar10 = fVar10 / fVar11;
      goto LAB_0010033e;
    }
    fVar10 = fVar10 * fVar11;
  }
  else {
    if (9 < (int)(char)pbVar9[-1] - 0x30U) {
      fVar12 = (float)((uint)fVar10 & __LC6);
      pbVar9 = (byte *)param_1;
      goto LAB_0010033e;
    }
    if (bVar7 != 0) goto LAB_00100485;
  }
  fVar12 = (float)((uint)fVar10 & __LC6);
LAB_0010033e:
  if (param_2 != (char **)0x0) {
    *param_2 = (char *)pbVar9;
  }
  if (_LC10 < fVar12) {
    return 0.0;
  }
  return (float)local_40 * fVar10;
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


