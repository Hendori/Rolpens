
ulong ossl_DER_w_algorithmIdentifier_MDWithRSAEncryption
                (undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x2a2) {
    puVar3 = &ossl_der_oid_sha512WithRSAEncryption;
    uVar4 = 0xb;
  }
  else if (param_3 < 0x2a3) {
    if (param_3 == 0x75) {
      puVar3 = &ossl_der_oid_ripemd160WithRSAEncryption;
      uVar4 = 8;
    }
    else if (param_3 < 0x76) {
      if (param_3 == 0x40) {
        puVar3 = &ossl_der_oid_sha1WithRSAEncryption;
        uVar4 = 0xb;
      }
      else if (param_3 < 0x41) {
        if (param_3 == 3) {
          puVar3 = &ossl_der_oid_md2WithRSAEncryption;
          uVar4 = 0xb;
        }
        else {
          if (param_3 != 4) {
            return 0xffffffff;
          }
          puVar3 = &ossl_der_oid_md5WithRSAEncryption;
          uVar4 = 0xb;
        }
      }
      else {
        if (param_3 != 0x5f) {
          return 0xffffffff;
        }
        puVar3 = &ossl_der_oid_mdc2WithRSASignature;
        uVar4 = 7;
      }
    }
    else if (param_3 == 0x2a0) {
      puVar3 = &ossl_der_oid_sha256WithRSAEncryption;
      uVar4 = 0xb;
    }
    else if (param_3 == 0x2a1) {
      puVar3 = &ossl_der_oid_sha384WithRSAEncryption;
      uVar4 = 0xb;
    }
    else {
      if (param_3 != 0x101) {
        return 0xffffffff;
      }
      puVar3 = &ossl_der_oid_md4WithRSAEncryption;
      uVar4 = 0xb;
    }
  }
  else if (param_3 == 0x2a3) {
    puVar3 = &ossl_der_oid_sha224WithRSAEncryption;
    uVar4 = 0xb;
  }
  else {
    if (5 < param_3 - 0x446U) {
      return 0xffffffff;
    }
    uVar4 = 0xb;
    switch(param_3) {
    case 0x447:
      puVar3 = &ossl_der_oid_sha512_256WithRSAEncryption;
      break;
    case 0x448:
      puVar3 = &ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_224;
      break;
    case 0x449:
      puVar3 = &ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_256;
      break;
    case 0x44a:
      puVar3 = &ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_384;
      break;
    case 1099:
      puVar3 = &ossl_der_oid_id_rsassa_pkcs1_v1_5_with_sha3_512;
      break;
    default:
      puVar3 = &ossl_der_oid_sha512_224WithRSAEncryption;
      uVar4 = 0xb;
    }
  }
  iVar1 = ossl_DER_w_begin_sequence(param_1,param_2);
  if (((iVar1 == 0) || (iVar1 = ossl_DER_w_null(param_1,0xffffffff), iVar1 == 0)) ||
     (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar3,uVar4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



bool ossl_DER_w_algorithmIdentifier_MDWithRSAEncryption_cold(void)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (((iVar1 != 0) && (iVar1 = ossl_DER_w_null(), iVar1 != 0)) &&
     (iVar1 = ossl_DER_w_precompiled(), iVar1 != 0)) {
    iVar1 = ossl_DER_w_end_sequence();
    return iVar1 != 0;
  }
  return false;
}


