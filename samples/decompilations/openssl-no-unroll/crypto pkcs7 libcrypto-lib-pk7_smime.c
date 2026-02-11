
int PKCS7_final(PKCS7 *p7,BIO *data,int flags)

{
  int iVar1;
  BIO *out;
  int iVar2;
  
  out = PKCS7_dataInit(p7,(BIO *)0x0);
  if (out != (BIO *)0x0) {
    iVar1 = SMIME_crlf_copy(data,out,flags);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      BIO_ctrl(out,0xb,0,(void *)0x0);
      iVar2 = 1;
      iVar1 = PKCS7_dataFinal(p7,out);
      if (iVar1 == 0) {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x5b,"PKCS7_final");
        ERR_set_error(0x21,0x91,0);
      }
    }
    BIO_free_all(out);
    return iVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x51,"PKCS7_final");
  ERR_set_error(0x21,0x80021,0);
  return 0;
}



PKCS7_SIGNER_INFO *
PKCS7_sign_add_signer(PKCS7 *p7,X509 *signcert,EVP_PKEY *pkey,EVP_MD *md,int flags)

{
  int iVar1;
  int iVar2;
  PKCS7_SIGNER_INFO *si;
  ASN1_INTEGER *pAVar3;
  stack_st_PKCS7_SIGNER_INFO *psVar4;
  PKCS7_SIGNER_INFO *pPVar5;
  stack_st_X509_ALGOR *sk;
  char *pcVar6;
  EVP_CIPHER *pEVar7;
  EVP_MD *pEVar8;
  ASN1_OCTET_STRING *pAVar9;
  
  iVar1 = X509_check_private_key(signcert,pkey);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x7e,"PKCS7_sign_add_signer");
    ERR_set_error(0x21,0x7f,0);
    return (PKCS7_SIGNER_INFO *)0x0;
  }
  si = PKCS7_add_signature(p7,signcert,pkey,md);
  if (si == (PKCS7_SIGNER_INFO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x84,"PKCS7_sign_add_signer");
    ERR_set_error(0x21,0x7c,0);
    return (PKCS7_SIGNER_INFO *)0x0;
  }
  pAVar3 = (ASN1_INTEGER *)ossl_pkcs7_get0_ctx(p7);
  si[1].version = pAVar3;
  if (((flags & 2U) != 0) || (iVar1 = PKCS7_add_certificate(p7,signcert), iVar1 != 0)) {
    if ((flags & 0x100U) != 0) {
      return si;
    }
    iVar1 = PKCS7_add_attrib_content_type(si,(ASN1_OBJECT *)0x0);
    if (iVar1 != 0) {
      if ((flags & 0x200U) == 0) {
        sk = (stack_st_X509_ALGOR *)OPENSSL_sk_new_null();
        if (sk == (stack_st_X509_ALGOR *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x94,"PKCS7_sign_add_signer");
          ERR_set_error(0x21,0x8000f,0);
          goto LAB_00100238;
        }
        pcVar6 = OBJ_nid2sn(0x1ab);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x1ab,-1), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x3d6);
        pEVar8 = EVP_get_digestbyname(pcVar6);
        if ((pEVar8 != (EVP_MD *)0x0) && (iVar1 = PKCS7_simple_smimecap(sk,0x3d6,-1), iVar1 == 0))
        goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x3d7);
        pEVar8 = EVP_get_digestbyname(pcVar6);
        if ((pEVar8 != (EVP_MD *)0x0) && (iVar1 = PKCS7_simple_smimecap(sk,0x3d7,-1), iVar1 == 0))
        goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x329);
        pEVar8 = EVP_get_digestbyname(pcVar6);
        if ((pEVar8 != (EVP_MD *)0x0) && (iVar1 = PKCS7_simple_smimecap(sk,0x329,-1), iVar1 == 0))
        goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x32d);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x32d,-1), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x1a7);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x1a7,-1), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x1a3);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x1a3,-1), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x2c);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) && (iVar1 = PKCS7_simple_smimecap(sk,0x2c,-1), iVar1 == 0)
           ) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x25);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x25,0x80), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x25);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) &&
           (iVar1 = PKCS7_simple_smimecap(sk,0x25,0x40), iVar1 == 0)) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x1f);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if ((pEVar7 != (EVP_CIPHER *)0x0) && (iVar1 = PKCS7_simple_smimecap(sk,0x1f,-1), iVar1 == 0)
           ) goto LAB_0010023b;
        pcVar6 = OBJ_nid2sn(0x25);
        pEVar7 = EVP_get_cipherbyname(pcVar6);
        if (((pEVar7 != (EVP_CIPHER *)0x0) &&
            (iVar1 = PKCS7_simple_smimecap(sk,0x25,0x28), iVar1 == 0)) ||
           (iVar1 = PKCS7_add_attrib_smimecap(si,sk), iVar1 == 0)) goto LAB_0010023b;
        OPENSSL_sk_pop_free(sk,&X509_ALGOR_free);
      }
      if ((flags & 0x8000U) == 0) {
        return si;
      }
      psVar4 = PKCS7_get_signer_info(p7);
      iVar1 = 0;
      while( true ) {
        iVar2 = OPENSSL_sk_num(psVar4);
        if ((iVar2 <= iVar1) ||
           (pPVar5 = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar4,iVar1), si == pPVar5))
        goto LAB_00100205;
        iVar2 = OPENSSL_sk_num(pPVar5->auth_attr);
        if ((0 < iVar2) &&
           (iVar2 = OBJ_cmp(si->digest_alg->algorithm,pPVar5->digest_alg->algorithm), iVar2 == 0))
        break;
        iVar1 = iVar1 + 1;
      }
      pAVar9 = PKCS7_digest_from_attributes(pPVar5->auth_attr);
      if (pAVar9 != (ASN1_OCTET_STRING *)0x0) {
        iVar1 = PKCS7_add1_attrib_digest(si,pAVar9->data,pAVar9->length);
        if (iVar1 != 0) {
          if ((flags & 0x4000U) != 0) {
            return si;
          }
          iVar1 = PKCS7_SIGNER_INFO_sign(si);
          if (iVar1 != 0) {
            return si;
          }
        }
        goto LAB_00100238;
      }
