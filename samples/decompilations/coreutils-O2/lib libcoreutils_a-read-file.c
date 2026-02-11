
void * fread_file(FILE *param_1,uint param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int *piVar5;
  __off_t _Var6;
  long lVar7;
  size_t __size;
  void *__ptr;
  ulong uVar8;
  size_t sVar9;
  size_t sVar10;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fileno(param_1);
  iVar1 = fstat(iVar1,&local_d8);
  if ((((iVar1 < 0) || ((local_d8.st_mode & 0xf000) != 0x8000)) ||
      (_Var6 = ftello(param_1), _Var6 < 0)) || (local_d8.st_size <= _Var6)) {
    sVar9 = 0x2000;
  }
  else {
    sVar9 = (local_d8.st_size - _Var6) + 1;
    if (local_d8.st_size - _Var6 == 0x7fffffffffffffff) {
      piVar5 = __errno_location();
      pvVar3 = (void *)0x0;
      *piVar5 = 0xc;
      goto LAB_001001fc;
    }
  }
  pvVar3 = malloc(sVar9);
  if (pvVar3 != (void *)0x0) {
    uVar8 = 0;
    sVar10 = sVar9;
LAB_001000da:
    do {
      __ptr = pvVar3;
      lVar7 = sVar10 - uVar8;
      if (sVar9 <= uVar8) {
        sVar9 = uVar8;
      }
      lVar4 = __fread_chk((long)__ptr + uVar8,sVar9 - uVar8,1,lVar7,param_1);
      uVar8 = uVar8 + lVar4;
      if (lVar7 != lVar4) {
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        iVar2 = ferror(param_1);
        if (iVar2 != 0) {
LAB_00100236:
          if ((param_2 & 2) == 0) goto LAB_00100160;
LAB_00100241:
          memset_explicit(__ptr,0,sVar10);
          free(__ptr);
          piVar5 = __errno_location();
          *piVar5 = iVar1;
          goto LAB_00100170;
        }
        if (uVar8 < sVar10 - 1) {
          sVar9 = uVar8 + 1;
          if ((param_2 & 2) == 0) {
            pvVar3 = realloc(__ptr,sVar9);
            if (pvVar3 == (void *)0x0) goto LAB_001002c7;
          }
          else {
            pvVar3 = malloc(sVar9);
            if (pvVar3 == (void *)0x0) {
              memset_explicit((long)__ptr + uVar8,0,sVar10 - uVar8);
              goto LAB_001002c7;
            }
            __memcpy_chk(pvVar3,__ptr,uVar8,sVar9);
            memset_explicit(__ptr,0,sVar10);
            free(__ptr);
          }
        }
        else {
LAB_001002c7:
          pvVar3 = __ptr;
        }
        *(undefined1 *)((long)pvVar3 + uVar8) = 0;
        *param_3 = uVar8;
        goto LAB_001001fc;
      }
      if (sVar10 == 0x7fffffffffffffff) {
        iVar1 = 0xc;
        goto LAB_00100236;
      }
      __size = (sVar10 >> 1) + sVar10;
      if (0x7fffffffffffffff - (sVar10 >> 1) <= sVar10) {
        __size = 0x7fffffffffffffff;
      }
      if ((param_2 & 2) != 0) {
        pvVar3 = malloc(__size);
        if (pvVar3 == (void *)0x0) {
          piVar5 = __errno_location();
          iVar1 = *piVar5;
          sVar10 = __size;
          goto LAB_00100241;
        }
        __memcpy_chk(pvVar3,__ptr,sVar10,__size);
        memset_explicit(__ptr,0,sVar10);
        free(__ptr);
        sVar9 = __size;
        sVar10 = __size;
        goto LAB_001000da;
      }
      sVar9 = 1;
      if (__size != 0) {
        sVar9 = __size;
      }
      pvVar3 = realloc(__ptr,sVar9);
      sVar10 = __size;
    } while (pvVar3 != (void *)0x0);
    piVar5 = __errno_location();
    iVar1 = *piVar5;
LAB_00100160:
    free(__ptr);
    piVar5 = __errno_location();
    *piVar5 = iVar1;
  }
LAB_00100170:
  pvVar3 = (void *)0x0;
LAB_001001fc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar3;
}



void * read_file(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  
  __stream = (FILE *)rpl_fopen();
  if (__stream != (FILE *)0x0) {
    if ((param_2 & 2) != 0) {
      setvbuf(__stream,(char *)0x0,2,0);
    }
    __ptr = (void *)fread_file(__stream,param_2,param_3);
    iVar1 = rpl_fclose(__stream);
    if (iVar1 == 0) {
      return __ptr;
    }
    if (__ptr != (void *)0x0) {
      if ((param_2 & 2) != 0) {
        memset_explicit(__ptr,0,*param_3);
      }
      free(__ptr);
    }
  }
  return (void *)0x0;
}


