
RSA * load_key(uint param_1)

{
  int iVar1;
  RSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar2;
  
  r = RSA_new();
  iVar1 = test_ptr("test/rsa_test.c",0x22f,"rsa = RSA_new()",r);
  if (iVar1 == 0) {
    return (RSA *)0x0;
  }
  a = BN_bin2bn(n_32,0x101,(BIGNUM *)0x0);
  a_00 = BN_bin2bn("\x01",3,(BIGNUM *)0x0);
  if (param_1 == 0) {
    if (a != (BIGNUM *)0x0) {
      a_01 = (BIGNUM *)0x0;
      pBVar2 = a_00;
      goto joined_r0x001000c3;
    }
  }
  else {
    a_01 = BN_bin2bn(d_30,0x100,(BIGNUM *)0x0);
    if ((a == (BIGNUM *)0x0) || (pBVar2 = a_01, a_00 == (BIGNUM *)0x0)) goto LAB_001000cd;
joined_r0x001000c3:
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = RSA_set0_key(r,a,a_00,a_01);
      param_1 = (uint)(iVar1 == 0);
      goto LAB_001000cd;
    }
  }
  a_01 = (BIGNUM *)0x0;
  param_1 = 1;
LAB_001000cd:
  iVar1 = test_false("test/rsa_test.c",0x235,
                     "pn == NULL || pe == NULL || (priv && pd == NULL) || !RSA_set0_key(rsa, pn, pe, pd)"
                     ,param_1);
  if (iVar1 == 0) {
    BN_free(a);
    BN_free(a_00);
    BN_free(a_01);
    RSA_free(r);
    return (RSA *)0x0;
  }
  return r;
}



int test_rsa_saos(void)

