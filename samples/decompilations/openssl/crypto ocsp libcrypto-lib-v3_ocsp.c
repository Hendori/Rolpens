
undefined8 i2r_ocsp_nocheck(void)

{
  return 1;
}



bool i2r_ocsp_crlid(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_4;
  if (((*param_2 == 0) ||
      (((iVar1 = BIO_printf(param_3,"%*scrlUrl: ",uVar2,&_LC0), 0 < iVar1 &&
        (iVar1 = ASN1_STRING_print(param_3,(ASN1_STRING *)*param_2), iVar1 != 0)) &&
       (iVar1 = BIO_write(param_3,&_LC2,1), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = BIO_printf(param_3,"%*scrlNum: ",uVar2,&_LC0), 0 < iVar1 &&
        (iVar1 = i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)param_2[1]), 0 < iVar1)) &&
       (iVar1 = BIO_write(param_3,&_LC2,1), 0 < iVar1)))))) {
    if (param_2[2] == 0) {
      return true;
    }
    iVar1 = BIO_printf(param_3,"%*scrlTime: ",uVar2,&_LC0);
    if ((0 < iVar1) &&
       (iVar1 = ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[2]), iVar1 != 0))
    {
      iVar1 = BIO_write(param_3,&_LC2,1);
      return 0 < iVar1;
    }
  }
  return false;
}



bool i2r_ocsp_acutoff(undefined8 param_1,ASN1_GENERALIZEDTIME *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
  bVar2 = false;
  if (0 < iVar1) {
    iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



bool i2r_object(undefined8 param_1,ASN1_OBJECT *param_2,BIO *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
  bVar1 = false;
  if (0 < iVar2) {
    iVar2 = i2a_ASN1_OBJECT(param_3,param_2);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}



bool i2r_ocsp_nonce(undefined8 param_1,ASN1_STRING *param_2,BIO *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
  bVar1 = false;
  if (0 < iVar2) {
    iVar2 = i2a_ASN1_STRING(param_3,param_2,4);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}



ulong i2d_ocsp_nonce(uint *param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    memcpy((void *)*param_2,*(void **)(param_1 + 2),(long)(int)*param_1);
    uVar1 = *param_1;
    *param_2 = *param_2 + (long)(int)uVar1;
    return (long)(int)uVar1;
  }
  return (ulong)*param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_OCTET_STRING * ocsp_nonce_new(void)

{
  ASN1_OCTET_STRING *pAVar1;
  
  pAVar1 = ASN1_OCTET_STRING_new();
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ocsp_nonce_free(ASN1_OCTET_STRING *a)

{
  ASN1_OCTET_STRING_free(a);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_ocsp_nocheck(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



undefined8 i2r_ocsp_serviceloc(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = BIO_printf(param_3,"%*sIssuer: ",(ulong)param_4,&_LC0);
  if ((0 < iVar1) &&
     (iVar1 = X509_NAME_print_ex(param_3,(X509_NAME *)*param_2,0,0x82031f), 0 < iVar1)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(param_2[1]);
      if (iVar2 <= iVar1) {
        return 1;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar1);
      iVar2 = BIO_printf(param_3,"\n%*s",(ulong)(param_4 * 2),&_LC0);
      if ((((iVar2 < 1) || (iVar2 = i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)*puVar3), iVar2 < 1)) ||
          (iVar2 = BIO_puts(param_3," - "), iVar2 < 1)) ||
         (iVar2 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)puVar3[1]), iVar2 < 1)) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}



ASN1_OCTET_STRING * d2i_ocsp_nonce(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  if (param_1 == (long *)0x0) {
    str = ASN1_OCTET_STRING_new();
    if (str != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = ASN1_OCTET_STRING_set(str,(uchar *)*param_2,(int)param_3);
      if (iVar1 != 0) {
        *param_2 = *param_2 + param_3;
        return str;
      }
    }
  }
  else {
    str = (ASN1_OCTET_STRING *)*param_1;
    if (str == (ASN1_OCTET_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) goto LAB_001003e8;
    }
    else {
LAB_001003e8:
      iVar1 = ASN1_OCTET_STRING_set(str,(uchar *)*param_2,(int)param_3);
      if (iVar1 != 0) {
        *param_2 = *param_2 + param_3;
        *param_1 = (long)str;
        return str;
      }
    }
    if ((ASN1_OCTET_STRING *)*param_1 == str) goto LAB_00100436;
  }
  ASN1_OCTET_STRING_free(str);
LAB_00100436:
  ERR_new();
  ERR_set_debug("crypto/ocsp/v3_ocsp.c",0xce,"d2i_ocsp_nonce");
  ERR_set_error(0x27,0x8000d,0);
  return (ASN1_OCTET_STRING *)0x0;
}


