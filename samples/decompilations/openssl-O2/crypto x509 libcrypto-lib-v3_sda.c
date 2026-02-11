
undefined1 * OSSL_ATTRIBUTES_SYNTAX_it(void)

{
  return local_it_0;
}



bool i2r_ATTRIBUTES_SYNTAX(undefined8 param_1,long param_2,BIO *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  X509_ATTRIBUTE *attr;
  ASN1_OBJECT *o;
  char *pcVar5;
  ASN1_TYPE *pAVar6;
  int iVar7;
  
  if (param_2 == 0) {
    iVar2 = BIO_printf(param_3,"<No Attributes>\n");
    return 0 < iVar2;
  }
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 == 0) {
    iVar2 = BIO_printf(param_3,"<Empty Attributes>\n");
    bVar1 = 0 < iVar2;
  }
  else {
    iVar2 = OPENSSL_sk_num(param_2);
    if (0 < iVar2) {
      do {
        attr = (X509_ATTRIBUTE *)OPENSSL_sk_value(param_2,iVar7);
        o = X509_ATTRIBUTE_get0_object(attr);
        iVar2 = OBJ_obj2nid(o);
        if ((param_4 != 0) && (iVar3 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC2), iVar3 < 1)) {
          return false;
        }
        if (iVar2 == 0) {
          iVar3 = i2a_ASN1_OBJECT(param_3,o);
          if (iVar3 < 1) {
            return false;
          }
          iVar3 = BIO_puts(param_3,":\n");
        }
        else {
          pcVar5 = OBJ_nid2ln(iVar2);
          iVar3 = BIO_printf(param_3,"%s:\n",pcVar5);
        }
        if (iVar3 < 1) {
          return false;
        }
        iVar3 = X509_ATTRIBUTE_count(attr);
        if (iVar3 == 0) {
          iVar2 = BIO_printf(param_3,"%*s<No Values>\n",(ulong)(param_4 + 4),&_LC2);
          if (iVar2 < 1) {
            return false;
          }
        }
        else {
          for (iVar3 = 0; iVar4 = X509_ATTRIBUTE_count(attr), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            pAVar6 = X509_ATTRIBUTE_get0_type(attr,iVar3);
            iVar4 = ossl_print_attribute_value(param_3,iVar2,pAVar6,param_4 + 4);
            if (iVar4 < 1) {
              return false;
            }
            iVar4 = BIO_puts(param_3,"\n");
            if (iVar4 < 1) {
              return false;
            }
          }
        }
        iVar7 = iVar7 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar7 < iVar2);
    }
    bVar1 = true;
  }
  return bVar1;
}



void d2i_OSSL_ATTRIBUTES_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTES_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTES_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTES_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTES_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTES_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTES_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTES_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}


