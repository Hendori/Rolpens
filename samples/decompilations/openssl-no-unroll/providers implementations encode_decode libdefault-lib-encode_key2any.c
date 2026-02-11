
undefined1 * key2any_settable_ctx_params(void)

{
  return settables_223;
}



bool rsa_to_type_specific_keypair_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool dh_to_type_specific_params_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



uint dsa_to_type_specific_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



bool ec_to_type_specific_no_pub_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



uint rsa_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsa_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rsa_pub_k2d(RSA *a,uchar **out)

{
  int iVar1;
  
  iVar1 = i2d_RSAPublicKey(a,out);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rsa_prv_k2d(RSA *a,uchar **out)

{
  int iVar1;
  
  iVar1 = i2d_RSAPrivateKey(a,out);
  return iVar1;
}



bool rsa_check_key_type(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = RSA_test_flags(param_1,0xf000);
  if (iVar1 == 0) {
    return param_2 == 6;
  }
  if (iVar1 != 0x1000) {
    return false;
  }
  return param_2 == 0x390;
}



undefined4
prepare_rsa_params(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *data;
  ASN1_STRING *str;
  long in_FS_OFFSET;
  long local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = ossl_rsa_get0_pss_params_30();
  *param_4 = 0;
  iVar2 = RSA_test_flags(param_1,0xf000);
  if (iVar2 == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 0;
    if (iVar2 != 0x1000) goto LAB_001003a0;
    iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar4);
    uVar3 = 0xffffffff;
    if (iVar2 == 0) {
      local_80 = 0;
      iVar2 = WPACKET_init_null_der(local_78);
      if (iVar2 == 0) {
        data = (void *)0x0;
      }
      else {
        bVar1 = false;
        data = (void *)0x0;
        do {
          iVar2 = ossl_DER_w_RSASSA_PSS_params(local_78,0xffffffff,uVar4);
          if (((iVar2 == 0) || (iVar2 = WPACKET_finish(local_78), iVar2 == 0)) ||
             (iVar2 = WPACKET_get_total_written(local_78,&local_80), iVar2 == 0)) {
            WPACKET_cleanup(local_78);
            goto LAB_001003ef;
          }
          WPACKET_cleanup(local_78);
          if ((local_80 == 0) || (bVar1)) {
            str = ASN1_STRING_new();
            if (str == (ASN1_STRING *)0x0) goto LAB_001003ef;
            uVar3 = 1;
            *param_5 = 0x10;
            ASN1_STRING_set0(str,data,(int)local_80);
            *param_4 = str;
            goto LAB_001003a0;
          }
          data = CRYPTO_malloc((int)local_80,
                               "providers/implementations/encode_decode/encode_key2any.c",0x3b6);
          if (data == (void *)0x0) break;
          iVar2 = WPACKET_init_der(local_78,data,local_80);
          bVar1 = true;
        } while (iVar2 != 0);
        WPACKET_cleanup(local_78);
      }
LAB_001003ef:
      CRYPTO_free(data);
      uVar3 = 0;
      goto LAB_001003a0;
    }
  }
  *param_5 = uVar3;
  uVar3 = 1;
LAB_001003a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void rsa_to_type_specific_keypair_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dh_to_type_specific_params_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_type_specific_params_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dsa_to_type_specific_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void ec_to_type_specific_no_pub_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void sm2_to_type_specific_no_pub_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void rsapss_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void ed25519_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed448_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void x25519_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x448_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_87_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void rsa_to_type_specific_keypair_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_type_specific_params_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_type_specific_params_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_type_specific_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_type_specific_no_pub_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_type_specific_no_pub_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



bool key2any_set_ctx_params(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  lVar3 = OSSL_PARAM_locate_const(param_2,"cipher");
  lVar4 = OSSL_PARAM_locate_const(param_2,"properties");
  lVar5 = OSSL_PARAM_locate_const(param_2,"save-parameters");
  if (lVar3 != 0) {
    local_40 = 0;
    local_38 = 0;
    iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar3,&local_40);
    if ((iVar1 == 0) ||
       ((lVar4 != 0 && (iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar4,&local_38), iVar1 == 0)))) {
LAB_00100c88:
      bVar6 = false;
      goto LAB_00100c66;
    }
    EVP_CIPHER_free(param_1[2]);
    param_1[2] = 0;
    *(uint *)((long)param_1 + 0xc) = (uint)(local_40 != 0);
    if (local_40 != 0) {
      lVar3 = EVP_CIPHER_fetch(uVar2,local_40,local_38);
      param_1[2] = lVar3;
      if (lVar3 == 0) goto LAB_00100c88;
    }
  }
  bVar6 = true;
  if (lVar5 != 0) {
    iVar1 = OSSL_PARAM_get_int(lVar5,param_1 + 1);
    bVar6 = iVar1 != 0;
  }
LAB_00100c66:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



void key2any_freectx(void *param_1)

{
  ossl_pw_clear_passphrase_data((long)param_1 + 0x18);
  EVP_CIPHER_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



void key2any_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x48,"providers/implementations/encode_decode/encode_key2any.c",0x45d);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  return;
}



bool dh_check_key_type(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DH_test_flags(param_1,0x1000);
  return (-(uint)(iVar1 == 0) & 0xfffffc84) + 0x398 == param_2;
}



void dh_type_specific_params_to_der(DH *param_1,uchar **param_2)

{
  int iVar1;
  
  iVar1 = DH_test_flags(param_1,0x1000);
  if (iVar1 == 0) {
    i2d_DHparams(param_1,param_2);
    return;
  }
  i2d_DHxparams();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dsa_param_k2d(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = i2d_DSAparams(a,pp);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dsa_pub_k2d(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = i2d_DSAPublicKey(a,pp);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dsa_prv_k2d(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = i2d_DSAPrivateKey(a,pp);
  return iVar1;
}



undefined8
prepare_dh_params(DH *param_1,int param_2,undefined8 param_3,undefined8 *param_4,undefined4 *param_5
                 )

{
  int iVar1;
  ASN1_STRING *a;
  
  a = ASN1_STRING_new();
  if (a == (ASN1_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x1d3,
                  "prepare_dh_params");
    ERR_set_error(0x39,0x8000d,0);
  }
  else {
    if (param_2 == 0x398) {
      iVar1 = i2d_DHxparams();
      a->length = iVar1;
    }
    else {
      iVar1 = i2d_DHparams(param_1,&a->data);
      a->length = iVar1;
    }
    if (0 < iVar1) {
      a->type = 0x10;
      *param_4 = a;
      *param_5 = 0x10;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x1dd,
                  "prepare_dh_params");
    ERR_set_error(0x39,0x8000d,0);
    ASN1_STRING_free(a);
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ec_param_k2d(EC_KEY *key,uchar **out)

{
  int iVar1;
  
  iVar1 = i2d_ECParameters(key,out);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ec_prv_k2d(EC_KEY *key,uchar **out)

{
  int iVar1;
  
  iVar1 = i2d_ECPrivateKey(key,out);
  return iVar1;
}



undefined8
prepare_ec_params(EC_KEY *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  ASN1_OBJECT *a;
  ASN1_STRING *a_00;
  undefined8 uVar3;
  long lVar4;
  
  group = EC_KEY_get0_group(param_1);
  if (group == (EC_GROUP *)0x0) {
LAB_00100fa0:
    uVar3 = 0;
  }
  else {
    iVar1 = EC_GROUP_get_curve_name(group);
    if (iVar1 == 0) {
LAB_00100f11:
      a_00 = ASN1_STRING_new();
      if (a_00 == (ASN1_STRING *)0x0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x2a1,
                      "prepare_ec_explicit_params");
        ERR_set_error(0x39,0x8000d,0);
        goto LAB_00100fa0;
      }
      iVar1 = i2d_ECParameters(param_1,&a_00->data);
      a_00->length = iVar1;
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x2a7,
                      "prepare_ec_explicit_params");
        ERR_set_error(0x39,0x8000d,0);
        ASN1_STRING_free(a_00);
        return 0;
      }
      *param_5 = 0x10;
      *param_4 = a_00;
    }
    else {
      a = OBJ_nid2obj(iVar1);
      if (a == (ASN1_OBJECT *)0x0) goto LAB_00100fa0;
      uVar2 = EC_GROUP_get_asn1_flag(group);
      if ((uVar2 & 1) == 0) goto LAB_00100f11;
      lVar4 = OBJ_length(a);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x2ca,
                      "prepare_ec_params");
        ERR_set_error(0x39,0xd1,0);
        ASN1_OBJECT_free(a);
        return 0;
      }
      *param_4 = a;
      *param_5 = 6;
    }
    uVar3 = 1;
  }
  return uVar3;
}



bool key_to_type_specific_pem_pub_bio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio_ctx
                    (param_6,param_7,param_4,param_1,param_2,*(undefined8 *)(param_7 + 0x10),0,0,0,0
                    );
  return 0 < iVar1;
}



