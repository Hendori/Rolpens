
ECDSA_SIG * sm2_sig_gen(EC_KEY *param_1,BIGNUM *param_2)

{
  int iVar1;
  BIGNUM *a;
  EC_GROUP *group;
  BIGNUM *m;
  undefined8 uVar2;
  EC_POINT *r;
  BN_CTX *ctx;
  BIGNUM *n;
  BIGNUM *r_00;
  BIGNUM *b;
  BIGNUM *r_01;
  BIGNUM *r_02;
  BIGNUM *b_00;
  ECDSA_SIG *pEVar3;
  BIGNUM *local_60;
  
  a = EC_KEY_get0_private_key(param_1);
  group = EC_KEY_get0_group(param_1);
  m = (BIGNUM *)EC_GROUP_get0_order(group);
  uVar2 = ossl_ec_key_get_libctx(param_1);
  r = EC_POINT_new(group);
  if (r == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0xe1,"sm2_sig_gen");
    ERR_set_error(0x35,0x80010,0);
LAB_001002e0:
    local_60 = (BIGNUM *)0x0;
    r_02 = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
  }
  else {
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_sign.c",0xe6,"sm2_sig_gen");
      ERR_set_error(0x35,0x80003,0);
      goto LAB_001002e0;
    }
    BN_CTX_start(ctx);
    n = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    b = BN_CTX_get(ctx);
    r_01 = BN_CTX_get(ctx);
    if (r_01 == (BIGNUM *)0x0) {
      ERR_new();
      r_02 = (BIGNUM *)0x0;
      ERR_set_debug("crypto/sm2/sm2_sign.c",0xf0,"sm2_sig_gen");
      ERR_set_error(0x35,0x80003,0);
      local_60 = (BIGNUM *)0x0;
    }
    else {
      r_02 = BN_new();
      local_60 = BN_new();
      if ((r_02 == (BIGNUM *)0x0) || (local_60 == (BIGNUM *)0x0)) {
        ERR_new();
        uVar2 = 0xfc;
LAB_00100339:
        ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
        ERR_set_error(0x35,0x80003,0);
      }
      else {
        do {
          do {
            do {
              iVar1 = BN_priv_rand_range_ex(n,m,0);
              if (iVar1 == 0) {
                ERR_new();
                uVar2 = 0x10b;
LAB_00100279:
                ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
                ERR_set_error(0x35,0xc0103,0);
                goto LAB_00100298;
              }
              iVar1 = EC_POINT_mul(group,r,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
              if (iVar1 == 0) {
LAB_00100268:
                ERR_new();
                uVar2 = 0x113;
                goto LAB_00100279;
              }
              iVar1 = EC_POINT_get_affine_coordinates(group,r,b,0,ctx);
              if (iVar1 == 0) goto LAB_00100268;
              iVar1 = BN_mod_add(r_02,param_2,b,m,ctx);
              if (iVar1 == 0) goto LAB_00100268;
              iVar1 = BN_is_zero(r_02);
            } while (iVar1 != 0);
            iVar1 = BN_add(r_00,r_02,n);
            if (iVar1 == 0) {
              ERR_new();
              uVar2 = 0x11c;
              goto LAB_00100279;
            }
            iVar1 = BN_cmp(r_00,m);
          } while (iVar1 == 0);
          b_00 = BN_value_one();
          iVar1 = BN_add(local_60,a,b_00);
          if (iVar1 == 0) {
LAB_00100360:
            ERR_new();
            uVar2 = 0x128;
            goto LAB_00100339;
          }
          iVar1 = ossl_ec_group_do_inverse_ord(group,local_60,local_60,ctx);
          if (iVar1 == 0) goto LAB_00100360;
          iVar1 = BN_mod_mul(r_01,a,r_02,m,ctx);
          if (iVar1 == 0) goto LAB_00100360;
          iVar1 = BN_sub(r_01,n,r_01);
          if (iVar1 == 0) goto LAB_00100360;
          iVar1 = BN_mod_mul(local_60,local_60,r_01,m,ctx);
          if (iVar1 == 0) goto LAB_00100360;
          iVar1 = BN_is_zero(local_60);
        } while (iVar1 != 0);
        pEVar3 = ECDSA_SIG_new();
        if (pEVar3 != (ECDSA_SIG *)0x0) {
          ECDSA_SIG_set0(pEVar3,r_02,local_60);
          goto LAB_00100241;
        }
        ERR_new();
        ERR_set_debug("crypto/sm2/sm2_sign.c",0x132,"sm2_sig_gen");
        ERR_set_error(0x35,0x8002a,0);
      }
    }
  }
