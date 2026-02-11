
undefined8 pkcs7_bio_add_digest(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  undefined8 uVar2;
  EVP_MD *pEVar3;
  long lVar4;
  BIO *pBVar5;
  EVP_MD *parg;
  long in_FS_OFFSET;
  char acStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_f_md();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0x68;
LAB_001001b1:
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",uVar1,"pkcs7_bio_add_digest");
    ERR_set_error(0x21,0x80020,0);
  }
  else {
    OBJ_obj2txt(acStack_68,0x32,(ASN1_OBJECT *)*param_2,0);
    ERR_set_mark();
    uVar1 = ossl_pkcs7_ctx_get0_propq(param_3);
    uVar2 = ossl_pkcs7_ctx_get0_libctx(param_3);
    pEVar3 = (EVP_MD *)EVP_MD_fetch(uVar2,acStack_68,uVar1);
    parg = pEVar3;
    if (pEVar3 == (EVP_MD *)0x0) {
      parg = EVP_get_digestbyname(acStack_68);
      if (parg != (EVP_MD *)0x0) goto LAB_00100085;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x78,"pkcs7_bio_add_digest");
      ERR_set_error(0x21,0x6d,0);
    }
    else {
LAB_00100085:
      ERR_pop_to_mark();
      lVar4 = BIO_ctrl(bp,0x6f,0,parg);
      if (0 < lVar4) {
        EVP_MD_free(pEVar3);
        if ((BIO *)*param_1 == (BIO *)0x0) {
          *param_1 = bp;
        }
        else {
          pBVar5 = BIO_push((BIO *)*param_1,bp);
          if (pBVar5 == (BIO *)0x0) {
            ERR_new();
            uVar1 = 0x86;
            goto LAB_001001b1;
          }
        }
        uVar1 = 1;
        goto LAB_001000cc;
      }
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x7e,"pkcs7_bio_add_digest");
      ERR_set_error(0x21,0x80020,0);
      EVP_MD_free(pEVar3);
    }
  }
  BIO_free(bp);
  uVar1 = 0;
LAB_001000cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int pkcs7_decrypt_rinfo(undefined8 *param_1,int *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  void *local_50;
  int local_48 [2];
  long local_40;
  
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  uVar2 = ossl_pkcs7_ctx_get0_propq(uVar3);
  uVar3 = ossl_pkcs7_ctx_get0_libctx(uVar3);
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar3,param_4,uVar2);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_decrypt_init(ctx);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_is_a(param_4,&_LC1);
      if (iVar1 != 0) {
        EVP_PKEY_CTX_ctrl_str(ctx,"rsa_pkcs1_implicit_rejection","0");
      }
      iVar1 = evp_pkey_decrypt_alloc
                        (ctx,&local_50,local_48,param_5,
                         *(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                         (long)**(int **)(param_3 + 0x18));
      if (iVar1 < 1) {
        EVP_PKEY_CTX_free(ctx);
        if (iVar1 == 0) {
          CRYPTO_free(local_50);
        }
      }
      else {
        iVar1 = 1;
        CRYPTO_clear_free(*param_1,(long)*param_2,"crypto/pkcs7/pk7_doit.c",0xde);
        *param_1 = local_50;
        *param_2 = local_48[0];
        EVP_PKEY_CTX_free(ctx);
      }
      goto LAB_001002de;
    }
    EVP_PKEY_CTX_free(ctx);
  }
  iVar1 = -1;
LAB_001002de:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * PKCS7_find_digest(long *param_1,BIO *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  BIO *bp;
  
  while( true ) {
    bp = BIO_find_type(param_2,0x208);
    if (bp == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x2d3,"PKCS7_find_digest");
      ERR_set_error(0x21,0x6c,0);
      return (BIO *)0x0;
    }
    BIO_ctrl(bp,0x78,0,param_1);
    if (*param_1 == 0) break;
    uVar2 = EVP_MD_CTX_get0_md();
    iVar1 = EVP_MD_get_type(uVar2);
    if (iVar1 == param_3) {
      return bp;
    }
    param_2 = BIO_next(bp);
  }
  ERR_new();
  ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x2d8,"PKCS7_find_digest");
  ERR_set_error(0x21,0xc0103,0);
  return (BIO *)0x0;
}



undefined8 add_attribute(long *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *o;
  X509_ATTRIBUTE *pXVar3;
  X509_ATTRIBUTE *a;
  long lVar4;
  int iVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  iVar1 = OPENSSL_sk_num(lVar4);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      pXVar3 = (X509_ATTRIBUTE *)OPENSSL_sk_value(*param_1,iVar5);
      o = X509_ATTRIBUTE_get0_object(pXVar3);
      iVar2 = OBJ_obj2nid(o);
      if (iVar2 == param_2) goto LAB_00100498;
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  iVar2 = OPENSSL_sk_push(*param_1,0);
  if (iVar2 != 0) {
LAB_00100498:
    pXVar3 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
    if (pXVar3 != (X509_ATTRIBUTE *)0x0) {
      a = (X509_ATTRIBUTE *)OPENSSL_sk_value(*param_1,iVar5);
      X509_ATTRIBUTE_free(a);
      OPENSSL_sk_set(*param_1,iVar5,pXVar3);
      return 1;
    }
    if (iVar5 == iVar1) {
      OPENSSL_sk_pop(*param_1);
      return 0;
    }
  }
  return 0;
}



bool PKCS7_type_is_other(long param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x18));
  return 5 < iVar1 - 0x15U;
}



