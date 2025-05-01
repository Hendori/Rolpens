
/* WARNING: Unknown calling convention */

uint32_t * u32_set(uint32_t *s,ucs4_t uc,size_t n)

{
  size_t sVar1;
  int *piVar2;
  
  if (n != 0) {
    if ((0x101fff < uc - 0xe000) && (0xd7ff < uc)) {
      piVar2 = __errno_location();
      *piVar2 = 0x54;
      return (uint32_t *)0x0;
    }
    sVar1 = 0;
    if ((n & 1) != 0) {
      sVar1 = 1;
      *s = uc;
      if (n == 1) {
        return s;
      }
    }
    do {
      s[sVar1] = uc;
      s[sVar1 + 1] = uc;
      sVar1 = sVar1 + 2;
    } while (sVar1 != n);
  }
  return s;
}


