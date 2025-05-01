
void oc_filter_hedge(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,
                    int param_6,int *param_7,int *param_8)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *local_b0;
  uint local_68 [10];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (long)param_2;
  local_b0 = param_1 + lVar3 * 6;
  puVar1 = param_1 + 8;
  puVar6 = local_68;
  pbVar8 = param_3;
  do {
    do {
      bVar2 = *param_3;
      puVar5 = puVar6 + 1;
      param_3 = param_3 + param_4;
      *puVar6 = (uint)bVar2;
      puVar6 = puVar5;
    } while ((uint *)local_40 != puVar5);
    uVar10 = (int)(local_68[1] - local_68[0]) >> 0x1f;
    uVar12 = (int)(local_68[2] - local_68[1]) >> 0x1f;
    uVar13 = (int)(local_68[3] - local_68[2]) >> 0x1f;
    uVar14 = (int)(local_68[4] - local_68[3]) >> 0x1f;
    uVar15 = (int)(local_68[5] - local_68[6]) >> 0x1f;
    uVar16 = (int)(local_68[6] - local_68[7]) >> 0x1f;
    uVar17 = (int)(local_68[7] - local_68[8]) >> 0x1f;
    uVar18 = (int)(local_68[8] - local_68[9]) >> 0x1f;
    iVar11 = ((local_68[5] - local_68[6] ^ uVar15) - uVar15) +
             ((local_68[7] - local_68[8] ^ uVar17) - uVar17) +
             ((local_68[6] - local_68[7] ^ uVar16) - uVar16) +
             ((local_68[8] - local_68[9] ^ uVar18) - uVar18);
    iVar9 = ((local_68[1] - local_68[0] ^ uVar10) - uVar10) +
            ((local_68[3] - local_68[2] ^ uVar13) - uVar13) +
            ((local_68[2] - local_68[1] ^ uVar12) - uVar12) +
            ((local_68[4] - local_68[3] ^ uVar14) - uVar14);
    iVar7 = 0xff;
    if (iVar9 < 0x100) {
      iVar7 = iVar9;
    }
    *param_7 = *param_7 + iVar7;
    iVar7 = 0xff;
    if (iVar11 < 0x100) {
      iVar7 = iVar11;
    }
    *param_8 = *param_8 + iVar7;
    if (iVar9 < iVar11) {
      iVar9 = iVar11;
    }
    if (((iVar9 < param_6) && ((int)(local_68[5] - local_68[4]) < param_5)) &&
       ((int)(local_68[4] - local_68[5]) < param_5)) {
      *param_1 = (char)((int)(local_68[4] + 4 +
                             local_68[0] * 3 + local_68[1] * 2 + local_68[2] + local_68[3]) >> 3);
      param_1[lVar3] =
           (char)((int)(local_68[5] + 4 +
                       local_68[0] * 2 + local_68[1] + local_68[2] * 2 + local_68[3] + local_68[4])
                 >> 3);
      puVar4 = param_1 + lVar3 * 2;
      puVar6 = local_68;
      uVar12 = local_68[0];
      uVar13 = local_68[1];
      uVar14 = local_68[3];
      uVar10 = local_68[5];
      uVar15 = local_68[4];
      do {
        uVar17 = uVar10;
        uVar16 = puVar6[2];
        uVar10 = puVar6[6];
        puVar6 = puVar6 + 1;
        *puVar4 = (char)((int)(uVar10 + 4 + uVar12 + uVar13 + uVar16 + uVar14 * 2 + uVar15 + uVar17)
                        >> 3);
        puVar4 = puVar4 + lVar3;
        uVar12 = uVar13;
        uVar13 = uVar16;
        uVar14 = uVar15;
        uVar15 = uVar17;
      } while (puVar6 != local_68 + 4);
      *local_b0 = (char)((int)(local_68[4] + local_68[5] + local_68[6] + local_68[7] * 2 +
                               local_68[8] + 4 + local_68[9] * 2) >> 3);
      local_b0[lVar3] =
           (char)((int)(local_68[5] + local_68[6] + local_68[7] + local_68[8] * 2 + 4 +
                       local_68[9] * 3) >> 3);
    }
    else {
      puVar6 = local_68 + 1;
      puVar4 = param_1;
      do {
        uVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar4 = (char)uVar10;
        puVar4 = puVar4 + lVar3;
      } while (puVar6 != local_68 + 9);
    }
    local_b0 = local_b0 + 1;
    param_1 = param_1 + 1;
    param_3 = pbVar8 + 1;
    puVar6 = local_68;
    pbVar8 = param_3;
  } while (puVar1 != param_1);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void oc_filter_vedge(undefined1 *param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_68 [10];
  long local_40;
  
  uVar1 = _LC0;
  iVar2 = 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    lVar3 = 0;
    do {
      local_68[lVar3] = (uint)(byte)param_1[lVar3 + -1];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10);
    uVar7 = (int)(local_68[1] - local_68[0]) >> 0x1f;
    uVar9 = (int)(local_68[2] - local_68[1]) >> 0x1f;
    uVar10 = (int)(local_68[3] - local_68[2]) >> 0x1f;
    uVar11 = (int)(local_68[4] - local_68[3]) >> 0x1f;
    uVar12 = (int)(local_68[5] - local_68[6]) >> 0x1f;
    uVar13 = (int)(local_68[6] - local_68[7]) >> 0x1f;
    uVar14 = (int)(local_68[7] - local_68[8]) >> 0x1f;
    uVar15 = (int)(local_68[8] - local_68[9]) >> 0x1f;
    iVar8 = ((local_68[5] - local_68[6] ^ uVar12) - uVar12) +
            ((local_68[7] - local_68[8] ^ uVar14) - uVar14) +
            ((local_68[6] - local_68[7] ^ uVar13) - uVar13) +
            ((local_68[8] - local_68[9] ^ uVar15) - uVar15);
    iVar6 = ((local_68[1] - local_68[0] ^ uVar7) - uVar7) +
            ((local_68[3] - local_68[2] ^ uVar10) - uVar10) +
            ((local_68[2] - local_68[1] ^ uVar9) - uVar9) +
            ((local_68[4] - local_68[3] ^ uVar11) - uVar11);
    iVar4 = 0xff;
    if (iVar6 < 0x100) {
      iVar4 = iVar6;
    }
    iVar5 = 0xff;
    if (iVar8 < 0x100) {
      iVar5 = iVar8;
    }
    if (iVar6 < iVar8) {
      iVar6 = iVar8;
    }
    *param_5 = CONCAT44(iVar5 + -0xff + (int)((ulong)uVar1 >> 0x20) + (int)((ulong)*param_5 >> 0x20)
                        ,iVar4 + -0xff + (int)uVar1 + (int)*param_5);
    if (((iVar6 < param_4) && ((int)(local_68[5] - local_68[4]) < param_3)) &&
       ((int)(local_68[4] - local_68[5]) < param_3)) {
      *param_1 = (char)((int)(local_68[4] + 4 +
                             local_68[0] * 3 + local_68[1] * 2 + local_68[2] + local_68[3]) >> 3);
      param_1[1] = (char)((int)(local_68[5] + 4 +
                               local_68[0] * 2 + local_68[1] + local_68[2] * 2 + local_68[3] +
                               local_68[4]) >> 3);
      lVar3 = 0;
      uVar7 = local_68[1];
      uVar9 = local_68[5];
      uVar10 = local_68[4];
      uVar11 = local_68[0];
      uVar12 = local_68[3];
      do {
        uVar13 = uVar10;
        uVar10 = uVar9;
        uVar14 = uVar7;
        uVar7 = local_68[lVar3 + 2];
        uVar9 = local_68[lVar3 + 6];
        param_1[lVar3 + 2] =
             (char)((int)(uVar11 + uVar14 + uVar7 + uVar12 * 2 + uVar13 + uVar10 + 4 + uVar9) >> 3);
        lVar3 = lVar3 + 1;
        uVar11 = uVar14;
        uVar12 = uVar13;
      } while (lVar3 != 4);
      param_1[6] = (char)((int)(local_68[5] + local_68[4] + local_68[6] + local_68[7] * 2 +
                                local_68[8] + 4 + local_68[9] * 2) >> 3);
      param_1[7] = (char)((int)(local_68[5] + local_68[6] + local_68[7] + local_68[8] * 2 + 4 +
                               local_68[9] * 3) >> 3);
    }
    param_1 = param_1 + param_2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void oc_dering_block(byte *param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  byte *pbVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  int *piVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  long in_FS_OFFSET;
  int local_288 [8];
  undefined1 local_268 [256];
  uint local_168 [8];
  uint local_148 [66];
  long local_40;
  
  piVar17 = local_288;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar22 = *(byte *)((long)&OC_MOD_MAX_1 + (long)param_6);
  uVar3 = (uint)bVar22;
  if (param_4 * 3 <= (int)(uint)bVar22) {
    uVar3 = param_4 * 3;
  }
  lVar11 = 0;
  if ((param_3 & 4) == 0) {
    lVar11 = (long)(int)param_2;
  }
  iVar23 = 0;
  bVar22 = *(byte *)((long)&OC_MOD_SHIFT_0 + (long)param_6);
  uVar4 = (param_3 >> 3 ^ 1) & 1;
  piVar12 = piVar17;
  pbVar13 = param_1 + -lVar11;
  pbVar20 = param_1;
  do {
    lVar5 = 0;
    do {
      iVar24 = (uint)pbVar20[lVar5] - (uint)pbVar13[lVar5];
      iVar9 = -iVar24;
      if (0 < iVar24) {
        iVar9 = iVar24;
      }
      uVar25 = (param_4 + 0x20) - (iVar9 << (bVar22 & 0x1f));
      uVar8 = param_5;
      if (-0x41 < (int)uVar25) {
        if ((int)uVar3 <= (int)uVar25) {
          uVar25 = uVar3;
        }
        uVar8 = uVar25;
        if ((int)uVar25 < 0) {
          uVar8 = 0;
        }
      }
      piVar12[lVar5] = uVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    bVar1 = iVar23 < 7;
    iVar23 = iVar23 + 1;
    piVar12 = piVar12 + 8;
    pbVar13 = pbVar20;
    pbVar20 = pbVar20 + (int)(-(bVar1 | uVar4) & param_2);
  } while (iVar23 != 9);
  lVar14 = (long)(int)param_2;
  iVar23 = 0;
  lVar5 = (ulong)(param_3 & 1) - 1;
  uVar25 = (param_3 >> 1 ^ 1) & 1;
  puVar6 = local_168;
  puVar15 = local_148;
  pbVar13 = param_1 + lVar5;
  pbVar20 = param_1;
  do {
    lVar16 = 0;
    puVar2 = puVar15 + -8;
    do {
      puVar10 = puVar2;
      iVar24 = (uint)pbVar20[lVar16] - (uint)pbVar13[lVar16];
      iVar9 = -iVar24;
      if (0 < iVar24) {
        iVar9 = iVar24;
      }
      uVar26 = (param_4 + 0x20) - (iVar9 << (bVar22 & 0x1f));
      uVar8 = param_5;
      if (-0x41 < (int)uVar26) {
        uVar8 = uVar26;
        if ((int)uVar3 <= (int)uVar26) {
          uVar8 = uVar3;
        }
        if ((int)uVar8 < 0) {
          uVar8 = 0;
        }
      }
      *puVar10 = uVar8;
      lVar16 = lVar16 + lVar14;
      puVar2 = puVar10 + 1;
    } while (puVar10 + 1 != puVar15);
    puVar15 = puVar10 + 9;
    bVar1 = iVar23 < 7;
    iVar23 = iVar23 + 1;
    pbVar13 = pbVar20;
    pbVar20 = pbVar20 + (bVar1 | uVar25);
  } while (iVar23 != 9);
  bVar22 = 0;
  puVar27 = local_268;
  pbVar13 = param_1 + lVar14;
  pbVar20 = param_1 + lVar14;
  pbVar21 = param_1 + -lVar11;
  pbVar28 = param_1;
  iVar23 = 0;
  while( true ) {
    pbVar19 = param_1;
    pbVar18 = pbVar20;
    param_1 = pbVar13;
    uVar3 = puVar6[8];
    iVar9 = pbVar19[1] * uVar3 +
            (uint)*param_1 * piVar17[8] +
            (uint)pbVar19[lVar5] * *puVar6 + 0x40 + (uint)*pbVar21 * *piVar17 +
            (uint)*pbVar19 * ((((0x80 - *puVar6) - *piVar17) - piVar17[8]) - uVar3);
    iVar24 = iVar9 >> 7;
    bVar7 = -(0x7fff < iVar9) | (byte)iVar24;
    if (iVar24 < 0) {
      bVar7 = bVar22;
    }
    *pbVar28 = bVar7;
    lVar11 = 1;
    puVar15 = puVar6;
    do {
      iVar9 = 0x80 - uVar3;
      iVar24 = pbVar19[lVar11 + -1] * uVar3;
      uVar3 = puVar15[0x10];
      iVar9 = pbVar19[lVar11 + 1] * uVar3 +
              (uint)param_1[lVar11] * *(int *)(puVar27 + lVar11 * 4) +
              iVar24 + 0x40 + (uint)pbVar21[lVar11] * piVar17[lVar11] +
              (uint)pbVar19[lVar11] *
              (((iVar9 - piVar17[lVar11]) - *(int *)(puVar27 + lVar11 * 4)) - uVar3);
      iVar24 = iVar9 >> 7;
      bVar7 = -(0x7fff < iVar9) | (byte)iVar24;
      if (iVar24 < 0) {
        bVar7 = bVar22;
      }
      puVar15 = puVar15 + 8;
      pbVar28[lVar11] = bVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 7);
    iVar9 = (uint)pbVar19[7] *
            ((((0x80 - puVar6[0x38]) - piVar17[7]) - piVar17[0xf]) - puVar6[0x40]) +
            (uint)pbVar19[8 - (ulong)((char)uVar25 == '\0')] * puVar6[0x40] +
            (uint)param_1[7] * piVar17[0xf] +
            (uint)pbVar19[6] * puVar6[0x38] + 0x40 + (uint)pbVar21[7] * piVar17[7];
    iVar24 = iVar9 >> 7;
    bVar7 = -(0x7fff < iVar9) | (byte)iVar24;
    if (iVar24 < 0) {
      bVar7 = bVar22;
    }
    pbVar28[7] = bVar7;
    puVar6 = puVar6 + 1;
    piVar17 = piVar17 + 8;
    puVar27 = puVar27 + 0x20;
    if (iVar23 + 1 == 8) break;
    pbVar13 = param_1 + (int)(-(uint)(byte)(iVar23 < 6 | (byte)uVar4) & param_2);
    pbVar20 = pbVar18 + lVar14;
    pbVar21 = pbVar19;
    pbVar28 = pbVar18;
    iVar23 = iVar23 + 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void oc_dec_residual_tokens_unpack(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong *puVar15;
  int iVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  short sVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  undefined1 *puVar30;
  undefined5 *puVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long in_FS_OFFSET;
  bool bVar35;
  byte bVar36;
  ulong local_8e0;
  ulong *local_898;
  int local_850 [2];
  ulong local_848 [62];
  ulong local_658 [64];
  undefined1 local_458 [8];
  undefined1 auStack_450 [8];
  ulong local_448 [128];
  ulong local_48;
  long local_40;
  
  bVar36 = 0;
  puVar15 = (ulong *)(param_1 + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar21 = local_448;
  puVar17 = local_658 + 2;
  do {
    uVar26 = *puVar15;
    puVar12 = puVar17;
    if (((int)puVar21 - (int)puVar17 & 0x10U) == 0) goto LAB_00100a51;
    *puVar17 = uVar26;
    puVar17[1] = uVar26;
    for (puVar12 = puVar17 + 2; puVar21 != puVar12; puVar12 = puVar12 + 4) {
LAB_00100a51:
      *puVar12 = uVar26;
      puVar12[1] = uVar26;
      puVar12[2] = uVar26;
      puVar12[3] = uVar26;
    }
    puVar17 = puVar17 + 0x40;
    puVar15 = puVar15 + 1;
    puVar21 = puVar21 + 0x40;
  } while (puVar17 != &local_48);
  lVar1 = param_1 + 0xd118;
  lVar33 = 0;
  lVar34 = 0;
  puVar30 = local_458;
  local_850[0] = oc_pack_read_c(lVar1,4);
  local_850[1] = oc_pack_read_c(lVar1,4);
  lVar23 = 0;
  uVar26 = 0;
  lVar27 = *(long *)(param_1 + 0xdfb8);
  lVar4 = *(long *)(param_1 + 0x118);
  lVar28 = 1;
  lVar19 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0xd9b8) = 0;
  do {
    lVar23 = lVar23 + *(long *)(param_1 + 0x170 + lVar28 * 8);
    puVar15 = local_848;
    for (lVar18 = 0x40; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + (ulong)bVar36 * -2 + 1;
    }
    *(ulong *)(param_1 + 0xd7b8 + lVar28 * 0x200) = uVar26;
    local_8e0 = lVar23 - lVar34;
    if ((long)uVar26 < lVar23 - lVar34) {
      local_8e0 = uVar26;
    }
    *(long *)(param_1 + 0xd1b8 + lVar28 * 0x200) = lVar33;
    if (0 < (long)local_8e0) {
      plVar13 = (long *)(lVar19 + lVar34 * 8);
      do {
        lVar18 = *plVar13;
        plVar13 = plVar13 + 1;
        *(undefined2 *)(lVar4 + 2 + lVar18 * 4) = 0;
      } while ((long *)(lVar19 + (local_8e0 + lVar34) * 8) != plVar13);
      lVar34 = lVar34 + local_8e0;
    }
    uVar26 = uVar26 - local_8e0;
    if (lVar34 < lVar23) {
      iVar16 = local_850[(int)lVar28 >> 1];
      lVar18 = lVar33;
      do {
        while( true ) {
          iVar7 = oc_huff_token_decode_c
                            (lVar1,*(undefined8 *)(param_1 + 8 + ((long)iVar16 + 0x1a26) * 8));
          lVar33 = lVar18 + 1;
          *(char *)(lVar27 + lVar18) = (char)iVar7;
          if (0xe < iVar7) break;
          iVar8 = oc_pack_read_c(lVar1,OC_INTERNAL_DCT_TOKEN_EXTRA_BITS[iVar7]);
          lVar33 = lVar18 + 2;
          *(char *)(lVar27 + 1 + lVar18) = (char)iVar8;
          if (iVar7 != 0) {
            if (iVar7 < 2) {
              iVar8 = iVar8 << 8;
            }
            else if (iVar7 < 0xc) {
              iVar8 = iVar8 << 0x15;
            }
            goto LAB_00100be6;
          }
          *(char *)(lVar27 + lVar33) = (char)((uint)iVar8 >> 8);
          lVar33 = lVar18 + 3;
          uVar9 = iVar8 * 0x100 + *(int *)(OC_DCT_CODE_WORD + (long)iVar7 * 4);
          if (uVar9 != 0) goto LAB_00100bf7;
LAB_00100cd3:
          lVar18 = 0x7fffffffffffffff;
LAB_00100cdd:
          plVar13 = (long *)(lVar19 + lVar34 * 8);
          lVar24 = lVar23 - lVar34;
          if (lVar18 < lVar23 - lVar34) {
            lVar24 = lVar18;
          }
          local_8e0 = local_8e0 + lVar24;
          uVar26 = lVar18 - lVar24;
          do {
            lVar18 = *plVar13;
            plVar13 = plVar13 + 1;
            *(undefined2 *)(lVar4 + 2 + lVar18 * 4) = 0;
          } while (plVar13 != (long *)(lVar19 + (lVar24 + lVar34) * 8));
          lVar34 = lVar34 + lVar24;
          lVar18 = lVar33;
          if (lVar23 <= lVar34) goto LAB_00100d34;
        }
        iVar8 = 0;
LAB_00100be6:
        uVar9 = iVar8 + *(int *)(OC_DCT_CODE_WORD + (long)iVar7 * 4);
        if (uVar9 == 0) goto LAB_00100cd3;
LAB_00100bf7:
        uVar20 = (int)uVar9 >> 8 & 0xfff;
        lVar18 = (long)(int)uVar20;
        if (uVar20 != 0) goto LAB_00100cdd;
        sVar25 = 0;
        if ((uVar9 & 0xff) == 0) {
          sVar25 = (short)((ushort)(uVar9 >> 0x10) ^ (ushort)(-(uVar9 & 0x100000) >> 0x10)) >> 5;
        }
        uVar26 = 0;
        local_848[(int)(uVar9 & 0xff)] = local_848[(int)(uVar9 & 0xff)] + 1;
        lVar18 = lVar34 * 8;
        lVar34 = lVar34 + 1;
        *(short *)(lVar4 + 2 + *(long *)(lVar19 + lVar18) * 4) = sVar25;
        lVar18 = lVar33;
      } while (lVar34 < lVar23);
LAB_00100d34:
      local_8e0 = local_8e0 + local_658[1];
    }
    local_658[1] = local_8e0;
    puVar15 = local_658;
    do {
      local_8e0 = local_8e0 + *puVar15;
      *puVar15 = local_8e0;
      bVar35 = local_848 != puVar15;
      puVar15 = puVar15 + -1;
    } while (bVar35);
    lVar18 = 0;
    do {
      lVar24 = *(long *)((long)(puVar30 + lVar18) + 8);
      lVar6 = *(long *)((long)local_658 + lVar18 + 8);
      *(long *)(puVar30 + lVar18) =
           *(long *)(puVar30 + lVar18) - *(long *)((long)local_658 + lVar18);
      *(long *)((long)(puVar30 + lVar18) + 8) = lVar24 - lVar6;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != -0x200);
    lVar28 = lVar28 + 1;
    puVar30 = puVar30 + 0x200;
    if (lVar28 == 4) {
      *(int *)(param_1 + 0xdfc8) = (int)lVar33;
      iVar7 = oc_pack_read_c(lVar1,4);
      iVar8 = oc_pack_read_c(lVar1,4);
      uVar9 = 1;
      puVar31 = &OC_HUFF_LIST_MAX_2;
      iVar16 = iVar8;
      do {
        iVar16 = iVar16 + 0x10;
        local_850[1] = iVar16;
        local_850[0] = (iVar7 - iVar8) + iVar16;
        bVar2 = *(byte *)((long)puVar31 + 1);
        if ((int)uVar9 < (int)(uint)bVar2) {
          lVar33 = (long)(int)uVar9;
          iVar32 = *(int *)(param_1 + 0xdfc8);
          local_898 = local_848 + (0x3f - lVar33);
          do {
            lVar34 = (long)iVar32;
            lVar4 = *(long *)(param_1 + 0xdfb8);
            lVar27 = lVar33 * 8;
            iVar32 = 0;
            puVar30 = auStack_450;
            do {
              iVar32 = iVar32 + 1;
              uVar5 = *(ulong *)((long)(local_658 + 2) + lVar27);
              *(ulong *)(param_1 + 0xd9b8 + lVar27) = uVar26;
              puVar15 = local_848;
              for (lVar19 = 0x40; lVar19 != 0; lVar19 = lVar19 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + (ulong)bVar36 * -2 + 1;
              }
              *(long *)(param_1 + 0xd3b8 + lVar27) = lVar34;
              uVar22 = uVar5;
              if (uVar26 < uVar5) {
                lVar23 = 0;
                iVar3 = local_850[iVar32 >> 1];
                lVar19 = lVar34;
                uVar22 = uVar26;
                do {
                  while( true ) {
                    uVar14 = uVar22;
                    lVar23 = lVar23 + uVar26;
                    iVar10 = oc_huff_token_decode_c
                                       (lVar1,*(undefined8 *)
                                               (param_1 + 8 + ((long)iVar3 + 0x1a26) * 8));
                    lVar34 = lVar19 + 1;
                    *(char *)(lVar4 + lVar19) = (char)iVar10;
                    if (iVar10 < 0xf) {
                      iVar11 = oc_pack_read_c(lVar1,OC_INTERNAL_DCT_TOKEN_EXTRA_BITS[iVar10]);
                      lVar34 = lVar19 + 2;
                      *(char *)(lVar4 + 1 + lVar19) = (char)iVar11;
                      if (iVar10 == 0) {
                        *(char *)(lVar4 + lVar34) = (char)((uint)iVar11 >> 8);
                        lVar34 = lVar19 + 3;
                        iVar11 = iVar11 << 8;
                      }
                      else if (iVar10 < 2) {
                        iVar11 = iVar11 << 8;
                      }
                      else if (iVar10 < 0xc) {
                        iVar11 = iVar11 << 0x15;
                      }
                    }
                    else {
                      iVar11 = 0;
                    }
                    uVar20 = iVar11 + *(int *)(OC_DCT_CODE_WORD + (long)iVar10 * 4);
                    lVar19 = lVar34;
                    if (uVar20 != 0) break;
                    uVar26 = 0x7fffffffffffffff;
                    uVar22 = uVar14 + 0x7fffffffffffffff;
                    if (uVar5 <= uVar22) goto LAB_00100ffc;
                  }
                  uVar29 = (int)uVar20 >> 8 & 0xfff;
                  if (uVar29 == 0) {
                    uVar14 = uVar14 + 1;
                    uVar26 = 0;
                    local_848[uVar20 & 0xff] = local_848[uVar20 & 0xff] + 1;
                  }
                  else {
                    uVar26 = (ulong)(int)uVar29;
                  }
                  uVar22 = uVar14 + uVar26;
                } while (uVar22 < uVar5);
LAB_00100ffc:
                uVar26 = uVar22;
                uVar22 = ((lVar23 + uVar5) - uVar14) + local_658[1];
              }
              local_658[1] = uVar22;
              uVar26 = uVar26 - uVar5;
              puVar15 = local_658;
              do {
                uVar22 = uVar22 + *puVar15;
                *puVar15 = uVar22;
                bVar35 = local_848 != puVar15;
                puVar15 = puVar15 + -1;
              } while (bVar35);
              lVar19 = 0;
              if (0 < (int)(0x40 - uVar9)) {
                do {
                  *(long *)(puVar30 + lVar19) =
                       *(long *)(puVar30 + lVar19) - *(long *)((long)local_898 + lVar19);
                  lVar19 = lVar19 + -8;
                } while (lVar19 != ~(ulong)(0x3f - uVar9) * 8);
              }
              puVar30 = puVar30 + 0x200;
              lVar27 = lVar27 + 0x200;
            } while (iVar32 != 3);
            local_898 = local_898 + -1;
            iVar32 = (int)lVar34;
            *(int *)(param_1 + 0xdfc8) = iVar32;
            uVar26 = (ulong)(int)uVar26;
            uVar9 = uVar9 + 1;
            lVar33 = lVar33 + 1;
          } while (uVar9 != bVar2);
        }
        puVar31 = (undefined5 *)((long)puVar31 + 1);
        if (puVar31 == (undefined5 *)0x104208) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      } while( true );
    }
  } while( true );
}



void oc_dec_accel_init_c(void)

{
  return;
}



void oc_dec_dc_unpredict_mcu_plane_c(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  
  lVar8 = (long)param_3;
  piVar2 = (int *)(param_1 + 0xa0 + lVar8 * 0x28);
  iVar3 = *(int *)(param_2 + (lVar8 + 0x53c) * 4);
  iVar4 = *(int *)(param_2 + 0xc + (lVar8 + 0x53c) * 4);
  iVar5 = *piVar2;
  lVar6 = *(long *)(param_1 + 0x118);
  lVar16 = (long)iVar5;
  lVar10 = iVar3 * lVar16 + *(long *)(piVar2 + 2);
  if (iVar3 < iVar4) {
    lVar20 = 0;
    lVar13 = lVar6 + lVar16 * -4;
    iVar17 = iVar3;
    do {
      if (iVar17 == 0) {
        if (0 < iVar5) {
          pbVar14 = (byte *)(lVar6 + lVar10 * 4);
          do {
            if ((*pbVar14 & 1) != 0) {
              lVar20 = lVar20 + 1;
              piVar2 = (int *)(param_2 + 0x1508 + lVar8 * 0x10 + (ulong)(*pbVar14 >> 6) * 4);
              sVar11 = *(short *)(pbVar14 + 2) + (short)*piVar2;
              *(short *)(pbVar14 + 2) = sVar11;
              *piVar2 = (int)sVar11;
            }
            pbVar14 = pbVar14 + 4;
          } while ((byte *)(lVar6 + (lVar16 + lVar10) * 4) != pbVar14);
          goto LAB_0010152f;
        }
      }
      else if (0 < iVar5) {
        pbVar14 = (byte *)(lVar13 + 4 + lVar10 * 4);
        lVar12 = lVar6 + -4 + lVar10 * 4;
        iVar9 = 0;
        uVar19 = 0xffffffff;
        uVar15 = (uint)(*(byte *)(lVar13 + lVar10 * 4) >> 6);
        do {
          iVar9 = iVar9 + 1;
          uVar7 = 0xffffffff;
          if (iVar9 < iVar5) {
            uVar7 = (uint)(*pbVar14 >> 6);
          }
          pbVar1 = (byte *)(lVar12 + 4);
          lVar12 = lVar12 + 4;
          if ((*pbVar1 & 1) != 0) {
            bVar18 = *pbVar1 >> 6;
                    /* WARNING: Could not recover jumptable at 0x00101375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_001041c0 +
                      *(int *)(&DAT_001041c0 +
                              (ulong)((uint)(bVar18 == 0xffffffff) |
                                      (uint)(bVar18 == uVar15) << 2 | (uint)(uVar7 == bVar18) << 3 |
                                     (uint)(bVar18 == uVar19) * 2) * 4)))();
            return;
          }
          pbVar14 = pbVar14 + 4;
          uVar19 = uVar15;
          uVar15 = uVar7;
        } while (iVar9 != iVar5);
LAB_0010152f:
        lVar10 = lVar10 + 1 + (ulong)(iVar5 - 1);
      }
      iVar17 = iVar17 + 1;
    } while (iVar4 != iVar17);
  }
  else {
    lVar20 = 0;
  }
  *(long *)(param_2 + 0x1430 + lVar8 * 8) = lVar20;
  *(long *)(param_2 + 0x1448 + lVar8 * 8) = (iVar4 - iVar3) * lVar16 - lVar20;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long th_decode_alloc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar4 = oc_aligned_malloc(0xf7a0,0x10);
    if (lVar4 != 0) {
      iVar3 = oc_state_init(lVar4,param_1,3);
      if (-1 < iVar3) {
        iVar3 = oc_huff_trees_copy(lVar4 + 0xd138,param_2);
        if (-1 < iVar3) {
          pvVar5 = malloc(*(long *)(lVar4 + 0x130) * 0x81);
          *(void **)(lVar4 + 0xdfb8) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            lVar17 = __LC1 + lVar4;
            lVar18 = _UNK_00104688 + lVar4;
            lVar15 = __LC2 + lVar4;
            lVar16 = _UNK_00104698 + lVar4;
            lVar13 = lVar4 + __LC3;
            lVar14 = lVar4 + _UNK_001046a8;
            plVar6 = (long *)(lVar4 + 0x4c8);
            lVar10 = 0;
            do {
              lVar8 = lVar10 + 0x300;
              *plVar6 = lVar17 + lVar10;
              plVar6[1] = lVar18 + lVar10;
              plVar6[2] = lVar15 + lVar10;
              plVar6[3] = lVar16 + lVar10;
              plVar6[4] = lVar10 + lVar13;
              plVar6[5] = lVar10 + lVar14;
              plVar6 = plVar6 + 6;
              lVar10 = lVar8;
            } while (lVar8 != 0xc000);
            oc_dequant_tables_init((long *)(lVar4 + 0x4c8),lVar4 + 0xdfd0,param_2 + 0x280);
            lVar13 = 0;
            lVar10 = lVar4;
            piVar11 = (int *)(lVar4 + 0xe0d0);
            do {
              iVar9 = 2;
              iVar3 = 0;
              lVar14 = lVar10;
              while( true ) {
                iVar7 = 0;
                lVar15 = lVar14;
                do {
                  lVar16 = *(long *)(lVar15 + 0x4c8);
                  bVar12 = iVar7 == 0;
                  iVar7 = iVar7 + 1;
                  lVar15 = lVar15 + 0x10;
                  iVar3 = iVar3 + ((uint)*(ushort *)(lVar16 + 0x18) +
                                   (uint)*(ushort *)(lVar16 + 0x22) +
                                   (uint)*(ushort *)(lVar16 + 0x24) +
                                   (uint)*(ushort *)(lVar16 + 0x30) << bVar12);
                } while (iVar7 != 3);
                lVar14 = lVar14 + 8;
                if (iVar9 == 1) break;
                iVar9 = 1;
              }
              lVar13 = lVar13 + 6;
              lVar10 = lVar10 + 0x30;
              *piVar11 = -(iVar3 >> 0xb);
              piVar11 = piVar11 + 1;
            } while (lVar13 != 0x180);
            uVar1 = *(undefined8 *)(param_2 + 0x388);
            *(undefined8 *)(lVar4 + 0xd0d0) = *(undefined8 *)(param_2 + 0x380);
            *(undefined8 *)(lVar4 + 0xd0d8) = uVar1;
            uVar1 = *(undefined8 *)(param_2 + 0x398);
            *(undefined8 *)(lVar4 + 0xd0e0) = *(undefined8 *)(param_2 + 0x390);
            *(undefined8 *)(lVar4 + 0xd0e8) = uVar1;
            uVar1 = *(undefined8 *)(param_2 + 0x3a8);
            *(undefined8 *)(lVar4 + 0xd0f0) = *(undefined8 *)(param_2 + 0x3a0);
            *(undefined8 *)(lVar4 + 0xd0f8) = uVar1;
            uVar1 = *(undefined8 *)(param_2 + 0x3b0);
            uVar2 = *(undefined8 *)(param_2 + 0x3b8);
            *(undefined4 *)(lVar4 + 0xdfcc) = 0;
            *(undefined8 *)(lVar4 + 0xe1e0) = 0;
            *(undefined8 *)(lVar4 + 0xe238) = 0;
            *(undefined8 *)(lVar4 + 0xe240) = 0;
            *(undefined8 *)(lVar4 + 0x4b0) = 0;
            *(undefined8 *)(lVar4 + 0xd100) = uVar1;
            *(undefined8 *)(lVar4 + 0xd108) = uVar2;
            *(undefined1 (*) [16])(lVar4 + 0xe1d0) = (undefined1  [16])0x0;
            return lVar4;
          }
          oc_huff_trees_clear(lVar4 + 0xd138);
        }
        oc_state_clear(lVar4);
      }
    }
    oc_aligned_free(lVar4);
  }
  return 0;
}



void th_decode_free(long param_1)

{
  if (param_1 != 0) {
    free(*(void **)(param_1 + 0xe1e0));
    free(*(void **)(param_1 + 0xe1d8));
    free(*(void **)(param_1 + 0xe1d0));
    free(*(void **)(param_1 + 0xdfb8));
    oc_huff_trees_clear(param_1 + 0xd138);
    oc_state_clear(param_1);
    oc_aligned_free(param_1);
    return;
  }
  return;
}



undefined8 th_decode_ctl(long param_1,int param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  
  if (param_2 == 5) {
    if (param_1 == 0) {
      return 0xffffffff;
    }
    if (param_3 == (ulong *)0x0) {
      return 0xffffffff;
    }
    if ((param_4 == 8) && (uVar1 = *param_3, -1 < (long)uVar1)) {
      *(ulong *)(param_1 + 0x4b8) = uVar1;
      bVar2 = (byte)*(undefined4 *)(param_1 + 0x3c);
      lVar3 = ((long)uVar1 >> (bVar2 & 0x3f)) - (ulong)*(byte *)(param_1 + 0x4c1);
      *(long *)(param_1 + 0x4a8) = lVar3;
      *(ulong *)(param_1 + 0x4b0) = ((long)((1 << (bVar2 & 0x1f)) + -1) & uVar1) + lVar3;
      return 0;
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 1) {
      if ((param_1 == 0) || (param_3 == (ulong *)0x0)) {
        return 0xffffffff;
      }
      if (param_4 == 4) {
        *(uint *)param_3 = 7;
        return 0;
      }
    }
    else {
      if (param_2 != 3) {
        return 0xffffffe9;
      }
      if (param_1 == 0) {
        return 0xffffffff;
      }
      if (param_3 == (ulong *)0x0) {
        return 0xffffffff;
      }
      if ((param_4 == 4) && ((uint)*param_3 < 8)) {
        *(uint *)(param_1 + 0xdfcc) = (uint)*param_3;
        return 0;
      }
    }
  }
  else {
    if (param_2 != 7) {
      return 0xffffffe9;
    }
    if (param_1 == 0) {
      return 0xffffffff;
    }
    if (param_3 == (ulong *)0x0) {
      return 0xffffffff;
    }
    if (param_4 == 0x10) {
      uVar1 = param_3[1];
      *(ulong *)(param_1 + 0xe238) = *param_3;
      *(ulong *)(param_1 + 0xe240) = uVar1;
      return 0;
    }
  }
  return 0xfffffff6;
}



undefined8 th_decode_packetin(long param_1,undefined8 *param_2,long *param_3)

{
  ulong *puVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  size_t __size;
  bool bVar9;
  int iVar10;
  undefined1 uVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  void *__src;
  void *pvVar23;
  ulong uVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long *plVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  void *pvVar38;
  long lVar39;
  uint uVar40;
  int iVar41;
  void *pvVar42;
  int iVar43;
  int *piVar44;
  byte bVar45;
  int iVar46;
  undefined4 uVar47;
  long lVar48;
  int iVar49;
  int iVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  ulong uVar53;
  ushort uVar54;
  ushort uVar55;
  int *piVar56;
  ushort uVar57;
  ushort uVar58;
  int iVar59;
  char *pcVar60;
  int iVar61;
  byte *pbVar62;
  uint uVar63;
  byte *pbVar64;
  ushort *puVar65;
  long lVar66;
  long lVar67;
  long in_FS_OFFSET;
  bool bVar68;
  byte bVar69;
  undefined1 *in_stack_fffffffffffffdf8;
  void *pvVar70;
  undefined1 *puVar71;
  ulong uVar72;
  byte *local_1f0;
  char *local_1e8;
  long local_1d0;
  long local_1c8;
  long local_1b0;
  void *local_1a8;
  int *local_158;
  long local_150;
  undefined8 *local_148;
  int local_140;
  uint local_13c;
  int local_138;
  int local_134;
  int *local_130;
  long local_128;
  ushort *local_108;
  undefined4 local_a0 [2];
  ushort local_98 [4];
  ushort local_90 [36];
  undefined8 local_48;
  long local_40;
  
  bVar69 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0 || param_2 == (undefined8 *)0x0) {
    uVar20 = 0xffffffff;
    goto LAB_00101af6;
  }
  if (param_2[1] == 0) {
    *(undefined1 *)(param_1 + 0x4c0) = 1;
    *(undefined8 *)(param_1 + 400) = 0;
    goto LAB_00101a75;
  }
  puVar26 = (undefined1 *)(param_1 + 0xd118);
  puVar71 = puVar26;
  oc_pack_readinit(puVar26,*param_2);
  iVar28 = oc_pack_read1_c(puVar26);
  if (iVar28 != 0) {
    uVar20 = 0xffffffe8;
    goto LAB_00101af6;
  }
  uVar11 = oc_pack_read1_c(puVar26);
  *(undefined1 *)(param_1 + 0x4c0) = uVar11;
  uVar11 = oc_pack_read_c(puVar26,6);
  *(undefined1 *)(param_1 + 0x4c3) = uVar11;
  iVar28 = oc_pack_read1_c(puVar26);
  uVar11 = 1;
  puVar26 = puVar71;
  if (iVar28 != 0) {
    uVar11 = oc_pack_read_c(puVar71,6);
    *(undefined1 *)(param_1 + 0x4c4) = uVar11;
    iVar28 = oc_pack_read1_c(puVar71);
    uVar11 = 2;
    if (iVar28 != 0) {
      uVar11 = oc_pack_read_c(puVar26,6);
      *(undefined1 *)(param_1 + 0x4c5) = uVar11;
      uVar11 = 3;
    }
  }
  *(undefined1 *)(param_1 + 0x4c2) = uVar11;
  if (*(char *)(param_1 + 0x4c0) != '\0') {
LAB_0010243a:
    in_stack_fffffffffffffdf8 = puVar26;
    uVar15 = oc_pack_read1_c();
    local_1d0 = *(long *)(param_1 + 0x140);
    uVar17 = *(uint *)(param_1 + 0x148);
    if (uVar17 != 0) {
      uVar30 = 0;
      uVar32 = 0;
      do {
        uVar29 = oc_huff_token_decode_c(puVar26,OC_SB_RUN_TREE_4);
        if (0xf < (int)uVar29) {
          iVar28 = oc_pack_read_c(puVar26,(int)(uVar29 & 0xffffffe0) >> 4);
          uVar29 = (uVar29 & 0x1f) + 6 + iVar28;
        }
        pbVar62 = (byte *)(uVar32 + local_1d0);
        uVar53 = uVar32;
        do {
          uVar40 = (int)uVar53 + 1;
          uVar53 = (ulong)uVar40;
          uVar30 = uVar30 + uVar15;
          *pbVar62 = *pbVar62 & 0xfc | ((byte)uVar15 & 1) * '\x02';
          pbVar62 = pbVar62 + 1;
          if (((int)uVar32 - uVar40) + uVar29 == 0) break;
        } while (uVar17 > uVar40);
        if ((uVar29 < 0x1021) || (uVar17 <= uVar40)) {
          uVar15 = (uint)(uVar15 == 0);
          if (uVar17 <= uVar40) goto code_r0x0010333a;
        }
        else {
          uVar15 = oc_pack_read1_c(puVar26);
        }
        uVar32 = (ulong)uVar40;
      } while( true );
    }
    bVar68 = false;
    goto LAB_00103370;
  }
  lVar19 = oc_pack_read_c(puVar26);
  if (lVar19 != 0) {
    uVar20 = 0xffffffe9;
    goto LAB_00101af6;
  }
  if (*(char *)(param_1 + 0x4c0) != '\0') goto LAB_0010243a;
  lVar19 = *(long *)(param_1 + 0x138);
  lVar35 = 0;
  uVar17 = 0;
  lVar21 = *(long *)(param_1 + 0x170);
  lVar36 = *(long *)(param_1 + 0x140);
  uVar15 = 0;
  lVar66 = *(long *)(param_1 + 0x118);
  lVar34 = 0;
  do {
    uVar15 = uVar15 + *(int *)(param_1 + 0xc4 + lVar35 * 5);
    lVar39 = 0;
    lVar67 = lVar34;
    if (uVar17 < uVar15) {
      uVar32 = (ulong)uVar17;
      pbVar62 = (byte *)(lVar36 + uVar32);
      plVar37 = (long *)(uVar32 * 0x80 + lVar19);
      do {
        bVar45 = *pbVar62;
        uVar30 = 0;
        plVar27 = plVar37;
        do {
          plVar22 = plVar27 + 4;
          if (((bVar45 >> 2 & 0xf) >> (uVar30 & 0x1f) & 1) != 0) {
            puVar26 = (undefined1 *)
                      (CONCAT44((int)((ulong)puVar26 >> 0x20),(uint)(bVar45 >> 2)) &
                      0xffffffff0000000f);
            do {
              lVar39 = *plVar27;
              if (-1 < lVar39) {
                puVar65 = (ushort *)(lVar66 + lVar39 * 4);
                *puVar65 = *puVar65 & 0xf83e | 0x181;
                *(long *)(lVar21 + lVar67 * 8) = lVar39;
                lVar67 = lVar67 + 1;
              }
              plVar27 = plVar27 + 1;
            } while (plVar22 != plVar27);
          }
          uVar30 = uVar30 + 1;
          plVar27 = plVar22;
        } while (uVar30 != 4);
        plVar37 = plVar37 + 0x10;
        pbVar62 = pbVar62 + 1;
      } while ((long *)((((uVar15 - uVar17) - 1) + uVar32) * 0x80 + lVar19 + 0x80) != plVar37);
      lVar39 = lVar67 - lVar34;
      uVar17 = uVar15;
    }
    *(long *)(param_1 + 0x178 + lVar35) = lVar39;
    lVar35 = lVar35 + 8;
    lVar34 = lVar67;
  } while (lVar35 != 0x18);
  *(long *)(param_1 + 400) = lVar67;
  goto joined_r0x00101aa0;
code_r0x0010333a:
  uVar17 = *(uint *)(param_1 + 0x148);
  if (uVar30 < uVar17) {
    uVar32 = 0;
    pbVar62 = *(byte **)(param_1 + 0x140);
    bVar45 = *pbVar62;
    while ((bVar45 & 2) != 0) {
      uVar32 = (ulong)((int)uVar32 + 1);
      bVar45 = pbVar62[uVar32];
    }
    uVar15 = oc_pack_read1_c(in_stack_fffffffffffffdf8);
LAB_00104067:
    uVar29 = oc_huff_token_decode_c(in_stack_fffffffffffffdf8,OC_SB_RUN_TREE_4);
    if (0xf < (int)uVar29) {
      iVar28 = oc_pack_read_c(in_stack_fffffffffffffdf8,(int)(uVar29 & 0xffffffe0) >> 4);
      uVar29 = (uVar29 & 0x1f) + 6 + iVar28;
    }
    if ((uint)uVar32 < uVar17) {
      pbVar64 = pbVar62 + uVar32;
      uVar40 = uVar29;
      do {
        if ((*pbVar64 & 2) == 0) {
          if (uVar40 == 0) goto code_r0x001040c5;
          *pbVar64 = *pbVar64 & 0xfe | (byte)uVar15 & 1;
          uVar40 = uVar40 - 1;
        }
        uVar63 = (uint)uVar32 + 1;
        uVar32 = (ulong)uVar63;
        pbVar64 = pbVar64 + 1;
        if (uVar17 == uVar63) break;
      } while( true );
    }
  }
LAB_0010334e:
  if (uVar30 == 0) {
    bVar68 = false;
    local_1d0 = *(long *)(param_1 + 0x140);
  }
  else {
    iVar28 = oc_pack_read1_c();
    bVar68 = iVar28 == 0;
    local_1d0 = *(long *)(param_1 + 0x140);
  }
LAB_00103370:
  iVar28 = 0;
  lVar39 = 0;
  lVar48 = 0;
  uVar15 = 0;
  lVar19 = *(long *)(param_1 + 0x138);
  lVar21 = *(long *)(param_1 + 0x118);
  lVar36 = *(long *)(param_1 + 0x158);
  lVar66 = *(long *)(param_1 + 0x170);
  lVar34 = *(long *)(param_1 + 0x130);
  uVar17 = 0;
  lVar35 = 0;
  do {
    lVar33 = 0;
    uVar15 = *(int *)(param_1 + 0xc4 + lVar39 * 0x28) + uVar15;
    lVar67 = lVar35;
    if (uVar17 < uVar15) {
      uVar32 = (ulong)uVar17;
      uVar30 = uVar17 * 4;
      plVar37 = (long *)(uVar32 * 0x80 + lVar19);
      pbVar62 = (byte *)(local_1d0 + uVar32);
      do {
        uVar29 = 0;
        plVar27 = plVar37;
        do {
          plVar22 = plVar27 + 4;
          uVar40 = (int)(*pbVar62 >> 2 & 0xf) >> ((byte)uVar29 & 0x1f) & 1;
          if (uVar40 != 0) {
            uVar63 = 0;
            do {
              lVar33 = *plVar27;
              if (-1 < lVar33) {
                if ((*pbVar62 & 1) == 0) {
                  if ((*pbVar62 & 2) != 0) {
                    if (iVar28 < 1) {
                      iVar28 = oc_huff_token_decode_c(in_stack_fffffffffffffdf8,OC_BLOCK_RUN_TREE_3)
                      ;
                      bVar68 = (bool)(bVar68 ^ 1);
                    }
                    iVar28 = iVar28 + -1;
                    if (bVar68) goto LAB_00103558;
                  }
                  lVar48 = lVar48 + 1;
                  *(long *)(lVar66 + (lVar34 - lVar48) * 8) = lVar33;
                  bVar45 = 0;
                }
                else {
LAB_00103558:
                  bVar45 = 1;
                  *(long *)(lVar66 + lVar67 * 8) = lVar33;
                  lVar67 = lVar67 + 1;
                  uVar63 = uVar40;
                }
                pbVar64 = (byte *)(lVar21 + lVar33 * 4);
                *pbVar64 = *pbVar64 & 0x3e | bVar45 | 0xc0;
              }
              plVar27 = plVar27 + 1;
            } while (plVar22 != plVar27);
            if (lVar39 == 0) {
              *(char *)(lVar36 + (ulong)(uVar29 | uVar30)) = (char)uVar63;
            }
          }
          uVar29 = uVar29 + 1;
          plVar27 = plVar22;
        } while (uVar29 != 4);
        pbVar62 = pbVar62 + 1;
        uVar30 = uVar30 + 4;
        plVar37 = plVar37 + 0x10;
      } while ((long *)(lVar19 + 0x80 + (((uVar15 - uVar17) - 1) + uVar32) * 0x80) != plVar37);
      lVar33 = lVar67 - lVar35;
      uVar17 = uVar15;
    }
    *(long *)(param_1 + 0x178 + lVar39 * 8) = lVar33;
    lVar39 = lVar39 + 1;
    lVar35 = lVar67;
  } while (lVar39 != 3);
  *(long *)(param_1 + 400) = lVar67;
  puVar26 = in_stack_fffffffffffffdf8;
  if (*(char *)(param_1 + 0x4c0) != '\0') {
LAB_00101a75:
    if ((*(int *)(param_1 + 0x348) < 0) || (*(int *)(param_1 + 0x34c) < 0)) {
      *(undefined8 *)(param_1 + 0x348) = 0;
      iVar28 = *(int *)(param_1 + 0x39c);
      *(undefined4 *)(param_1 + 0x350) = 0;
      *(undefined8 *)(param_1 + 0xe230) = *(undefined8 *)(param_1 + 0x1d8);
      iVar49 = *(int *)(param_1 + 0x398);
      lVar19 = *(long *)(param_1 + 0x1a8);
      puVar26 = (undefined1 *)
                CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20),
                         *(uint *)(param_1 + 0x30));
      *(long *)(param_1 + 0x370) = lVar19;
      iVar18 = -iVar49;
      if (0 < iVar49) {
        iVar18 = iVar49;
      }
      *(long *)(param_1 + 0x360) = lVar19;
      *(long *)(param_1 + 0x368) = lVar19;
      iVar49 = *(int *)(param_1 + 8) + 0x20;
      *(undefined8 *)(param_1 + 0xe1f0) = *(undefined8 *)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0xe1f8) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0xe200) = *(undefined8 *)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0xe208) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0xe210) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0xe218) = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0xe220) = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0xe228) = *(undefined8 *)(param_1 + 0x1d0);
      iVar4 = -iVar28;
      if (0 < iVar28) {
        iVar4 = iVar28;
      }
      memset((void *)(lVar19 - ((long)(*(int *)(param_1 + 8) + 0xf) * (long)iVar18 + 0x10)),0x80,
             (long)iVar49 * (long)iVar18 + 0x10 +
             (long)(iVar49 >> (((byte)(*(uint *)(param_1 + 0x30) >> 1) ^ 1) & 1)) * (long)iVar4 * 2)
      ;
      lVar67 = *(long *)(param_1 + 400);
    }
    else {
      lVar67 = *(long *)(param_1 + 400);
      puVar26 = in_stack_fffffffffffffdf8;
    }
  }
joined_r0x00101aa0:
  if (lVar67 < 1) {
    lVar19 = *(long *)(param_1 + 0x4b0);
    *(long *)(param_1 + 0x4b0) = lVar19 + 1;
    lVar19 = ((ulong)*(byte *)(param_1 + 0x4c1) + *(long *)(param_1 + 0x4a8) <<
             ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x3f)) + (lVar19 - *(long *)(param_1 + 0x4a8))
    ;
    *(long *)(param_1 + 0x4b8) = lVar19;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar19;
    }
    uVar20 = 1;
LAB_00101af6:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar20;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  for (iVar28 = 0; (*(int *)(param_1 + 0x348) == iVar28 || (iVar28 == *(int *)(param_1 + 0x34c)));
      iVar28 = iVar28 + 1) {
  }
  uVar20 = *(undefined8 *)(param_1 + 0x1a8 + (long)iVar28 * 0x48);
  *(int *)(param_1 + 0x350) = iVar28;
  *(undefined8 *)(param_1 + 0x370) = uVar20;
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x4b0);
LAB_00101c9a:
    lVar19 = *(long *)(param_1 + 0x118);
    plVar37 = *(long **)(param_1 + 0x170);
    if (*(char *)(param_1 + 0x4c2) == '\x01') {
      lVar21 = 0;
      do {
        plVar27 = plVar37 + lVar21;
        lVar21 = lVar21 + 1;
        pbVar62 = (byte *)(lVar19 + *plVar27 * 4);
        *pbVar62 = *pbVar62 & 0xc3;
      } while (lVar21 < lVar67);
    }
    else {
      iVar49 = 0;
      puVar26 = (undefined1 *)(param_1 + 0xd118);
      uVar17 = oc_pack_read1_c(puVar26);
      lVar21 = 0;
LAB_001039ec:
      do {
        uVar15 = oc_huff_token_decode_c(puVar26,OC_SB_RUN_TREE_4);
        if (0xf < (int)uVar15) {
          iVar18 = oc_pack_read_c(puVar26,(int)(uVar15 & 0xffffffe0) >> 4);
          uVar15 = (uVar15 & 0x1f) + 6 + iVar18;
        }
        lVar36 = lVar21;
        do {
          lVar66 = lVar36 + 1;
          iVar49 = iVar49 + uVar17;
          *(byte *)(lVar19 + plVar37[lVar36] * 4) =
               *(byte *)(lVar19 + plVar37[lVar36] * 4) & 0xc3 | (byte)((uVar17 & 0xf) << 2);
          if ((int)(((int)lVar21 - (int)lVar66) + uVar15) < 1) break;
          lVar36 = lVar66;
        } while (lVar66 < lVar67);
        lVar21 = lVar66;
        if ((0x1020 < (int)uVar15) && (lVar66 < lVar67)) {
          uVar17 = oc_pack_read1_c(puVar26);
          goto LAB_001039ec;
        }
        uVar17 = (uint)(uVar17 == 0);
      } while (lVar66 < lVar67);
      if ((*(char *)(param_1 + 0x4c2) == '\x03') && (0 < iVar49)) {
        lVar21 = 0;
        bVar45 = *(byte *)(lVar19 + *plVar37 * 4);
        while ((bVar45 & 0x3c) == 0) {
          lVar21 = lVar21 + 1;
          bVar45 = *(byte *)(lVar19 + plVar37[lVar21] * 4);
        }
        uVar17 = oc_pack_read1_c(puVar26);
LAB_00103ad8:
        uVar15 = oc_huff_token_decode_c(puVar26,OC_SB_RUN_TREE_4);
        if (0xf < (int)uVar15) {
          iVar49 = oc_pack_read_c(puVar26,(int)(uVar15 & 0xffffffe0) >> 4);
          uVar15 = (uVar15 & 0x1f) + 6 + iVar49;
        }
        uVar30 = uVar15;
        if (lVar21 < lVar67) {
          do {
            pbVar62 = (byte *)(lVar19 + plVar37[lVar21] * 4);
            bVar45 = *pbVar62;
            uVar29 = uVar30;
            if ((bVar45 & 0x3c) != 0) {
              uVar29 = uVar30 - 1;
              if ((int)uVar30 < 1) goto LAB_00104118;
              *pbVar62 = bVar45 & 0xc3 | (byte)(((bVar45 >> 2) + uVar17 & 0xf) << 2);
            }
            lVar21 = lVar21 + 1;
            uVar30 = uVar29;
            if (lVar21 == lVar67) break;
          } while( true );
        }
      }
    }
  }
  else {
    lVar19 = param_1 + 0xd118;
    iVar49 = oc_pack_read_c(lVar19,3);
    if (iVar49 == 0) {
      local_48 = 0;
      puVar52 = (undefined8 *)(OC_MODE_ALPHABETS + 0x30);
      do {
        puVar51 = (undefined8 *)((long)puVar52 + 1);
        lVar21 = oc_pack_read_c(lVar19,3);
        *(undefined1 *)((long)&local_48 + lVar21) = *(undefined1 *)puVar52;
        puVar52 = puVar51;
      } while (puVar51 != &_LC0);
      puVar52 = &local_48;
      puVar26 = OC_VLC_MODE_TREE;
    }
    else {
      puVar26 = OC_VLC_MODE_TREE;
      if (iVar49 == 7) {
        puVar26 = OC_CLC_MODE_TREE;
      }
      puVar52 = (undefined8 *)(OC_MODE_ALPHABETS + (long)(iVar49 + -1) * 8);
    }
    pcVar60 = *(char **)(param_1 + 0x158);
    pcVar25 = pcVar60 + *(long *)(param_1 + 0x168);
    if (*(long *)(param_1 + 0x168) != 0) {
      do {
        if ('\0' < *pcVar60) {
          iVar49 = oc_huff_token_decode_c(lVar19,puVar26);
          *pcVar60 = *(char *)((long)puVar52 + (long)iVar49);
        }
        pcVar60 = pcVar60 + 1;
      } while (pcVar25 != pcVar60);
    }
    pcVar8 = *(code **)(&OC_SET_CHROMA_MVS_TABLE + (ulong)*(uint *)(param_1 + 0x30) * 8);
    iVar49 = oc_pack_read1_c(lVar19);
    plVar37 = *(long **)(param_1 + 0x150);
    puVar26 = OC_CLC_MV_COMP_TREE;
    if (iVar49 == 0) {
      puVar26 = OC_VLC_MV_COMP_TREE;
    }
    lVar21 = (ulong)*(uint *)(param_1 + 0x30) * 0xc;
    lVar36 = *(long *)(param_1 + 0x118);
    local_1e8 = *(char **)(param_1 + 0x158);
    uVar17 = (uint)(byte)(&OC_MB_MAP_NIDXS)[*(uint *)(param_1 + 0x30)];
    lVar66 = *(long *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x168) != 0) {
      pcVar25 = local_1e8 + *(long *)(param_1 + 0x168);
      uVar55 = 0;
      uVar57 = 0;
      do {
        local_108 = local_98;
        cVar3 = *local_1e8;
        uVar15 = (uint)cVar3;
        uVar58 = uVar57;
        if (cVar3 != -1) {
          if (uVar15 == 7) {
            plVar27 = plVar37;
            puVar65 = local_108;
            do {
              lVar34 = *plVar27;
              puVar2 = (ushort *)(lVar36 + lVar34 * 4);
              if ((*puVar2 & 1) == 0) {
                *puVar65 = 0;
              }
              else {
                *puVar2 = *puVar2 & 0xf83f | 0x740;
                sVar13 = oc_huff_token_decode_c(lVar19,puVar26);
                sVar14 = oc_huff_token_decode_c(lVar19,puVar26);
                uVar58 = sVar13 - 0x20U & 0xff | (sVar14 + -0x20) * 0x100;
                *puVar65 = uVar58;
                *(ushort *)(lVar66 + lVar34 * 2) = uVar58;
              }
              local_108 = local_98;
              plVar27 = plVar27 + 1;
              puVar65 = puVar65 + 1;
            } while (local_90 != puVar65);
            (*pcVar8)(local_a0,local_108);
            pbVar62 = &DAT_001050a4 + lVar21;
            uVar55 = uVar57;
            if (4 < uVar17) {
              do {
                bVar45 = *pbVar62;
                lVar34 = plVar37[bVar45];
                puVar65 = (ushort *)(lVar36 + lVar34 * 4);
                if ((*puVar65 & 1) != 0) {
                  *puVar65 = *puVar65 & 0xf83f | 0x740;
                  *(undefined2 *)(lVar66 + lVar34 * 2) =
                       *(undefined2 *)((long)local_a0 + (ulong)(bVar45 & 3) * 2);
                }
                pbVar62 = pbVar62 + 1;
              } while (&DAT_001050a5 + (ulong)(uVar17 - 5) + lVar21 != pbVar62);
            }
          }
          else {
            uVar12 = uVar55;
            uVar58 = uVar55;
            uVar54 = uVar57;
            if (cVar3 != '\x04') {
              if (cVar3 < '\x05') {
                if (cVar3 == '\x02') {
                  sVar13 = oc_huff_token_decode_c(lVar19,puVar26);
                  sVar14 = oc_huff_token_decode_c(lVar19,puVar26);
                  uVar12 = sVar13 - 0x20U & 0xff | (sVar14 + -0x20) * 0x100;
                  uVar58 = uVar12;
                }
                else {
                  uVar12 = 0;
                  uVar58 = uVar57;
                  uVar54 = uVar55;
                  if (cVar3 == '\x03') {
                    uVar12 = uVar57;
                  }
                }
              }
              else {
                uVar12 = 0;
                uVar58 = uVar57;
                uVar54 = uVar55;
                if (cVar3 == '\x06') {
                  sVar13 = oc_huff_token_decode_c(lVar19,puVar26);
                  sVar14 = oc_huff_token_decode_c(lVar19,puVar26);
                  uVar12 = sVar13 - 0x20U & 0xff | (sVar14 + -0x20) * 0x100;
                }
              }
            }
            lVar34 = 0;
            do {
              lVar35 = plVar37[(byte)(&OC_MB_MAP_IDXS)[lVar34 + lVar21]];
              puVar65 = (ushort *)(lVar36 + lVar35 * 4);
              if ((*puVar65 & 1) != 0) {
                *puVar65 = *puVar65 & 0xf83f |
                           (ushort)((uVar15 & 7) << 8) |
                           (ushort)((0x10011121 >> ((byte)(uVar15 << 2) & 0x1f) & 0xfU) << 6);
                *(ushort *)(lVar66 + lVar35 * 2) = uVar12;
              }
              lVar34 = lVar34 + 1;
              uVar55 = uVar54;
            } while ((int)lVar34 < (int)uVar17);
          }
        }
        uVar57 = uVar58;
        local_1e8 = local_1e8 + 1;
        plVar37 = plVar37 + 0xc;
      } while (pcVar25 != local_1e8);
    }
    lVar67 = *(long *)(param_1 + 400);
    if (0 < lVar67) goto LAB_00101c9a;
  }
LAB_00101ccf:
  uVar47 = (undefined4)((ulong)puVar26 >> 0x20);
  local_108 = local_98;
  oc_dec_residual_tokens_unpack(param_1);
  lVar19 = *(long *)(param_1 + 0x4b0);
  *(long *)(param_1 + 0x4b0) = lVar19 + 1;
  lVar19 = ((ulong)*(byte *)(param_1 + 0x4c1) + *(long *)(param_1 + 0x4a8) <<
           ((byte)*(undefined4 *)(param_1 + 0x3c) & 0x3f)) + (lVar19 - *(long *)(param_1 + 0x4a8));
  *(long *)(param_1 + 0x4b8) = lVar19;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar19;
  }
  lVar19 = param_1 + 0xe250;
  pvVar70 = (void *)CONCAT44(uVar47,*(uint *)(param_1 + 0x30));
  puVar51 = (undefined8 *)(param_1 + 0xe458U & 0xfffffffffffffff8);
  *(undefined8 *)(param_1 + 0xea48) = *(undefined8 *)(param_1 + 0xd9b0);
  *(undefined8 *)(param_1 + 0xe450) = *(undefined8 *)(param_1 + 0xd3b8);
  *(uint *)(param_1 + 0xf788) = (-(uint)((*(uint *)(param_1 + 0x30) & 2) == 0) & 4) + 4;
  lVar21 = (param_1 + 0xe450) - (long)puVar51;
  puVar52 = (undefined8 *)((param_1 + 0xd3b8) - lVar21);
  for (uVar32 = (ulong)((int)lVar21 + 0x600U >> 3); uVar32 != 0; uVar32 = uVar32 - 1) {
    *puVar51 = *puVar52;
    puVar52 = puVar52 + (ulong)bVar69 * -2 + 1;
    puVar51 = puVar51 + (ulong)bVar69 * -2 + 1;
  }
  puVar51 = (undefined8 *)(param_1 + 0xf058U & 0xfffffffffffffff8);
  lVar21 = (param_1 + 0xf050) - (long)puVar51;
  *(undefined8 *)(param_1 + 0xf050) = *(undefined8 *)(param_1 + 0xd9b8);
  *(undefined8 *)(param_1 + 0xf648) = *(undefined8 *)(param_1 + 0xdfb0);
  puVar52 = (undefined8 *)((param_1 + 0xd9b8) - lVar21);
  for (uVar32 = (ulong)((int)lVar21 + 0x600U >> 3); uVar32 != 0; uVar32 = uVar32 - 1) {
    *puVar51 = *puVar52;
    puVar52 = puVar52 + (ulong)bVar69 * -2 + 1;
    puVar51 = puVar51 + (ulong)bVar69 * -2 + 1;
  }
  lVar36 = *(long *)(param_1 + 0x170);
  lVar21 = lVar36 + *(long *)(param_1 + 0x130) * 8;
  plVar37 = (long *)(param_1 + 0x178);
  plVar27 = (long *)(param_1 + 0xb0);
  do {
    plVar37[0x1e9b] = lVar36;
    plVar22 = plVar37 + 1;
    plVar37[0x1e9e] = lVar21;
    lVar36 = lVar36 + *plVar37 * 8;
    lVar21 = lVar21 + (*plVar37 - *plVar27) * 8;
    plVar37 = plVar22;
    plVar27 = plVar27 + 5;
  } while (plVar22 != (long *)(param_1 + 400));
  iVar49 = 0;
  bVar45 = *(byte *)(param_1 + 0x4c2);
  lVar21 = param_1;
  if (bVar45 == 0) {
    do {
      iVar49 = iVar49 + 1;
    } while (iVar49 != 3);
  }
  else {
    do {
      lVar66 = 0;
      lVar36 = lVar21;
      do {
        pbVar62 = (byte *)(param_1 + 0x4c3 + lVar66);
        lVar66 = lVar66 + 1;
        puVar52 = (undefined8 *)(param_1 + 8 + ((ulong)*pbVar62 * 3 + 0x4c + (long)iVar49) * 0x10);
        uVar20 = puVar52[1];
        *(undefined8 *)(lVar36 + 0xf6b0) = *puVar52;
        *(undefined8 *)(lVar36 + 0xf6b8) = uVar20;
        lVar36 = lVar36 + 0x10;
      } while ((int)lVar66 < (int)(uint)bVar45);
      iVar49 = iVar49 + 1;
      lVar21 = lVar21 + 0x30;
    } while (iVar49 != 3);
  }
  *(undefined1 (*) [16])(param_1 + 0xf758) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xf768) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xf778) = (undefined1  [16])0x0;
  bVar68 = *(char *)(param_1 + 0xd0d0 + (ulong)*(byte *)(param_1 + 0x4c3)) != '\0';
  *(uint *)(param_1 + 0xf78c) = (uint)bVar68;
  if (bVar68) {
    (**(code **)(param_1 + 0x78))(param_1 + 0xe350);
  }
  (**(code **)(param_1 + 0x88))();
  iVar49 = *(int *)(param_1 + 0xdfcc);
  if (iVar49 < 1) {
    if (*(void **)(param_1 + 0xe1d0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe1d0));
      *(undefined8 *)(param_1 + 0xe1d0) = 0;
      free(*(void **)(param_1 + 0xe1d8));
      *(undefined8 *)(param_1 + 0xe1d8) = 0;
      free(*(void **)(param_1 + 0xe1e0));
      *(undefined8 *)(param_1 + 0xe1e0) = 0;
    }
  }
  else {
    lVar21 = *(long *)(param_1 + 0xe1d0);
    if (lVar21 == 0) {
      if (*(char *)(param_1 + 0x4c0) == '\0') {
        __size = *(size_t *)(param_1 + 0x130);
        pvVar23 = malloc(__size);
        *(void **)(param_1 + 0xe1d0) = pvVar23;
        if (pvVar23 != (void *)0x0) {
          __memset_chk(pvVar23,*(undefined1 *)(param_1 + 0x4c3),__size,__size);
          goto LAB_00101f12;
        }
      }
    }
    else {
      lVar36 = *(long *)(param_1 + 0x180) + *(long *)(param_1 + 0x178) + *(long *)(param_1 + 0x188);
      plVar37 = *(long **)(param_1 + 0x170);
      uVar11 = *(undefined1 *)(param_1 + 0x4c3);
      if (0 < lVar36) {
        plVar27 = plVar37 + lVar36;
        do {
          lVar36 = *plVar37;
          plVar37 = plVar37 + 1;
          *(undefined1 *)(lVar21 + lVar36) = uVar11;
        } while (plVar27 != plVar37);
        iVar49 = *(int *)(param_1 + 0xdfcc);
      }
LAB_00101f12:
      pvVar23 = *(void **)(param_1 + 0xe1d8);
      if (1 < iVar49) {
        if (pvVar23 == (void *)0x0) {
          uVar17 = *(uint *)(param_1 + 8);
          uVar15 = *(uint *)(param_1 + 4);
          lVar36 = (ulong)uVar15 * (ulong)uVar17;
          uVar29 = uVar15 >> (~(byte)*(uint *)(param_1 + 0x30) & 1);
          uVar30 = uVar17 >> (((byte)(*(uint *)(param_1 + 0x30) >> 1) ^ 1) & 1);
          lVar21 = (long)(int)uVar29 * (long)(int)uVar30;
          pvVar23 = malloc(lVar36 + lVar21 * 2);
          pvVar70 = *(void **)(param_1 + 0x130);
          *(void **)(param_1 + 0xe1e0) = pvVar23;
          pvVar42 = malloc((long)pvVar70 << 2);
          *(void **)(param_1 + 0xe1d8) = pvVar42;
          if ((pvVar23 == (void *)0x0) || (pvVar42 == (void *)0x0)) {
            free(pvVar23);
            *(undefined8 *)(param_1 + 0xe1e0) = 0;
            free(pvVar42);
            *(undefined8 *)(param_1 + 0xe1d8) = 0;
            pvVar70 = pvVar42;
            goto LAB_00103de3;
          }
          *(undefined4 *)(param_1 + 0xe1e8) = 0;
          if (iVar49 < 5) {
LAB_00101f50:
            uVar20 = *(undefined8 *)(param_1 + 4);
            *(undefined4 *)(param_1 + 0xe1e8) = 1;
            *(undefined8 *)(param_1 + 0xe1f0) = uVar20;
            *(int *)(param_1 + 0xe1f8) = -(int)uVar20;
            *(long *)(param_1 + 0xe200) =
                 (long)(1 - (int)((ulong)uVar20 >> 0x20)) * (long)-(int)uVar20 +
                 *(long *)(param_1 + 0xe1e0);
            if (iVar49 < 5) goto LAB_00101fab;
          }
          else {
LAB_00102557:
            *(void **)(param_1 + 0xe200) = pvVar23;
            *(long *)(param_1 + 0xe218) = (long)pvVar23 + lVar36;
            *(uint *)(param_1 + 0xe208) = uVar29;
            *(uint *)(param_1 + 0xe210) = uVar29;
            *(uint *)(param_1 + 0xe220) = uVar29;
            *(uint *)(param_1 + 0xe228) = uVar29;
            *(long *)(param_1 + 0xe230) = (long)pvVar23 + lVar36 + lVar21;
            *(uint *)(param_1 + 0xe1f0) = uVar15;
            *(uint *)(param_1 + 0xe1f4) = uVar17;
            *(uint *)(param_1 + 0xe1f8) = uVar15;
            *(uint *)(param_1 + 0xe20c) = uVar30;
            *(uint *)(param_1 + 0xe224) = uVar30;
            oc_ycbcr_buffer_flip(param_1 + 0xe1f0,param_1 + 0xe1f0);
            iVar49 = *(int *)(param_1 + 0xdfcc);
            if (iVar49 < 5) {
              *(undefined4 *)(param_1 + 0xe1e8) = 1;
              goto LAB_00101fab;
            }
            *(undefined4 *)(param_1 + 0xe1e8) = 2;
          }
        }
        else if (iVar49 < 5) {
          if (*(int *)(param_1 + 0xe1e8) != 1) goto LAB_00101f50;
LAB_00101fab:
          puVar52 = (undefined8 *)(param_1 + 0x1b0 + (long)*(int *)(param_1 + 0x350) * 0x48);
          uVar20 = puVar52[1];
          *(undefined8 *)(param_1 + 0xe208) = *puVar52;
          *(undefined8 *)(param_1 + 0xe210) = uVar20;
          uVar20 = puVar52[3];
          *(undefined8 *)(param_1 + 0xe218) = puVar52[2];
          *(undefined8 *)(param_1 + 0xe220) = uVar20;
          uVar20 = puVar52[5];
          *(undefined8 *)(param_1 + 0xe228) = puVar52[4];
          *(undefined8 *)(param_1 + 0xe230) = uVar20;
        }
        else if (*(int *)(param_1 + 0xe1e8) != 2) {
          uVar17 = *(uint *)(param_1 + 8);
          uVar15 = *(uint *)(param_1 + 4);
          lVar36 = (ulong)uVar15 * (ulong)uVar17;
          pvVar23 = *(void **)(param_1 + 0xe1e0);
          uVar29 = uVar15 >> (~(byte)*(uint *)(param_1 + 0x30) & 1);
          uVar30 = uVar17 >> (((byte)(*(uint *)(param_1 + 0x30) >> 1) ^ 1) & 1);
          lVar21 = (long)(int)uVar29 * (long)(int)uVar30;
          goto LAB_00102557;
        }
        *(int *)(param_1 + 0xf790) = iVar49;
        goto LAB_00101ff1;
      }
      if (pvVar23 != (void *)0x0) {
        free(pvVar23);
        *(undefined8 *)(param_1 + 0xe1d8) = 0;
        free(*(void **)(param_1 + 0xe1e0));
        *(undefined8 *)(param_1 + 0xe1e0) = 0;
      }
    }
  }
LAB_00103de3:
  *(undefined4 *)(param_1 + 0xf790) = 0;
  puVar52 = (undefined8 *)(param_1 + 0x198 + (long)*(int *)(param_1 + 0x350) * 0x48);
  uVar20 = puVar52[1];
  *(undefined8 *)(param_1 + 0xe1f0) = *puVar52;
  *(undefined8 *)(param_1 + 0xe1f8) = uVar20;
  uVar20 = puVar52[3];
  *(undefined8 *)(param_1 + 0xe200) = puVar52[2];
  *(undefined8 *)(param_1 + 0xe208) = uVar20;
  uVar20 = puVar52[5];
  *(undefined8 *)(param_1 + 0xe210) = puVar52[4];
  *(undefined8 *)(param_1 + 0xe218) = uVar20;
  uVar20 = puVar52[7];
  *(undefined8 *)(param_1 + 0xe220) = puVar52[6];
  *(undefined8 *)(param_1 + 0xe228) = uVar20;
  *(undefined8 *)(param_1 + 0xe230) = puVar52[8];
LAB_00101ff1:
  *(undefined8 *)(param_1 + 0xe250) = 0;
  *(undefined8 *)(param_1 + 0xe2c8) = 0;
  puVar52 = (undefined8 *)(param_1 + 0xe258U & 0xfffffffffffffff8);
  uVar32 = (ulong)(((int)lVar19 - (int)puVar52) + 0x80U >> 3);
  for (; uVar32 != 0; uVar32 = uVar32 - 1) {
    *puVar52 = 0;
    puVar52 = puVar52 + (ulong)bVar69 * -2 + 1;
  }
  oc_ycbcr_buffer_flip(local_108,(int *)(param_1 + 0xe1f0));
  local_138 = 0;
  iVar49 = *(int *)(param_1 + 0xf788);
  local_134 = 0;
LAB_00102091:
  iVar4 = *(int *)(param_1 + 0xa4);
  local_1c8 = 0;
  iVar18 = local_134 + iVar49;
  uVar17 = (uint)(iVar18 < iVar4);
  iVar61 = 0;
  local_158 = (int *)(param_1 + 0xa0);
  local_150 = param_1;
  local_148 = (undefined8 *)(param_1 + 0xf6b0);
  local_140 = iVar4;
  local_130 = (int *)(param_1 + 0xe1f0);
  local_128 = param_1 + (long)iVar28 * 0x48;
  iVar46 = iVar4;
LAB_00102887:
  local_13c = 0;
  iVar16 = local_134;
  iVar10 = iVar46;
  do {
    *(int *)(param_1 + 0xf740 + local_1c8 * 4) = iVar16;
    iVar46 = iVar49 + iVar16;
    if (local_158[1] < iVar49 + iVar16) {
      iVar46 = local_158[1];
    }
    *(int *)(param_1 + 0xf74c + local_1c8 * 4) = iVar46;
    oc_dec_dc_unpredict_mcu_plane_c(param_1,lVar19,iVar61);
    lVar21 = *(long *)(param_1 + 0xf650 + local_1c8 * 8);
    pvVar23 = *(void **)(param_1 + 0xf680 + local_1c8 * 8);
    lVar36 = *(long *)(param_1 + 0xdfb8);
    lVar66 = *(long *)(param_1 + 0x90);
    lVar34 = *(long *)(param_1 + 0x118);
    local_a0[0] = CONCAT22(*(undefined2 *)local_148[1],*(undefined2 *)*local_148);
    if (0 < (long)pvVar23) {
      pvVar70 = (void *)0x0;
      do {
        lVar35 = *(long *)(lVar21 + (long)pvVar70 * 8);
        pbVar62 = (byte *)(lVar34 + lVar35 * 4);
        iVar49 = 0;
        lVar39 = *(long *)(param_1 + 0xe250 +
                          ((ulong)((pbVar62[1] & 7) != 1) + 0x28c +
                          ((ulong)(*pbVar62 >> 2 & 0xf) + (long)iVar61 * 3) * 2) * 8);
        do {
          puVar1 = (ulong *)(local_150 + 0xf050 + (long)iVar49 * 8);
          if (*puVar1 != 0) {
            *puVar1 = *puVar1 - 1;
            break;
          }
          plVar37 = (long *)((long)iVar49 * 8 + local_150 + 0xe450);
          iVar16 = (int)*plVar37;
          iVar46 = iVar16 + 1;
          bVar69 = *(byte *)(lVar36 + iVar16);
          uVar30 = (uint)bVar69;
          uVar15 = *(uint *)(OC_DCT_CODE_WORD + (ulong)bVar69 * 4);
          if (bVar69 < 0xf) {
            lVar48 = (long)iVar46;
            iVar46 = iVar16 + 2;
            uVar29 = (uint)*(byte *)(lVar36 + lVar48);
            if (bVar69 < 2) {
              uVar15 = uVar15 + uVar29 * 0x100;
              uVar32 = (ulong)((int)uVar15 >> 8 & 0xfff);
              if (bVar69 == 0) {
                lVar48 = (long)iVar46;
                iVar46 = iVar16 + 3;
                uVar32 = uVar32 + (long)(int)((uint)*(byte *)(lVar36 + lVar48) << 8);
                if (uVar32 == 0) {
                  uVar32 = 0x7fffffffffffffff;
                }
              }
              else {
                uVar30 = (uint)(uVar32 == 0);
              }
            }
            else {
              if (bVar69 < 0xc) {
                uVar29 = uVar29 << 0x15;
              }
              uVar15 = uVar15 + uVar29;
              uVar30 = (int)uVar15 >> 8 & 0xfff;
              uVar32 = (ulong)uVar30;
              uVar30 = (uint)(uVar30 == 0);
            }
          }
          else {
            uVar30 = (int)uVar15 >> 8 & 0xfff;
            uVar32 = (ulong)uVar30;
            uVar30 = (uint)(uVar30 == 0);
          }
          *puVar1 = uVar32;
          *plVar37 = (long)iVar46;
          iVar46 = (uVar15 & 0xff) + iVar49;
          iVar49 = iVar46 + uVar30;
          *(short *)(param_1 + 0xe250 + (ulong)*(byte *)(lVar66 + iVar46) * 2) =
               ((short)((ushort)(uVar15 >> 0x10) ^ (ushort)(-(uVar15 & 0x100000) >> 0x10)) >> 5) *
               *(short *)(lVar39 + (long)iVar46 * 2);
        } while (iVar49 < 0x40);
        *(undefined2 *)(param_1 + 0xe250) = *(undefined2 *)(pbVar62 + 2);
        (**(code **)(param_1 + 0x70))(param_1,lVar35,iVar61,lVar19);
        pvVar70 = (void *)((long)pvVar70 + 1);
      } while (pvVar23 != pvVar70);
      lVar21 = *(long *)(param_1 + 0xf650 + local_1c8 * 8);
    }
    uVar47 = (undefined4)((ulong)pvVar70 >> 0x20);
    lVar36 = *(long *)(param_1 + 0xf698 + local_1c8 * 8);
    *(long *)(param_1 + 0xf650 + local_1c8 * 8) = lVar21 + (long)pvVar23 * 8;
    if (0 < lVar36) {
      lVar21 = *(long *)(param_1 + 0xf668 + local_1c8 * 8);
      uVar47 = *(undefined4 *)(param_1 + 0x398 + local_1c8 * 4);
      uVar20 = *(undefined8 *)(param_1 + 0x368);
      uVar7 = *(undefined8 *)(param_1 + 0x370);
      *(long *)(param_1 + 0xf668 + local_1c8 * 8) = lVar21 + lVar36 * -8;
      (**(code **)(param_1 + 0x48))(uVar7,uVar20,uVar47);
      uVar47 = (undefined4)((ulong)lVar21 >> 0x20);
    }
    if (*(int *)(param_1 + 0xf78c) == 0) {
      iVar46 = 0;
      uVar15 = 0;
      iVar49 = 0;
    }
    else {
      iVar49 = *(int *)(param_1 + 0xf74c + local_1c8 * 4);
      uVar20 = CONCAT44(uVar47,iVar49);
      (**(code **)(param_1 + 0x80))
                (param_1,param_1 + 0xe350,2,iVar61,
                 *(int *)(param_1 + 0xf740 + local_1c8 * 4) - local_138,iVar49 - uVar17,uVar20);
      uVar47 = (undefined4)((ulong)uVar20 >> 0x20);
      iVar49 = local_138;
      uVar15 = uVar17;
      iVar46 = local_138 * 2;
    }
    iVar16 = *(int *)(param_1 + 0xf740 + local_1c8 * 4);
    pvVar70 = (void *)CONCAT44(uVar47,iVar16);
    oc_state_borders_fill_rows(param_1,iVar28,iVar61,(iVar16 - iVar49) * 8 - iVar46);
    iVar46 = *(int *)(param_1 + 0xf740 + local_1c8 * 4);
    iVar16 = *(int *)(param_1 + 0xf74c + local_1c8 * 4);
    if ((int)((-(uint)(local_1c8 == 0) & 0xfffffffd) + 4) < *(int *)(param_1 + 0xf790)) {
      iVar49 = iVar49 + local_138;
      iVar46 = iVar46 - iVar49;
      iVar50 = uVar17 + uVar15;
      iVar16 = iVar16 - iVar50;
      lVar36 = (long)*local_158;
      lVar21 = iVar46 * lVar36 + *(long *)(local_158 + 2);
      iVar61 = local_158[1];
      pvVar70 = (void *)(*(long *)(param_1 + 0xe1d8) + lVar21 * 4);
      local_1f0 = (byte *)(lVar21 + *(long *)(param_1 + 0xe1d0));
      lVar21 = lVar36 * 4;
      if (iVar46 < 1) {
        lVar36 = 0;
      }
      iVar43 = (uint)(0 < iVar46) * 4 + iVar46 * 8;
      memset((void *)((long)pvVar70 + lVar36 * 4),0,
             (int)((((uint)(iVar16 < iVar61) + iVar16) - iVar46) - (uint)(0 < iVar46)) * lVar21);
      uVar15 = local_130[2];
      uVar53 = (ulong)(int)uVar15;
      iVar46 = *(int *)(local_128 + 0x1a0);
      lVar36 = (long)iVar46;
      pvVar38 = (void *)(uVar53 * (long)iVar43 + *(long *)(local_130 + 4));
      __src = (void *)(iVar43 * lVar36 + *(long *)(local_128 + 0x1a8));
      iVar5 = *local_130;
      pvVar23 = pvVar38;
      pvVar42 = __src;
      uVar32 = uVar53;
      iVar59 = iVar43;
      if (iVar43 < 4) {
        do {
          iVar59 = iVar59 + 1;
          pvVar23 = memcpy(pvVar23,pvVar42,(long)iVar5);
          pvVar23 = (void *)((long)pvVar23 + uVar53);
          pvVar42 = (void *)((long)pvVar42 + lVar36);
        } while (iVar59 != 4);
        uVar32 = (ulong)uVar15;
        pvVar38 = (void *)((long)pvVar38 + uVar53 * (4 - iVar43));
        __src = (void *)((long)__src + (ulong)(4 - iVar43) * lVar36);
        iVar43 = 4;
      }
      iVar59 = (iVar16 - (uint)(iVar61 <= iVar16)) * 8;
      iVar31 = (int)uVar32;
      if (iVar43 < iVar59) {
        local_1b0 = (long)__src + (8 - lVar36);
        uVar24 = (ulong)(iVar5 - 9U >> 3);
        local_1a8 = pvVar38;
        iVar41 = iVar43;
        do {
          pbVar62 = local_1f0 + 1;
          iVar6 = *(int *)(param_1 + 0xdfd0 + (ulong)*local_1f0 * 4);
          oc_filter_hedge(local_1a8,uVar32 & 0xffffffff,local_1b0 + -8,iVar46,iVar6,iVar6 * 3 >> 2,
                          pvVar70,(void *)((long)pvVar70 + lVar21));
          pvVar70 = (void *)((long)pvVar70 + 4);
          if (8 < iVar5) {
            pvVar42 = pvVar70;
            lVar66 = local_1b0;
            pvVar23 = local_1a8;
            do {
              pvVar23 = (void *)((long)pvVar23 + 8);
              bVar69 = *pbVar62;
              pbVar62 = pbVar62 + 1;
              iVar6 = *(int *)(param_1 + 0xdfd0 + (ulong)bVar69 * 4);
              uVar15 = iVar6 * 3 >> 2;
              uVar72 = (ulong)uVar15;
              oc_filter_hedge(pvVar23,uVar32 & 0xffffffff,lVar66,iVar46,iVar6,uVar15,pvVar42,
                              (void *)((long)pvVar42 + lVar21));
              lVar34 = (long)pvVar42 + -4;
              pvVar42 = (void *)((long)pvVar42 + 4);
              oc_filter_vedge((-4 - (long)(iVar31 * 4)) + (long)pvVar23,uVar32 & 0xffffffff,iVar6,
                              uVar72 & 0xffffffff,lVar34);
              lVar66 = lVar66 + 8;
            } while (local_1f0 + uVar24 + 2 != pbVar62);
            pvVar70 = (void *)((long)pvVar70 + uVar24 * 4 + 4);
            pbVar62 = local_1f0 + uVar24 + 2;
          }
          local_1f0 = pbVar62;
          iVar41 = iVar41 + 8;
          local_1a8 = (void *)((long)local_1a8 + (long)(iVar31 * 8));
          local_1b0 = local_1b0 + (iVar46 << 3);
        } while (iVar41 < iVar59);
        uVar15 = (uint)((iVar59 + -1) - iVar43) >> 3;
        uVar32 = (ulong)(uVar15 + 1);
        iVar43 = iVar43 + 8 + uVar15 * 8;
        __src = (void *)((long)__src + (long)(iVar46 << 3) * uVar32);
        pvVar38 = (void *)((long)pvVar38 + (long)(iVar31 * 8) * uVar32);
      }
      if (iVar61 <= iVar16) {
        iVar46 = local_130[1];
        if (iVar43 < iVar46) {
          pvVar23 = pvVar38;
          iVar61 = iVar43;
          do {
            iVar61 = iVar61 + 1;
            pvVar23 = memcpy(pvVar23,__src,(long)iVar5);
            __src = (void *)((long)__src + lVar36);
            pvVar23 = (void *)((long)pvVar23 + uVar53);
          } while (iVar46 != iVar61);
          pvVar38 = (void *)((long)pvVar38 + ((ulong)(uint)((iVar46 + -1) - iVar43) + 1) * uVar53);
        }
        pbVar62 = local_1f0 + 1;
        if (8 < iVar5) {
          lVar21 = (long)pvVar38 + (4 - (long)(iVar31 * 8));
          do {
            bVar69 = *pbVar62;
            pbVar62 = pbVar62 + 1;
            iVar46 = *(int *)(param_1 + 0xdfd0 + (ulong)bVar69 * 4);
            oc_filter_vedge(lVar21,iVar31,iVar46,iVar46 * 3 >> 2);
            lVar21 = lVar21 + 8;
          } while (pbVar62 != local_1f0 + ((iVar5 - 9U >> 3) + 2));
        }
      }
      iVar16 = *(int *)(param_1 + 0xf74c + local_1c8 * 4);
      iVar46 = *(int *)(param_1 + 0xf740 + local_1c8 * 4);
      if ((int)((-(uint)(local_1c8 != 0) & 3) + 2) < *(int *)(param_1 + 0xf790)) {
        iVar46 = iVar46 - (iVar49 + local_138);
        iVar16 = iVar16 - (iVar50 + uVar17);
        lVar36 = (long)*local_158;
        lVar21 = (iVar46 * lVar36 + *(long *)(local_158 + 2)) * 4;
        piVar56 = (int *)(*(long *)(param_1 + 0xe1d8) + lVar21);
        pbVar62 = (byte *)(*(long *)(param_1 + 0x118) + lVar21);
        if (local_1c8 == 0) {
          iVar61 = 0x780;
          bVar68 = 3 < *(int *)(param_1 + 0xdfcc);
        }
        else {
          iVar61 = 0xf00;
          bVar68 = 6 < *(int *)(param_1 + 0xdfcc);
        }
        iVar31 = iVar46 * 8;
        iVar43 = local_130[2];
        lVar21 = (long)iVar31 * (long)iVar43 + *(long *)(local_130 + 4);
        iVar5 = *local_130;
        iVar59 = local_130[1];
        if (SBORROW4(iVar31,iVar16 * 8) != iVar31 + iVar16 * -8 < 0) {
          uVar53 = CONCAT44((int)((ulong)pvVar70 >> 0x20),iVar43);
          uVar32 = (ulong)(((iVar5 - 1U >> 3) + 1) * 4);
          do {
            iVar46 = iVar31 + 8;
            if (0 < iVar5) {
              iVar41 = 0;
              piVar44 = piVar56;
              pbVar64 = pbVar62;
              lVar66 = lVar21;
              do {
                iVar6 = *piVar44;
                bVar69 = *(byte *)(param_1 + 0x4c3 + (ulong)(*pbVar64 >> 2 & 0xf));
                bVar9 = iVar41 < 1;
                iVar41 = iVar41 + 8;
                uVar15 = (uint)(iVar5 <= iVar41) * 2 |
                         (uint)bVar9 | (uint)(iVar31 < 1) << 2 | (uint)(iVar59 <= iVar46) << 3;
                if ((iVar61 < iVar6) && (bVar68)) {
                  lVar34 = param_1 + (ulong)bVar69 * 4;
                  oc_dering_block(lVar66,uVar53 & 0xffffffff,uVar15,*(undefined4 *)(lVar34 + 0xdfd0)
                                  ,*(undefined4 *)(lVar34 + 0xe0d0),1);
                  if ((((local_1c8 != 0) || ((bVar9 == 0 && (0xf00 < piVar44[-1])))) ||
                      ((iVar5 <= iVar41 == 0 && (0xf00 < piVar44[1])))) ||
                     (((iVar31 < 1 == 0 && (0xf00 < piVar44[-lVar36])) ||
                      ((iVar59 <= iVar46 == 0 && (0xf00 < piVar44[lVar36])))))) {
                    oc_dering_block(lVar66,uVar53 & 0xffffffff,uVar15,
                                    *(undefined4 *)(lVar34 + 0xdfd0),
                                    *(undefined4 *)(lVar34 + 0xe0d0),1);
                    oc_dering_block(lVar66,uVar53 & 0xffffffff,uVar15,
                                    *(undefined4 *)(lVar34 + 0xdfd0),
                                    *(undefined4 *)(lVar34 + 0xe0d0),1);
                  }
                }
                else {
                  uVar30 = (uint)bVar69;
                  if (iVar6 < 0x601) {
                    if (iVar6 < 0x181) goto LAB_001031f8;
                    uVar20 = 0;
                    uVar47 = *(undefined4 *)(param_1 + 0xdfd0 + (long)(int)uVar30 * 4);
                  }
                  else {
                    uVar20 = 1;
                    uVar47 = *(undefined4 *)(param_1 + 0xdfd0 + (long)(int)uVar30 * 4);
                  }
                  oc_dering_block(lVar66,uVar53 & 0xffffffff,uVar15,uVar47,
                                  *(undefined4 *)(param_1 + 0xe0d0 + (long)(int)uVar30 * 4),uVar20);
                }
LAB_001031f8:
                pbVar64 = pbVar64 + 4;
                piVar44 = piVar44 + 1;
                lVar66 = lVar66 + 8;
              } while (iVar41 < iVar5);
              pbVar62 = pbVar62 + uVar32;
              piVar56 = (int *)((long)piVar56 + uVar32);
            }
            lVar21 = lVar21 + iVar43 * 8;
            iVar31 = iVar46;
          } while (iVar46 < iVar16 * 8);
          iVar16 = *(int *)(param_1 + 0xf74c + local_1c8 * 4);
          iVar46 = *(int *)(param_1 + 0xf740 + local_1c8 * 4) - (iVar49 + local_138);
          pvVar70 = (void *)CONCAT44((int)(uVar53 >> 0x20),iVar16);
          iVar16 = iVar16 - (iVar50 + uVar17);
        }
      }
      else {
        iVar46 = iVar46 - iVar49;
        iVar16 = iVar16 - iVar50;
      }
    }
    else if (*(int *)(param_1 + 0xf78c) == 0) {
      iVar46 = iVar46 - iVar49;
      iVar16 = iVar16 - uVar15;
    }
    else {
      iVar46 = iVar46 - (iVar49 + local_138);
      iVar16 = iVar16 - (uVar15 + uVar17);
    }
    iVar46 = iVar46 << (sbyte)local_13c;
    if (iVar10 <= iVar46) {
      iVar46 = iVar10;
    }
    iVar16 = iVar16 << (sbyte)local_13c;
    if (local_140 <= iVar16) {
      iVar16 = local_140;
    }
    local_1c8 = local_1c8 + 1;
    if (local_1c8 == 3) {
      if (*(long *)(param_1 + 0xe240) != 0) {
        (**(code **)(param_1 + 0x88))();
        (**(code **)(param_1 + 0xe240))
                  (*(undefined8 *)(param_1 + 0xe238),local_108,*(int *)(param_1 + 0xa4) - iVar16,
                   *(int *)(param_1 + 0xa4) - iVar46);
      }
      iVar49 = *(int *)(param_1 + 0xf788);
      local_138 = 1;
      local_134 = local_134 + iVar49;
      if (iVar18 < iVar4) goto LAB_00102091;
      oc_state_borders_fill_caps(param_1,iVar28,0);
      oc_state_borders_fill_caps(param_1,iVar28,1);
      oc_state_borders_fill_caps(param_1,iVar28,2);
      if (*(char *)(param_1 + 0x4c0) == '\0') {
        *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x350);
        *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x370);
      }
      *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x350);
      *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x370);
      (**(code **)(param_1 + 0x88))();
      uVar20 = 0;
      goto LAB_00101af6;
    }
    iVar49 = *(int *)(param_1 + 0xf788);
    local_130 = local_130 + 6;
    local_158 = local_158 + 10;
    local_128 = local_128 + 0x18;
    local_148 = local_148 + 6;
    local_150 = local_150 + 0x200;
    iVar61 = (int)local_1c8;
    local_140 = iVar16;
    if (local_1c8 == 0) goto LAB_00102887;
    local_13c = (*(uint *)(param_1 + 0x30) >> 1 ^ 1) & 1;
    iVar49 = iVar49 >> (sbyte)local_13c;
    iVar16 = local_134 >> (sbyte)local_13c;
    iVar10 = iVar46;
  } while( true );
code_r0x001040c5:
  uVar15 = (uint)(uVar15 == 0);
  if (0x1020 < uVar29) {
    uVar15 = oc_pack_read1_c();
  }
  if (uVar17 <= (uint)uVar32) goto LAB_0010334e;
  goto LAB_00104067;
LAB_00104118:
  uVar17 = (uint)(uVar17 == 0);
  if (0x1020 < (int)uVar15) {
    uVar17 = oc_pack_read1_c(puVar26);
  }
  if (lVar67 <= lVar21) goto LAB_00101ccf;
  goto LAB_00103ad8;
}



undefined8 th_decode_ycbcr_out(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    oc_ycbcr_buffer_flip(param_2,param_1 + 0xe1f0);
    return 0;
  }
  return 0xffffffff;
}


