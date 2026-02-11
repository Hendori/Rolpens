
bool ossl_DER_w_algorithmIdentifier_DSA_with_MD
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == 0x2a3) {
    puVar2 = &ossl_der_oid_id_dsa_with_sha224;
    uVar3 = 0xb;
  }
  else if (param_4 < 0x2a4) {
    if (param_4 == 0x2a1) {
      puVar2 = &ossl_der_oid_id_dsa_with_sha384;
      uVar3 = 0xb;
    }
    else if (param_4 == 0x2a2) {
      puVar2 = &ossl_der_oid_id_dsa_with_sha512;
      uVar3 = 0xb;
    }
    else if (param_4 == 0x40) {
      puVar2 = &ossl_der_oid_id_dsa_with_sha1;
      uVar3 = 9;
    }
    else {
      if (param_4 != 0x2a0) {
        return false;
      }
      puVar2 = &ossl_der_oid_id_dsa_with_sha256;
      uVar3 = 0xb;
    }
  }
  else if (param_4 == 0x44a) {
    puVar2 = &ossl_der_oid_id_dsa_with_sha3_384;
    uVar3 = 0xb;
  }
  else if (param_4 < 1099) {
    if (param_4 == 0x448) {
      puVar2 = &ossl_der_oid_id_dsa_with_sha3_224;
      uVar3 = 0xb;
    }
    else {
      if (param_4 != 0x449) {
        return false;
      }
      puVar2 = &ossl_der_oid_id_dsa_with_sha3_256;
      uVar3 = 0xb;
    }
  }
  else {
    if (param_4 != 1099) {
      return false;
    }
    puVar2 = &ossl_der_oid_id_dsa_with_sha3_512;
    uVar3 = 0xb;
  }
  iVar1 = ossl_DER_w_begin_sequence(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar2,uVar3), iVar1 != 0))
  {
    iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}


