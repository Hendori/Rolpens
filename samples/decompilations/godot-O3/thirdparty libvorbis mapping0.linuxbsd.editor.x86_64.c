
undefined8 mapping0_inverse(long *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  void *__s;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar20;
  undefined1 *puVar22;
  undefined1 *puVar24;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  long local_40;
  undefined1 *puVar19;
  undefined1 *puVar21;
  undefined1 *puVar23;
  undefined1 *puVar25;
  
  puVar18 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar31 = *(ulong *)(param_1[0xd] + 8);
  local_60 = *(long *)(param_1[0xd] + 0x88);
  iVar29 = *(int *)(uVar31 + 4);
  uVar14 = (ulong)iVar29;
  local_50 = *(long *)(uVar31 + 0x30);
  uVar28 = uVar14 * 8 + 0x17;
  iVar12 = (int)*(undefined8 *)(local_50 + param_1[7] * 8);
  *(int *)(param_1 + 9) = iVar12;
  uVar30 = (ulong)iVar12;
  puVar19 = auStack_98;
  puVar20 = auStack_98;
  while (puVar19 != auStack_98 + -(uVar28 & 0xfffffffffffff000)) {
    puVar18 = puVar20 + -0x1000;
    *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
    puVar19 = puVar20 + -0x1000;
    puVar20 = puVar20 + -0x1000;
  }
  uVar32 = (ulong)((uint)uVar28 & 0xff0);
  lVar13 = -uVar32;
  puVar20 = puVar18 + lVar13;
  puVar21 = puVar18 + lVar13;
  if (uVar32 != 0) {
    *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
  }
  uVar32 = uVar14 * 4 + 0x17;
  puVar22 = puVar18 + lVar13;
  while (puVar21 != puVar18 + (lVar13 - (uVar32 & 0xfffffffffffff000))) {
    puVar20 = puVar22 + -0x1000;
    *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
    puVar21 = puVar22 + -0x1000;
    puVar22 = puVar22 + -0x1000;
  }
  uVar15 = (ulong)((uint)uVar32 & 0xff0);
  lVar27 = -uVar15;
  puVar22 = puVar20 + lVar27;
  puVar23 = puVar20 + lVar27;
  if (uVar15 != 0) {
    *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
  }
  puVar24 = puVar20 + lVar27;
  while (puVar23 != puVar20 + (lVar27 - (uVar32 & 0xfffffffffffff000))) {
    puVar22 = puVar24 + -0x1000;
    *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + -8);
    puVar23 = puVar24 + -0x1000;
    puVar24 = puVar24 + -0x1000;
  }
  uVar32 = (ulong)((uint)uVar32 & 0xff0);
  lVar10 = -uVar32;
  puVar24 = puVar22 + lVar10;
  puVar25 = puVar22 + lVar10;
  if (uVar32 != 0) {
    *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
  }
  uVar32 = (ulong)(puVar22 + lVar10 + 0xf) & 0xfffffffffffffff0;
  puVar11 = puVar22 + lVar10;
  while (puVar25 != puVar22 + (lVar10 - (uVar28 & 0xfffffffffffff000))) {
    puVar24 = puVar11 + -0x1000;
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    puVar25 = puVar11 + -0x1000;
    puVar11 = puVar11 + -0x1000;
  }
  uVar28 = (ulong)((uint)uVar28 & 0xff0);
  lVar10 = -uVar28;
  if (uVar28 != 0) {
    *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + -8);
  }
  local_70 = (ulong)(puVar24 + lVar10 + 0xf) & 0xfffffffffffffff0;
  uVar28 = (ulong)(puVar20 + lVar27 + 0xf) & 0xfffffffffffffff0;
  uVar15 = (ulong)(puVar18 + lVar13 + 0xf) & 0xfffffffffffffff0;
  if (0 < iVar29) {
    lVar17 = 0;
    local_78 = uVar30 * 4 >> 1;
    local_58 = &_floor_P;
    local_90 = uVar30;
    local_88 = (ulong)(puVar20 + lVar27 + 0xf) & 0xfffffffffffffff0;
    local_80 = (ulong)(puVar18 + lVar13 + 0xf) & 0xfffffffffffffff0;
    local_68 = uVar31;
    do {
      pcVar5 = *(code **)(*(long *)(local_58 +
                                   (long)*(int *)(local_50 + 0x528 +
                                                 (long)param_2[(long)param_2[lVar17 + 1] + 0x101] *
                                                 4) * 8) + 0x28);
      *(undefined8 *)(puVar24 + lVar10 + -8) = 0x100217;
      lVar13 = (*pcVar5)(param_1);
      *(long *)(local_70 + lVar17 * 8) = lVar13;
      *(uint *)(uVar32 + lVar17 * 4) = (uint)(lVar13 != 0);
      __s = *(void **)(*param_1 + lVar17 * 8);
      lVar17 = lVar17 + 1;
      *(undefined8 *)(puVar24 + lVar10 + -8) = 0x100242;
      memset(__s,0,local_78);
      uVar14 = (ulong)*(uint *)(local_68 + 4);
      uVar28 = local_88;
      uVar15 = local_80;
      uVar30 = local_90;
      uVar31 = local_68;
    } while ((int)lVar17 < (int)*(uint *)(local_68 + 4));
  }
  local_58 = (undefined *)uVar28;
  iVar12 = (int)uVar14;
  iVar29 = param_2[0x121];
  if (iVar29 < 1) {
    if (*param_2 < 1) goto LAB_00100446;
LAB_001002c5:
    lVar13 = 0;
    local_78 = uVar30;
    local_68 = uVar32;
    while( true ) {
      lVar27 = 0;
      iVar29 = 0;
      if (0 < (int)uVar14) {
        do {
          if (param_2[lVar27 + 1] == (int)lVar13) {
            lVar17 = (long)iVar29;
            iVar29 = iVar29 + 1;
            *(uint *)((long)local_58 + lVar17 * 4) = (uint)(*(int *)(local_68 + lVar27 * 4) != 0);
            *(undefined8 *)(uVar15 + lVar17 * 8) = *(undefined8 *)(*param_1 + lVar27 * 8);
          }
          lVar27 = lVar27 + 1;
        } while ((int)lVar27 < *(int *)(uVar31 + 4));
      }
      lVar27 = lVar13 + 0x111;
      lVar13 = lVar13 + 1;
      uVar6 = *(undefined8 *)(*(long *)(local_60 + 0x60) + (long)param_2[lVar27] * 8);
      pcVar5 = *(code **)(*(long *)(&_residue_P +
                                   (long)*(int *)(local_50 + 0x828 + (long)param_2[lVar27] * 4) * 8)
                         + 0x38);
      *(undefined8 *)(puVar24 + lVar10 + -8) = 0x100356;
      (*pcVar5)(param_1,uVar6,uVar15);
      if (*param_2 <= (int)lVar13) break;
      uVar14 = (ulong)*(uint *)(uVar31 + 4);
    }
    iVar29 = param_2[0x121];
    lVar13 = (long)iVar29;
    iVar12 = *(int *)(uVar31 + 4);
    uVar30 = local_78;
    if (iVar29 < 1) goto LAB_00100446;
  }
  else {
    lVar13 = (long)iVar29;
    piVar26 = param_2;
    do {
      piVar1 = (int *)(uVar32 + (long)piVar26[0x122] * 4);
      piVar2 = (int *)(uVar32 + (long)piVar26[0x222] * 4);
      if ((*piVar1 != 0) || (*piVar2 != 0)) {
        *piVar1 = 1;
        *piVar2 = 1;
      }
      piVar26 = piVar26 + 1;
    } while (param_2 + lVar13 != piVar26);
    if (0 < *param_2) goto LAB_001002c5;
  }
  lVar27 = *param_1;
  piVar26 = param_2 + lVar13;
  do {
    lVar17 = *(long *)(lVar27 + (long)piVar26[0x121] * 8);
    lVar7 = *(long *)(lVar27 + (long)piVar26[0x221] * 8);
    lVar16 = 0;
    if (1 < (long)uVar30) {
      do {
        while( true ) {
          fVar3 = *(float *)(lVar17 + lVar16 * 4);
          fVar4 = *(float *)(lVar7 + lVar16 * 4);
          if (fVar3 <= 0.0) break;
          if (fVar4 <= 0.0) {
            *(float *)(lVar7 + lVar16 * 4) = fVar3;
            *(float *)(lVar17 + lVar16 * 4) = fVar3 + fVar4;
          }
          else {
            *(float *)(lVar7 + lVar16 * 4) = fVar3 - fVar4;
          }
LAB_0010040a:
          lVar16 = lVar16 + 1;
          if ((long)uVar30 / 2 <= lVar16) goto LAB_0010043d;
        }
        if (fVar4 <= 0.0) {
          *(float *)(lVar7 + lVar16 * 4) = fVar3;
          *(float *)(lVar17 + lVar16 * 4) = fVar3 - fVar4;
          goto LAB_0010040a;
        }
        *(float *)(lVar7 + lVar16 * 4) = fVar4 + fVar3;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)uVar30 / 2);
    }
