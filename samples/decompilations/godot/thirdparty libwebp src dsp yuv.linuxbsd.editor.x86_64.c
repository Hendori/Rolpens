
void ConvertARGBToY_C(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2 * 4);
      *(char *)(param_2 + lVar2) =
           (char)((uVar1 >> 0x10 & 0xff) * 0x41c7 + (uVar1 >> 8 & 0xff) * 0x8123 + 0x108000 +
                  (uVar1 & 0xff) * 0x1914 >> 0x10);
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
  return;
}



void WebPConvertARGBToUV_C(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = (int)param_4 >> 1;
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        uVar1 = *(uint *)(param_1 + lVar3 * 8);
        uVar2 = *(uint *)(param_1 + 4 + lVar3 * 8);
        iVar10 = (uVar1 >> 0xf & 0x1fe) + (uVar2 >> 0xf & 0x1fe);
        iVar5 = (uVar1 * 2 & 0x1fe) + (uVar2 * 2 & 0x1fe);
        iVar6 = (uVar1 >> 7 & 0x1fe) + (uVar2 >> 7 & 0x1fe);
        iVar11 = iVar10 * -0x25f7 + iVar6 * -0x4a89 + 0x2020000 + iVar5 * 0x7080 >> 0x12;
        iVar5 = iVar6 * -0x5e34 + iVar10 * 0x7080 + 0x2020000 + iVar5 * -0x124c >> 0x12;
        if (param_5 != 0) break;
        *(char *)(param_2 + lVar3) =
             (char)((int)(iVar11 + 1 + (uint)*(byte *)(param_2 + lVar3)) >> 1);
        *(char *)(param_3 + lVar3) =
             (char)((int)(iVar5 + 1 + (uint)*(byte *)(param_3 + lVar3)) >> 1);
        lVar3 = lVar3 + 1;
        if (iVar9 == lVar3) goto LAB_0010016c;
      }
      *(char *)(param_2 + lVar3) = (char)iVar11;
      *(char *)(param_3 + lVar3) = (char)iVar5;
      lVar3 = lVar3 + 1;
    } while (iVar9 != lVar3);
  }
LAB_0010016c:
  if ((param_4 & 1) != 0) {
    pbVar8 = (byte *)(param_2 + iVar9);
    pbVar7 = (byte *)(param_3 + iVar9);
    uVar1 = *(uint *)(param_1 + (long)(iVar9 * 2) * 4);
    uVar2 = uVar1 >> 0xe & 0x3fc;
    uVar4 = uVar1 >> 6 & 0x3fc;
    iVar5 = (int)(uVar2 * -0x25f7 + uVar4 * -0x4a89 + 0x2020000 + (uVar1 & 0xff) * 0x1c200) >> 0x12;
    iVar9 = (int)(uVar2 * 0x7080 + uVar4 * -0x5e34 + 0x2020000 + (uVar1 & 0xff) * -0x4930) >> 0x12;
    if (param_5 == 0) {
      *pbVar8 = (byte)((int)(iVar5 + 1 + (uint)*pbVar8) >> 1);
      *pbVar7 = (byte)((int)(iVar9 + 1 + (uint)*pbVar7) >> 1);
      return;
    }
    *pbVar8 = (byte)iVar5;
    *pbVar7 = (byte)iVar9;
  }
  return;
}



void ConvertRGB24ToY_C(byte *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (0 < param_3) {
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = (char)((uint)*param_1 * 0x41c7 + (uint)param_1[1] * 0x8123 + 0x108000 +
                       (uint)param_1[2] * 0x1914 >> 0x10);
      param_1 = param_1 + 3;
      puVar1 = puVar2;
    } while (param_2 + param_3 != puVar2);
  }
  return;
}



void ConvertBGR24ToY_C(byte *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (0 < param_3) {
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = (char)((uint)param_1[2] * 0x41c7 + (uint)param_1[1] * 0x8123 + 0x108000 +
                       (uint)*param_1 * 0x1914 >> 0x10);
      param_1 = param_1 + 3;
      puVar1 = puVar2;
    } while (param_2 + param_3 != puVar2);
  }
  return;
}



