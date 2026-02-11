
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
  int iVar1;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  long lVar2;
  BIO_METHOD *pBVar3;
  BIO *pBVar4;
  RSA *key;
  EVP_PKEY *pEVar5;
  X509 *pXVar6;
  EC_KEY *key_00;
  DSA *key_01;
  SSL *s;
  BIO *wbio;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
LAB_0010046b:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  meth = (SSL_METHOD *)DTLS_server_method();
  ctx = SSL_CTX_new(meth);
  lVar2 = SSL_CTX_ctrl(ctx,0x7b,0,(void *)0x0);
  if ((int)lVar2 != 1) goto LAB_00100693;
  iVar1 = SSL_CTX_set_cipher_list(ctx,"ALL:eNULL:@SECLEVEL=0");
  if (iVar1 == 1) {
    pBVar3 = BIO_s_mem();
    pBVar4 = BIO_new(pBVar3);
    iVar1 = BIO_write(pBVar4,RSAPrivateKeyPEM,0x6a8);
    if (iVar1 != 0x6a8) {
      OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, RSAPrivateKeyPEM, sizeof(RSAPrivateKeyPEM)) == sizeof(RSAPrivateKeyPEM)"
                  ,"fuzz/dtlsserver.c",0x275);
      goto LAB_001004cb;
    }
    key = PEM_read_bio_RSAPrivateKey(pBVar4,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
    ERR_print_errors_fp(_stderr);
    if (key == (RSA *)0x0) goto LAB_0010052b;
    BIO_free(pBVar4);
    pEVar5 = EVP_PKEY_new();
    EVP_PKEY_assign(pEVar5,6,key);
    iVar1 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
    if (iVar1 != 1) goto LAB_00100513;
    EVP_PKEY_free(pEVar5);
    pBVar3 = BIO_s_mem();
    pBVar4 = BIO_new(pBVar3);
    iVar1 = BIO_write(pBVar4,RSACertificatePEM,0x52a);
    if (iVar1 != 0x52a) goto LAB_001004fb;
    pXVar6 = PEM_read_bio_X509(pBVar4,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(pBVar4);
    if (pXVar6 == (X509 *)0x0) goto LAB_001004e3;
    iVar1 = SSL_CTX_use_certificate(ctx,pXVar6);
    if (iVar1 != 1) goto LAB_0010061b;
    X509_free(pXVar6);
    pBVar3 = BIO_s_mem();
    pBVar4 = BIO_new(pBVar3);
    iVar1 = BIO_write(pBVar4,
                      "-----BEGIN EC PRIVATE KEY-----\nMHcCAQEEIJLyl7hJjpQL/RhP1x2zS79xdiPJQB683gWeqcqHPeZkoAoGCCqGSM49\nAwEHoUQDQgAEdsjygVYjjaKBF4CNECVllNf017p5/MxNSWDoTHy9I2GeDwEDDazI\nD/xy8JiYjtPKVE/Zqwbmivp2UwtH28a7NQ==\n-----END EC PRIVATE KEY-----\n"
                      ,0xe3);
    if (iVar1 != 0xe3) goto LAB_00100603;
    key_00 = PEM_read_bio_ECPrivateKey(pBVar4,(EC_KEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    ERR_print_errors_fp(_stderr);
    if (key_00 != (EC_KEY *)0x0) {
      BIO_free(pBVar4);
      pEVar5 = EVP_PKEY_new();
      EVP_PKEY_assign(pEVar5,0x198,key_00);
      iVar1 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
      if (iVar1 == 1) {
        EVP_PKEY_free(pEVar5);
        pBVar3 = BIO_s_mem();
        pBVar4 = BIO_new(pBVar3);
        iVar1 = BIO_write(pBVar4,
                          "-----BEGIN CERTIFICATE-----\nMIIBXzCCAQagAwIBAgIJAK6/Yvf/ain6MAoGCCqGSM49BAMCMBIxEDAOBgNVBAoM\nB0FjbWUgQ28wHhcNMTYxMjI1MTEzOTI3WhcNMjYxMjI1MTEzOTI3WjASMRAwDgYD\nVQQKDAdBY21lIENvMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEdsjygVYjjaKB\nF4CNECVllNf017p5/MxNSWDoTHy9I2GeDwEDDazID/xy8JiYjtPKVE/Zqwbmivp2\nUwtH28a7NaNFMEMwCQYDVR0TBAIwADALBgNVHQ8EBAMCBaAwEwYDVR0lBAwwCgYI\nKwYBBQUHAwEwFAYDVR0RBA0wC4IJbG9jYWxob3N0MAoGCCqGSM49BAMCA0cAMEQC\nIEzr3t/jejVE9oSnBp8c3P2p+lDLVRrB8zxLyjZvirUXAiAyQPaE9MNcL8/nRpuu\n99I1enCSmWIAJ57IwuJ/n1d45Q==\n-----END CERTIFICATE-----\n"
                          ,0x21a);
        if (iVar1 == 0x21a) {
          pXVar6 = PEM_read_bio_X509(pBVar4,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
          if (pXVar6 != (X509 *)0x0) {
            BIO_free(pBVar4);
            iVar1 = SSL_CTX_use_certificate(ctx,pXVar6);
            if (iVar1 != 1) goto LAB_0010055b;
            X509_free(pXVar6);
            pBVar3 = BIO_s_mem();
            pBVar4 = BIO_new(pBVar3);
            iVar1 = BIO_write(pBVar4,
                              "-----BEGIN DSA PRIVATE KEY-----\nMIIBuwIBAAKBgQDdkFKzNABLOha7Eqj7004+p5fhtR6bxpujToMmSZTYi8igVVXP\nWzf03ULKS5UKjA6WpR6EiZAhm+PdxusZ5xfAuRZLdKy0bgxn1f348Rwh+EQNaEM8\n0TGcnw5ijwKmSw5yyHPDWdiHzoqEBlhAf8Nl22YTXax/clsc/pu/RRLAdwIVAIEg\nQqWRf/1EIZZcgM65Qpd65YuxAoGBAKBauV/RuloFHoSy5iWXESDywiS380tN5974\nGukGwoYdZo5uSIH6ahpeNSef0MbHGAzr7ZVEnhCQfRAwH1gRvSHoq/Rbmcvtd3r+\nQtQHOwvQHgLAynhI4i73c794czHaR+439bmcaSwDnQduRM85Mho/jiiZzAVPxBmG\nPOIMWNXXAoGAI6Ep5IE7yn3JzkXO9B6tC3bbDM+ZzuuInwZLbtZ8lim7Dsqabg4k\n2YbE4R95Bnfwnjsyl80mq/DbQN5lAHBvjDrkC6ItojBGKI3+iIrqGUEJdxvl4ulj\nF0PmSD7zvIG8BfocKOel+EHH0YryExiW6krV1KW2ZRmJrqSFw6KCjV0CFFQFbPfU\nxy5PmKytJmXR8BmppkIO\n-----END DSA PRIVATE KEY-----\n"
                              ,0x29c);
            if (iVar1 != 0x29c) goto LAB_00100543;
            key_01 = PEM_read_bio_DSAPrivateKey(pBVar4,(DSA **)0x0,(undefined1 *)0x0,(void *)0x0);
            ERR_print_errors_fp(_stderr);
            if (key_01 == (DSA *)0x0) goto LAB_0010058b;
            BIO_free(pBVar4);
            pEVar5 = EVP_PKEY_new();
            EVP_PKEY_assign(pEVar5,0x74,key_01);
            iVar1 = SSL_CTX_use_PrivateKey(ctx,pEVar5);
            if (iVar1 != 1) goto LAB_00100573;
            EVP_PKEY_free(pEVar5);
            pBVar3 = BIO_s_mem();
            pBVar4 = BIO_new(pBVar3);
            iVar1 = BIO_write(pBVar4,
                              "-----BEGIN CERTIFICATE-----\nMIICqTCCAmegAwIBAgIJAILDGUk37fWGMAsGCWCGSAFlAwQDAjASMRAwDgYDVQQK\nDAdBY21lIENvMB4XDTE2MTIyNTEzMjUzNloXDTI2MTIyNTEzMjUzNlowEjEQMA4G\nA1UECgwHQWNtZSBDbzCCAbcwggEsBgcqhkjOOAQBMIIBHwKBgQDdkFKzNABLOha7\nEqj7004+p5fhtR6bxpujToMmSZTYi8igVVXPWzf03ULKS5UKjA6WpR6EiZAhm+Pd\nxusZ5xfAuRZLdKy0bgxn1f348Rwh+EQNaEM80TGcnw5ijwKmSw5yyHPDWdiHzoqE\nBlhAf8Nl22YTXax/clsc/pu/RRLAdwIVAIEgQqWRf/1EIZZcgM65Qpd65YuxAoGB\nAKBauV/RuloFHoSy5iWXESDywiS380tN5974GukGwoYdZo5uSIH6ahpeNSef0MbH\nGAzr7ZVEnhCQfRAwH1gRvSHoq/Rbmcvtd3r+QtQHOwvQHgLAynhI4i73c794czHa\nR+439bmcaSwDnQduRM85Mho/jiiZzAVPxBmGPOIMWNXXA4GEAAKBgCOhKeSBO8p9\nyc5FzvQerQt22wzPmc7riJ8GS27WfJYpuw7Kmm4OJNmGxOEfeQZ38J47MpfNJqvw\n20DeZQBwb4w65AuiLaIwRiiN/oiK6hlBCXcb5eLpYxdD5kg+87yBvAX6HCjnpfhB\nx9GK8hMYlupK1dSltmUZia6khcOigo1do0UwQzAJBgNVHRMEAjAAMAsGA1UdDwQE\nAwIFoDATBgNVHSUEDDAKBggrBgEFBQcDATAUBgNVHREEDTALgglsb2NhbGhvc3Qw\nCwYJYIZIAWUDBAMCAy8AMCwCFClxInXTRWNJEWdi5ilNr/fbM1bKAhQy4B7wtmfd\nI+zV6g3w9qBkNqStpA==\n-----END CERTIFICATE-----\n"
                              ,0x3d9);
            if (iVar1 == 0x3d9) {
              pXVar6 = PEM_read_bio_X509(pBVar4,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
              if (pXVar6 != (X509 *)0x0) {
                BIO_free(pBVar4);
                iVar1 = SSL_CTX_use_certificate(ctx,pXVar6);
                if (iVar1 == 1) {
                  X509_free(pXVar6);
                  s = SSL_new(ctx);
                  pBVar3 = BIO_s_mem();
                  pBVar4 = BIO_new(pBVar3);
                  pBVar3 = BIO_s_mem();
                  wbio = BIO_new(pBVar3);
                  SSL_set_bio(s,pBVar4,wbio);
                  SSL_set_accept_state(s);
                  iVar1 = BIO_write(pBVar4,param_1,(int)param_2);
                  if ((long)iVar1 == param_2) {
                    iVar1 = SSL_do_handshake(s);
                    if (iVar1 == 1) {
                      do {
                        iVar1 = SSL_read(s,auStack_438,0x400);
                      } while (0 < iVar1);
                    }
                    SSL_free(s);
                    ERR_clear_error();
                    SSL_CTX_free(ctx);
                    goto LAB_0010046b;
                  }
                  goto LAB_001005a3;
                }
                goto LAB_001005bb;
              }
              goto LAB_001005d3;
            }
            goto LAB_001005eb;
          }
          goto LAB_00100633;
        }
        goto LAB_0010064b;
      }
      goto LAB_00100663;
    }
  }
  else {
LAB_001004cb:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x270);
LAB_001004e3:
    OPENSSL_die("assertion failed: cert != NULL","fuzz/dtlsserver.c",0x285);
LAB_001004fb:
    OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, RSACertificatePEM, sizeof(RSACertificatePEM)) == sizeof(RSACertificatePEM)"
                ,"fuzz/dtlsserver.c",0x282);
LAB_00100513:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x27d);
LAB_0010052b:
    OPENSSL_die("assertion failed: privkey != NULL","fuzz/dtlsserver.c",0x278);
LAB_00100543:
    OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, DSAPrivateKeyPEM, sizeof(DSAPrivateKeyPEM)) == sizeof(DSAPrivateKeyPEM)"
                ,"fuzz/dtlsserver.c",0x2a6);
