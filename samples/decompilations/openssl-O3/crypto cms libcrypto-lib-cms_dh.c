
int ossl_cms_dh_envelope(undefined8 param_1,int param_2)

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
  ASN1_STRING *ptr;
  ASN1_STRING *str;
  ASN1_INTEGER *a;
  EVP_MD *pEVar11;
  EVP_CIPHER *cipher;
  void *ptr_00;
  EVP_PKEY *from;
  ulong uVar12;
  long in_FS_OFFSET;
  void *local_d8;
  BIGNUM *local_d0;
  ASN1_INTEGER *local_c8;
  int local_a8;
  undefined4 uStack_a4;
  ASN1_OBJECT *local_a0;
  ASN1_STRING *local_98;
  ASN1_OBJECT *local_90;
  ASN1_STRING *local_88;
  EVP_MD *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    pEVar5 = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx();
    if (pEVar5 == (EVP_PKEY_CTX *)0x0) goto LAB_00100068;
    pEVar6 = EVP_PKEY_CTX_get0_peerkey(pEVar5);
    if (pEVar6 == (EVP_PKEY *)0x0) {
      iVar2 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_a0,&local_98,0,0,0);
      if (((iVar2 == 0) || (local_a0 == (ASN1_OBJECT *)0x0)) || (local_98 == (ASN1_STRING *)0x0))
      goto LAB_00100068;
      X509_ALGOR_get0(&local_90,&local_a8,&local_88,(X509_ALGOR *)local_a0);
      iVar2 = OBJ_obj2nid(local_90);
      pEVar6 = (EVP_PKEY *)0x0;
      if ((((iVar2 == 0x398) && ((local_a8 == -1 || (local_a8 == 5)))) &&
          (from = EVP_PKEY_CTX_get0_pkey(pEVar5), from != (EVP_PKEY *)0x0)) &&
         (iVar2 = EVP_PKEY_is_a(from,&_LC0), iVar2 != 0)) {
        iVar2 = ASN1_STRING_length(local_98);
        local_80 = (EVP_MD *)ASN1_STRING_get0_data();
        if (((local_80 == (EVP_MD *)0x0) || (iVar2 == 0)) ||
           (local_c8 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,(uchar **)&local_80,(long)iVar2),
           local_c8 == (ASN1_INTEGER *)0x0)) goto LAB_00100565;
        iVar2 = EVP_PKEY_get_size(from);
        local_d0 = ASN1_INTEGER_to_BN(local_c8,(BIGNUM *)0x0);
        if (local_d0 == (BIGNUM *)0x0) {
          pEVar6 = (EVP_PKEY *)0x0;
          local_d8 = (void *)0x0;
          goto LAB_00100586;
        }
        local_d8 = CRYPTO_malloc(iVar2,"crypto/cms/cms_dh.c",0x3c);
        if (local_d8 == (void *)0x0) {
          pEVar6 = (EVP_PKEY *)0x0;
          goto LAB_00100586;
        }
        iVar3 = BN_bn2binpad(local_d0,local_d8,iVar2);
        if ((((iVar3 < 0) || (pEVar6 = EVP_PKEY_new(), pEVar6 == (EVP_PKEY *)0x0)) ||
            (iVar3 = EVP_PKEY_copy_parameters(pEVar6,from), iVar3 == 0)) ||
           (iVar2 = EVP_PKEY_set1_encoded_public_key(pEVar6,local_d8,(long)iVar2), iVar2 < 1))
        goto LAB_00100586;
        iVar2 = EVP_PKEY_derive_set_peer(pEVar5,pEVar6);
        ASN1_INTEGER_free(local_c8);
        BN_free(local_d0);
        CRYPTO_free(local_d8);
        EVP_PKEY_free(pEVar6);
        if (0 < iVar2) goto LAB_00100376;
      }
      else {
LAB_00100565:
        local_d8 = (void *)0x0;
        local_d0 = (BIGNUM *)0x0;
        local_c8 = (ASN1_INTEGER *)0x0;
LAB_00100586:
        ASN1_INTEGER_free(local_c8);
        BN_free(local_d0);
        CRYPTO_free(local_d8);
        EVP_PKEY_free(pEVar6);
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_dh.c",0xb3,"dh_cms_decrypt");
      ERR_set_error(0x2e,0xbc,0);
      goto LAB_00100068;
    }
