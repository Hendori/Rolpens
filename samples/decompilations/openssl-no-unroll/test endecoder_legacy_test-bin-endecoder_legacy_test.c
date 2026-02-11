
bool test_membio_str_eq(BIO *param_1,BIO *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  lVar2 = BIO_ctrl(param_1,3,0,&local_40);
  lVar3 = BIO_ctrl(param_2,3,0,&local_38);
  iVar1 = test_long_ge("test/endecoder_legacy_test.c",0x124,"len_legacy",&_LC0,lVar3,0);
  if (iVar1 != 0) {
    iVar1 = test_long_ge("test/endecoder_legacy_test.c",0x125,"len_provided",&_LC0,lVar2,0);
    if (iVar1 != 0) {
      iVar1 = test_strn_eq("test/endecoder_legacy_test.c",0x126,"str_provided","str_legacy",local_40
                           ,lVar2,local_38,lVar3);
      bVar4 = iVar1 != 0;
      goto LAB_0010008b;
    }
  }
  bVar4 = false;
LAB_0010008b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_unprotected_PEM
              (undefined8 param_1,int param_2,undefined8 param_3,code *param_4,code *param_5,
              code *param_6,code *param_7,undefined8 param_8,undefined4 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  BIO_METHOD *pBVar4;
  BIO *a;
  BIO *a_00;
  undefined8 uVar5;
  EVP_PKEY *pkey;
  undefined8 uVar6;
  void *key;
  long in_FS_OFFSET;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (EVP_PKEY *)0x0;
  pBVar4 = BIO_s_mem();
  a = BIO_new(pBVar4);
  iVar1 = test_ptr("test/endecoder_legacy_test.c",0x181,"membio_legacy = BIO_new(BIO_s_mem())",a);
  if (iVar1 == 0) {
    iVar1 = 0;
    pkey = (EVP_PKEY *)0x0;
    uVar6 = 0;
    uVar5 = 0;
    a_00 = (BIO *)0x0;
  }
  else {
    pBVar4 = BIO_s_mem();
    a_00 = BIO_new(pBVar4);
    iVar1 = test_ptr("test/endecoder_legacy_test.c",0x182,"membio_provided = BIO_new(BIO_s_mem())",
                     a_00);
    if (iVar1 == 0) {
      pkey = (EVP_PKEY *)0x0;
      uVar6 = 0;
      uVar5 = 0;
      iVar1 = 0;
    }
    else {
      uVar5 = OSSL_ENCODER_CTX_new_for_pkey(param_8,param_9,&_LC8,param_10);
      iVar1 = test_ptr("test/endecoder_legacy_test.c",0x185,
                       "ectx = OSSL_ENCODER_CTX_new_for_pkey(provided_pkey, selection, \"PEM\", structure, NULL)"
                       ,uVar5);
      if (iVar1 != 0) {
        iVar1 = OSSL_ENCODER_to_bio(uVar5,a_00);
        iVar1 = test_true("test/endecoder_legacy_test.c",0x189,
                          "OSSL_ENCODER_to_bio(ectx, membio_provided)",iVar1 != 0);
        if (iVar1 == 0) {
          pkey = (EVP_PKEY *)0x0;
          uVar6 = 0;
          iVar1 = 0;
          goto LAB_001001b1;
        }
        iVar1 = (*param_4)(a,param_3);
        iVar1 = test_true("test/endecoder_legacy_test.c",0x18a,
                          "pem_write_bio(membio_legacy, legacy_key)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = test_membio_str_eq(a_00,a);
          if (iVar1 != 0) {
            if (param_5 == (code *)0x0) {
              pkey = (EVP_PKEY *)0x0;
              uVar6 = 0;
              iVar1 = 1;
            }
            else {
              pkey = EVP_PKEY_new();
              uVar6 = 0;
              iVar1 = test_ptr("test/endecoder_legacy_test.c",0x191,
                               "decoded_legacy_pkey = EVP_PKEY_new()",pkey);
              if (iVar1 != 0) {
                uVar6 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC8,param_10,param_1,param_9,0);
                iVar1 = test_ptr("test/endecoder_legacy_test.c",0x192,
                                 "dctx = OSSL_DECODER_CTX_new_for_pkey(&decoded_provided_pkey, \"PEM\", structure, keytype, selection, NULL, NULL)"
                                 ,uVar6);
                if (iVar1 != 0) {
                  iVar1 = OSSL_DECODER_from_bio(uVar6,a_00,0,0x10033a);
                  iVar1 = test_true("test/endecoder_legacy_test.c",0x197,
                                    "OSSL_DECODER_from_bio(dctx, membio_provided)",iVar1 != 0);
                  if (iVar1 == 0) goto LAB_001001b1;
                  key = (void *)(*param_5)(a,0,0,0);
                  iVar1 = test_ptr("test/endecoder_legacy_test.c",0x198,
                                   "decoded_legacy_key = pem_read_bio(membio_legacy, NULL, NULL, NULL)"
                                   ,key);
                  if (iVar1 != 0) {
                    iVar1 = EVP_PKEY_assign(pkey,param_2,key);
                    iVar1 = test_true("test/endecoder_legacy_test.c",0x19a,
                                      "EVP_PKEY_assign(decoded_legacy_pkey, evp_type, decoded_legacy_key)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      uVar2 = (*param_6)(local_48,pkey);
                      iVar3 = test_int_gt("test/endecoder_legacy_test.c",0x19e,
                                          "evp_pkey_eq(decoded_provided_pkey, decoded_legacy_pkey)",
                                          &_LC0,uVar2,0);
                      iVar1 = 1;
                      if (iVar3 == 0) {
                        test_info("test/endecoder_legacy_test.c",0x1a0,"decoded_provided_pkey:");
                        (*param_7)(_bio_out,local_48,0,0);
                        test_info("test/endecoder_legacy_test.c",0x1a2,"decoded_legacy_pkey:");
                        (*param_7)(_bio_out,pkey,0,0);
                        iVar1 = 1;
                      }
                      goto LAB_001001b1;
                    }
                  }
                }
                iVar1 = 0;
              }
            }
            goto LAB_001001b1;
          }
        }
      }
      pkey = (EVP_PKEY *)0x0;
      uVar6 = 0;
      iVar1 = 0;
    }
  }
LAB_001001b1:
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_48);
  OSSL_ENCODER_CTX_free(uVar5);
  OSSL_DECODER_CTX_free(uVar6);
  BIO_free(a_00);
  BIO_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_DER(undefined8 param_1,int param_2,undefined8 param_3,code *param_4,code *param_5,
            code *param_6,code *param_7,undefined8 param_8,undefined4 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_PKEY *pkey;
  undefined8 uVar5;
  void *key;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_48 = (EVP_PKEY *)0x0;
  uVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_8,param_9,&_LC20,param_10,0);
  iVar1 = test_ptr("test/endecoder_legacy_test.c",0x1c6,
                   "ectx = OSSL_ENCODER_CTX_new_for_pkey(provided_pkey, selection, \"DER\", structure, NULL)"
                   ,uVar4);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_data(uVar4,&local_68,&local_58);
    iVar1 = test_true("test/endecoder_legacy_test.c",0x1ca,
                      "OSSL_ENCODER_to_data(ectx, &der_provided, &der_provided_len)",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = (*param_4)(param_3,&local_78);
      lVar6 = (long)iVar1;
      iVar1 = test_size_t_gt("test/endecoder_legacy_test.c",0x1cc,
                             "der_legacy_len = i2d(legacy_key, &der_legacy)",&_LC0,lVar6,0);
      if (iVar1 != 0) {
        iVar1 = test_mem_eq("test/endecoder_legacy_test.c",0x1cd,"der_provided","der_legacy",
                            local_68,local_58,local_78,lVar6);
        if (iVar1 != 0) {
          if (param_5 == (code *)0x0) {
            pkey = (EVP_PKEY *)0x0;
            uVar5 = 0;
            iVar1 = 1;
          }
          else {
            pkey = EVP_PKEY_new();
            uVar5 = 0;
            uVar7 = 0x100726;
            iVar1 = test_ptr("test/endecoder_legacy_test.c",0x1d4,
                             "decoded_legacy_pkey = EVP_PKEY_new()",pkey);
            if (iVar1 != 0) {
              uVar5 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC20,param_10,param_1,param_9,0,0);
              iVar1 = test_ptr("test/endecoder_legacy_test.c",0x1d5,
                               "dctx = OSSL_DECODER_CTX_new_for_pkey(&decoded_provided_pkey, \"DER\", structure, keytype, selection, NULL, NULL)"
                               ,uVar5);
              if (iVar1 != 0) {
                local_60 = local_68;
                local_50 = local_58;
                iVar1 = OSSL_DECODER_from_data(uVar5,&local_60,&local_50,uVar7);
                iVar1 = test_true("test/endecoder_legacy_test.c",0x1da,
                                  "(pder_provided = der_provided, tmp_size = der_provided_len, OSSL_DECODER_from_data(dctx, &pder_provided, &tmp_size))"
                                  ,iVar1 != 0);
                if (iVar1 == 0) goto LAB_001005db;
                local_70 = local_78;
                key = (void *)(*param_5)(0,&local_70,lVar6);
                iVar1 = test_ptr("test/endecoder_legacy_test.c",0x1de,
                                 "(pder_legacy = der_legacy, decoded_legacy_key = d2i(NULL, &pder_legacy, (long)der_legacy_len))"
                                 ,key);
                if (iVar1 != 0) {
                  iVar1 = EVP_PKEY_assign(pkey,param_2,key);
                  iVar1 = test_true("test/endecoder_legacy_test.c",0x1e1,
                                    "EVP_PKEY_assign(decoded_legacy_pkey, evp_type, decoded_legacy_key)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = 1;
                    uVar2 = (*param_6)(local_48,pkey);
                    iVar3 = test_int_gt("test/endecoder_legacy_test.c",0x1e5,
                                        "evp_pkey_eq(decoded_provided_pkey, decoded_legacy_pkey)",
                                        &_LC0,uVar2,0);
                    if (iVar3 == 0) {
                      test_info("test/endecoder_legacy_test.c",0x1e7,"decoded_provided_pkey:");
                      (*param_7)(_bio_out,local_48,0,0);
                      test_info("test/endecoder_legacy_test.c",0x1e9,"decoded_legacy_pkey:");
                      (*param_7)(_bio_out,pkey,0,0);
                    }
                    goto LAB_001005db;
                  }
                }
              }
              iVar1 = 0;
            }
          }
          goto LAB_001005db;
        }
      }
    }
  }
  pkey = (EVP_PKEY *)0x0;
  uVar5 = 0;
  iVar1 = 0;
