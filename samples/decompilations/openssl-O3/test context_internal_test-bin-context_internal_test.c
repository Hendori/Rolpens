
bool test_set_get_conf_diagnostics(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/context_internal_test.c",0x38,&_LC0,uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_LIB_CTX_get_conf_diagnostics(uVar2);
    iVar1 = test_false("test/context_internal_test.c",0x3b,"OSSL_LIB_CTX_get_conf_diagnostics(ctx)",
                       iVar1 != 0);
    if (iVar1 != 0) {
      OSSL_LIB_CTX_set_conf_diagnostics(uVar2,1);
      iVar1 = OSSL_LIB_CTX_get_conf_diagnostics(uVar2);
      iVar1 = test_true("test/context_internal_test.c",0x40,"OSSL_LIB_CTX_get_conf_diagnostics(ctx)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        OSSL_LIB_CTX_set_conf_diagnostics(uVar2,0);
        iVar1 = OSSL_LIB_CTX_get_conf_diagnostics(uVar2);
        iVar1 = test_false("test/context_internal_test.c",0x45,
                           "OSSL_LIB_CTX_get_conf_diagnostics(ctx)",iVar1 != 0);
        OSSL_LIB_CTX_free(uVar2);
        return iVar1 != 0;
      }
    }
  }
  OSSL_LIB_CTX_free(uVar2);
  return false;
}



bool test_set0_default(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar2 = OSSL_LIB_CTX_get0_global_default();
  uVar3 = OSSL_LIB_CTX_new();
  iVar1 = test_ptr("test/context_internal_test.c",0x16,"global",uVar2);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/context_internal_test.c",0x17,"local",uVar3);
    if (iVar1 != 0) {
      uVar4 = OSSL_LIB_CTX_set0_default(0);
      iVar1 = test_ptr_eq("test/context_internal_test.c",0x18,"global",
                          "OSSL_LIB_CTX_set0_default(NULL)",uVar2,uVar4);
      if (iVar1 != 0) {
        uVar4 = OSSL_LIB_CTX_set0_default(uVar3);
        iVar1 = test_ptr("test/context_internal_test.c",0x1c,
                         "prev = OSSL_LIB_CTX_set0_default(local)",uVar4);
        if (iVar1 != 0) {
          iVar1 = test_ptr_eq("test/context_internal_test.c",0x1d,"global",&_LC7,uVar2,uVar4);
          if (iVar1 != 0) {
            uVar4 = OSSL_LIB_CTX_set0_default(0);
            iVar1 = test_ptr_eq("test/context_internal_test.c",0x21,"local",
                                "OSSL_LIB_CTX_set0_default(NULL)",uVar3,uVar4);
            if (iVar1 != 0) {
              uVar4 = OSSL_LIB_CTX_get0_global_default();
              iVar1 = test_ptr_eq("test/context_internal_test.c",0x25,"global",
                                  "OSSL_LIB_CTX_get0_global_default()",uVar2,uVar4);
              if (iVar1 != 0) {
                uVar2 = OSSL_LIB_CTX_set0_default(uVar2);
                iVar1 = test_ptr("test/context_internal_test.c",0x29,
                                 "prev = OSSL_LIB_CTX_set0_default(global)",uVar2);
                if (iVar1 != 0) {
                  iVar1 = test_ptr_eq("test/context_internal_test.c",0x2a,"local",&_LC7,uVar3,uVar2)
                  ;
                  bVar5 = iVar1 != 0;
                  goto LAB_00100139;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_00100139:
  OSSL_LIB_CTX_free(uVar3);
  return bVar5;
}



undefined8 setup_tests(void)

{
  add_test("test_set0_default",test_set0_default);
  add_test("test_set_get_conf_diagnostics",0x100000);
  return 1;
}


