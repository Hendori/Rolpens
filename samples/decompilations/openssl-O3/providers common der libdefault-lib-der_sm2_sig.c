
bool ossl_DER_w_algorithmIdentifier_SM2_with_MD
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0x477) {
    return false;
  }
  iVar1 = ossl_DER_w_begin_sequence();
  if ((iVar1 != 0) &&
     (iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,&ossl_der_oid_sm2_with_SM3,10), iVar1 != 0))
  {
    iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}


