
/* WARNING: Unknown calling convention */

char * concatenated_filename(char *directory,char *filename,char *suffix)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  uVar1 = (byte)*directory - 0x2e;
  if (uVar1 == 0) {
    uVar1 = (uint)(byte)directory[1];
  }
  sVar2 = strlen(filename);
  if (uVar1 == 0) {
    sVar2 = sVar2 + 1;
    if (suffix == (char *)0x0) {
      pcVar4 = (char *)malloc(sVar2);
      if (pcVar4 != (char *)0x0) {
        __strcpy_chk(pcVar4,filename,sVar2);
        return pcVar4;
      }
    }
    else {
      sVar3 = strlen(suffix);
      pcVar4 = (char *)malloc(sVar2 + sVar3);
      if (pcVar4 != (char *)0x0) {
        pcVar5 = (char *)__stpcpy_chk(pcVar4,filename,sVar2 + sVar3);
        goto LAB_00100075;
      }
    }
  }
  else {
    sVar3 = strlen(directory);
    if (sVar3 == 0) {
      bVar10 = false;
      uVar7 = 0;
    }
    else {
      bVar10 = directory[sVar3 - 1] != '/';
      uVar7 = (ulong)bVar10;
    }
    sVar6 = 0;
    if (suffix != (char *)0x0) {
      sVar6 = strlen(suffix);
    }
    sVar6 = uVar7 + sVar2 + sVar3 + 1 + sVar6;
    pcVar4 = (char *)malloc(sVar6);
    if (pcVar4 != (char *)0x0) {
      __memcpy_chk(pcVar4,directory,sVar3,sVar6);
      sVar2 = sVar3;
      if (sVar3 <= sVar6) {
        sVar2 = sVar6;
      }
      pcVar5 = pcVar4 + sVar3;
      uVar7 = sVar2 - sVar3;
      if (bVar10) {
        *pcVar5 = '/';
        if (sVar6 < uVar7) {
          sVar6 = uVar7;
        }
        uVar8 = (sVar3 + 1) - sVar2;
        uVar9 = uVar8 + sVar6;
        if (CARRY8(uVar8,sVar6)) {
          uVar9 = sVar6;
        }
        pcVar5 = pcVar5 + 1;
        uVar7 = ((uVar7 - 1) - sVar6) + uVar9;
      }
      pcVar5 = (char *)__stpcpy_chk(pcVar5,filename,uVar7);
      if (suffix == (char *)0x0) {
        return pcVar4;
      }
LAB_00100075:
      strcpy(pcVar5,suffix);
      return pcVar4;
    }
  }
  return (char *)0x0;
}