bool key_to_type_specific_pem_priv_bio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio_ctx
                    (param_6,param_7,param_4,param_1,param_2,*(undefined8 *)(param_7 + 0x10),0,0,
                     _GLOBAL_OFFSET_TABLE_,param_7 + 0x18);
  return 0 < iVar1;
}



PKCS8_PRIV_KEY_INFO *
key_to_p8info(undefined8 param_1,int param_2,void *param_3,int param_4,code *param_5,
             undefined8 param_6)

{
  uchar *penc;
  int iVar1;
  PKCS8_PRIV_KEY_INFO *priv;
  ASN1_OBJECT *aobj;
  PKCS8_PRIV_KEY_INFO *pPVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  priv = PKCS8_PRIV_KEY_INFO_new();
  if (priv != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = (*param_5)(param_1,&local_48,param_6);
    penc = local_48;
    if (0 < iVar1) {
      aobj = OBJ_nid2obj(param_2);
      iVar1 = PKCS8_pkey_set0(priv,aobj,0,param_4,param_3,penc,iVar1);
      pPVar2 = priv;
      if (iVar1 != 0) goto LAB_00101149;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65,"key_to_p8info");
  ERR_set_error(0x39,0x8000d,0);
  pPVar2 = (PKCS8_PRIV_KEY_INFO *)0x0;
  PKCS8_PRIV_KEY_INFO_free(priv);
  CRYPTO_free(local_48);
LAB_00101149:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 p8info_to_encp8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_440 = 0;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_2);
  if (param_2[2] != 0) {
    iVar1 = ossl_pw_get_passphrase(local_438,0x400,&local_440,0,1,param_2 + 3);
    if (iVar1 != 0) {
      uVar2 = PKCS8_encrypt_ex(0xffffffff,param_2[2],local_438,local_440 & 0xffffffff,0,0,0,param_1,
                               uVar2,0);
      OPENSSL_cleanse(local_438,local_440);
      goto LAB_00101272;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x7b,"p8info_to_encp8")
    ;
    ERR_set_error(0x39,0x9f,0);
  }
  uVar2 = 0;
LAB_00101272:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



X509_PUBKEY *
key_to_pubkey(undefined8 param_1,int param_2,void *param_3,int param_4,code *param_5,
             undefined8 param_6)

{
  uchar *penc;
  int iVar1;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *pXVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  pub = X509_PUBKEY_new();
  if (pub != (X509_PUBKEY *)0x0) {
    iVar1 = (*param_5)(param_1,&local_48,param_6);
    penc = local_48;
    if (0 < iVar1) {
      aobj = OBJ_nid2obj(param_2);
      iVar1 = X509_PUBKEY_set0_param(pub,aobj,param_4,param_3,penc,iVar1);
      pXVar2 = pub;
      if (iVar1 != 0) goto LAB_00101363;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
  ERR_set_error(0x39,0x8000b,0);
  pXVar2 = (X509_PUBKEY *)0x0;
  X509_PUBKEY_free(pub);
  CRYPTO_free(local_48);
LAB_00101363:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int key_to_spki_der_pub_bio
              (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  X509_PUBKEY *a;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0xffffffff;
  local_48 = 0;
  if ((param_5 == (code *)0x0) ||
     (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c),
     iVar1 != 0)) {
    a = (X509_PUBKEY *)key_to_pubkey(param_2,param_3,local_48,local_4c,param_6,param_7);
    iVar1 = 0;
    if (a != (X509_PUBKEY *)0x0) {
      iVar1 = i2d_X509_PUBKEY_bio(param_1,a);
    }
    X509_PUBKEY_free(a);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int dh_pki_priv_to_der(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  BIGNUM *bn;
  ASN1_INTEGER *a;
  
  bn = (BIGNUM *)DH_get0_priv_key();
  if (bn == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x206,
                  "dh_pki_priv_to_der");
    ERR_set_error(0x39,0xdd,0);
  }
  else {
    a = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
    if (a != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a,param_2);
      ASN1_STRING_clear_free(a);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x20a,
                  "dh_pki_priv_to_der");
    ERR_set_error(0x39,0xa0,0);
  }
  return 0;
}



int dh_spki_pub_to_der(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  BIGNUM *bn;
  ASN1_INTEGER *a;
  
  bn = (BIGNUM *)DH_get0_pub_key();
  if (bn == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x1f0,
                  "dh_spki_pub_to_der");
    ERR_set_error(0x39,0xdc,0);
  }
  else {
    a = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
    if (a != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a,param_2);
      ASN1_STRING_clear_free(a);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",500,
                  "dh_spki_pub_to_der");
    ERR_set_error(0x39,0xa0,0);
  }
  return 0;
}



int dsa_pki_priv_to_der(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  BIGNUM *bn;
  ASN1_INTEGER *a;
  
  bn = (BIGNUM *)DSA_get0_priv_key();
  if (bn == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x27b,
                  "dsa_pki_priv_to_der");
    ERR_set_error(0x39,0xdd,0);
  }
  else {
    a = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
    if (a != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a,param_2);
      ASN1_STRING_clear_free(a);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x27f,
                  "dsa_pki_priv_to_der");
    ERR_set_error(0x39,0xa0,0);
  }
  return 0;
}



int dsa_spki_pub_to_der(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  BIGNUM *bn;
  ASN1_INTEGER *a;
  
  bn = (BIGNUM *)DSA_get0_pub_key();
  if (bn == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x265,
                  "dsa_spki_pub_to_der");
    ERR_set_error(0x39,0xdc,0);
  }
  else {
    a = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
    if (a != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a,param_2);
      ASN1_STRING_clear_free(a);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x269,
                  "dsa_spki_pub_to_der");
    ERR_set_error(0x39,0xa0,0);
  }
  return 0;
}



int ec_pki_priv_to_der(EC_KEY *param_1,uchar **param_2)

{
  uint flags;
  int iVar1;
  
  flags = EC_KEY_get_enc_flags(param_1);
  EC_KEY_set_enc_flags(param_1,flags | 1);
  iVar1 = i2d_ECPrivateKey(param_1,param_2);
  EC_KEY_set_enc_flags(param_1,flags);
  return iVar1;
}



int ecx_pki_priv_to_der(long param_1,uchar **param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(uchar **)(param_1 + 0x50) == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x331,
                  "ecx_pki_priv_to_der");
    ERR_set_error(0x39,0xc0102,0);
    iVar1 = 0;
  }
  else {
    local_28.flags = 0;
    local_28.length = (int)*(undefined8 *)(param_1 + 0x58);
    local_28.data = *(uchar **)(param_1 + 0x50);
    iVar1 = i2d_ASN1_OCTET_STRING(&local_28,param_2);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x33b,
                    "ecx_pki_priv_to_der");
      ERR_set_error(0x39,0x8000d,0);
      iVar1 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ecx_spki_pub_to_der(long param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x31d,
                  "ecx_spki_pub_to_der");
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    lVar1 = CRYPTO_memdup(param_1 + 0x11,*(undefined8 *)(param_1 + 0x58),
                          "providers/implementations/encode_decode/encode_key2any.c",0x321);
    if (lVar1 != 0) {
      *param_2 = lVar1;
      return *(undefined4 *)(param_1 + 0x58);
    }
  }
  return 0;
}



ulong slh_dsa_pki_priv_to_der(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = ossl_slh_dsa_key_get_priv();
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x420,
                  "slh_dsa_pki_priv_to_der");
    ERR_set_error(0x39,0xc0102,0);
LAB_00101a40:
    uVar2 = 0;
  }
  else {
    uVar2 = ossl_slh_dsa_key_get_priv_len(param_1);
    if (param_2 != (long *)0x0) {
      uVar3 = ossl_slh_dsa_key_get_priv(param_1);
      lVar1 = CRYPTO_memdup(uVar3,uVar2,"providers/implementations/encode_decode/encode_key2any.c",
                            0x426);
      *param_2 = lVar1;
      if (lVar1 == 0) goto LAB_00101a40;
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



ulong slh_dsa_spki_pub_to_der(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x40d,
                  "slh_dsa_spki_pub_to_der");
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    uVar1 = ossl_slh_dsa_key_get_pub_len();
    uVar2 = ossl_slh_dsa_key_get_pub(param_1);
    lVar3 = CRYPTO_memdup(uVar2,uVar1,"providers/implementations/encode_decode/encode_key2any.c",
                          0x411);
    if (lVar3 != 0) {
      *param_2 = lVar3;
      return uVar1 & 0xffffffff;
    }
  }
  return 0;
}



void ml_kem_pki_priv_to_der(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ossl_ml_kem_i2d_prvkey(param_1,param_2,*param_3);
  return;
}



void ml_kem_spki_pub_to_der(void)

{
  ossl_ml_kem_i2d_pubkey();
  return;
}



void ml_dsa_pki_priv_to_der(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ossl_ml_dsa_i2d_prvkey(param_1,param_2,*param_3);
  return;
}