LAB_00100205:
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_smime.c",0xd2,"pkcs7_copy_existing_digest");
      ERR_set_error(0x21,0x9a,0);
    }
  }
LAB_00100238:
  sk = (stack_st_X509_ALGOR *)0x0;
LAB_0010023b:
  OPENSSL_sk_pop_free(sk,&X509_ALGOR_free);
  return (PKCS7_SIGNER_INFO *)0x0;
}



PKCS7 * PKCS7_sign_ex(X509 *param_1,EVP_PKEY *param_2,undefined8 param_3,BIO *param_4,uint param_5,
                     undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  PKCS7 *p7;
  PKCS7_SIGNER_INFO *pPVar2;
  X509 *x509;
  uint uVar3;
  
  p7 = (PKCS7 *)PKCS7_new_ex(param_6,param_7);
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x20,"PKCS7_sign_ex");
    ERR_set_error(0x21,0x80021,0);
  }
  else {
    iVar1 = PKCS7_set_type(p7,0x16);
    if ((iVar1 != 0) && (iVar1 = PKCS7_content_new(p7,0x15), iVar1 != 0)) {
      if ((param_2 == (EVP_PKEY *)0x0) ||
         (pPVar2 = PKCS7_sign_add_signer(p7,param_1,param_2,(EVP_MD *)0x0,param_5),
         pPVar2 != (PKCS7_SIGNER_INFO *)0x0)) {
        uVar3 = param_5 & 2;
        if ((param_5 & 2) == 0) {
          for (; iVar1 = OPENSSL_sk_num(param_3), (int)uVar3 < iVar1; uVar3 = uVar3 + 1) {
            x509 = (X509 *)OPENSSL_sk_value(param_3,uVar3);
            iVar1 = PKCS7_add_certificate(p7,x509);
            if (iVar1 == 0) goto LAB_00100720;
          }
        }
        if ((param_5 & 0x40) != 0) {
          PKCS7_ctrl(p7,1,1,(char *)0x0);
        }
        if ((param_5 & 0x5000) != 0) {
          return p7;
        }
        iVar1 = PKCS7_final(p7,param_4,param_5);
        if (iVar1 != 0) {
          return p7;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x2b,"PKCS7_sign_ex");
        ERR_set_error(0x21,0x99,0);
      }
    }
LAB_00100720:
    PKCS7_free(p7);
  }
  return (PKCS7 *)0x0;
}



