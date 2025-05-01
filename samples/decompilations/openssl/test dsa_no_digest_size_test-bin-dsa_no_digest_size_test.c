
int sign_and_verify(int param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  size_t __n;
  uchar *buf;
  uchar *tbs;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  size_t __n_00;
  long in_FS_OFFSET;
  uchar *local_70;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = (BIGNUM *)DSA_get0_q(dsakey);
  iVar1 = BN_num_bits(a);
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  __n_00 = (size_t)iVar2;
  __n = (size_t)param_1;
  buf = (uchar *)CRYPTO_malloc(param_1,"test/dsa_no_digest_size_test.c",0x89);
  tbs = (uchar *)CRYPTO_malloc(iVar2,"test/dsa_no_digest_size_test.c",0x8a);
  iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0x8f,"dataToSign",buf);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0x90,"paddedData",tbs);
    if (iVar1 != 0) {
      iVar1 = RAND_bytes(buf,param_1);
      iVar1 = test_int_eq("test/dsa_no_digest_size_test.c",0x91,"RAND_bytes(dataToSign, len)",&_LC3,
                          iVar1,1);
      if (iVar1 != 0) {
        memset(tbs,0,__n_00);
        if (iVar2 < param_1) {
          memcpy(tbs,buf,__n_00);
        }
        else {
          memcpy(tbs + (__n_00 - __n),buf,__n);
        }
        pkey = EVP_PKEY_new();
        iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0x9a,"pkey = EVP_PKEY_new()",pkey);
        if (iVar1 == 0) {
          local_70 = (uchar *)0x0;
          ctx = (EVP_PKEY_CTX *)0x0;
          iVar1 = 0;
          goto LAB_001000ae;
        }
        EVP_PKEY_set1_DSA(pkey,dsakey);
        ctx = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
        iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0x9e,"ctx = EVP_PKEY_CTX_new(pkey, NULL)",
                         ctx);
        if (iVar1 == 0) {
LAB_001001fd:
          local_70 = (uchar *)0x0;
        }
        else {
          iVar1 = EVP_PKEY_sign_init(ctx);
          iVar1 = test_int_eq("test/dsa_no_digest_size_test.c",0xa0,"EVP_PKEY_sign_init(ctx)",&_LC3,
                              iVar1,1);
          local_70 = (uchar *)0x0;
          if (iVar1 == 0) goto LAB_001000ae;
          iVar1 = EVP_PKEY_sign(ctx,(uchar *)0x0,(size_t *)&local_48,buf,__n);
          if (iVar1 != 1) {
            test_error("test/dsa_no_digest_size_test.c",0xa4,
                       "Failed to get signature length, len=%d",param_1);
            goto LAB_001001fd;
          }
          local_70 = (uchar *)CRYPTO_malloc(local_48,"test/dsa_no_digest_size_test.c",0xa8);
          iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0xa8,
                           "signature = OPENSSL_malloc(sigLength)",local_70);
          if (iVar1 != 0) {
            iVar1 = EVP_PKEY_sign(ctx,local_70,(size_t *)&local_48,buf,__n);
            if (iVar1 != 1) {
              test_error("test/dsa_no_digest_size_test.c",0xac,"Failed to sign, len=%d",param_1);
              iVar1 = 0;
              goto LAB_001000ae;
            }
            iVar1 = EVP_PKEY_verify_init(ctx);
            iVar1 = test_int_eq("test/dsa_no_digest_size_test.c",0xb1,"EVP_PKEY_verify_init(ctx)",
                                &_LC3,iVar1,1);
            if (iVar1 != 0) {
              iVar1 = EVP_PKEY_verify(ctx,local_70,CONCAT44(uStack_44,local_48),buf,__n);
              if (iVar1 == 1) {
                iVar1 = EVP_PKEY_verify(ctx,local_70,CONCAT44(uStack_44,local_48),tbs,__n_00);
                if (iVar1 == 1) {
                  iVar1 = DSA_verify(0,buf,param_1,local_70,local_48,dsakey);
                  if (iVar1 == 1) {
                    iVar1 = DSA_verify(0,tbs,iVar2,local_70,local_48,dsakey);
                    if (iVar1 != 1) {
                      test_error("test/dsa_no_digest_size_test.c",199,
                                 "verify with length %d failed\n",param_1);
                      iVar1 = 0;
                    }
                  }
                  else {
                    test_error("test/dsa_no_digest_size_test.c",0xc2,
                               "Verification with unpadded data failed, len=%d",param_1);
                    iVar1 = 0;
                  }
                }
                else {
                  test_error("test/dsa_no_digest_size_test.c",0xbc,
                             "EVP verify with length %d failed\n",param_1);
                  iVar1 = 0;
                }
              }
              else {
                test_error("test/dsa_no_digest_size_test.c",0xb6,
                           "EVP verify with unpadded length %d failed\n",param_1);
                iVar1 = 0;
              }
              goto LAB_001000ae;
            }
          }
        }
        iVar1 = 0;
        goto LAB_001000ae;
      }
    }
  }
  local_70 = (uchar *)0x0;
  pkey = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  iVar1 = 0;
LAB_001000ae:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  CRYPTO_free(local_70);
  CRYPTO_free(tbs);
  CRYPTO_free(buf);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong dsa_large_digest_test(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = sign_and_verify(0x21);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sign_and_verify(0x40);
  return (ulong)(iVar1 != 0);
}



ulong dsa_small_digest_test(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = sign_and_verify(0x10);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sign_and_verify(1);
  return (ulong)(iVar1 != 0);
}



ulong dsa_exact_size_test(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = sign_and_verify(0x1c);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sign_and_verify(0x20);
  return (ulong)(iVar1 != 0);
}



void cleanup_tests(void)

{
  DSA_free(dsakey);
  return;
}



undefined8 setup_tests(void)

{
  int iVar1;
  DSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  
  r = DSA_new();
  if (r != (DSA *)0x0) {
    a = BN_bin2bn(dsag_2048_2,0x100,(BIGNUM *)0x0);
    a_00 = BN_bin2bn(dsaq_2048_1,0x20,(BIGNUM *)0x0);
    a_01 = BN_bin2bn(dsap_2048_0,0x100,(BIGNUM *)0x0);
    iVar1 = DSA_set0_pqg(r,a_01,a_00,a);
    if (iVar1 != 0) goto LAB_0010065a;
    DSA_free(r);
    BN_free(a_01);
    BN_free(a_00);
    BN_free(a);
  }
  r = (DSA *)0x0;
LAB_0010065a:
  dsakey = r;
  iVar1 = test_ptr("test/dsa_no_digest_size_test.c",0x75,"dsakey = load_dsa_params()",r);
  if (iVar1 != 0) {
    iVar1 = DSA_generate_key(dsakey);
    iVar1 = test_int_eq("test/dsa_no_digest_size_test.c",0x78,"DSA_generate_key(dsakey)",&_LC3,iVar1
                        ,1);
    if (iVar1 != 0) {
      add_test("dsa_exact_size_test",dsa_exact_size_test);
      add_test("dsa_small_digest_test",dsa_small_digest_test);
      add_test("dsa_large_digest_test",dsa_large_digest_test);
      return 1;
    }
  }
  return 0;
}


