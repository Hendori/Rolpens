
undefined8 test_encrypt(void)

{
  called_encrypt = 1;
  return 1;
}



undefined8 test_pkey_meths(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    *param_3 = &rnid_2;
    return 1;
  }
  if (param_4 != 6) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = test_rsa;
  return 1;
}



uint test_x509_dup_w_engine(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  X509 *pXVar3;
  X509 *a;
  undefined8 uVar4;
  X509_PUBKEY *pXVar5;
  undefined8 uVar6;
  ENGINE *e;
  RSA_METHOD *pRVar7;
  ulong uVar8;
  X509 *a_00;
  X509 *local_50;
  
  filename = (char *)test_get_argument(0);
  bp = BIO_new_file(filename,"r");
  iVar1 = test_ptr("test/enginetest.c",0x16f,"b = BIO_new_file(test_get_argument(0), \"r\")");
  if (iVar1 == 0) {
    pXVar5 = (X509_PUBKEY *)0x0;
    pXVar3 = (X509 *)0x0;
    a_00 = (X509 *)0x0;
    goto LAB_001000b6;
  }
  pXVar3 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
  pXVar5 = (X509_PUBKEY *)0x0;
  iVar1 = test_ptr("test/enginetest.c",0x170,"cert = PEM_read_bio_X509(b, NULL, NULL, NULL)",pXVar3)
  ;
  if (iVar1 == 0) goto LAB_001001c8;
  pXVar5 = (X509_PUBKEY *)0x0;
  a = X509_dup(pXVar3);
  iVar1 = test_ptr("test/enginetest.c",0x174,"dupcert = X509_dup(cert)",a);
  a_00 = a;
  if (iVar1 != 0) {
    a_00 = (X509 *)0x0;
    X509_free(a);
    uVar4 = X509_get_X509_PUBKEY(pXVar3);
    iVar1 = test_ptr("test/enginetest.c",0x179,"pubkey = X509_get_X509_PUBKEY(cert)",uVar4);
    if (iVar1 != 0) {
      pXVar5 = (X509_PUBKEY *)X509_PUBKEY_dup(uVar4);
      iVar1 = test_ptr("test/enginetest.c",0x17a,"duppubkey = X509_PUBKEY_dup(pubkey)",pXVar5);
      if (iVar1 == 0) {
LAB_001001c8:
        a_00 = (X509 *)0x0;
      }
      else {
        a_00 = (X509 *)0x0;
        iVar1 = test_ptr_ne("test/enginetest.c",0x17b,"duppubkey","pubkey",pXVar5,uVar4);
        if (iVar1 != 0) {
          uVar4 = X509_PUBKEY_get0(uVar4);
          uVar6 = X509_PUBKEY_get0(pXVar5);
          iVar1 = test_ptr_ne("test/enginetest.c",0x17c,"X509_PUBKEY_get0(duppubkey)",
                              "X509_PUBKEY_get0(pubkey)",uVar6,uVar4);
          if (iVar1 == 0) goto LAB_001001c8;
          X509_PUBKEY_free(pXVar5);
          X509_free(pXVar3);
          e = ENGINE_new();
          iVar1 = test_ptr("test/enginetest.c",0x186,"e = ENGINE_new()",e);
          if (iVar1 == 0) {
LAB_00100344:
            pRVar7 = (RSA_METHOD *)0x0;
            uVar2 = 0;
            pXVar5 = (X509_PUBKEY *)0x0;
            pXVar3 = (X509 *)0x0;
            local_50 = (X509 *)0x0;
          }
          else {
            iVar1 = ENGINE_set_id(e,"Test dummy engine");
            iVar1 = test_true("test/enginetest.c",0x187,"ENGINE_set_id(e, \"Test dummy engine\")",
                              iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100344;
            iVar1 = ENGINE_set_name(e,"Test dummy engine");
            iVar1 = test_true("test/enginetest.c",0x188,"ENGINE_set_name(e, \"Test dummy engine\")",
                              iVar1 != 0);
            if (iVar1 == 0) goto LAB_00100344;
            pRVar7 = RSA_get_default_method();
            pRVar7 = (RSA_METHOD *)RSA_meth_dup(pRVar7);
            iVar1 = test_ptr("test/enginetest.c",0x18b,
                             "rsameth = RSA_meth_dup(RSA_get_default_method())");
            if (iVar1 == 0) {
LAB_001002fc:
              uVar2 = 0;
              pXVar5 = (X509_PUBKEY *)0x0;
              pXVar3 = (X509 *)0x0;
              local_50 = (X509 *)0x0;
            }
            else {
              ENGINE_set_RSA(e,pRVar7);
              ENGINE_set_default_RSA(e);
              iVar1 = test_true("test/enginetest.c",400,"ENGINE_set_default_RSA(e)");
              if (iVar1 == 0) {
                pXVar5 = (X509_PUBKEY *)0x0;
                pXVar3 = (X509 *)0x0;
                local_50 = (X509 *)0x0;
                uVar2 = 0;
              }
              else {
                uVar8 = BIO_ctrl(bp,0x80,0,(void *)0x0);
                iVar1 = test_int_ge("test/enginetest.c",0x193,"BIO_seek(b, 0)",&_LC17,
                                    uVar8 & 0xffffffff,0);
                if (iVar1 == 0) goto LAB_001002fc;
                pXVar3 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
                iVar1 = test_ptr("test/enginetest.c",0x194,
                                 "cert = PEM_read_bio_X509(b, NULL, NULL, NULL)",pXVar3);
                if (iVar1 == 0) {
                  pXVar5 = (X509_PUBKEY *)0x0;
                  local_50 = (X509 *)0x0;
                  uVar2 = 0;
                }
                else {
                  pXVar5 = (X509_PUBKEY *)0x0;
                  local_50 = X509_dup(pXVar3);
                  uVar2 = test_ptr("test/enginetest.c",0x198,"dupcert = X509_dup(cert)",local_50);
                  if (uVar2 != 0) {
                    uVar4 = X509_get_X509_PUBKEY(pXVar3);
                    uVar2 = test_ptr("test/enginetest.c",0x19b,"pubkey = X509_get_X509_PUBKEY(cert)"
                                     ,uVar4);
                    if (uVar2 != 0) {
                      pXVar5 = (X509_PUBKEY *)X509_PUBKEY_dup(uVar4);
                      uVar2 = test_ptr("test/enginetest.c",0x19c,
                                       "duppubkey = X509_PUBKEY_dup(pubkey)",pXVar5);
                      if (uVar2 != 0) {
                        uVar2 = test_ptr_ne("test/enginetest.c",0x19d,"duppubkey","pubkey",pXVar5,
                                            uVar4);
                        if (uVar2 != 0) {
                          uVar4 = X509_PUBKEY_get0(uVar4);
                          uVar6 = X509_PUBKEY_get0(pXVar5);
                          iVar1 = test_ptr_ne("test/enginetest.c",0x19e,
                                              "X509_PUBKEY_get0(duppubkey)",
                                              "X509_PUBKEY_get0(pubkey)",uVar6,uVar4);
                          uVar2 = (uint)(iVar1 != 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          X509_free(pXVar3);
          X509_free(local_50);
          X509_PUBKEY_free(pXVar5);
          if (e != (ENGINE *)0x0) {
            ENGINE_unregister_RSA(e);
            ENGINE_free(e);
          }
          goto LAB_001000d4;
        }
      }
    }
  }
LAB_001000b6:
  X509_free(pXVar3);
  pRVar7 = (RSA_METHOD *)0x0;
  X509_free(a_00);
  uVar2 = 0;
  X509_PUBKEY_free(pXVar5);
LAB_001000d4:
  RSA_meth_free(pRVar7);
  BIO_free(bp);
  return uVar2;
}



uint test_redirect(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  RSA *r;
  EVP_PKEY *pkey;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  uchar *out;
  EVP_PKEY_CTX *ctx;
  ENGINE *e;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  size_t local_58;
  uchar local_4d [13];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_4d,"Hello World\n",0xd);
  r = RSA_new();
  pkey = EVP_PKEY_new();
  if ((r == (RSA *)0x0) || (pkey == (EVP_PKEY *)0x0)) {
LAB_00100700:
    RSA_free(r);
    pkey_00 = (EVP_PKEY *)0x0;
    EVP_PKEY_free(pkey);
  }
  else {
    iVar1 = EVP_PKEY_assign(pkey,6,r);
    if (iVar1 == 0) goto LAB_00100700;
    pBVar4 = BN_bin2bn((uchar *)&e_1,1,(BIGNUM *)0x0);
    pBVar5 = BN_bin2bn(n_0,0x41,(BIGNUM *)0x0);
    iVar1 = RSA_set0_key(r,pBVar5,pBVar4,0);
    pkey_00 = pkey;
    if (iVar1 == 0) {
      pkey_00 = (EVP_PKEY *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  iVar1 = test_ptr("test/enginetest.c",0x106,"pkey = get_test_pkey()",pkey_00);
  if (iVar1 == 0) {
    e = (ENGINE *)0x0;
    ctx = (EVP_PKEY_CTX *)0x0;
    out = (uchar *)0x0;
    uVar2 = 0;
  }
  else {
    iVar1 = EVP_PKEY_get_size(pkey_00);
    local_58 = (size_t)iVar1;
    out = (uchar *)CRYPTO_malloc(iVar1,"test/enginetest.c",0x10a);
    iVar1 = test_ptr("test/enginetest.c",0x10a,"tmp = OPENSSL_malloc(len)",out);
    if (iVar1 == 0) {
      e = (ENGINE *)0x0;
      ctx = (EVP_PKEY_CTX *)0x0;
      uVar2 = 0;
    }
    else {
      ctx = EVP_PKEY_CTX_new(pkey_00,(ENGINE *)0x0);
      iVar1 = test_ptr("test/enginetest.c",0x10d,"ctx = EVP_PKEY_CTX_new(pkey, NULL)",ctx);
      if (iVar1 != 0) {
        e = (ENGINE *)0x0;
        test_info("test/enginetest.c",0x10f,"EVP_PKEY_encrypt test: no redirection");
        iVar1 = EVP_PKEY_encrypt_init(ctx);
        uVar2 = test_int_gt("test/enginetest.c",0x111,"EVP_PKEY_encrypt_init(ctx)",&_LC17,iVar1,0);
        if (uVar2 == 0) goto LAB_00100637;
        iVar1 = EVP_PKEY_encrypt(ctx,out,&local_58,local_4d,0xd);
        uVar2 = test_int_gt("test/enginetest.c",0x112,
                            "EVP_PKEY_encrypt(ctx, tmp, &len, pt, sizeof(pt))",&_LC17,iVar1,0);
        if (uVar2 == 0) goto LAB_00100637;
        iVar1 = test_false("test/enginetest.c",0x113,"called_encrypt",called_encrypt != 0);
        if (iVar1 != 0) {
          EVP_PKEY_CTX_free(ctx);
          e = ENGINE_new();
          iVar1 = test_ptr("test/enginetest.c",0x119,"e = ENGINE_new()",e);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_id(e,"Test redirect engine");
            ctx = (EVP_PKEY_CTX *)0x0;
            uVar2 = test_true("test/enginetest.c",0x11a,"ENGINE_set_id(e, \"Test redirect engine\")"
                              ,iVar1 != 0);
            if (uVar2 == 0) goto LAB_00100637;
            iVar1 = ENGINE_set_name(e,"Test redirect engine");
            iVar1 = test_true("test/enginetest.c",0x11b,
                              "ENGINE_set_name(e, \"Test redirect engine\")",iVar1 != 0);
            if (iVar1 != 0) {
              ctx = EVP_PKEY_CTX_new(pkey_00,e);
              iVar1 = test_ptr_null("test/enginetest.c",0x123,"ctx = EVP_PKEY_CTX_new(pkey, e)",ctx)
              ;
              if (iVar1 != 0) {
                uVar3 = EVP_PKEY_set1_engine(pkey_00,e);
                iVar1 = test_int_le("test/enginetest.c",0x124,"EVP_PKEY_set1_engine(pkey, e)",&_LC17
                                    ,uVar3,0);
                if (iVar1 != 0) {
                  test_rsa = EVP_PKEY_meth_new(6,0);
                  uVar2 = test_ptr("test/enginetest.c",0x128,
                                   "test_rsa = EVP_PKEY_meth_new(EVP_PKEY_RSA, 0)",test_rsa);
                  if (uVar2 == 0) goto LAB_00100637;
                  ENGINE_set_pkey_meths(e,test_pkey_meths);
                  ctx = EVP_PKEY_CTX_new(pkey_00,e);
                  uVar2 = test_ptr("test/enginetest.c",0x12d,"ctx = EVP_PKEY_CTX_new(pkey, e)",ctx);
                  if (uVar2 == 0) goto LAB_00100637;
                  iVar1 = EVP_PKEY_encrypt_init(ctx);
                  uVar2 = test_int_le("test/enginetest.c",0x130,"EVP_PKEY_encrypt_init(ctx)",&_LC17,
                                      iVar1,0);
                  if (uVar2 == 0) goto LAB_00100637;
                  EVP_PKEY_CTX_free(ctx);
                  EVP_PKEY_meth_set_encrypt(test_rsa,(encrypt_init *)0x0,test_encrypt);
                  test_info("test/enginetest.c",0x138,
                            "EVP_PKEY_encrypt test: redirection via EVP_PKEY_CTX_new()");
                  ctx = EVP_PKEY_CTX_new(pkey_00,e);
                  iVar1 = test_ptr("test/enginetest.c",0x139,"ctx = EVP_PKEY_CTX_new(pkey, e)",ctx);
                  if (iVar1 != 0) {
                    iVar1 = EVP_PKEY_encrypt_init(ctx);
                    iVar1 = test_int_gt("test/enginetest.c",0x13c,"EVP_PKEY_encrypt_init(ctx)",
                                        &_LC17,iVar1,0);
                    if (iVar1 != 0) {
                      iVar1 = EVP_PKEY_encrypt(ctx,out,&local_58,local_4d,0xd);
                      uVar2 = test_int_gt("test/enginetest.c",0x13d,
                                          "EVP_PKEY_encrypt(ctx, tmp, &len, pt, sizeof(pt))",&_LC17,
                                          iVar1,0);
                      if (uVar2 == 0) goto LAB_00100637;
                      iVar1 = test_true("test/enginetest.c",0x13e,"called_encrypt",
                                        called_encrypt != 0);
                      if (iVar1 != 0) {
                        EVP_PKEY_CTX_free(ctx);
                        called_encrypt = 0;
                        ctx = EVP_PKEY_CTX_new(pkey_00,(ENGINE *)0x0);
                        iVar1 = test_ptr("test/enginetest.c",0x146,
                                         "ctx = EVP_PKEY_CTX_new(pkey, NULL)",ctx);
                        if (iVar1 != 0) {
                          iVar1 = EVP_PKEY_encrypt_init(ctx);
                          uVar2 = test_int_gt("test/enginetest.c",0x147,"EVP_PKEY_encrypt_init(ctx)"
                                              ,&_LC17,iVar1,0);
                          if (uVar2 == 0) goto LAB_00100637;
                          iVar1 = EVP_PKEY_encrypt(ctx,out,&local_58,local_4d,0xd);
                          iVar1 = test_int_gt("test/enginetest.c",0x148,
                                              "EVP_PKEY_encrypt(ctx, tmp, &len, pt, sizeof(pt))",
                                              &_LC17,iVar1,0);
                          if (iVar1 != 0) {
                            iVar1 = test_false("test/enginetest.c",0x149,"called_encrypt",
                                               called_encrypt != 0);
                            if (iVar1 != 0) {
                              EVP_PKEY_CTX_free(ctx);
                              iVar1 = EVP_PKEY_set1_engine(pkey_00,e);
                              ctx = (EVP_PKEY_CTX *)0x0;
                              uVar2 = test_true("test/enginetest.c",0x150,
                                                "EVP_PKEY_set1_engine(pkey, e)",iVar1 != 0);
                              if (uVar2 != 0) {
                                test_info("test/enginetest.c",0x153,
                                          "EVP_PKEY_encrypt test: redirection via EVP_PKEY_set1_engine()"
                                         );
                                ctx = EVP_PKEY_CTX_new(pkey_00,(ENGINE *)0x0);
                                uVar2 = test_ptr("test/enginetest.c",0x156,
                                                 "ctx = EVP_PKEY_CTX_new(pkey, NULL)",ctx);
                                if (uVar2 != 0) {
                                  iVar1 = EVP_PKEY_encrypt_init(ctx);
                                  uVar2 = test_int_gt("test/enginetest.c",0x157,
                                                      "EVP_PKEY_encrypt_init(ctx)",&_LC17,iVar1,0);
                                  if (uVar2 != 0) {
                                    iVar1 = EVP_PKEY_encrypt(ctx,out,&local_58,local_4d,0xd);
                                    uVar2 = test_int_gt("test/enginetest.c",0x158,
                                                                                                                
                                                  "EVP_PKEY_encrypt(ctx, tmp, &len, pt, sizeof(pt))"
                                                  ,&_LC17,iVar1,0);
                                    if (uVar2 != 0) {
                                      iVar1 = test_true("test/enginetest.c",0x159,"called_encrypt",
                                                        called_encrypt != 0);
                                      uVar2 = (uint)(iVar1 != 0);
                                    }
                                  }
                                }
                              }
                              goto LAB_00100637;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar2 = 0;
              goto LAB_00100637;
            }
          }
          uVar2 = 0;
          ctx = (EVP_PKEY_CTX *)0x0;
          goto LAB_00100637;
        }
      }
      uVar2 = 0;
      e = (ENGINE *)0x0;
    }
  }
LAB_00100637:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey_00);
  ENGINE_free(e);
  CRYPTO_free(out);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void display_engine_list(void)

{
  ENGINE *e;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  e = ENGINE_get_first();
  if (e != (ENGINE *)0x0) {
    iVar3 = 0;
    do {
      pcVar1 = ENGINE_get_name(e);
      pcVar2 = ENGINE_get_id(e);
      test_info("test/enginetest.c",0x24,"#%d: id = \"%s\", name = \"%s\"",iVar3,pcVar2,pcVar1);
      iVar3 = iVar3 + 1;
      e = ENGINE_get_next(e);
    } while (e != (ENGINE *)0x0);
  }
  ENGINE_free((ENGINE *)0x0);
  return;
}



undefined4 test_engines(void)

{
  int iVar1;
  ENGINE *pEVar2;
  ENGINE *pEVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ENGINE *local_3180;
  ENGINE *local_3178;
  ENGINE *local_3170;
  undefined8 local_3148 [512];
  undefined8 local_2148 [512];
  undefined8 local_1148 [512];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = local_3148;
  puVar8 = puVar7;
  for (lVar6 = 0x200; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pEVar2 = ENGINE_new();
  iVar1 = test_ptr("test/enginetest.c",0x40,"new_h1 = ENGINE_new()",pEVar2);
  if (iVar1 == 0) {
LAB_00100dda:
    local_3180 = (ENGINE *)0x0;
    local_3178 = (ENGINE *)0x0;
    local_3170 = (ENGINE *)0x0;
  }
  else {
    iVar1 = ENGINE_set_id(pEVar2,"test_id0");
    iVar1 = test_true("test/enginetest.c",0x41,"ENGINE_set_id(new_h1, \"test_id0\")",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100dda;
    iVar1 = ENGINE_set_name(pEVar2,"First test item");
    iVar1 = test_true("test/enginetest.c",0x42,"ENGINE_set_name(new_h1, \"First test item\")",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100dda;
    local_3170 = ENGINE_new();
    iVar1 = test_ptr("test/enginetest.c",0x43,"new_h2 = ENGINE_new()",local_3170);
    if (iVar1 == 0) {
LAB_00100ef6:
      local_3180 = (ENGINE *)0x0;
      uVar9 = 0;
      local_3178 = (ENGINE *)0x0;
      goto LAB_00100e00;
    }
    iVar1 = ENGINE_set_id(local_3170,"test_id1");
    iVar1 = test_true("test/enginetest.c",0x44,"ENGINE_set_id(new_h2, \"test_id1\")",iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100ef6;
    iVar1 = ENGINE_set_name(local_3170,"Second test item");
    iVar1 = test_true("test/enginetest.c",0x45,"ENGINE_set_name(new_h2, \"Second test item\")",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100ef6;
    local_3178 = ENGINE_new();
    iVar1 = test_ptr("test/enginetest.c",0x46,"new_h3 = ENGINE_new()",local_3178);
    if (iVar1 == 0) {
LAB_00100fa2:
      local_3180 = (ENGINE *)0x0;
      uVar9 = 0;
      goto LAB_00100e00;
    }
    iVar1 = ENGINE_set_id(local_3178,"test_id2");
    iVar1 = test_true("test/enginetest.c",0x47,"ENGINE_set_id(new_h3, \"test_id2\")",iVar1 != 0);
    if (iVar1 == 0) {
      local_3180 = (ENGINE *)0x0;
      uVar9 = 0;
      goto LAB_00100e00;
    }
    iVar1 = ENGINE_set_name(local_3178,"Third test item");
    iVar1 = test_true("test/enginetest.c",0x48,"ENGINE_set_name(new_h3, \"Third test item\")",
                      iVar1 != 0);
    if (iVar1 == 0) goto LAB_00100fa2;
    local_3180 = ENGINE_new();
    iVar1 = test_ptr("test/enginetest.c",0x49,"new_h4 = ENGINE_new()",local_3180);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_id(local_3180,"test_id3");
      iVar1 = test_true("test/enginetest.c",0x4a,"ENGINE_set_id(new_h4, \"test_id3\")",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_name(local_3180,"Fourth test item");
        iVar1 = test_true("test/enginetest.c",0x4b,"ENGINE_set_name(new_h4, \"Fourth test item\")",
                          iVar1 != 0);
        if (iVar1 == 0) goto LAB_00100df5;
        test_info("test/enginetest.c",0x4d,"Engines:");
        display_engine_list();
        iVar1 = ENGINE_add(pEVar2);
        iVar1 = test_true("test/enginetest.c",0x50,"ENGINE_add(new_h1)",iVar1 != 0);
        if (iVar1 != 0) {
          test_info("test/enginetest.c",0x52,"Engines:");
          display_engine_list();
          pEVar3 = ENGINE_get_first();
          iVar1 = ENGINE_remove(pEVar3);
          iVar1 = test_true("test/enginetest.c",0x56,"ENGINE_remove(ptr)",iVar1 != 0);
          if (iVar1 != 0) {
            ENGINE_free(pEVar3);
            test_info("test/enginetest.c",0x59,"Engines:");
            display_engine_list();
            iVar1 = ENGINE_add(local_3178);
            iVar1 = test_true("test/enginetest.c",0x5c,"ENGINE_add(new_h3)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = ENGINE_add(local_3170);
              iVar1 = test_true("test/enginetest.c",0x5d,"ENGINE_add(new_h2)",iVar1 != 0);
              if (iVar1 != 0) {
                test_info("test/enginetest.c",0x5f,"Engines:");
                display_engine_list();
                iVar1 = ENGINE_remove(local_3170);
                iVar1 = test_true("test/enginetest.c",0x62,"ENGINE_remove(new_h2)",iVar1 != 0);
                if (iVar1 != 0) {
                  test_info("test/enginetest.c",100,"Engines:");
                  display_engine_list();
                  iVar1 = ENGINE_add(local_3180);
                  iVar1 = test_true("test/enginetest.c",0x67,"ENGINE_add(new_h4)",iVar1 != 0);
                  if (iVar1 != 0) {
                    test_info("test/enginetest.c",0x69,"Engines:");
                    display_engine_list();
                    iVar1 = ENGINE_add(local_3178);
                    iVar1 = test_false("test/enginetest.c",0x6d,"ENGINE_add(new_h3)",iVar1 != 0);
                    if (iVar1 != 0) {
                      ERR_clear_error();
                      iVar1 = ENGINE_remove(local_3170);
                      iVar1 = test_false("test/enginetest.c",0x72,"ENGINE_remove(new_h2)",iVar1 != 0
                                        );
                      if (iVar1 != 0) {
                        ERR_clear_error();
                        iVar1 = ENGINE_remove(local_3178);
                        iVar1 = test_true("test/enginetest.c",0x76,"ENGINE_remove(new_h3)",
                                          iVar1 != 0);
                        if (iVar1 != 0) {
                          test_info("test/enginetest.c",0x78,"Engines:");
                          display_engine_list();
                          iVar1 = ENGINE_remove(local_3180);
                          iVar1 = test_true("test/enginetest.c",0x7b,"ENGINE_remove(new_h4)",
                                            iVar1 != 0);
                          if (iVar1 != 0) {
                            test_info("test/enginetest.c",0x7d,"Engines:");
                            display_engine_list();
                            pEVar3 = ENGINE_get_first();
                            if ((pEVar3 != (ENGINE *)0x0) &&
                               (iVar1 = ENGINE_remove(pEVar3), iVar1 == 0)) {
                              test_info("test/enginetest.c",0x8a,
                                        "Remove failed - probably no hardware support present");
                            }
                            ENGINE_free(pEVar3);
                            test_info("test/enginetest.c",0x8d,"Engines:");
                            display_engine_list();
                            iVar1 = ENGINE_add(pEVar2);
                            iVar1 = test_true("test/enginetest.c",0x90,"ENGINE_add(new_h1)",
                                              iVar1 != 0);
                            if (iVar1 != 0) {
                              iVar1 = ENGINE_remove(pEVar2);
                              iVar1 = test_true("test/enginetest.c",0x91,"ENGINE_remove(new_h1)",
                                                iVar1 != 0);
                              if (iVar1 != 0) {
                                uVar10 = 0;
                                test_info("test/enginetest.c",0x94,
                                          "About to beef up the engine-type list");
                                do {
                                  BIO_snprintf(local_148,0x100,"id%d",uVar10 & 0xffffffff);
                                  pcVar4 = CRYPTO_strdup(local_148,"test/enginetest.c",0x97);
                                  local_2148[uVar10] = pcVar4;
                                  BIO_snprintf(local_148,0x100,"Fake engine type %d",
                                               uVar10 & 0xffffffff);
                                  pcVar5 = CRYPTO_strdup(local_148,"test/enginetest.c",0x99);
                                  local_1148[uVar10] = pcVar5;
                                  pEVar3 = ENGINE_new();
                                  puVar7[uVar10] = pEVar3;
                                  iVar1 = test_ptr("test/enginetest.c",0x9a,
                                                   "block[loop] = ENGINE_new()",pEVar3);
                                  if (iVar1 == 0) goto LAB_0010153e;
                                  iVar1 = ENGINE_set_id(pEVar3,pcVar4);
                                  iVar1 = test_true("test/enginetest.c",0x9b,
                                                    "ENGINE_set_id(block[loop], eid[loop])",
                                                    iVar1 != 0);
                                  if (iVar1 == 0) goto LAB_0010153e;
                                  iVar1 = ENGINE_set_name(pEVar3,pcVar5);
                                  iVar1 = test_true("test/enginetest.c",0x9c,
                                                    "ENGINE_set_name(block[loop], ename[loop])",
                                                    iVar1 != 0);
                                  if (iVar1 == 0) goto LAB_0010153e;
                                  uVar10 = uVar10 + 1;
                                } while (uVar10 != 0x200);
                                uVar10 = 0;
                                do {
                                  pEVar3 = (ENGINE *)puVar7[uVar10];
                                  iVar1 = ENGINE_add(pEVar3);
                                  iVar1 = test_true("test/enginetest.c",0xa0,
                                                    "ENGINE_add(block[loop])",iVar1 != 0);
                                  if (iVar1 == 0) {
                                    pcVar4 = ENGINE_get_name(pEVar3);
                                    pcVar5 = ENGINE_get_id(pEVar3);
                                    test_note("Adding stopped at %d, (%s,%s)",uVar10 & 0xffffffff,
                                              pcVar5,pcVar4);
                                    break;
                                  }
                                  uVar10 = uVar10 + 1;
                                } while (uVar10 != 0x200);
                                test_info("test/enginetest.c",0xa8,
                                          "About to empty the engine-type list");
                                while (pEVar3 = ENGINE_get_first(), pEVar3 != (ENGINE *)0x0) {
                                  iVar1 = ENGINE_remove(pEVar3);
                                  iVar1 = test_true("test/enginetest.c",0xaa,"ENGINE_remove(ptr)",
                                                    iVar1 != 0);
                                  if (iVar1 == 0) goto LAB_0010153e;
                                  ENGINE_free(pEVar3);
                                }
                                lVar6 = 0;
                                do {
                                  CRYPTO_free(*(void **)((long)local_2148 + lVar6));
                                  puVar8 = (undefined8 *)((long)local_1148 + lVar6);
                                  lVar6 = lVar6 + 8;
                                  CRYPTO_free((void *)*puVar8);
                                } while (lVar6 != 0x1000);
                                uVar9 = 1;
                                goto LAB_00100e00;
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
LAB_0010153e:
      uVar9 = 0;
      goto LAB_00100e00;
    }
  }
LAB_00100df5:
  uVar9 = 0;
LAB_00100e00:
  ENGINE_free(pEVar2);
  ENGINE_free(local_3170);
  ENGINE_free(local_3178);
  ENGINE_free(local_3180);
  do {
    pEVar2 = (ENGINE *)*puVar7;
    puVar7 = puVar7 + 1;
    ENGINE_free(pEVar2);
  } while (puVar7 != local_2148);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void global_init(void)

{
  OPENSSL_init_crypto(0x80,0);
  return;
}



undefined1 * test_get_options(void)

{
  return options_3;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/enginetest.c",0x1c4,"Error parsing test options\n");
  }
  else {
    iVar1 = test_get_argument_count();
    if (iVar1 != 0) {
      add_test("test_engines",test_engines);
      add_test("test_redirect",test_redirect);
      add_test("test_x509_dup_w_engine",test_x509_dup_w_engine);
      return 1;
    }
  }
  return 0;
}


