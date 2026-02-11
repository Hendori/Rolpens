
undefined8 ossl_dsa_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  if (param_1 != 0) {
    lVar4 = 0;
    if (param_3 != 0) {
      lVar4 = OSSL_PARAM_locate_const(param_2,&_LC0);
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar4 == 0 && lVar2 == 0) {
LAB_001000a3:
      uVar3 = 1;
      goto LAB_001000a8;
    }
    if (lVar2 == 0) {
LAB_00100077:
      if (lVar4 != 0) {
        iVar1 = OSSL_PARAM_get_BN(lVar4,&local_40);
        if (iVar1 == 0) goto LAB_001000c8;
      }
      iVar1 = DSA_set0_key(param_1,local_38,local_40);
      if (iVar1 != 0) goto LAB_001000a3;
    }
    else {
      iVar1 = OSSL_PARAM_get_BN(lVar2,&local_38);
      if (iVar1 != 0) goto LAB_00100077;
    }
LAB_001000c8:
    BN_clear_free(local_40);
    BN_free(local_38);
  }
  uVar3 = 0;
LAB_001000a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_dsa_is_foreign(long param_1)

{
  DSA_METHOD *pDVar1;
  DSA_METHOD *pDVar2;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    return true;
  }
  pDVar1 = (DSA_METHOD *)DSA_get_method();
  pDVar2 = DSA_OpenSSL();
  return pDVar1 != pDVar2;
}



DSA * ossl_dsa_dup(long param_1,ulong param_2)

{
  int iVar1;
  DSA *r;
  BIGNUM *pBVar2;
  
  iVar1 = ossl_dsa_is_foreign();
  if (iVar1 != 0) {
    return (DSA *)0x0;
  }
  r = (DSA *)ossl_dsa_new(*(undefined8 *)(param_1 + 0xb8));
  if (r == (DSA *)0x0) {
    return (DSA *)0x0;
  }
  if ((param_2 & 4) == 0) {
    pBVar2 = (BIGNUM *)(param_2 & 3);
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x78);
joined_r0x001001df:
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_0010017d;
  }
  else {
    iVar1 = ossl_ffc_params_copy(&r->version,param_1 + 8);
    if (iVar1 == 0) goto LAB_0010017d;
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x78);
    if (((param_2 & 2) != 0) && (*(BIGNUM **)(param_1 + 0x68) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x68));
      (r->ex_data).sk = (stack_st_void *)pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_0010017d;
    }
    if (((param_2 & 1) != 0) && (*(BIGNUM **)(param_1 + 0x70) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x70));
      *(BIGNUM **)&(r->ex_data).dummy = pBVar2;
      goto joined_r0x001001df;
    }
  }
  iVar1 = CRYPTO_dup_ex_data(7,(CRYPTO_EX_DATA *)&r[1].version,(CRYPTO_EX_DATA *)(param_1 + 0x90));
  if (iVar1 != 0) {
    return r;
  }
LAB_0010017d:
  DSA_free(r);
  return (DSA *)0x0;
}



DSA * ossl_dsa_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  ASN1_INTEGER *ai;
  DSA *r;
  BIGNUM *bn;
  BIGNUM *pBVar2;
  BN_CTX *ctx;
  BIGNUM *m;
  BIGNUM *a;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  uchar *local_60;
  uchar *local_58;
  int *local_50;
  X509_ALGOR *local_48;
  long local_40;
  
  r = (DSA *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_60,&local_68,&local_48,param_1);
  if (iVar1 == 0) goto LAB_001002fe;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_64,&local_50,local_48);
  ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_60,(long)local_68);
  if (((ai == (ASN1_INTEGER *)0x0) || (ai->type == 0x102)) || (local_64 != 0x10)) {
LAB_00100299:
    ERR_new();
    r = (DSA *)0x0;
    ctx = (BN_CTX *)0x0;
    bn = (BIGNUM *)0x0;
    pBVar2 = (BIGNUM *)0x0;
    ERR_set_debug("crypto/dsa/dsa_backend.c",0xb8,"ossl_dsa_key_from_pkcs8");
    ERR_set_error(10,0x68,0);
LAB_001002d4:
    BN_free(bn);
    BN_free(pBVar2);
    DSA_free(r);
    r = (DSA *)0x0;
  }
  else {
    local_58 = *(uchar **)(local_50 + 2);
    r = d2i_DSAparams((DSA **)0x0,&local_58,(long)*local_50);
    if (r == (DSA *)0x0) goto LAB_00100299;
    bn = (BIGNUM *)BN_secure_new();
    if (bn == (BIGNUM *)0x0) {
LAB_00100470:
      ERR_new();
      ctx = (BN_CTX *)0x0;
      pBVar2 = (BIGNUM *)0x0;
      ERR_set_debug("crypto/dsa/dsa_backend.c",0x9c,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x6d,0);
      goto LAB_001002d4;
    }
    pBVar2 = ASN1_INTEGER_to_BN(ai,bn);
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_00100470;
    pBVar2 = BN_new();
    if (pBVar2 == (BIGNUM *)0x0) {
      ERR_new();
      ctx = (BN_CTX *)0x0;
      ERR_set_debug("crypto/dsa/dsa_backend.c",0xa1,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x80003,0);
      goto LAB_001002d4;
    }
    ctx = BN_CTX_new();
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_backend.c",0xa5,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x80003,0);
      goto LAB_001002d4;
    }
    m = (BIGNUM *)DSA_get0_p(r);
    a = (BIGNUM *)DSA_get0_g(r);
    BN_set_flags(bn,4);
    iVar1 = BN_mod_exp(pBVar2,a,bn,m,ctx);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_backend.c",0xad,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0x6d,0);
      goto LAB_001002d4;
    }
    iVar1 = DSA_set0_key(r,pBVar2,bn);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_backend.c",0xb1,"ossl_dsa_key_from_pkcs8");
      ERR_set_error(10,0xc0103,0);
      goto LAB_001002d4;
    }
  }
  BN_CTX_free(ctx);
  ASN1_STRING_clear_free(ai);
LAB_001002fe:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return r;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


