
undefined8
FSE_buildDTable_internal
          (uint *param_1,long param_2,uint param_3,uint param_4,long param_5,ulong param_6)

{
  uint uVar1;
  ushort *puVar2;
  long lVar3;
  undefined1 *puVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  bool bVar24;
  
  bVar10 = (byte)param_4;
  bVar24 = param_6 < (1L << (bVar10 & 0x3f)) + 8 + ((ulong)param_3 + 1 & 0xffffffff) * 2;
  uVar8 = 0xffffffffffffffd2;
  bVar19 = bVar24 || 0xff < param_3;
  if ((!bVar24 && 0xff >= param_3) && (uVar8 = 0xffffffffffffffd4, param_4 < 0xd)) {
    uVar7 = param_4 & 0xffff | 0x10000;
    uVar21 = param_3 + 1;
    uVar23 = 1 << (bVar10 & 0x1f);
    lVar16 = 0;
    uVar1 = uVar23 - 1;
    iVar20 = 1;
    uVar9 = (ulong)uVar1;
    do {
      while (sVar5 = *(short *)(param_2 + lVar16 * 2), sVar5 == -1) {
        uVar15 = (ulong)((int)uVar9 - 1);
        *(char *)((long)param_1 + uVar9 * 4 + 6) = (char)lVar16;
        *(undefined2 *)(param_5 + lVar16 * 2) = 1;
        lVar16 = lVar16 + 1;
        uVar9 = uVar15;
        if (uVar21 <= (uint)lVar16) goto LAB_001000e2;
      }
      *(short *)(param_5 + lVar16 * 2) = sVar5;
      bVar19 = true;
      if ((short)(1 << (bVar10 - 1 & 0x1f)) <= sVar5) {
        iVar20 = 0;
      }
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < uVar21);
LAB_001000e2:
    if (bVar19) {
      uVar7 = param_4 & 0xffff | iVar20 << 0x10;
    }
    lVar16 = 0;
    *param_1 = uVar7;
    uVar7 = (uVar23 >> 1) + 3 + (uVar23 >> 3);
    uVar12 = 0;
    if ((uint)uVar9 == uVar1) {
      lVar22 = 0;
      lVar3 = param_5 + ((ulong)param_3 + 1) * 2;
      lVar17 = 0;
      do {
        sVar5 = *(short *)(param_2 + lVar16 * 2);
        *(long *)(lVar3 + lVar22) = lVar17;
        if (8 < sVar5) {
          plVar13 = (long *)(lVar3 + 8 + lVar22);
          do {
            *plVar13 = lVar17;
            plVar13 = plVar13 + 1;
          } while (plVar13 !=
                   (long *)((ulong)((int)sVar5 - 9U & 0xfffffff8) + lVar3 + 0x10 + lVar22));
        }
        lVar16 = lVar16 + 1;
        lVar22 = lVar22 + sVar5;
        lVar17 = lVar17 + 0x101010101010101;
      } while ((uint)lVar16 < uVar21);
      uVar18 = 0;
      uVar15 = 0;
      do {
        uVar14 = uVar15 + uVar7;
        *(undefined1 *)((long)param_1 + (uVar9 & uVar15) * 4 + 6) = *(undefined1 *)(lVar3 + uVar18);
        puVar4 = (undefined1 *)(lVar3 + 1 + uVar18);
        uVar18 = uVar18 + 2;
        *(undefined1 *)((long)param_1 + (uVar9 & uVar14) * 4 + 6) = *puVar4;
        uVar15 = uVar14 + uVar7 & uVar9;
      } while (uVar18 < (ulong)(long)(int)uVar23);
    }
    else {
      do {
        sVar5 = *(short *)(param_2 + lVar16 * 2);
        iVar20 = 0;
        if (0 < sVar5) {
          do {
            *(char *)((long)param_1 + (ulong)uVar12 * 4 + 6) = (char)lVar16;
            do {
              uVar12 = uVar12 + uVar7 & uVar1;
            } while ((uint)uVar9 < uVar12);
            iVar20 = iVar20 + 1;
          } while (iVar20 != sVar5);
        }
        lVar16 = lVar16 + 1;
      } while ((uint)lVar16 < uVar21);
      if (uVar12 != 0) {
        return 0xffffffffffffffff;
      }
    }
    lVar16 = 0;
    do {
      puVar2 = (ushort *)(param_5 + (ulong)*(byte *)((long)param_1 + lVar16 * 4 + 6) * 2);
      uVar6 = *puVar2;
      *puVar2 = uVar6 + 1;
      iVar20 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar20 == 0; iVar20 = iVar20 + -1) {
        }
      }
      bVar11 = (bVar10 - 0x1f) + ((byte)iVar20 ^ 0x1f);
      *(byte *)((long)param_1 + lVar16 * 4 + 7) = bVar11;
      *(ushort *)(param_1 + lVar16 + 1) = (uVar6 << (bVar11 & 0x1f)) - (short)uVar23;
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < uVar23);
    uVar8 = 0;
  }
  return uVar8;
}



