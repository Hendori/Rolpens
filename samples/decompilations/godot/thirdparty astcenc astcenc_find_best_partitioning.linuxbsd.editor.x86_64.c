
/* insert_result(unsigned int, float, unsigned int, float*, unsigned int*) */

void insert_result(uint param_1,float param_2,uint param_3,float *param_4,uint *param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = param_1 - 1;
  if (param_4[uVar5] <= param_2) {
    return;
  }
  uVar6 = 0;
  pfVar4 = param_4;
  do {
    if (param_2 < *pfVar4 || param_2 == *pfVar4) {
      if ((uint)uVar6 < uVar5) {
        lVar2 = 0;
        lVar3 = (ulong)(param_1 - 2) * 4;
        do {
          uVar1 = *(undefined4 *)((long)param_5 + lVar2 + lVar3);
          *(undefined4 *)((long)(param_4 + uVar5) + lVar2) =
               *(undefined4 *)((long)param_4 + lVar2 + lVar3);
          *(undefined4 *)((long)param_5 + lVar2 + (ulong)uVar5 * 4) = uVar1;
          lVar2 = lVar2 + -4;
        } while (lVar2 != ~(ulong)((param_1 - 2) - (uint)uVar6) * 4);
      }
      *pfVar4 = param_2;
      param_5[uVar6] = param_3;
      return;
    }
    uVar6 = uVar6 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar6 != param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* find_best_partition_candidates(block_size_descriptor const&, image_block const&, unsigned int,
   unsigned int, unsigned int*, unsigned int) */

ulong find_best_partition_candidates
                (block_size_descriptor *param_1,image_block *param_2,uint param_3,uint param_4,
                uint *param_5,uint param_6)

{
  partition_info *ppVar1;
  partition_info *ppVar2;
  short *psVar3;
  block_size_descriptor bVar4;
  short sVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  block_size_descriptor bVar19;
  int iVar20;
  image_block *piVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  partition_lines3 *ppVar37;
  partition_metrics *ppVar38;
  ulong uVar39;
  byte bVar40;
  short sVar41;
  uint uVar42;
  image_block *piVar43;
  uint uVar44;
  uint uVar45;
  float *pfVar46;
  float *pfVar47;
  uint uVar48;
  uint uVar49;
  image_block *piVar50;
  partition_info *ppVar51;
  uint uVar52;
  uint uVar53;
  byte *pbVar54;
  long lVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  undefined1 (*pauVar60) [16];
  undefined8 *puVar61;
  processed_line4 *ppVar62;
  byte *pbVar63;
  uint uVar64;
  block_size_descriptor *pbVar65;
  float *pfVar66;
  long in_FS_OFFSET;
  byte bVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  uint local_12e8;
  uint local_12c8;
  uint local_12c0;
  uint *local_12b8;
  uint *local_12b0;
  byte *local_12a8;
  float local_1200;
  float local_11fc;
  float local_11f8 [4];
  float local_11e8 [8];
  uint local_11c8 [8];
  float local_11a8 [8];
  uint local_1188 [8];
  partition_metrics local_1168 [128];
  float local_10e8 [2];
  undefined8 uStack_10e0;
  float local_10d8 [28];
  undefined1 local_1068 [8];
  undefined8 uStack_1060;
  undefined1 local_1058 [8];
  undefined8 uStack_1050;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8 [14];
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined4 local_f48;
  undefined1 local_d28 [8];
  float afStack_d20 [2];
  undefined1 local_d18 [16];
  undefined1 local_d08 [16];
  undefined1 local_cf8 [16];
  byte local_528 [224];
  byte local_448 [1032];
  long local_40;
  
  bVar67 = 0;
  bVar4 = param_1[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar59 = (uint)(byte)bVar4;
  fVar83 = _LC0;
  if (((0x14 < (byte)bVar4) && (fVar83 = _LC8, 0x1f < (byte)bVar4)) &&
     (fVar83 = _LC6, 0x29 < uVar59)) {
    fVar83 = _LC7;
  }
  uVar34 = (ulong)((byte)bVar4 - 1);
  piVar43 = param_2 + uVar34 * 4 + 4;
  fVar84 = 0.0;
  fVar82 = *(float *)(param_2 + 0xe00);
  fVar85 = *(float *)(param_2 + 0xe04);
  fVar12 = *(float *)(param_2 + 0xe08);
  fVar13 = *(float *)(param_2 + 0xe0c);
  pfVar66 = (float *)local_d28;
  piVar50 = param_2 + (0x239e9U % (ulong)uVar59) * 4;
  fVar69 = *(float *)(piVar50 + 0xa50);
  fVar70 = *(float *)(piVar50 + 0x6e0);
  fVar81 = *(float *)piVar50;
  fVar71 = *(float *)(piVar50 + 0x370);
  local_fe8 = CONCAT44(fVar71,fVar81);
  uStack_fe0 = CONCAT44(fVar69,fVar70);
  piVar50 = param_2;
  pfVar46 = pfVar66;
  do {
    piVar21 = piVar50 + 4;
    fVar68 = *(float *)piVar50 - fVar81;
    fVar78 = *(float *)(piVar50 + 0x370) - fVar71;
    fVar79 = *(float *)(piVar50 + 0x6e0) - fVar70;
    fVar80 = *(float *)(piVar50 + 0xa50) - fVar69;
    fVar68 = fVar68 * fVar68 * fVar82 + fVar79 * fVar79 * fVar12 +
             fVar78 * fVar78 * fVar85 + fVar80 * fVar80 * fVar13;
    *pfVar46 = fVar68;
    fVar84 = fVar84 + fVar68;
    piVar50 = piVar21;
    pfVar46 = pfVar46 + 1;
  } while (piVar43 != piVar21);
  local_f48 = 0x3e2024f6;
  puVar61 = local_fd8;
  uVar44 = 1;
  local_f68 = __LC9;
  uStack_f60 = _UNK_00101968;
  local_f58 = __LC10;
  uStack_f50 = _UNK_00101978;
  do {
    fVar69 = 0.0;
    uVar35 = 0;
    pfVar46 = pfVar66;
    do {
      fVar69 = fVar69 + *pfVar46;
      if (fVar84 * *(float *)((long)&local_f68 + (ulong)(param_3 * 3 + -7 + uVar44) * 4) <= fVar69)
      break;
      uVar58 = (int)uVar35 + 1;
      uVar35 = (ulong)uVar58;
      pfVar46 = pfVar46 + 1;
    } while (uVar59 != uVar58);
    if ((byte)bVar4 - 1 < (uint)uVar35) {
      uVar35 = uVar34;
    }
    uVar44 = uVar44 + 1;
    piVar50 = param_2 + uVar35 * 4;
    fVar69 = *(float *)(piVar50 + 0xa50);
    fVar70 = *(float *)(piVar50 + 0x6e0);
    fVar81 = *(float *)piVar50;
    fVar71 = *(float *)(piVar50 + 0x370);
    *puVar61 = CONCAT44(fVar71,fVar81);
    puVar61[1] = CONCAT44(fVar69,fVar70);
    if (param_3 <= uVar44) {
      iVar20 = 0;
      do {
        local_448[0] = 0;
        local_448[1] = 0;
        local_448[2] = 0;
        local_448[3] = 0;
        piVar50 = param_2;
        pbVar54 = local_528;
        do {
          uVar35 = 0;
          uVar36 = 0;
          ppVar62 = (processed_line4 *)&local_fe8;
          fVar69 = _LC2;
          do {
            fVar70 = (*(float *)(piVar50 + 0x6e0) - *(float *)(ppVar62 + 8)) *
                     (*(float *)(piVar50 + 0x6e0) - *(float *)(ppVar62 + 8)) * fVar12 +
                     (*(float *)piVar50 - *(float *)ppVar62) *
                     (*(float *)piVar50 - *(float *)ppVar62) * fVar82 +
                     (*(float *)(piVar50 + 0xa50) - *(float *)(ppVar62 + 0xc)) *
                     (*(float *)(piVar50 + 0xa50) - *(float *)(ppVar62 + 0xc)) * fVar13 +
                     (*(float *)(piVar50 + 0x370) - *(float *)(ppVar62 + 4)) *
                     (*(float *)(piVar50 + 0x370) - *(float *)(ppVar62 + 4)) * fVar85;
            if (fVar70 < fVar69) {
              uVar35 = uVar36;
              fVar69 = fVar70;
            }
            uVar59 = (int)uVar36 + 1;
            uVar36 = (ulong)uVar59;
            ppVar62 = ppVar62 + 0x10;
          } while (param_3 != uVar59);
          piVar50 = piVar50 + 4;
          *pbVar54 = (byte)uVar35;
          pbVar54 = pbVar54 + 1;
          local_448[uVar35] = local_448[uVar35] + 1;
        } while (piVar43 != piVar50);
LAB_001003f8:
        bVar15 = false;
        uVar36 = 0;
        pbVar54 = local_528;
        uVar35 = uVar36;
        pbVar63 = local_448;
        if (local_448[0] != 0) goto LAB_00100427;
LAB_0010040d:
        bVar40 = *pbVar54;
        *pbVar54 = (byte)uVar36;
        bVar15 = true;
        local_448[bVar40] = local_448[bVar40] - 1;
        *pbVar63 = *pbVar63 + 1;
        uVar35 = uVar36;
LAB_00100427:
        while( true ) {
          uVar59 = (int)uVar35 + 1;
          uVar36 = (ulong)uVar59;
          pbVar63 = pbVar63 + 1;
          pbVar54 = pbVar54 + 1;
          if (param_3 == uVar59) break;
          uVar35 = uVar36;
          if (*pbVar63 == 0) goto LAB_0010040d;
        }
        if (bVar15) goto LAB_001003f8;
        iVar20 = iVar20 + 1;
        if (iVar20 == 3) {
          _local_1068 = (undefined1  [16])0x0;
          _local_1058 = (undefined1  [16])0x0;
          bVar19 = (block_size_descriptor)0x40;
          if ((byte)bVar4 < 0x41) {
            bVar19 = bVar4;
          }
          lVar55 = 0;
          do {
            lVar16 = lVar55 + 0xe091b0;
            bVar40 = (byte)lVar55;
            lVar55 = lVar55 + 1;
            *(ulong *)(local_1068 + (ulong)local_528[(byte)param_1[lVar16]] * 8) =
                 *(ulong *)(local_1068 + (ulong)local_528[(byte)param_1[lVar16]] * 8) |
                 1L << (bVar40 & 0x3f);
          } while ((uint)lVar55 < (uint)(byte)bVar19);
          uVar44 = *(uint *)(param_1 + uVar35 * 4 + 0x20);
          if (uVar59 == 2) {
            pbVar65 = param_1 + 0xe091f8;
            pbVar54 = local_448;
            do {
              uVar34 = *(ulong *)(pbVar65 + -8) ^ (ulong)local_1068;
              uVar34 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
              uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
              uVar35 = *(ulong *)pbVar65 ^ (ulong)local_1068;
              uVar36 = *(ulong *)pbVar65 ^ uStack_1060;
              uVar36 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
              uVar39 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
              uVar35 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
              uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
              uVar36 = *(ulong *)(pbVar65 + -8) ^ uStack_1060;
              uVar58 = (uint)(byte)((uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38) +
                       (uint)(byte)((uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              uVar36 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
              uVar34 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
              uVar52 = (uint)(byte)((uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38) +
                       (uint)(byte)((uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              if (uVar52 < uVar58) {
                uVar58 = uVar52;
              }
              pbVar63 = pbVar54 + 1;
              pbVar65 = pbVar65 + 0x10;
              *pbVar54 = (byte)((int)uVar58 >> 1);
              pbVar54 = pbVar63;
            } while (local_448 + uVar44 != pbVar63);
          }
          else if (uVar59 == 3) {
            pbVar65 = param_1 + 0xe0d1f0;
            pbVar54 = local_448;
            do {
              uVar34 = *(ulong *)pbVar65;
              uVar35 = *(ulong *)(pbVar65 + 8);
              uVar36 = *(ulong *)(pbVar65 + 0x10);
              uVar39 = ((ulong)local_1068 ^ uVar34) -
                       (((ulong)local_1068 ^ uVar34) >> 1 & 0x5555555555555555);
              uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333);
              uVar22 = ((ulong)local_1068 ^ uVar35) -
                       (((ulong)local_1068 ^ uVar35) >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
              uVar23 = ((ulong)local_1068 ^ uVar36) -
                       (((ulong)local_1068 ^ uVar36) >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
              uVar24 = (uStack_1060 ^ uVar34) - ((uStack_1060 ^ uVar34) >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
              uVar25 = (uStack_1060 ^ uVar35) - ((uStack_1060 ^ uVar35) >> 1 & 0x5555555555555555);
              uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
              uVar26 = (uStack_1060 ^ uVar36) - ((uStack_1060 ^ uVar36) >> 1 & 0x5555555555555555);
              uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
              uVar34 = (uVar34 ^ (ulong)local_1058) -
                       ((uVar34 ^ (ulong)local_1058) >> 1 & 0x5555555555555555);
              uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
              uVar35 = (uVar35 ^ (ulong)local_1058) -
                       ((uVar35 ^ (ulong)local_1058) >> 1 & 0x5555555555555555);
              uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
              uVar36 = (uVar36 ^ (ulong)local_1058) -
                       ((uVar36 ^ (ulong)local_1058) >> 1 & 0x5555555555555555);
              bVar40 = (byte)((uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              bVar7 = (byte)(((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              uVar52 = (uint)bVar40 + (uint)bVar7;
              uVar35 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
              bVar8 = (byte)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              bVar9 = (byte)((uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              uVar58 = (uint)bVar8 + (uint)bVar9;
              if (uVar52 < uVar58) {
                uVar58 = uVar52;
              }
              uVar45 = (uint)(byte)((uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              uVar56 = bVar9 + uVar45;
              uVar53 = (uint)(byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              uVar52 = bVar40 + uVar53;
              uVar58 = (byte)((uVar39 + (uVar39 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38) + uVar58;
              if (uVar56 <= uVar52) {
                uVar52 = uVar56;
              }
              uVar52 = uVar52 + (byte)((uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              if (uVar52 < uVar58) {
                uVar58 = uVar52;
              }
              uVar45 = uVar45 + bVar7;
              uVar53 = bVar8 + uVar53;
              if (uVar45 <= uVar53) {
                uVar53 = uVar45;
              }
              uVar53 = uVar53 + (byte)((uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              if (uVar53 < uVar58) {
                uVar58 = uVar53;
              }
              pbVar63 = pbVar54 + 1;
              pbVar65 = pbVar65 + 0x18;
              *pbVar54 = (byte)((int)uVar58 >> 1);
              pbVar54 = pbVar63;
            } while (pbVar63 != local_448 + uVar44);
          }
          else {
            pbVar65 = param_1 + 0xe131f0;
            local_12a8 = local_448;
            do {
              uVar34 = *(ulong *)pbVar65;
              uVar35 = *(ulong *)(pbVar65 + 8);
              uVar36 = *(ulong *)(pbVar65 + 0x10);
              uVar39 = *(ulong *)(pbVar65 + 0x18);
              uVar22 = ((ulong)local_1068 ^ uVar34) -
                       (((ulong)local_1068 ^ uVar34) >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
              uVar23 = ((ulong)local_1068 ^ uVar35) -
                       (((ulong)local_1068 ^ uVar35) >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
              uVar24 = ((ulong)local_1068 ^ uVar36) -
                       (((ulong)local_1068 ^ uVar36) >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
              uVar25 = ((ulong)local_1068 ^ uVar39) -
                       (((ulong)local_1068 ^ uVar39) >> 1 & 0x5555555555555555);
              uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
              uVar26 = (uStack_1060 ^ uVar34) - ((uStack_1060 ^ uVar34) >> 1 & 0x5555555555555555);
              uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
              uVar27 = (uStack_1060 ^ uVar35) - ((uStack_1060 ^ uVar35) >> 1 & 0x5555555555555555);
              uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
              uVar28 = (uStack_1060 ^ uVar36) - ((uStack_1060 ^ uVar36) >> 1 & 0x5555555555555555);
              uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
              uVar29 = (uStack_1060 ^ uVar39) - ((uStack_1060 ^ uVar39) >> 1 & 0x5555555555555555);
              uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333);
              uVar30 = ((ulong)local_1058 ^ uVar34) -
                       (((ulong)local_1058 ^ uVar34) >> 1 & 0x5555555555555555);
              uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
              uVar31 = ((ulong)local_1058 ^ uVar35) -
                       (((ulong)local_1058 ^ uVar35) >> 1 & 0x5555555555555555);
              uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
              uVar32 = ((ulong)local_1058 ^ uVar36) -
                       (((ulong)local_1058 ^ uVar36) >> 1 & 0x5555555555555555);
              uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333);
              uVar33 = ((ulong)local_1058 ^ uVar39) -
                       (((ulong)local_1058 ^ uVar39) >> 1 & 0x5555555555555555);
              uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
              uVar34 = (uVar34 ^ uStack_1050) - ((uVar34 ^ uStack_1050) >> 1 & 0x5555555555555555);
              uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
              uVar35 = (uVar35 ^ uStack_1050) - ((uVar35 ^ uStack_1050) >> 1 & 0x5555555555555555);
              uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
              uVar36 = (uVar36 ^ uStack_1050) - ((uVar36 ^ uStack_1050) >> 1 & 0x5555555555555555);
              uVar36 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
              bVar40 = (byte)((uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              bVar7 = (byte)((uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              uVar35 = (uVar39 ^ uStack_1050) - ((uVar39 ^ uStack_1050) >> 1 & 0x5555555555555555);
              uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
              bVar8 = (byte)((uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              bVar9 = (byte)((uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              bVar10 = (byte)((uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              uVar58 = (uint)bVar9 + (uint)bVar10;
              if ((uint)bVar40 + (uint)bVar8 <= (uint)bVar9 + (uint)bVar10) {
                uVar58 = (uint)bVar40 + (uint)bVar8;
              }
              bVar11 = (byte)((uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              uVar52 = (uint)bVar11 + (uint)bVar10;
              if ((uint)bVar40 + (uint)bVar7 <= uVar52) {
                uVar52 = (uint)bVar40 + (uint)bVar7;
              }
              local_12c0 = (uint)bVar11;
              uVar53 = (uint)bVar11 + (uint)bVar8;
              if ((uint)bVar9 + (uint)bVar7 <= uVar53) {
                uVar53 = (uint)bVar9 + (uint)bVar7;
              }
              bVar11 = (byte)((uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              uVar56 = (uint)bVar40 + (uint)bVar11;
              uVar64 = (uint)(byte)((uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              uVar45 = bVar10 + uVar64;
              if (uVar56 <= uVar45) {
                uVar45 = uVar56;
              }
              uVar42 = (uint)bVar9 + (uint)bVar11;
              uVar56 = bVar8 + uVar64;
              bVar40 = (byte)((uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
              local_12e8 = (uint)bVar40;
              if (uVar42 <= uVar56) {
                uVar56 = uVar42;
              }
              uVar42 = uVar64 + bVar7;
              if (local_12c0 + bVar11 < uVar64 + bVar7) {
                uVar42 = local_12c0 + bVar11;
              }
              bVar7 = (byte)((uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              uVar57 = uVar53 + bVar7;
              uVar48 = uVar56 + bVar7;
              bVar8 = (byte)((uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
              local_12b0._0_4_ = (uint)bVar8;
              uVar64 = uVar52 + local_12e8;
              if (uVar57 <= uVar52 + local_12e8) {
                uVar64 = uVar57;
              }
              uVar57 = uVar58 + (uint)local_12b0;
              if (uVar64 <= uVar58 + (uint)local_12b0) {
                uVar57 = uVar64;
              }
              uVar57 = uVar57 + (byte)((uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              uVar64 = uVar45 + local_12e8;
              if (uVar48 <= uVar45 + local_12e8) {
                uVar64 = uVar48;
              }
              uVar49 = (uint)(byte)((uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38);
              uVar48 = uVar58 + uVar49;
              if (uVar64 <= uVar58 + uVar49) {
                uVar48 = uVar64;
              }
              uVar48 = uVar48 + (byte)((uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              if (uVar57 <= uVar48) {
                uVar48 = uVar57;
              }
              local_12c8 = (uint)bVar7;
              uVar58 = uVar52 + uVar49;
              if (local_12c8 + uVar42 <= uVar52 + uVar49) {
                uVar58 = local_12c8 + uVar42;
              }
              uVar45 = uVar45 + bVar8;
              if (uVar58 <= uVar45) {
                uVar45 = uVar58;
              }
              uVar45 = uVar45 + (byte)((uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              local_12e8 = (uint)bVar40;
              if (uVar45 < uVar48) {
                uVar48 = uVar45;
              }
              uVar58 = uVar53 + uVar49;
              if (uVar42 + local_12e8 < uVar53 + uVar49) {
                uVar58 = uVar42 + local_12e8;
              }
              uVar56 = uVar56 + bVar8;
              if (uVar58 <= uVar56) {
                uVar56 = uVar58;
              }
              uVar56 = uVar56 + (byte)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
              if (uVar56 < uVar48) {
                uVar48 = uVar56;
              }
              pbVar65 = pbVar65 + 0x20;
              pbVar54 = local_12a8 + 1;
              *local_12a8 = (byte)((int)uVar48 >> 1);
              local_12a8 = pbVar54;
            } while (local_448 + uVar44 != pbVar54);
          }
          ppVar37 = (partition_lines3 *)&local_f68;
          for (lVar55 = 0x10; lVar55 != 0; lVar55 = lVar55 + -1) {
            *(undefined8 *)ppVar37 = 0;
            ppVar37 = ppVar37 + 8;
          }
          pbVar54 = local_448;
          do {
            bVar40 = *pbVar54;
            pbVar54 = pbVar54 + 1;
            psVar3 = (short *)((long)&local_f68 + (ulong)bVar40 * 2);
            *psVar3 = *psVar3 + 1;
          } while (local_448 + uVar44 != pbVar54);
          sVar41 = 0;
          ppVar37 = (partition_lines3 *)&local_f68;
          do {
            sVar5 = *(short *)ppVar37;
            *(short *)ppVar37 = sVar41;
            ppVar37 = ppVar37 + 2;
            sVar41 = sVar41 + sVar5;
          } while ((partition_lines3 *)((long)&local_f68 + (ulong)((byte)bVar19 - 1) * 2 + 2) !=
                   ppVar37);
          uVar34 = 0;
          do {
            uVar35 = (ulong)local_448[uVar34];
            uVar6 = *(ushort *)((long)&local_f68 + uVar35 * 2);
            *(short *)(local_d28 + (ulong)uVar6 * 2) = (short)uVar34;
            uVar34 = uVar34 + 1;
            *(ushort *)((long)&local_f68 + uVar35 * 2) = uVar6 + 1;
          } while (uVar44 != uVar34);
          if (param_4 <= uVar44) {
            uVar44 = param_4;
          }
          uVar35 = (ulong)uVar44;
          uVar34 = (ulong)param_6;
          if (uVar44 < param_6) {
            uVar34 = uVar35;
          }
          auVar72._0_4_ =
               -(uint)(*(float *)(param_2 + 0xdd0) == *(float *)(param_2 + 0xdf0)) & __LC13;
          auVar72._4_4_ =
               -(uint)(*(float *)(param_2 + 0xdd4) == *(float *)(param_2 + 0xdf4)) & _UNK_00101984;
          auVar72._8_4_ =
               -(uint)(*(float *)(param_2 + 0xdd8) == *(float *)(param_2 + 0xdf8)) & _UNK_00101988;
          auVar72._12_4_ =
               -(uint)(*(float *)(param_2 + 0xddc) == *(float *)(param_2 + 0xdfc)) & _UNK_0010198c;
          iVar20 = movmskps((int)local_448,auVar72);
          uVar44 = (uint)uVar34;
          if (uVar44 == 0) {
            if (iVar20 == 0) goto LAB_00100cf5;
LAB_0010146f:
            pfVar46 = (float *)((long)pfVar66 + uVar35 * 2);
            uVar58 = 5;
            if (uVar59 != 1) {
              uVar58 = uVar59;
            }
            do {
              local_12b0 = local_11c8;
              local_12b8 = local_1188;
              uVar6 = *(ushort *)pfVar66;
              ppVar51 = (partition_info *)
                        (param_1 + ((ulong)uVar6 + (ulong)((uVar58 - 2) * 0x400)) * 0x450 + 0xacb560
                        );
              compute_avgs_and_dirs_3_comp_rgb(ppVar51,param_2,(partition_metrics *)&local_fe8);
              ppVar37 = (partition_lines3 *)&local_f68;
              ppVar62 = (processed_line4 *)&local_fe8;
              do {
                auVar72 = *(undefined1 (*) [16])(ppVar62 + 0x10);
                uVar14 = *(undefined8 *)(ppVar62 + 8);
                *(undefined8 *)ppVar37 = *(undefined8 *)ppVar62;
                *(undefined8 *)(ppVar37 + 8) = uVar14;
                auVar75._0_4_ =
                     auVar72._0_4_ * auVar72._0_4_ + auVar72._8_4_ * auVar72._8_4_ +
                     auVar72._4_4_ * auVar72._4_4_ + auVar72._12_4_ * auVar72._12_4_;
                auVar73 = __LC5;
                if (auVar75._0_4_ != 0.0) {
                  auVar75._4_4_ = auVar75._0_4_;
                  auVar75._8_4_ = auVar75._0_4_;
                  auVar75._12_4_ = auVar75._0_4_;
                  auVar73 = sqrtps(auVar75,auVar75);
                  auVar73 = divps(auVar72,auVar73);
                }
                auVar72 = *(undefined1 (*) [16])ppVar62;
                *(undefined1 (*) [16])(ppVar37 + 0x10) = auVar73;
                *(undefined1 (*) [16])(ppVar37 + 0x20) = (undefined1  [16])0x0;
                auVar76._0_4_ =
                     auVar72._0_4_ * auVar72._0_4_ + auVar72._8_4_ * auVar72._8_4_ +
                     auVar72._4_4_ * auVar72._4_4_ + auVar72._12_4_ * auVar72._12_4_;
                auVar77 = __LC5;
                if (auVar76._0_4_ != 0.0) {
                  auVar76._4_4_ = auVar76._0_4_;
                  auVar76._8_4_ = auVar76._0_4_;
                  auVar76._12_4_ = auVar76._0_4_;
                  auVar77 = sqrtps(auVar76,auVar76);
                  auVar77 = divps(auVar72,auVar77);
                }
                ppVar62 = ppVar62 + 0x20;
                *(undefined1 (*) [16])(ppVar37 + 0x30) = auVar77;
                *(undefined1 (*) [16])(ppVar37 + 0x60) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(ppVar37 + 0x70) = auVar77;
                fVar69 = *(float *)ppVar37 * auVar73._0_4_ + *(float *)(ppVar37 + 4) * auVar73._4_4_
                         + *(float *)(ppVar37 + 8) * auVar73._8_4_;
                *(undefined8 *)(ppVar37 + 0x50) = *(undefined8 *)(ppVar37 + 0x10);
                *(undefined8 *)(ppVar37 + 0x58) = *(undefined8 *)(ppVar37 + 0x18);
                *(float *)(ppVar37 + 0x40) = *(float *)ppVar37 - fVar69 * auVar73._0_4_;
                *(float *)(ppVar37 + 0x44) = *(float *)(ppVar37 + 4) - fVar69 * auVar73._4_4_;
                *(float *)(ppVar37 + 0x48) = *(float *)(ppVar37 + 8) - fVar69 * auVar73._8_4_;
                *(float *)(ppVar37 + 0x4c) = *(float *)(ppVar37 + 0xc) - auVar73._12_4_ * 0.0;
                ppVar37 = ppVar37 + 0x90;
              } while ((processed_line4 *)&local_fe8 + (ulong)uVar59 * 0x20 != ppVar62);
              local_1200 = 0.0;
              local_11fc = 0.0;
              compute_error_squared_rgb
                        (ppVar51,param_2,(partition_lines3 *)&local_f68,&local_1200,&local_11fc);
              ppVar2 = ppVar51 + uVar59;
              ppVar37 = (partition_lines3 *)&local_f68;
              do {
                ppVar1 = ppVar51 + 4;
                ppVar51 = ppVar51 + 1;
                fVar69 = *(float *)(ppVar37 + 0x80);
                fVar70 = (float)(byte)*ppVar1 * fVar83;
                local_1200 = local_1200 +
                             *(float *)(ppVar37 + 0x18) * fVar69 *
                             *(float *)(ppVar37 + 0x18) * fVar69 * fVar70 +
                             *(float *)(ppVar37 + 0x10) * fVar69 *
                             *(float *)(ppVar37 + 0x10) * fVar69 * fVar70 +
                             *(float *)(ppVar37 + 0x14) * fVar69 *
                             *(float *)(ppVar37 + 0x14) * fVar69 * fVar70;
                local_11fc = local_11fc +
                             fVar69 * *(float *)(ppVar37 + 0x38) *
                             fVar69 * *(float *)(ppVar37 + 0x38) * fVar70 +
                             fVar69 * *(float *)(ppVar37 + 0x30) *
                             fVar69 * *(float *)(ppVar37 + 0x30) * fVar70 +
                             fVar69 * *(float *)(ppVar37 + 0x34) *
                             fVar69 * *(float *)(ppVar37 + 0x34) * fVar70;
                ppVar37 = ppVar37 + 0x90;
              } while (ppVar2 != ppVar51);
              pfVar66 = (float *)((long)pfVar66 + 2);
              insert_result(uVar44,local_1200,(uint)uVar6,local_11e8,local_12b0);
              insert_result(uVar44,local_11fc,(uint)uVar6,local_11a8,local_12b8);
            } while (pfVar46 != pfVar66);
          }
          else {
            lVar55 = 0;
            do {
              *(undefined4 *)((long)local_11e8 + lVar55) = _LC14;
              *(undefined4 *)((long)local_11a8 + lVar55) = _LC14;
              lVar55 = lVar55 + 4;
            } while (uVar34 << 2 != lVar55);
            if (iVar20 != 0) goto LAB_0010146f;
LAB_00100cf5:
            pfVar46 = (float *)((long)pfVar66 + uVar35 * 2);
            uVar58 = 5;
            if (uVar59 != 1) {
              uVar58 = uVar59;
            }
            do {
              uVar6 = *(ushort *)pfVar66;
              ppVar51 = (partition_info *)
                        (param_1 + ((ulong)uVar6 + (ulong)((uVar58 - 2) * 0x400)) * 0x450 + 0xacb560
                        );
              compute_avgs_and_dirs_4_comp(ppVar51,param_2,local_1168);
              ppVar38 = local_1168;
              ppVar62 = (processed_line4 *)&local_fe8;
              pfVar47 = local_10e8;
              ppVar37 = (partition_lines3 *)&local_f68;
              pauVar60 = (undefined1 (*) [16])local_1058;
              do {
                auVar72 = *(undefined1 (*) [16])(ppVar38 + 0x10);
                uVar14 = *(undefined8 *)(ppVar38 + 8);
                *(undefined8 *)pfVar47 = *(undefined8 *)ppVar38;
                *(undefined8 *)(pfVar47 + 2) = uVar14;
                auVar77._0_4_ =
                     auVar72._0_4_ * auVar72._0_4_ + auVar72._8_4_ * auVar72._8_4_ +
                     auVar72._4_4_ * auVar72._4_4_ + auVar72._12_4_ * auVar72._12_4_;
                auVar73 = __LC3;
                if (auVar77._0_4_ != 0.0) {
                  auVar77._4_4_ = auVar77._0_4_;
                  auVar77._8_4_ = auVar77._0_4_;
                  auVar77._12_4_ = auVar77._0_4_;
                  auVar73 = sqrtps(auVar77,auVar77);
                  auVar73 = divps(auVar72,auVar73);
                }
                fVar69 = *pfVar47;
                fVar70 = pfVar47[1];
                fVar81 = pfVar47[2];
                fVar71 = pfVar47[3];
                *(undefined1 (*) [16])(pfVar47 + 4) = auVar73;
                *(undefined1 (*) [16])(ppVar62 + 0x10) = auVar73;
                fVar71 = fVar69 * auVar73._0_4_ + fVar81 * auVar73._8_4_ +
                         fVar70 * auVar73._4_4_ + fVar71 * auVar73._12_4_;
                fVar69 = pfVar47[1];
                fVar70 = pfVar47[2];
                fVar81 = pfVar47[3];
                *(float *)ppVar62 = *pfVar47 - fVar71 * auVar73._0_4_;
                *(float *)(ppVar62 + 4) = fVar69 - fVar71 * auVar73._4_4_;
                *(float *)(ppVar62 + 8) = fVar70 - fVar71 * auVar73._8_4_;
                *(float *)(ppVar62 + 0xc) = fVar81 - fVar71 * auVar73._12_4_;
                auVar72 = *(undefined1 (*) [16])ppVar38;
                auVar74._0_4_ =
                     auVar72._8_4_ * auVar72._8_4_ + auVar72._0_4_ * auVar72._0_4_ +
                     auVar72._12_4_ * auVar72._12_4_ + auVar72._4_4_ * auVar72._4_4_;
                auVar73 = __LC3;
                if (auVar74._0_4_ != 0.0) {
                  auVar74._4_4_ = auVar74._0_4_;
                  auVar74._8_4_ = auVar74._0_4_;
                  auVar74._12_4_ = auVar74._0_4_;
                  auVar73 = sqrtps(auVar74,auVar74);
                  auVar73 = divps(auVar72,auVar73);
                }
                ppVar38 = ppVar38 + 0x20;
                *pauVar60 = auVar73;
                pfVar47 = pfVar47 + 8;
                *(undefined1 (*) [16])ppVar37 = (undefined1  [16])0x0;
                pauVar60 = pauVar60 + 2;
                ppVar62 = ppVar62 + 0x20;
                *(undefined1 (*) [16])(ppVar37 + 0x10) = auVar73;
                ppVar37 = ppVar37 + 0x20;
              } while (local_1168 + (ulong)uVar59 * 0x20 != ppVar38);
              local_1200 = 0.0;
              local_11fc = 0.0;
              compute_error_squared_rgba
                        (ppVar51,param_2,(processed_line4 *)&local_fe8,(processed_line4 *)&local_f68
                         ,local_11f8,&local_1200,&local_11fc);
              uVar35 = 0;
              lVar55 = 0x10;
              do {
                fVar69 = local_11f8[uVar35];
                lVar16 = uVar35 + 4;
                uVar35 = uVar35 + 1;
                fVar70 = *(float *)((long)local_10e8 + lVar55) * fVar69;
                fVar81 = *(float *)((long)local_10e8 + lVar55 + 4) * fVar69;
                fVar71 = *(float *)((long)local_10d8 + lVar55 + -8) * fVar69;
                fVar82 = *(float *)((long)local_10d8 + lVar55 + -4) * fVar69;
                fVar85 = (float)(byte)ppVar51[lVar16] * fVar83;
                pfVar47 = (float *)(local_1068 + lVar55);
                lVar16 = lVar55 + 4;
                lVar17 = lVar55 + 8;
                lVar18 = lVar55 + 0xc;
                lVar55 = lVar55 + 0x20;
                local_1200 = local_1200 +
                             fVar70 * fVar70 * fVar85 + fVar71 * fVar71 * fVar85 +
                             fVar81 * fVar81 * fVar85 + fVar82 * fVar82 * fVar85;
                local_11fc = local_11fc +
                             fVar69 * *pfVar47 * fVar69 * *pfVar47 * fVar85 +
                             fVar69 * *(float *)(local_1068 + lVar17) *
                             fVar69 * *(float *)(local_1068 + lVar17) * fVar85 +
                             fVar69 * *(float *)(local_1068 + lVar16) *
                             fVar69 * *(float *)(local_1068 + lVar16) * fVar85 +
                             fVar69 * *(float *)(local_1068 + lVar18) *
                             fVar69 * *(float *)(local_1068 + lVar18) * fVar85;
              } while (uVar59 != uVar35);
              pfVar66 = (float *)((long)pfVar66 + 2);
              insert_result(uVar44,local_1200,(uint)uVar6,local_11e8,local_11c8);
              insert_result(uVar44,local_11fc,(uint)uVar6,local_11a8,local_1188);
            } while (pfVar46 != pfVar66);
          }
          uVar35 = 0;
          if (uVar44 != 0) {
            uVar58 = 5;
            if (uVar59 != 1) {
              uVar58 = uVar59;
            }
            lVar55 = 0;
            uVar35 = (ulong)((uVar58 - 2) * 0x400);
            do {
              *(uint *)((processed_line4 *)&local_fe8 + lVar55 * 2) =
                   (uint)*(ushort *)
                          (param_1 +
                          (*(uint *)((long)local_11c8 + lVar55) + uVar35) * 0x450 + 0xacb562);
              *(uint *)((long)&local_fe8 + lVar55 * 2 + 4) =
                   (uint)*(ushort *)
                          (param_1 +
                          (*(uint *)((long)local_1188 + lVar55) + uVar35) * 0x450 + 0xacb562);
              lVar55 = lVar55 + 4;
            } while (uVar34 << 2 != lVar55);
            ppVar37 = (partition_lines3 *)&local_f68;
            for (lVar55 = 0x10; lVar55 != 0; lVar55 = lVar55 + -1) {
              *(undefined8 *)ppVar37 = 0;
              ppVar37 = ppVar37 + (ulong)bVar67 * -0x10 + 8;
            }
            lVar55 = 0;
            uVar34 = 0;
            do {
              uVar59 = *(uint *)((processed_line4 *)&local_fe8 + lVar55 * 4);
              uVar36 = (&local_f68)[uVar59 >> 6];
              uVar35 = uVar34;
              if ((uVar36 >> ((ulong)uVar59 & 0x3f) & 1) == 0) {
                uVar58 = (int)uVar34 + 1;
                uVar35 = (ulong)uVar58;
                param_5[uVar34] = uVar59;
                (&local_f68)[uVar59 >> 6] = uVar36 | 1L << (ulong)(uVar59 & 0x3f);
                if (uVar58 == uVar44) break;
              }
              lVar55 = lVar55 + 1;
              uVar34 = uVar35;
            } while ((uint)lVar55 < uVar44 * 2);
          }
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar35;
        }
        local_448[0] = 0;
        local_448[1] = 0;
        local_448[2] = 0;
        local_448[3] = 0;
        _local_d28 = (undefined1  [16])0x0;
        local_d18 = (undefined1  [16])0x0;
        local_d08 = (undefined1  [16])0x0;
        local_cf8 = (undefined1  [16])0x0;
        pbVar54 = local_528;
        piVar50 = param_2;
        pbVar63 = local_528 + 1;
        while( true ) {
          fVar69 = *(float *)(piVar50 + 0xa50);
          bVar40 = *pbVar54;
          fVar70 = *(float *)(piVar50 + 0x6e0);
          fVar81 = *(float *)(piVar50 + 0x370);
          local_448[bVar40] = local_448[bVar40] + 1;
          lVar55 = (ulong)bVar40 * 0x10;
          fVar71 = *(float *)(local_d18 + lVar55 + -4);
          *(float *)(local_d28 + lVar55) = *(float *)piVar50 + *(float *)(local_d28 + lVar55);
          *(float *)(local_d28 + lVar55 + 4) = fVar81 + *(float *)(local_d28 + lVar55 + 4);
          *(float *)(local_d28 + lVar55 + 8) = fVar70 + *(float *)(local_d28 + lVar55 + 8);
          *(float *)(local_d18 + lVar55 + -4) = fVar69 + fVar71;
          if (pbVar63 == local_528 + 1 + uVar34) break;
          pbVar54 = pbVar63;
          piVar50 = piVar50 + 4;
          pbVar63 = pbVar63 + 1;
        }
        pfVar46 = pfVar66;
        pbVar54 = local_448;
        ppVar62 = (processed_line4 *)&local_fe8;
        do {
          bVar40 = *pbVar54;
          pbVar54 = pbVar54 + 1;
          fVar71 = _LC12 / (float)bVar40;
          fVar69 = pfVar46[1];
          fVar70 = pfVar46[2];
          fVar81 = pfVar46[3];
          *(float *)ppVar62 = fVar71 * *pfVar46;
          *(float *)(ppVar62 + 4) = fVar71 * fVar69;
          *(float *)(ppVar62 + 8) = fVar71 * fVar70;
          *(float *)(ppVar62 + 0xc) = fVar71 * fVar81;
          pfVar46 = pfVar46 + 4;
          ppVar62 = ppVar62 + 0x10;
        } while (pbVar54 != local_448 + uVar36);
      } while( true );
    }
    fVar84 = 0.0;
    piVar50 = param_2;
    pfVar46 = pfVar66;
    do {
      piVar21 = piVar50 + 4;
      fVar68 = *(float *)piVar50 - fVar81;
      fVar78 = *(float *)(piVar50 + 0x370) - fVar71;
      fVar79 = *(float *)(piVar50 + 0x6e0) - fVar70;
      fVar80 = *(float *)(piVar50 + 0xa50) - fVar69;
      fVar68 = fVar79 * fVar79 * fVar12 + fVar68 * fVar68 * fVar82 +
               fVar80 * fVar80 * fVar13 + fVar78 * fVar78 * fVar85;
      if (*pfVar46 <= fVar68) {
        fVar68 = *pfVar46;
      }
      *pfVar46 = fVar68;
      fVar84 = fVar84 + fVar68;
      piVar50 = piVar21;
      pfVar46 = pfVar46 + 1;
    } while (piVar21 != piVar43);
    puVar61 = puVar61 + 2;
  } while( true );
}


