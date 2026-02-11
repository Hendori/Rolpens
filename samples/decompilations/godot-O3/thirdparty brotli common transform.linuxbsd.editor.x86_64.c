
int Shift(uint *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ((param_3 & 0x7fff) + 0x1000000) - (param_3 & 0x8000);
  bVar1 = (byte)*param_1;
  if ((char)bVar1 < '\0') {
    if (0xbf < bVar1) {
      if (0xdf < bVar1) {
        if (bVar1 < 0xf0) {
          if (2 < param_2) {
            uVar3 = ((*(byte *)((long)param_1 + 1) & 0x3f) << 6 | (bVar1 & 0xf) << 0xc |
                    *(byte *)((long)param_1 + 2) & 0x3f) + iVar2;
            *(byte *)param_1 = (byte)(uVar3 >> 0xc) & 0xf | 0xe0;
            *(byte *)((long)param_1 + 2) = *(byte *)((long)param_1 + 2) & 0xc0 | (byte)uVar3 & 0x3f;
            *(byte *)((long)param_1 + 1) =
                 (byte)(uVar3 >> 6) & 0x3f | *(byte *)((long)param_1 + 1) & 0xc0;
            return 3;
          }
        }
        else {
          if (0xf7 < bVar1) {
            return 1;
          }
          if (3 < param_2) {
            uVar3 = ((bVar1 & 7) << 0x12 |
                    (*(byte *)((long)param_1 + 2) & 0x3f) << 6 |
                    (*(byte *)((long)param_1 + 1) & 0x3f) << 0xc |
                    *(byte *)((long)param_1 + 3) & 0x3f) + iVar2;
            *param_1 = (((uVar3 & 0x3f) << 8 | uVar3 >> 6 & 0x3f) << 8 | uVar3 >> 0xc & 0x3f) << 8 |
                       0xf0 | ((uint)*(uint3 *)((long)param_1 + 1) << 8 | uVar3 >> 0x12 & 0xff) &
                              _LC0;
            return 4;
          }
        }
        return param_2;
      }
      if (1 < param_2) {
        uVar3 = ((bVar1 & 0x1f) << 6 | *(byte *)((long)param_1 + 1) & 0x3f) + iVar2;
        *(byte *)((long)param_1 + 1) = *(byte *)((long)param_1 + 1) & 0xc0 | (byte)uVar3 & 0x3f;
        *(byte *)param_1 = (byte)(uVar3 >> 6) & 0x1f | 0xc0;
        return 2;
      }
    }
  }
  else {
    *(byte *)param_1 = bVar1 + (char)iVar2 & 0x7f;
  }
  return 1;
}



undefined1 * BrotliGetTransforms(void)

{
  return kBrotliTransforms;
}



ulong BrotliTransformDictionaryWord(long param_1,long param_2,int param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  lVar5 = (long)(param_5 * 3);
  param_5 = param_5 * 2;
  lVar7 = *(long *)(param_4 + 0x20);
  bVar1 = *(byte *)(lVar7 + 1 + lVar5);
  pbVar8 = (byte *)((ulong)*(ushort *)
                            (*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar7 + lVar5) * 2) +
                   *(long *)(param_4 + 8));
  bVar2 = *pbVar8;
  uVar10 = (ulong)bVar2;
  pbVar9 = (byte *)(*(long *)(param_4 + 8) +
                   (ulong)*(ushort *)
                           (*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar7 + 2 + lVar5) * 2));
  if (bVar2 != 0) {
    uVar6 = 0;
    do {
      *(byte *)(param_1 + uVar6) = pbVar8[uVar6 + 1];
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar10);
  }
  uVar3 = (uint)bVar1;
  if (bVar1 < 10) {
joined_r0x00100327:
    param_3 = param_3 - uVar3;
    if (param_3 < 1) goto LAB_0010028b;
LAB_00100243:
    lVar7 = 0;
    do {
      pbVar8 = (byte *)(param_1 + (int)(uint)bVar2);
      pbVar8[lVar7] = *(byte *)(param_2 + lVar7);
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_3);
    uVar10 = (ulong)((uint)bVar2 + param_3);
    if (bVar1 == 10) {
LAB_00100370:
      pbVar8 = (byte *)(((int)uVar10 - param_3) + param_1);
      bVar1 = *pbVar8;
      if (bVar1 < 0xc0) {
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          *pbVar8 = bVar1 ^ 0x20;
        }
      }
      else if (bVar1 < 0xe0) {
        pbVar8[1] = pbVar8[1] ^ 0x20;
      }
      else {
        pbVar8[2] = pbVar8[2] ^ 5;
      }
      goto LAB_0010028b;
    }
    if (bVar1 == 0xb) {
      do {
        bVar1 = *pbVar8;
        if (bVar1 < 0xc0) {
          if ((byte)(bVar1 + 0x9f) < 0x1a) {
            *pbVar8 = bVar1 ^ 0x20;
          }
          lVar7 = 1;
          iVar4 = 1;
        }
        else if (bVar1 < 0xe0) {
          pbVar8[1] = pbVar8[1] ^ 0x20;
          lVar7 = 2;
          iVar4 = 2;
        }
        else {
          pbVar8[2] = pbVar8[2] ^ 5;
          lVar7 = 3;
          iVar4 = 3;
        }
        param_3 = param_3 - iVar4;
        pbVar8 = pbVar8 + lVar7;
      } while (0 < param_3);
      goto LAB_0010028b;
    }
  }
  else {
    if (bVar1 - 0xc < 9) {
      uVar3 = bVar1 - 0xb;
      param_2 = param_2 + (int)uVar3;
      goto joined_r0x00100327;
    }
    if (0 < param_3) goto LAB_00100243;
    if (bVar1 == 10) goto LAB_00100370;
    if (uVar3 == 0xb) goto LAB_0010028b;
  }
  if (bVar1 == 0x15) {
    Shift(((int)uVar10 - param_3) + param_1,param_3,
          (ushort)*(byte *)(*(long *)(param_4 + 0x28) + 1 + (long)param_5) * 0x100 +
          (ushort)*(byte *)(*(long *)(param_4 + 0x28) + (long)param_5));
  }
  else if (bVar1 == 0x16) {
    bVar1 = *(byte *)(*(long *)(param_4 + 0x28) + 1 + (long)param_5);
    bVar2 = *(byte *)(*(long *)(param_4 + 0x28) + (long)param_5);
    lVar7 = ((int)uVar10 - param_3) + param_1;
    for (; 0 < param_3; param_3 = param_3 - iVar4) {
      iVar4 = Shift(lVar7,param_3,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      lVar7 = lVar7 + iVar4;
    }
  }
LAB_0010028b:
  bVar1 = *pbVar9;
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      *(byte *)(param_1 + (int)uVar10 + uVar6) = pbVar9[uVar6 + 1];
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
    uVar10 = (ulong)((uint)bVar1 + (int)uVar10);
  }
  return uVar10;
}


