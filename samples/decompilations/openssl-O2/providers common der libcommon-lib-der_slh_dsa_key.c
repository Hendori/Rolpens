
bool ossl_DER_w_algorithmIdentifier_SLH_DSA
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = ossl_slh_dsa_key_get_type(param_3);
  switch(uVar1) {
  case 0x5b4:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_128s;
    break;
  case 0x5b5:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_128f;
    break;
  case 0x5b6:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_192s;
    break;
  case 0x5b7:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_192f;
    break;
  case 0x5b8:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_256s;
    break;
  case 0x5b9:
    puVar3 = &ossl_der_oid_id_slh_dsa_sha2_256f;
    break;
  case 0x5ba:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_128s;
    break;
  case 0x5bb:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_128f;
    break;
  case 0x5bc:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_192s;
    break;
  case 0x5bd:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_192f;
    break;
  case 0x5be:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_256s;
    break;
  case 0x5bf:
    puVar3 = &ossl_der_oid_id_slh_dsa_shake_256f;
    break;
  default:
    goto switchD_0010002d_default;
  }
  iVar2 = ossl_DER_w_begin_sequence(param_1,param_2);
  if ((iVar2 != 0) && (iVar2 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar3,0xb), iVar2 != 0)) {
    iVar2 = ossl_DER_w_end_sequence(param_1,param_2);
    return iVar2 != 0;
  }
switchD_0010002d_default:
  return false;
}


