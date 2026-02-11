
bool ossl_DER_w_algorithmIdentifier_ML_DSA(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = ossl_ml_dsa_key_get_name(param_3);
  iVar1 = OPENSSL_strcasecmp(uVar2,"ML-DSA-44");
  if (iVar1 == 0) {
    puVar3 = &ossl_der_oid_id_ml_dsa_44;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(uVar2,"ML-DSA-65");
    if (iVar1 == 0) {
      puVar3 = &ossl_der_oid_id_ml_dsa_65;
      iVar1 = ossl_DER_w_begin_sequence(param_1,param_2);
      goto joined_r0x00100074;
    }
    iVar1 = OPENSSL_strcasecmp(uVar2,"ML-DSA-87");
    if (iVar1 != 0) {
      return false;
    }
    puVar3 = &ossl_der_oid_id_ml_dsa_87;
  }
  iVar1 = ossl_DER_w_begin_sequence(param_1,param_2);
joined_r0x00100074:
  if ((iVar1 != 0) && (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar3,0xb), iVar1 != 0)) {
    iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}


