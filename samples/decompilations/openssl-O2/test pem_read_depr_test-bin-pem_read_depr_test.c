
BIO * getfile(undefined8 param_1)

{
  int iVar1;
  char *filename;
  BIO *pBVar2;
  
  pBVar2 = (BIO *)0x0;
  filename = (char *)test_mk_file_path(datadir,param_1);
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x1f,"paramsfile",filename);
  if (iVar1 != 0) {
    pBVar2 = BIO_new_file(filename,"r");
  }
  CRYPTO_free(filename);
  return pBVar2;
}



bool test_read_rsa_public(void)

{
  int iVar1;
  BIO *bp;
  RSA *r;
  bool bVar2;
  
  bp = (BIO *)getfile("rsapublickey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0xb0,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    r = (RSA *)0x0;
  }
  else {
    r = PEM_read_bio_RSA_PUBKEY(bp,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0xb4,&_LC5,r);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  RSA_free(r);
  return bVar2;
}



bool test_read_rsa_private(void)

{
  int iVar1;
  BIO *bp;
  RSA *r;
  bool bVar2;
  
  bp = (BIO *)getfile("rsaprivatekey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x9b,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    r = (RSA *)0x0;
  }
  else {
    r = PEM_read_bio_RSAPrivateKey(bp,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x9f,&_LC5,r);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  RSA_free(r);
  return bVar2;
}



bool test_read_dsa_public(void)

{
  int iVar1;
  BIO *bp;
  DSA *r;
  bool bVar2;
  
  bp = (BIO *)getfile("dsapublickey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x85,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    r = (DSA *)0x0;
  }
  else {
    r = PEM_read_bio_DSA_PUBKEY(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x89,&_LC8,r);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  DSA_free(r);
  return bVar2;
}



bool test_read_dsa_private(void)

{
  int iVar1;
  BIO *bp;
  DSA *r;
  bool bVar2;
  
  bp = (BIO *)getfile("dsaprivatekey.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x70,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    r = (DSA *)0x0;
  }
  else {
    r = PEM_read_bio_DSAPrivateKey(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x74,&_LC8,r);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  DSA_free(r);
  return bVar2;
}



bool test_read_dsa_params(void)

{
  int iVar1;
  BIO *bp;
  DSA *r;
  bool bVar2;
  
  bp = (BIO *)getfile("dsaparams.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x5b,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    r = (DSA *)0x0;
  }
  else {
    r = PEM_read_bio_DSAparams(bp,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x5f,&_LC8,r);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  DSA_free(r);
  return bVar2;
}



bool test_read_dh_x942_params(void)

{
  int iVar1;
  BIO *bp;
  DH *dh;
  bool bVar2;
  
  bp = (BIO *)getfile("x942params.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x44,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    dh = (DH *)0x0;
  }
  else {
    dh = PEM_read_bio_DHparams(bp,(DH **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x48,&_LC12,dh);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  DH_free(dh);
  return bVar2;
}



bool test_read_dh_params(void)

{
  int iVar1;
  BIO *bp;
  DH *dh;
  bool bVar2;
  
  bp = (BIO *)getfile("dhparams.pem");
  iVar1 = test_ptr("test/pem_read_depr_test.c",0x2f,"infile");
  if (iVar1 == 0) {
    bVar2 = false;
    dh = (DH *)0x0;
  }
  else {
    dh = PEM_read_bio_DHparams(bp,(DH **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar1 = test_ptr("test/pem_read_depr_test.c",0x33,&_LC12,dh);
    bVar2 = iVar1 != 0;
  }
  BIO_free(bp);
  DH_free(dh);
  return bVar2;
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
      add_test("test_read_rsa_private",test_read_rsa_private);
      add_test("test_read_rsa_public",test_read_rsa_public);
      return 1;
    }
    test_error("test/pem_read_depr_test.c",199,"Error getting data dir\n");
  }
  return 0;
}


