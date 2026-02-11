
long PEM_X509_INFO_read_bio_ex
               (BIO *param_1,long param_2,undefined1 *param_3,void *param_4,undefined8 param_5,
               undefined8 param_6)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  X509_INFO *pXVar5;
  X509 *pXVar6;
  long lVar7;
  char *pcVar8;
  X509_PKEY *pXVar9;
  size_t sVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  X509_INFO *pXVar15;
  long in_FS_OFFSET;
  int local_9c;
  code *local_98;
  char *local_80;
  char *local_78;
  uchar *local_70;
  uchar *local_68;
  long local_60;
  EVP_CIPHER_INFO local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  local_78 = (char *)0x0;
  local_70 = (uchar *)0x0;
  lVar11 = param_2;
  if ((param_2 == 0) && (lVar11 = OPENSSL_sk_new_null(), lVar11 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/pem/pem_info.c",0x46,"PEM_X509_INFO_read_bio_ex");
    ERR_set_error(9,0x8000f,0);
    X509_INFO_free((X509_INFO *)0x0);
  }
  else {
    pXVar5 = X509_INFO_new();
    if (pXVar5 == (X509_INFO *)0x0) {
      X509_INFO_free((X509_INFO *)0x0);
    }
    else {
LAB_001000d8:
      ERR_set_mark();
      iVar2 = PEM_read_bio(param_1,&local_80,&local_78,&local_70,&local_60);
      if (iVar2 != 0) {
        ERR_clear_last_mark();
        do {
          pcVar13 = local_80;
          iVar2 = strcmp(local_80,"CERTIFICATE");
          if (((iVar2 == 0) || (iVar2 = strcmp(pcVar13,"X509 CERTIFICATE"), iVar2 == 0)) ||
             (iVar2 = strcmp(pcVar13,"TRUSTED CERTIFICATE"), iVar2 == 0)) {
            if (pXVar5->x509 == (X509 *)0x0) goto code_r0x0010018e;
          }
          else {
            iVar2 = strcmp(pcVar13,"X509 CRL");
            if (iVar2 == 0) {
              if (pXVar5->crl == (X509_CRL *)0x0) {
                local_9c = 0;
                pXVar15 = (X509_INFO *)&pXVar5->crl;
                local_98 = (code *)&d2i_X509_CRL;
                pcVar13 = local_78;
                goto LAB_001001df;
              }
            }
            else {
              pcVar8 = strstr(pcVar13,"PRIVATE KEY");
              if (pcVar8 == (char *)0x0) goto LAB_0010026c;
              if (pXVar5->x_pkey == (X509_PKEY *)0x0) {
                local_9c = 0;
                if ((pcVar13 != pcVar8) &&
                   (iVar2 = strcmp(pcVar13,"ENCRYPTED PRIVATE KEY"), iVar2 != 0)) {
                  pcVar8[-1] = '\0';
                  local_9c = evp_pkey_name2type(local_80);
                }
                pXVar5->enc_data = (char *)0x0;
                pXVar5->enc_len = 0;
                pXVar9 = X509_PKEY_new();
                pcVar13 = local_78;
                pXVar5->x_pkey = pXVar9;
                if (pXVar9 == (X509_PKEY *)0x0) goto LAB_001003a5;
                sVar10 = strlen(local_78);
                if (((int)sVar10 < 0xb) &&
                   (iVar2 = strcmp(local_80,"ENCRYPTED PRIVATE KEY"), iVar2 != 0)) {
                  pXVar15 = (X509_INFO *)&pXVar9->dec_pkey;
                  local_98 = (code *)&d2i_AutoPrivateKey;
                  goto LAB_001001df;
                }
                iVar2 = PEM_get_EVP_CIPHER_INFO(pcVar13,&pXVar5->enc_cipher);
                puVar1 = local_70;
                if (iVar2 == 0) goto LAB_001003a5;
                local_70 = (uchar *)0x0;
                pXVar5->enc_data = (char *)puVar1;
                pXVar5->enc_len = (int)local_60;
                pcVar13 = local_80;
                goto LAB_0010026c;
              }
            }
          }
          iVar2 = OPENSSL_sk_push(lVar11,pXVar5);
          if (iVar2 == 0) goto LAB_001003a5;
          pXVar5 = X509_INFO_new();
          if (pXVar5 == (X509_INFO *)0x0) {
            pXVar5 = (X509_INFO *)0x0;
            goto LAB_001003a5;
          }
        } while( true );
      }
      uVar12 = ERR_peek_last_error();
      uVar4 = (uint)uVar12 & 0x7fffffff;
      if ((uVar12 & 0x80000000) == 0) {
        uVar4 = (uint)uVar12 & 0x7fffff;
      }
      if (uVar4 != 0x6c) {
        ERR_clear_last_mark();
        X509_INFO_free(pXVar5);
        goto LAB_001003ad;
      }
      ERR_pop_to_mark();
      if ((((pXVar5->x509 == (X509 *)0x0) && (pXVar5->crl == (X509_CRL *)0x0)) &&
          (pXVar5->x_pkey == (X509_PKEY *)0x0)) && (pXVar5->enc_data == (char *)0x0)) {
        X509_INFO_free(pXVar5);
        goto LAB_001003e8;
      }
      iVar2 = OPENSSL_sk_push(lVar11,pXVar5);
      if (iVar2 != 0) {
        X509_INFO_free((X509_INFO *)0x0);
        goto LAB_001003e8;
      }
LAB_001003a5:
      X509_INFO_free(pXVar5);
    }
  }
LAB_001003ad:
  for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar11), iVar2 < iVar3; iVar2 = iVar2 + 1) {
    pXVar5 = (X509_INFO *)OPENSSL_sk_value(lVar11,iVar2);
    X509_INFO_free(pXVar5);
  }
  if (param_2 != lVar11) {
    OPENSSL_sk_free(lVar11);
  }
  lVar11 = 0;
