
PKCS12 * PKCS12_init_ex(int param_1,undefined8 param_2,undefined8 param_3)

{
  PKCS7 *pPVar1;
  PKCS7 *pPVar2;
  int iVar3;
  PKCS12 *a;
  ASN1_OBJECT *pAVar4;
  ASN1_OCTET_STRING *pAVar5;
  
  a = PKCS12_new();
  if (a == (PKCS12 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_init.c",0x17,"PKCS12_init_ex");
    ERR_set_error(0x23,0x8000d,0);
  }
  else {
    iVar3 = ASN1_INTEGER_set(a->version,3);
    if (iVar3 != 0) {
      pPVar1 = a->authsafes;
      pAVar4 = OBJ_nid2obj(param_1);
      pPVar2 = a->authsafes;
      pPVar1->type = pAVar4;
      ossl_pkcs7_set0_libctx(pPVar2,param_2);
      iVar3 = ossl_pkcs7_set1_propq(a->authsafes,param_3);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_init.c",0x20,"PKCS12_init_ex");
        ERR_set_error(0x23,0x80021,0);
      }
      else {
        if (param_1 != 0x15) {
          ERR_new();
          ERR_set_debug("crypto/pkcs12/p12_init.c",0x2c,"PKCS12_init_ex");
          ERR_set_error(0x23,0x77,0);
          PKCS12_free(a);
          return (PKCS12 *)0x0;
        }
        pPVar1 = a->authsafes;
        pAVar5 = ASN1_OCTET_STRING_new();
        (pPVar1->d).data = pAVar5;
        if (pAVar5 != (ASN1_OCTET_STRING *)0x0) {
          return a;
        }
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_init.c",0x27,"PKCS12_init_ex");
        ERR_set_error(0x23,0x8000d,0);
      }
    }
    PKCS12_free(a);
  }
  return (PKCS12 *)0x0;
}



PKCS12 * PKCS12_init(int mode)

{
  PKCS12 *pPVar1;
  
  pPVar1 = (PKCS12 *)PKCS12_init_ex(mode,0,0);
  return pPVar1;
}



long ossl_pkcs12_get0_pkcs7ctx(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = lVar1 + 0x28;
    }
    return lVar1;
  }
  return 0;
}


