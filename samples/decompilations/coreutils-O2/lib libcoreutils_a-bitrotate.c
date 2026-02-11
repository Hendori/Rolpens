
ulong rotl64(ulong param_1,byte param_2)

{
  return param_1 << (param_2 & 0x3f) | param_1 >> 0x40 - (param_2 & 0x3f);
}



ulong rotr64(ulong param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x3f) | param_1 << 0x40 - (param_2 & 0x3f);
}



uint rotl32(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}



uint rotr32(uint param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << 0x20 - (param_2 & 0x1f);
}



ulong rotl_sz(ulong param_1,byte param_2)

{
  return param_1 << (param_2 & 0x3f) | param_1 >> 0x40 - (param_2 & 0x3f);
}



ulong rotr_sz(ulong param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x3f) | param_1 << 0x40 - (param_2 & 0x3f);
}



ushort rotl16(ushort param_1,byte param_2)

{
  return param_1 << (param_2 & 0xf) | param_1 >> 0x10 - (param_2 & 0xf);
}



ushort rotr16(ushort param_1,byte param_2)

{
  return param_1 >> (param_2 & 0xf) | param_1 << 0x10 - (param_2 & 0xf);
}



byte rotl8(byte param_1,byte param_2)

{
  return param_1 << (param_2 & 7) | param_1 >> 8 - (param_2 & 7);
}



byte rotr8(byte param_1,byte param_2)

{
  return param_1 >> (param_2 & 7) | param_1 << 8 - (param_2 & 7);
}


