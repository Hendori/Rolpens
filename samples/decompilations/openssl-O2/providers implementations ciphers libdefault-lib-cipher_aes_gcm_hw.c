
bool generic_aes_gcm_cipher_update(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  
  puVar4 = *(undefined **)(param_1 + 0x2b8);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      iVar2 = CRYPTO_gcm128_decrypt(param_1 + 0xf8,param_2,param_4,param_3);
      return iVar2 == 0;
    }
    lVar1 = param_1 + 0xf8;
    if (((puVar4 != _GLOBAL_OFFSET_TABLE_) || (param_3 < 0x10)) ||
       (*(undefined **)(param_1 + 0x260) != &gcm_ghash_avx)) {
LAB_001000a3:
      iVar2 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_2,param_4,param_3,puVar4);
      return iVar2 == 0;
    }
    uVar5 = (ulong)(-*(int *)(param_1 + 0x270) & 0xf);
    iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_2,param_4,uVar5);
    if (iVar2 == 0) {
      lVar3 = aesni_gcm_decrypt(param_2 + uVar5,param_4 + uVar5,param_3 - uVar5,
                                *(undefined8 *)(param_1 + 0x280),lVar1,param_1 + 0x138);
      puVar4 = *(undefined **)(param_1 + 0x2b8);
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar3;
      lVar3 = uVar5 + lVar3;
      param_3 = param_3 - lVar3;
      param_4 = param_4 + lVar3;
      param_2 = param_2 + lVar3;
      goto LAB_001000a3;
    }
LAB_00100210:
    bVar6 = false;
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      iVar2 = CRYPTO_gcm128_encrypt(param_1 + 0xf8,param_2,param_4,param_3);
      return iVar2 == 0;
    }
    lVar1 = param_1 + 0xf8;
    if (((0x1f < param_3) && (puVar4 == _GLOBAL_OFFSET_TABLE_)) &&
       (*(undefined **)(param_1 + 0x260) == &gcm_ghash_avx)) {
      uVar5 = (ulong)(-*(int *)(param_1 + 0x270) & 0xf);
      iVar2 = CRYPTO_gcm128_encrypt(lVar1,param_2,param_4,uVar5);
      if (iVar2 != 0) goto LAB_00100210;
      lVar3 = aesni_gcm_encrypt(param_2 + uVar5,param_4 + uVar5,param_3 - uVar5,
                                *(undefined8 *)(param_1 + 0x280),lVar1,param_1 + 0x138);
      puVar4 = *(undefined **)(param_1 + 0x2b8);
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar3;
      lVar3 = uVar5 + lVar3;
      param_3 = param_3 - lVar3;
      param_4 = param_4 + lVar3;
      param_2 = param_2 + lVar3;
    }
    iVar2 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_2,param_4,param_3,puVar4);
    bVar6 = iVar2 == 0;
  }
  return bVar6;
}



undefined8 aes_gcm_initkey(long param_1,uchar *param_2,int param_3)

{
  AES_KEY *key;
  undefined *puVar1;
  
  key = (AES_KEY *)(param_1 + 0x2c0);
  if ((DAT_00101045 & 2) == 0) {
    AES_set_encrypt_key(param_2,param_3 * 8,key);
    CRYPTO_gcm128_init(param_1 + 0xf8,key,&AES_encrypt);
    puVar1 = (undefined *)0x0;
  }
  else {
    AES_set_encrypt_key(param_2,param_3 * 8,key);
    CRYPTO_gcm128_init(param_1 + 0xf8,key,&AES_encrypt);
    puVar1 = &ossl_bsaes_ctr32_encrypt_blocks;
  }
  *(undefined **)(param_1 + 0x2b8) = puVar1;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  return 1;
}



undefined8 aesni_gcm_initkey(long param_1,undefined8 param_2,int param_3)

{
  aesni_set_encrypt_key(param_2,param_3 * 8,param_1 + 0x2c0);
  CRYPTO_gcm128_init(param_1 + 0xf8,param_1 + 0x2c0,&aesni_encrypt);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(undefined **)(param_1 + 0x2b8) = &aesni_ctr32_encrypt_blocks;
  return 1;
}



