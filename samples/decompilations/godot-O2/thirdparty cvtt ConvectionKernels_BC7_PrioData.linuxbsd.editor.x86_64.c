
/* cvtt::Tables::BC7Prio::UnpackMode(unsigned short) */

ushort cvtt::Tables::BC7Prio::UnpackMode(ushort param_1)

{
  return param_1 >> 6 & 7;
}



/* cvtt::Tables::BC7Prio::UnpackSeedPointCount(unsigned short) */

short cvtt::Tables::BC7Prio::UnpackSeedPointCount(ushort param_1)

{
  return (param_1 >> 9 & 3) + 1;
}



/* cvtt::Tables::BC7Prio::UnpackPartition(unsigned short) */

ushort cvtt::Tables::BC7Prio::UnpackPartition(ushort param_1)

{
  return param_1 & 0x3f;
}



/* cvtt::Tables::BC7Prio::UnpackRotation(unsigned short) */

ushort cvtt::Tables::BC7Prio::UnpackRotation(ushort param_1)

{
  return param_1 & 3;
}



/* cvtt::Tables::BC7Prio::UnpackIndexSelector(unsigned short) */

ushort cvtt::Tables::BC7Prio::UnpackIndexSelector(ushort param_1)

{
  return param_1 >> 2 & 1;
}