LAB_001003e8:
  CRYPTO_free(local_80);
  CRYPTO_free(local_78);
  CRYPTO_free(local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar11;
code_r0x0010018e:
  iVar2 = strcmp(pcVar13,"TRUSTED CERTIFICATE");
  if (iVar2 == 0) {
    local_98 = (code *)&d2i_X509_AUX;
  }
  else {
    local_98 = d2i_X509;
  }
  pXVar6 = (X509 *)X509_new_ex(param_5,param_6);
  pXVar5->x509 = pXVar6;
  if (pXVar6 == (X509 *)0x0) goto LAB_001003a5;
  local_9c = 0;
  pcVar13 = local_78;
  pXVar15 = pXVar5;
LAB_001001df:
  iVar2 = PEM_get_EVP_CIPHER_INFO(pcVar13,&local_58);
  if ((iVar2 == 0) ||
     (iVar2 = PEM_do_header(&local_58,local_70,&local_60,param_3,param_4), iVar2 == 0))
  goto LAB_001003a5;
  local_68 = local_70;
  if (local_9c == 0) {
    lVar7 = (*local_98)(pXVar15,&local_68);
    pcVar13 = local_80;
    if (lVar7 == 0) {
      ERR_new();
      uVar14 = 0xa9;
LAB_00100527:
      ERR_set_debug("crypto/pem/pem_info.c",uVar14,"PEM_X509_INFO_read_bio_ex");
      ERR_set_error(9,0x8000d,0);
      goto LAB_001003a5;
    }
  }
  else {
    lVar7 = d2i_PrivateKey_ex(local_9c,pXVar15,&local_68,local_60,param_5,param_6);
    pcVar13 = local_80;
    if (lVar7 == 0) {
      ERR_new();
      uVar14 = 0xa5;
      goto LAB_00100527;
    }
  }
LAB_0010026c:
  CRYPTO_free(pcVar13);
  local_80 = (char *)0x0;
  CRYPTO_free(local_78);
  local_78 = (char *)0x0;
  CRYPTO_free(local_70);
  local_70 = (uchar *)0x0;
  goto LAB_001000d8;
}



