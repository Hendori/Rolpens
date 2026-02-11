
char ecx_size(long param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (iVar1 != 0x40b) + '8';
  }
  return ' ';
}



int ecx_bits(long param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (uint)(iVar1 != 0x40b) * 8 + 0x1c0;
  }
  return 0xfd;
}



undefined8 ecx_security_bits(long param_1)

{
  if ((**(int **)(param_1 + 8) != 0x40a) && (**(int **)(param_1 + 8) != 0x43f)) {
    return 0xe0;
  }
  return 0x80;
}



undefined8 ecx_cmp_parameters(void)

{
  return 1;
}



undefined8 ecd_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  if (param_2 == 3) {
    *param_4 = 0;
    return 2;
  }
  return 0xfffffffe;
}



undefined8 ecx_pkey_dirty_cnt(void)

{
  return 1;
}



undefined8 ecd_size25519(void)

{
  return 0x40;
}



undefined8 ecd_size448(void)

{
  return 0x72;
}



int pkey_ecx_ctrl(undefined8 param_1,int param_2)

{
  return (uint)(param_2 == 2) * 3 + -2;
}



bool ecx_priv_decode_ex(EVP_PKEY *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *key;
  
  key = (void *)ossl_ecx_key_from_pkcs8(param_2,param_3,param_4);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}



int ecx_pkey_copy(EVP_PKEY *param_1,int *param_2)

{
  int iVar1;
  void *key;
  
  key = *(void **)(param_2 + 8);
  if (key != (void *)0x0) {
    key = (void *)ossl_ecx_key_dup(key,0x87);
    if (key == (void *)0x0) {
      return 0;
    }
  }
  iVar1 = EVP_PKEY_assign(param_1,*param_2,key);
  if (iVar1 != 0) {
    return iVar1;
  }
  ossl_ecx_key_free(key);
  return 0;
}



void ecx_free(long param_1)

{
  ossl_ecx_key_free(*(undefined8 *)(param_1 + 0x20));
  return;
}



undefined8 ecx_generic_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  EVP_PKEY *pkey;
  void *key;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  if ((0x20000000000001U >> ((ulong)(param_3 - 0x40a) & 0x3f) & 1) == 0) {
    cVar1 = (param_3 != 0x40b) * '\x02' + '\x01';
  }
  else {
    cVar1 = (param_3 != 0x40a) * '\x02';
  }
  key = (void *)ossl_ecx_key_new(*(undefined8 *)(param_2 + 8),cVar1,0,
                                 *(undefined8 *)(param_2 + 0x10));
  if (key == (void *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x189,"ecx_generic_import_from");
    ERR_set_error(5,0x80010,0);
  }
  else {
    iVar2 = ossl_ecx_key_fromdata(key,param_1,1);
    if (iVar2 != 0) {
      iVar2 = EVP_PKEY_assign(pkey,param_3,key);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ossl_ecx_key_free(key);
  }
  return 0;
}



void x25519_import_from(undefined8 param_1,undefined8 param_2)

{
  ecx_generic_import_from(param_1,param_2,0x40a);
  return;
}



void x448_import_from(undefined8 param_1,undefined8 param_2)

{
  ecx_generic_import_from(param_1,param_2,0x40b);
  return;
}



void ed25519_import_from(undefined8 param_1,undefined8 param_2)

{
  ecx_generic_import_from(param_1,param_2,0x43f);
  return;
}



void ed448_import_from(undefined8 param_1,undefined8 param_2)

{
  ecx_generic_import_from(param_1,param_2,0x440);
  return;
}



undefined4 ecx_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar4 = OSSL_PARAM_BLD_new();
  if (lVar4 == 0) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_octet_string(lVar4,&_LC1,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x58));
  if (iVar2 == 0) {
LAB_001003e0:
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x50) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      iVar2 = OSSL_PARAM_BLD_push_octet_string
                        (lVar4,&_LC2,*(long *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
      if (iVar2 == 0) goto LAB_001003e0;
    }
    uVar5 = OSSL_PARAM_BLD_to_param(lVar4);
    uVar3 = (*param_3)(param_2,uVar3,uVar5);
  }
  OSSL_PARAM_BLD_free(lVar4);
  OSSL_PARAM_free(uVar5);
  return uVar3;
}



