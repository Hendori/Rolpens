
undefined8 no_password_cb(void)

{
  return 0xffffffff;
}



long pem_read_bio_key_legacy_constprop_0
               (BIO *param_1,long *param_2,void *param_3,undefined8 param_4,undefined8 param_5,
               uint param_6)

{
  int iVar1;
  X509_SIG *a;
  PKCS8_PRIV_KEY_INFO *a_00;
  ulong uVar2;
  long lVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char *local_468;
  uchar *local_460;
  uchar *local_458;
  long local_450;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_468 = (char *)0x0;
  local_460 = (uchar *)0x0;
  local_458 = (uchar *)0x0;
  ERR_set_mark();
  if ((param_6 & 1) == 0) {
    pcVar5 = "PUBLIC KEY";
    if ((param_6 & 2) == 0) {
      pcVar5 = "PARAMETERS";
    }
    iVar1 = PEM_bytes_read_bio(&local_458,&local_450,&local_468,pcVar5,param_1,ossl_pw_pem_password,
                               param_3);
  }
  else {
    iVar1 = PEM_bytes_read_bio_secmem
                      (&local_458,&local_450,&local_468,"ANY PRIVATE KEY",param_1,
                       ossl_pw_pem_password,param_3);
  }
  if (iVar1 == 0) {
    ERR_pop_to_mark();
    lVar3 = 0;
    goto LAB_00100283;
  }
  ERR_clear_last_mark();
  pcVar5 = local_468;
  local_460 = local_458;
  iVar1 = strcmp(local_468,"PRIVATE KEY");
  if (iVar1 == 0) {
    a_00 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_460,local_450);
joined_r0x00100217:
    if (a_00 != (PKCS8_PRIV_KEY_INFO *)0x0) {
      lVar3 = evp_pkcs82pkey_legacy(a_00,param_4,param_5);
      if (param_2 != (long *)0x0) {
        EVP_PKEY_free((EVP_PKEY *)*param_2);
        *param_2 = lVar3;
      }
      PKCS8_PRIV_KEY_INFO_free(a_00);
      goto LAB_0010024a;
    }
LAB_00100160:
    uVar2 = ERR_peek_last_error();
    if (uVar2 == 0) {
      ERR_new();
      lVar3 = 0;
      ERR_set_debug("crypto/pem/pem_pkey.c",0xcf,"pem_read_bio_key_legacy");
      ERR_set_error(9,0x8000d,0);
    }
    else {
      lVar3 = 0;
    }
  }
  else {
    iVar1 = strcmp(pcVar5,"ENCRYPTED PRIVATE KEY");
    if (iVar1 != 0) {
      iVar1 = ossl_pem_check_suffix(pcVar5,"PRIVATE KEY");
      if (iVar1 < 1) {
        if ((param_6 & 3) == 2) {
          lVar3 = ossl_d2i_PUBKEY_legacy(param_2,&local_460,local_450);
LAB_0010024a:
          if (lVar3 != 0) goto LAB_0010025a;
        }
      }
      else {
        pEVar4 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,local_468,iVar1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) && (*(long *)(pEVar4 + 0xb8) != 0)) {
          lVar3 = ossl_d2i_PrivateKey_legacy
                            (*(undefined4 *)pEVar4,param_2,&local_460,local_450,param_4,param_5);
          goto LAB_0010024a;
        }
      }
      goto LAB_00100160;
    }
    a = d2i_X509_SIG((X509_SIG **)0x0,&local_460,local_450);
    if (a == (X509_SIG *)0x0) goto LAB_00100160;
    iVar1 = ossl_pw_pem_password(local_448,0x400,0,param_3);
    if (-1 < iVar1) {
      a_00 = PKCS8_decrypt(a,local_448,iVar1);
      X509_SIG_free(a);
      OPENSSL_cleanse(local_448,(long)iVar1);
      goto joined_r0x00100217;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_pkey.c",0x9f,"pem_read_bio_key_legacy");
    ERR_set_error(9,0x68,0);
    lVar3 = 0;
    X509_SIG_free(a);
  }
LAB_0010025a:
  CRYPTO_secure_free(local_468,"crypto/pem/pem_pkey.c",0xd1);
  CRYPTO_secure_clear_free(local_458,local_450,"crypto/pem/pem_pkey.c",0xd2);
LAB_00100283:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



