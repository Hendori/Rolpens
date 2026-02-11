
byte mbedtls_ct_memcmp(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (param_3 != 0) {
    pbVar4 = param_1 + param_3;
    bVar3 = 0;
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar3 = bVar3 | bVar1 ^ bVar2;
    } while (param_1 != pbVar4);
    return bVar3;
  }
  return 0;
}



uint mbedtls_ct_memcmp_partial(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (param_3 != 0) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar7);
      pbVar2 = (byte *)(param_2 + lVar7);
      uVar3 = (uint)((ulong)lVar7 >> 0x20);
      uVar6 = (uint)((ulong)(param_3 - param_5) >> 0x20);
      uVar4 = uVar3 ^ uVar6;
      lVar8 = lVar7 - (param_3 - param_5);
      uVar5 = (uint)((ulong)param_4 >> 0x20);
      uVar3 = uVar3 ^ uVar5;
      lVar9 = lVar7 - param_4;
      lVar7 = lVar7 + 1;
      uVar10 = uVar10 | (uint)(*pbVar1 ^ *pbVar2) &
                        ~((int)((uint)((ulong)lVar9 >> 0x20) & ~uVar3 | uVar5 & uVar3) >> 0x1f) &
                        (int)((uint)((ulong)lVar8 >> 0x20) & ~uVar4 | uVar6 & uVar4) >> 0x1f;
    } while (param_3 != lVar7);
    return uVar10;
  }
  return 0;
}



void mbedtls_ct_memmove_left(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar5 = param_1 + param_2 + -1;
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      bVar2 = (byte)((ulong)(param_2 - param_3) >> 0x38);
      bVar1 = (byte)((ulong)lVar6 >> 0x38) ^ bVar2;
      bVar1 = (char)((byte)((ulong)(lVar6 - (param_2 - param_3)) >> 0x38) & ~bVar1 | bVar2 & bVar1)
              >> 7;
      pbVar3 = param_1;
      if (param_2 == 1) {
        *param_1 = *param_1 & bVar1;
        return;
      }
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = *pbVar4 & ~bVar1 | *pbVar3 & bVar1;
        pbVar3 = pbVar4;
      } while (pbVar5 != pbVar4);
      lVar6 = lVar6 + 1;
      *pbVar5 = *pbVar5 & bVar1;
    } while (param_2 != lVar6);
  }
  return;
}



void mbedtls_ct_memcpy_if(ulong param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_4 == 0) {
    param_4 = param_2;
  }
  if (param_5 < 8) {
    uVar2 = 0;
  }
  else {
    uVar1 = 8;
    do {
      uVar2 = uVar1;
      *(ulong *)(param_2 + -8 + uVar2) =
           *(ulong *)(param_3 + -8 + uVar2) & param_1 | *(ulong *)(param_4 + -8 + uVar2) & ~param_1;
      uVar1 = uVar2 + 8;
    } while (uVar2 + 8 <= param_5);
  }
  if (uVar2 < param_5) {
    do {
      *(byte *)(param_2 + uVar2) =
           *(byte *)(param_3 + uVar2) & (byte)param_1 | *(byte *)(param_4 + uVar2) & (byte)~param_1;
      uVar2 = uVar2 + 1;
    } while (param_5 != uVar2);
  }
  return;
}



void mbedtls_ct_memcpy_offset
               (undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (param_4 <= param_5) {
    do {
      uVar2 = param_4 ^ param_3;
      lVar1 = param_2 + param_4;
      param_4 = param_4 + 1;
      mbedtls_ct_memcpy_if(~((long)(-uVar2 | uVar2) >> 0x3f),param_1,lVar1,0);
    } while (param_4 <= param_5);
  }
  return;
}



void mbedtls_ct_zeroize_if(uint param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if (param_3 < 4) {
    uVar4 = 0;
  }
  else {
    uVar2 = 4;
    do {
      uVar4 = uVar2;
      puVar1 = (uint *)(param_2 + -4 + uVar4);
      *puVar1 = *puVar1 & ~param_1;
      uVar2 = uVar4 + 4;
    } while (uVar4 + 4 <= param_3);
  }
  if (uVar4 < param_3) {
    pbVar3 = (byte *)(param_2 + uVar4);
    do {
      *pbVar3 = *pbVar3 & (byte)~param_1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 != (byte *)(param_2 + param_3));
  }
  return;
}


