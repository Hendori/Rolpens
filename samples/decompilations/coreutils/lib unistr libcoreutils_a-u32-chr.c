
/* WARNING: Unknown calling convention */

uint32_t * u32_chr(uint32_t *s,size_t n,ucs4_t uc)

{
  if (n != 0) {
    do {
      if (*s == uc) {
        return s;
      }
      s = s + 1;
      n = n - 1;
    } while (n != 0);
  }
  return (uint32_t *)0x0;
}