undefined8 ecx_get_priv_key(long param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    *param_3 = uVar3;
    return 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x50), puVar4 != (undefined8 *)0x0)) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
      if (*param_3 < 0x20) {
        return 0;
      }
    }
    else {
      uVar3 = (ulong)(iVar1 != 0x40b) + 0x38;
      if (*param_3 < uVar3) {
        return 0;
      }
    }
    *param_3 = uVar3;
    *param_2 = *puVar4;
    *(undefined8 *)((long)param_2 + (uVar3 - 8)) = *(undefined8 *)((long)puVar4 + (uVar3 - 8));
    lVar2 = (long)param_2 - (long)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)puVar4 - lVar2);
    puVar5 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar3 = (ulong)((uint)((int)uVar3 + (int)lVar2) >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return 1;
  }
  return 0;
}



undefined8 ecx_get_pub_key(long param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    *param_3 = uVar4;
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    if (*param_3 < uVar4) {
      return 0;
    }
    *param_3 = uVar4;
    *param_2 = *(undefined8 *)(lVar2 + 0x11);
    *(undefined8 *)((long)param_2 + (uVar4 - 8)) = *(undefined8 *)(lVar2 + 9 + uVar4);
    lVar3 = (long)param_2 - (long)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((lVar2 + 0x11) - lVar3);
    puVar6 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulong)((uint)((int)uVar4 + (int)lVar3) >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return 1;
}



bool ecx_set_pub_key(EVP_PKEY *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *key;
  
  lVar2 = *(long *)&param_1[1].save_parameters;
  if (lVar2 != 0) {
    uVar1 = EVP_KEYMGMT_get0_provider(lVar2);
    lVar2 = ossl_provider_libctx(uVar1);
  }
  key = (void *)ossl_ecx_key_op(0,param_2,param_3,**(undefined4 **)&param_1->references,0,lVar2,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}



bool ecx_set_priv_key(EVP_PKEY *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *key;
  
  lVar2 = *(long *)&param_1[1].save_parameters;
  if (lVar2 != 0) {
    uVar1 = EVP_KEYMGMT_get0_provider(lVar2);
    lVar2 = ossl_provider_libctx(uVar1);
  }
  key = (void *)ossl_ecx_key_op(0,param_2,param_3,**(undefined4 **)&param_1->references,1,lVar2,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}



bool pkey_ecx_keygen(long param_1,EVP_PKEY *param_2)

{
  void *key;
  
  key = (void *)ossl_ecx_key_op(0,0,0,**(undefined4 **)(param_1 + 0x78),2,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_2,**(int **)(param_1 + 0x78),key);
  }
  return key != (void *)0x0;
}



int ecx_ctrl(EVP_PKEY *param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *key;
  char cVar3;
  
  if (param_2 == 9) {
    key = (void *)ossl_ecx_key_op(0,param_4,param_3,**(undefined4 **)&param_1->references,0,0,0);
    if (key != (void *)0x0) {
      EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
      return 1;
    }
  }
  else {
    if (param_2 != 10) {
      return -2;
    }
    if ((param_1->pkey).rsa != (rsa_st *)0x0) {
      iVar1 = **(int **)&param_1->references;
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = CRYPTO_memdup((undefined1 *)((long)&((param_1->pkey).rsa)->meth + 1),cVar3,
                            "crypto/ec/ecx_meth.c",0xe9);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)&param_1->references;
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
  }
  return 0;
}



undefined8 ecx_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ASN1_OBJECT *aobj;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_50;
  ASN1_OCTET_STRING local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (puVar1 = *(uchar **)(*(long *)(param_2 + 0x20) + 0x50), puVar1 == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x6a,"ecx_priv_encode");
    ERR_set_error(0x10,0x7b,0);
    uVar4 = 0;
  }
  else {
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      local_48.length = 0x20;
    }
    else {
      local_48.length = (iVar2 != 0x40b) + 0x38;
    }
    local_48.flags = 0;
    local_48.data = puVar1;
    iVar2 = i2d_ASN1_OCTET_STRING(&local_48,&local_50);
    puVar1 = local_50;
    if (iVar2 < 0) {
      ERR_new();
      uVar4 = 0x74;
    }
    else {
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar3 = PKCS8_pkey_set0(param_1,aobj,0,-1,(void *)0x0,puVar1,iVar2);
      uVar4 = 1;
      if (iVar3 != 0) goto LAB_001008ea;
      CRYPTO_clear_free(local_50,(long)iVar2,"crypto/ec/ecx_meth.c",0x7a);
      ERR_new();
      uVar4 = 0x7b;
    }
    ERR_set_debug("crypto/ec/ecx_meth.c",uVar4,"ecx_priv_encode");
    ERR_set_error(0x10,0x8000d,0);
    uVar4 = 0;
  }
