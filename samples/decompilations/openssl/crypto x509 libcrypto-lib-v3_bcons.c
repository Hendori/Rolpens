
undefined1 * BASIC_CONSTRAINTS_it(void)

{
  return local_it_0;
}



stack_st_CONF_VALUE *
i2v_BASIC_CONSTRAINTS(undefined8 param_1,int *param_2,stack_st_CONF_VALUE *param_3)

{
  stack_st_CONF_VALUE *local_20 [2];
  
  local_20[0] = param_3;
  X509V3_add_value_bool("CA",*param_2,local_20);
  X509V3_add_value_int("pathlen",*(ASN1_INTEGER **)(param_2 + 2),local_20);
  return local_20[0];
}



BASIC_CONSTRAINTS * d2i_BASIC_CONSTRAINTS(BASIC_CONSTRAINTS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  BASIC_CONSTRAINTS *pBVar1;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  pBVar1 = (BASIC_CONSTRAINTS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pBVar1;
}



int i2d_BASIC_CONSTRAINTS(BASIC_CONSTRAINTS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BASIC_CONSTRAINTS * BASIC_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  BASIC_CONSTRAINTS *pBVar1;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  pBVar1 = (BASIC_CONSTRAINTS *)ASN1_item_new(it);
  return pBVar1;
}



void BASIC_CONSTRAINTS_free(BASIC_CONSTRAINTS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



BASIC_CONSTRAINTS * v2i_BASIC_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  BASIC_CONSTRAINTS *a;
  CONF_VALUE *value;
  int iVar2;
  
  iVar2 = 0;
  a = BASIC_CONSTRAINTS_new();
  if (a == (BASIC_CONSTRAINTS *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_bcons.c",0x40,"v2i_BASIC_CONSTRAINTS");
    ERR_set_error(0x22,0x8000d,0);
LAB_00100194:
    a = (BASIC_CONSTRAINTS *)0x0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_3);
      if (iVar1 <= iVar2) break;
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar2);
      __s1 = value->name;
      if (((*__s1 != 'C') || (__s1[1] != 'A')) || (__s1[2] != '\0')) {
        iVar1 = strcmp(__s1,"pathlen");
        if (iVar1 == 0) {
          iVar1 = X509V3_get_value_int(value,&a->pathlen);
          if (iVar1 != 0) goto LAB_0010014b;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_bcons.c",0x4c,"v2i_BASIC_CONSTRAINTS");
          ERR_set_error(0x22,0x6a,0);
          ERR_add_error_data(4,"name=",value->name,", value=",value->value);
        }
LAB_0010018c:
        BASIC_CONSTRAINTS_free(a);
        goto LAB_00100194;
      }
      iVar1 = X509V3_get_value_bool(value,&a->ca);
      if (iVar1 == 0) goto LAB_0010018c;
LAB_0010014b:
      iVar2 = iVar2 + 1;
    }
  }
  return a;
}


