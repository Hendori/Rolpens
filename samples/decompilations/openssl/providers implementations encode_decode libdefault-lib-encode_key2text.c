
undefined8 key2text_newctx(undefined8 param_1)

{
  return param_1;
}



void key2text_freectx(void)

{
  return;
}



bool dh_to_text(BIO *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  BIGNUM *a;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x34,"dh_to_text");
    ERR_set_error(0x39,0xc0102,0);
    return false;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) {
      pcVar6 = "DH Public-Key";
      lVar3 = 0;
      goto LAB_0010006c;
    }
    lVar3 = 0;
    if ((param_3 & 4) == 0) {
      pcVar6 = (char *)0x0;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_00100084;
    }
    pcVar6 = "DH Parameters";
    lVar5 = 0;
  }
  else {
    pcVar6 = "DH Private-Key";
    lVar3 = DH_get0_priv_key(param_2);
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x42,"dh_to_text");
      ERR_set_error(0x39,0xdd,0);
      return false;
    }
LAB_0010006c:
    lVar5 = 0;
    if (((param_3 & 3) != 0) && (lVar5 = DH_get0_pub_key(param_2), lVar5 == 0)) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x49,"dh_to_text");
      ERR_set_error(0x39,0xdc,0);
      return false;
    }
    if ((param_3 & 4) == 0) {
      lVar4 = 0;
      goto LAB_00100084;
    }
  }
  lVar4 = ossl_dh_get0_params(param_2);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x50,"dh_to_text");
    ERR_set_error(0x39,0xe2,0);
    return false;
  }
LAB_00100084:
  a = (BIGNUM *)DH_get0_p(param_2);
  if (a == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x57,"dh_to_text");
    ERR_set_error(0x39,0x9e,0);
    return false;
  }
  uVar1 = BN_num_bits(a);
  iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar6,(ulong)uVar1);
  if ((((0 < iVar2) &&
       ((lVar3 == 0 ||
        (iVar2 = ossl_bio_print_labeled_bignum(param_1,"private-key:",lVar3), iVar2 != 0)))) &&
      ((lVar5 == 0 ||
       (iVar2 = ossl_bio_print_labeled_bignum(param_1,"public-key:",lVar5), iVar2 != 0)))) &&
     ((lVar4 == 0 || (iVar2 = ossl_bio_print_ffc_params(param_1,lVar4), iVar2 != 0)))) {
    lVar3 = DH_get_length(param_2);
    if (0 < lVar3) {
      iVar2 = BIO_printf(param_1,"recommended-private-length: %ld bits\n",lVar3);
      return 0 < iVar2;
    }
    return true;
  }
  return false;
}



void dh2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dsa2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void ec2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void sm22text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void ed255192text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed4482text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void x255192text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x4482text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void ml_kem_5122text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_7682text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_10242text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void rsa2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsapss2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void ml_dsa_442text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_652text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_872text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f2text_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void dh2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void dhx2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void dsa2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ec2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void sm22text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ed255192text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ed4482text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void x255192text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void x4482text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_kem_5122text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_kem_7682text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_kem_10242text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void rsa2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void rsapss2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_dsa_442text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_dsa_652text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void ml_dsa_872text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f2text_import_object(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1,param_2,param_3);
  return;
}



bool ecx_to_text(BIO *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x187,"ecx_to_text");
    ERR_set_error(0x39,0xc0102,0);
    return false;
  }
  uVar1 = *(uint *)(param_2 + 0x60);
  pcVar3 = "ED25519";
  if (uVar1 != 2) {
    if (uVar1 < 3) {
      pcVar3 = "X25519";
      if (uVar1 != 0) {
        pcVar3 = "X448";
      }
    }
    else {
      pcVar3 = "ED448";
      if (uVar1 != 3) {
        pcVar3 = (char *)0x0;
      }
    }
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) {
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x1a7,
                      "ecx_to_text");
        ERR_set_error(0x39,0xdc,0);
        return false;
      }
      iVar2 = BIO_printf(param_1,"%s Public-Key:\n",pcVar3);
      if (iVar2 < 1) {
        return false;
      }
    }
  }
  else {
    if (*(long *)(param_2 + 0x50) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x19c,"ecx_to_text")
      ;
      ERR_set_error(0x39,0xdd,0);
      return false;
    }
    iVar2 = BIO_printf(param_1,"%s Private-Key:\n",pcVar3);
    if ((iVar2 < 1) ||
       (iVar2 = ossl_bio_print_labeled_buf
                          (param_1,"priv:",*(undefined8 *)(param_2 + 0x50),
                           *(undefined8 *)(param_2 + 0x58)), iVar2 == 0)) {
      return false;
    }
  }
  iVar2 = ossl_bio_print_labeled_buf(param_1,&_LC14,param_2 + 0x11,*(undefined8 *)(param_2 + 0x58));
  return iVar2 != 0;
}



