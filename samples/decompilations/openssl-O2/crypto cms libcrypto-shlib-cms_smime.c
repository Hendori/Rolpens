
BIO * cms_get_text_bio(BIO *param_1,uint param_2)

{
  BIO_METHOD *pBVar1;
  BIO *pBVar2;
  
  if (param_1 == (BIO *)0x0) {
    pBVar1 = BIO_s_null();
    pBVar2 = BIO_new(pBVar1);
    return pBVar2;
  }
  if ((param_2 & 1) == 0) {
    return param_1;
  }
  pBVar1 = BIO_s_mem();
  pBVar2 = BIO_new(pBVar1);
  BIO_ctrl(pBVar2,0x82,0,(void *)0x0);
  return pBVar2;
}



undefined8 cms_copy_content(BIO *param_1,BIO *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  BIO *b;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)cms_get_text_bio(param_1,param_3);
  if (b == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x2b,"cms_copy_content");
    ERR_set_error(0x2e,0x8002e,0);
  }
  else {
    do {
      iVar1 = BIO_read(param_2,auStack_1048,0x1000);
      if (iVar1 < 1) {
        iVar2 = BIO_method_type(param_2);
        if (((iVar2 != 0x20a) || (lVar3 = BIO_ctrl(param_2,0x71,0,(void *)0x0), 0 < lVar3)) &&
           (iVar1 == 0)) {
          if (((param_3 & 1) == 0) || (iVar1 = SMIME_text(b,param_1), iVar1 != 0)) {
            uVar4 = 1;
            goto LAB_00100122;
          }
          ERR_new();
          ERR_set_debug("crypto/cms/cms_smime.c",0x42,"cms_copy_content");
          ERR_set_error(0x2e,0x8c,0);
        }
        break;
      }
      iVar2 = BIO_write(b,auStack_1048,iVar1);
    } while (iVar2 == iVar1);
  }
  uVar4 = 0;
LAB_00100122:
  if (param_1 != b) {
    BIO_free(b);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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
  stack_st_X509_CRL *sk;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  stack_st_CMS_SignerInfo *psVar5;
  BIO *pBVar6;
  BIO *icont;
  BIO *out_00;
  ASN1_OBJECT *o;
  CMS_SignerInfo *pCVar7;
  undefined8 uVar8;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar9;
  ASN1_OCTET_STRING **ppAVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined8 *local_b8;
  BIO *local_b0;
  uint local_9c;
  ulong local_88;
  stack_st_X509 *local_60;
  stack_st_X509_CRL *local_58;
  X509 *local_50;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (stack_st_X509 *)0x0;
  local_58 = (stack_st_X509_CRL *)0x0;
  uVar4 = ossl_cms_get0_cmsctx();
  local_9c = flags;
  if (dcont == (BIO *)0x0) {
    ppAVar10 = CMS_get0_content(cms);
    if ((ppAVar10 == (ASN1_OCTET_STRING **)0x0) || (*ppAVar10 == (ASN1_OCTET_STRING *)0x0)) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("crypto/cms/cms_smime.c",0x54,"check_content");
      ERR_set_error(0x2e,0x7f,0);
      goto LAB_00100768;
    }
  }
  else if ((flags & 0x80) == 0) {
    o = CMS_get0_eContentType(cms);
    iVar1 = OBJ_obj2nid(o);
    if (iVar1 == 0x313) {
      local_9c = flags | 0x80000;
    }
  }
  iVar13 = 0;
  iVar3 = 0;
  psVar5 = CMS_get0_SignerInfos(cms);
  iVar1 = OPENSSL_sk_num(psVar5);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x14f,"CMS_verify");
    ERR_set_error(0x2e,0x87,0);
LAB_001007ed:
    local_b8 = (undefined8 *)0x0;
    icont = (BIO *)0x0;
    local_b0 = (BIO *)0x0;
    out_00 = (BIO *)0x0;
    iVar1 = 0;
