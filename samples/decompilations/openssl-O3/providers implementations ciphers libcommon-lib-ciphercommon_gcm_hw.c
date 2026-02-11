
undefined8 ossl_gcm_setiv(long param_1)

{
  CRYPTO_gcm128_setiv(param_1 + 0xf8);
  return 1;
}



bool ossl_gcm_aad_update(long param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_gcm128_aad(param_1 + 0xf8);
  return iVar1 == 0;
}



bool ossl_gcm_cipher_update(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    iVar1 = CRYPTO_gcm128_encrypt(param_1 + 0xf8,param_2,param_4,param_3);
    return iVar1 == 0;
  }
  iVar1 = CRYPTO_gcm128_decrypt(param_1 + 0xf8,param_2,param_4,param_3);
  return iVar1 == 0;
}



bool ossl_gcm_cipher_final(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    CRYPTO_gcm128_tag(param_1 + 0xf8,param_2,0x10);
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    return true;
  }
  iVar1 = CRYPTO_gcm128_finish(param_1 + 0xf8,param_2,*(undefined8 *)(param_1 + 0x18));
  return iVar1 == 0;
}



bool ossl_gcm_one_shot(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x10))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))(param_1,param_4,param_5,param_6);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0x10;
      iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x20))(param_1,param_7);
      return iVar1 != 0;
    }
  }
  return false;
}


