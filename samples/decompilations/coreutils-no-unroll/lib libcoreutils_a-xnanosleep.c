
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 xnanosleep(double param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (__LC0 <= param_1) {
    do {
      pause();
      puVar1 = (uint *)__errno_location();
    } while (*puVar1 == 4);
  }
  else {
    puVar1 = (uint *)__errno_location();
  }
  local_38 = dtotimespec(param_1);
  do {
    *puVar1 = 0;
    uVar2 = rpl_nanosleep(local_38,local_38);
    if ((int)uVar2 == 0) goto LAB_0010006d;
  } while ((*puVar1 & 0xfffffffb) == 0);
  uVar2 = 0xffffffff;
LAB_0010006d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


