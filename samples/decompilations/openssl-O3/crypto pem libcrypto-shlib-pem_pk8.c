
EVP_PKEY * d2i_PKCS8PrivateKey_bio(BIO *bp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  uint passlen;
  X509_SIG *a;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  char acStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = d2i_PKCS8_bio(bp,(X509_SIG **)0x0);
  if (a != (X509_SIG *)0x0) {
    if (cb == (undefined1 *)0x0) {
      passlen = PEM_def_callback(acStack_438,0x400,0,u);
    }
    else {
      passlen = (*(code *)cb)();
    }
    if (passlen < 0x401) {
      p8 = PKCS8_decrypt(a,acStack_438,passlen);
      X509_SIG_free(a);
      OPENSSL_cleanse(acStack_438,(long)(int)passlen);
      if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
        pEVar1 = EVP_PKCS82PKEY(p8);
        PKCS8_PRIV_KEY_INFO_free(p8);
        if (pEVar1 != (EVP_PKEY *)0x0) {
          if (x != (EVP_PKEY **)0x0) {
            EVP_PKEY_free(*x);
            *x = pEVar1;
          }
          goto LAB_001000c5;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/pem/pem_pk8.c",0xba,"d2i_PKCS8PrivateKey_bio");
      ERR_set_error(9,0x68,0);
      X509_SIG_free(a);
    }
  }
  pEVar1 = (EVP_PKEY *)0x0;
LAB_001000c5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EVP_PKEY * d2i_PKCS8PrivateKey_fp(FILE *fp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  BIO *bp;
  EVP_PKEY *pEVar1;
  
  bp = BIO_new_fp(fp,0);
  if (bp == (BIO *)0x0) {
    ERR_new();
    pEVar1 = (EVP_PKEY *)0x0;
    ERR_set_debug("crypto/pem/pem_pk8.c",0x103,"d2i_PKCS8PrivateKey_fp");
    ERR_set_error(9,0x80007,0);
  }
  else {
    pEVar1 = d2i_PKCS8PrivateKey_bio(bp,x,cb,u);
    BIO_free(bp);
  }
  return pEVar1;
}



X509_SIG * PEM_read_bio_PKCS8(BIO *bp,X509_SIG **x,undefined1 *cb,void *u)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)PEM_ASN1_read_bio(&d2i_X509_SIG,"ENCRYPTED PRIVATE KEY",bp,x,cb,u);
  return pXVar1;
}



X509_SIG * PEM_read_PKCS8(FILE *fp,X509_SIG **x,undefined1 *cb,void *u)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)PEM_ASN1_read(&d2i_X509_SIG,"ENCRYPTED PRIVATE KEY",fp,x,cb,u);
  return pXVar1;
}