int * PKCS7_get_octet_string(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    return *(int **)(param_1 + 0x20);
  }
  iVar1 = PKCS7_type_is_other(param_1);
  piVar2 = (int *)0x0;
  if ((iVar1 != 0) && (piVar2 = *(int **)(param_1 + 0x20), piVar2 != (int *)0x0)) {
    if (*piVar2 == 4) {
      return *(int **)(piVar2 + 2);
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



ASN1_OCTET_STRING * pkcs7_get1_data(long param_1)

{
  int *piVar1;
  int iVar2;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  uchar *local_30;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = (ASN1_OCTET_STRING *)PKCS7_get_octet_string();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    iVar2 = PKCS7_type_is_other(param_1);
    if ((((iVar2 != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
        (*piVar1 == 0x10)) &&
       ((piVar1 = *(int **)(piVar1 + 2), piVar1 != (int *)0x0 && (0 < *piVar1)))) {
      local_30 = *(uchar **)(piVar1 + 2);
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) {
        iVar2 = ASN1_get_object(&local_30,(long *)local_28,&local_38,&local_34,
                                (long)**(int **)(*(long *)(param_1 + 0x20) + 8));
        if (((iVar2 == 0x20) && (local_38 == 0x10)) &&
           (iVar2 = ASN1_OCTET_STRING_set(str,local_30,local_28[0]), iVar2 != 0)) goto LAB_00100643;
        ASN1_OCTET_STRING_free(str);
      }
    }
  }
  else {
    str = ASN1_OCTET_STRING_dup(a);
    if (str != (ASN1_OCTET_STRING *)0x0) {
      if ((a->flags & 0x10) != 0) {
        ASN1_STRING_set0(str,(void *)0x0,0);
      }
      goto LAB_00100643;
    }
  }
  str = (ASN1_OCTET_STRING *)0x0;
LAB_00100643:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return str;
}



BIO * PKCS7_dataInit(PKCS7 *p7,BIO *bio)

{
  PKCS7_ENC_CONTENT *pPVar1;
  PKCS7_SIGN_ENVELOPE *pPVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BIO_METHOD *pBVar10;
  BIO *pBVar11;
  ASN1_OBJECT *pAVar12;
  EVP_CIPHER *pEVar13;
  EVP_PKEY_CTX *ctx;
  uchar *puVar14;
  long lVar15;
  long lVar16;
  ASN1_TYPE *type;
  BIO *b;
  stack_st_X509_ALGOR *psVar17;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING *local_f8;
  BIO *local_f0;
  X509_ALGOR *local_d8;
  stack_st_PKCS7_RECIP_INFO *local_d0;
  BIO *local_b0;
  EVP_CIPHER_CTX *local_a8;
  int local_a0 [2];
  uchar local_98 [16];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (BIO *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0xfc,"PKCS7_dataInit");
    ERR_set_error(0x21,0x8f,0);
    goto LAB_00100aca;
  }
  uVar6 = ossl_pkcs7_get0_ctx(p7);
  uVar7 = ossl_pkcs7_ctx_get0_libctx(uVar6);
  uVar8 = ossl_pkcs7_ctx_get0_propq(uVar6);
  if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x10e,"PKCS7_dataInit");
    ERR_set_error(0x21,0x7a,0);
    goto LAB_00100aca;
  }
  iVar3 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  switch(iVar3) {
  case 0x15:
    local_f8 = (ASN1_OCTET_STRING *)0x0;
    psVar17 = (stack_st_X509_ALGOR *)0x0;
    cipher = (EVP_CIPHER *)0x0;
    puVar14 = (uchar *)0x0;
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    break;
  case 0x16:
    cipher = (EVP_CIPHER *)0x0;
    puVar14 = (uchar *)0x0;
    psVar17 = ((p7->d).sign)->md_algs;
    local_f8 = (ASN1_OCTET_STRING *)pkcs7_get1_data(((p7->d).sign)->contents);
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    break;
  case 0x17:
    psVar17 = (stack_st_X509_ALGOR *)0x0;
    pEVar13 = (EVP_CIPHER *)0x0;
    puVar14 = (uchar *)0x0;
    local_f8 = (ASN1_OCTET_STRING *)0x0;
    local_d0 = ((p7->d).enveloped)->recipientinfo;
    pPVar1 = ((p7->d).enveloped)->enc_data;
    cipher = pPVar1->cipher;
    local_d8 = pPVar1->algorithm;
    if (cipher != (EVP_CIPHER *)0x0) break;
    ERR_new();
    b = (BIO *)0x0;
    pBVar11 = (BIO *)0x0;
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x129,"PKCS7_dataInit");
    ERR_set_error(0x21,0x74,0);
    goto LAB_00100aa8;
  case 0x18:
    puVar14 = (uchar *)0x0;
    local_f8 = (ASN1_OCTET_STRING *)0x0;
    pPVar2 = (p7->d).signed_and_enveloped;
    local_d0 = pPVar2->recipientinfo;
    psVar17 = pPVar2->md_algs;
    cipher = pPVar2->enc_data->cipher;
    local_d8 = pPVar2->enc_data->algorithm;
    if (cipher == (EVP_CIPHER *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x120,"PKCS7_dataInit");
      ERR_set_error(0x21,0x74,0);
      goto LAB_00100cf5;
    }
    break;
  case 0x19:
    psVar17 = (stack_st_X509_ALGOR *)0x0;
    cipher = (EVP_CIPHER *)0x0;
    puVar14 = ((p7->d).data)->data;
    local_f8 = (ASN1_OCTET_STRING *)pkcs7_get1_data(((p7->d).data)->flags);
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    break;
  default:
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x134,"PKCS7_dataInit");
    ERR_set_error(0x21,0x70,0);
LAB_00100cf5:
    local_f8 = (ASN1_OCTET_STRING *)0x0;
    b = (BIO *)0x0;
    pEVar13 = (EVP_CIPHER *)0x0;
    pBVar11 = (BIO *)0x0;
    goto LAB_00100aa8;
  }
  for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar17), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    uVar9 = OPENSSL_sk_value(psVar17,iVar3);
    iVar4 = pkcs7_bio_add_digest(&local_b0,uVar9,uVar6);
    b = local_b0;
    if (iVar4 == 0) goto LAB_00100c75;
  }
  if ((puVar14 != (uchar *)0x0) &&
     (iVar3 = pkcs7_bio_add_digest(&local_b0,puVar14,uVar6), b = local_b0, iVar3 == 0))
  goto LAB_00100c75;
  b = local_b0;
  if (cipher == (EVP_CIPHER *)0x0) {
    pBVar11 = local_b0;
    local_f0 = bio;
    if (bio == (BIO *)0x0) goto LAB_00100df4;
    goto LAB_00100cac;
  }
  pBVar10 = BIO_f_cipher();
  pBVar11 = BIO_new(pBVar10);
  if (pBVar11 == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x146,"PKCS7_dataInit");
    ERR_set_error(0x21,0x80020,0);