PKCS7 * PKCS7_sign(X509 *signcert,EVP_PKEY *pkey,stack_st_X509 *certs,BIO *data,int flags)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)PKCS7_sign_ex();
  return pPVar1;
}



stack_st_X509 * PKCS7_get0_signers(PKCS7 *p7,stack_st_X509 *certs,int flags)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  stack_st_X509 *sk;
  stack_st_PKCS7_SIGNER_INFO *psVar4;
  stack_st_X509 *psVar5;
  long lVar6;
  X509 *pXVar7;
  uint uVar8;
  
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x17a,"PKCS7_get0_signers");
    ERR_set_error(0x21,0x8f,0);
  }
  else {
    iVar2 = OBJ_obj2nid(p7->type);
    if (iVar2 == 0x16) {
      sk = (stack_st_X509 *)pkcs7_get0_certificates(p7);
      psVar4 = PKCS7_get_signer_info(p7);
      iVar2 = OPENSSL_sk_num(psVar4);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x189,"PKCS7_get0_signers");
        ERR_set_error(0x21,0x8e,0);
      }
      else {
        psVar5 = (stack_st_X509 *)OPENSSL_sk_new_null();
        if (psVar5 == (stack_st_X509 *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x18e,"PKCS7_get0_signers");
          ERR_set_error(0x21,0x8000f,0);
        }
        else {
          uVar8 = flags & 0x10;
          if (uVar8 == 0) {
            do {
              iVar2 = OPENSSL_sk_num(psVar4);
              if (iVar2 <= (int)uVar8) {
                return psVar5;
              }
              lVar6 = OPENSSL_sk_value(psVar4,uVar8);
              puVar1 = *(undefined8 **)(lVar6 + 8);
              pXVar7 = X509_find_by_issuer_and_serial
                                 (certs,(X509_NAME *)*puVar1,(ASN1_INTEGER *)puVar1[1]);
              if (pXVar7 == (X509 *)0x0) {
                pXVar7 = X509_find_by_issuer_and_serial
                                   (sk,(X509_NAME *)*puVar1,(ASN1_INTEGER *)puVar1[1]);
                if (pXVar7 == (X509 *)0x0) goto LAB_001008e4;
                iVar2 = OPENSSL_sk_push(psVar5,pXVar7);
              }
              else {
                iVar2 = OPENSSL_sk_push(psVar5,pXVar7);
              }
              if (iVar2 == 0) goto LAB_0010099b;
              uVar8 = uVar8 + 1;
            } while( true );
          }
          iVar2 = 0;
          while( true ) {
            iVar3 = OPENSSL_sk_num(psVar4);
            if (iVar3 <= iVar2) {
              return psVar5;
            }
            lVar6 = OPENSSL_sk_value(psVar4,iVar2);
            pXVar7 = X509_find_by_issuer_and_serial
                               (certs,(X509_NAME *)**(undefined8 **)(lVar6 + 8),
                                (ASN1_INTEGER *)(*(undefined8 **)(lVar6 + 8))[1]);
            if (pXVar7 == (X509 *)0x0) break;
            iVar3 = OPENSSL_sk_push(psVar5,pXVar7);
            if (iVar3 == 0) {
LAB_0010099b:
              OPENSSL_sk_free(psVar5);
              return (stack_st_X509 *)0x0;
            }
            iVar2 = iVar2 + 1;
          }
LAB_001008e4:
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x19d,"PKCS7_get0_signers");
          ERR_set_error(0x21,0x80,0);
          OPENSSL_sk_free(psVar5);
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x17f,"PKCS7_get0_signers");
      ERR_set_error(0x21,0x71,0);
    }
  }
  return (stack_st_X509 *)0x0;
}



int PKCS7_verify(PKCS7 *p7,stack_st_X509 *certs,X509_STORE *store,BIO *indata,BIO *out,int flags)

