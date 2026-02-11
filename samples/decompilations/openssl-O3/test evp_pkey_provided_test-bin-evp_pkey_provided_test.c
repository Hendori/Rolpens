
undefined8 pass_cb(void)

{
  return 0;
}



undefined8 pass_cb_error(void)

{
  return 0xffffffff;
}



bool test_ec_dup_keygen_operation(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  long in_FS_OFFSET;
  bool bVar3;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  ctx = EVP_PKEY_CTX_new_id(0x198,(ENGINE *)0x0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x71b,
                   "pctx = EVP_PKEY_CTX_new_id(EVP_PKEY_EC, NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x71c,"EVP_PKEY_paramgen_init(pctx)",&_LC11,
                        iVar1,0);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx,0x19f);
      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x71d,
                          "EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pctx, NID_X9_62_prime256v1)",
                          &_LC11,uVar2,0);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_paramgen(ctx,&local_38);
        iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x71f,"EVP_PKEY_paramgen(pctx, &param)",
                            &_LC11,iVar1,0);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x720,"param",local_38);
          if (iVar1 != 0) {
            EVP_PKEY_CTX_free(ctx);
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_38,0);
            iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x726,
                             "ctx = EVP_PKEY_CTX_new_from_pkey(NULL, param, NULL)",ctx_00);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_keygen_init(ctx_00);
              iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x727,"EVP_PKEY_keygen_init(ctx)",
                                  &_LC11,iVar1,0);
              if (iVar1 != 0) {
                ctx_01 = EVP_PKEY_CTX_dup(ctx_00);
                iVar1 = test_ptr_null("test/evp_pkey_provided_test.c",0x728,
                                      "kctx = EVP_PKEY_CTX_dup(ctx)",ctx_01);
                bVar3 = iVar1 != 0;
                ctx = (EVP_PKEY_CTX *)0x0;
                goto LAB_0010007f;
              }
            }
            ctx_01 = (EVP_PKEY_CTX *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            bVar3 = false;
            goto LAB_0010007f;
          }
        }
      }
    }
  }
  ctx_01 = (EVP_PKEY_CTX *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  bVar3 = false;
LAB_0010007f:
  EVP_PKEY_free((EVP_PKEY *)0x0);
  EVP_PKEY_free(local_38);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx_01);
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_ec_dup_no_operation(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY_CTX *ctx_01;
  long in_FS_OFFSET;
  EVP_PKEY *local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  local_48 = (EVP_PKEY *)0x0;
  ctx = EVP_PKEY_CTX_new_id(0x198,(ENGINE *)0x0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6fa,
                   "pctx = EVP_PKEY_CTX_new_id(EVP_PKEY_EC, NULL)",ctx);
  if (iVar1 != 0) {
    iVar1 = EVP_PKEY_paramgen_init(ctx);
    iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x6fb,"EVP_PKEY_paramgen_init(pctx)",&_LC11,
                        iVar1,0);
    if (iVar1 == 0) {
      ctx_01 = (EVP_PKEY_CTX *)0x0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      uVar3 = 0;
      goto LAB_0010029d;
    }
    uVar2 = EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx,0x19f);
    iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x6fc,
                        "EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pctx, NID_X9_62_prime256v1)",&_LC11,
                        uVar2,0);
    if (iVar1 != 0) {
      iVar1 = EVP_PKEY_paramgen(ctx,&local_50);
      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x6fe,"EVP_PKEY_paramgen(pctx, &param)",
                          &_LC11,iVar1,0);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6ff,"param",local_50);
        if (iVar1 != 0) {
          EVP_PKEY_CTX_free(ctx);
          ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_50,0);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x705,
                           "ctx = EVP_PKEY_CTX_new_from_pkey(NULL, param, NULL)",ctx_00);
          if (iVar1 == 0) {
            ctx_01 = (EVP_PKEY_CTX *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            uVar3 = 0;
          }
          else {
            ctx = (EVP_PKEY_CTX *)0x0;
            ctx_01 = EVP_PKEY_CTX_dup(ctx_00);
            uVar3 = test_ptr("test/evp_pkey_provided_test.c",0x706,"kctx = EVP_PKEY_CTX_dup(ctx)",
                             ctx_01);
            if (uVar3 != 0) {
              iVar1 = EVP_PKEY_keygen_init(ctx_01);
              uVar3 = test_int_gt("test/evp_pkey_provided_test.c",0x707,"EVP_PKEY_keygen_init(kctx)"
                                  ,&_LC11,iVar1,0);
              if (uVar3 != 0) {
                iVar1 = EVP_PKEY_keygen(ctx_01,&local_48);
                iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x708,
                                    "EVP_PKEY_keygen(kctx, &pkey)",&_LC11,iVar1,0);
                uVar3 = (uint)(iVar1 != 0);
              }
            }
          }
          goto LAB_0010029d;
        }
      }
    }
  }
  ctx_01 = (EVP_PKEY_CTX *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  uVar3 = 0;
LAB_0010029d:
  EVP_PKEY_free(local_48);
  EVP_PKEY_free(local_50);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx_01);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint compare_with_file(undefined8 param_1,uint param_2,BIO *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  BIO *bp;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  char *local_10a8;
  long local_10a0;
  char local_1098 [80];
  char local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 6) {
    switch(param_2) {
    case 0:
      pcVar10 = "priv.txt";
      break;
    case 1:
      pcVar10 = "priv.pem";
      break;
    case 2:
      pcVar10 = "priv.der";
      break;
    case 3:
      pcVar10 = "pub.txt";
      break;
    case 4:
      pcVar10 = "pub.pem";
      break;
    case 5:
      pcVar10 = "pub.der";
    }
    bp = (BIO *)0x0;
    BIO_snprintf(local_1098,0x50,"%s.%s",param_1,pcVar10);
    pcVar10 = (char *)test_mk_file_path(datadir,local_1098);
    uVar2 = test_ptr("test/evp_pkey_provided_test.c",0x62,"fullfile");
    if (uVar2 != 0) {
      bp = BIO_new_file(pcVar10,"rb");
      iVar3 = test_ptr("test/evp_pkey_provided_test.c",0x66,&_LC31);
      if (iVar3 != 0) {
        BIO_read_ex(bp,local_1048,0x1000,&local_10a0);
        iVar3 = test_true("test/evp_pkey_provided_test.c",0x69,
                          "BIO_read_ex(file, buf, sizeof(buf), &readbytes)");
        if (iVar3 != 0) {
          BIO_ctrl(bp,2,0,(void *)0x0);
          uVar2 = test_true("test/evp_pkey_provided_test.c",0x6a,"BIO_eof(file)");
          if (uVar2 == 0) goto LAB_00100589;
          iVar3 = test_size_t_lt("test/evp_pkey_provided_test.c",0x6b,"readbytes","sizeof(buf)",
                                 local_10a0,0x1000);
          if (iVar3 != 0) {
            uVar4 = BIO_ctrl(param_3,3,0,&local_10a8);
            iVar3 = test_int_gt("test/evp_pkey_provided_test.c",0x6f,&_LC36,&_LC11,
                                uVar4 & 0xffffffff,0);
            if (iVar3 != 0) {
              lVar11 = (long)(int)uVar4;
              lVar8 = local_10a0;
              if ((0x24UL >> ((ulong)param_2 & 0x3f) & 1) == 0) {
                if (lVar11 != 0) {
                  pcVar6 = local_10a8 + lVar11;
                  pcVar5 = local_10a8;
                  pcVar7 = local_10a8;
                  do {
                    if (*pcVar5 == '\r') {
                      lVar11 = lVar11 + -1;
                    }
                    else {
                      if (pcVar5 != pcVar7) {
                        *pcVar7 = *pcVar5;
                      }
                      pcVar7 = pcVar7 + 1;
                    }
                    pcVar5 = pcVar5 + 1;
                  } while (pcVar5 != pcVar6);
                }
                if (local_10a0 == 0) {
                  lVar8 = 0;
                }
                else {
                  bVar1 = false;
                  pcVar6 = local_1048;
                  pcVar5 = local_1048;
                  lVar9 = local_10a0;
                  do {
                    if (*pcVar6 == '\r') {
                      lVar9 = lVar9 + -1;
                      bVar1 = true;
                    }
                    else {
                      if (pcVar6 != pcVar5) {
                        *pcVar5 = *pcVar6;
                      }
                      pcVar5 = pcVar5 + 1;
                    }
                    pcVar6 = pcVar6 + 1;
                  } while (pcVar6 != local_1048 + local_10a0);
                  if (bVar1) {
                    lVar8 = lVar9;
                    local_10a0 = lVar9;
                  }
                }
              }
              iVar3 = test_mem_eq("test/evp_pkey_provided_test.c",0x78,"memdata",&_LC37,local_10a8,
                                  lVar11,local_1048,lVar8);
              uVar2 = (uint)(iVar3 != 0);
              goto LAB_00100589;
            }
          }
        }
      }
      uVar2 = 0;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    uVar2 = 0;
    bp = (BIO *)0x0;
    test_error("test/evp_pkey_provided_test.c",0x5c,"Invalid file type");
  }
LAB_00100589:
  CRYPTO_free(pcVar10);
  BIO_ctrl(param_3,1,0,(void *)0x0);
  BIO_free(bp);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_print_key_using_pem(undefined8 param_1,EVP_PKEY *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *out;
  EVP_CIPHER *pEVar2;
  undefined8 uVar3;
  bool bVar4;
  
  type = BIO_s_mem();
  out = BIO_new(type);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x92,"membio",out);
  if (iVar1 != 0) {
    pEVar2 = EVP_aes_256_cbc();
    iVar1 = PEM_write_bio_PrivateKey(_bio_out,param_2,pEVar2,"pass",4,(undefined1 *)0x0,(void *)0x0)
    ;
    iVar1 = test_true("test/evp_pkey_provided_test.c",0x96,
                      "PEM_write_bio_PrivateKey(bio_out, pk, EVP_aes_256_cbc(), (unsigned char *)\"pass\", 4, NULL, NULL)"
                      ,iVar1 != 0);
    if (iVar1 != 0) {
      pEVar2 = EVP_aes_256_cbc();
      PEM_write_bio_PKCS8PrivateKey
                (_bio_out,param_2,pEVar2,(char *)0xffffffffffffffff,0,(undefined1 *)0x0,(void *)0x0)
      ;
      iVar1 = test_true("test/evp_pkey_provided_test.c",0x9a,
                        "PEM_write_bio_PKCS8PrivateKey(bio_out, pk, EVP_aes_256_cbc(), (const char *)~0, 0, NULL, NULL)"
                       );
      if (iVar1 != 0) {
        pEVar2 = EVP_aes_256_cbc();
        PEM_write_bio_PKCS8PrivateKey
                  (_bio_out,param_2,pEVar2,(char *)0x0,0,(undefined1 *)0x0,&_LC43);
        iVar1 = test_true("test/evp_pkey_provided_test.c",0x9e,
                          "PEM_write_bio_PKCS8PrivateKey(bio_out, pk, EVP_aes_256_cbc(), NULL, 0, NULL, \"\")"
                         );
        if (iVar1 != 0) {
          pEVar2 = EVP_aes_256_cbc();
          iVar1 = PEM_write_bio_PKCS8PrivateKey
                            (_bio_out,param_2,pEVar2,(char *)0x0,0,pass_cb,(void *)0x0);
          iVar1 = test_true("test/evp_pkey_provided_test.c",0xa1,
                            "PEM_write_bio_PKCS8PrivateKey(bio_out, pk, EVP_aes_256_cbc(), NULL, 0, pass_cb, NULL)"
                            ,iVar1 != 0);
          if (iVar1 != 0) {
            pEVar2 = EVP_aes_256_cbc();
            iVar1 = PEM_write_bio_PKCS8PrivateKey
                              (_bio_out,param_2,pEVar2,(char *)0x0,0,pass_cb_error,(void *)0x0);
            iVar1 = test_false("test/evp_pkey_provided_test.c",0xa4,
                               "PEM_write_bio_PKCS8PrivateKey(bio_out, pk, EVP_aes_256_cbc(), NULL, 0, pass_cb_error, NULL)"
                               ,iVar1 != 0);
            if (iVar1 != 0) {
              PEM_write_bio_PKCS8PrivateKey_nid
                        (_bio_out,param_2,0x92,(char *)0xffffffffffffffff,0,(undefined1 *)0x0,
                         (void *)0x0);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0xa9,
                                "PEM_write_bio_PKCS8PrivateKey_nid( bio_out, pk, NID_pbe_WithSHA1And3_Key_TripleDES_CBC, (const char *)~0, 0, NULL, NULL)"
                               );
              if (iVar1 != 0) {
                PEM_write_bio_PKCS8PrivateKey_nid
                          (_bio_out,param_2,0x92,(char *)0x0,0,(undefined1 *)0x0,&_LC43);
                iVar1 = test_true("test/evp_pkey_provided_test.c",0xac,
                                  "PEM_write_bio_PKCS8PrivateKey_nid( bio_out, pk, NID_pbe_WithSHA1And3_Key_TripleDES_CBC, NULL, 0, NULL, \"\")"
                                 );
                if (iVar1 != 0) {
                  iVar1 = PEM_write_bio_PKCS8PrivateKey_nid
                                    (_bio_out,param_2,0x92,(char *)0x0,0,pass_cb,(void *)0x0);
                  iVar1 = test_true("test/evp_pkey_provided_test.c",0xaf,
                                    "PEM_write_bio_PKCS8PrivateKey_nid( bio_out, pk, NID_pbe_WithSHA1And3_Key_TripleDES_CBC, NULL, 0, pass_cb, NULL)"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    PEM_write_bio_PKCS8PrivateKey_nid
                              (_bio_out,param_2,0x92,(char *)0x0,0,pass_cb_error,(void *)0x0);
                    iVar1 = test_false("test/evp_pkey_provided_test.c",0xb2,
                                       "PEM_write_bio_PKCS8PrivateKey_nid( bio_out, pk, NID_pbe_WithSHA1And3_Key_TripleDES_CBC, NULL, 0, pass_cb_error, NULL)"
                                      );
                    if (iVar1 != 0) {
                      EVP_PKEY_print_private(out,param_2,0,(ASN1_PCTX *)0x0);
                      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0xb7,
                                          "EVP_PKEY_print_private(membio, pk, 0, NULL)",&_LC11);
                      if (iVar1 != 0) {
                        iVar1 = compare_with_file(param_1,0,out);
                        iVar1 = test_true("test/evp_pkey_provided_test.c",0xb8,
                                          "compare_with_file(alg, PRIV_TEXT, membio)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = PEM_write_bio_PUBKEY(out,param_2);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0xba,
                                            "PEM_write_bio_PUBKEY(membio, pk)",iVar1 != 0);
                          if (iVar1 != 0) {
                            compare_with_file(param_1,4,out);
                            iVar1 = test_true("test/evp_pkey_provided_test.c",0xbb,
                                              "compare_with_file(alg, PUB_PEM, membio)");
                            if (iVar1 != 0) {
                              iVar1 = PEM_write_bio_PrivateKey
                                                (out,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                                                 (undefined1 *)0x0,(void *)0x0);
                              iVar1 = test_true("test/evp_pkey_provided_test.c",0xbd,
                                                "PEM_write_bio_PrivateKey(membio, pk, NULL, NULL, 0, NULL, NULL)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                compare_with_file(param_1,1,out);
                                iVar1 = test_true("test/evp_pkey_provided_test.c",0xbf,
                                                  "compare_with_file(alg, PRIV_PEM, membio)");
                                if (iVar1 != 0) {
                                  iVar1 = PEM_write_bio_PrivateKey
                                                    (out,(EVP_PKEY *)0x0,(EVP_CIPHER *)0x0,
                                                     (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
                                  uVar3 = test_false("test/evp_pkey_provided_test.c",0xc1,
                                                                                                          
                                                  "PEM_write_bio_PrivateKey(membio, NULL, NULL, NULL, 0, NULL, NULL)"
                                                  ,iVar1 != 0);
                                  if ((int)uVar3 != 0) {
                                    iVar1 = PEM_write_bio_PrivateKey_traditional
                                                      (out,0,0,0,0,0,0,uVar3);
                                    iVar1 = test_false("test/evp_pkey_provided_test.c",0xc3,
                                                                                                              
                                                  "PEM_write_bio_PrivateKey_traditional(membio, NULL, NULL, NULL, 0, NULL, NULL)"
                                                  ,iVar1 != 0);
                                    bVar4 = iVar1 != 0;
                                    goto LAB_00100872;
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
  bVar4 = false;
LAB_00100872:
  BIO_free(out);
  return bVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint test_print_key_type_using_encoder(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  BIO_METHOD *type;
  BIO *a;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined4 local_44;
  
  type = BIO_s_mem();
  a = BIO_new(type);
  switch(param_2) {
  case 0:
    local_44 = 7;
    pcVar6 = (char *)0x0;
    puVar5 = &_LC59;
    break;
  case 1:
    local_44 = 7;
    pcVar6 = "PrivateKeyInfo";
    puVar5 = &_LC61;
    break;
  case 2:
    local_44 = 7;
    pcVar6 = "PrivateKeyInfo";
    puVar5 = &_LC62;
    break;
  case 3:
    local_44 = 6;
    pcVar6 = (char *)0x0;
    puVar5 = &_LC59;
    break;
  case 4:
    local_44 = 6;
    pcVar6 = "SubjectPublicKeyInfo";
    puVar5 = &_LC61;
    break;
  case 5:
    local_44 = 6;
    pcVar6 = "SubjectPublicKeyInfo";
    puVar5 = &_LC62;
    break;
  default:
    test_error("test/evp_pkey_provided_test.c",0x102,"Invalid encoding type");
    goto LAB_00100d86;
  }
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x106,"membio",a);
  if (iVar1 == 0) {
LAB_00100d86:
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    test_note("Setting up a OSSL_ENCODER context with passphrase");
    uVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_3,local_44,puVar5,pcVar6,0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x10b,
                     "ctx = OSSL_ENCODER_CTX_new_for_pkey(pk, selection, output_type, output_structure, NULL)"
                     ,uVar4);
    if (iVar1 != 0) {
      uVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
      iVar1 = test_int_ne("test/evp_pkey_provided_test.c",0x110,
                          "OSSL_ENCODER_CTX_get_num_encoders(ctx)",&_LC11,uVar2,0);
      if (iVar1 != 0) {
        test_note("Testing with no encryption");
        iVar1 = OSSL_ENCODER_to_bio(uVar4,a);
        iVar1 = test_true("test/evp_pkey_provided_test.c",0x115,"OSSL_ENCODER_to_bio(ctx, membio)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = compare_with_file(param_1,param_2,a);
          uVar3 = test_true("test/evp_pkey_provided_test.c",0x116,
                            "compare_with_file(alg, type, membio)",iVar1 != 0);
          if ((uVar3 == 0) || (uVar3 = 1, param_2 != 1)) goto LAB_00100d8c;
          iVar1 = OSSL_ENCODER_CTX_set_passphrase(uVar4,&_LC40,4);
          iVar1 = test_true("test/evp_pkey_provided_test.c",0x11b,
                            "OSSL_ENCODER_CTX_set_passphrase(ctx, (unsigned char *)\"pass\", 4)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            test_note("Displaying PEM encrypted with AES-256-CBC");
            iVar1 = OSSL_ENCODER_CTX_set_cipher(uVar4,"AES-256-CBC",0);
            iVar1 = test_true("test/evp_pkey_provided_test.c",0x122,
                              "OSSL_ENCODER_CTX_set_cipher(ctx, \"AES-256-CBC\", NULL)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OSSL_ENCODER_to_bio(uVar4,_bio_out);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0x123,
                                "OSSL_ENCODER_to_bio(ctx, bio_out)",iVar1 != 0);
              if (iVar1 != 0) {
                test_note("NOT Displaying PEM encrypted with (invalid) FOO");
                iVar1 = OSSL_ENCODER_CTX_set_cipher(uVar4,&_LC77,0);
                iVar1 = test_false("test/evp_pkey_provided_test.c",0x128,
                                   "OSSL_ENCODER_CTX_set_cipher(ctx, \"FOO\", NULL)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OSSL_ENCODER_to_bio(uVar4,_bio_out);
                  iVar1 = test_false("test/evp_pkey_provided_test.c",0x129,
                                     "OSSL_ENCODER_to_bio(ctx, bio_out)",iVar1 != 0);
                  if (iVar1 != 0) {
                    test_note("Testing with encryption cleared (no encryption)");
                    iVar1 = OSSL_ENCODER_CTX_set_cipher(uVar4,0,0);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x12e,
                                      "OSSL_ENCODER_CTX_set_cipher(ctx, NULL, NULL)",iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_ENCODER_to_bio(uVar4,a);
                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x12f,
                                        "OSSL_ENCODER_to_bio(ctx, membio)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = compare_with_file(param_1,1,a);
                        iVar1 = test_true("test/evp_pkey_provided_test.c",0x130,
                                          "compare_with_file(alg, type, membio)",iVar1 != 0);
                        uVar3 = (uint)(iVar1 != 0);
                        goto LAB_00100d8c;
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
LAB_00100d8c:
  BIO_free(a);
  OSSL_ENCODER_CTX_free(uVar4);
  return uVar3;
}



bool test_print_key_using_encoder(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = test_print_key_type_using_encoder(param_1,0,param_2);
  if (iVar1 != 0) {
    iVar1 = test_print_key_type_using_encoder(param_1,1,param_2);
    if (iVar1 != 0) {
      iVar1 = test_print_key_type_using_encoder(param_1,2,param_2);
      if (iVar1 != 0) {
        iVar1 = test_print_key_type_using_encoder(param_1,3,param_2);
        if (iVar1 != 0) {
          iVar1 = test_print_key_type_using_encoder(param_1,4,param_2);
          if (iVar1 != 0) {
            iVar1 = test_print_key_type_using_encoder(param_1,5,param_2);
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



uint test_fromdata_ec(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  BIGNUM *a;
  undefined8 uVar5;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *to;
  undefined8 uVar6;
  undefined8 uVar7;
  EC_GROUP *group;
  BIGNUM *a_00;
  EVP_PKEY *pEVar8;
  long in_FS_OFFSET;
  BIGNUM *local_1d0;
  BIGNUM *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  EVP_PKEY *local_188;
  BIGNUM *local_180;
  long local_178;
  BIGNUM *local_170;
  BIGNUM *local_168;
  BIGNUM *local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  char local_108 [8];
  char acStack_100 [8];
  undefined2 local_f8;
  char local_e8;
  undefined1 local_e7 [79];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = 0x65;
  local_108 = (char  [8])_LC132._0_8_;
  acStack_100 = (char  [8])_LC132._8_8_;
  local_188 = (EVP_PKEY *)0x0;
  local_180 = (BIGNUM *)0x0;
  local_170 = (BIGNUM *)0x0;
  local_168 = (BIGNUM *)0x0;
  local_160 = (BIGNUM *)0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  uVar4 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x65e,"bld = OSSL_PARAM_BLD_new()",uVar4);
  if (iVar1 == 0) {
    local_1c8 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    group = (EC_GROUP *)0x0;
    uVar5 = 0;
    local_1d0 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    to = (EVP_PKEY *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar3 = 0;
  }
  else {
    a = BN_bin2bn(ec_priv_keydata_38,0x20,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x660,
                     "ec_priv_bn = BN_bin2bn(ec_priv_keydata, sizeof(ec_priv_keydata), NULL)",a);
    if ((((iVar1 == 0) ||
         (iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar4,"group","prime256v1",0), iVar1 < 1)) ||
        (iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar4,&_LC85,ec_pub_keydata_compressed_37,0x21),
        iVar1 < 1)) || (iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC86,a), iVar1 < 1)) {
      local_1c8 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      group = (EC_GROUP *)0x0;
      uVar5 = 0;
      local_1d0 = (BIGNUM *)0x0;
      to = (EVP_PKEY *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar3 = 0;
    }
    else {
      uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x675,
                       "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
      if (iVar1 == 0) {
        local_1c8 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        group = (EC_GROUP *)0x0;
        to = (EVP_PKEY *)0x0;
        local_1d0 = (BIGNUM *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        uVar3 = 0;
      }
      else {
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC88,0);
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x678,&_LC89,ctx);
        if (iVar1 != 0) {
          OSSL_PARAM_construct_utf8_string(&local_1b8,"group",local_108,0x12);
          local_138._0_8_ = local_198;
          local_158._8_8_ = uStack_1b0;
          local_158._0_8_ = local_1b8;
          local_148._8_8_ = uStack_1a0;
          local_148._0_8_ = local_1a8;
          uVar2 = EVP_PKEY_fromdata_init(ctx);
          iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x67f,"EVP_PKEY_fromdata_init(ctx)",
                              &_LC90,uVar2,1);
          if (iVar1 != 0) {
            uVar2 = EVP_PKEY_fromdata(ctx,&local_188,0x84,local_158);
            iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x680,
                                "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEY_PARAMETERS, nokey_params)"
                                ,&_LC11,uVar2,0);
            if ((iVar1 != 0) &&
               (iVar1 = test_ptr_null("test/evp_pkey_provided_test.c",0x682,&_LC93,local_188),
               iVar1 != 0)) {
              uVar2 = EVP_PKEY_fromdata_init(ctx);
              iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x685,
                                  "EVP_PKEY_fromdata_init(ctx)",&_LC90,uVar2,1);
              if (iVar1 != 0) {
                uVar2 = EVP_PKEY_fromdata(ctx,&local_188,0x87,uVar5);
                iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x686,
                                    "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)"
                                    ,&_LC90,uVar2,1);
                if (iVar1 != 0) {
                  pEVar8 = (EVP_PKEY *)0x0;
                  while( true ) {
                    uVar2 = EVP_PKEY_get_bits(local_188);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x68c,
                                        "EVP_PKEY_get_bits(pk)",&_LC95,uVar2,0x100);
                    if (iVar1 == 0) break;
                    uVar2 = EVP_PKEY_get_security_bits(local_188);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x68d,
                                        "EVP_PKEY_get_security_bits(pk)",&_LC97,uVar2,0x80);
                    if (iVar1 == 0) break;
                    EVP_PKEY_get_size(local_188);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x68e,
                                        "EVP_PKEY_get_size(pk)","2 + 35 * 2");
                    if (iVar1 == 0) break;
                    iVar1 = EVP_PKEY_missing_parameters(local_188);
                    iVar1 = test_false("test/evp_pkey_provided_test.c",0x68f,
                                       "EVP_PKEY_missing_parameters(pk)",iVar1 != 0);
                    if (iVar1 == 0) break;
                    to = EVP_PKEY_new();
                    uVar3 = test_ptr("test/evp_pkey_provided_test.c",0x692,
                                     "copy_pk = EVP_PKEY_new()",to);
                    if (uVar3 == 0) {
LAB_00101d6c:
                      local_1c8 = (BIGNUM *)0x0;
                      a_00 = (BIGNUM *)0x0;
                      group = (EC_GROUP *)0x0;
                      local_1d0 = (BIGNUM *)0x0;
                      goto LAB_001012c5;
                    }
                    iVar1 = EVP_PKEY_copy_parameters(to,local_188);
                    uVar3 = test_true("test/evp_pkey_provided_test.c",0x693,
                                      "EVP_PKEY_copy_parameters(copy_pk, pk)",iVar1 != 0);
                    if (uVar3 == 0) goto LAB_00101d6c;
                    EVP_PKEY_free(to);
                    uVar6 = EVP_PKEY_gettable_params(local_188);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x698,
                                     "gettable = EVP_PKEY_gettable_params(pk)",uVar6);
                    if (iVar1 == 0) break;
                    uVar7 = OSSL_PARAM_locate_const(uVar6,"group");
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x699,
                                     "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_GROUP_NAME)"
                                     ,uVar7);
                    if (iVar1 == 0) break;
                    uVar7 = OSSL_PARAM_locate_const(uVar6,&_LC85);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x69b,
                                     "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_PUB_KEY)",
                                     uVar7);
                    if (iVar1 == 0) break;
                    uVar6 = OSSL_PARAM_locate_const(uVar6,&_LC86);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x69d,
                                     "OSSL_PARAM_locate_const(gettable, OSSL_PKEY_PARAM_PRIV_KEY)",
                                     uVar6);
                    if (iVar1 == 0) break;
                    iVar1 = OBJ_sn2nid("prime256v1");
                    group = EC_GROUP_new_by_curve_name(iVar1);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6a1,
                                     "group = EC_GROUP_new_by_curve_name(OBJ_sn2nid(curve))",group);
                    if (iVar1 == 0) {
                      local_1c8 = (BIGNUM *)0x0;
                      a_00 = (BIGNUM *)0x0;
                      to = (EVP_PKEY *)0x0;
                      local_1d0 = (BIGNUM *)0x0;
                      uVar3 = 0;
                      goto LAB_001012c5;
                    }
                    local_1c8 = BN_new();
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6a2,"group_p = BN_new()");
                    if (iVar1 == 0) {
                      local_1d0 = (BIGNUM *)0x0;
                      a_00 = (BIGNUM *)0x0;
                      to = (EVP_PKEY *)0x0;
                      uVar3 = 0;
                      goto LAB_001012c5;
                    }
                    local_1d0 = BN_new();
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6a3,"group_a = BN_new()",
                                     local_1d0);
                    if (iVar1 == 0) {
                      a_00 = (BIGNUM *)0x0;
                      to = (EVP_PKEY *)0x0;
                      uVar3 = 0;
                      goto LAB_001012c5;
                    }
                    a_00 = BN_new();
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6a4,"group_b = BN_new()",a_00
                                    );
                    if (iVar1 == 0) {
                      to = (EVP_PKEY *)0x0;
                      uVar3 = 0;
                      goto LAB_001012c5;
                    }
                    iVar1 = EC_GROUP_get_curve(group,local_1c8,local_1d0,a_00,0);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x6a5,
                                      "EC_GROUP_get_curve(group, group_p, group_a, group_b, NULL)",
                                      iVar1 != 0);
                    if (iVar1 == 0) {
LAB_00101cea:
                      to = (EVP_PKEY *)0x0;
                      uVar3 = 0;
                      goto LAB_001012c5;
                    }
                    iVar1 = EVP_PKEY_get_bn_param(local_188,&_LC113,&local_170);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x6a8,
                                      "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_EC_A, &a)",
                                      iVar1 != 0);
                    if (iVar1 == 0) goto LAB_00101cea;
                    iVar1 = EVP_PKEY_get_bn_param(local_188,&_LC115,&local_168);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x6a9,
                                      "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_EC_B, &b)",
                                      iVar1 != 0);
                    if (iVar1 == 0) goto LAB_00101cea;
                    iVar1 = EVP_PKEY_get_bn_param(local_188,&_LC117,&local_160);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x6aa,
                                      "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_EC_P, &p)",
                                      iVar1 != 0);
                    if (((iVar1 == 0) ||
                        (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x6ad,"group_p",&_LC117,
                                            local_1c8,local_160), iVar1 == 0)) ||
                       ((iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x6ad,"group_a",&_LC113,
                                            local_1d0,local_170), iVar1 == 0 ||
                        (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x6ae,"group_b",&_LC115,
                                            a_00,local_168), iVar1 == 0)))) goto LAB_00101cea;
                    EC_GROUP_free(group);
                    BN_free(local_1c8);
                    BN_free(local_1d0);
                    BN_free(a_00);
                    iVar1 = EVP_PKEY_get_utf8_string_param
                                      (local_188,"group",local_98,0x50,&local_178);
                    if ((((iVar1 == 0) ||
                         (iVar1 = test_str_eq("test/evp_pkey_provided_test.c",0x6be,"out_curve_name"
                                              ,"curve",local_98,"prime256v1"), iVar1 == 0)) ||
                        (iVar1 = EVP_PKEY_get_octet_string_param
                                           (local_188,&_LC85,&local_e8,0x41,&local_178), iVar1 == 0)
                        ) || ((iVar1 = test_true("test/evp_pkey_provided_test.c",0x6c8,
                                                 "out_pub[0] == POINT_CONVERSION_UNCOMPRESSED",
                                                 local_e8 == '\x04'), iVar1 == 0 ||
                              (iVar1 = test_mem_eq("test/evp_pkey_provided_test.c",0x6c9,
                                                   "out_pub + 1","ec_pub_keydata + 1",local_e7,
                                                   local_178 + -1,0x10b721,0x40), iVar1 == 0))))
                    break;
                    iVar1 = EVP_PKEY_get_bn_param(local_188,&_LC86,&local_180);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x6cc,
                                      "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PRIV_KEY, &bn_priv)"
                                      ,iVar1 != 0);
                    if ((iVar1 == 0) ||
                       (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x6ce,"ec_priv_bn",
                                           "bn_priv",a,local_180), iVar1 == 0)) break;
                    BN_free(local_180);
                    local_180 = (BIGNUM *)0x0;
                    iVar1 = test_print_key_using_pem(&_LC88,local_188);
                    if (iVar1 == 0) break;
                    iVar1 = test_print_key_using_encoder(&_LC88,local_188);
                    if ((pEVar8 != (EVP_PKEY *)0x0) || (iVar1 == 0)) {
                      a_00 = (BIGNUM *)0x0;
                      local_1d0 = (BIGNUM *)0x0;
                      uVar3 = (uint)(iVar1 != 0);
                      group = (EC_GROUP *)0x0;
                      to = (EVP_PKEY *)0x0;
                      local_1c8 = (BIGNUM *)0x0;
                      goto LAB_001012c5;
                    }
                    pEVar8 = (EVP_PKEY *)EVP_PKEY_dup(local_188);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x6d9,
                                     "dup_pk = EVP_PKEY_dup(pk)",pEVar8);
                    if (iVar1 == 0) {
                      local_1c8 = (BIGNUM *)0x0;
                      a_00 = (BIGNUM *)0x0;
                      group = (EC_GROUP *)0x0;
                      to = (EVP_PKEY *)0x0;
                      local_1d0 = (BIGNUM *)0x0;
                      uVar3 = 1;
                      goto LAB_001012c5;
                    }
                    uVar2 = EVP_PKEY_eq(local_188,pEVar8);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x6db,
                                        "EVP_PKEY_eq(pk, dup_pk)",&_LC90,uVar2,1);
                    EVP_PKEY_free(local_188);
                    local_188 = pEVar8;
                    if (iVar1 == 0) break;
                  }
                }
              }
            }
          }
        }
        local_1c8 = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        group = (EC_GROUP *)0x0;
        to = (EVP_PKEY *)0x0;
        local_1d0 = (BIGNUM *)0x0;
        uVar3 = 0;
      }
    }
  }
LAB_001012c5:
  EC_GROUP_free(group);
  BN_free(local_1d0);
  BN_free(a_00);
  BN_free(local_1c8);
  BN_free(local_170);
  BN_free(local_168);
  BN_free(local_160);
  BN_free(local_180);
  BN_free(a);
  OSSL_PARAM_free(uVar5);
  OSSL_PARAM_BLD_free(uVar4);
  EVP_PKEY_free(local_188);
  EVP_PKEY_free(to);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool test_fromdata_dsa_fips186_4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *to;
  long in_FS_OFFSET;
  bool bVar5;
  BIGNUM *local_130;
  EVP_PKEY_CTX *local_120;
  EVP_PKEY *local_110;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  EVP_PKEY *local_f8;
  BIGNUM *local_f0;
  BIGNUM *local_e8;
  BIGNUM *local_e0;
  BIGNUM *local_d8;
  BIGNUM *local_d0;
  BIGNUM *local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [32];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_104 = 0;
  local_f8 = (EVP_PKEY *)0x0;
  local_f0 = (BIGNUM *)0x0;
  local_e8 = (BIGNUM *)0x0;
  local_e0 = (BIGNUM *)0x0;
  local_d8 = (BIGNUM *)0x0;
  local_d0 = (BIGNUM *)0x0;
  local_c8 = (BIGNUM *)0x0;
  local_100 = 0;
  local_fc = 0;
  uVar3 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7ad,"bld = OSSL_PARAM_BLD_new()",uVar3);
  if (iVar1 == 0) {
    local_130 = (BIGNUM *)0x0;
    uVar4 = 0;
    a = (BIGNUM *)0x0;
    to = (EVP_PKEY *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    local_120 = (EVP_PKEY_CTX *)0x0;
    bVar5 = false;
  }
  else {
    a = BN_bin2bn(pub_data_34,0x100,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7ae,
                     "pub = BN_bin2bn(pub_data, sizeof(pub_data), NULL)",a);
    if (iVar1 == 0) {
      uVar4 = 0;
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      local_130 = (BIGNUM *)0x0;
      to = (EVP_PKEY *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      local_120 = (EVP_PKEY_CTX *)0x0;
      bVar5 = false;
    }
    else {
      a_00 = BN_bin2bn(priv_data_33,0x21,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7af,
                       "priv = BN_bin2bn(priv_data, sizeof(priv_data), NULL)",a_00);
      if (iVar1 == 0) {
        uVar4 = 0;
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        to = (EVP_PKEY *)0x0;
        local_130 = (BIGNUM *)0x0;
        ctx = (EVP_PKEY_CTX *)0x0;
        local_120 = (EVP_PKEY_CTX *)0x0;
        bVar5 = false;
      }
      else {
        a_01 = BN_bin2bn(p_data_32,0x101,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7b0,
                         "p = BN_bin2bn(p_data, sizeof(p_data), NULL)",a_01);
        if (iVar1 == 0) {
          uVar4 = 0;
          a_02 = (BIGNUM *)0x0;
          to = (EVP_PKEY *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          local_130 = (BIGNUM *)0x0;
          local_120 = (EVP_PKEY_CTX *)0x0;
          bVar5 = false;
        }
        else {
          a_02 = BN_bin2bn(q_data_31,0x20,(BIGNUM *)0x0);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7b1,
                           "q = BN_bin2bn(q_data, sizeof(q_data), NULL)",a_02);
          if (iVar1 == 0) {
            local_130 = (BIGNUM *)0x0;
            uVar4 = 0;
            to = (EVP_PKEY *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            local_120 = (EVP_PKEY_CTX *)0x0;
            bVar5 = false;
          }
          else {
            local_130 = BN_bin2bn(g_data_30,0x100,(BIGNUM *)0x0);
            iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7b2,
                             "g = BN_bin2bn(g_data, sizeof(g_data), NULL)",local_130);
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC117,a_01);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0x7b4,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_P, p)",iVar1 != 0);
              if (iVar1 == 0) {
                local_120 = (EVP_PKEY_CTX *)0x0;
                uVar4 = 0;
                to = (EVP_PKEY *)0x0;
                ctx = (EVP_PKEY_CTX *)0x0;
                bVar5 = false;
                goto LAB_00101e63;
              }
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC140,a_02);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0x7b5,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_Q, q)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC142,local_130);
                iVar1 = test_true("test/evp_pkey_provided_test.c",0x7b6,
                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_FFC_G, g)",iVar1 != 0
                                 );
                if (iVar1 != 0) {
                  iVar1 = OSSL_PARAM_BLD_push_octet_string(uVar3,&_LC144,seed_data_29,0x20);
                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x7b7,
                                    "OSSL_PARAM_BLD_push_octet_string(bld, OSSL_PKEY_PARAM_FFC_SEED, seed_data, sizeof(seed_data))"
                                    ,iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_int(uVar3,"gindex",1);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x7bb,
                                      "OSSL_PARAM_BLD_push_int(bld, OSSL_PKEY_PARAM_FFC_GINDEX, gindex)"
                                      ,iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_int(uVar3,"pcounter",0x35);
                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7bd,
                                        "OSSL_PARAM_BLD_push_int(bld, OSSL_PKEY_PARAM_FFC_PCOUNTER, pcounter)"
                                        ,iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC85,a);
                        iVar1 = test_true("test/evp_pkey_provided_test.c",0x7c0,
                                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC86,a_00);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x7c2,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            uVar4 = OSSL_PARAM_BLD_to_param(uVar3);
                            iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7c4,
                                             "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",uVar4)
                            ;
                            if (iVar1 == 0) {
                              to = (EVP_PKEY *)0x0;
                              ctx = (EVP_PKEY_CTX *)0x0;
                              local_120 = (EVP_PKEY_CTX *)0x0;
                              bVar5 = false;
                            }
                            else {
                              local_120 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC152,0);
                              iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x7c7,
                                               "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DSA\", NULL)"
                                               ,local_120);
                              if (iVar1 != 0) {
                                uVar2 = EVP_PKEY_fromdata_init(local_120);
                                iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7ca,
                                                    "EVP_PKEY_fromdata_init(ctx)",&_LC90,uVar2,1);
                                if (iVar1 != 0) {
                                  uVar2 = EVP_PKEY_fromdata(local_120,&local_f8,0x87,uVar4);
                                  iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7cb,
                                                                                                            
                                                  "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)"
                                                  ,&_LC90,uVar2,1);
                                  local_110 = (EVP_PKEY *)0x0;
                                  if (iVar1 != 0) {
                                    while( true ) {
                                      uVar2 = EVP_PKEY_get_bits(local_f8);
                                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7d1,
                                                          "EVP_PKEY_get_bits(pk)",&_LC154,uVar2,
                                                          0x800);
                                      if (iVar1 == 0) break;
                                      uVar2 = EVP_PKEY_get_security_bits(local_f8);
                                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7d2,
                                                          "EVP_PKEY_get_security_bits(pk)",&_LC155,
                                                          uVar2,0x70);
                                      if (iVar1 == 0) break;
                                      uVar2 = EVP_PKEY_get_size(local_f8);
                                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7d3,
                                                          "EVP_PKEY_get_size(pk)",
                                                          "2 + 2 * (3 + sizeof(q_data))",uVar2,0x48)
                                      ;
                                      if (iVar1 == 0) break;
                                      iVar1 = EVP_PKEY_missing_parameters(local_f8);
                                      iVar1 = test_false("test/evp_pkey_provided_test.c",0x7d4,
                                                         "EVP_PKEY_missing_parameters(pk)",
                                                         iVar1 != 0);
                                      if (iVar1 == 0) break;
                                      iVar1 = EVP_PKEY_get_utf8_string_param
                                                        (local_f8,"group",local_98,0x50,local_c0);
                                      iVar1 = test_false("test/evp_pkey_provided_test.c",0x7d7,
                                                                                                                  
                                                  "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(name_out), &len)"
                                                  ,iVar1 != 0);
                                      if (iVar1 == 0) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC85,&local_f0);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7dc,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PUB_KEY, &pub_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x7de,
                                                             &_LC85,"pub_out",a,local_f0),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC86,&local_e8);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7df,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PRIV_KEY, &priv_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x7e1,
                                                             &_LC86,"priv_out",a_00,local_e8),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC117,&local_e0);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7e2,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_P, &p_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x7e4,
                                                             &_LC117,"p_out",a_01,local_e0),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC140,&local_d8);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7e5,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_Q, &q_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x7e7,
                                                             &_LC140,"q_out",a_02,local_d8),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC142,&local_d0);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7e8,
                                                                                                                
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_G, &g_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x7ea,
                                                             &_LC142,"g_out",local_130,local_d0),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC168,&local_c8);
                                      iVar1 = test_false("test/evp_pkey_provided_test.c",0x7eb,
                                                                                                                  
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_COFACTOR, &j_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_ptr_null("test/evp_pkey_provided_test.c",
                                                                0x7ee,"j_out",local_c8), iVar1 == 0)
                                         ) break;
                                      iVar1 = EVP_PKEY_get_octet_string_param
                                                        (local_f8,&_LC144,local_b8,0x20,local_c0);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7ef,
                                                                                                                
                                                  "EVP_PKEY_get_octet_string_param(pk, OSSL_PKEY_PARAM_FFC_SEED, seed_out, sizeof(seed_out), &len)"
                                                  ,iVar1 != 0);
                                      if (iVar1 == 0) break;
                                      iVar1 = EVP_PKEY_get_int_param(local_f8,"gindex",&local_104);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7f4,
                                                                                                                
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_GINDEX, &gindex_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7f7,
                                                              "gindex","gindex_out",1,local_104),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_int_param(local_f8,"hindex",&local_fc);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7f8,
                                                                                                                
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_H, &hindex_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7fa,
                                                              "hindex_out",&_LC11,local_fc,0),
                                         iVar1 == 0)) break;
                                      iVar1 = EVP_PKEY_get_int_param(local_f8,"pcounter",&local_100)
                                      ;
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x7fb,
                                                                                                                
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_PCOUNTER, &pcounter_out)"
                                                  ,iVar1 != 0);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x7fe,
                                                              "pcounter"), iVar1 == 0)) break;
                                      BN_free(local_e0);
                                      local_e0 = (BIGNUM *)0x0;
                                      BN_free(local_d8);
                                      local_d8 = (BIGNUM *)0x0;
                                      BN_free(local_d0);
                                      local_d0 = (BIGNUM *)0x0;
                                      BN_free(local_c8);
                                      local_c8 = (BIGNUM *)0x0;
                                      BN_free(local_f0);
                                      local_f0 = (BIGNUM *)0x0;
                                      BN_free(local_e8);
                                      local_e8 = (BIGNUM *)0x0;
                                      ctx = (EVP_PKEY_CTX *)
                                            EVP_PKEY_CTX_new_from_pkey(0,local_f8,&_LC43);
                                      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x80d,
                                                                                                              
                                                  "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")"
                                                  ,ctx);
                                      if (iVar1 == 0) {
LAB_00102b61:
                                        to = (EVP_PKEY *)0x0;
                                        bVar5 = false;
                                        goto LAB_00101e63;
                                      }
                                      uVar2 = EVP_PKEY_check(ctx);
                                      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x810,
                                                          "EVP_PKEY_check(key_ctx)",&_LC11,uVar2,0);
                                      if (iVar1 == 0) goto LAB_00102b61;
                                      uVar2 = EVP_PKEY_public_check(ctx);
                                      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x811,
                                                          "EVP_PKEY_public_check(key_ctx)",&_LC11,
                                                          uVar2,0);
                                      if (iVar1 == 0) goto LAB_00102b61;
                                      uVar2 = EVP_PKEY_private_check(ctx);
                                      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x812,
                                                          "EVP_PKEY_private_check(key_ctx)",&_LC11,
                                                          uVar2,0);
                                      if (iVar1 == 0) goto LAB_00102b61;
                                      uVar2 = EVP_PKEY_pairwise_check(ctx);
                                      iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x813,
                                                          "EVP_PKEY_pairwise_check(key_ctx)",&_LC11,
                                                          uVar2,0);
                                      if (iVar1 == 0) goto LAB_00102b61;
                                      EVP_PKEY_CTX_free(ctx);
                                      to = EVP_PKEY_new();
                                      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x818,
                                                       "copy_pk = EVP_PKEY_new()",to);
                                      if (iVar1 == 0) {
LAB_00102b4d:
                                        ctx = (EVP_PKEY_CTX *)0x0;
                                        bVar5 = false;
                                        goto LAB_00101e63;
                                      }
                                      iVar1 = EVP_PKEY_copy_parameters(to,local_f8);
                                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x819,
                                                        "EVP_PKEY_copy_parameters(copy_pk, pk)",
                                                        iVar1 != 0);
                                      if (iVar1 == 0) goto LAB_00102b4d;
                                      EVP_PKEY_free(to);
                                      iVar1 = test_print_key_using_pem(&_LC152,local_f8);
                                      if (iVar1 == 0) break;
                                      iVar1 = test_print_key_using_encoder(&_LC152,local_f8);
                                      if ((local_110 != (EVP_PKEY *)0x0) || (iVar1 == 0)) {
                                        bVar5 = iVar1 != 0;
                                        to = (EVP_PKEY *)0x0;
                                        ctx = (EVP_PKEY_CTX *)0x0;
                                        goto LAB_00101e63;
                                      }
                                      local_110 = (EVP_PKEY *)EVP_PKEY_dup(local_f8);
                                      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x824,
                                                       "dup_pk = EVP_PKEY_dup(pk)",local_110);
                                      if (iVar1 == 0) {
                                        to = (EVP_PKEY *)0x0;
                                        ctx = (EVP_PKEY_CTX *)0x0;
                                        bVar5 = true;
                                        goto LAB_00101e63;
                                      }
                                      uVar2 = EVP_PKEY_eq(local_f8,local_110);
                                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x826,
                                                          "EVP_PKEY_eq(pk, dup_pk)",&_LC90,uVar2,1);
                                      EVP_PKEY_free(local_f8);
                                      local_f8 = local_110;
                                      if (iVar1 == 0) break;
                                    }
                                  }
                                }
                              }
                              to = (EVP_PKEY *)0x0;
                              ctx = (EVP_PKEY_CTX *)0x0;
                              bVar5 = false;
                            }
                            goto LAB_00101e63;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_120 = (EVP_PKEY_CTX *)0x0;
            uVar4 = 0;
            to = (EVP_PKEY *)0x0;
            bVar5 = false;
            ctx = (EVP_PKEY_CTX *)0x0;
          }
        }
      }
    }
  }
