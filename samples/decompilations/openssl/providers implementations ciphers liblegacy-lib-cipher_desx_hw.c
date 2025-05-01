
void cipher_hw_desx_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x49; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = param_1 + 0x18;
  return;
}



undefined1  [16] cipher_hw_desx_cbc(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  uint enc;
  uchar *input;
  uchar *output;
  uchar *puVar3;
  undefined1 auVar4 [16];
  
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    input = param_3;
    output = param_2;
    do {
      puVar3 = output + 0x40000000;
      DES_xcbc_encrypt(input,output,0x40000000,(DES_key_schedule *)(param_1 + 0xc0),
                       (DES_cblock *)(param_1 + 0x20),(const_DES_cblock *)(param_1 + 0x140),
                       (const_DES_cblock *)(param_1 + 0x1c0),*(byte *)(param_1 + 0x6c) >> 1 & 1);
      input = input + 0x40000000;
      output = puVar3;
    } while (puVar3 != param_2 + lVar1);
    param_3 = param_3 + lVar1;
    param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    param_2 = param_2 + lVar1;
  }
  if (param_4 != 0) {
    enc = *(byte *)(param_1 + 0x6c) >> 1 & 1;
    uVar2 = (ulong)enc;
    DES_xcbc_encrypt(param_3,param_2,param_4,(DES_key_schedule *)(param_1 + 0xc0),
                     (DES_cblock *)(param_1 + 0x20),(const_DES_cblock *)(param_1 + 0x140),
                     (const_DES_cblock *)(param_1 + 0x1c0),enc);
    param_4 = uVar2;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = 1;
  return auVar4;
}



undefined8 cipher_hw_desx_cbc_initkey(long param_1,const_DES_cblock *param_2)

{
  DES_set_key_unchecked(param_2,(DES_key_schedule *)(param_1 + 0xc0));
  *(const_DES_cblock *)(param_1 + 0x140) = param_2[1];
  *(const_DES_cblock *)(param_1 + 0x1c0) = param_2[2];
  return 1;
}



undefined1 * ossl_prov_cipher_hw_tdes_desx_cbc(void)

{
  return desx_cbc;
}


