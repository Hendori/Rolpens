
undefined8 FuzzerInitialize(void)

{
  return 1;
}



undefined8 FuzzerTestOneInput(void *param_1,int param_2)

{
  int iVar1;
  BIO *bio;
  PKCS7 *p7;
  stack_st_PKCS7_SIGNER_INFO *psVar2;
  PKCS7_SIGNER_INFO *pPVar3;
  stack_st_X509_ALGOR *psVar4;
  int iVar5;
  
  bio = BIO_new_mem_buf(param_1,param_2);
  p7 = SMIME_read_PKCS7(bio,(BIO **)0x0);
  if (p7 != (PKCS7 *)0x0) {
    psVar2 = PKCS7_get_signer_info(p7);
    iVar5 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 <= iVar5) break;
      pPVar3 = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar2,iVar5);
      PKCS7_cert_from_signer_info(p7,pPVar3);
      pPVar3 = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar2,iVar5);
      psVar4 = PKCS7_get_smimecap(pPVar3);
      OPENSSL_sk_pop_free(psVar4,&X509_ALGOR_free);
      iVar5 = iVar5 + 1;
    }
    PKCS7_free(p7);
  }
  BIO_free(bio);
  ERR_clear_error();
  return 0;
}



void FuzzerCleanup(void)

{
  return;
}


