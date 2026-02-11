
undefined8 test_PKISI(void)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x28,"test/cmp_status_test.c",0x1a);
  iVar1 = test_ptr("test/cmp_status_test.c",0x1a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(ptr + 1) = 5;
  *ptr = "test_PKISI";
  *(undefined4 *)(ptr + 4) = 0x400020;
  ptr[2] = "PKIStatus: revocation notification - a revocation of the cert has occurred";
  ptr[3] = "this is an additional text describing the failure";
  uVar4 = OSSL_CMP_STATUSINFO_new(5,0x400020,"this is an additional text describing the failure");
  iVar1 = test_ptr("test/cmp_status_test.c",0x2f,
                   "si = OSSL_CMP_STATUSINFO_new(fixture->pkistatus, fixture->pkifailure, fixture->text)"
                   ,uVar4);
  if (iVar1 != 0) {
    uVar2 = ossl_cmp_pkisi_get_status(uVar4);
    iVar1 = test_int_eq("test/cmp_status_test.c",0x35,"fixture->pkistatus","status",
                        *(undefined4 *)(ptr + 1),uVar2);
    if (iVar1 != 0) {
      uVar5 = ossl_cmp_PKIStatus_to_string(uVar2);
      iVar1 = test_str_eq("test/cmp_status_test.c",0x36,"fixture->str",
                          "ossl_cmp_PKIStatus_to_string(status)",ptr[2],uVar5);
      if (iVar1 != 0) {
        uVar5 = ossl_cmp_pkisi_get0_statusString(uVar4);
        uVar5 = OPENSSL_sk_value(uVar5,0);
        iVar1 = test_ptr("test/cmp_status_test.c",0x39,
                         "statusString = sk_ASN1_UTF8STRING_value(ossl_cmp_pkisi_get0_statusString(si), 0)"
                         ,uVar5);
        if (iVar1 != 0) {
          __s = (char *)ptr[3];
          sVar6 = strlen(__s);
          iVar1 = test_mem_eq("test/cmp_status_test.c",0x3c,"fixture->text",
                              "(char *)statusString->data",__s,sVar6);
          if (iVar1 != 0) {
            uVar2 = ossl_cmp_pkisi_get_pkifailureinfo(uVar4);
            iVar1 = test_int_eq("test/cmp_status_test.c",0x40,"fixture->pkifailure",
                                "ossl_cmp_pkisi_get_pkifailureinfo(si)",*(undefined4 *)(ptr + 4),
                                uVar2);
            if (iVar1 != 0) {
              iVar1 = 0;
              do {
                uVar2 = ossl_cmp_pkisi_check_pkifailureinfo(uVar4,iVar1);
                iVar3 = test_int_eq("test/cmp_status_test.c",0x44,"(fixture->pkifailure >> i) & 1",
                                    "ossl_cmp_pkisi_check_pkifailureinfo(si, i)",
                                    *(int *)(ptr + 4) >> ((byte)iVar1 & 0x1f) & 1,uVar2);
                if (iVar3 == 0) goto LAB_001000be;
                iVar1 = iVar1 + 1;
              } while (iVar1 != 0x1b);
              uVar5 = 1;
              goto LAB_001000c0;
            }
          }
        }
      }
    }
  }
LAB_001000be:
  uVar5 = 0;
LAB_001000c0:
  OSSL_CMP_PKISI_free(uVar4);
  CRYPTO_free(ptr);
  return uVar5;
}



void cleanup_tests(void)

{
  return;
}



undefined8 setup_tests(void)

{
  add_test("test_PKISI",0x100000);
  return 1;
}