void WebPConvertRGBA32ToUV_C(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < param_4) {
    lVar2 = 0;
    do {
      uVar5 = (uint)*(ushort *)(param_1 + lVar2 * 8);
      uVar3 = (uint)*(ushort *)(param_1 + 2 + lVar2 * 8);
      uVar4 = (uint)*(ushort *)(param_1 + 4 + lVar2 * 8);
      uVar1 = uVar3 * -0x4a89 + uVar5 * -0x25f7 + 0x2020000 + uVar4 * 0x7080;
      uVar6 = (int)uVar1 >> 0x12;
      if (0x3ffffff < uVar1) {
        uVar6 = (int)~uVar6 >> 0x1f;
      }
      *(char *)(param_2 + lVar2) = (char)uVar6;
      uVar1 = uVar3 * -0x5e34 + uVar5 * 0x7080 + 0x2020000 + uVar4 * -0x124c;
      uVar4 = (int)uVar1 >> 0x12;
      if (0x3ffffff < uVar1) {
        uVar4 = (int)~uVar4 >> 0x1f;
      }
      *(char *)(param_3 + lVar2) = (char)uVar4;
      lVar2 = lVar2 + 1;
    } while (param_4 != lVar2);
    return;
  }
  return;
}



void YuvToRgba4444Row(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_4 + (int)((param_5 & 0xfffffffe) * 2);
  if (param_4 != pbVar8) {
    lVar4 = 0;
    pbVar7 = param_4;
    do {
      iVar3 = (int)((uint)param_1[lVar4 * 2] * 0x4a85) >> 8;
      uVar5 = iVar3 + -0x379a + ((int)((uint)param_3[lVar4] * 0x6625) >> 8);
      if (uVar5 < 0x4000) {
        bVar1 = (byte)((int)uVar5 >> 6);
      }
      else {
        bVar1 = ~(byte)((int)uVar5 >> 0x1f);
      }
      bVar1 = bVar1 & 0xf0;
      uVar5 = ((iVar3 - ((int)((uint)param_2[lVar4] * 0x1913) >> 8)) -
              ((int)((uint)param_3[lVar4] * 0x3408) >> 8)) + 0x2204;
      if (uVar5 < 0x4000) {
        bVar1 = bVar1 | (byte)((int)uVar5 >> 10);
      }
      else if (-1 < (int)uVar5) {
        bVar1 = bVar1 | 0xf;
      }
      uVar5 = iVar3 + -0x4515 + ((int)((uint)param_2[lVar4] * 0x811a) >> 8);
      if (uVar5 < 0x4000) {
        bVar2 = (byte)((int)uVar5 >> 6) | 0xf;
      }
      else {
        bVar2 = ((byte)((int)uVar5 >> 0x1f) & 0x10) - 1;
      }
      *pbVar7 = bVar1;
      pbVar7[1] = bVar2;
      iVar3 = (int)((uint)param_1[lVar4 * 2 + 1] * 0x4a85) >> 8;
      uVar5 = iVar3 + -0x379a + ((int)((uint)param_3[lVar4] * 0x6625) >> 8);
      if (uVar5 < 0x4000) {
        bVar1 = (byte)((int)uVar5 >> 6);
      }
      else {
        bVar1 = ~(byte)((int)uVar5 >> 0x1f);
      }
      bVar1 = bVar1 & 0xf0;
      uVar5 = ((iVar3 - ((int)((uint)param_2[lVar4] * 0x1913) >> 8)) -
              ((int)((uint)param_3[lVar4] * 0x3408) >> 8)) + 0x2204;
      if (uVar5 < 0x4000) {
        bVar1 = bVar1 | (byte)((int)uVar5 >> 10);
      }
      else if (-1 < (int)uVar5) {
        bVar1 = bVar1 | 0xf;
      }
      uVar5 = iVar3 + -0x4515 + ((int)((uint)param_2[lVar4] * 0x811a) >> 8);
      if (uVar5 < 0x4000) {
        bVar2 = (byte)((int)uVar5 >> 6) | 0xf;
      }
      else {
        bVar2 = ((byte)((int)uVar5 >> 0x1f) & 0x10) - 1;
      }
      pbVar7[2] = bVar1;
      pbVar6 = pbVar7 + 4;
      lVar4 = lVar4 + 1;
      pbVar7[3] = bVar2;
      pbVar7 = pbVar6;
    } while (pbVar8 != pbVar6);
    lVar4 = ((ulong)(pbVar8 + (-4 - (long)param_4)) >> 2) + 1;
    param_1 = param_1 + lVar4 * 2;
    param_2 = param_2 + lVar4;
    param_3 = param_3 + lVar4;
  }
  if ((param_5 & 1) != 0) {
    iVar3 = (int)((uint)*param_1 * 0x4a85) >> 8;
    uVar5 = iVar3 + -0x379a + ((int)((uint)*param_3 * 0x6625) >> 8);
    if (uVar5 < 0x4000) {
      bVar1 = (byte)((int)uVar5 >> 6);
    }
    else {
      bVar1 = ~(byte)((int)uVar5 >> 0x1f);
    }
    bVar1 = bVar1 & 0xf0;
    uVar5 = ((iVar3 - ((int)((uint)*param_2 * 0x1913) >> 8)) - ((int)((uint)*param_3 * 0x3408) >> 8)
            ) + 0x2204;
    if (uVar5 < 0x4000) {
      bVar1 = bVar1 | (byte)((int)uVar5 >> 10);
    }
    else if (-1 < (int)uVar5) {
      bVar1 = bVar1 | 0xf;
    }
    uVar5 = iVar3 + -0x4515 + ((int)((uint)*param_2 * 0x811a) >> 8);
    if (uVar5 < 0x4000) {
      bVar2 = (byte)((int)uVar5 >> 6) | 0xf;
    }
    else {
      bVar2 = ((byte)((int)uVar5 >> 0x1f) & 0x10) - 1;
    }
    *pbVar8 = bVar1;
    pbVar8[1] = bVar2;
    return;
  }
  return;
}



