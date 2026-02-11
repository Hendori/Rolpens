
int test_ASN1_OCTET_STRING_set(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  ASN1_OCTET_STRING *pAVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/cmp_asn_test.c",0x1c);
  iVar1 = test_ptr("test/cmp_asn_test.c",0x1c,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *(undefined4 *)(ptr + 1) = 1;
    *ptr = "test_ASN1_OCTET_STRING_set";
    pAVar3 = ASN1_OCTET_STRING_new();
    ptr[3] = pAVar3;
    iVar1 = test_ptr("test/cmp_asn_test.c",0x60,"fixture->tgt_string = ASN1_OCTET_STRING_new()",
                     pAVar3);
    if (iVar1 != 0) {
      pAVar3 = ASN1_OCTET_STRING_new();
      ptr[2] = pAVar3;
      iVar1 = test_ptr("test/cmp_asn_test.c",0x61,"fixture->src_string = ASN1_OCTET_STRING_new()",
                       pAVar3);
      if (iVar1 != 0) {
        iVar1 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)ptr[2],rand_data,0x10);
        iVar1 = test_true("test/cmp_asn_test.c",0x62,
                          "ASN1_OCTET_STRING_set(fixture->src_string, rand_data, sizeof(rand_data))"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = ossl_cmp_asn1_octet_string_set1(ptr + 3,ptr[2]);
          iVar1 = test_int_eq("test/cmp_asn_test.c",0x52,"fixture->expected",
                              "ossl_cmp_asn1_octet_string_set1(&fixture->tgt_string, fixture->src_string)"
                              ,*(undefined4 *)(ptr + 1),uVar2);
          if ((iVar1 != 0) && (iVar1 = 1, *(int *)(ptr + 1) != 0)) {
            iVar1 = ASN1_OCTET_STRING_cmp((ASN1_OCTET_STRING *)ptr[3],(ASN1_OCTET_STRING *)ptr[2]);
            iVar1 = test_int_eq("test/cmp_asn_test.c",0x57,&_LC8,
                                "ASN1_OCTET_STRING_cmp(fixture->tgt_string, fixture->src_string)",0,
                                iVar1);
          }
          ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[2]);
          if ((ASN1_OCTET_STRING *)ptr[3] != (ASN1_OCTET_STRING *)ptr[2]) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[3]);
          }
          CRYPTO_free(ptr);
          return iVar1;
        }
      }
    }
    ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[2]);
    if ((ASN1_OCTET_STRING *)ptr[3] != (ASN1_OCTET_STRING *)ptr[2]) {
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[3]);
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_asn1_get_int(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  ASN1_INTEGER *a;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/cmp_asn_test.c",0x1c);
  iVar1 = test_ptr("test/cmp_asn_test.c",0x1c,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(ptr + 1) = 1;
  *ptr = "test_cmp_asn1_get_int";
  a = ASN1_INTEGER_new();
  iVar1 = test_ptr("test/cmp_asn_test.c",0x32,"asn1integer",a);
  if (iVar1 != 0) {
    iVar1 = ASN1_INTEGER_set(a,0x4d);
    iVar1 = test_true("test/cmp_asn_test.c",0x35,"ASN1_INTEGER_set(asn1integer, good_int)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      uVar2 = ossl_cmp_asn1_get_int();
      iVar1 = test_int_eq("test/cmp_asn_test.c",0x39,"good_int","ossl_cmp_asn1_get_int(asn1integer)"
                          ,0x4d,uVar2);
      if (iVar1 == 0) {
LAB_001002db:
        uVar2 = 0;
      }
      else {
        iVar1 = ASN1_INTEGER_set_int64(a,0x80000000);
        iVar1 = test_true("test/cmp_asn_test.c",0x3e,
                          "ASN1_INTEGER_set_int64(asn1integer, max_int + 1)",iVar1 != 0);
        if (iVar1 == 0) goto LAB_001002db;
        uVar2 = ossl_cmp_asn1_get_int(a);
        uVar2 = test_int_eq("test/cmp_asn_test.c",0x40,&_LC14,"ossl_cmp_asn1_get_int(asn1integer)",
                            0xfffffffe,uVar2);
      }
      ASN1_INTEGER_free(a);
      goto LAB_0010023f;
    }
    ASN1_INTEGER_free(a);
  }
  uVar2 = 0;
LAB_0010023f:
  ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[2]);
  if ((ASN1_OCTET_STRING *)ptr[3] != (ASN1_OCTET_STRING *)ptr[2]) {
    ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[3]);
  }
  CRYPTO_free(ptr);
  return uVar2;
}



