
undefined1 * NETSCAPE_SPKAC_it(void)

{
  return local_it_1;
}



NETSCAPE_SPKAC * d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKAC *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  pNVar1 = (NETSCAPE_SPKAC *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}



int i2d_NETSCAPE_SPKAC(NETSCAPE_SPKAC *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_SPKAC * NETSCAPE_SPKAC_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKAC *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  pNVar1 = (NETSCAPE_SPKAC *)ASN1_item_new(it);
  return pNVar1;
}



void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * NETSCAPE_SPKI_it(void)

{
  return local_it_0;
}



NETSCAPE_SPKI * d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKI *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  pNVar1 = (NETSCAPE_SPKI *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}



int i2d_NETSCAPE_SPKI(NETSCAPE_SPKI *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_SPKI * NETSCAPE_SPKI_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_SPKI *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  pNVar1 = (NETSCAPE_SPKI *)ASN1_item_new(it);
  return pNVar1;
}



void NETSCAPE_SPKI_free(NETSCAPE_SPKI *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NETSCAPE_SPKI_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


