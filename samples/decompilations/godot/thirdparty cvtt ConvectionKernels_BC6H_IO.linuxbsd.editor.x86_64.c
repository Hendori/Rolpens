
/* cvtt::BC6H_IO::WriteMode0(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode0
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = uVar2 >> 1 & 8 | param_15 & 0x10 | param_2 & 3 | (param_10 & 0x10) >> 2 |
             (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | (param_4 & 0x3ff) << 5;
  param_1[1] = (param_9 & 0x1f) << 0xd | (param_13 & 0x1f) << 0x17 | (param_11 & 0x10) << 4 |
               (param_11 & 0xf) << 0x13 | (uint)param_5 * 8 & 0xf8 | (uVar1 & 0x380) >> 7 |
               (param_15 & 1) << 0x12 | (param_15 & 2) << 0x1b | _param_14 << 0x1d |
               (param_10 & 0xf) << 9;
  param_1[2] = (param_7 & 0x1f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x3e | (param_15 & 4) << 4 | (param_15 & 8) << 9 |
               uVar2 >> 3 & 1;
  return;
}



/* cvtt::BC6H_IO::WriteMode1(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode1
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  
  uVar1 = param_14;
  _param_14 = (uint)param_14;
  *param_1 = (param_8 & 0x7f) << 0xf | (uint)param_12 << 0x19 | (uVar1 & 0x10) << 10 |
             (uVar1 & 0x20) << 0x11 | (param_15 & 3) << 0xc | (param_15 & 4) << 0x15 |
             (param_4 & 0x7f) << 5 | (param_10 & 0x10) << 0x14 |
             (param_10 & 0x20) >> 3 | param_2 & 3 | (param_11 & 0x30) >> 1;
  param_1[1] = _param_14 << 0x1d |
               (param_9 & 0x3f) << 0xd | (param_13 & 0x3f) << 0x17 | (uint)param_5 * 8 & 0x1f8 |
               (uint)(ushort)(param_15 >> 2 & 4 | param_15 >> 3 & 1 | param_15 >> 4 & 2) |
               (param_11 & 0xf) << 0x13 | (param_10 & 0xf) << 9;
  param_1[2] = (param_7 & 0x3f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x7e | (uVar1 & 8) >> 3;
  return;
}



/* cvtt::BC6H_IO::WriteMode2(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode2
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[1] = param_4 >> 2 & 0x100 |
               (param_8 & 0x400) << 7 |
               (param_13 & 0xf) << 0x17 | _param_14 << 0x1d | (param_11 & 0xf) << 0x13 |
               (param_15 & 1) << 0x12 | (param_15 & 2) << 0x1b | (param_9 & 0xf) << 0xd |
               (param_10 & 0xf) << 9 | (uint)param_5 * 8 & 0xf8 | (uVar1 & 0x380) >> 7 |
               (uVar1 & 0x400) << 0x11;
  param_1[2] = (param_7 & 0x1f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x3e | (uVar2 & 8) >> 3 | (param_15 & 4) << 4 |
               (param_15 & 8) << 9;
  return;
}



/* cvtt::BC6H_IO::WriteMode3(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode3
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  uVar3 = (uint)param_15;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[1] = param_4 >> 3 & 0x80 |
               (param_8 & 0x400) << 8 |
               (uVar3 & 2) << 0x1b | _param_14 << 0x1d | (param_13 & 0xf) << 0x17 |
               (param_9 & 0x1f) << 0xd | (param_10 & 0xf) << 9 | (param_11 & 0x10) << 4 |
               (param_11 & 0xf) << 0x13 | (uint)param_5 * 8 & 0x78 | (uVar1 & 0x380) >> 7 |
               (uVar1 & 0x400) << 0x11;
  param_1[2] = (param_10 & 0x10) << 7 |
               (uVar3 & 8) << 9 |
               (param_7 & 0xf) << 7 | (param_3 & 0x1f) << 0xd | (uint)param_6 + (uint)param_6 & 0x1e
               | (uVar2 & 8) >> 3 | (param_15 & 1) << 5 | (uVar3 & 4) << 4;
  return;
}



/* cvtt::BC6H_IO::WriteMode4(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode4
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[1] = param_4 >> 3 & 0x80 |
               (param_8 & 0x400) << 7 |
               (param_11 & 0xf) << 0x13 | (param_13 & 0x1f) << 0x17 | (param_15 & 1) << 0x12 |
               (param_9 & 0xf) << 0xd | (param_10 & 0xf) << 9 | _param_14 << 0x1d |
               (uVar2 & 0x10) << 4 | (uint)param_5 * 8 & 0x78 | (uVar1 & 0x380) >> 7 |
               (uVar1 & 0x400) << 0x12;
  param_1[2] = (uVar2 & 8) >> 3 |
               (param_7 & 0xf) << 7 | (param_3 & 0x1f) << 0xd | (uint)param_6 + (uint)param_6 & 0x1e
               | (param_15 & 6) << 4 | (param_15 & 0x10) << 7 | (param_15 & 8) << 9;
  return;
}



/* cvtt::BC6H_IO::WriteMode5(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode5
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_10 & 0x10) << 0x14 | _param_12 << 0x19 | (param_8 & 0x1ff) << 0xf |
             (uVar2 & 0x10) << 10 | param_2 & 0x1f | (param_4 & 0x1ff) << 5;
  param_1[1] = (param_9 & 0x1f) << 0xd | (param_13 & 0x1f) << 0x17 | (param_11 & 0x10) << 4 |
               (param_11 & 0xf) << 0x13 | (uint)param_5 * 8 & 0xf8 | (param_15 & 1) << 0x12 |
               (param_15 & 2) << 0x1b | (uint)(uVar1 >> 7 & 3 | param_15 >> 2 & 4) |
               (param_10 & 0xf) << 9 | _param_14 << 0x1d;
  param_1[2] = (param_7 & 0x1f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x3e | (param_15 & 4) << 4 | (param_15 & 8) << 9 |
               (uVar2 & 8) >> 3;
  return;
}



/* cvtt::BC6H_IO::WriteMode6(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode6
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_10 & 0x10) << 0x14 | _param_12 << 0x19 | (param_15 & 4) << 0x15 |
             (param_8 & 0xff) << 0xf | (uVar2 & 0x10) << 10 | (param_11 & 0x10) << 9 |
             param_2 & 0x1f | (param_4 & 0xff) << 5;
  param_1[1] = (param_9 & 0x1f) << 0xd | (param_13 & 0x1f) << 0x17 | (uint)param_5 * 8 & 0x1f8 |
               (param_10 & 0xf) << 9 | (param_15 & 1) << 0x12 | (param_15 & 2) << 0x1b |
               (uint)(uVar1 >> 7 & 1 | param_15 >> 2 & 6) | _param_14 << 0x1d |
               (param_11 & 0xf) << 0x13;
  param_1[2] = (param_7 & 0x3f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x7e | (uVar2 & 8) >> 3;
  return;
}



/* cvtt::BC6H_IO::WriteMode7(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode7
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0xff) << 0xf |
             (param_10 & 0x20) << 0x12 | (param_10 & 0x10) << 0x14 | _param_12 << 0x19 |
             (uVar2 & 0x10) << 10 | (param_15 & 1) << 0xd | param_2 & 0x1f | (param_4 & 0xff) << 5;
  param_1[1] = (param_9 & 0x3f) << 0xd | (param_13 & 0x1f) << 0x17 | (uint)param_5 * 8 & 0xf8 |
               (param_11 & 0x10) << 4 | (param_11 & 0xf) << 0x13 | (param_10 & 0xf) << 9 |
               _param_14 << 0x1d | (param_15 & 2) << 0x1b |
               (uint)(ushort)(uVar1 >> 7 & 1 | param_11 >> 4 & 2 | param_15 >> 2 & 4);
  param_1[2] = (param_7 & 0x1f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x3e | (uVar2 & 8) >> 3 | (param_15 & 4) << 4 |
               (param_15 & 8) << 9;
  return;
}



/* cvtt::BC6H_IO::WriteMode8(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode8
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_14;
  uVar1 = param_12;
  _param_14 = (uint)param_14;
  _param_12 = (uint)param_12;
  *param_1 = (param_10 & 0x10) << 0x14 | _param_12 << 0x19 | (param_8 & 0xff) << 0xf |
             (uVar2 & 0x10) << 10 | (uVar2 & 0x20) << 0x12 | (param_15 & 2) << 0xc | param_2 & 0x1f
             | (param_4 & 0xff) << 5;
  param_1[1] = (param_9 & 0x1f) << 0xd | (param_13 & 0x3f) << 0x17 | (param_11 & 0x10) << 4 |
               (param_11 & 0xf) << 0x13 | (uint)param_5 * 8 & 0xf8 | (param_10 & 0xf) << 9 |
               _param_14 << 0x1d | (param_15 & 1) << 0x12 |
               (uint)(ushort)(uVar1 >> 7 & 1 | param_15 >> 2 & 4 | param_15 >> 4 & 2);
  param_1[2] = (param_7 & 0x1f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x3e | (uVar2 & 8) >> 3 | (param_15 & 4) << 4 |
               (param_15 & 8) << 9;
  return;
}



/* cvtt::BC6H_IO::WriteMode9(unsigned int*, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned
   short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode9
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  
  uVar1 = param_14;
  _param_14 = (uint)param_14;
  *param_1 = (param_10 & 0x20) << 0x10 | (param_10 & 0x10) << 0x14 | (param_12 & 0x3f) << 0x19 |
             (param_8 & 0x3f) << 0xf | (uVar1 & 0x10) << 10 | (uVar1 & 0x20) << 0x11 |
             (param_15 & 3) << 0xc | (param_15 & 4) << 0x15 | (param_11 & 0x10) << 7 |
             (param_11 & 0x20) << 0x1a | param_2 & 0x1f | (param_4 & 0x3f) << 5;
  param_1[1] = (param_11 & 0xf) << 0x13 |
               (param_9 & 0x3f) << 0xd | (param_13 & 0x3f) << 0x17 | (uint)param_5 * 8 & 0x1f8 |
               (param_10 & 0xf) << 9 | _param_14 << 0x1d |
               (uint)(ushort)(param_15 >> 2 & 4 | param_15 >> 3 & 1 | param_15 >> 4 & 2);
  param_1[2] = (param_7 & 0x3f) << 7 | (param_3 & 0x1f) << 0xd |
               (uint)param_6 + (uint)param_6 & 0x7e | (uVar1 & 8) >> 3;
  return;
}



/* cvtt::BC6H_IO::WriteMode10(unsigned int*, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode10
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = param_13;
  uVar1 = param_12;
  _param_13 = (uint)param_13;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[2] = (uVar2 & 0x200) >> 9;
  param_1[1] = (param_9 & 0x3ff) << 0xd | _param_13 << 0x17 | (uint)param_5 * 8 & 0x1ff8 |
               (uVar1 & 0x380) >> 7;
  return;
}



/* cvtt::BC6H_IO::WriteMode11(unsigned int*, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode11
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  
  uVar1 = param_12;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[2] = uVar1 >> 10 & 1;
  param_1[1] = (param_9 & 0x1ff) << 0xd | (uint)param_13 << 0x17 | (uint)param_5 * 8 & 0xff8 |
               uVar1 >> 7 & 7 | (param_8 & 0x400) << 0xc | (param_4 & 0x400) << 2;
  return;
}



/* cvtt::BC6H_IO::WriteMode12(unsigned int*, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode12
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  
  uVar1 = param_12;
  _param_12 = (uint)param_12;
  *param_1 = (param_8 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[1] = (param_9 & 0xff) << 0xd | (param_13 & 0xff) << 0x17 | (uint)param_5 * 8 & 0x7f8 |
               uVar1 >> 7 & 7 | (uVar1 & 0x800) << 0x14 | param_4 & 0x800 | (param_8 & 0x800) << 10
               | (param_8 & 0x400) << 0xc | (param_4 & 0x400) << 2;
  param_1[2] = uVar1 >> 10 & 1;
  return;
}



/* cvtt::BC6H_IO::WriteMode13(unsigned int*, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short,
   unsigned short, unsigned short, unsigned short, unsigned short, unsigned short) */

