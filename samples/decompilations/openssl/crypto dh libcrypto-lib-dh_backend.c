
bool ossl_dh_params_fromdata(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_dh_get0_params();
  iVar1 = ossl_ffc_params_fromdata(uVar2,param_2);
  if (iVar1 != 0) {
    ossl_dh_cache_named_group(param_1);
    lVar3 = OSSL_PARAM_locate_const(param_2,"priv_len");
    bVar4 = true;
    if (lVar3 == 0) goto LAB_00100036;
    iVar1 = OSSL_PARAM_get_long(lVar3,&local_28);
    if (iVar1 != 0) {
      iVar1 = DH_set_length(param_1,local_28);
      bVar4 = iVar1 != 0;
      goto LAB_00100036;
    }
  }
  bVar4 = false;
LAB_00100036:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_dh_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC2);
    if ((param_3 == 0) || (lVar2 == 0)) {
LAB_00100121:
      if (lVar3 != 0) {
        iVar1 = OSSL_PARAM_get_BN(lVar3,&local_38);
        if (iVar1 == 0) goto LAB_00100170;
      }
      iVar1 = DH_set0_key(param_1,local_38,local_40);
      if (iVar1 != 0) {
        uVar4 = 1;
        goto LAB_00100152;
      }
    }
    else {
      iVar1 = OSSL_PARAM_get_BN(lVar2,&local_40);
      if (iVar1 != 0) goto LAB_00100121;
    }
LAB_00100170:
    BN_clear_free(local_40);
    BN_free(local_38);
  }
  uVar4 = 0;
LAB_00100152:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_dh_params_todata(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = DH_get_length();
  uVar3 = ossl_dh_get0_params(param_1);
  uVar4 = ossl_ffc_params_todata(uVar3,param_2,param_3);
  if (((int)uVar4 != 0) && (uVar4 = 1, 0 < lVar2)) {
    iVar1 = ossl_param_build_set_long(param_2,param_3,"priv_len",lVar2);
    return (ulong)(iVar1 != 0);
  }
  return uVar4;
}



bool ossl_dh_key_todata(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if ((param_1 == 0) ||
     (((DH_get0_key(param_1,&local_28,&local_30), local_30 != 0 && (param_4 != 0)) &&
      (iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC1), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (local_28 != 0) {
      iVar1 = ossl_param_build_set_bn(param_2,param_3,&_LC2);
      bVar2 = iVar1 != 0;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ossl_dh_is_foreign(long param_1)

{
  DH_METHOD *pDVar1;
  DH_METHOD *pDVar2;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    return true;
  }
  pDVar1 = (DH_METHOD *)ossl_dh_get_method();
  pDVar2 = DH_OpenSSL();
  return pDVar1 != pDVar2;
}



DH * ossl_dh_dup(long param_1,ulong param_2)

{
  int iVar1;
  DH *dh;
  BIGNUM *pBVar2;
  
  iVar1 = ossl_dh_is_foreign();
  if (iVar1 != 0) {
    return (DH *)0x0;
  }
  dh = (DH *)ossl_dh_new_ex(*(undefined8 *)(param_1 + 0xb0));
  if (dh == (DH *)0x0) {
    return (DH *)0x0;
  }
  iVar1 = DH_get_length(param_1);
  dh->references = iVar1;
  if ((param_2 & 4) == 0) {
    pBVar2 = (BIGNUM *)(param_2 & 3);
    *(undefined4 *)&dh->meth = *(undefined4 *)(param_1 + 0x80);
joined_r0x001003f5:
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_00100400;
  }
  else {
    iVar1 = ossl_ffc_params_copy(&dh->p,param_1 + 8);
    if (iVar1 == 0) goto LAB_00100400;
    *(undefined4 *)&dh->meth = *(undefined4 *)(param_1 + 0x80);
    if (((param_2 & 2) != 0) && (*(BIGNUM **)(param_1 + 0x70) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x70));
      (dh->ex_data).sk = (stack_st_void *)pBVar2;
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_00100400;
    }
    if (((param_2 & 1) != 0) && (*(BIGNUM **)(param_1 + 0x78) != (BIGNUM *)0x0)) {
      pBVar2 = BN_dup(*(BIGNUM **)(param_1 + 0x78));
      *(BIGNUM **)&(dh->ex_data).dummy = pBVar2;
      goto joined_r0x001003f5;
    }
  }
  iVar1 = CRYPTO_dup_ex_data(6,(CRYPTO_EX_DATA *)&dh[1].p,(CRYPTO_EX_DATA *)(param_1 + 0x98));
  if (iVar1 != 0) {
    return dh;
  }
LAB_00100400:
  DH_free(dh);
  return (DH *)0x0;
}



DH * ossl_dh_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  int iVar2;
  ASN1_INTEGER *ai;
  DH *dh;
  BIGNUM *bn;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  uchar *local_38;
  int *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  dh = (DH *)0x0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,&local_28,param_1);
  if (iVar1 == 0) goto LAB_001004bf;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,&local_30,local_28);
  if ((local_44 == 0x10) &&
     (ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48),
     ai != (ASN1_INTEGER *)0x0)) {
    local_38 = *(uchar **)(local_30 + 2);
    iVar1 = *local_30;
    iVar2 = OBJ_obj2nid(local_28->algorithm);
    if (iVar2 == 0x1c) {
      dh = d2i_DHparams((DH **)0x0,&local_38,(long)iVar1);
    }
    else {
      if (iVar2 != 0x398) goto LAB_0010047b;
      dh = (DH *)d2i_DHxparams(0,&local_38,(long)iVar1);
    }
    if (dh == (DH *)0x0) goto LAB_0010047b;
    bn = (BIGNUM *)BN_secure_new();
    if ((bn == (BIGNUM *)0x0) || (pBVar3 = ASN1_INTEGER_to_BN(ai,bn), pBVar3 == (BIGNUM *)0x0)) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_backend.c",0xdf,"ossl_dh_key_from_pkcs8");
      ERR_set_error(5,0x6a,0);
      BN_clear_free(bn);
      goto LAB_001004ad;
    }
    iVar1 = DH_set0_key(dh,0,bn);
    if ((iVar1 == 0) || (iVar1 = DH_generate_key(dh), iVar1 == 0)) goto LAB_001004ad;
  }
  else {
    ai = (ASN1_INTEGER *)0x0;
LAB_0010047b:
    ERR_new();
    dh = (DH *)0x0;
    ERR_set_debug("crypto/dh/dh_backend.c",0xec,"ossl_dh_key_from_pkcs8");
    ERR_set_error(5,0x72,0);
LAB_001004ad:
    DH_free(dh);
    dh = (DH *)0x0;
  }
  ASN1_STRING_clear_free(ai);
LAB_001004bf:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dh;
}


