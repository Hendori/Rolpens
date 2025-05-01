
/* WARNING: Unknown calling convention */

uint32_t * u32_pcpy(uint32_t *dest,uint32_t *src,size_t n)

{
  long lVar1;
  
  lVar1 = u32_cpy();
  return (uint32_t *)(lVar1 + n * 4);
}


