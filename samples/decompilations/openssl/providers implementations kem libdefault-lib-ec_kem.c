
undefined1 * eckem_settable_ctx_params(void)

{
  return known_settable_eckem_ctx_params;
}



uint eckey_check(EC_KEY *param_1,uint param_2)

{
  int iVar1;
  BIGNUM *m;
  EC_POINT *pEVar2;
  EC_GROUP *pEVar3;
  BIGNUM *d;
  BN_CTX *ctx;
  BIGNUM *rem;
  uint uVar4;
  
  m = EC_KEY_get0_private_key(param_1);
  pEVar2 = EC_KEY_get0_public_key(param_1);
  if (pEVar2 == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x4c,"eckey_check");
    ERR_set_error(0x39,0xdc,0);
    return 0;
  }
  if (m != (BIGNUM *)0x0) {
    pEVar3 = EC_KEY_get0_group(param_1);
    d = (BIGNUM *)EC_GROUP_get0_order(pEVar3);
    ossl_ec_key_get_libctx(param_1);
    ctx = (BN_CTX *)BN_CTX_new_ex();
    rem = BN_new();
    if (((d == (BIGNUM *)0x0 || rem == (BIGNUM *)0x0) || (ctx == (BN_CTX *)0x0)) ||
       (iVar1 = BN_div((BIGNUM *)0x0,rem,m,d,ctx), iVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      iVar1 = BN_is_zero(rem);
      uVar4 = (uint)(iVar1 == 0);
    }
    BN_free(rem);
    BN_CTX_free(ctx);
    return uVar4;
  }
  return param_2 ^ 1;
}



undefined8 eckem_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar2 != 0) {
      local_30 = 0;
      local_28 = 0;
      if (((*(long *)(lVar2 + 0x10) == 0) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_30,0,&local_28), iVar1 != 0)) {
        CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                          "providers/implementations/kem/ec_kem.c",0x131);
        *(undefined8 *)(param_1 + 0x28) = local_30;
        *(undefined8 *)(param_1 + 0x30) = local_28;
        goto LAB_001001b6;
      }
LAB_001001d0:
      uVar3 = 0;
      goto LAB_001001d2;
    }
LAB_001001b6:
    lVar2 = OSSL_PARAM_locate_const(param_2,"operation");
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 8) != 4) ||
         (iVar1 = ossl_eckem_modename2id(*(undefined8 *)(lVar2 + 0x10)), iVar1 == 0))
      goto LAB_001001d0;
      *(int *)(param_1 + 0x20) = iVar1;
    }
  }
  uVar3 = 1;
LAB_001001d2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void eckem_freectx(undefined8 *param_1)

{
  CRYPTO_clear_free(param_1[5],param_1[6],"providers/implementations/kem/ec_kem.c",0xd1);
  EC_KEY_free((EC_KEY *)*param_1);
  *param_1 = 0;
  EC_KEY_free((EC_KEY *)param_1[1]);
  param_1[1] = 0;
  CRYPTO_free(param_1);
  return;
}



