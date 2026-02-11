
undefined1 * ESS_ISSUER_SERIAL_it(void)

{
  return local_it_4;
}



undefined1 * ESS_CERT_ID_it(void)

{
  return local_it_3;
}



undefined1 * ESS_CERT_ID_V2_it(void)

{
  return local_it_1;
}



void d2i_ESS_ISSUER_SERIAL(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_4);
  return;
}



void i2d_ESS_ISSUER_SERIAL(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_4);
  return;
}



void ESS_ISSUER_SERIAL_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_4);
  return;
}



void ESS_ISSUER_SERIAL_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_4);
  return;
}



void ESS_ISSUER_SERIAL_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_4,param_1);
  return;
}



void d2i_ESS_CERT_ID(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_3);
  return;
}



void i2d_ESS_CERT_ID(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_3);
  return;
}



void ESS_CERT_ID_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_3);
  return;
}



void ESS_CERT_ID_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_3);
  return;
}



void ESS_CERT_ID_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_3,param_1);
  return;
}



undefined1 * ESS_SIGNING_CERT_it(void)

{
  return local_it_2;
}



void d2i_ESS_SIGNING_CERT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ESS_SIGNING_CERT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ESS_SIGNING_CERT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
  ASN1_item_new(it);
  return;
}



void ESS_SIGNING_CERT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
  ASN1_item_free(param_1,it);
  return;
}



void ESS_SIGNING_CERT_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_it();
  ASN1_item_dup(it,param_1);
  return;
}



void d2i_ESS_CERT_ID_V2(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_1);
  return;
}



void i2d_ESS_CERT_ID_V2(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_1);
  return;
}



void ESS_CERT_ID_V2_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_1);
  return;
}



void ESS_CERT_ID_V2_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_1);
  return;
}



void ESS_CERT_ID_V2_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_1,param_1);
  return;
}



undefined1 * ESS_SIGNING_CERT_V2_it(void)

{
  return local_it_0;
}



void d2i_ESS_SIGNING_CERT_V2(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ESS_SIGNING_CERT_V2(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ESS_SIGNING_CERT_V2_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
  ASN1_item_new(it);
  return;
}



void ESS_SIGNING_CERT_V2_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
  ASN1_item_free(param_1,it);
  return;
}



void ESS_SIGNING_CERT_V2_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ESS_SIGNING_CERT_V2_it();
  ASN1_item_dup(it,param_1);
  return;
}


