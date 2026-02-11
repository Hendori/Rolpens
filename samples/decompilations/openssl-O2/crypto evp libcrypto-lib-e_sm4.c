
undefined8 sm4_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  pcVar1 = *(code **)(lVar4 + 0x88);
  if (pcVar1 == (code *)0x0) {
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      CRYPTO_cbc128_decrypt
                (param_3,param_2,param_4,lVar4,param_1 + 0x28,*(undefined8 *)(lVar4 + 0x80));
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



undefined8 sm4_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  uVar3 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar1 = EVP_CIPHER_get_mode(uVar3);
  if ((iVar1 - 1U < 2) && (param_4 == 0)) {
    puVar4 = &ossl_sm4_decrypt;
  }
  else {
    puVar4 = &ossl_sm4_encrypt;
  }
  *(undefined **)(lVar2 + 0x80) = puVar4;
  uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  ossl_sm4_set_key(param_2,uVar3);
  return 1;
}



undefined8 sm4_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar4 = EVP_CIPHER_CTX_get_block_size();
  uVar8 = (ulong)iVar4;
  lVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar8 <= param_4) {
    pcVar3 = *(code **)(lVar6 + 0x88);
    if (pcVar3 == (code *)0x0) {
      uVar7 = 0;
      do {
        lVar1 = param_2 + uVar7;
        lVar2 = param_3 + uVar7;
        uVar7 = uVar7 + uVar8;
        (**(code **)(lVar6 + 0x80))(lVar2,lVar1,lVar6);
      } while (uVar7 <= param_4 - uVar8);
    }
    else {
      uVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      (*pcVar3)(param_3,param_2,param_4,lVar6,uVar5);
    }
  }
  return 1;
}



undefined8 sm4_ofb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_34 = EVP_CIPHER_CTX_get_num(param_1);
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_34,*(undefined8 *)(lVar1 + 0x80));
  EVP_CIPHER_CTX_set_num(param_1,local_34);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 sm4_cfb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



undefined8 sm4_ctr_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    lVar1 = *(long *)(lVar3 + 0x88);
    local_44 = iVar2;
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x80);
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



undefined1 * EVP_sm4_cbc(void)

{
  return sm4_cbc;
}



undefined1 * EVP_sm4_ecb(void)

{
  return sm4_ecb;
}



undefined1 * EVP_sm4_ofb(void)

{
  return sm4_ofb;
}



undefined1 * EVP_sm4_cfb128(void)

{
  return sm4_cfb;
}



undefined1 * EVP_sm4_ctr(void)

{
  return sm4_ctr;
}