bool generate_ecdhkm(EC_KEY *param_1,EC_KEY *param_2,void *param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  undefined8 uVar3;
  BN_CTX *c;
  EC_POINT *pub_key;
  ulong outlen;
  
  group = EC_KEY_get0_group(param_1);
  iVar1 = EC_GROUP_get_degree(group);
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  outlen = (ulong)(iVar2 >> 3);
  if (((param_5 & 0xffffffff) == outlen) && (outlen <= param_4)) {
    uVar3 = ossl_ec_key_get_libctx(param_2);
    c = (BN_CTX *)BN_CTX_new_ex(uVar3);
    if (c != (BN_CTX *)0x0) {
      iVar2 = ossl_ec_key_public_check(param_2,c);
      BN_CTX_free(c);
      if (iVar2 != 0) {
        pub_key = EC_KEY_get0_public_key(param_2);
        iVar2 = ECDH_compute_key(param_3,outlen,pub_key,param_1,(KDF *)0x0);
        return 0 < iVar2;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x211,"generate_ecdhkm");
    ERR_set_error(0x39,0x8e,"secretsz invalid");
  }
  return false;
}



long eckem_newctx(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CRYPTO_zalloc(0x48,"providers/implementations/kem/ec_kem.c",0xc3);
  if (lVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
  }
  return lVar1;
}



undefined8
eckem_auth_decapsulate_init(undefined8 *param_1,EC_KEY *param_2,EC_KEY *param_3,undefined8 param_4)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  EC_GROUP *b;
  undefined8 uVar4;
  BN_CTX *ctx;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = eckey_check(param_2,1), iVar1 != 0)) {
    EC_KEY_free((EC_KEY *)*param_1);
    *param_1 = 0;
    if (param_2 != (EC_KEY *)0x0) {
      pEVar2 = EC_KEY_get0_group(param_2);
      iVar1 = EC_GROUP_get_curve_name(pEVar2);
      lVar3 = EC_curve_nid2nist(iVar1);
      if (lVar3 == 0) {
        return 0xfffffffe;
      }
      lVar3 = ossl_HPKE_KEM_INFO_find_curve(lVar3);
      param_1[8] = lVar3;
      if (lVar3 == 0) {
        return 0xfffffffe;
      }
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = param_2;
      param_1[7] = &_LC4;
    }
    if (param_3 == (EC_KEY *)0x0) {
LAB_00100541:
      *(undefined4 *)((long)param_1 + 0x24) = 0x2000;
      uVar4 = eckem_set_ctx_params(param_1,param_4);
      return uVar4;
    }
    pEVar2 = EC_KEY_get0_group(param_2);
    b = EC_KEY_get0_group(param_3);
    uVar4 = ossl_ec_key_get_libctx(param_2);
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar4);
    if (ctx != (BN_CTX *)0x0) {
      if (((pEVar2 == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) ||
         (iVar1 = EC_GROUP_cmp(pEVar2,b,ctx), iVar1 != 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ec_kem.c",0xe6,"ossl_ec_match_params");
        ERR_set_error(0x39,0xcb,0);
        BN_CTX_free(ctx);
      }
      else {
        BN_CTX_free(ctx);
        iVar1 = eckey_check(param_3,0);
        if (iVar1 != 0) {
          EC_KEY_free((EC_KEY *)param_1[1]);
          param_1[1] = 0;
          iVar1 = EC_KEY_up_ref(param_3);
          if (iVar1 != 0) {
            param_1[1] = param_3;
            goto LAB_00100541;
          }
        }
      }
    }
  }
  return 0;
}



