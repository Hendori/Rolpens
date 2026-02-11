
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EVP_PKEY * openssl_load_privkey(undefined8 param_1,char *param_2)

{
  BIO *bp;
  EVP_PKEY *pEVar1;
  
  __fprintf_chk(_stderr,2,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n");
  bp = BIO_new_file(param_2,"r");
  if (bp != (BIO *)0x0) {
    pEVar1 = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(bp);
    return pEVar1;
  }
  return (EVP_PKEY *)0x0;
}



long test_sha_md(void)

{
  int iVar1;
  long lVar2;
  
  if (sha1_md == 0) {
    lVar2 = EVP_MD_meth_new(0x40,0x41);
    if (((((lVar2 == 0) || (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
         (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
       ((iVar1 = EVP_MD_meth_set_init(lVar2,test_sha1_init), iVar1 == 0 ||
        ((iVar1 = EVP_MD_meth_set_update(lVar2,test_sha1_update), iVar1 == 0 ||
         (iVar1 = EVP_MD_meth_set_final(lVar2,test_sha1_final), iVar1 == 0)))))) {
      EVP_MD_meth_free(lVar2);
      lVar2 = 0;
    }
    sha1_md = lVar2;
    return lVar2;
  }
  return sha1_md;
}



ulong openssl_digests(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (init_5 == 0) {
      lVar3 = test_sha_md();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_4;
        pos_4 = pos_4 + 1;
        uVar1 = EVP_MD_get_type(lVar3);
        *(undefined4 *)((long)&digest_nids_3 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)pos_4;
      init_5 = 1;
      *(undefined4 *)((long)&digest_nids_3 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)pos_4;
    }
    *param_3 = &digest_nids_3;
  }
  else {
    if (param_4 == 0x40) {
      uVar2 = test_sha_md();
      *param_2 = uVar2;
      return 1;
    }
    *param_2 = 0;
    uVar4 = 0;
  }
  return uVar4;
}



void test_sha1_final(undefined8 param_1,uchar *param_2)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Final(param_2,c);
  return;
}



void test_sha1_update(undefined8 param_1,void *param_2,size_t param_3)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Update(c,param_2,param_3);
  return;
}



void test_sha1_init(void)

{
  SHA_CTX *c;
  
  c = (SHA_CTX *)EVP_MD_CTX_get0_md_data();
  SHA1_Init(c);
  return;
}



long test_r4_cipher(void)

{
  int iVar1;
  long lVar2;
  
  if (r4_cipher == 0) {
    lVar2 = EVP_CIPHER_meth_new(5,1,0x10);
    if ((((lVar2 == 0) || (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
       (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,test_rc4_init_key), iVar1 == 0 ||
         (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,test_rc4_cipher), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))) {
      EVP_CIPHER_meth_free(lVar2);
      lVar2 = 0;
    }
    r4_cipher = lVar2;
    return lVar2;
  }
  return r4_cipher;
}



long test_r4_40_cipher(void)

{
  int iVar1;
  long lVar2;
  
  if (r4_40_cipher == 0) {
    lVar2 = EVP_CIPHER_meth_new(5,1,5);
    if ((((lVar2 == 0) || (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
       (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,test_rc4_init_key), iVar1 == 0 ||
         (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,test_rc4_cipher), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))) {
      EVP_CIPHER_meth_free(lVar2);
      lVar2 = 0;
    }
    r4_40_cipher = lVar2;
    return lVar2;
  }
  return r4_40_cipher;
}



ulong openssl_ciphers(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (init_2 == 0) {
      lVar3 = test_r4_cipher();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_1;
        pos_1 = pos_1 + 1;
        uVar1 = EVP_CIPHER_get_nid(lVar3);
        *(undefined4 *)(cipher_nids_0 + lVar5 * 4) = uVar1;
      }
      lVar3 = test_r4_40_cipher();
      if (lVar3 != 0) {
        lVar5 = (long)(int)pos_1;
        pos_1 = pos_1 + 1;
        uVar1 = EVP_CIPHER_get_nid(lVar3);
        *(undefined4 *)(cipher_nids_0 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)pos_1;
      init_2 = 1;
      *(undefined4 *)(cipher_nids_0 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)pos_1;
    }
    *param_3 = cipher_nids_0;
    return uVar4;
  }
  if (param_4 == 5) {
    uVar2 = test_r4_cipher();
    *param_2 = uVar2;
  }
  else {
    if (param_4 != 0x61) {
      *param_2 = 0;
      return 0;
    }
    uVar2 = test_r4_40_cipher();
    *param_2 = uVar2;
  }
  return 1;
}



undefined8 openssl_destroy(void)

{
  EVP_MD_meth_free(sha1_md);
  sha1_md = 0;
  EVP_CIPHER_meth_free(r4_cipher);
  r4_cipher = 0;
  EVP_CIPHER_meth_free(r4_40_cipher);
  r4_40_cipher = 0;
  return 1;
}



undefined8 test_rc4_cipher(undefined8 param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  RC4((RC4_KEY *)(lVar1 + 0x10),param_4,param_3,param_2);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int test_rc4_init_key(undefined8 param_1,void *param_2)

{
  int len;
  void *__dest;
  uchar *data;
  long lVar1;
  int iVar2;
  
  len = EVP_CIPHER_CTX_get_key_length();
  fwrite("(TEST_ENG_OPENSSL_RC4) test_init_key() called\n",1,0x2e,_stderr);
  iVar2 = len;
  if (0 < len) {
    __dest = (void *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    memcpy(__dest,param_2,(long)len);
    data = (uchar *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar2 = 1;
    RC4_set_key((RC4_KEY *)(lVar1 + 0x10),len,data);
  }
  return iVar2;
}



void engine_load_openssl_int(void)

{
  int iVar1;
  ENGINE *e;
  RSA_METHOD *rsa_meth;
  DSA_METHOD *dsa_meth;
  undefined8 uVar2;
  DH_METHOD *dh_meth;
  RAND_METHOD *rand_meth;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = ENGINE_set_id(e,"openssl");
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(e,"Software engine support");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_destroy_function(e,openssl_destroy);
      if (iVar1 != 0) {
        rsa_meth = RSA_get_default_method();
        iVar1 = ENGINE_set_RSA(e,rsa_meth);
        if (iVar1 != 0) {
          dsa_meth = DSA_get_default_method();
          iVar1 = ENGINE_set_DSA(e,dsa_meth);
          if (iVar1 != 0) {
            uVar2 = EC_KEY_OpenSSL();
            iVar1 = ENGINE_set_EC(e,uVar2);
            if (iVar1 != 0) {
              dh_meth = DH_get_default_method();
              iVar1 = ENGINE_set_DH(e,dh_meth);
              if (iVar1 != 0) {
                rand_meth = (RAND_METHOD *)RAND_OpenSSL();
                iVar1 = ENGINE_set_RAND(e,rand_meth);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_ciphers(e,openssl_ciphers);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_digests(e,openssl_digests);
                    if (iVar1 != 0) {
                      iVar1 = ENGINE_set_load_privkey_function(e,openssl_load_privkey);
                      if (iVar1 != 0) {
                        ERR_set_mark();
                        ENGINE_add(e);
                        ENGINE_free(e);
                        ERR_pop_to_mark();
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ENGINE_free(e);
  return;
}


