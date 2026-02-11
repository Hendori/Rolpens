
uint test_x509_req_detect_invalid_version(void)

{
  int iVar1;
  uint uVar2;
  char *filename;
  BIO *bp;
  X509_REQ *req;
  EVP_PKEY *r;
  
  filename = (char *)test_mk_file_path(certsDir,"x509-req-detect-invalid-version.pem");
  if (filename == (char *)0x0) {
    req = (X509_REQ *)0x0;
    r = (EVP_PKEY *)0x0;
    bp = (BIO *)0x0;
    uVar2 = 0;
  }
  else {
    bp = BIO_new_file(filename,"r");
    iVar1 = test_ptr("test/x509_req_test.c",0x23,"bio = BIO_new_file(certFilePath, \"r\")");
    if (iVar1 == 0) {
      req = (X509_REQ *)0x0;
      r = (EVP_PKEY *)0x0;
      uVar2 = 0;
    }
    else {
      req = PEM_read_bio_X509_REQ(bp,(X509_REQ **)0x0,(undefined1 *)0x0,(void *)0x0);
      if (req == (X509_REQ *)0x0) {
        r = (EVP_PKEY *)0x0;
        uVar2 = 1;
      }
      else {
        r = X509_REQ_get_pubkey(req);
        uVar2 = test_ptr("test/x509_req_test.c",0x2a,"pkey = X509_REQ_get_pubkey(req)",r);
        if (uVar2 != 0) {
          iVar1 = X509_REQ_verify(req,r);
          iVar1 = test_int_ne("test/x509_req_test.c",0x2d,"X509_REQ_verify(req, pkey)",&_LC5,iVar1,1
                             );
          uVar2 = (uint)(iVar1 != 0);
        }
      }
    }
  }
  EVP_PKEY_free(r);
  X509_REQ_free(req);
  BIO_free(bp);
  CRYPTO_free(filename);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/x509_req_test.c",0x3d,"Error parsing test options\n");
  }
  else {
    certsDir = test_get_argument(0);
    iVar1 = test_ptr("test/x509_req_test.c",0x40,"certsDir = test_get_argument(0)",certsDir);
    if (iVar1 != 0) {
      add_test("test_x509_req_detect_invalid_version",0x100000);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  return;
}


