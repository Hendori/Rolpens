
void ossl_quic_vlint_encode_n(ulong *param_1,ulong param_2,int param_3)

{
  if (param_3 == 1) {
    *(char *)param_1 = (char)param_2;
    return;
  }
  if (param_3 != 2) {
    if (param_3 != 4) {
      *param_1 = (((((((param_2 & 0xff) << 8 | param_2 >> 8 & 0xff) << 8 | param_2 >> 0x10 & 0xff)
                     << 8 | param_2 >> 0x18 & 0xff) << 8 | param_2 >> 0x20 & 0xff) << 8 |
                  param_2 >> 0x28 & 0xff) << 8 | param_2 >> 0x30 & 0xff) << 8 |
                 (ulong)((byte)(param_2 >> 0x38) | 0xc0);
      return;
    }
    *(uint *)param_1 =
         ((((uint)param_2 & 0xff) << 8 | (uint)(param_2 >> 8) & 0xff) << 8 |
         (uint)(param_2 >> 0x10) & 0xff) << 8 | (uint)(param_2 >> 0x18) & 0x3f | 0x80;
    return;
  }
  *(char *)((long)param_1 + 1) = (char)param_2;
  *(byte *)param_1 = (byte)(param_2 >> 8) & 0x3f | 0x40;
  return;
}



void ossl_quic_vlint_encode(ulong *param_1,ulong param_2)

{
  byte bVar1;
  uint7 uVar2;
  
  uVar2 = (uint7)(param_2 >> 8);
  bVar1 = (byte)param_2;
  if (param_2 < 0x40) {
    *(byte *)param_1 = bVar1;
    return;
  }
  if (0x3fff < param_2) {
    if (0x3fffffff < param_2) {
      *param_1 = (((((((param_2 & 0xff) << 8 | (ulong)uVar2 & 0xff) << 8 |
                     (((ulong)uVar2 & 0xff00) << 8) >> 0x10) << 8 |
                    (((ulong)uVar2 & 0xff0000) << 8) >> 0x18) << 8 |
                   (((ulong)uVar2 & 0xff000000) << 8) >> 0x20) << 8 |
                  (((ulong)uVar2 & 0xff00000000) << 8) >> 0x28) << 8 |
                 (((ulong)uVar2 & 0xff0000000000) << 8) >> 0x30) << 8 |
                 (ulong)((byte)(param_2 >> 0x38) | 0xc0);
      return;
    }
    *(uint *)param_1 =
         (((uint)bVar1 << 8 | (uint)(param_2 >> 8) & 0xff) << 8 | (uint)(param_2 >> 0x10) & 0xff) <<
         8 | ((uint)(param_2 >> 0x18) | 0xffffff80) & 0xff;
    return;
  }
  *(byte *)((long)param_1 + 1) = bVar1;
  *(byte *)param_1 = (byte)(param_2 >> 8) | 0x40;
  return;
}



ulong ossl_quic_vlint_decode_unchecked(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  bVar2 = bVar1 >> 6;
  if (bVar2 != 0) {
    uVar3 = (ulong)param_1[1];
    if (bVar2 == 1) {
      return (bVar1 & 0x3f) << 8 | uVar3;
    }
    if (bVar2 == 2) {
      return (ulong)((bVar1 & 0x3f) << 0x18) |
             uVar3 << 0x10 | (ulong)param_1[2] << 8 | (ulong)param_1[3];
    }
    uVar4 = (uVar4 & 0x3f) << 0x38 |
            uVar3 << 0x30 | (ulong)param_1[2] << 0x28 | (ulong)param_1[7] |
            (ulong)param_1[3] << 0x20 | (ulong)param_1[4] << 0x18 | (ulong)param_1[5] << 0x10 |
            (ulong)param_1[6] << 8;
  }
  return uVar4;
}



uint ossl_quic_vlint_decode(byte *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 != 0) {
    bVar1 = *param_1;
    uVar3 = (ulong)bVar1;
    bVar2 = bVar1 >> 6;
    uVar5 = 0;
    if ((uint)(1 << bVar2) <= param_2) {
      if (bVar2 != 0) {
        uVar4 = (ulong)param_1[1];
        if (bVar2 == 1) {
          uVar3 = (bVar1 & 0x3f) << 8 | uVar4;
        }
        else if (bVar2 == 2) {
          uVar3 = (ulong)((bVar1 & 0x3f) << 0x18) |
                  uVar4 << 0x10 | (ulong)param_1[2] << 8 | (ulong)param_1[3];
        }
        else {
          uVar3 = (uVar3 & 0x3f) << 0x38 |
                  (ulong)param_1[6] << 8 |
                  uVar4 << 0x30 | (ulong)param_1[2] << 0x28 | (ulong)param_1[7] |
                  (ulong)param_1[3] << 0x20 | (ulong)param_1[4] << 0x18 | (ulong)param_1[5] << 0x10;
        }
      }
      *param_3 = uVar3;
      uVar5 = 1 << bVar2;
    }
  }
  return uVar5;
}


