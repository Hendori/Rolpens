
/* WARNING: Unknown calling convention */

uint32_t * u32_strcat(uint32_t *dest,uint32_t *src)

{
  uint32_t uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = u32_strlen();
  uVar1 = *src;
  dest[lVar3] = uVar1;
  if (uVar1 != 0) {
    lVar4 = 4;
    do {
      iVar2 = *(int *)((long)src + lVar4);
      *(int *)((long)(dest + lVar3) + lVar4) = iVar2;
      lVar4 = lVar4 + 4;
    } while (iVar2 != 0);
  }
  return dest;
}


