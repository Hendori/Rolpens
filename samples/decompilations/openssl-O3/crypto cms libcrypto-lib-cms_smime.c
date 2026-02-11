
undefined8 cms_copy_content(BIO *param_1,BIO *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  BIO_METHOD *pBVar3;
  BIO *bp;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (BIO *)0x0) {
    pBVar3 = BIO_s_null();
    bp = BIO_new(pBVar3);
LAB_00100101:
    if (bp == (BIO *)0x0) {
      ERR_new();
      uVar5 = 0;
      ERR_set_debug("crypto/cms/cms_smime.c",0x2b,"cms_copy_content");
      ERR_set_error(0x2e,0x8002e,0);
      goto LAB_001000a5;
    }
  }
  else {
    bp = param_1;
    if ((param_3 & 1) != 0) {
      pBVar3 = BIO_s_mem();
      bp = BIO_new(pBVar3);
      BIO_ctrl(bp,0x82,0,(void *)0x0);
      goto LAB_00100101;
    }
  }
  do {
    iVar1 = BIO_read(param_2,auStack_1048,0x1000);
    if (iVar1 < 1) {
      iVar2 = BIO_method_type(param_2);
      if ((iVar2 == 0x20a) && (lVar4 = BIO_ctrl(param_2,0x71,0,(void *)0x0), lVar4 < 1)) {
        uVar5 = 0;
        goto LAB_001000a5;
      }
      if (iVar1 == 0) {
        if (((param_3 & 1) == 0) || (iVar1 = SMIME_text(bp,param_1), iVar1 != 0)) {
          uVar5 = 1;
          goto LAB_001000a5;
        }
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",0x42,"cms_copy_content");
        ERR_set_error(0x2e,0x8c,0);
      }
      break;
    }
    iVar2 = BIO_write(bp,auStack_1048,iVar1);
  } while (iVar2 == iVar1);
  uVar5 = 0;