undefined8
derive_secret(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  size_t sVar2;
  EC_KEY *key;
  ulong uVar3;
  int iVar4;
  EC_GROUP *group;
  EC_POINT *p;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong len;
  undefined8 uVar9;
  long in_FS_OFFSET;
  ulong local_370;
  ushort local_33a;
  undefined1 local_338 [64];
  undefined1 local_2f8 [144];
  uchar local_268 [144];
  undefined1 local_1d8 [408];
  long local_40;
  
  puVar1 = *(ushort **)(param_1 + 0x40);
  len = *(ulong *)(puVar1 + 0x1c);
  sVar2 = *(size_t *)(puVar1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(param_1 + 8);
  iVar4 = generate_ecdhkm(param_3,param_4,local_2f8,0x84,len & 0xffffffff);
  if (iVar4 == 0) {
    uVar9 = 0;
    len = 0;
    lVar6 = 0;
    goto LAB_001006f7;
  }
  uVar3 = sVar2 * 2;
  local_370 = uVar3;
  if (lVar6 == 0) {
LAB_001006d5:
    if (local_370 < 400) {
      __memcpy_chk(local_1d8,param_7,*(undefined8 *)(puVar1 + 0x18),399);
      uVar8 = *(ulong *)(puVar1 + 0x18);
      uVar7 = 399;
      if (0x18e < uVar8) {
        uVar7 = uVar8;
      }
      __memcpy_chk(local_1d8 + uVar8,param_8,uVar8,uVar7 - uVar8);
      if (lVar6 != 0) {
        uVar8 = 399;
        if (0x18e < uVar3) {
          uVar8 = uVar3;
        }
        __memcpy_chk(local_1d8 + uVar3,local_268,sVar2,uVar8 + sVar2 * -2);
      }
      lVar6 = ossl_kdf_ctx_create(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(puVar1 + 0xc),
                                  *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      if (lVar6 != 0) {
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (uVar3 < 0x41) {
          local_33a = *puVar1 << 8 | *puVar1 >> 8;
          iVar4 = ossl_hpke_labeled_extract
                            (lVar6,local_338,uVar3,0,0,&LABEL_KEM,&local_33a,2,"eae_prk",local_2f8,
                             len);
          if (iVar4 == 0) {
            OPENSSL_cleanse(local_338,uVar3);
          }
          else {
            iVar4 = ossl_hpke_labeled_expand
                              (lVar6,param_2,uVar3,local_338,uVar3,&LABEL_KEM,&local_33a,2,
                               "shared_secret",local_1d8,local_370);
            if (iVar4 != 0) {
              OPENSSL_cleanse(local_338,uVar3);
              uVar9 = 1;
              goto LAB_001006f7;
            }
            OPENSSL_cleanse(local_338,uVar3);
          }
        }
        uVar9 = 0;
        goto LAB_001006f7;
      }
    }
  }
  else {
    key = *(EC_KEY **)(param_1 + 8);
    group = EC_KEY_get0_group(key);
    p = EC_KEY_get0_public_key(key);
    sVar5 = EC_POINT_point2oct(group,p,POINT_CONVERSION_UNCOMPRESSED,local_268,0x85,(BN_CTX *)0x0);
    if (sVar5 != 0) {
      if (sVar2 != sVar5) {
        ERR_new();
        lVar6 = 0;
        uVar9 = 0;
        ERR_set_debug("providers/implementations/kem/ec_kem.c",0x24f,"derive_secret");
        ERR_set_error(0x39,0x9e,"Invalid sender auth public key");
        goto LAB_001006f7;
      }
      iVar4 = generate_ecdhkm(param_5,param_6,local_2f8 + len,0x84 - len,len & 0xffffffff);
      if (iVar4 != 0) {
        len = len * 2;
        local_370 = sVar2 * 3;
        goto LAB_001006d5;
      }
    }
  }
  lVar6 = 0;
  uVar9 = 0;
LAB_001006f7:
  OPENSSL_cleanse(local_2f8,len);
  EVP_KDF_CTX_free(lVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



undefined4
eckem_decapsulate(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,size_t param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EC_KEY *key;
  EC_GROUP *pEVar6;
  EC_POINT *p;
  size_t sVar7;
  EC_KEY *pEVar8;
  long in_FS_OFFSET;
  uchar local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 4) != 1) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x318,"eckem_decapsulate");
    ERR_set_error(0x39,0x7d,0);
    uVar3 = 0xfffffffe;
    goto LAB_00100a97;
  }
  lVar1 = param_1[8];
  if (param_2 == 0) {
    *param_3 = *(ulong *)(lVar1 + 0x20);
    uVar3 = 1;
    goto LAB_00100a97;
  }
  if (*param_3 < *(ulong *)(lVar1 + 0x20)) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x2e2,"dhkem_decap");
    ERR_set_error(0x39,0x8e,"*secretlen too small");
  }
  else {
    if (param_5 == *(size_t *)(lVar1 + 0x30)) {
      pEVar8 = (EC_KEY *)*param_1;
      uVar4 = ossl_ec_key_get0_propq(pEVar8);
      uVar5 = ossl_ec_key_get_libctx(pEVar8);
      key = (EC_KEY *)EC_KEY_new_ex(uVar5,uVar4);
      if (key == (EC_KEY *)0x0) {
LAB_00100ac0:
        pEVar8 = (EC_KEY *)0x0;
        EC_KEY_free(key);
        uVar3 = 0;
      }
      else {
        pEVar6 = EC_KEY_get0_group(pEVar8);
        iVar2 = EC_KEY_set_group(key,pEVar6);
        if (iVar2 == 0) goto LAB_00100ac0;
        iVar2 = EC_KEY_oct2key(key,param_4,param_5,0);
        if (iVar2 == 0) goto LAB_00100ac0;
        pEVar8 = (EC_KEY *)*param_1;
        pEVar6 = EC_KEY_get0_group(pEVar8);
        p = EC_KEY_get0_public_key(pEVar8);
        sVar7 = EC_POINT_point2oct(pEVar6,p,POINT_CONVERSION_UNCOMPRESSED,local_c8,0x85,
                                   (BN_CTX *)0x0);
        uVar3 = 0;
        pEVar8 = key;
        if (sVar7 != 0) {
          if (param_5 == sVar7) {
            iVar2 = derive_secret(param_1,param_2,*param_1,key,*param_1,param_1[1],param_4,local_c8)
            ;
            if (iVar2 != 0) {
              *param_3 = *(ulong *)(lVar1 + 0x20);
              uVar3 = 1;
              goto LAB_00100acd;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("providers/implementations/kem/ec_kem.c",0x2f1,"dhkem_decap");
            ERR_set_error(0x39,0x9e,"Invalid recipient public key");
          }
          uVar3 = 0;
        }
      }
LAB_00100acd:
      EC_KEY_free(pEVar8);
      goto LAB_00100a97;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x2e6,"dhkem_decap");
    ERR_set_error(0x39,0x9e,"Invalid enc public key");
  }
  uVar3 = 0;
LAB_00100a97:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
dhkem_encap(undefined8 *param_1,void *param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  uchar *puVar3;
  EC_KEY *key;
  ulong len;
  int iVar4;
  undefined4 uVar5;
  EC_KEY *key_00;
  EC_GROUP *pEVar6;
  EC_POINT *pEVar7;
  size_t __n;
  size_t sVar8;
  EC_KEY *pEVar9;
  long in_FS_OFFSET;
  uchar local_158 [144];
  uchar local_c8 [136];
  long local_40;
  
  lVar1 = param_1[8];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (void *)0x0) {
    if (param_5 != (ulong *)0x0 || param_3 != (ulong *)0x0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = *(ulong *)(lVar1 + 0x28);
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = *(ulong *)(lVar1 + 0x20);
      }
      uVar5 = 1;
      goto LAB_00100dcd;
    }
LAB_00100e65:
    uVar5 = 0;
    goto LAB_00100dcd;
  }
  if (*param_5 < *(ulong *)(lVar1 + 0x20)) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x299,"dhkem_encap");
    ERR_set_error(0x39,0x8e,"*secretlen too small");
    uVar5 = 0;
    goto LAB_00100dcd;
  }
  if (*param_3 < *(ulong *)(lVar1 + 0x28)) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x29d,"dhkem_encap");
    ERR_set_error(0x39,0x8e,"*enclen too small");
    goto LAB_00100e65;
  }
  lVar2 = param_1[6];
  puVar3 = (uchar *)param_1[5];
  key_00 = (EC_KEY *)EC_KEY_new_ex(param_1[2],param_1[3]);
  if (key_00 == (EC_KEY *)0x0) {
LAB_00100db0:
    pEVar9 = (EC_KEY *)0x0;
    EC_KEY_free(key_00);
    uVar5 = 0;
  }
  else {
    pEVar6 = EC_KEY_get0_group((EC_KEY *)*param_1);
    iVar4 = EC_KEY_set_group(key_00,pEVar6);
    if (iVar4 == 0) goto LAB_00100db0;
    if ((puVar3 == (uchar *)0x0) || (lVar2 == 0)) {
      len = *(ulong *)(param_1[8] + 0x38);
      if (len < 0x43) {
        iVar4 = RAND_priv_bytes_ex(param_1[2],local_c8,len,0);
        if (0 < iVar4) {
          iVar4 = ossl_ec_generate_key_dhkem(key_00,local_c8,len);
          if (puVar3 != local_c8) {
            OPENSSL_cleanse(local_c8,len);
          }
          goto LAB_00100c7c;
        }
      }
      goto LAB_00100db0;
    }
    iVar4 = ossl_ec_generate_key_dhkem(key_00,puVar3,lVar2);
LAB_00100c7c:
    if (iVar4 < 1) goto LAB_00100db0;
    pEVar6 = EC_KEY_get0_group(key_00);
    pEVar7 = EC_KEY_get0_public_key(key_00);
    __n = EC_POINT_point2oct(pEVar6,pEVar7,POINT_CONVERSION_UNCOMPRESSED,local_158,0x85,
                             (BN_CTX *)0x0);
    pEVar9 = key_00;
    if (__n == 0) {
LAB_00100d67:
      uVar5 = 0;
    }
    else {
      key = (EC_KEY *)*param_1;
      pEVar6 = EC_KEY_get0_group(key);
      pEVar7 = EC_KEY_get0_public_key(key);
      sVar8 = EC_POINT_point2oct(pEVar6,pEVar7,POINT_CONVERSION_UNCOMPRESSED,local_c8,0x85,
                                 (BN_CTX *)0x0);
      uVar5 = 0;
      if (sVar8 != 0) {
        if ((*(size_t *)(lVar1 + 0x30) == __n) && (__n == sVar8)) {
          iVar4 = derive_secret(param_1,param_4,key_00,*param_1,param_1[1],*param_1,local_158,
                                local_c8);
          if (iVar4 != 0) {
            memcpy(param_2,local_158,__n);
            *param_3 = __n;
            *param_5 = *(ulong *)(lVar1 + 0x20);
            uVar5 = 1;
            goto LAB_00100dbd;
          }
        }
        else {
          ERR_new();
          ERR_set_debug("providers/implementations/kem/ec_kem.c",0x2ad,"dhkem_encap");
          ERR_set_error(0x39,0x9e,"Invalid public key");
        }
        goto LAB_00100d67;
      }
    }
  }