{
  int iVar1;
  RSA *rsa;
  RSA *rsa_00;
  long in_FS_OFFSET;
  uint local_14c;
  uchar local_148 [264];
  long local_40;
  
  rsa_00 = (RSA *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_14c = 0;
  rsa = (RSA *)load_key(1);
  iVar1 = test_ptr("test/rsa_test.c",0x293,"rsa_priv = load_key(1)",rsa);
  if (iVar1 != 0) {
    rsa_00 = (RSA *)load_key(0);
    iVar1 = test_ptr("test/rsa_test.c",0x295,"rsa_pub = load_key(0)",rsa_00);
    if (iVar1 != 0) {
      iVar1 = RSA_size(rsa);
      iVar1 = test_int_ge("test/rsa_test.c",0x297,"(int)sizeof(sig)","RSA_size(rsa_priv)",0x100,
                          iVar1);
      if (iVar1 != 0) {
        iVar1 = RSA_sign_ASN1_OCTET_STRING(0,in_35,0xf2,local_148,&local_14c,rsa);
        iVar1 = test_true("test/rsa_test.c",0x29b,
                          "RSA_sign_ASN1_OCTET_STRING(0, in, inlen, sig, &siglen, rsa_priv)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = RSA_verify_ASN1_OCTET_STRING(0,in_35,0xf2,local_148,local_14c,rsa_00);
          iVar1 = test_true("test/rsa_test.c",0x29e,
                            "RSA_verify_ASN1_OCTET_STRING(0, in, inlen, sig, siglen, rsa_pub)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = RSA_sign_ASN1_OCTET_STRING(0,in_35,0xf3,local_148,&local_14c,rsa);
            iVar1 = test_false("test/rsa_test.c",0x2a2,
                               "RSA_sign_ASN1_OCTET_STRING(0, in, inlen + 1, sig, &siglen, rsa_priv)"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = RSA_sign_ASN1_OCTET_STRING(0,in_35,0xf2,local_148,&local_14c,rsa_00);
              iVar1 = test_false("test/rsa_test.c",0x2a7,
                                 "RSA_sign_ASN1_OCTET_STRING(0, in, inlen, sig, &siglen, rsa_pub)",
                                 iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = RSA_verify_ASN1_OCTET_STRING(0,in_35,0xf2,local_148,local_14c - 1,rsa_00);
                iVar1 = test_false("test/rsa_test.c",0x2ac,
                                   "RSA_verify_ASN1_OCTET_STRING(0, in, inlen, sig, siglen - 1, rsa_pub)"
                                   ,iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = RSA_verify_ASN1_OCTET_STRING(0,in_35,0xf2,no_octet_sig_34,0x100,rsa_00);
                  iVar1 = test_false("test/rsa_test.c",0x2b0,
                                     "RSA_verify_ASN1_OCTET_STRING(0, in, inlen, (unsigned char *)no_octet_sig, (unsigned int)sizeof(no_octet_sig), rsa_pub)"
                                     ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = RSA_verify_ASN1_OCTET_STRING(0,in_35,0xf2,sig_mismatch_33,0x100,rsa_00);
                    iVar1 = test_false("test/rsa_test.c",0x2b6,
                                       "RSA_verify_ASN1_OCTET_STRING(0, in, inlen, (unsigned char *)sig_mismatch, (unsigned int)sizeof(sig_mismatch), rsa_pub)"
                                       ,iVar1 != 0);
                    if (iVar1 != 0) {
                      local_148[0] = local_148[0] + '\x01';
                      iVar1 = RSA_verify_ASN1_OCTET_STRING(0,in_35,0xf2,local_148,local_14c,rsa_00);
                      iVar1 = test_false("test/rsa_test.c",0x2bd,
                                         "RSA_verify_ASN1_OCTET_STRING(0, in, inlen, sig, siglen, rsa_pub)"
                                         ,iVar1 != 0);
                      if (iVar1 != 0) {
                        local_148[0] = local_148[0] + 0xff;
                        iVar1 = 1;
                        goto LAB_00100194;
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
    iVar1 = 0;
  }
LAB_00100194:
  RSA_free(rsa);
  RSA_free(rsa_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_rsa_security_bit(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RSA *r;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  long in_FS_OFFSET;
  bool bVar8;
  uchar auStack_818 [2008];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  r = RSA_new();
  iVar4 = *(int *)(rsa_security_bits_cases + (long)param_1 * 8);
  uVar1 = *(undefined4 *)(rsa_security_bits_cases + (long)param_1 * 8 + 4);
  iVar2 = test_ptr("test/rsa_test.c",0x171,&_LC14,r);
  if (iVar2 != 0) {
    iVar2 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar2 = iVar4 + 7;
    }
    iVar2 = iVar2 >> 3;
    iVar3 = test_int_le("test/rsa_test.c",0x171,"bytes","(int)sizeof(num)",iVar2,2000);
    if (iVar3 != 0) {
      __memset_chk(auStack_818,*(undefined1 *)((long)&vals_29 + (long)(iVar4 % 8)),(long)iVar2,2000)
      ;
      pBVar6 = BN_bin2bn(auStack_818,iVar2,(BIGNUM *)0x0);
      pBVar7 = BN_bin2bn(auStack_818,iVar2,(BIGNUM *)0x0);
      iVar4 = RSA_set0_key(r,pBVar7,pBVar6,0);
      iVar4 = test_true("test/rsa_test.c",0x181,
                        "RSA_set0_key(key, BN_bin2bn(num, bytes, NULL), BN_bin2bn(num, bytes, NULL), NULL)"
                        ,iVar4 != 0);
      if (iVar4 != 0) {
        uVar5 = RSA_security_bits(r);
        iVar4 = test_uint_eq("test/rsa_test.c",0x183,"RSA_security_bits(key)","result",uVar5,uVar1);
        bVar8 = iVar4 != 0;
        goto LAB_001004b8;
      }
    }
  }
  bVar8 = false;
LAB_001004b8:
  RSA_free(r);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_EVP_rsa_legacy_key(void)

{
  int iVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  RSA *key;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  EVP_PKEY *pkey;
  long lVar8;
  uchar *puVar9;
  uchar *puVar10;
  long in_FS_OFFSET;
  undefined8 local_548;
  uchar local_53b [3];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  uchar local_2d8 [272];
  undefined1 local_1c8 [392];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_53b[2] = 1;
  local_3d8 = __LC37;
  uStack_3d0 = _UNK_001028a8;
  puVar9 = "";
  puVar10 = local_2d8;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
    puVar9 = puVar9 + 8;
    puVar10 = puVar10 + 8;
  }
  local_548 = 0x180;
  local_3c8 = __LC38;
  uStack_3c0 = _UNK_001028b8;
  local_3b8 = __LC39;
  uStack_3b0 = _UNK_001028c8;
  local_3a8 = __LC40;
  uStack_3a0 = _UNK_001028d8;
  *puVar10 = *puVar9;
  local_53b[0] = '\x01';
  local_53b[1] = '\0';
  local_398 = __LC41;
  uStack_390 = _UNK_001028e8;
  local_388 = __LC42;
  uStack_380 = _UNK_001028f8;
  local_378 = __LC43;
  uStack_370 = _UNK_00102908;
  local_368 = __LC44;
  uStack_360 = _UNK_00102918;
  local_358 = __LC45;
  uStack_350 = _UNK_00102928;
  local_348 = __LC46;
  uStack_340 = _UNK_00102938;
  local_338 = __LC47;
  uStack_330 = _UNK_00102948;
  local_328 = __LC48;
  uStack_320 = _UNK_00102958;
  local_318 = __LC49;
  uStack_310 = _UNK_00102968;
  local_308 = __LC50;
  uStack_300 = _UNK_00102978;
  local_2f8 = __LC51;
  uStack_2f0 = _UNK_00102988;
  local_2e8 = __LC52;
  uStack_2e0 = _UNK_00102998;
  local_4f8 = __LC53;
  uStack_4f0 = _UNK_001029a8;
  local_4e8 = __LC54;
  uStack_4e0 = _UNK_001029b8;
  local_4d8 = __LC55;
  uStack_4d0 = _UNK_001029c8;
  local_4c8 = __LC56;
  uStack_4c0 = _UNK_001029d8;
  local_4b8 = __LC57;
  uStack_4b0 = _UNK_001029e8;
  local_478 = 0xd3;
  local_4a8 = __LC58;
  uStack_4a0 = _UNK_001029f8;
  local_3e8 = 0xc1;
  local_498 = __LC59;
  uStack_490 = _UNK_00102a08;
  local_488 = __LC60;
  uStack_480 = _UNK_00102a18;
  local_468 = __LC61;
  uStack_460 = _UNK_00102a28;
  local_458 = __LC62;
  uStack_450 = _UNK_00102a38;
  local_448 = __LC63;
  uStack_440 = _UNK_00102a48;
  local_438 = __LC64;
  uStack_430 = _UNK_00102a58;
  local_428 = __LC65;
  uStack_420 = _UNK_00102a68;
  local_418 = __LC66;
  uStack_410 = _UNK_00102a78;
  local_408 = __LC67;
  uStack_400 = _UNK_00102a88;
  local_3f8 = __LC68;
  uStack_3f0 = _UNK_00102a98;
  local_538 = __LC21;
  uStack_530 = _UNK_00102898;
  local_528 = __LC21;
  uStack_520 = _UNK_00102898;
  local_518 = __LC21;
  uStack_510 = _UNK_00102898;
  local_508 = __LC21;
  uStack_500 = _UNK_00102898;
  pBVar3 = BN_bin2bn((uchar *)&local_4f8,0x81,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/rsa_test.c",0x1e9,"(p = BN_bin2bn(p_data, sizeof(p_data), NULL))",pBVar3);
  if (iVar1 != 0) {
    pBVar4 = BN_bin2bn((uchar *)&local_468,0x81,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/rsa_test.c",0x1ea,"(q = BN_bin2bn(q_data, sizeof(q_data), NULL))",pBVar4)
    ;
    if (iVar1 != 0) {
      pBVar5 = BN_bin2bn(local_2d8,0x101,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/rsa_test.c",0x1eb,"(n = BN_bin2bn(n_data, sizeof(n_data), NULL))",
                       pBVar5);
      if (iVar1 != 0) {
        pBVar6 = BN_bin2bn((uchar *)&local_3d8,0x100,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/rsa_test.c",0x1ec,"(d = BN_bin2bn(d_data, sizeof(d_data), NULL))",
                         pBVar6);
        if (iVar1 != 0) {
          pBVar7 = BN_bin2bn(local_53b,3,(BIGNUM *)0x0);
          iVar1 = test_ptr("test/rsa_test.c",0x1ed,"(e = BN_bin2bn(e_data, sizeof(e_data), NULL))",
                           pBVar7);
          if (iVar1 != 0) {
            key = RSA_new();
            iVar1 = test_ptr("test/rsa_test.c",0x1ee,"(rsa = RSA_new())",key);
            if (iVar1 != 0) {
              type = EVP_sha256();
              iVar1 = test_ptr("test/rsa_test.c",0x1ef,"(md = EVP_sha256())",type);
              if (iVar1 != 0) {
                ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
                pkey = (EVP_PKEY *)0x0;
                uVar2 = test_ptr("test/rsa_test.c",0x1f0,"(ctx = EVP_MD_CTX_new())",ctx);
                if (uVar2 != 0) {
                  pkey = EVP_PKEY_new();
                  iVar1 = test_ptr("test/rsa_test.c",0x1f1,"(pkey = EVP_PKEY_new())",pkey);
                  if (iVar1 != 0) {
                    iVar1 = RSA_set0_factors(key,pBVar3,pBVar4);
                    iVar1 = test_true("test/rsa_test.c",0x1f2,"RSA_set0_factors(rsa, p, q)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = RSA_set0_key(key,pBVar5,pBVar7,pBVar6);
                      iVar1 = test_true("test/rsa_test.c",499,"RSA_set0_key(rsa, n, e, d)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        EVP_PKEY_assign(pkey,6,key);
                        iVar1 = test_true("test/rsa_test.c",500,"EVP_PKEY_assign_RSA(pkey, rsa)");
                        if (iVar1 != 0) {
                          iVar1 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,
                                                     pkey);
                          iVar1 = test_true("test/rsa_test.c",0x1f5,
                                            "EVP_DigestSignInit(ctx, NULL, md, NULL, pkey)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = EVP_DigestSign(ctx,local_1c8,&local_548,&local_538,0x40);
                            iVar1 = test_true("test/rsa_test.c",0x1f6,
                                              "EVP_DigestSign(ctx, sigbuf, &buflen, msgbuf, msglen)"
                                              ,iVar1 != 0);
                            uVar2 = (uint)(iVar1 != 0);
                            goto LAB_001008bd;
                          }
                        }
                      }
                    }
                  }
                  uVar2 = 0;
                }
                goto LAB_001008bd;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
  pkey = (EVP_PKEY *)0x0;
  ctx = (EVP_MD_CTX *)0x0;
LAB_001008bd:
  EVP_MD_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
test_rsa_simple_constprop_0
          (int param_1,int param_2,int param_3,undefined8 *param_4,undefined4 *param_5,
          undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  RSA *rsa;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  uchar local_248 [256];
  uchar local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rsa = RSA_new();
  uVar7 = 0;
  if (rsa != (RSA *)0x0) {
    if (param_1 == 1) {
      pBVar4 = BN_bin2bn(d_17,0x32,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn((uchar *)&e_16,1,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(n_15,0x33,(BIGNUM *)0x0);
      RSA_set0_key(rsa,pBVar6,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(q_14,0x1a,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(p_13,0x1a,(BIGNUM *)0x0);
      RSA_set0_factors(rsa,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(iqmp_12,0x1a,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(dmq1_11,0x1a,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(dmp1_10,0x1a,(BIGNUM *)0x0);
      RSA_set0_crt_params(rsa,pBVar6,pBVar5,pBVar4);
      uVar1 = ctext_ex_9._8_8_;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = ctext_ex_9._0_8_;
        param_4[1] = uVar1;
        uVar1 = ctext_ex_9._24_8_;
        param_4[2] = ctext_ex_9._16_8_;
        param_4[3] = uVar1;
        uVar1 = ctext_ex_9._40_8_;
        param_4[4] = ctext_ex_9._32_8_;
        param_4[5] = uVar1;
        *(undefined2 *)(param_4 + 6) = ctext_ex_9._48_2_;
      }
      uVar7 = 0x32;
    }
    else if (param_1 == 2) {
      pBVar4 = BN_bin2bn(d_8,0x81,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn((uchar *)&e_7,1,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(n_6,0x81,(BIGNUM *)0x0);
      RSA_set0_key(rsa,pBVar6,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(q_5,0x41,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(p_4,0x41,(BIGNUM *)0x0);
      RSA_set0_factors(rsa,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(iqmp_3,0x41,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(dmq1_2,0x40,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(dmp1_1,0x40,(BIGNUM *)0x0);
      RSA_set0_crt_params(rsa,pBVar6,pBVar5,pBVar4);
      uVar1 = ctext_ex_0._8_8_;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = ctext_ex_0._0_8_;
        param_4[1] = uVar1;
        uVar1 = ctext_ex_0._24_8_;
        param_4[2] = ctext_ex_0._16_8_;
        param_4[3] = uVar1;
        uVar1 = ctext_ex_0._40_8_;
        param_4[4] = ctext_ex_0._32_8_;
        param_4[5] = uVar1;
        uVar1 = ctext_ex_0._56_8_;
        param_4[6] = ctext_ex_0._48_8_;
        param_4[7] = uVar1;
        uVar1 = ctext_ex_0._72_8_;
        param_4[8] = ctext_ex_0._64_8_;
        param_4[9] = uVar1;
        uVar1 = ctext_ex_0._88_8_;
        param_4[10] = ctext_ex_0._80_8_;
        param_4[0xb] = uVar1;
        uVar1 = ctext_ex_0._104_8_;
        param_4[0xc] = ctext_ex_0._96_8_;
        param_4[0xd] = uVar1;
        uVar1 = ctext_ex_0._120_8_;
        param_4[0xe] = ctext_ex_0._112_8_;
        param_4[0xf] = uVar1;
      }
      uVar7 = 0x80;
    }
    else if (param_1 == 0) {
      pBVar4 = BN_bin2bn(d_26,0x40,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn((uchar *)&e_25,1,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(n_24,0x41,(BIGNUM *)0x0);
      RSA_set0_key(rsa,pBVar6,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(q_23,0x21,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(p_22,0x21,(BIGNUM *)0x0);
      RSA_set0_factors(rsa,pBVar5,pBVar4);
      pBVar4 = BN_bin2bn(iqmp_21,0x20,(BIGNUM *)0x0);
      pBVar5 = BN_bin2bn(dmq1_20,0x21,(BIGNUM *)0x0);
      pBVar6 = BN_bin2bn(dmp1_19,0x20,(BIGNUM *)0x0);
      RSA_set0_crt_params(rsa,pBVar6,pBVar5,pBVar4);
      uVar1 = ctext_ex_18._8_8_;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = ctext_ex_18._0_8_;
        param_4[1] = uVar1;
        uVar1 = ctext_ex_18._24_8_;
        param_4[2] = ctext_ex_18._16_8_;
        param_4[3] = uVar1;
        uVar1 = ctext_ex_18._40_8_;
        param_4[4] = ctext_ex_18._32_8_;
        param_4[5] = uVar1;
        uVar1 = ctext_ex_18._56_8_;
        param_4[6] = ctext_ex_18._48_8_;
        param_4[7] = uVar1;
      }
      uVar7 = 0x40;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar7;
  }
  iVar2 = RSA_public_encrypt(8,ptext_ex_27,local_148,rsa,param_2);
  iVar3 = test_int_eq("test/rsa_test.c",0xfd,&_LC70,"clentmp",iVar2,uVar7);
  if (iVar3 != 0) {
    iVar2 = RSA_private_decrypt(iVar2,local_148,local_248,rsa,param_3);
    iVar3 = test_int_gt("test/rsa_test.c",0x102,&_LC70,&_LC71,iVar2,0);
    if (iVar3 != 0) {
      iVar2 = test_mem_eq("test/rsa_test.c",0x102,"ptext","ptext_ex",local_248,(long)iVar2,
                          ptext_ex_27,8);
      if (iVar2 != 0) {
        uVar7 = 1;
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = rsa;
          rsa = (RSA *)0x0;
        }
        goto LAB_00100c9e;
      }
    }
  }
  uVar7 = 0;
LAB_00100c9e:
  RSA_free(rsa);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_rsa_pkcs1(undefined8 param_1)

{
  test_rsa_simple_constprop_0(param_1,1,1,0,0,0);
  return;
}



int test_rsa_oaep(undefined8 param_1)

{
  int flen;
  RSA *rsa;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  int local_254;
  RSA *local_250;
  uchar local_248 [256];
  byte local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_250 = (RSA *)0x0;
  local_254 = 0;
  iVar1 = test_rsa_simple_constprop_0(param_1,4,4,local_148,&local_254,&local_250);
  rsa = local_250;
  flen = local_254;
  if (iVar1 == 0) {
    iVar1 = 0;
    goto LAB_00101189;
  }
  iVar1 = RSA_private_decrypt(local_254,local_148,local_248,local_250,4);
  if (iVar1 < 1) {
LAB_001012ae:
    iVar1 = 0;
    goto LAB_00101189;
  }
  iVar1 = test_mem_eq("test/rsa_test.c",0x12e,"ptext","ptext_ex",local_248,(long)iVar1,ptext_ex_28,8
                     );
  if (iVar1 == 0) goto LAB_00101189;
  if (flen < 1) {
    if (flen == 0) goto LAB_001012d0;
  }
  else {
    pbVar3 = local_148;
    do {
      *pbVar3 = *pbVar3 ^ 1;
      iVar1 = RSA_private_decrypt(flen,local_148,local_248,rsa,4);
      iVar1 = test_int_le("test/rsa_test.c",0x136,&_LC70,&_LC71,iVar1,0);
      if (iVar1 == 0) goto LAB_001012ae;
      *pbVar3 = *pbVar3 ^ 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 != local_148 + flen);
LAB_001012d0:
    iVar1 = -1;
    do {
      iVar2 = RSA_private_decrypt(iVar1,local_148,local_248,rsa,4);
      iVar2 = test_int_le("test/rsa_test.c",0x13f,&_LC70,&_LC71,iVar2,0);
      if (iVar2 == 0) goto LAB_001012ae;
      iVar1 = iVar1 + 1;
    } while (flen != iVar1);
  }
  iVar1 = 1;
LAB_00101189:
  RSA_free(rsa);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_rsa_pkcs1",test_rsa_pkcs1,3,1);
  add_all_tests("test_rsa_oaep",test_rsa_oaep,3,1);
  add_all_tests("test_rsa_security_bit",test_rsa_security_bit,0x11,1);
  add_test("test_rsa_saos",test_rsa_saos);
  add_test("test_EVP_rsa_legacy_key",test_EVP_rsa_legacy_key);
  return 1;
}