LAB_001000a5:
  if (param_1 != bp) {
    BIO_free(bp);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int CMS_data(CMS_ContentInfo *cms,BIO *out,uint flags)

{
  int iVar1;
  ASN1_OBJECT *o;
  BIO *a;
  
  o = CMS_get0_type(cms);
  iVar1 = OBJ_obj2nid(o);
  if (iVar1 == 0x15) {
    a = CMS_dataInit(cms,(BIO *)0x0);
    if (a != (BIO *)0x0) {
      iVar1 = cms_copy_content(out,a,flags);
      BIO_free_all(a);
      return iVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x6f,"CMS_data");
    ERR_set_error(0x2e,0x8f,0);
  }
  return 0;
}



int CMS_digest_verify(CMS_ContentInfo *cms,BIO *dcont,BIO *out,uint flags)

{
  int iVar1;
  ASN1_OBJECT *o;
  BIO *a;
  BIO *pBVar2;
  ASN1_OCTET_STRING **ppAVar3;
  
  o = CMS_get0_type(cms);
  iVar1 = OBJ_obj2nid(o);
  if (iVar1 == 0x19) {
    if ((dcont == (BIO *)0x0) &&
       ((ppAVar3 = CMS_get0_content(cms), ppAVar3 == (ASN1_OCTET_STRING **)0x0 ||
        (*ppAVar3 == (ASN1_OCTET_STRING *)0x0)))) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_smime.c",0x54,"check_content");
      ERR_set_error(0x2e,0x7f,0);
    }
    else {
      a = CMS_dataInit(cms,dcont);
      if (a != (BIO *)0x0) {
        iVar1 = cms_copy_content(out,a,flags);
        if (iVar1 != 0) {
          iVar1 = ossl_cms_DigestedData_do_final(cms,a,1);
        }
        if (dcont != (BIO *)0x0) {
          do {
            pBVar2 = BIO_pop(a);
            BIO_free(a);
            if (pBVar2 == (BIO *)0x0) {
              return iVar1;
            }
            a = pBVar2;
          } while (dcont != pBVar2);
          return iVar1;
        }
        BIO_free_all(a);
        return iVar1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x95,"CMS_digest_verify");
    ERR_set_error(0x2e,0x90,0);
  }
  return 0;
}



int CMS_EncryptedData_decrypt
              (CMS_ContentInfo *cms,uchar *key,size_t keylen,BIO *dcont,BIO *out,uint flags)

{
  int iVar1;
  ASN1_OBJECT *o;
  BIO *a;
  BIO *pBVar2;
  ASN1_OCTET_STRING **ppAVar3;
  
  o = CMS_get0_type(cms);
  iVar1 = OBJ_obj2nid(o);
  if (iVar1 == 0x1a) {
    if ((dcont == (BIO *)0x0) &&
       ((ppAVar3 = CMS_get0_content(cms), ppAVar3 == (ASN1_OCTET_STRING **)0x0 ||
        (*ppAVar3 == (ASN1_OCTET_STRING *)0x0)))) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_smime.c",0x54,"check_content");
      ERR_set_error(0x2e,0x7f,0);
    }
    else {
      iVar1 = CMS_EncryptedData_set1_key(cms,(EVP_CIPHER *)0x0,key,keylen);
      if ((0 < iVar1) && (a = CMS_dataInit(cms,dcont), a != (BIO *)0x0)) {
        iVar1 = cms_copy_content(out,a,flags);
        if (dcont == (BIO *)0x0) {
          BIO_free_all(a);
          return iVar1;
        }
        do {
          pBVar2 = BIO_pop(a);
          BIO_free(a);
          if (pBVar2 == (BIO *)0x0) {
            return iVar1;
          }
          a = pBVar2;
        } while (dcont != pBVar2);
        return iVar1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0xcf,"CMS_EncryptedData_decrypt");
    ERR_set_error(0x2e,0x91,0);
  }
  return 0;
}



int CMS_verify(CMS_ContentInfo *cms,stack_st_X509 *certs,X509_STORE *store,BIO *dcont,BIO *out,
              uint flags)

{
  uint uVar1;
  stack_st_X509_CRL *psVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  stack_st_CMS_SignerInfo *psVar6;
  BIO *pBVar7;
  BIO *out_00;
  ASN1_OBJECT *o;
  CMS_SignerInfo *pCVar8;
  undefined8 uVar9;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar10;
  ASN1_OCTET_STRING **ppAVar11;
  char *pcVar12;
  BIO_METHOD *pBVar13;
  BIO *bp;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long in_FS_OFFSET;
  BIO *local_b8;
  uint local_b0;
  undefined8 *local_a0;
  stack_st_X509 *local_60;
  stack_st_X509_CRL *local_58;
  X509 *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (stack_st_X509 *)0x0;
  local_58 = (stack_st_X509_CRL *)0x0;
  uVar5 = ossl_cms_get0_cmsctx();
  uVar1 = flags;
  if (dcont == (BIO *)0x0) {
    ppAVar11 = CMS_get0_content(cms);
    if ((ppAVar11 == (ASN1_OCTET_STRING **)0x0) || (*ppAVar11 == (ASN1_OCTET_STRING *)0x0)) {
      ERR_new();
      iVar3 = 0;
      ERR_set_debug("crypto/cms/cms_smime.c",0x54,"check_content");
      ERR_set_error(0x2e,0x7f,0);
      goto LAB_00100781;
    }
  }
  else if ((flags & 0x80) == 0) {
    o = CMS_get0_eContentType(cms);
    iVar3 = OBJ_obj2nid(o);
    if (iVar3 == 0x313) {
      uVar1 = flags | 0x80000;
    }
  }
  iVar15 = 0;
  iVar4 = 0;
  psVar6 = CMS_get0_SignerInfos(cms);
  iVar3 = OPENSSL_sk_num(psVar6);
  if (iVar3 < 1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x14f,"CMS_verify");
    uVar5 = 0x87;
LAB_001007f8:
    bp = (BIO *)0x0;
    out_00 = (BIO *)0x0;
    ERR_set_error(0x2e,uVar5,0);
    local_b8 = (BIO *)0x0;
    iVar3 = 0;
    local_a0 = (undefined8 *)0x0;
    local_b0 = uVar1 & 0x80;
    goto joined_r0x00100824;
  }
  for (; iVar3 = OPENSSL_sk_num(psVar6), iVar4 < iVar3; iVar4 = iVar4 + 1) {
    pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6);
    CMS_SignerInfo_get0_algs
              (pCVar8,(EVP_PKEY **)0x0,&local_50,(X509_ALGOR **)0x0,(X509_ALGOR **)0x0);
    iVar15 = (iVar15 + 1) - (uint)(local_50 == (X509 *)0x0);
  }
  iVar3 = OPENSSL_sk_num(psVar6);
  if (iVar3 == iVar15) {
    iVar3 = OPENSSL_sk_num(psVar6);
    if (iVar3 != iVar15) {
LAB_001007d4:
      ERR_new();
      ERR_set_debug("crypto/cms/cms_smime.c",0x15e,"CMS_verify");
      uVar5 = 0x8a;
      goto LAB_001007f8;
    }
  }
  else {
    iVar3 = CMS_set1_signers_certs(cms,certs,uVar1);
    iVar15 = iVar15 + iVar3;
    iVar3 = OPENSSL_sk_num(psVar6);
    if (iVar3 != iVar15) goto LAB_001007d4;
  }
  uVar16 = flags & 0x100000;
  if ((uVar1 & 0x20) == 0) {
    if (uVar16 != 0) goto LAB_0010065a;
    local_a0 = (undefined8 *)0x0;
LAB_00100680:
    iVar3 = ossl_cms_get1_certs_ex(cms);
    if (iVar3 != 0) {
      iVar3 = OPENSSL_sk_num(certs);
      if ((iVar3 < 1) || (iVar3 = ossl_x509_add_certs_new(&local_60,certs,5), iVar3 != 0)) {
        if (((uVar1 & 0x2000) != 0) || (iVar3 = ossl_cms_get1_crls_ex(cms), iVar3 != 0)) {
          if (0 < iVar15) {
            iVar3 = 0;
            puVar14 = local_a0;
            if (local_a0 == (undefined8 *)0x0) {
              do {
                pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6,iVar3);
                psVar2 = local_58;
                psVar10 = local_60;
                ossl_cms_ctx_get0_propq(uVar5);
                uVar9 = ossl_cms_ctx_get0_libctx(uVar5);
                ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar9);
                if (ctx == (X509_STORE_CTX *)0x0) goto LAB_00100c5d;
                CMS_SignerInfo_get0_algs
                          (pCVar8,(EVP_PKEY **)0x0,&local_48,(X509_ALGOR **)0x0,(X509_ALGOR **)0x0);
                iVar4 = X509_STORE_CTX_init(ctx,store,local_48,psVar10);
                if (iVar4 == 0) goto LAB_00100975;
                X509_STORE_CTX_set_default(ctx,"smime_sign");
                if (psVar2 != (stack_st_X509_CRL *)0x0) {
                  X509_STORE_CTX_set0_crls(ctx,psVar2);
                }
                iVar4 = X509_verify_cert(ctx);
                if (iVar4 < 1) goto LAB_00100cf5;
                iVar3 = iVar3 + 1;
                X509_STORE_CTX_free(ctx);
              } while (iVar15 != iVar3);
            }
            else {
              do {
                while( true ) {
                  pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6,iVar3);
                  psVar2 = local_58;
                  psVar10 = local_60;
                  ossl_cms_ctx_get0_propq(uVar5);
                  uVar9 = ossl_cms_ctx_get0_libctx(uVar5);
                  ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar9);
                  if (ctx == (X509_STORE_CTX *)0x0) goto LAB_00100c5d;
                  CMS_SignerInfo_get0_algs
                            (pCVar8,(EVP_PKEY **)0x0,&local_48,(X509_ALGOR **)0x0,(X509_ALGOR **)0x0
                            );
                  iVar4 = X509_STORE_CTX_init(ctx,store,local_48,psVar10);
                  if (iVar4 == 0) goto LAB_00100975;
                  X509_STORE_CTX_set_default(ctx,"smime_sign");
                  if (psVar2 != (stack_st_X509_CRL *)0x0) {
                    X509_STORE_CTX_set0_crls(ctx,psVar2);
                  }
                  iVar4 = X509_verify_cert(ctx);
                  if (iVar4 < 1) goto LAB_00100cf5;
                  if (puVar14 != (undefined8 *)0x0) break;
                  X509_STORE_CTX_free(ctx);
                  iVar3 = iVar3 + 1;
                  if (iVar15 == iVar3) goto joined_r0x00100b50;
                  puVar14 = (undefined8 *)0x8;
                }
                psVar10 = X509_STORE_CTX_get1_chain(ctx);
                iVar3 = iVar3 + 1;
                *puVar14 = psVar10;
                X509_STORE_CTX_free(ctx);
                puVar14 = puVar14 + 1;
              } while (iVar15 != iVar3);
            }
joined_r0x00100b50:
            if (((uVar1 & 8) == 0) || (uVar16 != 0)) {
              lVar17 = 0;
              if (uVar16 == 0) goto LAB_0010088a;
              do {
                pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6);
                iVar3 = CMS_signed_get_attr_count(pCVar8);
                if ((-1 < iVar3) &&
                   ((iVar3 = CMS_SignerInfo_verify(pCVar8), iVar3 < 1 ||
                    (iVar3 = ossl_cms_check_signing_certs(pCVar8), iVar3 < 1)))) goto LAB_001009ad;
                lVar17 = lVar17 + 1;
              } while (iVar15 != lVar17);
            }
          }
          goto LAB_001008c3;
        }
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
      }
    }
    bp = (BIO *)0x0;
    local_b8 = (BIO *)0x0;
    out_00 = (BIO *)0x0;
    local_b0 = uVar1 & 0x80;
    goto joined_r0x00100824;
  }
  if (uVar16 != 0) {
LAB_0010065a:
    local_a0 = (undefined8 *)CRYPTO_zalloc((long)iVar15 << 3,"crypto/cms/cms_smime.c",0x168);
    if (local_a0 == (undefined8 *)0x0) goto LAB_001009ad;
    goto LAB_00100680;
  }
  local_a0 = (undefined8 *)0x0;
  if (((uVar1 & 8) == 0) && (0 < iVar15)) {
LAB_0010088a:
    iVar3 = 0;
    do {
      pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6);
      iVar4 = CMS_signed_get_attr_count(pCVar8);
      if ((-1 < iVar4) && (iVar4 = CMS_SignerInfo_verify(pCVar8), iVar4 < 1)) goto LAB_001009ad;
      iVar3 = iVar3 + 1;
    } while (iVar15 != iVar3);
  }
