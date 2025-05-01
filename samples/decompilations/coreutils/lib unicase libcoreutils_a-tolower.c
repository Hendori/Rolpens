
/* WARNING: Unknown calling convention */

ucs4_t uc_tolower(ucs4_t uc)

{
  if (((uc < 0x20000) && (-1 < u_mapping.level1[uc >> 0x10])) &&
     (-1 < u_mapping.level2[u_mapping.level1[uc >> 0x10] + (uc >> 7 & 0x1ff)])) {
    return uc + u_mapping.level3
                [(int)u_mapping.level2[u_mapping.level1[uc >> 0x10] + (uc >> 7 & 0x1ff)] +
                 (uc & 0x7f)];
  }
  return uc;
}


