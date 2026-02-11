
undefined8 replace_dirName(long *param_1,X509_NAME *param_2)

{
  int iVar1;
  X509_NAME *a;
  long lVar2;
  GENERAL_NAME *a_00;
  
  a = X509_NAME_dup(param_2);
  if (a == (X509_NAME *)0x0) {
    ERR_new();
    lVar2 = 0;
    a_00 = (GENERAL_NAME *)0x0;
    ERR_set_debug("crypto/x509/x509aset.c",0x2c,"replace_dirName");
    ERR_set_error(0xb,0x8000d,0);
  }
  else {
    lVar2 = OPENSSL_sk_new_null();
    if (lVar2 == 0) {
      ERR_new();
      a_00 = (GENERAL_NAME *)0x0;
      ERR_set_debug("crypto/x509/x509aset.c",0x31,"replace_dirName");
      ERR_set_error(0xb,0x8000d,0);
    }
    else {
      a_00 = GENERAL_NAME_new();
      if (a_00 == (GENERAL_NAME *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x509aset.c",0x36,"replace_dirName");
        ERR_set_error(0xb,0x8000d,0);
      }
      else {
        iVar1 = OPENSSL_sk_push(lVar2,a_00);
        if (0 < iVar1) {
          GENERAL_NAME_set0_value(a_00,4,a);
          GENERAL_NAMES_free((GENERAL_NAMES *)*param_1);
          *param_1 = lVar2;
          return 1;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/x509aset.c",0x3b,"replace_dirName");
        ERR_set_error(0xb,0x8000f,0);
      }
    }
  }
  GENERAL_NAME_free(a_00);
  OPENSSL_sk_free(lVar2);
  X509_NAME_free(a);
  return 0;
}



bool OSSL_OBJECT_DIGEST_INFO_set1_digest
               (ASN1_ENUMERATED *param_1,int param_2,undefined8 param_3,ASN1_STRING *param_4)

{
  int iVar1;
  
  iVar1 = ASN1_ENUMERATED_set(param_1,(long)param_2);
  if (0 < iVar1) {
    iVar1 = X509_ALGOR_copy(&param_1[1].data,param_3);
    if (0 < iVar1) {
      iVar1 = ASN1_STRING_copy(param_1 + 2,param_4);
      return 0 < iVar1;
    }
  }
  return false;
}



void OSSL_ISSUER_SERIAL_set1_issuer(void)

{
  replace_dirName();
  return;
}



void OSSL_ISSUER_SERIAL_set1_serial(long param_1,ASN1_STRING *param_2)

{
  ASN1_STRING_copy((ASN1_STRING *)(param_1 + 8),param_2);
  return;
}



bool OSSL_ISSUER_SERIAL_set1_issuerUID(long param_1,ASN1_STRING *param_2)

{
  ASN1_STRING *pAVar1;
  
  ASN1_BIT_STRING_free(*(ASN1_BIT_STRING **)(param_1 + 0x20));
  pAVar1 = ASN1_STRING_dup(param_2);
  *(ASN1_STRING **)(param_1 + 0x20) = pAVar1;
  if (pAVar1 == (ASN1_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509aset.c",0x71,"OSSL_ISSUER_SERIAL_set1_issuerUID");
    ERR_set_error(0xb,0x8000d,0);
  }
  return pAVar1 != (ASN1_STRING *)0x0;
}



void X509_ACERT_set_version(undefined8 *param_1,long param_2)

{
  ASN1_INTEGER_set((ASN1_INTEGER *)*param_1,param_2);
  return;
}



void X509_ACERT_set0_holder_entityName(long *param_1,undefined8 param_2)

{
  GENERAL_NAMES_free(*(GENERAL_NAMES **)(*param_1 + 0x20));
  *(undefined8 *)(*param_1 + 0x20) = param_2;
  return;
}



void X509_ACERT_set0_holder_baseCertId(long *param_1,undefined8 param_2)

{
  OSSL_ISSUER_SERIAL_free(*(undefined8 *)(*param_1 + 0x18));
  *(undefined8 *)(*param_1 + 0x18) = param_2;
  return;
}



void X509_ACERT_set0_holder_digest(long *param_1,undefined8 param_2)

{
  OSSL_OBJECT_DIGEST_INFO_free(*(undefined8 *)(*param_1 + 0x28));
  *(undefined8 *)(*param_1 + 0x28) = param_2;
  return;
}



undefined8 X509_ACERT_set1_issuerName(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(*param_1 + 0x38) != 0) {
    uVar2 = replace_dirName();
    return uVar2;
  }
  lVar3 = X509_ACERT_ISSUER_V2FORM_new();
  if (lVar3 != 0) {
    lVar1 = *param_1;
    *(long *)(lVar1 + 0x38) = lVar3;
    *(undefined4 *)(lVar1 + 0x30) = 1;
    uVar2 = replace_dirName();
    return uVar2;
  }
  ERR_new(0,param_2);
  ERR_set_debug("crypto/x509/x509aset.c",0x9a,"X509_ACERT_set1_issuerName");
  ERR_set_error(0xb,0x8000d,0);
  return 0;
}



void X509_ACERT_set1_serialNumber(long *param_1,ASN1_STRING *param_2)

{
  ASN1_STRING_copy((ASN1_STRING *)(*param_1 + 0x50),param_2);
  return;
}



undefined8 X509_ACERT_set1_notBefore(long *param_1,ASN1_STRING *param_2)

{
  long lVar1;
  ASN1_STRING *pAVar2;
  
  if (param_2->type != 0x18) {
    return 0;
  }
  lVar1 = *param_1;
  if (param_2 != *(ASN1_STRING **)(lVar1 + 0x68)) {
    pAVar2 = ASN1_STRING_dup(param_2);
    if (pAVar2 == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509aset.c",0x1b,"replace_gentime");
      ERR_set_error(0xb,0x8000d,0);
      return 0;
    }
    ASN1_STRING_free(*(ASN1_STRING **)(lVar1 + 0x68));
    *(ASN1_STRING **)(lVar1 + 0x68) = pAVar2;
  }
  return 1;
}



undefined8 X509_ACERT_set1_notAfter(long *param_1,ASN1_STRING *param_2)

{
  long lVar1;
  ASN1_STRING *pAVar2;
  
  if (param_2->type != 0x18) {
    return 0;
  }
  lVar1 = *param_1;
  if (param_2 != *(ASN1_STRING **)(lVar1 + 0x70)) {
    pAVar2 = ASN1_STRING_dup(param_2);
    if (pAVar2 == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x509aset.c",0x1b,"replace_gentime");
      ERR_set_error(0xb,0x8000d,0);
      return 0;
    }
    ASN1_STRING_free(*(ASN1_STRING **)(lVar1 + 0x70));
    *(ASN1_STRING **)(lVar1 + 0x70) = pAVar2;
  }
  return 1;
}


