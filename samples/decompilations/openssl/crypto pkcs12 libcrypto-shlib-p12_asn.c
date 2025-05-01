
undefined1 * PKCS12_MAC_DATA_it(void)

{
  return local_it_6;
}



undefined1 * PKCS12_BAGS_adb(void)

{
  return internal_adb_4;
}



undefined1 * PKCS12_BAGS_it(void)

{
  return local_it_5;
}



undefined1 * PKCS12_SAFEBAG_adb(void)

{
  return internal_adb_2;
}



undefined1 * PKCS12_SAFEBAG_it(void)

{
  return local_it_3;
}



undefined1 * PKCS12_it(void)

{
  return local_it_7;
}



PKCS12 * d2i_PKCS12(PKCS12 **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  pPVar1 = (PKCS12 *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS12(PKCS12 *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12 * PKCS12_new(void)

{
  ASN1_ITEM *it;
  PKCS12 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  pPVar1 = (PKCS12 *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS12_free(PKCS12 *a)

{
  ASN1_ITEM *it;
  
  if ((a != (PKCS12 *)0x0) && (a->authsafes != (PKCS7 *)0x0)) {
    CRYPTO_free((void *)a->authsafes[1].length);
    a->authsafes[1].length = 0;
  }
  it = (ASN1_ITEM *)PKCS12_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS12_MAC_DATA * d2i_PKCS12_MAC_DATA(PKCS12_MAC_DATA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_MAC_DATA *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  pPVar1 = (PKCS12_MAC_DATA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS12_MAC_DATA(PKCS12_MAC_DATA *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_MAC_DATA * PKCS12_MAC_DATA_new(void)

{
  ASN1_ITEM *it;
  PKCS12_MAC_DATA *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  pPVar1 = (PKCS12_MAC_DATA *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS12_MAC_DATA_free(PKCS12_MAC_DATA *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS12_BAGS * d2i_PKCS12_BAGS(PKCS12_BAGS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_BAGS *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  pPVar1 = (PKCS12_BAGS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS12_BAGS(PKCS12_BAGS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_BAGS * PKCS12_BAGS_new(void)

{
  ASN1_ITEM *it;
  PKCS12_BAGS *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  pPVar1 = (PKCS12_BAGS *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS12_BAGS_free(PKCS12_BAGS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



PKCS12_SAFEBAG * d2i_PKCS12_SAFEBAG(PKCS12_SAFEBAG **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_SAFEBAG *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  pPVar1 = (PKCS12_SAFEBAG *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS12_SAFEBAG(PKCS12_SAFEBAG *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS12_SAFEBAG * PKCS12_SAFEBAG_new(void)

{
  ASN1_ITEM *it;
  PKCS12_SAFEBAG *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  pPVar1 = (PKCS12_SAFEBAG *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS12_SAFEBAG_free(PKCS12_SAFEBAG *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * PKCS12_SAFEBAGS_it(void)

{
  return local_it_1;
}



undefined1 * PKCS12_AUTHSAFES_it(void)

{
  return local_it_0;
}


