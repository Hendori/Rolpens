
bool ossl_DER_w_RSASSA_PSS_params(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *local_48;
  undefined8 local_40;
  
  if (param_3 == 0) {
    return false;
  }
  iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_3);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = ossl_rsa_pss_params_30_hashalg(param_3);
  iVar2 = ossl_rsa_pss_params_30_saltlen(param_3);
  iVar3 = ossl_rsa_pss_params_30_trailerfield(param_3);
  if (iVar2 < 0) {
    ERR_new();
    ERR_set_debug("providers/common/der/der_rsa_key.c",0x135,"ossl_DER_w_RSASSA_PSS_params");
    ERR_set_error(4,0x96,0);
    return false;
  }
  if (iVar3 != 1) {
    ERR_new();
    ERR_set_debug("providers/common/der/der_rsa_key.c",0x139,"ossl_DER_w_RSASSA_PSS_params");
    ERR_set_error(4,0x8b,0);
    return false;
  }
  iVar3 = ossl_rsa_pss_params_30_hashalg(0);
  iVar4 = ossl_rsa_pss_params_30_saltlen(0);
  iVar5 = ossl_rsa_pss_params_30_trailerfield(0);
  if (iVar1 == 0x2a2) {
    local_40 = 0xf;
    local_48 = ossl_der_aid_sha512Identifier;
  }
  else if (iVar1 < 0x2a3) {
    if (iVar1 == 0x2a0) {
      local_40 = 0xf;
      local_48 = ossl_der_aid_sha256Identifier;
    }
    else if (iVar1 == 0x2a1) {
      local_40 = 0xf;
      local_48 = ossl_der_aid_sha384Identifier;
    }
    else {
      if (iVar1 != 0x40) {
        return false;
      }
      local_40 = 0xb;
      local_48 = ossl_der_aid_sha1Identifier;
    }
  }
  else if (iVar1 == 0x446) {
    local_40 = 0xf;
    local_48 = ossl_der_aid_sha512_224Identifier;
  }
  else if (iVar1 == 0x447) {
    local_40 = 0xf;
    local_48 = ossl_der_aid_sha512_256Identifier;
  }
  else {
    if (iVar1 != 0x2a3) {
      return false;
    }
    local_40 = 0xf;
    local_48 = ossl_der_aid_sha224Identifier;
  }
  iVar6 = ossl_DER_w_begin_sequence(param_1,param_2);
  if (iVar6 == 0) {
    return false;
  }
  if ((iVar5 != 1) && (iVar5 = ossl_DER_w_uint32(param_1,3,1), iVar5 == 0)) {
    return false;
  }
  if ((iVar2 != iVar4) && (iVar2 = ossl_DER_w_uint32(param_1,2,iVar2), iVar2 == 0)) {
    return false;
  }
  iVar2 = ossl_rsa_pss_params_30_maskgenalg(param_3);
  if (iVar2 != 0x38f) {
    return false;
  }
  iVar2 = ossl_rsa_pss_params_30_maskgenhashalg(param_3);
  if (iVar2 == 0x2a2) {
    puVar7 = der_aid_mgf1SHA512Identifier;
  }
  else if (iVar2 < 0x2a3) {
    if (iVar2 == 0x2a0) {
      puVar7 = der_aid_mgf1SHA256Identifier;
    }
    else {
      if (iVar2 != 0x2a1) {
        if (iVar2 != 0x40) {
          return false;
        }
        goto LAB_0010016b;
      }
      puVar7 = der_aid_mgf1SHA384Identifier;
    }
  }
  else if (iVar2 == 0x446) {
    puVar7 = der_aid_mgf1SHA512_224Identifier;
  }
  else if (iVar2 == 0x447) {
    puVar7 = der_aid_mgf1SHA512_256Identifier;
  }
  else {
    puVar7 = der_aid_mgf1SHA224Identifier;
    if (iVar2 != 0x2a3) {
      return false;
    }
  }
  iVar2 = ossl_DER_w_precompiled(param_1,1,puVar7,0x1c);
  if (iVar2 == 0) {
    return false;
  }
LAB_0010016b:
  if ((iVar1 != iVar3) && (iVar1 = ossl_DER_w_precompiled(param_1,0,local_48,local_40), iVar1 == 0))
  {
    return false;
  }
  iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
  return iVar1 != 0;
}



bool ossl_DER_w_algorithmIdentifier_RSA_PSS
               (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    iVar1 = ossl_DER_w_begin_sequence();
    if (iVar1 == 0) {
      return false;
    }
    puVar2 = &ossl_der_oid_rsaEncryption;
  }
  else {
    if (param_3 != 0x1000) {
      return false;
    }
    iVar1 = ossl_DER_w_begin_sequence();
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = ossl_DER_w_RSASSA_PSS_params(param_1,0xffffffff,param_4), iVar1 == 0)) {
      return false;
    }
    puVar2 = &ossl_der_oid_id_RSASSA_PSS;
  }
  iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar2,0xb);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
  return iVar1 != 0;
}



void ossl_DER_w_algorithmIdentifier_RSA(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = RSA_test_flags(param_3,0xf000);
  uVar1 = ossl_rsa_get0_pss_params_30(param_3);
  ossl_DER_w_algorithmIdentifier_RSA_PSS(param_1,param_2,uVar2,uVar1);
  return;
}


