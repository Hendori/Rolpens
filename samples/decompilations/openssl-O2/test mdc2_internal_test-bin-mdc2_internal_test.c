
bool test_mdc2(int param_1)

{
  long lVar1;
  char *__s;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (long)param_1 * 0x18;
  __s = *(char **)(tests + lVar1);
  uStack_70 = *(undefined8 *)(tests + lVar1 + 8);
  local_68 = *(undefined8 *)(tests + lVar1 + 0x10);
  MDC2_Init(local_58);
  sVar3 = strlen(__s);
  MDC2_Update(local_58,__s,sVar3);
  MDC2_Final(local_38,local_58);
  iVar2 = test_mem_eq("test/mdc2_internal_test.c",0x40,"testdata.expected",&_LC0,&uStack_70,0x10,
                      local_38,0x10);
  if (iVar2 == 0) {
    test_info("test/mdc2_internal_test.c",0x42,"mdc2 test %d: unexpected output",param_1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_mdc2",0x100000,1,1);
  return 1;
}


