
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong crc32_update_no_xor(uint param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  uVar1 = (ulong)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pclmul_checked == '\0') {
    pclmul_checked = '\x01';
    pclmul_enabled = (~_DAT_0010300c & 0x80200) == 0;
  }
  if ((param_3 < 0x10) || (pclmul_enabled == '\0')) {
    uVar4 = 0;
    if ((param_3 & 0xfffffffffffffff8) != 0) {
      do {
        uVar2 = *(ulong *)(param_2 + uVar4);
        uVar4 = uVar4 + 8;
        uVar1 = uVar2 ^ uVar1;
        uVar1 = (ulong)(*(uint *)(crc32_sliceby8_table + (uVar2 >> 0x38) * 4) ^
                        *(uint *)(crc32_sliceby8_table + (uVar1 & 0xff) * 4 + 0x1c00) ^
                        *(uint *)(crc32_sliceby8_table + (uVar2 >> 0x30 & 0xff) * 4 + 0x400) ^
                        *(uint *)(crc32_sliceby8_table + (uVar2 >> 0x28 & 0xff) * 4 + 0x800) ^
                        *(uint *)(crc32_sliceby8_table + (uVar2 >> 0x20 & 0xff) * 4 + 0xc00) ^
                        *(uint *)(crc32_sliceby8_table + (uVar1 >> 0x18 & 0xff) * 4 + 0x1000) ^
                        *(uint *)(crc32_sliceby8_table + (uVar1 >> 0x10 & 0xff) * 4 + 0x1400) ^
                       *(uint *)(crc32_sliceby8_table + (uVar1 >> 8 & 0xff) * 4 + 0x1800));
      } while (uVar4 < (param_3 & 0xfffffffffffffff8));
    }
    if (uVar4 < param_3) {
      param_3 = param_3 - uVar4;
      __memcpy_chk(&local_28,param_2 + uVar4,param_3,8);
      local_28 = uVar1 ^ local_28;
      uVar1 = (ulong)((uint)uVar1 >> ((char)param_3 * '\b' & 0x1fU));
      if (3 < param_3) {
        uVar1 = 0;
      }
      iVar3 = (int)param_3 * 8;
      uVar4 = 0;
      do {
        iVar3 = iVar3 + -8;
        uVar2 = uVar4 + 1;
        uVar1 = (ulong)((uint)uVar1 ^
                       *(uint *)(crc32_sliceby8_table +
                                (uVar4 * 0x100 + (local_28 >> ((byte)iVar3 & 0x3f) & 0xff)) * 4));
        uVar4 = uVar2;
      } while (param_3 != uVar2);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar1;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = crc32_update_no_xor_pclmul(param_1,param_2,param_3);
    return uVar1;
  }
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


