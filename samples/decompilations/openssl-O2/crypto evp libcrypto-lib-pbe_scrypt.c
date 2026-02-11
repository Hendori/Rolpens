
bool EVP_PBE_scrypt_ex(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                      undefined8 param_5,ulong param_6,ulong param_7,long param_8,undefined8 param_9
                      ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  uVar1 = param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = param_6;
  local_160 = param_5;
  if ((param_6 | param_7) >> 0x20 == 0) {
    if (param_1 == (undefined *)0x0) {
      param_2 = 0;
      param_1 = &_LC0;
    }
    if (param_3 == (undefined *)0x0) {
      param_4 = 0;
      param_3 = &_LC0;
    }
    if (param_8 == 0) {
      param_8 = 0x2000000;
    }
    uVar3 = EVP_KDF_fetch(param_11,"SCRYPT");
    lVar4 = EVP_KDF_CTX_new(uVar3);
    EVP_KDF_free(uVar3);
    if (lVar4 != 0) {
      OSSL_PARAM_construct_octet_string(&local_198,&_LC3,param_1,param_2);
      local_138 = local_178;
      local_158 = local_198;
      uStack_150 = uStack_190;
      local_148 = local_188;
      uStack_140 = uStack_180;
      OSSL_PARAM_construct_octet_string(&local_198,&_LC4,param_3,param_4);
      local_130 = local_198;
      uStack_128 = uStack_190;
      local_120 = local_188;
      uStack_118 = uStack_180;
      local_110 = local_178;
      OSSL_PARAM_construct_uint64(&local_198,&_LC5,&local_160);
      local_108 = local_198;
      uStack_100 = uStack_190;
      local_f8 = local_188;
      uStack_f0 = uStack_180;
      local_e8 = local_178;
      OSSL_PARAM_construct_uint64(&local_198,&_LC6,&local_168);
      local_e0 = local_198;
      uStack_d8 = uStack_190;
      local_d0 = local_188;
      uStack_c8 = uStack_180;
      local_c0 = local_178;
      OSSL_PARAM_construct_uint64(&local_198,&_LC7,&param_7);
      local_b8 = local_198;
      uStack_b0 = uStack_190;
      local_a8 = local_188;
      uStack_a0 = uStack_180;
      local_98 = local_178;
      OSSL_PARAM_construct_uint64(&local_198,"maxmem_bytes",&param_8);
      local_70 = local_178;
      local_90 = local_198;
      uStack_88 = uStack_190;
      local_80 = local_188;
      uStack_78 = uStack_180;
      OSSL_PARAM_construct_end(&local_198);
      local_68 = local_198;
      uStack_60 = uStack_190;
      local_48 = local_178;
      local_58 = local_188;
      uStack_50 = uStack_180;
      iVar2 = EVP_KDF_derive(lVar4,uVar1,param_10,&local_158);
      bVar5 = iVar2 == 1;
      EVP_KDF_CTX_free(lVar4);
      goto LAB_00100283;
    }
  }
  else {
    ERR_new(param_11,param_2,param_12);
    ERR_set_debug("crypto/evp/pbe_scrypt.c",0x32,"EVP_PBE_scrypt_ex");
    ERR_set_error(6,0xbb,0);
  }
  bVar5 = false;
LAB_00100283:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PBE_scrypt(void)

{
  EVP_PBE_scrypt_ex();
  return;
}


