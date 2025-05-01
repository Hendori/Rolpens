
/* WARNING: Unknown calling convention */

int u8_mbtoucr(ucs4_t *puc,uint8_t *s,size_t n)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *s;
  if (-1 < (char)bVar1) {
    *puc = (uint)bVar1;
    return 1;
  }
  if (0xc1 < bVar1) {
    if (bVar1 < 0xe0) {
      if (n < 2) goto LAB_0010018c;
      if ((byte)(s[1] + 0x80) < 0x40) {
        uVar3 = (bVar1 & 0x1f) << 6 | (uint)(byte)(s[1] + 0x80);
        iVar4 = 2;
        goto LAB_0010004a;
      }
    }
    else if (bVar1 < 0xf0) {
      if (n < 2) goto LAB_0010018c;
      bVar2 = s[1];
      if ((byte)(bVar2 + 0x80) < 0x40) {
        if (bVar1 == 0xe0) {
          if (0x9f < bVar2) goto LAB_0010012b;
        }
        else if ((bVar2 < 0xa0) || (bVar1 != 0xed)) {
LAB_0010012b:
          if (n == 2) {
LAB_0010018c:
            uVar3 = 0xfffd;
            iVar4 = -2;
            goto LAB_0010004a;
          }
          if ((byte)(s[2] + 0x80) < 0x40) {
            *puc = (bVar1 & 0xf) << 0xc | (uint)(byte)(bVar2 + 0x80) << 6 |
                   (uint)(byte)(s[2] + 0x80);
            return 3;
          }
        }
      }
    }
    else if (bVar1 < 0xf5) {
      if (n < 2) goto LAB_0010018c;
      bVar2 = s[1];
      if ((byte)(bVar2 + 0x80) < 0x40) {
        if (bVar1 == 0xf0) {
          if (0x8f < bVar2) goto LAB_00100092;
        }
        else if ((bVar1 != 0xf4) || (bVar2 < 0x90)) {
LAB_00100092:
          if (n == 2) goto LAB_0010018c;
          if ((byte)(s[2] + 0x80) < 0x40) {
            if (n == 3) goto LAB_0010018c;
            if ((byte)(s[3] + 0x80) < 0x40) {
              *puc = (bVar1 & 7) << 0x12 | (uint)(byte)(bVar2 + 0x80) << 0xc |
                     (uint)(byte)(s[3] + 0x80) | (uint)(byte)(s[2] + 0x80) << 6;
              return 4;
            }
          }
        }
      }
    }
  }
  uVar3 = 0xfffd;
  iVar4 = -1;
LAB_0010004a:
  *puc = uVar3;
  return iVar4;
}


