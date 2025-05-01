
/* WARNING: Unknown calling convention */

uint32_t * u32_cpy(uint32_t *dest,uint32_t *src,size_t n)

{
  uint32_t *puVar1;
  
  if (n == 0) {
    return dest;
  }
  puVar1 = (uint32_t *)memcpy(dest,src,n << 2);
  return puVar1;
}


