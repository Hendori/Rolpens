
FILE * fopen_safer(undefined8 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  
  pFVar4 = (FILE *)rpl_fopen();
  if (pFVar4 != (FILE *)0x0) {
    uVar1 = fileno(pFVar4);
    if (2 < uVar1) {
      return pFVar4;
    }
    iVar2 = dup_safer(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      rpl_fclose(pFVar4);
      *piVar5 = iVar2;
      return (FILE *)0x0;
    }
    iVar3 = rpl_fclose(pFVar4);
    if ((iVar3 == 0) && (pFVar4 = fdopen(iVar2,param_2), pFVar4 != (FILE *)0x0)) {
      return pFVar4;
    }
    piVar5 = __errno_location();
    iVar3 = *piVar5;
    close(iVar2);
    *piVar5 = iVar3;
  }
  return (FILE *)0x0;
}