LAB_00100298:
  pEVar3 = (ECDSA_SIG *)0x0;
  BN_free(r_02);
  BN_free(local_60);
LAB_00100241:
  BN_CTX_free(ctx);
  EC_POINT_free(r);
  return pEVar3;
}



bool sm2_sig_verify(EC_KEY *param_1,undefined8 param_2,BIGNUM *param_3)

{
  int iVar1;
  EC_GROUP *group;
  BIGNUM *a;
  undefined8 uVar2;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  EC_POINT *r_00;
  BIGNUM *pBVar3;
  EC_POINT *q;
  long in_FS_OFFSET;
  bool bVar4;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  group = EC_KEY_get0_group(param_1);
  a = (BIGNUM *)EC_GROUP_get0_order(group);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  uVar2 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
  if (ctx == (BN_CTX *)0x0) {
    ERR_new();
    uVar2 = 0x156;
LAB_00100691:
    r_00 = (EC_POINT *)0x0;
    ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
    ERR_set_error(0x35,0x80003,0);
  }
  else {
    BN_CTX_start(ctx);
    r = BN_CTX_get(ctx);
    b = BN_CTX_get(ctx);
    if (b == (BIGNUM *)0x0) {
      ERR_new();
      uVar2 = 0x15d;
      goto LAB_00100691;
    }
    r_00 = EC_POINT_new(group);
    if (r_00 == (EC_POINT *)0x0) {
      ERR_new();
      bVar4 = false;
      ERR_set_debug("crypto/sm2/sm2_sign.c",0x163,"sm2_sig_verify");
      ERR_set_error(0x35,0x80010,0);
      goto LAB_0010063a;
    }
    ECDSA_SIG_get0(param_2,&local_50,&local_48);
    pBVar3 = BN_value_one();
    iVar1 = BN_cmp(local_50,pBVar3);
    if (iVar1 < 0) {
LAB_00100608:
      ERR_new();
      uVar2 = 0x177;
LAB_00100619:
      ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
      ERR_set_error(0x35,0x65,0);
    }
    else {
      pBVar3 = BN_value_one();
      iVar1 = BN_cmp(local_48,pBVar3);
      if (iVar1 < 0) goto LAB_00100608;
      iVar1 = BN_cmp(a,local_50);
      if (iVar1 < 1) goto LAB_00100608;
      iVar1 = BN_cmp(a,local_48);
      if (iVar1 < 1) goto LAB_00100608;
      iVar1 = BN_mod_add(r,local_50,local_48,a,ctx);
      if (iVar1 != 0) {
        iVar1 = BN_is_zero(r);
        if (iVar1 == 0) {
          q = EC_KEY_get0_public_key(param_1);
          iVar1 = EC_POINT_mul(group,r_00,local_48,q,r,ctx);
          if (iVar1 != 0) {
            iVar1 = EC_POINT_get_affine_coordinates(group,r_00,b,0,ctx);
            if (iVar1 != 0) {
              iVar1 = BN_mod_add(r,param_3,b,a,ctx);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(local_50,r);
                bVar4 = iVar1 == 0;
                goto LAB_0010063a;
              }
              ERR_new();
              uVar2 = 0x18c;
              goto LAB_00100741;
            }
          }
          ERR_new();
          ERR_set_debug("crypto/sm2/sm2_sign.c",0x187,"sm2_sig_verify");
          ERR_set_error(0x35,0x80010,0);
          goto LAB_00100638;
        }
        ERR_new();
        uVar2 = 0x181;
        goto LAB_00100619;
      }
      ERR_new();
      uVar2 = 0x17c;
LAB_00100741:
      ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
      ERR_set_error(0x35,0x80003,0);
    }
  }
LAB_00100638:
  bVar4 = false;
LAB_0010063a:
  BN_CTX_end(ctx);
  EC_POINT_free(r_00);
  BN_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ossl_sm2_compute_z_digest
          (uchar *param_1,EVP_MD *param_2,void *param_3,ulong param_4,EC_KEY *param_5)

