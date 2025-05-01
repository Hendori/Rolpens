
undefined1 * PKCS7_adb(void)

{
  return internal_adb_11;
}



undefined1 * PKCS7_it(void)

{
  return local_it_12;
}



undefined1 * PKCS7_SIGNED_it(void)

{
  return local_it_10;
}



undefined1 * PKCS7_SIGNER_INFO_it(void)

{
  return local_it_9;
}



undefined1 * PKCS7_ISSUER_AND_SERIAL_it(void)

{
  return local_it_8;
}



undefined1 * PKCS7_ENVELOPE_it(void)

{
  return local_it_7;
}



undefined1 * PKCS7_RECIP_INFO_it(void)

{
  return local_it_6;
}



undefined1 * PKCS7_ENC_CONTENT_it(void)

{
  return local_it_5;
}



undefined1 * PKCS7_SIGN_ENVELOPE_it(void)

{
  return local_it_4;
}



undefined1 * PKCS7_ENCRYPT_it(void)

{
  return local_it_3;
}



undefined1 * PKCS7_DIGEST_it(void)

{
  return local_it_2;
}



bool pk7_cb(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  BIO *pBVar2;
  
  if (param_1 == 0xc) {
LAB_0010011c:
    pBVar2 = PKCS7_dataInit((PKCS7 *)*param_2,(BIO *)*param_4);
    param_4[1] = pBVar2;
    return pBVar2 != (BIO *)0x0;
  }
  if (param_1 < 0xd) {
    if (param_1 == 10) {
      iVar1 = PKCS7_stream((uchar ***)(param_4 + 2),(PKCS7 *)*param_2);
      if (iVar1 < 1) {
        return false;
      }
      goto LAB_0010011c;
    }
    if (param_1 != 0xb) {
      return true;
    }
  }
  else if (param_1 != 0xd) {
    return true;
  }
  iVar1 = PKCS7_dataFinal((PKCS7 *)*param_2,(BIO *)param_4[1]);
  return 0 < iVar1;
}



undefined8 ri_cb(int param_1,long *param_2)

{
  if (param_1 != 3) {
    return 1;
  }
  X509_free(*(X509 **)(*param_2 + 0x20));
  return 1;
}



undefined8 si_cb(int param_1,long *param_2)

{
  if (param_1 != 3) {
    return 1;
  }
  EVP_PKEY_free(*(EVP_PKEY **)(*param_2 + 0x38));
  return 1;
}



PKCS7 * d2i_PKCS7(PKCS7 **a,uchar **in,long len)

{
  undefined8 uVar1;
  PKCS7 *pPVar2;
  uchar *puVar3;
  
  if (a == (PKCS7 **)0x0) {
    pPVar2 = (PKCS7 *)0x0;
    puVar3 = (uchar *)0x0;
  }
  else {
    pPVar2 = *a;
    puVar3 = (uchar *)0x0;
    if (pPVar2 != (PKCS7 *)0x0) {
      puVar3 = pPVar2[1].asn1;
      pPVar2 = (PKCS7 *)pPVar2[1].length;
    }
  }
  uVar1 = PKCS7_it();
  pPVar2 = (PKCS7 *)ASN1_item_d2i_ex(a,in,len,uVar1,puVar3,pPVar2);
  if (pPVar2 != (PKCS7 *)0x0) {
    ossl_pkcs7_resolve_libctx(pPVar2);
  }
  return pPVar2;
}