LAB_00101e63:
  OSSL_PARAM_free(uVar4);
  OSSL_PARAM_BLD_free(uVar3);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(local_130);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_e0);
  BN_free(local_d8);
  BN_free(local_d0);
  BN_free(local_f0);
  BN_free(local_e8);
  BN_free(local_c8);
  EVP_PKEY_free(local_f8);
  EVP_PKEY_free(to);
  EVP_PKEY_CTX_free(local_120);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



bool test_check_dsa(void)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY_CTX *ctx;
  bool bVar3;
  
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC152,0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x848,
                   "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DSA\", NULL)",ctx);
  if (iVar1 != 0) {
    uVar2 = EVP_PKEY_check(ctx);
    iVar1 = test_int_le("test/evp_pkey_provided_test.c",0x849,"EVP_PKEY_check(ctx)",&_LC11,uVar2,0);
    if (iVar1 != 0) {
      uVar2 = EVP_PKEY_public_check(ctx);
      iVar1 = test_int_le("test/evp_pkey_provided_test.c",0x84a,"EVP_PKEY_public_check(ctx)",&_LC11,
                          uVar2,0);
      if (iVar1 != 0) {
        uVar2 = EVP_PKEY_private_check(ctx);
        iVar1 = test_int_le("test/evp_pkey_provided_test.c",0x84b,"EVP_PKEY_private_check(ctx)",
                            &_LC11,uVar2,0);
        if (iVar1 != 0) {
          uVar2 = EVP_PKEY_pairwise_check(ctx);
          iVar1 = test_int_le("test/evp_pkey_provided_test.c",0x84c,"EVP_PKEY_pairwise_check(ctx)",
                              &_LC11,uVar2,0);
          bVar3 = iVar1 != 0;
          goto LAB_00102bef;
        }
      }
    }
  }
  bVar3 = false;
