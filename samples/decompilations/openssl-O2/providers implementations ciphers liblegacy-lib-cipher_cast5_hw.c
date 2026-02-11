
undefined8 cipher_hw_cast5_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  uchar *in;
  uchar *out;
  uchar *puVar2;
  ulong local_50;
  uchar *local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    in = param_3;
    out = param_2;
    do {
      puVar2 = out + 0x40000000;
      CAST_cbc_encrypt(in,out,0x40000000,(CAST_KEY *)(param_1 + 0xc0),(uchar *)(param_1 + 0x20),
                       *(byte *)(param_1 + 0x6c) >> 1 & 1);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar1;
    param_2 = param_2 + lVar1;
  }
  if (local_50 != 0) {
    CAST_cbc_encrypt(local_48,param_2,local_50,(CAST_KEY *)(param_1 + 0xc0),
                     (uchar *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
  }
  return 1;
}



undefined8 cipher_hw_cast5_initkey(long param_1,uchar *param_2,int param_3)

{
  CAST_set_key((CAST_KEY *)(param_1 + 0xc0),param_3,param_2);
  return 1;
}



undefined8 cipher_hw_cast5_ecb_cipher(long param_1,long param_2,long param_3,ulong param_4)

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
      CAST_ecb_encrypt(in,out,(CAST_KEY *)(param_1 + 0xc0),*(byte *)(param_1 + 0x6c) >> 1 & 1);
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined8 cipher_hw_cast5_ofb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      CAST_ofb64_encrypt(in,out,0x40000000,(CAST_KEY *)(param_1 + 0xc0),(uchar *)(param_1 + 0x20),
                         &local_44);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    param_3 = param_3 + lVar1;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = param_2 + lVar1;
  }
  if (param_4 != 0) {
    CAST_ofb64_encrypt(param_3,param_2,param_4,(CAST_KEY *)(param_1 + 0xc0),
                       (uchar *)(param_1 + 0x20),&local_44);
  }
  *(int *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 cipher_hw_cast5_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong length;
  uchar *puVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(int *)(param_1 + 0xa0);
  length = 0x40000000;
  if (param_4 < 0x40000001) {
    length = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - length;
      puVar1 = param_3 + length;
      puVar2 = param_2 + length;
      CAST_cfb64_encrypt(param_3,param_2,length,(CAST_KEY *)(param_1 + 0xc0),
                         (uchar *)(param_1 + 0x20),&local_44,*(byte *)(param_1 + 0x6c) >> 1 & 1);
      if (param_4 < length) {
        length = param_4;
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



undefined1 * ossl_prov_cipher_hw_cast5_cbc(void)

{
  return cast5_cbc;
}



undefined1 * ossl_prov_cipher_hw_cast5_ecb(void)

{
  return cast5_ecb;
}



undefined1 * ossl_prov_cipher_hw_cast5_ofb64(void)

{
  return cast5_ofb64;
}



undefined1 * ossl_prov_cipher_hw_cast5_cfb64(void)

{
  return cast5_cfb64;
}


