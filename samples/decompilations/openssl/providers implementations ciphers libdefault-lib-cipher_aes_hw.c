
void cipher_hw_aes_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x38; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = param_1 + 0x18;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 cipher_hw_aes_initkey(long param_1,uchar *param_2,int param_3)

{
  AES_KEY *key;
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = _DAT_00101004;
  iVar2 = *(int *)(param_1 + 0x40);
  key = (AES_KEY *)(param_1 + 0xc0);
  param_3 = param_3 * 8;
  *(AES_KEY **)(param_1 + 0xb0) = key;
  uVar1 = uVar1 & 0x200;
  if (iVar2 - 1U < 2) {
    if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
      if (uVar1 != 0) goto LAB_001000a2;
      goto LAB_00100060;
    }
    if (uVar1 != 0) {
      if (iVar2 == 2) {
        iVar2 = AES_set_decrypt_key(param_2,param_3,key);
        puVar3 = PTR_ossl_bsaes_cbc_encrypt_00102018;
        *(undefined **)(param_1 + 0x30) = PTR_AES_decrypt_00102010;
        *(undefined **)(param_1 + 0x38) = puVar3;
        goto LAB_00100083;
      }
      iVar2 = vpaes_set_decrypt_key();
      *(undefined **)(param_1 + 0x30) = &vpaes_decrypt;
      puVar3 = (undefined *)0x0;
      if (*(int *)(param_1 + 0x40) != 2) goto LAB_0010007f;
      goto LAB_001000bd;
    }
    iVar2 = AES_set_decrypt_key(param_2,param_3,key);
    *(undefined **)(param_1 + 0x30) = &AES_decrypt;
    puVar3 = (undefined *)0x0;
    if (*(int *)(param_1 + 0x40) != 2) goto LAB_0010007f;
LAB_00100134:
    puVar3 = &AES_cbc_encrypt;
  }
  else if (uVar1 == 0) {
LAB_00100060:
    iVar2 = AES_set_encrypt_key(param_2,param_3,key);
    *(undefined **)(param_1 + 0x30) = &AES_encrypt;
    puVar3 = (undefined *)0x0;
    if (*(int *)(param_1 + 0x40) == 2) goto LAB_00100134;
  }
  else {
    if (iVar2 == 5) {
      iVar2 = AES_set_encrypt_key(param_2,param_3,key);
      puVar3 = PTR_ossl_bsaes_ctr32_encrypt_blocks_00102008;
      *(undefined **)(param_1 + 0x30) = _GLOBAL_OFFSET_TABLE_;
      *(undefined **)(param_1 + 0x38) = puVar3;
      goto LAB_00100083;
    }
LAB_001000a2:
    iVar2 = vpaes_set_encrypt_key(param_2,param_3,key);
    *(undefined **)(param_1 + 0x30) = &vpaes_encrypt;
    puVar3 = (undefined *)0x0;
    if (*(int *)(param_1 + 0x40) == 2) {
LAB_001000bd:
      puVar3 = &vpaes_cbc_encrypt;
    }
  }
LAB_0010007f:
  *(undefined **)(param_1 + 0x38) = puVar3;
LAB_00100083:
  if (iVar2 < 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_hw.c",0x75,"cipher_hw_aes_initkey");
    ERR_set_error(0x39,0x65,0);
    return 0;
  }
  return 1;
}



undefined8
cipher_hw_aesni_cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  aesni_cbc_encrypt(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                    *(byte *)(param_1 + 0x6c) >> 1 & 1);
  return 1;
}



undefined8 cipher_hw_aesni_initkey(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  *(long *)(param_1 + 0xb0) = param_1 + 0xc0;
  if ((*(int *)(param_1 + 0x40) - 1U < 2) && ((*(byte *)(param_1 + 0x6c) & 2) == 0)) {
    iVar1 = aesni_set_decrypt_key(param_2,param_3 * 8,param_1 + 0xc0);
    *(undefined **)(param_1 + 0x30) = &aesni_decrypt;
    pcVar2 = (code *)0x0;
    if (*(int *)(param_1 + 0x40) == 2) {
LAB_00100290:
      pcVar2 = aesni_cbc_encrypt;
    }
  }
  else {
    iVar1 = aesni_set_encrypt_key();
    *(undefined **)(param_1 + 0x30) = &aesni_encrypt;
    if (*(int *)(param_1 + 0x40) == 2) goto LAB_00100290;
    if (*(int *)(param_1 + 0x40) != 5) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto joined_r0x001002a2;
    }
    pcVar2 = (code *)&aesni_ctr32_encrypt_blocks;
  }
  *(code **)(param_1 + 0x38) = pcVar2;
joined_r0x001002a2:
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_hw_aesni.inc",0x30,
                  "cipher_hw_aesni_initkey");
    ERR_set_error(0x39,0x65,0);
    return 0;
  }
  return 1;
}



undefined8 cipher_hw_aesni_ecb(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 < *(ulong *)(param_1 + 0x58)) {
    return 1;
  }
  aesni_ecb_encrypt(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),
                    *(byte *)(param_1 + 0x6c) >> 1 & 1);
  return 1;
}



undefined1 * ossl_prov_cipher_hw_aes_cbc(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_cbc;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_cbc;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_ecb(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_ecb;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_ecb;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_ofb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_ofb128;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_ofb128;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_cfb128(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_cfb128;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_cfb128;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_cfb1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_cfb1;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_cfb1;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_cfb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_cfb8;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_cfb8;
  }
  return puVar1;
}



undefined1 * ossl_prov_cipher_hw_aes_ctr(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_ctr;
  if ((DAT_00101007 & 2) == 0) {
    puVar1 = aes_ctr;
  }
  return puVar1;
}