LAB_001008c3:
  if (dcont == (BIO *)0x0) {
    out_00 = CMS_dataInit(cms,(BIO *)0x0);
    if (out_00 != (BIO *)0x0) {
      local_b0 = uVar1 & 0x80;
      iVar3 = cms_copy_content(out,out_00);
      if (iVar3 == 0) {
        bp = (BIO *)0x0;
        local_b8 = (BIO *)0x0;
        iVar3 = 0;
      }
      else {
        local_b8 = (BIO *)0x0;
LAB_00100d92:
        bp = (BIO *)0x0;
        iVar3 = 1;
        if ((uVar1 & 4) == 0) {
LAB_00100da5:
          for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar6), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            pCVar8 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar6,iVar3);
            iVar4 = CMS_SignerInfo_verify_content(pCVar8,out_00);
            if (iVar4 < 1) {
              iVar3 = 0;
              ERR_new();
              ERR_set_debug("crypto/cms/cms_smime.c",0x1d2,"CMS_verify");
              ERR_set_error(0x2e,0x6d,0);
              goto joined_r0x00100824;
            }
          }
          iVar3 = 1;
        }
      }
      goto joined_r0x00100824;
    }
    bp = (BIO *)0x0;
    if ((uVar1 & 0x80) != 0) {
      local_b8 = (BIO *)0x0;
      iVar3 = 0;
      goto LAB_0010082a;
    }
    iVar3 = 0;
    goto LAB_001009d0;
  }
  iVar3 = BIO_method_type(dcont);
  local_b8 = dcont;
  if (iVar3 != 0x401) {
    if ((uVar1 & 0x80) == 0) goto LAB_001008ec;
    out_00 = CMS_dataInit(cms,dcont);
    if (out_00 != (BIO *)0x0) goto LAB_00100edc;
    bp = (BIO *)0x0;
    iVar3 = 0;
    goto LAB_00100840;
  }
  lVar17 = BIO_ctrl(dcont,3,0,&local_48);
  if ((lVar17 == 0) || (local_b8 = BIO_new_mem_buf(local_48,(int)lVar17), local_b8 != (BIO *)0x0)) {
    if ((uVar1 & 0x80) != 0) {
      out_00 = CMS_dataInit(cms,local_b8);
      if (out_00 == (BIO *)0x0) {
        bp = (BIO *)0x0;
        iVar3 = 0;
        goto LAB_0010082a;
      }
LAB_00100edc:
      iVar3 = cms_copy_content(out,out_00,uVar1);
      local_b0 = 0x80;
      if (iVar3 != 0) goto LAB_00100d92;
      bp = (BIO *)0x0;
      iVar3 = 0;
      goto LAB_0010082a;
    }
LAB_001008ec:
    if (out != (BIO *)0x0) {
      bp = out;
      if ((uVar1 & 1) != 0) {
        pBVar13 = BIO_s_mem();
        bp = BIO_new(pBVar13);
        BIO_ctrl(bp,0x82,0,(void *)0x0);
        goto LAB_00100e25;
      }
LAB_00100907:
      out_00 = CMS_dataInit(cms,bp);
      if (out_00 == (BIO *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = SMIME_crlf_copy(dcont,out_00,uVar1 & 0xfffffffe);
        if (iVar3 != 0) {
          if (((uVar1 & 1) == 0) || (iVar3 = SMIME_text(bp,out), iVar3 != 0)) {
            local_b0 = uVar1 & 4;
            if ((uVar1 & 4) == 0) goto LAB_00100da5;
            iVar3 = 1;
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x1c1,"CMS_verify");
            ERR_set_error(0x2e,0x8c,0);
            iVar3 = 0;
          }
        }
      }
      goto LAB_001006d0;
    }
    pBVar13 = BIO_s_null();
    bp = BIO_new(pBVar13);
LAB_00100e25:
    if (bp != (BIO *)0x0) goto LAB_00100907;
    out_00 = (BIO *)0x0;
    iVar3 = 0;
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x1b2,"CMS_verify");
    ERR_set_error(0x2e,0x8002e,0);
    goto LAB_00100e6c;
  }
  ERR_new();
  iVar3 = 0;
  ERR_set_debug("crypto/cms/cms_smime.c",0x1a1,"CMS_verify");
  ERR_set_error(0x2e,0x80020,0);
  goto LAB_00100717;
