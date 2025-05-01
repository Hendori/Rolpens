
bool test_509_dup_cert(int param_1)

{
  int iVar1;
  char *file;
  X509_STORE *v;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  bool bVar2;
  
  file = (char *)test_get_argument((long)param_1);
  v = X509_STORE_new();
  iVar1 = test_ptr("test/x509_dup_cert_test.c",0x18,"store = X509_STORE_new()",v);
  if (iVar1 != 0) {
    m = X509_LOOKUP_file();
    ctx = X509_STORE_add_lookup(v,m);
    iVar1 = test_ptr("test/x509_dup_cert_test.c",0x19,
                     "lookup = X509_STORE_add_lookup(store, X509_LOOKUP_file())",ctx);
    if (iVar1 != 0) {
      iVar1 = X509_load_cert_file(ctx,file,1);
      iVar1 = test_true("test/x509_dup_cert_test.c",0x1a,
                        "X509_load_cert_file(lookup, cert_f, X509_FILETYPE_PEM)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = X509_load_cert_file(ctx,file,1);
        iVar1 = test_true("test/x509_dup_cert_test.c",0x1b,
                          "X509_load_cert_file(lookup, cert_f, X509_FILETYPE_PEM)",iVar1 != 0);
        bVar2 = iVar1 != 0;
        goto LAB_00100043;
      }
    }
  }
  bVar2 = false;
LAB_00100043:
  X509_STORE_free(v);
  return bVar2;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509_dup_cert_test.c",0x29,"Error parsing test options\n");
  }
  else {
    uVar2 = test_get_argument_count();
    iVar1 = test_int_gt("test/x509_dup_cert_test.c",0x2e,&_LC6,&_LC5,uVar2,0);
    if (iVar1 != 0) {
      add_all_tests("test_509_dup_cert",0x100000,uVar2 & 0xffffffff,1);
      return 1;
    }
  }
  return 0;
}