LAB_0010055b:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x29f);
LAB_00100573:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x2ae);
LAB_0010058b:
    OPENSSL_die("assertion failed: dsakey != NULL","fuzz/dtlsserver.c",0x2a9);
LAB_001005a3:
    OPENSSL_die("assertion failed: (size_t)BIO_write(in, buf, len) == len","fuzz/dtlsserver.c",0x2c1
               );
LAB_001005bb:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x2b7);
LAB_001005d3:
    OPENSSL_die("assertion failed: cert != NULL","fuzz/dtlsserver.c",0x2b4);
LAB_001005eb:
    OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, DSACertPEM, sizeof(DSACertPEM)) == sizeof(DSACertPEM)"
                ,"fuzz/dtlsserver.c",0x2b2);
LAB_00100603:
    OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, ECDSAPrivateKeyPEM, sizeof(ECDSAPrivateKeyPEM)) == sizeof(ECDSAPrivateKeyPEM)"
                ,"fuzz/dtlsserver.c",0x28e);
LAB_0010061b:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x287);
LAB_00100633:
    OPENSSL_die("assertion failed: cert != NULL","fuzz/dtlsserver.c",0x29c);
LAB_0010064b:
    OPENSSL_die("assertion failed: (size_t)BIO_write(bio_buf, ECDSACertPEM, sizeof(ECDSACertPEM)) == sizeof(ECDSACertPEM)"
                ,"fuzz/dtlsserver.c",0x29a);
LAB_00100663:
    OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x296);
  }
  OPENSSL_die("assertion failed: ecdsakey != NULL","fuzz/dtlsserver.c",0x291);
LAB_00100693:
  OPENSSL_die("assertion failed: ret == 1","fuzz/dtlsserver.c",0x26e);
  uVar7 = FuzzerClearRand();
  return uVar7;
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