LAB_001005db:
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(local_48);
  OSSL_ENCODER_CTX_free(uVar4);
  OSSL_DECODER_CTX_free(uVar5);
  CRYPTO_free(local_68);
  CRYPTO_free(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_key(int param_1)

{
  char *__s2;
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  void *pvVar11;
  BIO_METHOD *pBVar12;
  BIO *a;
  EVP_PKEY *pkey;
  undefined8 uVar13;
  undefined8 uVar14;
  void *key;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long in_FS_OFFSET;
  undefined8 uVar19;
  undefined **local_d0;
  int local_b8;
  BIO *local_b0;
  undefined8 local_a8;
  EVP_PKEY *local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  lVar18 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  lVar10 = lVar18 * 0xa0;
  puVar17 = (undefined8 *)(test_stanzas + lVar10);
  iVar6 = test_ptr("test/endecoder_legacy_test.c",0x202,"test_stanza = &test_stanzas[idx]",puVar17);
  if (iVar6 != 0) {
    __s2 = (char *)*puVar17;
    iVar6 = strcmp(keys,__s2);
    if (iVar6 == 0) {
      lVar15 = 0;
LAB_0010125a:
      local_d0 = &keys + lVar15 * 4;
    }
    else {
      iVar6 = strcmp(PTR_DAT_00102560,__s2);
      if (iVar6 == 0) {
        lVar15 = 1;
        goto LAB_0010125a;
      }
      iVar6 = strcmp(PTR_DAT_00102580,__s2);
      if (iVar6 == 0) {
        lVar15 = 2;
        goto LAB_0010125a;
      }
      iVar6 = strcmp(PTR_DAT_001025a0,__s2);
      if (iVar6 == 0) {
        lVar15 = 3;
        goto LAB_0010125a;
      }
      iVar6 = strcmp(PTR__LC52_001025c0,__s2);
      local_d0 = (undefined **)0x0;
      if (iVar6 == 0) {
        lVar15 = 4;
        goto LAB_0010125a;
      }
    }
    iVar6 = test_ptr("test/endecoder_legacy_test.c",0x203,"key = lookup_key(test_stanza->keytype)",
                     local_d0);
    if (iVar6 != 0) {
      puVar1 = local_d0[3];
      iVar6 = test_ptr("test/endecoder_legacy_test.c",0x207,"pkey = key->key",puVar1);
      if (iVar6 != 0) {
        iVar6 = evp_pkey_copy_downgraded(&local_50,puVar1);
        iVar6 = test_true("test/endecoder_legacy_test.c",0x208,
                          "evp_pkey_copy_downgraded(&downgraded_pkey, pkey)",iVar6 != 0);
        if ((iVar6 != 0) &&
           (iVar6 = test_ptr("test/endecoder_legacy_test.c",0x209,"downgraded_pkey",local_50),
           iVar6 != 0)) {
          uVar9 = *(undefined4 *)(local_d0 + 1);
          uVar7 = EVP_PKEY_get_id(local_50);
          iVar6 = test_int_eq("test/endecoder_legacy_test.c",0x20a,
                              "EVP_PKEY_get_id(downgraded_pkey)","key->evp_type",uVar7,uVar9);
          if (iVar6 != 0) {
            pvVar11 = EVP_PKEY_get0(local_50);
            iVar6 = test_ptr("test/endecoder_legacy_test.c",0x20b,
                             "legacy_obj = EVP_PKEY_get0(downgraded_pkey)",pvVar11);
            if (iVar6 != 0) {
              local_b8 = 1;
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x40) != 0) {
                puVar16 = puVar17;
                do {
                  uVar2 = puVar16[1];
                  test_info("test/endecoder_legacy_test.c",0x217,
                            "Test OSSL_ENCODER against PEM_write_bio_{TYPE}PrivateKey for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  pcVar3 = *(code **)(test_stanzas + lVar15 + 0x80);
                  pcVar4 = *(code **)(test_stanzas + lVar15 + 0x40);
                  local_48 = (EVP_PKEY *)0x0;
                  iVar6 = *(int *)(local_d0 + 1);
                  puVar5 = *local_d0;
                  pBVar12 = BIO_s_mem();
                  a = BIO_new(pBVar12);
                  iVar8 = test_ptr("test/endecoder_legacy_test.c",0x13d,
                                   "membio_legacy = BIO_new(BIO_s_mem())",a);
                  if (iVar8 == 0) {
                    local_a8 = 0;
                    pkey = (EVP_PKEY *)0x0;
                    uVar14 = 0;
                    local_b0 = (BIO *)0x0;
LAB_00100cb9:
                    EVP_PKEY_free(pkey);
                    EVP_PKEY_free(local_48);
                    OSSL_ENCODER_CTX_free(local_a8);
                    OSSL_DECODER_CTX_free(uVar14);
                    BIO_free(local_b0);
                    BIO_free(a);
                    local_b8 = 0;
                  }
                  else {
                    pBVar12 = BIO_s_mem();
                    local_b0 = BIO_new(pBVar12);
                    iVar8 = test_ptr("test/endecoder_legacy_test.c",0x13e,
                                     "membio_provided = BIO_new(BIO_s_mem())",local_b0);
                    if (iVar8 == 0) {
                      local_a8 = 0;
                      pkey = (EVP_PKEY *)0x0;
                      uVar14 = 0;
                      goto LAB_00100cb9;
                    }
                    local_a8 = OSSL_ENCODER_CTX_new_for_pkey(puVar1,0x87,&_LC8,uVar2,0);
                    iVar8 = test_ptr("test/endecoder_legacy_test.c",0x141,
                                     "ectx = OSSL_ENCODER_CTX_new_for_pkey(provided_pkey, selection, \"PEM\", structure, NULL)"
                                     ,local_a8);
                    if (iVar8 == 0) {
LAB_00100cb3:
                      pkey = (EVP_PKEY *)0x0;
                      uVar14 = 0;
                      goto LAB_00100cb9;
                    }
                    iVar8 = OSSL_ENCODER_to_bio(local_a8,local_b0);
                    iVar8 = test_true("test/endecoder_legacy_test.c",0x145,
                                      "OSSL_ENCODER_to_bio(ectx, membio_provided)",iVar8 != 0);
                    if (iVar8 == 0) goto LAB_00100cb3;
                    iVar8 = (*pcVar4)(a,pvVar11,0,0,0,0,0);
                    iVar8 = test_true("test/endecoder_legacy_test.c",0x146,
                                      "pem_write_bio(membio_legacy, legacy_key, NULL, NULL, 0, NULL, NULL)"
                                      ,iVar8 != 0);
                    if ((iVar8 == 0) || (iVar8 = test_membio_str_eq(local_b0,a), iVar8 == 0))
                    goto LAB_00100cb3;
                    if (pcVar3 != (code *)0x0) {
                      pkey = EVP_PKEY_new();
                      uVar14 = 0;
                      uVar13 = test_ptr("test/endecoder_legacy_test.c",0x14e,
                                        "decoded_legacy_pkey = EVP_PKEY_new()",pkey);
                      if ((int)uVar13 != 0) {
                        uVar19 = 0;
                        uVar14 = OSSL_DECODER_CTX_new_for_pkey(&local_48,&_LC8,uVar2,puVar5,0x87);
                        iVar8 = test_ptr("test/endecoder_legacy_test.c",0x14f,
                                         "dctx = OSSL_DECODER_CTX_new_for_pkey(&decoded_provided_pkey, \"PEM\", structure, keytype, selection, NULL, NULL)"
                                         ,uVar14);
                        if (iVar8 != 0) {
                          iVar8 = OSSL_DECODER_from_bio(uVar14,local_b0,uVar19,uVar13);
                          iVar8 = test_true("test/endecoder_legacy_test.c",0x154,
                                            "OSSL_DECODER_from_bio(dctx, membio_provided)",
                                            iVar8 != 0);
                          if (iVar8 != 0) {
                            key = (void *)(*pcVar3)(a,0,0,0);
                            iVar8 = test_ptr("test/endecoder_legacy_test.c",0x155,
                                             "decoded_legacy_key = pem_read_bio(membio_legacy, NULL, NULL, NULL)"
                                             ,key);
                            if (iVar8 != 0) {
                              iVar6 = EVP_PKEY_assign(pkey,iVar6,key);
                              iVar6 = test_true("test/endecoder_legacy_test.c",0x157,
                                                "EVP_PKEY_assign(decoded_legacy_pkey, evp_type, decoded_legacy_key)"
                                                ,iVar6 != 0);
                              if (iVar6 != 0) {
                                uVar9 = EVP_PKEY_eq(local_48,pkey);
                                iVar6 = test_int_gt("test/endecoder_legacy_test.c",0x15b,
                                                                                                        
                                                  "evp_pkey_eq(decoded_provided_pkey, decoded_legacy_pkey)"
                                                  ,&_LC0,uVar9);
                                if (iVar6 == 0) {
                                  test_info("test/endecoder_legacy_test.c",0x15d,
                                            "decoded_provided_pkey:");
                                  EVP_PKEY_print_private(_bio_out,local_48,0,(ASN1_PCTX *)0x0);
                                  test_info("test/endecoder_legacy_test.c",0x15f,
                                            "decoded_legacy_pkey:");
                                  EVP_PKEY_print_private(_bio_out,pkey,0,(ASN1_PCTX *)0x0);
                                }
                                goto LAB_001014a5;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_00100cb9;
                    }
                    pkey = (EVP_PKEY *)0x0;
                    uVar14 = 0;
LAB_001014a5:
                    EVP_PKEY_free(pkey);
                    EVP_PKEY_free(local_48);
                    OSSL_ENCODER_CTX_free(local_a8);
                    OSSL_DECODER_CTX_free(uVar14);
                    BIO_free(local_b0);
                    BIO_free(a);
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar16 != (undefined8 *)(test_stanzas + lVar10 + 0x10));
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x48) != 0) {
                puVar16 = puVar17;
                do {
                  uVar2 = puVar16[1];
                  test_info("test/endecoder_legacy_test.c",0x22b,
                            "Test OSSL_ENCODER against PEM_write_bio_{TYPE}PublicKey for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  iVar8 = test_unprotected_PEM
                                    (*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                     *(undefined8 *)(test_stanzas + lVar15 + 0x48),
                                     *(undefined8 *)(test_stanzas + lVar15 + 0x88),EVP_PKEY_eq,
                                     &EVP_PKEY_print_public,puVar1,0x86,uVar2);
                  iVar6 = 0;
                  if (iVar8 != 0) {
                    iVar6 = local_b8;
                  }
                  puVar16 = puVar16 + 1;
                  local_b8 = iVar6;
                } while (puVar16 != (undefined8 *)(test_stanzas + lVar10 + 0x10));
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x50) != 0) {
                puVar16 = puVar17;
                do {
                  uVar2 = puVar16[1];
                  test_info("test/endecoder_legacy_test.c",0x23d,
                            "Test OSSL_ENCODER against PEM_write_bio_{TYPE}params for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  iVar8 = test_unprotected_PEM
                                    (*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                     *(undefined8 *)(test_stanzas + lVar15 + 0x50),
                                     *(undefined8 *)(test_stanzas + lVar15 + 0x90),
                                     &EVP_PKEY_parameters_eq,&EVP_PKEY_print_params,puVar1,0x84,
                                     uVar2);
                  iVar6 = 0;
                  if (iVar8 != 0) {
                    iVar6 = local_b8;
                  }
                  puVar16 = puVar16 + 1;
                  local_b8 = iVar6;
                } while (puVar16 != (undefined8 *)(test_stanzas + lVar10 + 0x10));
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x58) == 0) {
LAB_00100f51:
                iVar6 = local_b8;
              }
              else {
                test_info("test/endecoder_legacy_test.c",0x250,
                          "Test OSSL_ENCODER against PEM_write_bio_{TYPE}_PUBKEY for %s, %s",
                          *(undefined8 *)(test_stanzas + lVar15),"SubjectPublicKeyInfo");
                iVar6 = test_unprotected_PEM
                                  (*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x58),
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x98),EVP_PKEY_eq,
                                   _GLOBAL_OFFSET_TABLE_,puVar1,0x86,"SubjectPublicKeyInfo");
                if (iVar6 != 0) goto LAB_00100f51;
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x20) != 0) {
                puVar16 = puVar17;
                do {
                  uVar2 = puVar16[1];
                  test_info("test/endecoder_legacy_test.c",0x262,
                            "Test OSSL_ENCODER against i2d_{TYPE}PrivateKey for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  iVar8 = test_DER(*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x20),
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x60),EVP_PKEY_eq,
                                   PTR_EVP_PKEY_print_private_00104008,puVar1,0x87,uVar2);
                  if (iVar8 == 0) {
                    iVar6 = 0;
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar16 != (undefined8 *)(test_stanzas + lVar10 + 0x10));
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x28) != 0) {
                puVar16 = puVar17;
                do {
                  uVar2 = puVar16[1];
                  test_info("test/endecoder_legacy_test.c",0x276,
                            "Test OSSL_ENCODER against i2d_{TYPE}PublicKey for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  iVar8 = test_DER(*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x28),
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x68),EVP_PKEY_eq,
                                   &EVP_PKEY_print_public,puVar1,0x86,uVar2);
                  if (iVar8 == 0) {
                    iVar6 = 0;
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar16 != (undefined8 *)(test_stanzas + lVar10 + 0x10));
              }
              lVar15 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar15 + 0x30) != 0) {
                do {
                  uVar2 = puVar17[1];
                  test_info("test/endecoder_legacy_test.c",0x288,
                            "Test OSSL_ENCODER against i2d_{TYPE}params for %s, %s",
                            *(undefined8 *)(test_stanzas + lVar15),uVar2);
                  iVar8 = test_DER(*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x30),
                                   *(undefined8 *)(test_stanzas + lVar15 + 0x70),
                                   &EVP_PKEY_parameters_eq,&EVP_PKEY_print_params,puVar1,0x84,uVar2)
                  ;
                  if (iVar8 == 0) {
                    iVar6 = 0;
                  }
                  puVar17 = puVar17 + 1;
                } while ((undefined8 *)(test_stanzas + lVar10 + 0x10) != puVar17);
              }
              lVar18 = lVar18 * 0xa0;
              if (*(long *)(test_stanzas + lVar18 + 0x38) == 0) goto LAB_001009a2;
              test_info("test/endecoder_legacy_test.c",0x299,
                        "Test OSSL_ENCODER against i2d_{TYPE}_PUBKEY for %s, %s",
                        *(undefined8 *)(test_stanzas + lVar18),"SubjectPublicKeyInfo");
              iVar8 = test_DER(*local_d0,*(undefined4 *)(local_d0 + 1),pvVar11,
                               *(undefined8 *)(test_stanzas + lVar18 + 0x38),
                               *(undefined8 *)(test_stanzas + lVar18 + 0x78),EVP_PKEY_eq,
                               _GLOBAL_OFFSET_TABLE_,puVar1,0x86,"SubjectPublicKeyInfo");
              if (iVar8 != 0) goto LAB_001009a2;
            }
          }
        }
      }
    }
  }
  iVar6 = 0;
