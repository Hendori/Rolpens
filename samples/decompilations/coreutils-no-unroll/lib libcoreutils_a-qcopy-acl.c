
undefined4
qcopy_acl(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
         undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined1 local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = get_permissions(param_1,param_2,param_5,local_24);
  if (iVar1 == 0) {
    uVar2 = set_permissions(local_24,param_3,param_4);
    free_permission_context(local_24);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