LAB_00100aa2:
    pEVar13 = (EVP_CIPHER *)0x0;
  }
  else {
    BIO_ctrl(pBVar11,0x81,0,&local_a8);
    iVar3 = EVP_CIPHER_get_key_length(cipher);
    iVar4 = EVP_CIPHER_get_iv_length(cipher);
    iVar5 = EVP_CIPHER_get_type(cipher);
    pAVar12 = OBJ_nid2obj(iVar5);
    local_d8->algorithm = pAVar12;
    if ((0 < iVar4) && (iVar5 = RAND_bytes_ex(uVar7,local_98,(long)iVar4), iVar5 < 1))
    goto LAB_00100aa2;
    ERR_set_mark();
    uVar6 = EVP_CIPHER_get0_name(cipher);
    pEVar13 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,uVar6,uVar8);
    ERR_pop_to_mark();
    if (pEVar13 != (EVP_CIPHER *)0x0) {
      cipher = pEVar13;
    }
    iVar5 = EVP_CipherInit_ex(local_a8,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
    if (0 < iVar5) {
      EVP_CIPHER_free(pEVar13);
      iVar5 = EVP_CIPHER_CTX_rand_key(local_a8,local_88);
      if ((iVar5 < 1) ||
         (iVar5 = EVP_CipherInit_ex(local_a8,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,local_98,1),
         iVar5 < 1)) goto LAB_00100aa2;
      if (0 < iVar4) {
        type = local_d8->parameter;
        if (type == (ASN1_TYPE *)0x0) {
          type = ASN1_TYPE_new();
          local_d8->parameter = type;
          if (type == (ASN1_TYPE *)0x0) goto LAB_00100aa2;
        }
        iVar4 = EVP_CIPHER_param_to_asn1(local_a8,type);
        if (iVar4 < 1) goto LAB_00100aa2;
      }
      for (iVar4 = 0; iVar5 = OPENSSL_sk_num(local_d0), iVar4 < iVar5; iVar4 = iVar4 + 1) {
        lVar15 = OPENSSL_sk_value(local_d0,iVar4);
        uVar6 = *(undefined8 *)(lVar15 + 0x28);
        lVar16 = X509_get0_pubkey(*(undefined8 *)(lVar15 + 0x20));
        if (lVar16 == 0) goto LAB_00100aa2;
        uVar7 = ossl_pkcs7_ctx_get0_propq(uVar6);
        uVar6 = ossl_pkcs7_ctx_get0_libctx(uVar6);
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,lVar16,uVar7);
        if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00100aa2;
        iVar5 = EVP_PKEY_encrypt_init(ctx);
        if (iVar5 < 1) {
LAB_00100c80:
          EVP_PKEY_CTX_free(ctx);
          CRYPTO_free((void *)0x0);
          goto LAB_00100aa2;
        }
        iVar5 = EVP_PKEY_encrypt(ctx,(uchar *)0x0,(size_t *)local_a0,local_88,(long)iVar3);
        if ((iVar5 < 1) ||
           (puVar14 = (uchar *)CRYPTO_malloc(local_a0[0],"crypto/pkcs7/pk7_doit.c",0xab),
           puVar14 == (uchar *)0x0)) goto LAB_00100c80;
        iVar5 = EVP_PKEY_encrypt(ctx,puVar14,(size_t *)local_a0,local_88,(long)iVar3);
        if (iVar5 < 1) {
          EVP_PKEY_CTX_free(ctx);
          CRYPTO_free(puVar14);
          goto LAB_00100aa2;
        }
        ASN1_STRING_set0(*(ASN1_STRING **)(lVar15 + 0x18),puVar14,local_a0[0]);
        EVP_PKEY_CTX_free(ctx);
        CRYPTO_free((void *)0x0);
      }
      OPENSSL_cleanse(local_88,(long)iVar3);
      if (b == (BIO *)0x0) {
        b = pBVar11;
        local_f0 = bio;
        local_b0 = pBVar11;
        if (bio == (BIO *)0x0) goto LAB_00100df4;
LAB_00100d20:
        BIO_push(pBVar11,local_f0);
        local_f0 = pBVar11;
      }
      else {
        BIO_push(b,pBVar11);
        pBVar11 = b;
        local_f0 = bio;
        if (bio != (BIO *)0x0) goto LAB_00100d20;
LAB_00100df4:
        iVar3 = OBJ_obj2nid(p7->type);
        pBVar11 = b;
        if ((iVar3 != 0x16) || (lVar15 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar15 == 0)) {
          if ((local_f8 == (ASN1_OCTET_STRING *)0x0) || (local_f8->length < 1)) {
            pBVar10 = BIO_s_mem();
            local_f0 = BIO_new(pBVar10);
            if (local_f0 != (BIO *)0x0) {
              BIO_ctrl(local_f0,0x82,0,(void *)0x0);
              goto LAB_00100cac;
            }
          }
          else {
            pBVar10 = BIO_s_mem();
            local_f0 = BIO_new(pBVar10);
            if (local_f0 != (BIO *)0x0) {
              BIO_ctrl(local_f0,0x82,0,(void *)0x0);
              iVar3 = BIO_write(local_f0,local_f8->data,local_f8->length);
              if (iVar3 == local_f8->length) goto LAB_00100cac;
              BIO_free_all(local_f0);
            }
          }
LAB_00100c75:
          pEVar13 = (EVP_CIPHER *)0x0;
          pBVar11 = (BIO *)0x0;
          goto LAB_00100aa8;
        }
        pBVar10 = BIO_s_null();
        local_f0 = BIO_new(pBVar10);
        if (local_f0 == (BIO *)0x0) goto LAB_00100c75;
LAB_00100cac:
        if (pBVar11 != (BIO *)0x0) goto LAB_00100d20;
      }
      ASN1_OCTET_STRING_free(local_f8);
      goto LAB_00100acc;
    }
  }
LAB_00100aa8:
  ASN1_OCTET_STRING_free(local_f8);
  EVP_CIPHER_free(pEVar13);
  BIO_free_all(b);
  BIO_free_all(pBVar11);
LAB_00100aca:
  local_f0 = (BIO *)0x0;
LAB_00100acc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f0;
}



BIO * PKCS7_dataDecode(PKCS7 *p7,EVP_PKEY *pkey,BIO *in_bio,X509 *pcert)

{
  PKCS7_SIGN_ENVELOPE *pPVar1;
  PKCS7_ENC_CONTENT *pPVar2;
  ASN1_INTEGER *y;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  BIO_METHOD *pBVar10;
  BIO *bp;
  EVP_MD *pEVar11;
  long lVar12;
  EVP_MD *parg;
  BIO *bp_00;
  X509_NAME *b;
  ASN1_INTEGER *x;
  uchar *puVar13;
  BIO *b_00;
  stack_st_PKCS7_RECIP_INFO *psVar14;
  uchar *key;
  long lVar15;
  long in_FS_OFFSET;
  stack_st_X509_ALGOR *local_f8;
  uchar *local_e0;
  BIO *local_d8;
  BIO *local_d0;
  ASN1_OCTET_STRING *local_c0;
  EVP_CIPHER *local_b8;
  X509_ALGOR *local_a8;
  int local_8c;
  EVP_CIPHER_CTX *local_88;
  uchar *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_88 = (EVP_CIPHER_CTX *)0x0;
  local_80 = (uchar *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x1cb,"PKCS7_dataDecode");
    ERR_set_error(0x21,0x8f,0);
  }
  else {
    uVar6 = ossl_pkcs7_get0_ctx();
    uVar7 = ossl_pkcs7_ctx_get0_libctx(uVar6);
    uVar8 = ossl_pkcs7_ctx_get0_propq(uVar6);
    if ((p7->d).ptr == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x1d4,"PKCS7_dataDecode");
      ERR_set_error(0x21,0x7a,0);
    }
    else {
      iVar3 = OBJ_obj2nid(p7->type);
      p7->state = 0;
      if (iVar3 == 0x17) {
        psVar14 = ((p7->d).enveloped)->recipientinfo;
        pPVar2 = ((p7->d).enveloped)->enc_data;
        local_a8 = pPVar2->algorithm;
        local_c0 = pPVar2->enc_data;
        OBJ_obj2txt(local_78,0x32,local_a8->algorithm,0);
        ERR_set_mark();
        local_b8 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,local_78,uVar8);
        local_d0 = (BIO *)local_b8;
        if ((local_b8 == (EVP_CIPHER *)0x0) &&
           (local_d0 = (BIO *)EVP_get_cipherbyname(local_78), local_d0 == (BIO *)0x0)) {
          ERR_clear_last_mark();
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x211,"PKCS7_dataDecode");
          ERR_set_error(0x21,0x6f,0);
          goto LAB_001014d3;
        }
        ERR_pop_to_mark();
        if (local_c0 == (ASN1_OCTET_STRING *)0x0 && in_bio == (BIO *)0x0) {
LAB_00101650:
          lVar15 = 0;
          key = (uchar *)0x0;
          lVar12 = 0;
          ERR_new();
          bp = (BIO *)0x0;
          b_00 = (BIO *)0x0;
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x21d,"PKCS7_dataDecode");
          ERR_set_error(0x21,0x7a,0);
          local_e0 = (uchar *)0x0;
          local_d0 = (BIO *)0x0;
        }
        else {
          b_00 = (BIO *)0x0;
LAB_00101277:
          pBVar10 = BIO_f_cipher();
          bp_00 = BIO_new(pBVar10);
          if (bp_00 == (BIO *)0x0) {
            key = (uchar *)0x0;
            bp = (BIO *)0x0;
            lVar15 = 0;
            ERR_new();
            lVar12 = 0;
            ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x24a,"PKCS7_dataDecode");
            ERR_set_error(0x21,0x80020,0);
            local_e0 = (uchar *)0x0;
            local_d0 = bp_00;
          }
          else {
            iVar3 = 0;
            if (pcert == (X509 *)0x0) {
              for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar14), iVar3 < iVar4; iVar3 = iVar3 + 1) {
                lVar12 = OPENSSL_sk_value(psVar14,iVar3);
                *(undefined8 *)(lVar12 + 0x28) = uVar6;
                EVP_CIPHER_get_key_length(local_d0);
                iVar4 = pkcs7_decrypt_rinfo(&local_80,&local_8c,lVar12,pkey);
                if (iVar4 < 0) {
                  lVar12 = (long)local_8c;
                  bp = (BIO *)0x0;
                  lVar15 = 0;
                  local_e0 = (uchar *)0x0;
                  key = local_80;
                  local_d0 = bp_00;
                  goto LAB_00101500;
                }
                ERR_clear_error();
              }