int PEM_write_bio_PKCS8(BIO *bp,X509_SIG *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_X509_SIG,"ENCRYPTED PRIVATE KEY",bp,x,(EVP_CIPHER *)0x0,
                             (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_PKCS8(FILE *fp,X509_SIG *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_X509_SIG,"ENCRYPTED PRIVATE KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0
                         ,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



PKCS8_PRIV_KEY_INFO *
PEM_read_bio_PKCS8_PRIV_KEY_INFO(BIO *bp,PKCS8_PRIV_KEY_INFO **x,undefined1 *cb,void *u)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)
           PEM_ASN1_read_bio(&d2i_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",bp,x,cb,u);
  return pPVar1;
}



PKCS8_PRIV_KEY_INFO *
PEM_read_PKCS8_PRIV_KEY_INFO(FILE *fp,PKCS8_PRIV_KEY_INFO **x,undefined1 *cb,void *u)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)PEM_ASN1_read(&d2i_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",fp,x,cb,u);
  return pPVar1;
}



int PEM_write_bio_PKCS8_PRIV_KEY_INFO(BIO *bp,PKCS8_PRIV_KEY_INFO *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",bp,x,(EVP_CIPHER *)0x0,
                             (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



uint do_pk8pkey_constprop_0
               (BIO *param_1,EVP_PKEY *param_2,int param_3,int param_4,EVP_CIPHER *param_5,
               char *param_6,int param_7,code *param_8,char *param_9)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  PKCS8_PRIV_KEY_INFO *x;
  X509_SIG *x_00;
  undefined8 uVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = &_LC4;
  if (param_3 != 0) {
    puVar6 = &_LC3;
  }
  lVar3 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x87,puVar6,"PrivateKeyInfo");
  if (lVar3 == 0) {
    uVar1 = 0;
    goto LAB_00100518;
  }
  if (param_8 == (code *)0x0 && param_6 == (char *)0x0) {
    if (param_9 == (char *)0x0) {
      param_8 = PEM_def_callback;
      param_6 = (char *)0x0;
    }
    else {
      param_8 = (code *)0x0;
      sVar4 = strlen(param_9);
      param_7 = (int)sVar4;
      param_6 = param_9;
    }
  }
  if (param_4 == -1) {
    iVar2 = OSSL_ENCODER_CTX_get_num_encoders(lVar3);
    if (iVar2 == 0) {
      x = EVP_PKEY2PKCS8(param_2);
      if (x == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_001004d0;
      if (param_5 != (EVP_CIPHER *)0x0) goto LAB_00100423;
      if (param_3 == 0) {
        uVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1,x);
      }
      else {
        uVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(param_1,x);
      }
      goto LAB_00100508;
    }
    if (param_5 == (EVP_CIPHER *)0x0) {
LAB_00100650:
      iVar2 = OSSL_ENCODER_to_bio(lVar3,param_1);
      uVar1 = (uint)(iVar2 != 0);
    }
    else {
      uVar5 = EVP_CIPHER_get0_name(param_5);
      iVar2 = OSSL_ENCODER_CTX_set_cipher(lVar3,uVar5,0);
      if (((iVar2 != 0) &&
          ((param_6 == (char *)0x0 ||
           (iVar2 = OSSL_ENCODER_CTX_set_passphrase(lVar3,param_6,(long)param_7), iVar2 != 0)))) &&
         ((param_8 == (code *)0x0 ||
          (iVar2 = OSSL_ENCODER_CTX_set_pem_password_cb(lVar3,param_8,param_9), iVar2 != 0))))
      goto LAB_00100650;
      uVar1 = 0;
    }
  }
  else {
    x = EVP_PKEY2PKCS8(param_2);
    if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
LAB_001004d0:
      ERR_new();
      x = (PKCS8_PRIV_KEY_INFO *)0x0;
      uVar1 = 0;
      ERR_set_debug("crypto/pem/pem_pk8.c",0x85,__func___3);
      ERR_set_error(9,0x73,0);
    }
    else {
LAB_00100423:
      if (param_6 == (char *)0x0) {
        iVar2 = (*param_8)(local_448,0x400,1,param_9);
        if (iVar2 < 0) {
          ERR_new();
          uVar1 = 0;
          ERR_set_debug("crypto/pem/pem_pk8.c",0x8c,__func___3);
          ERR_set_error(9,0x6f,0);
          goto LAB_00100508;
        }
        x_00 = PKCS8_encrypt(param_4,param_5,local_448,iVar2,(uchar *)0x0,0,0,x);
        OPENSSL_cleanse(local_448,(long)iVar2);
      }
      else {
        x_00 = PKCS8_encrypt(param_4,param_5,param_6,param_7,(uchar *)0x0,0,0,x);
      }
      if (x_00 == (X509_SIG *)0x0) {
        uVar1 = 0;
      }
      else {
        if (param_3 == 0) {
          uVar1 = PEM_write_bio_PKCS8(param_1,x_00);
        }
        else {
          uVar1 = i2d_PKCS8_bio(param_1,x_00);
        }
        X509_SIG_free(x_00);
      }
    }
LAB_00100508:
    PKCS8_PRIV_KEY_INFO_free(x);
  }
  OSSL_ENCODER_CTX_free(lVar3);
LAB_00100518:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



int PEM_write_PKCS8PrivateKey_nid
              (FILE *fp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pk8.c",0xf4,__func___1);
    ERR_set_error(9,0x80007,0);
  }
  else {
    iVar1 = do_pk8pkey_constprop_0(a,x,0,nid,0,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}



int PEM_write_bio_PKCS8PrivateKey_nid
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0(bp,x,0,nid,0,kstr,CONCAT44(in_register_00000084,klen),cb,u);
  return iVar1;
}



int i2d_PKCS8PrivateKey_nid_bio
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0(bp,x,1,nid,0,kstr,CONCAT44(in_register_00000084,klen),cb,u);
  return iVar1;
}



int i2d_PKCS8PrivateKey_bio
              (BIO *bp,EVP_PKEY *x,EVP_CIPHER *enc,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0
                    (bp,x,1,0xffffffff,enc,kstr,CONCAT44(in_register_00000084,klen),cb,u);
  return iVar1;
}



int PEM_write_bio_PKCS8PrivateKey
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,char *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0
                    (param_1,param_2,0,0xffffffff,param_3,param_4,
                     CONCAT44(in_register_00000084,param_5),param_6,param_7);
  return iVar1;
}



int PEM_write_PKCS8PrivateKey
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,char *kstr,int klen,undefined1 *cd,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pk8.c",0xf4,__func___1);
    ERR_set_error(9,0x80007,0);
  }
  else {
    iVar1 = do_pk8pkey_constprop_0(a,x,0,0xffffffff,enc,kstr,klen,cd,u);
    BIO_free(a);
  }
  return iVar1;
}



int i2d_PKCS8PrivateKey_fp
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pk8.c",0xf4,__func___1);
    ERR_set_error(9,0x80007,0);
  }
  else {
    iVar1 = do_pk8pkey_constprop_0(a,x,1,0xffffffff,enc,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}



int i2d_PKCS8PrivateKey_nid_fp
              (FILE *fp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pk8.c",0xf4,__func___1);
    ERR_set_error(9,0x80007,0);
  }
  else {
    iVar1 = do_pk8pkey_constprop_0(a,x,1,nid,0,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}



int PEM_write_PKCS8_PRIV_KEY_INFO(FILE *fp,PKCS8_PRIV_KEY_INFO *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,
                         0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}


