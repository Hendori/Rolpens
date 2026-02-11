
undefined1 * AUTHORITY_KEYID_it(void)

{
  return local_it_0;
}



AUTHORITY_KEYID * d2i_AUTHORITY_KEYID(AUTHORITY_KEYID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  AUTHORITY_KEYID *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  pAVar1 = (AUTHORITY_KEYID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_AUTHORITY_KEYID(AUTHORITY_KEYID *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

AUTHORITY_KEYID * AUTHORITY_KEYID_new(void)

{
  ASN1_ITEM *it;
  AUTHORITY_KEYID *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  pAVar1 = (AUTHORITY_KEYID *)ASN1_item_new(it);
  return pAVar1;
}



void AUTHORITY_KEYID_free(AUTHORITY_KEYID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