bool key_to_type_specific_der_bio(BIO *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  code *in_R9;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (void *)0x0;
  iVar2 = (*in_R9)(param_2,&local_18,in_stack_00000008);
  if (iVar2 < 1) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                  "key_to_type_specific_der_bio");
    ERR_set_error(0x39,0x80039,0);
    bVar1 = false;
  }
  else {
    iVar2 = BIO_write(param_1,local_18,iVar2);
    CRYPTO_free(local_18);
    bVar1 = 0 < iVar2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ec_spki_pub_to_der(EC_KEY *param_1,uchar **param_2)

{
  int iVar1;
  EC_POINT *pEVar2;
  
  pEVar2 = EC_KEY_get0_public_key(param_1);
  if (pEVar2 != (EC_POINT *)0x0) {
    iVar1 = i2o_ECPublicKey(param_1,param_2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x2db,
                "ec_spki_pub_to_der");
  ERR_set_error(0x39,0xdc,0);
  return 0;
}



uint ed448_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint x448_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



bool sm2_to_type_specific_no_pub_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool dhx_to_DHX_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool rsa_to_PKCS1_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



undefined4
key2any_encode_constprop_0
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5
          ,code *param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if (param_3 != 0) {
    a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((a == (BIO *)0x0) ||
       ((param_7 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_7,param_8), iVar1 == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_6)(a,param_3,param_4,param_5,param_9,param_10,param_1);
    }
    BIO_free(a);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode");
  ERR_set_error(0x39,0xc0102,0);
  return 0;
}



undefined8 dsa_to_type_specific_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 0x84) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5d0,
                "dsa_to_type_specific_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_type_specific_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 0x84) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5e3,
                "dsa_to_type_specific_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x611,
                "dsa_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x612,
                "dsa_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x613,
                "dsa_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x617,
                "ec_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x618,
                "ec_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x619,
                "ec_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x61a,
                "ec_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x61b,
                "ec_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ec_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x61c,
                "ec_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 sm2_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x623,
                "sm2_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed25519_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x626,
                "ed25519_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed25519_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x627,
                "ed25519_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed25519_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x628,
                "ed25519_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed25519_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x629,
                "ed25519_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed25519_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62a,
                "ed25519_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed448_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62c,
                "ed448_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed448_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62d,
                "ed448_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed448_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62e,
                "ed448_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ed448_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62f,
                "ed448_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 x25519_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x637,
                "x25519_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x642,
                "slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x655,
                "slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x656,
                "slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x657,
                "slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x658,
                "slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x659,
                "slh_dsa_sha2_128s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65a,
                "slh_dsa_sha2_128f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65b,
                "slh_dsa_sha2_192s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65c,
                "slh_dsa_sha2_192f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65d,
                "slh_dsa_sha2_256s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65e,
                "slh_dsa_sha2_256f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x65f,
                "slh_dsa_sha2_128s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128f_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x660,
                "slh_dsa_sha2_128f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x661,
                "slh_dsa_sha2_192s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x663,
                "slh_dsa_sha2_256s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256f_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x664,
                "slh_dsa_sha2_256f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x665,
                "slh_dsa_shake_128s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x666,
                "slh_dsa_shake_128f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x667,
                "slh_dsa_shake_192s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x668,
                "slh_dsa_shake_192f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256s_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x669,
                "slh_dsa_shake_256s_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256f_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66a,
                "slh_dsa_shake_256f_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66b,
                "slh_dsa_shake_128s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128f_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66c,
                "slh_dsa_shake_128f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66d,
                "slh_dsa_shake_192s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192f_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66e,
                "slh_dsa_shake_192f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256s_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x66f,
                "slh_dsa_shake_256s_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256f_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x670,
                "slh_dsa_shake_256f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x671,
                "slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x673,
                "slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x674,
                "slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x675,
                "slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x676,
                "slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x677,
                "slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x678,
                "slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x679,
                "slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67a,
                "slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67b,
                "slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67c,
                "slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67d,
                "slh_dsa_shake_128s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128f_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67e,
                "slh_dsa_shake_128f_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x67f,
                "slh_dsa_shake_192s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192f_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x680,
                "slh_dsa_shake_192f_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256s_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x681,
                "slh_dsa_shake_256s_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256f_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x682,
                "slh_dsa_shake_256f_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x683,
                "slh_dsa_shake_128s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_128f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x684,
                "slh_dsa_shake_128f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x685,
                "slh_dsa_shake_192s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_192f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x686,
                "slh_dsa_shake_192f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256s_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x687,
                "slh_dsa_shake_256s_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 slh_dsa_shake_256f_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x688,
                "slh_dsa_shake_256f_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x68c,
                "ml_kem_512_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x68d,
                "ml_kem_512_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x68e,
                "ml_kem_512_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x68f,
                "ml_kem_512_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x690,
                "ml_kem_512_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_512_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x691,
                "ml_kem_512_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_768_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x693,
                "ml_kem_768_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_768_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x694,
                "ml_kem_768_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_kem_768_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x695,
                "ml_kem_768_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_DSA_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 0x84) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6b3,
                "dsa_to_DSA_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dsa_to_DSA_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
    if ((in_R8 & 0x84) != 0) {
      uVar1 = key2any_encode_constprop_0();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6b4,
                "dsa_to_DSA_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 ml_dsa_65_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_0();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d8,
                "ml_dsa_65_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8
prepare_dsa_params(DSA *param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ASN1_STRING *a;
  
  lVar2 = DSA_get0_p();
  lVar3 = DSA_get0_q(param_1);
  lVar4 = DSA_get0_g(param_1);
  if ((((param_3 == 0) || (lVar2 == 0)) || (lVar3 == 0)) || (lVar4 == 0)) {
    *param_4 = 0;
    *param_5 = 0xffffffff;
  }
  else {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x23d,
                    "encode_dsa_params");
      ERR_set_error(0x39,0x8000d,0);
      return 0;
    }
    iVar1 = i2d_DSAparams(param_1,&a->data);
    a->length = iVar1;
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x244,
                    "encode_dsa_params");
      ERR_set_error(0x39,0x8000d,0);
      ASN1_STRING_free(a);
      return 0;
    }
    *param_5 = 0x10;
    *param_4 = a;
  }
  return 1;
}



void ml_dsa_87_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void ed25519_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed25519_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed25519_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed25519_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed25519_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed25519_keymgmt_functions,param_1);
  return;
}



void ed448_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void ed448_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void ed448_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void ed448_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void ed448_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ed448_keymgmt_functions,param_1);
  return;
}



void x25519_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x25519_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x25519_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x25519_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x25519_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x25519_keymgmt_functions,param_1);
  return;
}



void x448_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void x448_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void x448_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void x448_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void x448_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_x448_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_128f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_192f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256s_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,param_1);
  return;
}



void slh_dsa_shake_256f_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_512_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_512_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_768_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_768_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_kem_1024_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_kem_1024_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_44_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_44_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_65_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_65_keymgmt_functions,param_1);
  return;
}



void ml_dsa_87_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void ml_dsa_87_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void ml_dsa_87_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



void ml_dsa_87_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ml_dsa_87_keymgmt_functions,param_1);
  return;
}



int key_to_epki_der_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *p8;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
LAB_00106010:
    iVar2 = 0;
    goto LAB_00106012;
  }
  if (param_5 == (code *)0x0) {
    a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,0,0xffffffff,param_6,param_7);
    if (a_00 != (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_00105fd7;
LAB_00106076:
    p8 = (X509_SIG *)0x0;
    iVar2 = 0;
  }
  else {
    iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c);
    a = local_48;
    iVar2 = local_4c;
    if (iVar1 == 0) goto LAB_00106010;
    a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,local_48,local_4c,param_6,param_7);
    if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
      if (iVar2 == 6) {
        ASN1_OBJECT_free(a);
      }
      else if (iVar2 == 0x10) {
        ASN1_STRING_free((ASN1_STRING *)a);
      }
      goto LAB_00106076;
    }
LAB_00105fd7:
    p8 = (X509_SIG *)p8info_to_encp8(a_00,param_7);
    iVar2 = 0;
    PKCS8_PRIV_KEY_INFO_free(a_00);
    if (p8 != (X509_SIG *)0x0) {
      iVar2 = i2d_PKCS8_bio(param_1,p8);
    }
  }
  X509_SIG_free(p8);
LAB_00106012:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void rsapss_to_PKCS1_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_PKCS1_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void rsapss_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsapss_keymgmt_functions,param_1);
  return;
}



void sm2_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void sm2_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void dsa_to_type_specific_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void sm2_to_type_specific_no_pub_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void sm2_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void sm2_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void sm2_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void dsa_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dsa_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void sm2_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void dsa_to_DSA_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dsa_to_DSA_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void sm2_to_SM2_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void sm2_to_SM2_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_sm2_keymgmt_functions,param_1);
  return;
}



void dsa_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dsa_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dsa_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dsa_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dsa_keymgmt_functions,param_1);
  return;
}