LAB_00101341:
              local_88 = (EVP_CIPHER_CTX *)0x0;
              BIO_ctrl(bp_00,0x81,0,&local_88);
              iVar3 = EVP_CipherInit_ex(local_88,(EVP_CIPHER *)local_d0,(ENGINE *)0x0,(uchar *)0x0,
                                        (uchar *)0x0,0);
              key = local_80;
              if (((iVar3 < 1) ||
                  (iVar3 = EVP_CIPHER_asn1_to_param(local_88,local_a8->parameter), iVar3 < 1)) ||
                 (iVar3 = EVP_CIPHER_CTX_get_key_length(local_88), iVar3 < 1)) {
                local_e0 = (uchar *)0x0;
                lVar12 = (long)local_8c;
                lVar15 = 0;
                bp = (BIO *)0x0;
                local_d0 = bp_00;
              }
              else {
                lVar15 = (long)iVar3;
                puVar13 = (uchar *)CRYPTO_malloc(iVar3,"crypto/pkcs7/pk7_doit.c",0x287);
                local_e0 = puVar13;
                if ((puVar13 == (uchar *)0x0) ||
                   (iVar4 = EVP_CIPHER_CTX_rand_key(local_88,puVar13), iVar4 < 1)) {
                  lVar12 = (long)local_8c;
                  bp = (BIO *)0x0;
                  local_d0 = bp_00;
                }
                else {
                  if (key == (uchar *)0x0) {
                    local_e0 = (uchar *)0x0;
                    key = puVar13;
                    lVar12 = lVar15;
                    local_8c = iVar3;
                    local_80 = puVar13;
                  }
                  else {
                    lVar12 = (long)local_8c;
                  }
                  iVar4 = local_8c;
                  puVar13 = local_e0;
                  iVar5 = EVP_CIPHER_CTX_get_key_length(local_88);
                  if ((iVar5 != iVar4) &&
                     (iVar4 = EVP_CIPHER_CTX_set_key_length(local_88,iVar4), iVar4 < 1)) {
                    CRYPTO_clear_free(key,lVar12,"crypto/pkcs7/pk7_doit.c",0x29a);
                    local_80 = local_e0;
                    local_e0 = (uchar *)0x0;
                    key = puVar13;
                    lVar12 = lVar15;
                    local_8c = iVar3;
                  }
                  ERR_clear_error();
                  iVar4 = EVP_CipherInit_ex(local_88,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                                            (uchar *)0x0,0);
                  if (0 < iVar4) {
                    CRYPTO_clear_free(key,lVar12,"crypto/pkcs7/pk7_doit.c",0x2a5);
                    local_80 = (uchar *)0x0;
                    CRYPTO_clear_free(local_e0,lVar15,"crypto/pkcs7/pk7_doit.c");
                    if (b_00 != (BIO *)0x0) {
                      BIO_push(b_00,bp_00);
                      bp_00 = b_00;
                    }
                    goto LAB_001016e4;
                  }
                  bp = (BIO *)0x0;
                  local_d0 = bp_00;
                }
              }
            }
            else {
              for (; iVar4 = OPENSSL_sk_num(psVar14), iVar3 < iVar4; iVar3 = iVar3 + 1) {
                lVar12 = OPENSSL_sk_value(psVar14,iVar3);
                b = X509_get_issuer_name(pcert);
                iVar4 = X509_NAME_cmp((X509_NAME *)**(undefined8 **)(lVar12 + 8),b);
                if (iVar4 == 0) {
                  y = *(ASN1_INTEGER **)(*(long *)(lVar12 + 8) + 8);
                  x = (ASN1_INTEGER *)X509_get0_serialNumber(pcert);
                  iVar4 = ASN1_INTEGER_cmp(x,y);
                  if (iVar4 == 0) {
                    *(undefined8 *)(lVar12 + 0x28) = uVar6;
                    iVar3 = pkcs7_decrypt_rinfo(&local_80,&local_8c,lVar12,pkey);
                    if (iVar3 < 0) {
                      lVar12 = (long)local_8c;
                      lVar15 = 0;
                      bp = (BIO *)0x0;
                      local_e0 = (uchar *)0x0;
                      key = local_80;
                      local_d0 = bp_00;
                      goto LAB_00101500;
                    }
                    ERR_clear_error();
                    goto LAB_00101341;
                  }
                }
              }
              lVar15 = 0;
              lVar12 = 0;
              ERR_new();
              bp = (BIO *)0x0;
              ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x260,"PKCS7_dataDecode");
              ERR_set_error(0x21,0x73,0);
              local_e0 = (uchar *)0x0;
              key = (uchar *)0x0;
              local_d0 = bp_00;
            }
          }
        }
      }
      else {
        if (iVar3 == 0x18) {
          pPVar1 = (p7->d).signed_and_enveloped;
          local_f8 = pPVar1->md_algs;
          psVar14 = pPVar1->recipientinfo;
          local_c0 = pPVar1->enc_data->enc_data;
          local_a8 = pPVar1->enc_data->algorithm;
          OBJ_obj2txt(local_78,0x32,local_a8->algorithm,0);
          ERR_set_mark();
          local_b8 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,local_78,uVar8);
          local_d0 = (BIO *)local_b8;
          if ((local_b8 == (EVP_CIPHER *)0x0) &&
             (local_d0 = (BIO *)EVP_get_cipherbyname(local_78), local_d0 == (BIO *)0x0)) {
            key = (uchar *)0x0;
            bp = (BIO *)0x0;
            b_00 = (BIO *)0x0;
            ERR_clear_last_mark();
            lVar15 = 0;
            lVar12 = 0;
            ERR_new();
            ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x1fc,"PKCS7_dataDecode");
            ERR_set_error(0x21,0x6f,0);
            local_e0 = (uchar *)0x0;
            local_d0 = (BIO *)0x0;
            goto LAB_00101500;
          }
          ERR_pop_to_mark();
