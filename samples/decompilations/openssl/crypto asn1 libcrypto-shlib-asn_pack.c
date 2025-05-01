
ASN1_STRING * ASN1_item_pack(void *obj,ASN1_ITEM *it,ASN1_OCTET_STRING **oct)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  if (((oct == (ASN1_OCTET_STRING **)0x0) || (str = *oct, str == (ASN1_OCTET_STRING *)0x0)) &&
     (str = ASN1_STRING_new(), str == (ASN1_STRING *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_pack.c",0x16,"ASN1_item_pack");
    ERR_set_error(0xd,0x8000d,0);
  }
  else {
    ASN1_STRING_set0(str,(void *)0x0,0);
    iVar1 = ASN1_item_i2d((ASN1_VALUE *)obj,&str->data,it);
    str->length = iVar1;
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_pack.c",0x20,"ASN1_item_pack");
      ERR_set_error(0xd,0x70,0);
    }
    else {
      if (str->data != (uchar *)0x0) {
        if (oct == (ASN1_OCTET_STRING **)0x0) {
          return str;
        }
        if (*oct != (ASN1_OCTET_STRING *)0x0) {
          return str;
        }
        *oct = str;
        return str;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_pack.c",0x24,"ASN1_item_pack");
      ERR_set_error(0xd,0x8000d,0);
    }
    if ((oct == (ASN1_OCTET_STRING **)0x0) || (*oct == (ASN1_OCTET_STRING *)0x0)) {
      ASN1_STRING_free(str);
      return (ASN1_STRING *)0x0;
    }
  }
  return (ASN1_STRING *)0x0;
}



void * ASN1_item_unpack(ASN1_STRING *oct,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = oct->data;
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,(long)oct->length,it);
  if (pAVar1 == (ASN1_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_pack.c",0x3b,"ASN1_item_unpack");
    ERR_set_error(0xd,0x6e,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ASN1_item_unpack_ex(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(undefined8 *)(param_1 + 2);
  lVar1 = ASN1_item_d2i_ex(0,&local_18,(long)*param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_pack.c",0x48,"ASN1_item_unpack_ex");
    ERR_set_error(0xd,0x6e,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


