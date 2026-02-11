
bool ossl_DER_w_algorithmIdentifier_X25519(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (iVar1 != 0) {
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_id_X25519,5);
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



bool ossl_DER_w_algorithmIdentifier_X448(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (iVar1 != 0) {
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_id_X448,5);
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



bool ossl_DER_w_algorithmIdentifier_ED25519(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (iVar1 != 0) {
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_id_Ed25519,5);
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



bool ossl_DER_w_algorithmIdentifier_ED448(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (iVar1 != 0) {
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_id_Ed448,5);
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}