LAB_00102bef:
  EVP_PKEY_CTX_free(ctx);
  return bVar3;
}



bool test_fromdata_dh_fips186_4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar5;
  long in_FS_OFFSET;
  bool bVar6;
  EVP_PKEY_CTX *local_118;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  EVP_PKEY *local_f8;
  undefined1 local_f0 [8];
  BIGNUM *local_e8;
  BIGNUM *local_e0;
  BIGNUM *local_d8;
  BIGNUM *local_d0;
  BIGNUM *local_c8;
  BIGNUM *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = (EVP_PKEY *)0x0;
  local_e8 = (BIGNUM *)0x0;
  local_e0 = (BIGNUM *)0x0;
  local_d8 = (BIGNUM *)0x0;
  local_d0 = (BIGNUM *)0x0;
  local_c8 = (BIGNUM *)0x0;
  local_c0 = (BIGNUM *)0x0;
  uVar3 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x48e,"bld = OSSL_PARAM_BLD_new()",uVar3);
  if (iVar1 == 0) {
    uVar4 = 0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    local_118 = (EVP_PKEY_CTX *)0x0;
    bVar6 = false;
  }
  else {
    a = BN_bin2bn(pub_data_25,0x100,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x48f,
                     "pub = BN_bin2bn(pub_data, sizeof(pub_data), NULL)",a);
    if (iVar1 == 0) {
      local_118 = (EVP_PKEY_CTX *)0x0;
      uVar4 = 0;
      a_00 = (BIGNUM *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      bVar6 = false;
    }
    else {
      a_00 = BN_bin2bn(priv_data_24,0x1c,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x490,
                       "priv = BN_bin2bn(priv_data, sizeof(priv_data), NULL)",a_00);
      if (iVar1 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar3,"group",group_name_23,0);
        iVar1 = test_true("test/evp_pkey_provided_test.c",0x491,
                          "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, group_name, 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_long(uVar3,"priv_len",0xe0);
          iVar1 = test_true("test/evp_pkey_provided_test.c",0x494,
                            "OSSL_PARAM_BLD_push_long(bld, OSSL_PKEY_PARAM_DH_PRIV_LEN, priv_len)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC85,a);
            iVar1 = test_true("test/evp_pkey_provided_test.c",0x496,
                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)",iVar1 != 0
                             );
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar3,&_LC86,a_00);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0x497,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                uVar4 = OSSL_PARAM_BLD_to_param(uVar3);
                iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x498,
                                 "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",uVar4);
                if (iVar1 == 0) {
                  local_118 = (EVP_PKEY_CTX *)0x0;
                  ctx = (EVP_PKEY_CTX *)0x0;
                  bVar6 = false;
                }
                else {
                  local_118 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC191,0);
                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x49b,
                                   "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DH\", NULL)",local_118)
                  ;
                  if (iVar1 != 0) {
                    uVar2 = EVP_PKEY_fromdata_init(local_118);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x49e,
                                        "EVP_PKEY_fromdata_init(ctx)",&_LC90,uVar2,1);
                    if (iVar1 != 0) {
                      uVar2 = EVP_PKEY_fromdata(local_118,&local_f8,0x87,uVar4);
                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x49f,
                                          "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)"
                                          ,&_LC90,uVar2,1);
                      pEVar5 = (EVP_PKEY *)0x0;
                      if (iVar1 != 0) {
                        while( true ) {
                          uVar2 = EVP_PKEY_get_bits(local_f8);
                          iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4a5,
                                              "EVP_PKEY_get_bits(pk)",&_LC154,uVar2,0x800);
                          if (iVar1 == 0) break;
                          uVar2 = EVP_PKEY_get_security_bits(local_f8);
                          iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4a6,
                                              "EVP_PKEY_get_security_bits(pk)",&_LC155,uVar2,0x70);
                          if (iVar1 == 0) break;
                          uVar2 = EVP_PKEY_get_size(local_f8);
                          iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4a7,
                                              "EVP_PKEY_get_size(pk)",&_LC95,uVar2,0x100);
                          if (iVar1 == 0) break;
                          iVar1 = EVP_PKEY_missing_parameters(local_f8);
                          iVar1 = test_false("test/evp_pkey_provided_test.c",0x4a8,
                                             "EVP_PKEY_missing_parameters(pk)",iVar1 != 0);
                          if (iVar1 == 0) break;
                          iVar1 = EVP_PKEY_get_utf8_string_param
                                            (local_f8,"group",local_98,0x50,local_f0);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4ab,
                                            "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(name_out), &len)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_str_eq("test/evp_pkey_provided_test.c",0x4b0,"name_out",
                                                  "group_name",local_98,group_name_23), iVar1 == 0))
                          break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC85,&local_e8);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4b1,
                                            "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PUB_KEY, &pub_out)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x4b3,&_LC85,
                                                 "pub_out",a,local_e8), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC86,&local_e0);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4b4,
                                            "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PRIV_KEY, &priv_out)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x4b6,&_LC86,
                                                 "priv_out",a_00,local_e0), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC117,&local_d8);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4b7,
                                            "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_P, &p)",
                                            iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x4b8,
                                                 "&ossl_bignum_ffdhe2048_p",&_LC117,
                                                 &ossl_bignum_ffdhe2048_p,local_d8), iVar1 == 0))
                          break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC140,&local_d0);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4b9,
                                            "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_Q, &q)",
                                            iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x4ba,&_LC140,
                                               local_d0), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC142,&local_c8);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4bb,
                                            "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_G, &g)",
                                            iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x4bc,
                                                 "&ossl_bignum_const_2",&_LC142,&ossl_bignum_const_2
                                                 ,local_c8), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC168,&local_c0);
                          iVar1 = test_false("test/evp_pkey_provided_test.c",0x4bd,
                                             "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_COFACTOR, &j)"
                                             ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_ptr_null("test/evp_pkey_provided_test.c",0x4c0,&_LC168,
                                                    local_c0), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_octet_string_param
                                            (local_f8,&_LC144,local_b8,0x20,local_f0);
                          iVar1 = test_false("test/evp_pkey_provided_test.c",0x4c1,
                                             "EVP_PKEY_get_octet_string_param(pk, OSSL_PKEY_PARAM_FFC_SEED, seed_out, sizeof(seed_out), &len)"
                                             ,iVar1 != 0);
                          if (iVar1 == 0) break;
                          iVar1 = EVP_PKEY_get_int_param(local_f8,"gindex",&local_104);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4c6,
                                            "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_GINDEX, &gindex)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4c9,"gindex",
                                                  &_LC202,local_104,0xffffffff), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_int_param(local_f8,"hindex",&local_fc);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4ca,
                                            "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_H, &hindex)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4cc,"hindex",
                                                  &_LC11,local_fc,0), iVar1 == 0)) break;
                          iVar1 = EVP_PKEY_get_int_param(local_f8,"pcounter",&local_100);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x4cd,
                                            "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_PCOUNTER, &pcounter)"
                                            ,iVar1 != 0);
                          if ((iVar1 == 0) ||
                             (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4d0,"pcounter",
                                                  &_LC202,local_100,0xffffffff), iVar1 == 0)) break;
                          BN_free(local_d8);
                          local_d8 = (BIGNUM *)0x0;
                          BN_free(local_d0);
                          local_d0 = (BIGNUM *)0x0;
                          BN_free(local_c8);
                          local_c8 = (BIGNUM *)0x0;
                          BN_free(local_c0);
                          local_c0 = (BIGNUM *)0x0;
                          BN_free(local_e8);
                          local_e8 = (BIGNUM *)0x0;
                          BN_free(local_e0);
                          local_e0 = (BIGNUM *)0x0;
                          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_f8,&_LC43);
                          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x4df,
                                           "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")",
                                           ctx);
                          if (iVar1 == 0) {
LAB_001037cd:
                            bVar6 = false;
                            goto LAB_00102d81;
                          }
                          uVar2 = EVP_PKEY_check(ctx);
                          iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x4e2,
                                              "EVP_PKEY_check(key_ctx)",&_LC11,uVar2,0);
                          if (iVar1 == 0) goto LAB_001037cd;
                          uVar2 = EVP_PKEY_public_check(ctx);
                          iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x4e3,
                                              "EVP_PKEY_public_check(key_ctx)",&_LC11,uVar2,0);
                          if (iVar1 == 0) goto LAB_001037cd;
                          uVar2 = EVP_PKEY_private_check(ctx);
                          iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x4e4,
                                              "EVP_PKEY_private_check(key_ctx)",&_LC11,uVar2,0);
                          if (iVar1 == 0) goto LAB_001037cd;
                          uVar2 = EVP_PKEY_pairwise_check(ctx);
                          iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x4e5,
                                              "EVP_PKEY_pairwise_check(key_ctx)",&_LC11,uVar2,0);
                          if (iVar1 == 0) goto LAB_001037cd;
                          EVP_PKEY_CTX_free(ctx);
                          iVar1 = test_print_key_using_pem(&_LC191,local_f8);
                          if (iVar1 == 0) break;
                          iVar1 = test_print_key_using_encoder(&_LC191,local_f8);
                          if ((pEVar5 != (EVP_PKEY *)0x0) || (iVar1 == 0)) {
                            bVar6 = iVar1 != 0;
                            ctx = (EVP_PKEY_CTX *)0x0;
                            goto LAB_00102d81;
                          }
                          pEVar5 = (EVP_PKEY *)EVP_PKEY_dup(local_f8);
                          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x4f0,
                                           "dup_pk = EVP_PKEY_dup(pk)",pEVar5);
                          if (iVar1 == 0) {
                            ctx = (EVP_PKEY_CTX *)0x0;
                            bVar6 = true;
                            goto LAB_00102d81;
                          }
                          uVar2 = EVP_PKEY_eq(local_f8,pEVar5);
                          iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x4f2,
                                              "EVP_PKEY_eq(pk, dup_pk)",&_LC90,uVar2,1);
                          EVP_PKEY_free(local_f8);
                          local_f8 = pEVar5;
                          if (iVar1 == 0) break;
                        }
                      }
                    }
                  }
                  ctx = (EVP_PKEY_CTX *)0x0;
                  bVar6 = false;
                }
                goto LAB_00102d81;
              }
            }
          }
        }
      }
      local_118 = (EVP_PKEY_CTX *)0x0;
      uVar4 = 0;
      ctx = (EVP_PKEY_CTX *)0x0;
      bVar6 = false;
    }
  }