{
  int iVar1;
  int iVar2;
  long lVar3;
  stack_st_PKCS7_SIGNER_INFO *psVar4;
  stack_st_X509 *psVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  X509_STORE_CTX *ctx;
  BIO *b;
  BIO_METHOD *type;
  void *data;
  PKCS7_SIGNER_INFO *si;
  X509 *pXVar8;
  long in_FS_OFFSET;
  BIO *local_60;
  uint local_58;
  stack_st_X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (stack_st_X509 *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0xe8,"PKCS7_verify");
    ERR_set_error(0x21,0x8f,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if (iVar1 == 0x16) {
      lVar3 = PKCS7_ctrl(p7,2,0,(char *)0x0);
      if ((lVar3 == 0) || (indata != (BIO *)0x0)) {
        if (((flags & 0x10000U) == 0) ||
           ((lVar3 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar3 != 0 || (indata == (BIO *)0x0)))) {
          psVar4 = PKCS7_get_signer_info(p7);
          if ((psVar4 == (stack_st_PKCS7_SIGNER_INFO *)0x0) ||
             (iVar1 = OPENSSL_sk_num(psVar4), iVar1 == 0)) {
            ERR_new();
            ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x108,"PKCS7_verify");
            ERR_set_error(0x21,0x7b,0);
          }
          else {
            psVar5 = PKCS7_get0_signers(p7,certs,flags);
            if (psVar5 != (stack_st_X509 *)0x0) {
              uVar6 = ossl_pkcs7_get0_ctx(p7);
              uVar7 = ossl_pkcs7_ctx_get0_propq(uVar6);
              uVar6 = ossl_pkcs7_ctx_get0_libctx(uVar6);
              ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar6,uVar7);
              if (ctx != (X509_STORE_CTX *)0x0) {
                if ((flags & 0x20U) == 0) {
                  local_60._0_4_ = flags & 0x20;
                  iVar1 = ossl_x509_add_certs_new(&local_48,certs,4);
                  if (iVar1 == 0) goto LAB_00100f04;
                  uVar6 = pkcs7_get0_certificates(p7);
                  if ((flags & 8U) == 0) {
                    iVar1 = ossl_x509_add_certs_new(&local_48,uVar6,4);
                    if (iVar1 == 0) goto LAB_00100f04;
                    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar5), iVar1 < iVar2; iVar1 = iVar1 + 1
                        ) {
                      pXVar8 = (X509 *)OPENSSL_sk_value(psVar5,iVar1);
                      iVar2 = X509_STORE_CTX_init(ctx,store,pXVar8,local_48);
                      if (iVar2 == 0) goto LAB_0010121e;
                      iVar2 = X509_STORE_CTX_set_default(ctx,"smime_sign");
                      if (iVar2 == 0) goto LAB_00100f04;
                      if ((flags & 0x2000U) == 0) {
                        X509_STORE_CTX_set0_crls(ctx,((p7->d).sign)->crl);
                        iVar2 = X509_verify_cert(ctx);
                      }
                      else {
                        iVar2 = X509_verify_cert(ctx);
                      }
                      if (iVar2 < 1) goto LAB_001010f4;
                    }
                  }
                  else if ((flags & 0x2000U) == 0) {
                    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar5), iVar1 < iVar2; iVar1 = iVar1 + 1
                        ) {
                      pXVar8 = (X509 *)OPENSSL_sk_value(psVar5,iVar1);
                      iVar2 = X509_STORE_CTX_init(ctx,store,pXVar8,local_48);
                      if (iVar2 == 0) goto LAB_0010121e;
                      X509_STORE_CTX_set0_crls(ctx,((p7->d).sign)->crl);
                      iVar2 = X509_verify_cert(ctx);
                      if (iVar2 < 1) goto LAB_001010f4;
                    }
                  }
                  else {
                    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar5), iVar1 < iVar2; iVar1 = iVar1 + 1
                        ) {
                      pXVar8 = (X509 *)OPENSSL_sk_value(psVar5,iVar1);
                      iVar2 = X509_STORE_CTX_init(ctx,store,pXVar8,local_48);
                      if (iVar2 == 0) goto LAB_0010121e;
                      iVar2 = X509_verify_cert(ctx);
                      if (iVar2 < 1) goto LAB_001010f4;
                    }
                  }
                }
                b = PKCS7_dataInit(p7,indata);
                if (b != (BIO *)0x0) {
                  local_58 = flags & 1;
                  local_60 = out;
                  if ((flags & 1U) == 0) {
LAB_00100d6a:
                    data = CRYPTO_malloc(0x1000,"crypto/pkcs7/pk7_smime.c",0x143);
                    if (data != (void *)0x0) {
                      while (iVar1 = BIO_read(b,data,0x1000), 0 < iVar1) {
                        if (local_60 == (BIO *)0x0) goto LAB_00100db8;
                        BIO_write(local_60,data,iVar1);
                      }
                      goto LAB_00100dcc;
                    }
                  }
                  else {
                    type = BIO_s_mem();
                    local_60 = BIO_new(type);
                    if (local_60 != (BIO *)0x0) {
                      BIO_ctrl(local_60,0x82,0,(void *)0x0);
                      goto LAB_00100d6a;
                    }
                    ERR_new();
                    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x13b,"PKCS7_verify");
                    ERR_set_error(0x21,0x80020,0);
                  }
                  local_58 = 0;
                  data = (void *)0x0;
                  goto LAB_00100df0;
                }
              }