LAB_00100c5d:
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x114,"cms_signerinfo_verify_cert");
  ERR_set_error(0x2e,0x8000b,0);
  X509_STORE_CTX_free((X509_STORE_CTX *)0x0);
  goto LAB_001009ad;
LAB_00100975:
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x119,"cms_signerinfo_verify_cert");
  ERR_set_error(0x2e,0x8d,0);
  X509_STORE_CTX_free(ctx);
  goto LAB_001009ad;
LAB_00100cf5:
  iVar3 = X509_STORE_CTX_get_error(ctx);
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x123,"cms_signerinfo_verify_cert");
  pcVar12 = X509_verify_cert_error_string((long)iVar3);
  ERR_set_error(0x2e,100,"Verify error: %s",pcVar12);
  X509_STORE_CTX_free(ctx);
LAB_001009ad:
  bp = (BIO *)0x0;
  local_b8 = (BIO *)0x0;
  out_00 = (BIO *)0x0;
  iVar3 = 0;
  local_b0 = uVar1 & 0x80;
joined_r0x00100824:
  if (local_b0 == 0) {
    if (dcont == (BIO *)0x0) goto LAB_001009d0;
    if (bp == (BIO *)0x0) {
LAB_00100e6c:
      bp = (BIO *)0x0;
      BIO_free_all(out_00);
    }
    else {
LAB_001006d0:
      do {
        pBVar7 = BIO_pop(out_00);
        BIO_free(out_00);
        if (pBVar7 == (BIO *)0x0) break;
        out_00 = pBVar7;
      } while (pBVar7 != bp);
    }
    if (dcont != local_b8) {
      BIO_free(local_b8);
    }
  }
  else {
LAB_0010082a:
    if ((dcont == (BIO *)0x0) || (local_b8 != dcont)) {
LAB_001009d0:
      BIO_free_all(out_00);
    }
    else {
LAB_00100840:
      do {
        pBVar7 = BIO_pop(out_00);
        BIO_free(out_00);
        if (pBVar7 == (BIO *)0x0) break;
        out_00 = pBVar7;
      } while (dcont != pBVar7);
    }
  }
  if (out != bp) {
    BIO_free_all(bp);
  }
LAB_00100717:
  if (local_a0 != (undefined8 *)0x0) {
    if (0 < iVar15) {
      puVar14 = local_a0;
      do {
        uVar5 = *puVar14;
        puVar14 = puVar14 + 1;
        OSSL_STACK_OF_X509_free(uVar5);
      } while (local_a0 + iVar15 != puVar14);
    }
    CRYPTO_free(local_a0);
  }
  OPENSSL_sk_pop_free(local_60,&X509_free);
  OPENSSL_sk_pop_free(local_58,&X509_CRL_free);
LAB_00100781:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int CMS_verify_receipt(CMS_ContentInfo *rcms,CMS_ContentInfo *ocms,stack_st_X509 *certs,
                      X509_STORE *store,uint flags)

{
  int iVar1;
  
  iVar1 = CMS_verify(rcms,certs,store,(BIO *)0x0,(BIO *)0x0,flags & 0xffffffbe);
  if (0 < iVar1) {
    iVar1 = ossl_cms_Receipt_verify(rcms,ocms);
    return iVar1;
  }
  return iVar1;
}