LAB_00102d81:
  BN_free(local_d8);
  BN_free(local_d0);
  BN_free(local_c8);
  BN_free(local_c0);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_e8);
  BN_free(local_e0);
  EVP_PKEY_free(local_f8);
  EVP_PKEY_CTX_free(local_118);
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(uVar4);
  OSSL_PARAM_BLD_free(uVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



uint test_fromdata_dh_named_group(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *to;
  EVP_PKEY *pEVar5;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_128;
  undefined8 local_120;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  EVP_PKEY *local_f8;
  undefined8 local_f0;
  BIGNUM *local_e8;
  BIGNUM *local_e0;
  BIGNUM *local_d8;
  BIGNUM *local_d0;
  BIGNUM *local_c8;
  BIGNUM *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = (EVP_PKEY *)0x0;
  local_e8 = (BIGNUM *)0x0;
  local_e0 = (BIGNUM *)0x0;
  local_d8 = (BIGNUM *)0x0;
  local_d0 = (BIGNUM *)0x0;
  local_c8 = (BIGNUM *)0x0;
  local_c0 = (BIGNUM *)0x0;
  uVar4 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x3b7,"bld = OSSL_PARAM_BLD_new()",uVar4);
  if (iVar1 == 0) {
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    to = (EVP_PKEY *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    local_120 = 0;
    local_128 = (EVP_PKEY_CTX *)0x0;
    uVar3 = 0;
  }
  else {
    a = BN_bin2bn(pub_data_28,0x101,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x3b8,
                     "pub = BN_bin2bn(pub_data, sizeof(pub_data), NULL)",a);
    if (iVar1 == 0) {
      local_120 = 0;
      a_00 = (BIGNUM *)0x0;
      to = (EVP_PKEY *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      local_128 = (EVP_PKEY_CTX *)0x0;
      uVar3 = 0;
    }
    else {
      a_00 = BN_bin2bn(priv_data_27,0x1c,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x3b9,
                       "priv = BN_bin2bn(priv_data, sizeof(priv_data), NULL)",a_00);
      if (iVar1 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_utf8_string(uVar4,"group",group_name_26,0);
        iVar1 = test_true("test/evp_pkey_provided_test.c",0x3ba,
                          "OSSL_PARAM_BLD_push_utf8_string(bld, OSSL_PKEY_PARAM_GROUP_NAME, group_name, 0)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_PARAM_BLD_push_long(uVar4,"priv_len",0xe0);
          iVar1 = test_true("test/evp_pkey_provided_test.c",0x3bd,
                            "OSSL_PARAM_BLD_push_long(bld, OSSL_PKEY_PARAM_DH_PRIV_LEN, priv_len)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC85,a);
            iVar1 = test_true("test/evp_pkey_provided_test.c",0x3bf,
                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PUB_KEY, pub)",iVar1 != 0
                             );
            if (iVar1 != 0) {
              iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC86,a_00);
              iVar1 = test_true("test/evp_pkey_provided_test.c",0x3c0,
                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_PRIV_KEY, priv)",
                                iVar1 != 0);
              if (iVar1 != 0) {
                local_120 = OSSL_PARAM_BLD_to_param(uVar4);
                iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x3c1,
                                 "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",local_120);
                if (iVar1 == 0) {
                  local_128 = (EVP_PKEY_CTX *)0x0;
                  to = (EVP_PKEY *)0x0;
                  ctx = (EVP_PKEY_CTX *)0x0;
                  uVar3 = 0;
                }
                else {
                  local_128 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC191,0);
                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x3c4,
                                   "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"DH\", NULL)",local_128)
                  ;
                  if (iVar1 != 0) {
                    uVar2 = EVP_PKEY_fromdata_init(local_128);
                    iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x3c7,
                                        "EVP_PKEY_fromdata_init(ctx)",&_LC90,uVar2,1);
                    if (iVar1 != 0) {
                      uVar2 = EVP_PKEY_fromdata(local_128,&local_f8,0x87,local_120);
                      iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x3c8,
                                          "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)"
                                          ,&_LC90,uVar2,1);
                      if (iVar1 != 0) {
                        iVar1 = EVP_PKEY_get_utf8_string_param(local_f8,"group",0,0x50,&local_f0);
                        iVar1 = test_true("test/evp_pkey_provided_test.c",0x3d1,
                                          "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, NULL, sizeof(name_out), &len)"
                                          ,iVar1 != 0);
                        if ((iVar1 != 0) &&
                           (iVar1 = test_size_t_eq("test/evp_pkey_provided_test.c",0x3d5,&_LC36,
                                                   "sizeof(group_name) - 1",local_f0,9), iVar1 != 0)
                           ) {
                          iVar1 = EVP_PKEY_get_utf8_string_param
                                            (local_f8,"group",local_98,10,&local_f0);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x3d7,
                                            "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(group_name), &len)"
                                            ,iVar1 != 0);
                          if ((iVar1 != 0) &&
                             (iVar1 = test_size_t_eq("test/evp_pkey_provided_test.c",0x3dc,&_LC36,
                                                     "sizeof(group_name) - 1",local_f0,9),
                             iVar1 != 0)) {
                            iVar1 = EVP_PKEY_get_utf8_string_param
                                              (local_f8,"group",local_98,9,&local_f0);
                            iVar1 = test_false("test/evp_pkey_provided_test.c",0x3de,
                                               "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(group_name) - 1, &len)"
                                               ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = EVP_PKEY_get_utf8_string_param
                                                (local_f8,"group",local_98,8,&local_f0);
                              iVar1 = test_false("test/evp_pkey_provided_test.c",0x3e4,
                                                 "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(group_name) - 2, &len)"
                                                 ,iVar1 != 0);
                              if (iVar1 != 0) {
                                pEVar5 = (EVP_PKEY *)0x0;
                                while( true ) {
                                  uVar2 = EVP_PKEY_get_bits(local_f8);
                                  iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x3ed,
                                                      "EVP_PKEY_get_bits(pk)",&_LC154,uVar2,0x800);
                                  if (iVar1 == 0) break;
                                  uVar2 = EVP_PKEY_get_security_bits(local_f8);
                                  iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x3ee,
                                                      "EVP_PKEY_get_security_bits(pk)",&_LC155,uVar2
                                                      ,0x70);
                                  if (iVar1 == 0) break;
                                  uVar2 = EVP_PKEY_get_size(local_f8);
                                  iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x3ef,
                                                      "EVP_PKEY_get_size(pk)",&_LC95,uVar2,0x100);
                                  if (iVar1 == 0) break;
                                  iVar1 = EVP_PKEY_missing_parameters(local_f8);
                                  iVar1 = test_false("test/evp_pkey_provided_test.c",0x3f0,
                                                     "EVP_PKEY_missing_parameters(pk)",iVar1 != 0);
                                  if (iVar1 == 0) break;
                                  iVar1 = EVP_PKEY_get_utf8_string_param
                                                    (local_f8,"group",local_98,0x50,&local_f0);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x3f3,
                                                                                                        
                                                  "EVP_PKEY_get_utf8_string_param(pk, OSSL_PKEY_PARAM_GROUP_NAME, name_out, sizeof(name_out), &len)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_str_eq("test/evp_pkey_provided_test.c",0x3f8,
                                                          "name_out","group_name",local_98,
                                                          group_name_26), iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC85,&local_e8);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x3f9,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PUB_KEY, &pub_out)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x3fc,
                                                         &_LC85,"pub_out",a,local_e8), iVar1 == 0))
                                  break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC86,&local_e0);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x3fd,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_PRIV_KEY, &priv_out)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x3ff,
                                                         &_LC86,"priv_out",a_00,local_e0),
                                     iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC117,&local_d8);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x400,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_P, &p)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x401,
                                                         "&ossl_bignum_ffdhe2048_p",&_LC117,
                                                         &ossl_bignum_ffdhe2048_p,local_d8),
                                     iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC140,&local_d0);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x402,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_Q, &q)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x403,&_LC140
                                                       ,local_d0), iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC142,&local_c8);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x404,
                                                                                                        
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_G, &g)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x405,
                                                         "&ossl_bignum_const_2",&_LC142,
                                                         &ossl_bignum_const_2,local_c8), iVar1 == 0)
                                     ) break;
                                  iVar1 = EVP_PKEY_get_bn_param(local_f8,&_LC168,&local_c0);
                                  iVar1 = test_false("test/evp_pkey_provided_test.c",0x406,
                                                                                                          
                                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_FFC_COFACTOR, &j)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_ptr_null("test/evp_pkey_provided_test.c",0x409,
                                                            &_LC168,local_c0), iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_octet_string_param
                                                    (local_f8,&_LC144,local_b8,0x20,&local_f0);
                                  iVar1 = test_false("test/evp_pkey_provided_test.c",0x40a,
                                                                                                          
                                                  "EVP_PKEY_get_octet_string_param(pk, OSSL_PKEY_PARAM_FFC_SEED, seed_out, sizeof(seed_out), &len)"
                                                  ,iVar1 != 0);
                                  if (iVar1 == 0) break;
                                  iVar1 = EVP_PKEY_get_int_param(local_f8,"gindex",&local_104);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x40f,
                                                                                                        
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_GINDEX, &gindex)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x411,
                                                          "gindex",&_LC202,local_104,0xffffffff),
                                     iVar1 == 0)) break;
                                  iVar1 = EVP_PKEY_get_int_param(local_f8,"hindex",&local_fc);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x412,
                                                                                                        
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_H, &hindex)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x414,
                                                          "hindex",&_LC11,local_fc,0), iVar1 == 0))
                                  break;
                                  iVar1 = EVP_PKEY_get_int_param(local_f8,"pcounter",&local_100);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x415,
                                                                                                        
                                                  "EVP_PKEY_get_int_param(pk, OSSL_PKEY_PARAM_FFC_PCOUNTER, &pcounter)"
                                                  ,iVar1 != 0);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x418,
                                                          "pcounter",&_LC202,local_100,0xffffffff),
                                     iVar1 == 0)) break;
                                  BN_free(local_d8);
                                  local_d8 = (BIGNUM *)0x0;
                                  BN_free(local_d0);
                                  local_d0 = (BIGNUM *)0x0;
                                  BN_free(local_c8);
                                  local_c8 = (BIGNUM *)0x0;
                                  BN_free(local_c0);
                                  local_c0 = (BIGNUM *)0x0;
                                  BN_free(local_e8);
                                  local_e8 = (BIGNUM *)0x0;
                                  BN_free(local_e0);
                                  local_e0 = (BIGNUM *)0x0;
                                  ctx = (EVP_PKEY_CTX *)
                                        EVP_PKEY_CTX_new_from_pkey(0,local_f8,&_LC43);
                                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x427,
                                                                                                      
                                                  "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")"
                                                  ,ctx);
                                  if (iVar1 == 0) {
LAB_00104524:
                                    to = (EVP_PKEY *)0x0;
                                    uVar3 = 0;
                                    goto LAB_001038da;
                                  }
                                  uVar2 = EVP_PKEY_check(ctx);
                                  iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x42a,
                                                      "EVP_PKEY_check(key_ctx)",&_LC11,uVar2,0);
                                  if (iVar1 == 0) goto LAB_00104524;
                                  uVar2 = EVP_PKEY_public_check(ctx);
                                  iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x42b,
                                                      "EVP_PKEY_public_check(key_ctx)",&_LC11,uVar2,
                                                      0);
                                  if (iVar1 == 0) goto LAB_00104524;
                                  uVar2 = EVP_PKEY_private_check(ctx);
                                  iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x42c,
                                                      "EVP_PKEY_private_check(key_ctx)",&_LC11,uVar2
                                                      ,0);
                                  if (iVar1 == 0) goto LAB_00104524;
                                  uVar2 = EVP_PKEY_pairwise_check(ctx);
                                  iVar1 = test_int_gt("test/evp_pkey_provided_test.c",0x42d,
                                                      "EVP_PKEY_pairwise_check(key_ctx)",&_LC11,
                                                      uVar2,0);
                                  if (iVar1 == 0) goto LAB_00104524;
                                  EVP_PKEY_CTX_free(ctx);
                                  to = EVP_PKEY_new();
                                  uVar3 = test_ptr("test/evp_pkey_provided_test.c",0x432,
                                                   "copy_pk = EVP_PKEY_new()",to);
                                  if (uVar3 == 0) {
LAB_00104517:
                                    ctx = (EVP_PKEY_CTX *)0x0;
                                    goto LAB_001038da;
                                  }
                                  iVar1 = EVP_PKEY_copy_parameters(to,local_f8);
                                  uVar3 = test_true("test/evp_pkey_provided_test.c",0x433,
                                                    "EVP_PKEY_copy_parameters(copy_pk, pk)",
                                                    iVar1 != 0);
                                  if (uVar3 == 0) goto LAB_00104517;
                                  EVP_PKEY_free(to);
                                  iVar1 = test_print_key_using_pem(&_LC191,local_f8);
                                  if (iVar1 == 0) break;
                                  iVar1 = test_print_key_using_encoder(&_LC191,local_f8);
                                  if ((pEVar5 != (EVP_PKEY *)0x0) || (iVar1 == 0)) {
                                    to = (EVP_PKEY *)0x0;
                                    ctx = (EVP_PKEY_CTX *)0x0;
                                    uVar3 = (uint)(iVar1 != 0);
                                    goto LAB_001038da;
                                  }
                                  pEVar5 = (EVP_PKEY *)EVP_PKEY_dup(local_f8);
                                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x43e,
                                                   "dup_pk = EVP_PKEY_dup(pk)",pEVar5);
                                  if (iVar1 == 0) {
                                    to = (EVP_PKEY *)0x0;
                                    ctx = (EVP_PKEY_CTX *)0x0;
                                    uVar3 = 1;
                                    goto LAB_001038da;
                                  }
                                  uVar2 = EVP_PKEY_eq(local_f8,pEVar5);
                                  iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x440,
                                                      "EVP_PKEY_eq(pk, dup_pk)",&_LC90,uVar2,1);
                                  EVP_PKEY_free(local_f8);
                                  local_f8 = pEVar5;
                                  if (iVar1 == 0) break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  to = (EVP_PKEY *)0x0;
                  ctx = (EVP_PKEY_CTX *)0x0;
                  uVar3 = 0;
                }
                goto LAB_001038da;
              }
            }
          }
        }
      }
      local_120 = 0;
      to = (EVP_PKEY *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar3 = 0;
      local_128 = (EVP_PKEY_CTX *)0x0;
    }
  }