LAB_001010c7:
          if (local_c0 == (ASN1_OCTET_STRING *)0x0 && in_bio == (BIO *)0x0) goto LAB_00101650;
          b_00 = (BIO *)0x0;
          if (local_f8 != (stack_st_X509_ALGOR *)0x0) {
            for (iVar3 = 0; iVar4 = OPENSSL_sk_num(local_f8), iVar3 < iVar4; iVar3 = iVar3 + 1) {
              puVar9 = (undefined8 *)OPENSSL_sk_value(local_f8,iVar3);
              pBVar10 = BIO_f_md();
              bp = BIO_new(pBVar10);
              if (bp == (BIO *)0x0) {
                lVar15 = 0;
                lVar12 = 0;
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x226,"PKCS7_dataDecode");
                ERR_set_error(0x21,0x80020,0);
                local_e0 = (uchar *)0x0;
                local_d0 = (BIO *)0x0;
                key = (uchar *)0x0;
                goto LAB_00101500;
              }
              OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)*puVar9,0);
              ERR_set_mark();
              pEVar11 = (EVP_MD *)EVP_MD_fetch(uVar7,local_78,uVar8);
              parg = pEVar11;
              if ((pEVar11 == (EVP_MD *)0x0) &&
                 (parg = EVP_get_digestbyname(local_78), parg == (EVP_MD *)0x0)) {
                ERR_clear_last_mark();
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x235,"PKCS7_dataDecode");
                ERR_set_error(0x21,0x6d,0);
LAB_001017a3:
                local_e0 = (uchar *)0x0;
                lVar15 = 0;
                lVar12 = 0;
                local_d0 = (BIO *)0x0;
                key = (uchar *)0x0;
                goto LAB_00101500;
              }
              ERR_pop_to_mark();
              lVar12 = BIO_ctrl(bp,0x6f,0,parg);
              if (lVar12 < 1) {
                EVP_MD_free(pEVar11);
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x23c,"PKCS7_dataDecode");
                ERR_set_error(0x21,0x80020,0);
                goto LAB_001017a3;
              }
              EVP_MD_free(pEVar11);
              if (b_00 != (BIO *)0x0) {
                BIO_push(b_00,bp);
                bp = b_00;
              }
              b_00 = bp;
            }
          }
          if (local_d0 != (BIO *)0x0) goto LAB_00101277;
          iVar3 = 0;
          bp_00 = b_00;
LAB_001016e4:
          local_d8 = in_bio;
          if (in_bio == (BIO *)0x0) {
            if (local_c0->length < 1) {
              pBVar10 = BIO_s_mem();
              local_d8 = BIO_new(pBVar10);
              if (local_d8 == (BIO *)0x0) goto LAB_00101826;
              BIO_ctrl(local_d8,0x82,0,(void *)0x0);
            }
            else {
              local_d8 = BIO_new_mem_buf(local_c0->data,local_c0->length);
              if (local_d8 == (BIO *)0x0) {
LAB_00101826:
                lVar15 = (long)iVar3;
                lVar12 = (long)local_8c;
                bp = (BIO *)0x0;
                local_e0 = (uchar *)0x0;
                local_d0 = (BIO *)0x0;
                b_00 = bp_00;
                key = local_80;
                goto LAB_00101500;
              }
            }
          }
          BIO_push(bp_00,local_d8);
          EVP_CIPHER_free(local_b8);
          goto LAB_00101555;
        }
        if (iVar3 == 0x16) {
          local_c0 = (ASN1_OCTET_STRING *)PKCS7_get_octet_string(((p7->d).sign)->contents);
          iVar3 = OBJ_obj2nid(p7->type);
          if (((iVar3 == 0x16) && (lVar12 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar12 != 0)) ||
             (local_c0 != (ASN1_OCTET_STRING *)0x0)) {
            local_a8 = (X509_ALGOR *)0x0;
            psVar14 = (stack_st_PKCS7_RECIP_INFO *)0x0;
            local_d0 = (BIO *)0x0;
            local_b8 = (EVP_CIPHER *)0x0;
            local_f8 = (stack_st_X509_ALGOR *)((p7->d).data)->data;
            goto LAB_001010c7;
          }
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x1e5,"PKCS7_dataDecode");
          ERR_set_error(0x21,0x9b,0);
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x217,"PKCS7_dataDecode");
          ERR_set_error(0x21,0x70,0);
        }
LAB_001014d3:
        lVar15 = 0;
        key = (uchar *)0x0;
        lVar12 = 0;
        bp = (BIO *)0x0;
        local_e0 = (uchar *)0x0;
        b_00 = (BIO *)0x0;
        local_b8 = (EVP_CIPHER *)0x0;
        local_d0 = (BIO *)0x0;
      }
LAB_00101500:
      EVP_CIPHER_free(local_b8);
      CRYPTO_clear_free(key,lVar12,"crypto/pkcs7/pk7_doit.c",0x2c5);
      CRYPTO_clear_free(local_e0,lVar15,"crypto/pkcs7/pk7_doit.c",0x2c6);
      BIO_free_all(b_00);
      BIO_free_all(bp);
      BIO_free_all(local_d0);
      BIO_free_all((BIO *)0x0);
    }
  }
  bp_00 = (BIO *)0x0;
LAB_00101555:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bp_00;
}



int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si)

