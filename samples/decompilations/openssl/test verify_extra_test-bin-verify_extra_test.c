
uint do_test_purpose(int param_1,undefined4 param_2)

{
  int iVar1;
  X509 *x509;
  X509 *a;
  X509 *a_00;
  undefined8 uVar2;
  stack_st_X509 *chain;
  X509_STORE_CTX *ctx;
  uint local_44;
  
  x509 = (X509 *)load_cert_pem(ee_cert,0);
  a = (X509 *)load_cert_pem(ca_cert,0);
  a_00 = (X509 *)load_cert_pem(sroot_cert,0);
  uVar2 = OPENSSL_sk_new_null();
  chain = (stack_st_X509 *)OPENSSL_sk_new_null();
  ctx = X509_STORE_CTX_new();
  iVar1 = test_ptr("test/verify_extra_test.c",0xeb,"eecert",x509);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/verify_extra_test.c",0xec,"untrcert",a);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/verify_extra_test.c",0xed,"trcert",a_00);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/verify_extra_test.c",0xee,"trusted",uVar2);
        if (iVar1 != 0) {
          iVar1 = test_ptr("test/verify_extra_test.c",0xef,"untrusted",chain);
          if (iVar1 != 0) {
            iVar1 = test_ptr("test/verify_extra_test.c",0xf0,&_LC6,ctx);
            if (iVar1 != 0) {
              iVar1 = OPENSSL_sk_push(uVar2,a_00);
              local_44 = test_true("test/verify_extra_test.c",0xf4,"sk_X509_push(trusted, trcert)",
                                   iVar1 != 0);
              if (local_44 != 0) {
                iVar1 = OPENSSL_sk_push(chain,a);
                a_00 = (X509 *)0x0;
                local_44 = test_true("test/verify_extra_test.c",0xf7,
                                     "sk_X509_push(untrusted, untrcert)",iVar1 != 0);
                if (local_44 != 0) {
                  iVar1 = X509_STORE_CTX_init(ctx,(X509_STORE *)0x0,x509,chain);
                  iVar1 = test_true("test/verify_extra_test.c",0xfb,
                                    "X509_STORE_CTX_init(ctx, NULL, eecert, untrusted)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = X509_STORE_CTX_set_purpose(ctx,param_1);
                    iVar1 = test_true("test/verify_extra_test.c",0xfe,
                                      "X509_STORE_CTX_set_purpose(ctx, purpose)",iVar1 != 0);
                    if (iVar1 != 0) {
                      X509_STORE_CTX_set0_trusted_stack(ctx,uVar2);
                      iVar1 = X509_verify_cert(ctx);
                      iVar1 = test_int_eq("test/verify_extra_test.c",0x108,"X509_verify_cert(ctx)",
                                          "expected",iVar1,param_2);
                      a_00 = (X509 *)0x0;
                      a = (X509 *)0x0;
                      local_44 = (uint)(iVar1 != 0);
                      goto LAB_0010008d;
                    }
                  }
                  local_44 = 0;
                  a_00 = (X509 *)0x0;
                  a = (X509 *)0x0;
                }
              }
              goto LAB_0010008d;
            }
          }
        }
      }
    }
  }
  local_44 = 0;
LAB_0010008d:
  OSSL_STACK_OF_X509_free(uVar2);
  OSSL_STACK_OF_X509_free(chain);
  X509_STORE_CTX_free(ctx);
  X509_free(x509);
  X509_free(a);
  X509_free(a_00);
  return local_44;
}



void test_purpose_any(void)

{
  do_test_purpose(7,1);
  return;
}



void test_purpose_ssl_server(void)

{
  do_test_purpose(2,1);
  return;
}



void test_purpose_ssl_client(void)

{
  do_test_purpose(1,0);
  return;
}



uint test_self_signed(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  X509 *x509;
  undefined8 uVar4;
  X509_STORE_CTX *ctx;
  
  x509 = (X509 *)load_cert_pem(param_1,0);
  uVar4 = OPENSSL_sk_new_null();
  ctx = X509_STORE_CTX_new();
  uVar1 = X509_self_signed(x509,1);
  uVar2 = test_int_eq("test/verify_extra_test.c",0xbc,"X509_self_signed(cert, 1)","expected",uVar1,
                      param_3);
  if (x509 == (X509 *)0x0) goto LAB_00100375;
  if (param_2 == 0) {
LAB_001003ce:
    if (uVar2 != 0) {
      iVar3 = X509_STORE_CTX_init(ctx,(X509_STORE *)0x0,x509,(stack_st_X509 *)0x0);
      iVar3 = test_true("test/verify_extra_test.c",0xc1,"X509_STORE_CTX_init(ctx, NULL, cert, NULL)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        X509_STORE_CTX_set0_trusted_stack(ctx,uVar4);
        iVar3 = X509_verify_cert(ctx);
        iVar3 = test_int_eq("test/verify_extra_test.c",0xc3,"X509_verify_cert(ctx)","expected",iVar3
                            ,param_3);
        uVar2 = (uint)(iVar3 != 0);
        goto LAB_00100375;
      }
    }
  }
  else if (uVar2 != 0) {
    OPENSSL_sk_push(uVar4,x509);
    uVar2 = test_true("test/verify_extra_test.c",0xc0,"sk_X509_push(trusted, cert)");
    goto LAB_001003ce;
  }
  X509_STORE_CTX_set0_trusted_stack(ctx,uVar4);
  uVar2 = 0;
LAB_00100375:
  X509_STORE_CTX_free(ctx);
  OPENSSL_sk_free(uVar4);
  X509_free(x509);
  return uVar2;
}