LAB_00100376:
    iVar2 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_90,&local_88);
    if (iVar2 == 0) {
LAB_00100388:
      cipher = (EVP_CIPHER *)0x0;
      ptr_00 = (void *)0x0;
      pXVar10 = (X509_ALGOR *)0x0;
    }
    else {
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)local_90->sn);
      if (iVar2 != 0xf5) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_dh.c",0x66,"dh_cms_set_shared_info");
        ERR_set_error(0x2e,0xba,0);
        goto LAB_00100388;
      }
      iVar2 = EVP_PKEY_CTX_set_dh_kdf_type(pEVar5,2);
      if (iVar2 < 1) goto LAB_00100388;
      pEVar11 = EVP_sha1();
      iVar2 = EVP_PKEY_CTX_set_dh_kdf_md(pEVar5,pEVar11);
      if ((iVar2 < 1) || (*(int *)local_90->ln != 0x10)) goto LAB_00100388;
      piVar1 = (int *)local_90->ln[1];
      local_80 = *(EVP_MD **)(piVar1 + 2);
      pXVar10 = d2i_X509_ALGOR((X509_ALGOR **)0x0,(uchar **)&local_80,(long)*piVar1);
      if (pXVar10 == (X509_ALGOR *)0x0) goto LAB_00100388;
      pEVar8 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(param_1);
      if (pEVar8 == (EVP_CIPHER_CTX *)0x0) {
LAB_0010094c:
        cipher = (EVP_CIPHER *)0x0;
        ptr_00 = (void *)0x0;
      }
      else {
        iVar2 = OBJ_obj2txt(local_78,0x32,pXVar10->algorithm,0);
        if ((iVar2 < 1) ||
           (cipher = (EVP_CIPHER *)
                     EVP_CIPHER_fetch(*(undefined8 *)(pEVar5 + 8),local_78,
                                      *(undefined8 *)(pEVar5 + 0x10)), cipher == (EVP_CIPHER *)0x0))
        goto LAB_0010094c;
        iVar2 = EVP_CIPHER_get_mode(cipher);
        if (iVar2 == 0x10002) {
          ptr_00 = (void *)0x0;
          iVar2 = EVP_EncryptInit_ex(pEVar8,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
          if (iVar2 != 0) {
            iVar2 = EVP_CIPHER_asn1_to_param(pEVar8,pXVar10->parameter);
            if (0 < iVar2) {
              uVar4 = EVP_CIPHER_CTX_get_key_length(pEVar8);
              iVar2 = EVP_PKEY_CTX_set_dh_kdf_outlen(pEVar5,uVar4);
              if (0 < iVar2) {
                iVar2 = EVP_CIPHER_get_type(cipher);
                pAVar7 = OBJ_nid2obj(iVar2);
                iVar2 = EVP_PKEY_CTX_set0_dh_kdf_oid(pEVar5,pAVar7);
                if (0 < iVar2) {
                  if (local_88 == (ASN1_STRING *)0x0) {
                    uVar12 = 0;
                    ptr_00 = (void *)0x0;
                  }
                  else {
                    iVar2 = ASN1_STRING_length(local_88);
                    uVar12 = (ulong)iVar2;
                    uVar9 = ASN1_STRING_get0_data(local_88);
                    ptr_00 = (void *)CRYPTO_memdup(uVar9,uVar12,"crypto/cms/cms_dh.c",0x91);
                    if (ptr_00 == (void *)0x0) goto LAB_001006af;
                  }
                  iVar2 = EVP_PKEY_CTX_set0_dh_kdf_ukm(pEVar5,ptr_00,uVar12 & 0xffffffff);
                  if (0 < iVar2) {
                    iVar2 = 1;
                    X509_ALGOR_free(pXVar10);
                    EVP_CIPHER_free();
                    CRYPTO_free((void *)0x0);
                    goto LAB_0010006b;
                  }
                  goto LAB_00100390;
                }
              }
            }
            goto LAB_001006af;
          }
        }
        else {
LAB_001006af:
          ptr_00 = (void *)0x0;
        }
      }
    }