{
  ASN1_INTEGER *pAVar1;
  EVP_PKEY *pEVar2;
  int iVar3;
  char *name;
  EVP_MD *pEVar4;
  EVP_MD_CTX *ctx;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ASN1_ITEM *it;
  uchar *ptr;
  long in_FS_OFFSET;
  undefined8 local_58;
  uchar *local_50;
  int local_48 [2];
  long local_40;
  
  pAVar1 = si[1].version;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (uchar *)0x0;
  iVar3 = OBJ_obj2nid(si->digest_alg->algorithm);
  name = OBJ_nid2sn(iVar3);
  pEVar4 = EVP_get_digestbyname(name);
  if (pEVar4 != (EVP_MD *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x3c2,"PKCS7_SIGNER_INFO_sign");
      ERR_set_error(0x21,0x80006,0);
      ptr = local_50;
    }
    else {
      pEVar2 = si->pkey;
      uVar5 = ossl_pkcs7_ctx_get0_propq(pAVar1);
      uVar6 = ossl_pkcs7_ctx_get0_libctx(pAVar1);
      uVar7 = EVP_MD_get0_name(pEVar4);
      iVar3 = EVP_DigestSignInit_ex(ctx,&local_58,uVar7,uVar6,uVar5,pEVar2);
      ptr = local_50;
      if (0 < iVar3) {
        it = (ASN1_ITEM *)PKCS7_ATTR_SIGN_it();
        iVar3 = ASN1_item_i2d((ASN1_VALUE *)si->auth_attr,&local_50,it);
        ptr = local_50;
        if (-1 < iVar3) {
          if (local_50 == (uchar *)0x0) {
LAB_00101ccf:
            ptr = (uchar *)0x0;
          }
          else {
            iVar3 = EVP_DigestSignUpdate(ctx,local_50,(long)iVar3);
            ptr = local_50;
            if (0 < iVar3) {
              CRYPTO_free(local_50);
              local_50 = (uchar *)0x0;
              iVar3 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_48);
              ptr = local_50;
              if (0 < iVar3) {
                local_50 = (uchar *)CRYPTO_malloc(local_48[0],"crypto/pkcs7/pk7_doit.c",0x3d6);
                if (local_50 == (uchar *)0x0) goto LAB_00101ccf;
                iVar3 = EVP_DigestSignFinal(ctx,local_50,(size_t *)local_48);
                ptr = local_50;
                if (0 < iVar3) {
                  EVP_MD_CTX_free(ctx);
                  ASN1_STRING_set0(si->enc_digest,local_50,local_48[0]);
                  iVar3 = 1;
                  goto LAB_00101ca3;
                }
              }
            }
          }
        }
      }
    }
    CRYPTO_free(ptr);
    EVP_MD_CTX_free(ctx);
  }
  iVar3 = 0;
LAB_00101ca3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



PKCS7_ISSUER_AND_SERIAL * PKCS7_get_issuer_and_serial(PKCS7 *p7,int idx)

{
  stack_st_PKCS7_RECIP_INFO *psVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if (((iVar2 == 0x18) && ((p7->d).signed_and_enveloped != (PKCS7_SIGN_ENVELOPE *)0x0)) &&
     (psVar1 = ((p7->d).signed_and_enveloped)->recipientinfo,
     psVar1 != (stack_st_PKCS7_RECIP_INFO *)0x0)) {
    iVar2 = OPENSSL_sk_num(psVar1);
    if (idx < iVar2) {
      lVar3 = OPENSSL_sk_value(psVar1,idx);
      return *(PKCS7_ISSUER_AND_SERIAL **)(lVar3 + 8);
    }
  }
  return (PKCS7_ISSUER_AND_SERIAL *)0x0;
}



ASN1_TYPE * PKCS7_get_signed_attribute(PKCS7_SIGNER_INFO *si,int nid)

{
  stack_st_X509_ATTRIBUTE *x;
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  
  x = si->auth_attr;
  loc = X509at_get_attr_by_NID(x,nid,-1);
  if (-1 < loc) {
    attr = X509at_get_attr(x,loc);
    pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
    return pAVar1;
  }
  return (ASN1_TYPE *)0x0;
}



int PKCS7_dataFinal(PKCS7 *p7,BIO *bio)

{
  ASN1_OBJECT *o;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_MD_CTX *out;
  ASN1_TYPE *pAVar4;
  PKCS7_SIGNER_INFO *si;
  void *ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  BIO *bp;
  char *pcVar8;
  stack_st_PKCS7_SIGNER_INFO *psVar9;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING *local_b0;
  EVP_MD_CTX *local_98;
  uint local_90;
  undefined4 uStack_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x30d,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x8f,0);
    goto LAB_001020bf;
  }
  uVar3 = ossl_pkcs7_get0_ctx();
  if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x314,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x7a,0);
    goto LAB_001020bf;
  }
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x31a,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x80006,0);
    goto LAB_001020bf;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  switch(iVar1) {
  case 0x15:
    local_b0 = (p7->d).data;
    goto LAB_00102089;
  case 0x16:
    psVar9 = ((p7->d).sign)->signer_info;
    local_b0 = (ASN1_OCTET_STRING *)PKCS7_get_octet_string(((p7->d).sign)->contents);
    iVar1 = OBJ_obj2nid(((p7->d).sign)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(local_b0);
      local_b0 = (ASN1_OCTET_STRING *)0x0;
      (((p7->d).sign)->contents->d).ptr = (char *)0x0;
    }
    break;
  case 0x17:
    local_b0 = ((p7->d).enveloped)->enc_data->enc_data;
    if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
      local_b0 = ASN1_OCTET_STRING_new();
      if (local_b0 != (ASN1_OCTET_STRING *)0x0) {
        o = p7->type;
        ((p7->d).enveloped)->enc_data->enc_data = local_b0;
        iVar1 = OBJ_obj2nid(o);
        if (iVar1 == 0x16) goto LAB_00102184;
        goto LAB_001020a3;
      }
      ERR_new();
      uVar3 = 0x338;
LAB_001024d9:
      iVar1 = 0;
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_dataFinal");
      ERR_set_error(0x21,0x8000d,0);
      goto LAB_001020b7;
    }
    iVar1 = OBJ_obj2nid(p7->type);
    if (iVar1 != 0x16) goto LAB_001020a3;
