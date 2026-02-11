
/* svgUtilURLDecode(char const*, char**) */

long svgUtilURLDecode(char *param_1,char **param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  char *pcVar11;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  sVar5 = strlen(param_1);
  if (sVar5 == 0) {
    return 0;
  }
  pcVar6 = (char *)malloc(sVar5 + 1);
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (bVar1 == 0) {
    lVar7 = 1;
    pcVar11 = pcVar6;
  }
  else {
    iVar9 = 0;
    uVar4 = (uint)(byte)param_1[1];
    iVar8 = 1;
    pcVar11 = pcVar6;
    if (bVar1 == 0x25) goto LAB_0010009d;
LAB_00100070:
    if ((char)uVar2 == '+') {
      *pcVar11 = ' ';
      param_1 = (char *)((byte *)param_1 + 1);
    }
    else {
      *pcVar11 = (char)uVar2;
      param_1 = (char *)((byte *)param_1 + 1);
    }
    while (uVar2 = uVar4, (char)uVar4 != '\0') {
      while( true ) {
        iVar9 = iVar8;
        pcVar11 = pcVar11 + 1;
        uVar4 = (uint)((byte *)param_1)[1];
        iVar8 = iVar9 + 1;
        if ((char)uVar2 != '%') goto LAB_00100070;
LAB_0010009d:
        cVar10 = (char)uVar4;
        if (cVar10 == '\0') {
          *pcVar11 = '%';
          goto LAB_00100134;
        }
        bVar1 = ((byte *)param_1)[2];
        if (((bVar1 != 0) && (iVar3 = isxdigit((int)cVar10), iVar3 != 0)) &&
           (iVar3 = isxdigit((int)(char)bVar1), iVar3 != 0)) break;
        *pcVar11 = '%';
        param_1 = (char *)((byte *)param_1 + 1);
        uVar2 = uVar4;
      }
      iVar3 = uVar4 - 0x57;
      if (cVar10 < 'a') {
        iVar3 = uVar4 - 0x30;
        if ('@' < cVar10) {
          iVar3 = uVar4 - 0x37;
        }
      }
      if ((char)bVar1 < 'a') {
        cVar10 = bVar1 - 0x37;
        if ((char)bVar1 < 'A') {
          cVar10 = bVar1 - 0x30;
        }
      }
      else {
        cVar10 = bVar1 + 0xa9;
      }
      param_1 = (char *)((byte *)param_1 + 3);
      *pcVar11 = (char)(iVar3 << 4) + cVar10;
      uVar4 = (uint)(byte)*param_1;
    }
LAB_00100134:
    lVar7 = (long)(iVar9 + 2);
    pcVar11 = pcVar6 + iVar8;
  }
  *pcVar11 = '\0';
  *param_2 = pcVar6;
  return lVar7;
}