ulong FSE_decompress_wksp_body_bmi2
                (undefined1 *param_1,long param_2,long param_3,long param_4,uint param_5,
                long param_6,ulong param_7)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  sbyte sVar9;
  sbyte sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong *puVar26;
  uint uVar27;
  long in_FS_OFFSET;
  uint local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0xff;
  uVar17 = 0xffffffffffffffff;
  if ((param_7 < 0x200) ||
     (uVar15 = FSE_readNCount_bmi2(param_6,&local_44,&local_48,param_3,param_4,1), uVar17 = uVar15,
     0xffffffffffffff88 < uVar15)) goto LAB_00100707;
  if ((param_5 < local_48) ||
     (lVar16 = (long)(1 << (local_48 & 0x1f)),
     param_7 < (lVar16 + 0x83 +
               ((1L << ((ulong)local_48 & 0x3f)) + 0xb + (ulong)(local_44 + 1) * 2 >> 2)) * 4)) {
    uVar17 = 0xffffffffffffffd4;
    goto LAB_00100707;
  }
  lVar16 = lVar16 * 4 + 0x204;
  uVar17 = FSE_buildDTable_internal
                     (param_6 + 0x200,param_6,local_44,(ulong)local_48,param_6 + lVar16,
                      param_7 - lVar16);
  if (0xffffffffffffff88 < uVar17) goto LAB_00100707;
  puVar21 = (ulong *)(param_3 + uVar15);
  uVar17 = param_4 - uVar15;
  iVar11 = (int)puVar21;
  if (*(short *)(param_6 + 0x202) == 0) {
    if (uVar17 == 0) {
LAB_00100ce0:
      uVar17 = 0xffffffffffffffb8;
      goto LAB_00100707;
    }
    bVar5 = *(byte *)((long)puVar21 + (uVar17 - 1));
    if (uVar17 < 8) {
      uVar15 = (ulong)(byte)*puVar21;
      switch(uVar17) {
      case 7:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 6) << 0x30);
      case 6:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 5) << 0x28);
      case 5:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 4) << 0x20);
      case 4:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 3) * 0x1000000;
      case 3:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 2) * 0x10000;
      case 2:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 1) * 0x100;
      }
      if (bVar5 == 0) {
LAB_00100ba0:
        uVar17 = 0xffffffffffffffec;
        goto LAB_00100707;
      }
      iVar12 = LZCOUNT((uint)bVar5) + -0x17 + (8 - (int)uVar17) * 8;
      puVar26 = puVar21;
    }
    else {
      if (bVar5 == 0) {
LAB_00100bb0:
        uVar17 = 0xffffffffffffffff;
        goto LAB_00100707;
      }
      if (0xffffffffffffff88 < uVar17) goto LAB_00100707;
      puVar26 = (ulong *)((long)puVar21 + (uVar17 - 8));
      iVar12 = LZCOUNT((uint)bVar5) + -0x17;
      uVar15 = *puVar26;
    }
    uVar7 = *(ushort *)(param_6 + 0x200);
    puVar1 = puVar21 + 1;
    lVar16 = param_6 + 0x204;
    uVar13 = iVar12 + (uint)uVar7;
    uVar20 = -1L << ((ulong)uVar7 & 0x3f);
    uVar17 = ~uVar20;
    uVar20 = ~uVar20 & uVar15 >> ((ulong)-uVar13 & 0x3f);
    puVar24 = param_1;
    if (uVar13 < 0x41) {
      if (puVar26 < puVar1) {
        puVar22 = puVar21;
        uVar27 = uVar13;
        if (puVar21 != puVar26) {
          uVar27 = uVar13 >> 3;
          puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
          if (puVar22 < puVar21) {
            uVar27 = (int)puVar26 - iVar11;
            puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
          }
          uVar27 = uVar13 + uVar27 * -8;
          uVar15 = *puVar22;
        }
      }
      else {
        uVar27 = uVar13 & 7;
        puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar13 >> 3));
        uVar15 = *puVar22;
      }
      uVar27 = uVar27 + uVar7;
      uVar17 = uVar17 & uVar15 >> ((ulong)-uVar27 & 0x3f);
      if (0x40 < uVar27) goto LAB_00100b70;
      puVar23 = param_1;
      if (puVar1 <= puVar22) {
        puVar26 = (ulong *)((long)puVar22 - (ulong)(uVar27 >> 3));
        uVar15 = *puVar26;
        uVar27 = uVar27 & 7;
LAB_0010059f:
        do {
          if (puVar26 < puVar1) {
            if (puVar21 == puVar26) goto LAB_001005da;
            puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar27 >> 3));
            if (puVar22 < puVar21) {
              uVar13 = (int)puVar26 - iVar11;
              puVar26 = (ulong *)((long)puVar26 - (ulong)uVar13);
              uVar27 = uVar27 + uVar13 * -8;
              uVar15 = *puVar26;
              goto LAB_001005da;
            }
            uVar15 = *puVar22;
            uVar27 = uVar27 + (uVar27 >> 3) * -8;
          }
          else {
            puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar27 >> 3));
            uVar15 = *puVar22;
            uVar27 = uVar27 & 7;
          }
          puVar26 = puVar22;
          if (param_1 + param_2 + -3 <= puVar23) goto LAB_001005da;
          puVar3 = (ushort *)(lVar16 + uVar20 * 4);
          bVar5 = *(byte *)((long)puVar3 + 3);
          uVar7 = *puVar3;
          *puVar23 = (char)puVar3[1];
          sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
          puVar3 = (ushort *)(lVar16 + uVar17 * 4);
          bVar6 = *(byte *)((long)puVar3 + 3);
          uVar8 = *puVar3;
          iVar12 = uVar27 + bVar5 + (uint)bVar6;
          puVar23[1] = (char)puVar3[1];
          sVar9 = (bVar6 < 0x41) * ('@' - bVar6);
          puVar3 = (ushort *)
                   (lVar16 + ((((uVar15 >> ((ulong)-(uVar27 + bVar5) & 0x3f)) << sVar10) >> sVar10)
                             + (ulong)uVar7) * 4);
          bVar5 = *(byte *)((long)puVar3 + 3);
          uVar7 = *puVar3;
          iVar14 = iVar12 + (uint)bVar5;
          puVar23[2] = (char)puVar3[1];
          sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
          uVar20 = (((uVar15 >> ((ulong)(uint)-iVar14 & 0x3f)) << sVar10) >> sVar10) + (ulong)uVar7;
          puVar3 = (ushort *)
                   (lVar16 + ((((uVar15 >> ((ulong)(uint)-iVar12 & 0x3f)) << sVar9) >> sVar9) +
                             (ulong)uVar8) * 4);
          bVar5 = *(byte *)((long)puVar3 + 3);
          uVar7 = *puVar3;
          uVar27 = iVar14 + (uint)bVar5;
          puVar23[3] = (char)puVar3[1];
          sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
          uVar17 = (((uVar15 >> ((ulong)-uVar27 & 0x3f)) << sVar10) >> sVar10) + (ulong)uVar7;
          puVar24 = puVar23 + 4;
          puVar23 = puVar23 + 4;
        } while (uVar27 < 0x41);
        goto LAB_00100b70;
      }
      puVar26 = puVar21;
      if (puVar21 != puVar22) {
        uVar13 = uVar27 >> 3;
        puVar26 = (ulong *)((long)puVar22 - (ulong)uVar13);
        if (puVar26 < puVar21) {
          uVar13 = (int)puVar22 - iVar11;
          puVar26 = (ulong *)((long)puVar22 - (ulong)uVar13);
        }
        uVar27 = uVar27 + uVar13 * -8;
        uVar15 = *puVar26;
        if (0x40 < uVar27) goto LAB_00100b70;
        goto LAB_0010059f;
      }
    }
    else {
      uVar27 = uVar13 + uVar7;
      uVar17 = uVar17 & uVar15 >> ((ulong)-uVar27 & 0x3f);
LAB_00100b70:
      puVar23 = puVar24;
      puVar26 = &zeroFilled_0;
    }