LAB_00100f04:
              b = (BIO *)0x0;
              local_58 = 0;
              data = (void *)0x0;
              goto LAB_00100df0;
            }
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x100,"PKCS7_verify");
          ERR_set_error(0x21,0x76,0);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0xf3,"PKCS7_verify");
        ERR_set_error(0x21,0x7a,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_smime.c",0xed,"PKCS7_verify");
      ERR_set_error(0x21,0x71,0);
    }
  }
  local_58 = 0;
  goto LAB_00100b82;
LAB_0010121e:
  b = (BIO *)0x0;
  data = (void *)0x0;
  ERR_new();
  ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x122,"PKCS7_verify");
  ERR_set_error(0x21,0x8000b,0);
  local_58 = (uint)local_60;
  goto LAB_00100df0;
LAB_001010f4:
  iVar1 = X509_STORE_CTX_get_error(ctx);
  ERR_new();
  ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x12d,"PKCS7_verify");
  X509_verify_cert_error_string((long)iVar1);
  ERR_set_error(0x21,0x75,"Verify error: %s");
  goto LAB_00100f04;
LAB_00100db8:
  do {
    iVar1 = BIO_read(b,data,0x1000);
  } while (0 < iVar1);
LAB_00100dcc:
  if (local_58 != 0) {
    iVar1 = SMIME_text(local_60,out);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x14f,"PKCS7_verify");
      ERR_set_error(0x21,0x81,0);
      BIO_free(local_60);
      local_58 = 0;
      goto LAB_00100df0;
    }
    BIO_free(local_60);
  }
  if ((flags & 4U) == 0) {
    local_58 = flags & 4;
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar4), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      si = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar4,iVar1);
      pXVar8 = (X509 *)OPENSSL_sk_value(psVar5,iVar1);
      iVar2 = PKCS7_signatureVerify(b,p7,si,pXVar8);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x15d,"PKCS7_verify");
        ERR_set_error(0x21,0x69,0);
        goto LAB_00100df0;
      }
    }
  }
  local_58 = 1;
LAB_00100df0:
  X509_STORE_CTX_free(ctx);
  CRYPTO_free(data);
  if (indata != (BIO *)0x0) {
    BIO_pop(b);
  }
  BIO_free_all(b);
  OPENSSL_sk_free(psVar5);
  OPENSSL_sk_free(local_48);
LAB_00100b82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



