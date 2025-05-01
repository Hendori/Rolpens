
void WebPYuv444ToRgba4444_C(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  if (param_5 < 1) {
    return;
  }
  lVar4 = 0;
  do {
    iVar3 = (int)((uint)*(byte *)(param_1 + lVar4) * 0x4a85) >> 8;
    uVar5 = iVar3 + -0x379a + ((int)((uint)*(byte *)(param_3 + lVar4) * 0x6625) >> 8);
    if (uVar5 < 0x4000) {
      bVar1 = (byte)((int)uVar5 >> 6);
    }
    else {
      bVar1 = ~(byte)((int)uVar5 >> 0x1f);
    }
    bVar1 = bVar1 & 0xf0;
    uVar5 = ((iVar3 - ((int)((uint)*(byte *)(param_2 + lVar4) * 0x1913) >> 8)) -
            ((int)((uint)*(byte *)(param_3 + lVar4) * 0x3408) >> 8)) + 0x2204;
    if (uVar5 < 0x4000) {
      bVar1 = bVar1 | (byte)((int)uVar5 >> 10);
    }
    else if (-1 < (int)uVar5) {
      bVar1 = bVar1 | 0xf;
    }
    uVar5 = iVar3 + -0x4515 + ((int)((uint)*(byte *)(param_2 + lVar4) * 0x811a) >> 8);
    if (uVar5 < 0x4000) {
      bVar2 = (byte)((int)uVar5 >> 6) | 0xf;
    }
    else {
      bVar2 = ((byte)((int)uVar5 >> 0x1f) & 0x10) - 1;
    }
    *(byte *)(param_4 + lVar4 * 2) = bVar1;
    *(byte *)(param_4 + 1 + lVar4 * 2) = bVar2;
    lVar4 = lVar4 + 1;
  } while (lVar4 != param_5);
  return;
}