undefined8
CMS_decrypt_set1_pkey_and_peer
          (CMS_ContentInfo *param_1,EVP_PKEY *param_2,X509 *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  stack_st_CMS_RecipientInfo *psVar5;
  long lVar6;
  CMS_RecipientInfo *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_3c;
  
  psVar5 = CMS_get0_RecipientInfos(param_1);
  lVar6 = ossl_cms_get0_env_enc_content(param_1);
  if (lVar6 == 0) {
LAB_001012d0:
    local_3c = 0;
    iVar2 = ossl_cms_pkey_get_ri_type(param_2);
  }
  else {
    CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                      "crypto/cms/cms_smime.c",0x2d5);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    if (psVar5 == (stack_st_CMS_RecipientInfo *)0x0) goto LAB_001012d0;
    local_3c = *(int *)(lVar6 + 0x40);
    iVar2 = ossl_cms_pkey_get_ri_type(param_2);
  }
  if (iVar2 == -1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x2df,"CMS_decrypt_set1_pkey_and_peer");
    ERR_set_error(0x2e,0x7d,0);
    return 0;
  }
  bVar1 = false;
  iVar10 = 0;
  if (param_3 == (X509 *)0x0) {
    for (iVar10 = 0; iVar3 = OPENSSL_sk_num(psVar5), iVar10 < iVar3; iVar10 = iVar10 + 1) {
      pCVar7 = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar5,iVar10);
      iVar3 = CMS_RecipientInfo_type(pCVar7);
      iVar4 = ossl_cms_pkey_is_ri_type_supported(param_2,iVar3);
      if (iVar4 != 0) {
        if (iVar3 == 1) {
          uVar8 = CMS_RecipientInfo_kari_get0_reks(pCVar7);
          iVar3 = OPENSSL_sk_num(uVar8);
          if (0 < iVar3) {
            uVar8 = OPENSSL_sk_value(uVar8,0);
            CMS_RecipientInfo_kari_set0_pkey_and_peer(pCVar7,param_2,param_4);
            iVar3 = CMS_RecipientInfo_kari_decrypt(param_1,pCVar7,uVar8);
            CMS_RecipientInfo_kari_set0_pkey(pCVar7,0);
            if (0 < iVar3) {
              return 1;
            }
          }
        }
        else {
          iVar3 = EVP_PKEY_up_ref(param_2);
          if (iVar3 == 0) {
            return 0;
          }
          CMS_RecipientInfo_set0_pkey(pCVar7,param_2);
          iVar3 = CMS_RecipientInfo_decrypt(param_1,pCVar7);
          CMS_RecipientInfo_set0_pkey(pCVar7,(EVP_PKEY *)0x0);
          if ((0 < iVar3) && (local_3c != 0 || iVar2 != 0)) {
            return 1;
          }
        }
        bVar1 = true;
      }
    }
    if (local_3c == 0 && iVar2 == 0) {
      if (bVar1) {
LAB_001014ee:
        ERR_clear_error();
        return 1;
      }
      goto LAB_00101402;
    }
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar5);
    if (0 < iVar2) {
      do {
        pCVar7 = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar5,iVar10);
        iVar2 = CMS_RecipientInfo_type(pCVar7);
        iVar3 = ossl_cms_pkey_is_ri_type_supported(param_2,iVar2);
        if (iVar3 != 0) {
          if (iVar2 == 1) {
            uVar8 = CMS_RecipientInfo_kari_get0_reks(pCVar7);
            for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar8), iVar2 < iVar3; iVar2 = iVar2 + 1) {
              uVar9 = OPENSSL_sk_value(uVar8,iVar2);
              iVar3 = CMS_RecipientEncryptedKey_cert_cmp(uVar9,param_3);
              if (iVar3 == 0) {
                CMS_RecipientInfo_kari_set0_pkey_and_peer(pCVar7,param_2,param_4);
                iVar2 = CMS_RecipientInfo_kari_decrypt(param_1,pCVar7,uVar9);
                CMS_RecipientInfo_kari_set0_pkey(pCVar7,0);
                if (iVar2 < 1) {
                  return 0;
                }
                return 1;
              }
            }
          }
          else {
            iVar2 = CMS_RecipientInfo_ktri_cert_cmp(pCVar7,param_3);
            if (iVar2 == 0) {
              iVar2 = EVP_PKEY_up_ref(param_2);
              if (iVar2 == 0) {
                return 0;
              }
              CMS_RecipientInfo_set0_pkey(pCVar7,param_2);
              iVar2 = CMS_RecipientInfo_decrypt(param_1,pCVar7);
              CMS_RecipientInfo_set0_pkey(pCVar7,(EVP_PKEY *)0x0);
              if (local_3c != 0) {
                if (iVar2 < 1) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_smime.c",0x304,"CMS_decrypt_set1_pkey_and_peer");
                  ERR_set_error(0x2e,0x70,0);
                  return 0;
                }
                return 1;
              }
              goto LAB_001014ee;
            }
          }
          bVar1 = true;
        }
        iVar10 = iVar10 + 1;
        iVar2 = OPENSSL_sk_num(psVar5);
      } while (iVar10 < iVar2);
    }
  }
  if (bVar1) {
    return 0;
  }
LAB_00101402:
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x31a,"CMS_decrypt_set1_pkey_and_peer");
  ERR_set_error(0x2e,0x84,0);
  return 0;
}



int CMS_decrypt_set1_pkey(CMS_ContentInfo *cms,EVP_PKEY *pk,X509 *cert)

{
  int iVar1;
  
  iVar1 = CMS_decrypt_set1_pkey_and_peer();
  return iVar1;
}



int CMS_decrypt_set1_key(CMS_ContentInfo *cms,uchar *key,size_t keylen,uchar *id,size_t idlen)

{
  bool bVar1;
  int iVar2;
  stack_st_CMS_RecipientInfo *psVar3;
  CMS_RecipientInfo *pCVar4;
  int iVar5;
  
  psVar3 = CMS_get0_RecipientInfos(cms);
  if (id == (uchar *)0x0) {
    bVar1 = false;
    for (iVar2 = 0; iVar5 = OPENSSL_sk_num(psVar3), iVar2 < iVar5; iVar2 = iVar2 + 1) {
      pCVar4 = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar3,iVar2);
      iVar5 = CMS_RecipientInfo_type(pCVar4);
      if (iVar5 == 2) {
        CMS_RecipientInfo_set0_key(pCVar4,key,keylen);
        iVar5 = CMS_RecipientInfo_decrypt(cms,pCVar4);
        CMS_RecipientInfo_set0_key(pCVar4,(uchar *)0x0,0);
        if (0 < iVar5) {
          return 1;
        }
        ERR_clear_error();
        bVar1 = true;
      }
    }
    if (bVar1) {
      return 0;
    }
  }
  else {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(psVar3);
    if (0 < iVar2) {
      do {
        pCVar4 = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar3,iVar5);
        iVar2 = CMS_RecipientInfo_type(pCVar4);
        if ((iVar2 == 2) && (iVar2 = CMS_RecipientInfo_kekri_id_cmp(pCVar4,id,idlen), iVar2 == 0)) {
          CMS_RecipientInfo_set0_key(pCVar4,key,keylen);
          iVar2 = CMS_RecipientInfo_decrypt(cms,pCVar4);
          CMS_RecipientInfo_set0_key(pCVar4,(uchar *)0x0,0);
          if (iVar2 < 1) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x337,"CMS_decrypt_set1_key");
            ERR_set_error(0x2e,0x70,0);
            return 0;
          }
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(psVar3);
      } while (iVar5 < iVar2);
    }
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x33f,"CMS_decrypt_set1_key");
  ERR_set_error(0x2e,0x84,0);
  return 0;
}



