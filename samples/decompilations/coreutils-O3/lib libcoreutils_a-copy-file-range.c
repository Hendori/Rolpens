
undefined8
rpl_copy_file_range(undefined4 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  int *piVar2;
  long in_FS_OFFSET;
  utsname local_198;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (ok_0 == '\0') {
    uname(&local_198);
    param_3 = param_3 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
    if (((local_198.release[1] == '.') && (local_198.release[0] < '6')) &&
       ((local_198.release[0] != '5' ||
        ((local_198.release[3] == '.' && (local_198.release[2] < '3')))))) {
      ok_0 = -1;
      goto LAB_001000c3;
    }
    ok_0 = '\x01';
  }
  else if (ok_0 < '\x01') {
LAB_001000c3:
    piVar2 = __errno_location();
    *piVar2 = 0x26;
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0xffffffffffffffff;
    }
    goto LAB_0010010e;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = copy_file_range(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
LAB_0010010e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