bool vaes_gcm_cipherfinal(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x274);
  puVar3 = (undefined4 *)(param_1 + 0x274);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x270);
    puVar3 = (undefined4 *)(param_1 + 0x270);
  }
  ossl_aes_gcm_finalize_avx512(param_1 + 0xf8,iVar2);
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    *param_2 = *(undefined8 *)(param_1 + 0x138);
    param_2[1] = uVar1;
    *puVar3 = 0;
    return true;
  }
  iVar2 = CRYPTO_memcmp((void *)(param_1 + 0x138),param_2,*(size_t *)(param_1 + 0x18));
  return iVar2 == 0;
}



undefined8 vaes_gcm_cipherupdate(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_3 + *(ulong *)(param_1 + 0x130);
  if ((0xfffffffe0 < uVar1) || (CARRY8(param_3,*(ulong *)(param_1 + 0x130)))) {
    return 0;
  }
  *(ulong *)(param_1 + 0x130) = uVar1;
  if (*(int *)(param_1 + 0x274) != 0) {
    ossl_gcm_gmult_avx512(param_1 + 0x138,param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    ossl_aes_gcm_decrypt_avx512();
    return 1;
  }
  ossl_aes_gcm_encrypt_avx512
            (*(undefined8 *)(param_1 + 0x280),param_1 + 0xf8,param_1 + 0x270,param_2,param_3,param_4
            );
  return 1;
}



undefined8 vaes_gcm_aadupdate(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    return 0;
  }
  uVar2 = param_3 + *(ulong *)(param_1 + 0x128);
  if ((0x2000000000000000 < uVar2) || (CARRY8(param_3,*(ulong *)(param_1 + 0x128)))) {
    return 0;
  }
  *(ulong *)(param_1 + 0x128) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x274);
  pbVar3 = param_2;
  if (uVar1 != 0) {
    if (param_3 == 0) goto LAB_00100529;
    do {
      pbVar3 = param_2 + 1;
      param_3 = param_3 - 1;
      *(byte *)(param_1 + 0x138 + (ulong)(0xf - uVar1)) =
           *(byte *)(param_1 + 0x138 + (ulong)(0xf - uVar1)) ^ *param_2;
      uVar1 = uVar1 + 1 & 0xf;
      if (uVar1 == 0) goto LAB_00100558;
      param_2 = pbVar3;
    } while (param_3 != 0);
    if (uVar1 != 0) goto LAB_00100529;
LAB_00100558:
    ossl_gcm_gmult_avx512(param_1 + 0x138,param_1 + 0xf8);
  }
  uVar2 = param_3 & 0xfffffffffffffff0;
  pbVar4 = pbVar3;
  if (uVar2 != 0) {
    pbVar4 = pbVar3 + uVar2;
    ossl_aes_gcm_update_aad_avx512(param_1 + 0xf8,pbVar3,uVar2);
    param_3 = param_3 - uVar2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    pbVar3 = (byte *)(param_1 + 0x147);
    pbVar5 = pbVar3 + -param_3;
    do {
      *pbVar3 = *pbVar3 ^ *pbVar4;
      pbVar3 = pbVar3 + -1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != pbVar3);
    *(int *)(param_1 + 0x274) = (int)param_3;
    return 1;
  }
LAB_00100529:
  *(uint *)(param_1 + 0x274) = uVar1;
  return 1;
}



undefined8 vaes_gcm_setiv(long param_1,undefined8 param_2,ulong param_3)

{
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined1 (*) [16])(param_1 + 0xf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x128) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x138) = (undefined1  [16])0x0;
  if (0x2000000000000000 < param_3) {
    return 0;
  }
  ossl_aes_gcm_setiv_avx512(*(undefined8 *)(param_1 + 0x280),param_1 + 0xf8,param_2);
  return 1;
}



undefined8 vaes_gcm_setkey(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  lVar1 = param_1 + 0x2c0;
  aesni_set_encrypt_key(param_2,param_3 * 8,lVar1);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x100U & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)(param_1 + 0xf8) - (int)puVar3) + 0x1c0U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *(long *)(param_1 + 0x280) = lVar1;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  ossl_aes_gcm_init_avx512(lVar1,param_1 + 0xf8);
  return 1;
}



undefined1 * ossl_prov_aes_hw_gcm(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = ossl_vaes_vpclmulqdq_capable();
  puVar2 = vaes_gcm;
  if ((iVar1 == 0) && (puVar2 = aes_gcm, (DAT_00101047 & 2) != 0)) {
    puVar2 = aesni_gcm;
  }
  return puVar2;
}


