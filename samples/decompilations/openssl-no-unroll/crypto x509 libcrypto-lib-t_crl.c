
undefined8 X509_CRL_print_ex(BIO *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  X509_NAME *nm;
  ASN1_TIME *pAVar4;
  long lVar5;
  stack_st_X509_EXTENSION *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ASN1_INTEGER *a;
  long in_FS_OFFSET;
  X509_ALGOR *local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_printf(param_1,"Certificate Revocation List (CRL):\n");
  uVar3 = X509_CRL_get_version(param_2);
  if (uVar3 < 2) {
    BIO_printf(param_1,"%8sVersion %ld (0x%lx)\n",&_LC1,uVar3 + 1,uVar3);
  }
  else {
    BIO_printf(param_1,"%8sVersion unknown (%ld)\n",&_LC1);
  }
  X509_CRL_get0_signature(param_2,&local_48,&local_50);
  BIO_puts(param_1,"    ");
  X509_signature_print(param_1,local_50,(ASN1_STRING *)0x0);
  BIO_printf(param_1,"%8sIssuer: ",&_LC1);
  nm = (X509_NAME *)X509_CRL_get_issuer(param_2);
  X509_NAME_print_ex(param_1,nm,0,param_3);
  BIO_puts(param_1,"\n");
  BIO_printf(param_1,"%8sLast Update: ",&_LC1);
  pAVar4 = (ASN1_TIME *)X509_CRL_get0_lastUpdate(param_2);
  ASN1_TIME_print(param_1,pAVar4);
  BIO_printf(param_1,"\n%8sNext Update: ",&_LC1);
  lVar5 = X509_CRL_get0_nextUpdate(param_2);
  if (lVar5 == 0) {
    BIO_printf(param_1,"NONE");
  }
  else {
    pAVar4 = (ASN1_TIME *)X509_CRL_get0_nextUpdate(param_2);
    ASN1_TIME_print(param_1,pAVar4);
  }
  BIO_printf(param_1,"\n");
  psVar6 = (stack_st_X509_EXTENSION *)X509_CRL_get0_extensions(param_2);
  X509V3_extensions_print(param_1,"CRL extensions",psVar6,0,8);
  uVar7 = X509_CRL_get_REVOKED(param_2);
  iVar1 = OPENSSL_sk_num(uVar7);
  if (iVar1 < 1) {
    BIO_printf(param_1,"No Revoked Certificates.\n");
  }
  else {
    BIO_printf(param_1,"Revoked Certificates:\n");
  }
  iVar1 = 0;
  while( true ) {
    iVar2 = OPENSSL_sk_num(uVar7);
    if (iVar2 <= iVar1) break;
    uVar8 = OPENSSL_sk_value(uVar7,iVar1);
    BIO_printf(param_1,"    Serial Number: ");
    a = (ASN1_INTEGER *)X509_REVOKED_get0_serialNumber(uVar8);
    i2a_ASN1_INTEGER(param_1,a);
    BIO_printf(param_1,"\n        Revocation Date: ");
    pAVar4 = (ASN1_TIME *)X509_REVOKED_get0_revocationDate(uVar8);
    ASN1_TIME_print(param_1,pAVar4);
    BIO_printf(param_1,"\n");
    psVar6 = (stack_st_X509_EXTENSION *)X509_REVOKED_get0_extensions(uVar8);
    X509V3_extensions_print(param_1,"CRL entry extensions",psVar6,0,8);
    iVar1 = iVar1 + 1;
  }
  X509_signature_print(param_1,local_50,local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_CRL_print(BIO *bp,X509_CRL *x)

{
  int iVar1;
  
  iVar1 = X509_CRL_print_ex(bp,x,0);
  return iVar1;
}



int X509_CRL_print_fp(FILE *bp,X509_CRL *x)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp_00;
  
  type = BIO_s_file();
  bp_00 = BIO_new(type);
  if (bp_00 != (BIO *)0x0) {
    BIO_ctrl(bp_00,0x6a,0,bp);
    iVar1 = X509_CRL_print(bp_00,x);
    BIO_free(bp_00);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/t_crl.c",0x19,"X509_CRL_print_fp");
  ERR_set_error(0xb,0x80007,0);
  return 0;
}


