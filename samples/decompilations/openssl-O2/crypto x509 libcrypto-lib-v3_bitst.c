
stack_st_CONF_VALUE *
i2v_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,ASN1_BIT_STRING *bits,stack_st_CONF_VALUE *extlist)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  stack_st_CONF_VALUE *local_20;
  
  local_20 = extlist;
  if (*(long *)((long)method->usr_data + 8) != 0) {
    piVar3 = (int *)method->usr_data;
    do {
      while (iVar2 = ASN1_BIT_STRING_get_bit(bits,*piVar3), iVar2 != 0) {
        X509V3_add_value(*(char **)(piVar3 + 2),(char *)0x0,&local_20);
        plVar1 = (long *)(piVar3 + 8);
        piVar3 = piVar3 + 6;
        if (*plVar1 == 0) {
          return local_20;
        }
      }
      plVar1 = (long *)(piVar3 + 8);
      piVar3 = piVar3 + 6;
    } while (*plVar1 != 0);
  }
  return local_20;
}



ASN1_BIT_STRING *
v2i_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  char *__s2;
  int iVar1;
  long lVar2;
  int iVar3;
  char *__s1;
  int *piVar4;
  ASN1_BIT_STRING *local_48;
  
  iVar3 = 0;
  local_48 = ASN1_BIT_STRING_new();
  if (local_48 == (ASN1_BIT_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_bitst.c",0x43,"v2i_ASN1_BIT_STRING");
    ERR_set_error(0x22,0x8000d,0);
LAB_00100192:
    local_48 = (ASN1_BIT_STRING *)0x0;
  }
  else {
    iVar1 = OPENSSL_sk_num(nval);
    if (0 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(nval,iVar3);
        piVar4 = (int *)method->usr_data;
        __s1 = *(char **)(piVar4 + 2);
        if (__s1 == (char *)0x0) {
LAB_00100150:
          ERR_new();
          ERR_set_debug("crypto/x509/v3_bitst.c",0x54,"v2i_ASN1_BIT_STRING");
          ERR_set_error(0x22,0x6f,&_LC1,*(undefined8 *)(lVar2 + 8));
          ASN1_BIT_STRING_free(local_48);
          goto LAB_00100192;
        }
        __s2 = *(char **)(lVar2 + 8);
        while( true ) {
          iVar1 = strcmp(*(char **)(piVar4 + 4),__s2);
          if (iVar1 == 0) break;
          iVar1 = strcmp(__s1,__s2);
          if (iVar1 == 0) break;
          __s1 = *(char **)(piVar4 + 8);
          piVar4 = piVar4 + 6;
          if (__s1 == (char *)0x0) goto LAB_00100150;
        }
        iVar1 = ASN1_BIT_STRING_set_bit(local_48,*piVar4,1);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_bitst.c",0x4c,"v2i_ASN1_BIT_STRING");
          ERR_set_error(0x22,0x8000d,0);
          ASN1_BIT_STRING_free(local_48);
          goto LAB_00100192;
        }
        if (*(long *)(piVar4 + 2) == 0) goto LAB_00100150;
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(nval);
      } while (iVar3 < iVar1);
    }
  }
  return local_48;
}


