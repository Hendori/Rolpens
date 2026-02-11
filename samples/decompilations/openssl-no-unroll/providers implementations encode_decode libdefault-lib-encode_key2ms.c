
undefined1 * key2pvk_settable_ctx_params(void)

{
  return settables_3;
}



bool key2ms_does_selection(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0;
}



void dsa2pvk_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void rsa2pvk_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dsa2pvk_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void rsa2pvk_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



bool key2pvk_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"encrypt-level");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 8);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



void key2ms_freectx(void *param_1)

{
  ossl_pw_clear_passphrase_data((long)param_1 + 0x10);
  CRYPTO_free(param_1);
  return;
}



void key2ms_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x40,"providers/implementations/encode_decode/encode_key2ms.c",0x49);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 2;
  }
  return;
}



undefined4
key2pvk_encode_part_0
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  BIO *a;
  
  pkey = EVP_PKEY_new();
  if (((pkey != (EVP_PKEY *)0x0) && (iVar1 = (*param_4)(pkey,param_2), iVar1 != 0)) &&
     ((param_5 == 0 ||
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 2,param_5,param_6), iVar1 != 0)))) {
    uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
    a = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_3);
    if (a != (BIO *)0x0) {
      uVar2 = i2b_PVK_bio_ex(a,pkey,*(undefined4 *)(param_1 + 1),&ossl_pw_pvk_password,param_1 + 2,
                             uVar3,0);
      BIO_free(a);
      goto LAB_0010019a;
    }
  }
  uVar2 = 0;
LAB_0010019a:
  EVP_PKEY_free(pkey);
  return uVar2;
}



undefined8
dsa2pvk_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
              undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    ERR_new(param_1,param_3);
    ERR_set_debug("providers/implementations/encode_decode/encode_key2ms.c",0xe5,"dsa2pvk_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    return 0;
  }
  uVar1 = key2pvk_encode_part_0(param_1,param_3,param_2,EVP_PKEY_set1_DSA,param_6);
  return uVar1;
}



undefined8
rsa2pvk_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
              undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    ERR_new(param_1,param_3);
    ERR_set_debug("providers/implementations/encode_decode/encode_key2ms.c",0xe9,"rsa2pvk_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    return 0;
  }
  uVar1 = key2pvk_encode_part_0(param_1,param_3,param_2,EVP_PKEY_set1_RSA,param_6);
  return uVar1;
}



int dsa2msblob_encode(undefined8 *param_1,undefined8 param_2,dsa_st *param_3,long param_4,
                     ulong param_5)

{
  bool bVar1;
  int iVar2;
  EVP_PKEY *pkey;
  BIO *out;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2ms.c",0xe6,"dsa2msblob_encode"
                 );
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    bVar1 = true;
    if ((param_5 & 2) == 0) {
      return 0;
    }
  }
  else {
    bVar1 = false;
  }
  pkey = EVP_PKEY_new();
  if (((pkey == (EVP_PKEY *)0x0) || (iVar2 = EVP_PKEY_set1_DSA(pkey,param_3), iVar2 == 0)) ||
     (out = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_2), out == (BIO *)0x0)) {
    iVar2 = 0;
  }
  else {
    if (bVar1) {
      iVar2 = i2b_PublicKey_bio(out,pkey);
    }
    else {
      iVar2 = i2b_PrivateKey_bio(out,pkey);
    }
    BIO_free(out);
  }
  EVP_PKEY_free(pkey);
  return iVar2;
}



void rsa2msblob_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dsa2msblob_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void rsa2msblob_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void dsa2msblob_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



int rsa2msblob_encode(undefined8 *param_1,undefined8 param_2,rsa_st *param_3,long param_4,
                     ulong param_5)

{
  bool bVar1;
  int iVar2;
  EVP_PKEY *pkey;
  BIO *out;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2ms.c",0xea,"rsa2msblob_encode"
                 );
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    bVar1 = true;
    if ((param_5 & 2) == 0) {
      return 0;
    }
  }
  else {
    bVar1 = false;
  }
  pkey = EVP_PKEY_new();
  if (((pkey == (EVP_PKEY *)0x0) || (iVar2 = EVP_PKEY_set1_RSA(pkey,param_3), iVar2 == 0)) ||
     (out = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_2), out == (BIO *)0x0)) {
    iVar2 = 0;
  }
  else {
    if (bVar1) {
      iVar2 = i2b_PublicKey_bio(out,pkey);
    }
    else {
      iVar2 = i2b_PrivateKey_bio(out,pkey);
    }
    BIO_free(out);
  }
  EVP_PKEY_free(pkey);
  return iVar2;
}