{
  int iVar1;
  EC_GROUP *group;
  EC_POINT *pEVar2;
  EVP_MD_CTX *ctx;
  undefined8 uVar3;
  BN_CTX *ctx_00;
  BIGNUM *a;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  size_t cnt;
  void *d;
  EC_POINT *pEVar10;
  int iVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  group = EC_KEY_get0_group(param_5);
  pEVar2 = EC_KEY_get0_public_key(param_5);
  local_41 = 0;
  if (pEVar2 == (EC_POINT *)0x0) {
    ctx = (EVP_MD_CTX *)0x0;
    ctx_00 = (BN_CTX *)0x0;
    uVar12 = 0;
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0x30,"ossl_sm2_compute_z_digest");
    ERR_set_error(0x35,0xc0102,0);
    d = (void *)0x0;
    goto LAB_00100a38;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    d = (void *)0x0;
    ctx_00 = (BN_CTX *)0x0;
    uVar12 = 0;
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0x36,"ossl_sm2_compute_z_digest");
    ERR_set_error(0x35,0x80006,0);
    goto LAB_00100a38;
  }
  uVar3 = ossl_ec_key_get_libctx(param_5);
  ctx_00 = (BN_CTX *)BN_CTX_new_ex(uVar3);
  if (ctx_00 == (BN_CTX *)0x0) {
    ERR_new();
    uVar3 = 0x3b;
LAB_00100a11:
    ERR_set_debug("crypto/sm2/sm2_sign.c",uVar3,"ossl_sm2_compute_z_digest");
    ERR_set_error(0x35,0x80003,0);
  }
  else {
    a = BN_CTX_get(ctx_00);
    pBVar4 = BN_CTX_get(ctx_00);
    pBVar5 = BN_CTX_get(ctx_00);
    pBVar6 = BN_CTX_get(ctx_00);
    pBVar7 = BN_CTX_get(ctx_00);
    pBVar8 = BN_CTX_get(ctx_00);
    pBVar9 = BN_CTX_get(ctx_00);
    if (pBVar9 == (BIGNUM *)0x0) {
      ERR_new();
      uVar3 = 0x48;
      goto LAB_00100a11;
    }
    iVar1 = EVP_DigestInit(ctx,param_2);
    if (iVar1 == 0) {
      ERR_new();
      d = (void *)0x0;
      ERR_set_debug("crypto/sm2/sm2_sign.c",0x4d,"ossl_sm2_compute_z_digest");
      ERR_set_error(0x35,0x80006,0);
      uVar12 = 0;
      goto LAB_00100a38;
    }
    if (param_4 < 0x1fff) {
      iVar11 = (int)param_4 * 8;
      local_41 = (undefined1)((uint)iVar11 >> 8);
      iVar1 = EVP_DigestUpdate(ctx,&local_41,1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x5d;
      }
      else {
        local_41 = (undefined1)iVar11;
        iVar1 = EVP_DigestUpdate(ctx,&local_41,1);
        if (iVar1 != 0) {
          if (param_4 != 0) {
            iVar1 = EVP_DigestUpdate(ctx,param_3,param_4);
            if (iVar1 == 0) {
              ERR_new();
              uVar3 = 0x67;
              goto LAB_00100a91;
            }
          }
          iVar1 = EC_GROUP_get_curve(group,a,pBVar4,pBVar5,ctx_00);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/sm2/sm2_sign.c",0x6c,"ossl_sm2_compute_z_digest");
            ERR_set_error(0x35,0x80010,0);
          }
          else {
            iVar11 = BN_num_bits(a);
            iVar1 = iVar11 + 7;
            if (iVar11 + 7 < 0) {
              iVar1 = iVar11 + 0xe;
            }
            iVar1 = iVar1 >> 3;
            cnt = (size_t)iVar1;
            d = (void *)CRYPTO_zalloc(cnt,"crypto/sm2/sm2_sign.c",0x71);
            if (d != (void *)0x0) {
              iVar11 = BN_bn2binpad(pBVar4,d,iVar1);
              if (-1 < iVar11) {
                iVar11 = EVP_DigestUpdate(ctx,d,cnt);
                if (iVar11 != 0) {
                  iVar11 = BN_bn2binpad(pBVar5,d,iVar1);
                  if (-1 < iVar11) {
                    iVar11 = EVP_DigestUpdate(ctx,d,cnt);
                    if (iVar11 != 0) {
                      pEVar10 = EC_GROUP_get0_generator(group);
                      iVar11 = EC_POINT_get_affine_coordinates(group,pEVar10,pBVar6,pBVar7,ctx_00);
                      if (iVar11 != 0) {
                        iVar11 = BN_bn2binpad(pBVar6,d,iVar1);
                        if (-1 < iVar11) {
                          iVar11 = EVP_DigestUpdate(ctx,d,cnt);
                          if (iVar11 != 0) {
                            iVar11 = BN_bn2binpad(pBVar7,d,iVar1);
                            if (-1 < iVar11) {
                              iVar11 = EVP_DigestUpdate(ctx,d,cnt);
                              if (iVar11 != 0) {
                                iVar11 = EC_POINT_get_affine_coordinates
                                                   (group,pEVar2,pBVar8,pBVar9,ctx_00);
                                if (iVar11 != 0) {
                                  iVar11 = BN_bn2binpad(pBVar8,d,iVar1);
                                  if (-1 < iVar11) {
                                    iVar11 = EVP_DigestUpdate(ctx,d,cnt);
                                    if (iVar11 != 0) {
                                      iVar1 = BN_bn2binpad(pBVar9,d,iVar1);
                                      if (-1 < iVar1) {
                                        iVar1 = EVP_DigestUpdate(ctx,d,cnt);
                                        if (iVar1 != 0) {
                                          iVar1 = EVP_DigestFinal(ctx,param_1,(uint *)0x0);
                                          if (iVar1 != 0) {
                                            uVar12 = 1;
                                            goto LAB_00100a38;
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
              ERR_new();
              uVar12 = 0;
              ERR_set_debug("crypto/sm2/sm2_sign.c",0x88,"ossl_sm2_compute_z_digest");
              ERR_set_error(0x35,0xc0103,0);
              goto LAB_00100a38;
            }
          }
          goto LAB_00100a33;
        }
        ERR_new();
        uVar3 = 0x62;
      }
LAB_00100a91:
      ERR_set_debug("crypto/sm2/sm2_sign.c",uVar3,"ossl_sm2_compute_z_digest");
      ERR_set_error(0x35,0x80006,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/sm2/sm2_sign.c",0x55,"ossl_sm2_compute_z_digest");
      ERR_set_error(0x35,0x6f,0);
    }
  }
LAB_00100a33:
  d = (void *)0x0;
  uVar12 = 0;
LAB_00100a38:
  CRYPTO_free(d);
  BN_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIGNUM * sm2_compute_msg_hash
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   void *param_5,size_t param_6)

{
  int len;
  int iVar1;
  EVP_MD_CTX *ctx;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *md;
  undefined8 uVar4;
  EVP_MD *type;
  BIGNUM *pBVar5;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  len = EVP_MD_get_size(param_1);
  uVar2 = ossl_ec_key_get_libctx(param_2);
  uVar3 = ossl_ec_key_get0_propq(param_2);
  if (len < 1) {
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0xa4,"sm2_compute_msg_hash");
    ERR_set_error(0x35,0x66,0);
  }
  else if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0xa8,"sm2_compute_msg_hash");
    ERR_set_error(0x35,0x80006,0);
  }
  else {
    md = (uchar *)CRYPTO_zalloc((long)len,"crypto/sm2/sm2_sign.c",0xac);
    if (md != (uchar *)0x0) {
      uVar4 = EVP_MD_get0_name(param_1);
      type = (EVP_MD *)EVP_MD_fetch(uVar2,uVar4,uVar3);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        pBVar5 = (BIGNUM *)0x0;
        ERR_set_debug("crypto/sm2/sm2_sign.c",0xb2,"sm2_compute_msg_hash");
        ERR_set_error(0x35,0xc0103,0);
      }
      else {
        iVar1 = ossl_sm2_compute_z_digest(md,type,param_3,param_4,param_2);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestInit(ctx,type);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(ctx,md,(long)len);
            if (iVar1 != 0) {
              iVar1 = EVP_DigestUpdate(ctx,param_5,param_6);
              if (iVar1 != 0) {
                iVar1 = EVP_DigestFinal(ctx,md,(uint *)0x0);
                if (iVar1 != 0) {
                  pBVar5 = BN_bin2bn(md,len,(BIGNUM *)0x0);
                  if (pBVar5 == (BIGNUM *)0x0) {
                    ERR_new();
                    ERR_set_debug("crypto/sm2/sm2_sign.c",0xc6,"sm2_compute_msg_hash");
                    ERR_set_error(0x35,0xc0103,0);
                  }
                  goto LAB_00100f5f;
                }
              }
            }
          }
          ERR_new();
          ERR_set_debug("crypto/sm2/sm2_sign.c",0xc0,"sm2_compute_msg_hash");
          ERR_set_error(0x35,0x80006,0);
        }
        pBVar5 = (BIGNUM *)0x0;
      }
      goto LAB_00100f5f;
    }
  }
  type = (EVP_MD *)0x0;
  pBVar5 = (BIGNUM *)0x0;
  md = (uchar *)0x0;
LAB_00100f5f:
  EVP_MD_free(type);
  CRYPTO_free(md);
  EVP_MD_CTX_free(ctx);
  return pBVar5;
}



undefined8 ossl_sm2_do_sign(undefined8 param_1,undefined8 param_2)

{
  BIGNUM *a;
  undefined8 uVar1;
  
  a = (BIGNUM *)sm2_compute_msg_hash(param_2,param_1);
  if (a == (BIGNUM *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = sm2_sig_gen(param_1,a);
  }
  BN_free(a);
  return uVar1;
}



undefined4
ossl_sm2_do_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  BIGNUM *a;
  
  uVar1 = 0;
  a = (BIGNUM *)sm2_compute_msg_hash(param_2,param_1,param_4,param_5,param_6,param_7);
  if (a != (BIGNUM *)0x0) {
    uVar1 = sm2_sig_verify(param_1,param_3,a);
  }
  BN_free(a);
  return uVar1;
}



undefined8
ossl_sm2_internal_sign(uchar *param_1,int param_2,uchar *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  BIGNUM *a;
  ECDSA_SIG *sig;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *local_20;
  
  local_20 = param_3;
  if (param_3 == (uchar *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0x1d1,"ossl_sm2_internal_sign");
    ERR_set_error(0x35,0xc0102,0);
  }
  else {
    a = BN_bin2bn(param_1,param_2,(BIGNUM *)0x0);
    if (a != (BIGNUM *)0x0) {
      sig = (ECDSA_SIG *)sm2_sig_gen(param_5,a);
      if (sig == (ECDSA_SIG *)0x0) {
        ERR_new();
        uVar2 = 0x1dd;
      }
      else {
        iVar1 = i2d_ECDSA_SIG(sig,&local_20);
        if (-1 < iVar1) {
          *param_4 = iVar1;
          uVar3 = 1;
          goto LAB_00101165;
        }
        ERR_new();
        uVar2 = 0x1e3;
      }
      uVar3 = 0xffffffff;
      ERR_set_debug("crypto/sm2/sm2_sign.c",uVar2,"ossl_sm2_internal_sign");
      ERR_set_error(0x35,0xc0103,0);
      goto LAB_00101165;
    }
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0x1d7,"ossl_sm2_internal_sign");
    ERR_set_error(0x35,0x80003,0);
  }
  uVar3 = 0xffffffff;
  sig = (ECDSA_SIG *)0x0;
  a = (BIGNUM *)0x0;
LAB_00101165:
  ECDSA_SIG_free(sig);
  BN_free(a);
  return uVar3;
}



undefined4
ossl_sm2_internal_verify(uchar *param_1,int param_2,uchar *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  ECDSA_SIG *pEVar3;
  BIGNUM *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ECDSA_SIG *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (ECDSA_SIG *)0x0;
  local_48 = (uchar *)0x0;
  local_50 = param_3;
  local_58 = ECDSA_SIG_new();
  if (local_58 == (ECDSA_SIG *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/sm2/sm2_sign.c",0x1fd,"ossl_sm2_internal_verify");
    ERR_set_error(0x35,0x8002a,0);
  }
  else {
    pEVar3 = d2i_ECDSA_SIG(&local_58,&local_50,(long)param_4);
    if (pEVar3 == (ECDSA_SIG *)0x0) {
      ERR_new();
      uVar4 = 0x201;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_58,&local_48);
      if (param_4 == iVar1) {
        iVar1 = memcmp(param_3,local_48,(long)param_4);
        if (iVar1 == 0) {
          a = BN_bin2bn(param_1,param_2,(BIGNUM *)0x0);
          if (a != (BIGNUM *)0x0) {
            uVar2 = sm2_sig_verify(param_5,local_58,a);
            goto LAB_00101323;
          }
          ERR_new();
          ERR_set_debug("crypto/sm2/sm2_sign.c",0x20d,"ossl_sm2_internal_verify");
          ERR_set_error(0x35,0x80003,0);
          goto LAB_001013a3;
        }
      }
      ERR_new();
      uVar4 = 0x207;
    }
    ERR_set_debug("crypto/sm2/sm2_sign.c",uVar4,"ossl_sm2_internal_verify");
    ERR_set_error(0x35,0x68,0);
  }
LAB_001013a3:
  uVar2 = 0xffffffff;
  a = (BIGNUM *)0x0;
LAB_00101323:
  CRYPTO_free(local_48);
  BN_free(a);
  ECDSA_SIG_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


