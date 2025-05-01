
/* WARNING: Unknown calling convention */

_Bool temp_stream(FILE **fp,char **file_name)

{
  FILE *pFVar1;
  int iVar2;
  char *__ptr;
  FILE *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  size_t __size;
  
  pFVar1 = temp_stream::tmp_fp;
  if (temp_stream::tempfile == (char *)0x0) {
    uVar7 = 0x80;
    __ptr = (char *)0x0;
    while( true ) {
      __size = 1;
      if (uVar7 != 0) {
        __size = uVar7;
      }
      __ptr = (char *)realloc(__ptr,__size);
      if (__ptr == (char *)0x0) {
        uVar4 = dcgettext(0,"failed to make temporary file name",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar4);
        return false;
      }
      iVar2 = path_search(__ptr,uVar7,0,"cutmp",1);
      if (iVar2 == 0) {
        temp_stream::tempfile = __ptr;
        iVar2 = mkstemp_safer(__ptr);
        if (iVar2 < 0) {
          uVar4 = quotearg_style(4,temp_stream::tempfile);
          uVar5 = dcgettext(0,"failed to create temporary file %s",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar5,uVar4);
        }
        else {
          pFVar3 = fdopen(iVar2,"w+");
          temp_stream::tmp_fp = (FILE *)pFVar3;
          if (pFVar3 != (FILE *)0x0) {
            unlink(temp_stream::tempfile);
            goto LAB_00100067;
          }
          uVar4 = quotearg_style(4,temp_stream::tempfile);
          uVar5 = dcgettext(0,"failed to open %s for writing",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar5,uVar4);
          close(iVar2);
          unlink(temp_stream::tempfile);
        }
        free(temp_stream::tempfile);
        temp_stream::tempfile = (char *)0x0;
        return false;
      }
      piVar6 = __errno_location();
      if ((*piVar6 != 0x16) || (0x800 < uVar7)) break;
      uVar7 = uVar7 * 2;
    }
    uVar4 = dcgettext(0,"failed to make temporary file name",5);
    iVar2 = *piVar6;
    if (*piVar6 == 0x16) {
      iVar2 = 0x24;
    }
    error(0,iVar2,uVar4);
  }
  else {
    clearerr_unlocked((FILE *)temp_stream::tmp_fp);
    iVar2 = rpl_fseeko(pFVar1,0,0);
    pFVar3 = (FILE *)temp_stream::tmp_fp;
    if (-1 < iVar2) {
      iVar2 = fileno((FILE *)temp_stream::tmp_fp);
      iVar2 = ftruncate(iVar2,0);
      if (-1 < iVar2) {
LAB_00100067:
        *fp = (FILE *)pFVar3;
        if (file_name != (char **)0x0) {
          *file_name = temp_stream::tempfile;
        }
        return true;
      }
    }
    uVar4 = quotearg_style(4,temp_stream::tempfile);
    uVar5 = dcgettext(0,"failed to rewind stream for %s",5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar5,uVar4);
  }
  return false;
}