int CMS_decrypt_set1_password(CMS_ContentInfo *cms,uchar *pass,ssize_t passlen)

{
  bool bVar1;
  int iVar2;
  stack_st_CMS_RecipientInfo *psVar3;
  long lVar4;
  CMS_RecipientInfo *ri;
  int iVar5;
  
  psVar3 = CMS_get0_RecipientInfos(cms);
  lVar4 = ossl_cms_get0_env_enc_content(cms);
  if (lVar4 != 0) {
    CRYPTO_clear_free(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),
                      "crypto/cms/cms_smime.c",0x34e);
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
  }
  bVar1 = false;
  iVar5 = 0;
  do {
    iVar2 = OPENSSL_sk_num(psVar3);
    if (iVar2 <= iVar5) {
      if (!bVar1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",0x362,"CMS_decrypt_set1_password");
        ERR_set_error(0x2e,0x84,0);
      }
      return 0;
    }
    ri = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar3,iVar5);
    iVar2 = CMS_RecipientInfo_type(ri);
    if (iVar2 == 3) {
      CMS_RecipientInfo_set0_password(ri,pass,passlen);
      iVar2 = CMS_RecipientInfo_decrypt(cms,ri);
      CMS_RecipientInfo_set0_password(ri,(uchar *)0x0,0);
      if (0 < iVar2) {
        return 1;
      }
      bVar1 = true;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



int CMS_decrypt(CMS_ContentInfo *cms,EVP_PKEY *pkey,X509 *cert,BIO *dcont,BIO *out,uint flags)

{
  int iVar1;
  ASN1_OBJECT *o;
  long lVar2;
  BIO *a;
  BIO *pBVar3;
  ASN1_OCTET_STRING **ppAVar4;
  
  o = CMS_get0_type(cms);
  iVar1 = OBJ_obj2nid(o);
  if ((iVar1 == 0x17) || (iVar1 == 0x423)) {
    if (dcont == (BIO *)0x0) {
      ppAVar4 = CMS_get0_content(cms);
      if ((ppAVar4 == (ASN1_OCTET_STRING **)0x0) || (*ppAVar4 == (ASN1_OCTET_STRING *)0x0)) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",0x54,"check_content");
        ERR_set_error(0x2e,0x7f,0);
        return 0;
      }
      lVar2 = ossl_cms_get0_env_enc_content(cms);
      *(uint *)(lVar2 + 0x40) = flags >> 0x11 & 1;
      *(uint *)(lVar2 + 0x44) = (uint)(cert == (X509 *)0x0);
      if (pkey == (EVP_PKEY *)0x0 && cert == (X509 *)0x0) {
        if (out == (BIO *)0x0) {
          return 1;
        }
        a = CMS_dataInit(cms,(BIO *)0x0);
        if (a == (BIO *)0x0) {
          return 0;
        }
        iVar1 = cms_copy_content(out,a,flags);
        goto LAB_00101b20;
      }
    }
    else {
      lVar2 = ossl_cms_get0_env_enc_content();
      *(uint *)(lVar2 + 0x40) = flags >> 0x11 & 1;
      *(uint *)(lVar2 + 0x44) = (uint)(cert == (X509 *)0x0);
      if (pkey == (EVP_PKEY *)0x0 && cert == (X509 *)0x0) {
        a = CMS_dataInit(cms,dcont);
        if (a == (BIO *)0x0) {
          return 0;
        }
        iVar1 = cms_copy_content(out,a,flags);
        goto LAB_00101a08;
      }
    }
    if (((pkey == (EVP_PKEY *)0x0) || (iVar1 = CMS_decrypt_set1_pkey(cms,pkey,cert), iVar1 != 0)) &&
       (a = CMS_dataInit(cms,dcont), a != (BIO *)0x0)) {
      iVar1 = cms_copy_content(out,a,flags);
      if (dcont == (BIO *)0x0) {
LAB_00101b20:
        BIO_free_all(a);
        return iVar1;
      }
LAB_00101a08:
      do {
        pBVar3 = BIO_pop(a);
        BIO_free(a);
        if (pBVar3 == (BIO *)0x0) {
          return iVar1;
        }
        a = pBVar3;
      } while (dcont != pBVar3);
      return iVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x371,"CMS_decrypt");
    ERR_set_error(0x2e,0x92,0);
  }
  return 0;
}



int CMS_final(CMS_ContentInfo *cms,BIO *data,BIO *dcont,uint flags)

{
  int iVar1;
  BIO *out;
  BIO *pBVar2;
  int iVar3;
  
  out = CMS_dataInit(cms,dcont);
  if (out == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x38b,"CMS_final");
    ERR_set_error(0x2e,0x68,0);
    return 0;
  }
  iVar1 = SMIME_crlf_copy(data,out,flags);
  if (iVar1 != 0) {
    BIO_ctrl(out,0xb,0,(void *)0x0);
    iVar3 = 1;
    iVar1 = CMS_dataFinal(cms,out);
    if (iVar1 != 0) goto LAB_00101bda;
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x396,"CMS_final");
    ERR_set_error(0x2e,0x67,0);
  }
  iVar3 = 0;
LAB_00101bda:
  if (dcont == (BIO *)0x0) {
    BIO_free_all(out);
    return iVar3;
  }
  do {
    pBVar2 = BIO_pop(out);
    BIO_free(out);
    if (pBVar2 == (BIO *)0x0) {
      return iVar3;
    }
    out = pBVar2;
  } while (dcont != pBVar2);
  return iVar3;
}