LAB_0010043d:
    piVar26 = piVar26 + -1;
  } while (param_2 + lVar13 + (-1 - (ulong)(iVar29 - 1)) != piVar26);
LAB_00100446:
  lVar13 = local_60;
  uVar28 = local_70;
  lVar27 = 0;
  local_58 = &_floor_P;
  if (0 < iVar12) {
    do {
      local_68 = uVar31;
      lVar17 = lVar27 + 1;
      uVar6 = *(undefined8 *)(*param_1 + lVar27 * 8);
      uVar8 = *(undefined8 *)(uVar28 + lVar27 * 8);
      lVar27 = lVar27 + 1;
      uVar9 = *(undefined8 *)
               (*(long *)(lVar13 + 0x58) + (long)param_2[(long)param_2[lVar17] + 0x101] * 8);
      pcVar5 = *(code **)(*(long *)(local_58 +
                                   (long)*(int *)(local_50 + 0x528 +
                                                 (long)param_2[(long)param_2[lVar17] + 0x101] * 4) *
                                   8) + 0x30);
      *(undefined8 *)(puVar24 + lVar10 + -8) = 0x1004ae;
      (*pcVar5)(param_1,uVar9,uVar8,uVar6);
      lVar17 = local_60;
      uVar31 = local_68;
    } while ((int)lVar27 < *(int *)(local_68 + 4));
    if (0 < *(int *)(local_68 + 4)) {
      lVar13 = 0;
      do {
        uVar6 = *(undefined8 *)(*param_1 + lVar13 * 8);
        lVar13 = lVar13 + 1;
        uVar8 = **(undefined8 **)(lVar17 + 0x10 + param_1[7] * 8);
        *(undefined8 *)(puVar24 + lVar10 + -8) = 0x1004ef;
        mdct_backward(uVar8,uVar6,uVar6);
      } while ((int)lVar13 < *(int *)(uVar31 + 4));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + lVar10 + -8) = &UNK_0010055f;
  __stack_chk_fail();
}



