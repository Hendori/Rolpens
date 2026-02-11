
undefined1 * PROXY_POLICY_it(void)

{
  return local_it_1;
}



PROXY_POLICY * d2i_PROXY_POLICY(PROXY_POLICY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PROXY_POLICY *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  pPVar1 = (PROXY_POLICY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PROXY_POLICY(PROXY_POLICY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PROXY_POLICY * PROXY_POLICY_new(void)

{
  ASN1_ITEM *it;
  PROXY_POLICY *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  pPVar1 = (PROXY_POLICY *)ASN1_item_new(it);
  return pPVar1;
}



void PROXY_POLICY_free(PROXY_POLICY *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * PROXY_CERT_INFO_EXTENSION_it(void)

{
  return local_it_0;
}



PROXY_CERT_INFO_EXTENSION *
d2i_PROXY_CERT_INFO_EXTENSION(PROXY_CERT_INFO_EXTENSION **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PROXY_CERT_INFO_EXTENSION *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  pPVar1 = (PROXY_CERT_INFO_EXTENSION *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PROXY_CERT_INFO_EXTENSION(PROXY_CERT_INFO_EXTENSION *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PROXY_CERT_INFO_EXTENSION * PROXY_CERT_INFO_EXTENSION_new(void)

{
  ASN1_ITEM *it;
  PROXY_CERT_INFO_EXTENSION *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  pPVar1 = (PROXY_CERT_INFO_EXTENSION *)ASN1_item_new(it);
  return pPVar1;
}



void PROXY_CERT_INFO_EXTENSION_free(PROXY_CERT_INFO_EXTENSION *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROXY_CERT_INFO_EXTENSION_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