LAB_001038da:
  BN_free(local_d8);
  BN_free(local_d0);
  BN_free(local_c8);
  BN_free(local_c0);
  BN_free(a);
  BN_free(a_00);
  BN_free(local_e8);
  BN_free(local_e0);
  EVP_PKEY_free(to);
  EVP_PKEY_free(local_f8);
  EVP_PKEY_CTX_free(local_128);
  EVP_PKEY_CTX_free(ctx);
  OSSL_PARAM_free(local_120);
  OSSL_PARAM_BLD_free(uVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint test_evp_pkey_get_bn_param_large(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_68;
  EVP_PKEY_CTX *local_60;
  EVP_PKEY *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (EVP_PKEY *)0x0;
  puVar7 = (undefined8 *)&n_data_3;
  for (lVar6 = 0x100; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = 0xcececececececece;
    puVar7 = puVar7 + 1;
  }
  local_48 = (BIGNUM *)0x0;
  *(undefined2 *)puVar7 = 0xcece;
  uVar4 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x363,"bld = OSSL_PARAM_BLD_new()",uVar4);
  if (iVar1 == 0) {
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar5 = 0;
    local_60 = (EVP_PKEY_CTX *)0x0;
    local_68 = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
    goto LAB_00104603;
  }
  a = BN_bin2bn((uchar *)&n_data_3,0x802,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x364,
                   "n = BN_bin2bn(n_data, sizeof(n_data), NULL)",a);
  if (iVar1 == 0) {
    local_60 = (EVP_PKEY_CTX *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    uVar5 = 0;
    local_68 = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
    goto LAB_00104603;
  }
  a_00 = BN_bin2bn("\x01",3,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x365,
                   "e = BN_bin2bn(e_data, sizeof(e_data), NULL)",a_00);
  if (iVar1 == 0) {
    local_60 = (EVP_PKEY_CTX *)0x0;
    a_01 = (BIGNUM *)0x0;
    uVar5 = 0;
    local_68 = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
    goto LAB_00104603;
  }
  a_01 = BN_bin2bn((uchar *)&d_data_1,4,(BIGNUM *)0x0);
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x366,
                   "d = BN_bin2bn(d_data, sizeof(d_data), NULL)",a_01);
  if (iVar1 == 0) {
LAB_00104751:
    local_60 = (EVP_PKEY_CTX *)0x0;
    uVar5 = 0;
    uVar2 = 0;
    local_68 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC0,a);
    uVar2 = test_true("test/evp_pkey_provided_test.c",0x367,
                      "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_N, n)",iVar1 != 0);
    if (uVar2 != 0) {
      iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC1,a_00);
      uVar2 = test_true("test/evp_pkey_provided_test.c",0x368,
                        "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_E, e)",iVar1 != 0);
      if (uVar2 != 0) {
        iVar1 = OSSL_PARAM_BLD_push_BN(uVar4,&_LC2,a_01);
        iVar1 = test_true("test/evp_pkey_provided_test.c",0x369,
                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_D, d)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar5 = OSSL_PARAM_BLD_to_param(uVar4);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x36a,
                           "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",uVar5);
          if (iVar1 == 0) {
            local_60 = (EVP_PKEY_CTX *)0x0;
            local_68 = (EVP_PKEY_CTX *)0x0;
            uVar2 = 0;
            goto LAB_00104603;
          }
          local_68 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC216,0);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x36b,
                           "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"RSA\", NULL)",local_68);
          if (iVar1 != 0) {
            uVar3 = EVP_PKEY_fromdata_init(local_68);
            uVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x36c,"EVP_PKEY_fromdata_init(ctx)",
                                &_LC90,uVar3,1);
            local_60 = (EVP_PKEY_CTX *)0x0;
            if (uVar2 == 0) goto LAB_00104603;
            uVar3 = EVP_PKEY_fromdata(local_68,&local_50,0x87,uVar5);
            iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x36d,
                                "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)",
                                &_LC90,uVar3,1);
            if (iVar1 != 0) {
              local_60 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_50,&_LC43);
              uVar2 = test_ptr("test/evp_pkey_provided_test.c",0x36f,
                               "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")",local_60);
              if (uVar2 != 0) {
                iVar1 = EVP_PKEY_get_bn_param(local_50,&_LC0,&local_48);
                uVar2 = test_true("test/evp_pkey_provided_test.c",0x370,
                                  "EVP_PKEY_get_bn_param(pk, OSSL_PKEY_PARAM_RSA_N, &n_out)",
                                  iVar1 != 0);
                if (uVar2 != 0) {
                  iVar1 = test_BN_eq("test/evp_pkey_provided_test.c",0x371,&_LC0,"n_out",a,local_48)
                  ;
                  uVar2 = (uint)(iVar1 != 0);
                }
              }
              goto LAB_00104603;
            }
          }
          local_60 = (EVP_PKEY_CTX *)0x0;
          uVar2 = 0;
          goto LAB_00104603;
        }
        goto LAB_00104751;
      }
    }
    local_60 = (EVP_PKEY_CTX *)0x0;
    uVar5 = 0;
    local_68 = (EVP_PKEY_CTX *)0x0;
  }
