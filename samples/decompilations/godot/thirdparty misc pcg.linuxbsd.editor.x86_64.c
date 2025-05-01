
/* pcg32_random_r(pcg32_random_t*) */

uint pcg32_random_r(pcg32_random_t *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)param_1;
  *(ulong *)param_1 = (*(ulong *)(param_1 + 8) | 1) + uVar1 * 0x5851f42d4c957f2d;
  bVar3 = (byte)(uVar1 >> 0x3b);
  uVar2 = (uint)((uVar1 >> 0x12 ^ uVar1) >> 0x1b);
  return uVar2 >> bVar3 | uVar2 << 0x20 - bVar3;
}



/* pcg32_srandom_r(pcg32_random_t*, unsigned long, unsigned long) */

void pcg32_srandom_r(pcg32_random_t *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_3 * 2 + 1;
  *(long *)(param_1 + 8) = lVar1;
  *(ulong *)param_1 = param_2 * 0x5851f42d4c957f2d + lVar1 * 0x5851f42d4c957f2e;
  return;
}



/* pcg32_boundedrand_r(pcg32_random_t*, unsigned int) */

ulong pcg32_boundedrand_r(pcg32_random_t *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)param_1;
  do {
    uVar4 = uVar3 * 0x5851f42d4c957f2d + (*(ulong *)(param_1 + 8) | 1);
    bVar2 = (byte)(uVar3 >> 0x3b);
    uVar1 = (uint)((uVar3 >> 0x12 ^ uVar3) >> 0x1b);
    uVar1 = uVar1 >> bVar2 | uVar1 << 0x20 - bVar2;
    uVar3 = uVar4;
  } while (uVar1 < -param_2 % param_2);
  *(ulong *)param_1 = uVar4;
  return (ulong)uVar1 % (ulong)param_2;
}


