
/* WARNING: Unknown calling convention */

char * fread_file(FILE *stream,int flags,size_t *length)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  int *piVar6;
  __off_t _Var7;
  long lVar8;
  size_t __size;
  char *__ptr;
  ulong uVar9;
  size_t sVar10;
  size_t sVar11;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fileno((FILE *)stream);
  iVar2 = fstat(iVar2,(stat *)&st);
  if ((((iVar2 < 0) || ((st.st_mode & 0xf000) != 0x8000)) ||
      (_Var7 = ftello((FILE *)stream), _Var7 < 0)) || (st.st_size <= _Var7)) {
    sVar10 = 0x2000;
  }
  else {
    sVar10 = (st.st_size - _Var7) + 1;
    if (st.st_size - _Var7 == 0x7fffffffffffffff) {
      piVar6 = __errno_location();
      pcVar4 = (char *)0x0;
      *piVar6 = 0xc;
      goto LAB_001001fc;
    }
  }
  pcVar4 = (char *)malloc(sVar10);
  if (pcVar4 != (char *)0x0) {
    uVar9 = 0;
    sVar11 = sVar10;
LAB_001000da:
    do {
      __ptr = pcVar4;
      lVar8 = sVar11 - uVar9;
      if (sVar10 <= uVar9) {
        sVar10 = uVar9;
      }
      lVar5 = __fread_chk(__ptr + uVar9,sVar10 - uVar9,1,lVar8,stream);
      uVar9 = uVar9 + lVar5;
      if (lVar8 != lVar5) {
        piVar6 = __errno_location();
        iVar2 = *piVar6;
        iVar3 = ferror((FILE *)stream);
        if (iVar3 != 0) {
LAB_00100236:
          if ((flags & 2U) == 0) goto LAB_00100160;
LAB_00100241:
          memset_explicit(__ptr,0,sVar11);
          free(__ptr);
          piVar6 = __errno_location();
          *piVar6 = iVar2;
          goto LAB_00100170;
        }
        if (uVar9 < sVar11 - 1) {
          sVar10 = uVar9 + 1;
          if ((flags & 2U) == 0) {
            pcVar4 = (char *)realloc(__ptr,sVar10);
            if (pcVar4 == (char *)0x0) goto LAB_001002c7;
          }
          else {
            pcVar4 = (char *)malloc(sVar10);
            if (pcVar4 == (char *)0x0) {
              memset_explicit(__ptr + uVar9,0,sVar11 - uVar9);
              goto LAB_001002c7;
            }
            __memcpy_chk(pcVar4,__ptr,uVar9,sVar10);
            memset_explicit(__ptr,0,sVar11);
            free(__ptr);
          }
        }
        else {
LAB_001002c7:
          pcVar4 = __ptr;
        }
        pcVar4[uVar9] = '\0';
        *length = uVar9;
        goto LAB_001001fc;
      }
      if (sVar11 == 0x7fffffffffffffff) {
        iVar2 = 0xc;
        goto LAB_00100236;
      }
      __size = (sVar11 >> 1) + sVar11;
      if (0x7fffffffffffffff - (sVar11 >> 1) <= sVar11) {
        __size = 0x7fffffffffffffff;
      }
      if ((flags & 2U) != 0) {
        pcVar4 = (char *)malloc(__size);
        if (pcVar4 == (char *)0x0) {
          piVar6 = __errno_location();
          iVar2 = *piVar6;
          sVar11 = __size;
          goto LAB_00100241;
        }
        __memcpy_chk(pcVar4,__ptr,sVar11,__size);
        memset_explicit(__ptr,0,sVar11);
        free(__ptr);
        sVar10 = __size;
        sVar11 = __size;
        goto LAB_001000da;
      }
      sVar10 = 1;
      if (__size != 0) {
        sVar10 = __size;
      }
      pcVar4 = (char *)realloc(__ptr,sVar10);
      sVar11 = __size;
    } while (pcVar4 != (char *)0x0);
    piVar6 = __errno_location();
    iVar2 = *piVar6;
LAB_00100160:
    free(__ptr);
    piVar6 = __errno_location();
    *piVar6 = iVar2;
  }
LAB_00100170:
  pcVar4 = (char *)0x0;
LAB_001001fc:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar4;
}



/* WARNING: Unknown calling convention */

char * read_file(char *filename,int flags,size_t *length)

{
  int iVar1;
  FILE *__stream;
  char *__ptr;
  
  __stream = (FILE *)rpl_fopen();
  if (__stream != (FILE *)0x0) {
    if ((flags & 2U) != 0) {
      setvbuf(__stream,(char *)0x0,2,0);
    }
    __ptr = fread_file((FILE *)__stream,flags,length);
    iVar1 = rpl_fclose(__stream);
    if (iVar1 == 0) {
      return __ptr;
    }
    if (__ptr != (char *)0x0) {
      if ((flags & 2U) != 0) {
        memset_explicit(__ptr,0,*length);
      }
      free(__ptr);
    }
  }
  return (char *)0x0;
}