EVP_PKEY *
pem_read_bio_key(BIO *param_1,long *param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  BIO_METHOD *type;
  BIO *b;
  EVP_PKEY *pEVar7;
  long in_FS_OFFSET;
  int local_a4;
  EVP_PKEY *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  b = (BIO *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
  local_a4 = (int)lVar4;
  if (local_a4 < 0) {
    type = (BIO_METHOD *)BIO_f_readbuffer();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      pEVar7 = (EVP_PKEY *)0x0;
      goto LAB_0010055d;
    }
    param_1 = BIO_push(b,param_1);
    lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
    local_a4 = (int)lVar4;
  }
  if (param_3 == (undefined *)0x0) {
    param_3 = &PEM_def_callback;
  }
  iVar1 = ossl_pw_set_pem_password_cb(local_78,param_3,param_4);
  if (iVar1 == 0) {
LAB_00100406:
    pEVar7 = (EVP_PKEY *)0x0;
  }
  else {
    iVar1 = ossl_pw_enable_passphrase_caching(local_78);
    if (iVar1 == 0) goto LAB_00100406;
    ERR_set_mark();
    local_80 = (EVP_PKEY *)0x0;
    lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
    if ((int)lVar4 < 0) {
LAB_001005e0:
      lVar4 = BIO_ctrl(param_1,0x80,(long)local_a4,(void *)0x0);
      if (-1 < (int)lVar4) {
        pEVar7 = (EVP_PKEY *)
                 pem_read_bio_key_legacy_constprop_0
                           (param_1,param_2,local_78,param_5,param_6,param_7);
        if (pEVar7 != (EVP_PKEY *)0x0) goto LAB_0010053b;
      }
      ERR_clear_last_mark();
      pEVar7 = (EVP_PKEY *)0x0;
    }
    else {
      lVar5 = OSSL_DECODER_CTX_new_for_pkey(&local_80,&_LC6,0,0,param_7,param_5,param_6);
      if (lVar5 == 0) goto LAB_001005e0;
      iVar1 = OSSL_DECODER_CTX_set_pem_password_cb(lVar5,ossl_pw_pem_password,local_78);
      if (iVar1 != 0) {
        ERR_set_mark();
        while( true ) {
          iVar1 = (int)lVar4;
          iVar3 = OSSL_DECODER_from_bio(lVar5,param_1);
          if ((iVar3 != 0) && (local_80 != (EVP_PKEY *)0x0)) {
            ERR_pop_to_mark();
            uVar2 = param_7 & 0xfffffffd;
            if ((param_7 & 1) == 0) {
              uVar2 = param_7;
            }
            iVar1 = evp_keymgmt_util_has(local_80,uVar2);
            if (iVar1 == 0) {
              EVP_PKEY_free(local_80);
              local_80 = (EVP_PKEY *)0x0;
              ERR_new();
              ERR_set_debug("crypto/pem/pem_pkey.c",0x55,"pem_read_bio_key_decoder");
              ERR_set_error(9,0x7e,0);
            }
            else if (param_2 != (long *)0x0) {
              EVP_PKEY_free((EVP_PKEY *)*param_2);
              *param_2 = (long)local_80;
            }
            goto LAB_00100525;
          }
          lVar4 = BIO_ctrl(param_1,2,0,(void *)0x0);
          if ((int)lVar4 != 0) break;
          lVar4 = BIO_ctrl(param_1,0x85,0,(void *)0x0);
          if (((int)lVar4 < 0) || ((int)lVar4 <= iVar1)) break;
          uVar6 = ERR_peek_error();
          uVar2 = (uint)uVar6 & 0x7fffffff;
          if ((uVar6 & 0x80000000) == 0) {
            uVar2 = (uint)uVar6 & 0x7fffff;
          }
          if (uVar2 != 0x8010c) break;
          ERR_pop_to_mark();
          ERR_set_mark();
        }
        ERR_clear_last_mark();
      }
LAB_00100525:
      OSSL_DECODER_CTX_free(lVar5);
      pEVar7 = local_80;
      if (local_80 == (EVP_PKEY *)0x0) goto LAB_001005e0;
LAB_0010053b:
      ERR_pop_to_mark();
    }
  }
  ossl_pw_clear_passphrase_data(local_78);
  if (b != (BIO *)0x0) {
    BIO_pop(b);
    BIO_free(b);
  }
LAB_0010055d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void PEM_read_bio_PUBKEY_ex(void)

{
  pem_read_bio_key();
  return;
}



EVP_PKEY * PEM_read_bio_PUBKEY(BIO *bp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_bio_PUBKEY_ex();
  return pEVar1;
}



undefined8
PEM_read_PUBKEY_ex(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pkey.c",0x11d,"PEM_read_PUBKEY_ex");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = PEM_read_bio_PUBKEY_ex(bp,param_2,param_3,param_4,param_5,param_6);
    BIO_free(bp);
  }
  return uVar1;
}



EVP_PKEY * PEM_read_PUBKEY(FILE *fp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_PUBKEY_ex();
  return pEVar1;
}



void PEM_read_bio_PrivateKey_ex(void)

{
  pem_read_bio_key();
  return;
}



EVP_PKEY * PEM_read_bio_PrivateKey(BIO *bp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_bio_PrivateKey_ex();
  return pEVar1;
}



