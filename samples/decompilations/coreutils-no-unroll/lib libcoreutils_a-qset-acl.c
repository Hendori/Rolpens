
undefined4 qset_acl(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = param_3;
  uVar1 = set_permissions(&local_24,param_1,param_2);
  free_permission_context(&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


