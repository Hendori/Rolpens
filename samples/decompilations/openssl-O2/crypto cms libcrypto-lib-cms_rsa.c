
int ossl_cms_rsa_envelope(CMS_RecipientInfo *param_1,int param_2)

{
  ASN1_TYPE *pAVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ASN1_OCTET_STRING *pval;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ASN1_OCTET_STRING *str;
  ASN1_ITEM *it;
  ASN1_OBJECT *pAVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  ASN1_OCTET_STRING *local_58;
  X509_ALGOR *local_50;
  X509_ALGOR *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    lVar6 = CMS_RecipientInfo_get0_pkey_ctx();
    iVar4 = 0;
    if (lVar6 == 0) goto LAB_00100064;
    iVar4 = CMS_RecipientInfo_ktri_get0_algs(param_1,(EVP_PKEY **)0x0,(X509 **)0x0,&local_48);
    if (iVar4 != 0) {
      iVar5 = OBJ_obj2nid(local_48->algorithm);
      iVar4 = 1;
      if (iVar5 == 6) goto LAB_00100064;
      if (iVar5 == 0x397) {
        pAVar1 = local_48->parameter;
        uVar8 = RSA_OAEP_PARAMS_it();
        puVar9 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar8,pAVar1);
        if (puVar9 == (undefined8 *)0x0) {
LAB_00100454:
          ERR_new();
          puVar9 = (undefined8 *)0x0;
          ERR_set_debug("crypto/cms/cms_rsa.c",0x42,"rsa_cms_decrypt");
          ERR_set_error(0x2e,0xbf,0);
          iVar4 = -1;
        }
        else {
          if (puVar9[1] == 0) {
            lVar10 = puVar9[3];
          }
          else {
            lVar10 = ossl_x509_algor_mgf1_decode();
            puVar9[3] = lVar10;
            if (lVar10 == 0) {
              RSA_OAEP_PARAMS_free(puVar9);
              goto LAB_00100454;
            }
          }
          lVar10 = ossl_x509_algor_get_md(lVar10);
          iVar4 = -1;
          if (lVar10 != 0) {
            lVar11 = ossl_x509_algor_get_md(*puVar9);
            if (lVar11 != 0) {
              puVar2 = (undefined8 *)puVar9[2];
              if (puVar2 == (undefined8 *)0x0) {
                uVar13 = 0;
                pvVar7 = (void *)0x0;
LAB_0010030c:
                iVar4 = EVP_PKEY_CTX_set_rsa_padding(lVar6,4);
                if (0 < iVar4) {
                  iVar4 = EVP_PKEY_CTX_set_rsa_oaep_md(lVar6,lVar11);
                  if (0 < iVar4) {
                    iVar4 = EVP_PKEY_CTX_set_rsa_mgf1_md(lVar6,lVar10);
                    if (0 < iVar4) {
                      if (pvVar7 != (void *)0x0) {
                        iVar4 = EVP_PKEY_CTX_set0_rsa_oaep_label(lVar6,pvVar7,uVar13);
                        if (iVar4 < 1) {
                          CRYPTO_free(pvVar7);
                          goto LAB_001004c9;
                        }
                      }
                      iVar4 = 1;
                      goto LAB_00100367;
                    }
                  }
                }
              }
              else {
                iVar4 = OBJ_obj2nid((ASN1_OBJECT *)*puVar2);
                if (iVar4 == 0x3a7) {
                  if (*(int *)puVar2[1] == 4) {
                    puVar3 = *(undefined4 **)((int *)puVar2[1] + 2);
                    pvVar7 = *(void **)(puVar3 + 2);
                    uVar13 = *puVar3;
                    *(undefined8 *)(puVar3 + 2) = 0;
                    goto LAB_0010030c;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_rsa.c",0x55,"rsa_cms_decrypt");
                  ERR_set_error(0x2e,0xbe,0);
                }
                else {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_rsa.c",0x51,"rsa_cms_decrypt");
                  ERR_set_error(0x2e,0xc1,0);
                }
              }
            }
LAB_001004c9:
            iVar4 = -1;
          }
        }
LAB_00100367:
        RSA_OAEP_PARAMS_free(puVar9);
        goto LAB_00100064;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_rsa.c",0x3b,"rsa_cms_decrypt");
      ERR_set_error(0x2e,0xc0,0);
    }
    iVar4 = -1;
    goto LAB_00100064;
  }
  if (param_2 == 0) {
    local_58 = (ASN1_STRING *)0x0;
    lVar6 = CMS_RecipientInfo_get0_pkey_ctx();
    local_6c = 1;
    iVar4 = CMS_RecipientInfo_ktri_get0_algs(param_1,(EVP_PKEY **)0x0,(X509 **)0x0,&local_50);
    if (0 < iVar4) {
      if (lVar6 != 0) {
        iVar4 = EVP_PKEY_CTX_get_rsa_padding(lVar6,&local_6c);
        if (iVar4 < 1) goto LAB_00100062;
      }
      if (local_6c == 1) {
        pAVar12 = OBJ_nid2obj(6);
        iVar4 = X509_ALGOR_set0(local_50,pAVar12,5,(void *)0x0);
        goto LAB_00100064;
      }
      if (local_6c != 4) goto LAB_00100062;
      iVar4 = EVP_PKEY_CTX_get_rsa_oaep_md(lVar6,&local_68);
      if (iVar4 < 1) {
LAB_00100220:
        iVar4 = 0;
        str = (ASN1_OCTET_STRING *)0x0;
        pvVar7 = (void *)0x0;
      }
      else {
        iVar4 = EVP_PKEY_CTX_get_rsa_mgf1_md(lVar6,&local_60);
        if (iVar4 < 1) goto LAB_00100220;
        iVar5 = EVP_PKEY_CTX_get0_rsa_oaep_label(lVar6,&local_48);
        if (iVar5 < 0) goto LAB_00100220;
        pvVar7 = (void *)RSA_OAEP_PARAMS_new();
        if (pvVar7 == (void *)0x0) goto LAB_00100220;
        iVar4 = ossl_x509_algor_new_from_md(pvVar7,local_68);
        if (iVar4 == 0) {
LAB_00100152:
          iVar4 = 0;
          str = (ASN1_OCTET_STRING *)0x0;
        }
        else {
          str = (ASN1_OCTET_STRING *)0x0;
          iVar4 = ossl_x509_algor_md_to_mgf1((long)pvVar7 + 8,local_60);
          if (iVar4 != 0) {
            if (iVar5 == 0) {
LAB_001003ea:
              it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
              str = ASN1_item_pack(pvVar7,it,&local_58);
              pval = local_58;
              iVar4 = 0;
              if (str != (ASN1_STRING *)0x0) {
                pAVar12 = OBJ_nid2obj(0x397);
                str = (ASN1_OCTET_STRING *)0x0;
                iVar4 = X509_ALGOR_set0(local_50,pAVar12,0x10,pval);
                if (iVar4 != 0) {
                  local_58 = (ASN1_STRING *)0x0;
                  iVar4 = 1;
                }
              }
            }
            else {
              str = ASN1_OCTET_STRING_new();
              if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_00100152;
              iVar4 = ASN1_OCTET_STRING_set(str,(uchar *)local_48,iVar5);
              if (iVar4 != 0) {
                lVar6 = ossl_X509_ALGOR_from_nid(0x3a7,4,str);
                *(long *)((long)pvVar7 + 0x10) = lVar6;
                if (lVar6 != 0) goto LAB_001003ea;
                iVar4 = 0;
              }
            }
          }
        }
      }
      RSA_OAEP_PARAMS_free(pvVar7);
      ASN1_STRING_free(local_58);
      ASN1_OCTET_STRING_free(str);
      goto LAB_00100064;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_rsa.c",0xbf,"ossl_cms_rsa_envelope");
    ERR_set_error(0x2e,0x7d,0);
  }
LAB_00100062:
  iVar4 = 0;
LAB_00100064:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_cms_rsa_sign(CMS_SignerInfo *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  X509_ALGOR *pXVar5;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar6;
  ASN1_STRING *a;
  ASN1_OBJECT *pAVar7;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  int local_11c;
  undefined8 local_118;
  X509_ALGOR *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  X509_ALGOR local_b8 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    ctx = (EVP_PKEY_CTX *)CMS_SignerInfo_get0_pkey_ctx();
    pEVar6 = EVP_PKEY_CTX_get0_pkey(ctx);
    CMS_SignerInfo_get0_algs(param_1,(EVP_PKEY **)0x0,(X509 **)0x0,(X509_ALGOR **)0x0,&local_110);
    iVar1 = OBJ_obj2nid(local_110->algorithm);
    if (iVar1 == 0x390) {
      iVar1 = ossl_rsa_pss_to_ctx(0,ctx,local_110,0);
      uVar3 = (uint)(0 < iVar1);
      goto LAB_00100596;
    }
    iVar2 = EVP_PKEY_is_a(pEVar6);
    if (iVar2 == 0) {
      uVar3 = 1;
      if (iVar1 == 6) goto LAB_00100596;
      iVar1 = OBJ_find_sigid_algs(iVar1,(int *)0x0,(int *)&local_118);
      if (iVar1 != 0) {
        uVar3 = (uint)((int)local_118 == 6);
        goto LAB_00100596;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_rsa.c",0x101,"rsa_cms_verify");
      ERR_set_error(4,0x90,0);
    }
  }
  else if (param_2 == 0) {
    local_11c = 1;
    lVar4 = CMS_SignerInfo_get0_pkey_ctx();
    local_110 = local_b8;
    CMS_SignerInfo_get0_algs
              (param_1,(EVP_PKEY **)0x0,(X509 **)0x0,(X509_ALGOR **)0x0,(X509_ALGOR **)&local_118);
    if (lVar4 != 0) {
      iVar1 = EVP_PKEY_CTX_get_rsa_padding(lVar4,&local_11c);
      if (iVar1 < 1) goto LAB_00100594;
    }
    if (local_11c == 1) {
      pAVar7 = OBJ_nid2obj(6);
      uVar3 = X509_ALGOR_set0((X509_ALGOR *)CONCAT44(local_118._4_4_,(int)local_118),pAVar7,5,
                              (void *)0x0);
      goto LAB_00100596;
    }
    if (local_11c == 6) {
      if (*(long *)(lVar4 + 0x20) == 0) {
        a = (ASN1_STRING *)ossl_rsa_ctx_to_pss_string(lVar4);
        if (a != (ASN1_STRING *)0x0) {
          pAVar7 = OBJ_nid2obj(0x390);
          iVar1 = X509_ALGOR_set0((X509_ALGOR *)CONCAT44(local_118._4_4_,(int)local_118),pAVar7,0x10
                                  ,a);
          uVar3 = 1;
          if (iVar1 != 0) goto LAB_00100596;
          ASN1_STRING_free(a);
        }
      }
      else {
        OSSL_PARAM_construct_octet_string(&local_158,"algorithm-id",local_b8,0x80);
        local_e8 = local_138;
        local_108 = local_158;
        uStack_100 = uStack_150;
        local_f8 = local_148;
        uStack_f0 = uStack_140;
        OSSL_PARAM_construct_end(&local_158);
        local_e0 = local_158;
        uStack_d8 = uStack_150;
        local_c0 = local_138;
        local_d0 = local_148;
        uStack_c8 = uStack_140;
        iVar1 = EVP_PKEY_CTX_get_params(lVar4,&local_108);
        if ((0 < iVar1) && (local_e8 != 0)) {
          pXVar5 = d2i_X509_ALGOR((X509_ALGOR **)&local_118,(uchar **)&local_110,local_e8);
          uVar3 = (uint)(pXVar5 != (X509_ALGOR *)0x0);
          goto LAB_00100596;
        }
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_rsa.c",0x118,"ossl_cms_rsa_sign");
    ERR_set_error(0x2e,0x7d,0);
  }
LAB_00100594:
  uVar3 = 0;
LAB_00100596:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