LAB_001005da:
    if (puVar23 <= param_1 + param_2 + -2) {
      puVar24 = puVar23;
      while( true ) {
        puVar3 = (ushort *)(lVar16 + uVar20 * 4);
        bVar5 = *(byte *)((long)puVar3 + 3);
        uVar7 = *puVar3;
        uVar27 = uVar27 + bVar5;
        *puVar24 = (char)puVar3[1];
        sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
        uVar20 = (((uVar15 >> ((ulong)-uVar27 & 0x3f)) << sVar10) >> sVar10) + (ulong)uVar7;
        if (0x40 < uVar27) {
          puVar23 = puVar24 + 2;
          puVar24[1] = *(undefined1 *)(param_6 + 0x206 + uVar17 * 4);
          goto LAB_00100bcc;
        }
        if (puVar26 < puVar1) {
          puVar22 = puVar21;
          uVar13 = uVar27;
          if (puVar21 != puVar26) {
            uVar13 = uVar27 >> 3;
            puVar22 = (ulong *)((long)puVar26 - (ulong)uVar13);
            if (puVar22 < puVar21) {
              uVar13 = (int)puVar26 - iVar11;
              puVar22 = (ulong *)((long)puVar26 - (ulong)uVar13);
            }
            uVar13 = uVar27 + uVar13 * -8;
            uVar15 = *puVar22;
          }
        }
        else {
          uVar13 = uVar27 & 7;
          puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar27 >> 3));
          uVar15 = *puVar22;
        }
        if (puVar23 + ((ulong)(param_1 + ((param_2 + -1) - (long)puVar23)) & 0xfffffffffffffffe) ==
            puVar24) goto LAB_00100cd0;
        puVar3 = (ushort *)(lVar16 + uVar17 * 4);
        bVar5 = *(byte *)((long)puVar3 + 3);
        uVar13 = uVar13 + bVar5;
        sVar10 = (bVar5 < 0x41) * ('@' - bVar5);
        uVar17 = (((uVar15 >> ((ulong)-uVar13 & 0x3f)) << sVar10) >> sVar10) + (ulong)*puVar3;
        puVar2 = puVar24 + 2;
        puVar24[1] = (char)puVar3[1];
        if (0x40 < uVar13) break;
        if (puVar22 < puVar1) {
          puVar26 = puVar21;
          uVar27 = uVar13;
          if (puVar21 != puVar22) {
            uVar27 = uVar13 >> 3;
            puVar26 = (ulong *)((long)puVar22 - (ulong)uVar27);
            if (puVar26 < puVar21) {
              uVar27 = (int)puVar22 - iVar11;
              puVar26 = (ulong *)((long)puVar22 - (ulong)uVar27);
            }
            uVar15 = *puVar26;
            uVar27 = uVar13 + uVar27 * -8;
          }
        }
        else {
          uVar27 = uVar13 & 7;
          puVar26 = (ulong *)((long)puVar22 - (ulong)(uVar13 >> 3));
          uVar15 = *puVar26;
        }
        puVar24 = puVar2;
        if (param_1 + param_2 + -2 < puVar2) goto LAB_00100cd0;
      }
      puVar23 = puVar24 + 3;
      puVar24[2] = *(undefined1 *)(param_6 + 0x206 + uVar20 * 4);
