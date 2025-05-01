
undefined1 * OSSL_ATAV_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_ATTRIBUTE_TYPE_MAPPING_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_ATTRIBUTE_VALUE_MAPPING_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_ATTRIBUTE_MAPPING_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_ATTRIBUTE_MAPPINGS_it(void)

{
  return local_it_0;
}



undefined8 i2r_ATTRIBUTE_MAPPINGS(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *o;
  ASN1_OBJECT *o_00;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar5 = OPENSSL_sk_num(param_2);
  if (0 < iVar5) {
    do {
      piVar8 = (int *)OPENSSL_sk_value(param_2,iVar9);
      iVar5 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
      if (iVar5 < 1) {
        return 0;
      }
      if (*piVar8 == 0) {
        iVar5 = i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)**(undefined8 **)(piVar8 + 2));
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = BIO_puts(param_3," == ");
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)(*(long *)(piVar8 + 2) + 8));
      }
      else {
        if (*piVar8 != 1) {
          return 0;
        }
        puVar1 = (undefined8 *)**(long **)(piVar8 + 2);
        puVar2 = (undefined8 *)(*(long **)(piVar8 + 2))[1];
        o = (ASN1_OBJECT *)*puVar1;
        o_00 = (ASN1_OBJECT *)*puVar2;
        uVar3 = puVar1[1];
        uVar4 = puVar2[1];
        iVar5 = OBJ_obj2nid(o);
        iVar6 = OBJ_obj2nid(o_00);
        iVar7 = i2a_ASN1_OBJECT(param_3,o);
        if (iVar7 < 1) {
          return 0;
        }
        iVar7 = BIO_puts(param_3,":");
        if (iVar7 < 1) {
          return 0;
        }
        iVar5 = ossl_print_attribute_value(param_3,iVar5,uVar3,0);
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = BIO_puts(param_3," == ");
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = i2a_ASN1_OBJECT(param_3,o_00);
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = BIO_puts(param_3,":");
        if (iVar5 < 1) {
          return 0;
        }
        iVar5 = ossl_print_attribute_value(param_3,iVar6,uVar4,0);
      }
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = BIO_puts(param_3,"\n");
      if (iVar5 < 1) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar5 = OPENSSL_sk_num(param_2);
    } while (iVar9 < iVar5);
  }
  return 1;
}



void d2i_OSSL_ATAV(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATAV_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATAV(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATAV_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATAV_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATAV_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATAV_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATAV_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_TYPE_MAPPING_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_TYPE_MAPPING_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTE_TYPE_MAPPING_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_TYPE_MAPPING_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTE_TYPE_MAPPING_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_TYPE_MAPPING_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_VALUE_MAPPING_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_VALUE_MAPPING_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTE_VALUE_MAPPING_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_VALUE_MAPPING_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTE_VALUE_MAPPING_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_VALUE_MAPPING_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ATTRIBUTE_MAPPING(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPING_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTE_MAPPING(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPING_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTE_MAPPING_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPING_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTE_MAPPING_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPING_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_ATTRIBUTE_MAPPINGS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPINGS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_ATTRIBUTE_MAPPINGS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPINGS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_ATTRIBUTE_MAPPINGS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPINGS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ATTRIBUTE_MAPPINGS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ATTRIBUTE_MAPPINGS_it();
  ASN1_item_free(param_1,it);
  return;
}