joined_r0x001006a0:
    if ((local_9c & 0x80) == 0) {
      if (dcont == (BIO *)0x0) goto LAB_001009c0;
      if (icont == (BIO *)0x0) {
LAB_00100e26:
        icont = (BIO *)0x0;
        BIO_free_all(out_00);
      }
      else {
LAB_001006c0:
        do {
          pBVar6 = BIO_pop(out_00);
          BIO_free(out_00);
          if (pBVar6 == (BIO *)0x0) break;
          out_00 = pBVar6;
        } while (pBVar6 != icont);
      }
      if (dcont != local_b0) {
        BIO_free(local_b0);
      }
    }
    else {
LAB_00100810:
      if ((dcont == (BIO *)0x0) || (dcont != local_b0)) {
LAB_001009c0:
        BIO_free_all(out_00);
      }
      else {
LAB_00100828:
        do {
          pBVar6 = BIO_pop(out_00);
          BIO_free(out_00);
          if (pBVar6 == (BIO *)0x0) break;
          out_00 = pBVar6;
        } while (dcont != pBVar6);
      }
    }
    if (out != icont) {
      BIO_free_all(icont);
    }
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(psVar5), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      pCVar7 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar5);
      CMS_SignerInfo_get0_algs
                (pCVar7,(EVP_PKEY **)0x0,&local_50,(X509_ALGOR **)0x0,(X509_ALGOR **)0x0);
      iVar13 = (iVar13 + 1) - (uint)(local_50 == (X509 *)0x0);
    }
    iVar1 = OPENSSL_sk_num(psVar5);
    if (iVar1 == iVar13) {
      iVar1 = OPENSSL_sk_num(psVar5);
      if (iVar1 != iVar13) {
LAB_001007bd:
        ERR_new();
        ERR_set_debug("crypto/cms/cms_smime.c",0x15e,"CMS_verify");
        ERR_set_error(0x2e,0x8a,0);
        goto LAB_001007ed;
      }
    }
    else {
      iVar1 = CMS_set1_signers_certs(cms,certs,local_9c);
      iVar13 = iVar13 + iVar1;
      iVar1 = OPENSSL_sk_num(psVar5);
      if (iVar1 != iVar13) goto LAB_001007bd;
    }
    uVar2 = flags & 0x100000;
    if ((local_9c & 0x20) == 0) {
      if (uVar2 != 0) goto LAB_0010064c;
      local_b8 = (undefined8 *)0x0;
LAB_00100671:
      iVar1 = ossl_cms_get1_certs_ex(cms);
      if (((iVar1 == 0) ||
          ((iVar1 = OPENSSL_sk_num(certs), 0 < iVar1 &&
           (iVar1 = ossl_x509_add_certs_new(&local_60,certs,5), iVar1 == 0)))) ||
         (((local_9c & 0x2000) == 0 && (iVar1 = ossl_cms_get1_crls_ex(cms), iVar1 == 0)))) {
LAB_00100690:
        icont = (BIO *)0x0;
        local_b0 = (BIO *)0x0;
        out_00 = (BIO *)0x0;
        iVar1 = 0;
        goto joined_r0x001006a0;
      }
      uVar14 = 0;
      if (0 < iVar13) {
        do {
          local_88 = (ulong)iVar13;
          pCVar7 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar5,uVar14 & 0xffffffff);
          sk = local_58;
          psVar9 = local_60;
          puVar12 = local_b8 + uVar14;
          if (local_b8 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          ossl_cms_ctx_get0_propq(uVar4);
          uVar8 = ossl_cms_ctx_get0_libctx(uVar4);
          ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar8);
          if (ctx == (X509_STORE_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x114,"cms_signerinfo_verify_cert");
            ERR_set_error(0x2e,0x8000b,0);
            X509_STORE_CTX_free((X509_STORE_CTX *)0x0);
            goto LAB_00100690;
          }
          CMS_SignerInfo_get0_algs
                    (pCVar7,(EVP_PKEY **)0x0,&local_48,(X509_ALGOR **)0x0,(X509_ALGOR **)0x0);
          iVar1 = X509_STORE_CTX_init(ctx,store,local_48,psVar9);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x119,"cms_signerinfo_verify_cert");
            ERR_set_error(0x2e,0x8d,0);
            X509_STORE_CTX_free(ctx);
            goto LAB_00100690;
          }
          X509_STORE_CTX_set_default(ctx,"smime_sign");
          if (sk != (stack_st_X509_CRL *)0x0) {
            X509_STORE_CTX_set0_crls(ctx,sk);
          }
          iVar1 = X509_verify_cert(ctx);
          if (iVar1 < 1) {
            iVar1 = X509_STORE_CTX_get_error(ctx);
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x123,"cms_signerinfo_verify_cert");
            X509_verify_cert_error_string((long)iVar1);
            ERR_set_error(0x2e,100,"Verify error: %s");
            X509_STORE_CTX_free(ctx);
            goto LAB_00100690;
          }
          if (puVar12 != (undefined8 *)0x0) {
            psVar9 = X509_STORE_CTX_get1_chain(ctx);
            *puVar12 = psVar9;
          }
          X509_STORE_CTX_free(ctx);
          uVar14 = uVar14 + 1;
        } while (uVar14 != local_88);
        if (((local_9c & 8) == 0) || (uVar2 != 0)) goto LAB_00100881;
      }
    }
    else {
      if (uVar2 != 0) {
LAB_0010064c:
        local_b8 = (undefined8 *)CRYPTO_zalloc((long)iVar13 << 3,"crypto/cms/cms_smime.c",0x168);
        if (local_b8 == (undefined8 *)0x0) goto LAB_001007ed;
        goto LAB_00100671;
      }
      local_b8 = (undefined8 *)0x0;
      if (((local_9c & 8) == 0) && (0 < iVar13)) {
LAB_00100881:
        local_88 = (ulong)iVar13;
        lVar11 = 0;
        do {
          pCVar7 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar5);
          iVar1 = CMS_signed_get_attr_count(pCVar7);
          if ((-1 < iVar1) &&
             ((iVar1 = CMS_SignerInfo_verify(pCVar7), iVar1 < 1 ||
              ((uVar2 != 0 && (iVar1 = ossl_cms_check_signing_certs(pCVar7), iVar1 < 1))))))
          goto LAB_00100690;
          lVar11 = lVar11 + 1;
        } while (local_88 != lVar11);
      }
    }
    if (dcont == (BIO *)0x0) {
      out_00 = CMS_dataInit(cms,(BIO *)0x0);
      if (out_00 != (BIO *)0x0) {
        local_b0 = (BIO *)0x0;
LAB_00100d47:
        icont = (BIO *)0x0;
        iVar1 = cms_copy_content(out,out_00,local_9c);
        if ((iVar1 == 0) || (iVar1 = 1, (local_9c & 4) != 0)) goto joined_r0x001006a0;
LAB_00100d81:
        for (iVar1 = 0; iVar3 = OPENSSL_sk_num(psVar5), iVar1 < iVar3; iVar1 = iVar1 + 1) {
          pCVar7 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar5,iVar1);
          iVar3 = CMS_SignerInfo_verify_content(pCVar7,out_00);
          if (iVar3 < 1) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("crypto/cms/cms_smime.c",0x1d2,"CMS_verify");
            ERR_set_error(0x2e,0x6d,0);
            goto joined_r0x001006a0;
          }
        }
        iVar1 = 1;
        goto joined_r0x001006a0;
      }
      icont = (BIO *)0x0;
      if ((local_9c & 0x80) == 0) {
        iVar1 = 0;
        goto LAB_001009c0;
      }
      local_b0 = (BIO *)0x0;
      iVar1 = 0;
      goto LAB_00100810;
    }
    iVar1 = BIO_method_type(dcont);
    local_b0 = dcont;
    if (iVar1 != 0x401) {
      if ((local_9c & 0x80) == 0) goto LAB_00100926;
      out_00 = CMS_dataInit(cms,dcont);
      if (out_00 != (BIO *)0x0) goto LAB_00100d47;
      icont = (BIO *)0x0;
      iVar1 = 0;
      goto LAB_00100828;
    }
    lVar11 = BIO_ctrl(dcont,3,0,&local_48);
    if ((lVar11 == 0) || (local_b0 = BIO_new_mem_buf(local_48,(int)lVar11), local_b0 != (BIO *)0x0))
    {
      if ((local_9c & 0x80) != 0) {
        out_00 = CMS_dataInit(cms,local_b0);
        if (out_00 == (BIO *)0x0) {
          icont = (BIO *)0x0;
          iVar1 = 0;
          goto LAB_00100810;
        }
        goto LAB_00100d47;
      }
LAB_00100926:
      icont = (BIO *)cms_get_text_bio(out,local_9c);
      if (icont == (BIO *)0x0) {
        ERR_new();
        out_00 = (BIO *)0x0;
        iVar1 = 0;
        ERR_set_debug("crypto/cms/cms_smime.c",0x1b2,"CMS_verify");
        ERR_set_error(0x2e,0x8002e,0);
        goto LAB_00100e26;
      }
      out_00 = CMS_dataInit(cms,icont);
      if (out_00 == (BIO *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = SMIME_crlf_copy(dcont,out_00,local_9c & 0xfffffffe);
        if (iVar1 != 0) {
          if (((local_9c & 1) == 0) || (iVar1 = SMIME_text(icont,out), iVar1 != 0)) {
            if ((local_9c & 4) == 0) goto LAB_00100d81;
            iVar1 = 1;
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_smime.c",0x1c1,"CMS_verify");
            ERR_set_error(0x2e,0x8c,0);
            iVar1 = 0;
          }
        }
      }
      goto LAB_001006c0;
    }
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/cms/cms_smime.c",0x1a1,"CMS_verify");
    ERR_set_error(0x2e,0x80020,0);
  }
  if (local_b8 != (undefined8 *)0x0) {
    if (0 < iVar13) {
      puVar12 = local_b8;
      do {
        uVar4 = *puVar12;
        puVar12 = puVar12 + 1;
        OSSL_STACK_OF_X509_free(uVar4);
      } while (puVar12 != local_b8 + iVar13);
    }
    CRYPTO_free(local_b8);
  }
  OPENSSL_sk_pop_free(local_60,&X509_free);
  OPENSSL_sk_pop_free(local_58,&X509_CRL_free);
