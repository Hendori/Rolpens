
undefined1 * areadlinkat_with_size(undefined4 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__ptr;
  undefined1 *puVar2;
  int *piVar3;
  void *pvVar4;
  size_t __size;
  long in_FS_OFFSET;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0x400;
  if (param_3 < 0x401) {
    uVar1 = param_3;
  }
  __size = 0x80;
  if (param_3 != 0) {
    __size = uVar1 + 1;
  }
  do {
    if (__size != 0x80) goto LAB_001000d8;
    if (param_3 != 0) goto LAB_001000d8;
    __size = 0x80;
    __ptr = (undefined1 *)0x0;
    puVar2 = local_c8;
    while( true ) {
      uVar1 = __readlinkat_chk(param_1,param_2,puVar2,__size,__size);
      if ((long)uVar1 < 0) {
        free(__ptr);
        goto LAB_001000f8;
      }
      if (uVar1 < __size) {
        puVar2[uVar1] = 0;
        uVar1 = uVar1 + 1;
        if (__ptr != (undefined1 *)0x0) {
          if ((__size <= uVar1) ||
             (puVar2 = (undefined1 *)realloc(__ptr,uVar1), puVar2 == (undefined1 *)0x0)) {
            puVar2 = __ptr;
          }
          goto LAB_001000fa;
        }
        pvVar4 = malloc(uVar1);
        if (pvVar4 != (void *)0x0) {
          puVar2 = (undefined1 *)__memcpy_chk(pvVar4,puVar2,uVar1,uVar1);
          goto LAB_001000fa;
        }
        goto LAB_001000f8;
      }
      free(__ptr);
      if (__size < 0x4000000000000000) break;
      if (__size == 0x7fffffffffffffff) {
        piVar3 = __errno_location();
        *piVar3 = 0xc;
        goto LAB_001000f8;
      }
      __size = 0x7fffffffffffffff;
LAB_001000d8:
      __ptr = (undefined1 *)malloc(__size);
      puVar2 = __ptr;
      if (__ptr == (undefined1 *)0x0) {
LAB_001000f8:
        puVar2 = (undefined1 *)0x0;
LAB_001000fa:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return puVar2;
      }
    }
    __size = __size * 2;
  } while( true );
}