void dhx_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void rsa_to_RSA_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsa_to_RSA_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dhx_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dhx_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dhx_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void ec_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_EC_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_EC_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void rsa_to_PKCS1_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsa_to_PKCS1_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dh_to_PKCS3_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dh_to_PKCS3_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_X9_42_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dhx_to_X9_42_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void ec_to_X9_62_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_X9_62_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void rsa_to_type_specific_keypair_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dh_to_type_specific_params_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_DHX_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dh_to_DH_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dh_to_DH_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_DHX_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void ec_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void ec_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void rsa_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void dh_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dh_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dh_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dh_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dhx_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void dh_to_SubjectPublicKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void dh_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dh_keymgmt_functions,param_1);
  return;
}



void ec_to_type_specific_no_pub_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void dhx_to_type_specific_params_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_dhx_keymgmt_functions,param_1);
  return;
}



void rsa_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsa_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsa_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void rsa_to_PrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



void ec_to_PrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_ec_keymgmt_functions,param_1);
  return;
}



void rsa_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(&ossl_rsa_keymgmt_functions,param_1);
  return;
}



bool key_to_type_specific_pem_param_bio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio_ctx
                    (param_6,param_7,param_4,param_1,param_2,*(undefined8 *)(param_7 + 0x10),0,0,0,0
                    );
  return 0 < iVar1;
}



void slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_65_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_65_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_1024_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_1024_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_44_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_44_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256f_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_256s_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_128f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_128f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_shake_192f_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_shake_192f_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_slh_dsa_sha2_256s_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x448_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed25519_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void x25519_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ed448_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ed448_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_512_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_512_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_kem_768_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_kem_768_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ml_dsa_87_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ml_dsa_87_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



undefined4
key2any_encode_constprop_2
          (undefined8 *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
          code *param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    iVar1 = DH_test_flags(param_3,0x1000);
    if (param_4 == (-(uint)(iVar1 == 0) & 0xfffffc84) + 0x398) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_2);
      if ((a == (BIO *)0x0) ||
         ((param_7 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_7,param_8), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*param_6)(a,param_3,param_4,param_5,param_9,param_10,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4d8,"key2any_encode")
    ;
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined8 dh_to_PKCS3_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c5,
                "dh_to_PKCS3_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_X9_42_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c7,
                "dhx_to_X9_42_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_PKCS3_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c6,
                "dh_to_PKCS3_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_X9_42_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c8,
                "dhx_to_X9_42_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x601,
                "dh_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x602,
                "dh_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x603,
                "dh_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x604,
                "dh_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x605,
                "dh_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x606,
                "dh_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x607,
                "dhx_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x608,
                "dhx_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x609,
                "dhx_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x60a,
                "dhx_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x60b,
                "dhx_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x60c,
                "dhx_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



void rsapss_to_PKCS1_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_PKCS1_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsapss_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_type_specific_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_type_specific_no_pub_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_DSA_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_DSA_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_SM2_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void sm2_to_SM2_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_sm2_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dsa_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_type_specific_no_pub_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_EncryptedPrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_DH_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_DHX_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_DHX_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_DH_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_PKCS3_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_PKCS3_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_RSA_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_EC_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_PKCS1_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_PKCS1_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_EC_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_X9_42_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_X9_62_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_X9_42_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_SubjectPublicKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_EncryptedPrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_PrivateKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_PrivateKeyInfo_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_RSA_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dhx_to_type_specific_params_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dhx_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void dh_to_type_specific_params_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_dh_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void ec_to_X9_62_pem_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_ec_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



void rsa_to_type_specific_keypair_pem_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(&ossl_rsa_keymgmt_functions,*param_1,param_2,param_3);
  return;
}



undefined4
key2any_encode_constprop_1
          (undefined8 *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
          code *param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    iVar1 = RSA_test_flags(param_3,0xf000);
    if (iVar1 == 0) {
      if (param_4 == 6) goto LAB_00108a2a;
    }
    else if ((iVar1 == 0x1000) && (param_4 == 0x390)) {
LAB_00108a2a:
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_2);
      if ((a == (BIO *)0x0) ||
         ((param_7 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_7,param_8), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*param_6)(a,param_3,param_4,param_5,prepare_rsa_params,param_9,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4d8,"key2any_encode")
    ;
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



undefined8 rsa_to_type_specific_keypair_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5ca,
                "rsa_to_type_specific_keypair_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_type_specific_keypair_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5dd,
                "rsa_to_type_specific_keypair_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f4,
                "rsa_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f5,
                "rsa_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f6,
                "rsa_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f7,
                "rsa_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f8,
                "rsa_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5f9,
                "rsa_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_EncryptedPrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5fa,
                "rsapss_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_EncryptedPrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5fb,
                "rsapss_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_PrivateKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5fc,
                "rsapss_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_PrivateKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 1) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5fd,
                "rsapss_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_SubjectPublicKeyInfo_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5fe,
                "rsapss_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode_constprop_1();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5ff,
                "rsapss_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_RSA_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6aa,
                "rsa_to_RSA_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_RSA_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6ab,
                "rsa_to_RSA_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_PKCS1_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c0,
                "rsa_to_PKCS1_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsa_to_PKCS1_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c1,
                "rsa_to_PKCS1_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_PKCS1_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c2,
                "rsapss_to_PKCS1_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 rsapss_to_PKCS1_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode_constprop_1();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6c3,
                "rsapss_to_PKCS1_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_type_specific_params_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5df,
                "dh_to_type_specific_params_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_type_specific_params_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5cc,
                "dh_to_type_specific_params_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_type_specific_params_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5cd,
                "dhx_to_type_specific_params_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_DHX_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6af,
                "dhx_to_DHX_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_DHX_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6b0,
                "dhx_to_DHX_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_DH_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6ae,
                "dh_to_DH_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dh_to_DH_der_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6ad,
                "dh_to_DH_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 dhx_to_type_specific_params_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 0x84) != 0)) {
    uVar1 = key2any_encode_constprop_2();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5e0,
                "dhx_to_type_specific_params_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint dsa_to_type_specific_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



uint dsa_to_DSA_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



uint dsa_to_DSA_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



int key_to_spki_pem_pub_bio
              (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  X509_PUBKEY *a;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if ((param_5 == (code *)0x0) ||
     (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c),
     iVar1 != 0)) {
    a = (X509_PUBKEY *)key_to_pubkey(param_2,param_3,local_48,local_4c,param_6,param_7);
    if (a == (X509_PUBKEY *)0x0) {
      if (local_4c == 6) {
        ASN1_OBJECT_free(local_48);
        iVar1 = 0;
      }
      else if (local_4c == 0x10) {
        ASN1_STRING_free((ASN1_STRING *)local_48);
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = PEM_write_bio_X509_PUBKEY(param_1,a);
    }
    X509_PUBKEY_free(a);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int key_to_pki_der_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8inf;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
    if ((param_5 == (code *)0x0) ||
       (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c),
       iVar1 != 0)) {
      p8inf = (PKCS8_PRIV_KEY_INFO *)
              key_to_p8info(param_2,param_3,local_48,local_4c,param_6,param_7);
      if (p8inf == (PKCS8_PRIV_KEY_INFO *)0x0) {
        if (local_4c == 6) {
          ASN1_OBJECT_free(local_48);
          iVar1 = 0;
        }
        else if (local_4c == 0x10) {
          ASN1_STRING_free((ASN1_STRING *)local_48);
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(param_1,p8inf);
      }
      PKCS8_PRIV_KEY_INFO_free(p8inf);
    }
  }
  else {
    iVar1 = key_to_epki_der_priv_bio(param_1,param_2,param_3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



bool rsa_to_type_specific_keypair_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool rsa_to_PKCS1_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool rsapss_to_PKCS1_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool rsapss_to_PKCS1_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool rsa_to_RSA_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool rsa_to_RSA_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool sm2_to_type_specific_no_pub_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool ec_to_EC_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool ec_to_X9_62_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool ec_to_type_specific_no_pub_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool sm2_to_SM2_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool sm2_to_SM2_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool ec_to_EC_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool ec_to_X9_62_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



int key_to_epki_pem_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *x;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
LAB_0010a460:
    iVar2 = 0;
    goto LAB_0010a462;
  }
  if (param_5 == (code *)0x0) {
    a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,0,0xffffffff,param_6,param_7);
    if (a_00 != (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_0010a427;
LAB_0010a4c6:
    x = (X509_SIG *)0x0;
    iVar2 = 0;
  }
  else {
    iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c);
    a = local_48;
    iVar2 = local_4c;
    if (iVar1 == 0) goto LAB_0010a460;
    a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,local_48,local_4c,param_6,param_7);
    if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
      if (iVar2 == 6) {
        ASN1_OBJECT_free(a);
      }
      else if (iVar2 == 0x10) {
        ASN1_STRING_free((ASN1_STRING *)a);
      }
      goto LAB_0010a4c6;
    }
LAB_0010a427:
    x = (X509_SIG *)p8info_to_encp8(a_00,param_7);
    iVar2 = 0;
    PKCS8_PRIV_KEY_INFO_free(a_00);
    if (x != (X509_SIG *)0x0) {
      iVar2 = PEM_write_bio_PKCS8(param_1,x);
    }
  }
  X509_SIG_free(x);
LAB_0010a462:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int key_to_pki_pem_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *x;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
    if ((param_5 == (code *)0x0) ||
       (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c),
       iVar1 != 0)) {
      x = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,local_48,local_4c,param_6,param_7);
      if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
        if (local_4c == 6) {
          ASN1_OBJECT_free(local_48);
          iVar1 = 0;
        }
        else if (local_4c == 0x10) {
          ASN1_STRING_free((ASN1_STRING *)local_48);
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1,x);
      }
      PKCS8_PRIV_KEY_INFO_free(x);
    }
  }
  else {
    iVar1 = key_to_epki_pem_priv_bio(param_1,param_2,param_3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



bool dh_to_type_specific_params_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dhx_to_DHX_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dh_to_PKCS3_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dhx_to_X9_42_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dh_to_DH_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dh_to_DH_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dhx_to_type_specific_params_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dhx_to_X9_42_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dhx_to_type_specific_params_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool dh_to_PKCS3_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



uint dh_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dhx_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dh_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dh_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dh_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dhx_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed25519_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_768_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_768_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_768_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_512_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_512_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_512_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x448_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x448_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed25519_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed448_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed448_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed448_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_768_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_512_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x25519_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_44_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_44_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_87_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_87_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_65_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_65_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_1024_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_1024_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_65_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ec_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint sm2_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_87_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_1024_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_kem_1024_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256s_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256f_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_44_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed448_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed25519_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ed25519_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256s_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256f_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_44_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dsa_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dsa_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dsa_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dsa_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x25519_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_87_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint sm2_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsapss_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ec_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsapss_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dhx_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_pem_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsa_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ec_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsa_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsa_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsapss_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint rsapss_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x25519_to_EncryptedPrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x25519_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint dhx_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint sm2_to_PrivateKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint sm2_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ec_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ml_dsa_65_to_EncryptedPrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_der_does_selection
               (undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint x448_to_PrivateKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint ec_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint sm2_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint sm2_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_128s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_128f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_256s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_256f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dh_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dh_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ec_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_768_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_768_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_65_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dsa_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint rsapss_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint rsapss_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint x448_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint x448_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dsa_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_1024_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_65_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_44_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_44_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_87_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint rsa_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dhx_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_1024_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_dsa_87_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint dhx_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_128s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_128f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_256s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_256f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_192s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_192f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_128s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_192s_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_192f_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint x25519_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ed25519_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_192s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_sha2_192f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ed25519_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_512_to_SubjectPublicKeyInfo_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_256s_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint slh_dsa_shake_256f_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ml_kem_512_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint x25519_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint ed448_to_SubjectPublicKeyInfo_der_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint sm2_to_type_specific_no_pub_der_encode
               (undefined8 *param_1,undefined8 param_2,EC_KEY *param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *b;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      goto LAB_0010d44c;
    }
    if ((param_5 & 0x84) == 0) goto LAB_0010d41a;
    if (param_3 != (EC_KEY *)0x0) {
      b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (b != (BIO *)0x0) {
        local_28 = (uchar *)0x0;
        iVar1 = i2d_ECParameters(param_3,&local_28);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                        "key_to_type_specific_der_bio");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          iVar1 = BIO_write(b,local_28,iVar1);
          CRYPTO_free(local_28);
          uVar2 = (uint)(0 < iVar1);
        }
      }
      BIO_free(b);
      goto LAB_0010d44c;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
LAB_0010d41a:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5d5,
                  "sm2_to_type_specific_no_pub_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010d44c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint sm2_to_SM2_pem_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *a;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      return uVar2;
    }
    if ((param_5 & 0x84) != 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,
                      "key2any_encode");
        ERR_set_error(0x39,0xc0102,0);
        return 0;
      }
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a != (BIO *)0x0) {
        iVar1 = PEM_ASN1_write_bio_ctx
                          (ec_param_k2d,param_1,"SM2 PARAMETERS",a,param_3,param_1[2],0,0,0,0);
        uVar2 = (uint)(0 < iVar1);
      }
      BIO_free(a);
      return uVar2;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6bb,
                "sm2_to_SM2_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint ec_to_EC_der_encode(undefined8 *param_1,undefined8 param_2,EC_KEY *param_3,long param_4,
                        uint param_5)