LAB_00100390:
    X509_ALGOR_free(pXVar10);
    EVP_CIPHER_free(cipher);
    CRYPTO_free(ptr_00);
    ERR_new();
    ERR_set_debug("crypto/cms/cms_dh.c",0xb9,"dh_cms_decrypt");
    ERR_set_error(0x2e,0xbd,0);
  }
  else {
    if (param_2 == 0) {
      local_88 = (ASN1_STRING *)0x0;
      iVar2 = 0;
      pEVar5 = (EVP_PKEY_CTX *)CMS_RecipientInfo_get0_pkey_ctx();
      if (pEVar5 == (EVP_PKEY_CTX *)0x0) goto LAB_0010006b;
      pEVar6 = EVP_PKEY_CTX_get0_pkey(pEVar5);
      iVar2 = CMS_RecipientInfo_kari_get0_orig_id(param_1,&local_a8,&local_98,0,0,0);
      if (iVar2 == 0) {
LAB_001000e5:
        iVar2 = 0;
        pXVar10 = (X509_ALGOR *)0x0;
        ptr = (ASN1_STRING *)0x0;
      }
      else {
        X509_ALGOR_get0(&local_a0,(int *)0x0,(void **)0x0,(X509_ALGOR *)CONCAT44(uStack_a4,local_a8)
                       );
        pAVar7 = OBJ_nid2obj(0);
        if (local_a0 == pAVar7) {
          local_80 = (EVP_MD *)0x0;
          iVar2 = EVP_PKEY_get_bn_param(pEVar6,&_LC2,&local_80);
          if (iVar2 != 0) {
            a = BN_to_ASN1_INTEGER((BIGNUM *)local_80,(ASN1_INTEGER *)0x0);
            BN_free((BIGNUM *)local_80);
            if (a != (ASN1_INTEGER *)0x0) {
              iVar2 = i2d_ASN1_INTEGER(a,(uchar **)&local_88);
              ASN1_INTEGER_free(a);
              if (0 < iVar2) {
                ASN1_STRING_set0(local_98,local_88,iVar2);
                ossl_asn1_string_set_bits_left(local_98,0);
                local_88 = (ASN1_STRING *)0x0;
                pAVar7 = OBJ_nid2obj(0x398);
                X509_ALGOR_set0((X509_ALGOR *)CONCAT44(uStack_a4,local_a8),pAVar7,-1,(void *)0x0);
                goto LAB_0010014d;
              }
            }
          }
          goto LAB_001000e5;
        }
LAB_0010014d:
        iVar2 = EVP_PKEY_CTX_get_dh_kdf_type(pEVar5);
        if ((iVar2 < 1) || (iVar3 = EVP_PKEY_CTX_get_dh_kdf_md(pEVar5,&local_80), iVar3 < 1))
        goto LAB_001000e5;
        if (iVar2 == 1) {
          iVar2 = EVP_PKEY_CTX_set_dh_kdf_type(pEVar5,2);
          if (0 < iVar2) goto LAB_00100182;
          goto LAB_001000e5;
        }
        if (iVar2 != 2) goto LAB_001000e5;
LAB_00100182:
        if (local_80 == (EVP_MD *)0x0) {
          local_80 = EVP_sha1();
          iVar2 = EVP_PKEY_CTX_set_dh_kdf_md(pEVar5,local_80);
          if (0 < iVar2) goto LAB_0010019e;
          goto LAB_001000e5;
        }
        iVar2 = EVP_MD_get_type();
        if (iVar2 != 0x40) goto LAB_001000e5;
LAB_0010019e:
        iVar2 = CMS_RecipientInfo_kari_get0_alg(param_1,&local_a8,&local_90);
        if (iVar2 == 0) goto LAB_001000e5;
        pEVar8 = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(param_1);
        uVar9 = EVP_CIPHER_CTX_get0_cipher(pEVar8);
        iVar2 = EVP_CIPHER_get_type(uVar9);
        pAVar7 = OBJ_nid2obj(iVar2);
        iVar3 = EVP_PKEY_CTX_set0_dh_kdf_oid(pEVar5,pAVar7);
        if (iVar3 < 1) goto LAB_001000e5;
        uVar4 = EVP_CIPHER_CTX_get_key_length(pEVar8);
        pXVar10 = X509_ALGOR_new();
        if (pXVar10 == (X509_ALGOR *)0x0) goto LAB_001000e5;
        pAVar7 = OBJ_nid2obj(iVar2);
        pXVar10->algorithm = pAVar7;
        type = ASN1_TYPE_new();
        pXVar10->parameter = type;
        if (type == (ASN1_TYPE *)0x0) {
LAB_0010095d:
          iVar2 = 0;
          ptr = (ASN1_STRING *)0x0;
        }
        else {
          iVar2 = EVP_CIPHER_param_to_asn1(pEVar8,type);
          if (iVar2 < 1) {
            iVar2 = 0;
            ptr = (ASN1_STRING *)0x0;
          }
          else {
            iVar2 = ASN1_TYPE_get(pXVar10->parameter);
            if (iVar2 == 0) {
              ASN1_TYPE_free(pXVar10->parameter);
              pXVar10->parameter = (ASN1_TYPE *)0x0;
            }
            iVar2 = EVP_PKEY_CTX_set_dh_kdf_outlen(pEVar5,uVar4);
            if (iVar2 < 1) goto LAB_0010095d;
            if (local_90 == (ASN1_OBJECT *)0x0) {
              uVar12 = 0;
              ptr = (ASN1_STRING *)0x0;
            }
            else {
              iVar2 = ASN1_STRING_length((ASN1_STRING *)local_90);
              uVar12 = (ulong)iVar2;
              uVar9 = ASN1_STRING_get0_data(local_90);
              ptr = (ASN1_STRING *)CRYPTO_memdup(uVar9,uVar12,"crypto/cms/cms_dh.c");
              if (ptr == (ASN1_STRING *)0x0) goto LAB_0010095d;
            }
            iVar2 = 0;
            iVar3 = EVP_PKEY_CTX_set0_dh_kdf_ukm(pEVar5,ptr,uVar12 & 0xffffffff);
            if (0 < iVar3) {
              local_88 = (ASN1_STRING *)0x0;
              iVar3 = i2d_X509_ALGOR(pXVar10,(uchar **)&local_88);
              if (iVar3 < 1) goto LAB_0010095d;
              str = ASN1_STRING_new();
              ptr = str;
              if (str != (ASN1_STRING *)0x0) {
                ASN1_STRING_set0(str,local_88,iVar3);
                local_88 = (ASN1_STRING *)0x0;
                pAVar7 = OBJ_nid2obj(0xf5);
                iVar2 = X509_ALGOR_set0((X509_ALGOR *)CONCAT44(uStack_a4,local_a8),pAVar7,0x10,str);
                if (iVar2 == 0) {
                  ptr = (ASN1_STRING *)0x0;
                  ASN1_STRING_free(str);
                }
                else {
                  ptr = (ASN1_STRING *)0x0;
                }
              }
            }
          }
        }
      }
      CRYPTO_free(local_88);
      X509_ALGOR_free(pXVar10);
      CRYPTO_free(ptr);
      goto LAB_0010006b;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_dh.c",0x155,"ossl_cms_dh_envelope");
    ERR_set_error(0x2e,0x7d,0);
  }
LAB_00100068:
  iVar2 = 0;
LAB_0010006b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


