
int UTF8_getc(uchar *str,int len,ulong *val)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  if (len < 1) {
    return 0;
  }
  bVar1 = *str;
  uVar2 = (ulong)bVar1;
  iVar3 = 1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      if (len == 1) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)((bVar1 & 0x1f) << 6 | str[1] & 0x3f);
      if (uVar2 < 0x80) {
        return -4;
      }
      iVar3 = 2;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      if (len < 3) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[2] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)(str[2] & 0x3f) | (long)(int)((bVar1 & 0xf) << 0xc | (str[1] & 0x3f) << 6);
      if (uVar2 < 0x800) {
        return -4;
      }
      if (uVar2 - 0xd800 < 0x800) {
        return -2;
      }
      iVar3 = 3;
    }
    else {
      if ((bVar1 & 0xf8) != 0xf0) {
        return -2;
      }
      if (len < 4) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[2] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[3] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)((bVar1 & 7) << 0x12 | str[3] & 0x3f | (str[1] & 0x3f) << 0xc |
                     (str[2] & 0x3f) << 6);
      if (uVar2 < 0x10000) {
        return -4;
      }
      iVar3 = 4;
    }
  }
  *val = uVar2;
  return iVar3;
}



int UTF8_putc(uchar *str,int len,ulong value)

{
  byte bVar1;
  
  if (str != (uchar *)0x0) {
    if (0 < len) {
      bVar1 = (byte)value;
      if (value < 0x80) {
        *str = bVar1;
        return 1;
      }
      if (value < 0x800) {
        if (len != 1) {
          str[1] = bVar1 & 0x3f | 0x80;
          *str = (byte)(value >> 6) | 0xc0;
          return 2;
        }
      }
      else if (value < 0x10000) {
        if (value - 0xd800 < 0x800) {
          return -2;
        }
        if (2 < len) {
          *str = (byte)(value >> 0xc) | 0xe0;
          str[2] = bVar1 & 0x3f | 0x80;
          str[1] = (byte)(value >> 6) & 0x3f | 0x80;
          return 3;
        }
      }
      else {
        if (0x10ffff < value) {
          return -2;
        }
        if (3 < len) {
          *(uint *)str = ((((uint)value & 0x3f) << 8 | (uint)(value >> 6) & 0x3f) << 8 |
                         (uint)(value >> 0xc) & 0x3f) << 8 | (uint)(value >> 0x12) & 0xff | _LC0;
          return 4;
        }
      }
    }
    return -1;
  }
  if (value < 0x80) {
    return 1;
  }
  if (value < 0x800) {
    return 2;
  }
  if (value < 0x10000) {
    if (value - 0xd800 < 0x800) {
      return -2;
    }
    return 3;
  }
  if (0x10ffff < value) {
    return -2;
  }
  return 4;
}


