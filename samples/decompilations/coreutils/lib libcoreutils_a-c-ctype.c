
/* WARNING: Unknown calling convention */

_Bool c_isalnum(int c)

{
  bool bVar1;
  
  if (c < 0x5b) {
    bVar1 = true;
    if (c < 0x41) {
      return c - 0x30U < 10;
    }
  }
  else {
    bVar1 = c - 0x61U < 0x1a;
  }
  return bVar1;
}



/* WARNING: Unknown calling convention */

_Bool c_isalpha(int c)

{
  if (c < 0x5b) {
    return 0x40 < c;
  }
  return c - 0x61U < 0x1a;
}



/* WARNING: Unknown calling convention */

_Bool c_isascii(int c)

{
  return (uint)c < 0x80;
}



/* WARNING: Unknown calling convention */

_Bool c_isblank(int c)

{
  return c == 0x20 || c == 9;
}



/* WARNING: Unknown calling convention */

_Bool c_iscntrl(int c)

{
  if (c < 0x20) {
    return (_Bool)((byte)~(byte)((uint)c >> 0x18) >> 7);
  }
  return c == 0x7f;
}



/* WARNING: Unknown calling convention */

_Bool c_isdigit(int c)

{
  return c - 0x30U < 10;
}



/* WARNING: Unknown calling convention */

_Bool c_isgraph(int c)

{
  return c - 0x21U < 0x5e;
}



/* WARNING: Unknown calling convention */

_Bool c_islower(int c)

{
  return c - 0x61U < 0x1a;
}



/* WARNING: Unknown calling convention */

_Bool c_isprint(int c)

{
  return c - 0x20U < 0x5f;
}



/* WARNING: Unknown calling convention */

_Bool c_ispunct(int c)

{
  if (0x60 < c) {
    return c - 0x7bU < 4;
  }
  if (c < 0x5b) {
    if (c < 0x30) {
      return 0x20 < c;
    }
    return c - 0x3aU < 7;
  }
  return true;
}



/* WARNING: Unknown calling convention */

_Bool c_isspace(int c)

{
  if (c < 0xe) {
    return 8 < c;
  }
  return c == 0x20;
}



/* WARNING: Unknown calling convention */

_Bool c_isupper(int c)

{
  return c - 0x41U < 0x1a;
}



/* WARNING: Unknown calling convention */

_Bool c_isxdigit(int c)

{
  return c - 0x30U < 0x37 && (0x7e0000007e03ffU >> ((ulong)(c - 0x30U) & 0x3f) & 1) != 0;
}



/* WARNING: Unknown calling convention */

int c_tolower(int c)

{
  if (c - 0x41U < 0x1a) {
    c = c + 0x20;
  }
  return c;
}



/* WARNING: Unknown calling convention */

int c_toupper(int c)

{
  if (c - 0x61U < 0x1a) {
    c = c + -0x20;
  }
  return c;
}