PKCS7 * PKCS7_encrypt_ex(undefined8 param_1,BIO *param_2,EVP_CIPHER *param_3,uint param_4,
                        undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  PKCS7 *p7;
  X509 *x509;
  PKCS7_RECIP_INFO *pPVar2;
  int iVar3;
  
  p7 = (PKCS7 *)PKCS7_new_ex(param_5,param_6);
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1b6,"PKCS7_encrypt_ex");
    ERR_set_error(0x21,0x80021,0);
  }
  else {
    iVar1 = PKCS7_set_type(p7,0x17);
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar1 = PKCS7_set_cipher(p7,param_3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1bd,"PKCS7_encrypt_ex");
        ERR_set_error(0x21,0x79,0);
      }
      else {
        for (; iVar1 = OPENSSL_sk_num(param_1), iVar3 < iVar1; iVar3 = iVar3 + 1) {
          x509 = (X509 *)OPENSSL_sk_value(param_1,iVar3);
          pPVar2 = PKCS7_add_recipient(p7,x509);
          if (pPVar2 == (PKCS7_RECIP_INFO *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1c4,"PKCS7_encrypt_ex");
            ERR_set_error(0x21,0x78,0);
            goto LAB_00101398;
          }
        }
        if ((param_4 & 0x1000) != 0) {
          return p7;
        }
        iVar1 = PKCS7_final(p7,param_2,param_4);
        if (iVar1 != 0) {
          return p7;
        }
      }
    }
LAB_00101398:
    BIO_free_all((BIO *)0x0);
    PKCS7_free(p7);
  }
  return (PKCS7 *)0x0;
}



PKCS7 * PKCS7_encrypt(stack_st_X509 *certs,BIO *in,EVP_CIPHER *cipher,int flags)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)PKCS7_encrypt_ex();
  return pPVar1;
}



int PKCS7_decrypt(PKCS7 *p7,EVP_PKEY *pkey,X509 *cert,BIO *data,int flags)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BIO *a;
  void *data_00;
  BIO_METHOD *type;
  BIO *b;
  BIO *in;
  long lVar4;
  
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1e5,"PKCS7_decrypt");
    ERR_set_error(0x21,0x8f,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 == 0x17) || (iVar1 = OBJ_obj2nid(p7->type), iVar1 == 0x18)) {
      if ((cert == (X509 *)0x0) || (iVar1 = X509_check_private_key(cert,pkey), iVar1 != 0)) {
        a = PKCS7_dataDecode(p7,pkey,(BIO *)0x0,cert);
        if (a == (BIO *)0x0) {
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1f6,"PKCS7_decrypt");
          ERR_set_error(0x21,0x77,0);
        }
        else if ((flags & 1U) == 0) {
          data_00 = CRYPTO_malloc(0x1000,"crypto/pkcs7/pk7_smime.c",0x210);
          uVar3 = 0;
          if (data_00 != (void *)0x0) {
            do {
              iVar1 = BIO_read(a,data_00,0x1000);
              if (iVar1 < 1) {
                uVar3 = 1;
                iVar1 = BIO_method_type(a);
                if (iVar1 == 0x20a) {
                  lVar4 = BIO_ctrl(a,0x71,0,(void *)0x0);
                  uVar3 = (uint)(0 < lVar4);
                }
                break;
              }
              iVar2 = BIO_write(data,data_00,iVar1);
            } while (iVar2 == iVar1);
          }
          CRYPTO_free(data_00);
          BIO_free_all(a);
        }
        else {
          type = BIO_f_buffer();
          b = BIO_new(type);
          if (b == (BIO *)0x0) {
            ERR_new();
            uVar3 = 0;
            ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1fe,"PKCS7_decrypt");
            ERR_set_error(0x21,0x80020,0);
            BIO_free_all(a);
          }
          else {
            in = BIO_push(b,a);
            if (in == (BIO *)0x0) {
              ERR_new();
              uVar3 = 0;
              ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x203,"PKCS7_decrypt");
              ERR_set_error(0x21,0x80020,0);
              BIO_free_all(b);
              BIO_free_all(a);
            }
            else {
              uVar3 = SMIME_text(in,data);
              if (((0 < (int)uVar3) && (iVar1 = BIO_method_type(a), iVar1 == 0x20a)) &&
                 (lVar4 = BIO_ctrl(a,0x71,0,(void *)0x0), lVar4 < 1)) {
                uVar3 = 0;
              }
              BIO_free_all(in);
            }
          }
        }
      }
      else {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1f0,"PKCS7_decrypt");
        ERR_set_error(0x21,0x7f,0);
      }
    }
    else {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("crypto/pkcs7/pk7_smime.c",0x1eb,"PKCS7_decrypt");
      ERR_set_error(0x21,0x71,0);
    }
  }
  return uVar3;
}