LAB_00104603:
  BN_free(local_48);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  EVP_PKEY_free(local_50);
  EVP_PKEY_CTX_free(local_60);
  EVP_PKEY_CTX_free(local_68);
  OSSL_PARAM_free(uVar5);
  OSSL_PARAM_BLD_free(uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_evp_pkey_ctx_dup_kdf(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *ptr;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  size_t local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  ptr = (undefined8 *)CRYPTO_malloc(200,"test/evp_pkey_provided_test.c",0x85b);
  OSSL_PARAM_construct_utf8_string(&local_88,"digest","sha256",0);
  *ptr = local_88;
  ptr[1] = uStack_80;
  ptr[2] = local_78;
  ptr[3] = uStack_70;
  ptr[4] = local_68;
  OSSL_PARAM_construct_octet_string(&local_88,&_LC222,&_LC222,4);
  ptr[5] = local_88;
  ptr[6] = uStack_80;
  ptr[7] = local_78;
  ptr[8] = uStack_70;
  ptr[9] = local_68;
  OSSL_PARAM_construct_octet_string(&local_88,&_LC224,"secret",6);
  ptr[10] = local_88;
  ptr[0xb] = uStack_80;
  ptr[0xc] = local_78;
  ptr[0xd] = uStack_70;
  ptr[0xe] = local_68;
  OSSL_PARAM_construct_utf8_string(&local_88,&_LC226,"EXTRACT_ONLY",0);
  ptr[0xf] = local_88;
  ptr[0x10] = uStack_80;
  ptr[0x11] = local_78;
  ptr[0x12] = uStack_70;
  ptr[0x13] = local_68;
  OSSL_PARAM_construct_end(&local_88);
  ptr[0x14] = local_88;
  ptr[0x15] = uStack_80;
  ptr[0x16] = local_78;
  ptr[0x17] = uStack_70;
  ptr[0x18] = local_68;
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x871,
                   "params = do_construct_hkdf_params(\"sha256\", \"secret\", 6, \"salt\")",ptr);
  if (iVar1 == 0) {
    uVar2 = 0;
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
  }
  else {
    ctx_00 = (EVP_PKEY_CTX *)0x0;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC228,0);
    uVar2 = test_ptr("test/evp_pkey_provided_test.c",0x874,
                     "pctx = EVP_PKEY_CTX_new_from_name(NULL, \"HKDF\", NULL)",ctx);
    if (uVar2 != 0) {
      uVar3 = EVP_PKEY_derive_init_ex(ctx,ptr);
      uVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x876,
                          "EVP_PKEY_derive_init_ex(pctx, params)",&_LC90,uVar3,1);
      if (uVar2 != 0) {
        ctx_00 = EVP_PKEY_CTX_dup(ctx);
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x878,"dctx = EVP_PKEY_CTX_dup(pctx)",
                         ctx_00);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_derive(ctx,(uchar *)0x0,&local_50);
          uVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x87a,
                              "EVP_PKEY_derive(pctx, NULL, &len)",&_LC90,iVar1,1);
          if (uVar2 == 0) goto LAB_00104b4a;
          iVar1 = test_size_t_eq("test/evp_pkey_provided_test.c",0x87b,&_LC36,"SHA256_DIGEST_LENGTH"
                                 ,local_50,0x20);
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_derive(ctx_00,(uchar *)0x0,&local_48);
            iVar1 = test_int_eq("test/evp_pkey_provided_test.c",0x87c,
                                "EVP_PKEY_derive(dctx, NULL, &dlen)",&_LC90,iVar1,1);
            if (iVar1 != 0) {
              iVar1 = test_size_t_eq("test/evp_pkey_provided_test.c",0x87d,&_LC235,
                                     "SHA256_DIGEST_LENGTH",local_48,0x20);
              uVar2 = (uint)(iVar1 != 0);
              goto LAB_00104b4a;
            }
          }
        }
        uVar2 = 0;
      }
    }
  }
LAB_00104b4a:
  CRYPTO_free(ptr);
  EVP_PKEY_CTX_free(ctx_00);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
do_fromdata_rsa_derive_constprop_0
          (undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
          )

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *to;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  undefined8 local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = 0;
  local_48 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC216,0);
  iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x1d4,
                   "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"RSA\", NULL)",ctx);
  if (iVar2 != 0) {
    uVar3 = EVP_PKEY_fromdata_init(ctx);
    iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1d5,"EVP_PKEY_fromdata_init(ctx)",&_LC90,
                        uVar3,1);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_fromdata(ctx,&local_48,0x87,param_1);
      iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1d6,
                          "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)",&_LC90,
                          uVar3,1);
      if (iVar2 != 0) {
        uVar3 = EVP_PKEY_todata(local_48,0x87,&local_50);
        iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1de,
                            "EVP_PKEY_todata(pk, EVP_PKEY_KEYPAIR, &todata_params)",&_LC90,uVar3,1);
        if (iVar2 != 0) {
          lVar1 = *param_2;
          while (lVar1 != 0) {
            uVar4 = OSSL_PARAM_locate_const(local_50);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x1e2,
                             "check_param = OSSL_PARAM_locate_const(todata_params, check[i].pname)",
                             uVar4);
            if (iVar2 == 0) goto LAB_00104d90;
            uVar3 = OSSL_PARAM_get_BN(uVar4,&local_58);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1e5,
                                "OSSL_PARAM_get_BN(check_param, &check_bn)",&_LC90,uVar3,1);
            if (iVar2 == 0) goto LAB_00104d90;
            iVar2 = test_BN_eq("test/evp_pkey_provided_test.c",0x1e7,"check_bn","check[i].comparebn"
                               ,local_58,param_2[1]);
            if (iVar2 == 0) {
              test_info("test/evp_pkey_provided_test.c",0x1e8,"Data mismatch for parameter %s",
                        *param_2);
              goto LAB_00104d90;
            }
            param_2 = param_2 + 2;
            BN_free(local_58);
            lVar1 = *param_2;
            local_58 = (BIGNUM *)0x0;
          }
          pkey = (EVP_PKEY *)0x0;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          while( true ) {
            uVar3 = EVP_PKEY_get_bits(local_48);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1f0,"EVP_PKEY_get_bits(pk)",
                                "expected_nbits",uVar3,param_3);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_security_bits(local_48);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1f1,
                                "EVP_PKEY_get_security_bits(pk)","expected_sbits",uVar3,param_4);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_size(local_48);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1f2,"EVP_PKEY_get_size(pk)",
                                "expected_ksize",uVar3,param_5);
            if (iVar2 == 0) break;
            iVar2 = EVP_PKEY_missing_parameters(local_48);
            iVar2 = test_false("test/evp_pkey_provided_test.c",499,"EVP_PKEY_missing_parameters(pk)"
                               ,iVar2 != 0);
            if (iVar2 == 0) break;
            EVP_PKEY_CTX_free(ctx_00);
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_48,&_LC43);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x1f7,
                             "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")",ctx_00);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x1fa,"EVP_PKEY_check(key_ctx)",
                                &_LC11,uVar3,0);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_public_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x1fb,
                                "EVP_PKEY_public_check(key_ctx)",&_LC11,uVar3,0);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_private_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x1fc,
                                "EVP_PKEY_private_check(key_ctx)",&_LC11,uVar3,0);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_pairwise_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x1fd,
                                "EVP_PKEY_pairwise_check(key_ctx)",&_LC11,uVar3,0);
            if (iVar2 == 0) break;
            to = EVP_PKEY_new();
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x201,"copy_pk = EVP_PKEY_new()",to);
            if (iVar2 == 0) break;
            iVar2 = EVP_PKEY_copy_parameters(to,local_48);
            iVar2 = test_false("test/evp_pkey_provided_test.c",0x202,
                               "EVP_PKEY_copy_parameters(copy_pk, pk)",iVar2 != 0);
            if (iVar2 == 0) break;
            EVP_PKEY_free(to);
            if (pkey != (EVP_PKEY *)0x0) {
              uVar4 = 1;
              goto LAB_00104d94;
            }
            pkey = (EVP_PKEY *)EVP_PKEY_dup(local_48);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x20a,"dup_pk = EVP_PKEY_dup(pk)",pkey)
            ;
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_eq(local_48,pkey);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x20c,"EVP_PKEY_eq(pk, dup_pk)",
                                &_LC90,uVar3,1);
            if (iVar2 == 0) {
              uVar4 = 0;
              EVP_PKEY_free(pkey);
              goto LAB_00104d94;
            }
            EVP_PKEY_free(local_48);
            local_48 = pkey;
          }
          uVar4 = 0;
          goto LAB_00104d94;
        }
      }
    }
  }
