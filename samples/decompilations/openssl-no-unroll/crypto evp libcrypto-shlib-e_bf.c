
undefined8 bf_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  BF_KEY *pBVar3;
  uchar *out;
  uchar *puVar4;
  uchar *in;
  ulong local_50;
  uchar *local_48;
  
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    out = param_2;
    in = param_3;
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      pBVar3 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar4 = out + 0x40000000;
      BF_cbc_encrypt(in,out,0x40000000,pBVar3,(uchar *)(param_1 + 0x28),iVar1);
      in = in + 0x40000000;
      out = puVar4;
    } while (puVar4 != param_2 + lVar2);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar2;
    param_2 = param_2 + lVar2;
  }
  if (local_50 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    pBVar3 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_cbc_encrypt(local_48,param_2,local_50,pBVar3,(uchar *)(param_1 + 0x28),iVar1);
  }
  return 1;
}



bool bf_init_key(undefined8 param_1,uchar *param_2)

{
  int len;
  BF_KEY *key;
  
  len = EVP_CIPHER_CTX_get_key_length();
  if (-1 < len) {
    key = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_set_key(key,len,param_2);
  }
  return -1 < len;
}



undefined8 bf_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int enc;
  BF_KEY *schedule;
  ulong length;
  uchar *puVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  length = 0x40000000;
  if (param_4 < 0x40000001) {
    length = param_4;
  }
  if (param_4 != 0) {
    do {
      param_4 = param_4 - length;
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      schedule = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar2 = param_3 + length;
      puVar1 = param_2 + length;
      BF_cfb64_encrypt(param_3,param_2,length,schedule,(uchar *)(param_1 + 0x28),&local_44,enc);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      if (param_4 < length) {
        length = param_4;
      }
    } while ((param_4 != 0) && (param_2 = puVar1, param_3 = puVar2, length <= param_4));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 bf_ofb_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  BF_KEY *pBVar2;
  uchar *out;
  uchar *puVar3;
  uchar *in;
  long in_FS_OFFSET;
  ulong local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_4;
  local_58 = param_3;
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    out = param_2;
    in = param_3;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      pBVar2 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar3 = out + 0x40000000;
      BF_ofb64_encrypt(in,out,0x40000000,pBVar2,(uchar *)(param_1 + 0x28),&local_44);
      in = in + 0x40000000;
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      out = puVar3;
    } while (puVar3 != param_2 + lVar1);
    local_60 = param_4 & 0x3fffffff;
    local_58 = param_3 + lVar1;
    param_2 = param_2 + lVar1;
  }
  if (local_60 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    pBVar2 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_ofb64_encrypt(local_58,param_2,local_60,pBVar2,(uchar *)(param_1 + 0x28),&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 bf_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uchar *in;
  uchar *out;
  int enc;
  long lVar1;
  BF_KEY *key;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar3 = (ulong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    uVar2 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      key = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      out = (uchar *)(param_2 + uVar2);
      in = (uchar *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar3;
      BF_ecb_encrypt(in,out,key,enc);
    } while (uVar2 <= param_4 - uVar3);
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_bf_cbc(void)

{
  return (EVP_CIPHER *)bf_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_bf_cfb64(void)

{
  return (EVP_CIPHER *)bf_cfb64;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_bf_ofb(void)

{
  return (EVP_CIPHER *)bf_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_bf_ecb(void)

{
  return (EVP_CIPHER *)bf_ecb;
}


