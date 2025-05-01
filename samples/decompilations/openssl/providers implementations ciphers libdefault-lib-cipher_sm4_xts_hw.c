
void cipher_hw_sm4_xts_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x3f; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x39] = param_1 + 0x18;
  param_1[0x3a] = param_1 + 0x28;
  return;
}



undefined8 cipher_hw_sm4_xts_generic_initkey(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0xc0;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    ossl_sm4_set_key(param_2,lVar1);
    puVar2 = &ossl_sm4_decrypt;
  }
  else {
    ossl_sm4_set_key(param_2,lVar1);
    puVar2 = &ossl_sm4_encrypt;
  }
  *(undefined **)(param_1 + 0x1d8) = puVar2;
  ossl_sm4_set_key(param_2 + (param_3 >> 1),param_1 + 0x140);
  *(undefined **)(param_1 + 0x1e0) = &ossl_sm4_encrypt;
  *(long *)(param_1 + 0x1c8) = lVar1;
  *(long *)(param_1 + 0x1d0) = param_1 + 0x140;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  return 1;
}



undefined1 * ossl_prov_cipher_hw_sm4_xts(void)

{
  return sm4_generic_xts;
}


