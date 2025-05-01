
void * i2s_ASN1_UTF8STRING(undefined8 param_1,int *param_2)

{
  int iVar1;
  void *__dest;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      __dest = CRYPTO_malloc(*param_2 + 1,"crypto/x509/v3_utf8.c",0x26);
      if (__dest != (void *)0x0) {
        iVar1 = *param_2;
        __dest = memcpy(__dest,*(void **)(param_2 + 2),(long)iVar1);
        *(undefined1 *)((long)__dest + (long)iVar1) = 0;
      }
      return __dest;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/x509/v3_utf8.c",0x23,"i2s_ASN1_UTF8STRING");
  ERR_set_error(0x22,0xc0102,0);
  return (void *)0x0;
}



ASN1_UTF8STRING * s2i_ASN1_UTF8STRING(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  ASN1_UTF8STRING *str;
  size_t sVar2;
  ASN1_UTF8STRING *pAVar3;
  
  if (param_3 == (char *)0x0) {
    ERR_new();
    pAVar3 = (ASN1_UTF8STRING *)0x0;
    ERR_set_debug("crypto/x509/v3_utf8.c",0x32,"s2i_ASN1_UTF8STRING");
    ERR_set_error(0x22,0x6b,0);
  }
  else {
    str = ASN1_UTF8STRING_new();
    if (str == (ASN1_UTF8STRING *)0x0) {
      ERR_new();
      pAVar3 = (ASN1_UTF8STRING *)0x0;
      ERR_set_debug("crypto/x509/v3_utf8.c",0x36,"s2i_ASN1_UTF8STRING");
      ERR_set_error(0x22,0x8000d,0);
    }
    else {
      sVar2 = strlen(param_3);
      iVar1 = ASN1_STRING_set(str,param_3,(int)sVar2);
      pAVar3 = str;
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_utf8.c",0x3a,"s2i_ASN1_UTF8STRING");
        ERR_set_error(0x22,0x8000d,0);
        pAVar3 = (ASN1_UTF8STRING *)0x0;
        ASN1_UTF8STRING_free(str);
      }
    }
  }
  return pAVar3;
}