undefined8
PEM_X509_INFO_read_ex
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
    ERR_set_debug("crypto/pem/pem_info.c",0x24,"PEM_X509_INFO_read_ex");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = PEM_X509_INFO_read_bio_ex(bp,param_2,param_3,param_4,param_5,param_6);
    BIO_free(bp);
  }
  return uVar1;
}



stack_st_X509_INFO * PEM_X509_INFO_read(FILE *fp,stack_st_X509_INFO *sk,undefined1 *cb,void *u)

{
  stack_st_X509_INFO *psVar1;
  
  psVar1 = (stack_st_X509_INFO *)PEM_X509_INFO_read_ex();
  return psVar1;
}



stack_st_X509_INFO * PEM_X509_INFO_read_bio(BIO *bp,stack_st_X509_INFO *sk,undefined1 *cb,void *u)

{
  stack_st_X509_INFO *psVar1;
  
  psVar1 = (stack_st_X509_INFO *)PEM_X509_INFO_read_bio_ex();
  return psVar1;
}



int PEM_X509_INFO_write_bio
              (BIO *bp,X509_INFO *xi,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cd,void *u)

{
  uchar *data;
  int iVar1;
  int len;
  char *pcVar2;
  size_t sVar3;
  RSA *x;
  uint uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc != (EVP_CIPHER *)0x0) {
    pcVar2 = (char *)EVP_CIPHER_get0_name(enc);
    if (pcVar2 != (char *)0x0) {
      sVar3 = strlen(pcVar2);
      iVar1 = EVP_CIPHER_get_iv_length(enc);
      if (sVar3 + 0x24 + (long)(iVar1 * 2) < 0x401) goto LAB_001007e8;
    }
    ERR_new();
    uVar5 = 0xf3;
LAB_001008b9:
    uVar4 = 0;
    ERR_set_debug("crypto/pem/pem_info.c",uVar5,"PEM_X509_INFO_write_bio");
    ERR_set_error(9,0x71,0);
    goto LAB_0010093b;
  }
LAB_001007e8:
  if (xi->x_pkey != (X509_PKEY *)0x0) {
    data = (uchar *)xi->enc_data;
    if ((data == (uchar *)0x0) || (iVar1 = xi->enc_len, iVar1 < 1)) {
      x = (RSA *)EVP_PKEY_get0_RSA(xi->x_pkey->dec_pkey);
      iVar1 = PEM_write_bio_RSAPrivateKey(bp,x,enc,kstr,klen,cd,u);
      if (iVar1 < 1) goto LAB_001009a0;
    }
    else {
      if (enc == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/pem/pem_info.c",0x100,"PEM_X509_INFO_write_bio");
        ERR_set_error(9,0x7f,0);
LAB_001009a0:
        uVar4 = 0;
        goto LAB_0010093b;
      }
      pcVar2 = (char *)EVP_CIPHER_get0_name((xi->enc_cipher).cipher);
      if (pcVar2 == (char *)0x0) {
        ERR_new();
        uVar5 = 0x110;
        goto LAB_001008b9;
      }
      local_448[0] = '\0';
      PEM_proc_type(local_448,10);
      len = EVP_CIPHER_get_iv_length(enc);
      PEM_dek_info(local_448,pcVar2,len,(char *)(xi->enc_cipher).iv);
      iVar1 = PEM_write_bio(bp,"RSA PRIVATE KEY",local_448,data,(long)iVar1);
      if (iVar1 < 1) {
        uVar4 = 0;
        goto LAB_0010093b;
      }
    }
  }
  uVar4 = 1;
  if (xi->x509 != (X509 *)0x0) {
    iVar1 = PEM_write_bio_X509(bp,xi->x509);
    uVar4 = (uint)(0 < iVar1);
  }
LAB_0010093b:
  OPENSSL_cleanse(local_448,0x400);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


