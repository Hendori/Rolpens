
undefined8 temp_stream(undefined8 *param_1,long *param_2)

{
  int iVar1;
  char *__ptr;
  FILE *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  size_t __size;
  
  pFVar2 = tmp_fp_0;
  if (tempfile_1 == (char *)0x0) {
    uVar6 = 0x80;
    __ptr = (char *)0x0;
    while( true ) {
      __size = 1;
      if (uVar6 != 0) {
        __size = uVar6;
      }
      __ptr = (char *)realloc(__ptr,__size);
      if (__ptr == (char *)0x0) {
        uVar3 = dcgettext(0,"failed to make temporary file name",5);
        piVar5 = __errno_location();
        error(0,*piVar5,uVar3);
        return 0;
      }
      iVar1 = path_search(__ptr,uVar6,0,"cutmp",1);
      if (iVar1 == 0) {
        tempfile_1 = __ptr;
        iVar1 = mkstemp_safer(__ptr);
        if (iVar1 < 0) {
          uVar3 = quotearg_style(4,tempfile_1);
          uVar4 = dcgettext(0,"failed to create temporary file %s",5);
          piVar5 = __errno_location();
          error(0,*piVar5,uVar4,uVar3);
        }
        else {
          pFVar2 = fdopen(iVar1,"w+");
          tmp_fp_0 = pFVar2;
          if (pFVar2 != (FILE *)0x0) {
            unlink(tempfile_1);
            goto LAB_00100067;
          }
          uVar3 = quotearg_style(4,tempfile_1);
          uVar4 = dcgettext(0,"failed to open %s for writing",5);
          piVar5 = __errno_location();
          error(0,*piVar5,uVar4,uVar3);
          close(iVar1);
          unlink(tempfile_1);
        }
        free(tempfile_1);
        tempfile_1 = (char *)0x0;
        return 0;
      }
      piVar5 = __errno_location();
      if ((*piVar5 != 0x16) || (0x800 < uVar6)) break;
      uVar6 = uVar6 * 2;
    }
    uVar3 = dcgettext(0,"failed to make temporary file name",5);
    iVar1 = *piVar5;
    if (*piVar5 == 0x16) {
      iVar1 = 0x24;
    }
    error(0,iVar1,uVar3);
  }
  else {
    clearerr_unlocked(tmp_fp_0);
    iVar1 = rpl_fseeko(pFVar2,0,0);
    pFVar2 = tmp_fp_0;
    if (-1 < iVar1) {
      iVar1 = fileno(tmp_fp_0);
      iVar1 = ftruncate(iVar1,0);
      if (-1 < iVar1) {
LAB_00100067:
        *param_1 = pFVar2;
        if (param_2 != (long *)0x0) {
          *param_2 = (long)tempfile_1;
        }
        return 1;
      }
    }
    uVar3 = quotearg_style(4,tempfile_1);
    uVar4 = dcgettext(0,"failed to rewind stream for %s",5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,uVar3);
  }
  return 0;
}


