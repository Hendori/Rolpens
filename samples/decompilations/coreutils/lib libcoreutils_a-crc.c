
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint32_t crc32_update_no_xor(uint32_t crc,char *buf,size_t len)

{
  uint32_t uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint64_t local_buf;
  long local_20;
  
  uVar2 = (ulong)crc;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (!pclmul_checked) {
    pclmul_checked = true;
    pclmul_enabled = (~_DAT_0010300c & 0x80200) == 0;
  }
  if ((len < 0x10) || (pclmul_enabled == false)) {
    uVar5 = 0;
    if ((len & 0xfffffffffffffff8) != 0) {
      do {
        uVar7 = *(ulong *)(buf + uVar5);
        uVar5 = uVar5 + 8;
        uVar2 = uVar7 ^ uVar2;
        uVar2 = (ulong)(crc32_sliceby8_table[0][uVar7 >> 0x38] ^
                        crc32_sliceby8_table[7][uVar2 & 0xff] ^
                        crc32_sliceby8_table[1][uVar7 >> 0x30 & 0xff] ^
                        crc32_sliceby8_table[2][uVar7 >> 0x28 & 0xff] ^
                        crc32_sliceby8_table[3][uVar7 >> 0x20 & 0xff] ^
                        crc32_sliceby8_table[4][uVar2 >> 0x18 & 0xff] ^
                        crc32_sliceby8_table[5][uVar2 >> 0x10 & 0xff] ^
                       crc32_sliceby8_table[6][uVar2 >> 8 & 0xff]);
      } while (uVar5 < (len & 0xfffffffffffffff8));
    }
    uVar6 = (uint)uVar2;
    if (uVar5 < len) {
      uVar7 = len - uVar5;
      __memcpy_chk(&local_buf,buf + uVar5,uVar7,8);
      uVar6 = uVar6 >> ((char)uVar7 * '\b' & 0x1fU);
      if (3 < uVar7) {
        uVar6 = 0;
      }
      iVar4 = (int)uVar7 * 8;
      uVar5 = 0;
      do {
        iVar4 = iVar4 + -8;
        uVar3 = uVar5 + 1;
        uVar6 = uVar6 ^ crc32_sliceby8_table[uVar5]
                        [(uVar2 ^ local_buf) >> ((byte)iVar4 & 0x3f) & 0xff];
        uVar5 = uVar3;
      } while (uVar7 != uVar3);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = crc32_update_no_xor_pclmul(uVar2,buf,len);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

uint32_t crc32_no_xor(char *buf,size_t len)

{
  uint32_t uVar1;
  
  uVar1 = crc32_update_no_xor(0,buf,len);
  return uVar1;
}



/* WARNING: Unknown calling convention */

uint32_t crc32_update(uint32_t crc,char *buf,size_t len)

{
  uint32_t uVar1;
  
  uVar1 = crc32_update_no_xor(~crc,buf,len);
  return ~uVar1;
}



/* WARNING: Unknown calling convention */

uint32_t crc32(char *buf,size_t len)

{
  uint32_t uVar1;
  
  uVar1 = crc32_update_no_xor(0xffffffff,buf,len);
  return ~uVar1;
}