{
  int iVar1;
  BIO *b;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      goto LAB_0010d77c;
    }
    if ((param_5 & 0x84) == 0) goto LAB_0010d74a;
    if (param_3 != (EC_KEY *)0x0) {
      b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (b != (BIO *)0x0) {
        local_28 = (uchar *)0x0;
        iVar1 = i2d_ECParameters(param_3,&local_28);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                        "key_to_type_specific_der_bio");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          iVar1 = BIO_write(b,local_28,iVar1);
          CRYPTO_free(local_28);
          uVar2 = (uint)(0 < iVar1);
        }
      }
      BIO_free(b);
      goto LAB_0010d77c;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
LAB_0010d74a:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6b7,
                  "ec_to_EC_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010d77c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ec_to_type_specific_no_pub_pem_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *a;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      return uVar2;
    }
    if ((param_5 & 0x84) != 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,
                      "key2any_encode");
        ERR_set_error(0x39,0xc0102,0);
        return 0;
      }
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a != (BIO *)0x0) {
        iVar1 = PEM_ASN1_write_bio_ctx
                          (ec_param_k2d,param_1,"EC PARAMETERS",a,param_3,param_1[2],0,0,0,0);
        uVar2 = (uint)(0 < iVar1);
      }
      BIO_free(a);
      return uVar2;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5e6,
                "ec_to_type_specific_no_pub_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint ec_to_EC_pem_encode(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                        uint param_5)

{
  int iVar1;
  BIO *a;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      return uVar2;
    }
    if ((param_5 & 0x84) != 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,
                      "key2any_encode");
        ERR_set_error(0x39,0xc0102,0);
        return 0;
      }
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a != (BIO *)0x0) {
        iVar1 = PEM_ASN1_write_bio_ctx
                          (ec_param_k2d,param_1,"EC PARAMETERS",a,param_3,param_1[2],0,0,0,0);
        uVar2 = (uint)(0 < iVar1);
      }
      BIO_free(a);
      return uVar2;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6b8,
                "ec_to_EC_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint sm2_to_SM2_der_encode
               (undefined8 *param_1,undefined8 param_2,EC_KEY *param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *b;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      goto LAB_0010dc0c;
    }
    if ((param_5 & 0x84) == 0) goto LAB_0010dbda;
    if (param_3 != (EC_KEY *)0x0) {
      b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (b != (BIO *)0x0) {
        local_28 = (uchar *)0x0;
        iVar1 = i2d_ECParameters(param_3,&local_28);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                        "key_to_type_specific_der_bio");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          iVar1 = BIO_write(b,local_28,iVar1);
          CRYPTO_free(local_28);
          uVar2 = (uint)(0 < iVar1);
        }
      }
      BIO_free(b);
      goto LAB_0010dc0c;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
LAB_0010dbda:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6ba,
                  "sm2_to_SM2_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010dc0c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint sm2_to_type_specific_no_pub_pem_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *a;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      return uVar2;
    }
    if ((param_5 & 0x84) != 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,
                      "key2any_encode");
        ERR_set_error(0x39,0xc0102,0);
        return 0;
      }
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a != (BIO *)0x0) {
        iVar1 = PEM_ASN1_write_bio_ctx
                          (ec_param_k2d,param_1,"SM2 PARAMETERS",a,param_3,param_1[2],0,0,0,0);
        uVar2 = (uint)(0 < iVar1);
      }
      BIO_free(a);
      return uVar2;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5e8,
                "sm2_to_type_specific_no_pub_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint ec_to_type_specific_no_pub_der_encode
               (undefined8 *param_1,undefined8 param_2,EC_KEY *param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *b;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      goto LAB_0010df3c;
    }
    if ((param_5 & 0x84) == 0) goto LAB_0010df0a;
    if (param_3 != (EC_KEY *)0x0) {
      b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (b != (BIO *)0x0) {
        local_28 = (uchar *)0x0;
        iVar1 = i2d_ECParameters(param_3,&local_28);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                        "key_to_type_specific_der_bio");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          iVar1 = BIO_write(b,local_28,iVar1);
          CRYPTO_free(local_28);
          uVar2 = (uint)(0 < iVar1);
        }
      }
      BIO_free(b);
      goto LAB_0010df3c;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
LAB_0010df0a:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x5d3,
                  "ec_to_type_specific_no_pub_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010df3c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ec_to_X9_62_pem_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *a;
  uint uVar2;
  
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      return uVar2;
    }
    if ((param_5 & 0x84) != 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,
                      "key2any_encode");
        ERR_set_error(0x39,0xc0102,0);
        return 0;
      }
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a != (BIO *)0x0) {
        iVar1 = PEM_ASN1_write_bio_ctx
                          (ec_param_k2d,param_1,"EC PARAMETERS",a,param_3,param_1[2],0,0,0,0);
        uVar2 = (uint)(0 < iVar1);
      }
      BIO_free(a);
      return uVar2;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6cc,
                "ec_to_X9_62_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



