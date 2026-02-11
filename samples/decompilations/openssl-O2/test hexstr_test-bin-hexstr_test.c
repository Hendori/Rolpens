
bool test_hexstr_ex_to_from(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_c0;
  char local_b8 [64];
  undefined1 local_78 [72];
  long local_30;
  
  lVar4 = (long)param_1 * 0x20;
  uVar1 = *(undefined8 *)(tbl_testdata + lVar4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  iVar2 = OPENSSL_hexstr2buf_ex(local_78,0x40,&local_c0,uVar1,0x3a);
  iVar2 = test_true("test/hexstr_test.c",0x78,
                    "OPENSSL_hexstr2buf_ex(buf, sizeof(buf), &len, test->in, \':\')",iVar2 != 0);
  if (iVar2 != 0) {
    iVar2 = test_mem_eq("test/hexstr_test.c",0x79,&_LC3,"test->expected",local_78,local_c0,
                        *(undefined8 *)(tbl_testdata + lVar4 + 8),
                        *(undefined8 *)(tbl_testdata + lVar4 + 0x10));
    if (iVar2 != 0) {
      iVar2 = OPENSSL_buf2hexstr_ex(local_b8,local_c0 * 3 + -1,0,local_78,local_c0,0x3a);
      iVar2 = test_false("test/hexstr_test.c",0x7a,
                         "OPENSSL_buf2hexstr_ex(out, 3 * len - 1, NULL, buf, len, \':\')",iVar2 != 0
                        );
      if (iVar2 != 0) {
        iVar2 = OPENSSL_buf2hexstr_ex(local_b8,0x40,0,local_78,local_c0,0x3a);
        iVar2 = test_true("test/hexstr_test.c",0x7c,
                          "OPENSSL_buf2hexstr_ex(out, sizeof(out), NULL, buf, len, \':\')",
                          iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = test_str_eq("test/hexstr_test.c",0x7e,&_LC7,"test->in",local_b8,uVar1);
          if (iVar2 != 0) {
            iVar2 = OPENSSL_buf2hexstr_ex(local_b8,0x40,0,local_78,0,0x3a);
            iVar2 = test_true("test/hexstr_test.c",0x7f,
                              "OPENSSL_buf2hexstr_ex(out, sizeof(out), NULL, buf, 0, \':\')",
                              iVar2 != 0);
            if (iVar2 != 0) {
              sVar3 = strlen(local_b8);
              iVar2 = test_size_t_eq("test/hexstr_test.c",0x81,"strlen(out)",&_LC9,sVar3,0);
              bVar5 = iVar2 != 0;
              goto LAB_00100089;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_00100089:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_hexstr_to_from(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  void *ptr;
  void *ptr_00;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  lVar7 = (long)param_1 * 0x20;
  uVar2 = *(undefined8 *)(tbl_testdata + lVar7);
  cVar1 = tbl_testdata[lVar7 + 0x18];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (cVar1 == '_') {
    ptr = (void *)OPENSSL_hexstr2buf(uVar2,&local_48);
    iVar5 = test_ptr_null("test/hexstr_test.c",0x67,"buf = OPENSSL_hexstr2buf(test->in, &len)",ptr);
    uVar6 = (uint)(iVar5 != 0);
    ptr_00 = (void *)0x0;
  }
  else {
    ptr = (void *)OPENSSL_hexstr2buf(uVar2,&local_48);
    iVar5 = test_ptr("test/hexstr_test.c",0x5c,"buf = OPENSSL_hexstr2buf(test->in, &len)",ptr);
    if (iVar5 != 0) {
      uVar3 = *(undefined8 *)(tbl_testdata + lVar7 + 0x10);
      uVar4 = *(undefined8 *)(tbl_testdata + lVar7 + 8);
      iVar5 = test_mem_eq("test/hexstr_test.c",0x5d,&_LC3,"test->expected",ptr,local_48);
      if (iVar5 != 0) {
        ptr_00 = (void *)OPENSSL_buf2hexstr(ptr,local_48,uVar4,uVar3);
        uVar6 = test_ptr("test/hexstr_test.c",0x5e,"out = OPENSSL_buf2hexstr(buf, len)",ptr_00);
        if (uVar6 != 0) {
          if (cVar1 == ':') {
            iVar5 = test_str_eq("test/hexstr_test.c",0x61,&_LC7,"test->in",ptr_00,uVar2);
            uVar6 = (uint)(iVar5 != 0);
          }
          else {
            iVar5 = test_str_ne("test/hexstr_test.c",99);
            uVar6 = (uint)(iVar5 != 0);
          }
        }
        goto LAB_00100369;
      }
    }
    ptr_00 = (void *)0x0;
    uVar6 = 0;
  }
LAB_00100369:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_hexstr_sep_to_from(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  void *ptr;
  void *ptr_00;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar6 = (long)param_1 * 0x20;
  cVar1 = tbl_testdata[lVar6 + 0x18];
  uVar2 = *(undefined8 *)(tbl_testdata + lVar6);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  ptr = (void *)ossl_hexstr2buf_sep(uVar2,&local_38,(int)cVar1);
  iVar4 = test_ptr("test/hexstr_test.c",0x46,"buf = ossl_hexstr2buf_sep(test->in, &len, test->sep)",
                   ptr);
  if (iVar4 != 0) {
    uVar3 = *(undefined8 *)(tbl_testdata + lVar6 + 0x10);
    iVar4 = test_mem_eq("test/hexstr_test.c",0x47,&_LC3,"test->expected",ptr,local_38,
                        *(undefined8 *)(tbl_testdata + lVar6 + 8));
    if (iVar4 != 0) {
      ptr_00 = (void *)ossl_buf2hexstr_sep(ptr,local_38,(int)cVar1,uVar3);
      uVar5 = test_ptr("test/hexstr_test.c",0x48,"out = ossl_buf2hexstr_sep(buf, len, test->sep)",
                       ptr_00);
      if (uVar5 != 0) {
        iVar4 = test_str_eq("test/hexstr_test.c",0x49,&_LC7,"test->in",ptr_00,uVar2);
        uVar5 = (uint)(iVar4 != 0);
      }
      goto LAB_00100449;
    }
  }
  ptr_00 = (void *)0x0;
  uVar5 = 0;
LAB_00100449:
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_all_tests("test_hexstr_sep_to_from",test_hexstr_sep_to_from,6,1);
  add_all_tests("test_hexstr_to_from",test_hexstr_to_from,6,1);
  add_all_tests("test_hexstr_ex_to_from",0x100000,2,1);
  return 1;
}


