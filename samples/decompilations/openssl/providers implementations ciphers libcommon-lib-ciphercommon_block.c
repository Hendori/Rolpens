
ulong ossl_cipher_fillblock(long param_1,long *param_2,long param_3,long *param_4,ulong *param_5)

{
  ulong __n;
  
  __n = param_3 - *param_2;
  if (*param_5 < __n) {
    __n = *param_5;
  }
  memcpy((void *)(param_1 + *param_2),(void *)*param_4,__n);
  *param_4 = *param_4 + __n;
  *param_5 = *param_5 - __n;
  *param_2 = *param_2 + __n;
  return -param_3 & *param_5;
}



undefined8
ossl_cipher_trailingdata
          (long param_1,long *param_2,ulong param_3,undefined8 *param_4,size_t *param_5)

{
  size_t __n;
  
  __n = *param_5;
  if (__n == 0) {
    return 1;
  }
  if (__n + *param_2 <= param_3) {
    memcpy((void *)(param_1 + *param_2),(void *)*param_4,__n);
    *param_2 = *param_2 + *param_5;
    *param_5 = 0;
    return 1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/ciphers/ciphercommon_block.c",0x46,
                "ossl_cipher_trailingdata");
  ERR_set_error(0x39,0xc0103,0);
  return 0;
}



void ossl_cipher_padblock(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < param_3) {
    memset((void *)(param_1 + uVar1),(int)param_3 - (int)uVar1 & 0xff,param_3 - uVar1);
    return;
  }
  return;
}



undefined8 ossl_cipher_unpadblock(long param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_2 == param_3) {
    bVar1 = *(byte *)(param_1 + -1 + param_3);
    if ((ulong)bVar1 - 1 < param_3) {
      uVar2 = param_3 - bVar1;
      while (param_3 = param_3 - 1, bVar1 == *(byte *)(param_1 + param_3)) {
        if (uVar2 == param_3) {
          *param_2 = uVar2;
          return 1;
        }
      }
      ERR_new();
      uVar3 = 0x70;
    }
    else {
      ERR_new();
      uVar3 = 0x6b;
    }
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_block.c",uVar3,
                  "ossl_cipher_unpadblock");
    ERR_set_error(0x39,100,0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_block.c",0x61,
                  "ossl_cipher_unpadblock");
    ERR_set_error(0x39,0xc0103,0);
  }
  return 0;
}



undefined8
ossl_cipher_tlsunpadblock
          (undefined8 param_1,uint param_2,long param_3,long *param_4,long param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0x301) {
    lVar2 = *param_4;
  }
  else {
    if (param_2 < 0x302) {
      if (param_2 != 0x100) {
        if (param_2 != 0x300) {
          return 0;
        }
        uVar1 = ssl3_cbc_remove_padding_and_mac(param_4,*param_4,param_3,param_6,param_7,param_5);
        return uVar1;
      }
    }
    else if (param_2 != 0xfefd) {
      if (param_2 < 0xfefe) {
        if (1 < param_2 - 0x302) {
          return 0;
        }
      }
      else if (param_2 != 0xfeff) {
        return 0;
      }
    }
    param_3 = param_3 + param_5;
    lVar2 = *param_4 - param_5;
    *param_4 = lVar2;
  }
  uVar1 = tls1_cbc_remove_padding_and_mac(param_4,lVar2,param_3,param_6,param_7,param_5);
  return uVar1;
}


