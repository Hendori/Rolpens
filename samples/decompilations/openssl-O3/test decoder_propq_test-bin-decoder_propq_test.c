
bool test_decode_nonfipsalg(void)

{
  int iVar1;
  BIO *a;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  EVP_PKEY *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (EVP_PKEY *)0x0;
  EVP_default_properties_enable_fips(libctx,1);
  a = BIO_new_file(filename,"r");
  iVar1 = test_ptr("test/decoder_propq_test.c",0x3c,"bio = BIO_new_file(filename, \"r\")",a);
  if (iVar1 != 0) {
    uVar2 = PEM_read_bio_PrivateKey_ex(a,&local_38,passcb,0,libctx,0);
    iVar1 = test_ptr_null("test/decoder_propq_test.c",0x43,
                          "PEM_read_bio_PrivateKey_ex(bio, &privkey, &passcb, NULL, libctx, NULL)",
                          uVar2);
    if (iVar1 != 0) {
      uVar2 = PEM_read_bio_PrivateKey_ex(a,&local_38,passcb,0,libctx,"?fips=true");
      iVar1 = test_ptr_null("test/decoder_propq_test.c",0x4a,
                            "PEM_read_bio_PrivateKey_ex(bio, &privkey, &passcb, NULL, libctx, \"?fips=true\")"
                            ,uVar2);
      bVar3 = iVar1 != 0;
      goto LAB_00100071;
    }
  }
  bVar3 = false;
LAB_00100071:
  BIO_free(a);
  EVP_PKEY_free(local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 passcb(undefined4 *param_1)

{
  *param_1 = 0x73736170;
  *(undefined1 *)(param_1 + 1) = 0;
  return 4;
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = "default";
  uVar2 = 0;
LAB_00100173:
  do {
    iVar1 = opt_next();
    while( true ) {
      if (iVar1 == 0) {
        filename = test_get_argument(0);
        iVar1 = test_get_libctx(&libctx,&nullprov,uVar2,&libprov,pcVar3);
        if (iVar1 == 0) {
          return 0;
        }
        add_test("test_decode_nonfipsalg",0x100000);
        return 1;
      }
      if (iVar1 == 2) {
        pcVar3 = (char *)opt_arg();
        goto LAB_00100173;
      }
      if (2 < iVar1) break;
      if (iVar1 != 1) {
        return 0;
      }
      uVar2 = opt_arg();
      iVar1 = opt_next();
    }
    if (5 < iVar1 - 500U) {
      return 0;
    }
  } while( true );
}



void cleanup_tests(void)

{
  OSSL_PROVIDER_unload(libprov);
  OSSL_LIB_CTX_free(libctx);
  OSSL_PROVIDER_unload(nullprov);
  return;
}