void test_self_signed_error(void)

{
  test_self_signed("nonexistent file name",1,0xffffffff);
  return;
}



void test_self_signed_bad(void)

{
  test_self_signed(bad_f,1,0);
  return;
}



void test_self_signed_good(void)

{
  test_self_signed(root_f,1,1);
  return;
}



void test_store_ctx(void)

{
  test_self_signed(bad_f,0,0);
  return;
}



bool test_req_distinguishing_id(void)

{
  int iVar1;
  BIO *bp;
  X509_REQ *a;
  ASN1_OCTET_STRING *str;
  ASN1_OCTET_STRING *b;
  bool bVar2;
  
  bp = BIO_new_file(req_f,"r");
  if (bp != (BIO *)0x0) {
    a = PEM_read_bio_X509_REQ(bp,(X509_REQ **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (a != (X509_REQ *)0x0) {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) {
        iVar1 = ASN1_OCTET_STRING_set(str,(uchar *)"this is an ID",0xd);
        if (iVar1 == 0) {
          bVar2 = false;
          ASN1_OCTET_STRING_free(str);
          goto LAB_00100585;
        }
        X509_REQ_set0_distinguishing_id(a,str);
        b = (ASN1_OCTET_STRING *)X509_REQ_get0_distinguishing_id(a);
        iVar1 = test_ptr("test/verify_extra_test.c",0xaa,&_LC19,b);
        if (iVar1 != 0) {
          iVar1 = ASN1_OCTET_STRING_cmp(str,b);
          iVar1 = test_int_eq("test/verify_extra_test.c",0xab,"ASN1_OCTET_STRING_cmp(v, v2)",&_LC20,
                              iVar1,0);
          bVar2 = iVar1 != 0;
          goto LAB_00100585;
        }
      }
      bVar2 = false;
      goto LAB_00100585;
    }
  }
  bVar2 = false;
  a = (X509_REQ *)0x0;
LAB_00100585:
  X509_REQ_free(a);
  BIO_free(bp);
  return bVar2;
}



bool test_distinguishing_id(void)

{
  int iVar1;
  X509 *a;
  ASN1_OCTET_STRING *str;
  ASN1_OCTET_STRING *b;
  bool bVar2;
  
  a = (X509 *)load_cert_pem(bad_f,0);
  if (a != (X509 *)0x0) {
    str = ASN1_OCTET_STRING_new();
    if (str != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = ASN1_OCTET_STRING_set(str,(uchar *)"this is an ID",0xd);
      if (iVar1 == 0) {
        ASN1_OCTET_STRING_free(str);
      }
      else {
        X509_set0_distinguishing_id(a,str);
        b = (ASN1_OCTET_STRING *)X509_get0_distinguishing_id(a);
        iVar1 = test_ptr("test/verify_extra_test.c",0x83,&_LC19,b);
        if (iVar1 != 0) {
          iVar1 = ASN1_OCTET_STRING_cmp(str,b);
          iVar1 = test_int_eq("test/verify_extra_test.c",0x84,"ASN1_OCTET_STRING_cmp(v, v2)",&_LC20,
                              iVar1,0);
          bVar2 = iVar1 != 0;
          goto LAB_0010067a;
        }
      }
    }
  }
  bVar2 = false;
LAB_0010067a:
  X509_free(a);
  return bVar2;
}



uint test_alt_chains_cert_forgery(void)

{
  int iVar1;
  uint uVar2;
  X509_STORE *v;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  stack_st_X509 *chain;
  X509 *x509;
  X509_STORE_CTX *ctx_00;
  
  v = X509_STORE_new();
  if (v != (X509_STORE *)0x0) {
    m = X509_LOOKUP_file();
    ctx = X509_STORE_add_lookup(v,m);
    if (ctx != (X509_LOOKUP *)0x0) {
      iVar1 = X509_LOOKUP_ctrl(ctx,1,roots_f,1,(char **)0x0);
      if (0 < iVar1) {
        chain = (stack_st_X509 *)load_certs_pem(untrusted_f);
        x509 = (X509 *)load_cert_pem(bad_f,0);
        if (x509 == (X509 *)0x0) {
          ctx_00 = (X509_STORE_CTX *)0x0;
          uVar2 = 0;
        }
        else {
          ctx_00 = X509_STORE_CTX_new();
          uVar2 = 0;
          if (ctx_00 != (X509_STORE_CTX *)0x0) {
            uVar2 = X509_STORE_CTX_init(ctx_00,v,x509,chain);
            if (uVar2 != 0) {
              iVar1 = X509_verify_cert(ctx_00);
              uVar2 = 0;
              if (iVar1 == 0) {
                iVar1 = X509_STORE_CTX_get_error(ctx_00);
                uVar2 = (uint)(iVar1 == 0x4f);
              }
            }
          }
        }
        goto LAB_001007ca;
      }
    }
  }
  ctx_00 = (X509_STORE_CTX *)0x0;
  chain = (stack_st_X509 *)0x0;
  x509 = (X509 *)0x0;
  uVar2 = 0;
LAB_001007ca:
  X509_STORE_CTX_free(ctx_00);
  X509_free(x509);
  OSSL_STACK_OF_X509_free(chain);
  X509_STORE_free(v);
  return uVar2;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



void cleanup_tests(void)

{
  CRYPTO_free(root_f);
  CRYPTO_free(roots_f);
  CRYPTO_free(untrusted_f);
  CRYPTO_free(bad_f);
  CRYPTO_free(req_f);
  CRYPTO_free(sroot_cert);
  CRYPTO_free(ca_cert);
  CRYPTO_free(ee_cert);
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/verify_extra_test.c",0x12a,"Error parsing test options\n");
  }
  else {
    certs_dir = test_get_argument(0);
    iVar1 = test_ptr("test/verify_extra_test.c",0x12e,"certs_dir = test_get_argument(0)",certs_dir);
    if (iVar1 != 0) {
      root_f = test_mk_file_path(certs_dir,"rootCA.pem");
      iVar1 = test_ptr("test/verify_extra_test.c",0x131,
                       "root_f = test_mk_file_path(certs_dir, \"rootCA.pem\")",root_f);
      if (iVar1 != 0) {
        roots_f = test_mk_file_path(certs_dir,"roots.pem");
        iVar1 = test_ptr("test/verify_extra_test.c",0x132,
                         "roots_f = test_mk_file_path(certs_dir, \"roots.pem\")",roots_f);
        if (iVar1 != 0) {
          untrusted_f = test_mk_file_path(certs_dir,"untrusted.pem");
          iVar1 = test_ptr("test/verify_extra_test.c",0x133,
                           "untrusted_f = test_mk_file_path(certs_dir, \"untrusted.pem\")",
                           untrusted_f);
          if (iVar1 != 0) {
            bad_f = test_mk_file_path(certs_dir,"bad.pem");
            iVar1 = test_ptr("test/verify_extra_test.c",0x134,
                             "bad_f = test_mk_file_path(certs_dir, \"bad.pem\")",bad_f);
            if (iVar1 != 0) {
              req_f = test_mk_file_path(certs_dir,"sm2-csr.pem");
              iVar1 = test_ptr("test/verify_extra_test.c",0x135,
                               "req_f = test_mk_file_path(certs_dir, \"sm2-csr.pem\")",req_f);
              if (iVar1 != 0) {
                sroot_cert = test_mk_file_path(certs_dir,"sroot-cert.pem");
                iVar1 = test_ptr("test/verify_extra_test.c",0x136,
                                 "sroot_cert = test_mk_file_path(certs_dir, \"sroot-cert.pem\")",
                                 sroot_cert);
                if (iVar1 != 0) {
                  ca_cert = test_mk_file_path(certs_dir,"ca-cert.pem");
                  iVar1 = test_ptr("test/verify_extra_test.c",0x137,
                                   "ca_cert = test_mk_file_path(certs_dir, \"ca-cert.pem\")",ca_cert
                                  );
                  if (iVar1 != 0) {
                    ee_cert = test_mk_file_path(certs_dir,"ee-cert.pem");
                    iVar1 = test_ptr("test/verify_extra_test.c",0x138,
                                     "ee_cert = test_mk_file_path(certs_dir, \"ee-cert.pem\")",
                                     ee_cert);
                    if (iVar1 != 0) {
                      add_test("test_alt_chains_cert_forgery",test_alt_chains_cert_forgery);
                      add_test("test_store_ctx",test_store_ctx);
                      add_test("test_distinguishing_id",test_distinguishing_id);
                      add_test("test_req_distinguishing_id",test_req_distinguishing_id);
                      add_test("test_self_signed_good",test_self_signed_good);
                      add_test("test_self_signed_bad",test_self_signed_bad);
                      add_test("test_self_signed_error",test_self_signed_error);
                      add_test("test_purpose_ssl_client",test_purpose_ssl_client);
                      add_test("test_purpose_ssl_server",test_purpose_ssl_server);
                      add_test("test_purpose_any",test_purpose_any);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      cleanup_tests();
    }
  }
  return 0;
}


