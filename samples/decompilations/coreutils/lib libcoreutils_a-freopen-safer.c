
/* WARNING: Unknown calling convention */

FILE * freopen_safer(char *name,char *mode,FILE *f)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = fileno((FILE *)f);
  if (iVar2 == 1) {
    iVar2 = dup2(0,0);
    if (iVar2 != 0) {
      bVar6 = false;
      bVar7 = false;
      goto LAB_00100166;
    }
LAB_0010010d:
    bVar6 = false;
    bVar7 = false;
    bVar1 = false;
LAB_00100116:
    pFVar4 = freopen(name,mode,(FILE *)f);
    piVar3 = __errno_location();
    iVar5 = *piVar3;
LAB_00100132:
    if (bVar6) goto LAB_001000b9;
    if (bVar7) goto LAB_001000c8;
  }
  else {
    if (iVar2 == 2) {
      bVar6 = false;
    }
    else {
      if (iVar2 == 0) goto LAB_0010010d;
      iVar2 = dup2(2,2);
      bVar6 = iVar2 != 2;
    }
    iVar2 = dup2(1,1);
    bVar7 = iVar2 != 1;
    iVar2 = dup2(0,0);
    if (iVar2 != 0) {
LAB_00100166:
      iVar2 = open("/dev/null",0);
      if (iVar2 == 0) {
        bVar1 = true;
        goto LAB_0010007d;
      }
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        bVar1 = true;
        pFVar4 = (FILE *)0x0;
        iVar5 = *piVar3;
      }
      else {
        iVar5 = 9;
        bVar1 = true;
        pFVar4 = (FILE *)0x0;
        close(iVar2);
        piVar3 = __errno_location();
        *piVar3 = 9;
      }
      goto LAB_00100132;
    }
    bVar1 = false;
LAB_0010007d:
    if ((bVar7) && (iVar2 = open("/dev/null",0), iVar2 != 1)) {
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        iVar5 = *piVar3;
      }
      else {
        iVar5 = 9;
        close(iVar2);
        piVar3 = __errno_location();
        *piVar3 = 9;
      }
      if (!bVar6) {
        close(1);
        if (bVar1) {
          close(0);
        }
        goto LAB_001000e3;
      }
      pFVar4 = (FILE *)0x0;
      close(2);
      goto LAB_001000c8;
    }
    if ((!bVar6) || (iVar2 = open("/dev/null",0), iVar2 == 2)) goto LAB_00100116;
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar5 = *piVar3;
    }
    else {
      iVar5 = 9;
      pFVar4 = (FILE *)0x0;
      close(iVar2);
      piVar3 = __errno_location();
      *piVar3 = 9;
    }
LAB_001000b9:
    close(2);
    if (bVar7) {
LAB_001000c8:
      close(1);
    }
  }
  if (bVar1) {
    close(0);
  }
  if (pFVar4 != (FILE *)0x0) {
    return (FILE *)pFVar4;
  }
LAB_001000e3:
  *piVar3 = iVar5;
  return (FILE *)0x0;
}


