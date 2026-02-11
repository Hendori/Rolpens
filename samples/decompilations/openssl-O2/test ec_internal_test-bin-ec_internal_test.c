
bool check_bn_mont_ctx(undefined8 param_1,BIGNUM *param_2,BN_CTX *param_3)

{
  int iVar1;
  BN_MONT_CTX *mont;
  bool bVar2;
  
  mont = BN_MONT_CTX_new();
  iVar1 = test_ptr("test/ec_internal_test.c",0x1ed,"regenerated",mont);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = test_ptr("test/ec_internal_test.c",0x1ef,&_LC2,param_1);
  if (iVar1 != 0) {
    iVar1 = BN_MONT_CTX_set(mont,param_2,param_3);
    iVar1 = test_true("test/ec_internal_test.c",0x1f2,"BN_MONT_CTX_set(regenerated, mod, ctx)",
                      iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = ossl_bn_mont_ctx_eq(mont,param_1);
      iVar1 = test_true("test/ec_internal_test.c",0x1f5,"ossl_bn_mont_ctx_eq(regenerated, mont)",
                        iVar1 != 0);
      bVar2 = iVar1 != 0;
      goto LAB_001000a2;
    }
  }
  bVar2 = false;
LAB_001000a2:
  BN_MONT_CTX_free(mont);
  return bVar2;
}



uint named_group_creation_test(void)

{
  uint uVar1;
  int iVar2;
  EC_GROUP *group;
  BN_CTX *c;
  
  group = EC_GROUP_new_by_curve_name(0x19f);
  uVar1 = test_ptr("test/ec_internal_test.c",0x21a,
                   "group = EC_GROUP_new_by_curve_name(NID_X9_62_prime256v1)",group);
  if (uVar1 != 0) {
    c = BN_CTX_new();
    uVar1 = test_ptr("test/ec_internal_test.c",0x205,&_LC6,c);
    if (uVar1 != 0) {
      iVar2 = check_bn_mont_ctx(*(undefined8 *)(group + 0x90),*(undefined8 *)(group + 0x10),c);
      iVar2 = test_true("test/ec_internal_test.c",0x207,
                        "check_bn_mont_ctx(group->mont_data, group->order, ctx)",iVar2 != 0);
      if (iVar2 == 0) {
        test_error("test/ec_internal_test.c",0x208,"group order issue");
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
        if (*(long *)(group + 0x78) != 0) {
          iVar2 = check_bn_mont_ctx(*(long *)(group + 0x78),*(undefined8 *)(group + 0x40),c);
          iVar2 = test_true("test/ec_internal_test.c",0x20c,
                            "check_bn_mont_ctx(group->field_data1, group->field, ctx)",iVar2 != 0);
          uVar1 = (uint)(iVar2 != 0);
        }
      }
      BN_CTX_free(c);
    }
    iVar2 = test_true("test/ec_internal_test.c",0x21b,"montgomery_correctness_test(group)",uVar1);
    uVar1 = (uint)(iVar2 != 0);
  }
  EC_GROUP_free(group);
  return uVar1;
}



uint ecpkparams_i2d2i_test(int param_1)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  FILE *out;
  EC_GROUP *group_00;
  
  group = EC_GROUP_new_by_curve_name(*(int *)((long)param_1 * 0x10 + curves));
  iVar1 = test_ptr("test/ec_internal_test.c",0x1c7,"g1 = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar1 == 0) {
LAB_00100266:
    uVar2 = 0;
    group_00 = (EC_GROUP *)0x0;
    goto LAB_0010026c;
  }
  out = fopen("params.der","wb");
  iVar1 = test_ptr("test/ec_internal_test.c",0x1cb,"fp = fopen(\"params.der\", \"wb\")",out);
  if (iVar1 == 0) {
LAB_001002c4:
    uVar2 = 0;
    group_00 = (EC_GROUP *)0x0;
  }
  else {
    iVar1 = ASN1_i2d_fp(i2d_ECPKParameters,out,group);
    iVar1 = test_true("test/ec_internal_test.c",0x1cc,"i2d_ECPKParameters_fp(fp, g1)",iVar1 != 0);
    if (iVar1 == 0) goto LAB_001002c4;
    iVar1 = fclose(out);
    iVar1 = test_int_eq("test/ec_internal_test.c",0x1d0,"fclose(fp)",&_LC16,iVar1,0);
    if (iVar1 == 0) goto LAB_00100266;
    group_00 = (EC_GROUP *)0x0;
    out = fopen("params.der","rb");
    uVar2 = test_ptr("test/ec_internal_test.c",0x1d7,"fp = fopen(\"params.der\", \"rb\")");
    if (uVar2 != 0) {
      group_00 = (EC_GROUP *)ASN1_d2i_fp((xnew *)0x0,d2i_ECPKParameters,out,(void **)0x0);
      iVar1 = test_ptr("test/ec_internal_test.c",0x1d8,"g2 = d2i_ECPKParameters_fp(fp, NULL)",
                       group_00);
      uVar2 = (uint)(iVar1 != 0);
    }
  }
  if (out != (FILE *)0x0) {
    fclose(out);
  }
