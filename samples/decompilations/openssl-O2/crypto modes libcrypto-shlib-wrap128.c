
ulong crypto_128_unwrap_raw
                (undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                ulong param_5,code *param_6)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong __n;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_88;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = (ulong)((uint)param_5 & 7);
  if ((param_5 & 7) == 0) {
    if (param_5 - 0x18 < 0x7ffffff1) {
      __n = param_5 - 8;
      local_58 = *param_4;
      pvVar4 = memmove(param_3,param_4 + 1,__n);
      local_88 = 6;
      uVar5 = (__n >> 3) * 6;
      do {
        uVar6 = uVar5 - (param_5 - 9 >> 3);
        lVar1 = (param_5 - 0x10) + uVar5 * -8;
        do {
          uVar3 = local_58;
          bVar2 = local_58._7_1_ ^ (byte)uVar5;
          local_58 = CONCAT17(bVar2,(undefined7)local_58);
          if (0xff < uVar5) {
            local_58._4_2_ = SUB82(uVar3,4);
            local_58._6_1_ = SUB81(uVar3,6);
            local_58._4_2_ = local_58._4_2_ ^ CONCAT11((char)(uVar5 >> 0x10),(char)(uVar5 >> 0x18));
            local_58._0_4_ = (undefined4)uVar3;
            local_58 = CONCAT26(CONCAT11(bVar2,local_58._6_1_ ^ (byte)(uVar5 >> 8)),
                                CONCAT24(local_58._4_2_,(undefined4)local_58));
          }
          local_50 = *(undefined8 *)((long)pvVar4 + uVar5 * 8 + lVar1);
          (*param_6)(&local_58,&local_58,param_1);
          *(undefined8 *)((long)pvVar4 + uVar5 * 8 + lVar1) = local_50;
          bVar7 = uVar6 != uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar7);
        local_88 = local_88 + -1;
        uVar5 = uVar6 - 1;
      } while (local_88 != 0);
      *param_2 = local_58;
    }
  }
  else {
    __n = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __n;
}



ulong CRYPTO_128_wrap(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                     size_t param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (ulong)((uint)param_5 & 7);
  if ((param_5 & 7) == 0) {
    if (param_5 - 0x10 < 0x7ffffff1) {
      memmove(param_3 + 1,param_4,param_5);
      local_58 = 0xa6a6a6a6a6a6a6a6;
      if (param_2 != (undefined8 *)0x0) {
        local_58 = *param_2;
      }
      local_70 = 6;
      uVar3 = 1;
      do {
        uVar4 = uVar3 + (param_5 - 1 >> 3) + 1;
        uVar5 = uVar3;
        do {
          local_50 = param_3[(uVar5 + 1) - uVar3];
          (*param_6)(&local_58,&local_58,param_1);
          uVar2 = local_58;
          bVar1 = local_58._7_1_ ^ (byte)uVar5;
          local_58 = CONCAT17(bVar1,(undefined7)local_58);
          if (0xff < uVar5) {
            local_58._6_1_ = SUB81(uVar2,6);
            local_58._4_2_ = SUB82(uVar2,4);
            local_58._4_2_ = local_58._4_2_ ^ CONCAT11((char)(uVar5 >> 0x10),(char)(uVar5 >> 0x18));
            local_58._0_4_ = (undefined4)uVar2;
            local_58 = CONCAT26(CONCAT11(bVar1,local_58._6_1_ ^ (byte)(uVar5 >> 8)),
                                CONCAT24(local_58._4_2_,(undefined4)local_58));
          }
          param_3[(uVar5 + 1) - uVar3] = local_50;
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        local_70 = local_70 + -1;
        uVar3 = uVar4;
      } while (local_70 != 0);
      *param_3 = local_58;
      uVar3 = param_5 + 8;
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



size_t CRYPTO_128_unwrap(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  int iVar1;
  size_t len;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  len = crypto_128_unwrap_raw(param_1,auStack_38);
  if (len != 0) {
    if (param_2 == (undefined8 *)0x0) {
      param_2 = &default_iv;
    }
    iVar1 = CRYPTO_memcmp(auStack_38,param_2,8);
    if (iVar1 == 0) goto LAB_001003a9;
    OPENSSL_cleanse(param_3,len);
  }
  len = 0;
LAB_001003a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return len;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long CRYPTO_128_wrap_pad(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                        size_t param_5,code *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_48;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  if (param_5 - 1 < 0x7fffffff) {
    if (param_2 == (undefined4 *)0x0) {
      local_48 = 0xa65959a6;
    }
    else {
      local_48 = *param_2;
    }
    uVar4 = param_5 + 7 & 0xfffffffffffffff8;
    uVar1 = (uint)param_5;
    uStack_44 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar4 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT44(uStack_44,local_48);
      memset((void *)((long)param_3 + param_5 + 8),0,uVar4 - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar3 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)((long)param_3 + param_5),0,uVar4 - param_5);
      iVar2 = CRYPTO_128_wrap(param_1,&local_48,param_3,param_3,uVar4,param_6);
      lVar3 = (long)iVar2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CRYPTO_128_unwrap_pad
                (undefined8 param_1,void *param_2,undefined8 *param_3,undefined8 param_4,
                ulong param_5,code *param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_5 & 7) == 0) && (param_5 - 0x10 < 0x7ffffff0)) {
    if (param_5 == 0x10) {
      (*param_6)(param_4,&local_48,param_1);
      lVar3 = 8;
      local_50 = local_48;
      *param_3 = local_40;
      OPENSSL_cleanse(&local_48,0x10);
joined_r0x00100649:
      if (param_2 == (void *)0x0) {
        iVar1 = CRYPTO_memcmp(&local_50,&default_aiv,4);
      }
      else {
        iVar1 = CRYPTO_memcmp(&local_50,param_2,4);
      }
      if (iVar1 == 0) {
        local_50._4_4_ = (uint)((ulong)local_50 >> 0x20);
        uVar2 = (ulong)(local_50._4_4_ >> 0x18 | (local_50._4_4_ & 0xff0000) >> 8 |
                        (local_50._4_4_ & 0xff00) << 8 | local_50._4_4_ << 0x18);
        if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar2) &&
            (uVar2 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
           (iVar1 = CRYPTO_memcmp((void *)((long)param_3 + uVar2),&zeros_0,lVar3 - uVar2),
           iVar1 == 0)) goto LAB_00100605;
      }
    }
    else {
      lVar3 = crypto_128_unwrap_raw(param_1,&local_50);
      if (param_5 - 8 == lVar3) goto joined_r0x00100649;
    }
    OPENSSL_cleanse(param_3,param_5);
  }
  uVar2 = 0;
LAB_00100605:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


