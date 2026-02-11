
void * fread_file(FILE *param_1,uint param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  long lVar3;
  void *pvVar4;
  __off_t _Var5;
  int *piVar6;
  size_t __size;
  size_t __size_00;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fileno(param_1);
  iVar1 = fstat(iVar1,&local_d8);
  if ((((iVar1 < 0) || ((local_d8.st_mode & 0xf000) != 0x8000)) ||
      (_Var5 = ftello(param_1), _Var5 < 0)) || (local_d8.st_size <= _Var5)) {
    __size = 0x2000;
  }
  else {
    __size = (local_d8.st_size - _Var5) + 1;
    if (local_d8.st_size - _Var5 == 0x7fffffffffffffff) {
      piVar6 = __errno_location();
      *piVar6 = 0xc;
      goto LAB_001002c3;
    }
  }
  __ptr = malloc(__size);
  if (__ptr != (void *)0x0) {
    if ((param_2 & 2) == 0) {
      uVar9 = 0;
      pvVar4 = __ptr;
      uVar7 = __size;
LAB_00100090:
      do {
        __ptr = pvVar4;
        lVar8 = __size - uVar9;
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        lVar3 = __fread_chk((long)__ptr + uVar9,uVar7 - uVar9,1,lVar8,param_1);
        uVar9 = uVar9 + lVar3;
        if (lVar8 != lVar3) {
          piVar6 = __errno_location();
          iVar1 = *piVar6;
          iVar2 = ferror(param_1);
          if (iVar2 == 0) {
            if ((__size - 1 <= uVar9) || (pvVar4 = realloc(__ptr,uVar9 + 1), pvVar4 == (void *)0x0))
            {
LAB_001002ee:
              pvVar4 = __ptr;
            }
LAB_00100264:
            *(undefined1 *)((long)pvVar4 + uVar9) = 0;
            *param_3 = uVar9;
            goto LAB_00100271;
          }
          goto LAB_001002b3;
        }
        if (__size == 0x7fffffffffffffff) {
          iVar1 = 0xc;
          goto LAB_001002b3;
        }
        if (0x7fffffffffffffff - (__size >> 1) <= __size) {
          pvVar4 = realloc(__ptr,0x7fffffffffffffff);
          if (pvVar4 == (void *)0x0) break;
          __size = 0x7fffffffffffffff;
          uVar7 = 0x7fffffffffffffff;
          goto LAB_00100090;
        }
        __size = __size + (__size >> 1);
        uVar7 = 1;
        if (__size != 0) {
          uVar7 = __size;
        }
        pvVar4 = realloc(__ptr,uVar7);
      } while (pvVar4 != (void *)0x0);
      piVar6 = __errno_location();
      iVar1 = *piVar6;
    }
    else {
      uVar9 = 0;
LAB_00100163:
      lVar8 = __size - uVar9;
      uVar7 = uVar9;
      if (uVar9 <= __size) {
        uVar7 = __size;
      }
      lVar3 = __fread_chk((long)__ptr + uVar9,uVar7 - uVar9,1,lVar8,param_1);
      uVar9 = uVar9 + lVar3;
      if (lVar8 != lVar3) {
        piVar6 = __errno_location();
        iVar1 = *piVar6;
        iVar2 = ferror(param_1);
        if (iVar2 != 0) goto LAB_001002a6;
        if (__size - 1 <= uVar9) goto LAB_001002ee;
        pvVar4 = malloc(uVar9 + 1);
        if (pvVar4 == (void *)0x0) {
          memset_explicit((long)__ptr + uVar9,0,__size - uVar9);
          goto LAB_001002ee;
        }
        __memcpy_chk(pvVar4,__ptr,uVar9,uVar9 + 1);
        memset_explicit(__ptr,0,__size);
        free(__ptr);
        goto LAB_00100264;
      }
      if (__size == 0x7fffffffffffffff) {
        iVar1 = 0xc;
        goto LAB_001002a6;
      }
      if (__size < 0x7fffffffffffffff - (__size >> 1)) {
        __size_00 = (__size >> 1) + __size;
        pvVar4 = malloc(__size_00);
        if (pvVar4 == (void *)0x0) goto LAB_0010038f;
LAB_00100137:
        __memcpy_chk(pvVar4,__ptr,__size,__size_00);
        memset_explicit(__ptr,0,__size);
        free(__ptr);
        __size = __size_00;
        __ptr = pvVar4;
        goto LAB_00100163;
      }
      pvVar4 = malloc(0x7fffffffffffffff);
      __size_00 = 0x7fffffffffffffff;
      if (pvVar4 != (void *)0x0) goto LAB_00100137;
      __size_00 = 0x7fffffffffffffff;
LAB_0010038f:
      piVar6 = __errno_location();
      iVar1 = *piVar6;
      __size = __size_00;
LAB_001002a6:
      memset_explicit(__ptr,0,__size);
    }
LAB_001002b3:
    free(__ptr);
    piVar6 = __errno_location();
    *piVar6 = iVar1;
  }
LAB_001002c3:
  pvVar4 = (void *)0x0;
LAB_00100271:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar4;
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