LAB_001008ea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ecx_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  size_t len;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      len = 0x20;
    }
    else {
      len = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    iVar1 = CRYPTO_memcmp((void *)(*(long *)(param_1 + 0x20) + 0x11),
                          (void *)(*(long *)(param_2 + 0x20) + 0x11),len);
    return (ulong)(iVar1 == 0);
  }
  return 0xfffffffe;
}



undefined8 ecx_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  int penclen;
  char cVar2;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x25,"ecx_pub_encode");
    ERR_set_error(0x10,0x74,0);
  }
  else {
    iVar1 = **(int **)(param_2 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    penc = (uchar *)CRYPTO_memdup(*(long *)(param_2 + 0x20) + 0x11,cVar2,"crypto/ec/ecx_meth.c");
    if (penc != (uchar *)0x0) {
      iVar1 = **(int **)(param_2 + 8);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        penclen = 0x20;
      }
      else {
        penclen = (iVar1 != 0x40b) + 0x38;
      }
      aobj = OBJ_nid2obj(iVar1);
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,-1,(void *)0x0,penc,penclen);
      if (iVar1 != 0) {
        return 1;
      }
      CRYPTO_free(penc);
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_meth.c",0x30,"ecx_pub_encode");
      ERR_set_error(0x10,0x8000b,0);
    }
  }
  return 0;
}



undefined8 ecx_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  void *key;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  uchar *local_20;
  X509_ALGOR *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_20,&local_24,&local_18,param_2);
  if (iVar1 != 0) {
    key = (void *)ossl_ecx_key_op(local_18,local_20,local_24,**(undefined4 **)&param_1->references,0
                                  ,0,0);
    if (key != (void *)0x0) {
      EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
      uVar2 = 1;
      goto LAB_00100bfb;
    }
  }
  uVar2 = 0;
LAB_00100bfb:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecd_sig_info_set25519(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x43f,0x80,2);
  return 1;
}



undefined8 ecd_sig_info_set448(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x440,0xe0,2);
  return 1;
}



char ecd_item_verify(EVP_MD_CTX *param_1,undefined8 param_2,undefined8 param_3,X509_ALGOR *param_4,
                    undefined8 param_5,EVP_PKEY *param_6)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_2c;
  ASN1_OBJECT *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_28,&local_2c,(void **)0x0,param_4);
  iVar2 = OBJ_obj2nid(local_28);
  if ((iVar2 - 0x43fU < 2) && (local_2c == -1)) {
    iVar2 = EVP_DigestVerifyInit(param_1,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,param_6);
    cVar1 = (iVar2 != 0) * '\x02';
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x228,"ecd_item_verify");
    ERR_set_error(0x10,0x66,0);
    cVar1 = '\0';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
