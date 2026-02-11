
int SSL_use_RSAPrivateKey(SSL *ssl,RSA *rsa)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (rsa == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa_legacy.c",0x17,"SSL_use_RSAPrivateKey");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa_legacy.c",0x1b,"SSL_use_RSAPrivateKey");
      ERR_set_error(0x14,0x80006,0);
    }
    else {
      iVar1 = RSA_up_ref(rsa);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,6,rsa);
        if (0 < iVar1) {
          iVar1 = SSL_use_PrivateKey(ssl,pkey);
          EVP_PKEY_free(pkey);
          return iVar1;
        }
        RSA_free(rsa);
      }
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}



int SSL_use_RSAPrivateKey_file(SSL *ssl,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  void *u;
  undefined1 *cb;
  RSA *rsa;
  undefined4 uVar3;
  
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("ssl/ssl_rsa_legacy.c",0x36,"SSL_use_RSAPrivateKey_file");
    ERR_set_error(0x14,0xc0102,0);
    iVar1 = 0;
  }
  else {
    type_00 = BIO_s_file();
    bp = BIO_new(type_00);
    if (bp == (BIO *)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_rsa_legacy.c",0x3c,"SSL_use_RSAPrivateKey_file");
      ERR_set_error(0x14,0x80007,0);
    }
    else {
      lVar2 = BIO_ctrl(bp,0x6c,3,file);
      if ((int)lVar2 < 1) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("ssl/ssl_rsa_legacy.c",0x41,"SSL_use_RSAPrivateKey_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        if (type == 2) {
          uVar3 = 0x8000d;
          rsa = d2i_RSAPrivateKey_bio(bp,(RSA **)0x0);
        }
        else {
          if (type != 1) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("ssl/ssl_rsa_legacy.c",0x4d,"SSL_use_RSAPrivateKey_file");
            ERR_set_error(0x14,0x7c,0);
            goto LAB_0010019f;
          }
          u = (void *)SSL_get_default_passwd_cb_userdata(ssl);
          cb = (undefined1 *)SSL_get_default_passwd_cb(ssl);
          uVar3 = 0x80009;
          rsa = PEM_read_bio_RSAPrivateKey(bp,(RSA **)0x0,cb,u);
        }
        if (rsa == (RSA *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa_legacy.c",0x51,"SSL_use_RSAPrivateKey_file");
          iVar1 = 0;
          ERR_set_error(0x14,uVar3,0);
        }
        else {
          iVar1 = SSL_use_RSAPrivateKey(ssl,rsa);
          RSA_free(rsa);
        }
      }
    }
  }
LAB_0010019f:
  BIO_free(bp);
  return iVar1;
}



int SSL_use_RSAPrivateKey_ASN1(SSL *ssl,uchar *d,long len)

{
  int iVar1;
  RSA *rsa;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = d;
  rsa = d2i_RSAPrivateKey((RSA **)0x0,&local_28,len);
  if (rsa == (RSA *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("ssl/ssl_rsa_legacy.c",99,"SSL_use_RSAPrivateKey_ASN1");
    ERR_set_error(0x14,0x8000d,0);
  }
  else {
    iVar1 = SSL_use_RSAPrivateKey(ssl,rsa);
    RSA_free(rsa);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_CTX_use_RSAPrivateKey(SSL_CTX *ctx,RSA *rsa)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (rsa == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/ssl_rsa_legacy.c",0x72,"SSL_CTX_use_RSAPrivateKey");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/ssl_rsa_legacy.c",0x76,"SSL_CTX_use_RSAPrivateKey");
      ERR_set_error(0x14,0x80006,0);
    }
    else {
      iVar1 = RSA_up_ref(rsa);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,6,rsa);
        if (0 < iVar1) {
          iVar1 = SSL_CTX_use_PrivateKey(ctx,pkey);
          EVP_PKEY_free(pkey);
          return iVar1;
        }
        RSA_free(rsa);
      }
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}



int SSL_CTX_use_RSAPrivateKey_file(SSL_CTX *ctx,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  void *u;
  undefined1 *cb;
  RSA *rsa;
  undefined4 uVar3;
  
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("ssl/ssl_rsa_legacy.c",0x91,"SSL_CTX_use_RSAPrivateKey_file");
    ERR_set_error(0x14,0xc0102,0);
    iVar1 = 0;
  }
  else {
    type_00 = BIO_s_file();
    bp = BIO_new(type_00);
    if (bp == (BIO *)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("ssl/ssl_rsa_legacy.c",0x97,"SSL_CTX_use_RSAPrivateKey_file");
      ERR_set_error(0x14,0x80007,0);
    }
    else {
      lVar2 = BIO_ctrl(bp,0x6c,3,file);
      if ((int)lVar2 < 1) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("ssl/ssl_rsa_legacy.c",0x9c,"SSL_CTX_use_RSAPrivateKey_file");
        ERR_set_error(0x14,0x80002,0);
      }
      else {
        if (type == 2) {
          uVar3 = 0x8000d;
          rsa = d2i_RSAPrivateKey_bio(bp,(RSA **)0x0);
        }
        else {
          if (type != 1) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("ssl/ssl_rsa_legacy.c",0xa8,"SSL_CTX_use_RSAPrivateKey_file");
            ERR_set_error(0x14,0x7c,0);
            goto LAB_0010055f;
          }
          u = (void *)SSL_CTX_get_default_passwd_cb_userdata(ctx);
          cb = (undefined1 *)SSL_CTX_get_default_passwd_cb(ctx);
          uVar3 = 0x80009;
          rsa = PEM_read_bio_RSAPrivateKey(bp,(RSA **)0x0,cb,u);
        }
        if (rsa == (RSA *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/ssl_rsa_legacy.c",0xac,"SSL_CTX_use_RSAPrivateKey_file");
          iVar1 = 0;
          ERR_set_error(0x14,uVar3,0);
        }
        else {
          iVar1 = SSL_CTX_use_RSAPrivateKey(ctx,rsa);
          RSA_free(rsa);
        }
      }
    }
  }
LAB_0010055f:
  BIO_free(bp);
  return iVar1;
}



int SSL_CTX_use_RSAPrivateKey_ASN1(SSL_CTX *ctx,uchar *d,long len)

{
  int iVar1;
  RSA *rsa;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = d;
  rsa = d2i_RSAPrivateKey((RSA **)0x0,&local_28,len);
  if (rsa == (RSA *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("ssl/ssl_rsa_legacy.c",0xbf,"SSL_CTX_use_RSAPrivateKey_ASN1");
    ERR_set_error(0x14,0x8000d,0);
  }
  else {
    iVar1 = SSL_CTX_use_RSAPrivateKey(ctx,rsa);
    RSA_free(rsa);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


