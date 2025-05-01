
undefined1 * X509_SIG_it(void)

{
  return local_it_0;
}



X509_SIG * d2i_X509_SIG(X509_SIG **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_SIG *pXVar1;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  pXVar1 = (X509_SIG *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_SIG(X509_SIG *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_SIG * X509_SIG_new(void)

{
  ASN1_ITEM *it;
  X509_SIG *pXVar1;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  pXVar1 = (X509_SIG *)ASN1_item_new(it);
  return pXVar1;
}



void X509_SIG_free(X509_SIG *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



void X509_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



void X509_SIG_getm(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}