uint ec_to_text(BIO *param_1,EC_KEY *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  point_conversion_form_t pVar4;
  EC_GROUP *group;
  BIGNUM *pBVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  BN_CTX *ctx;
  uchar *puVar10;
  long lVar11;
  BIGNUM *pBVar12;
  BIGNUM *pBVar13;
  EC_POINT *pEVar14;
  long lVar15;
  long in_FS_OFFSET;
  char *local_90;
  size_t local_88;
  long local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (void *)0x0;
  if ((param_1 == (BIO *)0x0) || (param_2 == (EC_KEY *)0x0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x142,"ec_to_text");
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    group = EC_KEY_get0_group(param_2);
    if (group != (EC_GROUP *)0x0) {
      if ((param_3 & 1) == 0) {
        if ((param_3 & 2) == 0) {
          if ((param_3 & 4) != 0) {
            lVar9 = 0;
            lVar6 = 0;
            iVar2 = EC_GROUP_get_curve_name(group);
            local_90 = "EC-Parameters";
            if (iVar2 != 0x494) goto LAB_00100c9c;
          }
          lVar9 = 0;
          lVar6 = 0;
joined_r0x00100ea8:
          if ((((local_58 == 0) ||
               (iVar2 = ossl_bio_print_labeled_buf(param_1,"priv:",local_58,lVar6), iVar2 != 0)) &&
              ((local_50 == (void *)0x0 ||
               (iVar2 = ossl_bio_print_labeled_buf(param_1,&_LC14,local_50,lVar9), iVar2 != 0)))) &&
             ((param_3 & 4) != 0)) {
            uVar7 = ossl_ec_key_get_libctx(param_2);
            uVar1 = EC_GROUP_get_asn1_flag(group);
            uVar1 = uVar1 & 1;
            if (uVar1 == 0) {
              ctx = (BN_CTX *)BN_CTX_new_ex(uVar7);
              if (ctx == (BN_CTX *)0x0) goto LAB_00100cfa;
              BN_CTX_start(ctx);
              iVar2 = EC_GROUP_get_field_type(group);
              lVar9 = EC_GROUP_get0_order(group);
              if (lVar9 != 0) {
                puVar10 = EC_GROUP_get0_seed(group);
                local_88 = 0;
                if (puVar10 != (uchar *)0x0) {
                  local_88 = EC_GROUP_get_seed_len(group);
                }
                lVar11 = EC_GROUP_get0_cofactor(group);
                pcVar8 = OBJ_nid2sn(iVar2);
                iVar2 = BIO_printf(param_1,"Field Type: %s\n",pcVar8);
                if (0 < iVar2) {
                  pBVar5 = BN_CTX_get(ctx);
                  pBVar12 = BN_CTX_get(ctx);
                  pBVar13 = BN_CTX_get(ctx);
                  if ((pBVar13 != (BIGNUM *)0x0) &&
                     (iVar2 = EC_GROUP_get_curve(group,pBVar5,pBVar12,pBVar13,ctx), iVar2 != 0)) {
                    iVar2 = EC_GROUP_get_field_type(group);
                    pcVar8 = "Prime:";
                    if (iVar2 == 0x197) {
                      iVar2 = EC_GROUP_get_basis_type(group);
                      if (iVar2 != 0) {
                        pcVar8 = OBJ_nid2sn(iVar2);
                        iVar2 = BIO_printf(param_1,"Basis Type: %s\n",pcVar8);
                        if (0 < iVar2) {
                          pcVar8 = "Polynomial:";
                          goto LAB_00101110;
                        }
                      }
                    }
                    else {
LAB_00101110:
                      iVar2 = ossl_bio_print_labeled_bignum(param_1,pcVar8,pBVar5);
                      if (((iVar2 != 0) &&
                          (iVar2 = ossl_bio_print_labeled_bignum(param_1,"A:   ",pBVar12),
                          iVar2 != 0)) &&
                         (iVar2 = ossl_bio_print_labeled_bignum(param_1,"B:   ",pBVar13), iVar2 != 0
                         )) {
                        local_48 = 0;
                        pVar4 = EC_GROUP_get_point_conversion_form(group);
                        pEVar14 = EC_GROUP_get0_generator(group);
                        if (pEVar14 != (EC_POINT *)0x0) {
                          if (pVar4 == POINT_CONVERSION_UNCOMPRESSED) {
                            local_90 = "Generator (uncompressed):";
                          }
                          else if (pVar4 == POINT_CONVERSION_HYBRID) {
                            local_90 = "Generator (hybrid):";
                          }
                          else {
                            if (pVar4 != POINT_CONVERSION_COMPRESSED) goto LAB_00101130;
                            local_90 = "Generator (compressed):";
                          }
                          lVar15 = EC_POINT_point2buf(group,pEVar14,pVar4,&local_48,ctx);
                          if (lVar15 != 0) {
                            iVar2 = ossl_bio_print_labeled_buf(param_1,local_90,local_48,lVar15);
                            CRYPTO_clear_free(local_48,lVar15,
                                              "providers/implementations/encode_decode/encode_key2text.c"
                                              ,0xf4);
                            if ((((iVar2 != 0) &&
                                 (iVar2 = ossl_bio_print_labeled_bignum(param_1,"Order: ",lVar9),
                                 iVar2 != 0)) &&
                                ((lVar11 == 0 ||
                                 (iVar2 = ossl_bio_print_labeled_bignum(param_1,"Cofactor: ",lVar11)
                                 , iVar2 != 0)))) && (uVar1 = 1, puVar10 != (uchar *)0x0)) {
                              iVar2 = ossl_bio_print_labeled_buf(param_1,"Seed:",puVar10,local_88);
                              uVar1 = (uint)(iVar2 != 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_00101130:
              BN_CTX_end(ctx);
              BN_CTX_free(ctx);
              goto LAB_00100cfa;
            }
            iVar2 = EC_GROUP_get_curve_name(group);
            if (iVar2 != 0) {
              pcVar8 = OBJ_nid2sn(iVar2);
              iVar3 = BIO_printf(param_1,"%s: %s\n","ASN1 OID",pcVar8);
              if (0 < iVar3) {
                lVar9 = EC_curve_nid2nist(iVar2);
                if (lVar9 != 0) {
                  iVar2 = BIO_printf(param_1,"%s: %s\n","NIST CURVE",lVar9);
                  uVar1 = (uint)(0 < iVar2);
                }
                goto LAB_00100cfa;
              }
            }
          }
        }
        else {
          if ((param_3 & 3) != 0) {
            lVar6 = 0;
            local_90 = "Public-Key";
LAB_00100ec7:
            pEVar14 = EC_KEY_get0_public_key(param_2);
            if (pEVar14 == (EC_POINT *)0x0) {
              ERR_new();
              ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x162,
                            "ec_to_text");
              ERR_set_error(0x39,0xdc,0);
            }
            else {
              pVar4 = EC_KEY_get_conv_form(param_2);
              lVar9 = EC_KEY_key2buf(param_2,pVar4,&local_50,0);
              if (lVar9 != 0) goto LAB_00100c9c;
            }
            uVar1 = 0;
            goto LAB_00100cfa;
          }
          lVar9 = 0;
          lVar6 = 0;
          local_90 = "Public-Key";
LAB_00100c9c:
          uVar1 = EC_GROUP_order_bits(group);
          iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",local_90,(ulong)uVar1);
          if (0 < iVar2) goto joined_r0x00100ea8;
        }
        uVar1 = 0;
      }
      else {
        pBVar5 = EC_KEY_get0_private_key(param_2);
        if (pBVar5 == (BIGNUM *)0x0) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x157,
                        "ec_to_text");
          ERR_set_error(0x39,0xdd,0);
        }
        else {
          lVar6 = EC_KEY_priv2buf(param_2,&local_58);
          if (lVar6 != 0) {
            lVar9 = 0;
            local_90 = "Private-Key";
            if ((param_3 & 3) != 0) goto LAB_00100ec7;
            goto LAB_00100c9c;
          }
        }
        uVar1 = 0;
        lVar6 = 0;
      }
LAB_00100cfa:
      CRYPTO_clear_free(local_58,lVar6,"providers/implementations/encode_decode/encode_key2text.c",
                        0x178);
      CRYPTO_free(local_50);
      goto LAB_00100d21;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x147,"ec_to_text");
    ERR_set_error(0x39,0x9e,0);
  }
  uVar1 = 0;
LAB_00100d21:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



bool rsa_to_text(BIO *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined8 local_58;
  BIGNUM *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (BIGNUM *)0x0;
  local_48 = 0;
  uVar8 = ossl_rsa_get0_pss_params_30(param_2);
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    bVar18 = false;
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x1d7,"rsa_to_text");
    ERR_set_error(0x39,0xc0102,0);
    goto LAB_0010145c;
  }
  lVar9 = OPENSSL_sk_new_null();
  lVar10 = OPENSSL_sk_new_null();
  lVar11 = OPENSSL_sk_new_null();
  if ((lVar9 == 0 || lVar10 == 0) || (lVar11 == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x1e0,"rsa_to_text");
    ERR_set_error(0x39,0x8000f,0);
  }
  else {
    if ((param_3 & 1) == 0) {
      bVar18 = (param_3 & 2) == 0;
      pcVar16 = "Exponent:";
      if (bVar18) {
        pcVar16 = (char *)0x0;
      }
      pcVar14 = "Modulus:";
      if (bVar18) {
        pcVar14 = (char *)0x0;
      }
      pcVar12 = "RSA key";
      if (!bVar18) {
        pcVar12 = "Public-Key";
      }
      RSA_get0_key(param_2,&local_50,&local_48,&local_58);
      ossl_rsa_get0_all_params(param_2,lVar9,lVar10,lVar11);
      OPENSSL_sk_num(lVar9);
      uVar1 = BN_num_bits(local_50);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar12,(ulong)uVar1);
      if (iVar2 < 1) goto LAB_00101459;
    }
    else {
      RSA_get0_key(param_2,&local_50,&local_48,&local_58);
      ossl_rsa_get0_all_params(param_2,lVar9,lVar10,lVar11);
      uVar1 = OPENSSL_sk_num(lVar9);
      uVar3 = BN_num_bits(local_50);
      bVar18 = false;
      iVar2 = BIO_printf(param_1,"%s: (%d bit, %d primes)\n","Private-Key",(ulong)uVar3,(ulong)uVar1
                        );
      if (iVar2 < 1) goto LAB_0010145c;
      pcVar16 = "publicExponent:";
      pcVar14 = "modulus:";
    }
    iVar2 = ossl_bio_print_labeled_bignum(param_1,pcVar14,local_50);
    if ((iVar2 != 0) &&
       (iVar2 = ossl_bio_print_labeled_bignum(param_1,pcVar16,local_48), iVar2 != 0)) {
      if ((param_3 & 1) == 0) {
LAB_001015bc:
        if ((param_3 & 0x80) != 0) {
          iVar2 = RSA_test_flags(param_2,0xf000);
          if (iVar2 == 0) {
            bVar18 = true;
            iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar8);
            if (iVar2 == 0) {
              iVar2 = BIO_printf(param_1,"(INVALID PSS PARAMETERS)\n");
              bVar18 = 0 < iVar2;
            }
            goto LAB_0010145c;
          }
          if (iVar2 == 0x1000) {
            iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar8);
            if (iVar2 != 0) {
              iVar2 = BIO_printf(param_1,"No PSS parameter restrictions\n");
              bVar18 = 0 < iVar2;
              goto LAB_0010145c;
            }
            iVar2 = ossl_rsa_pss_params_30_hashalg(uVar8);
            iVar4 = ossl_rsa_pss_params_30_maskgenalg(uVar8);
            iVar5 = ossl_rsa_pss_params_30_maskgenhashalg(uVar8);
            uVar1 = ossl_rsa_pss_params_30_saltlen(uVar8);
            iVar6 = ossl_rsa_pss_params_30_trailerfield(uVar8);
            iVar7 = BIO_printf(param_1,"PSS parameter restrictions:\n");
            if (0 < iVar7) {
              pcVar14 = "";
              if (iVar2 == 0x40) {
                pcVar14 = " (default)";
              }
              uVar8 = ossl_rsa_oaeppss_nid2name(iVar2);
              iVar2 = BIO_printf(param_1,"  Hash Algorithm: %s%s\n",uVar8,pcVar14);
              if (0 < iVar2) {
                if ((iVar4 != 0x38f) || (pcVar14 = " (default)", iVar5 != 0x40)) {
                  pcVar14 = "";
                }
                uVar8 = ossl_rsa_oaeppss_nid2name(iVar5);
                uVar13 = ossl_rsa_mgf_nid2name(iVar4);
                iVar2 = BIO_printf(param_1,"  Mask Algorithm: %s with %s%s\n",uVar13,uVar8,pcVar14);
                if (0 < iVar2) {
                  pcVar14 = " (default)";
                  if (uVar1 != 0x14) {
                    pcVar14 = "";
                  }
                  iVar2 = BIO_printf(param_1,"  Minimum Salt Length: %d%s\n",(ulong)uVar1,pcVar14);
                  if (0 < iVar2) {
                    pcVar14 = " (default)";
                    if (iVar6 != 1) {
                      pcVar14 = "";
                    }
                    iVar2 = BIO_printf(param_1,"  Trailer Field: 0x%x%s\n",iVar6,pcVar14);
                    bVar18 = 0 < iVar2;
                    goto LAB_0010145c;
                  }
                }
              }
            }
            goto LAB_00101459;
          }
        }
        bVar18 = true;
        goto LAB_0010145c;
      }
      iVar2 = ossl_bio_print_labeled_bignum(param_1,"privateExponent:",local_58);
      if (iVar2 != 0) {
        uVar13 = OPENSSL_sk_value(lVar9,0);
        iVar2 = ossl_bio_print_labeled_bignum(param_1,"prime1:",uVar13);
        if (iVar2 != 0) {
          uVar13 = OPENSSL_sk_value(lVar9,1);
          iVar2 = ossl_bio_print_labeled_bignum(param_1,"prime2:",uVar13);
          if (iVar2 != 0) {
            uVar13 = OPENSSL_sk_value(lVar10,0);
            iVar2 = ossl_bio_print_labeled_bignum(param_1,"exponent1:",uVar13);
            if (iVar2 != 0) {
              uVar13 = OPENSSL_sk_value(lVar10,1);
              iVar2 = ossl_bio_print_labeled_bignum(param_1,"exponent2:",uVar13);
              if (iVar2 != 0) {
                uVar13 = OPENSSL_sk_value(lVar11,0);
                iVar2 = ossl_bio_print_labeled_bignum(param_1,"coefficient:",uVar13);
                if (iVar2 != 0) {
                  uVar17 = 2;
                  while( true ) {
                    iVar2 = OPENSSL_sk_num(lVar9);
                    iVar4 = (int)uVar17;
                    if (iVar2 <= iVar4) goto LAB_001015bc;
                    uVar15 = (ulong)(iVar4 + 1);
                    iVar2 = BIO_printf(param_1,"prime%d:",uVar15);
                    if (iVar2 < 1) break;
                    uVar13 = OPENSSL_sk_value(lVar9,uVar17);
                    iVar2 = ossl_bio_print_labeled_bignum(param_1,0,uVar13);
                    if ((iVar2 == 0) ||
                       (iVar2 = BIO_printf(param_1,"exponent%d:",uVar15), iVar2 < 1)) break;
                    uVar13 = OPENSSL_sk_value(lVar10,uVar17);
                    iVar2 = ossl_bio_print_labeled_bignum(param_1,0,uVar13);
                    if ((iVar2 == 0) ||
                       (iVar2 = BIO_printf(param_1,"coefficient%d:",uVar15), iVar2 < 1)) break;
                    uVar13 = OPENSSL_sk_value(lVar11,iVar4 + -1);
                    iVar2 = ossl_bio_print_labeled_bignum(param_1,0,uVar13);
                    uVar17 = uVar15;
                    if (iVar2 == 0) break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00101459:
  bVar18 = false;
LAB_0010145c:
  OPENSSL_sk_free(lVar9);
  OPENSSL_sk_free(lVar10);
  OPENSSL_sk_free(lVar11);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar18;
}



bool dsa2text_encode(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  BIO *bio;
  long lVar3;
  long lVar4;
  BIGNUM *a;
  long lVar5;
  bool bVar6;
  char *local_40;
  
  if (param_4 != 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2b8,
                  "dsa2text_encode");
    ERR_set_error(0x39,0x80106,0);
    return false;
  }
  bio = (BIO *)ossl_bio_new_from_core_bio();
  if (bio == (BIO *)0x0) {
    return false;
  }
  if (param_3 == 0) {
    ERR_new();
    bVar6 = false;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x7c,"dsa_to_text");
    ERR_set_error(0x39,0xc0102,0);
    goto LAB_00101ae2;
  }
  lVar4 = 0;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) != 0) {
      lVar3 = 0;
      local_40 = "Public-Key";
      goto LAB_00101a29;
    }
    lVar5 = 0;
    if ((param_5 & 4) != 0) {
      lVar3 = 0;
      local_40 = "DSA-Parameters";
      goto LAB_00101a3c;
    }
    local_40 = (char *)0x0;
    lVar3 = 0;
LAB_00101a50:
    a = (BIGNUM *)DSA_get0_p(param_3);
    if (a == (BIGNUM *)0x0) {
      ERR_new();
      bVar6 = false;
      ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x9f,"dsa_to_text");
      ERR_set_error(0x39,0x9e,0);
      goto LAB_00101ae2;
    }
    uVar1 = BN_num_bits(a);
    iVar2 = BIO_printf(bio,"%s: (%d bit)\n",local_40,(ulong)uVar1);
    if (((0 < iVar2) &&
        ((lVar3 == 0 || (iVar2 = ossl_bio_print_labeled_bignum(bio,"priv:",lVar3), iVar2 != 0)))) &&
       ((lVar5 == 0 || (iVar2 = ossl_bio_print_labeled_bignum(bio,"pub: ",lVar5), iVar2 != 0)))) {
      if (lVar4 == 0) {
        bVar6 = true;
      }
      else {
        iVar2 = ossl_bio_print_ffc_params(bio,lVar4);
        bVar6 = iVar2 != 0;
      }
      goto LAB_00101ae2;
    }
  }
  else {
    lVar3 = DSA_get0_priv_key(param_3);
    local_40 = "Private-Key";
    if (lVar3 == 0) {
      ERR_new();
      bVar6 = false;
      ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x8a,"dsa_to_text");
      ERR_set_error(0x39,0xdd,0);
      goto LAB_00101ae2;
    }
LAB_00101a29:
    lVar5 = 0;
    if (((param_5 & 3) == 0) || (lVar5 = DSA_get0_pub_key(param_3), lVar5 != 0)) {
      if ((param_5 & 4) != 0) {
LAB_00101a3c:
        lVar4 = ossl_dsa_get0_params(param_3);
        if (lVar4 == 0) {
          ERR_new();
          bVar6 = false;
          ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x98,
                        "dsa_to_text");
          ERR_set_error(0x39,0xe2,0);
          goto LAB_00101ae2;
        }
      }
      goto LAB_00101a50;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x91,"dsa_to_text");
    ERR_set_error(0x39,0xdc,0);
  }
  bVar6 = false;
LAB_00101ae2:
  BIO_free(bio);
  return bVar6;
}



undefined4
ml_kem_7682text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_kem_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c8,
                  "ml_kem_7682text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ml_dsa_442text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2cf,
                  "ml_dsa_442text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_256s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2df,
                  "slh_dsa_shake_256s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_192f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2de,
                  "slh_dsa_shake_192f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_192s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d7,
                  "slh_dsa_sha2_192s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_128s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d5,
                  "slh_dsa_sha2_128s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_256f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2e0,
                  "slh_dsa_shake_256f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_192s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2dd,
                  "slh_dsa_shake_192s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_256s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d9,
                  "slh_dsa_sha2_256s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ml_dsa_872text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d1,
                  "ml_dsa_872text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_192f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d8,
                  "slh_dsa_sha2_192f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ml_dsa_652text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d0,
                  "ml_dsa_652text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_128f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2dc,
                  "slh_dsa_shake_128f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_128f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2d6,
                  "slh_dsa_sha2_128f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_shake_128s2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2db,
                  "slh_dsa_shake_128s2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
slh_dsa_sha2_256f2text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_slh_dsa_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2da,
                  "slh_dsa_sha2_256f2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ml_kem_10242text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_kem_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c9,
                  "ml_kem_10242text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ml_kem_5122text_encode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ossl_ml_kem_key_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c7,
                  "ml_kem_5122text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
x255192text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ecx_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c2,
                  "x255192text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
rsa2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = rsa_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2cb,
                  "rsa2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
rsapss2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = rsa_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2cc,
                  "rsapss2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ed4482text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ecx_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c1,
                  "ed4482text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ed255192text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ecx_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c0,
                  "ed255192text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
ec2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
              undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ec_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",699,"ec2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
dh2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
              undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = dh_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2b4,"dh2text_encode"
                 );
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
x4482text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ecx_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2c3,
                  "x4482text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
dhx2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = dh_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2b5,
                  "dhx2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined4
sm22text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = ec_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2text.c",0x2bd,
                  "sm22text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}