uint ec_to_X9_62_der_encode
               (undefined8 *param_1,undefined8 param_2,EC_KEY *param_3,long param_4,uint param_5)

{
  int iVar1;
  BIO *b;
  uint uVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = param_5 & 1;
    if ((param_5 & 1) != 0) {
      uVar2 = key2any_encode_constprop_0();
      goto LAB_0010e26c;
    }
    if ((param_5 & 0x84) == 0) goto LAB_0010e23a;
    if (param_3 != (EC_KEY *)0x0) {
      b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (b != (BIO *)0x0) {
        local_28 = (uchar *)0x0;
        iVar1 = i2d_ECParameters(param_3,&local_28);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x188,
                        "key_to_type_specific_der_bio");
          ERR_set_error(0x39,0x80039,0);
        }
        else {
          iVar1 = BIO_write(b,local_28,iVar1);
          CRYPTO_free(local_28);
          uVar2 = (uint)(0 < iVar1);
        }
      }
      BIO_free(b);
      goto LAB_0010e26c;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
LAB_0010e23a:
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6cb,
                  "ec_to_X9_62_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010e26c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_87_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010e500:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010e500;
        }
        local_48 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010e510:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_48);
          pub = (X509_PUBKEY *)0x0;
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_48);
          penc = local_48;
          if (iVar1 < 1) goto LAB_0010e510;
          aobj = OBJ_nid2obj(0x5b3);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010e510;
          uVar2 = i2d_X509_PUBKEY_bio(a,pub);
        }
        X509_PUBKEY_free(pub);
      }
      BIO_free(a);
      goto LAB_0010e434;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6e2,
                  "ml_dsa_87_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010e434:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_65_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b2,"ML-DSA-65 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d7,
                "ml_dsa_65_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_87_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b3,"ML-DSA-87 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6df,
                "ml_dsa_87_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_44_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010e930:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010e930;
        }
        local_38 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010e938:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          a_00 = (X509_PUBKEY *)0x0;
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_38);
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_38);
          penc = local_38;
          if (iVar1 < 1) goto LAB_0010e938;
          aobj = OBJ_nid2obj(0x5b1);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010e938;
          uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
          a_00 = pub;
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      goto LAB_0010e852;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d5,
                  "ml_dsa_44_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010e852:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_65_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010eb10:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010eb10;
        }
        local_38 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010eb18:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          a_00 = (X509_PUBKEY *)0x0;
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_38);
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_38);
          penc = local_38;
          if (iVar1 < 1) goto LAB_0010eb18;
          aobj = OBJ_nid2obj(0x5b2);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010eb18;
          uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
          a_00 = pub;
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      goto LAB_0010ea32;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6dc,
                  "ml_dsa_65_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010ea32:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_44_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b1,"ML-DSA-44 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d1,
                "ml_dsa_44_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_44_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x5b1,"ML-DSA-44 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d2,
                "ml_dsa_44_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_44_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5b1,"ML-DSA-44 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d3,
                "ml_dsa_44_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_87_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b3,"ML-DSA-87 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6de,
                "ml_dsa_87_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_kem_768_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010f170:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010f170;
        }
        local_38 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010f178:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          a_00 = (X509_PUBKEY *)0x0;
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_38);
        }
        else {
          iVar1 = ossl_ml_kem_i2d_pubkey(param_3,&local_38);
          penc = local_38;
          if (iVar1 < 1) goto LAB_0010f178;
          aobj = OBJ_nid2obj(0x5af);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010f178;
          uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
          a_00 = pub;
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      goto LAB_0010f092;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x698,
                  "ml_kem_768_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010f092:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_87_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5b3,"ML-DSA-87 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6e1,
                "ml_dsa_87_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_kem_1024_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b0,"ML-KEM-1024 PRIVATE KEY",0,ml_kem_pki_priv_to_der,
                           param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69b,
                "ml_kem_1024_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_87_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x5b3,"ML-DSA-87 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6e0,
                "ml_dsa_87_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_kem_1024_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5b0,"ML-KEM-1024 PRIVATE KEY",0,ml_kem_pki_priv_to_der,
                           param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69d,
                "ml_kem_1024_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_kem_1024_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010f7c0:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010f7c0;
        }
        local_48 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010f7d0:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_48);
          pub = (X509_PUBKEY *)0x0;
        }
        else {
          iVar1 = ossl_ml_kem_i2d_pubkey(param_3,&local_48);
          penc = local_48;
          if (iVar1 < 1) goto LAB_0010f7d0;
          aobj = OBJ_nid2obj(0x5b0);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010f7d0;
          uVar2 = i2d_X509_PUBKEY_bio(a,pub);
        }
        X509_PUBKEY_free(pub);
      }
      BIO_free(a);
      goto LAB_0010f6f4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69e,
                  "ml_kem_1024_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010f6f4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_kem_1024_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010f9b0:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010f9b0;
        }
        local_38 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010f9b8:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          a_00 = (X509_PUBKEY *)0x0;
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_38);
        }
        else {
          iVar1 = ossl_ml_kem_i2d_pubkey(param_3,&local_38);
          penc = local_38;
          if (iVar1 < 1) goto LAB_0010f9b8;
          aobj = OBJ_nid2obj(0x5b0);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010f9b8;
          uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
          a_00 = pub;
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      goto LAB_0010f8d2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69f,
                  "ml_kem_1024_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010f8d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_65_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010fb80:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010fb80;
        }
        local_48 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010fb90:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_48);
          pub = (X509_PUBKEY *)0x0;
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_48);
          penc = local_48;
          if (iVar1 < 1) goto LAB_0010fb90;
          aobj = OBJ_nid2obj(0x5b2);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010fb90;
          uVar2 = i2d_X509_PUBKEY_bio(a,pub);
        }
        X509_PUBKEY_free(pub);
      }
      BIO_free(a);
      goto LAB_0010fab4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6db,
                  "ml_dsa_65_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010fab4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_kem_768_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_0010fd60:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_0010fd60;
        }
        local_48 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_0010fd70:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_48);
          pub = (X509_PUBKEY *)0x0;
        }
        else {
          iVar1 = ossl_ml_kem_i2d_pubkey(param_3,&local_48);
          penc = local_48;
          if (iVar1 < 1) goto LAB_0010fd70;
          aobj = OBJ_nid2obj(0x5af);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_0010fd70;
          uVar2 = i2d_X509_PUBKEY_bio(a,pub);
        }
        X509_PUBKEY_free(pub);
      }
      BIO_free(a);
      goto LAB_0010fc94;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x697,
                  "ml_kem_768_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_0010fc94:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_kem_768_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5af,"ML-KEM-768 PRIVATE KEY",0,ml_kem_pki_priv_to_der,param_1
                          );
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x696,
                "ml_kem_768_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_65_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x5b2,"ML-DSA-65 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d9,
                "ml_dsa_65_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_65_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5b2,"ML-DSA-65 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6da,
                "ml_dsa_65_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_44_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b1,"ML-DSA-44 PRIVATE KEY",0,ml_dsa_pki_priv_to_der,param_1)
        ;
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d0,
                "ml_dsa_44_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_dsa_87_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_001103d0:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_001103d0;
        }
        local_38 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_001103d8:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          a_00 = (X509_PUBKEY *)0x0;
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_38);
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_38);
          penc = local_38;
          if (iVar1 < 1) goto LAB_001103d8;
          aobj = OBJ_nid2obj(0x5b3);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_001103d8;
          uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
          a_00 = pub;
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      goto LAB_001102f2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6e3,
                  "ml_dsa_87_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_001102f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_dsa_44_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  uchar *penc;
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_001105a0:
        uVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_001105a0;
        }
        local_48 = (uchar *)0x0;
        pub = X509_PUBKEY_new();
        if (pub == (X509_PUBKEY *)0x0) {
LAB_001105b0:
          ERR_new();
          ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                        "key_to_pubkey");
          ERR_set_error(0x39,0x8000b,0);
          X509_PUBKEY_free(pub);
          uVar2 = 0;
          CRYPTO_free(local_48);
          pub = (X509_PUBKEY *)0x0;
        }
        else {
          iVar1 = ossl_ml_dsa_i2d_pubkey(param_3,&local_48);
          penc = local_48;
          if (iVar1 < 1) goto LAB_001105b0;
          aobj = OBJ_nid2obj(0x5b1);
          iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
          if (iVar1 == 0) goto LAB_001105b0;
          uVar2 = i2d_X509_PUBKEY_bio(a,pub);
        }
        X509_PUBKEY_free(pub);
      }
      BIO_free(a);
      goto LAB_001104d4;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x6d4,
                  "ml_dsa_44_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  uVar2 = 0;
LAB_001104d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ml_kem_1024_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x5b0,"ML-KEM-1024 PRIVATE KEY",0,ml_kem_pki_priv_to_der,
                           param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69c,
                "ml_kem_1024_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ml_kem_1024_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b0,"ML-KEM-1024 PRIVATE KEY",0,ml_kem_pki_priv_to_der,
                           param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x69a,
                "ml_kem_1024_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



