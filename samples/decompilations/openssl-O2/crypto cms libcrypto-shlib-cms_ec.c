
int ossl_cms_ecdh_envelope(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  EVP_PKEY_CTX *pEVar5;
  EVP_PKEY *pEVar6;
  ASN1_OBJECT *pAVar7;
  EVP_CIPHER_CTX *pEVar8;
  undefined8 uVar9;
  X509_ALGOR *pXVar10;
  ASN1_TYPE *type;
  ASN1_STRING *str;
  char *name;
  EVP_MD *pEVar11;
  EVP_CIPHER *cipher;
  long lVar12;
  undefined8 uVar13;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *to;
  long in_FS_OFFSET;
  int local_b4;
  int local_b0;
  undefined4 uStack_ac;
  ASN1_STRING *local_a8;
  undefined8 local_a0;
  ASN1_OBJECT *local_98;
  EVP_PKEY *local_90;
  char **local_88;
  EVP_MD *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    pEVar5 = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx();
    if (pEVar5 == (EVP_PKEY_CTX *)0x0) goto LAB_00100068;
    pEVar6 = EVP_PKEY_CTX_get0_peerkey(pEVar5);
    if (pEVar6 != (EVP_PKEY *)0x0) {
LAB_00100357:
      local_80 = (EVP_MD *)0x0;
      iVar2 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_98,&local_90);
      if (iVar2 != 0) {
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)local_98->sn);
        if (iVar2 != 0) {
          iVar2 = OBJ_find_sigid_algs(iVar2,(int *)&local_88,(int *)&local_a0);
          if (iVar2 != 0) {
            if ((int)local_a0 == 0x3b2) {
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
              if ((int)local_a0 != 0x3b3) goto LAB_00100590;
            }
            iVar2 = EVP_PKEY_CTX_set_ecdh_cofactor_mode(pEVar5,uVar9);
            if ((0 < iVar2) && (iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_type(pEVar5,2), 0 < iVar2)) {
              name = OBJ_nid2sn((int)local_88);
              pEVar11 = EVP_get_digestbyname(name);
              if ((pEVar11 != (EVP_MD *)0x0) &&
                 (iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_md(pEVar5,pEVar11), 0 < iVar2)) {
                if (*(int *)local_98->ln != 0x10) goto LAB_0010037b;
                piVar1 = (int *)local_98->ln[1];
                local_88 = *(char ***)(piVar1 + 2);
                pXVar10 = d2i_X509_ALGOR((X509_ALGOR **)0x0,(uchar **)&local_88,(long)*piVar1);
                if ((pXVar10 == (X509_ALGOR *)0x0) ||
                   (pEVar8 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(param_1),
                   pEVar8 == (EVP_CIPHER_CTX *)0x0)) {
LAB_001007ba:
                  cipher = (EVP_CIPHER *)0x0;
                }
                else {
                  OBJ_obj2txt(local_78,0x32,pXVar10->algorithm,0);
                  cipher = (EVP_CIPHER *)
                           EVP_CIPHER_fetch(*(undefined8 *)(pEVar5 + 8),local_78,
                                            *(undefined8 *)(pEVar5 + 0x10));
                  if (cipher == (EVP_CIPHER *)0x0) goto LAB_001007ba;
                  iVar2 = EVP_CIPHER_get_mode(cipher);
                  if (((iVar2 == 0x10002) &&
                      (iVar2 = EVP_EncryptInit_ex(pEVar8,cipher,(ENGINE *)0x0,(uchar *)0x0,
                                                  (uchar *)0x0), iVar2 != 0)) &&
                     (iVar2 = EVP_CIPHER_asn1_to_param(pEVar8,pXVar10->parameter), 0 < iVar2)) {
                    uVar4 = EVP_CIPHER_CTX_get_key_length(pEVar8);
                    iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_outlen(pEVar5,uVar4);
                    if (((0 < iVar2) &&
                        (iVar2 = CMS_SharedInfo_encode(&local_80,pXVar10,local_90,uVar4), 0 < iVar2)
                        ) && (iVar2 = EVP_PKEY_CTX_set0_ecdh_kdf_ukm(pEVar5,local_80,iVar2),
                             0 < iVar2)) {
                      local_80 = (EVP_MD *)0x0;
                      EVP_CIPHER_free(cipher);
                      X509_ALGOR_free(pXVar10);
                      CRYPTO_free(local_80);
                      iVar2 = 1;
                      goto LAB_0010006a;
                    }
                  }
                }
                EVP_CIPHER_free(cipher);
                X509_ALGOR_free(pXVar10);
                CRYPTO_free(local_80);
                goto LAB_0010037b;
              }
            }
          }
        }
LAB_00100590:
        ERR_new();
        ERR_set_debug("crypto/cms/cms_ec.c",0xaf,"ecdh_cms_set_shared_info");
        ERR_set_error(0x2e,0xba,0);
      }
