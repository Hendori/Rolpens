
bool ffc_params_copy_test(void)

{
  int iVar1;
  DH *dh;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_98 [88];
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_ffc_params_init(auStack_98);
  dh = (DH *)DH_new_by_nid(0x467);
  iVar1 = test_ptr("test/ffc_internal_test.c",0x29f,"dh = DH_new_by_nid(NID_ffdhe3072)",dh);
  if (iVar1 != 0) {
    lVar2 = ossl_dh_get0_params(dh);
    iVar1 = test_int_eq("test/ffc_internal_test.c",0x2a3,"params->keylength",&_LC2,
                        *(undefined4 *)(lVar2 + 0x58),0x113);
    if (iVar1 != 0) {
      iVar1 = ossl_ffc_params_copy(auStack_98,lVar2);
      iVar1 = test_true("test/ffc_internal_test.c",0x2a6,"ossl_ffc_params_copy(&copy, params)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = test_int_eq("test/ffc_internal_test.c",0x2a9,"copy.keylength",&_LC2,local_40,0x113);
        if (iVar1 != 0) {
          iVar1 = ossl_ffc_params_cmp(auStack_98,lVar2,0);
          iVar1 = test_true("test/ffc_internal_test.c",0x2ac,"ossl_ffc_params_cmp(&copy, params, 0)"
                            ,iVar1 != 0);
          bVar3 = iVar1 != 0;
          goto LAB_0010005d;
        }
      }
    }
  }
  bVar3 = false;
LAB_0010005d:
  ossl_ffc_params_cleanup(auStack_98);
  DH_free(dh);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_private_gen_test(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  BN_CTX *c;
  BIGNUM *a;
  DH *dh;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0xffffffff;
  c = (BN_CTX *)BN_CTX_new_ex(0);
  iVar2 = test_ptr("test/ffc_internal_test.c",0x266,"ctx = BN_CTX_new_ex(NULL)",c);
  if (iVar2 == 0) {
    uVar3 = 0;
    dh = (DH *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a = BN_new();
    dh = (DH *)0x0;
    uVar3 = test_ptr("test/ffc_internal_test.c",0x269,"priv = BN_new()",a);
    if (uVar3 != 0) {
      dh = (DH *)DH_new_by_nid(0x466);
      iVar2 = test_ptr("test/ffc_internal_test.c",0x26c,"dh = DH_new_by_nid(NID_ffdhe2048)",dh);
      if (iVar2 != 0) {
        puVar5 = (undefined8 *)ossl_dh_get0_params(dh);
        iVar2 = BN_num_bits((BIGNUM *)puVar5[1]);
        iVar4 = ossl_ffc_generate_private_key(c,puVar5,0xdc,0x70,a);
        iVar4 = test_false("test/ffc_internal_test.c",0x272,
                           "ossl_ffc_generate_private_key(ctx, params, 220, 112, priv)",iVar4 != 0);
        if (iVar4 != 0) {
          iVar4 = ossl_ffc_generate_private_key(c,puVar5,iVar2 + 1,0x70,a);
          iVar4 = test_false("test/ffc_internal_test.c",0x275,
                             "ossl_ffc_generate_private_key(ctx, params, N + 1, 112, priv)",
                             iVar4 != 0);
          if (iVar4 != 0) {
            iVar4 = ossl_ffc_generate_private_key(c,puVar5,iVar2,0,a);
            iVar4 = test_false("test/ffc_internal_test.c",0x278,
                               "ossl_ffc_generate_private_key(ctx, params, N, 0, priv)",iVar4 != 0);
            if (iVar4 != 0) {
              iVar4 = ossl_ffc_generate_private_key(c,puVar5,iVar2,0x70,a);
              iVar4 = test_true("test/ffc_internal_test.c",0x27b,
                                "ossl_ffc_generate_private_key(ctx, params, N, 112, priv)",
                                iVar4 != 0);
              if (iVar4 != 0) {
                iVar4 = ossl_ffc_validate_private_key(puVar5[1],a,&local_44);
                iVar4 = test_true("test/ffc_internal_test.c",0x27e,
                                  "ossl_ffc_validate_private_key(params->q, priv, &res)",iVar4 != 0)
                ;
                if (iVar4 != 0) {
                  iVar2 = ossl_ffc_generate_private_key(c,puVar5,iVar2 / 2,0x70,a);
                  iVar2 = test_true("test/ffc_internal_test.c",0x281,
                                    "ossl_ffc_generate_private_key(ctx, params, N / 2, 112, priv)",
                                    iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = ossl_ffc_validate_private_key(puVar5[1],a,&local_44);
                    iVar2 = test_true("test/ffc_internal_test.c",0x283,
                                      "ossl_ffc_validate_private_key(params->q, priv, &res)",
                                      iVar2 != 0);
                    if (iVar2 != 0) {
                      iVar2 = BN_num_bits((BIGNUM *)*puVar5);
                      uVar1 = ossl_ifc_ffc_compute_security_bits(iVar2);
                      iVar2 = ossl_ffc_generate_private_key(c,puVar5,0,uVar1,a);
                      iVar2 = test_true("test/ffc_internal_test.c",0x286,
                                        "ossl_ffc_generate_private_key(ctx, params, 0, ossl_ifc_ffc_compute_security_bits(BN_num_bits(params->p)), priv)"
                                        ,iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = BN_num_bits(a);
                        iVar2 = test_int_le("test/ffc_internal_test.c",0x28a,"BN_num_bits(priv)",
                                            &_LC17,iVar2,0xe1);
                        if (iVar2 != 0) {
                          iVar2 = ossl_ffc_validate_private_key(puVar5[1],a,&local_44);
                          iVar2 = test_true("test/ffc_internal_test.c",0x28c,
                                            "ossl_ffc_validate_private_key(params->q, priv, &res)",
                                            iVar2 != 0);
                          uVar3 = (uint)(iVar2 != 0);
                          goto LAB_001001ce;
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
      uVar3 = 0;
    }
  }
LAB_001001ce:
  DH_free(dh);
  BN_free(a);
  BN_CTX_free(c);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_private_validate_test(void)

{
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  DH *dh;
  long lVar3;
  BIGNUM *pBVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  dh = (DH *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0xffffffff;
  a = BN_new();
  uVar1 = test_ptr("test/ffc_internal_test.c",0x222,"priv = BN_new()",a);
  if (uVar1 != 0) {
    dh = (DH *)DH_new_by_nid(0x466);
    iVar2 = test_ptr("test/ffc_internal_test.c",0x225,"dh = DH_new_by_nid(NID_ffdhe2048)",dh);
    if (iVar2 != 0) {
      lVar3 = ossl_dh_get0_params(dh);
      iVar2 = BN_set_word(a,1);
      iVar2 = test_true("test/ffc_internal_test.c",0x229,"BN_set_word(priv, 1)",iVar2 != 0);
      if (iVar2 != 0) {
        BN_set_negative(a,1);
        iVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(lVar3 + 8),a,&local_44);
        iVar2 = test_false("test/ffc_internal_test.c",0x22d,
                           "ossl_ffc_validate_private_key(params->q, priv, &res)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/ffc_internal_test.c",0x22f,"FFC_ERROR_PRIVKEY_TOO_SMALL",&_LC20,
                              0x10,local_44);
          if (iVar2 != 0) {
            iVar2 = BN_set_word(a,0);
            iVar2 = test_true("test/ffc_internal_test.c",0x232,"BN_set_word(priv, 0)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(lVar3 + 8),a,&local_44);
              iVar2 = test_false("test/ffc_internal_test.c",0x235,
                                 "ossl_ffc_validate_private_key(params->q, priv, &res)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/ffc_internal_test.c",0x237,"FFC_ERROR_PRIVKEY_TOO_SMALL",
                                    &_LC20,0x10,local_44);
                if (iVar2 != 0) {
                  pBVar4 = BN_value_one();
                  iVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(lVar3 + 8),pBVar4,&local_44)
                  ;
                  iVar2 = test_true("test/ffc_internal_test.c",0x23b,
                                    "ossl_ffc_validate_private_key(params->q, BN_value_one(), &res)"
                                    ,iVar2 != 0);
                  if (iVar2 != 0) {
                    pBVar4 = BN_copy(a,*(BIGNUM **)(lVar3 + 8));
                    iVar2 = test_ptr("test/ffc_internal_test.c",0x23f,"BN_copy(priv, params->q)",
                                     pBVar4);
                    if (iVar2 != 0) {
                      iVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(lVar3 + 8),a,&local_44);
                      iVar2 = test_false("test/ffc_internal_test.c",0x242,
                                         "ossl_ffc_validate_private_key(params->q, priv, &res)",
                                         iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = test_int_eq("test/ffc_internal_test.c",0x244,
                                            "FFC_ERROR_PRIVKEY_TOO_LARGE",&_LC20,0x20,local_44);
                        if (iVar2 != 0) {
                          iVar2 = BN_sub_word(a,1);
                          iVar2 = test_true("test/ffc_internal_test.c",0x247,"BN_sub_word(priv, 1)",
                                            iVar2 != 0);
                          if (iVar2 != 0) {
                            iVar2 = ossl_ffc_validate_private_key
                                              (*(undefined8 *)(lVar3 + 8),a,&local_44);
                            iVar2 = test_true("test/ffc_internal_test.c",0x24a,
                                              "ossl_ffc_validate_private_key(params->q, priv, &res)"
                                              ,iVar2 != 0);
                            if (iVar2 != 0) {
                              iVar2 = ossl_ffc_validate_private_key(0,a,&local_44);
                              iVar2 = test_false("test/ffc_internal_test.c",0x24d,
                                                 "ossl_ffc_validate_private_key(NULL, priv, &res)",
                                                 iVar2 != 0);
                              if (iVar2 != 0) {
                                iVar2 = test_int_eq("test/ffc_internal_test.c",0x24f,
                                                    "FFC_ERROR_PASSED_NULL_PARAM",&_LC20,0x40,
                                                    local_44);
                                if (iVar2 != 0) {
                                  local_44 = 0xffffffff;
                                  iVar2 = ossl_ffc_validate_private_key
                                                    (*(undefined8 *)(lVar3 + 8),0,&local_44);
                                  iVar2 = test_false("test/ffc_internal_test.c",0x252,
                                                                                                          
                                                  "ossl_ffc_validate_private_key(params->q, NULL, &res)"
                                                  ,iVar2 != 0);
                                  if (iVar2 != 0) {
                                    iVar2 = test_int_eq("test/ffc_internal_test.c",0x254,
                                                        "FFC_ERROR_PASSED_NULL_PARAM",&_LC20,0x40,
                                                        local_44);
                                    uVar1 = (uint)(iVar2 != 0);
                                    goto LAB_0010053a;
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
    uVar1 = 0;
  }
LAB_0010053a:
  DH_free(dh);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_public_validate_test(void)

{
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  DH *dh;
  undefined8 *puVar3;
  BIGNUM *pBVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  dh = (DH *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0xffffffff;
  a = BN_new();
  uVar1 = test_ptr("test/ffc_internal_test.c",0x1c0,"pub = BN_new()",a);
  if (uVar1 != 0) {
    dh = (DH *)DH_new_by_nid(0x466);
    iVar2 = test_ptr("test/ffc_internal_test.c",0x1c3,"dh = DH_new_by_nid(NID_ffdhe2048)",dh);
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)ossl_dh_get0_params(dh);
      iVar2 = BN_set_word(a,1);
      iVar2 = test_true("test/ffc_internal_test.c",0x1c7,"BN_set_word(pub, 1)",iVar2 != 0);
      if (iVar2 != 0) {
        BN_set_negative(a,1);
        iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
        iVar2 = test_true("test/ffc_internal_test.c",0x1cb,
                          "ossl_ffc_validate_public_key(params, pub, &res)",iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = test_int_eq("test/ffc_internal_test.c",0x1cd,"FFC_ERROR_PUBKEY_TOO_SMALL",&_LC20,1
                              ,local_44);
          if (iVar2 != 0) {
            iVar2 = BN_set_word(a,0);
            iVar2 = test_true("test/ffc_internal_test.c",0x1cf,"BN_set_word(pub, 0)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
              iVar2 = test_true("test/ffc_internal_test.c",0x1d2,
                                "ossl_ffc_validate_public_key(params, pub, &res)",iVar2 != 0);
              if (iVar2 != 0) {
                iVar2 = test_int_eq("test/ffc_internal_test.c",0x1d4,"FFC_ERROR_PUBKEY_TOO_SMALL",
                                    &_LC20,1,local_44);
                if (iVar2 != 0) {
                  pBVar4 = BN_value_one();
                  iVar2 = ossl_ffc_validate_public_key(puVar3,pBVar4,&local_44);
                  iVar2 = test_true("test/ffc_internal_test.c",0x1d7,
                                    "ossl_ffc_validate_public_key(params, BN_value_one(), &res)",
                                    iVar2 != 0);
                  if (iVar2 != 0) {
                    iVar2 = test_int_eq("test/ffc_internal_test.c",0x1d9,
                                        "FFC_ERROR_PUBKEY_TOO_SMALL",&_LC20,1,local_44);
                    if (iVar2 != 0) {
                      iVar2 = BN_add_word(a,2);
                      iVar2 = test_true("test/ffc_internal_test.c",0x1db,"BN_add_word(pub, 2)",
                                        iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
                        iVar2 = test_true("test/ffc_internal_test.c",0x1de,
                                          "ossl_ffc_validate_public_key(params, pub, &res)",
                                          iVar2 != 0);
                        if (iVar2 != 0) {
                          pBVar4 = BN_copy(a,(BIGNUM *)*puVar3);
                          iVar2 = test_ptr("test/ffc_internal_test.c",0x1e1,
                                           "BN_copy(pub, params->p)",pBVar4);
                          if (iVar2 != 0) {
                            iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
                            iVar2 = test_true("test/ffc_internal_test.c",0x1e4,
                                              "ossl_ffc_validate_public_key(params, pub, &res)",
                                              iVar2 != 0);
                            if (iVar2 != 0) {
                              iVar2 = test_int_eq("test/ffc_internal_test.c",0x1e6,
                                                  "FFC_ERROR_PUBKEY_TOO_LARGE",&_LC20,2,local_44);
                              if (iVar2 != 0) {
                                iVar2 = BN_sub_word(a,1);
                                iVar2 = test_true("test/ffc_internal_test.c",0x1e9,
                                                  "BN_sub_word(pub, 1)",iVar2 != 0);
                                if (iVar2 != 0) {
                                  iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
                                  iVar2 = test_true("test/ffc_internal_test.c",0x1ec,
                                                                                                        
                                                  "ossl_ffc_validate_public_key(params, pub, &res)",
                                                  iVar2 != 0);
                                  if (iVar2 != 0) {
                                    iVar2 = test_int_eq("test/ffc_internal_test.c",0x1ee,
                                                        "FFC_ERROR_PUBKEY_TOO_LARGE",&_LC20,2,
                                                        local_44);
                                    if (iVar2 != 0) {
                                      iVar2 = BN_sub_word(a,1);
                                      iVar2 = test_true("test/ffc_internal_test.c",0x1f1,
                                                        "BN_sub_word(pub, 1)",iVar2 != 0);
                                      if (iVar2 != 0) {
                                        iVar2 = ossl_ffc_validate_public_key(puVar3,a,&local_44);
                                        iVar2 = test_true("test/ffc_internal_test.c",500,
                                                                                                                    
                                                  "ossl_ffc_validate_public_key(params, pub, &res)",
                                                  iVar2 != 0);
                                        if (iVar2 != 0) {
                                          iVar2 = test_int_eq("test/ffc_internal_test.c",0x1f6,
                                                              "FFC_ERROR_PUBKEY_INVALID",&_LC20,4,
                                                              local_44);
                                          if (iVar2 != 0) {
                                            iVar2 = BN_sub_word(a,5);
                                            iVar2 = test_true("test/ffc_internal_test.c",0x1f9,
                                                              "BN_sub_word(pub, 5)",iVar2 != 0);
                                            if (iVar2 != 0) {
                                              iVar2 = ossl_ffc_validate_public_key
                                                                (puVar3,a,&local_44);
                                              iVar2 = test_true("test/ffc_internal_test.c",0x1fc,
                                                                                                                                
                                                  "ossl_ffc_validate_public_key(params, pub, &res)",
                                                  iVar2 != 0);
                                              if (iVar2 != 0) {
                                                iVar2 = ossl_ffc_validate_public_key(0,a,&local_44);
                                                iVar2 = test_true("test/ffc_internal_test.c",0x200,
                                                                                                                                    
                                                  "ossl_ffc_validate_public_key(NULL, pub, &res)",
                                                  iVar2 != 0);
                                                if (iVar2 != 0) {
                                                  iVar2 = test_int_eq("test/ffc_internal_test.c",
                                                                      0x202,
                                                  "FFC_ERROR_PASSED_NULL_PARAM",&_LC20,0x40,local_44
                                                  );
                                                  if (iVar2 != 0) {
                                                    local_44 = 0xffffffff;
                                                    iVar2 = ossl_ffc_validate_public_key
                                                                      (puVar3,0,&local_44);
                                                    iVar2 = test_true("test/ffc_internal_test.c",
                                                                      0x206,
                                                  "ossl_ffc_validate_public_key(params, NULL, &res)"
                                                  ,iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = test_int_eq("test/ffc_internal_test.c",
                                                                        0x208,
                                                  "FFC_ERROR_PASSED_NULL_PARAM",&_LC20,0x40,local_44
                                                  );
                                                  if (iVar2 != 0) {
                                                    local_44 = 0xffffffff;
                                                    BN_free((BIGNUM *)*puVar3);
                                                    *puVar3 = 0;
                                                    iVar2 = ossl_ffc_validate_public_key
                                                                      (puVar3,a,&local_44);
                                                    iVar2 = test_true("test/ffc_internal_test.c",
                                                                      0x20f,
                                                  "ossl_ffc_validate_public_key(params, pub, &res)",
                                                  iVar2 != 0);
                                                  if (iVar2 != 0) {
                                                    iVar2 = test_int_eq("test/ffc_internal_test.c",
                                                                        0x211,
                                                  "FFC_ERROR_PASSED_NULL_PARAM",&_LC20,0x40,local_44
                                                  );
                                                  uVar1 = (uint)(iVar2 != 0);
                                                  goto LAB_0010092a;
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
          }
        }
      }
    }
    uVar1 = 0;
  }
LAB_0010092a:
  DH_free(dh);
  BN_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ffc_params_fips186_2_gen_validate_test(void)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *a;
  long in_FS_OFFSET;
  bool bVar3;
  int local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = -1;
  ossl_ffc_params_init(local_98);
  a = BN_new();
  iVar1 = test_ptr("test/ffc_internal_test.c",399,"bn = BN_new()",a);
  if (iVar1 != 0) {
    iVar1 = ossl_ffc_params_FIPS186_2_generate(0,local_98,1,0x400,0xa0,&local_9c,0);
    iVar1 = test_true("test/ffc_internal_test.c",0x191,
                      "ossl_ffc_params_FIPS186_2_generate(NULL, &params, FFC_PARAM_TYPE_DH, 1024, 160, &res, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_ffc_params_FIPS186_2_validate(0,local_98,1,&local_9c,0);
      iVar1 = test_true("test/ffc_internal_test.c",0x195,
                        "ossl_ffc_params_FIPS186_2_validate(NULL, &params, FFC_PARAM_TYPE_DH, &res, NULL)"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_98,0,&local_9c,0);
        iVar1 = test_false("test/ffc_internal_test.c",0x19e,
                           "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                           ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_true("test/ffc_internal_test.c",0x1a3,
                            "res == FFC_CHECK_Q_MISMATCH || res == FFC_CHECK_Q_NOT_PRIME",
                            local_9c == 0x4000 || local_9c == 0x10);
          if (iVar1 != 0) {
            ossl_ffc_params_set_flags(local_98,2);
            uVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_98,0,&local_9c,0);
            iVar1 = test_int_eq("test/ffc_internal_test.c",0x1a8,
                                "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                                ,&_LC49,uVar2,2);
            if (iVar1 != 0) {
              iVar1 = ossl_ffc_params_print(_bio_out,local_98,4);
              iVar1 = test_true("test/ffc_internal_test.c",0x1ad,
                                "ossl_ffc_params_print(bio_out, &params, 4)",iVar1 != 0);
              bVar3 = iVar1 != 0;
              goto LAB_00100f21;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100f21:
  BN_free(a);
  ossl_ffc_params_cleanup(local_98);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ffc_params_gen_canonicalg_test(void)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_8c;
  undefined1 local_88 [56];
  undefined4 local_50;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0xffffffff;
  ossl_ffc_params_init(local_88);
  local_50 = 1;
  iVar1 = ossl_ffc_params_FIPS186_4_generate(0,local_88,1,0x800,0x100,&local_8c);
  iVar1 = test_true("test/ffc_internal_test.c",0x176,
                    "ossl_ffc_params_FIPS186_4_generate(NULL, &params, FFC_PARAM_TYPE_DH, 2048, 256, &res, NULL)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_88,1,&local_8c,0);
    iVar1 = test_true("test/ffc_internal_test.c",0x17a,
                      "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DH, &res, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_ffc_params_print(_bio_out,local_88,4);
      iVar1 = test_true("test/ffc_internal_test.c",0x17f,
                        "ossl_ffc_params_print(bio_out, &params, 4)",iVar1 != 0);
      bVar2 = iVar1 != 0;
      goto LAB_0010115b;
    }
  }
  bVar2 = false;
LAB_0010115b:
  ossl_ffc_params_cleanup(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_params_gen_test(void)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined4 local_9c;
  undefined1 local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0xffffffff;
  ossl_ffc_params_init(local_98);
  iVar1 = ossl_ffc_params_FIPS186_4_generate(0,local_98,1,0x800,0x100,&local_9c);
  uVar2 = test_true("test/ffc_internal_test.c",0x160,
                    "ossl_ffc_params_FIPS186_4_generate(NULL, &params, FFC_PARAM_TYPE_DH, 2048, 256, &res, NULL)"
                    ,iVar1 != 0);
  if (uVar2 != 0) {
    iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_98,1,&local_9c,0);
    iVar1 = test_true("test/ffc_internal_test.c",0x164,
                      "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DH, &res, NULL)"
                      ,iVar1 != 0);
    uVar2 = (uint)(iVar1 != 0);
  }
  ossl_ffc_params_cleanup(local_98);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_params_validate_g_unverified_test(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b;
  BIGNUM *a;
  BIGNUM *a_00;
  long in_FS_OFFSET;
  undefined1 local_ac [4];
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_ffc_params_init(local_a8);
  b = BN_bin2bn(dsa_2048_224_sha256_p,0x100,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/ffc_internal_test.c",0xb7,
                   "p = BN_bin2bn(dsa_2048_224_sha256_p, sizeof(dsa_2048_224_sha256_p), NULL)",b);
  if (iVar1 == 0) {
    uVar2 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a_00 = (BIGNUM *)0x0;
    a = BN_bin2bn(dsa_2048_224_sha256_q,0x1c,(BIGNUM *)0x0);
    uVar2 = test_ptr("test/ffc_internal_test.c",0xbb,
                     "q = BN_bin2bn(dsa_2048_224_sha256_q, sizeof(dsa_2048_224_sha256_q), NULL)",a);
    if (uVar2 != 0) {
      a_00 = BN_bin2bn(dsa_2048_224_sha256_g,0x100,(BIGNUM *)0x0);
      uVar2 = test_ptr("test/ffc_internal_test.c",0xbe,
                       "g = BN_bin2bn(dsa_2048_224_sha256_g, sizeof(dsa_2048_224_sha256_g), NULL)",
                       a_00);
      if (uVar2 != 0) {
        ossl_ffc_params_set0_pqg(local_a8,b,a,0);
        ossl_ffc_params_set_flags(local_a8,2);
        ossl_ffc_set_digest(local_a8,"SHA256",0);
        iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,local_ac,0);
        iVar1 = test_false("test/ffc_internal_test.c",0xca,
                           "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                           ,iVar1 != 0);
        if (iVar1 == 0) {
          a = (BIGNUM *)0x0;
          b = (BIGNUM *)0x0;
          uVar2 = 0;
        }
        else {
          ossl_ffc_params_set0_pqg(local_a8,0,0,a_00);
          iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,local_ac,0);
          iVar1 = test_true("test/ffc_internal_test.c",0xd1,
                            "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            BN_add_word(a_00,1);
            iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,local_ac,0);
            iVar1 = test_false("test/ffc_internal_test.c",0xd8,
                               "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              BN_set_word(a_00,1);
              iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,local_ac,0);
              iVar1 = test_false("test/ffc_internal_test.c",0xdf,
                                 "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                                 ,iVar1 != 0);
              if (iVar1 != 0) {
                BN_copy(a_00,b);
                iVar1 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,local_ac,0);
                iVar1 = test_false("test/ffc_internal_test.c",0xe6,
                                   "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                                   ,iVar1 != 0);
                uVar2 = (uint)(iVar1 != 0);
                a_00 = (BIGNUM *)0x0;
                a = (BIGNUM *)0x0;
                b = (BIGNUM *)0x0;
                goto LAB_00101366;
              }
            }
          }
          a_00 = (BIGNUM *)0x0;
          a = (BIGNUM *)0x0;
          b = (BIGNUM *)0x0;
          uVar2 = 0;
        }
      }
    }
  }
LAB_00101366:
  ossl_ffc_params_cleanup(local_a8);
  BN_free(b);
  BN_free(a);
  BN_free(a_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ffc_params_validate_pq_test(void)

{
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  long in_FS_OFFSET;
  undefined4 local_ac;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0xffffffff;
  ossl_ffc_params_init(local_a8);
  a = BN_bin2bn(dsa_2048_224_sha224_p,0x100,(BIGNUM *)0x0);
  uVar1 = test_ptr("test/ffc_internal_test.c",0xfb,
                   "p = BN_bin2bn(dsa_2048_224_sha224_p, sizeof(dsa_2048_224_sha224_p), NULL)",a);
  a_00 = (BIGNUM *)0x0;
  if (uVar1 != 0) {
    a_00 = BN_bin2bn(dsa_2048_224_sha224_q,0x1c,(BIGNUM *)0x0);
    uVar1 = test_ptr("test/ffc_internal_test.c",0xff,
                     "q = BN_bin2bn(dsa_2048_224_sha224_q, sizeof(dsa_2048_224_sha224_q), NULL)",
                     a_00);
    if (uVar1 != 0) {
      ossl_ffc_params_set0_pqg(local_a8,0,a_00,0);
      ossl_ffc_params_set_flags(local_a8,1);
      ossl_ffc_set_digest(local_a8,"SHA224",0);
      iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
      uVar1 = test_false("test/ffc_internal_test.c",0x10a,
                         "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                         ,iVar2 != 0);
      a_00 = (BIGNUM *)0x0;
      if (uVar1 != 0) {
        ossl_ffc_params_set0_pqg(local_a8,a,0,0);
        ossl_ffc_params_set_validate_params(local_a8,dsa_2048_224_sha224_seed,0x1c,0xb3e);
        iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
        iVar2 = test_true("test/ffc_internal_test.c",0x115,
                          "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                          ,iVar2 != 0);
        if (iVar2 != 0) {
          ossl_ffc_params_set_validate_params(local_a8,dsa_2048_224_sha224_seed,0x1c,1);
          iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
          iVar2 = test_false("test/ffc_internal_test.c",0x11e,
                             "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                             ,iVar2 != 0);
          if (iVar2 != 0) {
            ossl_ffc_params_set_validate_params(local_a8,dsa_2048_224_sha224_seed,0x1b,0xb3e);
            iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
            iVar2 = test_false("test/ffc_internal_test.c",0x127,
                               "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                               ,iVar2 != 0);
            if (iVar2 != 0) {
              ossl_ffc_params_set_validate_params(local_a8,dsa_2048_224_sha224_bad_seed,0x1c,0xb3e);
              iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
              iVar2 = test_false("test/ffc_internal_test.c",0x130,
                                 "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                                 ,iVar2 != 0);
              if (iVar2 != 0) {
                a = BN_bin2bn(dsa_3072_256_sha512_p,0x180,(BIGNUM *)0x0);
                uVar1 = test_ptr("test/ffc_internal_test.c",0x135,
                                 "p = BN_bin2bn(dsa_3072_256_sha512_p, sizeof(dsa_3072_256_sha512_p), NULL)"
                                 ,a);
                a_00 = (BIGNUM *)0x0;
                if (uVar1 == 0) goto LAB_00101647;
                a_00 = BN_bin2bn(dsa_3072_256_sha512_q,0x20,(BIGNUM *)0x0);
                uVar1 = test_ptr("test/ffc_internal_test.c",0x138,
                                 "q = BN_bin2bn(dsa_3072_256_sha512_q, sizeof(dsa_3072_256_sha512_q), NULL)"
                                 ,a_00);
                if (uVar1 == 0) goto LAB_00101647;
                ossl_ffc_params_set0_pqg(local_a8,a,a_00,0);
                ossl_ffc_set_digest(local_a8,"SHA512",0);
                ossl_ffc_params_set_validate_params(local_a8,dsa_3072_256_sha512_seed,0x20,0x644);
                iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,0,&local_ac,0);
                iVar2 = test_false("test/ffc_internal_test.c",0x145,
                                   "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DSA, &res, NULL)"
                                   ,iVar2 != 0);
                if (iVar2 != 0) {
                  iVar2 = ossl_ffc_params_FIPS186_4_validate(0,local_a8,1,&local_ac,0);
                  iVar2 = test_false("test/ffc_internal_test.c",0x14b,
                                     "ossl_ffc_params_FIPS186_4_validate(NULL, &params, FFC_PARAM_TYPE_DH, &res, NULL)"
                                     ,iVar2 != 0);
                  uVar1 = (uint)(iVar2 != 0);
                  a_00 = (BIGNUM *)0x0;
                  a = (BIGNUM *)0x0;
                  goto LAB_00101647;
                }
              }
            }
          }
        }
        a = (BIGNUM *)0x0;
        uVar1 = 0;
        a_00 = (BIGNUM *)0x0;
      }
    }
  }
LAB_00101647:
  ossl_ffc_params_cleanup(local_a8);
  BN_free(a);
  BN_free(a_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("ffc_params_validate_pq_test",ffc_params_validate_pq_test);
  add_test("ffc_params_validate_g_unverified_test",ffc_params_validate_g_unverified_test);
  add_test("ffc_params_gen_test",ffc_params_gen_test);
  add_test("ffc_params_gen_canonicalg_test",ffc_params_gen_canonicalg_test);
  add_test("ffc_params_fips186_2_gen_validate_test",ffc_params_fips186_2_gen_validate_test);
  add_test("ffc_public_validate_test",ffc_public_validate_test);
  add_test("ffc_private_validate_test",ffc_private_validate_test);
  add_all_tests("ffc_private_gen_test",ffc_private_gen_test,10,1);
  add_test("ffc_params_copy_test",0x100000);
  return 1;
}