int PEM_write_bio_PrivateKey_traditional
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,uchar *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  EVP_PKEY *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (EVP_PKEY *)0x0;
  if (param_2 != (EVP_PKEY *)0x0) {
    if (((((param_2->pkey).ptr != (char *)0x0) ||
         (param_2[1].attributes != (stack_st_X509_ATTRIBUTE *)0x0)) &&
        (*(long *)&param_2[1].save_parameters != 0)) &&
       (iVar2 = evp_pkey_copy_downgraded(&local_a0,param_2), iVar2 != 0)) {
      param_2 = local_a0;
    }
    lVar1 = *(long *)&param_2->references;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) {
      BIO_snprintf(local_98,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
      iVar2 = PEM_ASN1_write_bio(&i2d_PrivateKey,local_98,param_1,param_2,param_3,param_4,param_5,
                                 param_6,param_7);
      EVP_PKEY_free(local_a0);
      goto LAB_001008fe;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_pkey.c",0x165,"PEM_write_bio_PrivateKey_traditional");
    ERR_set_error(9,0x6e,0);
    EVP_PKEY_free(local_a0);
  }
  iVar2 = 0;
LAB_001008fe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int PEM_write_bio_PrivateKey_ex
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,char *param_4,int param_5,
              undefined1 *param_6,char *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  int local_3c;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x87,&_LC6,"PrivateKeyInfo",param_9);
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 == 0) {
    OSSL_ENCODER_CTX_free(uVar2);
    if ((param_2 != (EVP_PKEY *)0x0) &&
       ((*(long *)&param_2->references == 0 ||
        (*(long *)(*(long *)&param_2->references + 0x48) != 0)))) {
      iVar1 = PEM_write_bio_PKCS8PrivateKey(param_1,param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return iVar1;
    }
    iVar1 = PEM_write_bio_PrivateKey_traditional(param_1,param_2,param_3,param_4,param_5,param_6);
    return iVar1;
  }
  local_3c = param_5;
  if (param_6 == (undefined1 *)0x0 && param_4 == (char *)0x0) {
    if (param_7 == (char *)0x0) {
      param_6 = &PEM_def_callback;
      param_4 = (char *)0x0;
    }
    else {
      param_6 = (undefined *)0x0;
      sVar3 = strlen(param_7);
      local_3c = (int)sVar3;
      param_4 = param_7;
    }
  }
  if (param_3 != (EVP_CIPHER *)0x0) {
    uVar4 = EVP_CIPHER_get0_name(param_3);
    iVar1 = OSSL_ENCODER_CTX_set_cipher(uVar2,uVar4,0);
    if (((iVar1 == 0) ||
        ((param_4 != (char *)0x0 &&
         (iVar1 = OSSL_ENCODER_CTX_set_passphrase(uVar2,param_4,(long)local_3c), iVar1 == 0)))) ||
       ((param_6 != (undefined *)0x0 &&
        (iVar1 = OSSL_ENCODER_CTX_set_pem_password_cb(uVar2,param_6,param_7), iVar1 == 0)))) {
      OSSL_ENCODER_CTX_free(uVar2);
      return 0;
    }
  }
  iVar1 = OSSL_ENCODER_to_bio(uVar2,param_1);
  OSSL_ENCODER_CTX_free(uVar2);
  return iVar1;
}



int PEM_write_bio_PrivateKey
              (BIO *bp,EVP_PKEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_write_bio_PrivateKey_ex();
  return iVar1;
}



void PEM_read_bio_Parameters_ex
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  pem_read_bio_key(param_1,param_2,0x100000,0,param_3,param_4,0x84);
  return;
}



EVP_PKEY * PEM_read_bio_Parameters(BIO *bp,EVP_PKEY **x)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_bio_Parameters_ex(bp,x,0,0);
  return pEVar1;
}



int PEM_write_bio_Parameters(BIO *bp,EVP_PKEY *x)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_ENCODER_CTX_new_for_pkey(x,0x84,&_LC6,"type-specific");
  iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar3);
  if (iVar2 == 0) {
    OSSL_ENCODER_CTX_free(uVar3);
    lVar1 = *(long *)&x->references;
    iVar2 = 0;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
      BIO_snprintf(acStack_88,0x50,"%s PARAMETERS",*(undefined8 *)(lVar1 + 0x10));
      iVar2 = PEM_ASN1_write_bio(*(undefined1 **)(*(long *)&x->references + 0x78),acStack_88,bp,x,
                                 (EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
    }
  }
  else {
    iVar2 = OSSL_ENCODER_to_bio(uVar3,bp);
    OSSL_ENCODER_CTX_free(uVar3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
PEM_read_PrivateKey_ex
          (void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pkey.c",0x19f,"PEM_read_PrivateKey_ex");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = PEM_read_bio_PrivateKey_ex(bp,param_2,param_3,param_4,param_5,param_6);
    BIO_free(bp);
  }
  return uVar1;
}



EVP_PKEY * PEM_read_PrivateKey(FILE *fp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)PEM_read_PrivateKey_ex();
  return pEVar1;
}



undefined4
PEM_write_PrivateKey_ex
          (FILE *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  BIO *a;
  
  a = BIO_new_fp(param_1,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/pem/pem_pkey.c",0x1b4,"PEM_write_PrivateKey_ex");
    ERR_set_error(9,0x80007,0);
  }
  else {
    uVar1 = PEM_write_bio_PrivateKey_ex
                      (a,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    BIO_free(a);
  }
  return uVar1;
}



int PEM_write_PrivateKey
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_write_PrivateKey_ex();
  return iVar1;
}


