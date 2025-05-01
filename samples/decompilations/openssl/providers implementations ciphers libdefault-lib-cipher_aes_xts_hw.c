
void cipher_hw_aes_xts_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x5c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x56] = param_1 + 0x18;
  param_1[0x57] = param_1 + 0x37;
  return;
}



undefined8 cipher_hw_aes_xts_generic_initkey(long param_1,uchar *param_2,ulong param_3)

{
  AES_KEY *key;
  undefined *puVar1;
  int bits;
  undefined *puVar2;
  undefined *local_48;
  
  if ((DAT_00101005 & 2) == 0) {
    local_48 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &ossl_bsaes_xts_decrypt;
    local_48 = &ossl_bsaes_xts_encrypt;
  }
  key = (AES_KEY *)(param_1 + 0xc0);
  bits = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    AES_set_decrypt_key(param_2,bits,key);
    puVar1 = &AES_decrypt;
  }
  else {
    AES_set_encrypt_key(param_2,bits,key);
    puVar1 = &AES_encrypt;
  }
  *(undefined **)(param_1 + 0x2c0) = puVar1;
  AES_set_encrypt_key(param_2 + (param_3 >> 1),bits,(AES_KEY *)(param_1 + 0x1b8));
  *(AES_KEY **)(param_1 + 0x2b0) = key;
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    puVar2 = local_48;
  }
  *(AES_KEY **)(param_1 + 0x2b8) = (AES_KEY *)(param_1 + 0x1b8);
  *(undefined **)(param_1 + 0x2c8) = &AES_encrypt;
  *(undefined **)(param_1 + 0x2d0) = puVar2;
  return 1;
}



undefined8 cipher_hw_aesni_xts_initkey(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  
  iVar1 = aesni_xts_avx512_eligible();
  if (iVar1 != 0) {
    if (param_3 == 0x40) {
      puVar3 = &aesni_xts_256_decrypt_avx512;
      local_40 = &aesni_xts_256_encrypt_avx512;
      goto LAB_0010018b;
    }
    if (param_3 == 0x20) {
      puVar3 = &aesni_xts_128_decrypt_avx512;
      local_40 = &aesni_xts_128_encrypt_avx512;
      goto LAB_0010018b;
    }
  }
  puVar3 = &aesni_xts_decrypt;
  local_40 = &aesni_xts_encrypt;
LAB_0010018b:
  iVar1 = (int)(param_3 >> 1) * 8;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    aesni_set_decrypt_key(param_2,iVar1,param_1 + 0xc0);
    puVar2 = &aesni_decrypt;
  }
  else {
    aesni_set_encrypt_key();
    puVar2 = &aesni_encrypt;
  }
  *(undefined **)(param_1 + 0x2c0) = puVar2;
  aesni_set_encrypt_key(param_2 + (param_3 >> 1),iVar1,param_1 + 0x1b8);
  *(long *)(param_1 + 0x2b0) = param_1 + 0xc0;
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    puVar3 = local_40;
  }
  *(long *)(param_1 + 0x2b8) = param_1 + 0x1b8;
  *(undefined **)(param_1 + 0x2c8) = &aesni_encrypt;
  *(undefined **)(param_1 + 0x2d0) = puVar3;
  return 1;
}



undefined1 * ossl_prov_cipher_hw_aes_xts(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_xts;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_generic_xts;
  }
  return puVar1;
}


