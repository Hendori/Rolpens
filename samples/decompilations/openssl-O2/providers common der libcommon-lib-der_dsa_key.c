
bool ossl_DER_w_algorithmIdentifier_DSA(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ossl_DER_w_begin_sequence();
  if (iVar1 != 0) {
    iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_id_dsa,9);
    if (iVar1 != 0) {
      iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}


