
bool c_isalnum(int param_1)

{
  bool bVar1;
  
  if (param_1 < 0x5b) {
    bVar1 = true;
    if (param_1 < 0x41) {
      return param_1 - 0x30U < 10;
    }
  }
  else {
    bVar1 = param_1 - 0x61U < 0x1a;
  }
  return bVar1;
}



bool c_isalpha(int param_1)

{
  if (param_1 < 0x5b) {
    return 0x40 < param_1;
  }
  return param_1 - 0x61U < 0x1a;
}



bool c_isascii(uint param_1)

{
  return param_1 < 0x80;
}



uint c_isblank(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 in_RAX;
  
  return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_1 == 0x20) |
         CONCAT31((int3)((uint)param_3 >> 8),param_1 == 9);
}



uint c_iscntrl(uint param_1)

{
  if ((int)param_1 < 0x20) {
    return ~param_1 >> 0x1f;
  }
  return (uint)(param_1 == 0x7f);
}



bool c_isdigit(int param_1)

{
  return param_1 - 0x30U < 10;
}



bool c_isgraph(int param_1)

{
  return param_1 - 0x21U < 0x5e;
}



bool c_islower(int param_1)

{
  return param_1 - 0x61U < 0x1a;
}



bool c_isprint(int param_1)

{
  return param_1 - 0x20U < 0x5f;
}



bool c_ispunct(int param_1)

{
  if (0x60 < param_1) {
    return param_1 - 0x7bU < 4;
  }
  if (param_1 < 0x5b) {
    if (param_1 < 0x30) {
      return 0x20 < param_1;
    }
    return param_1 - 0x3aU < 7;
  }
  return true;
}



bool c_isspace(int param_1)

{
  if (param_1 < 0xe) {
    return 8 < param_1;
  }
  return param_1 == 0x20;
}



bool c_isupper(int param_1)

{
  return param_1 - 0x41U < 0x1a;
}



undefined8 c_isxdigit(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 - 0x30U < 0x37) {
    uVar1 = CONCAT71(0x7e0000007e03,
                     (0x7e0000007e03ffU >> ((ulong)(param_1 - 0x30U) & 0x3f) & 1) != 0);
  }
  return uVar1;
}



int c_tolower(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



int c_toupper(int param_1)

{
  if (param_1 - 0x61U < 0x1a) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


