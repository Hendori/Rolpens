
undefined8
ossl_cipher_hw_generic_cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
    return 1;
  }
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    CRYPTO_cbc128_encrypt();
    return 1;
  }
  CRYPTO_cbc128_decrypt
            (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
             *(undefined8 *)(param_1 + 0x30));
  return 1;
}



undefined8 ossl_cipher_hw_generic_ecb(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x58);
  if (uVar3 <= param_4) {
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      uVar5 = 0;
      while( true ) {
        lVar1 = param_2 + uVar5;
        lVar2 = param_3 + uVar5;
        uVar5 = uVar5 + uVar3;
        (**(code **)(param_1 + 0x30))(lVar2,lVar1,uVar4);
        if (param_4 - uVar3 < uVar5) break;
        uVar4 = *(undefined8 *)(param_1 + 0xb0);
      }
    }
    else {
      (**(code **)(param_1 + 0x38))(param_3);
    }
  }
  return 1;
}



undefined8
ossl_cipher_hw_generic_ofb128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0xa0);
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_14,
             *(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xa0) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_cipher_hw_generic_cfb128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0xa0);
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_14,
             *(byte *)(param_1 + 0x6c) >> 1 & 1);
  *(undefined4 *)(param_1 + 0xa0) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_cipher_hw_generic_cfb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0xa0);
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_14,
             *(byte *)(param_1 + 0x6c) >> 1 & 1);
  *(undefined4 *)(param_1 + 0xa0) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_cipher_hw_generic_cfb1(long param_1,long param_2,long param_3,ulong param_4)

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
  if (*(char *)(param_1 + 0x6c) < '\0') {
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_44,
               *(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    lVar3 = param_2;
    if (param_4 >> 0x3c != 0) {
      lVar1 = (param_4 + 0xf000000000000000 >> 0x3c) + 1 << 0x3c;
      lVar3 = param_2 + lVar1;
      lVar4 = param_3;
      do {
        lVar2 = param_2 + 0x1000000000000000;
        CRYPTO_cfb128_1_encrypt
                  (lVar4,param_2,0x8000000000000000,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                   &local_44,*(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
        param_2 = lVar2;
        lVar4 = lVar4 + 0x1000000000000000;
      } while (lVar2 != lVar3);
      param_3 = param_3 + lVar1;
      param_4 = param_4 & 0xfffffffffffffff;
    }
    if (param_4 != 0) {
      CRYPTO_cfb128_1_encrypt
                (param_3,lVar3,param_4 << 3,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_44
                 ,*(byte *)(param_1 + 0x6c) >> 1 & 1);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8
ossl_cipher_hw_generic_ctr(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x38) == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,param_1 + 0x10
               ,&local_14);
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32();
  }
  *(undefined4 *)(param_1 + 0xa0) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_cipher_hw_chunked_cbc(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + lVar2;
    lVar4 = param_3;
    do {
      lVar3 = param_2 + 0x40000000;
      ossl_cipher_hw_generic_cbc(param_1,param_2,lVar4,0x40000000);
      param_2 = lVar3;
      lVar4 = lVar4 + 0x40000000;
    } while (lVar3 != lVar1);
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_3 = param_3 + lVar2;
    param_2 = lVar1;
  }
  if (param_4 != 0) {
    ossl_cipher_hw_generic_cbc(param_1,param_2,param_3,param_4);
  }
  return 1;
}



undefined8 ossl_cipher_hw_chunked_cfb8(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar2 = param_4;
  }
  if (param_4 != 0) {
    do {
      uVar1 = param_4 - uVar2;
      lVar3 = param_3 + uVar2;
      lVar4 = param_2 + uVar2;
      ossl_cipher_hw_generic_cfb8(param_1,param_2,param_3,param_4);
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      param_4 = uVar1;
      param_3 = lVar3;
      param_2 = lVar4;
    } while (uVar1 != 0);
  }
  return 1;
}



undefined8 ossl_cipher_hw_chunked_cfb128(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0x40000000;
  if (param_4 < 0x40000001) {
    uVar2 = param_4;
  }
  if (param_4 != 0) {
    do {
      uVar1 = param_4 - uVar2;
      lVar3 = param_3 + uVar2;
      lVar4 = param_2 + uVar2;
      ossl_cipher_hw_generic_cfb128(param_1,param_2,param_3,param_4);
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      param_4 = uVar1;
      param_3 = lVar3;
      param_2 = lVar4;
    } while (uVar1 != 0);
  }
  return 1;
}



undefined8 ossl_cipher_hw_chunked_ofb128(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    lVar1 = param_2 + lVar2;
    lVar4 = param_3;
    do {
      lVar3 = param_2 + 0x40000000;
      ossl_cipher_hw_generic_ofb128(param_1,param_2,lVar4,0x40000000);
      param_2 = lVar3;
      lVar4 = lVar4 + 0x40000000;
    } while (lVar3 != lVar1);
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_3 = param_3 + lVar2;
    param_2 = lVar1;
  }
  if (param_4 != 0) {
    ossl_cipher_hw_generic_ofb128(param_1,param_2,param_3,param_4);
  }
  return 1;
}


