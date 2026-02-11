
time_t time(time_t *__timer)

{
  if (__timer != (time_t *)0x0) {
    *__timer = 0x58910178;
  }
  return 0x58910178;
}



undefined8 FuzzerInitialize(void)

{
  stack_st_SSL_COMP *psVar1;
  
  FuzzerSetRand();
  OPENSSL_init_crypto(0x102,0);
  OPENSSL_init_ssl(0x200000,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  SSL_get_ex_data_X509_STORE_CTX_idx();
  psVar1 = SSL_COMP_get_compression_methods();
  if (psVar1 != (stack_st_SSL_COMP *)0x0) {
    OPENSSL_sk_sort(psVar1);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FuzzerTestOneInput(void *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar4;
  RSA *key;
  EVP_PKEY *pEVar5;
  X509 *pXVar6;
  BIO_METHOD *pBVar7;
  BIO *pBVar8;
  EC_KEY *key_00;
  DSA *key_01;
  SSL *s;
  BIO *wbio;
  undefined8 uVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar10 = puVar2;
    *(undefined8 *)(puVar10 + -0x1000) = *(undefined8 *)(puVar10 + -0x1000);
    puVar2 = puVar10 + -0x1000;
  } while (puVar10 + -0x1000 != local_4030);
  *(undefined8 *)(puVar10 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
LAB_0010045a:
    if (*(long *)(puVar10 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar10 + -0x1030) = 0x1004ab;
      __stack_chk_fail();
    }
    return 0;
  }
  *(undefined8 *)(puVar10 + -0x1030) = 0x1000d3;
  meth = (SSL_METHOD *)TLS_method();
  *(undefined8 *)(puVar10 + -0x1030) = 0x1000db;
  ctx = SSL_CTX_new(meth);
  *(undefined8 *)(puVar10 + -0x1030) = 0x1000ef;
  lVar4 = SSL_CTX_ctrl(ctx,0x7b,0,(void *)0x0);
  if ((int)lVar4 == 1) {
    *(undefined8 *)(puVar10 + -0x1030) = 0x100107;
    iVar3 = SSL_CTX_set_cipher_list(ctx,"ALL:eNULL:@SECLEVEL=0");
    if (iVar3 == 1) {
      *(undefined1 **)(puVar10 + -0x1028) = kRSAPrivateKeyDER;
      *(undefined8 *)(puVar10 + -0x1030) = 0x10012d;
      key = d2i_RSAPrivateKey((RSA **)0x0,(uchar **)(puVar10 + -0x1028),0x4a9);
      if (key == (RSA *)0x0) {
LAB_001004f3:
        *(undefined8 *)(puVar10 + -0x1030) = 0x10050b;
        OPENSSL_die("assertion failed: privkey != NULL","fuzz/server.c",0x229);
LAB_0010050b:
        *(undefined8 *)(puVar10 + -0x1030) = 0x100523;
        OPENSSL_die("assertion failed: dsakey != NULL","fuzz/server.c",599);
LAB_00100523:
        *(undefined8 *)(puVar10 + -0x1030) = 0x10053b;
        OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, DSAPrivateKeyPEM, sizeof(DSAPrivateKeyPEM)) == sizeof(DSAPrivateKeyPEM)"
                    ,"fuzz/server.c",0x254);
LAB_0010053b:
        *(undefined8 *)(puVar10 + -0x1030) = 0x100553;
        OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x24d);
LAB_00100553:
        *(undefined8 *)(puVar10 + -0x1030) = 0x10056b;
        OPENSSL_die("assertion failed: cert != NULL","fuzz/server.c",0x24a);
LAB_0010056b:
        *(undefined8 *)(puVar10 + -0x1030) = 0x100583;
        OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x265);
LAB_00100583:
        *(undefined8 *)(puVar10 + -0x1030) = 0x10059b;
        OPENSSL_die("assertion failed: cert != NULL","fuzz/server.c",0x262);
LAB_0010059b:
        *(undefined8 *)(puVar10 + -0x1030) = 0x1005b3;
        OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, DSACertPEM, sizeof(DSACertPEM)) == sizeof(DSACertPEM)"
                    ,"fuzz/server.c",0x260);
