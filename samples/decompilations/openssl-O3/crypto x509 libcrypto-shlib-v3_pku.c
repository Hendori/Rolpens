
undefined1 * PKEY_USAGE_PERIOD_it(void)

{
  return local_it_0;
}



undefined8 i2r_PKEY_USAGE_PERIOD(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
  if (*param_2 != 0) {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,&_LC3,2);
  }
  if (param_2[1] != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[1]);
  }
  return 1;
}



PKEY_USAGE_PERIOD * d2i_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKEY_USAGE_PERIOD *pPVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  pPVar1 = (PKEY_USAGE_PERIOD *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKEY_USAGE_PERIOD * PKEY_USAGE_PERIOD_new(void)

{
  ASN1_ITEM *it;
  PKEY_USAGE_PERIOD *pPVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  pPVar1 = (PKEY_USAGE_PERIOD *)ASN1_item_new(it);
  return pPVar1;
}



void PKEY_USAGE_PERIOD_free(PKEY_USAGE_PERIOD *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


