
/* generate_one_partition_info_entry(block_size_descriptor&, unsigned int, unsigned int, unsigned
   int, partition_info&) */

ulong generate_one_partition_info_entry
                (block_size_descriptor *param_1,uint param_2,uint param_3,uint param_4,
                partition_info *param_5)

{
  block_size_descriptor bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  block_size_descriptor *pbVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  partition_info pVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  partition_info pVar32;
  partition_info pVar33;
  uint uVar34;
  byte bVar35;
  partition_info *ppVar36;
  partition_info *ppVar37;
  long in_FS_OFFSET;
  char cVar38;
  uint local_c8;
  uint local_84;
  undefined2 local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = param_1[3];
  local_58 = (undefined1  [16])0x0;
  ppVar36 = param_5 + 0x10;
  if (param_1[2] == (block_size_descriptor)0x0) {
    uVar5 = 0;
    local_58._12_4_ = 0;
    local_58._8_4_ = 0;
    local_58._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    local_84 = 0;
    uVar20 = (param_2 - 1) * 0x400 + param_3;
    uVar5 = (uVar20 * -0x1121f76f ^ uVar20 * -0x1121f76f >> 5) * 0x10001;
    uVar5 = uVar5 >> 7 ^ uVar5;
    uVar5 = uVar5 ^ uVar5 >> 3;
    uVar5 = uVar5 ^ uVar5 << 6;
    uVar15 = uVar5 >> 0x11 ^ uVar5;
    bVar9 = (byte)uVar15 >> 4;
    uVar27 = uVar15 >> 8 & 0xf;
    uVar28 = uVar15 >> 0xc & 0xf;
    uVar29 = uVar5 >> 0x10 & 0xf;
    uVar30 = uVar5 >> 0x14 & 0xf;
    uVar17 = uVar5 >> 0x18 & 0xf;
    uVar34 = uVar5 >> 0x12 & 0xf;
    local_c8._0_1_ = (byte)(uVar5 >> 0x16) & 0xf;
    bVar35 = (byte)(uVar15 << 2) & 0xf | (byte)(uVar5 >> 0x1e);
    uVar24 = uVar5 >> 0x1a & 0xf;
    pVar32 = (partition_info)0x0;
    bVar10 = (byte)local_c8 * (byte)local_c8;
    do {
      if (param_1[1] != (block_size_descriptor)0x0) {
        local_c8 = 0;
        ppVar37 = ppVar36;
        pVar33 = pVar32;
        do {
          uVar19 = 0;
          ppVar36 = ppVar37;
          pVar32 = pVar33;
          if (*param_1 != (block_size_descriptor)0x0) {
            do {
              if ((byte)bVar1 < 0x20) {
                uVar25 = local_84 * 2;
                uVar31 = local_c8 * 2;
                uVar18 = uVar19 * 2;
                if ((uVar20 & 1) != 0) goto LAB_00100278;
LAB_00100426:
                cVar38 = -((uVar20 & 2) != 0);
                cVar3 = param_2 == 3;
              }
              else {
                uVar25 = local_84;
                uVar31 = local_c8;
                uVar18 = uVar19;
                if ((uVar20 & 1) == 0) goto LAB_00100426;
LAB_00100278:
                cVar38 = param_2 == 3;
                cVar3 = -((uVar20 & 2) != 0);
              }
              bVar26 = cVar3 + 5;
              bVar23 = cVar38 + 5;
              bVar2 = bVar26;
              if ((uVar20 & 0x10) == 0) {
                bVar2 = bVar23;
              }
              uVar21 = ((int)(uint)(byte)(bVar9 * bVar9) >> (bVar23 & 0x1f)) * uVar31 +
                       ((int)((uVar15 & 0xf) * (uVar15 & 0xf)) >> (bVar26 & 0x1f)) * uVar18 +
                       ((int)(uVar24 * uVar24) >> (bVar2 & 0x1f)) * uVar25 + (uVar15 >> 0xe) & 0x3f;
              uVar6 = ((int)(uVar28 * uVar28) >> (bVar23 & 0x1f)) * uVar31 +
                      ((int)(uVar27 * uVar27) >> (bVar26 & 0x1f)) * uVar18 +
                      ((int)(uint)(byte)(bVar35 * bVar35) >> (bVar2 & 0x1f)) * uVar25 +
                      (uVar15 >> 10) & 0x3f;
              uVar16 = ((int)(uVar29 * uVar29) >> (bVar26 & 0x1f)) * uVar18 +
                       ((int)(uVar30 * uVar30) >> (bVar23 & 0x1f)) * uVar31 +
                       ((int)(uVar34 * uVar34) >> (bVar2 & 0x1f)) * uVar25 + (uVar15 >> 6) & 0x3f;
              if (param_2 == 4) {
                uVar25 = ((int)((uVar5 >> 0x1c) * (uVar5 >> 0x1c)) >> (bVar23 & 0x1f)) * uVar31 +
                         ((int)(uVar17 * uVar17) >> (bVar26 & 0x1f)) * uVar18 +
                         ((int)(uint)bVar10 >> (bVar2 & 0x1f)) * uVar25 + (uVar15 >> 2) & 0x3f;
LAB_0010037e:
                uVar31 = uVar25;
                if (uVar25 <= uVar16) {
                  uVar31 = uVar16;
                }
                uVar18 = uVar6;
                if (uVar6 <= uVar31) {
                  uVar18 = uVar31;
                }
                if (uVar21 < uVar18) {
                  if (uVar6 < uVar31) {
                    pVar13 = (partition_info)((uVar16 < uVar25) + '\x02');
                    iVar11 = (uVar16 < uVar25) + 2;
                  }
                  else {
                    iVar11 = 1;
                    pVar13 = (partition_info)0x1;
                  }
                }
                else {
LAB_00100578:
                  iVar11 = 0;
                  pVar13 = (partition_info)0x0;
                }
              }
              else if (param_2 == 3) {
                uVar25 = uVar16;
                if (uVar16 <= uVar6) {
                  uVar25 = uVar6;
                }
                if (uVar25 <= uVar21) goto LAB_00100578;
                pVar13 = (partition_info)((uVar6 < uVar16) + '\x01');
                iVar11 = (uVar6 < uVar16) + 1;
              }
              else {
                iVar11 = 0;
                pVar13 = (partition_info)0x0;
                if (param_2 != 1) {
                  uVar25 = 0;
                  uVar16 = 0;
                  goto LAB_0010037e;
                }
              }
              lVar7 = (long)iVar11;
              pVar32 = (partition_info)((char)pVar33 + '\x01');
              ppVar36 = ppVar37 + 1;
              iVar11 = *(int *)(local_58 + lVar7 * 4);
              uVar19 = uVar19 + 1;
              *(int *)(local_58 + lVar7 * 4) = iVar11 + 1;
              param_5[(long)iVar11 + 0xf0 + lVar7 * 0xd8] = pVar33;
              *ppVar37 = pVar13;
              ppVar37 = ppVar36;
              pVar33 = pVar32;
            } while (uVar19 < (byte)*param_1);
          }
          local_c8 = local_c8 + 1;
          ppVar37 = ppVar36;
          pVar33 = pVar32;
        } while (local_c8 < (byte)param_1[1]);
      }
      local_84 = local_84 + 1;
    } while (local_84 < (byte)param_1[2]);
    uVar5 = (((local_58._12_4_ & 0xff) << 8 | local_58._8_4_ & 0xff) << 8 | local_58._4_4_ & 0xff)
            << 8 | local_58._0_4_ & 0xff;
  }
  uVar22 = 0;
  ppVar36 = param_5;
  uVar15 = local_58._0_4_;
  while( true ) {
    lVar7 = (long)(int)uVar15;
    uVar17 = uVar15 + 3 & 0xfffffffc;
    if ((int)uVar15 < (int)uVar17) {
      do {
        ppVar36[lVar7 + 0xf0] =
             param_5[(long)(int)(uVar15 - 1) + (uVar22 & 0xffffffff) * 0xd8 + 0xf0];
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar17);
    }
    uVar22 = uVar22 + 1;
    ppVar36 = ppVar36 + 0xd8;
    if (uVar22 == param_2) break;
    uVar15 = *(uint *)(local_58 + uVar22 * 4);
  }
  if (local_58._0_4_ == 0) {
    sVar14 = 0;
    uVar15 = 0;
  }
  else if (local_58._4_4_ == 0) {
    sVar14 = 1;
    uVar15 = 1;
  }
  else if (local_58._8_4_ == 0) {
    sVar14 = 2;
    uVar15 = 2;
  }
  else {
    sVar14 = 4 - (ushort)(local_58._12_4_ == 0);
    uVar15 = 4 - (local_58._12_4_ == 0);
  }
  local_5c = (undefined2)param_3;
  *(short *)param_5 = sVar14;
  *(undefined2 *)(param_5 + 2) = local_5c;
  if (param_2 == 2) {
    pbVar8 = param_1 + ((ulong)param_4 + 0xe091f) * 0x10;
  }
  else if (param_2 == 3) {
    pbVar8 = param_1 + (ulong)param_4 * 0x18 + 0xe0d1f0;
  }
  else {
    if (param_2 != 4) {
      *(uint *)(param_5 + 4) = uVar5;
      goto LAB_001005d9;
    }
    pbVar8 = param_1 + (ulong)param_4 * 0x20 + 0xe131f0;
  }
  uVar12 = (ulong)param_2 * 8;
  *(uint *)(param_5 + 4) = uVar5;
  *(undefined8 *)pbVar8 = 0;
  *(undefined8 *)(pbVar8 + ((uVar12 & 0xffffffff) - 8)) = 0;
  uVar5 = (int)uVar12 + ((int)pbVar8 - (int)((ulong)(pbVar8 + 8) & 0xfffffffffffffff8)) & 0xfffffff8
  ;
  if (7 < uVar5) {
    uVar12 = 0;
    do {
      uVar17 = (int)uVar12 + 8;
      *(undefined8 *)(((ulong)(pbVar8 + 8) & 0xfffffffffffffff8) + uVar12) = 0;
      uVar12 = (ulong)uVar17;
    } while (uVar17 < uVar5);
  }
  bVar1 = param_1[3];
  uVar5 = 0x40;
  if ((byte)bVar1 < 0x41) {
    uVar5 = (uint)(byte)bVar1;
  }
  lVar7 = 0;
  if (bVar1 != (block_size_descriptor)0x0) {
    do {
      lVar4 = lVar7 + 0xe091b0;
      bVar10 = (byte)lVar7;
      lVar7 = lVar7 + 1;
      *(ulong *)(pbVar8 + (ulong)(byte)param_5[(ulong)(byte)param_1[lVar4] + 0x10] * 8) =
           *(ulong *)(pbVar8 + (ulong)(byte)param_5[(ulong)(byte)param_1[lVar4] + 0x10] * 8) |
           1L << (bVar10 & 0x3f);
    } while ((uint)lVar7 < uVar5);
  }
LAB_001005d9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)(uVar22 >> 8),param_2 == uVar15) & 0xffffffff;
}