LAB_00100768:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
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
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  stack_st_CMS_RecipientInfo *psVar6;
  long lVar7;
  CMS_RecipientInfo *ri;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_40;
  
  psVar6 = CMS_get0_RecipientInfos(param_1);
  lVar7 = ossl_cms_get0_env_enc_content(param_1);
  if (lVar7 != 0) {
    CRYPTO_clear_free(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                      "crypto/cms/cms_smime.c",0x2d5);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    if (psVar6 != (stack_st_CMS_RecipientInfo *)0x0) {
      local_40 = *(int *)(lVar7 + 0x40);
      goto LAB_001010b0;
    }
  }
  local_40 = 0;
LAB_001010b0:
  iVar10 = 0;
  iVar3 = ossl_cms_pkey_get_ri_type(param_2);
  bVar1 = false;
  if (iVar3 == -1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x2df,"CMS_decrypt_set1_pkey_and_peer");
    ERR_set_error(0x2e,0x7d,0);
  }
  else {
    iVar4 = OPENSSL_sk_num(psVar6);
    bVar2 = false;
    if (0 < iVar4) {
      do {
        bVar1 = bVar2;
        ri = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar6,iVar10);
        iVar4 = CMS_RecipientInfo_type(ri);
        iVar5 = ossl_cms_pkey_is_ri_type_supported(param_2,iVar4);
        if (iVar5 != 0) {
          if (iVar4 == 1) {
            uVar8 = CMS_RecipientInfo_kari_get0_reks(ri);
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar8), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              uVar9 = OPENSSL_sk_value(uVar8,iVar4);
              if (param_3 == (X509 *)0x0) {
                CMS_RecipientInfo_kari_set0_pkey_and_peer(ri,param_2,param_4);
                iVar4 = CMS_RecipientInfo_kari_decrypt(param_1,ri,uVar9);
                CMS_RecipientInfo_kari_set0_pkey(ri,0);
                if (0 < iVar4) {
                  return 1;
                }
                bVar1 = true;
                goto LAB_001011a9;
              }
              iVar5 = CMS_RecipientEncryptedKey_cert_cmp(uVar9,param_3);
              if (iVar5 == 0) {
                CMS_RecipientInfo_kari_set0_pkey_and_peer(ri,param_2,param_4);
                iVar3 = CMS_RecipientInfo_kari_decrypt(param_1,ri,uVar9);
                CMS_RecipientInfo_kari_set0_pkey(ri,0);
                if (0 < iVar3) {
                  return 1;
                }
                return 0;
              }
            }
          }
          else if (param_3 == (X509 *)0x0) {
            iVar4 = EVP_PKEY_up_ref(param_2);
            if (iVar4 == 0) {
              return 0;
            }
            CMS_RecipientInfo_set0_pkey(ri,param_2);
            iVar4 = CMS_RecipientInfo_decrypt(param_1,ri);
            CMS_RecipientInfo_set0_pkey(ri,(EVP_PKEY *)0x0);
            if ((0 < iVar4) && (local_40 != 0 || iVar3 != 0)) {
              return 1;
            }
          }
          else {
            iVar4 = CMS_RecipientInfo_ktri_cert_cmp(ri,param_3);
            if (iVar4 == 0) {
              iVar3 = EVP_PKEY_up_ref(param_2);
              if (iVar3 == 0) {
                return 0;
              }
              CMS_RecipientInfo_set0_pkey(ri,param_2);
              iVar3 = CMS_RecipientInfo_decrypt(param_1,ri);
              CMS_RecipientInfo_set0_pkey(ri,(EVP_PKEY *)0x0);
              if (local_40 != 0) {
                if (iVar3 < 1) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_smime.c",0x304,"CMS_decrypt_set1_pkey_and_peer");
                  ERR_set_error(0x2e,0x70,0);
                  return 0;
                }
                return 1;
              }
              goto LAB_00101335;
            }
          }
          bVar1 = true;
        }
