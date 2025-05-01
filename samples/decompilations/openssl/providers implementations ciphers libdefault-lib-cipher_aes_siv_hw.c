
bool aes_siv_dupctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((param_1[0xc] != 0) && (iVar2 = EVP_CIPHER_up_ref(), iVar2 == 0)) {
    return false;
  }
  if ((param_1[0xb] != 0) && (iVar2 = EVP_CIPHER_up_ref(), iVar2 == 0)) {
    EVP_CIPHER_free(param_1[0xc]);
    return false;
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  uVar1 = param_1[9];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  uVar1 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar1;
  uVar1 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  uVar1 = param_1[0xe];
  param_2[9] = 0;
  param_2[0xe] = uVar1;
  *(undefined1 (*) [16])(param_2 + 7) = (undefined1  [16])0x0;
  iVar2 = ossl_siv128_copy_ctx(param_2 + 3,param_1 + 3);
  return iVar2 != 0;
}



void aes_siv_cleanup(long param_1)

{
  ossl_siv128_cleanup(param_1 + 0x18);
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x60));
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x58));
  return;
}



void aes_siv_settag(long param_1)

{
  ossl_siv128_set_tag(param_1 + 0x18);
  return;
}



void aes_siv_setspeed(long param_1)

{
  ossl_siv128_speed(param_1 + 0x18);
  return;
}



bool aes_siv_cipher(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = param_1 + 0x18;
  if (param_3 == 0) {
    iVar2 = ossl_siv128_finish(lVar1);
    bVar3 = iVar2 == 0;
  }
  else if (param_2 == 0) {
    iVar2 = ossl_siv128_aad(lVar1,param_3,param_4);
    bVar3 = iVar2 == 1;
  }
  else {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      iVar2 = ossl_siv128_encrypt(lVar1,param_3,param_2);
      return 0 < iVar2;
    }
    iVar2 = ossl_siv128_decrypt();
    bVar3 = 0 < iVar2;
  }
  return bVar3;
}



undefined1  [16] aes_siv_initkey(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong extraout_RDX;
  ulong uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar3;
  
  param_3 = param_3 >> 1;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x60));
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x58));
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  if (param_3 == 0x18) {
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-192-CBC",0);
    pcVar5 = "AES-192-CTR";
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  else if (param_3 == 0x20) {
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-256-CBC",0);
    pcVar5 = "AES-256-CTR";
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  else {
    uVar4 = extraout_RDX;
    if (param_3 != 0x10) goto LAB_00100290;
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-128-CBC",0);
    pcVar5 = "AES-128-CTR";
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  auVar6 = EVP_CIPHER_fetch(uVar1,pcVar5,0);
  uVar4 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  *(long *)(param_1 + 0x58) = lVar3;
  if ((*(long *)(param_1 + 0x60) != 0) && (lVar3 != 0)) {
    auVar7._0_8_ = ossl_siv128_init(param_1 + 0x18,param_2,param_3 & 0xffffffff,
                                    *(long *)(param_1 + 0x60),lVar3,uVar1);
    auVar7._8_8_ = 0;
    return auVar7;
  }
LAB_00100290:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar4;
  return auVar6 << 0x40;
}



undefined1 * ossl_prov_cipher_hw_aes_siv(void)

{
  return aes_siv_hw;
}


