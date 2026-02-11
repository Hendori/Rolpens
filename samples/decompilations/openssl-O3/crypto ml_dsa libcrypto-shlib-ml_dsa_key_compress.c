
void ossl_ml_dsa_key_compress_power2_round(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_2 = param_1 >> 0xd;
  uVar5 = param_1 & 0x1fff;
  uVar1 = uVar5 + 0x7fc001;
  *param_3 = uVar5;
  uVar2 = *param_2;
  uVar3 = (int)(((param_1 & 0xffffe000) - param_1) + 0x1000 ^ uVar5 | uVar5 ^ 0x1000) >> 0x1f;
  uVar4 = (int)((uVar1 ^ 0x7fe001 | uVar5 - 0x2000 ^ 0x7fe001) ^ uVar1) >> 0x1f;
  *param_3 = uVar5 & ~uVar3 | (uVar1 & uVar4 | uVar5 - 0x2000 & ~uVar4) & uVar3;
  *param_2 = ~uVar3 & *param_2 | uVar2 + 1 & uVar3;
  return;
}



uint ossl_ml_dsa_key_compress_high_bits(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x7fU >> 7;
  if (param_2 != 0x3ff00) {
    uVar1 = (int)(uVar1 * 0x2c0b + 0x800000) >> 0x18;
    return ~((int)(0x2b - uVar1) >> 0x1f) & uVar1;
  }
  return (int)(uVar1 * 0x401 + 0x200000) >> 0x16 & 0xf;
}



void ossl_ml_dsa_key_compress_decompose(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = ossl_ml_dsa_key_compress_high_bits();
  *param_3 = iVar1;
  param_1 = param_1 + iVar1 * param_2 * -2;
  *param_4 = param_1 - (0x3ff000 - param_1 >> 0x1f & 0x7fe001U);
  return;
}



undefined4 ossl_ml_dsa_key_compress_low_bits(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_ml_dsa_key_compress_decompose(param_1,param_2,auStack_18,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_ml_dsa_key_compress_make_hint(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_4 - param_2;
  uVar2 = uVar5 + 0x7fe001;
  uVar1 = (int)((uVar2 ^ 0x7fe001 | uVar5 ^ 0x7fe001) ^ uVar2) >> 0x1f;
  uVar1 = uVar2 & uVar1 | uVar5 & ~uVar1;
  uVar5 = param_1 + uVar1;
  uVar2 = (int)((uVar5 ^ 0x7fe001 | uVar5 - 0x7fe001 ^ 0x7fe001) ^ uVar5) >> 0x1f;
  iVar3 = ossl_ml_dsa_key_compress_high_bits(uVar5 & uVar2 | uVar5 - 0x7fe001 & ~uVar2,param_3);
  iVar4 = ossl_ml_dsa_key_compress_high_bits(uVar1,param_3);
  return iVar3 != iVar4;
}



uint ossl_ml_dsa_key_compress_use_hint(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_ml_dsa_key_compress_decompose(param_2,param_3,&local_28,&local_24);
  uVar1 = local_28;
  if (param_1 != 0) {
    if (param_3 == 0x3ff00) {
      if (local_24 < 1) {
        uVar1 = local_28 - 1 & 0xf;
      }
      else {
        uVar1 = local_28 + 1 & 0xf;
      }
    }
    else if (local_24 < 1) {
      uVar1 = local_28 - 1;
      if (local_28 == 0) {
        uVar1 = 0x2b;
      }
    }
    else {
      uVar1 = 0;
      if (local_28 != 0x2b) {
        uVar1 = local_28 + 1;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


