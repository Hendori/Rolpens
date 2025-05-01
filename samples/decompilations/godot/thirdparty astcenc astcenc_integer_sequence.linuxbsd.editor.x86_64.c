
/* get_ise_sequence_bitcount(unsigned int, quant_method) */

undefined1  [16] get_ise_sequence_bitcount(int param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0x400;
  if (param_2 < 0x15) {
    bVar3 = (byte)ise_sizes[param_2] >> 6;
    uVar2 = bVar3 + 1 + (uint)bVar3;
    param_3 = (ulong)((uVar2 - 1) + ((byte)ise_sizes[param_2] & 0x3f) * param_1);
    uVar1 = param_3 / uVar2;
    param_3 = param_3 % (ulong)uVar2;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* encode_ise(quant_method, unsigned int, unsigned char const*, unsigned char*, unsigned int) */

void encode_ise(uint param_1,uint param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  byte *pbVar22;
  ushort *puVar23;
  bool bVar24;
  uint local_8c;
  uint local_88;
  uint local_68;
  uint local_48;
  
  bVar5 = btq_counts[param_1];
  uVar9 = bVar5 & 0x3f;
  uVar1 = (1 << (bVar5 & 0x1f)) - 1;
  bVar12 = (byte)uVar9;
  local_48 = param_5;
  if ((bVar5 & 0x40) == 0) {
    if (-1 < (char)bVar5) {
      pbVar22 = param_3 + param_2;
      do {
        bVar5 = *param_3;
        uVar16 = param_5 >> 3;
        bVar12 = (byte)param_5 & 7;
        param_3 = param_3 + 1;
        param_5 = param_5 + uVar9;
        puVar23 = (ushort *)((ulong)uVar16 + param_4);
        *puVar23 = ~(ushort)(uVar1 << bVar12) & *puVar23 | (ushort)((bVar5 & uVar1) << bVar12);
      } while (param_3 != pbVar22);
      return;
    }
    local_88 = param_2 / 3;
    if (param_2 < 3) {
      pbVar22 = param_3;
      if (param_2 == 2) {
        uVar16 = 0;
        uVar13 = (ulong)(uint)((int)(uint)param_3[1] >> (bVar5 & 0x1f));
      }
      else {
        uVar16 = 0;
        uVar13 = 0;
      }
LAB_0010072c:
      lVar17 = 1;
      bVar5 = integer_of_quints[(ulong)(uint)((int)(uint)*pbVar22 >> (bVar5 & 0x1f)) + uVar13 * 5];
      do {
        pbVar4 = &DAT_00100be1 + lVar17;
        iVar20 = *pbVar4 + uVar9;
        pbVar22 = &DAT_00100bdf + lVar17;
        uVar15 = (1 << ((byte)iVar20 & 0x1f)) - 1;
        puVar23 = (ushort *)((ulong)(local_48 >> 3) + param_4);
        lVar8 = lVar17 + ((ulong)uVar16 - 1);
        lVar17 = lVar17 + 1;
        bVar11 = (byte)local_48 & 7;
        *puVar23 = ~(ushort)(uVar15 << bVar11) & *puVar23 |
                   (ushort)(((param_3[lVar8] & uVar1 |
                             ((int)(uint)bVar5 >> (*pbVar22 & 0x1f) & (1 << (*pbVar4 & 0x1f)) - 1U)
                             << (bVar12 & 0x1f) & 0xff) & uVar15) << bVar11);
        local_48 = local_48 + iVar20;
      } while (lVar17 != (ulong)((param_2 - 1) - uVar16) + 2);
      return;
    }
    iVar20 = uVar9 + 3;
    iVar2 = uVar9 + 2;
    lVar17 = 0;
    uVar16 = (1 << ((byte)iVar20 & 0x1f)) - 1;
    uVar14 = 0;
    uVar19 = (1 << ((byte)iVar2 & 0x1f)) - 1;
    uVar15 = param_5;
    do {
      iVar7 = (int)lVar17;
      bVar11 = integer_of_quints
               [(ulong)(uint)((int)(uint)param_3[lVar17] >> (bVar12 & 0x1f)) +
                (ulong)(uint)((int)(uint)param_3[iVar7 + 2] >> (bVar12 & 0x1f)) * 0x19 +
                (ulong)(uint)((int)(uint)param_3[iVar7 + 1] >> (bVar12 & 0x1f)) * 5];
      puVar23 = (ushort *)((ulong)(uVar15 >> 3) + param_4);
      bVar10 = (byte)uVar15 & 7;
      *puVar23 = ~(ushort)(uVar16 << bVar10) & *puVar23 |
                 (ushort)(((param_3[lVar17] & uVar1 | (bVar11 & 7) << (bVar12 & 0x1f) & 0xff) &
                          uVar16) << bVar10);
      bVar10 = (byte)(iVar20 + uVar15) & 7;
      puVar23 = (ushort *)((ulong)(iVar20 + uVar15 >> 3) + param_4);
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 3;
      *puVar23 = ~(ushort)(uVar19 << bVar10) & *puVar23 |
                 (ushort)(((param_3[iVar7 + 1] & uVar1 | (bVar11 >> 3 & 3) << (bVar12 & 0x1f) & 0xff
                           ) & uVar19) << bVar10);
      uVar3 = iVar20 + iVar2 + uVar15;
      bVar10 = (byte)uVar3 & 7;
      puVar23 = (ushort *)((ulong)(uVar3 >> 3) + param_4);
      *puVar23 = ~(ushort)(uVar19 << bVar10) & *puVar23 |
                 (ushort)(((param_3[iVar7 + 2] & uVar1 | (bVar11 >> 5 & 3) << (bVar12 & 0x1f) & 0xff
                           ) & uVar19) << bVar10);
      uVar15 = uVar15 + uVar9 * 3 + 7;
    } while (uVar14 < local_88);
    uVar16 = local_88 * 3;
    if (param_2 != uVar16) {
      uVar13 = 0;
      if (uVar16 + 1 < param_2) {
        uVar13 = (ulong)(uint)((int)(uint)param_3[uVar16 + 1] >> (bVar5 & 0x1f));
      }
      if (uVar16 < param_2) {
        local_48 = param_5 + iVar2 * 2 + iVar20 + (iVar20 + iVar2 * 2) * (local_88 - 1);
        pbVar22 = param_3 + uVar16;
        goto LAB_0010072c;
      }
    }
  }
  else {
    local_68 = param_2 / 5;
    if (param_2 < 5) {
      uVar18 = 2;
      uVar13 = 3;
      uVar16 = 0;
      uVar21 = 1;
      pbVar22 = param_3;
    }
    else {
      iVar20 = uVar9 + 2;
      iVar7 = iVar20 * 2;
      uVar16 = (1 << ((byte)iVar20 & 0x1f)) - 1;
      iVar2 = iVar20 * 3 + iVar7 + -2;
      local_8c = 0;
      uVar15 = (1 << (bVar12 + 1 & 0x1f)) - 1;
      uVar14 = iVar7 + 1 + param_5 + uVar9;
      lVar17 = 0;
      uVar19 = param_5;
      do {
        iVar6 = (int)lVar17;
        bVar11 = integer_of_trits
                 [(ulong)(uint)((int)(uint)param_3[lVar17] >> (bVar12 & 0x1f)) +
                  (ulong)(uint)((int)(uint)param_3[iVar6 + 3] >> (bVar12 & 0x1f)) * 0x1b +
                  (ulong)(uint)((int)(uint)param_3[iVar6 + 1] >> (bVar12 & 0x1f)) * 3 +
                  (ulong)(uint)((int)(uint)param_3[iVar6 + 2] >> (bVar12 & 0x1f)) * 9 +
                  (ulong)(uint)((int)(uint)param_3[iVar6 + 4] >> (bVar12 & 0x1f)) * 0x51];
        puVar23 = (ushort *)((ulong)(uVar19 >> 3) + param_4);
        bVar10 = (byte)uVar19 & 7;
        *puVar23 = ~(ushort)(uVar16 << bVar10) & *puVar23 |
                   (ushort)(((param_3[lVar17] & uVar1 | (bVar11 & 3) << (bVar12 & 0x1f) & 0xff) &
                            uVar16) << bVar10);
        bVar10 = (byte)(iVar20 + uVar19) & 7;
        puVar23 = (ushort *)((ulong)(iVar20 + uVar19 >> 3) + param_4);
        *puVar23 = ~(ushort)(uVar16 << bVar10) & *puVar23 |
                   (ushort)(((param_3[iVar6 + 1] & uVar1 |
                             (bVar11 >> 2 & 3) << (bVar12 & 0x1f) & 0xff) & uVar16) << bVar10);
        bVar10 = (byte)(iVar7 + uVar19) & 7;
        puVar23 = (ushort *)((ulong)(iVar7 + uVar19 >> 3) + param_4);
        *puVar23 = ~(ushort)(uVar15 << bVar10) & *puVar23 |
                   (ushort)(((param_3[iVar6 + 2] & uVar1 |
                             (bVar11 >> 4 & 1) << (bVar12 & 0x1f) & 0xff) & uVar15) << bVar10);
        puVar23 = (ushort *)((ulong)(uVar14 >> 3) + param_4);
        bVar10 = (byte)uVar14 & 7;
        *puVar23 = ~(ushort)(uVar16 << bVar10) & *puVar23 |
                   (ushort)(((param_3[iVar6 + 3] & uVar1 |
                             (bVar11 >> 5 & 3) << (bVar12 & 0x1f) & 0xff) & uVar16) << bVar10);
        lVar17 = lVar17 + 5;
        puVar23 = (ushort *)((ulong)(iVar20 + uVar14 >> 3) + param_4);
        bVar10 = (byte)(iVar20 + uVar14) & 7;
        *puVar23 = ~(ushort)(uVar15 << bVar10) & *puVar23 |
                   (ushort)(((param_3[iVar6 + 4] & uVar1 |
                             (uint)(bVar11 >> 7) << (bVar12 & 0x1f) & 0xff) & uVar15) << bVar10);
        local_8c = local_8c + 1;
        uVar19 = uVar19 + iVar20 * 3 + 2 + uVar9 * 2;
        uVar14 = uVar14 + iVar2;
      } while (local_8c < local_68);
      uVar16 = local_68 * 5;
      if (param_2 == uVar16) {
        return;
      }
      uVar13 = (ulong)(uVar16 + 3);
      uVar18 = (ulong)(uVar16 + 2);
      local_48 = (local_68 - 1) * iVar2 + iVar7 + -2 + iVar20 * 3 + param_5;
      uVar21 = (ulong)(uVar16 + 1);
      pbVar22 = param_3 + uVar16;
    }
    uVar15 = 0;
    if ((uint)uVar13 < param_2) {
      uVar15 = (int)(uint)param_3[uVar13] >> (bVar5 & 0x1f);
    }
    uVar13 = 0;
    if ((uint)uVar18 < param_2) {
      uVar13 = (ulong)(uint)((int)(uint)param_3[uVar18] >> (bVar5 & 0x1f));
    }
    uVar18 = 0;
    if ((uint)uVar21 < param_2) {
      uVar18 = (ulong)(uint)((int)(uint)param_3[uVar21] >> (bVar5 & 0x1f));
    }
    if (uVar16 < param_2) {
      bVar5 = integer_of_trits
              [(ulong)(uint)((int)(uint)*pbVar22 >> (bVar5 & 0x1f)) +
               uVar13 * 9 + uVar18 * 3 + (ulong)uVar15 * 0x1b];
      uVar13 = 0;
      do {
        iVar20 = (byte)(&encode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                         ::tbits)[uVar13] + uVar9;
        uVar15 = (1 << ((byte)iVar20 & 0x1f)) - 1;
        puVar23 = (ushort *)((ulong)(local_48 >> 3) + param_4);
        bVar11 = (byte)local_48 & 7;
        *puVar23 = ~(ushort)(uVar15 << bVar11) & *puVar23 |
                   (ushort)(((param_3[uVar13 + uVar16] & uVar1 |
                             ((int)(uint)bVar5 >>
                              ((&encode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                 ::tshift)[uVar13] & 0x1f) &
                             (1 << ((&encode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                      ::tbits)[uVar13] & 0x1f)) - 1U) << (bVar12 & 0x1f) & 0xff) &
                            uVar15) << bVar11);
        bVar24 = uVar13 != (param_2 - 1) - uVar16;
        uVar13 = uVar13 + 1;
        local_48 = local_48 + iVar20;
      } while (bVar24);
    }
  }
  return;
}



/* decode_ise(quant_method, unsigned int, unsigned char const*, unsigned char*, unsigned int) */

void decode_ise(uint param_1,uint param_2,long param_3,void *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  undefined1 local_a8 [14];
  undefined2 uStack_9a;
  undefined6 uStack_98;
  uint local_88 [18];
  long local_40;
  
  uVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = SUB1614((undefined1  [16])0x0,0);
  bVar1 = btq_counts[param_1];
  uStack_9a = 0;
  uStack_98 = 0;
  uVar4 = 0;
  puVar6 = local_88;
  do {
    uVar7 = param_5 + (bVar1 & 0x3f);
    *(byte *)puVar6 =
         (byte)(*(ushort *)(param_3 + (ulong)(param_5 >> 3)) >> ((byte)param_5 & 7)) &
         (char)(1 << (bVar1 & 0x1f)) - 1U;
    param_5 = uVar7;
    if ((bVar1 >> 6 & 1) != 0) {
      param_5 = uVar7 + (byte)(&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                ::bits_to_read)[uVar4];
      local_a8[uVar8] =
           local_a8[uVar8] |
           (byte)(((uint)(*(ushort *)(param_3 + (ulong)(uVar7 >> 3)) >> ((byte)uVar7 & 7)) &
                  (1 << ((&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                           ::bits_to_read)[uVar4] & 0x1f)) - 1U) <<
                 ((&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                    ::block_shift)[uVar4] & 0x1f));
      pbVar10 = &decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                 ::hcounter_incr + uVar4;
      uVar4 = (ulong)(byte)(&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                             ::next_lcounter)[uVar4];
      uVar8 = uVar8 + *pbVar10;
    }
    if ((char)bVar1 < '\0') {
      uVar7 = param_5 >> 3;
      bVar5 = (byte)param_5;
      param_5 = param_5 + *(byte *)((long)&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                           ::bits_to_read + uVar4);
      local_a8[uVar8] =
           local_a8[uVar8] |
           (byte)(((uint)(*(ushort *)(param_3 + (ulong)uVar7) >> (bVar5 & 7)) &
                  (1 << (*(byte *)((long)&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                          ::bits_to_read + uVar4) & 0x1f)) - 1U) <<
                 (*(byte *)((long)&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                   ::block_shift + uVar4) & 0x1f));
      pbVar10 = (byte *)((long)&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                ::hcounter_incr + uVar4);
      uVar4 = (ulong)*(byte *)((long)&decode_ise(quant_method,unsigned_int,unsigned_char_const*,unsigned_char*,unsigned_int)
                                      ::next_lcounter + uVar4);
      uVar8 = uVar8 + *pbVar10;
    }
    puVar6 = (uint *)((long)puVar6 + 1);
  } while ((uint *)((long)local_88 + (ulong)param_2) != puVar6);
  bVar5 = (byte)(bVar1 & 0x3f);
  if ((bVar1 >> 6 & 1) != 0) {
    pbVar10 = local_a8;
    pbVar9 = pbVar10 + (ulong)(param_2 + 4) / 5;
    puVar6 = local_88;
    do {
      bVar2 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      lVar3 = (ulong)bVar2 * 5;
      *puVar6 = *puVar6 | ((((uint)(byte)trits_of_integer[lVar3 + 3] << (bVar5 & 0x1f) & 0xff) << 8
                           | (uint)(byte)trits_of_integer[lVar3 + 2] << (bVar5 & 0x1f) & 0xff) << 8
                          | (uint)(byte)trits_of_integer[lVar3 + 1] << (bVar5 & 0x1f) & 0xff) << 8 |
                          (uint)(byte)trits_of_integer[lVar3] << (bVar5 & 0x1f) & 0xff;
      *(byte *)(puVar6 + 1) = (byte)puVar6[1] | trits_of_integer[lVar3 + 4] << (bVar5 & 0x1f);
      puVar6 = (uint *)((long)puVar6 + 5);
    } while (pbVar10 != pbVar9);
  }
  if ((char)bVar1 < '\0') {
    pbVar10 = local_a8;
    pbVar9 = pbVar10 + (ulong)(param_2 + 2) / 3;
    puVar6 = local_88;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      lVar3 = (ulong)bVar1 * 3;
      *(ushort *)puVar6 =
           (ushort)*puVar6 |
           CONCAT11(quints_of_integer[lVar3 + 1] << (bVar5 & 0x1f),
                    quints_of_integer[lVar3] << (bVar5 & 0x1f));
      *(byte *)((long)puVar6 + 2) =
           *(byte *)((long)puVar6 + 2) | quints_of_integer[lVar3 + 2] << (bVar5 & 0x1f);
      puVar6 = (uint *)((long)puVar6 + 3);
    } while (pbVar9 != pbVar10);
  }
  memcpy(param_4,local_88,(ulong)param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


