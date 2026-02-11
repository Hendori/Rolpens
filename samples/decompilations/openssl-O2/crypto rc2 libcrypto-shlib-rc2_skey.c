
void RC2_set_key(RC2_KEY *key,int len,uchar *data,int bits)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  RC2_KEY *pRVar4;
  RC2_KEY *pRVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  RC2_KEY *pRVar12;
  int iVar13;
  
  iVar9 = 0x80;
  if (len < 0x81) {
    iVar9 = len;
  }
  *(undefined1 *)key->data = 0;
  if (bits < 1) {
    uVar11 = 0xffffffff;
    iVar8 = 0xff;
    bVar2 = 0xff;
    lVar3 = 0;
    iVar13 = 0;
    iVar10 = 0x80;
    pRVar12 = key;
    if (0 < len) goto LAB_00100070;
LAB_00100153:
    cVar1 = *(char *)((long)key->data + (long)iVar9 + -1);
  }
  else {
    if (0x400 < bits) {
      bits = 0x400;
    }
    lVar3 = 0;
    iVar10 = bits + 7 >> 3;
    iVar13 = 0x80 - iVar10;
    iVar8 = 0xff >> (-(char)bits & 7U);
    bVar2 = (byte)iVar8;
    uVar11 = 0x7f - iVar10;
    pRVar12 = (RC2_KEY *)((long)key->data + (long)iVar13);
    if (len < 1) goto LAB_00100153;
LAB_00100070:
    do {
      bVar2 = (byte)iVar8;
      *(uchar *)((long)key->data + lVar3) = data[lVar3];
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < iVar9);
    cVar1 = *(char *)((long)key->data + (long)iVar9 + -1);
    if (0x7f < len) goto LAB_001000c6;
  }
  pRVar4 = key;
  do {
    pRVar5 = (RC2_KEY *)((long)pRVar4->data + 1);
    cVar1 = key_table[(byte)(cVar1 + (char)pRVar4->data[0])];
    *(char *)((long)pRVar4->data + (long)iVar9) = cVar1;
    pRVar4 = pRVar5;
  } while ((RC2_KEY *)((long)key->data + (ulong)(0x7f - iVar9) + 1) != pRVar5);
LAB_001000c6:
  bVar2 = key_table[bVar2 & (byte)pRVar12->data[0]];
  *(byte *)pRVar12->data = bVar2;
  if (iVar13 != 0) {
    pbVar6 = (byte *)((long)key->data + (long)(int)uVar11);
    do {
      pbVar7 = pbVar6 + -1;
      bVar2 = key_table[bVar2 ^ pbVar6[iVar10]];
      *pbVar6 = bVar2;
      pbVar6 = pbVar7;
    } while ((byte *)((long)key + (((long)(int)uVar11 + -1) - (ulong)uVar11)) != pbVar7);
  }
  lVar3 = 0x7f;
  do {
    *(uint *)((long)key->data + lVar3 * 2 + -2) =
         (uint)CONCAT11(*(undefined1 *)((long)key->data + lVar3),
                        *(undefined1 *)((long)key->data + lVar3 + -1));
    lVar3 = lVar3 + -2;
  } while (lVar3 != -1);
  return;
}