void cvtt::BC6H_IO::WriteMode13
               (uint *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
               ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
               ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = param_12;
  _param_12 = (uint)param_12;
  uVar2 = (uint)param_8;
  *param_1 = (uVar2 & 0x3ff) << 0xf | _param_12 << 0x19 | param_2 & 0x1f | (param_4 & 0x3ff) << 5;
  param_1[1] = (param_9 & 0xf) << 0xd | (param_13 & 0xf) << 0x17 | (uint)param_5 * 8 & 0x78 |
               uVar1 >> 7 & 7 | (uVar1 & 0x8000) << 0xc | (uVar1 & 0x4000) << 0xe |
               (uVar1 & 0x2000) << 0x10 | (uVar1 & 0x1000) << 0x12 | (uVar1 & 0x800) << 0x14 |
               param_4 & 0x800 | uVar2 * 4 & 0x20000 | (param_8 & 0x4000) << 4 |
               (uVar2 & 0x2000) << 6 | (uVar2 & 0x1000) << 8 | (uVar2 & 0x800) << 10 |
               (uVar2 & 0x400) << 0xc | (byte)(param_4 >> 8) & 0x80 | param_4 >> 6 & 0x100 |
               param_4 >> 4 & 0x200 | param_4 >> 2 & 0x400 | (param_4 & 0x400) << 2;
  param_1[2] = uVar1 >> 10 & 1;
  return;
}



