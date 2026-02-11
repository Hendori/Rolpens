
undefined8
inflate_table(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,
             undefined1 *param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 uVar24;
  short sVar25;
  uint uVar26;
  uint uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_d8;
  uint local_d4;
  uint local_c8;
  uint local_c4;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ushort local_68 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  if (param_3 != 0) {
    puVar12 = param_2;
    do {
      uVar21 = *puVar12;
      puVar12 = puVar12 + 1;
      *(short *)(local_88 + (ulong)uVar21 * 2) = *(short *)(local_88 + (ulong)uVar21 * 2) + 1;
    } while (param_2 + param_3 != puVar12);
  }
  uVar27 = *param_5;
  psVar13 = (short *)(local_78 + 0xe);
  uVar26 = 0xf;
  do {
    if (*psVar13 != 0) {
      if (uVar26 == 1) {
        uVar23 = 1;
        goto LAB_00100123;
      }
      psVar13 = (short *)(local_88 + 2);
      uVar23 = 1;
      goto LAB_0010011d;
    }
    psVar13 = psVar13 + -1;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  puVar4 = (undefined4 *)*param_4;
  local_d8 = 1;
  *puVar4 = 0x140;
  *param_4 = (long)(puVar4 + 2);
  puVar4[1] = 0x140;
LAB_001000b7:
  *param_5 = local_d8;
  uVar9 = 0;
  goto LAB_001000c0;
LAB_00100150:
  uVar21 = *puVar12;
  puVar12 = puVar12 + 1;
  iVar11 = iVar11 * 2 - (uint)uVar21;
  if (iVar11 < 0) goto LAB_00100270;
  goto LAB_00100162;
  while( true ) {
    uVar22 = (int)uVar23 + 1;
    uVar23 = (ulong)uVar22;
    psVar13 = psVar13 + 1;
    if (uVar22 == uVar26) break;
LAB_0010011d:
    if (*psVar13 != 0) break;
  }
LAB_00100123:
  iVar11 = 2 - (uint)(ushort)local_88._2_2_;
  if (-1 < iVar11) {
    puVar12 = (ushort *)(local_88 + 4);
LAB_00100162:
    if (local_68 != puVar12) goto LAB_00100150;
    if ((iVar11 == 0) || ((param_1 != 0 && (uVar26 == 1)))) {
      sVar25 = 0;
      local_68[1] = 0;
      lVar14 = 0;
      do {
        sVar25 = sVar25 + *(short *)(local_88 + lVar14 + 2);
        *(short *)((long)local_68 + lVar14 + 4) = sVar25;
        lVar14 = lVar14 + 2;
      } while (lVar14 != 0x1c);
      lVar14 = *param_4;
      if (uVar26 < uVar27) {
        uVar27 = uVar26;
      }
      uVar15 = (ulong)uVar27;
      if (uVar27 < (uint)uVar23) {
        uVar15 = uVar23;
      }
      local_c8 = 1 << ((byte)uVar15 & 0x1f);
      local_d8 = (uint)uVar15;
      local_b8 = param_6;
      local_b0 = param_6;
      if (param_3 == 0) {
        if (param_1 == 0) {
          local_d4 = 0x14;
          bVar28 = false;
          goto LAB_001002ac;
        }
LAB_00100224:
        if (param_1 == 1) {
          if (local_c8 < 0x355) {
            local_d4 = 0x101;
            local_b0 = lext_2;
            local_b8 = lbase_3;
            goto LAB_001002a4;
          }
        }
        else {
          bVar28 = param_1 == 2;
          if ((local_c8 < 0x251) || (!bVar28)) {
            local_d4 = 0;
            local_b8 = dbase_1;
            local_b0 = dext_0;
            goto LAB_001002ac;
          }
        }
LAB_00100288:
        uVar9 = 1;
        goto LAB_001000c0;
      }
      uVar16 = 0;
      do {
        uVar21 = param_2[uVar16];
        if (uVar21 != 0) {
          uVar3 = local_68[uVar21];
          *(short *)(param_6 + (ulong)uVar3 * 2) = (short)uVar16;
          local_68[uVar21] = uVar3 + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_3);
      if (param_1 != 0) goto LAB_00100224;
      local_d4 = 0x14;
LAB_001002a4:
      bVar28 = param_1 == 2;
LAB_001002ac:
      uVar19 = 0;
      uVar22 = 0;
      uVar7 = local_c8 - 1;
      uVar16 = 0;
      local_c4 = 0xffffffff;
      lVar18 = lVar14;
      uVar27 = local_d8;
      do {
        uVar24 = 0;
        bVar6 = (byte)uVar22;
        cVar5 = (char)uVar23;
        uVar21 = *(ushort *)(param_6 + uVar16 * 2);
        if (local_d4 <= uVar21 + 1) {
          if (uVar21 < local_d4) {
            uVar21 = 0;
            uVar24 = 0x60;
          }
          else {
            uVar24 = local_b0[(ulong)(uVar21 - local_d4) * 2];
            uVar21 = *(ushort *)(local_b8 + (ulong)(uVar21 - local_d4) * 2);
          }
        }
        uVar17 = 1 << ((byte)uVar27 & 0x1f);
        uVar8 = uVar17;
        do {
          uVar8 = uVar8 - (1 << (cVar5 - bVar6 & 0x1f));
          puVar2 = (undefined1 *)(lVar18 + (ulong)((uVar19 >> (bVar6 & 0x1f)) + uVar8) * 4);
          *puVar2 = uVar24;
          puVar2[1] = cVar5 - bVar6;
          *(ushort *)(puVar2 + 2) = uVar21;
        } while (uVar8 != 0);
        uVar8 = 1 << (cVar5 - 1U & 0x1f);
        uVar10 = (ulong)uVar8;
        if ((uVar19 & uVar8) == 0) {
LAB_001004d0:
          uVar10 = (ulong)(uVar8 + (uVar8 - 1 & uVar19));
        }
        else {
          do {
            uVar10 = uVar10 >> 1;
            uVar8 = (uint)uVar10;
          } while ((uVar19 & uVar8) != 0);
          if (uVar8 != 0) goto LAB_001004d0;
        }
        uVar16 = (ulong)((int)uVar16 + 1);
        psVar13 = (short *)(local_88 + uVar23 * 2);
        *psVar13 = *psVar13 + -1;
        uVar19 = (uint)uVar10;
        if (*psVar13 == 0) {
          if ((uint)uVar23 != uVar26) {
            uVar23 = (ulong)param_2[*(ushort *)(param_6 + uVar16 * 2)];
            goto LAB_001003dc;
          }
          if (uVar19 != 0) {
            puVar2 = (undefined1 *)(lVar18 + uVar10 * 4);
            *puVar2 = 0x40;
            puVar2[1] = cVar5 - bVar6;
            *(undefined2 *)(puVar2 + 2) = 0;
          }
          *param_4 = lVar14 + (ulong)local_c8 * 4;
          goto LAB_001000b7;
        }
LAB_001003dc:
        uVar8 = (uint)uVar23;
        if ((local_d8 < uVar8) && (uVar20 = uVar7 & uVar19, uVar20 != local_c4)) {
          if (uVar22 == 0) {
            uVar22 = local_d8;
          }
          lVar18 = lVar18 + (ulong)uVar17 * 4;
          uVar27 = uVar8 - uVar22;
          if ((uVar8 < uVar26) &&
             (iVar11 = (1 << ((byte)uVar27 & 0x1f)) - (uint)*(ushort *)(local_88 + uVar23 * 2),
             0 < iVar11)) {
            puVar12 = (ushort *)(local_88 + (ulong)(uVar8 + 1) * 2);
            do {
              uVar27 = uVar27 + 1;
              if (uVar26 <= uVar22 + uVar27) break;
              uVar21 = *puVar12;
              puVar12 = puVar12 + 1;
              iVar11 = iVar11 * 2 - (uint)uVar21;
            } while (0 < iVar11);
          }
          local_c8 = local_c8 + (1 << ((byte)uVar27 & 0x1f));
          if (((0x354 < local_c8) && (param_1 == 1)) || ((0x250 < local_c8 && (bVar28))))
          goto LAB_00100288;
          pbVar1 = (byte *)(lVar14 + (ulong)uVar20 * 4);
          pbVar1[1] = (byte)uVar15;
          *pbVar1 = (byte)uVar27;
          *(short *)(pbVar1 + 2) = (short)(lVar18 - lVar14 >> 2);
          local_c4 = uVar20;
        }
      } while( true );
    }
  }
LAB_00100270:
  uVar9 = 0xffffffff;
LAB_001000c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