LAB_00104d90:
  uVar4 = 0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00104d94:
  BN_free(local_58);
  EVP_PKEY_free(local_48);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  OSSL_PARAM_free(param_1);
  OSSL_PARAM_free(local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_fromdata_rsa_derive_from_pq_sp800(void)

{
  int iVar1;
  undefined8 uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  undefined8 uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_b0;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  BIGNUM *local_90;
  char *local_88;
  BIGNUM *local_80;
  char *local_78;
  BIGNUM *local_70;
  char *local_68;
  BIGNUM *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x251,"bld = OSSL_PARAM_BLD_new()",uVar2);
  if (iVar1 == 0) {
    local_b0 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_90 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_98 = (BIGNUM *)0x0;
    local_a0 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    a = BN_bin2bn(n_data_11,0x41,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x252,
                     "n = BN_bin2bn(n_data, sizeof(n_data), NULL)",a);
    if (iVar1 == 0) {
      local_b0 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      local_90 = (BIGNUM *)0x0;
      local_98 = (BIGNUM *)0x0;
      local_a0 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      a_00 = BN_bin2bn((uchar *)&e_data_10,3,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x253,
                       "e = BN_bin2bn(e_data, sizeof(e_data), NULL)",a_00);
      if (iVar1 == 0) {
        local_b0 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_90 = (BIGNUM *)0x0;
        local_98 = (BIGNUM *)0x0;
        local_a0 = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        a_01 = BN_bin2bn(d_data_9,0x40,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x254,
                         "d = BN_bin2bn(d_data, sizeof(d_data), NULL)",a_01);
        if (iVar1 == 0) {
          local_b0 = (BIGNUM *)0x0;
          a_02 = (BIGNUM *)0x0;
          local_90 = (BIGNUM *)0x0;
          local_98 = (BIGNUM *)0x0;
          local_a0 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          a_02 = BN_bin2bn(p_data_8,0x21,(BIGNUM *)0x0);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x255,
                           "p = BN_bin2bn(p_data, sizeof(p_data), NULL)",a_02);
          if (iVar1 == 0) {
            local_b0 = (BIGNUM *)0x0;
            local_90 = (BIGNUM *)0x0;
            local_98 = (BIGNUM *)0x0;
            local_a0 = (BIGNUM *)0x0;
            iVar1 = 0;
          }
          else {
            local_a0 = BN_bin2bn(q_data_7,0x21,(BIGNUM *)0x0);
            iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x256,
                             "q = BN_bin2bn(q_data, sizeof(q_data), NULL)",local_a0);
            if (iVar1 == 0) {
              local_b0 = (BIGNUM *)0x0;
              local_90 = (BIGNUM *)0x0;
              local_98 = (BIGNUM *)0x0;
              iVar1 = 0;
            }
            else {
              local_98 = BN_bin2bn(dmp1_data_6,0x21,(BIGNUM *)0x0);
              iVar1 = test_ptr("test/evp_pkey_provided_test.c",599,
                               "dmp1 = BN_bin2bn(dmp1_data, sizeof(dmp1_data), NULL)",local_98);
              if (iVar1 == 0) {
                local_b0 = (BIGNUM *)0x0;
                local_90 = (BIGNUM *)0x0;
                iVar1 = 0;
              }
              else {
                local_90 = BN_bin2bn(dmq1_data_5,0x20,(BIGNUM *)0x0);
                iVar1 = test_ptr("test/evp_pkey_provided_test.c",600,
                                 "dmq1 = BN_bin2bn(dmq1_data, sizeof(dmq1_data), NULL)",local_90);
                local_b0 = (BIGNUM *)0x0;
                if (iVar1 != 0) {
                  local_b0 = BN_bin2bn(iqmp_data_4,0x21,(BIGNUM *)0x0);
                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x259,
                                   "iqmp = BN_bin2bn(iqmp_data, sizeof(iqmp_data), NULL)",local_b0);
                  if (iVar1 != 0) {
                    iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC0,a);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x25a,
                                      "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_N, n)",
                                      iVar1 != 0);
                    if (iVar1 == 0) goto LAB_00105333;
                    iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC1,a_00);
                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x25b,
                                      "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_E, e)",
                                      iVar1 != 0);
                    if (iVar1 != 0) {
                      iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC2,a_01);
                      iVar1 = test_true("test/evp_pkey_provided_test.c",0x25c,
                                        "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_D, d)",
                                        iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"rsa-factor1",a_02);
                        iVar1 = test_true("test/evp_pkey_provided_test.c",0x25d,
                                          "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_FACTOR1, p)"
                                          ,iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"rsa-factor2",local_a0);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x25f,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_FACTOR2, q)"
                                            ,iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_int(uVar2,"rsa-derive-from-pq",1);
                            iVar1 = test_true("test/evp_pkey_provided_test.c",0x261,
                                              "OSSL_PARAM_BLD_push_int(bld, OSSL_PKEY_PARAM_RSA_DERIVE_FROM_PQ, 1)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              uVar3 = OSSL_PARAM_BLD_to_param(uVar2);
                              iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x263,
                                               "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",
                                               uVar3);
                              if (iVar1 != 0) {
                                local_88 = "rsa-exponent1";
                                local_78 = "rsa-exponent2";
                                local_68 = "rsa-coefficient1";
                                local_58 = 0;
                                local_50 = 0;
                                local_80 = local_98;
                                local_70 = local_90;
                                local_60 = local_b0;
                                iVar1 = do_fromdata_rsa_derive_constprop_0
                                                  (uVar3,&local_88,0x200,0x38,0x40);
                                goto LAB_00105333;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  iVar1 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00105333:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(local_a0);
  BN_free(local_98);
  BN_free(local_90);
  BN_free(local_b0);
  OSSL_PARAM_BLD_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_fromdata_rsa_derive_from_pq_multiprime(void)

{
  int iVar1;
  undefined8 uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  undefined8 uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_140;
  BIGNUM *local_138;
  BIGNUM *local_130;
  BIGNUM *local_128;
  BIGNUM *local_120;
  BIGNUM *local_118;
  BIGNUM *local_110;
  char *local_108;
  BIGNUM *local_100;
  char *local_f8;
  BIGNUM *local_f0;
  char *local_e8;
  BIGNUM *local_e0;
  char *local_d8;
  BIGNUM *local_d0;
  char *local_c8;
  BIGNUM *local_c0;
  undefined *local_b8;
  BIGNUM *local_b0;
  undefined *local_a8;
  BIGNUM *local_a0;
  undefined *local_98;
  BIGNUM *local_90;
  char *local_88;
  BIGNUM *local_80;
  char *local_78;
  BIGNUM *local_70;
  char *local_68;
  BIGNUM *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OSSL_PARAM_BLD_new();
  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x307,"bld = OSSL_PARAM_BLD_new()",uVar2);
  if (iVar1 == 0) {
    local_118 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    local_120 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    local_130 = (BIGNUM *)0x0;
    local_128 = (BIGNUM *)0x0;
    local_110 = (BIGNUM *)0x0;
    local_138 = (BIGNUM *)0x0;
    local_140 = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    a = BN_bin2bn(n_data_22,0x101,(BIGNUM *)0x0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x308,
                     "n = BN_bin2bn(n_data, sizeof(n_data), NULL)",a);
    if (iVar1 == 0) {
      local_118 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      local_120 = (BIGNUM *)0x0;
      local_130 = (BIGNUM *)0x0;
      local_128 = (BIGNUM *)0x0;
      local_110 = (BIGNUM *)0x0;
      local_138 = (BIGNUM *)0x0;
      local_140 = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      a_00 = BN_bin2bn((uchar *)&e_data_21,3,(BIGNUM *)0x0);
      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x309,
                       "e = BN_bin2bn(e_data, sizeof(e_data), NULL)",a_00);
      if (iVar1 == 0) {
        local_118 = (BIGNUM *)0x0;
        a_02 = (BIGNUM *)0x0;
        a_01 = (BIGNUM *)0x0;
        local_120 = (BIGNUM *)0x0;
        local_130 = (BIGNUM *)0x0;
        local_128 = (BIGNUM *)0x0;
        local_110 = (BIGNUM *)0x0;
        local_138 = (BIGNUM *)0x0;
        local_140 = (BIGNUM *)0x0;
        iVar1 = 0;
      }
      else {
        a_01 = BN_bin2bn(d_data_20,0x100,(BIGNUM *)0x0);
        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30a,
                         "d = BN_bin2bn(d_data, sizeof(d_data), NULL)",a_01);
        if (iVar1 == 0) {
          local_118 = (BIGNUM *)0x0;
          a_02 = (BIGNUM *)0x0;
          local_120 = (BIGNUM *)0x0;
          local_130 = (BIGNUM *)0x0;
          local_128 = (BIGNUM *)0x0;
          local_110 = (BIGNUM *)0x0;
          local_138 = (BIGNUM *)0x0;
          local_140 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          a_02 = BN_bin2bn(p_data_19,0x56,(BIGNUM *)0x0);
          iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30b,
                           "p = BN_bin2bn(p_data, sizeof(p_data), NULL)",a_02);
          if (iVar1 == 0) {
            local_118 = (BIGNUM *)0x0;
            local_120 = (BIGNUM *)0x0;
            local_130 = (BIGNUM *)0x0;
            local_128 = (BIGNUM *)0x0;
            local_110 = (BIGNUM *)0x0;
            local_138 = (BIGNUM *)0x0;
            local_140 = (BIGNUM *)0x0;
            iVar1 = 0;
          }
          else {
            local_140 = BN_bin2bn(q_data_18,0x56,(BIGNUM *)0x0);
            iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30c,
                             "q = BN_bin2bn(q_data, sizeof(q_data), NULL)",local_140);
            if (iVar1 == 0) {
              local_118 = (BIGNUM *)0x0;
              local_120 = (BIGNUM *)0x0;
              local_130 = (BIGNUM *)0x0;
              local_128 = (BIGNUM *)0x0;
              local_110 = (BIGNUM *)0x0;
              local_138 = (BIGNUM *)0x0;
              iVar1 = 0;
            }
            else {
              local_138 = BN_bin2bn(p2_data_17,0x56,(BIGNUM *)0x0);
              iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30d,
                               "p2 = BN_bin2bn(p2_data, sizeof(p2_data), NULL)",local_138);
              if (iVar1 == 0) {
                local_118 = (BIGNUM *)0x0;
                local_120 = (BIGNUM *)0x0;
                local_130 = (BIGNUM *)0x0;
                local_128 = (BIGNUM *)0x0;
                local_110 = (BIGNUM *)0x0;
                iVar1 = 0;
              }
              else {
                local_120 = BN_bin2bn(exp3_data_16,0x56,(BIGNUM *)0x0);
                iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30e,
                                 "exp3 = BN_bin2bn(exp3_data, sizeof(exp3_data), NULL)",local_120);
                if (iVar1 == 0) {
                  local_118 = (BIGNUM *)0x0;
                  local_130 = (BIGNUM *)0x0;
                  local_128 = (BIGNUM *)0x0;
                  local_110 = (BIGNUM *)0x0;
                  iVar1 = 0;
                }
                else {
                  local_118 = BN_bin2bn(coeff2_data_15,0x56,(BIGNUM *)0x0);
                  iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x30f,
                                   "coeff2 = BN_bin2bn(coeff2_data, sizeof(coeff2_data), NULL)",
                                   local_118);
                  if (iVar1 == 0) {
                    local_130 = (BIGNUM *)0x0;
                    local_128 = (BIGNUM *)0x0;
                    local_110 = (BIGNUM *)0x0;
                    iVar1 = 0;
                  }
                  else {
                    local_110 = BN_bin2bn(dmp1_data_14,0x56,(BIGNUM *)0x0);
                    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x310,
                                     "dmp1 = BN_bin2bn(dmp1_data, sizeof(dmp1_data), NULL)",
                                     local_110);
                    if (iVar1 == 0) {
                      local_130 = (BIGNUM *)0x0;
                      local_128 = (BIGNUM *)0x0;
                      iVar1 = 0;
                    }
                    else {
                      local_128 = BN_bin2bn(dmq1_data_13,0x56,(BIGNUM *)0x0);
                      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x311,
                                       "dmq1 = BN_bin2bn(dmq1_data, sizeof(dmq1_data), NULL)",
                                       local_128);
                      local_130 = (BIGNUM *)0x0;
                      if (iVar1 != 0) {
                        local_130 = BN_bin2bn(iqmp_data_12,0x56,(BIGNUM *)0x0);
                        iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x312,
                                         "iqmp = BN_bin2bn(iqmp_data, sizeof(iqmp_data), NULL)",
                                         local_130);
                        if (iVar1 != 0) {
                          iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC0,a);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x313,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_N, n)",
                                            iVar1 != 0);
                          if (iVar1 == 0) goto LAB_001058f1;
                          iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC1,a_00);
                          iVar1 = test_true("test/evp_pkey_provided_test.c",0x314,
                                            "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_E, e)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,&_LC2,a_01);
                            iVar1 = test_true("test/evp_pkey_provided_test.c",0x315,
                                              "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_D, d)"
                                              ,iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"rsa-factor1",a_02);
                              iVar1 = test_true("test/evp_pkey_provided_test.c",0x316,
                                                "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_FACTOR1, p)"
                                                ,iVar1 != 0);
                              if (iVar1 != 0) {
                                iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"rsa-factor2",local_140);
                                iVar1 = test_true("test/evp_pkey_provided_test.c",0x318,
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_FACTOR2, q)"
                                                  ,iVar1 != 0);
                                if (iVar1 != 0) {
                                  iVar1 = OSSL_PARAM_BLD_push_BN(uVar2,"rsa-factor3",local_138);
                                  iVar1 = test_true("test/evp_pkey_provided_test.c",0x31a,
                                                                                                        
                                                  "OSSL_PARAM_BLD_push_BN(bld, OSSL_PKEY_PARAM_RSA_FACTOR3, p2)"
                                                  ,iVar1 != 0);
                                  if (iVar1 != 0) {
                                    iVar1 = OSSL_PARAM_BLD_push_int(uVar2,"rsa-derive-from-pq",1);
                                    iVar1 = test_true("test/evp_pkey_provided_test.c",0x31c,
                                                                                                            
                                                  "OSSL_PARAM_BLD_push_int(bld, OSSL_PKEY_PARAM_RSA_DERIVE_FROM_PQ, 1)"
                                                  ,iVar1 != 0);
                                    if (iVar1 != 0) {
                                      uVar3 = OSSL_PARAM_BLD_to_param(uVar2);
                                      iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x31e,
                                                                                                              
                                                  "fromdata_params = OSSL_PARAM_BLD_to_param(bld)",
                                                  uVar3);
                                      if (iVar1 != 0) {
                                        local_108 = "rsa-exponent1";
                                        local_f8 = "rsa-exponent2";
                                        local_e8 = "rsa-coefficient1";
                                        local_d8 = "rsa-exponent3";
                                        local_c8 = "rsa-coefficient2";
                                        local_b8 = &_LC0;
                                        local_a8 = &_LC1;
                                        local_98 = &_LC2;
                                        local_88 = "rsa-factor1";
                                        local_78 = "rsa-factor2";
                                        local_68 = "rsa-factor3";
                                        local_58 = 0;
                                        local_50 = 0;
                                        local_100 = local_110;
                                        local_f0 = local_128;
                                        local_e0 = local_130;
                                        local_d0 = local_120;
                                        local_c0 = local_118;
                                        local_b0 = a;
                                        local_a0 = a_00;
                                        local_90 = a_01;
                                        local_80 = a_02;
                                        local_70 = local_140;
                                        local_60 = local_138;
                                        iVar1 = do_fromdata_rsa_derive_constprop_0
                                                          (uVar3,&local_108,0x800,0x70,0x100);
                                        goto LAB_001058f1;
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
LAB_001058f1:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(local_138);
  BN_free(local_140);
  BN_free(local_110);
  BN_free(local_128);
  BN_free(local_130);
  BN_free(local_120);
  BN_free(local_118);
  OSSL_PARAM_BLD_free(uVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 test_fromdata_rsa(void)

{
  EVP_PKEY *pEVar1;
  int iVar2;
  undefined4 uVar3;
  BIGNUM *a;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_1d8;
  EVP_PKEY *local_1d0;
  EVP_PKEY *local_1b8;
  BIGNUM *local_1b0;
  long local_1a8 [45];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar10 = local_1a8;
  local_1b8 = (EVP_PKEY *)0x0;
  ppuVar6 = &PTR__LC0_001075a0;
  plVar7 = plVar10;
  for (lVar5 = 0x2d; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar7 = (long)*ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    plVar7 = plVar7 + 1;
  }
  local_1b0 = BN_new();
  a = BN_new();
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,&_LC216,0);
  iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x180,
                   "ctx = EVP_PKEY_CTX_new_from_name(NULL, \"RSA\", NULL)",ctx);
  if (iVar2 != 0) {
    uVar3 = EVP_PKEY_fromdata_init(ctx);
    iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x183,"EVP_PKEY_fromdata_init(ctx)",&_LC90,
                        uVar3,1);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_fromdata(ctx,&local_1b8,0x87,plVar10);
      iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x184,
                          "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)",&_LC90,
                          uVar3,1);
      if (iVar2 != 0) {
        local_1d8 = (EVP_PKEY_CTX *)0x0;
        pEVar4 = (EVP_PKEY *)0x0;
        while( true ) {
          uVar3 = EVP_PKEY_get_bits(local_1b8);
          iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x18a,"EVP_PKEY_get_bits(pk)",&_LC260,
                              uVar3,0x20);
          if (iVar2 == 0) break;
          uVar3 = EVP_PKEY_get_security_bits(local_1b8);
          iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x18b,"EVP_PKEY_get_security_bits(pk)"
                              ,&_LC261,uVar3,8);
          if (iVar2 == 0) {
            uVar8 = 0;
            local_1d0 = (EVP_PKEY *)0x0;
            goto LAB_0010617f;
          }
          uVar3 = EVP_PKEY_get_size(local_1b8);
          iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x18c,"EVP_PKEY_get_size(pk)",&_LC262,
                              uVar3,4);
          if (iVar2 == 0) break;
          iVar2 = EVP_PKEY_missing_parameters(local_1b8);
          iVar2 = test_false("test/evp_pkey_provided_test.c",0x18d,"EVP_PKEY_missing_parameters(pk)"
                             ,iVar2 != 0);
          if (iVar2 == 0) break;
          EVP_PKEY_CTX_free(local_1d8);
          local_1d8 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_1b8,&_LC43);
          iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x191,
                           "key_ctx = EVP_PKEY_CTX_new_from_pkey(NULL, pk, \"\")",local_1d8);
          if (iVar2 == 0) break;
          uVar3 = EVP_PKEY_check(local_1d8);
          iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x194,"EVP_PKEY_check(key_ctx)",&_LC11
                              ,uVar3,0);
          if (iVar2 == 0) break;
          uVar3 = EVP_PKEY_public_check(local_1d8);
          iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x195,"EVP_PKEY_public_check(key_ctx)"
                              ,&_LC11,uVar3,0);
          if (iVar2 == 0) break;
          uVar3 = EVP_PKEY_private_check(local_1d8);
          iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x196,
                              "EVP_PKEY_private_check(key_ctx)",&_LC11,uVar3,0);
          if (iVar2 == 0) break;
          uVar3 = EVP_PKEY_pairwise_check(local_1d8);
          iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x197,
                              "EVP_PKEY_pairwise_check(key_ctx)",&_LC11,uVar3,0);
          if (iVar2 == 0) break;
          local_1d0 = EVP_PKEY_new();
          iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x19b,"copy_pk = EVP_PKEY_new()",
                           local_1d0);
          if (iVar2 == 0) {
LAB_001066ba:
            uVar8 = 0;
            goto LAB_0010617f;
          }
          iVar2 = EVP_PKEY_copy_parameters(local_1d0,local_1b8);
          iVar2 = test_false("test/evp_pkey_provided_test.c",0x19c,
                             "EVP_PKEY_copy_parameters(copy_pk, pk)",iVar2 != 0);
          if (iVar2 == 0) goto LAB_001066ba;
          EVP_PKEY_free(local_1d0);
          iVar2 = test_print_key_using_pem(&_LC216,local_1b8);
          pEVar1 = local_1b8;
          if (((((iVar2 == 0) ||
                (iVar2 = test_print_key_type_using_encoder(&_LC216,0,local_1b8), iVar2 == 0)) ||
               (iVar2 = test_print_key_type_using_encoder(&_LC216,1,pEVar1), iVar2 == 0)) ||
              ((iVar2 = test_print_key_type_using_encoder(&_LC216,2,pEVar1), iVar2 == 0 ||
               (iVar2 = test_print_key_type_using_encoder(&_LC216,3,pEVar1), iVar2 == 0)))) ||
             ((iVar2 = test_print_key_type_using_encoder(&_LC216,4,pEVar1), iVar2 == 0 ||
              (iVar2 = test_print_key_type_using_encoder(&_LC216,5,pEVar1), iVar2 == 0)))) break;
          if (pEVar4 != (EVP_PKEY *)0x0) {
LAB_001066d5:
            uVar8 = 1;
            local_1d0 = (EVP_PKEY *)0x0;
            goto LAB_0010617f;
          }
          pEVar4 = (EVP_PKEY *)EVP_PKEY_dup(local_1b8);
          iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x1a7,"dup_pk = EVP_PKEY_dup(pk)",pEVar4)
          ;
          if (iVar2 == 0) goto LAB_001066d5;
          uVar3 = EVP_PKEY_eq(local_1b8,pEVar4);
          iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x1a9,"EVP_PKEY_eq(pk, dup_pk)",&_LC90
                              ,uVar3,1);
          if (iVar2 == 0) {
            EVP_PKEY_free(local_1b8);
            local_1b8 = pEVar4;
            break;
          }
          EVP_PKEY_free(local_1b8);
          local_1b8 = pEVar4;
        }
        local_1d0 = (EVP_PKEY *)0x0;
        uVar8 = 0;
        goto LAB_0010617f;
      }
    }
  }
  local_1d0 = (EVP_PKEY *)0x0;
  uVar8 = 0;
  local_1d8 = (EVP_PKEY_CTX *)0x0;