/* build_partition_table_for_one_partition_count(block_size_descriptor&, bool, unsigned int,
   unsigned int, partition_info*, unsigned long*) */

void build_partition_table_for_one_partition_count
               (block_size_descriptor *param_1,bool param_2,uint param_3,uint param_4,
               partition_info *param_5,ulong *param_6)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  block_size_descriptor bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  int iVar14;
  partition_info *ppVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  ulong local_488;
  int local_460;
  int local_458 [4];
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_4 - 1;
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4 + 0x20) = 0;
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4 + 0x30) = 0;
  if ((param_3 < param_4) && (param_2)) {
LAB_00100783:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_460 = 0;
  uVar16 = 0;
  pcVar13 = local_448;
  for (lVar9 = 0x80; lVar9 != 0; lVar9 = lVar9 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13[4] = '\0';
    pcVar13[5] = '\0';
    pcVar13[6] = '\0';
    pcVar13[7] = '\0';
    pcVar13 = pcVar13 + 8;
  }
LAB_001007ee:
  uVar10 = 0;
  uVar12 = uVar10;
  local_488 = uVar16;
  if (local_460 != 1) goto LAB_00100942;
LAB_00100800:
  do {
    if (local_448[uVar12] == '\0') {
      ppVar15 = param_5 + uVar16 * 0x450;
      cVar7 = generate_one_partition_info_entry(param_1,param_4,(uint)uVar10,(uint)uVar16,ppVar15);
      local_488 = uVar16;
      do {
        bVar4 = param_1[3];
        uVar10 = 0;
        iVar5 = (int)uVar16;
        local_458[0] = -1;
        local_458[1] = 0xffffffff;
        local_458[2] = 0xffffffff;
        local_458[3] = 0xffffffff;
        iVar14 = 0;
        pauVar2 = (undefined1 (*) [16])(param_6 + (uint)(iVar5 * 7));
        *(undefined8 *)pauVar2[3] = 0;
        *pauVar2 = (undefined1  [16])0x0;
        pauVar2[1] = (undefined1  [16])0x0;
        pauVar2[2] = (undefined1  [16])0x0;
        if (bVar4 != (block_size_descriptor)0x0) {
          do {
            iVar6 = local_458[(byte)ppVar15[uVar10 + 0x10]];
            if (local_458[(byte)ppVar15[uVar10 + 0x10]] < 0) {
              local_458[(byte)ppVar15[uVar10 + 0x10]] = iVar14;
              iVar6 = iVar14;
              iVar14 = iVar14 + 1;
            }
            uVar11 = uVar10 + 1;
            *(ulong *)(*pauVar2 + (uVar10 >> 5 & 0x7ffffff) * 8) =
                 *(ulong *)(*pauVar2 + (uVar10 >> 5 & 0x7ffffff) * 8) |
                 (long)iVar6 << ((byte)uVar10 & 0x1f) * '\x02';
            uVar10 = uVar11;
          } while ((uint)uVar11 < (uint)(byte)bVar4);
        }
        if (iVar5 != 0) {
          uVar8 = 0;
          do {
            puVar3 = param_6 + uVar8;
            if ((((*(ulong *)*pauVar2 == *puVar3) && (*(ulong *)(*pauVar2 + 8) == puVar3[1])) &&
                (*(ulong *)pauVar2[1] == puVar3[2])) &&
               (((*(ulong *)(pauVar2[1] + 8) == puVar3[3] && (*(ulong *)pauVar2[2] == puVar3[4])) &&
                ((*(ulong *)(pauVar2[2] + 8) == puVar3[5] && (*(ulong *)pauVar2[3] == puVar3[6])))))
               ) goto LAB_00100928;
            uVar8 = uVar8 + 7;
          } while (iVar5 * 7 != uVar8);
        }
        if (cVar7 == '\0') {
LAB_00100928:
          if (local_460 == 1) {
            *(short *)(param_1 + uVar12 * 2 + (ulong)(param_4 - 2) * 0x800 + 0xe079b0) =
                 (short)uVar16;
            uVar16 = (ulong)(iVar5 + 1);
            *(int *)(param_1 + (ulong)uVar1 * 4 + 0x30) =
                 *(int *)(param_1 + (ulong)uVar1 * 4 + 0x30) + 1;
            break;
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == 0x400) goto LAB_00100980;
          uVar10 = uVar12 & 0xffffffff;
        }
        else if (local_460 == 0) {
          *(short *)(param_1 + uVar12 * 2 + (ulong)(param_4 - 2) * 0x800 + 0xe079b0) = (short)uVar16
          ;
          uVar16 = (ulong)(iVar5 + 1);
          *(int *)(param_1 + (ulong)uVar1 * 4 + 0x20) =
               *(int *)(param_1 + (ulong)uVar1 * 4 + 0x20) + 1;
          *(int *)(param_1 + (ulong)uVar1 * 4 + 0x30) =
               *(int *)(param_1 + (ulong)uVar1 * 4 + 0x30) + 1;
          local_448[uVar12] = '\x01';
          uVar12 = uVar12 + 1;
          if (uVar12 == 0x400) goto LAB_00100980;
          uVar10 = uVar12 & 0xffffffff;
          local_488 = uVar16;
        }
        else {
          uVar12 = uVar12 + 1;
          if (uVar12 == 0x400) goto LAB_00100980;
          uVar10 = uVar12 & 0xffffffff;
          local_488 = uVar16;
          if (local_460 == 1) goto LAB_00100800;
        }
LAB_00100942:
        ppVar15 = param_5 + local_488 * 0x450;
        while (cVar7 = generate_one_partition_info_entry
                                 (param_1,param_4,(uint)uVar10,(uint)uVar16,ppVar15), cVar7 == '\0')
        {
          uVar12 = uVar12 + 1;
          if (uVar12 == 0x400) goto LAB_00100980;
          uVar10 = uVar12 & 0xffffffff;
        }
      } while( true );
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x400) break;
    uVar10 = uVar12 & 0xffffffff;
  } while( true );
LAB_00100980:
  local_460 = local_460 + 1;
  if (local_460 == 2 - (uint)param_2) goto LAB_00100783;
  goto LAB_001007ee;
}



/* init_partition_tables(block_size_descriptor&, bool, unsigned int) */

void init_partition_tables(block_size_descriptor *param_1,bool param_2,uint param_3)

{
  ulong *puVar1;
  
  generate_one_partition_info_entry(param_1,1,0,0,(partition_info *)(param_1 + 0xe07560));
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  puVar1 = (ulong *)operator_new__(0xe000);
  build_partition_table_for_one_partition_count
            (param_1,param_2,param_3,2,(partition_info *)(param_1 + 0xacb560),puVar1);
  build_partition_table_for_one_partition_count
            (param_1,param_2,param_3,3,(partition_info *)(param_1 + 0xbdf560),puVar1);
  build_partition_table_for_one_partition_count
            (param_1,param_2,param_3,4,(partition_info *)(param_1 + 0xcf3560),puVar1);
  operator_delete__(puVar1);
  return;
}


