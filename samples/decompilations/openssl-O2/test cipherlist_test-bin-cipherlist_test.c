
int test_default_cipherlist_part_0(SSL_CTX *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  SSL *ssl;
  undefined8 uVar4;
  SSL_CIPHER *c;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = 0;
  ssl = SSL_new(param_1);
  iVar2 = test_ptr("test/cipherlist_test.c",0x9e,"ssl = SSL_new(ctx)",ssl);
  if (iVar2 != 0) {
    uVar4 = SSL_get1_supported_ciphers(ssl);
    iVar2 = test_ptr("test/cipherlist_test.c",0x9f,"ciphers = SSL_get1_supported_ciphers(ssl)",uVar4
                    );
    if (iVar2 == 0) {
LAB_00100086:
      iVar2 = 0;
    }
    else {
      iVar3 = OPENSSL_sk_num(uVar4);
      iVar2 = test_int_eq("test/cipherlist_test.c",0xa4,"num_ciphers","num_expected_ciphers",iVar3,
                          0x1e);
      if (iVar2 != 0) {
        if (0 < iVar3) {
          uVar6 = 0;
          do {
            uVar1 = (&default_ciphers_in_order)[uVar6];
            c = (SSL_CIPHER *)OPENSSL_sk_value(uVar4,uVar6 & 0xffffffff);
            uVar5 = SSL_CIPHER_get_id(c);
            iVar2 = test_int_eq("test/cipherlist_test.c",0xaa,"cipher_id","expected_cipher_id",
                                uVar5 & 0xffffffff,uVar1);
            if (iVar2 == 0) {
              test_info("test/cipherlist_test.c",0xab,"Wrong cipher at position %d",
                        uVar6 & 0xffffffff);
              goto LAB_00100086;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != (long)iVar3);
        }
        iVar2 = 1;
      }
    }
  }
  OPENSSL_sk_free(uVar4);
  SSL_free(ssl);
  return iVar2;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  SSL_METHOD *pSVar2;
  SSL_CTX *pSVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x18,"test/cipherlist_test.c",0x2d);
  iVar1 = test_ptr("test/cipherlist_test.c",0x2d,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *ptr = param_1;
    pSVar2 = (SSL_METHOD *)TLS_server_method();
    pSVar3 = SSL_CTX_new(pSVar2);
    ptr[1] = pSVar3;
    iVar1 = test_ptr("test/cipherlist_test.c",0x30,
                     "fixture->server = SSL_CTX_new(TLS_server_method())",pSVar3);
    if (iVar1 != 0) {
      pSVar2 = (SSL_METHOD *)TLS_client_method();
      pSVar3 = SSL_CTX_new(pSVar2);
      ptr[2] = pSVar3;
      iVar1 = test_ptr("test/cipherlist_test.c",0x31,
                       "fixture->client = SSL_CTX_new(TLS_client_method())",pSVar3);
      if (iVar1 != 0) {
        return ptr;
      }
    }
    SSL_CTX_free((SSL_CTX *)ptr[1]);
    SSL_CTX_free((SSL_CTX *)ptr[2]);
    *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



uint test_stdname_cipherlist(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  
  uVar2 = 0;
  ptr = (void *)set_up("test_stdname_cipherlist");
  if (ptr != (void *)0x0) {
    iVar1 = SSL_CTX_set_cipher_list(*(SSL_CTX **)((long)ptr + 8),"TLS_RSA_WITH_AES_128_CBC_SHA");
    uVar2 = test_true("test/cipherlist_test.c",0xfb,
                      "SSL_CTX_set_cipher_list(fixture->server, TLS1_RFC_RSA_WITH_AES_128_SHA)",
                      iVar1 != 0);
    if (uVar2 != 0) {
      iVar1 = SSL_CTX_set_cipher_list
                        (*(SSL_CTX **)((long)ptr + 0x10),"TLS_RSA_WITH_AES_128_CBC_SHA");
      iVar1 = test_true("test/cipherlist_test.c",0xfc,
                        "SSL_CTX_set_cipher_list(fixture->client, TLS1_RFC_RSA_WITH_AES_128_SHA)",
                        iVar1 != 0);
      uVar2 = (uint)(iVar1 != 0);
    }
    SSL_CTX_free(*(SSL_CTX **)((long)ptr + 8));
    SSL_CTX_free(*(SSL_CTX **)((long)ptr + 0x10));
    *(undefined1 (*) [16])((long)ptr + 8) = (undefined1  [16])0x0;
    CRYPTO_free(ptr);
  }
  return uVar2;
}



bool test_default_cipherlist_clear(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  ulong uVar3;
  SSL *s;
  bool bVar4;
  
  ptr = (void *)set_up("test_default_cipherlist_clear");
  if (ptr == (void *)0x0) {
    return false;
  }
  iVar2 = SSL_CTX_set_cipher_list(*(SSL_CTX **)((long)ptr + 8),"no-such");
  iVar2 = test_int_eq("test/cipherlist_test.c",0xde,
                      "SSL_CTX_set_cipher_list(fixture->server, \"no-such\")",&_LC15,iVar2,0);
  if (iVar2 != 0) {
    uVar3 = ERR_get_error();
    uVar1 = (uint)uVar3 & 0x7fffff;
    if ((uVar3 & 0x80000000) != 0) {
      uVar1 = (uint)uVar3 & 0x7fffffff;
    }
    iVar2 = test_int_eq("test/cipherlist_test.c",0xe1,"ERR_GET_REASON(ERR_get_error())",
                        "SSL_R_NO_CIPHER_MATCH",uVar1,0xb9);
    if (iVar2 != 0) {
      s = SSL_new(*(SSL_CTX **)((long)ptr + 0x10));
      iVar2 = test_ptr("test/cipherlist_test.c",0xe6,&_LC19,s);
      if (iVar2 != 0) {
        iVar2 = SSL_set_cipher_list(s,"no-such");
        iVar2 = test_int_eq("test/cipherlist_test.c",0xe9,"SSL_set_cipher_list(s, \"no-such\")",
                            &_LC15,iVar2,0);
        if (iVar2 != 0) {
          uVar3 = ERR_get_error();
          uVar1 = (uint)uVar3 & 0x7fffff;
          if ((uVar3 & 0x80000000) != 0) {
            uVar1 = (uint)uVar3 & 0x7fffffff;
          }
          iVar2 = test_int_eq("test/cipherlist_test.c",0xec,"ERR_GET_REASON(ERR_get_error())",
                              "SSL_R_NO_CIPHER_MATCH",uVar1,0xb9);
          bVar4 = iVar2 != 0;
          goto LAB_0010038f;
        }
      }
      bVar4 = false;
      goto LAB_0010038f;
    }
  }
  bVar4 = false;
  s = (SSL *)0x0;
LAB_0010038f:
  SSL_free(s);
  SSL_CTX_free(*(SSL_CTX **)((long)ptr + 8));
  SSL_CTX_free(*(SSL_CTX **)((long)ptr + 0x10));
  *(undefined1 (*) [16])((long)ptr + 8) = (undefined1  [16])0x0;
  CRYPTO_free(ptr);
  return bVar4;
}



uint test_default_cipherlist_explicit(void)

{
  int iVar1;
  uint uVar2;
  void *ptr;
  SSL_CTX *pSVar3;
  
  ptr = (void *)set_up("test_default_cipherlist_explicit");
  if (ptr != (void *)0x0) {
    iVar1 = SSL_CTX_set_cipher_list(*(SSL_CTX **)((long)ptr + 8),"DEFAULT");
    iVar1 = test_true("test/cipherlist_test.c",0xcf,
                      "SSL_CTX_set_cipher_list(fixture->server, \"DEFAULT\")",iVar1 != 0);
    if (iVar1 != 0) {
      iVar1 = SSL_CTX_set_cipher_list(*(SSL_CTX **)((long)ptr + 0x10),"DEFAULT");
      iVar1 = test_true("test/cipherlist_test.c",0xd0,
                        "SSL_CTX_set_cipher_list(fixture->client, \"DEFAULT\")",iVar1 != 0);
      if (iVar1 != 0) {
        pSVar3 = *(SSL_CTX **)((long)ptr + 8);
        uVar2 = 0;
        if (pSVar3 != (SSL_CTX *)0x0) {
          uVar2 = test_default_cipherlist_part_0();
          if (uVar2 != 0) {
            if (*(long *)((long)ptr + 0x10) == 0) {
              pSVar3 = *(SSL_CTX **)((long)ptr + 8);
              uVar2 = 0;
              goto LAB_001005d9;
            }
            iVar1 = test_default_cipherlist_part_0();
            uVar2 = (uint)(iVar1 != 0);
          }
          pSVar3 = *(SSL_CTX **)((long)ptr + 8);
        }
LAB_001005d9:
        SSL_CTX_free(pSVar3);
        SSL_CTX_free(*(SSL_CTX **)((long)ptr + 0x10));
        *(undefined1 (*) [16])((long)ptr + 8) = (undefined1  [16])0x0;
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    SSL_CTX_free(*(SSL_CTX **)((long)ptr + 8));
    SSL_CTX_free(*(SSL_CTX **)((long)ptr + 0x10));
    *(undefined1 (*) [16])((long)ptr + 8) = (undefined1  [16])0x0;
    CRYPTO_free(ptr);
  }
  return 0;
}



uint test_default_cipherlist_implicit(void)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  SSL_CTX *pSVar3;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_default_cipherlist_implicit");
  if (ptr == (void *)0x0) {
    return 0;
  }
  pSVar3 = *(SSL_CTX **)((long)ptr + 8);
  if (pSVar3 != (SSL_CTX *)0x0) {
    uVar1 = test_default_cipherlist_part_0();
    if (uVar1 != 0) {
      if (*(long *)((long)ptr + 0x10) == 0) {
        pSVar3 = *(SSL_CTX **)((long)ptr + 8);
        uVar1 = 0;
        goto LAB_0010066e;
      }
      iVar2 = test_default_cipherlist_part_0();
      uVar1 = (uint)(iVar2 != 0);
    }
    pSVar3 = *(SSL_CTX **)((long)ptr + 8);
  }
LAB_0010066e:
  SSL_CTX_free(pSVar3);
  SSL_CTX_free(*(SSL_CTX **)((long)ptr + 0x10));
  *(undefined1 (*) [16])((long)ptr + 8) = (undefined1  [16])0x0;
  CRYPTO_free(ptr);
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_test("test_default_cipherlist_implicit",test_default_cipherlist_implicit);
  add_test("test_default_cipherlist_explicit",test_default_cipherlist_explicit);
  add_test("test_default_cipherlist_clear",test_default_cipherlist_clear);
  add_test("test_stdname_cipherlist",test_stdname_cipherlist);
  return 1;
}


