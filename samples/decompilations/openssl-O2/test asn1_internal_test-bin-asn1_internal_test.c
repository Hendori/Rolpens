
bool test_obj_nid_undef(void)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  char *pcVar3;
  
  pAVar2 = OBJ_nid2obj(0);
  iVar1 = test_ptr("test/asn1_internal_test.c",0x103,"OBJ_nid2obj(NID_undef)",pAVar2);
  if (iVar1 != 0) {
    pcVar3 = OBJ_nid2sn(0);
    iVar1 = test_ptr("test/asn1_internal_test.c",0x104,"OBJ_nid2sn(NID_undef)",pcVar3);
    if (iVar1 != 0) {
      pcVar3 = OBJ_nid2ln(0);
      iVar1 = test_ptr("test/asn1_internal_test.c",0x105,"OBJ_nid2ln(NID_undef)",pcVar3);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 test_obj_create_once(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  
  ERR_set_mark();
  iVar1 = OBJ_create(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = ERR_peek_last_error();
    if ((((uVar2 & 0x80000000) != 0) || ((char)(uVar2 >> 0x17) != '\b')) ||
       (((uint)uVar2 & 0x7fffff) != 0x66)) {
      ERR_clear_last_mark();
      return 0;
    }
  }
  ERR_pop_to_mark();
  return 1;
}



bool test_obj_create(void)

{
  int iVar1;
  
  iVar1 = test_obj_create_once(0,"custom1",0);
  iVar1 = test_true("test/asn1_internal_test.c",0xe7,
                    "test_obj_create_once(NULL, sn_prefix \"1\", NULL)",iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = OBJ_sn2nid("custom1");
    iVar1 = test_int_ne("test/asn1_internal_test.c",0xe8,"OBJ_sn2nid(sn_prefix \"1\")","NID_undef",
                        iVar1,0);
    if (iVar1 != 0) {
      iVar1 = test_obj_create_once(0,0,"custom2");
      iVar1 = test_true("test/asn1_internal_test.c",0xe9,
                        "test_obj_create_once(NULL, NULL, ln_prefix \"2\")",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OBJ_ln2nid("custom2");
        iVar1 = test_int_ne("test/asn1_internal_test.c",0xea,"OBJ_ln2nid(ln_prefix \"2\")",
                            "NID_undef",iVar1,0);
        if (iVar1 != 0) {
          iVar1 = test_obj_create_once(0,"custom3","custom3");
          iVar1 = test_true("test/asn1_internal_test.c",0xeb,
                            "test_obj_create_once(NULL, sn_prefix \"3\", ln_prefix \"3\")",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OBJ_sn2nid("custom3");
            iVar1 = test_int_ne("test/asn1_internal_test.c",0xec,"OBJ_sn2nid(sn_prefix \"3\")",
                                "NID_undef",iVar1,0);
            if (iVar1 != 0) {
              iVar1 = OBJ_ln2nid("custom3");
              iVar1 = test_int_ne("test/asn1_internal_test.c",0xed,"OBJ_ln2nid(ln_prefix \"3\")",
                                  "NID_undef",iVar1,0);
              if (iVar1 != 0) {
                iVar1 = test_obj_create_once("1.3.6.1.4.1.16604.998866.4",0,0);
                iVar1 = test_true("test/asn1_internal_test.c",0xee,
                                  "test_obj_create_once(arc \"4\", NULL, NULL)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = test_obj_create_once("1.3.6.1.4.1.16604.998866.5","custom5",0);
                  iVar1 = test_true("test/asn1_internal_test.c",0xef,
                                    "test_obj_create_once(arc \"5\", sn_prefix \"5\", NULL)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OBJ_sn2nid("custom5");
                    iVar1 = test_int_ne("test/asn1_internal_test.c",0xf0,
                                        "OBJ_sn2nid(sn_prefix \"5\")","NID_undef",iVar1,0);
                    if (iVar1 != 0) {
                      iVar1 = test_obj_create_once("1.3.6.1.4.1.16604.998866.6",0,"custom6");
                      iVar1 = test_true("test/asn1_internal_test.c",0xf1,
                                        "test_obj_create_once(arc \"6\", NULL, ln_prefix \"6\")",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OBJ_ln2nid("custom6");
                        iVar1 = test_int_ne("test/asn1_internal_test.c",0xf2,
                                            "OBJ_ln2nid(ln_prefix \"6\")","NID_undef",iVar1,0);
                        if (iVar1 != 0) {
                          iVar1 = test_obj_create_once
                                            ("1.3.6.1.4.1.16604.998866.7","custom7","custom7");
                          iVar1 = test_true("test/asn1_internal_test.c",0xf3,
                                            "test_obj_create_once(arc \"7\", sn_prefix \"7\", ln_prefix \"7\")"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OBJ_sn2nid("custom7");
                            iVar1 = test_int_ne("test/asn1_internal_test.c",0xf5,
                                                "OBJ_sn2nid(sn_prefix \"7\")","NID_undef",iVar1,0);
                            if (iVar1 != 0) {
                              iVar1 = OBJ_ln2nid("custom7");
                              iVar1 = test_int_ne("test/asn1_internal_test.c",0xf6,
                                                  "OBJ_ln2nid(ln_prefix \"7\")","NID_undef",iVar1,0)
                              ;
                              if (iVar1 != 0) {
                                iVar1 = test_obj_create_once(0,0,0);
                                iVar1 = test_false("test/asn1_internal_test.c",0xf9,
                                                   "test_obj_create_once(NULL, NULL, NULL)",
                                                   iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = test_obj_create_once(&_LC32,"custom8","custom8");
                                  iVar1 = test_false("test/asn1_internal_test.c",0xfa,
                                                                                                          
                                                  "test_obj_create_once(broken_arc \"8\", sn_prefix \"8\", ln_prefix \"8\")"
                                                  ,iVar1 != 0);
                                  return iVar1 != 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



uint test_empty_nonoptional_content(void)

{
  int iVar1;
  uint uVar2;
  RSA *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  a = RSA_new();
  iVar1 = test_ptr("test/asn1_internal_test.c",0x83,"rsa = RSA_new()",a);
  if (iVar1 == 0) {
    uVar2 = 0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
  }
  else {
    a_00 = BN_new();
    a_01 = (BIGNUM *)0x0;
    uVar2 = test_ptr("test/asn1_internal_test.c",0x84,"n = BN_new()",a_00);
    if (uVar2 != 0) {
      a_01 = BN_new();
      iVar1 = test_ptr("test/asn1_internal_test.c",0x85,"e = BN_new()",a_01);
      if (iVar1 != 0) {
        iVar1 = RSA_set0_key(a,a_00,a_01,0);
        iVar1 = test_true("test/asn1_internal_test.c",0x86,"RSA_set0_key(rsa, n, e, NULL)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = i2d_RSAPrivateKey(a,(uchar **)0x0);
          iVar1 = test_int_le("test/asn1_internal_test.c",0x8f,"i2d_RSAPrivateKey(rsa, NULL)",&_LC38
                              ,iVar1,0);
          uVar2 = (uint)(iVar1 != 0);
          a_01 = (BIGNUM *)0x0;
          a_00 = (BIGNUM *)0x0;
          goto LAB_001004be;
        }
      }
      uVar2 = 0;
    }
  }
LAB_001004be:
  RSA_free(a);
  BN_free(a_00);
  BN_free(a_01);
  return uVar2;
}



undefined4 test_standard_methods(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined4 local_3c;
  
  local_3c = 1;
  lVar6 = 0;
  ppuVar8 = &standard_methods;
  iVar4 = -1;
  do {
    while( true ) {
      piVar1 = (int *)*ppuVar8;
      iVar10 = *piVar1;
      if (iVar10 < iVar4) {
        iVar10 = 0;
        goto LAB_00100680;
      }
      uVar2 = ~(uint)*(undefined8 *)(piVar1 + 2);
      if (*(long *)(piVar1 + 4) == 0) {
        uVar2 = (uint)*(undefined8 *)(piVar1 + 2);
      }
      iVar3 = test_true("test/asn1_internal_test.c",0x5e,
                        "((*tmp)->pem_str == NULL && ((*tmp)->pkey_flags & ASN1_PKEY_ALIAS) != 0) || ((*tmp)->pem_str != NULL && ((*tmp)->pkey_flags & ASN1_PKEY_ALIAS) == 0)"
                        ,uVar2 & 1);
      iVar4 = iVar10;
      if (iVar3 != 0) break;
      ppuVar9 = ppuVar8 + 1;
      pcVar5 = OBJ_nid2sn(*(int *)*ppuVar8);
      test_note("asn1 standard methods: Index %zu, pkey ID %d, Name=%s",lVar6,
                *(undefined4 *)*ppuVar8,pcVar5);
      local_3c = 0;
      lVar6 = lVar6 + 1;
      ppuVar8 = ppuVar9;
      if (ppuVar9 == (undefined **)0x101158) goto LAB_00100680;
    }
    ppuVar8 = ppuVar8 + 1;
    lVar6 = lVar6 + 1;
  } while (ppuVar8 != (undefined **)0x101158);
LAB_00100680:
  iVar4 = test_int_ne("test/asn1_internal_test.c",0x66,"last_pkey_id",&_LC38,iVar10,0);
  if (iVar4 == 0) {
    test_note("asn1 standard methods: out of order");
    lVar6 = 0;
    do {
      pcVar5 = OBJ_nid2sn(*(int *)(&standard_methods)[lVar6]);
      lVar7 = lVar6 + 1;
      test_note("asn1 standard methods: Index %zu, pkey ID %d, Name=%s",lVar6,
                *(undefined4 *)(&standard_methods)[lVar6],pcVar5);
      local_3c = 0;
      lVar6 = lVar7;
    } while (lVar7 != 0xf);
  }
  else {
    test_info("test/asn1_internal_test.c",0x67,"asn1 standard methods: Table order OK");
  }
  return local_3c;
}



undefined4 test_tbl_standard(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  
  piVar2 = &tbl_standard;
  iVar1 = -1;
  do {
    iVar6 = *piVar2;
    if (iVar6 < iVar1) {
      iVar6 = 0;
      break;
    }
    piVar2 = piVar2 + 10;
    iVar1 = iVar6;
  } while (piVar2 != (int *)&_LC51);
  iVar1 = test_int_ne("test/asn1_internal_test.c",0x31,"last_nid",&_LC38,iVar6,0);
  if (iVar1 == 0) {
    test_info("test/asn1_internal_test.c",0x36,"asn1 tbl_standard: out of order");
    piVar2 = &tbl_standard;
    lVar5 = 0;
    do {
      piVar4 = piVar2 + 10;
      pcVar3 = OBJ_nid2ln(*piVar2);
      test_note("asn1 tbl_standard: Index %zu, NID %d, Name=%s",lVar5,*piVar2,pcVar3);
      piVar2 = piVar4;
      lVar5 = lVar5 + 1;
    } while (piVar4 != (int *)&_LC51);
    return 0;
  }
  test_info("test/asn1_internal_test.c",0x32,"asn1 tbl_standard: Table order OK");
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_unicode_range(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  uchar local_68 [16];
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long local_40;
  
  iVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = '\0';
  puVar4 = (uchar *)&local_78;
  local_78 = __LC51;
  uStack_70 = _UNK_001015c8;
  local_58 = __LC52;
  uStack_50 = (undefined5)_UNK_001015d8;
  uStack_4b = 0;
  uStack_48 = 0xffffffff;
  do {
    iVar1 = ASN1_mbstring_copy((ASN1_STRING **)0x0,puVar4,4,0x1004,0x2000);
    iVar1 = test_int_eq("test/asn1_internal_test.c",0xa5,
                        "ASN1_mbstring_copy(NULL, univ, 4, MBSTRING_UNIV, B_ASN1_UTF8STRING)",
                        "expected",iVar1,0xc);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    puVar4 = puVar4 + 4;
  } while (puVar4 != local_68);
  iVar1 = 1;
  puVar4 = (uchar *)&local_58;
  do {
    iVar2 = ASN1_mbstring_copy((ASN1_STRING **)0x0,puVar4,4,0x1004,0x2000);
    iVar2 = test_int_eq("test/asn1_internal_test.c",0xa5,
                        "ASN1_mbstring_copy(NULL, univ, 4, MBSTRING_UNIV, B_ASN1_UTF8STRING)",
                        "expected",iVar2,0xffffffff);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    puVar4 = puVar4 + 4;
  } while (puVar4 != (uchar *)((long)&uStack_48 + 4));
  if (iVar1 != 0) {
    iVar1 = iVar3;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("test_tbl_standard",test_tbl_standard);
  add_test("test_standard_methods",test_standard_methods);
  add_test("test_empty_nonoptional_content",test_empty_nonoptional_content);
  add_test("test_unicode_range",test_unicode_range);
  add_test("test_obj_create",test_obj_create);
  add_test("test_obj_nid_undef",0x100000);
  return 1;
}


