
undefined8 cipher_hw_seed_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  uchar *in;
  uchar *out;
  uchar *puVar2;
  size_t local_50;
  uchar *local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    in = param_3;
    out = param_2;
    do {
      puVar2 = out + 0x40000000;
      SEED_cbc_encrypt(in,out,0x40000000,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                       (uchar *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar1;
    param_2 = param_2 + lVar1;
  }
  if (local_50 != 0) {
    SEED_cbc_encrypt(local_48,param_2,local_50,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                     (uchar *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
  }
  return 1;
}



undefined8 cipher_hw_seed_initkey(long param_1,uchar *param_2)

{
  SEED_set_key(param_2,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0));
  return 1;
}



undefined8 cipher_hw_seed_ecb_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  uchar *in;
  uchar *out;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      out = (uchar *)(param_2 + uVar2);
      in = (uchar *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar1;
      SEED_ecb_encrypt(in,out,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                       *(byte *)(param_1 + 0x6c) >> 1 & 1);
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined8 cipher_hw_seed_ofb128_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  uchar *in;
  uchar *out;
  uchar *puVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(int *)(param_1 + 0xa0);
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    in = param_3;
    out = param_2;
    do {
      puVar2 = out + 0x40000000;
      SEED_ofb128_encrypt(in,out,0x40000000,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                          (uchar *)(param_1 + 0x20),&local_44);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    param_3 = param_3 + lVar1;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = param_2 + lVar1;
  }
  if (param_4 != 0) {
    SEED_ofb128_encrypt(param_3,param_2,param_4,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                        (uchar *)(param_1 + 0x20),&local_44);
  }
  *(int *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 cipher_hw_seed_cfb128_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong len;
  uchar *puVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(int *)(param_1 + 0xa0);
  len = 0x40000000;
  if (param_4 < 0x40000001) {
    len = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - len;
      puVar1 = param_3 + len;
      puVar2 = param_2 + len;
      SEED_cfb128_encrypt(param_3,param_2,len,(SEED_KEY_SCHEDULE *)(param_1 + 0xc0),
                          (uchar *)(param_1 + 0x20),&local_44,*(byte *)(param_1 + 0x6c) >> 1 & 1);
      if (param_4 < len) {
        len = param_4;
      }
      param_3 = puVar1;
      param_2 = puVar2;
    } while (param_4 != 0);
  }
  *(int *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined1 * ossl_prov_cipher_hw_seed_cbc(void)

{
  return seed_cbc;
}



undefined1 * ossl_prov_cipher_hw_seed_ecb(void)

{
  return seed_ecb;
}



undefined1 * ossl_prov_cipher_hw_seed_ofb128(void)

{
  return seed_ofb128;
}



undefined1 * ossl_prov_cipher_hw_seed_cfb128(void)

{
  return seed_cfb128;
}