LAB_0010026c:
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  return uVar2;
}



uint decoded_flag_test(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  EC_METHOD *meth;
  EC_GROUP *group;
  undefined8 uVar5;
  EC_GROUP *group_00;
  undefined8 uVar6;
  EC_KEY *key;
  undefined8 uVar7;
  long in_FS_OFFSET;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  meth = EC_GFp_simple_method();
  group = EC_GROUP_new(meth);
  iVar1 = test_ptr("test/ec_internal_test.c",0x16b,&_LC21,group);
  if (iVar1 != 0) {
    iVar1 = test_int_eq("test/ec_internal_test.c",0x16c,"grp->decoded_from_explicit_params",&_LC16,
                        *(undefined4 *)(group + 0x28),0);
    if (iVar1 != 0) {
      EC_GROUP_free(group);
      group = EC_GROUP_new_by_curve_name(0x19f);
      uVar2 = test_ptr("test/ec_internal_test.c",0x172,&_LC21,group);
      if (uVar2 != 0) {
        uVar2 = test_int_eq("test/ec_internal_test.c",0x173,"grp->decoded_from_explicit_params",
                            &_LC16,*(undefined4 *)(group + 0x28),0);
        if (uVar2 != 0) {
          uVar5 = EC_GROUP_get_ecparameters(group,0);
          iVar1 = test_ptr("test/ec_internal_test.c",0x177,
                           "ecparams = EC_GROUP_get_ecparameters(grp, NULL)",uVar5);
          if (iVar1 == 0) {
            key = (EC_KEY *)0x0;
            uVar6 = 0;
            group_00 = (EC_GROUP *)0x0;
            uVar2 = 0;
            goto LAB_0010042f;
          }
          group_00 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(uVar5);
          uVar2 = test_ptr("test/ec_internal_test.c",0x178,
                           "grp_copy = EC_GROUP_new_from_ecparameters(ecparams)",group_00);
          if (uVar2 != 0) {
            uVar2 = test_int_eq("test/ec_internal_test.c",0x179,
                                "grp_copy->decoded_from_explicit_params",&_LC16,
                                *(undefined4 *)(group_00 + 0x28),0);
            if (uVar2 != 0) {
              EC_GROUP_free(group_00);
              ECPARAMETERS_free(uVar5);
              iVar1 = EC_GROUP_get_asn1_flag(group);
              uVar2 = test_int_eq("test/ec_internal_test.c",0x181,"EC_GROUP_get_asn1_flag(grp)",
                                  "OPENSSL_EC_NAMED_CURVE",iVar1,1);
              if (uVar2 == 0) goto LAB_001004ec;
              uVar6 = EC_GROUP_get_ecpkparameters(group,0);
              iVar1 = test_ptr("test/ec_internal_test.c",0x182,
                               "ecpkparams = EC_GROUP_get_ecpkparameters(grp, NULL)",uVar6);
              if (iVar1 == 0) {
                key = (EC_KEY *)0x0;
                uVar5 = 0;
                group_00 = (EC_GROUP *)0x0;
                uVar2 = 0;
                goto LAB_0010042f;
              }
              group_00 = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(uVar6);
              uVar2 = test_ptr("test/ec_internal_test.c",0x183,
                               "grp_copy = EC_GROUP_new_from_ecpkparameters(ecpkparams)",group_00);
              if (uVar2 != 0) {
                uVar2 = test_int_eq("test/ec_internal_test.c",0x184,
                                    "grp_copy->decoded_from_explicit_params",&_LC16,
                                    *(undefined4 *)(group_00 + 0x28),0);
                if (uVar2 != 0) {
                  key = EC_KEY_new();
                  iVar1 = test_ptr("test/ec_internal_test.c",0x185,"key = EC_KEY_new()",key);
                  if (iVar1 != 0) {
                    uVar7 = 0;
                    uVar3 = EC_KEY_decoded_from_explicit_params(key);
                    uVar2 = test_int_eq("test/ec_internal_test.c",0x187,
                                        "EC_KEY_decoded_from_explicit_params(key)",&_LC31,uVar3,
                                        0xffffffff);
                    uVar5 = 0;
                    if (uVar2 == 0) goto LAB_0010042f;
                    iVar1 = EC_KEY_set_group(key,group_00);
                    iVar1 = test_int_eq("test/ec_internal_test.c",0x188,
                                        "EC_KEY_set_group(key, grp_copy)",&_LC33,iVar1,1);
                    if (iVar1 != 0) {
                      uVar3 = EC_KEY_decoded_from_explicit_params(key);
                      iVar1 = test_int_eq("test/ec_internal_test.c",0x18a,
                                          "EC_KEY_decoded_from_explicit_params(key)",&_LC16,uVar3,0)
                      ;
                      if (iVar1 != 0) {
                        EC_GROUP_free(group_00);
                        ECPKPARAMETERS_free(uVar6);
                        iVar1 = i2d_ECPKParameters(group,&local_50);
                        uVar2 = test_int_gt("test/ec_internal_test.c",0x192,
                                            "encodedlen = i2d_ECPKParameters(grp, &encodedparams)",
                                            &_LC16,iVar1,0);
                        uVar5 = uVar7;
                        if (uVar2 != 0) {
                          local_48 = local_50;
                          uVar2 = test_ptr("test/ec_internal_test.c",0x193,"encp = encodedparams");
                          if (uVar2 != 0) {
                            uVar6 = 0;
                            group_00 = d2i_ECPKParameters((EC_GROUP **)0x0,&local_48,(long)iVar1);
                            uVar2 = test_ptr("test/ec_internal_test.c",0x194,
                                             "grp_copy = d2i_ECPKParameters(NULL, &encp, encodedlen)"
                                             ,group_00);
                            if (uVar2 == 0) goto LAB_0010042f;
                            uVar2 = test_int_eq("test/ec_internal_test.c",0x195,
                                                "grp_copy->decoded_from_explicit_params",&_LC16,
                                                *(undefined4 *)(group_00 + 0x28),0);
                            if (uVar2 == 0) goto LAB_0010042f;
                            EC_GROUP_free(group_00);
                            CRYPTO_free(local_50);
                            local_50 = (uchar *)0x0;
                            EC_GROUP_set_asn1_flag(group,0);
                            uVar6 = EC_GROUP_get_ecpkparameters(group,0);
                            iVar1 = test_ptr("test/ec_internal_test.c",0x19e,
                                             "ecpkparams = EC_GROUP_get_ecpkparameters(grp, NULL)",
                                             uVar6);
                            if (iVar1 == 0) {
LAB_001008cb:
                              uVar2 = 0;
                              group_00 = (EC_GROUP *)0x0;
                              uVar5 = 0;
                              goto LAB_0010042f;
                            }
                            group_00 = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(uVar6);
                            iVar1 = test_ptr("test/ec_internal_test.c",0x19f,
                                             "grp_copy = EC_GROUP_new_from_ecpkparameters(ecpkparams)"
                                             ,group_00);
                            if (iVar1 != 0) {
                              uVar5 = 0;
                              iVar1 = EC_GROUP_get_asn1_flag(group_00);
                              uVar2 = test_int_eq("test/ec_internal_test.c",0x1a0,
                                                  "EC_GROUP_get_asn1_flag(grp_copy)",
                                                  "OPENSSL_EC_EXPLICIT_CURVE",iVar1,0);
                              if (uVar2 == 0) goto LAB_0010042f;
                              iVar1 = test_int_eq("test/ec_internal_test.c",0x1a1,
                                                  "grp_copy->decoded_from_explicit_params",&_LC16,
                                                  *(undefined4 *)(group_00 + 0x28),0);
                              if (iVar1 != 0) {
                                EC_GROUP_free(group_00);
                                iVar1 = i2d_ECPKParameters(group,&local_50);
                                iVar4 = test_int_gt("test/ec_internal_test.c",0x1a7,
                                                                                                        
                                                  "encodedlen = i2d_ECPKParameters(grp, &encodedparams)"
                                                  ,&_LC16,iVar1,0);
                                if (iVar4 == 0) goto LAB_001008cb;
                                group_00 = (EC_GROUP *)0x0;
                                local_48 = local_50;
                                uVar2 = test_ptr("test/ec_internal_test.c",0x1a8,
                                                 "encp = encodedparams");
                                if (uVar2 == 0) goto LAB_0010042f;
                                group_00 = d2i_ECPKParameters((EC_GROUP **)0x0,&local_48,(long)iVar1
                                                             );
                                iVar1 = test_ptr("test/ec_internal_test.c",0x1a9,
                                                 "grp_copy = d2i_ECPKParameters(NULL, &encp, encodedlen)"
                                                 ,group_00);
                                if (iVar1 != 0) {
                                  iVar1 = EC_GROUP_get_asn1_flag(group_00);
                                  uVar2 = test_int_eq("test/ec_internal_test.c",0x1aa,
                                                      "EC_GROUP_get_asn1_flag(grp_copy)",
                                                      "OPENSSL_EC_EXPLICIT_CURVE",iVar1,0);
                                  if (uVar2 == 0) goto LAB_0010042f;
                                  iVar1 = test_int_eq("test/ec_internal_test.c",0x1ab,
                                                      "grp_copy->decoded_from_explicit_params",
                                                      &_LC33,*(undefined4 *)(group_00 + 0x28),1);
                                  if (iVar1 != 0) {
                                    iVar1 = EC_KEY_set_group(key,group_00);
                                    iVar1 = test_int_eq("test/ec_internal_test.c",0x1ac,
                                                        "EC_KEY_set_group(key, grp_copy)",&_LC33,
                                                        iVar1,1);
                                    if (iVar1 != 0) {
                                      uVar3 = EC_KEY_decoded_from_explicit_params(key);
                                      iVar1 = test_int_eq("test/ec_internal_test.c",0x1ae,
                                                          "EC_KEY_decoded_from_explicit_params(key)"
                                                          ,&_LC33,uVar3,1);
                                      uVar2 = (uint)(iVar1 != 0);
                                      goto LAB_0010042f;
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_00100909;
                          }
                        }
                        uVar6 = 0;
                        group_00 = (EC_GROUP *)0x0;
                        goto LAB_0010042f;
                      }
                    }
                  }
LAB_00100909:
                  uVar2 = 0;
                  uVar5 = 0;
                  goto LAB_0010042f;
                }
              }
              key = (EC_KEY *)0x0;
              uVar5 = 0;
              goto LAB_0010042f;
            }
          }
          key = (EC_KEY *)0x0;
          uVar6 = 0;
          goto LAB_0010042f;
        }
      }
LAB_001004ec:
      key = (EC_KEY *)0x0;
      uVar6 = 0;
      group_00 = (EC_GROUP *)0x0;
      uVar5 = 0;
      goto LAB_0010042f;
    }
  }
  uVar2 = 0;
  key = (EC_KEY *)0x0;
  uVar6 = 0;
  group_00 = (EC_GROUP *)0x0;
  uVar5 = 0;
LAB_0010042f:
  EC_KEY_free(key);
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  ECPARAMETERS_free(uVar5);
  ECPKPARAMETERS_free(uVar6);
  CRYPTO_free(local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool set_private_key(void)

{
  int iVar1;
  EC_KEY *key;
  EC_KEY *key_00;
  bool bVar2;
  
  key = EC_KEY_new_by_curve_name(0x2c9);
  key_00 = EC_KEY_new_by_curve_name(0x2c9);
  iVar1 = test_ptr("test/ec_internal_test.c",0x143,&_LC40,key);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/ec_internal_test.c",0x144,"aux_key",key_00);
    if (iVar1 != 0) {
      iVar1 = EC_KEY_generate_key(key);
      iVar1 = test_int_eq("test/ec_internal_test.c",0x145,"EC_KEY_generate_key(key)",&_LC33,iVar1,1)
      ;
      if (iVar1 != 0) {
        iVar1 = EC_KEY_generate_key(key_00);
        iVar1 = test_int_eq("test/ec_internal_test.c",0x146,"EC_KEY_generate_key(aux_key)",&_LC33,
                            iVar1,1);
        if (iVar1 != 0) {
          iVar1 = EC_KEY_set_private_key(key,*(BIGNUM **)(key_00 + 0x28));
          iVar1 = test_int_eq("test/ec_internal_test.c",0x14a,
                              "EC_KEY_set_private_key(key, aux_key->priv_key)",&_LC33,iVar1,1);
          if (iVar1 != 0) {
            iVar1 = EC_KEY_set_private_key(key,(BIGNUM *)0x0);
            iVar1 = test_int_eq("test/ec_internal_test.c",0x14e,"EC_KEY_set_private_key(key, NULL)",
                                &_LC16,iVar1,0);
            if (iVar1 != 0) {
              iVar1 = test_ptr_null("test/ec_internal_test.c",0x14f,"key->priv_key",
                                    *(undefined8 *)(key + 0x28));
              bVar2 = iVar1 != 0;
              goto LAB_00100bad;
            }
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100bad:
  EC_KEY_free(key);
  EC_KEY_free(key_00);
  return bVar2;
}



uint ec2m_field_sanity(void)

{
  int iVar1;
  uint uVar2;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  EC_GROUP *pEVar3;
  EC_GROUP *pEVar4;
  EC_GROUP *pEVar5;
  EC_GROUP *pEVar6;
  EC_GROUP *pEVar7;
  EC_GROUP *group;
  EC_GROUP *group_00;
  
  ctx = BN_CTX_new();
  test_info("test/ec_internal_test.c",0xa7,"Testing GF2m hardening\n");
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  a_01 = BN_CTX_get(ctx);
  iVar1 = test_ptr("test/ec_internal_test.c",0xac,"b = BN_CTX_get(ctx)",a_01);
  if (iVar1 != 0) {
    iVar1 = BN_set_word(a_00,1);
    iVar1 = test_true("test/ec_internal_test.c",0xad,"BN_one(a)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = BN_set_word(a_01,1);
      iVar1 = test_true("test/ec_internal_test.c",0xae,"BN_one(b)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BN_set_word(a,0xf2);
        iVar1 = test_true("test/ec_internal_test.c",0xb2,"BN_set_word(p, 0xf2)",iVar1 != 0);
        if (iVar1 != 0) {
          pEVar3 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a,a_00,a_01,ctx);
          iVar1 = test_ptr_null("test/ec_internal_test.c",0xb4,
                                "group1 = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",pEVar3);
          if (iVar1 == 0) {
            test_error("test/ec_internal_test.c",0xb5,
                       "Zero constant term accepted in GF2m polynomial");
          }
          iVar1 = BN_set_word(a,0xf3);
          iVar1 = test_true("test/ec_internal_test.c",0xb8,"BN_set_word(p, 0xf3)",iVar1 != 0);
          pEVar7 = pEVar3;
          if (iVar1 == 0) {
            group_00 = (EC_GROUP *)0x0;
            uVar2 = 0;
            group = (EC_GROUP *)0x0;
          }
          else {
            pEVar4 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a,a_00,a_01,ctx);
            iVar1 = test_ptr_null("test/ec_internal_test.c",0xba,
                                  "group2 = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",pEVar4);
            if (iVar1 == 0) {
              test_error("test/ec_internal_test.c",0xbb,"Hexanomial accepted as GF2m polynomial");
            }
            iVar1 = BN_set_word(a,0x71);
            group_00 = (EC_GROUP *)0x0;
            uVar2 = test_true("test/ec_internal_test.c",0xbe,"BN_set_word(p, 0x71)",iVar1 != 0);
            group = pEVar4;
            if (uVar2 != 0) {
              iVar1 = BN_set_bit(a,0x296);
              uVar2 = test_true("test/ec_internal_test.c",0xbf,
                                "BN_set_bit(p, OPENSSL_ECC_MAX_FIELD_BITS + 1)",iVar1 != 0);
              if (uVar2 != 0) {
                pEVar5 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a,a_00,a_01,ctx);
                iVar1 = test_ptr_null("test/ec_internal_test.c",0xc1,
                                      "group3 = EC_GROUP_new_curve_GF2m(p, a, b, ctx)",pEVar5);
                if (iVar1 == 0) {
                  test_error("test/ec_internal_test.c",0xc2,"GF2m polynomial degree > %d accepted",
                             0x295);
                }
                pEVar6 = (EC_GROUP *)0x0;
                group_00 = pEVar5;
                if ((pEVar4 == (EC_GROUP *)0x0 && pEVar3 == (EC_GROUP *)0x0) &&
                    pEVar5 == (EC_GROUP *)0x0) {
                  pEVar7 = pEVar6;
                  group_00 = pEVar6;
                  group = pEVar6;
                }
                uVar2 = (uint)((pEVar4 == (EC_GROUP *)0x0 && pEVar3 == (EC_GROUP *)0x0) &&
                              pEVar5 == (EC_GROUP *)0x0);
              }
            }
          }
          goto LAB_00100d6b;
        }
      }
    }
  }
  group_00 = (EC_GROUP *)0x0;
  uVar2 = 0;
  pEVar7 = (EC_GROUP *)0x0;
  group = (EC_GROUP *)0x0;
LAB_00100d6b:
  EC_GROUP_free(pEVar7);
  EC_GROUP_free(group);
  EC_GROUP_free(group_00);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar2;
}



undefined8 group_field_tests_part_0(long *param_1,BN_CTX *param_2)

{
  code *pcVar1;
  int iVar2;
  BIGNUM *rnd;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  BN_CTX_start(param_2);
  rnd = BN_CTX_get(param_2);
  pBVar3 = BN_CTX_get(param_2);
  pBVar4 = BN_CTX_get(param_2);
  iVar2 = test_ptr("test/ec_internal_test.c",0x25,"c = BN_CTX_get(ctx)",pBVar4);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x110);
    pBVar5 = BN_value_one();
    iVar2 = (*pcVar1)(param_1,pBVar3,pBVar5,param_2);
    iVar2 = test_true("test/ec_internal_test.c",0x27,
                      "group->meth->field_inv(group, b, BN_value_one(), ctx)",iVar2 != 0);
    if (iVar2 != 0) {
      BN_is_one(pBVar3);
      iVar2 = test_true("test/ec_internal_test.c",0x28,"BN_is_one(b)");
      if (iVar2 != 0) {
        iVar2 = BN_num_bits((BIGNUM *)param_1[8]);
        iVar2 = BN_rand(rnd,iVar2 + -1,0,0);
        iVar2 = test_true("test/ec_internal_test.c",0x2a,
                          "BN_rand(a, BN_num_bits(group->field) - 1, BN_RAND_TOP_ONE, BN_RAND_BOTTOM_ANY)"
                          ,iVar2 != 0);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*param_1 + 0x110))(param_1,pBVar3,rnd,param_2);
          iVar2 = test_true("test/ec_internal_test.c",0x2c,
                            "group->meth->field_inv(group, b, a, ctx)",iVar2 != 0);
          if (iVar2 != 0) {
            lVar6 = *param_1;
            if (*(code **)(lVar6 + 0x118) != (code *)0x0) {
              iVar2 = (**(code **)(lVar6 + 0x118))(param_1,rnd,rnd,param_2);
              iVar2 = test_true("test/ec_internal_test.c",0x2e,
                                "group->meth->field_encode(group, a, a, ctx)",iVar2 != 0);
              if (iVar2 == 0) goto LAB_001010af;
              lVar6 = *param_1;
              if (*(code **)(lVar6 + 0x118) != (code *)0x0) {
                iVar2 = (**(code **)(lVar6 + 0x118))(param_1,pBVar3,pBVar3,param_2);
                iVar2 = test_true("test/ec_internal_test.c",0x30,
                                  "group->meth->field_encode(group, b, b, ctx)",iVar2 != 0);
                if (iVar2 == 0) goto LAB_001010af;
                lVar6 = *param_1;
              }
            }
            iVar2 = (**(code **)(lVar6 + 0xf8))(param_1,pBVar4,rnd,pBVar3,param_2);
            iVar2 = test_true("test/ec_internal_test.c",0x31,
                              "group->meth->field_mul(group, c, a, b, ctx)",iVar2 != 0);
            if (iVar2 != 0) {
              if (*(code **)(*param_1 + 0x120) != (code *)0x0) {
                iVar2 = (**(code **)(*param_1 + 0x120))(param_1,pBVar4,pBVar4,param_2);
                iVar2 = test_true("test/ec_internal_test.c",0x33,
                                  "group->meth->field_decode(group, c, c, ctx)",iVar2 != 0);
                if (iVar2 == 0) goto LAB_001010af;
              }
              iVar2 = BN_is_one(pBVar4);
              iVar2 = test_true("test/ec_internal_test.c",0x34,"BN_is_one(c)",iVar2 != 0);
              if (iVar2 != 0) {
                BN_zero_ex(rnd);
                iVar2 = (**(code **)(*param_1 + 0x110))(param_1,pBVar3,rnd,param_2);
                iVar2 = test_false("test/ec_internal_test.c",0x39,
                                   "group->meth->field_inv(group, b, a, ctx)",iVar2 != 0);
                if (iVar2 != 0) {
                  uVar7 = ERR_peek_last_error();
                  uVar8 = (uint)(uVar7 >> 0x17) & 0xff;
                  if ((uVar7 & 0x80000000) != 0) {
                    uVar8 = 2;
                  }
                  iVar2 = test_true("test/ec_internal_test.c",0x3a,
                                    "ERR_GET_LIB(ERR_peek_last_error()) == ERR_LIB_EC",uVar8 == 0x10
                                   );
                  if (iVar2 != 0) {
                    uVar7 = ERR_peek_last_error();
                    uVar8 = (uint)uVar7 & 0x7fffffff;
                    if ((uVar7 & 0x80000000) == 0) {
                      uVar8 = (uint)uVar7 & 0x7fffff;
                    }
                    iVar2 = test_true("test/ec_internal_test.c",0x3b,
                                      "ERR_GET_REASON(ERR_peek_last_error()) == EC_R_CANNOT_INVERT",
                                      uVar8 == 0xa5);
                    if (iVar2 != 0) {
                      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,pBVar3,param_1[8],param_2);
                      iVar2 = test_false("test/ec_internal_test.c",0x3e,
                                         "group->meth->field_inv(group, b, group->field, ctx)",
                                         iVar2 != 0);
                      if (iVar2 != 0) {
                        uVar7 = ERR_peek_last_error();
                        if ((uVar7 & 0x80000000) == 0) {
                          uVar8 = (uint)(uVar7 >> 0x17) & 0xff;
                        }
                        else {
                          uVar8 = 2;
                        }
                        iVar2 = test_true("test/ec_internal_test.c",0x3f,
                                          "ERR_GET_LIB(ERR_peek_last_error()) == ERR_LIB_EC",
                                          uVar8 == 0x10);
                        if (iVar2 != 0) {
                          uVar7 = ERR_peek_last_error();
                          uVar8 = (uint)uVar7 & 0x7fffff;
                          if ((uVar7 & 0x80000000) != 0) {
                            uVar8 = (uint)uVar7 & 0x7fffffff;
                          }
                          iVar2 = test_true("test/ec_internal_test.c",0x40,
                                            "ERR_GET_REASON(ERR_peek_last_error()) == EC_R_CANNOT_INVERT"
                                            ,uVar8 == 0xa5);
                          if (iVar2 != 0) {
                            ERR_clear_error();
                            uVar9 = 1;
                            goto LAB_001010b1;
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
LAB_001010af:
  uVar9 = 0;
LAB_001010b1:
  BN_CTX_end(param_2);
  return uVar9;
}



bool field_tests(EC_METHOD *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *ret_01;
  EC_GROUP *group;
  BIGNUM *pBVar2;
  bool bVar3;
  
  ctx = BN_CTX_new();
  iVar1 = test_ptr("test/ec_internal_test.c",0x54,"ctx = BN_CTX_new()",ctx);
  if (iVar1 != 0) {
    BN_CTX_start(ctx);
    ret = BN_CTX_get(ctx);
    ret_00 = BN_CTX_get(ctx);
    ret_01 = BN_CTX_get(ctx);
    iVar1 = test_ptr("test/ec_internal_test.c",0x5a,"b = BN_CTX_get(ctx)",ret_01);
    if (iVar1 == 0) {
      BN_CTX_end(ctx);
      BN_CTX_free(ctx);
      return false;
    }
    group = EC_GROUP_new(param_1);
    iVar1 = test_ptr("test/ec_internal_test.c",0x5b,"group = EC_GROUP_new(meth)",group);
    if (iVar1 != 0) {
      pBVar2 = BN_bin2bn(param_2,param_3,ret);
      iVar1 = test_true("test/ec_internal_test.c",0x5c,"BN_bin2bn(params, len, p)",
                        pBVar2 != (BIGNUM *)0x0);
      if (iVar1 != 0) {
        pBVar2 = BN_bin2bn(param_2 + param_3,param_3,ret_00);
        iVar1 = test_true("test/ec_internal_test.c",0x5d,"BN_bin2bn(params + len, len, a)",
                          pBVar2 != (BIGNUM *)0x0);
        if (iVar1 != 0) {
          pBVar2 = BN_bin2bn(param_2 + param_3 + param_3,param_3,ret_01);
          iVar1 = test_true("test/ec_internal_test.c",0x5e,"BN_bin2bn(params + 2 * len, len, b)",
                            pBVar2 != (BIGNUM *)0x0);
          if (iVar1 != 0) {
            iVar1 = EC_GROUP_set_curve(group,ret,ret_00,ret_01,ctx);
            iVar1 = test_true("test/ec_internal_test.c",0x5f,
                              "EC_GROUP_set_curve(group, p, a, b, ctx)",iVar1 != 0);
            if (iVar1 != 0) {
              if (*(long *)(*(long *)group + 0x110) == 0) {
                bVar3 = true;
                BN_CTX_end(ctx);
                BN_CTX_free(ctx);
              }
              else {
                bVar3 = true;
                if (*(long *)(*(long *)group + 0xf8) != 0) {
                  iVar1 = group_field_tests_part_0(group,ctx);
                  bVar3 = iVar1 != 0;
                }
                BN_CTX_end(ctx);
                BN_CTX_free(ctx);
              }
              goto LAB_00101579;
            }
          }
        }
      }
    }
    BN_CTX_end(ctx);
    BN_CTX_free(ctx);
    if (group != (EC_GROUP *)0x0) {
      bVar3 = false;
LAB_00101579:
      EC_GROUP_free(group);
      return bVar3;
    }
  }
  return false;
}



void field_tests_ec2_simple(void)

{
  undefined8 uVar1;
  
  test_info("test/ec_internal_test.c",0xd4,"Testing EC_GF2m_simple_method()\n");
  uVar1 = EC_GF2m_simple_method();
  field_tests(uVar1,params_b283,0x24);
  return;
}



void field_tests_ecp_simple(void)

{
  EC_METHOD *pEVar1;
  
  test_info("test/ec_internal_test.c",0x91,"Testing EC_GFp_simple_method()\n");
  pEVar1 = EC_GFp_simple_method();
  field_tests(pEVar1,params_p256,0x20);
  return;
}



void field_tests_ecp_mont(void)

{
  EC_METHOD *pEVar1;
  
  test_info("test/ec_internal_test.c",0x99,"Testing EC_GFp_mont_method()\n");
  pEVar1 = EC_GFp_mont_method();
  field_tests(pEVar1,params_p256,0x20);
  return;
}



bool field_tests_default(int param_1)

{
  int iVar1;
  char *pcVar2;
  EC_GROUP *group;
  BN_CTX *c;
  bool bVar3;
  
  iVar1 = *(int *)((long)param_1 * 0x10 + curves);
  pcVar2 = OBJ_nid2sn(iVar1);
  test_info("test/ec_internal_test.c",0xe2,"Testing curve %s\n",pcVar2);
  group = EC_GROUP_new_by_curve_name(iVar1);
  iVar1 = test_ptr("test/ec_internal_test.c",0xe4,"group = EC_GROUP_new_by_curve_name(nid)",group);
  if (iVar1 == 0) {
    if (group == (EC_GROUP *)0x0) {
      return false;
    }
    EC_GROUP_free(group);
    return false;
  }
  c = BN_CTX_new();
  iVar1 = test_ptr("test/ec_internal_test.c",0xe5,"ctx = BN_CTX_new()",c);
  if (iVar1 == 0) {
    bVar3 = false;
    if (group == (EC_GROUP *)0x0) goto LAB_0010187c;
  }
  else {
    bVar3 = true;
    if ((*(long *)(*(long *)group + 0x110) != 0) && (*(long *)(*(long *)group + 0xf8) != 0)) {
      iVar1 = group_field_tests_part_0(group,c);
      bVar3 = iVar1 != 0;
    }
  }
  EC_GROUP_free(group);
LAB_0010187c:
  if (c == (BN_CTX *)0x0) {
    return bVar3;
  }
  BN_CTX_free(c);
  return bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  size_t sVar2;
  
  _crv_len = EC_get_builtin_curves((EC_builtin_curve *)0x0,0);
  curves = (EC_builtin_curve *)CRYPTO_malloc((int)(_crv_len << 4),"test/ec_internal_test.c",0x228);
  iVar1 = test_ptr("test/ec_internal_test.c",0x228,
                   "curves = OPENSSL_malloc(sizeof(*curves) * crv_len)",curves);
  if (iVar1 != 0) {
    sVar2 = EC_get_builtin_curves(curves,_crv_len);
    iVar1 = test_true("test/ec_internal_test.c",0x229,"EC_get_builtin_curves(curves, crv_len)",
                      sVar2 != 0);
    if (iVar1 != 0) {
      add_test("field_tests_ecp_simple",field_tests_ecp_simple);
      add_test("field_tests_ecp_mont",field_tests_ecp_mont);
      add_test("ec2m_field_sanity",ec2m_field_sanity);
      add_test("field_tests_ec2_simple",field_tests_ec2_simple);
      add_all_tests("field_tests_default",field_tests_default,_crv_len & 0xffffffff,1);
      add_test("set_private_key",set_private_key);
      add_test("decoded_flag_test",decoded_flag_test);
      add_all_tests("ecpkparams_i2d2i_test",ecpkparams_i2d2i_test,_crv_len & 0xffffffff,1);
      add_test("named_group_creation_test",named_group_creation_test);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  CRYPTO_free(curves);
  return;
}


