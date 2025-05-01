
void ossl_cipher_hw_tdes_copyctx(undefined8 *param_1,undefined8 *param_2)

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



undefined8 ossl_cipher_hw_tdes_ede3_initkey(long param_1,const_DES_cblock *param_2)

{
  *(undefined8 *)(param_1 + 0x240) = 0;
  DES_set_key_unchecked(param_2,(DES_key_schedule *)(param_1 + 0xc0));
  DES_set_key_unchecked(param_2 + 1,(DES_key_schedule *)(param_1 + 0x140));
  DES_set_key_unchecked(param_2 + 2,(DES_key_schedule *)(param_1 + 0x1c0));
  return 1;
}



undefined8 ossl_cipher_hw_tdes_cbc(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  uchar *output;
  uchar *input;
  uchar *puVar2;
  
  if (*(code **)(param_1 + 0x240) == (code *)0x0) {
    output = param_2;
    if (0x3fffffff < param_4) {
      lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
      output = param_2 + lVar1;
      input = param_3;
      do {
        puVar2 = param_2 + 0x40000000;
        DES_ede3_cbc_encrypt
                  (input,param_2,0x40000000,(DES_key_schedule *)(param_1 + 0xc0),
                   (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                   (DES_cblock *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
        input = input + 0x40000000;
        param_2 = puVar2;
      } while (puVar2 != output);
      param_3 = param_3 + lVar1;
      param_4 = (ulong)((uint)param_4 & 0x3fffffff);
    }
    if (param_4 != 0) {
      DES_ede3_cbc_encrypt
                (param_3,output,param_4,(DES_key_schedule *)(param_1 + 0xc0),
                 (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                 (DES_cblock *)(param_1 + 0x20),*(byte *)(param_1 + 0x6c) >> 1 & 1);
    }
  }
  else {
    (**(code **)(param_1 + 0x240))(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20);
  }
  return 1;
}



undefined8
ossl_cipher_hw_tdes_ecb(long param_1,DES_cblock *param_2,const_DES_cblock *param_3,ulong param_4)

{
  uchar *input;
  uchar *puVar1;
  
  if (7 < param_4) {
    input = *param_3;
    do {
      puVar1 = input + 8;
      DES_ecb3_encrypt((const_DES_cblock *)input,param_2,(DES_key_schedule *)(param_1 + 0xc0),
                       (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
                       *(byte *)(param_1 + 0x6c) >> 1 & 1);
      input = puVar1;
      param_2 = param_2 + 1;
    } while (puVar1 != param_3[1] + (param_4 - 8 & 0xfffffffffffffff8));
    return 1;
  }
  return 1;
}



undefined1 * ossl_prov_cipher_hw_tdes_ede3_ecb(void)

{
  return ede3_ecb;
}



undefined1 * ossl_prov_cipher_hw_tdes_ede3_cbc(void)

{
  return ede3_cbc;
}


