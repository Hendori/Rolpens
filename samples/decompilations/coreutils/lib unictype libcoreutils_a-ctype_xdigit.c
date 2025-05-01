
/* WARNING: Unknown calling convention */

_Bool uc_is_xdigit(ucs4_t uc)

{
  short sVar1;
  
  if ((uc >> 0x10 == 0) &&
     (sVar1 = *(short *)((long)u_is_xdigit.header + (ulong)((uc >> 9) + 4) * 2), -1 < sVar1)) {
    return (_Bool)((byte)((uint)u_is_xdigit.header[(uc >> 5 & 0xf) + (int)sVar1] >>
                         ((byte)uc & 0x1f)) & 1);
  }
  return false;
}