LAB_00100bcc:
      uVar17 = (long)puVar23 - (long)param_1;
      goto LAB_00100707;
    }
  }
  else {
    if (uVar17 == 0) goto LAB_00100ce0;
    bVar5 = *(byte *)((long)puVar21 + (uVar17 - 1));
    if (uVar17 < 8) {
      uVar15 = (ulong)(byte)*puVar21;
      switch(uVar17) {
      case 7:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 6) << 0x30);
      case 6:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 5) << 0x28);
      case 5:
        uVar15 = uVar15 + ((ulong)*(byte *)((long)puVar21 + 4) << 0x20);
      case 4:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 3) * 0x1000000;
      case 3:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 2) * 0x10000;
      case 2:
        uVar15 = uVar15 + (ulong)*(byte *)((long)puVar21 + 1) * 0x100;
      }
      if (bVar5 == 0) goto LAB_00100ba0;
      iVar12 = LZCOUNT((uint)bVar5) + -0x17 + (8 - (int)uVar17) * 8;
      puVar26 = puVar21;
    }
    else {
      if (bVar5 == 0) goto LAB_00100bb0;
      if (0xffffffffffffff88 < uVar17) goto LAB_00100707;
      puVar26 = (ulong *)((long)puVar21 + (uVar17 - 8));
      uVar15 = *puVar26;
      iVar12 = LZCOUNT((uint)bVar5) + -0x17;
    }
    uVar7 = *(ushort *)(param_6 + 0x200);
    puVar1 = puVar21 + 1;
    lVar16 = param_6 + 0x204;
    uVar13 = iVar12 + (uint)uVar7;
    uVar20 = -1L << ((ulong)uVar7 & 0x3f);
    uVar17 = ~uVar20;
    uVar20 = ~uVar20 & uVar15 >> ((ulong)-uVar13 & 0x3f);
    puVar24 = param_1;
    if (uVar13 < 0x41) {
      if (puVar26 < puVar1) {
        puVar22 = puVar21;
        uVar27 = uVar13;
        if (puVar21 != puVar26) {
          uVar27 = uVar13 >> 3;
          puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
          if (puVar22 < puVar21) {
            uVar27 = (int)puVar26 - iVar11;
            puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
          }
          uVar27 = uVar13 + uVar27 * -8;
          uVar15 = *puVar22;
        }
      }
      else {
        uVar27 = uVar13 & 7;
        puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar13 >> 3));
        uVar15 = *puVar22;
      }
      uVar27 = uVar7 + uVar27;
      uVar18 = (ulong)uVar27;
      uVar17 = uVar17 & uVar15 >> ((ulong)-uVar27 & 0x3f);
      if (0x40 < uVar27) goto LAB_00100c40;
      puVar23 = param_1;
      if (puVar1 <= puVar22) {
        uVar18 = (ulong)(uVar27 & 7);
        puVar26 = (ulong *)((long)puVar22 - (ulong)(uVar27 >> 3));
        uVar15 = *puVar26;
LAB_001009e3:
        do {
          uVar13 = (uint)uVar18;
          if (puVar26 < puVar1) {
            if (puVar21 == puVar26) goto LAB_00100a1d;
            puVar22 = (ulong *)((long)puVar26 - (uVar18 >> 3));
            if (puVar22 < puVar21) {
              uVar27 = (int)puVar26 - iVar11;
              puVar26 = (ulong *)((long)puVar26 - (ulong)uVar27);
              uVar18 = (ulong)(uVar13 + uVar27 * -8);
              uVar15 = *puVar26;
              goto LAB_00100a1d;
            }
            uVar13 = uVar13 + (int)(uVar18 >> 3) * -8;
            uVar15 = *puVar22;
          }
          else {
            uVar13 = uVar13 & 7;
            puVar22 = (ulong *)((long)puVar26 - (uVar18 >> 3));
            uVar15 = *puVar22;
          }
          uVar18 = (ulong)uVar13;
          puVar26 = puVar22;
          if (param_1 + param_2 + -3 <= puVar23) goto LAB_00100a1d;
          puVar3 = (ushort *)(lVar16 + uVar20 * 4);
          bVar5 = *(byte *)((long)puVar3 + 3);
          uVar13 = bVar5 + uVar13;
          uVar7 = *puVar3;
          puVar4 = (ushort *)(lVar16 + uVar17 * 4);
          *puVar23 = (char)puVar3[1];
          bVar6 = *(byte *)((long)puVar4 + 3);
          uVar19 = bVar6 + uVar13;
          uVar8 = *puVar4;
          puVar3 = (ushort *)
                   (lVar16 + (((uVar15 << (uVar18 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) +
                             (ulong)uVar7) * 4);
          puVar23[1] = (char)puVar4[1];
          bVar5 = *(byte *)((long)puVar3 + 3);
          uVar27 = bVar5 + uVar19;
          uVar7 = *puVar3;
          puVar4 = (ushort *)
                   (lVar16 + (((uVar15 << ((ulong)uVar13 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) +
                             (ulong)uVar8) * 4);
          puVar23[2] = (char)puVar3[1];
          bVar6 = *(byte *)((long)puVar4 + 3);
          uVar20 = ((uVar15 << ((ulong)uVar19 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) +
                   (ulong)uVar7;
          uVar13 = bVar6 + uVar27;
          uVar18 = (ulong)uVar13;
          uVar7 = *puVar4;
          puVar23[3] = (char)puVar4[1];
          uVar17 = ((uVar15 << ((ulong)uVar27 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) +
                   (ulong)uVar7;
          puVar24 = puVar23 + 4;
          puVar23 = puVar23 + 4;
        } while (uVar13 < 0x41);
        goto LAB_00100c40;
      }
      puVar26 = puVar21;
      if (puVar21 != puVar22) {
        uVar13 = uVar27 >> 3;
        puVar26 = (ulong *)((long)puVar22 - (ulong)uVar13);
        if (puVar26 < puVar21) {
          uVar13 = (int)puVar22 - iVar11;
          puVar26 = (ulong *)((long)puVar22 - (ulong)uVar13);
        }
        uVar15 = *puVar26;
        uVar27 = uVar27 + uVar13 * -8;
        uVar18 = (ulong)uVar27;
        if (0x40 < uVar27) goto LAB_00100c40;
        goto LAB_001009e3;
      }
    }
    else {
      uVar13 = uVar7 + uVar13;
      uVar18 = (ulong)uVar13;
      uVar17 = uVar17 & uVar15 >> ((ulong)-uVar13 & 0x3f);
LAB_00100c40:
      puVar23 = puVar24;
      puVar26 = &zeroFilled_0;
    }
LAB_00100a1d:
    if (puVar23 <= param_1 + param_2 + -2) {
      puVar24 = puVar23;
      do {
        puVar3 = (ushort *)(lVar16 + uVar20 * 4);
        bVar5 = *(byte *)((long)puVar3 + 3);
        uVar13 = (uint)bVar5 + (int)uVar18;
        uVar25 = (ulong)uVar13;
        uVar7 = *puVar3;
        *puVar24 = (char)puVar3[1];
        uVar20 = (ulong)uVar7 + ((uVar15 << (uVar18 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f));
        if (0x40 < uVar13) {
          puVar23 = puVar24 + 2;
          puVar24[1] = *(undefined1 *)(param_6 + 0x206 + uVar17 * 4);
          goto LAB_00100bcc;
        }
        if (puVar26 < puVar1) {
          puVar22 = puVar21;
          if (puVar21 != puVar26) {
            uVar27 = uVar13 >> 3;
            puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
            if (puVar22 < puVar21) {
              uVar27 = (int)puVar26 - iVar11;
              puVar22 = (ulong *)((long)puVar26 - (ulong)uVar27);
            }
            uVar15 = *puVar22;
            uVar25 = (ulong)(uVar13 + uVar27 * -8);
          }
        }
        else {
          uVar25 = (ulong)(uVar13 & 7);
          puVar22 = (ulong *)((long)puVar26 - (ulong)(uVar13 >> 3));
          uVar15 = *puVar22;
        }
        if (puVar23 + ((ulong)(param_1 + ((param_2 + -1) - (long)puVar23)) & 0xfffffffffffffffe) ==
            puVar24) break;
        puVar3 = (ushort *)(lVar16 + uVar17 * 4);
        uVar13 = (uint)*(byte *)((long)puVar3 + 3) + (int)uVar25;
        uVar18 = (ulong)uVar13;
        uVar17 = (ulong)*puVar3 +
                 ((uVar15 << (uVar25 & 0x3f)) >> ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f))
        ;
        puVar2 = puVar24 + 2;
        puVar24[1] = (char)puVar3[1];
        if (0x40 < uVar13) {
          puVar23 = puVar24 + 3;
          puVar24[2] = *(undefined1 *)(param_6 + 0x206 + uVar20 * 4);
          goto LAB_00100bcc;
        }
        if (puVar22 < puVar1) {
          puVar26 = puVar21;
          if (puVar21 != puVar22) {
            uVar27 = uVar13 >> 3;
            puVar26 = (ulong *)((long)puVar22 - (ulong)uVar27);
            if (puVar26 < puVar21) {
              uVar27 = (int)puVar22 - iVar11;
              puVar26 = (ulong *)((long)puVar22 - (ulong)uVar27);
            }
            uVar15 = *puVar26;
            uVar18 = (ulong)(uVar13 + uVar27 * -8);
          }
        }
        else {
          uVar18 = (ulong)(uVar13 & 7);
          puVar26 = (ulong *)((long)puVar22 - (ulong)(uVar13 >> 3));
          uVar15 = *puVar26;
        }
        puVar24 = puVar2;
      } while (puVar2 <= param_1 + param_2 + -2);
    }
  }
LAB_00100cd0:
  uVar17 = 0xffffffffffffffba;
LAB_00100707:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



void FSE_buildDTable_wksp(void)

{
  FSE_buildDTable_internal();
  return;
}



ulong FSE_decompress_wksp_bmi2
                (undefined1 *param_1,long param_2,long param_3,long param_4,uint param_5,
                long param_6,ulong param_7,int param_8)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong *puVar23;
  long in_FS_OFFSET;
  ulong local_60;
  uint local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar16 = FSE_decompress_wksp_body_bmi2();
      return uVar16;
    }
    goto LAB_00101a22;
  }
  local_44 = 0xff;
  uVar16 = 0xffffffffffffffff;
  if ((0x1ff < param_7) &&
     (uVar14 = FSE_readNCount_bmi2(param_6,&local_44,&local_48,param_3,param_4,0), uVar16 = uVar14,
     uVar14 < 0xffffffffffffff89)) {
    if ((param_5 < local_48) ||
       (lVar15 = (long)(1 << ((byte)local_48 & 0x1f)),
       param_7 < (lVar15 + 0x83 +
                 ((1L << ((byte)local_48 & 0x3f)) + 0xb + (ulong)(local_44 + 1) * 2 >> 2)) * 4)) {
      uVar16 = 0xffffffffffffffd4;
    }
    else {
      lVar15 = lVar15 * 4 + 0x204;
      uVar16 = FSE_buildDTable_internal
                         (param_6 + 0x200,param_6,local_44,local_48,param_6 + lVar15,
                          param_7 - lVar15);
      if (uVar16 < 0xffffffffffffff89) {
        uVar16 = param_4 - uVar14;
        puVar3 = (ulong *)(param_3 + uVar14);
        iVar10 = (int)puVar3;
        if (*(short *)(param_6 + 0x202) == 0) {
          if (uVar16 == 0) {
LAB_00101948:
            uVar16 = 0xffffffffffffffb8;
          }
          else {
            bVar6 = *(byte *)((long)puVar3 + (uVar16 - 1));
            if (uVar16 < 8) {
              local_60 = (ulong)(byte)*puVar3;
              switch(uVar16) {
              case 7:
                local_60 = local_60 + ((ulong)*(byte *)((long)puVar3 + 6) << 0x30);
              case 6:
                local_60 = local_60 + ((ulong)*(byte *)((long)puVar3 + 5) << 0x28);
              case 5:
                local_60 = local_60 + ((ulong)*(byte *)((long)puVar3 + 4) << 0x20);
              case 4:
                local_60 = local_60 + (ulong)*(byte *)((long)puVar3 + 3) * 0x1000000;
              case 3:
                local_60 = local_60 + (ulong)*(byte *)((long)puVar3 + 2) * 0x10000;
              case 2:
                local_60 = local_60 + (ulong)*(byte *)((long)puVar3 + 1) * 0x100;
              }
              if (bVar6 != 0) {
                uVar12 = 0x1f;
                if (bVar6 != 0) {
                  for (; bVar6 >> uVar12 == 0; uVar12 = uVar12 - 1) {
                  }
                }
                iVar11 = ((uVar12 ^ 0x1f) - 0x17) + (8 - (int)uVar16) * 8;
                puVar23 = puVar3;
LAB_00100f1c:
                uVar8 = *(ushort *)(param_6 + 0x200);
                puVar1 = puVar3 + 1;
                lVar15 = param_6 + 0x204;
                uVar12 = iVar11 + (uint)uVar8;
                uVar16 = ~(-1L << ((byte)uVar8 & 0x3f));
                uVar14 = local_60 >> (-(char)uVar12 & 0x3fU) & uVar16;
                puVar21 = param_1;
                if (uVar12 < 0x41) {
                  if (puVar23 < puVar1) {
                    puVar20 = puVar3;
                    uVar17 = uVar12;
                    if (puVar3 != puVar23) {
                      uVar17 = uVar12 >> 3;
                      puVar20 = (ulong *)((long)puVar23 - (ulong)uVar17);
                      if (puVar20 < puVar3) {
                        uVar17 = (int)puVar23 - iVar10;
                        puVar20 = (ulong *)((long)puVar23 - (ulong)uVar17);
                      }
                      local_60 = *puVar20;
                      uVar17 = uVar12 + uVar17 * -8;
                    }
                  }
                  else {
                    uVar17 = uVar12 & 7;
                    puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar12 >> 3));
                    local_60 = *puVar20;
                  }
                  uVar17 = uVar17 + uVar8;
                  uVar16 = uVar16 & local_60 >> (-(char)uVar17 & 0x3fU);
                  if (0x40 < uVar17) goto LAB_00101805;
                  puVar22 = param_1;
                  if (puVar1 <= puVar20) {
                    puVar23 = (ulong *)((long)puVar20 - (ulong)(uVar17 >> 3));
                    local_60 = *puVar23;
                    uVar17 = uVar17 & 7;
LAB_00101148:
                    do {
                      if (puVar23 < puVar1) {
                        if (puVar3 == puVar23) goto LAB_00101187;
                        puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar17 >> 3));
                        if (puVar20 < puVar3) {
                          uVar12 = (int)puVar23 - iVar10;
                          puVar23 = (ulong *)((long)puVar23 - (ulong)uVar12);
                          uVar17 = uVar17 + uVar12 * -8;
                          local_60 = *puVar23;
                          goto LAB_00101187;
                        }
                        local_60 = *puVar20;
                        uVar17 = uVar17 + (uVar17 >> 3) * -8;
                      }
                      else {
                        puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar17 >> 3));
                        local_60 = *puVar20;
                        uVar17 = uVar17 & 7;
                      }
                      puVar23 = puVar20;
                      if (param_1 + param_2 + -3 <= puVar22) goto LAB_00101187;
                      puVar5 = (ushort *)(lVar15 + uVar14 * 4);
                      puVar4 = (ushort *)(lVar15 + uVar16 * 4);
                      bVar6 = *(byte *)((long)puVar5 + 3);
                      puVar21 = puVar22 + 4;
                      uVar8 = *puVar5;
                      iVar11 = uVar17 + bVar6;
                      *puVar22 = (char)puVar5[1];
                      bVar7 = *(byte *)((long)puVar4 + 3);
                      uVar9 = *puVar4;
                      iVar13 = iVar11 + (uint)bVar7;
                      puVar22[1] = (char)puVar4[1];
                      puVar5 = (ushort *)
                               (lVar15 + ((~(-1L << (bVar6 & 0x3f)) &
                                          local_60 >> (-(char)iVar11 & 0x3fU)) + (ulong)uVar8) * 4);
                      bVar6 = *(byte *)((long)puVar5 + 3);
                      uVar8 = *puVar5;
                      iVar11 = iVar13 + (uint)bVar6;
                      puVar22[2] = (char)puVar5[1];
                      uVar14 = (local_60 >> (-(char)iVar11 & 0x3fU) & ~(-1L << (bVar6 & 0x3f))) +
                               (ulong)uVar8;
                      puVar5 = (ushort *)
                               (lVar15 + ((~(-1L << (bVar7 & 0x3f)) &
                                          local_60 >> (-(char)iVar13 & 0x3fU)) + (ulong)uVar9) * 4);
                      uVar17 = iVar11 + (uint)*(byte *)((long)puVar5 + 3);
                      uVar16 = (local_60 >> (-(char)uVar17 & 0x3fU) &
                               ~(-1L << (*(byte *)((long)puVar5 + 3) & 0x3f))) + (ulong)*puVar5;
                      puVar22[3] = (char)puVar5[1];
                      puVar22 = puVar21;
                    } while (uVar17 < 0x41);
                    goto LAB_00101805;
                  }
                  puVar23 = puVar3;
                  if (puVar3 != puVar20) {
                    uVar12 = uVar17 >> 3;
                    puVar23 = (ulong *)((long)puVar20 - (ulong)uVar12);
                    if (puVar23 < puVar3) {
                      uVar12 = (int)puVar20 - iVar10;
                      puVar23 = (ulong *)((long)puVar20 - (ulong)uVar12);
                    }
                    local_60 = *puVar23;
                    uVar17 = uVar17 + uVar12 * -8;
                    if (0x40 < uVar17) goto LAB_00101805;
                    goto LAB_00101148;
                  }
                }
                else {
                  uVar17 = uVar12 + uVar8;
                  uVar16 = uVar16 & local_60 >> (-(char)uVar17 & 0x3fU);
LAB_00101805:
                  puVar22 = puVar21;
                  puVar23 = &zeroFilled_0;
                }
LAB_00101187:
                if (puVar22 <= param_1 + param_2 + -2) {
                  puVar21 = puVar22;
                  while( true ) {
                    puVar5 = (ushort *)(lVar15 + uVar14 * 4);
                    bVar6 = *(byte *)((long)puVar5 + 3);
                    uVar17 = uVar17 + bVar6;
                    uVar8 = *puVar5;
                    *puVar21 = (char)puVar5[1];
                    uVar14 = (local_60 >> (-(char)uVar17 & 0x3fU) & ~(-1L << (bVar6 & 0x3f))) +
                             (ulong)uVar8;
                    if (0x40 < uVar17) {
                      puVar22 = puVar21 + 2;
                      puVar21[1] = *(undefined1 *)(param_6 + 0x206 + uVar16 * 4);
                      goto LAB_0010184a;
                    }
                    if (puVar23 < puVar1) {
                      puVar20 = puVar3;
                      uVar12 = uVar17;
                      if (puVar3 != puVar23) {
                        uVar12 = uVar17 >> 3;
                        puVar20 = (ulong *)((long)puVar23 - (ulong)uVar12);
                        if (puVar20 < puVar3) {
                          uVar12 = (uint)((long)puVar23 - (long)puVar3);
                          puVar20 = (ulong *)((long)puVar23 -
                                             ((long)puVar23 - (long)puVar3 & 0xffffffffU));
                        }
                        local_60 = *puVar20;
                        uVar12 = uVar17 + uVar12 * -8;
                      }
                    }
                    else {
                      uVar12 = uVar17 & 7;
                      puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar17 >> 3));
                      local_60 = *puVar20;
                    }
                    if (puVar22 + ((ulong)(param_1 + ((param_2 + -1) - (long)puVar22)) &
                                  0xfffffffffffffffe) == puVar21) goto LAB_00101920;
                    puVar5 = (ushort *)(lVar15 + uVar16 * 4);
                    uVar12 = uVar12 + *(byte *)((long)puVar5 + 3);
                    uVar16 = (local_60 >> (-(char)uVar12 & 0x3fU) &
                             ~(-1L << (*(byte *)((long)puVar5 + 3) & 0x3f))) + (ulong)*puVar5;
                    puVar2 = puVar21 + 2;
                    puVar21[1] = (char)puVar5[1];
                    if (0x40 < uVar12) break;
                    if (puVar20 < puVar1) {
                      puVar23 = puVar3;
                      uVar17 = uVar12;
                      if (puVar3 != puVar20) {
                        uVar17 = uVar12 >> 3;
                        puVar23 = (ulong *)((long)puVar20 - (ulong)uVar17);
                        if (puVar23 < puVar3) {
                          uVar17 = (int)puVar20 - iVar10;
                          puVar23 = (ulong *)((long)puVar20 - (ulong)uVar17);
                        }
                        local_60 = *puVar23;
                        uVar17 = uVar12 + uVar17 * -8;
                      }
                    }
                    else {
                      uVar17 = uVar12 & 7;
                      puVar23 = (ulong *)((long)puVar20 - (ulong)(uVar12 >> 3));
                      local_60 = *puVar23;
                    }
                    puVar21 = puVar2;
                    if (param_1 + param_2 + -2 < puVar2) goto LAB_00101920;
                  }
                  puVar22 = puVar21 + 3;
                  puVar21[2] = *(undefined1 *)(param_6 + 0x206 + uVar14 * 4);
LAB_0010184a:
                  uVar16 = (long)puVar22 - (long)param_1;
                  goto LAB_001012e7;
                }
                goto LAB_00101920;
              }
LAB_00101818:
              uVar16 = 0xffffffffffffffec;
            }
            else if (bVar6 == 0) {
LAB_00101828:
              uVar16 = 0xffffffffffffffff;
            }
            else if (uVar16 < 0xffffffffffffff89) {
              uVar12 = 0x1f;
              if (bVar6 != 0) {
                for (; bVar6 >> uVar12 == 0; uVar12 = uVar12 - 1) {
                }
              }
              puVar23 = (ulong *)((long)puVar3 + (uVar16 - 8));
              local_60 = *puVar23;
              iVar11 = (uVar12 ^ 0x1f) - 0x17;
              goto LAB_00100f1c;
            }
          }
        }
        else {
          if (uVar16 == 0) goto LAB_00101948;
          bVar6 = *(byte *)((long)puVar3 + (uVar16 - 1));
          if (uVar16 < 8) {
            uVar14 = (ulong)(byte)*puVar3;
            switch(uVar16) {
            case 7:
              uVar14 = uVar14 + ((ulong)*(byte *)((long)puVar3 + 6) << 0x30);
            case 6:
              uVar14 = uVar14 + ((ulong)*(byte *)((long)puVar3 + 5) << 0x28);
            case 5:
              uVar14 = uVar14 + ((ulong)*(byte *)((long)puVar3 + 4) << 0x20);
            case 4:
              uVar14 = uVar14 + (ulong)*(byte *)((long)puVar3 + 3) * 0x1000000;
            case 3:
              uVar14 = uVar14 + (ulong)*(byte *)((long)puVar3 + 2) * 0x10000;
            case 2:
              uVar14 = uVar14 + (ulong)*(byte *)((long)puVar3 + 1) * 0x100;
            }
            if (bVar6 == 0) goto LAB_00101818;
            uVar12 = 0x1f;
            if (bVar6 != 0) {
              for (; bVar6 >> uVar12 == 0; uVar12 = uVar12 - 1) {
              }
            }
            iVar11 = ((uVar12 ^ 0x1f) - 0x17) + (8 - (int)uVar16) * 8;
            puVar23 = puVar3;
          }
          else {
            if (bVar6 == 0) goto LAB_00101828;
            if (0xffffffffffffff88 < uVar16) goto LAB_001012e7;
            puVar23 = (ulong *)((long)puVar3 + (uVar16 - 8));
            uVar12 = 0x1f;
            if (bVar6 != 0) {
              for (; bVar6 >> uVar12 == 0; uVar12 = uVar12 - 1) {
              }
            }
            uVar14 = *puVar23;
            iVar11 = (uVar12 ^ 0x1f) - 0x17;
          }
          uVar8 = *(ushort *)(param_6 + 0x200);
          puVar1 = puVar3 + 1;
          lVar15 = param_6 + 0x204;
          uVar12 = iVar11 + (uint)uVar8;
          uVar18 = ~(-1L << ((byte)uVar8 & 0x3f));
          uVar16 = uVar14 >> (-(char)uVar12 & 0x3fU) & uVar18;
          puVar21 = param_1;
          if (uVar12 < 0x41) {
            if (puVar23 < puVar1) {
              puVar20 = puVar3;
              uVar17 = uVar12;
              if (puVar3 != puVar23) {
                uVar17 = uVar12 >> 3;
                puVar20 = (ulong *)((long)puVar23 - (ulong)uVar17);
                if (puVar20 < puVar3) {
                  uVar17 = (uint)((long)puVar23 - (long)puVar3);
                  puVar20 = (ulong *)((long)puVar23 - ((long)puVar23 - (long)puVar3 & 0xffffffffU));
                }
                uVar14 = *puVar20;
                uVar17 = uVar12 + uVar17 * -8;
              }
            }
            else {
              uVar17 = uVar12 & 7;
              puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar12 >> 3));
              uVar14 = *puVar20;
            }
            uVar17 = uVar8 + uVar17;
            uVar18 = uVar18 & uVar14 >> (-(char)uVar17 & 0x3fU);
            if (0x40 < uVar17) goto LAB_00101935;
            puVar22 = param_1;
            if (puVar1 <= puVar20) {
              puVar23 = (ulong *)((long)puVar20 - (ulong)(uVar17 >> 3));
              uVar14 = *puVar23;
              uVar17 = uVar17 & 7;
LAB_00101639:
              do {
                if (puVar23 < puVar1) {
                  if (puVar3 == puVar23) goto LAB_0010167d;
                  puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar17 >> 3));
                  if (puVar20 < puVar3) {
                    uVar12 = (int)puVar23 - iVar10;
                    puVar23 = (ulong *)((long)puVar23 - (ulong)uVar12);
                    uVar17 = uVar17 + uVar12 * -8;
                    uVar14 = *puVar23;
                    goto LAB_0010167d;
                  }
                  uVar14 = *puVar20;
                  uVar17 = uVar17 + (uVar17 >> 3) * -8;
                }
                else {
                  puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar17 >> 3));
                  uVar14 = *puVar20;
                  uVar17 = uVar17 & 7;
                }
                puVar23 = puVar20;
                if (param_1 + param_2 + -3 <= puVar22) goto LAB_0010167d;
                puVar5 = (ushort *)(lVar15 + uVar16 * 4);
                puVar21 = puVar22 + 4;
                bVar6 = *(byte *)((long)puVar5 + 3);
                iVar13 = bVar6 + uVar17;
                uVar8 = *puVar5;
                *puVar22 = (char)puVar5[1];
                puVar5 = (ushort *)(lVar15 + uVar18 * 4);
                bVar7 = *(byte *)((long)puVar5 + 3);
                puVar4 = (ushort *)
                         (lVar15 + (((uVar14 << ((byte)uVar17 & 0x3f)) >> (-bVar6 & 0x3f)) +
                                   (ulong)uVar8) * 4);
                uVar8 = *puVar5;
                iVar19 = (uint)bVar7 + iVar13;
                puVar22[1] = (char)puVar5[1];
                bVar6 = *(byte *)((long)puVar4 + 3);
                iVar11 = (uint)bVar6 + iVar19;
                uVar9 = *puVar4;
                puVar22[2] = (char)puVar4[1];
                uVar16 = ((uVar14 << ((byte)iVar19 & 0x3f)) >> (-bVar6 & 0x3f)) + (ulong)uVar9;
                puVar5 = (ushort *)
                         (lVar15 + ((ulong)uVar8 +
                                   ((uVar14 << ((byte)iVar13 & 0x3f)) >> (-bVar7 & 0x3f))) * 4);
                bVar6 = *(byte *)((long)puVar5 + 3);
                uVar8 = *puVar5;
                uVar17 = (uint)bVar6 + iVar11;
                puVar22[3] = (char)puVar5[1];
                uVar18 = (ulong)uVar8 + ((uVar14 << ((byte)iVar11 & 0x3f)) >> (-bVar6 & 0x3f));
                puVar22 = puVar21;
              } while (uVar17 < 0x41);
              goto LAB_00101935;
            }
            puVar23 = puVar3;
            if (puVar3 != puVar20) {
              uVar12 = uVar17 >> 3;
              puVar23 = (ulong *)((long)puVar20 - (ulong)uVar12);
              if (puVar23 < puVar3) {
                uVar12 = (uint)((long)puVar20 - (long)puVar3);
                puVar23 = (ulong *)((long)puVar20 - ((long)puVar20 - (long)puVar3 & 0xffffffffU));
              }
              uVar14 = *puVar23;
              uVar17 = uVar17 + uVar12 * -8;
              if (0x40 < uVar17) goto LAB_00101935;
              goto LAB_00101639;
            }
          }
          else {
            uVar17 = uVar8 + uVar12;
            uVar18 = uVar18 & uVar14 >> (-(char)uVar17 & 0x3fU);
LAB_00101935:
            puVar22 = puVar21;
            puVar23 = &zeroFilled_0;
          }