LAB_001011a9:
        iVar10 = iVar10 + 1;
        iVar4 = OPENSSL_sk_num(psVar6);
        bVar2 = bVar1;
      } while (iVar10 < iVar4);
    }
    if ((local_40 == 0 && iVar3 == 0) && (param_3 == (X509 *)0x0)) {
      if (bVar1) {
LAB_00101335:
        ERR_clear_error();
        return 1;
      }
    }
    else if (bVar1) {
      return 0;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x31a,"CMS_decrypt_set1_pkey_and_peer");
    ERR_set_error(0x2e,0x84,0);
  }
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
  bool bVar2;
  int iVar3;
  stack_st_CMS_RecipientInfo *psVar4;
  CMS_RecipientInfo *ri;
  int iVar5;
  
  bVar1 = false;
  iVar5 = 0;
  psVar4 = CMS_get0_RecipientInfos(cms);
  iVar3 = OPENSSL_sk_num(psVar4);
  bVar2 = false;
  if (0 < iVar3) {
    do {
      bVar1 = bVar2;
      ri = (CMS_RecipientInfo *)OPENSSL_sk_value(psVar4,iVar5);
      iVar3 = CMS_RecipientInfo_type(ri);
      if (iVar3 == 2) {
        if (id == (uchar *)0x0) {
          CMS_RecipientInfo_set0_key(ri,key,keylen);
          iVar3 = CMS_RecipientInfo_decrypt(cms,ri);
          CMS_RecipientInfo_set0_key(ri,(uchar *)0x0,0);
          if (0 < iVar3) {
            return 1;
          }
          ERR_clear_error();
          bVar1 = true;
        }
        else {
          iVar3 = CMS_RecipientInfo_kekri_id_cmp(ri,id,idlen);
          if (iVar3 == 0) {
            CMS_RecipientInfo_set0_key(ri,key,keylen);
            iVar3 = CMS_RecipientInfo_decrypt(cms,ri);
            CMS_RecipientInfo_set0_key(ri,(uchar *)0x0,0);
            if (iVar3 < 1) {
              ERR_new();
              ERR_set_debug("crypto/cms/cms_smime.c",0x337,"CMS_decrypt_set1_key");
              ERR_set_error(0x2e,0x70,0);
              return 0;
            }
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = OPENSSL_sk_num(psVar4);
      bVar2 = bVar1;
    } while (iVar5 < iVar3);
  }
  if (!bVar1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x33f,"CMS_decrypt_set1_key");
    ERR_set_error(0x2e,0x84,0);
  }
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
        goto LAB_001018a0;
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
        goto LAB_00101788;
      }
    }
    if (((pkey == (EVP_PKEY *)0x0) || (iVar1 = CMS_decrypt_set1_pkey(cms,pkey,cert), iVar1 != 0)) &&
       (a = CMS_dataInit(cms,dcont), a != (BIO *)0x0)) {
      iVar1 = cms_copy_content(out,a,flags);
      if (dcont == (BIO *)0x0) {
LAB_001018a0:
        BIO_free_all(a);
        return iVar1;
      }
LAB_00101788:
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
    if (iVar1 != 0) goto LAB_0010195a;
    ERR_new();
    ERR_set_debug("crypto/cms/cms_smime.c",0x396,"CMS_final");
    ERR_set_error(0x2e,0x67,0);
  }
  iVar3 = 0;
LAB_0010195a:
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
LAB_00101d49:
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
        goto LAB_00101d49;
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
          goto LAB_00101d49;
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
          goto LAB_00101ef1;
        }
      }
    }
  }
  a = (ASN1_OCTET_STRING *)0x0;
  BIO_free((BIO *)0x0);
LAB_00101ef1:
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
        goto LAB_00102138;
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
LAB_00102138:
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


