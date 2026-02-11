
undefined8 do_test_cert_table(int param_1,int param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(ssl_cert_info + param_3 * 8);
  if (iVar3 == param_1) {
    iVar3 = *(int *)(ssl_cert_info + param_3 * 8 + 4);
    if (iVar3 == param_2) {
      return 1;
    }
    test_error("test/ssl_cert_table_internal_test.c",0x20,
               "Invalid table entry for certificate type %s, index %zu",param_4,param_3);
  }
  else {
    test_error("test/ssl_cert_table_internal_test.c",0x20,
               "Invalid table entry for certificate type %s, index %zu",param_4,param_3);
    pcVar1 = OBJ_nid2sn(iVar3);
    pcVar2 = OBJ_nid2sn(param_1);
    test_note("Expected %s, got %s\n",pcVar2,pcVar1);
    iVar3 = *(int *)(ssl_cert_info + param_3 * 8 + 4);
    if (iVar3 == param_2) {
      return 0;
    }
  }
  test_note("Expected auth mask 0x%x, got 0x%x\n",param_2,iVar3);
  return 0;
}



bool test_ssl_cert_table(void)

{
  int iVar1;
  
  iVar1 = test_size_t_eq("test/ssl_cert_table_internal_test.c",0x2f,"OSSL_NELEM(ssl_cert_info)",
                         "SSL_PKEY_NUM",9,9);
  if ((iVar1 != 0) && (iVar1 = do_test_cert_table(0x43f,8,7,"SSL_PKEY_ED25519"), iVar1 != 0)) {
    iVar1 = do_test_cert_table(0x440,8,8,"SSL_PKEY_ED448");
    return iVar1 != 0;
  }
  return false;
}



undefined8 setup_tests(void)

{
  add_test("test_ssl_cert_table",test_ssl_cert_table);
  return 1;
}