LAB_00102184:
    lVar7 = PKCS7_ctrl(p7,2,0,(char *)0x0);
    if (lVar7 == 0) goto LAB_001020a3;
    goto LAB_001020b2;
  case 0x18:
    psVar9 = ((p7->d).signed_and_enveloped)->signer_info;
    local_b0 = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
      local_b0 = ASN1_OCTET_STRING_new();
      if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
        ERR_new();
        uVar3 = 0x32c;
        goto LAB_001024d9;
      }
      ((p7->d).signed_and_enveloped)->enc_data->enc_data = local_b0;
    }
    break;
  case 0x19:
    local_b0 = (ASN1_OCTET_STRING *)PKCS7_get_octet_string(((p7->d).data)->flags);
    iVar1 = OBJ_obj2nid(((p7->d).digest)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(local_b0);
      local_b0 = (ASN1_OCTET_STRING *)0x0;
      (((p7->d).digest)->contents->d).ptr = (char *)0x0;
    }
    iVar1 = OBJ_obj2nid(((p7->d).digest)->md->algorithm);
    lVar7 = PKCS7_find_digest(&local_98,bio,iVar1);
    if (lVar7 != 0) {
      iVar1 = EVP_DigestFinal_ex(local_98,local_88,&local_90);
      if ((iVar1 != 0) &&
         (iVar1 = ASN1_OCTET_STRING_set(((p7->d).digest)->digest,local_88,local_90), iVar1 != 0))
      goto LAB_00102089;
    }
    goto LAB_00102073;
  default:
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x354,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x70,0);
    goto LAB_001020b7;
  }
  iVar1 = 0;
  if (psVar9 != (stack_st_PKCS7_SIGNER_INFO *)0x0) {
    for (; iVar2 = OPENSSL_sk_num(psVar9), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      si = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar9,iVar1);
      if (si->pkey != (EVP_PKEY *)0x0) {
        iVar2 = OBJ_obj2nid(si->digest_alg->algorithm);
        lVar7 = PKCS7_find_digest(&local_98,bio,iVar2);
        if ((lVar7 == 0) || (iVar2 = EVP_MD_CTX_copy_ex(out,local_98), iVar2 == 0))
        goto LAB_00102073;
        iVar2 = OPENSSL_sk_num(si->auth_attr);
        if (0 < iVar2) {
          pAVar4 = PKCS7_get_signed_attribute(si,0x34);
          if ((pAVar4 == (ASN1_TYPE *)0x0) &&
             (iVar2 = PKCS7_add0_attrib_signing_time(si,(ASN1_TIME *)0x0), iVar2 == 0)) {
            ERR_new();
            uVar3 = 0x2ea;
          }
          else {
            iVar2 = EVP_DigestFinal_ex(out,local_88,&local_90);
            if (iVar2 == 0) {
              ERR_new();
              pcVar8 = "do_pkcs7_signed_attrib";
              uVar3 = 0x2f1;
              goto LAB_001021b9;
            }
            iVar2 = PKCS7_add1_attrib_digest(si,local_88,local_90);
            if (iVar2 != 0) {
              iVar2 = PKCS7_SIGNER_INFO_sign(si);
              if (iVar2 != 0) goto LAB_00101ef8;
              goto LAB_00102073;
            }
            ERR_new();
            uVar3 = 0x2f5;
          }
          iVar1 = 0;
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",uVar3,"do_pkcs7_signed_attrib");
          ERR_set_error(0x21,0x80021,0);
          goto LAB_001020b7;
        }
        local_90 = EVP_PKEY_get_size(si->pkey);
        if ((local_90 == 0) ||
           (ptr = CRYPTO_malloc(local_90,"crypto/pkcs7/pk7_doit.c",0x37a), ptr == (void *)0x0))
        goto LAB_00102073;
        uVar5 = ossl_pkcs7_ctx_get0_propq(uVar3);
        uVar6 = ossl_pkcs7_ctx_get0_libctx(uVar3);
        iVar2 = EVP_SignFinal_ex(out,ptr,&local_90,si->pkey,uVar6,uVar5);
        if (iVar2 == 0) {
          CRYPTO_free(ptr);
          ERR_new();
          pcVar8 = "PKCS7_dataFinal";
          uVar3 = 0x381;
LAB_001021b9:
          iVar1 = 0;
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",uVar3,pcVar8);
          ERR_set_error(0x21,0x80006,0);
          goto LAB_001020b7;
        }
        ASN1_STRING_set0(si->enc_digest,ptr,local_90);
      }
LAB_00101ef8:
    }
  }
LAB_00102089:
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 == 0x16) && (lVar7 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar7 != 0)) {
LAB_001020b2:
    iVar1 = 1;
  }
  else {
    if (local_b0 != (ASN1_OCTET_STRING *)0x0) {
LAB_001020a3:
      if ((local_b0->flags & 0x10) == 0) {
        bp = BIO_find_type(bio,0x401);
        if (bp == (BIO *)0x0) {
          ERR_new();
          iVar1 = 0;
          ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x39f,"PKCS7_dataFinal");
          ERR_set_error(0x21,0x6b,0);
          goto LAB_001020b7;
        }
        lVar7 = BIO_ctrl(bp,3,0,&local_90);
        BIO_set_flags(bp,0x200);
        BIO_ctrl(bp,0x82,0,(void *)0x0);
        ASN1_STRING_set0(local_b0,(void *)CONCAT44(uStack_8c,local_90),(int)lVar7);
      }
      goto LAB_001020b2;
    }
LAB_00102073:
    iVar1 = 0;
  }
LAB_001020b7:
  EVP_MD_CTX_free(out);
LAB_001020bf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



ASN1_TYPE * PKCS7_get_attribute(PKCS7_SIGNER_INFO *si,int nid)

{
  stack_st_X509_ATTRIBUTE *x;
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  
  x = si->unauth_attr;
  loc = X509at_get_attr_by_NID(x,nid,-1);
  if (-1 < loc) {
    attr = X509at_get_attr(x,loc);
    pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
    return pAVar1;
  }
  return (ASN1_TYPE *)0x0;
}



ASN1_OCTET_STRING * PKCS7_digest_from_attributes(stack_st_X509_ATTRIBUTE *sk)

{
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  
  loc = X509at_get_attr_by_NID(sk,0x33,-1);
  if (-1 < loc) {
    attr = X509at_get_attr(sk,loc);
    pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
    if (pAVar1 != (ASN1_TYPE *)0x0) {
      return (ASN1_OCTET_STRING *)(pAVar1->value).ptr;
    }
  }
  return (ASN1_OCTET_STRING *)0x0;
}



int PKCS7_signatureVerify(BIO *bio,PKCS7 *p7,PKCS7_SIGNER_INFO *si,X509 *x509)

