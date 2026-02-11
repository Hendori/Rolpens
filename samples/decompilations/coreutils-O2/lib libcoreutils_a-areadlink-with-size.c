
undefined1 * areadlink_with_size(undefined8 param_1,ulong param_2)

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
  if (param_2 < 0x401) {
    uVar1 = param_2;
  }
  __size = 0x80;
  if (param_2 != 0) {
    __size = uVar1 + 1;
  }
  do {
    if (__size != 0x80) goto LAB_001000cb;
    if (param_2 != 0) goto LAB_001000cb;
    __size = 0x80;
    __ptr = (undefined1 *)0x0;
    puVar2 = local_c8;
LAB_00100086:
    uVar1 = __readlink_chk(param_1,puVar2,__size,__size);
    if ((long)uVar1 < 0) {
      free(__ptr);
      goto LAB_001000e8;
    }
    if (uVar1 < __size) {
      puVar2[uVar1] = 0;
      uVar1 = uVar1 + 1;
      if (__ptr != (undefined1 *)0x0) {
        if ((__size <= uVar1) ||
           (puVar2 = (undefined1 *)realloc(__ptr,uVar1), puVar2 == (undefined1 *)0x0)) {
          puVar2 = __ptr;
        }
        goto LAB_001000ea;
      }
      pvVar4 = malloc(uVar1);
      if (pvVar4 != (void *)0x0) {
        puVar2 = (undefined1 *)__memcpy_chk(pvVar4,puVar2,uVar1,uVar1);
        goto LAB_001000ea;
      }
      goto LAB_001000e8;
    }
    free(__ptr);
    if (0x3fffffffffffffff < __size) {
      if (__size != 0x7fffffffffffffff) break;
      goto LAB_00100148;
    }
    __size = __size * 2;
  } while( true );
  __size = 0x7fffffffffffffff;
LAB_001000cb:
  __ptr = (undefined1 *)malloc(__size);
  puVar2 = __ptr;
  if (__ptr == (undefined1 *)0x0) {
LAB_00100148:
    piVar3 = __errno_location();
    *piVar3 = 0xc;
LAB_001000e8:
    puVar2 = (undefined1 *)0x0;
LAB_001000ea:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return puVar2;
  }
  goto LAB_00100086;
}


