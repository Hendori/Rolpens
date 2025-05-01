
undefined8 des_init_key(undefined8 param_1,const_DES_cblock *param_2)

{
  long lVar1;
  DES_key_schedule *schedule;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  *(undefined8 *)(lVar1 + 0x80) = 0;
  schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  DES_set_key_unchecked(param_2,schedule);
  return 1;
}



undefined8 des_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  uint enc;
  int enc_00;
  uchar *puVar1;
  DES_key_schedule *pDVar2;
  ulong uVar3;
  uchar *puVar4;
  uchar *extraout_RDX;
  uchar *out;
  uchar *puVar5;
  uchar *in;
  uchar *out_00;
  long in_FS_OFFSET;
  uchar *puStack_70;
  ulong local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  out_00 = param_2;
  local_60 = param_4;
  local_58 = param_3;
  if (0x3fffffff < param_4) {
    puVar1 = (uchar *)((param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000);
    out_00 = param_2 + (long)puVar1;
    uVar3 = param_4;
    puVar4 = param_3;
    out = param_2;
    in = param_3;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1,param_2,puVar4,uVar3);
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = (ulong)enc;
      puStack_70 = (uchar *)0x1000cf;
      pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar5 = out + 0x40000000;
      DES_cfb64_encrypt(in,out,0x40000000,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44,enc);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      puVar4 = extraout_RDX;
      out = puVar5;
      param_2 = puStack_70;
      in = in + 0x40000000;
    } while (puVar5 != out_00);
    local_60 = param_4 & 0x3fffffff;
    local_58 = param_3 + (long)puVar1;
    param_4 = uVar3;
    param_3 = puVar1;
    param_2 = (uchar *)0x1000cf;
  }
  if (local_60 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1,param_2,param_3,param_4);
    enc_00 = EVP_CIPHER_CTX_is_encrypting(param_1);
    pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb64_encrypt(local_58,out_00,local_60,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44,
                      enc_00);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 des_ofb_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  DES_key_schedule *pDVar2;
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
      pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar3 = out + 0x40000000;
      DES_ofb64_encrypt(in,out,0x40000000,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44);
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
    pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ofb64_encrypt(local_58,param_2,local_60,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 des_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  const_DES_cblock *input;
  DES_cblock *output;
  int enc;
  long lVar1;
  DES_key_schedule *ks;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar3 = (ulong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    uVar2 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      ks = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      output = (DES_cblock *)(param_2 + uVar2);
      input = (const_DES_cblock *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar3;
      DES_ecb_encrypt(input,output,ks,enc);
    } while (uVar2 <= param_4 - uVar3);
  }
  return 1;
}



undefined8 des_cfb1_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  int enc;
  DES_key_schedule *schedule;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uchar local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = 0;
  uVar4 = 0x8000000;
  if (param_4 < 0x8000001) {
    uVar4 = param_4;
  }
  if ((param_4 != 0) && (uVar4 <= param_4)) {
    do {
      if (uVar4 << 3 != 0) {
        uVar3 = 0;
        do {
          local_42 = (uchar)(((int)(uint)*(byte *)(param_3 + (uVar3 >> 3)) >> (~(byte)uVar3 & 7)) <<
                            7);
          enc = EVP_CIPHER_CTX_is_encrypting(param_1);
          schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
          DES_cfb_encrypt(&local_42,&local_41,1,1,schedule,(DES_cblock *)(param_1 + 0x28),enc);
          pbVar1 = (byte *)(param_2 + (uVar3 >> 3));
          bVar2 = (byte)uVar3 & 7;
          uVar3 = uVar3 + 1;
          *pbVar1 = (byte)(-0x81 >> bVar2) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> bVar2);
        } while (uVar3 != uVar4 << 3);
      }
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 des_cfb8_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  DES_key_schedule *pDVar3;
  uchar *out;
  uchar *puVar4;
  uchar *in;
  uchar *out_00;
  uchar *puStack_60;
  ulong local_50;
  uchar *local_48;
  
  out_00 = param_2;
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    out_00 = param_2 + lVar2;
    out = param_2;
    in = param_3;
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1,param_2);
      puStack_60 = (uchar *)0x10058b;
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar4 = out + 0x40000000;
      DES_cfb_encrypt(in,out,8,0x40000000,pDVar3,(DES_cblock *)(param_1 + 0x28),iVar1);
      out = puVar4;
      in = in + 0x40000000;
      param_2 = puStack_60;
    } while (puVar4 != out_00);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar2;
    param_2 = (uchar *)0x10058b;
  }
  if (local_50 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1,param_2);
    pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb_encrypt(local_48,out_00,8,local_50,pDVar3,(DES_cblock *)(param_1 + 0x28),iVar1);
  }
  return 1;
}



ulong des_ctrl(undefined8 param_1,int param_2,undefined8 param_3,DES_cblock *param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = RAND_priv_bytes(param_4,8);
  if (0 < iVar1) {
    DES_set_odd_parity(param_4);
  }
  return (ulong)(0 < iVar1);
}



undefined8 des_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  DES_key_schedule *pDVar3;
  uchar *puVar4;
  uchar *input;
  uchar *output;
  uchar *local_48;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(code **)(lVar2 + 0x80) == (code *)0x0) {
    output = param_2;
    local_48 = param_3;
    if (0x3fffffff < param_4) {
      lVar2 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
      output = param_2 + lVar2;
      input = param_3;
      do {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        puVar4 = param_2 + 0x40000000;
        DES_ncbc_encrypt(input,param_2,0x40000000,pDVar3,(DES_cblock *)(param_1 + 0x28),iVar1);
        input = input + 0x40000000;
        param_2 = puVar4;
      } while (puVar4 != output);
      local_48 = param_3 + lVar2;
      param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    }
    if (param_4 != 0) {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ncbc_encrypt(local_48,output,param_4,pDVar3,(DES_cblock *)(param_1 + 0x28),iVar1);
    }
  }
  else {
    (**(code **)(lVar2 + 0x80))(param_3,param_2,param_4,lVar2,param_1 + 0x28);
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_cbc(void)

{
  return (EVP_CIPHER *)des_cbc;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_cfb64(void)

{
  return (EVP_CIPHER *)des_cfb64;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_ofb(void)

{
  return (EVP_CIPHER *)des_ofb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_ecb(void)

{
  return (EVP_CIPHER *)des_ecb;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_cfb1(void)

{
  return (EVP_CIPHER *)des_cfb1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_des_cfb8(void)

{
  return (EVP_CIPHER *)des_cfb8;
}