/* cvtt::BC6H_IO::ReadMode0(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode0
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar4 = (ushort)uVar2;
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar2 >> 5) & 0x3ff;
  *param_4 = (ushort)(uVar1 >> 3) & 0x1f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x1f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x1f;
  *param_7 = (ushort)(uVar2 >> 0xf) & 0x3ff;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0x1f;
  *param_9 = uVar4 * 4 & 0x10 | (ushort)(uVar1 >> 9) & 0xf;
  *param_10 = (ushort)(uVar1 >> 4) & 0x10 | uVar5 >> 3 & 0xf;
  *param_11 = (ushort)(uVar1 << 7) & 0x380 | (ushort)(uVar2 >> 0x19);
  *param_12 = uVar5 >> 7 & 0x1f;
  *param_13 = uVar4 * 2 & 0x10 | (short)uVar3 * 8 & 8U | uVar5 >> 0xd;
  *param_14 = (ushort)(uVar3 >> 9) & 8 |
              uVar5 >> 2 & 1 | uVar5 >> 0xb & 2 | uVar4 & 0x10 | (ushort)(uVar3 >> 4) & 4;
  return;
}



/* cvtt::BC6H_IO::ReadMode1(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode1
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar2 = param_1[1];
  uVar4 = (ushort)(uVar2 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar1 >> 5) & 0x7f;
  *param_4 = (ushort)(uVar2 >> 3) & 0x3f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x3f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x3f;
  *param_7 = (ushort)(uVar1 >> 0xf) & 0x7f;
  *param_8 = (ushort)(uVar2 >> 0xd) & 0x3f;
  *param_9 = (ushort)(uVar2 >> 9) & 0xf | (short)uVar1 * 8 & 0x20U | uVar5 >> 4 & 0x10;
  *param_10 = (short)uVar1 * 2 & 0x30U | uVar4 >> 3 & 0xf;
  *param_11 = uVar5 >> 9;
  *param_12 = uVar4 >> 7 & 0x3f;
  *param_13 = (ushort)((uVar3 & 1) << 3) |
              (ushort)(uVar1 >> 10) & 0x10 | uVar5 >> 1 & 0x20 | uVar4 >> 0xd;
  *param_14 = (ushort)((uVar2 & 4) << 2) |
              (ushort)((uVar2 & 2) << 4) |
              (short)uVar2 * 8 & 8U | (ushort)(uVar1 >> 0xc) & 3 | uVar5 >> 5 & 4;
  return;
}



/* cvtt::BC6H_IO::ReadMode2(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode2
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = (ushort)(uVar1 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar2 >> 5) & 0x3ff | (short)uVar1 * 4 & 0x400U;
  *param_4 = (ushort)(uVar1 >> 3) & 0x1f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x1f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x1f;
  *param_7 = (ushort)(uVar2 >> 0xf) & 0x3ff | (ushort)(uVar1 >> 7) & 0x400;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0xf;
  *param_9 = (ushort)(uVar1 >> 9) & 0xf;
  *param_10 = uVar4 >> 3 & 0xf;
  *param_11 = (ushort)(uVar1 << 7) & 0x380 | uVar4 >> 1 & 0x400 | (ushort)(uVar2 >> 0x19);
  *param_12 = uVar4 >> 7 & 0xf;
  *param_13 = uVar4 >> 0xd | (short)uVar3 * 8 & 8U;
  *param_14 = (ushort)(uVar3 >> 9) & 8 |
              (ushort)(uVar3 >> 4) & 4 | uVar4 >> 2 & 1 | uVar4 >> 0xb & 2;
  return;
}



/* cvtt::BC6H_IO::ReadMode3(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode3
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  *param_2 = (ushort)(uVar2 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar3 >> 5) & 0x3ff | (short)uVar1 * 8 & 0x400U;
  *param_4 = (ushort)(uVar1 >> 3) & 0xf;
  *param_5 = (ushort)(uVar2 >> 1) & 0xf;
  uVar4 = (ushort)(uVar2 >> 7);
  *param_6 = uVar4 & 0xf;
  *param_7 = (ushort)(uVar3 >> 0xf) & 0x3ff | (ushort)(uVar1 >> 8) & 0x400;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0x1f;
  *param_9 = (ushort)(uVar1 >> 9) & 0xf | uVar4 & 0x10;
  *param_10 = (ushort)(uVar1 >> 4) & 0x10 | uVar5 >> 3 & 0xf;
  *param_11 = (ushort)(uVar1 << 7) & 0x380 | uVar5 >> 1 & 0x400 | (ushort)(uVar3 >> 0x19);
  *param_12 = uVar5 >> 7 & 0xf;
  *param_13 = uVar5 >> 0xd | (short)uVar2 * 8 & 8U;
  *param_14 = (ushort)(uVar2 >> 9) & 8 |
              (ushort)(uVar2 >> 4) & 4 | uVar5 >> 0xb & 2 | (ushort)(uVar2 >> 5) & 1;
  return;
}



/* cvtt::BC6H_IO::ReadMode4(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode4
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar4 = (ushort)(uVar2 >> 7);
  *param_2 = (ushort)(uVar2 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar3 >> 5) & 0x3ff | (short)uVar1 * 8 & 0x400U;
  *param_4 = (ushort)(uVar1 >> 3) & 0xf;
  *param_5 = (ushort)(uVar2 >> 1) & 0xf;
  *param_6 = uVar4 & 0xf;
  *param_7 = (ushort)(uVar3 >> 0xf) & 0x3ff | (ushort)(uVar1 >> 7) & 0x400;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0xf;
  *param_9 = (ushort)(uVar1 >> 9) & 0xf;
  *param_10 = uVar5 >> 3 & 0xf;
  *param_11 = (ushort)(uVar1 << 7) & 0x380 | uVar5 >> 2 & 0x400 | (ushort)(uVar3 >> 0x19);
  *param_12 = uVar5 >> 7 & 0x1f;
  *param_13 = uVar5 >> 0xd | (ushort)(uVar1 >> 4) & 0x10 | (short)uVar2 * 8 & 8U;
  *param_14 = (ushort)(uVar2 >> 9) & 8 | uVar4 & 0x10 | (ushort)(uVar2 >> 4) & 6 | uVar5 >> 2 & 1;
  return;
}



/* cvtt::BC6H_IO::ReadMode5(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode5
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar2 >> 5) & 0x1ff;
  *param_4 = (ushort)(uVar1 >> 3) & 0x1f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x1f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x1f;
  *param_7 = (ushort)(uVar2 >> 0xf) & 0x1ff;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0x1f;
  uVar4 = (ushort)(uVar2 >> 0x10);
  *param_9 = uVar4 >> 4 & 0x10 | (ushort)(uVar1 >> 9) & 0xf;
  *param_10 = (ushort)(uVar1 >> 4) & 0x10 | uVar5 >> 3 & 0xf;
  *param_11 = (ushort)(uVar1 << 7) & 0x180 | uVar4 >> 9;
  *param_12 = uVar5 >> 7 & 0x1f;
  *param_13 = (ushort)(uVar2 >> 10) & 0x10 | (short)uVar3 * 8 & 8U | uVar5 >> 0xd;
  *param_14 = (ushort)(uVar3 >> 9) & 8 |
              (ushort)(uVar3 >> 4) & 4 |
              uVar5 >> 0xb & 2 | (short)uVar1 * 4 & 0x10U | uVar5 >> 2 & 1;
  return;
}



/* cvtt::BC6H_IO::ReadMode6(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode6
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar4 = (ushort)(uVar2 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar1 >> 5) & 0xff;
  *param_4 = (ushort)(uVar2 >> 3) & 0x3f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x3f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x3f;
  *param_7 = (ushort)(uVar1 >> 0xf) & 0xff;
  *param_8 = (ushort)(uVar2 >> 0xd) & 0x1f;
  *param_9 = uVar5 >> 4 & 0x10 | (ushort)(uVar2 >> 9) & 0xf;
  *param_10 = (ushort)(uVar1 >> 9) & 0x10 | uVar4 >> 3 & 0xf;
  *param_11 = (ushort)((uVar2 & 1) << 7) | uVar5 >> 9;
  *param_12 = uVar4 >> 7 & 0x1f;
  *param_13 = (ushort)(uVar1 >> 10) & 0x10 | (ushort)((uVar3 & 1) << 3) | uVar4 >> 0xd;
  *param_14 = uVar4 >> 0xb & 2 | uVar4 >> 2 & 1 | uVar5 >> 5 & 4 | (short)uVar2 * 4 & 0x18U;
  return;
}



/* cvtt::BC6H_IO::ReadMode7(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode7
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *param_1;
  uVar4 = (ushort)(uVar1 >> 0x10);
  uVar2 = param_1[1];
  uVar5 = (ushort)(uVar2 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar1 >> 5) & 0xff;
  *param_4 = (ushort)(uVar2 >> 3) & 0x1f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x1f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x1f;
  *param_7 = (ushort)(uVar1 >> 0xf) & 0xff;
  *param_8 = (ushort)(uVar2 >> 0xd) & 0x3f;
  *param_9 = (ushort)(uVar2 >> 9) & 0xf | uVar4 >> 2 & 0x20 | uVar4 >> 4 & 0x10;
  *param_10 = uVar5 >> 3 & 0xf | (ushort)((uVar2 & 2) << 4) | (ushort)(uVar2 >> 4) & 0x10;
  *param_11 = (ushort)((uVar2 & 1) << 7) | uVar4 >> 9;
  *param_12 = uVar5 >> 7 & 0x1f;
  *param_13 = (ushort)(uVar1 >> 10) & 0x10 | (short)uVar3 * 8 & 8U | uVar5 >> 0xd;
  *param_14 = (ushort)(uVar3 >> 9) & 8 |
              (ushort)(uVar3 >> 4) & 4 |
              uVar5 >> 0xb & 2 | (ushort)(uVar1 >> 0xd) & 1 | (short)uVar2 * 4 & 0x10U;
  return;
}



/* cvtt::BC6H_IO::ReadMode8(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode8
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *param_1;
  uVar4 = (ushort)(uVar1 >> 0x10);
  uVar2 = param_1[1];
  uVar5 = (ushort)(uVar2 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar1 >> 5) & 0xff;
  *param_4 = (ushort)(uVar2 >> 3) & 0x1f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x1f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x1f;
  *param_7 = (ushort)(uVar1 >> 0xf) & 0xff;
  *param_8 = (ushort)(uVar2 >> 0xd) & 0x1f;
  *param_9 = uVar4 >> 4 & 0x10 | (ushort)(uVar2 >> 9) & 0xf;
  *param_10 = (ushort)(uVar2 >> 4) & 0x10 | uVar5 >> 3 & 0xf;
  *param_11 = uVar4 >> 9 | (ushort)((uVar2 & 1) << 7);
  *param_12 = uVar5 >> 7 & 0x3f;
  *param_13 = (short)uVar3 * 8 & 8U |
              (ushort)(uVar1 >> 10) & 0x10 | uVar4 >> 2 & 0x20 | uVar5 >> 0xd;
  *param_14 = (ushort)(uVar3 >> 9) & 8 |
              (ushort)(uVar3 >> 4) & 4 |
              uVar5 >> 2 & 1 |
              (short)uVar2 * 4 & 0x10U | (ushort)(uVar1 >> 0xc) & 2 | (ushort)((uVar2 & 2) << 4);
  return;
}



/* cvtt::BC6H_IO::ReadMode9(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode9
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *param_1;
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar2 = param_1[1];
  uVar4 = (ushort)(uVar2 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = (ushort)(uVar3 >> 0xd) & 0x1f;
  *param_3 = (ushort)(uVar1 >> 5) & 0x3f;
  *param_4 = (ushort)(uVar2 >> 3) & 0x3f;
  *param_5 = (ushort)(uVar3 >> 1) & 0x3f;
  *param_6 = (ushort)(uVar3 >> 7) & 0x3f;
  *param_7 = (ushort)(uVar1 >> 0xf) & 0x3f;
  *param_8 = (ushort)(uVar2 >> 0xd) & 0x3f;
  *param_9 = (ushort)(uVar2 >> 9) & 0xf | uVar5 & 0x20 | uVar5 >> 4 & 0x10;
  *param_10 = uVar4 >> 3 & 0xf | (ushort)(uVar1 >> 7) & 0x10 | uVar5 >> 10 & 0x20;
  *param_11 = uVar5 >> 9 & 0x3f;
  *param_12 = uVar4 >> 7 & 0x3f;
  *param_13 = (ushort)((uVar3 & 1) << 3) |
              (ushort)(uVar1 >> 10) & 0x10 | uVar5 >> 1 & 0x20 | uVar4 >> 0xd;
  *param_14 = (ushort)((uVar2 & 4) << 2) |
              (ushort)((uVar2 & 2) << 4) |
              (short)uVar2 * 8 & 8U | (ushort)(uVar1 >> 0xc) & 3 | uVar5 >> 5 & 4;
  return;
}



/* cvtt::BC6H_IO::ReadMode10(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode10
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  *param_2 = 0;
  *param_3 = (ushort)(uVar3 >> 5) & 0x3ff;
  *param_4 = (ushort)(uVar1 >> 3) & 0x3ff;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = (ushort)(uVar3 >> 0xf) & 0x3ff;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0x3ff;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = (ushort)(uVar1 << 7) & 0x380 | (ushort)(uVar3 >> 0x19);
  *param_12 = (ushort)(uVar2 << 9) & 0x200 | (ushort)(uVar1 >> 0x17);
  *param_13 = 0;
  *param_14 = 0;
  return;
}



/* cvtt::BC6H_IO::ReadMode11(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode11
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  *param_2 = 0;
  *param_3 = (ushort)(uVar3 >> 5) & 0x3ff | (ushort)(uVar1 >> 2) & 0x400;
  *param_4 = (ushort)(uVar1 >> 3) & 0x1ff;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = (ushort)(uVar3 >> 0xf) & 0x3ff | (ushort)(uVar1 >> 0xc) & 0x400;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0x1ff;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = (ushort)(uVar2 << 10) & 0x400 | (ushort)(uVar1 << 7) & 0x380 | (ushort)(uVar3 >> 0x19)
  ;
  *param_12 = (ushort)(uVar1 >> 0x17);
  *param_13 = 0;
  *param_14 = 0;
  return;
}



/* cvtt::BC6H_IO::ReadMode12(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode12
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = (ushort)(uVar1 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = 0;
  *param_3 = (ushort)(uVar2 >> 5) & 0x3ff | (ushort)(uVar1 >> 2) & 0x400 | (ushort)uVar1 & 0x800;
  *param_4 = (ushort)(uVar1 >> 3) & 0xff;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = (ushort)(uVar1 >> 0xc) & 0x400 |
             (ushort)(uVar2 >> 0xf) & 0x3ff | (ushort)(uVar1 >> 10) & 0x800;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0xff;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = (ushort)(uVar3 << 10) & 0x400 |
              (ushort)(uVar1 << 7) & 0x380 | uVar4 >> 4 & 0x800 | (ushort)(uVar2 >> 0x19);
  *param_12 = uVar4 >> 7 & 0xff;
  *param_13 = 0;
  *param_14 = 0;
  return;
}



/* cvtt::BC6H_IO::ReadMode13(unsigned int const*, unsigned short&, unsigned short&, unsigned short&,
   unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&, unsigned
   short&, unsigned short&, unsigned short&, unsigned short&, unsigned short&) */

