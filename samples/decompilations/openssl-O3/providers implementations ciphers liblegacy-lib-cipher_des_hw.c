
void cipher_hw_des_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x29; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = param_1 + 0x18;
  return;
}



undefined8 cipher_hw_des_ecb_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  const_DES_cblock *input;
  DES_cblock *output;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      output = (DES_cblock *)(param_2 + uVar2);
      input = (const_DES_cblock *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar1;
      DES_ecb_encrypt(input,output,(DES_key_schedule *)(param_1 + 0xc0),
                      *(byte *)(param_1 + 0x6c) >> 1 & 1);
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}



undefined8 cipher_hw_des_initkey(long param_1,const_DES_cblock *param_2)

{
  *(undefined8 *)(param_1 + 0x140) = 0;
  DES_set_key_unchecked(param_2,(DES_key_schedule *)(param_1 + 0xc0));
  return 1;
}



undefined8 cipher_hw_des_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  DES_key_schedule *schedule;
  long lVar1;
  uchar *input;
  uchar *output;
  uchar *puVar2;
  uchar *local_48;
  
  schedule = (DES_key_schedule *)(param_1 + 0xc0);
  if (*(code **)(param_1 + 0x140) == (code *)0x0) {
    output = param_2;
    local_48 = param_3;
    if (0x3fffffff < param_4) {
      lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
      output = param_2 + lVar1;
      input = param_3;
      do {
        puVar2 = param_2 + 0x40000000;
        DES_ncbc_encrypt(input,param_2,0x40000000,schedule,(DES_cblock *)(param_1 + 0x20),
                         *(byte *)(param_1 + 0x6c) >> 1 & 1);
        input = input + 0x40000000;
        param_2 = puVar2;
      } while (puVar2 != output);
      local_48 = param_3 + lVar1;
      param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    }
    if (param_4 != 0) {
      DES_ncbc_encrypt(local_48,output,param_4,schedule,(DES_cblock *)(param_1 + 0x20),
                       *(byte *)(param_1 + 0x6c) >> 1 & 1);
    }
  }
  else {
    (**(code **)(param_1 + 0x140))(param_3,param_2,param_4,schedule,param_1 + 0x20);
  }
  return 1;
}



undefined8 cipher_hw_des_ofb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_ofb64_encrypt(in,out,0x40000000,(DES_key_schedule *)(param_1 + 0xc0),
                        (DES_cblock *)(param_1 + 0x20),&local_44);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    param_3 = param_3 + lVar1;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = param_2 + lVar1;
  }
  if (param_4 != 0) {
    DES_ofb64_encrypt(param_3,param_2,param_4,(DES_key_schedule *)(param_1 + 0xc0),
                      (DES_cblock *)(param_1 + 0x20),&local_44);
  }
  *(int *)(param_1 + 0xa0) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



undefined8 cipher_hw_des_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_cfb64_encrypt(param_3,param_2,length,(DES_key_schedule *)(param_1 + 0xc0),
                        (DES_cblock *)(param_1 + 0x20),&local_44,*(byte *)(param_1 + 0x6c) >> 1 & 1)
      ;
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



undefined8 cipher_hw_des_cfb1_cipher(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 uStack_80;
  uchar local_42;
  byte local_41;
  long local_40;
  ulong uVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  local_41 = 0;
  uVar8 = 0x8000000;
  if (param_4 < 0x8000001) {
    uVar8 = param_4;
  }
  uVar7 = param_1;
  if ((param_4 != 0) && (uVar8 <= param_4)) {
    uVar9 = param_2;
    do {
      uVar2 = uVar8 << 3;
      uVar7 = uVar2;
      if (uVar2 != 0) {
        uVar10 = 0;
        do {
          local_42 = (uchar)(((int)(uint)*(byte *)(param_3 + (uVar10 >> 3)) >> (~(byte)uVar10 & 7))
                            << 7);
          DES_cfb_encrypt(&local_42,&local_41,1,1,(DES_key_schedule *)(param_1 + 0xc0),
                          (DES_cblock *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
          pbVar1 = (byte *)(uVar9 + (uVar10 >> 3));
          bVar3 = (byte)uVar10 & 7;
          uVar10 = uVar10 + 1;
          iVar5 = -0x81 >> bVar3;
          uVar6 = (int)(local_41 & 0x80) >> bVar3;
          uVar7 = (ulong)uVar6;
          uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 & *pbVar1) | uVar6;
          param_2 = (ulong)uVar6;
          *pbVar1 = (byte)uVar6;
          uVar4 = uStack_80;
        } while (uVar10 != uVar2);
      }
      param_4 = param_4 - uVar8;
      param_3 = param_3 + uVar8;
      uVar9 = uVar9 + uVar8;
      if (param_4 < uVar8) {
        uVar8 = param_4;
      }
    } while (param_4 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7,param_2,uVar4);
  }
  return 1;
}



undefined8 cipher_hw_des_cfb8_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_cfb_encrypt(in,out,8,0x40000000,(DES_key_schedule *)(param_1 + 0xc0),
                      (DES_cblock *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
      in = in + 0x40000000;
      out = puVar2;
    } while (puVar2 != param_2 + lVar1);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar1;
    param_2 = param_2 + lVar1;
  }
  if (local_50 != 0) {
    DES_cfb_encrypt(local_48,param_2,8,local_50,(DES_key_schedule *)(param_1 + 0xc0),
                    (DES_cblock *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
  }
  return 1;
}



undefined1 * ossl_prov_cipher_hw_des_ecb(void)

{
  return des_ecb;
}



undefined1 * ossl_prov_cipher_hw_des_cbc(void)

{
  return des_cbc;
}



undefined1 * ossl_prov_cipher_hw_des_ofb64(void)

{
  return des_ofb64;
}



undefined1 * ossl_prov_cipher_hw_des_cfb64(void)

{
  return des_cfb64;
}



undefined1 * ossl_prov_cipher_hw_des_cfb1(void)

{
  return des_cfb1;
}



undefined1 * ossl_prov_cipher_hw_des_cfb8(void)

{
  return des_cfb8;
}