LAB_001005b3:
        *(undefined8 *)(puVar10 + -0x1030) = 0x1005cb;
        OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x25c);
LAB_001005cb:
        *(undefined8 *)(puVar10 + -0x1030) = 0x1005e3;
        OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, ECDSACertPEM, sizeof(ECDSACertPEM)) == sizeof(ECDSACertPEM)"
                    ,"fuzz/server.c",0x248);
LAB_001005e3:
        *(undefined8 *)(puVar10 + -0x1030) = 0x1005fb;
        OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x244);
LAB_001005fb:
        *(undefined8 *)(puVar10 + -0x1030) = 0x100613;
        OPENSSL_die("assertion failed: ecdsakey != NULL","fuzz/server.c",0x23f);
      }
      else {
        *(undefined8 *)(puVar10 + -0x1030) = 0x10013e;
        pEVar5 = EVP_PKEY_new();
        *(undefined8 *)(puVar10 + -0x1030) = 0x100151;
        EVP_PKEY_assign(pEVar5,6,key);
        *(undefined8 *)(puVar10 + -0x1030) = 0x10015c;
        iVar3 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
        if (iVar3 != 1) {
LAB_001004db:
          *(undefined8 *)(puVar10 + -0x1030) = 0x1004f3;
          OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x22d);
          goto LAB_001004f3;
        }
        *(undefined8 *)(puVar10 + -0x1030) = 0x10016d;
        EVP_PKEY_free(pEVar5);
        *(undefined1 **)(puVar10 + -0x1028) = kCertificateDER;
        *(undefined8 *)(puVar10 + -0x1030) = 0x100187;
        pXVar6 = d2i_X509((X509 **)0x0,(uchar **)(puVar10 + -0x1028),0x303);
        if (pXVar6 == (X509 *)0x0) {
LAB_001004c3:
          *(undefined8 *)(puVar10 + -0x1030) = 0x1004db;
          OPENSSL_die("assertion failed: cert != NULL","fuzz/server.c",0x233);
          goto LAB_001004db;
        }
        *(undefined8 *)(puVar10 + -0x1030) = 0x10019e;
        iVar3 = SSL_CTX_use_certificate(ctx,pXVar6);
        if (iVar3 != 1) {
          *(undefined8 *)(puVar10 + -0x1030) = 0x1004c3;
          OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x235);
          goto LAB_001004c3;
        }
        *(undefined8 *)(puVar10 + -0x1030) = 0x1001af;
        X509_free(pXVar6);
        *(undefined8 *)(puVar10 + -0x1030) = 0x1001b4;
        pBVar7 = BIO_s_mem();
        *(undefined8 *)(puVar10 + -0x1030) = 0x1001bc;
        pBVar8 = BIO_new(pBVar7);
        *(undefined8 *)(puVar10 + -0x1030) = 0x1001d3;
        iVar3 = BIO_write(pBVar8,
                          "-----BEGIN EC PRIVATE KEY-----\nMHcCAQEEIJLyl7hJjpQL/RhP1x2zS79xdiPJQB683gWeqcqHPeZkoAoGCCqGSM49\nAwEHoUQDQgAEdsjygVYjjaKBF4CNECVllNf017p5/MxNSWDoTHy9I2GeDwEDDazI\nD/xy8JiYjtPKVE/Zqwbmivp2UwtH28a7NQ==\n-----END EC PRIVATE KEY-----\n"
                          ,0xe3);
        if (iVar3 == 0xe3) {
          *(undefined8 *)(puVar10 + -0x1030) = 0x1001ec;
          key_00 = PEM_read_bio_ECPrivateKey(pBVar8,(EC_KEY **)0x0,(undefined1 *)0x0,(void *)0x0);
          *(undefined8 *)(puVar10 + -0x1030) = 0x1001fb;
          ERR_print_errors_fp(_stderr);
          if (key_00 != (EC_KEY *)0x0) {
            *(undefined8 *)(puVar10 + -0x1030) = 0x10020c;
            BIO_free(pBVar8);
            *(undefined8 *)(puVar10 + -0x1030) = 0x100211;
            pEVar5 = EVP_PKEY_new();
            *(undefined8 *)(puVar10 + -0x1030) = 0x100224;
            EVP_PKEY_assign(pEVar5,0x198,key_00);
            *(undefined8 *)(puVar10 + -0x1030) = 0x10022f;
            iVar3 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
            if (iVar3 == 1) {
              *(undefined8 *)(puVar10 + -0x1030) = 0x100240;
              EVP_PKEY_free(pEVar5);
              *(undefined8 *)(puVar10 + -0x1030) = 0x100245;
              pBVar7 = BIO_s_mem();
              *(undefined8 *)(puVar10 + -0x1030) = 0x10024d;
              pBVar8 = BIO_new(pBVar7);
              *(undefined8 *)(puVar10 + -0x1030) = 0x100264;
              iVar3 = BIO_write(pBVar8,
                                "-----BEGIN CERTIFICATE-----\nMIIBXzCCAQagAwIBAgIJAK6/Yvf/ain6MAoGCCqGSM49BAMCMBIxEDAOBgNVBAoM\nB0FjbWUgQ28wHhcNMTYxMjI1MTEzOTI3WhcNMjYxMjI1MTEzOTI3WjASMRAwDgYD\nVQQKDAdBY21lIENvMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEdsjygVYjjaKB\nF4CNECVllNf017p5/MxNSWDoTHy9I2GeDwEDDazID/xy8JiYjtPKVE/Zqwbmivp2\nUwtH28a7NaNFMEMwCQYDVR0TBAIwADALBgNVHQ8EBAMCBaAwEwYDVR0lBAwwCgYI\nKwYBBQUHAwEwFAYDVR0RBA0wC4IJbG9jYWxob3N0MAoGCCqGSM49BAMCA0cAMEQC\nIEzr3t/jejVE9oSnBp8c3P2p+lDLVRrB8zxLyjZvirUXAiAyQPaE9MNcL8/nRpuu\n99I1enCSmWIAJ57IwuJ/n1d45Q==\n-----END CERTIFICATE-----\n"
                                ,0x21a);
              if (iVar3 == 0x21a) {
                *(undefined8 *)(puVar10 + -0x1030) = 0x10027d;
                pXVar6 = PEM_read_bio_X509(pBVar8,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
                if (pXVar6 == (X509 *)0x0) goto LAB_00100553;
                *(undefined8 *)(puVar10 + -0x1030) = 0x100291;
                BIO_free(pBVar8);
                *(undefined8 *)(puVar10 + -0x1030) = 0x10029c;
                iVar3 = SSL_CTX_use_certificate(ctx,pXVar6);
                if (iVar3 != 1) goto LAB_0010053b;
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002ad;
                X509_free(pXVar6);
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002b2;
                pBVar7 = BIO_s_mem();
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002ba;
                pBVar8 = BIO_new(pBVar7);
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002d1;
                iVar3 = BIO_write(pBVar8,
                                  "-----BEGIN DSA PRIVATE KEY-----\nMIIBuwIBAAKBgQDdkFKzNABLOha7Eqj7004+p5fhtR6bxpujToMmSZTYi8igVVXP\nWzf03ULKS5UKjA6WpR6EiZAhm+PdxusZ5xfAuRZLdKy0bgxn1f348Rwh+EQNaEM8\n0TGcnw5ijwKmSw5yyHPDWdiHzoqEBlhAf8Nl22YTXax/clsc/pu/RRLAdwIVAIEg\nQqWRf/1EIZZcgM65Qpd65YuxAoGBAKBauV/RuloFHoSy5iWXESDywiS380tN5974\nGukGwoYdZo5uSIH6ahpeNSef0MbHGAzr7ZVEnhCQfRAwH1gRvSHoq/Rbmcvtd3r+\nQtQHOwvQHgLAynhI4i73c794czHaR+439bmcaSwDnQduRM85Mho/jiiZzAVPxBmG\nPOIMWNXXAoGAI6Ep5IE7yn3JzkXO9B6tC3bbDM+ZzuuInwZLbtZ8lim7Dsqabg4k\n2YbE4R95Bnfwnjsyl80mq/DbQN5lAHBvjDrkC6ItojBGKI3+iIrqGUEJdxvl4ulj\nF0PmSD7zvIG8BfocKOel+EHH0YryExiW6krV1KW2ZRmJrqSFw6KCjV0CFFQFbPfU\nxy5PmKytJmXR8BmppkIO\n-----END DSA PRIVATE KEY-----\n"
                                  ,0x29c);
                if (iVar3 != 0x29c) goto LAB_00100523;
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002ea;
                key_01 = PEM_read_bio_DSAPrivateKey
                                   (pBVar8,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
                *(undefined8 *)(puVar10 + -0x1030) = 0x1002f9;
                ERR_print_errors_fp(_stderr);
                if (key_01 == (DSA *)0x0) goto LAB_0010050b;
                *(undefined8 *)(puVar10 + -0x1030) = 0x10030a;
                BIO_free(pBVar8);
                *(undefined8 *)(puVar10 + -0x1030) = 0x10030f;
                pEVar5 = EVP_PKEY_new();
                *(undefined8 *)(puVar10 + -0x1030) = 0x100322;
                EVP_PKEY_assign(pEVar5,0x74,key_01);
                *(undefined8 *)(puVar10 + -0x1030) = 0x10032d;
                iVar3 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
                if (iVar3 == 1) {
                  *(undefined8 *)(puVar10 + -0x1030) = 0x10033e;
                  EVP_PKEY_free(pEVar5);
                  *(undefined8 *)(puVar10 + -0x1030) = 0x100343;
                  pBVar7 = BIO_s_mem();
                  *(undefined8 *)(puVar10 + -0x1030) = 0x10034b;
                  pBVar8 = BIO_new(pBVar7);
                  *(undefined8 *)(puVar10 + -0x1030) = 0x100362;
                  iVar3 = BIO_write(pBVar8,
                                    "-----BEGIN CERTIFICATE-----\nMIICqTCCAmegAwIBAgIJAILDGUk37fWGMAsGCWCGSAFlAwQDAjASMRAwDgYDVQQK\nDAdBY21lIENvMB4XDTE2MTIyNTEzMjUzNloXDTI2MTIyNTEzMjUzNlowEjEQMA4G\nA1UECgwHQWNtZSBDbzCCAbcwggEsBgcqhkjOOAQBMIIBHwKBgQDdkFKzNABLOha7\nEqj7004+p5fhtR6bxpujToMmSZTYi8igVVXPWzf03ULKS5UKjA6WpR6EiZAhm+Pd\nxusZ5xfAuRZLdKy0bgxn1f348Rwh+EQNaEM80TGcnw5ijwKmSw5yyHPDWdiHzoqE\nBlhAf8Nl22YTXax/clsc/pu/RRLAdwIVAIEgQqWRf/1EIZZcgM65Qpd65YuxAoGB\nAKBauV/RuloFHoSy5iWXESDywiS380tN5974GukGwoYdZo5uSIH6ahpeNSef0MbH\nGAzr7ZVEnhCQfRAwH1gRvSHoq/Rbmcvtd3r+QtQHOwvQHgLAynhI4i73c794czHa\nR+439bmcaSwDnQduRM85Mho/jiiZzAVPxBmGPOIMWNXXA4GEAAKBgCOhKeSBO8p9\nyc5FzvQerQt22wzPmc7riJ8GS27WfJYpuw7Kmm4OJNmGxOEfeQZ38J47MpfNJqvw\n20DeZQBwb4w65AuiLaIwRiiN/oiK6hlBCXcb5eLpYxdD5kg+87yBvAX6HCjnpfhB\nx9GK8hMYlupK1dSltmUZia6khcOigo1do0UwQzAJBgNVHRMEAjAAMAsGA1UdDwQE\nAwIFoDATBgNVHSUEDDAKBggrBgEFBQcDATAUBgNVHREEDTALgglsb2NhbGhvc3Qw\nCwYJYIZIAWUDBAMCAy8AMCwCFClxInXTRWNJEWdi5ilNr/fbM1bKAhQy4B7wtmfd\nI+zV6g3w9qBkNqStpA==\n-----END CERTIFICATE-----\n"
                                    ,0x3d9);
                  if (iVar3 == 0x3d9) {
                    *(undefined8 *)(puVar10 + -0x1030) = 0x10037b;
                    pXVar6 = PEM_read_bio_X509(pBVar8,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
                    if (pXVar6 != (X509 *)0x0) {
                      *(undefined8 *)(puVar10 + -0x1030) = 0x10038f;
                      BIO_free(pBVar8);
                      *(undefined8 *)(puVar10 + -0x1030) = 0x10039a;
                      iVar3 = SSL_CTX_use_certificate(ctx,pXVar6);
                      if (iVar3 == 1) {
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003b0;
                        X509_free(pXVar6);
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003b8;
                        s = SSL_new(ctx);
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003c0;
                        pBVar7 = BIO_s_mem();
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003c8;
                        pBVar8 = BIO_new(pBVar7);
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003d0;
                        pBVar7 = BIO_s_mem();
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003d8;
                        wbio = BIO_new(pBVar7);
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003e6;
                        SSL_set_bio(s,pBVar8,wbio);
                        *(undefined8 *)(puVar10 + -0x1030) = 0x1003ee;
                        SSL_set_accept_state(s);
                        bVar1 = *(byte *)((long)param_1 + (param_2 - 1));
                        *(undefined8 *)(puVar10 + -0x1030) = 0x100402;
                        iVar3 = BIO_write(pBVar8,param_1,(int)(param_2 - 1));
                        if (param_2 - 1 == (long)iVar3) {
                          if ((bVar1 & 1) != 0) {
                            do {
                              *(undefined8 *)(puVar10 + -0x1030) = 0x100433;
                              iVar3 = SSL_read_early_data(s,puVar10 + -0x1018,0x4000,
                                                          puVar10 + -0x1020);
                            } while (iVar3 == 1);
                          }
                          *(undefined8 *)(puVar10 + -0x1030) = 0x100440;
                          iVar3 = SSL_do_handshake(s);
                          if (iVar3 == 1) {
                            do {
                              *(undefined8 *)(puVar10 + -0x1030) = 0x1004a0;
                              iVar3 = SSL_read(s,puVar10 + -0x1018,0x400);
                            } while (0 < iVar3);
                          }
                          *(undefined8 *)(puVar10 + -0x1030) = 0x10044d;
                          SSL_free(s);
                          *(undefined8 *)(puVar10 + -0x1030) = 0x100452;
                          ERR_clear_error();
                          *(undefined8 *)(puVar10 + -0x1030) = 0x10045a;
                          SSL_CTX_free(ctx);
                          goto LAB_0010045a;
                        }
                        goto LAB_0010065b;
                      }
                      goto LAB_0010056b;
                    }
                    goto LAB_00100583;
                  }
                  goto LAB_0010059b;
                }
                goto LAB_001005b3;
              }
              goto LAB_001005cb;
            }
            goto LAB_001005e3;
          }
          goto LAB_001005fb;
        }
      }
      *(undefined8 *)(puVar10 + -0x1030) = 0x10062b;
      OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, ECDSAPrivateKeyPEM, sizeof(ECDSAPrivateKeyPEM)) == sizeof(ECDSAPrivateKeyPEM)"
                  ,"fuzz/server.c",0x23c);
    }
    *(undefined8 *)(puVar10 + -0x1030) = 0x100643;
    OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x223);
  }
  *(undefined8 *)(puVar10 + -0x1030) = 0x10065b;
  OPENSSL_die("assertion failed: ret == 1","fuzz/server.c",0x221);
LAB_0010065b:
  *(undefined8 *)(puVar10 + -0x1030) = 0x100673;
  OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/server.c",0x272);
  uVar9 = FuzzerClearRand();
  return uVar9;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


