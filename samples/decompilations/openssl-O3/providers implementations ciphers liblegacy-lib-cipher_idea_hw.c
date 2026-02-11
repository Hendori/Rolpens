
undefined8 cipher_hw_idea_cbc_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_50;
  long local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    local_48 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + local_48;
    lVar2 = param_3;
    do {
      lVar3 = param_2 + 0x40000000;
      IDEA_cbc_encrypt(lVar2,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,
                       *(byte *)(param_1 + 0x6c) >> 1 & 1);
      lVar2 = lVar2 + 0x40000000;
      param_2 = lVar3;
    } while (lVar3 != lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + local_48;
    param_2 = lVar1;
  }
  if (local_50 != 0) {
    IDEA_cbc_encrypt(local_48,param_2,local_50,param_1 + 0xc0,param_1 + 0x20,
                     *(byte *)(param_1 + 0x6c) >> 1 & 1);
  }
  return 1;
}



undefined8 cipher_hw_idea_initkey(long param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_f8 [216];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(param_1 + 0x6c) & 2) == 0) && (1 < *(int *)(param_1 + 0x40) - 3U)) {
    IDEA_set_encrypt_key(param_2,auStack_f8,0);
    IDEA_set_decrypt_key(auStack_f8,param_1 + 0xc0);
    OPENSSL_cleanse(auStack_f8,0xd8);
  }
  else {
    IDEA_set_encrypt_key(param_2,param_1 + 0xc0,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cipher_hw_idea_ofb64_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(undefined4 *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + lVar2;
    lVar3 = param_3;
    do {
      lVar4 = param_2 + 0x40000000;
      IDEA_ofb64_encrypt(lVar3,param_2,0x40000000,param_1 + 0xc0,param_1 + 0x20,&local_44);
      lVar3 = lVar3 + 0x40000000;
      param_2 = lVar4;
    } while (lVar4 != lVar1);
    param_3 = param_3 + lVar2;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = lVar1;
  }
  if (param_4 != 0) {
    IDEA_ofb64_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20,&local_44);
  }
  *(undefined4 *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 cipher_hw_idea_cfb64_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(undefined4 *)(param_1 + 0xa0);
  uVar1 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar1 = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - uVar1;
      lVar2 = param_3 + uVar1;
      lVar3 = param_2 + uVar1;
      IDEA_cfb64_encrypt(param_3,param_2,uVar1,param_1 + 0xc0,param_1 + 0x20,&local_44,
                         *(byte *)(param_1 + 0x6c) >> 1 & 1);
      if (param_4 < uVar1) {
        uVar1 = param_4;
      }
      param_3 = lVar2;
      param_2 = lVar3;
    } while (param_4 != 0);
  }
  *(undefined4 *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 cipher_hw_idea_ecb_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x58);
  if (uVar3 <= param_4) {
    uVar4 = 0;
    do {
      lVar2 = param_2 + uVar4;
      lVar1 = param_3 + uVar4;
      uVar4 = uVar4 + uVar3;
      IDEA_ecb_encrypt(lVar1,lVar2,param_1 + 0xc0);
    } while (uVar4 <= param_4 - uVar3);
  }
  return 1;
}



undefined1 * ossl_prov_cipher_hw_idea_cbc(void)

{
  return idea_cbc;
}



undefined1 * ossl_prov_cipher_hw_idea_ofb64(void)

{
  return idea_ofb64;
}



undefined1 * ossl_prov_cipher_hw_idea_cfb64(void)

{
  return idea_cfb64;
}



undefined1 * ossl_prov_cipher_hw_idea_ecb(void)

{
  return idea_ecb;
}