int i2d_PKCS7(PKCS7 *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7 * PKCS7_new(void)

{
  ASN1_ITEM *it;
  PKCS7 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  pPVar1 = (PKCS7 *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_free(PKCS7 *a)

{
  ASN1_ITEM *it;
  
  if (a != (PKCS7 *)0x0) {
    CRYPTO_free((void *)a[1].length);
    it = (ASN1_ITEM *)PKCS7_it();
    ASN1_item_free((ASN1_VALUE *)a,it);
    return;
  }
  return;
}



PKCS7 * PKCS7_new_ex(uchar *param_1,char *param_2)

{
  undefined8 uVar1;
  PKCS7 *a;
  char *pcVar2;
  
  uVar1 = PKCS7_it();
  a = (PKCS7 *)ASN1_item_new_ex(uVar1,param_1,param_2);
  if (a != (PKCS7 *)0x0) {
    a[1].asn1 = param_1;
    a[1].length = 0;
    if (param_2 == (char *)0x0) {
      return a;
    }
    pcVar2 = CRYPTO_strdup(param_2,"crypto/pkcs7/pk7_asn1.c",0x67);
    a[1].length = (long)pcVar2;
    if (pcVar2 != (char *)0x0) {
      return a;
    }
    PKCS7_free(a);
  }
  return (PKCS7 *)0x0;
}



int i2d_PKCS7_NDEF(PKCS7 *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



PKCS7 * PKCS7_dup(PKCS7 *p7)

{
  ASN1_ITEM *it;
  PKCS7 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  pPVar1 = (PKCS7 *)ASN1_item_dup(it,p7);
  return pPVar1;
}



PKCS7_SIGNED * d2i_PKCS7_SIGNED(PKCS7_SIGNED **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_SIGNED *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  pPVar1 = (PKCS7_SIGNED *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_SIGNED(PKCS7_SIGNED *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_SIGNED * PKCS7_SIGNED_new(void)

{
  ASN1_ITEM *it;
  PKCS7_SIGNED *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  pPVar1 = (PKCS7_SIGNED *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_SIGNED_free(PKCS7_SIGNED *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_SIGNER_INFO * d2i_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_SIGNER_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNER_INFO_it();
  pPVar1 = (PKCS7_SIGNER_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNER_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_SIGNER_INFO * PKCS7_SIGNER_INFO_new(void)

{
  ASN1_ITEM *it;
  PKCS7_SIGNER_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNER_INFO_it();
  pPVar1 = (PKCS7_SIGNER_INFO *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_SIGNER_INFO_free(PKCS7_SIGNER_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_SIGNER_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_ISSUER_AND_SERIAL *
d2i_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  pPVar1 = (PKCS7_ISSUER_AND_SERIAL *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ISSUER_AND_SERIAL * PKCS7_ISSUER_AND_SERIAL_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ISSUER_AND_SERIAL *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  pPVar1 = (PKCS7_ISSUER_AND_SERIAL *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_ENVELOPE * d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  pPVar1 = (PKCS7_ENVELOPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_ENVELOPE(PKCS7_ENVELOPE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENVELOPE * PKCS7_ENVELOPE_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  pPVar1 = (PKCS7_ENVELOPE *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_ENVELOPE_free(PKCS7_ENVELOPE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_RECIP_INFO * d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_RECIP_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  pPVar1 = (PKCS7_RECIP_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_RECIP_INFO * PKCS7_RECIP_INFO_new(void)

{
  ASN1_ITEM *it;
  PKCS7_RECIP_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  pPVar1 = (PKCS7_RECIP_INFO *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_RECIP_INFO_free(PKCS7_RECIP_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_ENC_CONTENT * d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENC_CONTENT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  pPVar1 = (PKCS7_ENC_CONTENT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENC_CONTENT * PKCS7_ENC_CONTENT_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENC_CONTENT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  pPVar1 = (PKCS7_ENC_CONTENT *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_SIGN_ENVELOPE * d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_SIGN_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  pPVar1 = (PKCS7_SIGN_ENVELOPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_SIGN_ENVELOPE * PKCS7_SIGN_ENVELOPE_new(void)

{
  ASN1_ITEM *it;
  PKCS7_SIGN_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  pPVar1 = (PKCS7_SIGN_ENVELOPE *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_SIGN_ENVELOPE_free(PKCS7_SIGN_ENVELOPE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_ENCRYPT * d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENCRYPT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  pPVar1 = (PKCS7_ENCRYPT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_ENCRYPT(PKCS7_ENCRYPT *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_ENCRYPT * PKCS7_ENCRYPT_new(void)

{
  ASN1_ITEM *it;
  PKCS7_ENCRYPT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  pPVar1 = (PKCS7_ENCRYPT *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS7_DIGEST * d2i_PKCS7_DIGEST(PKCS7_DIGEST **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_DIGEST *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  pPVar1 = (PKCS7_DIGEST *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS7_DIGEST(PKCS7_DIGEST *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS7_DIGEST * PKCS7_DIGEST_new(void)

{
  ASN1_ITEM *it;
  PKCS7_DIGEST *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  pPVar1 = (PKCS7_DIGEST *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS7_DIGEST_free(PKCS7_DIGEST *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * PKCS7_ATTR_SIGN_it(void)

{
  return local_it_1;
}



undefined1 * PKCS7_ATTR_VERIFY_it(void)

{
  return local_it_0;
}



int PKCS7_print_ctx(BIO *out,PKCS7 *x,int indent,ASN1_PCTX *pctx)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_print(out,(ASN1_VALUE *)x,indent,it,pctx);
  return iVar1;
}


