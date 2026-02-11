
undefined1 * X509_VAL_it(void)

{
  return local_it_0;
}



X509_VAL * d2i_X509_VAL(X509_VAL **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_VAL *pXVar1;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  pXVar1 = (X509_VAL *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_VAL(X509_VAL *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_VAL * X509_VAL_new(void)

{
  ASN1_ITEM *it;
  X509_VAL *pXVar1;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  pXVar1 = (X509_VAL *)ASN1_item_new(it);
  return pXVar1;
}



void X509_VAL_free(X509_VAL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


