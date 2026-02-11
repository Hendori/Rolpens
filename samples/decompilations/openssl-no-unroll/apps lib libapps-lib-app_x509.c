
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 x509_ctrl_string(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uchar *__s;
  uchar *data;
  size_t sVar3;
  ASN1_OCTET_STRING *str;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (uchar *)CRYPTO_strdup(param_2,"apps/lib/app_x509.c",0x5e);
  if (__s == (uchar *)0x0) {
    uVar4 = 0xffffffff;
    goto LAB_001000cd;
  }
  iVar2 = 0;
  data = (uchar *)strchr((char *)__s,0x3a);
  if (data != (uchar *)0x0) {
    *data = '\0';
    data = data + 1;
    sVar3 = strlen((char *)data);
    iVar2 = (int)sVar3;
  }
  iVar1 = strcmp((char *)__s,"distid");
  if (iVar1 == 0) {
LAB_00100085:
    str = ASN1_OCTET_STRING_new();
joined_r0x00100152:
    if (str == (ASN1_OCTET_STRING *)0x0) {
      BIO_printf(_bio_err,"error: allocation failed\n");
    }
    else {
      iVar2 = ASN1_OCTET_STRING_set(str,data,iVar2);
      if (iVar2 != 0) {
        uVar4 = 1;
        X509_set0_distinguishing_id(param_1,str);
        goto LAB_001000bd;
      }
      ASN1_OCTET_STRING_free(str);
    }
    uVar4 = 0;
    BIO_printf(_bio_err,"error: setting distinguishing ID in certificate failed\n");
  }
  else {
    uVar4 = 0xfffffffe;
    iVar1 = strcmp((char *)__s,"hexdistid");
    if (iVar1 == 0) {
      if (data == (uchar *)0x0) goto LAB_00100085;
      local_48 = 0;
      data = (uchar *)OPENSSL_hexstr2buf(data,&local_48);
      CRYPTO_free(__s);
      iVar2 = (int)local_48;
      str = ASN1_OCTET_STRING_new();
      __s = data;
      goto joined_r0x00100152;
    }
  }
LAB_001000bd:
  CRYPTO_free(__s);
LAB_001000cd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 x509_req_ctrl_string(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uchar *__s;
  uchar *data;
  size_t sVar3;
  ASN1_OCTET_STRING *str;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (uchar *)CRYPTO_strdup(param_2,"apps/lib/app_x509.c",0x5e);
  if (__s == (uchar *)0x0) {
    uVar4 = 0xffffffff;
    goto LAB_0010028d;
  }
  iVar2 = 0;
  data = (uchar *)strchr((char *)__s,0x3a);
  if (data != (uchar *)0x0) {
    *data = '\0';
    data = data + 1;
    sVar3 = strlen((char *)data);
    iVar2 = (int)sVar3;
  }
  iVar1 = strcmp((char *)__s,"distid");
  if (iVar1 == 0) {
LAB_00100245:
    str = ASN1_OCTET_STRING_new();
joined_r0x00100312:
    if (str == (ASN1_OCTET_STRING *)0x0) {
      BIO_printf(_bio_err,"error: allocation failed\n");
    }
    else {
      iVar2 = ASN1_OCTET_STRING_set(str,data,iVar2);
      if (iVar2 != 0) {
        uVar4 = 1;
        X509_REQ_set0_distinguishing_id(param_1,str);
        goto LAB_0010027d;
      }
      ASN1_OCTET_STRING_free(str);
    }
    uVar4 = 0;
    BIO_printf(_bio_err,"error: setting distinguishing ID in certificate signing request failed\n");
  }
  else {
    uVar4 = 0xfffffffe;
    iVar1 = strcmp((char *)__s,"hexdistid");
    if (iVar1 == 0) {
      if (data == (uchar *)0x0) goto LAB_00100245;
      local_48 = 0;
      data = (uchar *)OPENSSL_hexstr2buf(data,&local_48);
      CRYPTO_free(__s);
      iVar2 = (int)local_48;
      str = ASN1_OCTET_STRING_new();
      __s = data;
      goto joined_r0x00100312;
    }
  }
LAB_0010027d:
  CRYPTO_free(__s);
LAB_0010028d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


