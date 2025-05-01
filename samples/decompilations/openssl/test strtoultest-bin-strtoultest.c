
bool test_strtoul(int param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  lVar1 = (long)param_1 * 0x28;
  lVar2 = *(long *)(strtoul_tests + lVar1);
  uVar3 = OPENSSL_strtoul(lVar2,&local_38,*(undefined4 *)(strtoul_tests + lVar1 + 8),&local_40);
  iVar5 = *(int *)(strtoul_tests + lVar1 + 0x18);
  iVar4 = test_int_eq("test/strtoultest.c",0x53,&_LC1,"test->expect_err",uVar3,iVar5);
  if (iVar4 != 0) {
    iVar4 = test_ptr_eq("test/strtoultest.c",0x58,"endptr",
                        "&test->input[test->expect_endptr_offset]",local_38,
                        *(long *)(strtoul_tests + lVar1 + 0x20) + lVar2);
    if (iVar4 != 0) {
      bVar6 = true;
      if (iVar5 == 1) {
        iVar5 = test_ulong_eq("test/strtoultest.c",0x5f,&_LC6,"test->expect_val",local_40,
                              *(undefined8 *)(strtoul_tests + lVar1 + 0x10));
        bVar6 = iVar5 != 0;
      }
      goto LAB_00100083;
    }
  }
  bVar6 = false;
LAB_00100083:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_strtoul",0x100000,9,1);
  return 1;
}


