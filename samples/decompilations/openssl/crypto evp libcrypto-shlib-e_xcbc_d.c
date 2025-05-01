
undefined8 desx_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  uint enc;
  int enc_00;
  long lVar1;
  long lVar2;
  long lVar3;
  DES_key_schedule *pDVar4;
  uchar *output;
  uchar *puVar5;
  uchar *input;
  uchar *local_60;
  ulong local_50;
  uchar *local_48;
  
  local_60 = param_2;
  local_50 = param_4;
  local_48 = param_3;
  if (0x3fffffff < param_4) {
    lVar1 = (param_4 - 0x40000000 & 0xffffffffc0000000) + 0x40000000;
    local_60 = param_2 + lVar1;
    output = param_2;
    input = param_3;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1,param_2);
      param_2 = (uchar *)(ulong)enc;
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar5 = output + 0x40000000;
      DES_xcbc_encrypt(input,output,0x40000000,pDVar4,(DES_cblock *)(param_1 + 0x28),
                       (const_DES_cblock *)(lVar3 + 0x80),(const_DES_cblock *)(lVar2 + 0x88),enc);
      output = puVar5;
      input = input + 0x40000000;
    } while (puVar5 != local_60);
    local_50 = param_4 & 0x3fffffff;
    local_48 = param_3 + lVar1;
  }
  if (local_50 != 0) {
    enc_00 = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_xcbc_encrypt(local_48,local_60,local_50,pDVar4,(DES_cblock *)(param_1 + 0x28),
                     (const_DES_cblock *)(lVar2 + 0x80),(const_DES_cblock *)(lVar1 + 0x88),enc_00);
  }
  return 1;
}



undefined8 desx_cbc_init_key(undefined8 param_1,const_DES_cblock *param_2)

{
  DES_key_schedule *schedule;
  long lVar1;
  
  schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data();
  DES_set_key_unchecked(param_2,schedule);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(const_DES_cblock *)(lVar1 + 0x80) = param_2[1];
  lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(const_DES_cblock *)(lVar1 + 0x88) = param_2[2];
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_desx_cbc(void)

{
  return (EVP_CIPHER *)d_xcbc_cipher;
}


