
bool test_load_cert_file(void)

{
  int iVar1;
  undefined4 uVar2;
  X509_STORE *v;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  
  v = X509_STORE_new();
  iVar1 = test_ptr("test/x509_load_cert_file_test.c",0x19,"store = X509_STORE_new()",v);
  if (iVar1 != 0) {
    m = X509_LOOKUP_file();
    ctx = X509_STORE_add_lookup(v,m);
    iVar1 = test_ptr("test/x509_load_cert_file_test.c",0x1a,
                     "lookup = X509_STORE_add_lookup(store, X509_LOOKUP_file())",ctx);
    if (iVar1 != 0) {
      iVar1 = X509_load_cert_file(ctx,chain,1);
      iVar1 = test_true("test/x509_load_cert_file_test.c",0x1b,
                        "X509_load_cert_file(lookup, chain, X509_FILETYPE_PEM)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar3 = X509_STORE_get1_all_certs(v);
        iVar1 = test_ptr("test/x509_load_cert_file_test.c",0x1c,
                         "certs = X509_STORE_get1_all_certs(store)",uVar3);
        if (iVar1 != 0) {
          uVar2 = OPENSSL_sk_num(uVar3);
          iVar1 = test_int_eq("test/x509_load_cert_file_test.c",0x1d,"sk_X509_num(certs)",&_LC5,
                              uVar2,4);
          if (iVar1 != 0) {
            uVar4 = X509_STORE_get1_objects(v);
            iVar1 = test_ptr("test/x509_load_cert_file_test.c",0x1e,
                             "objs = X509_STORE_get1_objects(store)",uVar4);
            if (iVar1 != 0) {
              uVar2 = OPENSSL_sk_num(uVar4);
              iVar6 = 0;
              iVar1 = test_int_eq("test/x509_load_cert_file_test.c",0x1f,"sk_X509_OBJECT_num(objs)",
                                  &_LC5,uVar2,4);
              if (iVar1 != 0) {
                for (; iVar1 = OPENSSL_sk_num(uVar4), iVar6 < iVar1; iVar6 = iVar6 + 1) {
                  uVar5 = OPENSSL_sk_value(uVar4,iVar6);
                  uVar2 = X509_OBJECT_get_type(uVar5);
                  iVar1 = test_int_eq("test/x509_load_cert_file_test.c",0x24,
                                      "X509_OBJECT_get_type(obj)","X509_LU_X509",uVar2,1);
                  if (iVar1 == 0) goto LAB_00100179;
                }
                bVar7 = true;
                if (crl != (char *)0x0) {
                  iVar1 = X509_load_crl_file(ctx,crl,1);
                  iVar1 = test_true("test/x509_load_cert_file_test.c",0x28,
                                    "X509_load_crl_file(lookup, crl, X509_FILETYPE_PEM)",iVar1 != 0)
                  ;
                  bVar7 = iVar1 != 0;
                }
                goto LAB_00100045;
              }
            }
LAB_00100179:
            bVar7 = false;
            goto LAB_00100045;
          }
        }
        uVar4 = 0;
        bVar7 = false;
        goto LAB_00100045;
      }
    }
  }
  uVar4 = 0;
  uVar3 = 0;
  bVar7 = false;
LAB_00100045:
  OSSL_STACK_OF_X509_free(uVar3);
  OPENSSL_sk_pop_free(uVar4,&X509_OBJECT_free);
  X509_STORE_free(v);
  return bVar7;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509_load_cert_file_test.c",0x39,"Error parsing test options\n");
  }
  else {
    chain = test_get_argument(0);
    if (chain != 0) {
      crl = test_get_argument(1);
      add_test("test_load_cert_file",0x100000);
      return 1;
    }
  }
  return 0;
}


