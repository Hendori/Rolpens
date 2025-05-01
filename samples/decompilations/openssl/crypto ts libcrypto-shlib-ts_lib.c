
ulong TS_ASN1_INTEGER_print_bio(BIO *param_1,ASN1_INTEGER *param_2)

{
  int iVar1;
  BIGNUM *a;
  char *__s;
  size_t sVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffff;
  a = ASN1_INTEGER_to_BN(param_2,(BIGNUM *)0x0);
  if (a != (BIGNUM *)0x0) {
    uVar3 = 0;
    __s = BN_bn2hex(a);
    if (__s != (char *)0x0) {
      iVar1 = BIO_write(param_1,&_LC0,2);
      if (0 < iVar1) {
        sVar2 = strlen(__s);
        iVar1 = BIO_write(param_1,__s,(int)sVar2);
        uVar3 = (ulong)(0 < iVar1);
      }
      CRYPTO_free(__s);
    }
    BN_free(a);
  }
  return uVar3;
}



undefined8 TS_OBJ_print_bio(BIO *param_1,ASN1_OBJECT *param_2)

{
  long in_FS_OFFSET;
  char acStack_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OBJ_obj2txt(acStack_a8,0x80,param_2,0);
  BIO_printf(param_1,"%s\n",acStack_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 TS_ext_print_bio(BIO *param_1,stack_st_X509_EXTENSION *param_2)

{
  int iVar1;
  int iVar2;
  X509_EXTENSION *ex;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *v;
  char *pcVar3;
  int loc;
  
  BIO_printf(param_1,"Extensions:\n");
  iVar1 = X509v3_get_ext_count(param_2);
  if (0 < iVar1) {
    loc = 0;
    do {
      ex = X509v3_get_ext(param_2,loc);
      a = X509_EXTENSION_get_object(ex);
      iVar2 = i2a_ASN1_OBJECT(param_1,a);
      if (iVar2 < 0) {
        return 0;
      }
      iVar2 = X509_EXTENSION_get_critical(ex);
      pcVar3 = " critical";
      if (iVar2 == 0) {
        pcVar3 = "";
      }
      BIO_printf(param_1,":%s\n",pcVar3);
      iVar2 = X509V3_EXT_print(param_1,ex,0,4);
      if (iVar2 == 0) {
        BIO_printf(param_1,"%4s",&_LC4);
        v = X509_EXTENSION_get_data(ex);
        ASN1_STRING_print(param_1,v);
      }
      loc = loc + 1;
      BIO_write(param_1,&_LC8,1);
    } while (iVar1 != loc);
  }
  return 1;
}



void TS_X509_ALGOR_print_bio(BIO *param_1,undefined8 *param_2)

{
  int n;
  char *pcVar1;
  
  n = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  pcVar1 = "UNKNOWN";
  if (n != 0) {
    pcVar1 = OBJ_nid2ln(n);
  }
  BIO_printf(param_1,"Hash Algorithm: %s\n",pcVar1);
  return;
}



undefined8 TS_MSG_IMPRINT_print_bio(BIO *param_1,undefined8 *param_2)

{
  ASN1_STRING *x;
  int len;
  char *bytes;
  
  TS_X509_ALGOR_print_bio(param_1,*param_2);
  BIO_printf(param_1,"Message data:\n");
  x = (ASN1_STRING *)param_2[1];
  len = ASN1_STRING_length(x);
  bytes = (char *)ASN1_STRING_get0_data(x);
  BIO_dump_indent(param_1,bytes,len,4);
  return 1;
}


