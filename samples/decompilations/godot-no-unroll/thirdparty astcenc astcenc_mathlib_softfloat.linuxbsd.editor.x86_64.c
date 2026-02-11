
/* sf16_to_float(unsigned short) */

uint sf16_to_float(ushort param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 +
          *(int *)(
                  "##############################----------------------------------------------------------------------------------------------------------------7"
                  + (ulong)(param_1 >> 10) * 4 + 0x8f);
  if (((int)uVar2 < 0) && ((uVar2 & 0x3ff) != 0)) {
    uVar2 = uVar2 * 0x2000 | 0x400000;
    if ((param_1 & 0x7c00) == 0) {
      uVar2 = param_1 & 0x7fff | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      return (((param_1 & 0x7fff) << (0x1fU - (char)iVar1 & 0x1f)) >> 8) +
             (param_1 & 0x8000) * 0x10000 + (iVar1 + 0x66) * 0x800000;
    }
  }
  else {
    uVar2 = uVar2 * 0x2000;
  }
  return uVar2;
}



/* float_to_sf16(float) */

uint float_to_sf16(float param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(sf32_to_sf16(unsigned_int,roundmode)::tabx +
                   (ulong)((byte)(&sf32_to_sf16(unsigned_int,roundmode)::tab)[(uint)param_1 >> 0x17]
                          + 3) * 4);
  cVar2 = (char)((uint)param_1 >> 0x17);
  switch((&sf32_to_sf16(unsigned_int,roundmode)::tab)[(uint)param_1 >> 0x17]) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    return uVar1;
  case 3:
    return (uint)(ushort)(0x8000 - (short)((int)(uVar1 - (int)param_1) >> 0x1f));
  case 0x11:
  case 0x17:
    return uVar1 | ((uint)param_1 & 0x7fffff) + 0x7fffff + (1 << (0x7eU - cVar2 & 0x1f)) >>
                   (0x7eU - cVar2 & 0x1f);
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x18:
    return uVar1 | ((uint)param_1 & 0x7fffff) + 0x800000 >> (0x7eU - cVar2 & 0x1f);
  case 0x14:
  case 0x19:
    uVar3 = ((uint)param_1 & 0x7fffff) + 0x800000;
    uVar4 = 1 << (0x7eU - cVar2 & 0x1f);
    return uVar1 | ((int)(((uVar3 | 1) & uVar4) - 1) >> 0x1f) + (uVar4 >> 1) + uVar3 >>
                   (0x7eU - cVar2 & 0x1f);
  case 0x15:
  case 0x1a:
    return uVar1 | ((uint)param_1 & 0x7fffff) + 0x800000 +
                   ((uint)(1 << (0x7eU - cVar2 & 0x1f)) >> 1) >> (0x7eU - cVar2 & 0x1f);
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
    goto switchD_001000be_caseD_1b;
  case 0x1e:
  case 0x23:
    param_1 = (float)((int)param_1 + ((uint)param_1 >> 0xd & 1));
switchD_001000be_caseD_1b:
    return uVar1 + (int)param_1 >> 0xd;
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    return uVar1 + (int)param_1 >> 0xd | (int)param_1 - 1U >> 0xe & 0x200;
  default:
    return 0;
  }
}



/* float_to_sf16(float) [clone .cold] */

undefined8 float_to_sf16(float param_1)

{
  return 0;
}