{
  ASN1_VALUE *val;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_MD_CTX *out;
  undefined8 uVar5;
  BIO *bp;
  long lVar6;
  ASN1_OCTET_STRING *pAVar7;
  char *pcVar8;
  EVP_MD *pEVar9;
  ASN1_ITEM *it;
  EVP_MD *type;
  long in_FS_OFFSET;
  int local_d0;
  uint local_9c;
  EVP_MD_CTX *local_98;
  uchar *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (uchar *)0x0;
  uVar3 = ossl_pkcs7_get0_ctx(p7);
  uVar4 = ossl_pkcs7_ctx_get0_libctx(uVar3);
  uVar3 = ossl_pkcs7_ctx_get0_propq(uVar3);
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x437,"PKCS7_signatureVerify");
    ERR_set_error(0x21,0x80006,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 == 0x16) || (iVar1 = OBJ_obj2nid(p7->type), iVar1 == 0x18)) {
      iVar1 = OBJ_obj2nid(si->digest_alg->algorithm);
      if (bio != (BIO *)0x0) {
        do {
          bp = BIO_find_type(bio,0x208);
          if (bp == (BIO *)0x0) break;
          BIO_ctrl(bp,0x78,0,&local_98);
          if (local_98 == (EVP_MD_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/pkcs7/pk7_doit.c",1099,"PKCS7_signatureVerify");
            ERR_set_error(0x21,0xc0103,0);
            goto LAB_00102707;
          }
          uVar5 = EVP_MD_CTX_get0_md();
          iVar2 = EVP_MD_get_type(uVar5);
          if (iVar2 == iVar1) {
LAB_00102760:
            iVar2 = EVP_MD_CTX_copy_ex(out,local_98);
            if (iVar2 == 0) goto LAB_00102707;
            val = (ASN1_VALUE *)si->auth_attr;
            if ((val != (ASN1_VALUE *)0x0) && (iVar2 = OPENSSL_sk_num(val), iVar2 != 0)) {
              pEVar9 = (EVP_MD *)0x0;
              local_d0 = EVP_DigestFinal_ex(out,local_88,&local_9c);
              if (local_d0 == 0) goto LAB_00102711;
              pAVar7 = PKCS7_digest_from_attributes((stack_st_X509_ATTRIBUTE *)val);
              if (pAVar7 == (ASN1_OCTET_STRING *)0x0) {
                ERR_new();
                ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x46b,"PKCS7_signatureVerify");
                ERR_set_error(0x21,0x6c,0);
                local_d0 = 0;
                pEVar9 = (EVP_MD *)0x0;
                goto LAB_00102711;
              }
              if ((pAVar7->length != local_9c) ||
                 (iVar2 = memcmp(pAVar7->data,local_88,(ulong)local_9c), iVar2 != 0)) {
                ERR_new();
                pEVar9 = (EVP_MD *)0x0;
                ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x470,"PKCS7_signatureVerify");
                ERR_set_error(0x21,0x65,0);
                local_d0 = -1;
                goto LAB_00102711;
              }
              ERR_set_mark();
              pcVar8 = OBJ_nid2sn(iVar1);
              pEVar9 = (EVP_MD *)EVP_MD_fetch(uVar4,pcVar8,uVar3);
              local_d0 = 0;
              type = pEVar9;
              if (pEVar9 == (EVP_MD *)0x0) {
                pcVar8 = OBJ_nid2sn(iVar1);
                type = EVP_get_digestbyname(pcVar8);
                if (type != (EVP_MD *)0x0) goto LAB_00102998;
              }
              else {
LAB_00102998:
                iVar1 = EVP_DigestInit_ex(out,type,(ENGINE *)0x0);
                if (iVar1 != 0) {
                  ERR_pop_to_mark();
                  it = (ASN1_ITEM *)PKCS7_ATTR_VERIFY_it();
                  iVar1 = ASN1_item_i2d(val,&local_90,it);
                  if ((iVar1 < 1) || (local_90 == (uchar *)0x0)) {
                    ERR_new();
                    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x486,"PKCS7_signatureVerify");
                    ERR_set_error(0x21,0x8000d,0);
                    local_d0 = -1;
                  }
                  else {
                    iVar1 = EVP_DigestUpdate(out,local_90,(long)iVar1);
                    if (iVar1 != 0) goto LAB_0010279d;
                  }
                  goto LAB_00102711;
                }
              }
              ERR_clear_last_mark();
              goto LAB_00102711;
            }
            pEVar9 = (EVP_MD *)0x0;
LAB_0010279d:
            pAVar7 = si->enc_digest;
            lVar6 = X509_get0_pubkey(x509);
            if (lVar6 != 0) {
              iVar1 = EVP_VerifyFinal_ex(out,pAVar7->data,pAVar7->length,lVar6,uVar4,uVar3);
              local_d0 = 1;
              if (0 < iVar1) goto LAB_00102711;
              ERR_new();
              ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x497,"PKCS7_signatureVerify");
              ERR_set_error(0x21,0x69,0);
            }
            local_d0 = -1;
            goto LAB_00102711;
          }
          uVar5 = EVP_MD_CTX_get0_md(local_98);
          iVar2 = EVP_MD_get_pkey_type(uVar5);
          if (iVar2 == iVar1) goto LAB_00102760;
          bio = BIO_next(bp);
        } while (bio != (BIO *)0x0);
      }
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x446,"PKCS7_signatureVerify");
      ERR_set_error(0x21,0x6c,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x43c,"PKCS7_signatureVerify");
      ERR_set_error(0x21,0x72,0);
    }
  }
LAB_00102707:
  local_d0 = 0;
  pEVar9 = (EVP_MD *)0x0;
LAB_00102711:
  CRYPTO_free(local_90);
  EVP_MD_CTX_free(out);
  EVP_MD_free(pEVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d0;
}



int PKCS7_dataVerify(X509_STORE *cert_store,X509_STORE_CTX *ctx,BIO *bio,PKCS7 *p7,
                    PKCS7_SIGNER_INFO *si)

{
  stack_st_X509 *sk;
  int iVar1;
  X509 *x509;
  undefined8 uVar2;
  
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x3f3,"PKCS7_dataVerify");
    ERR_set_error(0x21,0x8f,0);
  }
  else if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x3f8,"PKCS7_dataVerify");
    ERR_set_error(0x21,0x7a,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 != 0x16) && (iVar1 = OBJ_obj2nid(p7->type), iVar1 != 0x18)) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x403,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x72,0);
      return 0;
    }
    sk = ((p7->d).sign)->cert;
    X509_STORE_CTX_set0_crls(ctx,((p7->d).sign)->crl);
    x509 = X509_find_by_issuer_and_serial
                     (sk,si->issuer_and_serial->issuer,si->issuer_and_serial->serial);
    if (x509 == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",0x40f,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x6a,0);
    }
    else {
      iVar1 = X509_STORE_CTX_init(ctx,cert_store,x509,sk);
      if (iVar1 == 0) {
        ERR_new();
        uVar2 = 0x415;
      }
      else {
        X509_STORE_CTX_set_purpose(ctx,4);
        iVar1 = X509_verify_cert(ctx);
        if (0 < iVar1) {
          iVar1 = PKCS7_signatureVerify(bio,p7,si,x509);
          return iVar1;
        }
        ERR_new();
        uVar2 = 0x41b;
      }
      ERR_set_debug("crypto/pkcs7/pk7_doit.c",uVar2,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x8000b,0);
    }
  }
  return 0;
}



int PKCS7_set_signed_attributes(PKCS7_SIGNER_INFO *p7si,stack_st_X509_ATTRIBUTE *sk)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  OPENSSL_sk_pop_free(p7si->auth_attr,X509_ATTRIBUTE_free);
  psVar1 = (stack_st_X509_ATTRIBUTE *)
           OPENSSL_sk_deep_copy(sk,&X509_ATTRIBUTE_dup,X509_ATTRIBUTE_free);
  p7si->auth_attr = psVar1;
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si,stack_st_X509_ATTRIBUTE *sk)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  OPENSSL_sk_pop_free(p7si->unauth_attr,X509_ATTRIBUTE_free);
  psVar1 = (stack_st_X509_ATTRIBUTE *)
           OPENSSL_sk_deep_copy(sk,&X509_ATTRIBUTE_dup,X509_ATTRIBUTE_free);
  p7si->unauth_attr = psVar1;
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}



int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si,int nid,int type,void *data)

{
  int iVar1;
  
  iVar1 = add_attribute(&p7si->auth_attr);
  return iVar1;
}



int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si,int nid,int atrtype,void *value)

{
  int iVar1;
  
  iVar1 = add_attribute(&p7si->unauth_attr);
  return iVar1;
}


