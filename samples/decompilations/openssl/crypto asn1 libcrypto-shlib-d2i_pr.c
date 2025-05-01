
long d2i_PrivateKey_decoder
               (int param_1,long *param_2,uchar **param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  uchar *puVar1;
  int iVar2;
  char *pcVar3;
  PKCS8_PRIV_KEY_INFO *a;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  ASN1_OBJECT *local_88;
  ulong local_80;
  char local_78 [56];
  long local_40;
  
  puVar1 = *param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_98 = param_4;
  if (param_1 == 0) {
    pcVar3 = (char *)0x0;
LAB_00100055:
    ERR_set_mark();
    a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_3,local_98);
    ERR_pop_to_mark();
    if (a == (PKCS8_PRIV_KEY_INFO *)0x0) {
      pcVar6 = "type-specific";
    }
    else {
      iVar2 = ASN1_INTEGER_get_int64(&local_80);
      if ((iVar2 == 0) || (1 < local_80)) {
        *param_3 = puVar1;
        ERR_new();
        ERR_set_debug("crypto/asn1/d2i_pr.c",0x3d,"d2i_PrivateKey_decoder");
        ERR_set_error(0xd,0xcb,0);
        PKCS8_PRIV_KEY_INFO_free(a);
        goto LAB_00100165;
      }
      if ((pcVar3 == (char *)0x0) &&
         (iVar2 = PKCS8_pkey_get0(&local_88,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,a),
         iVar2 != 0)) {
        iVar2 = OBJ_obj2txt(local_78,0x32,local_88,0);
        if (iVar2 != 0) {
          pcVar3 = local_78;
        }
      }
      PKCS8_PRIV_KEY_INFO_free(a);
      pcVar6 = "PrivateKeyInfo";
    }
    *param_3 = puVar1;
    if (param_2 == (long *)0x0) {
      plVar7 = &local_90;
      lVar5 = OSSL_DECODER_CTX_new_for_pkey(plVar7,&_LC3,pcVar6,pcVar3,0x87,param_5,param_6);
      if (lVar5 != 0) {
        iVar2 = OSSL_DECODER_from_data(lVar5,param_3,&local_98);
        OSSL_DECODER_CTX_free(lVar5);
        if ((iVar2 != 0) && (lVar5 = local_90, local_90 != 0)) goto LAB_00100127;
      }
LAB_001001e0:
      plVar7 = &local_90;
    }
    else {
      lVar5 = *param_2;
      if (lVar5 == 0) {
        lVar4 = OSSL_DECODER_CTX_new_for_pkey(&local_90,&_LC3,pcVar6,pcVar3,0x87,param_5,param_6);
        *param_2 = 0;
        plVar7 = &local_90;
        if (lVar4 == 0) goto LAB_001001e0;
      }
      else {
        lVar4 = OSSL_DECODER_CTX_new_for_pkey(param_2,&_LC3,pcVar6,pcVar3,0x87,param_5,param_6);
        *param_2 = lVar5;
        plVar7 = param_2;
        if (lVar4 == 0) goto LAB_00100165;
      }
      iVar2 = OSSL_DECODER_from_data(lVar4,param_3,&local_98);
      OSSL_DECODER_CTX_free(lVar4);
      if ((iVar2 != 0) && (lVar5 = *plVar7, *plVar7 != 0)) {
LAB_00100127:
        iVar2 = evp_keymgmt_util_has(lVar5,1);
        if (iVar2 != 0) {
          if (param_2 != (long *)0x0) {
            *param_2 = *plVar7;
          }
          lVar5 = *plVar7;
          goto LAB_00100167;
        }
      }
      if (param_2 == plVar7) goto LAB_00100165;
    }
    EVP_PKEY_free((EVP_PKEY *)*plVar7);
  }
  else {
    pcVar3 = (char *)evp_pkey_type2name();
    if (pcVar3 != (char *)0x0) goto LAB_00100055;
  }
LAB_00100165:
  lVar5 = 0;
LAB_00100167:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



