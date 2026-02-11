
undefined4 rpl_btowc(int param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined4 local_20;
  undefined8 local_1c;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != -1) {
    local_11 = (undefined1)param_1;
    local_1c = 0;
    uVar1 = rpl_mbrtowc(&local_20,&local_11,1,&local_1c);
    if (uVar1 < 0xfffffffffffffffe) goto LAB_0010004f;
  }
  local_20 = 0xffffffff;
LAB_0010004f:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20;
}