CMS_ContentInfo *
CMS_data_create_ex(BIO *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  CMS_ContentInfo *cms;
  
  cms = (CMS_ContentInfo *)ossl_cms_Data_create(param_3,param_4);
  if (cms == (CMS_ContentInfo *)0x0) {
    return (CMS_ContentInfo *)0x0;
  }
  if (((param_2 & 0x1000) == 0) && (iVar1 = CMS_final(cms,param_1,(BIO *)0x0,param_2), iVar1 == 0))
  {
    CMS_ContentInfo_free(cms);
    return (CMS_ContentInfo *)0x0;
  }
  return cms;
}



CMS_ContentInfo * CMS_data_create(BIO *in,uint flags)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_data_create_ex(in,flags,0,0);
  return pCVar1;
}



CMS_ContentInfo *
CMS_digest_create_ex
          (BIO *param_1,EVP_MD *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  CMS_ContentInfo *cms;
  
  if (param_2 == (EVP_MD *)0x0) {
    param_2 = EVP_sha1();
  }
  cms = (CMS_ContentInfo *)ossl_cms_DigestedData_create(param_2,param_4,param_5);
  if (cms == (CMS_ContentInfo *)0x0) {
    return (CMS_ContentInfo *)0x0;
  }
  if ((param_3 & 0x40) == 0) {
    CMS_set_detached(cms,0);
  }
  if (((param_3 & 0x1000) == 0) && (iVar1 = CMS_final(cms,param_1,(BIO *)0x0,param_3), iVar1 == 0))
  {
    CMS_ContentInfo_free(cms);
    return (CMS_ContentInfo *)0x0;
  }
  return cms;
}



CMS_ContentInfo * CMS_digest_create(BIO *in,EVP_MD *md,uint flags)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_digest_create_ex();
  return pCVar1;
}



CMS_ContentInfo *
CMS_EncryptedData_encrypt_ex
          (BIO *param_1,EVP_CIPHER *param_2,uchar *param_3,size_t param_4,uint param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  CMS_ContentInfo *cms;
  
  if (param_2 == (EVP_CIPHER *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0xe9,"CMS_EncryptedData_encrypt_ex");
    ERR_set_error(0x2e,0x7e,0);
  }
  else {
    cms = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_6,param_7);
    if (cms != (CMS_ContentInfo *)0x0) {
      iVar1 = CMS_EncryptedData_set1_key(cms,param_2,param_3,param_4);
      if (iVar1 != 0) {
        if ((param_5 & 0x40) == 0) {
          CMS_set_detached(cms,0);
        }
        if ((param_5 & 0x5000) != 0) {
          return cms;
        }
        iVar1 = CMS_final(cms,param_1,(BIO *)0x0,param_5);
        if (iVar1 != 0) {
          return cms;
        }
      }
      CMS_ContentInfo_free(cms);
    }
  }
  return (CMS_ContentInfo *)0x0;
}



CMS_ContentInfo *
CMS_EncryptedData_encrypt(BIO *in,EVP_CIPHER *cipher,uchar *key,size_t keylen,uint flags)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_EncryptedData_encrypt_ex();
  return pCVar1;
}



CMS_ContentInfo *
CMS_sign_ex(X509 *param_1,EVP_PKEY *param_2,undefined8 param_3,BIO *param_4,uint param_5,
           undefined8 param_6)

{
  int iVar1;
  int iVar2;
  CMS_ContentInfo *cms;
  CMS_SignerInfo *pCVar3;
  X509 *cert;
  ASN1_OBJECT *oid;
  undefined8 uVar4;
  
  cms = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_6);
  if ((cms == (CMS_ContentInfo *)0x0) || (iVar1 = CMS_SignedData_init(cms), iVar1 == 0)) {
    ERR_new();
    uVar4 = 0x20b;
LAB_00101fc9:
    ERR_set_debug("crypto/cms/cms_smime.c",uVar4,"CMS_sign_ex");
    ERR_set_error(0x2e,0x8002e,0);
  }
  else {
    if ((param_5 & 0x80000) != 0) {
      oid = OBJ_nid2obj(0x313);
      iVar1 = CMS_set1_eContentType(cms,oid);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0x211;
        goto LAB_00101fc9;
      }
    }
    if ((param_2 == (EVP_PKEY *)0x0) ||
       (pCVar3 = CMS_add1_signer(cms,param_1,param_2,(EVP_MD *)0x0,param_5),
       pCVar3 != (CMS_SignerInfo *)0x0)) {
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_3), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        cert = (X509 *)OPENSSL_sk_value(param_3,iVar1);
        iVar2 = CMS_add1_cert(cms,cert);
        if (iVar2 == 0) {
          ERR_new();
          uVar4 = 0x21e;
          goto LAB_00101fc9;
        }
      }
      if ((param_5 & 0x40) == 0) {
        CMS_set_detached(cms,0);
      }
      if ((param_5 & 0x5000) != 0) {
        return cms;
      }
      iVar1 = CMS_final(cms,param_4,(BIO *)0x0,param_5);
      if (iVar1 != 0) {
        return cms;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_smime.c",0x216,"CMS_sign_ex");
      ERR_set_error(0x2e,99,0);
    }
  }
  CMS_ContentInfo_free(cms);
  return (CMS_ContentInfo *)0x0;
}



CMS_ContentInfo * CMS_sign(X509 *signcert,EVP_PKEY *pkey,stack_st_X509 *certs,BIO *data,uint flags)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_sign_ex();
  return pCVar1;
}



