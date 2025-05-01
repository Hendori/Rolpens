
/* WARNING: Unknown calling convention */

u64 u64rol(u64 x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0x3f;
  return x << bVar1 | x >> 0x40 - bVar1;
}


