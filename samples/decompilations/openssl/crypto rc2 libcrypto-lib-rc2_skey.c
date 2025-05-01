
void RC2_set_key(RC2_KEY *key,int len,uchar *data,int bits)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  RC2_KEY *pRVar10;
  RC2_KEY *pRVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  RC2_KEY *pRVar17;
  int iVar18;
  
  uVar14 = 0x80;
  if (len < 0x81) {
    uVar14 = len;
  }
  *(undefined1 *)key->data = 0;
  if (bits < 1) {
    uVar16 = 0xffffffff;
    bVar4 = 0xff;
    iVar18 = 0;
    iVar15 = 0x80;
    pRVar17 = key;
    if (len < 1) goto LAB_001002c4;
LAB_00100063:
    if (len < 8) {
      *(uchar *)key->data = *data;
      lVar8 = 1;
      if ((int)uVar14 < 2) goto LAB_00100097;
LAB_00100088:
      do {
        *(uchar *)((long)key->data + lVar8) = data[lVar8];
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar14);
LAB_00100097:
      cVar3 = *(char *)((long)key->data + (long)(int)uVar14 + -1);
    }
    else {
      lVar8 = 0;
      if ((ulong)((long)key - (long)(data + 1)) < 0xf) goto LAB_00100088;
      if (len < 0x10) {
        uVar6 = 0;
        uVar9 = 0;
        uVar5 = uVar14;
LAB_001001df:
        *(undefined8 *)((long)key->data + uVar9) = *(undefined8 *)(data + uVar9);
        uVar6 = uVar6 + (uVar5 & 0xfffffff8);
        if ((uVar5 & 7) == 0) goto LAB_00100097;
      }
      else {
        uVar2 = *(undefined8 *)(data + 8);
        uVar5 = uVar14 >> 4;
        *(undefined8 *)key->data = *(undefined8 *)data;
        *(undefined8 *)(key->data + 2) = uVar2;
        if (uVar5 != 1) {
          uVar2 = *(undefined8 *)(data + 0x18);
          *(undefined8 *)(key->data + 4) = *(undefined8 *)(data + 0x10);
          *(undefined8 *)(key->data + 6) = uVar2;
          if (uVar5 != 2) {
            uVar2 = *(undefined8 *)(data + 0x28);
            *(undefined8 *)(key->data + 8) = *(undefined8 *)(data + 0x20);
            *(undefined8 *)(key->data + 10) = uVar2;
            if (uVar5 != 3) {
              uVar2 = *(undefined8 *)(data + 0x38);
              *(undefined8 *)(key->data + 0xc) = *(undefined8 *)(data + 0x30);
              *(undefined8 *)(key->data + 0xe) = uVar2;
              if (uVar5 != 4) {
                uVar2 = *(undefined8 *)(data + 0x48);
                *(undefined8 *)(key->data + 0x10) = *(undefined8 *)(data + 0x40);
                *(undefined8 *)(key->data + 0x12) = uVar2;
                if (uVar5 != 5) {
                  uVar2 = *(undefined8 *)(data + 0x58);
                  *(undefined8 *)(key->data + 0x14) = *(undefined8 *)(data + 0x50);
                  *(undefined8 *)(key->data + 0x16) = uVar2;
                  if (uVar5 != 6) {
                    uVar2 = *(undefined8 *)(data + 0x68);
                    *(undefined8 *)(key->data + 0x18) = *(undefined8 *)(data + 0x60);
                    *(undefined8 *)(key->data + 0x1a) = uVar2;
                    if (uVar5 == 8) {
                      uVar2 = *(undefined8 *)(data + 0x78);
                      *(undefined8 *)(key->data + 0x1c) = *(undefined8 *)(data + 0x70);
                      *(undefined8 *)(key->data + 0x1e) = uVar2;
                      goto LAB_00100097;
                    }
                  }
                }
              }
            }
          }
        }
        uVar6 = uVar14 & 0xfffffff0;
        uVar9 = (ulong)uVar6;
        if (uVar6 == uVar14) goto LAB_00100097;
        uVar5 = uVar14 - uVar6;
        if (6 < (uVar14 - uVar6) - 1) goto LAB_001001df;
      }
      *(uchar *)((long)key->data + (long)(int)uVar6) = data[(int)uVar6];
      iVar1 = uVar6 + 1;
      if ((int)uVar14 <= iVar1) goto LAB_00100097;
      *(uchar *)((long)key->data + (long)iVar1) = data[iVar1];
      iVar1 = uVar6 + 2;
      if ((int)uVar14 <= iVar1) goto LAB_00100097;
      *(uchar *)((long)key->data + (long)iVar1) = data[iVar1];
      iVar1 = uVar6 + 3;
      if ((int)uVar14 <= iVar1) goto LAB_00100097;
      *(uchar *)((long)key->data + (long)iVar1) = data[iVar1];
      iVar1 = uVar6 + 4;
      if ((int)uVar14 <= iVar1) goto LAB_00100097;
      *(uchar *)((long)key->data + (long)iVar1) = data[iVar1];
      iVar1 = uVar6 + 5;
      if ((int)uVar14 <= iVar1) goto LAB_00100097;
      iVar7 = uVar6 + 6;
      *(uchar *)((long)key->data + (long)iVar1) = data[iVar1];
      if ((int)uVar14 <= iVar7) goto LAB_00100097;
      *(uchar *)((long)key->data + (long)iVar7) = data[iVar7];
      cVar3 = *(char *)((long)key->data + (long)(int)uVar14 + -1);
    }
    if (0x7f < len) goto LAB_001000d6;
  }
  else {
    if (0x400 < bits) {
      bits = 0x400;
    }
    iVar15 = bits + 7 >> 3;
    iVar18 = 0x80 - iVar15;
    bVar4 = (byte)(0xff >> (-(char)bits & 7U));
    uVar16 = 0x7f - iVar15;
    pRVar17 = (RC2_KEY *)((long)key->data + (long)iVar18);
    if (0 < len) goto LAB_00100063;
LAB_001002c4:
    cVar3 = *(char *)((long)key->data + (long)(int)uVar14 + -1);
  }
  pRVar10 = key;
  do {
    pRVar11 = (RC2_KEY *)((long)pRVar10->data + 1);
    cVar3 = key_table[(byte)(cVar3 + (char)pRVar10->data[0])];
    *(char *)((long)pRVar10->data + (long)(int)uVar14) = cVar3;
    pRVar10 = pRVar11;
  } while (pRVar11 != (RC2_KEY *)((long)key->data + (ulong)(0x7f - uVar14) + 1));
LAB_001000d6:
  bVar4 = key_table[bVar4 & (byte)pRVar17->data[0]];
  *(byte *)pRVar17->data = bVar4;
  if (iVar18 != 0) {
    pbVar12 = (byte *)((long)key->data + (long)(int)uVar16);
    do {
      pbVar13 = pbVar12 + -1;
      bVar4 = key_table[bVar4 ^ pbVar12[iVar15]];
      *pbVar12 = bVar4;
      pbVar12 = pbVar13;
    } while ((byte *)((long)key + (((long)(int)uVar16 + -1) - (ulong)uVar16)) != pbVar13);
  }
  lVar8 = 0x7f;
  do {
    *(uint *)((long)key->data + lVar8 * 2 + -2) =
         (uint)CONCAT11(*(undefined1 *)((long)key->data + lVar8),
                        *(undefined1 *)((long)key->data + lVar8 + -1));
    lVar8 = lVar8 + -2;
  } while (lVar8 != -1);
  return;
}


