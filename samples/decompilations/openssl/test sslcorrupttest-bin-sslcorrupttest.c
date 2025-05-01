
undefined8 tls_corrupt_gets(void)

{
  return 0xffffffff;
}



undefined8 tls_corrupt_puts(void)

{
  return 0xffffffff;
}



int test_ssl_corrupt(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  BIO *pBVar10;
  ulong uVar11;
  BIO_METHOD *type;
  long lVar12;
  long in_FS_OFFSET;
  SSL_CTX *local_50;
  SSL_CTX *local_48;
  SSL *local_40;
  SSL *local_38;
  long local_30;
  
  lVar12 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (SSL_CTX *)0x0;
  local_48 = (SSL_CTX *)0x0;
  local_40 = (SSL *)0x0;
  local_38 = (SSL *)0x0;
  docorrupt = 0;
  test_info("test/sslcorrupttest.c",0xc3,"Starting #%d, %s",lVar12,
            *(undefined8 *)(cipher_list + lVar12 * 8));
  uVar1 = cert;
  uVar9 = privkey;
  uVar6 = TLS_client_method();
  uVar7 = TLS_server_method();
  create_ssl_ctx_pair(0,uVar7,uVar6,0x301,0,&local_50,&local_48,uVar1,uVar9);
  iVar2 = test_true("test/sslcorrupttest.c",0xc5,
                    "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                   );
  if (iVar2 == 0) goto LAB_00100104;
  lVar8 = SSL_CTX_ctrl(local_50,0x76,1,(void *)0x0);
  iVar2 = test_true("test/sslcorrupttest.c",0xcb,"SSL_CTX_set_dh_auto(sctx, 1)",lVar8 != 0);
  if (iVar2 == 0) {
LAB_00100166:
    iVar2 = 0;
  }
  else {
    iVar2 = SSL_CTX_set_cipher_list(local_48,*(char **)(cipher_list + lVar12 * 8));
    iVar2 = test_true("test/sslcorrupttest.c",0xcc,
                      "SSL_CTX_set_cipher_list(cctx, cipher_list[testidx])",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100166;
    iVar2 = SSL_CTX_set_ciphersuites(local_48,&_LC5);
    iVar2 = test_true("test/sslcorrupttest.c",0xcd,"SSL_CTX_set_ciphersuites(cctx, \"\")",iVar2 != 0
                     );
    if (iVar2 == 0) goto LAB_00100166;
    uVar9 = SSL_CTX_get_ciphers(local_48);
    iVar2 = test_ptr("test/sslcorrupttest.c",0xce,"ciphers = SSL_CTX_get_ciphers(cctx)",uVar9);
    if (iVar2 == 0) goto LAB_00100166;
    uVar3 = OPENSSL_sk_num(uVar9);
    iVar2 = test_int_eq("test/sslcorrupttest.c",0xcf,"sk_SSL_CIPHER_num(ciphers)",&_LC8,uVar3,1);
    if (iVar2 == 0) goto LAB_00100166;
    OPENSSL_sk_value(uVar9,0);
    iVar2 = test_ptr("test/sslcorrupttest.c",0xd0,"currcipher = sk_SSL_CIPHER_value(ciphers, 0)");
    if (iVar2 == 0) goto LAB_00100166;
    lVar12 = SSL_CTX_ctrl(local_48,0x7c,0x303,(void *)0x0);
    iVar2 = test_true("test/sslcorrupttest.c",0xd7,
                      "SSL_CTX_set_max_proto_version(cctx, TLS1_2_VERSION)",lVar12 != 0);
    type = method_tls_corrupt;
    if (iVar2 == 0) goto LAB_00100166;
    if ((((((method_tls_corrupt == (BIO_METHOD *)0x0) &&
           (method_tls_corrupt = (BIO_METHOD *)BIO_meth_new(0x280,"TLS corrupt filter"),
           method_tls_corrupt != (BIO_METHOD *)0x0)) &&
          (iVar2 = BIO_meth_set_write(method_tls_corrupt,tls_corrupt_write), iVar2 != 0)) &&
         ((iVar2 = BIO_meth_set_read(method_tls_corrupt,tls_corrupt_read), iVar2 != 0 &&
          (iVar2 = BIO_meth_set_puts(method_tls_corrupt,tls_corrupt_puts), iVar2 != 0)))) &&
        ((iVar2 = BIO_meth_set_gets(method_tls_corrupt,0x100000), iVar2 != 0 &&
         ((iVar2 = BIO_meth_set_ctrl(method_tls_corrupt,tls_corrupt_ctrl), iVar2 != 0 &&
          (iVar2 = BIO_meth_set_create(method_tls_corrupt,tls_corrupt_new), iVar2 != 0)))))) &&
       (iVar2 = BIO_meth_set_destroy(method_tls_corrupt,tls_corrupt_free), iVar2 != 0)) {
      type = method_tls_corrupt;
    }
    pBVar10 = BIO_new(type);
    iVar2 = test_ptr("test/sslcorrupttest.c",0xda,
                     "c_to_s_fbio = BIO_new(bio_f_tls_corrupt_filter())",pBVar10);
    if (iVar2 == 0) goto LAB_00100166;
    iVar2 = create_ssl_objects(local_50,local_48,&local_40,&local_38,0,pBVar10);
    iVar2 = test_true("test/sslcorrupttest.c",0xde,
                      "create_ssl_objects(sctx, cctx, &server, &client, NULL, c_to_s_fbio)",
                      iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100166;
    iVar2 = create_ssl_connection(local_40,local_38,0);
    iVar2 = test_true("test/sslcorrupttest.c",0xe2,
                      "create_ssl_connection(server, client, SSL_ERROR_NONE)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100166;
    docorrupt = 1;
    iVar2 = SSL_write(local_38,junk_0,16000);
    iVar2 = test_int_ge("test/sslcorrupttest.c",0xe7,"SSL_write(client, junk, sizeof(junk))",&_LC16,
                        iVar2,0);
    if (iVar2 == 0) goto LAB_00100166;
    iVar2 = SSL_read(local_40,junk_0,16000);
    iVar2 = test_int_lt("test/sslcorrupttest.c",0xea,"SSL_read(server, junk, sizeof(junk))",&_LC16,
                        iVar2,0);
    if (iVar2 == 0) goto LAB_00100166;
    do {
      uVar11 = ERR_get_error();
      uVar5 = (uint)uVar11;
      if (uVar5 == 0) {
        test_error("test/sslcorrupttest.c",0xf1,"Decryption failed or bad record MAC not seen");
        goto LAB_00100166;
      }
      uVar4 = uVar5 & 0x7fffffff;
      if (-1 < (int)uVar5) {
        uVar4 = uVar5 & 0x7fffff;
      }
    } while (uVar4 != 0x119);
    iVar2 = 1;
  }
  SSL_free(local_40);
  SSL_free(local_38);
  SSL_CTX_free(local_50);
  SSL_CTX_free(local_48);
LAB_00100104:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8 tls_corrupt_free(undefined8 param_1)

{
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 tls_corrupt_new(undefined8 param_1)

{
  BIO_set_init(param_1,1);
  return 1;
}



long tls_corrupt_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_next(param_1);
  if ((param_2 != 0xc) && (bp != (BIO *)0x0)) {
    lVar1 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar1;
  }
  return 0;
}



int tls_corrupt_write(BIO *param_1,void *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int flags;
  BIO *pBVar3;
  void *data;
  
  pBVar3 = BIO_next(param_1);
  if (docorrupt == 0) {
    iVar2 = BIO_write(pBVar3,param_2,param_3);
  }
  else {
    data = (void *)CRYPTO_memdup(param_2,(long)param_3,"test/sslcorrupttest.c",0x2c);
    iVar2 = test_ptr("test/sslcorrupttest.c",0x2c,"copy = OPENSSL_memdup(in, inl)",data);
    if (iVar2 == 0) {
      return 0;
    }
    pbVar1 = (byte *)((long)data + (long)param_3 + -1);
    *pbVar1 = *pbVar1 ^ 1;
    iVar2 = BIO_write(pBVar3,data,param_3);
    CRYPTO_free(data);
  }
  pBVar3 = BIO_next(param_1);
  flags = BIO_test_flags(pBVar3,0xf);
  BIO_clear_flags(param_1,0xf);
  BIO_set_flags(param_1,flags);
  return iVar2;
}



int tls_corrupt_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int flags;
  BIO *pBVar2;
  
  pBVar2 = BIO_next(param_1);
  iVar1 = BIO_read(pBVar2,param_2,param_3);
  pBVar2 = BIO_next(param_1);
  flags = BIO_test_flags(pBVar2,0xf);
  BIO_clear_flags(param_1,0xf);
  BIO_set_flags(param_1,flags);
  return iVar1;
}



undefined1 * test_get_options(void)

{
  return options_1;
}



undefined8 setup_tests(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  SSL *ssl;
  undefined8 uVar4;
  SSL_CIPHER *c;
  char *pcVar5;
  ulong uVar6;
  
  iVar2 = test_skip_common_options();
  if (iVar2 == 0) {
    test_error("test/sslcorrupttest.c",0x106,"Error parsing test options\n");
    return 0;
  }
  cert = test_get_argument(0);
  iVar2 = test_ptr("test/sslcorrupttest.c",0x10a,"cert = test_get_argument(0)",cert);
  if (iVar2 != 0) {
    privkey = test_get_argument(1);
    iVar2 = test_ptr("test/sslcorrupttest.c",0x10b,"privkey = test_get_argument(1)",privkey);
    if (iVar2 == 0) {
      return 0;
    }
    meth = (SSL_METHOD *)TLS_server_method();
    ctx = SSL_CTX_new(meth);
    iVar2 = test_ptr("test/sslcorrupttest.c",0x93,"ctx = SSL_CTX_new(TLS_server_method())",ctx);
    if (iVar2 == 0) {
      uVar4 = 0;
      ssl = (SSL *)0x0;
    }
    else {
      uVar4 = 0;
      ssl = SSL_new(ctx);
      iVar2 = test_ptr("test/sslcorrupttest.c",0x94,"ssl = SSL_new(ctx)",ssl);
      if (iVar2 != 0) {
        uVar4 = SSL_get1_supported_ciphers(ssl);
        iVar2 = test_ptr("test/sslcorrupttest.c",0x95,"sk_ciphers = SSL_get1_supported_ciphers(ssl)"
                         ,uVar4);
        if (iVar2 != 0) {
          iVar2 = OPENSSL_sk_num(uVar4);
          cipher_list = CRYPTO_malloc((int)((long)iVar2 << 3),"test/sslcorrupttest.c",0x9d);
          iVar2 = test_ptr("test/sslcorrupttest.c",0x9f,"cipher_list",cipher_list);
          if (iVar2 != 0) {
            uVar6 = 0;
            iVar2 = 0;
            while( true ) {
              iVar3 = OPENSSL_sk_num(uVar4);
              if (iVar3 <= iVar2) break;
              c = (SSL_CIPHER *)OPENSSL_sk_value(uVar4,iVar2);
              iVar3 = SSL_CIPHER_get_auth_nid(c);
              if (iVar3 == 0x416) {
                puVar1 = (undefined8 *)((long)cipher_list + uVar6 * 8);
                pcVar5 = SSL_CIPHER_get_name(c);
                *puVar1 = pcVar5;
                uVar6 = (ulong)((int)uVar6 + 1);
              }
              iVar2 = iVar2 + 1;
            }
            iVar2 = test_int_ne("test/sslcorrupttest.c",0xa8,&_LC28,&_LC16,uVar6 & 0xffffffff,0);
            if (iVar2 != 0) {
              OPENSSL_sk_free(uVar4);
              SSL_free(ssl);
              SSL_CTX_free(ctx);
              if ((int)uVar6 < 1) {
                return 1;
              }
              add_all_tests("test_ssl_corrupt",test_ssl_corrupt,uVar6 & 0xffffffff,1);
              return 1;
            }
          }
        }
      }
    }
    OPENSSL_sk_free(uVar4);
    SSL_free(ssl);
    SSL_CTX_free(ctx);
    return 1;
  }
  return 0;
}



void cleanup_tests(void)

{
  BIO_meth_free(method_tls_corrupt);
  CRYPTO_free(cipher_list);
  return;
}


