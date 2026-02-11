
uint pkcs7_inner_content_verify_test(void)

{
  int iVar1;
  uint uVar2;
  BIO *bp;
  BIO *bp_00;
  X509 *x;
  ulong uVar3;
  X509_VERIFY_PARAM *param;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  PKCS7 *p7;
  long in_FS_OFFSET;
  X509_STORE *local_670;
  undefined8 local_668;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined8 *)&DAT_00101120;
  puVar6 = &local_668;
  for (lVar4 = 0xc4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
  *(undefined2 *)((long)puVar6 + 4) = DAT_00101744;
  *(undefined1 *)((long)puVar6 + 6) = DAT_00101746;
  bp = BIO_new_mem_buf(&local_668,0x627);
  iVar1 = test_ptr("test/pkcs7_test.c",0x16c,"bio = BIO_new_mem_buf(sig_der, sizeof sig_der)",bp);
  if (iVar1 == 0) {
    uVar2 = 0;
    p7 = (PKCS7 *)0x0;
    local_670 = (X509_STORE *)0x0;
    x = (X509 *)0x0;
    bp_00 = (BIO *)0x0;
  }
  else {
    bp_00 = BIO_new_mem_buf(smroot_der,0x37f);
    iVar1 = test_ptr("test/pkcs7_test.c",0x16f,
                     "x509_bio = BIO_new_mem_buf(smroot_der, sizeof smroot_der)",bp_00);
    if (iVar1 == 0) {
      p7 = (PKCS7 *)0x0;
      local_670 = (X509_STORE *)0x0;
      x = (X509 *)0x0;
      uVar2 = 0;
    }
    else {
      p7 = (PKCS7 *)0x0;
      x = d2i_X509_bio(bp_00,(X509 **)0x0);
      uVar2 = test_ptr("test/pkcs7_test.c",0x170,"cert = d2i_X509_bio(x509_bio, NULL)",x);
      local_670 = (X509_STORE *)0x0;
      if (uVar2 != 0) {
        local_670 = (X509_STORE *)0x0;
        uVar3 = ERR_peek_error();
        uVar2 = test_int_eq("test/pkcs7_test.c",0x171,"ERR_peek_error()",&_LC5,uVar3 & 0xffffffff);
        if (uVar2 != 0) {
          local_670 = X509_STORE_new();
          iVar1 = test_ptr("test/pkcs7_test.c",0x172,"store = X509_STORE_new()",local_670);
          if (iVar1 != 0) {
            iVar1 = X509_STORE_add_cert(local_670,x);
            iVar1 = test_true("test/pkcs7_test.c",0x173,"X509_STORE_add_cert(store, cert)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(local_670);
              iVar1 = test_ptr("test/pkcs7_test.c",0x174,"param = X509_STORE_get0_param(store)",
                               param);
              if (iVar1 != 0) {
                iVar1 = X509_VERIFY_PARAM_set_purpose(param,10);
                iVar1 = test_true("test/pkcs7_test.c",0x175,
                                  "X509_VERIFY_PARAM_set_purpose(param, X509_PURPOSE_CODE_SIGN)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = X509_STORE_set1_param(local_670,param);
                  iVar1 = test_true("test/pkcs7_test.c",0x177,"X509_STORE_set1_param(store, param)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    p7 = d2i_PKCS7_bio(bp,(PKCS7 **)0x0);
                    iVar1 = test_ptr("test/pkcs7_test.c",0x178,"p7 = d2i_PKCS7_bio(bio, NULL)",p7);
                    if (iVar1 != 0) {
                      ERR_peek_error();
                      iVar1 = test_int_eq("test/pkcs7_test.c",0x179,"ERR_peek_error()");
                      if (iVar1 != 0) {
                        iVar1 = PKCS7_verify(p7,(stack_st_X509 *)0x0,local_670,(BIO *)0x0,(BIO *)0x0
                                             ,0);
                        uVar2 = test_true("test/pkcs7_test.c",0x17a,
                                          "PKCS7_verify(p7, NULL, store, NULL, NULL, 0)",iVar1 != 0)
                        ;
                        if (uVar2 != 0) {
                          uVar3 = ERR_peek_error();
                          iVar1 = test_int_eq("test/pkcs7_test.c",0x17b,"ERR_peek_error()",&_LC5,
                                              uVar3 & 0xffffffff,0);
                          uVar2 = (uint)(iVar1 != 0);
                        }
                        goto LAB_00100097;
                      }
                    }
                    uVar2 = 0;
                    goto LAB_00100097;
                  }
                }
              }
            }
          }
          p7 = (PKCS7 *)0x0;
          uVar2 = 0;
        }
      }
    }
  }
LAB_00100097:
  X509_STORE_free(local_670);
  X509_free(x);
  PKCS7_free(p7);
  BIO_free(bp_00);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint pkcs7_verify_test(void)

{
  char *buf;
  int iVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *bp;
  BIO *indata;
  BIO *bp_00;
  X509 *x;
  ulong uVar3;
  X509_STORE *ctx;
  char **ppcVar4;
  long in_FS_OFFSET;
  PKCS7 *local_98;
  char *local_88 [8];
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = 
  "MIME-Version: 1.0\nContent-Type: multipart/signed; protocol=\"application/x-pkcs7-signature\"; micalg=\"sha-256\"; boundary=\"----9B5319FF2E4428B17CD26B69294E7F31\"\n\n"
  ;
  local_88[1] = "This is an S/MIME signed message\n\n------9B5319FF2E4428B17CD26B69294E7F31\n";
  local_88[2] = 
  "Content-Type: text/plain\r\n\r\nhello world\n------9B5319FF2E4428B17CD26B69294E7F31\n";
  local_88[3] = "Content-Type: application/x-pkcs7-signature; name=\"smime.p7s\"\n";
  local_88[4] = 
  "Content-Transfer-Encoding: base64\nContent-Disposition: attachment; filename=\"smime.p7s\"\n\n";
  local_88[5] = 
  "MIIDEgYJKoZIhvcNAQcCoIIDAzCCAv8CAQExDzANBglghkgBZQMEAgEFADALBgkq\nhkiG9w0BBwGgggFVMIIBUTCB96ADAgECAgIDCTAKBggqhkjOPQQDAjAnMQswCQYD\nVQQGEwJVUzEYMBYGA1UEAwwPY3J5cHRvZ3JhcGh5IENBMB4XDTE3MDEwMTEyMDEw\nMFoXDTM4MTIzMTA4MzAwMFowJzELMAkGA1UEBhMCVVMxGDAWBgNVBAMMD2NyeXB0\nb2dyYXBoeSBDQTBZMBMGByqGSM49AgEGCCqGSM49AwEHA0IABBj/z7v5Obj13cPu\nwECLBnUGq0/N2CxSJE4f4BBGZ7VfFblivTvPDG++Gve0oQ+0uctuhrNQ+WxRv8GC\n"
  ;
  local_88[6] = 
  "177F+QWjEzARMA8GA1UdEwEB/wQFMAMBAf8wCgYIKoZIzj0EAwIDSQAwRgIhANES\n742XWm64tkGnz8DnpG6u2lHkZFQr3oaVvPcemvlbAiEA0WGGzmYx5C9UvfXIK7NE\nziT4pQtyESE0uRVKXw4nMqkxggGBMIIBfQIBATAtMCcxCzAJBgNVBAYTAlVTMRgw\nFgYDVQQDDA9jcnlwdG9ncmFwaHkgQ0ECAgMJMA0GCWCGSAFlAwQCAQUAoIHkMBgG\nCSqGSIb3DQEJAzELBgkqhkiG9w0BBwEwHAYJKoZIhvcNAQkFMQ8XDTIxMDUyMDE4\nNTA0OVowLwYJKoZIhvcNAQkEMSIEIOdwMRgQrqcnmMYvag+BVvErcc6bwUXI94Ds\n"
  ;
  local_88[7] = 
  "QkiyIU9pMHkGCSqGSIb3DQEJDzFsMGowCwYJYIZIAWUDBAEqMAsGCWCGSAFlAwQB\nFjALBglghkgBZQMEAQIwCgYIKoZIhvcNAwcwDgYIKoZIhvcNAwICAgCAMA0GCCqG\nSIb3DQMCAgFAMAcGBSsOAwIHMA0GCCqGSIb3DQMCAgEoMAoGCCqGSM49BAMCBEcw\nRQIhANYMJku1fW9T1MIEcAyREArz9kXCY4tWck5Pt0xzrYhaAiBDSP6e43zj4YtI\nuvQW+Lzv+dNF8EPuhgoPNe17RuUSLw==\n\n------9B5319FF2E4428B17CD26B69294E7F31--\n\n"
  ;
  type = BIO_s_mem();
  bp = BIO_new(type);
  iVar1 = test_ptr("test/pkcs7_test.c",0x95,"bio = BIO_new(BIO_s_mem())",bp);
  if (iVar1 == 0) {
    local_98 = (PKCS7 *)0x0;
    uVar2 = 0;
    ctx = (X509_STORE *)0x0;
    indata = (BIO *)0x0;
    x = (X509 *)0x0;
    bp_00 = (BIO *)0x0;
  }
  else {
    ppcVar4 = local_88;
    do {
      buf = *ppcVar4;
      ppcVar4 = ppcVar4 + 1;
      BIO_puts(bp,buf);
    } while (&local_48 != ppcVar4);
    indata = BIO_new_mem_buf("Content-Type: text/plain\r\n\r\nhello world",0x27);
    iVar1 = test_ptr("test/pkcs7_test.c",0x9a,
                     "msg_bio = BIO_new_mem_buf(signed_data, strlen(signed_data))",indata);
    if (iVar1 == 0) {
      local_98 = (PKCS7 *)0x0;
      ctx = (X509_STORE *)0x0;
      x = (X509 *)0x0;
      bp_00 = (BIO *)0x0;
      uVar2 = 0;
    }
    else {
      bp_00 = BIO_new_mem_buf(cert_der,0x155);
      iVar1 = test_ptr("test/pkcs7_test.c",0x9b,
                       "x509_bio = BIO_new_mem_buf(cert_der, sizeof(cert_der))",bp_00);
      if (iVar1 == 0) {
        local_98 = (PKCS7 *)0x0;
        ctx = (X509_STORE *)0x0;
        x = (X509 *)0x0;
        uVar2 = 0;
      }
      else {
        x = d2i_X509_bio(bp_00,(X509 **)0x0);
        iVar1 = test_ptr("test/pkcs7_test.c",0x9c,"cert = d2i_X509_bio(x509_bio, NULL)",x);
        if (iVar1 != 0) {
          uVar3 = ERR_peek_error();
          iVar1 = test_int_eq("test/pkcs7_test.c",0x9d,"ERR_peek_error()",&_LC5,uVar3 & 0xffffffff,0
                             );
          if (iVar1 != 0) {
            ctx = X509_STORE_new();
            uVar2 = test_ptr("test/pkcs7_test.c",0x9e,"store = X509_STORE_new()",ctx);
            local_98 = (PKCS7 *)0x0;
            if (uVar2 != 0) {
              iVar1 = X509_STORE_add_cert(ctx,x);
              uVar2 = test_true("test/pkcs7_test.c",0x9f,"X509_STORE_add_cert(store, cert)",
                                iVar1 != 0);
              if (uVar2 != 0) {
                local_98 = SMIME_read_PKCS7(bp,(BIO **)0x0);
                iVar1 = test_ptr("test/pkcs7_test.c",0xa0,"p7 = SMIME_read_PKCS7(bio, NULL)",
                                 local_98);
                if (iVar1 != 0) {
                  uVar3 = ERR_peek_error();
                  iVar1 = test_int_eq("test/pkcs7_test.c",0xa1,"ERR_peek_error()",&_LC5,
                                      uVar3 & 0xffffffff,0);
                  if (iVar1 != 0) {
                    iVar1 = PKCS7_verify(local_98,(stack_st_X509 *)0x0,ctx,indata,(BIO *)0x0,1);
                    uVar2 = test_true("test/pkcs7_test.c",0xa2,
                                      "PKCS7_verify(p7, NULL, store, msg_bio, NULL, PKCS7_TEXT)",
                                      iVar1 != 0);
                    if (uVar2 != 0) {
                      uVar3 = ERR_peek_error();
                      iVar1 = test_int_eq("test/pkcs7_test.c",0xa3,"ERR_peek_error()",&_LC5,
                                          uVar3 & 0xffffffff,0);
                      uVar2 = (uint)(iVar1 != 0);
                    }
                    goto LAB_001004d0;
                  }
                }
                uVar2 = 0;
              }
            }
            goto LAB_001004d0;
          }
        }
        local_98 = (PKCS7 *)0x0;
        ctx = (X509_STORE *)0x0;
        uVar2 = 0;
      }
    }
  }
LAB_001004d0:
  X509_STORE_free(ctx);
  X509_free(x);
  PKCS7_free(local_98);
  BIO_free(indata);
  BIO_free(bp_00);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  add_test("pkcs7_verify_test",pkcs7_verify_test);
  add_test("pkcs7_inner_content_verify_test",0x100000);
  return 1;
}