pkey_ecd_digestverify25519
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = EVP_MD_CTX_get_pkey_ctx();
  puVar2 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar1 + 0x88));
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x363,"pkey_ecd_digestverify25519");
    ERR_set_error(0x10,0x74,0);
  }
  else if (param_3 == 0x40) {
    uVar3 = ossl_ed25519_verify(param_4,param_5,param_2,(long)puVar2 + 0x11,0,0,0,0,0,*puVar2,
                                puVar2[1]);
    return uVar3;
  }
  return 0;
}



undefined8
pkey_ecd_digestsign25519
          (undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_MD_CTX_get_pkey_ctx();
  lVar2 = evp_pkey_get_legacy(*(undefined8 *)(lVar2 + 0x88));
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x32b,"pkey_ecd_digestsign25519");
    ERR_set_error(0x10,0x74,0);
  }
  else {
    if (param_2 == 0) {
LAB_00100ebc:
      *param_3 = 0x40;
      return 1;
    }
    if (*param_3 < 0x40) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_meth.c",0x334,"pkey_ecd_digestsign25519");
      ERR_set_error(0x10,100,0);
    }
    else {
      iVar1 = ossl_ed25519_sign(param_2,param_4,param_5,lVar2 + 0x11,*(undefined8 *)(lVar2 + 0x50),0
                                ,0,0,0,0,0,0);
      if (iVar1 != 0) goto LAB_00100ebc;
    }
  }
  return 0;
}



undefined8
pkey_ecd_digestverify448
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = EVP_MD_CTX_get_pkey_ctx();
  puVar2 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar1 + 0x88));
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x377,"pkey_ecd_digestverify448");
    ERR_set_error(0x10,0x74,0);
  }
  else if (param_3 == 0x72) {
    uVar3 = ossl_ed448_verify(*puVar2,param_4,param_5,param_2,(long)puVar2 + 0x11,0,0,0,puVar2[1]);
    return uVar3;
  }
  return 0;
}



undefined8
pkey_ecd_digestsign448
          (undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = EVP_MD_CTX_get_pkey_ctx();
  puVar3 = (undefined8 *)evp_pkey_get_legacy(*(undefined8 *)(lVar2 + 0x88));
  if (puVar3 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x348,"pkey_ecd_digestsign448");
    ERR_set_error(0x10,0x74,0);
  }
  else {
    if (param_2 == 0) {
LAB_0010107a:
      *param_3 = 0x72;
      return 1;
    }
    if (*param_3 < 0x72) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_meth.c",0x351,"pkey_ecd_digestsign448");
      ERR_set_error(0x10,100,0);
    }
    else {
      iVar1 = ossl_ed448_sign(*puVar3,param_2,param_4,param_5,(long)puVar3 + 0x11,puVar3[10],0,0,0,
                              puVar3[1]);
      if (iVar1 != 0) goto LAB_0010107a;
    }
  }
  return 0;
}



undefined8 pkey_ecd_ctrl(undefined8 param_1,int param_2,undefined8 param_3,EVP_MD *param_4)

{
  EVP_MD *pEVar1;
  
  if (param_2 == 1) {
    if (param_4 != (EVP_MD *)0x0) {
      pEVar1 = EVP_md_null();
      if (param_4 != pEVar1) {
        ERR_new();
        ERR_set_debug("crypto/ec/ecx_meth.c",0x389,"pkey_ecd_ctrl");
        ERR_set_error(0x10,0x8a,0);
        return 0;
      }
    }
    return 1;
  }
  if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}



undefined8 validate_ecx_derive_isra_0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecx_meth.c",0x2db,"validate_ecx_derive");
    ERR_set_error(0x10,0x8c,0);
  }
  else {
    lVar1 = evp_pkey_get_legacy();
    lVar2 = evp_pkey_get_legacy(*(undefined8 *)(param_1 + 0x90));
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_meth.c",0x2e1,"validate_ecx_derive");
      ERR_set_error(0x10,0x7b,0);
    }
    else {
      if (lVar2 != 0) {
        *param_2 = *(long *)(lVar1 + 0x50);
        *param_3 = lVar2 + 0x11;
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_meth.c",0x2e5,"validate_ecx_derive");
      ERR_set_error(0x10,0x85,0);
    }
  }
  return 0;
}



