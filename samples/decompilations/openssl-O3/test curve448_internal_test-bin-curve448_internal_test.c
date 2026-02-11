
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 test_x448(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_x448(&local_78,in_scalar1,in_u1);
  iVar1 = test_true("test/curve448_internal_test.c",0x293,"ossl_x448(out, in_scalar1, in_u1)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = memcmp(&local_78,out_u1,0x38);
    iVar1 = test_int_eq("test/curve448_internal_test.c",0x294,"memcmp(out, out_u1, sizeof(out))",
                        &_LC2,iVar1,0);
    if (iVar1 != 0) {
      iVar1 = ossl_x448(&local_78,in_scalar2,in_u2);
      iVar1 = test_true("test/curve448_internal_test.c",0x295,"ossl_x448(out, in_scalar2, in_u2)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = memcmp(&local_78,out_u2,0x38);
        iVar1 = test_int_eq("test/curve448_internal_test.c",0x296,"memcmp(out, out_u2, sizeof(out))"
                            ,&_LC2,iVar1,0);
        if (iVar1 != 0) {
          local_f8 = 5;
          uStack_f0 = 0;
          local_c8 = 0;
          local_b8 = 5;
          uStack_b0 = 0;
          local_88 = 0;
          local_e8 = (undefined1  [16])0x0;
          local_d8 = (undefined1  [16])0x0;
          local_a8 = (undefined1  [16])0x0;
          local_98 = (undefined1  [16])0x0;
          if (max != 0) {
            iVar1 = -1;
            uVar4 = 1;
            do {
              if ((verbose != 0) && ((uVar4 * 0x3afb7e91 >> 4 | uVar4 * 0x10000000) < 0x68db9)) {
                putchar(0x2e);
                fflush(_stdout);
              }
              iVar2 = ossl_x448(&local_78,&local_b8,&local_f8);
              iVar2 = test_true("test/curve448_internal_test.c",0x2a1,"ossl_x448(out, k, u)",
                                iVar2 != 0);
              if (iVar2 == 0) goto LAB_0010006c;
              if ((uVar4 == 1 || uVar4 == 1000) || (uVar4 == 1000000)) {
                iVar1 = iVar1 + 1;
                iVar2 = memcmp(&local_78,out_u3 + (long)iVar1 * 0x38,0x38);
                iVar2 = test_int_eq("test/curve448_internal_test.c",0x2a6,
                                    "memcmp(out, out_u3[j], sizeof(out))",&_LC2,iVar2,0);
                if (iVar2 == 0) {
                  test_info("test/curve448_internal_test.c",0x2a7,"Failed at iteration %d",uVar4);
                  goto LAB_0010006c;
                }
              }
              uVar4 = uVar4 + 1;
              local_f8 = local_b8;
              uStack_f0 = uStack_b0;
              local_c8 = local_88;
              local_e8 = local_a8;
              local_d8 = local_98;
              local_88 = local_48;
              local_b8 = local_78;
              uStack_b0 = uStack_70;
              local_a8._8_8_ = uStack_60;
              local_a8._0_8_ = local_68;
              local_98._8_8_ = uStack_50;
              local_98._0_8_ = local_58;
            } while (uVar4 <= max);
          }
          uVar3 = 1;
          goto LAB_0010006e;
        }
      }
    }
  }
LAB_0010006c:
  uVar3 = 0;
LAB_0010006e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * dohash_constprop_0(EVP_MD_CTX *param_1,void *param_2)

{
  int iVar1;
  EVP_MD *type;
  
  type = (EVP_MD *)EVP_shake256();
  iVar1 = EVP_DigestInit_ex(param_1,type,(ENGINE *)0x0);
  if ((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(param_1,param_2,3), iVar1 != 0)) {
    iVar1 = EVP_DigestFinalXOF(param_1,hashout_0,0x40);
    if (iVar1 != 0) {
      return hashout_0;
    }
  }
  return (undefined1 *)0x0;
}



undefined8 test_ed448(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [120];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_MD_CTX_new();
  iVar1 = test_ptr("test/curve448_internal_test.c",0x25b,"hashctx",uVar2);
  if (iVar1 != 0) {
    iVar1 = ossl_ed448_sign(0,auStack_a8,0,0,pubkey1,privkey1,0,0,0,0);
    iVar1 = test_true("test/curve448_internal_test.c",0x25c,
                      "ossl_ed448_sign(NULL, outsig, NULL, 0, pubkey1, privkey1, NULL, 0, 0, NULL)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = memcmp(sig1,auStack_a8,0x72);
      iVar1 = test_int_eq("test/curve448_internal_test.c",0x25e,"memcmp(sig1, outsig, sizeof(sig1))"
                          ,&_LC2,iVar1,0);
      if (iVar1 != 0) {
        iVar1 = ossl_ed448_sign(0,auStack_a8,&msg2,1,pubkey2,privkey2,0,0,0,0);
        iVar1 = test_true("test/curve448_internal_test.c",0x25f,
                          "ossl_ed448_sign(NULL, outsig, msg2, sizeof(msg2), pubkey2, privkey2, NULL, 0, 0, NULL)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = memcmp(sig2,auStack_a8,0x72);
          iVar1 = test_int_eq("test/curve448_internal_test.c",0x261,
                              "memcmp(sig2, outsig, sizeof(sig2))",&_LC2,iVar1,0);
          if (iVar1 != 0) {
            iVar1 = ossl_ed448_sign(0,auStack_a8,&msg3,1,pubkey3,privkey3,&context3,3,0,0);
            iVar1 = test_true("test/curve448_internal_test.c",0x262,
                              "ossl_ed448_sign(NULL, outsig, msg3, sizeof(msg3), pubkey3, privkey3, context3, sizeof(context3), 0, NULL)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = memcmp(sig3,auStack_a8,0x72);
              iVar1 = test_int_eq("test/curve448_internal_test.c",0x265,
                                  "memcmp(sig3, outsig, sizeof(sig3))",&_LC2,iVar1,0);
              if (iVar1 != 0) {
                iVar1 = ossl_ed448_sign(0,auStack_a8,msg4,0xb,pubkey4,privkey4,0,0,0,0);
                iVar1 = test_true("test/curve448_internal_test.c",0x266,
                                  "ossl_ed448_sign(NULL, outsig, msg4, sizeof(msg4), pubkey4, privkey4, NULL, 0, 0, NULL)"
                                  ,iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = memcmp(sig4,auStack_a8,0x72);
                  iVar1 = test_int_eq("test/curve448_internal_test.c",0x268,
                                      "memcmp(sig4, outsig, sizeof(sig4))",&_LC2,iVar1,0);
                  if (iVar1 != 0) {
                    iVar1 = ossl_ed448_sign(0,auStack_a8,msg5,0xc,pubkey5,privkey5,0,0,0,0);
                    iVar1 = test_true("test/curve448_internal_test.c",0x269,
                                      "ossl_ed448_sign(NULL, outsig, msg5, sizeof(msg5), pubkey5, privkey5, NULL, 0, 0, NULL)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = memcmp(sig5,auStack_a8,0x72);
                      iVar1 = test_int_eq("test/curve448_internal_test.c",0x26b,
                                          "memcmp(sig5, outsig, sizeof(sig5))",&_LC2,iVar1,0);
                      if (iVar1 != 0) {
                        iVar1 = ossl_ed448_sign(0,auStack_a8,msg6,0xd,pubkey6,privkey6,0,0,0,0);
                        iVar1 = test_true("test/curve448_internal_test.c",0x26c,
                                          "ossl_ed448_sign(NULL, outsig, msg6, sizeof(msg6), pubkey6, privkey6, NULL, 0, 0, NULL)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = memcmp(sig6,auStack_a8,0x72);
                          iVar1 = test_int_eq("test/curve448_internal_test.c",0x26e,
                                              "memcmp(sig6, outsig, sizeof(sig6))",&_LC2,iVar1,0);
                          if (iVar1 != 0) {
                            iVar1 = ossl_ed448_sign(0,auStack_a8,msg7,0x40,pubkey7,privkey7,0,0,0,0)
                            ;
                            iVar1 = test_true("test/curve448_internal_test.c",0x26f,
                                              "ossl_ed448_sign(NULL, outsig, msg7, sizeof(msg7), pubkey7, privkey7, NULL, 0, 0, NULL)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = memcmp(sig7,auStack_a8,0x72);
                              iVar1 = test_int_eq("test/curve448_internal_test.c",0x271,
                                                  "memcmp(sig7, outsig, sizeof(sig7))",&_LC2,iVar1,0
                                                 );
                              if (iVar1 != 0) {
                                iVar1 = ossl_ed448_sign(0,auStack_a8,msg8,0x100,pubkey8,privkey8,0,0
                                                        ,0,0);
                                iVar1 = test_true("test/curve448_internal_test.c",0x272,
                                                  "ossl_ed448_sign(NULL, outsig, msg8, sizeof(msg8), pubkey8, privkey8, NULL, 0, 0, NULL)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = memcmp(sig8,auStack_a8,0x72);
                                  iVar1 = test_int_eq("test/curve448_internal_test.c",0x274,
                                                      "memcmp(sig8, outsig, sizeof(sig8))",&_LC2,
                                                      iVar1,0);
                                  if (iVar1 != 0) {
                                    iVar1 = ossl_ed448_sign(0,auStack_a8,msg9,0x3ff,pubkey9,privkey9
                                                            ,0,0,0,0);
                                    iVar1 = test_true("test/curve448_internal_test.c",0x275,
                                                                                                            
                                                  "ossl_ed448_sign(NULL, outsig, msg9, sizeof(msg9), pubkey9, privkey9, NULL, 0, 0, NULL)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      iVar1 = memcmp(sig9,auStack_a8,0x72);
                                      iVar1 = test_int_eq("test/curve448_internal_test.c",0x277,
                                                          "memcmp(sig9, outsig, sizeof(sig9))",&_LC2
                                                          ,iVar1,0);
                                      if (iVar1 != 0) {
                                        uVar3 = dohash_constprop_0(uVar2,&phmsg1);
                                        iVar1 = ossl_ed448_sign(0,auStack_a8,uVar3,0x40,phpubkey1,
                                                                phprivkey1,0,0,1,0);
                                        iVar1 = test_true("test/curve448_internal_test.c",0x278,
                                                                                                                    
                                                  "ossl_ed448_sign(NULL, outsig, dohash(hashctx, phmsg1, sizeof(phmsg1)), 64, phpubkey1, phprivkey1, NULL, 0, 1, NULL)"
                                                  ,iVar1 != 0);
                                        if (iVar1 != 0) {
                                          iVar1 = memcmp(phsig1,auStack_a8,0x72);
                                          iVar1 = test_int_eq("test/curve448_internal_test.c",0x27c,
                                                                                                                            
                                                  "memcmp(phsig1, outsig, sizeof(phsig1))",&_LC2,
                                                  iVar1,0);
                                          if (iVar1 != 0) {
                                            uVar3 = dohash_constprop_0(uVar2,&phmsg2);
                                            iVar1 = ossl_ed448_sign(0,auStack_a8,uVar3,0x40,
                                                                    phpubkey2,phprivkey2,&phcontext2
                                                                    ,3,1,0);
                                            iVar1 = test_true("test/curve448_internal_test.c",0x27d,
                                                                                                                            
                                                  "ossl_ed448_sign(NULL, outsig, dohash(hashctx, phmsg2, sizeof(phmsg2)), 64, phpubkey2, phprivkey2, phcontext2, sizeof(phcontext2), 1, NULL)"
                                                  ,iVar1 != 0);
                                            if (iVar1 != 0) {
                                              iVar1 = memcmp(phsig2,auStack_a8,0x72);
                                              iVar1 = test_int_eq("test/curve448_internal_test.c",
                                                                  0x282,
                                                  "memcmp(phsig2, outsig, sizeof(phsig2))",&_LC2,
                                                  iVar1,0);
                                              if (iVar1 != 0) {
                                                EVP_MD_CTX_free(uVar2);
                                                uVar2 = 1;
                                                goto LAB_0010046e;
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
          }
        }
      }
    }
  }
  EVP_MD_CTX_free(uVar2);
  uVar2 = 0;
LAB_0010046e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_1;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
LAB_00100a98:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        add_test("test_x448",0x100000);
        add_test("test_ed448",test_ed448);
        return 1;
      }
      if (iVar1 == 2) {
        max = 1000000;
        goto LAB_00100a98;
      }
      if (2 < iVar1) break;
      if (iVar1 != 1) {
        return 0;
      }
      verbose = 1;
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}


