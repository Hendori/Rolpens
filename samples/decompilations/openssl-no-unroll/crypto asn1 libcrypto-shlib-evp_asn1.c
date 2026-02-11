
int ASN1_TYPE_set_octetstring(ASN1_TYPE *a,uchar *data,int len)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  if (str != (ASN1_OCTET_STRING *)0x0) {
    iVar1 = ASN1_OCTET_STRING_set(str,data,len);
    if (iVar1 != 0) {
      ASN1_TYPE_set(a,4,str);
      return 1;
    }
    ASN1_OCTET_STRING_free(str);
  }
  return 0;
}



int ASN1_TYPE_get_octetstring(ASN1_TYPE *a,uchar *data,int max_len)

{
  int iVar1;
  void *__src;
  
  if ((a->type == 4) && ((a->value).ptr != (char *)0x0)) {
    __src = (void *)ASN1_STRING_get0_data();
    iVar1 = ASN1_STRING_length((a->value).asn1_string);
    if (iVar1 <= max_len) {
      max_len = iVar1;
    }
    if ((0 < max_len) && (data != (uchar *)0x0)) {
      memcpy(data,__src,(long)max_len);
      return iVar1;
    }
  }
  else {
    ERR_new();
    iVar1 = -1;
    ERR_set_debug("crypto/asn1/evp_asn1.c",0x28,"ASN1_TYPE_get_octetstring");
    ERR_set_error(0xd,0x6d,0);
  }
  return iVar1;
}



int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a,long num,uchar *data,int len)

{
  long lVar1;
  long in_FS_OFFSET;
  ASN1_TYPE *local_40;
  undefined4 local_38 [2];
  int *local_30;
  int local_28 [2];
  uchar *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = (undefined4)num;
  local_30 = local_28;
  local_28[1] = 4;
  local_18 = 0;
  local_40 = a;
  local_28[0] = len;
  local_20 = data;
  lVar1 = ASN1_TYPE_pack_sequence(local_it_3,local_38,&local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_TYPE_get_int_octetstring(ASN1_TYPE *a,long *num,uchar *data,int max_len)

{
  int iVar1;
  ASN1_STRING *x;
  int iVar2;
  ASN1_VALUE *val;
  void *__src;
  
  if (((a->type == 0x10) && ((a->value).ptr != (char *)0x0)) &&
     (val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(local_it_3,a), val != (ASN1_VALUE *)0x0)) {
    x = *(ASN1_STRING **)(val + 8);
    iVar1 = *(int *)val;
    iVar2 = ASN1_STRING_length(x);
    if (num != (long *)0x0) {
      *num = (long)iVar1;
    }
    if (data != (uchar *)0x0) {
      __src = (void *)ASN1_STRING_get0_data(x);
      if (iVar2 < max_len) {
        max_len = iVar2;
      }
      memcpy(data,__src,(long)max_len);
    }
    if (iVar2 != -1) goto LAB_00100241;
  }
  else {
    val = (ASN1_VALUE *)0x0;
  }
  ERR_new();
  iVar2 = -1;
  ERR_set_debug("crypto/asn1/evp_asn1.c",0x80,"ASN1_TYPE_get_int_octetstring");
  ERR_set_error(0xd,0x6d,0);
LAB_00100241:
  ASN1_item_free(val,(ASN1_ITEM *)local_it_3);
  return iVar2;
}



bool ossl_asn1_type_set_octetstring_int
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_28;
  local_24 = 4;
  local_18 = 0;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = ASN1_TYPE_pack_sequence(local_it_1,&local_38,&local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_asn1_type_get_octetstring_int(int *param_1,long *param_2,void *param_3,int param_4)

{
  int iVar1;
  ASN1_STRING *x;
  int iVar2;
  ASN1_VALUE *val;
  void *__src;
  size_t __n;
  ulong uVar3;
  
  if (((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) &&
     (val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(local_it_1,param_1), val != (ASN1_VALUE *)0x0))
  {
    x = *(ASN1_STRING **)val;
    iVar1 = *(int *)(val + 8);
    iVar2 = ASN1_STRING_length(x);
    uVar3 = (ulong)iVar2;
    if (param_2 != (long *)0x0) {
      *param_2 = (long)iVar1;
    }
    if (param_3 != (void *)0x0) {
      __src = (void *)ASN1_STRING_get0_data(x);
      __n = (long)param_4;
      if (iVar2 < param_4) {
        __n = uVar3;
      }
      memcpy(param_3,__src,__n);
    }
    if (iVar2 != -1) goto LAB_001003b1;
  }
  else {
    val = (ASN1_VALUE *)0x0;
  }
  ERR_new();
  uVar3 = 0xffffffff;
  ERR_set_debug("crypto/asn1/evp_asn1.c",0xb7,"ossl_asn1_type_get_octetstring_int");
  ERR_set_error(0xd,0x6d,0);
LAB_001003b1:
  ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
  return uVar3 & 0xffffffff;
}