LAB_00100dbd:
  EC_KEY_free(pEVar9);
LAB_00100dcd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 eckem_encapsulate(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    uVar1 = dhkem_encap();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/kem/ec_kem.c",0x30a,"eckem_encapsulate");
  ERR_set_error(0x39,0x7d,0);
  return 0xfffffffe;
}



undefined8 eckem_decapsulate_init(undefined8 *param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  EC_GROUP *group;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = eckey_check(param_2,1), iVar1 == 0)) {
    return 0;
  }
  EC_KEY_free((EC_KEY *)*param_1);
  *param_1 = 0;
  if (param_2 == (EC_KEY *)0x0) {
LAB_00101044:
    *(undefined4 *)((long)param_1 + 0x24) = 0x2000;
    uVar3 = eckem_set_ctx_params(param_1,param_3);
    return uVar3;
  }
  group = EC_KEY_get0_group(param_2);
  iVar1 = EC_GROUP_get_curve_name(group);
  lVar2 = EC_curve_nid2nist(iVar1);
  if (lVar2 != 0) {
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(lVar2);
    param_1[8] = lVar2;
    if (lVar2 != 0) {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = param_2;
      param_1[7] = &_LC4;
      goto LAB_00101044;
    }
  }
  return 0xfffffffe;
}



undefined8 eckem_encapsulate_init(undefined8 *param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  EC_GROUP *group;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = eckey_check(param_2,0), iVar1 == 0)) {
    return 0;
  }
  EC_KEY_free((EC_KEY *)*param_1);
  *param_1 = 0;
  if (param_2 == (EC_KEY *)0x0) {
LAB_00101101:
    *(undefined4 *)((long)param_1 + 0x24) = 0x1000;
    uVar3 = eckem_set_ctx_params(param_1,param_3);
    return uVar3;
  }
  group = EC_KEY_get0_group(param_2);
  iVar1 = EC_GROUP_get_curve_name(group);
  lVar2 = EC_curve_nid2nist(iVar1);
  if (lVar2 != 0) {
    lVar2 = ossl_HPKE_KEM_INFO_find_curve(lVar2);
    param_1[8] = lVar2;
    if (lVar2 != 0) {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = param_2;
      param_1[7] = &_LC4;
      goto LAB_00101101;
    }
  }
  return 0xfffffffe;
}