undefined8 mapping0_forward(long *param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  long *plVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  undefined1 *puVar23;
  undefined1 *puVar25;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  int *piVar33;
  long lVar34;
  long *plVar35;
  int *piVar36;
  long in_FS_OFFSET;
  byte bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_f8 [8];
  int *local_f0;
  long *local_e8;
  long local_e0;
  float *local_d8;
  long local_d0;
  long local_c8;
  int local_c0;
  int local_bc;
  int *local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  int *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  int *local_60;
  int *local_58;
  long *local_50;
  long local_40;
  undefined1 *puVar24;
  undefined1 *puVar26;
  
  bVar37 = 0;
  puVar23 = auStack_f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar36 = *(int **)(param_1[0xd] + 8);
  local_70 = *(long *)(param_1[0xd] + 0x88);
  iVar13 = *(int *)((long)piVar36 + 4);
  local_68 = *(long *)((long)piVar36 + 0x30);
  local_e0 = param_1[0x17];
  local_bc = (int)param_1[9];
  uVar20 = (long)iVar13 * 4 + 0x17;
  puVar24 = auStack_f8;
  puVar26 = auStack_f8;
  while (puVar24 != auStack_f8 + -(uVar20 & 0xfffffffffffff000)) {
    puVar23 = puVar26 + -0x1000;
    *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
    puVar24 = puVar26 + -0x1000;
    puVar26 = puVar26 + -0x1000;
  }
  uVar20 = (ulong)((uint)uVar20 & 0xff0);
  lVar7 = -uVar20;
  puVar25 = puVar23 + lVar7;
  puVar26 = puVar23 + lVar7;
  if (uVar20 != 0) {
    *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
  }
  local_78 = (ulong)(puVar23 + lVar7 + 0xf) & 0xfffffffffffffff0;
  *(undefined8 *)(puVar23 + lVar7 + -8) = 0x100629;
  local_50 = param_1;
  local_98 = _vorbis_block_alloc(param_1,(long)iVar13 * 8);
  iVar13 = *(int *)((long)piVar36 + 4);
  *(undefined8 *)(puVar23 + lVar7 + -8) = 0x100640;
  local_58 = (int *)_vorbis_block_alloc(param_1,(long)iVar13 << 3);
  iVar13 = *(int *)((long)piVar36 + 4);
  *(undefined8 *)(puVar23 + lVar7 + -8) = 0x100654;
  local_e8 = (long *)_vorbis_block_alloc(param_1,(long)iVar13 << 3);
  plVar12 = local_50;
  iVar13 = *(int *)((long)piVar36 + 4);
  uVar20 = (long)iVar13 * 4 + 0x17;
  local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(local_e0 + 8));
  puVar8 = puVar23 + lVar7;
  while (puVar25 != puVar23 + (lVar7 - (uVar20 & 0xfffffffffffff000))) {
    puVar26 = puVar8 + -0x1000;
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    puVar25 = puVar8 + -0x1000;
    puVar8 = puVar8 + -0x1000;
  }
  uVar20 = (ulong)((uint)uVar20 & 0xff0);
  lVar7 = -uVar20;
  puVar23 = puVar26 + lVar7;
  puVar27 = puVar26 + lVar7;
  puVar29 = puVar26 + lVar7;
  if (uVar20 != 0) {
    *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
  }
  pfVar15 = (float *)((ulong)(puVar26 + lVar7 + 0xf) & 0xfffffffffffffff0);
  local_c0 = (int)local_50[7];
  piVar22 = *(int **)(local_68 + 0x328 + (long)local_c0 * 8);
  local_90 = (long)*(int *)(local_e0 + 0xc) * 0x60;
  if (local_50[7] != 0) {
    local_90 = local_90 + 0xc0;
  }
  local_90 = local_90 + *(long *)(local_70 + 0x68);
  *(int *)((long)local_50 + 0x4c) = local_c0;
  local_c8 = CONCAT44(local_c8._4_4_,local_bc / 2);
  local_88 = (long)(local_bc / 2) << 2;
  piVar33 = local_58;
  local_d8 = pfVar15;
  if (0 < iVar13) {
    local_80 = local_58;
    iVar13 = local_bc + -1;
    lVar34 = 0;
    local_a8 = local_70 + 8;
    local_b0 = CONCAT44(local_b0._4_4_,(float)(int)ABS(_LC1 / (float)local_bc));
    local_b8 = piVar22;
    local_60 = piVar36;
    do {
      pfVar2 = *(float **)(*plVar12 + lVar34 * 8);
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x1007c3;
      uVar16 = _vorbis_block_alloc(plVar12,local_88);
      *(undefined8 *)(local_80 + lVar34 * 2) = uVar16;
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x1007d7;
      uVar16 = _vorbis_block_alloc(plVar12,local_88);
      dVar11 = _LC4;
      fVar9 = _LC3;
      fVar40 = (float)local_b0 * _LC2;
      lVar17 = plVar12[8];
      lVar19 = plVar12[7];
      *(undefined8 *)(local_98 + lVar34 * 8) = uVar16;
      lVar21 = plVar12[6];
      local_58 = (int *)CONCAT44(local_58._4_4_,(float)((double)(fVar40 - fVar9) + dVar11));
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x10083a;
      _vorbis_apply_window(pfVar2,local_a8,local_68,(int)lVar21,(int)lVar19,(int)lVar17);
      uVar16 = *(undefined8 *)(local_98 + lVar34 * 8);
      uVar3 = **(undefined8 **)(local_70 + 0x10 + plVar12[7] * 8);
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x10085d;
      mdct_forward(uVar3,pfVar2,uVar16);
      lVar17 = plVar12[7];
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100876;
      drft_forward(local_70 + 0x20 + lVar17 * 0x18,pfVar2);
      dVar11 = _LC4;
      fVar10 = _LC5;
      fVar40 = _LC3;
      fVar9 = _LC2;
      fVar39 = (float)((double)(((float)(int)ABS(*pfVar2) * _LC2 - _LC3) + local_58._0_4_) + _LC4);
      *pfVar2 = fVar39;
      *pfVar15 = fVar39;
      if (2 < local_bc) {
        lVar17 = 1;
        do {
          fVar38 = (float)((double)(((float)(int)ABS(pfVar2[lVar17] * pfVar2[lVar17] +
                                                     pfVar2[lVar17 + 1] * pfVar2[lVar17 + 1]) *
                                     fVar9 - fVar40) * fVar10 + local_58._0_4_) + dVar11);
          pfVar2[(int)lVar17 + 1 >> 1] = fVar38;
          if (fVar39 < fVar38) {
            *pfVar15 = fVar38;
            fVar39 = fVar38;
          }
          lVar17 = lVar17 + 2;
        } while ((int)lVar17 < iVar13);
      }
      if (0.0 < fVar39) {
        *pfVar15 = 0.0;
        fVar39 = 0.0;
      }
      if (fVar39 <= (float)local_a0) {
        fVar39 = (float)local_a0;
      }
      lVar34 = lVar34 + 1;
      pfVar15 = pfVar15 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,fVar39);
      piVar22 = local_b8;
      piVar33 = local_80;
      piVar36 = local_60;
    } while ((int)lVar34 < *(int *)((long)local_60 + 4));
  }
  plVar12 = local_50;
  lVar34 = local_88;
  *(undefined8 *)(puVar26 + lVar7 + -8) = 0x1009a4;
  local_58 = piVar33;
  local_a8 = _vorbis_block_alloc(local_50,local_88);
  *(undefined8 *)(puVar26 + lVar7 + -8) = 0x1009b6;
  local_b0 = _vorbis_block_alloc(plVar12,lVar34);
  piVar33 = local_58;
  iVar13 = *(int *)((long)piVar36 + 4);
  if (0 < iVar13) {
    local_58 = (int *)0x0;
    local_f0 = piVar33;
    plVar35 = local_e8;
    iVar31 = (int)local_c8;
    local_d0 = (long)piVar36;
    local_b8 = piVar22;
    piVar33 = local_58;
    do {
      local_58 = piVar33;
      local_60 = *(int **)(*plVar12 + (long)local_58 * 8);
      lVar17 = *(long *)(local_98 + (long)local_58 * 8);
      local_80 = (int *)CONCAT44(local_80._4_4_,local_b8[(long)local_58 + 1]);
      lVar34 = (long)local_60 + local_88;
      *(int *)((long)plVar12 + 0x4c) = local_c0;
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100a46;
      puVar18 = (undefined8 *)_vorbis_block_alloc(plVar12,0x78);
      *plVar35 = (long)puVar18;
      *puVar18 = 0;
      puVar18[0xe] = 0;
      lVar19 = 0;
      uVar20 = (ulong)(((int)puVar18 -
                       (int)(undefined8 *)((ulong)(puVar18 + 1) & 0xfffffffffffffff8)) + 0x78U >> 3)
      ;
      puVar18 = (undefined8 *)((ulong)(puVar18 + 1) & 0xfffffffffffffff8);
      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar18 = 0;
        puVar18 = puVar18 + (ulong)bVar37 * -2 + 1;
      }
      if (1 < local_bc) {
        do {
          *(float *)(lVar34 + lVar19 * 4) =
               (float)((double)((float)(*(uint *)(lVar17 + lVar19 * 4) & 0x7fffffff) * _LC2 - _LC3)
                      + _LC4);
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < iVar31);
      }
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100ad7;
      _vp_noisemask(local_90,lVar34,local_a8);
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100b06;
      _vp_tonemask(local_90,local_60,local_b0);
      *(long *)(puVar26 + lVar7 + -0x10) = lVar34;
      *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x100b32;
      _vp_offset_and_mix(local_90,local_a8,local_b0,1,local_60,lVar17);
      local_80 = local_b8 + (int)local_80;
      if (*(int *)(local_68 + 0x528 + (long)local_80[0x101] * 4) != 1) {
        uVar16 = 0xffffffff;
        goto LAB_00101122;
      }
      local_c8 = *plVar35;
      uVar16 = *(undefined8 *)(*(long *)(local_70 + 0x58) + (long)local_80[0x101] * 8);
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100b86;
      uVar16 = floor1_fit(plVar12,uVar16,lVar34,local_60);
      *(undefined8 *)(local_c8 + 0x38) = uVar16;
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100b99;
      iVar13 = vorbis_bitrate_managed(plVar12);
      if ((iVar13 != 0) && (*(long *)(*plVar35 + 0x38) != 0)) {
        *(long *)(puVar26 + lVar7 + -0x10) = lVar34;
        *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x100f8b;
        _vp_offset_and_mix(local_90,local_a8,local_b0,2,local_60,lVar17);
        local_c8 = *plVar35;
        uVar16 = *(undefined8 *)(*(long *)(local_70 + 0x58) + (long)local_80[0x101] * 8);
        *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x100fbc;
        uVar16 = floor1_fit(plVar12,uVar16,lVar34,local_60);
        piVar36 = local_60;
        *(undefined8 *)(local_c8 + 0x70) = uVar16;
        *(long *)(puVar26 + lVar7 + -0x10) = lVar34;
        *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x100ff1;
        _vp_offset_and_mix(local_90,local_a8,local_b0,0,local_60,lVar17);
        local_60 = (int *)*plVar35;
        uVar16 = *(undefined8 *)(*(long *)(local_70 + 0x58) + (long)local_80[0x101] * 8);
        *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x101024;
        uVar16 = floor1_fit(plVar12,uVar16,lVar34,piVar36);
        lVar34 = local_70;
        *(undefined8 *)local_60 = uVar16;
        local_60 = (int *)CONCAT44(local_60._4_4_,iVar31);
        lVar17 = 8;
        do {
          puVar6 = (undefined8 *)*plVar35;
          iVar13 = (int)lVar17;
          puVar18 = (undefined8 *)((long)puVar6 + lVar17);
          lVar17 = lVar17 + 8;
          uVar16 = puVar6[7];
          uVar3 = *puVar6;
          uVar4 = *(undefined8 *)(*(long *)(lVar34 + 0x58) + (long)local_80[0x101] * 8);
          *(undefined8 *)(puVar26 + lVar7 + -8) = 0x101090;
          uVar16 = floor1_interpolate_fit(plVar12,uVar4,uVar3,uVar16,(uint)(iVar13 * 0x2000) / 7);
          lVar19 = local_70;
          *puVar18 = uVar16;
        } while (lVar17 != 0x38);
        lVar34 = 0x40;
        do {
          lVar17 = *plVar35;
          iVar13 = (int)lVar34;
          puVar18 = (undefined8 *)(lVar17 + lVar34);
          lVar34 = lVar34 + 8;
          uVar16 = *(undefined8 *)(lVar17 + 0x70);
          uVar3 = *(undefined8 *)(lVar17 + 0x38);
          uVar4 = *(undefined8 *)(*(long *)(lVar19 + 0x58) + (long)local_80[0x101] * 8);
          *(undefined8 *)(puVar26 + lVar7 + -8) = 0x101108;
          uVar16 = floor1_interpolate_fit
                             (plVar12,uVar4,uVar3,uVar16,(iVar13 * 0x2000 - 0x70000U) / 7);
          *puVar18 = uVar16;
        } while (lVar34 != 0x70);
        iVar31 = (int)local_60;
      }
      piVar33 = (int *)((long)local_58 + 1);
      plVar35 = plVar35 + 1;
      iVar13 = *(int *)(local_d0 + 4);
      piVar22 = local_b8;
      local_58 = local_f0;
      piVar36 = (int *)local_d0;
    } while ((int)piVar33 < iVar13);
  }
  *(float *)(local_e0 + 8) = (float)local_a0;
  uVar20 = (long)iVar13 * 8 + 0x17;
  puVar8 = puVar26 + lVar7;
  while (puVar27 != puVar26 + (lVar7 - (uVar20 & 0xfffffffffffff000))) {
    puVar23 = puVar8 + -0x1000;
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    puVar27 = puVar8 + -0x1000;
    puVar8 = puVar8 + -0x1000;
  }
  uVar20 = (ulong)((uint)uVar20 & 0xff0);
  lVar7 = -uVar20;
  puVar26 = puVar23 + lVar7;
  puVar28 = puVar23 + lVar7;
  if (uVar20 != 0) {
    *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
  }
  uVar20 = (long)iVar13 * 4 + 0x17;
  uVar32 = (ulong)(puVar23 + lVar7 + 0xf) & 0xfffffffffffffff0;
  puVar8 = puVar23 + lVar7;
  while (puVar28 != puVar23 + (lVar7 - (uVar20 & 0xfffffffffffff000))) {
    puVar26 = puVar8 + -0x1000;
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    puVar28 = puVar8 + -0x1000;
    puVar8 = puVar8 + -0x1000;
  }
  uVar20 = (ulong)((uint)uVar20 & 0xff0);
  lVar7 = -uVar20;
  puVar29 = puVar26 + lVar7;
  if (uVar20 != 0) {
    *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
  }
  *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100cae;
  local_60 = local_58;
  local_58 = (int *)((ulong)(puVar26 + lVar7 + 0xf) & 0xfffffffffffffff0);
  iVar13 = vorbis_bitrate_managed(local_50);
  lVar34 = local_70;
  local_b0 = (long)local_c0;
  local_a0 = (ulong)(-(uint)(iVar13 == 0) & 7);
  while( true ) {
    iVar31 = (int)local_a0;
    local_88 = CONCAT44(local_88._4_4_,iVar31);
    *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100cec;
    iVar13 = vorbis_bitrate_managed(local_50);
    if ((int)((-(uint)(iVar13 == 0) & 0xfffffff9) + 0xe) < iVar31) break;
    lVar17 = *(long *)(local_e0 + 0x10 + local_a0 * 8);
    *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100d26;
    local_70 = lVar17;
    oggpack_write(lVar17,0,1);
    uVar14 = *(undefined4 *)(lVar34 + 0x50);
    *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100d39;
    oggpack_write(lVar17,local_b0,uVar14);
    plVar12 = local_50;
    if (local_50[7] != 0) {
      lVar17 = local_50[6];
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x10117d;
      oggpack_write(local_70,lVar17,1);
      lVar17 = plVar12[8];
      *(undefined8 *)(puVar26 + lVar7 + -8) = 0x101190;
      oggpack_write(local_70,lVar17,1);
    }
    plVar12 = local_e8;
    uVar1 = *(uint *)((long)piVar36 + 4);
    if (0 < (int)uVar1) {
      lVar17 = 0;
      local_80 = (int *)(local_a0 << 3);
      local_a8 = uVar32;
      do {
        uVar16 = *(undefined8 *)(plVar12[lVar17] + (long)local_80);
        uVar3 = *(undefined8 *)
                 (*(long *)(lVar34 + 0x58) + (long)piVar22[(long)piVar22[lVar17 + 1] + 0x101] * 8);
        uVar4 = *(undefined8 *)(local_60 + lVar17 * 2);
        *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100dae;
        uVar14 = floor1_encode(local_70,local_50,uVar3,uVar16,uVar4);
        *(undefined4 *)(local_78 + lVar17 * 4) = uVar14;
        uVar1 = *(uint *)((long)piVar36 + 4);
        lVar17 = lVar17 + 1;
        uVar32 = local_a8;
      } while ((int)lVar17 < (int)uVar1);
    }
    lVar17 = 0;
    *(ulong *)(puVar26 + lVar7 + -0x10) = (ulong)uVar1;
    *(ulong *)(puVar26 + lVar7 + -0x18) =
         (ulong)*(uint *)(local_68 + 4 + ((long)(int)local_88 + 0x530 + local_50[7] * 0xf) * 4);
    *(ulong *)(puVar26 + lVar7 + -0x20) = local_78;
    *(undefined8 *)(puVar26 + lVar7 + -0x28) = 0x100e21;
    _vp_couple_quantize_normalize
              ((long)(int)local_88,local_68 + 0x1350,local_90,piVar22,local_98,local_60);
    if (0 < *piVar22) {
      do {
        local_88 = (long)piVar22[lVar17 + 0x111];
        iVar13 = (int)lVar17;
        local_80 = (int *)CONCAT44(local_80._4_4_,iVar13);
        if (*(int *)((long)piVar36 + 4) < 1) {
          iVar31 = 0;
        }
        else {
          lVar19 = 0;
          iVar31 = 0;
          do {
            if (piVar22[lVar19 + 1] == iVar13) {
              lVar21 = (long)iVar31;
              iVar31 = iVar31 + 1;
              *(uint *)((long)local_58 + lVar21 * 4) = (uint)(*(int *)(local_78 + lVar19 * 4) != 0);
              *(undefined8 *)(uVar32 + lVar21 * 8) = *(undefined8 *)(local_60 + lVar19 * 2);
            }
            lVar19 = lVar19 + 1;
          } while ((int)lVar19 < *(int *)((long)piVar36 + 4));
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar34 + 0x60) + local_88 * 8);
        pcVar5 = *(code **)(*(long *)(&_residue_P +
                                     (long)*(int *)(local_68 + 0x828 + local_88 * 4) * 8) + 0x28);
        *(undefined8 *)(puVar26 + lVar7 + -8) = 0x100ec1;
        uVar16 = (*pcVar5)(local_50,uVar16,uVar32,local_58,iVar31);
        iVar31 = *(int *)((long)piVar36 + 4);
        if (iVar31 < 1) {
          iVar30 = 0;
        }
        else {
          lVar19 = 0;
          iVar30 = 0;
          do {
            if (*(int *)((long)piVar22 + lVar19 + 4) == iVar13) {
              lVar21 = (long)iVar30;
              iVar30 = iVar30 + 1;
              *(undefined8 *)(uVar32 + lVar21 * 8) = *(undefined8 *)((long)local_60 + lVar19 * 2);
            }
            lVar19 = lVar19 + 4;
          } while (lVar19 != (long)iVar31 * 4);
        }
        lVar17 = lVar17 + 1;
        uVar3 = *(undefined8 *)(*(long *)(lVar34 + 0x60) + local_88 * 8);
        lVar19 = *(long *)(&_residue_P + (long)*(int *)(local_68 + 0x828 + local_88 * 4) * 8);
        *(ulong *)(puVar26 + lVar7 + -8) = (ulong)local_80 & 0xffffffff;
        *(undefined8 *)(puVar26 + lVar7 + -0x10) = uVar16;
        pcVar5 = *(code **)(lVar19 + 0x30);
        *(undefined8 *)(puVar26 + lVar7 + -0x18) = 0x100f3c;
        (*pcVar5)(local_70,local_50,uVar3,uVar32,local_58,iVar30);
      } while ((int)lVar17 < *piVar22);
    }
    local_a0 = local_a0 + 1;
  }
  uVar16 = 0;