undefined8 pkey_ecx_derive448(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = validate_ecx_derive_isra_0(param_1,&local_30,&local_28);
  if (iVar1 == 0) {
LAB_00101328:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar1 = ossl_x448(param_2,local_30,local_28);
      if (iVar1 == 0) goto LAB_00101328;
    }
    *param_3 = 0x38;
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pkey_ecx_derive25519(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = validate_ecx_derive_isra_0(param_1,&local_30,&local_28);
  if (iVar1 == 0) {
LAB_001013b8:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar1 = ossl_x25519(param_2,local_30,local_28);
      if (iVar1 == 0) goto LAB_001013b8;
    }
    *param_3 = 0x20;
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ecx_key_print_isra_0(BIO *param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  char *format;
  
  uVar5 = (ulong)param_3;
  lVar1 = *(long *)(param_2 + 0x20);
  pcVar3 = OBJ_nid2ln(**(int **)(param_2 + 8));
  if (param_4 == 1) {
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
      format = "%*s<INVALID PRIVATE KEY>\n";
      goto LAB_00101548;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Private-Key:\n",uVar5,&_LC3,pcVar3);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = BIO_printf(param_1,"%*spriv:\n",uVar5,&_LC3);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = ASN1_buf_print(param_1,*(undefined8 *)(lVar1 + 0x50),cVar4,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      format = "%*s<INVALID PUBLIC KEY>\n";
LAB_00101548:
      iVar2 = BIO_printf(param_1,format,uVar5,&_LC3,pcVar3);
      return 0 < iVar2;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Public-Key:\n",uVar5,&_LC3,pcVar3);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = BIO_printf(param_1,"%*spub:\n",uVar5,&_LC3);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 8);
  if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = ASN1_buf_print(param_1,lVar1 + 0x11,cVar4,param_3 + 4);
  return iVar2 != 0;
}



void ecx_pub_print(void)

{
  ecx_key_print_isra_0();
  return;
}



void ecx_priv_print(void)

{
  ecx_key_print_isra_0();
  return;
}



undefined8 ecd_item_sign448(void)

{
  ASN1_OBJECT *pAVar1;
  X509_ALGOR *in_RCX;
  X509_ALGOR *in_R8;
  
  pAVar1 = OBJ_nid2obj(0x440);
  X509_ALGOR_set0(in_RCX,pAVar1,-1,(void *)0x0);
  if (in_R8 != (X509_ALGOR *)0x0) {
    pAVar1 = OBJ_nid2obj(0x440);
    X509_ALGOR_set0(in_R8,pAVar1,-1,(void *)0x0);
  }
  return 3;
}



undefined8 ecd_item_sign25519(void)

{
  ASN1_OBJECT *pAVar1;
  X509_ALGOR *in_RCX;
  X509_ALGOR *in_R8;
  
  pAVar1 = OBJ_nid2obj(0x43f);
  X509_ALGOR_set0(in_RCX,pAVar1,-1,(void *)0x0);
  if (in_R8 != (X509_ALGOR *)0x0) {
    pAVar1 = OBJ_nid2obj(0x43f);
    X509_ALGOR_set0(in_R8,pAVar1,-1,(void *)0x0);
  }
  return 3;
}



undefined1 * ossl_ecx25519_pkey_method(void)

{
  return ecx25519_pkey_meth;
}



undefined1 * ossl_ecx448_pkey_method(void)

{
  return ecx448_pkey_meth;
}



undefined1 * ossl_ed25519_pkey_method(void)

{
  return ed25519_pkey_meth;
}



undefined1 * ossl_ed448_pkey_method(void)

{
  return ed448_pkey_meth;
}


