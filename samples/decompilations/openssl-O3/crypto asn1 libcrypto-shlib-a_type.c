
int ASN1_TYPE_get(ASN1_TYPE *a)

{
  uint uVar1;
  
  uVar1 = a->type;
  if (((uVar1 & 0xfffffffb) != 1) && ((a->value).ptr == (char *)0x0)) {
    uVar1 = 0;
  }
  return uVar1;
}



void ASN1_TYPE_set(ASN1_TYPE *a,int type,void *value)

{
  ASN1_TYPE *local_20 [2];
  
  if (((a->type & 0xfffffffbU) != 1) && ((a->value).ptr != (char *)0x0)) {
    local_20[0] = a;
    ossl_asn1_primitive_free(local_20,0,0);
    a = local_20[0];
  }
  a->type = type;
  if (type != 1) {
    (a->value).ptr = (char *)value;
    return;
  }
  (a->value).boolean = -(uint)(value != (void *)0x0) & 0xff;
  return;
}



int ASN1_TYPE_set1(ASN1_TYPE *a,int type,void *value)

{
  ASN1_OBJECT *value_00;
  
  if ((value != (void *)0x0) && (type != 1)) {
    if (type == 6) {
      value_00 = OBJ_dup((ASN1_OBJECT *)value);
      if (value_00 != (ASN1_OBJECT *)0x0) {
        ASN1_TYPE_set(a,6,value_00);
        return 1;
      }
      return 0;
    }
    value = ASN1_STRING_dup((ASN1_STRING *)value);
    if ((ASN1_STRING *)value == (ASN1_STRING *)0x0) {
      return 0;
    }
  }
  ASN1_TYPE_set(a,type,value);
  return 1;
}



int ASN1_TYPE_cmp(ASN1_TYPE *a,ASN1_TYPE *b)

{
  int iVar1;
  
  if (((a == (ASN1_TYPE *)0x0) || (b == (ASN1_TYPE *)0x0)) || (iVar1 = a->type, iVar1 != b->type)) {
    return -1;
  }
  if (iVar1 == 5) {
    return 0;
  }
  if (iVar1 != 6) {
    if (iVar1 != 1) {
      iVar1 = ASN1_STRING_cmp((a->value).asn1_string,(b->value).asn1_string);
      return iVar1;
    }
    return (a->value).boolean - (b->value).boolean;
  }
  iVar1 = OBJ_cmp((a->value).object,(b->value).object);
  return iVar1;
}



ASN1_TYPE * ASN1_TYPE_pack_sequence(ASN1_ITEM *param_1,void *param_2,long *param_3)

{
  ASN1_STRING *a;
  ASN1_TYPE *a_00;
  
  a = ASN1_item_pack(param_2,param_1,(ASN1_OCTET_STRING **)0x0);
  if (a == (ASN1_STRING *)0x0) {
LAB_001001f0:
    a_00 = (ASN1_TYPE *)0x0;
  }
  else {
    if (param_3 == (long *)0x0) {
      a_00 = ASN1_TYPE_new();
      if (a_00 == (ASN1_TYPE *)0x0) {
LAB_001001e5:
        ASN1_OCTET_STRING_free(a);
        goto LAB_001001f0;
      }
    }
    else {
      a_00 = (ASN1_TYPE *)*param_3;
      if (a_00 == (ASN1_TYPE *)0x0) {
        a_00 = ASN1_TYPE_new();
        if (a_00 == (ASN1_TYPE *)0x0) goto LAB_001001e5;
        *param_3 = (long)a_00;
      }
    }
    ASN1_TYPE_set(a_00,0x10,a);
  }
  return a_00;
}



void * ASN1_TYPE_unpack_sequence(ASN1_ITEM *param_1,int *param_2)

{
  void *pvVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) &&
     (*(ASN1_STRING **)(param_2 + 2) != (ASN1_STRING *)0x0)) {
    pvVar1 = ASN1_item_unpack(*(ASN1_STRING **)(param_2 + 2),param_1);
    return pvVar1;
  }
  return (void *)0x0;
}


