
undefined8 wslay_byteswap64(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_1;
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  return CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                  uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
}


