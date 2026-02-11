
size_t vfzprintf(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *__ptr;
  size_t sVar1;
  int *piVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  size_t local_810;
  undefined1 local_808 [2008];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_810 = 2000;
  __ptr = (undefined1 *)vasnprintf(local_808,&local_810,param_2,param_3);
  sVar3 = local_810;
  if (__ptr == (undefined1 *)0x0) {
    fseterr(param_1);
  }
  else if ((long)local_810 < 0) {
    if (__ptr != local_808) {
      free(__ptr);
    }
    fseterr(param_1);
    piVar2 = __errno_location();
    *piVar2 = 0xc;
  }
  else {
    sVar1 = fwrite(__ptr,1,local_810,param_1);
    if (sVar3 <= sVar1) {
      if (__ptr != local_808) {
        free(__ptr);
      }
      goto LAB_0010008b;
    }
    if (__ptr != local_808) {
      free(__ptr);
    }
  }
  sVar3 = 0xffffffffffffffff;
LAB_0010008b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


