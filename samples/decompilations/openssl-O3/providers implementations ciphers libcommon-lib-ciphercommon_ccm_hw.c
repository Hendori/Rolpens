
bool ossl_ccm_generic_setiv(long param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_ccm128_setiv(param_1 + 0x50);
  return iVar1 == 0;
}



undefined8 ossl_ccm_generic_setaad(long param_1)

{
  CRYPTO_ccm128_aad(param_1 + 0x50);
  return 1;
}



bool ossl_ccm_generic_gettag(long param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_ccm128_tag(param_1 + 0x50);
  return lVar1 != 0;
}



bool ossl_ccm_generic_auth_encrypt(long param_1)

{
  int iVar1;
  long lVar2;
  long in_R8;
  undefined8 in_R9;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = CRYPTO_ccm128_encrypt(param_1 + 0x50);
  }
  else {
    iVar1 = CRYPTO_ccm128_encrypt_ccm64();
  }
  if ((in_R8 != 0) && (iVar1 == 0)) {
    lVar2 = CRYPTO_ccm128_tag(param_1 + 0x50,in_R8,in_R9);
    return lVar2 != 0;
  }
  return iVar1 == 0;
}



undefined8
ossl_ccm_generic_auth_decrypt
          (long param_1,undefined8 param_2,void *param_3,size_t param_4,void *param_5,size_t param_6
          )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = CRYPTO_ccm128_decrypt(param_1 + 0x50,param_2,param_3);
  }
  else {
    iVar1 = CRYPTO_ccm128_decrypt_ccm64();
  }
  if (((iVar1 == 0) && (lVar2 = CRYPTO_ccm128_tag(param_1 + 0x50,auStack_58,param_6), lVar2 != 0))
     && (iVar1 = CRYPTO_memcmp(auStack_58,param_5,param_6), iVar1 == 0)) {
    uVar3 = 1;
  }
  else {
    OPENSSL_cleanse(param_3,param_4);
    uVar3 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