int dsa_to_EncryptedPrivateKeyInfo_der_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *p8;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00110a00:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00110a00;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_00110a00;
        iVar2 = prepare_dsa_params(param_3,0x74,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
        a = local_38;
        iVar1 = local_3c;
        if (iVar2 == 0) goto LAB_00110a00;
        a_00 = (PKCS8_PRIV_KEY_INFO *)
               key_to_p8info(param_3,0x74,local_38,local_3c,dsa_pki_priv_to_der,param_1);
        if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
          if (iVar1 == 6) {
            ASN1_OBJECT_free(a);
          }
          else if (iVar1 == 0x10) {
            ASN1_STRING_free((ASN1_STRING *)a);
          }
          p8 = (X509_SIG *)0x0;
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          p8 = (X509_SIG *)p8info_to_encp8(a_00,param_1);
          PKCS8_PRIV_KEY_INFO_free(a_00);
          if (p8 != (X509_SIG *)0x0) {
            iVar1 = i2d_PKCS8_bio(bp,p8);
          }
        }
        X509_SIG_free(p8);
      }
      BIO_free(bp);
      goto LAB_001108f2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x60f,
                  "dsa_to_EncryptedPrivateKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_001108f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int dsa_to_SubjectPublicKeyInfo_pem_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  int ptype;
  ASN1_OBJECT *a;
  uchar *penc;
  int iVar1;
  BIO *a_00;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  int local_54;
  ASN1_OBJECT *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a_00 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a_00 == (BIO *)0x0) {
LAB_00110c00:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00110c00;
        }
        local_54 = -1;
        local_50 = (ASN1_OBJECT *)0x0;
        iVar1 = prepare_dsa_params(param_3,0x74,*(undefined4 *)(param_1 + 1),&local_50,&local_54);
        a = local_50;
        ptype = local_54;
        if (iVar1 != 0) {
          local_48 = (uchar *)0x0;
          pub = X509_PUBKEY_new();
          if (pub == (X509_PUBKEY *)0x0) {
LAB_00110c48:
            ERR_new();
            ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,
                          "key_to_pubkey");
            ERR_set_error(0x39,0x8000b,0);
            X509_PUBKEY_free(pub);
            CRYPTO_free(local_48);
            if (ptype == 6) {
              ASN1_OBJECT_free(a);
            }
            else if (ptype == 0x10) {
              ASN1_STRING_free((ASN1_STRING *)a);
            }
            pub = (X509_PUBKEY *)0x0;
            iVar1 = 0;
          }
          else {
            iVar1 = dsa_spki_pub_to_der(param_3,&local_48,param_1);
            penc = local_48;
            if (iVar1 < 1) goto LAB_00110c48;
            aobj = OBJ_nid2obj(0x74);
            iVar1 = X509_PUBKEY_set0_param(pub,aobj,ptype,a,penc,iVar1);
            if (iVar1 == 0) goto LAB_00110c48;
            iVar1 = PEM_write_bio_X509_PUBKEY(a_00,pub);
          }
          X509_PUBKEY_free(pub);
        }
      }
      BIO_free(a_00);
      goto LAB_00110ad5;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x614,
                  "dsa_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_00110ad5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int dsa_to_EncryptedPrivateKeyInfo_pem_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *x;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00110e40:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00110e40;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_00110e40;
        iVar2 = prepare_dsa_params(param_3,0x74,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
        a = local_38;
        iVar1 = local_3c;
        if (iVar2 == 0) goto LAB_00110e40;
        a_00 = (PKCS8_PRIV_KEY_INFO *)
               key_to_p8info(param_3,0x74,local_38,local_3c,dsa_pki_priv_to_der,param_1);
        if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
          if (iVar1 == 6) {
            ASN1_OBJECT_free(a);
          }
          else if (iVar1 == 0x10) {
            ASN1_STRING_free((ASN1_STRING *)a);
          }
          x = (X509_SIG *)0x0;
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          x = (X509_SIG *)p8info_to_encp8(a_00,param_1);
          PKCS8_PRIV_KEY_INFO_free(a_00);
          if (x != (X509_SIG *)0x0) {
            iVar1 = PEM_write_bio_PKCS8(bp,x);
          }
        }
        X509_SIG_free(x);
      }
      BIO_free(bp);
      goto LAB_00110d32;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x610,
                  "dsa_to_EncryptedPrivateKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_00110d32:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int sm2_to_PrivateKeyInfo_pem_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  int iVar1;
  ASN1_OBJECT *a;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *x;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00111010:
        iVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar2 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar2 == 0) goto LAB_00111010;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) {
          iVar2 = prepare_ec_params(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
          a = local_38;
          iVar1 = local_3c;
          if (iVar2 != 0) {
            x = (PKCS8_PRIV_KEY_INFO *)
                key_to_p8info(param_3,0x198,local_38,local_3c,ec_pki_priv_to_der,param_1);
            if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
              if (iVar1 == 6) {
                ASN1_OBJECT_free(a);
              }
              else if (iVar1 == 0x10) {
                ASN1_STRING_free((ASN1_STRING *)a);
              }
              iVar2 = 0;
            }
            else {
              iVar2 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp,x);
            }
            PKCS8_PRIV_KEY_INFO_free(x);
          }
        }
        else {
          iVar2 = key_to_epki_pem_priv_bio
                            (bp,param_3,0x198,"SM2 PRIVATE KEY",prepare_ec_params,ec_pki_priv_to_der
                             ,param_1);
        }
      }
      BIO_free(bp);
      goto LAB_00110f13;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x621,
                  "sm2_to_PrivateKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar2 = 0;
LAB_00110f13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5ba,"SLH-DSA-SHAKE-128s PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x653,
                "slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5bb,"SLH-DSA-SHAKE-128f PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x654,
                "slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
ed448_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x630,
                  "ed448_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_00111432;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_00111448:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
    pub = (X509_PUBKEY *)0x0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_00111448;
    aobj = OBJ_nid2obj(0x440);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_00111448;
    uVar2 = i2d_X509_PUBKEY_bio(a,pub);
  }
  X509_PUBKEY_free(pub);
LAB_00111432:
  BIO_free(a);
  return uVar2;
}



undefined4
ed448_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x631,
                  "ed448_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_00111602;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_00111620:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    a_00 = (X509_PUBKEY *)0x0;
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_00111620;
    aobj = OBJ_nid2obj(0x440);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_00111620;
    uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
    a_00 = pub;
  }
  X509_PUBKEY_free(a_00);
LAB_00111602:
  BIO_free(a);
  return uVar2;
}



undefined4
x25519_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x40a,"X25519 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x632,
                "x25519_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x25519_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x40a,"X25519 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x633,
                "x25519_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x25519_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x40a,"X25519 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x634,
                "x25519_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x25519_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x40a,"X25519 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x635,
                "x25519_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x25519_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x636,
                  "x25519_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_00111c62;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_00111c78:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
    pub = (X509_PUBKEY *)0x0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_00111c78;
    aobj = OBJ_nid2obj(0x40a);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_00111c78;
    uVar2 = i2d_X509_PUBKEY_bio(a,pub);
  }
  X509_PUBKEY_free(pub);
LAB_00111c62:
  BIO_free(a);
  return uVar2;
}



undefined4
slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b7,"SLH-DSA-SHA2-192f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64a,
                "slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x448_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x40b,"X448 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x638,
                "x448_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x448_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x40b,"X448 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x639,
                "x448_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x448_to_PrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_der_priv_bio
                          (a,param_3,0x40b,"X448 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x63a,
                "x448_to_PrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x448_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x40b,"X448 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x63b,
                "x448_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
x448_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x63c,
                  "x448_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_001123e2;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_001123f8:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
    pub = (X509_PUBKEY *)0x0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_001123f8;
    aobj = OBJ_nid2obj(0x40b);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_001123f8;
    uVar2 = i2d_X509_PUBKEY_bio(a,pub);
  }
  X509_PUBKEY_free(pub);
LAB_001123e2:
  BIO_free(a);
  return uVar2;
}



undefined4
x448_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x63d,
                  "x448_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_001125b2;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_001125d0:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    a_00 = (X509_PUBKEY *)0x0;
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_001125d0;
    aobj = OBJ_nid2obj(0x40b);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_001125d0;
    uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
    a_00 = pub;
  }
  X509_PUBKEY_free(a_00);
LAB_001125b2:
  BIO_free(a);
  return uVar2;
}



