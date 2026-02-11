
undefined8 hard_locale(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_118;
  short local_114;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = setlocale_null_r(param_1,&local_118,0x101);
  uVar2 = 0;
  if (((iVar1 == 0) && ((short)local_118 != 0x43)) &&
     ((local_118 != 0x49534f50 || (uVar2 = 0, local_114 != 0x58)))) {
    uVar2 = 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