void WebPYuv444ToRgb565_C(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  if (param_5 < 1) {
    return;
  }
  lVar2 = 0;
  do {
    iVar5 = (int)((uint)*(byte *)(param_1 + lVar2) * 0x4a85) >> 8;
    uVar4 = iVar5 + -0x379a + ((int)((uint)*(byte *)(param_3 + lVar2) * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      bVar1 = (byte)((int)uVar4 >> 6);
    }
    else {
      bVar1 = ~(byte)((int)uVar4 >> 0x1f);
    }
    bVar1 = bVar1 & 0xf8;
    uVar4 = ((iVar5 - ((int)((uint)*(byte *)(param_2 + lVar2) * 0x1913) >> 8)) -
            ((int)((uint)*(byte *)(param_3 + lVar2) * 0x3408) >> 8)) + 0x2204;
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
    uVar4 = iVar5 + -0x4515 + ((int)((uint)*(byte *)(param_2 + lVar2) * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      bVar3 = bVar3 | (byte)((int)uVar4 >> 9);
    }
    else if (-1 < (int)uVar4) {
      bVar3 = bVar3 | 0x1f;
    }
    *(byte *)(param_4 + lVar2 * 2) = bVar1;
    *(byte *)(param_4 + 1 + lVar2 * 2) = bVar3;
    lVar2 = lVar2 + 1;
  } while (param_5 != lVar2);
  return;
}



void WebPYuv444ToBgr_C(long param_1,long param_2,long param_3,char *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (0 < param_5) {
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(param_2 + lVar5);
      bVar2 = *(byte *)(param_3 + lVar5);
      iVar6 = (int)((uint)*(byte *)(param_1 + lVar5) * 0x4a85) >> 8;
      uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *param_4 = cVar3;
      uVar4 = ((iVar6 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
              0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_4[1] = cVar3;
      uVar4 = iVar6 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      lVar5 = lVar5 + 1;
      param_4[2] = cVar3;
      param_4 = param_4 + 3;
    } while (param_5 != lVar5);
    return;
  }
  return;
}



void WebPYuv444ToBgra_C(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  if (0 < param_5) {
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(param_2 + lVar6);
      bVar2 = *(byte *)(param_3 + lVar6);
      iVar5 = (int)((uint)*(byte *)(param_1 + lVar6) * 0x4a85) >> 8;
      uVar4 = iVar5 + -0x4515 + ((int)((uint)bVar1 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + lVar6 * 4) = cVar3;
      uVar4 = ((iVar5 - ((int)((uint)bVar1 * 0x1913) >> 8)) - ((int)((uint)bVar2 * 0x3408) >> 8)) +
              0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 1 + lVar6 * 4) = cVar3;
      uVar4 = iVar5 + -0x379a + ((int)((uint)bVar2 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 2 + lVar6 * 4) = cVar3;
      *(undefined1 *)(param_4 + 3 + lVar6 * 4) = 0xff;
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_5);
    return;
  }
  return;
}



void WebPYuv444ToRgb_C(long param_1,long param_2,long param_3,char *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (0 < param_5) {
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(param_3 + lVar5);
      bVar2 = *(byte *)(param_2 + lVar5);
      iVar6 = (int)((uint)*(byte *)(param_1 + lVar5) * 0x4a85) >> 8;
      uVar4 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *param_4 = cVar3;
      uVar4 = ((iVar6 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
              0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_4[1] = cVar3;
      uVar4 = iVar6 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      lVar5 = lVar5 + 1;
      param_4[2] = cVar3;
      param_4 = param_4 + 3;
    } while (param_5 != lVar5);
    return;
  }
  return;
}



void WebPYuv444ToRgba_C(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  if (0 < param_5) {
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(param_3 + lVar6);
      bVar2 = *(byte *)(param_2 + lVar6);
      iVar5 = (int)((uint)*(byte *)(param_1 + lVar6) * 0x4a85) >> 8;
      uVar4 = iVar5 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + lVar6 * 4) = cVar3;
      uVar4 = ((iVar5 - ((int)((uint)bVar2 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
              0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 1 + lVar6 * 4) = cVar3;
      uVar4 = iVar5 + -0x4515 + ((int)((uint)bVar2 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 2 + lVar6 * 4) = cVar3;
      *(undefined1 *)(param_4 + 3 + lVar6 * 4) = 0xff;
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_5);
    return;
  }
  return;
}



void WebPYuv444ToArgb_C(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  if (param_5 < 1) {
    return;
  }
  lVar7 = 0;
  do {
    while( true ) {
      bVar1 = *(byte *)(param_3 + lVar7);
      bVar2 = *(byte *)(param_1 + lVar7);
      bVar3 = *(byte *)(param_2 + lVar7);
      *(undefined1 *)(param_4 + lVar7 * 4) = 0xff;
      iVar6 = (int)((uint)bVar2 * 0x4a85) >> 8;
      uVar5 = iVar6 + -0x379a + ((int)((uint)bVar1 * 0x6625) >> 8);
      if (uVar5 < 0x4000) {
        cVar4 = (char)((int)uVar5 >> 6);
      }
      else {
        cVar4 = (char)~(byte)(uVar5 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 1 + lVar7 * 4) = cVar4;
      uVar5 = ((iVar6 - ((int)((uint)bVar3 * 0x1913) >> 8)) - ((int)((uint)bVar1 * 0x3408) >> 8)) +
              0x2204;
      if (uVar5 < 0x4000) {
        cVar4 = (char)((int)uVar5 >> 6);
      }
      else {
        cVar4 = (char)~(byte)(uVar5 >> 0x18) >> 7;
      }
      *(char *)(param_4 + 2 + lVar7 * 4) = cVar4;
      uVar5 = iVar6 + -0x4515 + ((int)((uint)bVar3 * 0x811a) >> 8);
      if (uVar5 < 0x4000) break;
      *(char *)(param_4 + 3 + lVar7 * 4) = (char)~(byte)(uVar5 >> 0x18) >> 7;
      lVar7 = lVar7 + 1;
      if (lVar7 == param_5) {
        return;
      }
    }
    *(char *)(param_4 + 3 + lVar7 * 4) = (char)((int)uVar5 >> 6);
    lVar7 = lVar7 + 1;
  } while (lVar7 != param_5);
  return;
}



void UpsampleRgba4444LinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               byte *param_7,byte *param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar3 = (int)(param_9 - 1) >> 1;
  uVar11 = (uint)*param_4 << 0x10 | (uint)*param_3;
  uVar14 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar10 = uVar14 + 0x20002 + uVar11 * 3;
  uVar12 = uVar10 >> 0x12;
  uVar4 = uVar10 >> 2 & 0xff;
  iVar6 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar10 = iVar6 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
  if (uVar10 < 0x4000) {
    bVar8 = (byte)((int)uVar10 >> 6);
  }
  else {
    bVar8 = ~(byte)((int)uVar10 >> 0x1f);
  }
  bVar8 = bVar8 & 0xf0;
  uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
  if (uVar10 < 0x4000) {
    bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
  }
  else if (-1 < (int)uVar10) {
    bVar8 = bVar8 | 0xf;
  }
  uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
  if (uVar10 < 0x4000) {
    bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
  }
  else {
    bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
  }
  *param_7 = bVar8;
  param_7[1] = bVar1;
  if (param_2 != (byte *)0x0) {
    uVar10 = uVar14 * 3 + 0x20002 + uVar11;
    uVar12 = uVar10 >> 0x12;
    uVar4 = uVar10 >> 2 & 0xff;
    iVar6 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar10 = iVar6 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
    if (uVar10 < 0x4000) {
      bVar8 = (byte)((int)uVar10 >> 6);
    }
    else {
      bVar8 = ~(byte)((int)uVar10 >> 0x1f);
    }
    bVar8 = bVar8 & 0xf0;
    uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
    if (uVar10 < 0x4000) {
      bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
    }
    else if (-1 < (int)uVar10) {
      bVar8 = bVar8 | 0xf;
    }
    uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar10 < 0x4000) {
      bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
    }
    else {
      bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
    }
    *param_8 = bVar8;
    param_8[1] = bVar1;
  }
  if (0 < iVar3) {
    uVar5 = 1;
    uVar10 = uVar11;
    uVar4 = uVar14;
    do {
      uVar11 = (uint)param_4[uVar5] << 0x10 | (uint)param_3[uVar5];
      uVar14 = (uint)param_6[uVar5] << 0x10 | (uint)param_5[uVar5];
      iVar6 = uVar10 + 0x80008 + uVar4 + uVar11 + uVar14;
      uVar13 = iVar6 + (uVar11 + uVar4) * 2 >> 3;
      uVar7 = iVar6 + (uVar14 + uVar10) * 2 >> 3;
      uVar10 = uVar10 + uVar13;
      iVar6 = (int)((uint)param_1[uVar5 * 2 + -1] * 0x4a85) >> 8;
      uVar12 = uVar11 + uVar7;
      uVar15 = uVar10 >> 0x11;
      uVar9 = uVar10 >> 1 & 0xff;
      uVar10 = iVar6 + -0x379a + ((int)(uVar15 * 0x6625) >> 8);
      if (uVar10 < 0x4000) {
        bVar8 = (byte)((int)uVar10 >> 6);
      }
      else {
        bVar8 = ~(byte)((int)uVar10 >> 0x1f);
      }
      bVar8 = bVar8 & 0xf0;
      uVar10 = ((iVar6 - ((int)(uVar9 * 0x1913) >> 8)) - ((int)(uVar15 * 0x3408) >> 8)) + 0x2204;
      if (uVar10 < 0x4000) {
        bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
      }
      else if (-1 < (int)uVar10) {
        bVar8 = bVar8 | 0xf;
      }
      uVar10 = iVar6 + -0x4515 + ((int)(uVar9 * 0x811a) >> 8);
      if (uVar10 < 0x4000) {
        bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
      }
      else {
        bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
      }
      param_7[uVar5 * 4 + -1] = bVar1;
      uVar9 = uVar12 >> 0x11;
      param_7[uVar5 * 4 + -2] = bVar8;
      iVar6 = (int)((uint)param_1[uVar5 * 2] * 0x4a85) >> 8;
      uVar10 = iVar6 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
      if (uVar10 < 0x4000) {
        bVar8 = (byte)((int)uVar10 >> 6);
      }
      else {
        bVar8 = ~(byte)((int)uVar10 >> 0x1f);
      }
      bVar8 = bVar8 & 0xf0;
      uVar12 = uVar12 >> 1 & 0xff;
      uVar10 = ((iVar6 - ((int)(uVar12 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
      if (uVar10 < 0x4000) {
        bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
      }
      else if (-1 < (int)uVar10) {
        bVar8 = bVar8 | 0xf;
      }
      uVar10 = iVar6 + -0x4515 + ((int)(uVar12 * 0x811a) >> 8);
      if (uVar10 < 0x4000) {
        bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
      }
      else {
        bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
      }
      param_7[uVar5 * 4] = bVar8;
      param_7[uVar5 * 4 + 1] = bVar1;
      if (param_2 != (byte *)0x0) {
        uVar7 = uVar7 + uVar4;
        uVar13 = uVar13 + uVar14;
        uVar12 = uVar7 >> 0x11;
        uVar4 = uVar7 >> 1 & 0xff;
        iVar6 = (int)((uint)param_2[uVar5 * 2 + -1] * 0x4a85) >> 8;
        uVar10 = iVar6 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
        if (uVar10 < 0x4000) {
          bVar8 = (byte)((int)uVar10 >> 6);
        }
        else {
          bVar8 = ~(byte)((int)uVar10 >> 0x1f);
        }
        bVar8 = bVar8 & 0xf0;
        uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
        if (uVar10 < 0x4000) {
          bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
        }
        else if (-1 < (int)uVar10) {
          bVar8 = bVar8 | 0xf;
        }
        uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
        if (uVar10 < 0x4000) {
          bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
        }
        else {
          bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
        }
        uVar12 = uVar13 >> 0x11;
        uVar4 = uVar13 >> 1 & 0xff;
        param_8[uVar5 * 4 + -1] = bVar1;
        param_8[uVar5 * 4 + -2] = bVar8;
        iVar6 = (int)((uint)param_2[uVar5 * 2] * 0x4a85) >> 8;
        uVar10 = iVar6 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
        if (uVar10 < 0x4000) {
          bVar8 = (byte)((int)uVar10 >> 6);
        }
        else {
          bVar8 = ~(byte)((int)uVar10 >> 0x1f);
        }
        bVar8 = bVar8 & 0xf0;
        uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
        if (uVar10 < 0x4000) {
          bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
        }
        else if (-1 < (int)uVar10) {
          bVar8 = bVar8 | 0xf;
        }
        uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
        if (uVar10 < 0x4000) {
          bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
        }
        else {
          bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
        }
        param_8[uVar5 * 4] = bVar8;
        param_8[uVar5 * 4 + 1] = bVar1;
      }
      uVar5 = uVar5 + 1;
      uVar10 = uVar11;
      uVar4 = uVar14;
    } while (iVar3 + 1 != uVar5);
  }
  bVar8 = (byte)(param_9 & 1);
  if ((param_9 & 1) == 0) {
    iVar3 = (param_9 - 1) * 2;
    uVar10 = uVar14 + 0x20002 + uVar11 * 3;
    uVar12 = uVar10 >> 0x12;
    uVar4 = uVar10 >> 2 & 0xff;
    iVar6 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar10 = iVar6 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
    if (uVar10 < 0x4000) {
      bVar1 = (byte)((int)uVar10 >> 6);
    }
    else {
      bVar1 = ~(byte)((int)uVar10 >> 0x1f);
    }
    bVar1 = bVar1 & 0xf0;
    uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
    if (uVar10 < 0x4000) {
      bVar1 = bVar1 | (byte)((int)uVar10 >> 10);
    }
    else if (-1 < (int)uVar10) {
      bVar1 = bVar1 | 0xf;
    }
    uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar10 < 0x4000) {
      bVar2 = (byte)((int)uVar10 >> 6) | 0xf;
    }
    else {
      bVar2 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
    }
    param_7[iVar3] = bVar1;
    (param_7 + iVar3)[1] = bVar2;
    if (param_2 != (byte *)0x0) {
      uVar10 = uVar11 + 0x20002 + uVar14 * 3;
      uVar11 = uVar10 >> 0x12;
      uVar4 = uVar10 >> 2 & 0xff;
      iVar6 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar10 = iVar6 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
      if (uVar10 < 0x4000) {
        bVar8 = (byte)((int)uVar10 >> 6) & 0xf0;
      }
      else if (-1 < (int)uVar10) {
        bVar8 = 0xf0;
      }
      uVar10 = ((iVar6 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
      if (uVar10 < 0x4000) {
        bVar8 = bVar8 | (byte)((int)uVar10 >> 10);
      }
      else if (-1 < (int)uVar10) {
        bVar8 = bVar8 | 0xf;
      }
      uVar10 = iVar6 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
      if (uVar10 < 0x4000) {
        bVar1 = (byte)((int)uVar10 >> 6) | 0xf;
      }
      else {
        bVar1 = ((byte)((int)uVar10 >> 0x1f) & 0x10) - 1;
      }
      param_8[iVar3] = bVar8;
      (param_8 + iVar3)[1] = bVar1;
      return;
    }
  }
  return;
}



void UpsampleRgb565LinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               byte *param_7,byte *param_8,uint param_9)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = (int)(param_9 - 1) >> 1;
  uVar8 = (uint)*param_4 << 0x10 | (uint)*param_3;
  uVar13 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar9 = uVar13 + 0x20002 + uVar8 * 3;
  iVar4 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar11 = uVar9 >> 0x12;
  uVar1 = uVar9 >> 2 & 0xff;
  uVar9 = iVar4 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
  if (uVar9 < 0x4000) {
    bVar6 = (byte)((int)uVar9 >> 6);
  }
  else {
    bVar6 = ~(byte)((int)uVar9 >> 0x1f);
  }
  bVar6 = bVar6 & 0xf8;
  uVar9 = ((iVar4 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
  if (uVar9 < 0x4000) {
    bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
    bVar10 = (byte)(uVar9 >> 3) & 0xe0;
  }
  else {
    bVar10 = 0;
    if (-1 < (int)uVar9) {
      bVar6 = bVar6 | 7;
      bVar10 = 0xe0;
    }
  }
  uVar9 = iVar4 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
  if (uVar9 < 0x4000) {
    bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
  }
  else if (-1 < (int)uVar9) {
    bVar10 = bVar10 | 0x1f;
  }
  *param_7 = bVar6;
  param_7[1] = bVar10;
  if (param_2 != (byte *)0x0) {
    uVar9 = uVar13 * 3 + 0x20002 + uVar8;
    uVar11 = uVar9 >> 0x12;
    uVar1 = uVar9 >> 2 & 0xff;
    iVar4 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar9 = iVar4 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar9 < 0x4000) {
      bVar6 = (byte)((int)uVar9 >> 6);
    }
    else {
      bVar6 = ~(byte)((int)uVar9 >> 0x1f);
    }
    bVar6 = bVar6 & 0xf8;
    uVar9 = ((iVar4 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar9 < 0x4000) {
      bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
      bVar10 = (byte)(uVar9 >> 3) & 0xe0;
    }
    else {
      bVar10 = 0;
      if (-1 < (int)uVar9) {
        bVar6 = bVar6 | 7;
        bVar10 = 0xe0;
      }
    }
    uVar9 = iVar4 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
    if (uVar9 < 0x4000) {
      bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
    }
    else if (-1 < (int)uVar9) {
      bVar10 = bVar10 | 0x1f;
    }
    *param_8 = bVar6;
    param_8[1] = bVar10;
  }
  if (0 < iVar14) {
    uVar2 = 1;
    uVar9 = uVar8;
    uVar1 = uVar13;
    do {
      uVar8 = (uint)param_4[uVar2] << 0x10 | (uint)param_3[uVar2];
      uVar13 = (uint)param_6[uVar2] << 0x10 | (uint)param_5[uVar2];
      iVar4 = uVar9 + 0x80008 + uVar1 + uVar8 + uVar13;
      uVar12 = iVar4 + (uVar8 + uVar1) * 2 >> 3;
      uVar5 = iVar4 + (uVar13 + uVar9) * 2 >> 3;
      uVar9 = uVar9 + uVar12;
      iVar4 = (int)((uint)param_1[uVar2 * 2 + -1] * 0x4a85) >> 8;
      uVar11 = uVar8 + uVar5;
      uVar15 = uVar9 >> 0x11;
      uVar7 = uVar9 >> 1 & 0xff;
      uVar9 = iVar4 + -0x379a + ((int)(uVar15 * 0x6625) >> 8);
      if (uVar9 < 0x4000) {
        bVar6 = (byte)((int)uVar9 >> 6);
      }
      else {
        bVar6 = ~(byte)((int)uVar9 >> 0x1f);
      }
      bVar6 = bVar6 & 0xf8;
      uVar9 = ((iVar4 - ((int)(uVar7 * 0x1913) >> 8)) - ((int)(uVar15 * 0x3408) >> 8)) + 0x2204;
      if (uVar9 < 0x4000) {
        bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
        bVar10 = (byte)(uVar9 >> 3) & 0xe0;
      }
      else {
        bVar10 = 0;
        if (-1 < (int)uVar9) {
          bVar6 = bVar6 | 7;
          bVar10 = 0xe0;
        }
      }
      uVar9 = iVar4 + -0x4515 + ((int)(uVar7 * 0x811a) >> 8);
      if (uVar9 < 0x4000) {
        bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
      }
      else if (-1 < (int)uVar9) {
        bVar10 = bVar10 | 0x1f;
      }
      param_7[uVar2 * 4 + -2] = bVar6;
      uVar7 = uVar11 >> 0x11;
      param_7[uVar2 * 4 + -1] = bVar10;
      iVar4 = (int)((uint)param_1[uVar2 * 2] * 0x4a85) >> 8;
      uVar9 = iVar4 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
      if (uVar9 < 0x4000) {
        bVar6 = (byte)((int)uVar9 >> 6);
      }
      else {
        bVar6 = ~(byte)((int)uVar9 >> 0x1f);
      }
      bVar6 = bVar6 & 0xf8;
      uVar11 = uVar11 >> 1 & 0xff;
      uVar9 = ((iVar4 - ((int)(uVar11 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
      if (uVar9 < 0x4000) {
        bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
        bVar10 = (byte)(uVar9 >> 3) & 0xe0;
      }
      else {
        bVar10 = 0;
        if (-1 < (int)uVar9) {
          bVar6 = bVar6 | 7;
          bVar10 = 0xe0;
        }
      }
      uVar9 = iVar4 + -0x4515 + ((int)(uVar11 * 0x811a) >> 8);
      if (uVar9 < 0x4000) {
        bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
      }
      else if (-1 < (int)uVar9) {
        bVar10 = bVar10 | 0x1f;
      }
      param_7[uVar2 * 4] = bVar6;
      param_7[uVar2 * 4 + 1] = bVar10;
      if (param_2 != (byte *)0x0) {
        uVar5 = uVar5 + uVar1;
        uVar12 = uVar12 + uVar13;
        uVar11 = uVar5 >> 0x11;
        uVar1 = uVar5 >> 1 & 0xff;
        iVar4 = (int)((uint)param_2[uVar2 * 2 + -1] * 0x4a85) >> 8;
        uVar9 = iVar4 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar9 < 0x4000) {
          bVar6 = (byte)((int)uVar9 >> 6);
        }
        else {
          bVar6 = ~(byte)((int)uVar9 >> 0x1f);
        }
        bVar6 = bVar6 & 0xf8;
        uVar9 = ((iVar4 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar9 < 0x4000) {
          bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
          bVar10 = (byte)(uVar9 >> 3) & 0xe0;
        }
        else {
          bVar10 = 0;
          if (-1 < (int)uVar9) {
            bVar6 = bVar6 | 7;
            bVar10 = 0xe0;
          }
        }
        uVar9 = iVar4 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
        if (uVar9 < 0x4000) {
          bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
        }
        else if (-1 < (int)uVar9) {
          bVar10 = bVar10 | 0x1f;
        }
        uVar11 = uVar12 >> 0x11;
        uVar1 = uVar12 >> 1 & 0xff;
        param_8[uVar2 * 4 + -2] = bVar6;
        param_8[uVar2 * 4 + -1] = bVar10;
        iVar4 = (int)((uint)param_2[uVar2 * 2] * 0x4a85) >> 8;
        uVar9 = iVar4 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar9 < 0x4000) {
          bVar6 = (byte)((int)uVar9 >> 6);
        }
        else {
          bVar6 = ~(byte)((int)uVar9 >> 0x1f);
        }
        bVar6 = bVar6 & 0xf8;
        uVar9 = ((iVar4 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar9 < 0x4000) {
          bVar6 = bVar6 | (byte)((int)uVar9 >> 0xb);
          bVar10 = (byte)(uVar9 >> 3) & 0xe0;
        }
        else {
          bVar10 = 0;
          if (-1 < (int)uVar9) {
            bVar6 = bVar6 | 7;
            bVar10 = 0xe0;
          }
        }
        uVar9 = iVar4 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
        if (uVar9 < 0x4000) {
          bVar10 = bVar10 | (byte)((int)uVar9 >> 9);
        }
        else if (-1 < (int)uVar9) {
          bVar10 = bVar10 | 0x1f;
        }
        param_8[uVar2 * 4] = bVar6;
        param_8[uVar2 * 4 + 1] = bVar10;
      }
      uVar2 = uVar2 + 1;
      uVar9 = uVar8;
      uVar1 = uVar13;
    } while (iVar14 + 1 != uVar2);
  }
  bVar6 = (byte)(param_9 & 1);
  if ((param_9 & 1) == 0) {
    iVar4 = (param_9 - 1) * 2;
    uVar9 = uVar13 + 0x20002 + uVar8 * 3;
    uVar11 = uVar9 >> 0x12;
    uVar1 = uVar9 >> 2 & 0xff;
    iVar14 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar9 = iVar14 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar9 < 0x4000) {
      bVar10 = (byte)((int)uVar9 >> 6);
    }
    else {
      bVar10 = ~(byte)((int)uVar9 >> 0x1f);
    }
    bVar10 = bVar10 & 0xf8;
    uVar9 = ((iVar14 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar9 < 0x4000) {
      bVar3 = (byte)(uVar9 >> 3) & 0xe0;
      bVar10 = bVar10 | (byte)((int)uVar9 >> 0xb);
    }
    else {
      bVar3 = 0;
      if (-1 < (int)uVar9) {
        bVar10 = bVar10 | 7;
        bVar3 = 0xe0;
      }
    }
    uVar9 = iVar14 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
    if (uVar9 < 0x4000) {
      bVar3 = bVar3 | (byte)((int)uVar9 >> 9);
    }
    else if (-1 < (int)uVar9) {
      bVar3 = bVar3 | 0x1f;
    }
    param_7[iVar4] = bVar10;
    (param_7 + iVar4)[1] = bVar3;
    if (param_2 != (byte *)0x0) {
      uVar9 = uVar8 + 0x20002 + uVar13 * 3;
      uVar8 = uVar9 >> 0x12;
      uVar1 = uVar9 >> 2 & 0xff;
      iVar14 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar9 = iVar14 + -0x379a + ((int)(uVar8 * 0x6625) >> 8);
      if (uVar9 < 0x4000) {
        bVar10 = (byte)((int)uVar9 >> 6);
      }
      else {
        bVar10 = ~(byte)((int)uVar9 >> 0x1f);
      }
      bVar10 = bVar10 & 0xf8;
      uVar9 = ((iVar14 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar8 * 0x3408) >> 8)) + 0x2204;
      if (uVar9 < 0x4000) {
        bVar10 = bVar10 | (byte)((int)uVar9 >> 0xb);
        bVar6 = (byte)(uVar9 >> 3) & 0xe0;
      }
      else if (-1 < (int)uVar9) {
        bVar10 = bVar10 | 7;
        bVar6 = 0xe0;
      }
      uVar9 = iVar14 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
      if (uVar9 < 0x4000) {
        bVar6 = bVar6 | (byte)((int)uVar9 >> 9);
      }
      else if (-1 < (int)uVar9) {
        bVar6 = bVar6 | 0x1f;
      }
      param_8[iVar4] = bVar10;
      (param_8 + iVar4)[1] = bVar6;
      return;
    }
  }
  return;
}



void UpsampleBgraLinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               char *param_7,char *param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  
  iVar7 = (int)(param_9 - 1) >> 1;
  uVar13 = (uint)*param_4 << 0x10 | (uint)*param_3;
  uVar14 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar4 = uVar14 + 0x20002 + uVar13 * 3;
  uVar3 = uVar4 >> 2 & 0xff;
  iVar11 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar9 = uVar4 >> 0x12 & 0xff;
  uVar4 = iVar11 + -0x4515 + ((int)(uVar3 * 0x811a) >> 8);
  if (uVar4 < 0x4000) {
    cVar2 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  *param_7 = cVar2;
  uVar4 = ((iVar11 - ((int)(uVar3 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
  if (uVar4 < 0x4000) {
    cVar2 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_7[1] = cVar2;
  uVar4 = iVar11 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
  if (uVar4 < 0x4000) {
    cVar2 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_7[2] = cVar2;
  param_7[3] = -1;
  if (param_2 != (byte *)0x0) {
    uVar4 = uVar14 * 3 + 0x20002 + uVar13;
    uVar3 = uVar4 >> 2 & 0xff;
    uVar9 = uVar4 >> 0x12 & 0xff;
    iVar11 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar4 = iVar11 + -0x4515 + ((int)(uVar3 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    *param_8 = cVar2;
    uVar4 = ((iVar11 - ((int)(uVar3 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_8[1] = cVar2;
    uVar4 = iVar11 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_8[2] = cVar2;
    param_8[3] = -1;
  }
  if (0 < iVar7) {
    pcVar16 = param_8 + 4;
    pcVar12 = param_7 + 4;
    uVar10 = 1;
    uVar4 = uVar13;
    uVar3 = uVar14;
    do {
      uVar13 = (uint)param_4[uVar10] << 0x10 | (uint)param_3[uVar10];
      uVar14 = (uint)param_6[uVar10] << 0x10 | (uint)param_5[uVar10];
      iVar11 = uVar4 + 0x80008 + uVar3 + uVar13 + uVar14;
      iVar15 = (int)((uint)param_1[uVar10 * 2 + -1] * 0x4a85) >> 8;
      uVar5 = iVar11 + (uVar13 + uVar3) * 2 >> 3;
      uVar8 = iVar11 + (uVar14 + uVar4) * 2 >> 3;
      uVar4 = uVar4 + uVar5;
      uVar9 = uVar13 + uVar8;
      uVar1 = uVar4 >> 1 & 0xff;
      uVar6 = uVar4 >> 0x11 & 0xff;
      uVar4 = iVar15 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *pcVar12 = cVar2;
      uVar4 = ((iVar15 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar6 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar12[1] = cVar2;
      uVar4 = iVar15 + -0x379a + ((int)(uVar6 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar12[2] = cVar2;
      pcVar12[3] = -1;
      uVar1 = uVar9 >> 0x11 & 0xff;
      uVar9 = uVar9 >> 1 & 0xff;
      iVar11 = (int)((uint)param_1[uVar10 * 2] * 0x4a85) >> 8;
      uVar4 = iVar11 + -0x4515 + ((int)(uVar9 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar12[4] = cVar2;
      uVar4 = ((iVar11 - ((int)(uVar9 * 0x1913) >> 8)) - ((int)(uVar1 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar12[5] = cVar2;
      uVar4 = iVar11 + -0x379a + ((int)(uVar1 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar12[6] = cVar2;
      pcVar12[7] = -1;
      if (param_2 != (byte *)0x0) {
        uVar8 = uVar8 + uVar3;
        uVar5 = uVar5 + uVar14;
        uVar3 = uVar8 >> 1 & 0xff;
        uVar9 = uVar8 >> 0x11 & 0xff;
        iVar11 = (int)((uint)param_2[uVar10 * 2 + -1] * 0x4a85) >> 8;
        uVar4 = iVar11 + -0x4515 + ((int)(uVar3 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        *pcVar16 = cVar2;
        uVar4 = ((iVar11 - ((int)(uVar3 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar16[1] = cVar2;
        uVar4 = iVar11 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar16[2] = cVar2;
        uVar9 = uVar5 >> 1 & 0xff;
        pcVar16[3] = -1;
        uVar3 = uVar5 >> 0x11 & 0xff;
        iVar11 = (int)((uint)param_2[uVar10 * 2] * 0x4a85) >> 8;
        uVar4 = iVar11 + -0x4515 + ((int)(uVar9 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar16[4] = cVar2;
        uVar4 = ((iVar11 - ((int)(uVar9 * 0x1913) >> 8)) - ((int)(uVar3 * 0x3408) >> 8)) + 0x2204;
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar16[5] = cVar2;
        uVar4 = iVar11 + -0x379a + ((int)(uVar3 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar2 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        pcVar16[6] = cVar2;
        pcVar16[7] = -1;
      }
      uVar10 = uVar10 + 1;
      pcVar16 = pcVar16 + 8;
      pcVar12 = pcVar12 + 8;
      uVar4 = uVar13;
      uVar3 = uVar14;
    } while (iVar7 + 1 != uVar10);
  }
  if ((param_9 & 1) == 0) {
    iVar7 = (param_9 - 1) * 4;
    uVar4 = uVar14 + 0x20002 + uVar13 * 3;
    param_7 = param_7 + iVar7;
    uVar3 = uVar4 >> 2 & 0xff;
    uVar9 = uVar4 >> 0x12 & 0xff;
    iVar11 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar4 = iVar11 + -0x4515 + ((int)(uVar3 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    *param_7 = cVar2;
    uVar4 = ((iVar11 - ((int)(uVar3 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_7[1] = cVar2;
    uVar4 = iVar11 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar2 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_7[2] = cVar2;
    param_7[3] = -1;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + iVar7;
      uVar4 = uVar13 + 0x20002 + uVar14 * 3;
      uVar3 = uVar4 >> 2 & 0xff;
      uVar9 = uVar4 >> 0x12 & 0xff;
      iVar7 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar4 = iVar7 + -0x4515 + ((int)(uVar3 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *param_8 = cVar2;
      uVar4 = ((iVar7 - ((int)(uVar3 * 0x1913) >> 8)) - ((int)(uVar9 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_8[1] = cVar2;
      uVar4 = iVar7 + -0x379a + ((int)(uVar9 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar2 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_8[2] = cVar2;
      param_8[3] = -1;
      return;
    }
  }
  return;
}



void UpsampleBgrLinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               char *param_7,char *param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  
  iVar9 = (int)(param_9 - 1) >> 1;
  uVar10 = (uint)*param_4 << 0x10 | (uint)*param_3;
  uVar13 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar14 = uVar13 + 0x20002 + uVar10 * 3;
  iVar11 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar4 = uVar14 >> 2 & 0xff;
  uVar14 = uVar14 >> 0x12;
  uVar5 = iVar11 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
  if (uVar5 < 0x4000) {
    cVar3 = (char)((int)uVar5 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
  }
  *param_7 = cVar3;
  uVar5 = ((iVar11 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar14 * 0x3408) >> 8)) + 0x2204;
  if (uVar5 < 0x4000) {
    cVar3 = (char)((int)uVar5 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
  }
  param_7[1] = cVar3;
  uVar14 = iVar11 + -0x379a + ((int)(uVar14 * 0x6625) >> 8);
  if (uVar14 < 0x4000) {
    cVar3 = (char)((int)uVar14 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
  }
  param_7[2] = cVar3;
  if (param_2 != (byte *)0x0) {
    uVar5 = uVar13 * 3 + 0x20002 + uVar10;
    uVar4 = uVar5 >> 2 & 0xff;
    uVar5 = uVar5 >> 0x12;
    iVar11 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar14 = iVar11 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar14 < 0x4000) {
      cVar3 = (char)((int)uVar14 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
    }
    *param_8 = cVar3;
    uVar14 = ((iVar11 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar5 * 0x3408) >> 8)) + 0x2204;
    if (uVar14 < 0x4000) {
      cVar3 = (char)((int)uVar14 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
    }
    param_8[1] = cVar3;
    uVar14 = iVar11 + -0x379a + ((int)(uVar5 * 0x6625) >> 8);
    if (uVar14 < 0x4000) {
      cVar3 = (char)((int)uVar14 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
    }
    param_8[2] = cVar3;
  }
  if (0 < iVar9) {
    pcVar16 = param_8 + 3;
    pcVar15 = param_7 + 3;
    uVar6 = 1;
    uVar14 = uVar10;
    uVar5 = uVar13;
    do {
      uVar10 = (uint)param_4[uVar6] << 0x10 | (uint)param_3[uVar6];
      uVar13 = (uint)param_6[uVar6] << 0x10 | (uint)param_5[uVar6];
      iVar8 = (int)((uint)param_1[uVar6 * 2 + -1] * 0x4a85) >> 8;
      iVar11 = uVar14 + 0x80008 + uVar5 + uVar10 + uVar13;
      uVar12 = iVar11 + (uVar10 + uVar5) * 2 >> 3;
      uVar1 = uVar14 + uVar12;
      uVar7 = iVar11 + (uVar13 + uVar14) * 2 >> 3;
      uVar14 = uVar10 + uVar7;
      uVar2 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      uVar4 = iVar8 + -0x4515 + ((int)(uVar2 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      *pcVar15 = cVar3;
      uVar4 = ((iVar8 - ((int)(uVar2 * 0x1913) >> 8)) - ((int)(uVar1 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar15[1] = cVar3;
      uVar4 = iVar8 + -0x379a + ((int)(uVar1 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      pcVar15[2] = cVar3;
      uVar4 = uVar14 >> 0x11;
      uVar1 = uVar14 >> 1 & 0xff;
      iVar11 = (int)((uint)param_1[uVar6 * 2] * 0x4a85) >> 8;
      uVar14 = iVar11 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
      if (uVar14 < 0x4000) {
        cVar3 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      pcVar15[3] = cVar3;
      uVar14 = ((iVar11 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar4 * 0x3408) >> 8)) + 0x2204;
      if (uVar14 < 0x4000) {
        cVar3 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      pcVar15[4] = cVar3;
      uVar14 = iVar11 + -0x379a + ((int)(uVar4 * 0x6625) >> 8);
      if (uVar14 < 0x4000) {
        cVar3 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      pcVar15[5] = cVar3;
      if (param_2 != (byte *)0x0) {
        uVar7 = uVar7 + uVar5;
        uVar12 = uVar12 + uVar13;
        uVar5 = uVar7 >> 1 & 0xff;
        uVar7 = uVar7 >> 0x11;
        iVar11 = (int)((uint)param_2[uVar6 * 2 + -1] * 0x4a85) >> 8;
        uVar14 = iVar11 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        *pcVar16 = cVar3;
        uVar14 = ((iVar11 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        pcVar16[1] = cVar3;
        uVar14 = iVar11 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        pcVar16[2] = cVar3;
        uVar5 = uVar12 >> 1 & 0xff;
        uVar12 = uVar12 >> 0x11;
        iVar11 = (int)((uint)param_2[uVar6 * 2] * 0x4a85) >> 8;
        uVar14 = iVar11 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        pcVar16[3] = cVar3;
        uVar14 = ((iVar11 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar12 * 0x3408) >> 8)) + 0x2204;
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        pcVar16[4] = cVar3;
        uVar14 = iVar11 + -0x379a + ((int)(uVar12 * 0x6625) >> 8);
        if (uVar14 < 0x4000) {
          cVar3 = (char)((int)uVar14 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
        }
        pcVar16[5] = cVar3;
      }
      uVar6 = uVar6 + 1;
      pcVar16 = pcVar16 + 6;
      pcVar15 = pcVar15 + 6;
      uVar14 = uVar10;
      uVar5 = uVar13;
    } while (iVar9 + 1 != uVar6);
  }
  if ((param_9 & 1) == 0) {
    uVar14 = uVar13 + 0x20002 + uVar10 * 3;
    iVar9 = (param_9 - 1) * 3;
    param_7 = param_7 + iVar9;
    uVar4 = uVar14 >> 2 & 0xff;
    uVar14 = uVar14 >> 0x12;
    iVar11 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar5 = iVar11 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar5 < 0x4000) {
      cVar3 = (char)((int)uVar5 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
    }
    *param_7 = cVar3;
    uVar5 = ((iVar11 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar14 * 0x3408) >> 8)) + 0x2204;
    if (uVar5 < 0x4000) {
      cVar3 = (char)((int)uVar5 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
    }
    param_7[1] = cVar3;
    uVar14 = iVar11 + -0x379a + ((int)(uVar14 * 0x6625) >> 8);
    if (uVar14 < 0x4000) {
      cVar3 = (char)((int)uVar14 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
    }
    param_7[2] = cVar3;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + iVar9;
      uVar14 = uVar10 + 0x20002 + uVar13 * 3;
      uVar4 = uVar14 >> 2 & 0xff;
      uVar14 = uVar14 >> 0x12;
      iVar9 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar5 = iVar9 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
      if (uVar5 < 0x4000) {
        cVar3 = (char)((int)uVar5 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
      }
      *param_8 = cVar3;
      uVar5 = ((iVar9 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar14 * 0x3408) >> 8)) + 0x2204;
      if (uVar5 < 0x4000) {
        cVar3 = (char)((int)uVar5 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar5 >> 0x18) >> 7;
      }
      param_8[1] = cVar3;
      uVar14 = iVar9 + -0x379a + ((int)(uVar14 * 0x6625) >> 8);
      if (uVar14 < 0x4000) {
        cVar3 = (char)((int)uVar14 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar14 >> 0x18) >> 7;
      }
      param_8[2] = cVar3;
      return;
    }
  }
  return;
}



void UpsampleArgbLinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               undefined1 *param_7,undefined1 *param_8,uint param_9)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  
  iVar6 = (int)(param_9 - 1) >> 1;
  uVar14 = (uint)*param_4 << 0x10 | (uint)*param_3;
  bVar1 = *param_1;
  uVar7 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar4 = uVar7 + 0x20002 + uVar14 * 3;
  *param_7 = 0xff;
  uVar5 = uVar4 >> 2 & 0xff;
  uVar11 = uVar4 >> 0x12 & 0xff;
  iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
  uVar4 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
  if (uVar4 < 0x4000) {
    cVar3 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_7[1] = cVar3;
  uVar4 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
  if (uVar4 < 0x4000) {
    cVar3 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_7[2] = cVar3;
  uVar4 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
  if (uVar4 < 0x4000) {
    cVar3 = (char)((int)uVar4 >> 6);
  }
  else {
    cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_7[3] = cVar3;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    *param_8 = 0xff;
    uVar4 = uVar7 * 3 + 0x20002 + uVar14;
    uVar5 = uVar4 >> 2 & 0xff;
    uVar11 = uVar4 >> 0x12 & 0xff;
    iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
    uVar4 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_8[1] = cVar3;
    uVar4 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_8[2] = cVar3;
    uVar4 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_8[3] = cVar3;
  }
  if (0 < iVar6) {
    puVar13 = param_7 + 4;
    puVar16 = param_8 + 4;
    uVar12 = 1;
    uVar4 = uVar14;
    uVar5 = uVar7;
    do {
      uVar14 = (uint)param_4[uVar12] << 0x10 | (uint)param_3[uVar12];
      uVar7 = (uint)param_6[uVar12] << 0x10 | (uint)param_5[uVar12];
      iVar8 = uVar4 + 0x80008 + uVar5 + uVar14 + uVar7;
      uVar9 = iVar8 + (uVar14 + uVar5) * 2 >> 3;
      uVar11 = uVar4 + uVar9;
      uVar10 = iVar8 + (uVar7 + uVar4) * 2 >> 3;
      bVar1 = param_1[uVar12 * 2 + -1];
      uVar4 = uVar14 + uVar10;
      *puVar13 = 0xff;
      uVar2 = uVar11 >> 1 & 0xff;
      uVar15 = uVar11 >> 0x11 & 0xff;
      iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
      uVar11 = iVar8 + -0x379a + ((int)(uVar15 * 0x6625) >> 8);
      if (uVar11 < 0x4000) {
        cVar3 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      puVar13[1] = cVar3;
      uVar11 = ((iVar8 - ((int)(uVar2 * 0x1913) >> 8)) - ((int)(uVar15 * 0x3408) >> 8)) + 0x2204;
      if (uVar11 < 0x4000) {
        cVar3 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      puVar13[2] = cVar3;
      uVar11 = iVar8 + -0x4515 + ((int)(uVar2 * 0x811a) >> 8);
      if (uVar11 < 0x4000) {
        cVar3 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      puVar13[3] = cVar3;
      uVar2 = uVar4 >> 0x11 & 0xff;
      bVar1 = param_1[uVar12 * 2];
      puVar13[4] = 0xff;
      iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
      uVar11 = iVar8 + -0x379a + ((int)(uVar2 * 0x6625) >> 8);
      if (uVar11 < 0x4000) {
        cVar3 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      uVar11 = uVar4 >> 1 & 0xff;
      puVar13[5] = cVar3;
      uVar4 = ((iVar8 - ((int)(uVar11 * 0x1913) >> 8)) - ((int)(uVar2 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      puVar13[6] = cVar3;
      uVar4 = iVar8 + -0x4515 + ((int)(uVar11 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      puVar13[7] = cVar3;
      if (param_2 != (byte *)0x0) {
        uVar10 = uVar10 + uVar5;
        bVar1 = param_2[uVar12 * 2 + -1];
        uVar9 = uVar9 + uVar7;
        *puVar16 = 0xff;
        uVar5 = uVar10 >> 1 & 0xff;
        uVar11 = uVar10 >> 0x11 & 0xff;
        iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
        uVar4 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[1] = cVar3;
        uVar4 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[2] = cVar3;
        uVar4 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[3] = cVar3;
        uVar5 = uVar9 >> 1 & 0xff;
        uVar11 = uVar9 >> 0x11 & 0xff;
        bVar1 = param_2[uVar12 * 2];
        puVar16[4] = 0xff;
        iVar8 = (int)((uint)bVar1 * 0x4a85) >> 8;
        uVar4 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[5] = cVar3;
        uVar4 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[6] = cVar3;
        uVar4 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar4 < 0x4000) {
          cVar3 = (char)((int)uVar4 >> 6);
        }
        else {
          cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
        }
        puVar16[7] = cVar3;
      }
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 8;
      puVar16 = puVar16 + 8;
      uVar4 = uVar14;
      uVar5 = uVar7;
    } while (iVar6 + 1 != uVar12);
  }
  if ((param_9 & 1) == 0) {
    iVar8 = (param_9 - 1) * 4;
    uVar4 = uVar7 + 0x20002 + uVar14 * 3;
    param_7 = param_7 + iVar8;
    bVar1 = param_1[(long)(int)param_9 + -1];
    uVar11 = uVar4 >> 0x12 & 0xff;
    uVar5 = uVar4 >> 2 & 0xff;
    *param_7 = 0xff;
    iVar6 = (int)((uint)bVar1 * 0x4a85) >> 8;
    uVar4 = iVar6 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_7[1] = cVar3;
    uVar4 = ((iVar6 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_7[2] = cVar3;
    uVar4 = iVar6 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
    if (uVar4 < 0x4000) {
      cVar3 = (char)((int)uVar4 >> 6);
    }
    else {
      cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
    }
    param_7[3] = cVar3;
    if (param_2 != (byte *)0x0) {
      bVar1 = param_2[(long)(int)param_9 + -1];
      param_8 = param_8 + iVar8;
      uVar4 = uVar14 + 0x20002 + uVar7 * 3;
      *param_8 = 0xff;
      uVar5 = uVar4 >> 2 & 0xff;
      uVar7 = uVar4 >> 0x12 & 0xff;
      iVar6 = (int)((uint)bVar1 * 0x4a85) >> 8;
      uVar4 = iVar6 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_8[1] = cVar3;
      uVar4 = ((iVar6 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_8[2] = cVar3;
      uVar4 = iVar6 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
      if (uVar4 < 0x4000) {
        cVar3 = (char)((int)uVar4 >> 6);
      }
      else {
        cVar3 = (char)~(byte)(uVar4 >> 0x18) >> 7;
      }
      param_8[3] = cVar3;
      return;
    }
  }
  return;
}



void UpsampleRgbLinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               char *param_7,char *param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  
  iVar6 = (int)(param_9 - 1) >> 1;
  uVar10 = (uint)*param_4 << 0x10 | (uint)*param_3;
  uVar13 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar3 = uVar13 + 0x20002 + uVar10 * 3;
  uVar11 = uVar3 >> 0x12;
  uVar5 = uVar3 >> 2 & 0xff;
  iVar8 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar3 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  *param_7 = cVar2;
  uVar3 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  param_7[1] = cVar2;
  uVar3 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  param_7[2] = cVar2;
  if (param_2 != (byte *)0x0) {
    uVar3 = uVar13 * 3 + 0x20002 + uVar10;
    uVar11 = uVar3 >> 0x12;
    uVar5 = uVar3 >> 2 & 0xff;
    iVar8 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar3 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    *param_8 = cVar2;
    uVar3 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_8[1] = cVar2;
    uVar3 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_8[2] = cVar2;
  }
  if (0 < iVar6) {
    pcVar15 = param_8 + 3;
    pcVar7 = param_7 + 3;
    uVar9 = 1;
    uVar3 = uVar10;
    uVar5 = uVar13;
    do {
      uVar10 = (uint)param_4[uVar9] << 0x10 | (uint)param_3[uVar9];
      uVar13 = (uint)param_6[uVar9] << 0x10 | (uint)param_5[uVar9];
      iVar8 = uVar3 + 0x80008 + uVar5 + uVar10 + uVar13;
      uVar12 = iVar8 + (uVar10 + uVar5) * 2 >> 3;
      uVar11 = uVar3 + uVar12;
      uVar4 = iVar8 + (uVar13 + uVar3) * 2 >> 3;
      uVar3 = uVar10 + uVar4;
      uVar14 = uVar11 >> 0x11;
      uVar1 = uVar11 >> 1 & 0xff;
      iVar8 = (int)((uint)param_1[uVar9 * 2 + -1] * 0x4a85) >> 8;
      uVar11 = iVar8 + -0x379a + ((int)(uVar14 * 0x6625) >> 8);
      if (uVar11 < 0x4000) {
        cVar2 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      *pcVar7 = cVar2;
      uVar11 = ((iVar8 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar14 * 0x3408) >> 8)) + 0x2204;
      if (uVar11 < 0x4000) {
        cVar2 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      pcVar7[1] = cVar2;
      uVar11 = iVar8 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
      if (uVar11 < 0x4000) {
        cVar2 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      pcVar7[2] = cVar2;
      uVar1 = uVar3 >> 0x11;
      iVar8 = (int)((uint)param_1[uVar9 * 2] * 0x4a85) >> 8;
      uVar11 = iVar8 + -0x379a + ((int)(uVar1 * 0x6625) >> 8);
      if (uVar11 < 0x4000) {
        cVar2 = (char)((int)uVar11 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar11 >> 0x18) >> 7;
      }
      uVar11 = uVar3 >> 1 & 0xff;
      pcVar7[3] = cVar2;
      uVar3 = ((iVar8 - ((int)(uVar11 * 0x1913) >> 8)) - ((int)(uVar1 * 0x3408) >> 8)) + 0x2204;
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      pcVar7[4] = cVar2;
      uVar3 = iVar8 + -0x4515 + ((int)(uVar11 * 0x811a) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      pcVar7[5] = cVar2;
      if (param_2 != (byte *)0x0) {
        uVar4 = uVar4 + uVar5;
        uVar12 = uVar12 + uVar13;
        uVar11 = uVar4 >> 0x11;
        uVar5 = uVar4 >> 1 & 0xff;
        iVar8 = (int)((uint)param_2[uVar9 * 2 + -1] * 0x4a85) >> 8;
        uVar3 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        *pcVar15 = cVar2;
        uVar3 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[1] = cVar2;
        uVar3 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[2] = cVar2;
        uVar11 = uVar12 >> 0x11;
        uVar5 = uVar12 >> 1 & 0xff;
        iVar8 = (int)((uint)param_2[uVar9 * 2] * 0x4a85) >> 8;
        uVar3 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[3] = cVar2;
        uVar3 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[4] = cVar2;
        uVar3 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[5] = cVar2;
      }
      uVar9 = uVar9 + 1;
      pcVar15 = pcVar15 + 6;
      pcVar7 = pcVar7 + 6;
      uVar3 = uVar10;
      uVar5 = uVar13;
    } while (iVar6 + 1 != uVar9);
  }
  if ((param_9 & 1) == 0) {
    iVar6 = (param_9 - 1) * 3;
    uVar3 = uVar13 + 0x20002 + uVar10 * 3;
    param_7 = param_7 + iVar6;
    uVar11 = uVar3 >> 0x12;
    uVar5 = uVar3 >> 2 & 0xff;
    iVar8 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar3 = iVar8 + -0x379a + ((int)(uVar11 * 0x6625) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    *param_7 = cVar2;
    uVar3 = ((iVar8 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar11 * 0x3408) >> 8)) + 0x2204;
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_7[1] = cVar2;
    uVar3 = iVar8 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_7[2] = cVar2;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + iVar6;
      uVar3 = uVar10 + 0x20002 + uVar13 * 3;
      uVar10 = uVar3 >> 0x12;
      uVar5 = uVar3 >> 2 & 0xff;
      iVar6 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar3 = iVar6 + -0x379a + ((int)(uVar10 * 0x6625) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      *param_8 = cVar2;
      uVar3 = ((iVar6 - ((int)(uVar5 * 0x1913) >> 8)) - ((int)(uVar10 * 0x3408) >> 8)) + 0x2204;
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      param_8[1] = cVar2;
      uVar3 = iVar6 + -0x4515 + ((int)(uVar5 * 0x811a) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      param_8[2] = cVar2;
      return;
    }
  }
  return;
}



void UpsampleRgbaLinePair_C
               (byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
               char *param_7,char *param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  
  uVar13 = (uint)*param_4 << 0x10 | (uint)*param_3;
  iVar5 = (int)(param_9 - 1) >> 1;
  uVar14 = (uint)*param_6 << 0x10 | (uint)*param_5;
  uVar3 = uVar14 + 0x20002 + uVar13 * 3;
  uVar4 = uVar3 >> 2 & 0xff;
  uVar7 = uVar3 >> 0x12 & 0xff;
  iVar10 = (int)((uint)*param_1 * 0x4a85) >> 8;
  uVar3 = iVar10 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  *param_7 = cVar2;
  uVar3 = ((iVar10 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  param_7[1] = cVar2;
  uVar3 = iVar10 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
  if (uVar3 < 0x4000) {
    cVar2 = (char)((int)uVar3 >> 6);
  }
  else {
    cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
  }
  param_7[2] = cVar2;
  param_7[3] = -1;
  if (param_2 != (byte *)0x0) {
    uVar3 = uVar14 * 3 + 0x20002 + uVar13;
    uVar4 = uVar3 >> 2 & 0xff;
    uVar7 = uVar3 >> 0x12 & 0xff;
    iVar10 = (int)((uint)*param_2 * 0x4a85) >> 8;
    uVar3 = iVar10 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    *param_8 = cVar2;
    uVar3 = ((iVar10 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_8[1] = cVar2;
    uVar3 = iVar10 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_8[2] = cVar2;
    param_8[3] = -1;
  }
  if (0 < iVar5) {
    pcVar15 = param_8 + 4;
    uVar11 = 1;
    pcVar12 = param_7 + 4;
    uVar3 = uVar13;
    uVar4 = uVar14;
    do {
      uVar13 = (uint)param_4[uVar11] << 0x10 | (uint)param_3[uVar11];
      uVar14 = (uint)param_6[uVar11] << 0x10 | (uint)param_5[uVar11];
      iVar10 = uVar3 + 0x80008 + uVar4 + uVar13 + uVar14;
      uVar8 = iVar10 + (uVar13 + uVar4) * 2 >> 3;
      uVar7 = uVar3 + uVar8;
      uVar9 = iVar10 + (uVar14 + uVar3) * 2 >> 3;
      uVar3 = uVar13 + uVar9;
      uVar1 = uVar7 >> 1 & 0xff;
      uVar6 = uVar7 >> 0x11 & 0xff;
      iVar10 = (int)((uint)param_1[uVar11 * 2 + -1] * 0x4a85) >> 8;
      uVar7 = iVar10 + -0x379a + ((int)(uVar6 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar2 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      *pcVar12 = cVar2;
      uVar7 = ((iVar10 - ((int)(uVar1 * 0x1913) >> 8)) - ((int)(uVar6 * 0x3408) >> 8)) + 0x2204;
      if (uVar7 < 0x4000) {
        cVar2 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar12[1] = cVar2;
      uVar7 = iVar10 + -0x4515 + ((int)(uVar1 * 0x811a) >> 8);
      if (uVar7 < 0x4000) {
        cVar2 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      pcVar12[2] = cVar2;
      pcVar12[3] = -1;
      uVar1 = uVar3 >> 0x11 & 0xff;
      iVar10 = (int)((uint)param_1[uVar11 * 2] * 0x4a85) >> 8;
      uVar7 = iVar10 + -0x379a + ((int)(uVar1 * 0x6625) >> 8);
      if (uVar7 < 0x4000) {
        cVar2 = (char)((int)uVar7 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar7 >> 0x18) >> 7;
      }
      uVar7 = uVar3 >> 1 & 0xff;
      pcVar12[4] = cVar2;
      uVar3 = ((iVar10 - ((int)(uVar7 * 0x1913) >> 8)) - ((int)(uVar1 * 0x3408) >> 8)) + 0x2204;
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      pcVar12[5] = cVar2;
      uVar3 = iVar10 + -0x4515 + ((int)(uVar7 * 0x811a) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      pcVar12[6] = cVar2;
      pcVar12[7] = -1;
      if (param_2 != (byte *)0x0) {
        uVar9 = uVar9 + uVar4;
        uVar8 = uVar8 + uVar14;
        uVar7 = uVar9 >> 1 & 0xff;
        uVar4 = uVar9 >> 0x11 & 0xff;
        iVar10 = (int)((uint)param_2[uVar11 * 2 + -1] * 0x4a85) >> 8;
        uVar3 = iVar10 + -0x379a + ((int)(uVar4 * 0x6625) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        *pcVar15 = cVar2;
        uVar3 = ((iVar10 - ((int)(uVar7 * 0x1913) >> 8)) - ((int)(uVar4 * 0x3408) >> 8)) + 0x2204;
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[1] = cVar2;
        uVar3 = iVar10 + -0x4515 + ((int)(uVar7 * 0x811a) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[2] = cVar2;
        uVar4 = uVar8 >> 1 & 0xff;
        pcVar15[3] = -1;
        uVar7 = uVar8 >> 0x11 & 0xff;
        iVar10 = (int)((uint)param_2[uVar11 * 2] * 0x4a85) >> 8;
        uVar3 = iVar10 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[4] = cVar2;
        uVar3 = ((iVar10 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[5] = cVar2;
        uVar3 = iVar10 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
        if (uVar3 < 0x4000) {
          cVar2 = (char)((int)uVar3 >> 6);
        }
        else {
          cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
        }
        pcVar15[6] = cVar2;
        pcVar15[7] = -1;
      }
      uVar11 = uVar11 + 1;
      pcVar15 = pcVar15 + 8;
      pcVar12 = pcVar12 + 8;
      uVar3 = uVar13;
      uVar4 = uVar14;
    } while (iVar5 + 1 != uVar11);
  }
  if ((param_9 & 1) == 0) {
    iVar10 = (param_9 - 1) * 4;
    uVar3 = uVar14 + 0x20002 + uVar13 * 3;
    param_7 = param_7 + iVar10;
    uVar4 = uVar3 >> 2 & 0xff;
    uVar7 = uVar3 >> 0x12 & 0xff;
    iVar5 = (int)((uint)param_1[(long)(int)param_9 + -1] * 0x4a85) >> 8;
    uVar3 = iVar5 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    *param_7 = cVar2;
    uVar3 = ((iVar5 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_7[1] = cVar2;
    uVar3 = iVar5 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
    if (uVar3 < 0x4000) {
      cVar2 = (char)((int)uVar3 >> 6);
    }
    else {
      cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
    }
    param_7[2] = cVar2;
    param_7[3] = -1;
    if (param_2 != (byte *)0x0) {
      param_8 = param_8 + iVar10;
      uVar3 = uVar13 + 0x20002 + uVar14 * 3;
      uVar4 = uVar3 >> 2 & 0xff;
      uVar7 = uVar3 >> 0x12 & 0xff;
      iVar5 = (int)((uint)param_2[(long)(int)param_9 + -1] * 0x4a85) >> 8;
      uVar3 = iVar5 + -0x379a + ((int)(uVar7 * 0x6625) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      *param_8 = cVar2;
      uVar3 = ((iVar5 - ((int)(uVar4 * 0x1913) >> 8)) - ((int)(uVar7 * 0x3408) >> 8)) + 0x2204;
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      param_8[1] = cVar2;
      uVar3 = iVar5 + -0x4515 + ((int)(uVar4 * 0x811a) >> 8);
      if (uVar3 < 0x4000) {
        cVar2 = (char)((int)uVar3 >> 6);
      }
      else {
        cVar2 = (char)~(byte)(uVar3 >> 0x18) >> 7;
      }
      param_8[2] = cVar2;
      param_8[3] = -1;
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WebPGetLinePairConverter(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)WebPInitUpsamplers_body_last_cpuinfo_used_0;
  if ((code *)WebPInitUpsamplers_body_last_cpuinfo_used_0 != _VP8GetCPUInfo) {
    WebPUpsamplers._80_8_ = UpsampleRgba4444LinePair_C;
    WebPUpsamplers._0_8_ = UpsampleRgbLinePair_C;
    WebPUpsamplers._8_8_ = UpsampleRgbaLinePair_C;
    WebPUpsamplers._16_8_ = UpsampleBgrLinePair_C;
    WebPUpsamplers._24_8_ = UpsampleBgraLinePair_C;
    WebPUpsamplers._64_8_ = UpsampleBgraLinePair_C;
    WebPUpsamplers._72_8_ = UpsampleArgbLinePair_C;
    WebPUpsamplers._32_8_ = UpsampleArgbLinePair_C;
    WebPUpsamplers._40_8_ = UpsampleRgba4444LinePair_C;
    WebPUpsamplers._48_8_ = UpsampleRgb565LinePair_C;
    WebPUpsamplers._56_8_ = UpsampleRgbaLinePair_C;
    pcVar1 = _VP8GetCPUInfo;
    if ((_VP8GetCPUInfo != (code *)0x0) &&
       (iVar2 = (*_VP8GetCPUInfo)(0), pcVar1 = _VP8GetCPUInfo, iVar2 != 0)) {
      WebPInitUpsamplersSSE2();
      pcVar1 = _VP8GetCPUInfo;
    }
  }
  WebPInitUpsamplers_body_last_cpuinfo_used_0 = pcVar1;
  return *(undefined8 *)(WebPUpsamplers + ((ulong)(param_1 == 0) + 3) * 8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitYUV444Converters(void)

{
  int iVar1;
  
  if ((code *)WebPInitYUV444Converters_body_last_cpuinfo_used_1 == _VP8GetCPUInfo) {
    return;
  }
  WebPYUV444Converters._0_8_ = WebPYuv444ToRgb_C;
  WebPYUV444Converters._8_8_ = WebPYuv444ToRgba_C;
  WebPYUV444Converters._80_8_ = 0x100000;
  WebPYUV444Converters._16_8_ = WebPYuv444ToBgr_C;
  WebPYUV444Converters._24_8_ = WebPYuv444ToBgra_C;
  WebPYUV444Converters._64_8_ = WebPYuv444ToBgra_C;
  WebPYUV444Converters._72_8_ = WebPYuv444ToArgb_C;
  WebPYUV444Converters._32_8_ = WebPYuv444ToArgb_C;
  WebPYUV444Converters._40_8_ = 0x100000;
  WebPYUV444Converters._48_8_ = WebPYuv444ToRgb565_C;
  WebPYUV444Converters._56_8_ = WebPYuv444ToRgba_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPInitYUV444ConvertersSSE2();
    }
    WebPInitYUV444Converters_body_last_cpuinfo_used_1 = _VP8GetCPUInfo;
    return;
  }
  WebPInitYUV444Converters_body_last_cpuinfo_used_1 = _VP8GetCPUInfo;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPInitUpsamplers(void)

{
  int iVar1;
  
  if ((code *)WebPInitUpsamplers_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  WebPUpsamplers._0_8_ = UpsampleRgbLinePair_C;
  WebPUpsamplers._8_8_ = UpsampleRgbaLinePair_C;
  WebPUpsamplers._80_8_ = UpsampleRgba4444LinePair_C;
  WebPUpsamplers._16_8_ = UpsampleBgrLinePair_C;
  WebPUpsamplers._24_8_ = UpsampleBgraLinePair_C;
  WebPUpsamplers._64_8_ = UpsampleBgraLinePair_C;
  WebPUpsamplers._72_8_ = UpsampleArgbLinePair_C;
  WebPUpsamplers._32_8_ = UpsampleArgbLinePair_C;
  WebPUpsamplers._40_8_ = UpsampleRgba4444LinePair_C;
  WebPUpsamplers._48_8_ = UpsampleRgb565LinePair_C;
  WebPUpsamplers._56_8_ = UpsampleRgbaLinePair_C;
  if (_VP8GetCPUInfo != (code *)0x0) {
    iVar1 = (*_VP8GetCPUInfo)(0);
    if (iVar1 != 0) {
      WebPInitUpsamplersSSE2();
    }
    WebPInitUpsamplers_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
    return;
  }
  WebPInitUpsamplers_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}


