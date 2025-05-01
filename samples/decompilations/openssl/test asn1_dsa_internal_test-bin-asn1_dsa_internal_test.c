
undefined8 test_decode(void)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = BN_new();
  a_00 = BN_new();
  local_48 = &t_dsa_sig;
  lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,8);
  if ((((lVar2 == 0) ||
       (iVar1 = test_ptr_eq("test/asn1_dsa_internal_test.c",0x61,&_LC3,
                            "(t_dsa_sig + sizeof(t_dsa_sig))",local_48,
                            "asn1_dsa test_decode: t_dsa_sig failed"), iVar1 == 0)) ||
      (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x62,&_LC5,&_LC4,a,1), iVar1 == 0))
     || (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x62,&_LC7,&_LC6,a_00,2),
        iVar1 == 0)) {
    test_info("test/asn1_dsa_internal_test.c",99,"asn1_dsa test_decode: t_dsa_sig failed");
  }
  else {
    BN_clear(a);
    BN_clear(a_00);
    local_48 = (undefined8 *)t_dsa_sig_extra;
    lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,10);
    if (((lVar2 == 0) ||
        (iVar1 = test_ptr_eq("test/asn1_dsa_internal_test.c",0x6b,&_LC3,
                             "(t_dsa_sig_extra + sizeof(t_dsa_sig_extra) - 2)",local_48,0x1005d8),
        iVar1 == 0)) ||
       ((iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x6d,&_LC5,&_LC4,a,1), iVar1 == 0
        || (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x6d,&_LC7,&_LC6,a_00,2),
           iVar1 == 0)))) {
      test_info("test/asn1_dsa_internal_test.c",0x6e,"asn1_dsa test_decode: t_dsa_sig_extra failed")
      ;
    }
    else {
      BN_clear(a);
      BN_clear(a_00);
      local_48 = (undefined8 *)t_dsa_sig_msb;
      lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,10);
      if (((lVar2 == 0) ||
          (iVar1 = test_ptr_eq("test/asn1_dsa_internal_test.c",0x76,&_LC3,
                               "(t_dsa_sig_msb + sizeof(t_dsa_sig_msb))",local_48,&DAT_001005ca),
          iVar1 == 0)) ||
         ((iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x77,&_LC5,&_LC12,a,0x81),
          iVar1 == 0 ||
          (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x77,&_LC7,&_LC13,a_00,0x82),
          iVar1 == 0)))) {
        test_info("test/asn1_dsa_internal_test.c",0x78,"asn1_dsa test_decode: t_dsa_sig_msb failed")
        ;
      }
      else {
        BN_clear(a);
        BN_clear(a_00);
        local_48 = (undefined8 *)t_dsa_sig_two;
        lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,10);
        if ((((lVar2 == 0) ||
             (iVar1 = test_ptr_eq("test/asn1_dsa_internal_test.c",0x80,&_LC3,
                                  "(t_dsa_sig_two + sizeof(t_dsa_sig_two))",local_48,&DAT_001005ba),
             iVar1 == 0)) ||
            (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x81,&_LC5,"0x100",a,0x100),
            iVar1 == 0)) ||
           (iVar1 = test_BN_eq_word("test/asn1_dsa_internal_test.c",0x81,&_LC7,"0x200",a_00,0x200),
           iVar1 == 0)) {
          test_info("test/asn1_dsa_internal_test.c",0x82,
                    "asn1_dsa test_decode: t_dsa_sig_two failed");
        }
        else {
          local_48 = (undefined8 *)&t_invalid_int_zero;
          lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,7);
          if (lVar2 == 0) {
            BN_clear(a);
            BN_clear(a_00);
            local_48 = (undefined8 *)t_invalid_int;
            lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,9);
            if (lVar2 == 0) {
              BN_clear(a);
              BN_clear(a_00);
              local_48 = &t_neg_int;
              lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,8);
              if (lVar2 == 0) {
                BN_clear(a);
                BN_clear(a_00);
                local_48 = (undefined8 *)t_trunc_der;
                lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,9);
                if (lVar2 == 0) {
                  BN_clear(a);
                  BN_clear(a_00);
                  uVar3 = 1;
                  local_48 = (undefined8 *)t_trunc_seq;
                  lVar2 = ossl_decode_der_dsa_sig(a,a_00,&local_48,10);
                  if (lVar2 == 0) goto LAB_001000a9;
                  test_info("test/asn1_dsa_internal_test.c",0xa9,
                            "asn1_dsa test_decode: Expected fail t_trunc_seq");
                }
                else {
                  test_info("test/asn1_dsa_internal_test.c",0xa1,
                            "asn1_dsa test_decode: Expected fail t_trunc_der");
                }
              }
              else {
                test_info("test/asn1_dsa_internal_test.c",0x99,
                          "asn1_dsa test_decode: Expected t_neg_int to fail");
              }
            }
            else {
              test_info("test/asn1_dsa_internal_test.c",0x91,
                        "asn1_dsa test_decode: Expected t_invalid_int to fail");
            }
          }
          else {
            test_info("test/asn1_dsa_internal_test.c",0x89,
                      "asn1_dsa test_decode: Expected t_invalid_int_zero to fail");
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_001000a9:
  BN_free(a);
  BN_free(a_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 setup_tests(void)

{
  add_test("test_decode",0x100000);
  return 1;
}


