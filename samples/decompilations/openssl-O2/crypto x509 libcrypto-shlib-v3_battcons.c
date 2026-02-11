
undefined1 * OSSL_BASIC_ATTR_CONSTRAINTS_it(void)

{
  return local_it_0;
}



stack_st_CONF_VALUE *
i2v_OSSL_BASIC_ATTR_CONSTRAINTS(undefined8 param_1,int *param_2,stack_st_CONF_VALUE *param_3)

{
  stack_st_CONF_VALUE *local_20 [2];
  
  local_20[0] = param_3;
  X509V3_add_value_bool("authority",*param_2,local_20);
  X509V3_add_value_int("pathlen",*(ASN1_INTEGER **)(param_2 + 2),local_20);
  return local_20[0];
}



void d2i_OSSL_BASIC_ATTR_CONSTRAINTS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_BASIC_ATTR_CONSTRAINTS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_BASIC_ATTR_CONSTRAINTS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_BASIC_ATTR_CONSTRAINTS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_BASIC_ATTR_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_BASIC_ATTR_CONSTRAINTS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_BASIC_ATTR_CONSTRAINTS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_BASIC_ATTR_CONSTRAINTS_it();
  ASN1_item_free(param_1,it);
  return;
}



int * v2i_OSSL_BASIC_ATTR_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int *asn1_bool;
  CONF_VALUE *value;
  int iVar2;
  
  iVar2 = 0;
  asn1_bool = (int *)OSSL_BASIC_ATTR_CONSTRAINTS_new();
  if (asn1_bool == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_battcons.c",0x41,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
    ERR_set_error(0x22,0x8000d,0);
LAB_001001b0:
    asn1_bool = (int *)0x0;
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_3), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar2);
      __s1 = value->name;
      iVar1 = strcmp(__s1,"authority");
      if (iVar1 != 0) {
        iVar1 = strcmp(__s1,"pathlen");
        if (iVar1 == 0) {
          iVar1 = X509V3_get_value_int(value,(ASN1_INTEGER **)(asn1_bool + 2));
          if (iVar1 != 0) goto LAB_00100164;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_battcons.c",0x4d,"v2i_OSSL_BASIC_ATTR_CONSTRAINTS");
          ERR_set_error(0x22,0x6a,0);
          ERR_add_error_data(4,"name=",value->name,", value=",value->value);
        }
LAB_001001a8:
        OSSL_BASIC_ATTR_CONSTRAINTS_free(asn1_bool);
        goto LAB_001001b0;
      }
      iVar1 = X509V3_get_value_bool(value,asn1_bool);
      if (iVar1 == 0) goto LAB_001001a8;
LAB_00100164:
    }
  }
  return asn1_bool;
}


