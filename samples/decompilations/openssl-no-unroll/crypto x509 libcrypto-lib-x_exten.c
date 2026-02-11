
undefined1 * X509_EXTENSION_it(void)

{
  return local_it_1;
}



undefined1 * X509_EXTENSIONS_it(void)

{
  return local_it_0;
}



X509_EXTENSION * d2i_X509_EXTENSION(X509_EXTENSION **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_EXTENSION *pXVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  pXVar1 = (X509_EXTENSION *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_EXTENSION(X509_EXTENSION *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_EXTENSION * X509_EXTENSION_new(void)

{
  ASN1_ITEM *it;
  X509_EXTENSION *pXVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  pXVar1 = (X509_EXTENSION *)ASN1_item_new(it);
  return pXVar1;
}



void X509_EXTENSION_free(X509_EXTENSION *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



X509_EXTENSIONS * d2i_X509_EXTENSIONS(X509_EXTENSIONS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSIONS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (X509_EXTENSIONS *)pAVar1;
}



int i2d_X509_EXTENSIONS(X509_EXTENSIONS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSIONS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



X509_EXTENSION * X509_EXTENSION_dup(X509_EXTENSION *ex)

{
  ASN1_ITEM *it;
  X509_EXTENSION *pXVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  pXVar1 = (X509_EXTENSION *)ASN1_item_dup(it,ex);
  return pXVar1;
}