undefined8
eckem_auth_encapsulate_init(undefined8 *param_1,EC_KEY *param_2,EC_KEY *param_3,undefined8 param_4)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  EC_GROUP *b;
  undefined8 uVar4;
  BN_CTX *ctx;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = eckey_check(param_2,0), iVar1 != 0)) {
    EC_KEY_free((EC_KEY *)*param_1);
    *param_1 = 0;
    if (param_2 != (EC_KEY *)0x0) {
      pEVar2 = EC_KEY_get0_group(param_2);
      iVar1 = EC_GROUP_get_curve_name(pEVar2);
      lVar3 = EC_curve_nid2nist(iVar1);
      if (lVar3 == 0) {
        return 0xfffffffe;
      }
      lVar3 = ossl_HPKE_KEM_INFO_find_curve(lVar3);
      param_1[8] = lVar3;
      if (lVar3 == 0) {
        return 0xfffffffe;
      }
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = param_2;
      param_1[7] = &_LC4;
    }
    if (param_3 == (EC_KEY *)0x0) {
LAB_0010127d:
      *(undefined4 *)((long)param_1 + 0x24) = 0x1000;
      uVar4 = eckem_set_ctx_params(param_1,param_4);
      return uVar4;
    }
    pEVar2 = EC_KEY_get0_group(param_2);
    b = EC_KEY_get0_group(param_3);
    uVar4 = ossl_ec_key_get_libctx(param_2);
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar4);
    if (ctx != (BN_CTX *)0x0) {
      if (((pEVar2 == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) ||
         (iVar1 = EC_GROUP_cmp(pEVar2,b,ctx), iVar1 != 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ec_kem.c",0xe6,"ossl_ec_match_params");
        ERR_set_error(0x39,0xcb,0);
        BN_CTX_free(ctx);
      }
      else {
        BN_CTX_free(ctx);
        iVar1 = eckey_check(param_3,1);
        if (iVar1 != 0) {
          EC_KEY_free((EC_KEY *)param_1[1]);
          param_1[1] = 0;
          iVar1 = EC_KEY_up_ref(param_3);
          if (iVar1 != 0) {
            param_1[1] = param_3;
            goto LAB_0010127d;
          }
        }
      }
    }
  }
  return 0;
}



