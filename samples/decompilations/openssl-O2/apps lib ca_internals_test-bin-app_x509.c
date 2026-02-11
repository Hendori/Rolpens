
undefined4 do_x509_ctrl_string(code *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  char *__s_00;
  size_t sVar3;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = CRYPTO_strdup(param_3,"apps/lib/app_x509.c",0x5e);
  if (__s == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar3 = 0;
    __s_00 = strchr(__s,0x3a);
    if (__s_00 != (char *)0x0) {
      *__s_00 = '\0';
      __s_00 = __s_00 + 1;
      sVar3 = strlen(__s_00);
    }
    iVar1 = strcmp(__s,"distid");
    uVar2 = 0xf;
    if (iVar1 != 0) {
      iVar1 = strcmp(__s,"hexdistid");
      uVar2 = 0;
      if ((iVar1 == 0) && (uVar2 = 0xf, __s_00 != (char *)0x0)) {
        local_48 = 0;
        __s_00 = (char *)OPENSSL_hexstr2buf(__s_00,&local_48);
        CRYPTO_free(__s);
        uVar2 = 0xf;
        __s = __s_00;
        sVar3 = local_48;
      }
    }
    uVar2 = (*param_1)(param_2,uVar2,__s_00,sVar3);
    CRYPTO_free(__s);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 x509_ctrl(undefined8 param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  if (param_2 != 0xf) {
    return 0xfffffffe;
  }
  str = ASN1_OCTET_STRING_new();
  if (str == (ASN1_OCTET_STRING *)0x0) {
    BIO_printf(_bio_err,"error: allocation failed\n");
  }
  else {
    iVar1 = ASN1_OCTET_STRING_set(str,param_3,param_4);
    if (iVar1 != 0) {
      X509_set0_distinguishing_id(param_1,str);
      return 1;
    }
    ASN1_OCTET_STRING_free(str);
  }
  BIO_printf(_bio_err,"error: setting distinguishing ID in certificate failed\n");
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 x509_req_ctrl(undefined8 param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  if (param_2 != 0xf) {
    return 0xfffffffe;
  }
  str = ASN1_OCTET_STRING_new();
  if (str == (ASN1_OCTET_STRING *)0x0) {
    BIO_printf(_bio_err,"error: allocation failed\n");
  }
  else {
    iVar1 = ASN1_OCTET_STRING_set(str,param_3,param_4);
    if (iVar1 != 0) {
      X509_REQ_set0_distinguishing_id(param_1,str);
      return 1;
    }
    ASN1_OCTET_STRING_free(str);
  }
  BIO_printf(_bio_err,"error: setting distinguishing ID in certificate signing request failed\n");
  return 0;
}



void x509_ctrl_string(undefined8 param_1,undefined8 param_2)

{
  do_x509_ctrl_string(x509_ctrl,param_1,param_2);
  return;
}



void x509_req_ctrl_string(undefined8 param_1,undefined8 param_2)

{
  do_x509_ctrl_string(x509_req_ctrl,param_1,param_2);
  return;
}


