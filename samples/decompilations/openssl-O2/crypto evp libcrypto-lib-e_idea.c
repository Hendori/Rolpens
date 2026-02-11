
undefined8 idea_cbc_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong local_50;
  long local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    local_48 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + local_48;
    lVar5 = param_3;
    do {
      uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = param_2 + 0x40000000;
      IDEA_cbc_encrypt(lVar5,param_2,0x40000000,uVar3,param_1 + 0x28,uVar2);
      lVar5 = lVar5 + 0x40000000;
      param_2 = lVar4;
    } while (lVar4 != lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + local_48;
    param_2 = lVar1;
  }
  if (local_50 != 0) {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    IDEA_cbc_encrypt(local_48,param_2,local_50,uVar3,param_1 + 0x28,uVar2);
  }
  return 1;
}



undefined8 idea_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [216];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    uVar2 = EVP_CIPHER_CTX_get0_cipher();
    iVar1 = EVP_CIPHER_get_mode(uVar2);
    if (iVar1 != 4) {
      uVar2 = EVP_CIPHER_CTX_get0_cipher(param_1);
      iVar1 = EVP_CIPHER_get_mode(uVar2);
      if (iVar1 != 3) {
        IDEA_set_encrypt_key(param_2,auStack_f8);
        uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
        IDEA_set_decrypt_key(auStack_f8,uVar2);
        OPENSSL_cleanse(auStack_f8,0xd8);
        goto LAB_00100161;
      }
    }
  }
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  IDEA_set_encrypt_key(param_2,uVar2);
LAB_00100161:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 idea_cfb64_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar3 = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - uVar3;
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      uVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = param_3 + uVar3;
      lVar4 = param_2 + uVar3;
      IDEA_cfb64_encrypt(param_3,param_2,uVar3,uVar2,param_1 + 0x28,&local_44,uVar1);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < uVar3) {
        uVar3 = param_4;
      }
    } while ((param_4 != 0) && (param_2 = lVar4, param_3 = lVar5, uVar3 <= param_4));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 idea_ofb_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_4;
  local_58 = param_3;
  if (0x3fffffff < param_4) {
    local_58 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + local_58;
    lVar4 = param_3;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = param_2 + 0x40000000;
      IDEA_ofb64_encrypt(lVar4,param_2,0x40000000,uVar2,param_1 + 0x28,&local_44);
      lVar4 = lVar4 + 0x40000000;
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      param_2 = lVar3;
    } while (lVar3 != lVar1);
    local_60 = param_4 & 0x3fffffff;
    local_58 = param_3 + local_58;
    param_2 = lVar1;
  }
  if (local_60 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    IDEA_ofb64_encrypt(local_58,param_2,local_60,uVar2,param_1 + 0x28,&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 idea_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  uVar5 = (ulong)*(int *)(lVar2 + 4);
  if (uVar5 <= param_4) {
    uVar4 = 0;
    do {
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar1 = param_2 + uVar4;
      lVar2 = param_3 + uVar4;
      uVar4 = uVar4 + uVar5;
      IDEA_ecb_encrypt(lVar2,lVar1,uVar3);
    } while (uVar4 <= param_4 - uVar5);
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_idea_cbc(void)

{
  return (EVP_CIPHER *)idea_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_idea_cfb64(void)

{
  return (EVP_CIPHER *)idea_cfb64;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_idea_ofb(void)

{
  return (EVP_CIPHER *)idea_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_idea_ecb(void)

{
  return (EVP_CIPHER *)idea_ecb;
}


