
undefined1 * TLS_FEATURE_it(void)

{
  return local_it_1;
}



long v2i_TLS_FEATURE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong v;
  ASN1_INTEGER *a;
  long lVar3;
  char *__nptr;
  int iVar4;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_tlsf.c",99,"v2i_TLS_FEATURE");
    ERR_set_error(0x22,0x8000f,0);
LAB_00100177:
    lVar2 = 0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_3);
      if (iVar1 <= iVar4) break;
      lVar3 = OPENSSL_sk_value(param_3,iVar4);
      __nptr = *(char **)(lVar3 + 0x10);
      if (__nptr == (char *)0x0) {
        __nptr = *(char **)(lVar3 + 8);
      }
      iVar1 = OPENSSL_strcasecmp(__nptr,"status_request");
      if (iVar1 != 0) {
        iVar1 = OPENSSL_strcasecmp(__nptr,"status_request_v2");
        if (iVar1 == 0) {
          v = 0x11;
          goto LAB_001000c7;
        }
        v = strtol(__nptr,&local_48,10);
        if (((*local_48 == '\0') && (local_48 != __nptr)) && (v < 0x10000)) goto LAB_001000c7;
        ERR_new();
        a = (ASN1_INTEGER *)0x0;
        ERR_set_debug("crypto/x509/v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
        ERR_set_error(0x22,0x8f,0);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar3 + 8),", value=",
                           *(undefined8 *)(lVar3 + 0x10));
LAB_00100160:
        OPENSSL_sk_pop_free(lVar2,ASN1_INTEGER_free);
        ASN1_INTEGER_free(a);
        goto LAB_00100177;
      }
      v = 5;
LAB_001000c7:
      a = ASN1_INTEGER_new();
      if (a == (ASN1_INTEGER *)0x0) {
LAB_00100130:
        ERR_new();
        ERR_set_debug("crypto/x509/v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
        ERR_set_error(0x22,0x8000d,0);
        goto LAB_00100160;
      }
      iVar1 = ASN1_INTEGER_set(a,v);
      if (iVar1 == 0) goto LAB_00100130;
      iVar1 = OPENSSL_sk_push(lVar2,a);
      if (iVar1 < 1) goto LAB_00100130;
      iVar4 = iVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



stack_st_CONF_VALUE *
i2v_TLS_FEATURE(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  ASN1_INTEGER *a;
  long lVar2;
  int iVar3;
  char *value;
  stack_st_CONF_VALUE *local_30 [2];
  
  iVar3 = 0;
  local_30[0] = param_3;
  do {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) {
      return local_30[0];
    }
    a = (ASN1_INTEGER *)OPENSSL_sk_value(param_2,iVar3);
    lVar2 = ASN1_INTEGER_get(a);
    if (lVar2 == 5) {
      value = "status_request";
LAB_001002d7:
      X509V3_add_value((char *)0x0,value,local_30);
    }
    else {
      if (lVar2 == 0x11) {
        value = "status_request_v2";
        goto LAB_001002d7;
      }
      X509V3_add_value_int((char *)0x0,a,local_30);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



void TLS_FEATURE_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_1);
  return;
}



void TLS_FEATURE_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_1);
  return;
}