void YuvToRgb565Row(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_4 + (int)((param_5 & 0xfffffffe) * 2);
  if (param_4 != pbVar8) {
    lVar2 = 0;
    pbVar7 = param_4;
    do {
      iVar5 = (int)((uint)param_1[lVar2 * 2] * 0x4a85) >> 8;
      uVar4 = iVar5 + -0x379a + ((int)((uint)param_3[lVar2] * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        bVar1 = (byte)((int)uVar4 >> 6);
      }
      else {
        bVar1 = ~(byte)((int)uVar4 >> 0x1f);
      }
      bVar1 = bVar1 & 0xf8;
      uVar4 = ((iVar5 - ((int)((uint)param_2[lVar2] * 0x1913) >> 8)) -
              ((int)((uint)param_3[lVar2] * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        bVar3 = (byte)(uVar4 >> 3) & 0xe0;
        bVar1 = bVar1 | (byte)((int)uVar4 >> 0xb);
      }
      else {
        bVar3 = 0;
        if (-1 < (int)uVar4) {
          bVar1 = bVar1 | 7;
          bVar3 = 0xe0;
        }
      }
      uVar4 = iVar5 + -0x4515 + ((int)((uint)param_2[lVar2] * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        bVar3 = bVar3 | (byte)((int)uVar4 >> 9);
      }
      else if (-1 < (int)uVar4) {
        bVar3 = bVar3 | 0x1f;
      }
      *pbVar7 = bVar1;
      pbVar7[1] = bVar3;
      iVar5 = (int)((uint)param_1[lVar2 * 2 + 1] * 0x4a85) >> 8;
      uVar4 = iVar5 + -0x379a + ((int)((uint)param_3[lVar2] * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        bVar1 = (byte)((int)uVar4 >> 6);
      }
      else {
        bVar1 = ~(byte)((int)uVar4 >> 0x1f);
      }
      bVar1 = bVar1 & 0xf8;
      uVar4 = ((iVar5 - ((int)((uint)param_2[lVar2] * 0x1913) >> 8)) -
              ((int)((uint)param_3[lVar2] * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        bVar3 = (byte)(uVar4 >> 3) & 0xe0;
        bVar1 = bVar1 | (byte)((int)uVar4 >> 0xb);
      }
      else {
        bVar3 = 0;
        if (-1 < (int)uVar4) {
          bVar1 = bVar1 | 7;
          bVar3 = 0xe0;
        }
      }
      uVar4 = iVar5 + -0x4515 + ((int)((uint)param_2[lVar2] * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        bVar3 = bVar3 | (byte)((int)uVar4 >> 9);
      }
      else if (-1 < (int)uVar4) {
        bVar3 = bVar3 | 0x1f;
      }
      pbVar7[2] = bVar1;
      pbVar6 = pbVar7 + 4;
      lVar2 = lVar2 + 1;
      pbVar7[3] = bVar3;
      pbVar7 = pbVar6;
    } while (pbVar8 != pbVar6);
    lVar2 = ((ulong)(pbVar8 + (-4 - (long)param_4)) >> 2) + 1;
    param_1 = param_1 + lVar2 * 2;
    param_2 = param_2 + lVar2;
    param_3 = param_3 + lVar2;
  }
  if ((param_5 & 1) != 0) {
    iVar5 = (int)((uint)*param_1 * 0x4a85) >> 8;
    uVar4 = iVar5 + -0x379a + ((int)((uint)*param_3 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      bVar1 = (byte)((int)uVar4 >> 6);
    }
    else {
      bVar1 = ~(byte)((int)uVar4 >> 0x1f);
    }
    bVar1 = bVar1 & 0xf8;
    uVar4 = ((iVar5 - ((int)((uint)*param_2 * 0x1913) >> 8)) - ((int)((uint)*param_3 * 0x3408) >> 8)
            ) + 0x2204;
    if (uVar4 < 0x4000) {
      bVar1 = bVar1 | (byte)((int)uVar4 >> 0xb);
      bVar3 = (byte)(uVar4 >> 3) & 0xe0;
    }
    else {
      bVar3 = 0;
      if (-1 < (int)uVar4) {
        bVar1 = bVar1 | 7;
        bVar3 = 0xe0;
      }
    }
    uVar4 = iVar5 + -0x4515 + ((int)((uint)*param_2 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      bVar3 = bVar3 | (byte)((int)uVar4 >> 9);
    }
    else if (-1 < (int)uVar4) {
      bVar3 = bVar3 | 0x1f;
    }
    *pbVar8 = bVar1;
    pbVar8[1] = bVar3;
    return;
  }
  return;
}



void YuvToBgraRow(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar8 = param_4 + (int)((param_5 & 0xfffffffe) << 2);
  if (param_4 != pcVar8) {
    lVar5 = 0;
    pcVar4 = param_4;
    do {
      bVar1 = param_2[lVar5];
      bVar2 = param_3[lVar5];
      iVar9 = (int)((uint)param_1[lVar5 * 2] * 0x4a85) >> 8;
      uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      *pcVar4 = cVar6;
      uVar7 = ((iVar9 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
              0x2204;
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[1] = cVar6;
      uVar7 = iVar9 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[2] = cVar6;
      pcVar4[3] = -1;
      bVar1 = param_2[lVar5];
      bVar2 = param_3[lVar5];
      iVar9 = (int)((uint)param_1[lVar5 * 2 + 1] * 0x4a85) >> 8;
      uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[4] = cVar6;
      uVar7 = ((iVar9 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
              0x2204;
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[5] = cVar6;
      uVar7 = iVar9 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[6] = cVar6;
      pcVar3 = pcVar4 + 8;
      lVar5 = lVar5 + 1;
      pcVar4[7] = -1;
      pcVar4 = pcVar3;
    } while (pcVar8 != pcVar3);
    lVar5 = ((ulong)(pcVar8 + (-8 - (long)param_4)) >> 3) + 1;
    param_1 = param_1 + lVar5 * 2;
    param_2 = param_2 + lVar5;
    param_3 = param_3 + lVar5;
  }
  if ((param_5 & 1) == 0) {
    return;
  }
  bVar1 = *param_2;
  bVar2 = *param_3;
  iVar9 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  *pcVar8 = cVar6;
  uVar7 = ((iVar9 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
          0x2204;
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  pcVar8[1] = cVar6;
  uVar7 = iVar9 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  pcVar8[2] = cVar6;
  pcVar8[3] = -1;
  return;
}



void YuvToArgbRow(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  
  puVar9 = param_4 + (int)((param_5 & 0xfffffffe) << 2);
  if (param_4 != puVar9) {
    lVar10 = 0;
    puVar5 = param_4;
    do {
      while( true ) {
        bVar1 = param_3[lVar10];
        bVar2 = param_1[lVar10 * 2];
        bVar3 = param_2[lVar10];
        *puVar5 = 0xff;
        iVar6 = (int)((uint)bVar2 * 0x4a85) >> 8;
        uVar8 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
        if (uVar8 < 0x4000) {
          cVar7 = (char)((int)uVar8 >> 6);
        }
        else {
          cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
        }
        puVar5[1] = cVar7;
        uVar8 = ((iVar6 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8))
                + 0x2204;
        if (uVar8 < 0x4000) {
          cVar7 = (char)((int)uVar8 >> 6);
        }
        else {
          cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
        }
        puVar5[2] = cVar7;
        uVar8 = iVar6 + -0x4515 + ((int)((uint)bVar3 * 0x811a) >> 8);
        if (uVar8 < 0x4000) {
          cVar7 = (char)((int)uVar8 >> 6);
        }
        else {
          cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
        }
        puVar5[3] = cVar7;
        bVar1 = param_3[lVar10];
        bVar2 = param_1[lVar10 * 2 + 1];
        bVar3 = param_2[lVar10];
        puVar5[4] = 0xff;
        iVar6 = (int)((uint)bVar2 * 0x4a85) >> 8;
        uVar8 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
        if (uVar8 < 0x4000) {
          cVar7 = (char)((int)uVar8 >> 6);
        }
        else {
          cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
        }
        puVar5[5] = cVar7;
        uVar8 = ((iVar6 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8))
                + 0x2204;
        if (uVar8 < 0x4000) {
          cVar7 = (char)((int)uVar8 >> 6);
        }
        else {
          cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
        }
        puVar5[6] = cVar7;
        uVar8 = iVar6 + -0x4515 + ((int)((uint)bVar3 * 0x811a) >> 8);
        if (0x3fff < uVar8) break;
        puVar4 = puVar5 + 8;
        lVar10 = lVar10 + 1;
        puVar5[7] = (char)((int)uVar8 >> 6);
        puVar5 = puVar4;
        if (puVar9 == puVar4) goto LAB_00100e2d;
      }
      puVar4 = puVar5 + 8;
      lVar10 = lVar10 + 1;
      puVar5[7] = (char)~(byte)(uVar8 >> 0x18) >> 7;
      puVar5 = puVar4;
    } while (puVar9 != puVar4);
LAB_00100e2d:
    lVar10 = ((ulong)(puVar9 + (-8 - (long)param_4)) >> 3) + 1;
    param_1 = param_1 + lVar10 * 2;
    param_2 = param_2 + lVar10;
    param_3 = param_3 + lVar10;
  }
  if ((param_5 & 1) == 0) {
    return;
  }
  bVar1 = *param_3;
  bVar2 = *param_1;
  bVar3 = *param_2;
  *puVar9 = 0xff;
  iVar6 = (int)((uint)bVar2 * 0x4a85) >> 8;
  uVar8 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
  if (uVar8 < 0x4000) {
    cVar7 = (char)((int)uVar8 >> 6);
  }
  else {
    cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
  }
  puVar9[1] = cVar7;
  uVar8 = ((iVar6 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
          0x2204;
  if (uVar8 < 0x4000) {
    cVar7 = (char)((int)uVar8 >> 6);
  }
  else {
    cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
  }
  puVar9[2] = cVar7;
  uVar8 = iVar6 + -0x4515 + ((int)((uint)bVar3 * 0x811a) >> 8);
  if (uVar8 < 0x4000) {
    cVar7 = (char)((int)uVar8 >> 6);
  }
  else {
    cVar7 = (char)~(byte)(uVar8 >> 0x18) >> 7;
  }
  puVar9[3] = cVar7;
  return;
}



void YuvToBgrRow(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar9 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
  lVar5 = 0;
  pcVar8 = param_4;
  if (param_4 != pcVar9) {
    do {
      while( true ) {
        bVar1 = param_2[lVar5];
        bVar2 = param_3[lVar5];
        iVar6 = (int)((uint)param_1[lVar5 * 2] * 0x4a85) >> 8;
        uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        *pcVar8 = cVar3;
        uVar4 = ((iVar6 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8))
                + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[1] = cVar3;
        uVar4 = iVar6 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[2] = cVar3;
        bVar1 = param_2[lVar5];
        bVar2 = param_3[lVar5];
        iVar6 = (int)((uint)param_1[lVar5 * 2 + 1] * 0x4a85) >> 8;
        uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[3] = cVar3;
        uVar4 = ((iVar6 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8))
                + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[4] = cVar3;
        uVar4 = iVar6 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
        if (0x3fff < uVar4) break;
        pcVar7 = pcVar8 + 6;
        lVar5 = lVar5 + 1;
        pcVar8[5] = (char)((int)uVar4 >> 6);
        pcVar8 = pcVar7;
        if (pcVar9 == pcVar7) goto LAB_001010e5;
      }
      pcVar7 = pcVar8 + 6;
      lVar5 = lVar5 + 1;
      pcVar8[5] = (char)~(byte)(uVar4 >> 0x18) >> 7;
      pcVar8 = pcVar7;
    } while (pcVar9 != pcVar7);
LAB_001010e5:
    lVar5 = (((ulong)(pcVar9 + (-6 - (long)param_4)) >> 1) * 0x2aaaaaaaaaaaaaab & 0x7fffffffffffffff
            ) + 1;
    param_1 = param_1 + lVar5 * 2;
    param_2 = param_2 + lVar5;
    param_3 = param_3 + lVar5;
  }
  if ((param_5 & 1) != 0) {
    bVar1 = *param_2;
    bVar2 = *param_3;
    iVar6 = (int)((uint)*param_1 * 0x4a85) >> 8;
    uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    *pcVar9 = cVar3;
    uVar4 = ((iVar6 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
            0x2204;
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    pcVar9[1] = cVar3;
    uVar4 = iVar6 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    pcVar9[2] = cVar3;
    return;
  }
  return;
}



void YuvToRgbRow(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar9 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
  lVar5 = 0;
  pcVar8 = param_4;
  if (param_4 != pcVar9) {
    do {
      while( true ) {
        bVar1 = param_3[lVar5];
        bVar2 = param_2[lVar5];
        iVar6 = (int)((uint)param_1[lVar5 * 2] * 0x4a85) >> 8;
        uVar4 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        *pcVar8 = cVar3;
        uVar4 = ((iVar6 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8))
                + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[1] = cVar3;
        uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[2] = cVar3;
        bVar1 = param_3[lVar5];
        bVar2 = param_2[lVar5];
        iVar6 = (int)((uint)param_1[lVar5 * 2 + 1] * 0x4a85) >> 8;
        uVar4 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[3] = cVar3;
        uVar4 = ((iVar6 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8))
                + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar8[4] = cVar3;
        uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
        if (0x3fff < uVar4) break;
        pcVar7 = pcVar8 + 6;
        lVar5 = lVar5 + 1;
        pcVar8[5] = (char)((int)uVar4 >> 6);
        pcVar8 = pcVar7;
        if (pcVar9 == pcVar7) goto LAB_0010139d;
      }
      pcVar7 = pcVar8 + 6;
      lVar5 = lVar5 + 1;
      pcVar8[5] = (char)~(byte)(uVar4 >> 0x18) >> 7;
      pcVar8 = pcVar7;
    } while (pcVar9 != pcVar7);
LAB_0010139d:
    lVar5 = (((ulong)(pcVar9 + (-6 - (long)param_4)) >> 1) * 0x2aaaaaaaaaaaaaab & 0x7fffffffffffffff
            ) + 1;
    param_1 = param_1 + lVar5 * 2;
    param_2 = param_2 + lVar5;
    param_3 = param_3 + lVar5;
  }
  if ((param_5 & 1) != 0) {
    bVar1 = *param_3;
    bVar2 = *param_2;
    iVar6 = (int)((uint)*param_1 * 0x4a85) >> 8;
    uVar4 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    *pcVar9 = cVar3;
    uVar4 = ((iVar6 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
            0x2204;
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    pcVar9[1] = cVar3;
    uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    pcVar9[2] = cVar3;
    return;
  }
  return;
}



void YuvToRgbaRow(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar8 = param_4 + (int)((param_5 & 0xfffffffe) << 2);
  if (param_4 != pcVar8) {
    lVar5 = 0;
    pcVar4 = param_4;
    do {
      bVar1 = param_3[lVar5];
      bVar2 = param_2[lVar5];
      iVar9 = (int)((uint)param_1[lVar5 * 2] * 0x4a85) >> 8;
      uVar7 = iVar9 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      *pcVar4 = cVar6;
      uVar7 = ((iVar9 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
              0x2204;
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[1] = cVar6;
      uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[2] = cVar6;
      pcVar4[3] = -1;
      bVar1 = param_3[lVar5];
      bVar2 = param_2[lVar5];
      iVar9 = (int)((uint)param_1[lVar5 * 2 + 1] * 0x4a85) >> 8;
      uVar7 = iVar9 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[4] = cVar6;
      uVar7 = ((iVar9 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
              0x2204;
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[5] = cVar6;
      uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar6 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar4[6] = cVar6;
      pcVar3 = pcVar4 + 8;
      lVar5 = lVar5 + 1;
      pcVar4[7] = -1;
      pcVar4 = pcVar3;
    } while (pcVar8 != pcVar3);
    lVar5 = ((ulong)(pcVar8 + (-8 - (long)param_4)) >> 3) + 1;
    param_1 = param_1 + lVar5 * 2;
    param_2 = param_2 + lVar5;
    param_3 = param_3 + lVar5;
  }
  if ((param_5 & 1) == 0) {
    return;
  }
  bVar1 = *param_3;
  bVar2 = *param_2;
  iVar9 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar7 = iVar9 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  *pcVar8 = cVar6;
  uVar7 = ((iVar9 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
          0x2204;
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  pcVar8[1] = cVar6;
  uVar7 = iVar9 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
  if (uVar7 < 0x4000) {
    cVar6 = (char)((int)uVar7 >> 6);
  }
  else {
    cVar6 = (char)~(byte)(uVar7 >> 0x18) >> 7;
  }
  pcVar8[2] = cVar6;
  pcVar8[3] = -1;
  return;
}



void WebPSamplerProcessPlane
               (long param_1,int param_2,long param_3,long param_4,int param_5,long param_6,
               int param_7,undefined4 param_8,uint param_9,code *param_10)

{
  uint uVar1;
  
  if (0 < (int)param_9) {
    uVar1 = 0;
    do {
      (*param_10)(param_1,param_3,param_4,param_6,param_8);
      param_1 = param_1 + param_2;
      if ((uVar1 & 1) != 0) {
        param_3 = param_3 + param_5;
        param_4 = param_4 + param_5;
      }
      uVar1 = uVar1 + 1;
      param_6 = param_6 + param_7;
    } while (param_9 != uVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitSamplers(void)

{
  int iVar1;
  
  if ((code *)WebPInitSamplers_body_last_cpuinfo_used_1 == _VP8GetCPUInfo) {
    return;
  }
  WebPSamplers._0_8_ = YuvToRgbRow;
  WebPSamplers._8_8_ = YuvToRgbaRow;
  WebPSamplers._80_8_ = YuvToRgba4444Row;
  WebPSamplers._16_8_ = YuvToBgrRow;
  WebPSamplers._24_8_ = YuvToBgraRow;
  WebPSamplers._64_8_ = YuvToBgraRow;
  WebPSamplers._72_8_ = YuvToArgbRow;
  WebPSamplers._32_8_ = YuvToArgbRow;
  WebPSamplers._40_8_ = YuvToRgba4444Row;
  WebPSamplers._48_8_ = YuvToRgb565Row;
  WebPSamplers._56_8_ = YuvToRgbaRow;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPInitSamplersSSE2();
    }
    WebPInitSamplers_body_last_cpuinfo_used_1 = _VP8GetCPUInfo;
    return;
  }
  WebPInitSamplers_body_last_cpuinfo_used_1 = _VP8GetCPUInfo;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitConvertARGBToYUV(void)

{
  int iVar1;
  
  if ((code *)WebPInitConvertARGBToYUV_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  WebPConvertARGBToY = 0x100000;
  WebPConvertARGBToUV = WebPConvertARGBToUV_C;
  WebPConvertRGB24ToY = ConvertRGB24ToY_C;
  WebPConvertBGR24ToY = ConvertBGR24ToY_C;
  WebPConvertRGBA32ToUV = WebPConvertRGBA32ToUV_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPInitConvertARGBToYUVSSE2();
    }
    WebPInitConvertARGBToYUV_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  WebPInitConvertARGBToYUV_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}


