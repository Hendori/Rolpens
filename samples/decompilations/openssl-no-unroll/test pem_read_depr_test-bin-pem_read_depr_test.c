
uint test_read_rsa_private(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  RSA *r;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"rsaprivatekey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  r = (RSA *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x9b,"infile");
  if (uVar2 != 0) {
    r = PEM_read_bio_RSAPrivateKey(bp,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x9f,&_LC5,r);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  RSA_free(r);
  return uVar2;
}



uint test_read_rsa_public(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  RSA *r;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"rsapublickey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  r = (RSA *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0xb0,"infile");
  if (uVar2 != 0) {
    r = PEM_read_bio_RSA_PUBKEY(bp,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0xb4,&_LC5,r);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  RSA_free(r);
  return uVar2;
}



uint test_read_dh_params(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  DH *dh;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"dhparams.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  dh = (DH *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x2f,"infile");
  if (uVar2 != 0) {
    dh = PEM_read_bio_DHparams(bp,(DH **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x33,&_LC8,dh);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  DH_free(dh);
  return uVar2;
}



uint test_read_dh_x942_params(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  DH *dh;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"x942params.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  dh = (DH *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x44,"infile");
  if (uVar2 != 0) {
    dh = PEM_read_bio_DHparams(bp,(DH **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x48,&_LC8,dh);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  DH_free(dh);
  return uVar2;
}



uint test_read_dsa_params(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  DSA *r;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"dsaparams.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  r = (DSA *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x5b,"infile");
  if (uVar2 != 0) {
    r = PEM_read_bio_DSAparams(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x5f,&_LC11,r);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  DSA_free(r);
  return uVar2;
}



uint test_read_dsa_private(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  DSA *r;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"dsaprivatekey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  r = (DSA *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x70,"infile");
  if (uVar2 != 0) {
    r = PEM_read_bio_DSAPrivateKey(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x74,&_LC11,r);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  DSA_free(r);
  return uVar2;
}



uint test_read_dsa_public(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  DSA *r;
  
  bp = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,"dsapublickey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    bp = BIO_new_file(filename,"r");
  }
  r = (DSA *)0x0;
  CRYPTO_free(filename);
  uVar2 = test_ptr("test/pem_read_depr_test.c",0x85,"infile");
  if (uVar2 != 0) {
    r = PEM_read_bio_DSA_PUBKEY(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x89,&_LC11,r);
    uVar2 = (uint)(iVar1 != 0);
  }
  BIO_free(bp);
  DSA_free(r);
  return uVar2;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/pem_read_depr_test.c",0xc2,"Error parsing test options\n");
  }
  else {
    datadir = test_get_argument(0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0xc6,"datadir = test_get_argument(0)",datadir);
    if (iVar1 != 0) {
      add_test("test_read_dh_params",test_read_dh_params);
      add_test("test_read_dh_x942_params",test_read_dh_x942_params);
      add_test("test_read_dsa_params",test_read_dsa_params);
      add_test("test_read_dsa_private",test_read_dsa_private);
      add_test("test_read_dsa_public",test_read_dsa_public);
      add_test("test_read_rsa_private",0x100000);
      add_test("test_read_rsa_public",test_read_rsa_public);
      return 1;
    }
    test_error("test/pem_read_depr_test.c",199,"Error getting data dir\n");
  }
  return 0;
}