CMS_ContentInfo *
CMS_sign_receipt(CMS_SignerInfo *si,X509 *signcert,EVP_PKEY *pkey,stack_st_X509 *certs,uint flags)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CMS_ContentInfo *cms;
  ASN1_OBJECT *oid;
  CMS_SignerInfo *pCVar4;
  ASN1_OCTET_STRING *a;
  BIO *data;
  ASN1_OCTET_STRING **ppAVar5;
  uint flags_00;
  
  flags_00 = flags & 0xffffeffe | 0x40c0;
  if ((pkey == (EVP_PKEY *)0x0) || (signcert == (X509 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x246,"CMS_sign_receipt");
    ERR_set_error(0x2e,0xae,0);
    return (CMS_ContentInfo *)0x0;
  }
  uVar2 = ossl_cms_ctx_get0_propq();
  uVar3 = ossl_cms_ctx_get0_libctx();
  cms = (CMS_ContentInfo *)CMS_sign_ex(0,0,certs,0,flags_00,uVar3,uVar2);
  if (cms != (CMS_ContentInfo *)0x0) {
    oid = OBJ_nid2obj(0xcc);
    iVar1 = CMS_set1_eContentType(cms,oid);
    if (iVar1 != 0) {
      pCVar4 = CMS_add1_signer(cms,signcert,pkey,(EVP_MD *)0x0,flags_00);
      if (pCVar4 == (CMS_SignerInfo *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",600,"CMS_sign_receipt");
        ERR_set_error(0x2e,99,0);
      }
      else {
        a = (ASN1_OCTET_STRING *)ossl_cms_encode_Receipt();
        if (a != (ASN1_OCTET_STRING *)0x0) {
          data = BIO_new_mem_buf(a->data,a->length);
          if (data == (BIO *)0x0) {
            BIO_free((BIO *)0x0);
          }
          else {
            iVar1 = ossl_cms_msgSigDigest_add1(pCVar4,si);
            if (((iVar1 != 0) && (iVar1 = CMS_final(cms,data,(BIO *)0x0,flags_00), iVar1 != 0)) &&
               (ppAVar5 = CMS_get0_content(cms), ppAVar5 != (ASN1_OCTET_STRING **)0x0)) {
              *ppAVar5 = a;
              BIO_free(data);
              return cms;
            }
            BIO_free(data);
          }
          goto LAB_00102171;
        }
      }
    }
  }
  a = (ASN1_OCTET_STRING *)0x0;
  BIO_free((BIO *)0x0);
LAB_00102171:
  CMS_ContentInfo_free(cms);
  ASN1_OCTET_STRING_free(a);
  return (CMS_ContentInfo *)0x0;
}



CMS_ContentInfo *
CMS_encrypt_ex(undefined8 param_1,BIO *param_2,undefined8 param_3,uint param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  CMS_ContentInfo *cms;
  X509 *recip;
  CMS_RecipientInfo *pCVar4;
  undefined8 uVar5;
  
  uVar3 = EVP_CIPHER_get_flags(param_3);
  if ((uVar3 & 0x200000) == 0) {
    cms = (CMS_ContentInfo *)CMS_EnvelopedData_create_ex(param_3,param_5,param_6);
  }
  else {
    cms = (CMS_ContentInfo *)CMS_AuthEnvelopedData_create_ex();
  }
  iVar2 = 0;
  if (cms == (CMS_ContentInfo *)0x0) {
    ERR_new();
    uVar5 = 0x28d;
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      recip = (X509 *)OPENSSL_sk_value(param_1,iVar2);
      pCVar4 = CMS_add1_recipient_cert(cms,recip,param_4);
      if (pCVar4 == (CMS_RecipientInfo *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",0x293,"CMS_encrypt_ex");
        ERR_set_error(0x2e,0x89,0);
        goto LAB_001023b8;
      }
    }
    if ((param_4 & 0x40) == 0) {
      CMS_set_detached(cms,0);
    }
    if ((param_4 & 0x5000) != 0) {
      return cms;
    }
    iVar2 = CMS_final(cms,param_2,(BIO *)0x0,param_4);
    if (iVar2 != 0) {
      return cms;
    }
    ERR_new();
    uVar5 = 0x29f;
  }
  ERR_set_debug("crypto/cms/cms_smime.c",uVar5,"CMS_encrypt_ex");
  ERR_set_error(0x2e,0x8002e,0);
LAB_001023b8:
  CMS_ContentInfo_free(cms);
  return (CMS_ContentInfo *)0x0;
}



CMS_ContentInfo * CMS_encrypt(stack_st_X509 *certs,BIO *in,EVP_CIPHER *cipher,uint flags)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_encrypt_ex();
  return pCVar1;
}



bool CMS_final_digest(CMS_ContentInfo *param_1,undefined8 param_2,undefined4 param_3,BIO *param_4)

{
  bool bVar1;
  int iVar2;
  BIO *bp;
  BIO *pBVar3;
  
  bp = CMS_dataInit(param_1,param_4);
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x3ab,"CMS_final_digest");
    ERR_set_error(0x2e,0x68,0);
    return false;
  }
  BIO_ctrl(bp,0xb,0,(void *)0x0);
  iVar2 = ossl_cms_DataFinal(param_1,bp,param_2,param_3);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x3b2,"CMS_final_digest");
    ERR_set_error(0x2e,0x67,0);
  }
  bVar1 = iVar2 != 0;
  if (param_4 != (BIO *)0x0) {
    do {
      pBVar3 = BIO_pop(bp);
      BIO_free(bp);
      if (pBVar3 == (BIO *)0x0) {
        return bVar1;
      }
      bp = pBVar3;
    } while (param_4 != pBVar3);
    return bVar1;
  }
  BIO_free_all(bp);
  return bVar1;
}



int CMS_uncompress(CMS_ContentInfo *cms,BIO *dcont,BIO *out,uint flags)

{
  ERR_new();
  ERR_set_debug("crypto/cms/cms_smime.c",0x3ed,"CMS_uncompress");
  ERR_set_error(0x2e,0x97,0);
  return 0;
}



CMS_ContentInfo * CMS_compress(BIO *in,int comp_nid,uint flags)

{
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  
  ERR_new(in,CONCAT44(in_register_00000034,comp_nid),CONCAT44(in_register_00000014,flags));
  ERR_set_debug("crypto/cms/cms_smime.c",0x3f3,"CMS_compress");
  ERR_set_error(0x2e,0x97,0);
  return (CMS_ContentInfo *)0x0;
}


