
/* WARNING: Unknown calling convention */

uint64_t rotl64(uint64_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0x3f;
  return x << bVar1 | x >> 0x40 - bVar1;
}



/* WARNING: Unknown calling convention */

uint64_t rotr64(uint64_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0x3f;
  return x >> bVar1 | x << 0x40 - bVar1;
}



/* WARNING: Unknown calling convention */

uint32_t rotl32(uint32_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0x1f;
  return x << bVar1 | x >> 0x20 - bVar1;
}



/* WARNING: Unknown calling convention */

uint32_t rotr32(uint32_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0x1f;
  return x >> bVar1 | x << 0x20 - bVar1;
}



ulong rotl_sz(ulong param_1,byte param_2)

{
  return param_1 << (param_2 & 0x3f) | param_1 >> 0x40 - (param_2 & 0x3f);
}



ulong rotr_sz(ulong param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x3f) | param_1 << 0x40 - (param_2 & 0x3f);
}



/* WARNING: Unknown calling convention */

uint16_t rotl16(uint16_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0xf;
  return x << bVar1 | x >> 0x10 - bVar1;
}



/* WARNING: Unknown calling convention */

uint16_t rotr16(uint16_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 0xf;
  return x >> bVar1 | x << 0x10 - bVar1;
}



/* WARNING: Unknown calling convention */

uint8_t rotl8(uint8_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 7;
  return x << bVar1 | x >> 8 - bVar1;
}



/* WARNING: Unknown calling convention */

uint8_t rotr8(uint8_t x,int n)

{
  byte bVar1;
  
  bVar1 = (byte)n & 7;
  return x >> bVar1 | x << 8 - bVar1;
}


