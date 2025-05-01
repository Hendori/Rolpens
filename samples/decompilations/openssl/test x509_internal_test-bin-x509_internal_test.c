
undefined8 ck_purp(void)

{
  return 1;
}



bool tests_X509_PURPOSE(void)

{
  int iVar1;
  int iVar2;
  uint idx;
  X509_PURPOSE *xp;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = X509_PURPOSE_get_unused_id(0);
  iVar2 = test_int_gt("test/x509_internal_test.c",0xc1,"(id = X509_PURPOSE_get_unused_id(libctx))",
                      "X509_PURPOSE_MAX",iVar1,10);
  if (iVar2 != 0) {
    iVar2 = X509_PURPOSE_get_count();
    iVar2 = test_int_eq("test/x509_internal_test.c",0xc2,"X509_PURPOSE_get_count() + 1",&_LC3,
                        iVar2 + 1,iVar1);
    if (iVar2 != 0) {
      iVar2 = X509_PURPOSE_get_by_id(iVar1);
      iVar2 = test_int_eq("test/x509_internal_test.c",0xc3,"X509_PURPOSE_get_by_id(id)",&_LC5,iVar2,
                          0xffffffff);
      if (iVar2 != 0) {
        iVar2 = X509_PURPOSE_get_by_sname("SN_test");
        iVar2 = test_int_eq("test/x509_internal_test.c",0xc4,"X509_PURPOSE_get_by_sname(SN)",&_LC5,
                            iVar2,0xffffffff);
        if (iVar2 != 0) {
          iVar2 = X509_PURPOSE_add(iVar1,8,0,ck_purp,"LN_test","SN_test",(void *)0x0);
          iVar2 = test_int_eq("test/x509_internal_test.c",199,"X509_PURPOSE_add(ARGS(id, SN))",
                              &_LC10,iVar2,1);
          if (iVar2 != 0) {
            idx = X509_PURPOSE_get_by_sname("SN_test");
            iVar2 = test_int_ne("test/x509_internal_test.c",200,
                                "(idx = X509_PURPOSE_get_by_sname(SN))",&_LC5,idx,0xffffffff);
            if (iVar2 != 0) {
              iVar2 = X509_PURPOSE_get_by_id(iVar1);
              uVar4 = (ulong)idx;
              iVar2 = test_int_eq("test/x509_internal_test.c",0xc9,"X509_PURPOSE_get_by_id(id)",
                                  &_LC13,iVar2);
              if (iVar2 != 0) {
                uVar5 = 0;
                iVar2 = X509_PURPOSE_add(iVar1,8,0,ck_purp,"LN_test","SN_test",(void *)0x0);
                iVar2 = test_int_eq("test/x509_internal_test.c",0xcc,
                                    "X509_PURPOSE_add(ARGS(id, SN))",&_LC10,iVar2,1,uVar5,uVar4);
                if (iVar2 != 0) {
                  iVar2 = X509_PURPOSE_get_by_sname("SN_test");
                  iVar2 = test_int_eq("test/x509_internal_test.c",0xcd,
                                      "X509_PURPOSE_get_by_sname(SN)",&_LC13,iVar2,idx);
                  if (iVar2 != 0) {
                    iVar2 = X509_PURPOSE_get_by_id(iVar1);
                    uVar5 = 0xce;
                    iVar2 = test_int_eq("test/x509_internal_test.c",0xce,
                                        "X509_PURPOSE_get_by_id(id)",&_LC13,iVar2,idx);
                    if (iVar2 != 0) {
                      uVar6 = 0;
                      iVar2 = X509_PURPOSE_add(10,8,0,ck_purp,"LN_test","SN_test",(void *)0x0);
                      uVar5 = test_int_eq("test/x509_internal_test.c",0xd1,
                                          "X509_PURPOSE_add(ARGS(X509_PURPOSE_MAX, SN))",&_LC14,
                                          iVar2,0,uVar6,uVar5);
                      if ((int)uVar5 != 0) {
                        uVar6 = 0;
                        iVar2 = X509_PURPOSE_add(iVar1,8,0,ck_purp,"LN_test","SN_test_different",
                                                 (void *)0x0);
                        iVar2 = test_int_eq("test/x509_internal_test.c",0xd3,
                                            "X509_PURPOSE_add(ARGS(id, SN\"_different\"))",&_LC14,
                                            iVar2,0,uVar6,uVar5);
                        if (iVar2 != 0) {
                          xp = X509_PURPOSE_get0(idx);
                          iVar2 = test_ptr("test/x509_internal_test.c",0xd5,
                                           "(xp = X509_PURPOSE_get0(idx))",xp);
                          if (iVar2 != 0) {
                            iVar2 = X509_PURPOSE_get_id(xp);
                            iVar2 = test_int_eq("test/x509_internal_test.c",0xd6,
                                                "X509_PURPOSE_get_id(xp)",&_LC3,iVar2,iVar1);
                            if (iVar2 != 0) {
                              pcVar3 = X509_PURPOSE_get0_name(xp);
                              iVar2 = test_str_eq("test/x509_internal_test.c",0xd7,
                                                  "X509_PURPOSE_get0_name(xp)",&_LC20,pcVar3,
                                                  "LN_test");
                              if (iVar2 != 0) {
                                pcVar3 = X509_PURPOSE_get0_sname(xp);
                                iVar2 = test_str_eq("test/x509_internal_test.c",0xd8,
                                                    "X509_PURPOSE_get0_sname(xp)",&_LC22,pcVar3,
                                                    "SN_test");
                                if (iVar2 != 0) {
                                  iVar2 = X509_PURPOSE_get_trust(xp);
                                  iVar2 = test_int_eq("test/x509_internal_test.c",0xd9,
                                                      "X509_PURPOSE_get_trust(xp)","X509_TRUST_MAX",
                                                      iVar2,8);
                                  if ((iVar2 != 0) &&
                                     (iVar1 = test_int_eq("test/x509_internal_test.c",0xdb,
                                                          "*(p = &xp->purpose)",&_LC3,xp->purpose,
                                                          iVar1), iVar1 != 0)) {
                                    iVar1 = X509_PURPOSE_set(&xp->purpose,0);
                                    iVar1 = test_int_eq("test/x509_internal_test.c",0xdc,
                                                                                                                
                                                  "X509_PURPOSE_set(p, X509_PURPOSE_DEFAULT_ANY)",
                                                  &_LC10,iVar1,1);
                                    if (iVar1 != 0) {
                                      iVar1 = X509_PURPOSE_get_id(xp);
                                      iVar1 = test_int_eq("test/x509_internal_test.c",0xdd,
                                                          "X509_PURPOSE_get_id(xp)",
                                                          "X509_PURPOSE_DEFAULT_ANY",iVar1,0);
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
    }
  }
  return false;
}



bool test_a2i_ipaddress(int param_1)

{
  long lVar1;
  char *ipasc;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ASN1_OCTET_STRING *x;
  undefined8 uVar5;
  bool bVar6;
  
  lVar1 = (long)param_1 * 0x18;
  ipasc = *(char **)(a2i_ipaddress_tests + lVar1);
  iVar3 = *(int *)(a2i_ipaddress_tests + lVar1 + 0x10);
  x = a2i_IPADDRESS(ipasc);
  if (iVar3 == 0) {
    bVar6 = true;
    iVar3 = test_ptr_null("test/x509_internal_test.c",0x9f);
    if (iVar3 == 0) {
      bVar6 = false;
      test_note("\'%s\' should not be parsed as IP address",ipasc);
    }
  }
  else {
    iVar4 = test_ptr("test/x509_internal_test.c",0xa4,&_LC29,x);
    if (iVar4 != 0) {
      iVar4 = ASN1_STRING_length(x);
      iVar4 = test_int_eq("test/x509_internal_test.c",0xa5,"ASN1_STRING_length(ip)",&_LC31,iVar4,
                          iVar3);
      if (iVar4 != 0) {
        uVar2 = *(undefined8 *)(a2i_ipaddress_tests + lVar1 + 8);
        uVar5 = ASN1_STRING_get0_data(x);
        iVar3 = test_mem_eq("test/x509_internal_test.c",0xa6,"ASN1_STRING_get0_data(ip)",
                            "a2i_ipaddress_tests[idx].data",uVar5,(long)iVar3,uVar2,(long)iVar3);
        bVar6 = iVar3 != 0;
        goto LAB_001004ff;
      }
    }
    bVar6 = false;
  }
LAB_001004ff:
  ASN1_OCTET_STRING_free(x);
  return bVar6;
}



int test_standard_exts(void)

{
  int *piVar1;
  undefined **ppuVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  
  ppuVar2 = &standard_exts;
  iVar5 = 1;
  iVar4 = -1;
  do {
    piVar1 = (int *)*ppuVar2;
    if (*piVar1 < iVar4) {
      iVar5 = 0;
    }
    ppuVar2 = ppuVar2 + 1;
    iVar4 = *piVar1;
  } while ((NoteGnuProperty_4 *)ppuVar2 != &NoteGnuProperty_4_00101588);
  if (iVar5 != 0) {
    return iVar5;
  }
  test_error("test/x509_internal_test.c",0x2c,"Extensions out of order!");
  ppuVar2 = &standard_exts;
  do {
    ppuVar6 = ppuVar2 + 1;
    pcVar3 = OBJ_nid2sn(*(int *)*ppuVar2);
    test_note("%d : %s",*(undefined4 *)*ppuVar2,pcVar3);
    ppuVar2 = ppuVar6;
  } while ((NoteGnuProperty_4 *)ppuVar6 != &NoteGnuProperty_4_00101588);
  return 0;
}



undefined8 setup_tests(void)

{
  add_test("test_standard_exts",test_standard_exts);
  add_all_tests("test_a2i_ipaddress",test_a2i_ipaddress,0x3e,1);
  add_test("tests_X509_PURPOSE",tests_X509_PURPOSE);
  return 1;
}


