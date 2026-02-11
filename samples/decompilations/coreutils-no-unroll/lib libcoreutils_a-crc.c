
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong crc32_update_no_xor(uint param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  uVar3 = (ulong)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pclmul_checked == '\0') {
    pclmul_checked = '\x01';
    pclmul_enabled = (~_DAT_0010300c & 0x80200) == 0;
  }
  if ((0xf < param_3) && (pclmul_enabled != '\0')) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = crc32_update_no_xor_pclmul(param_1,param_2,param_3);
      return uVar3;
    }
    goto LAB_001002ba;
  }
  uVar4 = 0;
  if ((param_3 & 0xfffffffffffffff8) != 0) {
    do {
      uVar1 = *(ulong *)(param_2 + uVar4);
      uVar4 = uVar4 + 8;
      uVar3 = uVar1 ^ uVar3;
      uVar3 = (ulong)(*(uint *)(crc32_sliceby8_table + (uVar1 >> 0x38) * 4) ^
                      *(uint *)(crc32_sliceby8_table + (uVar3 & 0xff) * 4 + 0x1c00) ^
                      *(uint *)(crc32_sliceby8_table + (uVar1 >> 0x30 & 0xff) * 4 + 0x400) ^
                      *(uint *)(crc32_sliceby8_table + (uVar1 >> 0x28 & 0xff) * 4 + 0x800) ^
                      *(uint *)(crc32_sliceby8_table + (uVar1 >> 0x20 & 0xff) * 4 + 0xc00) ^
                      *(uint *)(crc32_sliceby8_table + (uVar3 >> 0x18 & 0xff) * 4 + 0x1000) ^
                      *(uint *)(crc32_sliceby8_table + (uVar3 >> 0x10 & 0xff) * 4 + 0x1400) ^
                     *(uint *)(crc32_sliceby8_table + (uVar3 >> 8 & 0xff) * 4 + 0x1800));
    } while (uVar4 < (param_3 & 0xfffffffffffffff8));
  }
  if (uVar4 < param_3) {
    param_3 = param_3 - uVar4;
    __memcpy_chk(&local_28,param_2 + uVar4,param_3,8);
    local_28 = uVar3 ^ local_28;
    cVar2 = (char)param_3;
    if (param_3 < 4) {
      uVar5 = (uint)uVar3 >> (cVar2 * '\b' & 0x1fU) ^
              *(uint *)(crc32_sliceby8_table + (local_28 >> (cVar2 * '\b' - 8U & 0x3f) & 0xff) * 4);
      uVar3 = (ulong)uVar5;
      if (param_3 != 1) {
        bVar6 = cVar2 * '\b' - 0x10;
        uVar5 = uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                 (local_28 >> (bVar6 & 0x3f) & 0xff) * 4 + 0x400);
        uVar3 = (ulong)uVar5;
        if (param_3 == 3) goto LAB_001001a2;
      }
    }
    else {
      bVar6 = cVar2 * '\b' - 0x10;
      uVar5 = *(uint *)(crc32_sliceby8_table + (local_28 >> (bVar6 & 0x3f) & 0xff) * 4 + 0x400) ^
              *(uint *)(crc32_sliceby8_table + (local_28 >> (cVar2 * '\b' - 8U & 0x3f) & 0xff) * 4);
LAB_001001a2:
      uVar3 = (ulong)(uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                       (local_28 >> (bVar6 - 8 & 0x3f) & 0xff) * 4 + 0x800));
      if (param_3 != 3) {
        uVar5 = uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                 (local_28 >> (bVar6 - 8 & 0x3f) & 0xff) * 4 + 0x800) ^
                *(uint *)(crc32_sliceby8_table +
                         (local_28 >> (bVar6 - 0x10 & 0x3f) & 0xff) * 4 + 0xc00);
        uVar3 = (ulong)uVar5;
        if (param_3 != 4) {
          uVar5 = uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                   (local_28 >> (bVar6 - 0x18 & 0x3f) & 0xff) * 4 + 0x1000);
          uVar3 = (ulong)uVar5;
          if (param_3 != 5) {
            uVar5 = uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                     (local_28 >> (bVar6 - 0x20 & 0x3f) & 0xff) * 4 + 0x1400);
            uVar3 = (ulong)uVar5;
            if (param_3 != 6) {
              uVar5 = uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                       (local_28 >> (bVar6 - 0x28 & 0x3f) & 0xff) * 4 + 0x1800);
              uVar3 = (ulong)uVar5;
              if (param_3 != 7) {
                uVar3 = (ulong)(uVar5 ^ *(uint *)(crc32_sliceby8_table +
                                                 (local_28 >> (bVar6 - 0x30 & 0x3f) & 0xff) * 4 +
                                                 0x1c00));
              }
            }
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_001002ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void crc32_no_xor(undefined8 param_1,undefined8 param_2)

{
  crc32_update_no_xor(0,param_1,param_2);
  return;
}



uint crc32_update(uint param_1)

{
  uint uVar1;
  
  uVar1 = crc32_update_no_xor(~param_1);
  return ~uVar1;
}



uint crc32(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = crc32_update_no_xor(0xffffffff,param_1,param_2);
  return ~uVar1;
}


