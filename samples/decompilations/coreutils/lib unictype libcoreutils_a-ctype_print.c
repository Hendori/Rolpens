
/* WARNING: Unknown calling convention */

_Bool uc_is_print(ucs4_t uc)

{
  short sVar1;
  
  if (((uc < 0x110000) && (-1 < u_is_print.header[(uc >> 0x10) + 1])) &&
     (sVar1 = *(short *)((long)u_is_print.header +
                        (ulong)(u_is_print.header[(uc >> 0x10) + 1] + (uc >> 9 & 0x7f)) * 2),
     -1 < sVar1)) {
    return (_Bool)((byte)((uint)u_is_print.header[(uc >> 5 & 0xf) + (int)sVar1] >> ((byte)uc & 0x1f)
                         ) & 1);
  }
  return false;
}


