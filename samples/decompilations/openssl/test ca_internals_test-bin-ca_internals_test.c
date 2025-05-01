
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 setup_tests(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (char *)test_get_argument(0);
  lVar3 = test_get_argument_count();
  if (lVar3 == 0) {
    test_error("test/ca_internals_test.c",0x53,"%s: no command specified for testing\n",
               "ca_internals_test");
  }
  else {
    iVar1 = strcmp(pcVar2,"do_updatedb");
    if (iVar1 == 0) {
      lVar3 = test_get_argument_count();
      uVar7 = 0;
      if (lVar3 == 4) {
        pcVar2 = (char *)test_get_argument(3);
        strtol(pcVar2,(char **)0x0,0);
        uVar4 = test_get_argument(2);
        local_38 = test_asn1_string_to_time_t(uVar4);
        iVar1 = test_time_t_lt("test/ca_internals_test.c",0x33,"testdateutc",&_LC6,local_38,0);
        if (iVar1 == 0) {
          uVar5 = test_get_argument(1);
          uVar6 = load_index(uVar5,0);
          iVar1 = test_ptr_null("test/ca_internals_test.c",0x39,&_LC8,uVar6);
          uVar4 = _bio_err;
          if (iVar1 == 0) {
            _bio_err = _bio_out;
            iVar1 = do_updatedb(uVar6,&local_38);
            _bio_err = uVar4;
            if (0 < iVar1) {
              iVar1 = save_index(uVar5,&_LC9,uVar6);
              iVar1 = test_true("test/ca_internals_test.c",0x43,"save_index(indexfile, \"new\", db)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = rotate_index(uVar5,&_LC9,&_LC11);
                test_true("test/ca_internals_test.c",0x46,
                          "rotate_index(indexfile, \"new\", \"old\")",iVar1 != 0);
              }
            }
            uVar7 = 1;
            free_index(uVar6);
          }
        }
      }
      else {
        test_error("test/ca_internals_test.c",0x20,
                   "Usage: %s: do_updatedb dbfile testdate need64bit\n","ca_internals_test");
        test_error("test/ca_internals_test.c",0x21,"       testdate format: ASN1-String\n");
      }
      goto LAB_00100071;
    }
    test_error("test/ca_internals_test.c",0x5a,"%s: command \'%s\' is not supported for testing\n",
               "ca_internals_test",pcVar2);
  }
  uVar7 = 0;
LAB_00100071:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