LAB_0010037b:
      ERR_new();
      ERR_set_debug("crypto/cms/cms_ec.c",0xf4,"ecdh_cms_decrypt");
      ERR_set_error(0x2e,0xbd,0);
      goto LAB_00100068;
    }
    iVar2 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_b0,&local_a8,0,0,0);
    if (((iVar2 == 0) || ((X509_ALGOR *)CONCAT44(uStack_ac,local_b0) == (X509_ALGOR *)0x0)) ||
       (local_a8 == (ASN1_STRING *)0x0)) goto LAB_00100068;
    X509_ALGOR_get0((ASN1_OBJECT **)&local_a0,&local_b4,&local_98,
                    (X509_ALGOR *)CONCAT44(uStack_ac,local_b0));
    iVar2 = OBJ_obj2nid((ASN1_OBJECT *)CONCAT44(local_a0._4_4_,(int)local_a0));
    if (iVar2 == 0x198) {
      if ((local_b4 != -1) && (local_b4 != 5)) {
        uVar9 = EVP_PKEY_CTX_get0_propq();
        uVar13 = EVP_PKEY_CTX_get0_libctx(pEVar5);
        pAVar7 = local_98;
        local_90 = (EVP_PKEY *)0x0;
        if (local_b4 == 0x10) {
          local_88 = local_98->ln;
          local_80 = (EVP_MD *)(long)*(int *)&local_98->sn;
          lVar12 = OSSL_DECODER_CTX_new_for_pkey(&local_90,&_LC1,0);
          if (lVar12 != 0) {
            iVar2 = OSSL_DECODER_from_data(lVar12,&local_88,&local_80);
            if (iVar2 != 0) {
              OSSL_DECODER_CTX_free();
LAB_0010070e:
              to = local_90;
              if (local_90 != (EVP_PKEY *)0x0) goto LAB_00100713;
              goto LAB_00100782;
            }
            ERR_new();
            ERR_set_debug("crypto/cms/cms_ec.c",0x27,"pkey_type2param");
            ERR_set_error(0x2e,0xbb,0);
          }
          ctx = (EVP_PKEY_CTX *)0x0;
        }
        else {
          if (local_b4 != 6) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_ec.c",0x3f,"pkey_type2param");
            ERR_set_error(0x2e,0xbb,0);
            goto LAB_00100782;
          }
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar13,&_LC0,uVar9);
          if ((ctx != (EVP_PKEY_CTX *)0x0) && (iVar2 = EVP_PKEY_paramgen_init(ctx), 0 < iVar2)) {
            iVar2 = OBJ_obj2txt(local_78,0x32,pAVar7,0);
            if ((iVar2 < 1) || (iVar2 = EVP_PKEY_CTX_set_group_name(ctx,local_78), iVar2 < 1)) {
              ERR_new();
              ERR_set_debug("crypto/cms/cms_ec.c",0x36,"pkey_type2param");
              ERR_set_error(0x2e,0xbb,0);
            }
            else {
              iVar2 = EVP_PKEY_paramgen(ctx,&local_90);
              if (0 < iVar2) {
                EVP_PKEY_CTX_free(ctx);
                goto LAB_0010070e;
              }
            }
          }
        }
        EVP_PKEY_free(local_90);
        EVP_PKEY_CTX_free(ctx);
        OSSL_DECODER_CTX_free();
        goto LAB_00100782;
      }
      pEVar6 = EVP_PKEY_CTX_get0_pkey(pEVar5);
      if ((pEVar6 == (EVP_PKEY *)0x0) || (to = EVP_PKEY_new(), to == (EVP_PKEY *)0x0))
      goto LAB_00100782;
      iVar2 = EVP_PKEY_copy_parameters(to,pEVar6);
      if (iVar2 != 0) {
LAB_00100713:
        iVar2 = ASN1_STRING_length(local_a8);
        lVar12 = ASN1_STRING_get0_data(local_a8);
        if ((((lVar12 != 0) && (iVar2 != 0)) &&
            (iVar2 = EVP_PKEY_set1_encoded_public_key(to,lVar12,(long)iVar2), 0 < iVar2)) &&
           (iVar2 = EVP_PKEY_derive_set_peer(pEVar5,to), 0 < iVar2)) {
          EVP_PKEY_free(to);
          goto LAB_00100357;
        }
      }
      EVP_PKEY_free(to);
    }
    else {
LAB_00100782:
      EVP_PKEY_free((EVP_PKEY *)0x0);
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_ec.c",0xee,"ecdh_cms_decrypt");
    ERR_set_error(0x2e,0xbc,0);
  }
  else {
    if (param_2 == 0) {
      local_88 = (char **)0x0;
      pEVar5 = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx();
      iVar2 = 0;
      if (pEVar5 == (EVP_PKEY_CTX *)0x0) goto LAB_0010006a;
      pEVar6 = EVP_PKEY_CTX_get0_pkey(pEVar5);
      iVar2 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_a8,&local_98,0,0,0);
      if (iVar2 == 0) {
LAB_001000dc:
        iVar2 = 0;
        pXVar10 = (X509_ALGOR *)0x0;
      }
      else {
        X509_ALGOR_get0((ASN1_OBJECT **)&local_a0,(int *)0x0,(void **)0x0,(X509_ALGOR *)local_a8);
        pAVar7 = OBJ_nid2obj(0);
        if ((ASN1_OBJECT *)CONCAT44(local_a0._4_4_,(int)local_a0) == pAVar7) {
          lVar12 = EVP_PKEY_get1_encoded_public_key(pEVar6,&local_88);
          if (0x7ffffffe < lVar12 - 1U) goto LAB_001000dc;
          ASN1_STRING_set0((ASN1_STRING *)local_98,local_88,(int)lVar12);
          ossl_asn1_string_set_bits_left(local_98,0);
          local_88 = (char **)0x0;
          pAVar7 = OBJ_nid2obj(0x198);
          X509_ALGOR_set0((X509_ALGOR *)local_a8,pAVar7,-1,(void *)0x0);
        }
        iVar2 = EVP_PKEY_CTX_get_ecdh_kdf_type(pEVar5);
        if ((iVar2 < 1) || (iVar3 = EVP_PKEY_CTX_get_ecdh_kdf_md(pEVar5,&local_80), iVar3 < 1))
        goto LAB_001000dc;
        iVar3 = EVP_PKEY_CTX_get_ecdh_cofactor_mode(pEVar5);
        if (iVar3 < 0) goto LAB_001000dc;
        if (iVar3 == 0) {
          iVar3 = 0x3b2;
        }
        else if (iVar3 == 1) {
          iVar3 = 0x3b3;
        }
        if ((iVar2 != 1) || (iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_type(pEVar5,2), iVar2 < 1))
        goto LAB_001000dc;
        if (local_80 == (EVP_MD *)0x0) {
          local_80 = EVP_sha1();
          iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_md(pEVar5,local_80);
          if (iVar2 < 1) goto LAB_001000dc;
        }
        iVar2 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_a8,&local_90);
        if (iVar2 == 0) goto LAB_001000dc;
        iVar2 = EVP_MD_get_type(local_80);
        iVar2 = OBJ_find_sigid_by_algs(&local_b0,iVar2,iVar3);
        if (iVar2 == 0) goto LAB_001000dc;
        pEVar8 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(param_1);
        uVar9 = EVP_CIPHER_CTX_get0_cipher(pEVar8);
        iVar2 = EVP_CIPHER_get_type(uVar9);
        uVar4 = EVP_CIPHER_CTX_get_key_length(pEVar8);
        pXVar10 = X509_ALGOR_new();
        if (pXVar10 == (X509_ALGOR *)0x0) goto LAB_001000dc;
        pAVar7 = OBJ_nid2obj(iVar2);
        pXVar10->algorithm = pAVar7;
        type = ASN1_TYPE_new();
        pXVar10->parameter = type;
        if (type == (ASN1_TYPE *)0x0) {
LAB_001009ea:
          iVar2 = 0;
        }
        else {
          iVar3 = EVP_CIPHER_param_to_asn1(pEVar8,type);
          iVar2 = 0;
          if (0 < iVar3) {
            iVar2 = ASN1_TYPE_get(pXVar10->parameter);
            if (iVar2 == 0) {
              ASN1_TYPE_free(pXVar10->parameter);
              pXVar10->parameter = (ASN1_TYPE *)0x0;
            }
            iVar2 = EVP_PKEY_CTX_set_ecdh_kdf_outlen(pEVar5,uVar4);
            if (0 < iVar2) {
              iVar2 = CMS_SharedInfo_encode(&local_88,pXVar10,local_90,uVar4);
              if ((0 < iVar2) &&
                 (iVar2 = EVP_PKEY_CTX_set0_ecdh_kdf_ukm(pEVar5,local_88,iVar2), 0 < iVar2)) {
                local_88 = (char **)0x0;
                iVar2 = i2d_X509_ALGOR(pXVar10,(uchar **)&local_88);
                if ((0 < iVar2) && (str = ASN1_STRING_new(), str != (ASN1_STRING *)0x0)) {
                  ASN1_STRING_set0(str,local_88,iVar2);
                  local_88 = (char **)0x0;
                  pAVar7 = OBJ_nid2obj(local_b0);
                  iVar2 = X509_ALGOR_set0((X509_ALGOR *)local_a8,pAVar7,0x10,str);
                  if (iVar2 == 0) {
                    ASN1_STRING_free(str);
                  }
                  goto LAB_001000e0;
                }
              }
            }
            goto LAB_001009ea;
          }
        }
      }
LAB_001000e0:
      CRYPTO_free(local_88);
      X509_ALGOR_free(pXVar10);
      goto LAB_0010006a;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_ec.c",0x188,"ossl_cms_ecdh_envelope");
    ERR_set_error(0x2e,0x7d,0);
  }
LAB_00100068:
  iVar2 = 0;
LAB_0010006a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


