
undefined1 * OSSL_ALLOWED_ATTRIBUTES_CHOICE_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_ALLOWED_ATTRIBUTES_ITEM_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it(void)

{
  return local_it_0;
}



undefined8
i2r_ALLOWED_ATTRIBUTES_SYNTAX(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  X509_ATTRIBUTE *attr;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ASN1_OBJECT *o;
  ASN1_TYPE *pAVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      iVar1 = BIO_printf(param_3,"%*sAllowed Attributes:\n",(ulong)param_4,&_LC0);
      if (iVar1 < 1) {
        return 0;
      }
      iVar8 = 0;
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
      iVar1 = OPENSSL_sk_num(*puVar4);
      if (0 < iVar1) {
        do {
          iVar1 = BIO_printf(param_3,"%*sAllowed Attribute Type or Values:\n",(ulong)(param_4 + 4),
                             &_LC0);
          if (iVar1 < 1) {
            return 0;
          }
          piVar5 = (int *)OPENSSL_sk_value(*puVar4,iVar8);
          if (*piVar5 == 0) {
            iVar1 = BIO_printf(param_3,"%*sAttribute Type: ",(ulong)(param_4 + 8),&_LC0);
            if (iVar1 < 1) {
              return 0;
            }
            iVar1 = i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)(piVar5 + 2));
            if (iVar1 < 1) {
              return 0;
            }
            iVar1 = BIO_puts(param_3,"\n");
            if (iVar1 < 1) {
              return 0;
            }
          }
          else {
            if (*piVar5 != 1) {
              return 0;
            }
            attr = *(X509_ATTRIBUTE **)(piVar5 + 2);
            o = X509_ATTRIBUTE_get0_object(attr);
            iVar1 = OBJ_obj2nid(o);
            iVar2 = BIO_printf(param_3,"%*sAttribute Values: ",(ulong)(param_4 + 8),&_LC0);
            if (iVar2 < 1) {
              return 0;
            }
            iVar2 = i2a_ASN1_OBJECT(param_3,o);
            if (iVar2 < 1) {
              return 0;
            }
            iVar2 = BIO_puts(param_3,"\n");
            if (iVar2 < 1) {
              return 0;
            }
            for (iVar2 = 0; iVar3 = X509_ATTRIBUTE_count(attr), iVar2 < iVar3; iVar2 = iVar2 + 1) {
              pAVar6 = X509_ATTRIBUTE_get0_type(attr,iVar2);
              iVar3 = ossl_print_attribute_value(param_3,iVar1,pAVar6,param_4 + 0xc);
              if (iVar3 < 1) {
                return 0;
              }
              iVar3 = BIO_puts(param_3,"\n");
              if (iVar3 < 1) {
                return 0;
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar1 = OPENSSL_sk_num(*puVar4);
        } while (iVar8 < iVar1);
      }
      iVar1 = BIO_printf(param_3,"%*sHolder Domain: ",(ulong)(param_4 + 4),&_LC0);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)puVar4[1]);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = BIO_puts(param_3,"\n");
      if (iVar1 < 1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar1);
  }
  return 1;
}



void d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_CHOICE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_CHOICE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_CHOICE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_CHOICE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_CHOICE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_ITEM_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_ITEM_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_ITEM_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_ITEM_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_ITEM_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_ITEM_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it();
  ASN1_item_free(param_1,it);
  return;
}


