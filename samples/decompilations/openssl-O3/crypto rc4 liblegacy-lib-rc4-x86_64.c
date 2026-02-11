
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RC4(RC4_KEY *key,size_t len,uchar *indata,uchar *outdata)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  uint3 uVar7;
  uint3 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  byte bVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  uint7 uVar27;
  ulong uVar28;
  long lVar29;
  
  if (len == 0) {
    return;
  }
  cVar15 = (char)key->x;
  bVar18 = (byte)key->y;
  uVar19 = (ulong)bVar18;
  if (key->data[0x40] == 0xffffffff) {
    uVar28 = (ulong)(byte)(cVar15 + 1);
    cVar15 = *(char *)((long)key->data + uVar28);
    if ((len & 0xfffffffffffffff8) != 0) {
      do {
        uVar3 = *(undefined4 *)indata;
        uVar4 = *(undefined4 *)(indata + 4);
        bVar18 = (char)uVar19 + cVar15;
        uVar19 = (ulong)bVar18;
        cVar21 = *(char *)((long)key->data + uVar19);
        uVar17 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)key->data + uVar17);
        *(char *)((long)key->data + uVar19) = cVar15;
        *(char *)((long)key->data + uVar28) = cVar21;
        if (uVar19 == uVar17) {
          cVar22 = cVar15;
        }
        uVar7 = (uint3)(((uint)(byte)((byte)uVar3 ^
                                     *(byte *)((long)key->data + (ulong)(byte)(cVar21 + cVar15))) <<
                        0x18) >> 8);
        bVar18 = bVar18 + cVar22;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar28 = uVar17 + 1 & 0xff;
        cVar21 = *(char *)((long)key->data + uVar28);
        *(char *)((long)key->data + uVar19) = cVar22;
        *(char *)((long)key->data + uVar17) = cVar15;
        if (uVar19 == uVar28) {
          cVar21 = cVar22;
        }
        uVar7 = uVar7 >> 8 |
                (uint3)((uint)(CONCAT31(uVar7,(byte)((uint)uVar3 >> 8) ^
                                              *(byte *)((long)key->data +
                                                       (ulong)(byte)(cVar15 + cVar22))) << 0x18) >>
                       8);
        bVar18 = bVar18 + cVar21;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar17 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)key->data + uVar17);
        *(char *)((long)key->data + uVar19) = cVar21;
        *(char *)((long)key->data + uVar28) = cVar15;
        if (uVar19 == uVar17) {
          cVar22 = cVar21;
        }
        uVar7 = uVar7 >> 8 |
                (uint3)((uint)(CONCAT31(uVar7,(byte)((uint)uVar3 >> 0x10) ^
                                              *(byte *)((long)key->data +
                                                       (ulong)(byte)(cVar15 + cVar21))) << 0x18) >>
                       8);
        bVar18 = bVar18 + cVar22;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar28 = uVar17 + 1 & 0xff;
        cVar21 = *(char *)((long)key->data + uVar28);
        *(char *)((long)key->data + uVar19) = cVar22;
        *(char *)((long)key->data + uVar17) = cVar15;
        if (uVar19 == uVar28) {
          cVar21 = cVar22;
        }
        bVar20 = *(byte *)((long)key->data + (ulong)(byte)(cVar15 + cVar22));
        bVar18 = bVar18 + cVar21;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar17 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)key->data + uVar17);
        *(char *)((long)key->data + uVar19) = cVar21;
        *(char *)((long)key->data + uVar28) = cVar15;
        if (uVar19 == uVar17) {
          cVar22 = cVar21;
        }
        uVar8 = (uint3)(((uint)(byte)((byte)uVar4 ^
                                     *(byte *)((long)key->data + (ulong)(byte)(cVar15 + cVar21))) <<
                        0x18) >> 8);
        bVar18 = bVar18 + cVar22;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar28 = uVar17 + 1 & 0xff;
        cVar21 = *(char *)((long)key->data + uVar28);
        *(char *)((long)key->data + uVar19) = cVar22;
        *(char *)((long)key->data + uVar17) = cVar15;
        if (uVar19 == uVar28) {
          cVar21 = cVar22;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 8) ^
                                              *(byte *)((long)key->data +
                                                       (ulong)(byte)(cVar15 + cVar22))) << 0x18) >>
                       8);
        bVar18 = bVar18 + cVar21;
        uVar19 = (ulong)bVar18;
        cVar15 = *(char *)((long)key->data + uVar19);
        uVar17 = uVar28 + 1 & 0xff;
        cVar22 = *(char *)((long)key->data + uVar17);
        *(char *)((long)key->data + uVar19) = cVar21;
        *(char *)((long)key->data + uVar28) = cVar15;
        if (uVar19 == uVar17) {
          cVar22 = cVar21;
        }
        uVar8 = uVar8 >> 8 |
                (uint3)((uint)(CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x10) ^
                                              *(byte *)((long)key->data +
                                                       (ulong)(byte)(cVar15 + cVar21))) << 0x18) >>
                       8);
        uVar19 = (ulong)(byte)(bVar18 + cVar22);
        cVar21 = *(char *)((long)key->data + uVar19);
        uVar28 = uVar17 + 1 & 0xff;
        cVar15 = *(char *)((long)key->data + uVar28);
        *(char *)((long)key->data + uVar19) = cVar22;
        *(char *)((long)key->data + uVar17) = cVar21;
        if (uVar19 == uVar28) {
          cVar15 = cVar22;
        }
        bVar18 = *(byte *)((long)key->data + (ulong)(byte)(cVar21 + cVar22));
        len = len - 8;
        *(uint *)outdata =
             (uint)uVar7 | CONCAT31(uVar7,(byte)((uint)uVar3 >> 0x18) ^ bVar20) << 0x18;
        indata = indata + 8;
        *(uint *)((long)outdata + 4) =
             (uint)uVar8 | CONCAT31(uVar8,(byte)((uint)uVar4 >> 0x18) ^ bVar18) << 0x18;
        outdata = (uchar *)((long)outdata + 8);
      } while ((len & 0xfffffffffffffff8) != 0);
      if (len == 0) goto LAB_00100650;
    }
    do {
      uVar19 = (ulong)(byte)((char)uVar19 + cVar15);
      cVar21 = *(char *)((long)key->data + uVar19);
      *(char *)((long)key->data + uVar19) = cVar15;
      *(char *)((long)key->data + uVar28) = cVar21;
      bVar20 = cVar21 + cVar15;
      uVar28 = (ulong)(byte)((char)uVar28 + 1);
      cVar15 = *(char *)((long)key->data + uVar28);
      bVar18 = *indata;
      indata = indata + 1;
      *outdata = *(byte *)((long)key->data + (ulong)bVar20) ^ bVar18;
      outdata = (uchar *)((long)outdata + 1);
      len = len - 1;
    } while (len != 0);
    goto LAB_00100650;
  }
  uVar28 = (ulong)(byte)(cVar15 + 1);
  lVar29 = (long)outdata - (long)indata;
  uVar16 = key->data[uVar28];
  uVar17 = (ulong)uVar16;
  if ((len & 0xfffffffffffffff0) != 0) {
    if ((_OPENSSL_ia32cap_P >> 0x1e & 1) == 0) {
      uVar24 = -uVar28 & 7;
      lVar25 = uVar28 + 1;
      if (uVar24 != 0) {
        len = len - uVar24;
        do {
          cVar15 = (char)uVar17;
          uVar19 = (ulong)(byte)((char)uVar19 + cVar15);
          uVar16 = key->data[uVar19];
          key->data[uVar19] = (uint)uVar17;
          key->data[uVar28] = uVar16;
          uVar5 = uVar17 >> 8;
          uVar28 = (ulong)(byte)((char)uVar28 + 1);
          uVar17 = (ulong)key->data[uVar28];
          *(byte *)((long)indata + lVar29) =
               (byte)key->data[CONCAT71((int7)uVar5,cVar15 + (char)uVar16)] ^ (byte)*(ulong *)indata
          ;
          indata = (uchar *)((long)indata + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        lVar25 = uVar28 + 1;
      }
      do {
        bVar18 = (char)uVar19 + (char)uVar17;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = (uint)uVar17;
        uVar2 = key->data[lVar25];
        key->data[uVar28] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + (char)uVar17)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 1];
        uVar27 = (uint7)(((ulong)(byte)uVar23 << 0x38) >> 8);
        key->data[uVar28 + 1] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 2];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 2] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 3];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 3] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 4];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 4] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 5];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 5] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        cVar15 = (char)uVar2;
        bVar18 = bVar18 + cVar15;
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar2;
        uVar2 = key->data[lVar25 + 6];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 6] = uVar16;
        uVar23 = key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)];
        lVar25 = CONCAT71((int7)((ulong)lVar25 >> 8),(char)lVar25 + '\b');
        cVar15 = (char)uVar2;
        uVar19 = (ulong)(byte)(bVar18 + cVar15);
        uVar16 = key->data[uVar19];
        key->data[uVar19] = uVar2;
        uVar17 = (ulong)key->data[lVar25 + -1];
        uVar27 = uVar27 >> 8 | (uint7)((ulong)(CONCAT71(uVar27,(char)uVar23) << 0x38) >> 8);
        key->data[uVar28 + 7] = uVar16;
        uVar28 = (ulong)(byte)((char)uVar28 + 8);
        len = len - 8;
        *(ulong *)((long)indata + lVar29) =
             ((ulong)uVar27 |
             CONCAT71(uVar27,(char)key->data[CONCAT31((int3)(uVar16 >> 8),(char)uVar16 + cVar15)])
             << 0x38) ^ *(ulong *)indata;
        indata = (uchar *)((long)indata + 8);
      } while ((len & 0xfffffffffffffff8) != 0);
    }
    else {
      if ((len & 0xffffffffffffffe0) == 0) goto LAB_00100430;
      uVar24 = -uVar28 & 0xf;
      if (uVar24 != 0) {
        len = len - uVar24;
        do {
          cVar15 = (char)uVar17;
          bVar18 = (char)uVar19 + cVar15;
          uVar19 = (ulong)bVar18;
          uVar2 = key->data[uVar19];
          key->data[uVar19] = (uint)uVar17;
          key->data[uVar28] = uVar2;
          uVar5 = uVar17 >> 8;
          uVar28 = (ulong)(byte)((char)uVar28 + 1);
          uVar16 = key->data[uVar28];
          uVar17 = (ulong)uVar16;
          *(byte *)((long)indata + lVar29) =
               (byte)key->data[CONCAT71((int7)uVar5,cVar15 + (char)uVar2)] ^ (byte)*(ulong *)indata;
          indata = (uchar *)((long)indata + 1);
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      puVar26 = key->data + uVar28;
      bVar18 = bVar18 + (char)uVar16;
      uVar2 = key->data[bVar18];
      key->data[bVar18] = uVar16;
      uVar23 = puVar26[1];
      *puVar26 = uVar2;
      bVar18 = bVar18 + (char)uVar23;
      uVar1 = (undefined2)key->data[(byte)((char)uVar16 + (char)uVar2)];
      while( true ) {
        uVar16 = key->data[bVar18];
        key->data[bVar18] = uVar23;
        puVar26[1] = uVar16;
        cVar15 = (char)puVar26[2];
        bVar18 = bVar18 + cVar15;
        uVar2 = key->data[(byte)((char)uVar23 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[2];
        puVar26[2] = uVar16;
        cVar21 = (char)puVar26[3];
        bVar18 = bVar18 + cVar21;
        uVar23 = key->data[(byte)(cVar15 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[3];
        puVar26[3] = uVar16;
        cVar15 = (char)puVar26[4];
        bVar18 = bVar18 + cVar15;
        uVar11 = key->data[(byte)(cVar21 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[4];
        puVar26[4] = uVar16;
        cVar21 = (char)puVar26[5];
        bVar18 = bVar18 + cVar21;
        uVar12 = key->data[(byte)(cVar15 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[5];
        puVar26[5] = uVar16;
        cVar15 = (char)puVar26[6];
        bVar18 = bVar18 + cVar15;
        uVar13 = key->data[(byte)(cVar21 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[6];
        puVar26[6] = uVar16;
        cVar21 = (char)puVar26[7];
        bVar18 = bVar18 + cVar21;
        uVar24 = CONCAT26((short)key->data[(byte)(cVar15 + (char)uVar16)],
                          CONCAT24((short)uVar12,CONCAT22((short)uVar23,uVar1)));
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[7];
        puVar26[7] = uVar16;
        cVar15 = (char)puVar26[8];
        bVar18 = bVar18 + cVar15;
        lVar25 = CONCAT26((short)key->data[(byte)(cVar21 + (char)uVar16)],
                          CONCAT24((short)uVar13,CONCAT22((short)uVar11,(short)uVar2)));
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[8];
        puVar26[8] = uVar16;
        cVar21 = (char)puVar26[9];
        bVar18 = bVar18 + cVar21;
        uVar2 = key->data[(byte)(cVar15 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[9];
        puVar26[9] = uVar16;
        cVar15 = (char)puVar26[10];
        bVar18 = bVar18 + cVar15;
        uVar23 = key->data[(byte)(cVar21 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[10];
        puVar26[10] = uVar16;
        cVar21 = (char)puVar26[0xb];
        bVar18 = bVar18 + cVar21;
        uVar11 = key->data[(byte)(cVar15 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[0xb];
        puVar26[0xb] = uVar16;
        cVar15 = (char)puVar26[0xc];
        bVar18 = bVar18 + cVar15;
        uVar12 = key->data[(byte)(cVar21 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[0xc];
        puVar26[0xc] = uVar16;
        cVar21 = (char)puVar26[0xd];
        bVar18 = bVar18 + cVar21;
        uVar13 = key->data[(byte)(cVar15 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[0xd];
        puVar26[0xd] = uVar16;
        cVar15 = (char)puVar26[0xe];
        bVar18 = bVar18 + cVar15;
        uVar14 = key->data[(byte)(cVar21 + (char)uVar16)];
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[0xe];
        puVar26[0xe] = uVar16;
        cVar21 = (char)puVar26[0xf];
        bVar18 = bVar18 + cVar21;
        uVar5 = CONCAT26((short)key->data[(byte)(cVar15 + (char)uVar16)],
                         CONCAT24((short)uVar13,CONCAT22((short)uVar11,(short)uVar2)));
        uVar28 = (ulong)(byte)((char)uVar28 + 0x10);
        uVar9 = *(ulong *)indata;
        uVar10 = *(ulong *)((long)indata + 8);
        uVar16 = key->data[bVar18];
        key->data[bVar18] = puVar26[0xf];
        puVar26[0xf] = uVar16;
        puVar26 = key->data + uVar28;
        lVar6 = CONCAT26((short)key->data[(byte)(cVar21 + (char)uVar16)],
                         CONCAT24((short)uVar14,CONCAT22((short)uVar12,(short)uVar23)));
        uVar16 = *puVar26;
        uVar17 = (ulong)uVar16;
        len = len - 0x10;
        uVar19 = (ulong)bVar18;
        if ((len & 0xfffffffffffffff0) == 0) break;
        bVar18 = bVar18 + (char)uVar16;
        uVar2 = key->data[bVar18];
        key->data[bVar18] = uVar16;
        uVar23 = puVar26[1];
        *puVar26 = uVar2;
        bVar18 = bVar18 + (char)uVar23;
        uVar1 = (undefined2)key->data[(byte)((char)uVar16 + (char)uVar2)];
        *(ulong *)((long)indata + lVar29) = uVar9 ^ uVar24 ^ lVar25 * 0x100;
        ((ulong *)((long)indata + lVar29))[1] = uVar10 ^ uVar5 ^ lVar6 << 8;
        indata = (uchar *)((long)indata + 0x10);
      }
      *(ulong *)((long)indata + lVar29) = uVar9 ^ uVar24 ^ lVar25 * 0x100;
      ((ulong *)((long)indata + lVar29))[1] = uVar10 ^ uVar5 ^ lVar6 << 8;
      indata = (uchar *)((long)indata + 0x10);
    }
    if (len == 0) goto LAB_00100650;
  }
LAB_00100430:
  do {
    cVar15 = (char)uVar17;
    uVar19 = (ulong)(byte)((char)uVar19 + cVar15);
    uVar16 = key->data[uVar19];
    key->data[uVar19] = (uint)uVar17;
    key->data[uVar28] = uVar16;
    uVar24 = uVar17 >> 8;
    uVar28 = (ulong)(byte)((char)uVar28 + 1);
    uVar17 = (ulong)key->data[uVar28];
    *(byte *)((long)indata + lVar29) =
         (byte)key->data[CONCAT71((int7)uVar24,cVar15 + (char)uVar16)] ^ (byte)*(ulong *)indata;
    indata = (uchar *)((long)indata + 1);
    len = len - 1;
  } while (len != 0);
LAB_00100650:
  key->x = (uint)(byte)((char)uVar28 - 1);
  key->y = (uint)uVar19;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RC4_set_key(RC4_KEY *key,int len,uchar *data)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 in_register_00000034;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = CONCAT44(in_register_00000034,len);
  lVar5 = -lVar4;
  uVar7 = 0;
  if ((_OPENSSL_ia32cap_P >> 0x14 & 1) == 0) {
    do {
      key->data[uVar7] = (uint)uVar7;
      cVar3 = (char)uVar7;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar8 = 0;
    uVar7 = 0;
    lVar6 = lVar5;
    do {
      uVar7 = (ulong)(byte)((char)uVar7 + data[lVar6 + lVar4] + (char)key->data[uVar8]);
      lVar6 = lVar6 + 1;
      uVar2 = key->data[uVar7];
      if (lVar6 == 0) {
        lVar6 = lVar5;
      }
      key->data[uVar7] = key->data[uVar8];
      key->data[uVar8] = uVar2;
      cVar3 = (char)uVar8;
      uVar8 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
  }
  else {
    do {
      cVar3 = (char)uVar7;
      *(char *)((long)key->data + uVar7) = cVar3;
      uVar7 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    uVar8 = 0;
    uVar7 = 0;
    lVar6 = lVar5;
    do {
      cVar3 = *(char *)((long)key->data + uVar8);
      uVar7 = (ulong)(byte)((char)uVar7 + data[lVar6 + lVar4] + cVar3);
      lVar6 = lVar6 + 1;
      uVar1 = *(undefined1 *)((long)key->data + uVar7);
      if (lVar6 == 0) {
        lVar6 = lVar5;
      }
      *(char *)((long)key->data + uVar7) = cVar3;
      *(undefined1 *)((long)key->data + uVar8) = uVar1;
      cVar3 = (char)uVar8;
      uVar8 = (ulong)(byte)(cVar3 + 1);
    } while (cVar3 != -1);
    key->data[0x40] = 0xffffffff;
  }
  key->x = 0;
  key->y = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * RC4_options(void)

{
  char *pcVar1;
  
  pcVar1 = "rc4(8x,int)";
  if ((_OPENSSL_ia32cap_P >> 0x14 & 1) == 0) {
    if ((_OPENSSL_ia32cap_P >> 0x1e & 1) != 0) {
      return "rc4(16x,int)";
    }
  }
  else {
    pcVar1 = "rc4(8x,char)";
  }
  return pcVar1;
}