int test_ASN1_OCTET_STRING_set_tgt_is_src(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  ASN1_OCTET_STRING *pAVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x20,"test/cmp_asn_test.c",0x1c);
  iVar1 = test_ptr("test/cmp_asn_test.c",0x1c,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *(undefined4 *)(ptr + 1) = 1;
    *ptr = "test_ASN1_OCTET_STRING_set_tgt_is_src";
    pAVar3 = ASN1_OCTET_STRING_new();
    ptr[2] = pAVar3;
    iVar1 = test_ptr("test/cmp_asn_test.c",0x6f,"fixture->src_string = ASN1_OCTET_STRING_new()",
                     pAVar3);
    pAVar3 = (ASN1_OCTET_STRING *)ptr[2];
    if ((iVar1 != 0) && (ptr[3] = pAVar3, pAVar3 != (ASN1_OCTET_STRING *)0x0)) {
      iVar1 = ASN1_OCTET_STRING_set(pAVar3,rand_data,0x10);
      iVar1 = test_true("test/cmp_asn_test.c",0x71,
                        "ASN1_OCTET_STRING_set(fixture->src_string, rand_data, sizeof(rand_data))",
                        iVar1 != 0);
      if (iVar1 != 0) {
        uVar2 = ossl_cmp_asn1_octet_string_set1(ptr + 3,ptr[2]);
        iVar1 = test_int_eq("test/cmp_asn_test.c",0x52,"fixture->expected",
                            "ossl_cmp_asn1_octet_string_set1(&fixture->tgt_string, fixture->src_string)"
                            ,*(undefined4 *)(ptr + 1),uVar2);
        if ((iVar1 != 0) && (iVar1 = 1, *(int *)(ptr + 1) != 0)) {
          iVar1 = ASN1_OCTET_STRING_cmp((ASN1_OCTET_STRING *)ptr[3],(ASN1_OCTET_STRING *)ptr[2]);
          iVar1 = test_int_eq("test/cmp_asn_test.c",0x57,&_LC8,
                              "ASN1_OCTET_STRING_cmp(fixture->tgt_string, fixture->src_string)",0,
                              iVar1);
        }
        ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[2]);
        if ((ASN1_OCTET_STRING *)ptr[3] != (ASN1_OCTET_STRING *)ptr[2]) {
          ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[3]);
        }
        CRYPTO_free(ptr);
        return iVar1;
      }
      pAVar3 = (ASN1_OCTET_STRING *)ptr[2];
    }
    ASN1_OCTET_STRING_free(pAVar3);
    if ((ASN1_OCTET_STRING *)ptr[3] != (ASN1_OCTET_STRING *)ptr[2]) {
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)ptr[3]);
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



void cleanup_tests(void)

{
  return;
}



undefined8 setup_tests(void)

{
  RAND_bytes(rand_data,0x10);
  add_test("test_cmp_asn1_get_int",test_cmp_asn1_get_int);
  add_test("test_ASN1_OCTET_STRING_set",0x100000);
  add_test("test_ASN1_OCTET_STRING_set_tgt_is_src",test_ASN1_OCTET_STRING_set_tgt_is_src);
  return 1;
}


