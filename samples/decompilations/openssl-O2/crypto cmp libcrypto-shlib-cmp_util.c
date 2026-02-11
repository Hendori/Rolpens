
int parse_level(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int local_26;
  char local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = strchr(param_1,0x3a);
  if (pcVar3 != (char *)0x0) {
    iVar1 = strncmp(param_1,"CMP ",4);
    if (iVar1 == 0) {
      param_1 = param_1 + 4;
    }
    iVar1 = (int)pcVar3 - (int)param_1;
    if (iVar1 < 6) {
      OPENSSL_strlcpy(&local_26,param_1,(long)(iVar1 + 1));
      iVar1 = strcmp((char *)&local_26,"EMERG");
      if (iVar1 == 0) goto LAB_00100100;
      iVar2 = strcmp((char *)&local_26,"ALERT");
      iVar1 = 1;
      if ((iVar2 == 0) || ((local_26 == 0x54495243 && (iVar1 = 2, local_22 == '\0'))))
      goto LAB_00100100;
      iVar2 = strcmp((char *)&local_26,"ERROR");
      iVar1 = 3;
      if ((iVar2 == 0) ||
         ((((local_26 == 0x4e524157 && (iVar1 = 4, local_22 == '\0')) ||
           ((local_26 == 0x45544f4e && (iVar1 = 5, local_22 == '\0')))) ||
          ((local_26 == 0x4f464e49 && (iVar1 = 6, local_22 == '\0')))))) goto LAB_00100100;
      iVar1 = strcmp((char *)&local_26,"DEBUG");
      if (iVar1 == 0) {
        iVar1 = 7;
        goto LAB_00100100;
      }
    }
  }
  iVar1 = -1;
LAB_00100100:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 OSSL_CMP_log_open(void)

{
  return 1;
}



void OSSL_CMP_log_close(void)

{
  OSSL_trace_set_channel(0xd,0);
  return;
}



char * ossl_cmp_log_parse_metadata
                 (char *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  char *__s;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  char *__s_00;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    param_1 = (char *)0x0;
  }
  else {
    pcVar2 = strchr(param_1,0x3a);
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    if (pcVar2 != (char *)0x0) {
      __s = pcVar2 + 1;
      pcVar3 = strchr(__s,0x3a);
      iVar1 = parse_level(param_1);
      *param_2 = iVar1;
      if ((((pcVar3 != (char *)0x0) && (iVar1 < 0)) &&
          (local_48 = param_1, lVar4 = strtol(pcVar3 + 1,&local_48,10), pcVar3 + 1 < local_48)) &&
         (*local_48 == ':')) {
        __s_00 = local_48 + 1;
        iVar1 = parse_level(__s_00);
        *param_2 = iVar1;
        if (-1 < iVar1) {
          uVar5 = CRYPTO_strndup(param_1,(long)pcVar2 - (long)param_1,"crypto/cmp/cmp_util.c",99);
          *param_3 = uVar5;
          uVar5 = CRYPTO_strndup(__s,(long)pcVar3 - (long)__s,"crypto/cmp/cmp_util.c",100);
          *param_4 = uVar5;
          *param_5 = (int)lVar4;
          param_1 = strchr(__s_00,0x3a);
          if (param_1 != (char *)0x0) {
            if (param_1[1] == ' ') {
              param_1 = param_1 + 2;
            }
            else {
              param_1 = param_1 + 1;
            }
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



uint OSSL_CMP_print_to_bio(BIO *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 in_R8D;
  undefined8 in_R9;
  
  switch(in_R8D) {
  case 0:
    pcVar2 = "EMERG";
    break;
  case 1:
    pcVar2 = "ALERT";
    break;
  case 2:
    pcVar2 = "CRIT";
    break;
  case 3:
    pcVar2 = "error";
    break;
  case 4:
    pcVar2 = "warning";
    break;
  case 5:
    pcVar2 = "NOTE";
    break;
  case 6:
    pcVar2 = "info";
    break;
  case 7:
    pcVar2 = "DEBUG";
    break;
  default:
    pcVar2 = "(unknown level)";
  }
  uVar1 = BIO_printf(param_1,"CMP %s: %s\n",pcVar2,in_R9);
  return ~uVar1 >> 0x1f;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OSSL_CMP_print_errors_cb(code *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  BIO *a;
  uint uVar5;
  long in_FS_OFFSET;
  undefined4 local_1168;
  byte local_1164 [4];
  undefined8 local_1160;
  char *local_1158;
  long local_1150;
  char local_1148 [256];
  char local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1160 = 0;
  local_1158 = (char *)0x0;
  local_1150 = 0;
LAB_001004c0:
  do {
    uVar2 = ERR_get_error_all(&local_1160,&local_1168,&local_1158,&local_1150,local_1164);
    if (uVar2 == 0) goto LAB_0010059b;
    pcVar3 = ERR_lib_error_string(uVar2);
    pcVar4 = local_1158;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "(unknown function)";
      if (local_1158 != (char *)0x0) {
        pcVar3 = pcVar4;
      }
    }
    else if (((local_1158 != (char *)0x0) && (*local_1158 != '\0')) &&
            (iVar1 = strcmp(local_1158,"(unknown function)"), iVar1 != 0)) {
      pcVar3 = pcVar4;
    }
    if ((uVar2 & 0x80000000) == 0) {
      pcVar4 = ERR_reason_error_string(uVar2);
      if (pcVar4 == (char *)0x0) {
        uVar2 = (ulong)((uint)uVar2 & 0x7fffff);
LAB_00100606:
        BIO_snprintf(local_1148,0x100,"reason(%lu)",uVar2);
        goto LAB_001005e9;
      }
    }
    else {
      uVar5 = (uint)uVar2 & 0x7fffffff;
      iVar1 = openssl_strerror_r(uVar5,local_1148,0x100);
      uVar2 = (ulong)(int)uVar5;
      if (iVar1 == 0) goto LAB_00100606;
LAB_001005e9:
      pcVar4 = local_1148;
    }
    if ((local_1150 == 0) || ((local_1164[0] & 2) == 0)) {
      BIO_snprintf(local_1048,0x1000,"%s",pcVar4);
    }
    else {
      BIO_snprintf(local_1048,0x1000,"%s:%s",pcVar4);
    }
    if (param_1 == (code *)0x0) {
      a = BIO_new_fp(_stderr,0);
      if (a != (BIO *)0x0) {
        OSSL_CMP_print_to_bio(a,pcVar3,local_1160,local_1168,3,local_1048);
        BIO_free(a);
      }
      goto LAB_001004c0;
    }
    iVar1 = (*param_1)(pcVar3,local_1160,local_1168,3,local_1048);
    if (iVar1 < 1) {
LAB_0010059b:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



undefined8 ossl_cmp_X509_STORE_add1_certs(X509_STORE *param_1,long param_2,int param_3)

{
  int iVar1;
  X509 *x;
  int iVar2;
  
  if (param_1 == (X509_STORE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_util.c",0xcf,"ossl_cmp_X509_STORE_add1_certs");
    ERR_set_error(0x3a,0x67,0);
    return 0;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      x = (X509 *)OPENSSL_sk_value(param_2,iVar2);
      if (((param_3 == 0) || (iVar1 = X509_self_signed(x,0), iVar1 == 1)) &&
         (iVar1 = X509_STORE_add_cert(param_1,x), iVar1 == 0)) {
        return 0;
      }
    }
  }
  return 1;
}



undefined8 ossl_cmp_sk_ASN1_UTF8STRING_push_str(long param_1,void *param_2,int param_3)

{
  int iVar1;
  ASN1_UTF8STRING *str;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    str = ASN1_UTF8STRING_new();
    if (str != (ASN1_UTF8STRING *)0x0) {
      iVar1 = ASN1_STRING_set(str,param_2,param_3);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_push(param_1,str);
        if (iVar1 != 0) {
          return 1;
        }
      }
      ASN1_UTF8STRING_free(str);
    }
  }
  return 0;
}



undefined8 ossl_cmp_asn1_octet_string_set1(long *param_1,ASN1_OCTET_STRING *param_2)

{
  undefined8 uVar1;
  ASN1_OCTET_STRING *a;
  
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_util.c",0xf8,"ossl_cmp_asn1_octet_string_set1");
    ERR_set_error(0x3a,0x67,0);
LAB_00100890:
    uVar1 = 0;
  }
  else {
    a = (ASN1_OCTET_STRING *)*param_1;
    if (a != param_2) {
      if (param_2 != (ASN1_OCTET_STRING *)0x0) {
        param_2 = ASN1_OCTET_STRING_dup(param_2);
        if (param_2 == (ASN1_OCTET_STRING *)0x0) goto LAB_00100890;
        a = (ASN1_OCTET_STRING *)*param_1;
      }
      ASN1_OCTET_STRING_free(a);
      *param_1 = (long)param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 ossl_cmp_asn1_octet_string_set1_bytes(undefined8 *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  if (param_1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_util.c",0x110,"ossl_cmp_asn1_octet_string_set1_bytes");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    if (param_2 == (uchar *)0x0) {
      str = (ASN1_OCTET_STRING *)0x0;
LAB_001008e0:
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*param_1);
      *param_1 = str;
      return 1;
    }
    str = ASN1_OCTET_STRING_new();
    if (str != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = ASN1_OCTET_STRING_set(str,param_2,param_3);
      if (iVar1 != 0) goto LAB_001008e0;
    }
    ASN1_OCTET_STRING_free(str);
  }
  return 0;
}