LAB_001009a2:
  EVP_PKEY_free(local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



/* WARNING: Removing unreachable block (ram,0x001017d3) */

undefined8 setup_tests(void)

{
  char *__s1;
  EVP_PKEY_CTX *pEVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  EVP_PKEY_CTX *ctx;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = test_skip_common_options();
  if (iVar2 == 0) {
    test_error("test/endecoder_legacy_test.c",0x2ae,"Error parsing test options\n");
  }
  else {
    lVar3 = test_get_argument_count();
    if (lVar3 == 2) {
      ppuVar6 = &keys;
      test_info("test/endecoder_legacy_test.c",0x2b6,"Generating keys...");
      do {
        __s1 = *ppuVar6;
        if (((*__s1 == 'D') && (__s1[1] == 'H')) && (__s1[2] == '\0')) {
          uVar4 = test_get_argument(1);
          puVar5 = (undefined *)load_pkey_pem(uVar4,0);
          ppuVar6[3] = puVar5;
          iVar2 = test_ptr("test/endecoder_legacy_test.c",699,
                           "keys[i].key = load_pkey_pem(test_get_argument(1), NULL)",puVar5);
        }
        else {
          iVar2 = strcmp(__s1,"RSA");
          if (iVar2 == 0) {
            uVar4 = test_get_argument(0);
            puVar5 = (undefined *)load_pkey_pem(uVar4,0);
            ppuVar6[3] = puVar5;
            iVar2 = test_ptr("test/endecoder_legacy_test.c",0x2c3,
                             "keys[i].key = load_pkey_pem(test_get_argument(0), NULL)",puVar5);
          }
          else {
            test_info("test/endecoder_legacy_test.c",0x2c9,"Generating %s key...",__s1);
            puVar5 = *ppuVar6;
            pEVar1 = (EVP_PKEY_CTX *)ppuVar6[2];
            local_48 = (EVP_PKEY *)0x0;
            ctx = pEVar1;
            if (pEVar1 == (EVP_PKEY_CTX *)0x0) {
LAB_001017bd:
              EVP_PKEY_CTX_free(ctx);
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,puVar5,0);
              if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00101680:
                ctx = (EVP_PKEY_CTX *)0x0;
              }
              else {
                iVar2 = EVP_PKEY_keygen_init(ctx);
                if (0 < iVar2) {
                  EVP_PKEY_keygen(ctx,&local_48);
                }
              }
            }
            else {
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,puVar5,0);
              if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00101680;
              iVar2 = EVP_PKEY_paramgen_init(ctx);
              if (((0 < iVar2) &&
                  ((*(long *)pEVar1 == 0 || (iVar2 = EVP_PKEY_CTX_set_params(ctx,pEVar1), 0 < iVar2)
                   ))) && (iVar2 = EVP_PKEY_generate(ctx), 0 < iVar2)) goto LAB_001017bd;
            }
            EVP_PKEY_free((EVP_PKEY *)0x0);
            EVP_PKEY_CTX_free(ctx);
            ppuVar6[3] = (undefined *)local_48;
            iVar2 = test_ptr("test/endecoder_legacy_test.c",0x2ca,
                             "keys[i].key = make_key(keys[i].keytype, keys[i].template_params)");
          }
        }
        if (iVar2 == 0) goto LAB_00101630;
        ppuVar6 = ppuVar6 + 4;
      } while (ppuVar6 != (undefined **)EC_params);
      test_info("test/endecoder_legacy_test.c",0x2cf,"Generating keys done");
      add_all_tests("test_key",test_key,5,1);
      uVar4 = 1;
      goto LAB_00101632;
    }
    test_error("test/endecoder_legacy_test.c",0x2b2,"usage: endecoder_legacy_test %s",
               "rsa-key.pem dh-key.pem\n");
  }
LAB_00101630:
  uVar4 = 0;
LAB_00101632:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void cleanup_tests(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &keys;
  do {
    ppuVar1 = ppuVar2 + 3;
    ppuVar2 = ppuVar2 + 4;
    EVP_PKEY_free((EVP_PKEY *)*ppuVar1);
  } while (ppuVar2 != (undefined **)EC_params);
  return;
}