undefined4
slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b4,"SLH-DSA-SHA2-128s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x641,
                "slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_192f_to_PrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_pki_pem_priv_bio
                          (a,param_3,0x5b7,"SLH-DSA-SHA2-192f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x662,
                "slh_dsa_sha2_192f_to_PrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b6,"SLH-DSA-SHA2-192s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x643,
                "slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b7,"SLH-DSA-SHA2-192f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x644,
                "slh_dsa_sha2_192f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b8,"SLH-DSA-SHA2-256s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x645,
                "slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5b9,"SLH-DSA-SHA2-256f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x646,
                "slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b4,"SLH-DSA-SHA2-128s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x647,
                "slh_dsa_sha2_128s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b5,"SLH-DSA-SHA2-128f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x648,
                "slh_dsa_sha2_128f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b6,"SLH-DSA-SHA2-192s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x649,
                "slh_dsa_sha2_192s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5bf,"SLH-DSA-SHAKE-256f PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x652,
                "slh_dsa_shake_256f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b8,"SLH-DSA-SHA2-256s PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64b,
                "slh_dsa_sha2_256s_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_pem_priv_bio
                          (a,param_3,0x5b9,"SLH-DSA-SHA2-256f PRIVATE KEY",0,slh_dsa_pki_priv_to_der
                           ,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64c,
                "slh_dsa_sha2_256f_to_EncryptedPrivateKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5ba,"SLH-DSA-SHAKE-128s PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64d,
                "slh_dsa_shake_128s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5bb,"SLH-DSA-SHAKE-128f PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64e,
                "slh_dsa_shake_128f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5bc,"SLH-DSA-SHAKE-192s PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x64f,
                "slh_dsa_shake_192s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5bd,"SLH-DSA-SHAKE-192f PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x650,
                "slh_dsa_shake_192f_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x5be,"SLH-DSA-SHAKE-256s PRIVATE KEY",0,
                           slh_dsa_pki_priv_to_der,param_1);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x651,
                "slh_dsa_shake_256s_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined4
slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *penc;
  ASN1_OBJECT *aobj;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x672,
                  "slh_dsa_sha2_128f_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_00113ab2;
  }
  pub = X509_PUBKEY_new();
  if (pub == (X509_PUBKEY *)0x0) {
LAB_00113ac6:
    penc = (uchar *)0x0;
LAB_00113ad0:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
    pub = (X509_PUBKEY *)0x0;
  }
  else {
    uVar3 = ossl_slh_dsa_key_get_pub_len(param_3);
    uVar4 = ossl_slh_dsa_key_get_pub(param_3);
    penc = (uchar *)CRYPTO_memdup(uVar4,uVar3,
                                  "providers/implementations/encode_decode/encode_key2any.c");
    if (penc == (uchar *)0x0) goto LAB_00113ac6;
    if ((int)uVar3 < 1) goto LAB_00113ad0;
    aobj = OBJ_nid2obj(0x5b5);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,(int)uVar3);
    if (iVar1 == 0) goto LAB_00113ad0;
    uVar2 = i2d_X509_PUBKEY_bio(a,pub);
  }
  X509_PUBKEY_free(pub);
LAB_00113ab2:
  BIO_free(a);
  return uVar2;
}



int sm2_to_EncryptedPrivateKeyInfo_der_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *p8;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00113cd0:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00113cd0;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_00113cd0;
        iVar2 = prepare_ec_params(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
        a = local_38;
        iVar1 = local_3c;
        if (iVar2 == 0) goto LAB_00113cd0;
        a_00 = (PKCS8_PRIV_KEY_INFO *)
               key_to_p8info(param_3,0x198,local_38,local_3c,ec_pki_priv_to_der,param_1);
        if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
          if (iVar1 == 6) {
            ASN1_OBJECT_free(a);
          }
          else if (iVar1 == 0x10) {
            ASN1_STRING_free((ASN1_STRING *)a);
          }
          p8 = (X509_SIG *)0x0;
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          p8 = (X509_SIG *)p8info_to_encp8(a_00,param_1);
          PKCS8_PRIV_KEY_INFO_free(a_00);
          if (p8 != (X509_SIG *)0x0) {
            iVar1 = i2d_PKCS8_bio(bp,p8);
          }
        }
        X509_SIG_free(p8);
      }
      BIO_free(bp);
      goto LAB_00113bc2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x61e,
                  "sm2_to_EncryptedPrivateKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_00113bc2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int sm2_to_EncryptedPrivateKeyInfo_pem_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  ASN1_OBJECT *a;
  int iVar1;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *x;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00113eb0:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00113eb0;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_00113eb0;
        iVar2 = prepare_ec_params(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
        a = local_38;
        iVar1 = local_3c;
        if (iVar2 == 0) goto LAB_00113eb0;
        a_00 = (PKCS8_PRIV_KEY_INFO *)
               key_to_p8info(param_3,0x198,local_38,local_3c,ec_pki_priv_to_der,param_1);
        if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
          if (iVar1 == 6) {
            ASN1_OBJECT_free(a);
          }
          else if (iVar1 == 0x10) {
            ASN1_STRING_free((ASN1_STRING *)a);
          }
          x = (X509_SIG *)0x0;
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          x = (X509_SIG *)p8info_to_encp8(a_00,param_1);
          PKCS8_PRIV_KEY_INFO_free(a_00);
          if (x != (X509_SIG *)0x0) {
            iVar1 = PEM_write_bio_PKCS8(bp,x);
          }
        }
        X509_SIG_free(x);
      }
      BIO_free(bp);
      goto LAB_00113da2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x61f,
                  "sm2_to_EncryptedPrivateKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_00113da2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int sm2_to_PrivateKeyInfo_der_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  int iVar1;
  ASN1_OBJECT *a;
  int iVar2;
  BIO *bp;
  PKCS8_PRIV_KEY_INFO *p8inf;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (bp == (BIO *)0x0) {
LAB_00114080:
        iVar2 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar2 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar2 == 0) goto LAB_00114080;
        }
        local_3c = -1;
        local_38 = (ASN1_OBJECT *)0x0;
        if (*(int *)((long)param_1 + 0xc) == 0) {
          iVar2 = prepare_ec_params(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
          a = local_38;
          iVar1 = local_3c;
          if (iVar2 != 0) {
            p8inf = (PKCS8_PRIV_KEY_INFO *)
                    key_to_p8info(param_3,0x198,local_38,local_3c,ec_pki_priv_to_der,param_1);
            if (p8inf == (PKCS8_PRIV_KEY_INFO *)0x0) {
              if (iVar1 == 6) {
                ASN1_OBJECT_free(a);
              }
              else if (iVar1 == 0x10) {
                ASN1_STRING_free((ASN1_STRING *)a);
              }
              iVar2 = 0;
            }
            else {
              iVar2 = i2d_PKCS8_PRIV_KEY_INFO_bio(bp,p8inf);
            }
            PKCS8_PRIV_KEY_INFO_free(p8inf);
          }
        }
        else {
          iVar2 = key_to_epki_der_priv_bio
                            (bp,param_3,0x198,"SM2 PRIVATE KEY",prepare_ec_params,ec_pki_priv_to_der
                             ,param_1);
        }
      }
      BIO_free(bp);
      goto LAB_00113f83;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x620,
                  "sm2_to_PrivateKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar2 = 0;
LAB_00113f83:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
ed25519_to_SubjectPublicKeyInfo_pem_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *pub;
  uchar *penc;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *a_00;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x62b,
                  "ed25519_to_SubjectPublicKeyInfo_pem_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if ((a == (BIO *)0x0) ||
     ((param_6 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
    uVar2 = 0;
    goto LAB_00114252;
  }
  pub = X509_PUBKEY_new();
  if ((pub == (X509_PUBKEY *)0x0) ||
     (penc = (uchar *)CRYPTO_memdup(param_3 + 0x11,*(undefined8 *)(param_3 + 0x58),
                                    "providers/implementations/encode_decode/encode_key2any.c"),
     penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_00114270:
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0xa6,"key_to_pubkey");
    ERR_set_error(0x39,0x8000b,0);
    a_00 = (X509_PUBKEY *)0x0;
    X509_PUBKEY_free(pub);
    CRYPTO_free(penc);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    if (iVar1 < 1) goto LAB_00114270;
    aobj = OBJ_nid2obj(0x43f);
    iVar1 = X509_PUBKEY_set0_param(pub,aobj,-1,(void *)0x0,penc,iVar1);
    if (iVar1 == 0) goto LAB_00114270;
    uVar2 = PEM_write_bio_X509_PUBKEY(a,pub);
    a_00 = pub;
  }
  X509_PUBKEY_free(a_00);
LAB_00114252:
  BIO_free(a);
  return uVar2;
}



int sm2_to_SubjectPublicKeyInfo_der_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *a;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if (a == (BIO *)0x0) {
LAB_00114448:
        iVar1 = 0;
      }
      else {
        if (param_6 != 0) {
          iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
          if (iVar1 == 0) goto LAB_00114448;
        }
        local_3c = 0xffffffff;
        local_38 = 0;
        iVar1 = prepare_ec_params(param_3,0x198,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
        if (iVar1 != 0) {
          iVar1 = 0;
          a_00 = (X509_PUBKEY *)
                 key_to_pubkey(param_3,0x198,local_38,local_3c,ec_spki_pub_to_der,param_1);
          if (a_00 != (X509_PUBKEY *)0x0) {
            iVar1 = i2d_X509_PUBKEY_bio(a,a_00);
          }
          X509_PUBKEY_free(a_00);
        }
      }
      BIO_free(a);
      goto LAB_00114363;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x4cb,"key2any_encode")
    ;
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/encode_key2any.c",0x622,
                  "sm2_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  iVar1 = 0;
LAB_00114363:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