void cvtt::BC6H_IO::ReadMode13
               (uint *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,ushort *param_12,ushort *param_13,ushort *param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = (ushort)(uVar1 >> 2);
  uVar6 = (ushort)(uVar1 >> 0xc);
  uVar5 = (ushort)(uVar1 >> 0x10);
  uVar3 = param_1[2];
  *param_2 = 0;
  *param_3 = uVar4 & 0x400 |
             (ushort)uVar1 * 4 & 0x1000 |
             (ushort)(uVar2 >> 5) & 0x3ff | (ushort)(uVar1 << 8) & 0x8000 | (ushort)uVar1 & 0x800 |
             (ushort)(uVar1 << 6) & 0x4000 | (ushort)(uVar1 << 4) & 0x2000;
  *param_4 = (ushort)(uVar1 >> 3) & 0xf;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = uVar6 & 0x400 |
             (ushort)(uVar1 >> 10) & 0x800 |
             (ushort)(uVar1 >> 8) & 0x1000 |
             (ushort)(uVar1 >> 6) & 0x2000 |
             (ushort)(uVar1 >> 4) & 0x4000 | (ushort)(uVar2 >> 0xf) & 0x3ff | uVar4 & 0x8000;
  *param_8 = (ushort)(uVar1 >> 0xd) & 0xf;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = (ushort)(uVar3 << 10) & 0x400 |
              uVar5 >> 4 & 0x800 |
              uVar5 >> 2 & 0x1000 |
              uVar5 & 0x2000 |
              (ushort)(uVar1 << 7) & 0x380 | uVar6 & 0x8000 | (ushort)(uVar2 >> 0x19) |
              (ushort)(uVar1 >> 0xe) & 0x4000;
  *param_12 = uVar5 >> 7 & 0xf;
  *param_13 = 0;
  *param_14 = 0;
  return;
}