LAB_0010617f:
  if (local_1a8[0] != 0) {
    puVar9 = &key_numbers_0;
    do {
      iVar2 = BN_set_word(a,*puVar9);
      iVar2 = test_true("test/evp_pkey_provided_test.c",0x1b2,"BN_set_word(bn_from, key_numbers[i])"
                        ,iVar2 != 0);
      if (iVar2 == 0) {
LAB_001061a0:
        uVar8 = 0;
      }
      else {
        iVar2 = EVP_PKEY_get_bn_param(local_1b8,*plVar10,&local_1b0);
        iVar2 = test_true("test/evp_pkey_provided_test.c",0x1b3,
                          "EVP_PKEY_get_bn_param(pk, fromdata_params[i].key, &bn)",iVar2 != 0);
        if ((iVar2 == 0) ||
           (iVar2 = test_BN_eq("test/evp_pkey_provided_test.c",0x1b5,&_LC266,"bn_from",local_1b0,a),
           iVar2 == 0)) goto LAB_001061a0;
      }
      plVar7 = plVar10 + 5;
      puVar9 = puVar9 + 1;
      plVar10 = plVar10 + 5;
    } while (*plVar7 != 0);
  }
  BN_free(a);
  BN_free(local_1b0);
  EVP_PKEY_free(local_1b8);
  EVP_PKEY_free(local_1d0);
  EVP_PKEY_CTX_free(local_1d8);
  EVP_PKEY_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_fromdata_ecx(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *pEVar4;
  long lVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long in_FS_OFFSET;
  char *local_390;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  EVP_PKEY *local_368;
  EVP_PKEY *local_360;
  EVP_PKEY *local_358;
  undefined8 local_350;
  undefined *local_348 [4];
  undefined *local_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined *local_300;
  undefined *local_2c8;
  undefined4 uStack_2c0;
  undefined1 *local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined8 local_268;
  undefined1 auStack_260 [16];
  undefined *local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_290 = 0x107eb9;
  uStack_2b0 = ram0x0010b7f0;
  uStack_2a8 = _UNK_0010b7f8;
  local_288 = ram0x0010b7f0;
  uStack_280 = _UNK_0010b7f8;
  local_358 = (EVP_PKEY *)0x0;
  local_2c8 = &_LC86;
  uStack_2c0 = 5;
  ppuVar7 = local_348;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *ppuVar7 = (undefined *)0x0;
    ppuVar7 = ppuVar7 + 1;
  }
  local_298 = 5;
  local_2b8 = key_numbers_35;
  local_2a0 = &_LC85;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_248 = &_LC86;
  auStack_260 = (undefined1  [16])0x0;
  local_240 = 5;
  local_238 = 0x107ef2;
  local_220 = &_LC85;
  local_1a0 = &_LC85;
  local_120 = &_LC85;
  local_110 = 0x10800f;
  local_1b0 = ram0x0010b7f0;
  uStack_1a8 = _UNK_0010b7f8;
  uVar1 = param_1 & 3;
  local_188 = ram0x0010b7f0;
  uStack_180 = _UNK_0010b7f8;
  local_210 = 0x107f2b;
  local_218 = 5;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c8 = &_LC86;
  local_1c0 = 5;
  local_1b8 = 0x107f64;
  local_198 = 5;
  local_190 = 0x107f9d;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_148 = &_LC86;
  local_140 = 5;
  local_138 = 0x107fd6;
  local_118 = 5;
  local_230 = __LC272;
  uStack_228 = _UNK_0010b808;
  local_208 = __LC272;
  uStack_200 = _UNK_0010b808;
  local_1e0 = (undefined1  [16])0x0;
  local_160 = (undefined1  [16])0x0;
  local_130 = __LC273;
  uStack_128 = _UNK_0010b818;
  local_108 = __LC273;
  uStack_100 = _UNK_0010b818;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (uVar1 == 2) {
    local_37c = 0x40;
    ppuVar7 = &local_1c8;
    local_380 = 0x80;
    pcVar6 = "ED25519";
    local_384 = 0x100;
    local_390 = "ED25519";
  }
  else if (uVar1 == 3) {
    local_37c = 0x72;
    ppuVar7 = &local_148;
    local_380 = 0xe0;
    pcVar6 = "ED448";
    local_384 = 0x1c8;
    local_390 = "ED448";
  }
  else if (uVar1 == 1) {
    pcVar6 = "X448";
    local_37c = 0x38;
    ppuVar7 = &local_248;
    local_380 = 0xe0;
    local_384 = 0x1c0;
    local_390 = "X448";
  }
  else {
    local_37c = 0x20;
    ppuVar7 = &local_2c8;
    local_380 = 0x80;
    pcVar6 = "X25519";
    local_384 = 0xfd;
    local_390 = "X25519";
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,pcVar6,0);
  iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x5c7,&_LC89,ctx);
  if (iVar2 != 0) {
    ppuVar8 = ppuVar7 + 5;
    if (((int)param_1 < 8) && (ppuVar8 = ppuVar7, 3 < (int)param_1)) {
      local_328 = ppuVar7[4];
      local_348[0] = *ppuVar7;
      local_348[1] = ppuVar7[1];
      local_348[2] = ppuVar7[2];
      local_348[3] = ppuVar7[3];
      local_320 = ppuVar7[10];
      puStack_318 = ppuVar7[0xb];
      local_310 = ppuVar7[0xc];
      puStack_308 = ppuVar7[0xd];
      local_300 = ppuVar7[0xe];
      ppuVar8 = local_348;
    }
    uVar3 = EVP_PKEY_fromdata_init(ctx);
    iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5d5,"EVP_PKEY_fromdata_init(ctx)",&_LC90,
                        uVar3,1);
    if (iVar2 != 0) {
      uVar3 = EVP_PKEY_fromdata(ctx,&local_358,0x87,ppuVar8);
      iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5d6,
                          "EVP_PKEY_fromdata(ctx, &pk, EVP_PKEY_KEYPAIR, fromdata_params)",&_LC90,
                          uVar3,1);
      if (iVar2 != 0) {
        if ((int)param_1 < 8) {
          local_360 = (EVP_PKEY *)0x0;
          while( true ) {
            uVar3 = EVP_PKEY_get_bits(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5dc,"EVP_PKEY_get_bits(pk)",
                                &_LC274,uVar3,local_384);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_security_bits(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5dd,
                                "EVP_PKEY_get_security_bits(pk)","security_bits",uVar3,local_380);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_size(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5de,"EVP_PKEY_get_size(pk)",
                                &_LC276,uVar3,local_37c);
            if (iVar2 == 0) break;
            iVar2 = EVP_PKEY_missing_parameters(local_358);
            iVar2 = test_false("test/evp_pkey_provided_test.c",0x5df,
                               "EVP_PKEY_missing_parameters(pk)",iVar2 != 0);
            if (iVar2 == 0) break;
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_358,0);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x5e2,
                             "ctx2 = EVP_PKEY_CTX_new_from_pkey(NULL, pk, NULL)",ctx_00);
            if (iVar2 == 0) goto LAB_001073e0;
            uVar3 = EVP_PKEY_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x5e5,"EVP_PKEY_check(ctx2)",&_LC11,
                                uVar3,0);
            if (iVar2 == 0) goto LAB_001072e8;
            iVar2 = EVP_PKEY_get_octet_string_param(local_358,*ppuVar7,local_88,0x39,&local_350);
            iVar2 = test_true("test/evp_pkey_provided_test.c",0x5e7,
                              "EVP_PKEY_get_octet_string_param( pk, orig_fromdata_params[PRIV_KEY].key, out_priv, sizeof(out_priv), &len)"
                              ,iVar2 != 0);
            if ((iVar2 == 0) ||
               (iVar2 = test_mem_eq("test/evp_pkey_provided_test.c",0x5ea,"out_priv",
                                    "orig_fromdata_params[PRIV_KEY].data",local_88,local_350,
                                    ppuVar7[2],ppuVar7[3]), iVar2 == 0)) goto LAB_001072e8;
            iVar2 = EVP_PKEY_get_octet_string_param(local_358,ppuVar7[5],local_c8,0x39,&local_350);
            iVar2 = test_true("test/evp_pkey_provided_test.c",0x5ed,
                              "EVP_PKEY_get_octet_string_param( pk, orig_fromdata_params[PUB_KEY].key, out_pub, sizeof(out_pub), &len)"
                              ,iVar2 != 0);
            if ((iVar2 == 0) ||
               (iVar2 = test_mem_eq("test/evp_pkey_provided_test.c",0x5f0,"out_pub",
                                    "orig_fromdata_params[PUB_KEY].data",local_c8,local_350,
                                    ppuVar7[7],ppuVar7[8]), iVar2 == 0)) goto LAB_001072e8;
            EVP_PKEY_CTX_free(ctx_00);
            pEVar4 = EVP_PKEY_new();
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x5fe,"copy_pk = EVP_PKEY_new()",pEVar4
                            );
            if (iVar2 == 0) goto LAB_001073c0;
            iVar2 = EVP_PKEY_copy_parameters(pEVar4,local_358);
            iVar2 = test_true("test/evp_pkey_provided_test.c",0x600,
                              "EVP_PKEY_copy_parameters(copy_pk, pk)",iVar2 != 0);
            if (iVar2 == 0) goto LAB_001073c0;
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pEVar4,0);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x602,
                             "ctx2 = EVP_PKEY_CTX_new_from_pkey(NULL, copy_pk, NULL)",ctx_00);
            if (iVar2 == 0) goto LAB_001073d0;
            uVar3 = EVP_PKEY_public_check(ctx_00);
            iVar2 = test_int_le("test/evp_pkey_provided_test.c",0x604,"EVP_PKEY_public_check(ctx2)",
                                &_LC11,uVar3,0);
            if (iVar2 == 0) goto LAB_001073d0;
            EVP_PKEY_CTX_free(ctx_00);
            EVP_PKEY_free(pEVar4);
            iVar2 = test_print_key_using_pem(local_390,local_358);
            pEVar4 = local_358;
            if ((((iVar2 == 0) ||
                 (iVar2 = test_print_key_type_using_encoder(local_390,0,local_358), iVar2 == 0)) ||
                ((iVar2 = test_print_key_type_using_encoder(local_390,1,pEVar4), iVar2 == 0 ||
                 (((iVar2 = test_print_key_type_using_encoder(local_390,2,pEVar4), iVar2 == 0 ||
                   (iVar2 = test_print_key_type_using_encoder(local_390,3,pEVar4), iVar2 == 0)) ||
                  (iVar2 = test_print_key_type_using_encoder(local_390,4,pEVar4), iVar2 == 0))))))
               || (iVar2 = test_print_key_type_using_encoder(local_390,5,pEVar4), iVar2 == 0))
            goto LAB_001071b5;
            if (local_360 != (EVP_PKEY *)0x0) goto LAB_001073f4;
            local_368 = (EVP_PKEY *)EVP_PKEY_dup(local_358);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x614,"dup_pk = EVP_PKEY_dup(pk)",
                             local_368);
            if (iVar2 == 0) goto LAB_001073f4;
            uVar3 = EVP_PKEY_eq(local_358,local_368);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x616,"EVP_PKEY_eq(pk, dup_pk)",
                                &_LC90,uVar3,1);
            if (iVar2 == 0) goto LAB_001073a0;
            EVP_PKEY_free(local_358);
            local_360 = local_368;
            local_358 = local_368;
          }
        }
        else {
          local_368 = (EVP_PKEY *)0x0;
          while( true ) {
            uVar3 = EVP_PKEY_get_bits(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5dc,"EVP_PKEY_get_bits(pk)",
                                &_LC274,uVar3,local_384);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_security_bits(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5dd,
                                "EVP_PKEY_get_security_bits(pk)","security_bits",uVar3,local_380);
            if (iVar2 == 0) break;
            uVar3 = EVP_PKEY_get_size(local_358);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x5de,"EVP_PKEY_get_size(pk)",
                                &_LC276,uVar3,local_37c);
            if (iVar2 == 0) break;
            iVar2 = EVP_PKEY_missing_parameters(local_358);
            iVar2 = test_false("test/evp_pkey_provided_test.c",0x5df,
                               "EVP_PKEY_missing_parameters(pk)",iVar2 != 0);
            if (iVar2 == 0) break;
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,local_358,0);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x5e2,
                             "ctx2 = EVP_PKEY_CTX_new_from_pkey(NULL, pk, NULL)",ctx_00);
            if (iVar2 == 0) goto LAB_001073e0;
            uVar3 = EVP_PKEY_public_check(ctx_00);
            iVar2 = test_int_gt("test/evp_pkey_provided_test.c",0x5f6,"EVP_PKEY_public_check(ctx2)",
                                &_LC11,uVar3,0);
            if (iVar2 == 0) goto LAB_001072e8;
            uVar3 = EVP_PKEY_private_check(ctx_00);
            iVar2 = test_int_le("test/evp_pkey_provided_test.c",0x5f7,"EVP_PKEY_private_check(ctx2)"
                                ,&_LC11,uVar3,0);
            if (iVar2 == 0) goto LAB_001072e8;
            uVar3 = EVP_PKEY_check(ctx_00);
            iVar2 = test_int_le("test/evp_pkey_provided_test.c",0x5f8,"EVP_PKEY_check(ctx2)",&_LC11,
                                uVar3,0);
            if (iVar2 == 0) goto LAB_001072e8;
            EVP_PKEY_CTX_free(ctx_00);
            pEVar4 = EVP_PKEY_new();
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x5fe,"copy_pk = EVP_PKEY_new()",pEVar4
                            );
            if (iVar2 == 0) goto LAB_001073c0;
            iVar2 = EVP_PKEY_copy_parameters(pEVar4,local_358);
            iVar2 = test_true("test/evp_pkey_provided_test.c",0x600,
                              "EVP_PKEY_copy_parameters(copy_pk, pk)",iVar2 != 0);
            if (iVar2 == 0) goto LAB_001073c0;
            ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pEVar4,0);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x602,
                             "ctx2 = EVP_PKEY_CTX_new_from_pkey(NULL, copy_pk, NULL)",ctx_00);
            if (iVar2 == 0) goto LAB_001073d0;
            uVar3 = EVP_PKEY_public_check(ctx_00);
            iVar2 = test_int_le("test/evp_pkey_provided_test.c",0x604,"EVP_PKEY_public_check(ctx2)",
                                &_LC11,uVar3,0);
            if (iVar2 == 0) goto LAB_001073d0;
            EVP_PKEY_CTX_free(ctx_00);
            EVP_PKEY_free(pEVar4);
            pEVar4 = local_358;
            iVar2 = test_print_key_type_using_encoder(local_390,3,local_358);
            if (((iVar2 == 0) ||
                (iVar2 = test_print_key_type_using_encoder(local_390,4,pEVar4), iVar2 == 0)) ||
               (iVar2 = test_print_key_type_using_encoder(local_390,5,pEVar4), iVar2 == 0))
            goto LAB_001071b5;
            if (local_368 != (EVP_PKEY *)0x0) goto LAB_001073f4;
            local_368 = (EVP_PKEY *)EVP_PKEY_dup(local_358);
            iVar2 = test_ptr("test/evp_pkey_provided_test.c",0x614,"dup_pk = EVP_PKEY_dup(pk)",
                             local_368);
            if (iVar2 == 0) goto LAB_001073f4;
            uVar3 = EVP_PKEY_eq(local_358,local_368);
            iVar2 = test_int_eq("test/evp_pkey_provided_test.c",0x616,"EVP_PKEY_eq(pk, dup_pk)",
                                &_LC90,uVar3,1);
            if (iVar2 == 0) goto LAB_001073a0;
            EVP_PKEY_free(local_358);
            local_358 = local_368;
          }
        }
        pEVar4 = (EVP_PKEY *)0x0;
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        iVar2 = 0;
        goto LAB_001071bb;
      }
    }
  }
LAB_001071b5:
  pEVar4 = (EVP_PKEY *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_001071bb:
  EVP_PKEY_free(local_358);
  EVP_PKEY_free(pEVar4);
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_CTX_free(ctx_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
LAB_001073e0:
  pEVar4 = (EVP_PKEY *)0x0;
  iVar2 = 0;
  goto LAB_001071bb;
LAB_001072e8:
  pEVar4 = (EVP_PKEY *)0x0;
  goto LAB_001071bb;
LAB_001073c0:
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  iVar2 = 0;
  goto LAB_001071bb;
LAB_001073d0:
  iVar2 = 0;
  goto LAB_001071bb;
LAB_001073f4:
  pEVar4 = (EVP_PKEY *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  iVar2 = 1;
  goto LAB_001071bb;
LAB_001073a0:
  pEVar4 = (EVP_PKEY *)0x0;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
  EVP_PKEY_free(local_358);
  iVar2 = 0;
  local_358 = local_368;
  goto LAB_001071bb;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/evp_pkey_provided_test.c",0x88a,"Error parsing test options\n");
  }
  else {
    datadir = test_get_argument(0);
    iVar1 = test_ptr("test/evp_pkey_provided_test.c",0x88e,"datadir = test_get_argument(0)",datadir)
    ;
    if (iVar1 != 0) {
      add_test("test_evp_pkey_ctx_dup_kdf",test_evp_pkey_ctx_dup_kdf);
      add_test("test_evp_pkey_get_bn_param_large",test_evp_pkey_get_bn_param_large);
      add_test("test_fromdata_rsa",test_fromdata_rsa);
      add_test("test_fromdata_rsa_derive_from_pq_sp800",test_fromdata_rsa_derive_from_pq_sp800);
      add_test("test_fromdata_rsa_derive_from_pq_multiprime",
               test_fromdata_rsa_derive_from_pq_multiprime);
      add_test("test_fromdata_dh_fips186_4",test_fromdata_dh_fips186_4);
      add_test("test_fromdata_dh_named_group",test_fromdata_dh_named_group);
      add_test("test_check_dsa",test_check_dsa);
      add_test("test_fromdata_dsa_fips186_4",test_fromdata_dsa_fips186_4);
      add_all_tests("test_fromdata_ecx",test_fromdata_ecx,0xc,1);
      add_test("test_fromdata_ec",test_fromdata_ec);
      add_test("test_ec_dup_no_operation",test_ec_dup_no_operation);
      add_test("test_ec_dup_keygen_operation",test_ec_dup_keygen_operation);
      return 1;
    }
  }
  return 0;
}