LAB_0010167d:
          if (puVar22 <= param_1 + param_2 + -2) {
            puVar21 = puVar22;
            do {
              puVar5 = (ushort *)(lVar15 + uVar16 * 4);
              bVar6 = *(byte *)((long)puVar5 + 3);
              uVar12 = bVar6 + uVar17;
              uVar8 = *puVar5;
              *puVar21 = (char)puVar5[1];
              uVar16 = ((uVar14 << ((byte)uVar17 & 0x3f)) >> (-bVar6 & 0x3f)) + (ulong)uVar8;
              if (0x40 < uVar12) {
                puVar22 = puVar21 + 2;
                puVar21[1] = *(undefined1 *)(param_6 + 0x206 + uVar18 * 4);
                goto LAB_0010184a;
              }
              if (puVar23 < puVar1) {
                puVar20 = puVar3;
                uVar17 = uVar12;
                if (puVar3 != puVar23) {
                  uVar17 = uVar12 >> 3;
                  puVar20 = (ulong *)((long)puVar23 - (ulong)uVar17);
                  if (puVar20 < puVar3) {
                    uVar17 = (uint)((long)puVar23 - (long)puVar3);
                    puVar20 = (ulong *)((long)puVar23 - ((long)puVar23 - (long)puVar3 & 0xffffffffU)
                                       );
                  }
                  uVar14 = *puVar20;
                  uVar17 = uVar12 + uVar17 * -8;
                }
              }
              else {
                uVar17 = uVar12 & 7;
                puVar20 = (ulong *)((long)puVar23 - (ulong)(uVar12 >> 3));
                uVar14 = *puVar20;
              }
              if (puVar22 + ((ulong)(param_1 + ((param_2 + -1) - (long)puVar22)) &
                            0xfffffffffffffffe) == puVar21) break;
              puVar5 = (ushort *)(lVar15 + uVar18 * 4);
              uVar12 = *(byte *)((long)puVar5 + 3) + uVar17;
              puVar2 = puVar21 + 2;
              uVar18 = (ulong)*puVar5 +
                       ((uVar14 << ((byte)uVar17 & 0x3f)) >> (-*(byte *)((long)puVar5 + 3) & 0x3f));
              puVar21[1] = (char)puVar5[1];
              if (0x40 < uVar12) {
                puVar22 = puVar21 + 3;
                puVar21[2] = *(undefined1 *)(param_6 + 0x206 + uVar16 * 4);
                goto LAB_0010184a;
              }
              if (puVar20 < puVar1) {
                puVar23 = puVar3;
                uVar17 = uVar12;
                if (puVar3 != puVar20) {
                  uVar17 = uVar12 >> 3;
                  puVar23 = (ulong *)((long)puVar20 - (ulong)uVar17);
                  if (puVar23 < puVar3) {
                    uVar17 = (int)puVar20 - iVar10;
                    puVar23 = (ulong *)((long)puVar20 - (ulong)uVar17);
                  }
                  uVar14 = *puVar23;
                  uVar17 = uVar12 + uVar17 * -8;
                }
              }
              else {
                uVar17 = uVar12 & 7;
                puVar23 = (ulong *)((long)puVar20 - (ulong)(uVar12 >> 3));
                uVar14 = *puVar23;
              }
              puVar21 = puVar2;
            } while (puVar2 <= param_1 + param_2 + -2);
          }
LAB_00101920:
          uVar16 = 0xffffffffffffffba;
        }
      }
    }
  }
LAB_001012e7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
LAB_00101a22:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


