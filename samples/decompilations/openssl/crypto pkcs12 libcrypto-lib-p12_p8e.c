
undefined8 *
PKCS8_set0_pbe_ex(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ASN1_OCTET_STRING *a;
  undefined8 *puVar2;
  
  uVar1 = PKCS8_PRIV_KEY_INFO_it();
  a = (ASN1_OCTET_STRING *)PKCS12_item_i2d_encrypt_ex(param_4,uVar1,param_1,param_2,param_3,1);
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_p8e.c",0x50,"PKCS8_set0_pbe_ex");
    ERR_set_error(0x23,0x67,0);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/pkcs12/p12_p8e.c",0x54);
    if (puVar2 == (undefined8 *)0x0) {
      ASN1_OCTET_STRING_free(a);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      *puVar2 = param_4;
      puVar2[1] = a;
    }
  }
  return puVar2;
}



long PKCS8_encrypt_ex(int param_1,long param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  X509_ALGOR *a;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == -1) {
    if (param_2 == 0) {
      ERR_new();
      uVar3 = 0x1b;
LAB_00100221:
      ERR_set_debug("crypto/pkcs12/p12_p8e.c",uVar3,"PKCS8_encrypt_ex");
      ERR_set_error(0x23,0xc0102,0);
      return 0;
    }
    param_1 = -1;
  }
  else {
    ERR_set_mark();
    iVar1 = EVP_PBE_find(1,param_1,(int *)0x0,(int *)0x0,(undefined1 **)0x0);
    if (iVar1 == 0) {
      ERR_pop_to_mark();
      a = (X509_ALGOR *)PKCS5_pbe_set_ex(param_1,param_7,param_5,param_6,param_9);
      goto LAB_00100127;
    }
    ERR_clear_last_mark();
    if (param_2 == 0) {
      ERR_new();
      uVar3 = 0x25;
      goto LAB_00100221;
    }
  }
  a = (X509_ALGOR *)PKCS5_pbe2_set_iv_ex(param_2,param_7,param_5,param_6,0,param_1,param_9);
LAB_00100127:
  if (a == (X509_ALGOR *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_p8e.c",0x30,"PKCS8_encrypt_ex");
    ERR_set_error(0x23,0x8000d,0);
    lVar2 = 0;
  }
  else {
    lVar2 = PKCS8_set0_pbe_ex(param_3,param_4,param_8,a,param_9,param_10);
    if (lVar2 == 0) {
      X509_ALGOR_free(a);
    }
  }
  return lVar2;
}



X509_SIG *
PKCS8_encrypt(int pbe_nid,EVP_CIPHER *cipher,char *pass,int passlen,uchar *salt,int saltlen,int iter
             ,PKCS8_PRIV_KEY_INFO *p8)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)PKCS8_encrypt_ex();
  return pXVar1;
}



void PKCS8_set0_pbe(void)

{
  PKCS8_set0_pbe_ex();
  return;
}