LAB_00101122:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar29 + -8) = &UNK_0010119e;
  __stack_chk_fail();
}



void mapping0_free_info(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}



int * mapping0_unpack(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *__ptr;
  long lVar7;
  
  __ptr = (int *)calloc(1,0xc88);
  lVar1 = *(long *)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = oggpack_read(param_2,1);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        *__ptr = 1;
      }
      else {
        iVar2 = oggpack_read(param_2,4);
        *__ptr = iVar2 + 1;
        if (iVar2 + 1 < 1) goto LAB_001012a0;
      }
      iVar2 = oggpack_read(param_2,1);
      if (iVar2 < 0) goto LAB_001012a0;
      if (iVar2 == 0) {
        lVar7 = oggpack_read(param_2,2);
        if (lVar7 != 0) goto LAB_001012e0;
      }
      else {
        iVar2 = oggpack_read(param_2,8);
        __ptr[0x121] = iVar2 + 1;
        if (iVar2 + 1 < 1) goto LAB_001012a0;
        iVar2 = *(int *)(param_1 + 4);
        lVar7 = 0;
        do {
          uVar4 = ov_ilog(iVar2 + -1);
          uVar5 = oggpack_read(param_2,uVar4);
          __ptr[lVar7 + 0x122] = uVar5;
          uVar4 = ov_ilog(*(int *)(param_1 + 4) + -1);
          uVar6 = oggpack_read(param_2,uVar4);
          __ptr[lVar7 + 0x222] = uVar6;
          if (((int)(uVar6 | uVar5) < 0) || (uVar5 == uVar6)) goto LAB_001012a0;
          iVar2 = *(int *)(param_1 + 4);
          if ((int)uVar6 < (int)uVar5) {
            uVar6 = uVar5;
          }
          if (iVar2 <= (int)uVar6) goto LAB_001012a0;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < __ptr[0x121]);
        lVar7 = oggpack_read(param_2,2);
        if (lVar7 != 0) goto LAB_001012a0;
      }
      iVar2 = *__ptr;
      if (iVar2 < 2) {
LAB_00101390:
        if (iVar2 < 1) {
          return __ptr;
        }
      }
      else if (0 < *(int *)(param_1 + 4)) {
        lVar7 = 0;
        do {
          iVar3 = oggpack_read(param_2,4);
          __ptr[lVar7 + 1] = iVar3;
          iVar2 = *__ptr;
          if ((iVar2 <= iVar3) || (iVar3 < 0)) goto LAB_001012a0;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(param_1 + 4));
        goto LAB_00101390;
      }
      lVar7 = 0;
      while( true ) {
        oggpack_read(param_2,8);
        iVar2 = oggpack_read(param_2,8);
        __ptr[lVar7 + 0x101] = iVar2;
        if ((*(int *)(lVar1 + 0x18) <= iVar2) || (iVar2 < 0)) break;
        iVar2 = oggpack_read(param_2,8);
        __ptr[lVar7 + 0x111] = iVar2;
        if ((*(int *)(lVar1 + 0x1c) <= iVar2) || (iVar2 < 0)) break;
        lVar7 = lVar7 + 1;
        if (*__ptr <= (int)lVar7) {
          return __ptr;
        }
      }
      goto LAB_001012a0;
    }
  }
