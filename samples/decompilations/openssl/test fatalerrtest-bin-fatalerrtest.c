
bool test_fatalerr(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  BIO *b;
  long in_FS_OFFSET;
  bool bVar7;
  SSL_CTX *local_b8;
  SSL_CTX *local_b0;
  SSL *local_a8;
  SSL *local_a0;
  undefined8 local_92;
  undefined2 local_8a;
  undefined1 local_88 [88];
  long local_30;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (SSL_CTX *)0x0;
  local_92 = 0x6d75440500030317;
  local_b0 = (SSL_CTX *)0x0;
  local_a8 = (SSL *)0x0;
  local_a0 = (SSL *)0x0;
  local_8a = 0x796d;
  uVar5 = TLS_method();
  uVar6 = TLS_method();
  iVar3 = create_ssl_ctx_pair(0,uVar6,uVar5,0x301,0,&local_b8,&local_b0,uVar2,uVar1);
  iVar3 = test_true("test/fatalerrtest.c",0x1f,
                    "create_ssl_ctx_pair(NULL, TLS_method(), TLS_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar3 != 0);
  if (iVar3 != 0) {
    iVar3 = SSL_CTX_set_cipher_list(local_b8,"AES128-SHA");
    iVar3 = test_true("test/fatalerrtest.c",0x28,"SSL_CTX_set_cipher_list(sctx, \"AES128-SHA\")",
                      iVar3 != 0);
    if (iVar3 != 0) {
      iVar3 = SSL_CTX_set_cipher_list(local_b0,"AES256-SHA");
      iVar3 = test_true("test/fatalerrtest.c",0x29,"SSL_CTX_set_cipher_list(cctx, \"AES256-SHA\")",
                        iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = SSL_CTX_set_ciphersuites(local_b8,"TLS_AES_128_GCM_SHA256");
        iVar3 = test_true("test/fatalerrtest.c",0x2a,
                          "SSL_CTX_set_ciphersuites(sctx, \"TLS_AES_128_GCM_SHA256\")",iVar3 != 0);
        if (iVar3 != 0) {
          iVar3 = SSL_CTX_set_ciphersuites(local_b0,"TLS_AES_256_GCM_SHA384");
          iVar3 = test_true("test/fatalerrtest.c",0x2c,
                            "SSL_CTX_set_ciphersuites(cctx, \"TLS_AES_256_GCM_SHA384\")",iVar3 != 0)
          ;
          if (iVar3 != 0) {
            iVar3 = create_ssl_objects(local_b8,local_b0,&local_a8,&local_a0,0,0);
            iVar3 = test_true("test/fatalerrtest.c",0x2e,
                              "create_ssl_objects(sctx, cctx, &sssl, &cssl, NULL, NULL)",iVar3 != 0)
            ;
            if (iVar3 != 0) {
              b = SSL_get_wbio(local_a0);
              iVar3 = test_ptr("test/fatalerrtest.c",0x33,&_LC11,b);
              if (iVar3 == 0) {
                puts("Unexpected NULL bio received");
              }
              else {
                iVar3 = create_ssl_connection(local_a8,local_a0,0);
                iVar3 = test_false("test/fatalerrtest.c",0x39,
                                   "create_ssl_connection(sssl, cssl, SSL_ERROR_NONE)",iVar3 != 0);
                if (iVar3 != 0) {
                  ERR_clear_error();
                  iVar3 = BIO_write(b,&local_92,10);
                  iVar3 = test_int_gt("test/fatalerrtest.c",0x3f,
                                      "BIO_write(wbio, dummyrec, sizeof(dummyrec))",&_LC14,iVar3,0);
                  if (iVar3 != 0) {
                    iVar3 = SSL_read(local_a8,local_88,0x4f);
                    iVar4 = test_int_le("test/fatalerrtest.c",0x43,
                                        "len = SSL_read(sssl, buf, sizeof(buf) - 1)",&_LC14,iVar3,0)
                    ;
                    if (iVar4 != 0) {
                      iVar3 = SSL_write(local_a8,"Dummy",5);
                      iVar3 = test_int_le("test/fatalerrtest.c",0x48,
                                          "SSL_write(sssl, msg, strlen(msg))",&_LC14,iVar3,0);
                      bVar7 = iVar3 != 0;
                      goto LAB_001000ce;
                    }
                    local_88[iVar3] = 0;
                    test_error("test/fatalerrtest.c",0x45,"Unexpected success reading data: %s\n",
                               local_88);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_001000ce:
  SSL_free(local_a8);
  SSL_free(local_a0);
  SSL_CTX_free(local_b8);
  SSL_CTX_free(local_b0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    test_error("test/fatalerrtest.c",0x5a,"Error parsing test options\n");
  }
  else {
    cert = test_get_argument(0);
    iVar1 = test_ptr("test/fatalerrtest.c",0x5e,"cert = test_get_argument(0)",cert);
    if (iVar1 != 0) {
      privkey = test_get_argument(1);
      iVar1 = test_ptr("test/fatalerrtest.c",0x5f,"privkey = test_get_argument(1)",privkey);
      if (iVar1 != 0) {
        add_test("test_fatalerr",0x100000);
        return 1;
      }
    }
  }
  return 0;
}


