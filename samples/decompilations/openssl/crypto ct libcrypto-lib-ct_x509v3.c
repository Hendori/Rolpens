
long x509_ext_d2i_SCT_LIST(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = d2i_SCT_LIST();
  if (lVar2 != 0) {
    while( true ) {
      iVar1 = OPENSSL_sk_num(lVar2);
      if (iVar1 <= iVar4) {
        return lVar2;
      }
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = SCT_set_source(uVar3,2);
      if (iVar1 != 1) break;
      iVar4 = iVar4 + 1;
    }
    SCT_LIST_free(lVar2);
    *param_1 = 0;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_poison(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



void i2s_poison(void)

{
  CRYPTO_strdup("NULL","crypto/ct/ct_x509v3.c",0x12);
  return;
}



undefined8 i2r_SCT_LIST(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  SCT_LIST_print(param_2,param_3,param_4,&_LC2,0);
  return 1;
}



long ocsp_ext_d2i_SCT_LIST(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = d2i_SCT_LIST();
  if (lVar2 != 0) {
    while( true ) {
      iVar1 = OPENSSL_sk_num(lVar2);
      if (iVar1 <= iVar4) {
        return lVar2;
      }
      uVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = SCT_set_source(uVar3,3);
      if (iVar1 != 1) break;
      iVar4 = iVar4 + 1;
    }
    SCT_LIST_free(lVar2);
    *param_1 = 0;
  }
  return 0;
}