EVP_PKEY *
ossl_d2i_PrivateKey_legacy
          (int param_1,long *param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long lVar3;
  PKCS8_PRIV_KEY_INFO *a;
  EVP_PKEY *pEVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)*param_3;
  if ((param_2 == (long *)0x0) || (pkey = (EVP_PKEY *)*param_2, pkey == (EVP_PKEY *)0x0)) {
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      iVar1 = EVP_PKEY_set_type(pkey,param_1);
      goto joined_r0x00100406;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/d2i_pr.c",0x6e,"ossl_d2i_PrivateKey_legacy");
    ERR_set_error(0xd,0x80006,0);
  }
  else {
    ENGINE_finish((ENGINE *)pkey->ameth);
    pkey->ameth = (EVP_PKEY_ASN1_METHOD *)0x0;
    iVar1 = EVP_PKEY_set_type(pkey,param_1);
joined_r0x00100406:
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/d2i_pr.c",0x7a,"ossl_d2i_PrivateKey_legacy");
      ERR_set_error(0xd,0xa3,0);
    }
    else {
      ERR_set_mark();
      lVar3 = *(long *)&pkey->references;
      if (*(code **)(lVar3 + 0xb8) != (code *)0x0) {
        iVar1 = (**(code **)(lVar3 + 0xb8))(pkey,&local_48,param_4 & 0xffffffff);
        if (iVar1 == 0) {
          lVar3 = *(long *)&pkey->references;
          goto LAB_0010043a;
        }
        ERR_clear_last_mark();
        *param_3 = local_48;
        pEVar4 = pkey;
joined_r0x00100534:
        if (param_2 != (long *)0x0) {
          *param_2 = (long)pEVar4;
        }
        goto LAB_001003be;
      }
LAB_0010043a:
      if ((*(long *)(lVar3 + 0x40) == 0) && (*(long *)(lVar3 + 0x138) == 0)) {
        ERR_clear_last_mark();
        ERR_new();
        ERR_set_debug("crypto/asn1/d2i_pr.c",0x97,"ossl_d2i_PrivateKey_legacy");
        ERR_set_error(0xd,0x8000d,0);
      }
      else {
        a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_48,param_4);
        if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
          pEVar4 = (EVP_PKEY *)evp_pkcs82pkey_legacy(a,param_5,param_6);
          PKCS8_PRIV_KEY_INFO_free(a);
          if (pEVar4 != (EVP_PKEY *)0x0) {
            EVP_PKEY_free(pkey);
            ERR_pop_to_mark();
            iVar1 = EVP_PKEY_type(param_1);
            iVar2 = EVP_PKEY_get_base_id(pEVar4);
            pkey = pEVar4;
            if (iVar1 == iVar2) {
              *param_3 = local_48;
              goto joined_r0x00100534;
            }
            goto LAB_001003a8;
          }
        }
        ERR_clear_last_mark();
      }
    }
LAB_001003a8:
    if ((param_2 == (long *)0x0) || ((EVP_PKEY *)*param_2 != pkey)) {
      EVP_PKEY_free(pkey);
    }
  }
  pEVar4 = (EVP_PKEY *)0x0;
LAB_001003be:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar4;
}



void d2i_PrivateKey_ex(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = d2i_PrivateKey_decoder();
  if (lVar1 != 0) {
    return;
  }
  ossl_d2i_PrivateKey_legacy(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



EVP_PKEY * d2i_PrivateKey(int type,EVP_PKEY **a,uchar **pp,long length)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)d2i_PrivateKey_ex();
  return pEVar1;
}



long d2i_AutoPrivateKey_ex
               (long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5
               )

{
  int iVar1;
  long lVar2;
  ASN1_SEQUENCE_ANY *pAVar3;
  PKCS8_PRIV_KEY_INFO *a;
  long lVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = d2i_PrivateKey_decoder(0,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    local_48 = (uchar *)*param_2;
    pAVar3 = d2i_ASN1_SEQUENCE_ANY((ASN1_SEQUENCE_ANY **)0x0,&local_48,param_3);
    local_48 = (uchar *)*param_2;
    iVar1 = OPENSSL_sk_num(pAVar3);
    if (iVar1 == 6) {
      uVar5 = 0x74;
    }
    else {
      iVar1 = OPENSSL_sk_num(pAVar3);
      uVar5 = 0x198;
      if (iVar1 != 4) {
        iVar1 = OPENSSL_sk_num();
        uVar5 = 6;
        if (iVar1 == 3) {
          a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_48,param_3);
          OPENSSL_sk_pop_free(pAVar3,&ASN1_TYPE_free);
          if (a == (PKCS8_PRIV_KEY_INFO *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/d2i_pr.c",0xdb,"d2i_AutoPrivateKey_legacy");
            ERR_set_error(0xd,0xa7,0);
          }
          else {
            lVar4 = evp_pkcs82pkey_legacy(a,param_4,param_5);
            PKCS8_PRIV_KEY_INFO_free(a);
            if ((lVar4 != 0) && (*param_2 = local_48, lVar2 = lVar4, param_1 != (long *)0x0)) {
              *param_1 = lVar4;
            }
          }
          goto LAB_0010065f;
        }
      }
    }
    OPENSSL_sk_pop_free(pAVar3,&ASN1_TYPE_free);
    lVar2 = ossl_d2i_PrivateKey_legacy(uVar5,param_1,param_2,param_3,param_4,param_5);
  }
LAB_0010065f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



EVP_PKEY * d2i_AutoPrivateKey(EVP_PKEY **a,uchar **pp,long length)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)d2i_AutoPrivateKey_ex();
  return pEVar1;
}


