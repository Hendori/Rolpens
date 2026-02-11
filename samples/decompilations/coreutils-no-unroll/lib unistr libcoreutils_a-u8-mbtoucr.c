
undefined8 u8_mbtoucr(uint *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  
  bVar1 = *param_2;
  if (-1 < (char)bVar1) {
    *param_1 = (uint)bVar1;
    return 1;
  }
  if (0xc1 < bVar1) {
    if (bVar1 < 0xe0) {
      if (param_3 < 2) goto LAB_0010018c;
      if ((byte)(param_2[1] + 0x80) < 0x40) {
        uVar3 = (bVar1 & 0x1f) << 6 | (uint)(byte)(param_2[1] + 0x80);
        uVar4 = 2;
        goto LAB_0010004a;
      }
    }
    else if (bVar1 < 0xf0) {
      if (param_3 < 2) goto LAB_0010018c;
      bVar2 = param_2[1];
      if ((byte)(bVar2 + 0x80) < 0x40) {
        if (bVar1 == 0xe0) {
          if (0x9f < bVar2) goto LAB_0010012b;
        }
        else if ((bVar2 < 0xa0) || (bVar1 != 0xed)) {
LAB_0010012b:
          if (param_3 == 2) {
LAB_0010018c:
            uVar3 = 0xfffd;
            uVar4 = 0xfffffffe;
            goto LAB_0010004a;
          }
          if ((byte)(param_2[2] + 0x80) < 0x40) {
            *param_1 = (bVar1 & 0xf) << 0xc | (uint)(byte)(bVar2 + 0x80) << 6 |
                       (uint)(byte)(param_2[2] + 0x80);
            return 3;
          }
        }
      }
    }
    else if (bVar1 < 0xf5) {
      if (param_3 < 2) goto LAB_0010018c;
      bVar2 = param_2[1];
      if ((byte)(bVar2 + 0x80) < 0x40) {
        if (bVar1 == 0xf0) {
          if (0x8f < bVar2) goto LAB_00100092;
        }
        else if ((bVar1 != 0xf4) || (bVar2 < 0x90)) {
LAB_00100092:
          if (param_3 == 2) goto LAB_0010018c;
          if ((byte)(param_2[2] + 0x80) < 0x40) {
            if (param_3 == 3) goto LAB_0010018c;
            if ((byte)(param_2[3] + 0x80) < 0x40) {
              *param_1 = (bVar1 & 7) << 0x12 | (uint)(byte)(bVar2 + 0x80) << 0xc |
                         (uint)(byte)(param_2[3] + 0x80) | (uint)(byte)(param_2[2] + 0x80) << 6;
              return 4;
            }
          }
        }
      }
    }
  }
  uVar3 = 0xfffd;
  uVar4 = 0xffffffff;
LAB_0010004a:
  *param_1 = uVar3;
  return uVar4;
}