LAB_001012e0:
  if (__ptr == (int *)0x0) {
    return (int *)0x0;
  }
LAB_001012a0:
  free(__ptr);
  return (int *)0x0;
}



void mapping0_pack(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (*param_2 < 2) {
    oggpack_write(param_3,0,1);
    if (0 < param_2[0x121]) goto LAB_0010148a;
LAB_001015c5:
    oggpack_write(param_3,0,1);
  }
  else {
    oggpack_write(param_3,1,1);
    oggpack_write(param_3,(long)(*param_2 + -1),4);
    if (param_2[0x121] < 1) goto LAB_001015c5;
LAB_0010148a:
    lVar4 = 0;
    oggpack_write(param_3,1,1);
    oggpack_write(param_3,(long)(param_2[0x121] + -1),8);
    if (0 < param_2[0x121]) {
      do {
        uVar2 = ov_ilog(*(int *)(param_1 + 4) + -1);
        oggpack_write(param_3,(long)param_2[lVar4 + 0x122],uVar2);
        uVar2 = ov_ilog(*(int *)(param_1 + 4) + -1);
        lVar1 = lVar4 + 0x222;
        lVar4 = lVar4 + 1;
        oggpack_write(param_3,(long)param_2[lVar1],uVar2);
      } while ((int)lVar4 < param_2[0x121]);
    }
  }
  oggpack_write(param_3,0,2);
  iVar3 = *param_2;
  if (1 < iVar3) {
    if (*(int *)(param_1 + 4) < 1) goto LAB_00101552;
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 1;
      lVar4 = lVar4 + 1;
      oggpack_write(param_3,(long)param_2[lVar1],4);
    } while ((int)lVar4 < *(int *)(param_1 + 4));
    iVar3 = *param_2;
  }
  if (iVar3 < 1) {
    return;
  }
LAB_00101552:
  lVar4 = 0;
  do {
    oggpack_write(param_3,0,8);
    oggpack_write(param_3,(long)param_2[lVar4 + 0x101],8);
    lVar1 = lVar4 + 0x111;
    lVar4 = lVar4 + 1;
    oggpack_write(param_3,(long)param_2[lVar1],8);
  } while ((int)lVar4 < *param_2);
  return;
}


