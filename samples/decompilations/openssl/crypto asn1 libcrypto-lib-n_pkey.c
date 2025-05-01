
void d2i_NETSCAPE_ENCRYPTED_PKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_1);
  return;
}



void i2d_NETSCAPE_ENCRYPTED_PKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_1);
  return;
}



void NETSCAPE_ENCRYPTED_PKEY_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_1);
  return;
}



void NETSCAPE_ENCRYPTED_PKEY_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_1);
  return;
}



void d2i_NETSCAPE_PKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_0);
  return;
}



void i2d_NETSCAPE_PKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_0);
  return;
}



void NETSCAPE_PKEY_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_0);
  return;
}



void NETSCAPE_PKEY_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_0);
  return;
}


