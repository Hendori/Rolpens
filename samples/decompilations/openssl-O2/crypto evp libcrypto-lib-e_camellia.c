
undefined8
camellia_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  pcVar1 = *(code **)(lVar4 + 0x120);
  if (pcVar1 == (code *)0x0) {
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      CRYPTO_cbc128_decrypt
                (param_3,param_2,param_4,lVar4,param_1 + 0x28,*(undefined8 *)(lVar4 + 0x118));
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  else {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    (*pcVar1)(param_3,param_2,param_4,lVar4,param_1 + 0x28,uVar2);
  }
  return 1;
}



undefined8 camellia_init_key(undefined8 param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  CAMELLIA_KEY *key;
  undefined8 uVar2;
  undefined *puVar3;
  
  key = (CAMELLIA_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  iVar1 = Camellia_set_key(param_2,iVar1 * 8,key);
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/e_camellia.c",0xc9,"camellia_init_key");
    ERR_set_error(6,0x9d,0);
    return 0;
  }
  uVar2 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar1 = EVP_CIPHER_get_mode(uVar2);
  puVar3 = (undefined *)0x0;
  if (iVar1 - 1U < 2) {
    if (param_4 == 0) {
      key[1].u.d = (double)&Camellia_decrypt;
      puVar3 = (undefined *)0x0;
      if (iVar1 == 2) {
        puVar3 = &Camellia_cbc_encrypt;
      }
      *(undefined **)((long)&key[1].u + 8) = puVar3;
      return 1;
    }
    if (iVar1 == 2) {
      puVar3 = &Camellia_cbc_encrypt;
    }
  }
  *(undefined **)((long)&key[1].u + 8) = puVar3;
  key[1].u.d = (double)&Camellia_encrypt;
  return 1;
}



undefined8 camellia_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar3 = EVP_CIPHER_CTX_get_block_size();
  uVar6 = (ulong)iVar3;
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar6 <= param_4) {
    uVar5 = 0;
    do {
      lVar1 = param_2 + uVar5;
      lVar2 = param_3 + uVar5;
      uVar5 = uVar5 + uVar6;
      (**(code **)(lVar4 + 0x118))(lVar2,lVar1,lVar4);
    } while (uVar5 <= param_4 - uVar6);
  }
  return 1;
}



undefined8
camellia_ofb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_34 = EVP_CIPHER_CTX_get_num(param_1);
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_34,*(undefined8 *)(lVar1 + 0x118));
  EVP_CIPHER_CTX_set_num(param_1,local_34);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
camellia_cfb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_44 = EVP_CIPHER_CTX_get_num(param_1);
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  CRYPTO_cfb128_encrypt(param_3,param_2,param_4,uVar1,param_1 + 0x28,&local_44,uVar2);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 camellia_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_60;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  local_78 = param_2;
  local_60 = param_3;
  if (iVar1 == 0) {
    if (param_4 >> 0x3c != 0) {
      local_60 = (param_4 + 0xf000000000000000 >> 0x3c) + 1 << 0x3c;
      local_78 = param_2 + local_60;
      lVar6 = param_3;
      do {
        local_44 = EVP_CIPHER_CTX_get_num(param_1);
        uVar4 = *(undefined8 *)(lVar2 + 0x118);
        uVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
        lVar5 = param_2 + 0x1000000000000000;
        CRYPTO_cfb128_1_encrypt
                  (lVar6,param_2,0x8000000000000000,lVar2,param_1->iv,&local_44,uVar3,uVar4);
        EVP_CIPHER_CTX_set_num(param_1,local_44);
        param_2 = lVar5;
        lVar6 = lVar6 + 0x1000000000000000;
      } while (lVar5 != local_78);
      local_60 = param_3 + local_60;
      param_4 = param_4 & 0xfffffffffffffff;
    }
    if (param_4 == 0) goto LAB_0010049e;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
    param_4 = param_4 << 3;
  }
  else {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
  }
  CRYPTO_cfb128_1_encrypt(local_60,local_78,param_4,lVar2,param_1->iv,&local_44,uVar4);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
LAB_0010049e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8
camellia_cfb8_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_44 = EVP_CIPHER_CTX_get_num(param_1);
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  CRYPTO_cfb128_8_encrypt(param_3,param_2,param_4,uVar1,param_1 + 0x28,&local_44,uVar2);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
camellia_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_CIPHER_CTX_get_num();
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x120);
    local_44 = iVar2;
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x118);
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt(param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar5,&local_44);
    }
    else {
      uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_ctr128_encrypt_ctr32
                (param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar4,&local_44,lVar1);
      uVar4 = extraout_RDX;
    }
    EVP_CIPHER_CTX_set_num(param_1,local_44,uVar4);
    uVar4 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_cbc(void)

{
  return (EVP_CIPHER *)camellia_128_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_ecb(void)

{
  return (EVP_CIPHER *)camellia_128_ecb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_ofb(void)

{
  return (EVP_CIPHER *)camellia_128_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_cfb128(void)

{
  return (EVP_CIPHER *)camellia_128_cfb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_cfb1(void)

{
  return (EVP_CIPHER *)camellia_128_cfb1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_128_cfb8(void)

{
  return (EVP_CIPHER *)camellia_128_cfb8;
}



undefined1 * EVP_camellia_128_ctr(void)

{
  return camellia_128_ctr;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_cbc(void)

{
  return (EVP_CIPHER *)camellia_192_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_ecb(void)

{
  return (EVP_CIPHER *)camellia_192_ecb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_ofb(void)

{
  return (EVP_CIPHER *)camellia_192_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_cfb128(void)

{
  return (EVP_CIPHER *)camellia_192_cfb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_cfb1(void)

{
  return (EVP_CIPHER *)camellia_192_cfb1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_192_cfb8(void)

{
  return (EVP_CIPHER *)camellia_192_cfb8;
}



undefined1 * EVP_camellia_192_ctr(void)

{
  return camellia_192_ctr;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_cbc(void)

{
  return (EVP_CIPHER *)camellia_256_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_ecb(void)

{
  return (EVP_CIPHER *)camellia_256_ecb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_ofb(void)

{
  return (EVP_CIPHER *)camellia_256_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_cfb128(void)

{
  return (EVP_CIPHER *)camellia_256_cfb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_cfb1(void)

{
  return (EVP_CIPHER *)camellia_256_cfb1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_camellia_256_cfb8(void)

{
  return (EVP_CIPHER *)camellia_256_cfb8;
}



undefined1 * EVP_camellia_256_ctr(void)

{
  return camellia_256_ctr;
}