undefined8
ossl_ec_dhkem_derive_private(EC_KEY *param_1,BIGNUM *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  BIGNUM *b;
  BIGNUM *pBVar7;
  long in_FS_OFFSET;
  undefined1 *local_e8;
  char local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8 [64];
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cb = '\0';
  pEVar2 = EC_KEY_get0_group(param_1);
  iVar1 = EC_GROUP_get_curve_name(pEVar2);
  lVar3 = EC_curve_nid2nist(iVar1);
  if ((lVar3 == 0) ||
     (puVar4 = (undefined2 *)ossl_HPKE_KEM_INFO_find_curve(lVar3), puVar4 == (undefined2 *)0x0)) {
    uVar5 = 0xfffffffe;
    goto LAB_00101418;
  }
  uVar5 = ossl_ec_key_get0_propq(param_1);
  uVar6 = ossl_ec_key_get_libctx(param_1);
  lVar3 = ossl_kdf_ctx_create(&_LC4,*(undefined8 *)(puVar4 + 0xc),uVar6,uVar5);
  if (lVar3 == 0) {
    uVar5 = 0;
    goto LAB_00101418;
  }
  if (param_4 < *(ulong *)(puVar4 + 0x1c)) {
    ERR_new();
    ERR_set_debug("providers/implementations/kem/ec_kem.c",0x19a,"ossl_ec_dhkem_derive_private");
    ERR_set_error(0x39,0xe6,"ikm length is :%zu, should be at least %zu",param_4,
                  *(undefined8 *)(puVar4 + 0x1c));
LAB_001013f3:
    uVar5 = 0;
  }
  else {
    local_ca = (undefined1)((ushort)*puVar4 >> 8);
    local_c9 = (undefined1)*puVar4;
    iVar1 = ossl_hpke_labeled_extract
                      (lVar3,local_c8,*(undefined8 *)(puVar4 + 0x10),0,0,&LABEL_KEM,&local_ca,2,
                       "dkp_prk",param_3,param_4);
    if (iVar1 == 0) goto LAB_001013f3;
    pEVar2 = EC_KEY_get0_group(param_1);
    b = (BIGNUM *)EC_GROUP_get0_order(pEVar2);
    do {
      iVar1 = ossl_hpke_labeled_expand
                        (lVar3,local_88,*(undefined8 *)(puVar4 + 0x1c),local_c8,
                         *(undefined8 *)(puVar4 + 0x10),&LABEL_KEM,&local_ca,2,"candidate",&local_cb
                         ,1);
      if (iVar1 == 0) goto LAB_001013f3;
      local_88[0] = local_88[0] & *(byte *)(puVar4 + 0x20);
      pBVar7 = BN_bin2bn(local_88,*(int *)(puVar4 + 0x1c),param_2);
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_001013f3;
      if (local_cb == -1) {
        ERR_new();
        ERR_set_debug("providers/implementations/kem/ec_kem.c",0x1b4,"ossl_ec_dhkem_derive_private")
        ;
        ERR_set_error(0x39,0x79,0);
        goto LAB_001013f3;
      }
      local_cb = local_cb + '\x01';
      iVar1 = BN_is_zero(param_2);
    } while ((iVar1 != 0) || (iVar1 = BN_cmp(param_2,b), -1 < iVar1));
    uVar5 = 1;
  }
  local_e8 = local_c8;
  OPENSSL_cleanse(local_e8,0x40);
  OPENSSL_cleanse(local_88,0x42);
  EVP_KDF_CTX_free(lVar3);
LAB_00101418:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


