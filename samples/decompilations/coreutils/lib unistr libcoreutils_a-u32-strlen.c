
/* WARNING: Unknown calling convention */

size_t u32_strlen(uint32_t *s)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  
  puVar2 = s;
  if (*s == 0) {
    return 0;
  }
  do {
    puVar1 = puVar2 + 1;
    puVar2 = puVar2 + 1;
  } while (*puVar1 != 0);
  return (long)puVar2 - (long)s >> 2;
}


