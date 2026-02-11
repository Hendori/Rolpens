
/* basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc::TEMPNAMEPLACEHOLDERVALUE(uastc_blk_desc
   const&) const */

undefined4 __thiscall
basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc::operator<
          (uastc_blk_desc *this,uastc_blk_desc *param_1)

{
  undefined4 uVar1;
  
  if (this == param_1) {
    return 0;
  }
  uVar1 = 1;
  if ((*(uint *)param_1 <= *(uint *)this) && (uVar1 = 0, *(uint *)this == *(uint *)param_1)) {
    uVar1 = 1;
    if ((*(uint *)(param_1 + 4) <= *(uint *)(this + 4)) &&
       (uVar1 = 0, *(uint *)(this + 4) == *(uint *)(param_1 + 4))) {
      uVar1 = 1;
      if ((*(uint *)(param_1 + 8) <= *(uint *)(this + 8)) &&
         (uVar1 = 0, *(uint *)(this + 8) == *(uint *)(param_1 + 8))) {
        uVar1 = 1;
        if ((*(uint *)(param_1 + 0xc) <= *(uint *)(this + 0xc)) &&
           (uVar1 = 0, *(uint *)(this + 0xc) == *(uint *)(param_1 + 0xc))) {
          return CONCAT31((int3)(*(uint *)(param_1 + 0x10) >> 8),
                          *(uint *)(this + 0x10) < *(uint *)(param_1 + 0x10));
        }
      }
    }
  }
  return uVar1;
}



/* buminiz::def_free_func(void*, void*) */

void buminiz::def_free_func(void *param_1,void *param_2)

{
  free(param_2);
  return;
}



/* buminiz::def_alloc_func(void*, unsigned long, unsigned long) */

void buminiz::def_alloc_func(void *param_1,ulong param_2,ulong param_3)

{
  malloc(param_2 * param_3);
  return;
}



/* buminiz::tdefl_flush_output_buffer(buminiz::tdefl_compressor*) */

bool buminiz::tdefl_flush_output_buffer(tdefl_compressor *param_1)

{
  long lVar1;
  ulong __n;
  bool bVar2;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    **(long **)(param_1 + 0x98) = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0x88);
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    __n = **(long **)(param_1 + 0xa0) - *(long *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x74) < __n) {
      __n = (ulong)*(uint *)(param_1 + 0x74);
    }
    memcpy((void *)(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 0x90)),
           param_1 + (ulong)*(uint *)(param_1 + 0x70) + 0x392aa,__n);
    lVar1 = *(long *)(param_1 + 0xc0);
    *(ulong *)(param_1 + 0xc0) = __n + lVar1;
    *(ulong *)(param_1 + 0x70) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) - (int)__n,
                  (int)*(undefined8 *)(param_1 + 0x70) + (int)__n);
    **(long **)(param_1 + 0xa0) = __n + lVar1;
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x78) != 0) {
    bVar2 = *(int *)(param_1 + 0x74) == 0;
  }
  return bVar2;
}



/* buminiz::tdefl_output_buffer_putter(void const*, int, void*) */

undefined8 buminiz::tdefl_output_buffer_putter(void *param_1,int param_2,void *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong __size;
  
                    /* WARNING: Load size is inaccurate */
  lVar3 = *param_3;
  __size = *(ulong *)((long)param_3 + 8);
  uVar1 = lVar3 + param_2;
  if (uVar1 <= __size) {
    pvVar2 = *(void **)((long)param_3 + 0x10);
LAB_001001c1:
    memcpy((void *)((long)pvVar2 + lVar3),param_1,(long)param_2);
    *(ulong *)param_3 = uVar1;
    return 1;
  }
  if (*(int *)((long)param_3 + 0x18) != 0) {
    do {
      __size = __size * 2;
      if (__size < 0x80) {
        __size = 0x80;
      }
    } while (__size < uVar1);
    pvVar2 = realloc(*(void **)((long)param_3 + 0x10),__size);
    if (pvVar2 != (void *)0x0) {
      *(void **)((long)param_3 + 0x10) = pvVar2;
                    /* WARNING: Load size is inaccurate */
      lVar3 = *param_3;
      *(ulong *)((long)param_3 + 8) = __size;
      goto LAB_001001c1;
    }
  }
  return 0;
}



/* buminiz::tdefl_optimize_huffman_table(buminiz::tdefl_compressor*, int, int, int, int) */

void buminiz::tdefl_optimize_huffman_table
               (tdefl_compressor *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  tdefl_compressor *ptVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  tdefl_compressor *ptVar6;
  uint *puVar7;
  int *piVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  tdefl_compressor *ptVar16;
  uint *puVar17;
  ushort uVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  uint *puVar26;
  long lVar27;
  long in_FS_OFFSET;
  int iStack_15dc;
  undefined8 local_15d8;
  uint local_1548 [256];
  uint local_1148 [288];
  uint local_cc8 [288];
  uint local_848 [256];
  int local_448 [258];
  long local_40;
  
  lVar27 = (long)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar20 = &local_15d8;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  *(undefined4 *)puVar20 = 0;
  if (param_5 != 0) {
    ptVar6 = param_1 + lVar27 * 0x120;
    ptVar16 = ptVar6 + param_3;
    do {
      ptVar2 = ptVar6 + 0x8f4a;
      ptVar6 = ptVar6 + 1;
      piVar3 = (int *)((long)&local_15d8 + (ulong)(byte)*ptVar2 * 4);
      *piVar3 = *piVar3 + 1;
    } while (ptVar16 != ptVar6);
    goto LAB_00100299;
  }
  iVar21 = 0;
  lVar12 = 0;
  do {
    if (*(ushort *)(param_1 + lVar12 * 2 + lVar27 * 0x240 + 0x81ca) != 0) {
      lVar19 = (long)iVar21;
      iVar21 = iVar21 + 1;
      local_1148[lVar19] =
           (uint)*(ushort *)(param_1 + lVar12 * 2 + lVar27 * 0x240 + 0x81ca) | (int)lVar12 << 0x10;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != param_3);
  puVar7 = local_848;
  puVar15 = puVar7;
  for (lVar12 = 0x100; lVar12 != 0; lVar12 = lVar12 + -1) {
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar15 = puVar15 + 2;
  }
  if (iVar21 == 0) {
    uVar13 = 0xffffffff;
LAB_00100430:
    iVar5 = 1;
  }
  else {
    uVar13 = (ulong)(iVar21 - 1);
    puVar15 = local_1148;
    do {
      uVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      local_848[(byte)(ushort)uVar14] = local_848[(byte)(ushort)uVar14] + 1;
      local_448[(byte)((ushort)uVar14 >> 8)] = local_448[(byte)((ushort)uVar14 >> 8)] + 1;
    } while (local_1148 + uVar13 + 1 != puVar15);
    if (iVar21 == local_448[0]) goto LAB_00100430;
    iVar5 = 2;
  }
  iVar11 = 0;
  puVar15 = local_cc8;
  puVar26 = local_1148;
  do {
    puVar17 = puVar15;
    lVar12 = 0;
    iVar23 = 0;
    do {
      *(int *)((long)local_1548 + lVar12) = iVar23;
      iVar23 = iVar23 + *(int *)((long)puVar7 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x400);
    puVar15 = puVar26;
    if (iVar21 != 0) {
      do {
        puVar22 = puVar15 + 1;
        uVar4 = (int)(uint)(ushort)*puVar15 >> ((byte)iVar11 & 0x1f) & 0xff;
        uVar14 = local_1548[uVar4];
        local_1548[uVar4] = uVar14 + 1;
        puVar17[uVar14] = *puVar15;
        puVar15 = puVar22;
      } while (puVar26 + uVar13 + 1 != puVar22);
    }
    iVar11 = iVar11 + 8;
    puVar7 = puVar7 + 0x100;
    puVar15 = puVar26;
    puVar26 = puVar17;
  } while (iVar11 != (uint)(iVar5 != 1) * 8 + 8);
  if (iVar21 != 0) {
    if (iVar21 != 1) {
      uVar18 = (ushort)puVar17[1] + (ushort)*puVar17;
      *(ushort *)puVar17 = uVar18;
      if (1 < (int)uVar13) {
        iVar5 = 0;
        lVar12 = 1;
        iVar11 = 2;
        do {
          if ((iVar11 < iVar21) && (uVar10 = (ushort)puVar17[iVar11], uVar10 <= uVar18)) {
            iVar11 = iVar11 + 1;
            *(ushort *)(puVar17 + lVar12) = uVar10;
            if (iVar21 <= iVar11) goto LAB_0010057b;
LAB_001005c4:
            lVar19 = (long)iVar11;
            if (iVar5 < (int)lVar12) {
              puVar7 = puVar17 + iVar5;
              uVar18 = (ushort)*puVar7;
              if ((ushort)puVar17[lVar19] <= uVar18) goto LAB_001005e1;
              goto LAB_00100586;
            }
LAB_001005e1:
            iVar11 = iVar11 + 1;
            *(ushort *)(puVar17 + lVar12) = uVar10 + (ushort)puVar17[lVar19];
          }
          else {
            *(ushort *)(puVar17 + lVar12) = uVar18;
            iVar23 = iVar5 + 1;
            *(ushort *)(puVar17 + iVar5) = (ushort)lVar12;
            uVar10 = (ushort)puVar17[lVar12];
            iVar5 = iVar23;
            if (iVar11 < iVar21) goto LAB_001005c4;
LAB_0010057b:
            puVar7 = puVar17 + iVar5;
            uVar18 = (ushort)*puVar7;
LAB_00100586:
            *(ushort *)(puVar17 + lVar12) = uVar18 + uVar10;
            iVar5 = iVar5 + 1;
            *(ushort *)puVar7 = (ushort)lVar12;
          }
          if (uVar13 == lVar12 + 1U) goto LAB_001005f7;
          lVar12 = lVar12 + 1;
          uVar18 = (ushort)puVar17[iVar5];
        } while( true );
      }
      *(ushort *)(puVar17 + (long)iVar21 + -2) = 0;
LAB_00100627:
      uVar14 = iVar21 - 2;
      uVar25 = (ulong)uVar14;
      uVar4 = 0;
      iVar5 = 1;
      do {
        iVar11 = 0;
        iVar23 = 0;
        if ((int)uVar14 < 0) {
LAB_0010068d:
          iVar24 = (int)uVar13;
          puVar7 = puVar17 + iVar24;
          do {
            *(ushort *)puVar7 = (ushort)uVar4;
            puVar7 = puVar7 + -1;
          } while (puVar17 + (((long)iVar24 + -1) - (ulong)(uint)((iVar5 + -1) - iVar23)) != puVar7)
          ;
          uVar13 = (ulong)(uint)(iVar24 + (iVar23 - iVar5));
          if (iVar23 == 0) goto LAB_001007db;
        }
        else {
          iVar23 = 0;
          puVar7 = puVar17 + (int)uVar14;
          do {
            if ((ushort)*puVar7 != uVar4) break;
            uVar14 = uVar14 - 1;
            iVar23 = iVar23 + 1;
            puVar7 = puVar7 + -1;
          } while (uVar14 != 0xffffffff);
          iVar11 = iVar23 * 2;
          if (iVar23 < iVar5) goto LAB_0010068d;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar11;
      } while( true );
    }
    local_15d8._4_4_ = 1;
    *(ushort *)puVar17 = 1;
  }
  goto LAB_001006e9;
LAB_001005f7:
  *(ushort *)(puVar17 + (long)iVar21 + -2) = 0;
  lVar12 = (long)(iVar21 + -3);
  do {
    *(ushort *)(puVar17 + lVar12) = (ushort)puVar17[(ushort)puVar17[lVar12]] + 1;
    lVar12 = lVar12 + -1;
  } while (-1 < (int)lVar12);
  goto LAB_00100627;
LAB_001007db:
  if (0 < iVar21) {
    *(undefined4 *)((long)&local_15d8 + (ulong)(ushort)*puVar17 * 4) = 1;
    puVar7 = puVar17 + 1;
    do {
      uVar14 = *puVar7;
      puVar7 = puVar7 + 1;
      piVar3 = (int *)((long)&local_15d8 + (ulong)(ushort)uVar14 * 4);
      *piVar3 = *piVar3 + 1;
    } while (puVar17 + uVar25 + 2 != puVar7);
    lVar12 = (long)(param_4 + 1);
    piVar3 = (int *)((long)&local_15d8 + (long)param_4 * 4);
    iVar5 = *piVar3;
    do {
      iVar5 = iVar5 + *(int *)((long)&local_15d8 + lVar12 * 4);
      lVar12 = lVar12 + 1;
      *piVar3 = iVar5;
    } while ((int)lVar12 != 0x21);
    iVar11 = 0;
    uVar13 = 0;
    piVar8 = piVar3;
    do {
      iVar23 = *piVar8;
      piVar8 = piVar8 + -1;
      bVar9 = (byte)iVar11;
      iVar11 = iVar11 + 1;
      uVar13 = (ulong)(uint)((int)uVar13 + (iVar23 << (bVar9 & 0x1f)));
    } while (param_4 != iVar11);
    uVar25 = 1L << ((byte)param_4 & 0x3f);
    if (uVar25 != uVar13) {
      do {
        *piVar3 = iVar5 + -1;
        piVar8 = &iStack_15dc + param_4;
        lVar12 = (long)(param_4 + -1);
        do {
          if (*piVar8 != 0) {
            *piVar8 = *piVar8 + -1;
            piVar8 = (int *)((long)&local_15d8 + lVar12 * 4 + 4);
            *piVar8 = *piVar8 + 2;
            break;
          }
          piVar8 = piVar8 + -1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        uVar13 = (ulong)((int)uVar13 - 1);
        if (uVar25 == uVar13) break;
        iVar5 = *piVar3;
      } while( true );
    }
  }
LAB_001006e9:
  uVar25 = 1;
  ptVar16 = param_1 + lVar27 * 0x120 + 0x8f4a;
  *(undefined8 *)ptVar16 = 0;
  *(undefined8 *)(ptVar16 + 0x118) = 0;
  puVar20 = (undefined8 *)((ulong)(ptVar16 + 8) & 0xfffffffffffffff8);
  for (uVar13 = (ulong)(((int)ptVar16 -
                        (int)(undefined8 *)((ulong)(ptVar16 + 8) & 0xfffffffffffffff8)) + 0x120U >>
                       3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  ptVar16 = param_1 + lVar27 * 0x240 + 0x888a;
  *(undefined8 *)ptVar16 = 0;
  *(undefined8 *)(ptVar16 + 0x238) = 0;
  puVar20 = (undefined8 *)((ulong)(ptVar16 + 8) & 0xfffffffffffffff8);
  for (uVar13 = (ulong)(((int)ptVar16 -
                        (int)(undefined8 *)((ulong)(ptVar16 + 8) & 0xfffffffffffffff8)) + 0x240U >>
                       3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  do {
    iVar5 = *(int *)((long)&local_15d8 + uVar25 * 4);
    if (0 < iVar5) {
      puVar7 = puVar17 + iVar21;
      do {
        puVar1 = (ushort *)((long)puVar7 + -2);
        puVar7 = puVar7 + -1;
        param_1[(ulong)*puVar1 + 0x8f4a + lVar27 * 0x120] = SUB81(uVar25,0);
      } while (puVar17 + (((long)iVar21 + -1) - (ulong)(iVar5 - 1)) != puVar7);
      iVar21 = iVar21 - iVar5;
    }
    uVar25 = uVar25 + 1;
  } while (param_4 + 1 != uVar25);
LAB_00100299:
  uVar13 = 2;
  uVar14 = 0;
  local_848[1] = 0;
  do {
    uVar14 = (uVar14 + (&iStack_15dc)[uVar13]) * 2;
    local_848[uVar13] = uVar14;
    uVar13 = uVar13 + 1;
  } while (uVar13 != param_4 + 1);
  ptVar6 = param_1 + lVar27 * 0x120;
  ptVar16 = ptVar6 + param_3;
  do {
    while (uVar13 = (ulong)(byte)ptVar6[0x8f4a], ptVar6[0x8f4a] != (tdefl_compressor)0x0) {
      uVar14 = local_848[uVar13];
      local_848[uVar13] = uVar14 + 1;
      uVar4 = 0;
      uVar25 = (ulong)uVar14;
      do {
        uVar4 = uVar4 * 2 | (uint)uVar25 & 1;
        uVar14 = (int)uVar13 - 1;
        uVar13 = (ulong)uVar14;
        uVar25 = uVar25 >> 1;
      } while (uVar14 != 0);
      *(short *)((0x888a - (long)param_1) + (long)ptVar6 * 2) = (short)uVar4;
      ptVar6 = ptVar6 + 1;
      if (ptVar6 == ptVar16) goto LAB_00100342;
    }
    ptVar6 = ptVar6 + 1;
  } while (ptVar6 != ptVar16);
LAB_00100342:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_start_dynamic_block(buminiz::tdefl_compressor*) */

void buminiz::tdefl_start_dynamic_block(tdefl_compressor *param_1)

{
  tdefl_compressor tVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  tdefl_compressor tVar6;
  tdefl_compressor tVar7;
  uint uVar8;
  uint uVar9;
  tdefl_compressor *ptVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  tdefl_compressor *ptVar17;
  tdefl_compressor *ptVar18;
  byte *pbVar19;
  tdefl_compressor tVar20;
  int iVar21;
  long in_FS_OFFSET;
  bool bVar22;
  byte bVar23;
  undefined8 uStack_2c0;
  tdefl_compressor local_2b8 [8];
  undefined1 auStack_2b0 [249];
  tdefl_compressor atStack_1b7 [63];
  tdefl_compressor local_178 [328];
  long local_30;
  
  bVar23 = 0;
  ptVar18 = local_2b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined2 *)(param_1 + 0x83ca) = 1;
  uStack_2c0 = (undefined *)0x100953;
  tdefl_optimize_huffman_table(param_1,0,0x120,0xf,0);
  uStack_2c0 = (undefined *)0x10096d;
  tdefl_optimize_huffman_table(param_1,1,0x20,0xf,0);
  lVar12 = 0x11e;
  do {
    lVar3 = lVar12;
    if (lVar3 == 0x101) {
      iVar2 = 0x101;
      iVar21 = 0;
      uVar4 = 0x101;
      goto LAB_001009a1;
    }
    lVar12 = lVar3 + -1;
  } while (param_1[lVar3 + 0x8f49] == (tdefl_compressor)0x0);
  iVar2 = (int)lVar3;
  uVar4 = (ulong)iVar2;
  iVar21 = iVar2 + -0x101;
LAB_001009a1:
  ptVar10 = param_1 + 36999;
  uVar9 = 0x1e;
  do {
    uVar13 = uVar9 - 1;
    uVar15 = uVar9;
    if (*ptVar10 != (tdefl_compressor)0x0) goto LAB_001009d0;
    ptVar10 = ptVar10 + -1;
    uVar9 = uVar13;
  } while (uVar13 != 1);
  uVar13 = 0;
  uVar15 = 1;
LAB_001009d0:
  ptVar10 = param_1 + 0x8f4a;
  ptVar17 = local_2b8;
  for (uVar11 = uVar4 >> 3 & 0x1fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined8 *)ptVar17 = *(undefined8 *)ptVar10;
    ptVar10 = ptVar10 + (ulong)bVar23 * -0x10 + 8;
    ptVar17 = (tdefl_compressor *)((long)ptVar17 + ((ulong)bVar23 * -2 + 1) * 8);
  }
  lVar12 = 0;
  if ((uVar4 & 4) != 0) {
    *(undefined4 *)ptVar17 = *(undefined4 *)ptVar10;
    lVar12 = 4;
  }
  if ((uVar4 & 2) != 0) {
    *(undefined2 *)((long)ptVar17 + lVar12) = *(undefined2 *)(ptVar10 + lVar12);
    lVar12 = lVar12 + 2;
  }
  if ((uVar4 & 1) != 0) {
    *(tdefl_compressor *)((long)ptVar17 + lVar12) = ptVar10[lVar12];
  }
  ptVar10 = local_2b8 + uVar4;
  uVar11 = (ulong)uVar15;
  if (uVar15 < 8) {
    if ((uVar15 & 4) == 0) {
      if ((uVar15 != 0) && (*ptVar10 = param_1[0x906a], (uVar15 & 2) != 0)) {
        *(undefined2 *)((long)&uStack_2c0 + uVar11 + uVar4 + 6) =
             *(undefined2 *)(param_1 + uVar11 + 0x9068);
      }
    }
    else {
      *(undefined4 *)ptVar10 = *(undefined4 *)(param_1 + 0x906a);
      *(undefined4 *)((long)&uStack_2c0 + uVar11 + uVar4 + 4) =
           *(undefined4 *)(param_1 + uVar11 + 0x9066);
    }
  }
  else {
    *(undefined8 *)ptVar10 = *(undefined8 *)(param_1 + 0x906a);
    *(undefined8 *)((long)&uStack_2c0 + uVar15 + uVar4) =
         *(undefined8 *)(param_1 + (ulong)uVar15 + 0x9062);
    lVar12 = (long)ptVar10 - ((ulong)(auStack_2b0 + uVar4) & 0xfffffffffffffff8);
    uVar15 = uVar15 + (int)lVar12 & 0xfffffff8;
    if (7 < uVar15) {
      uVar16 = 0;
      do {
        uVar11 = (ulong)uVar16;
        uVar16 = uVar16 + 8;
        *(undefined8 *)(((ulong)(auStack_2b0 + uVar4) & 0xfffffffffffffff8) + uVar11) =
             *(undefined8 *)(param_1 + uVar11 + (0x906a - lVar12));
      } while (uVar16 < uVar15);
    }
  }
  uVar8 = 0;
  *(undefined1 (*) [16])(param_1 + 0x865a) = (undefined1  [16])0x0;
  uVar16 = 0;
  uVar15 = 0;
  *(undefined8 *)(param_1 + 0x8668) = 0;
  *(undefined1 (*) [16])(param_1 + 0x864a) = (undefined1  [16])0x0;
  tVar1 = (tdefl_compressor)0xff;
  do {
    while( true ) {
      tVar7 = *ptVar18;
      if (tVar7 != (tdefl_compressor)0x0) break;
      uVar14 = uVar15;
      if (uVar8 != 0) {
        if (uVar8 < 3) {
          *(short *)(param_1 + (ulong)(byte)tVar1 * 2 + 0x864a) =
               *(short *)(param_1 + (ulong)(byte)tVar1 * 2 + 0x864a) + (short)uVar8;
          uVar14 = uVar15 + 1;
          local_178[uVar15] = tVar1;
          if (uVar8 != 1) {
            local_178[uVar14] = tVar1;
            uVar14 = uVar15 + 2;
          }
        }
        else {
          *(short *)(param_1 + 0x866a) = *(short *)(param_1 + 0x866a) + 1;
          local_178[uVar15] = (tdefl_compressor)0x10;
          uVar14 = uVar15 + 2;
          local_178[uVar15 + 1] = (tdefl_compressor)((char)uVar8 + -3);
        }
      }
      uVar16 = uVar16 + 1;
      uVar8 = 0;
      uVar15 = uVar14;
      if (uVar16 == 0x8a) {
        *(short *)(param_1 + 0x866e) = *(short *)(param_1 + 0x866e) + 1;
        uVar15 = uVar14 + 2;
        local_178[uVar14] = (tdefl_compressor)0x12;
        local_178[uVar14 + 1] = (tdefl_compressor)0x7f;
        uVar16 = 0;
      }
LAB_00100ae6:
      ptVar18 = ptVar18 + 1;
      tVar1 = tVar7;
      if (local_2b8 + (ulong)((uVar9 - 1) + iVar2) + 1 == ptVar18) goto LAB_00100b9e;
    }
    uVar14 = uVar15;
    if (uVar16 != 0) {
      if (uVar16 < 3) {
        *(short *)(param_1 + 0x864a) = *(short *)(param_1 + 0x864a) + (short)uVar16;
        uVar14 = uVar15 + 1;
        local_178[uVar15] = (tdefl_compressor)0x0;
        if (uVar16 != 1) {
          local_178[uVar14] = (tdefl_compressor)0x0;
          uVar14 = uVar15 + 2;
        }
      }
      else {
        if (uVar16 < 0xb) {
          *(short *)(param_1 + 0x866c) = *(short *)(param_1 + 0x866c) + 1;
          tVar6 = (tdefl_compressor)((char)uVar16 + -3);
          tVar20 = (tdefl_compressor)0x11;
        }
        else {
          *(short *)(param_1 + 0x866e) = *(short *)(param_1 + 0x866e) + 1;
          tVar6 = (tdefl_compressor)((char)uVar16 + -0xb);
          tVar20 = (tdefl_compressor)0x12;
        }
        local_178[uVar15] = tVar20;
        uVar14 = uVar15 + 2;
        local_178[uVar15 + 1] = tVar6;
      }
    }
    if (tVar7 == tVar1) {
      uVar8 = uVar8 + 1;
      uVar16 = 0;
      uVar15 = uVar14;
      if (uVar8 == 6) {
        *(short *)(param_1 + 0x866a) = *(short *)(param_1 + 0x866a) + 1;
        local_178[uVar14] = (tdefl_compressor)0x10;
        local_178[uVar14 + 1] = (tdefl_compressor)0x3;
        uVar8 = 0;
        uVar15 = uVar14 + 2;
      }
      goto LAB_00100ae6;
    }
    uVar4 = (ulong)uVar14;
    if (uVar8 != 0) {
      if (uVar8 < 3) {
        *(short *)(param_1 + (ulong)(byte)tVar1 * 2 + 0x864a) =
             *(short *)(param_1 + (ulong)(byte)tVar1 * 2 + 0x864a) + (short)uVar8;
        uVar4 = (ulong)(uVar14 + 1);
        local_178[uVar14] = tVar1;
        if (uVar8 != 1) {
          local_178[uVar4] = tVar1;
          uVar4 = (ulong)(uVar14 + 2);
        }
      }
      else {
        *(short *)(param_1 + 0x866a) = *(short *)(param_1 + 0x866a) + 1;
        uVar4 = (ulong)(uVar14 + 2);
        local_178[uVar14] = (tdefl_compressor)0x10;
        local_178[uVar14 + 1] = (tdefl_compressor)((char)uVar8 + -3);
      }
    }
    ptVar18 = ptVar18 + 1;
    local_178[uVar4] = tVar7;
    uVar15 = (int)uVar4 + 1;
    *(short *)(param_1 + (ulong)(byte)tVar7 * 2 + 0x864a) =
         *(short *)(param_1 + (ulong)(byte)tVar7 * 2 + 0x864a) + 1;
    uVar16 = 0;
    uVar8 = 0;
    tVar1 = tVar7;
  } while (local_2b8 + (ulong)((uVar9 - 1) + iVar2) + 1 != ptVar18);
LAB_00100b9e:
  if (uVar8 == 0) {
    if (uVar16 != 0) {
      if (uVar16 < 3) {
        *(short *)(param_1 + 0x864a) = *(short *)(param_1 + 0x864a) + (short)uVar16;
        local_178[uVar15] = (tdefl_compressor)0x0;
        if (uVar16 != 1) {
          local_178[uVar15 + 1] = (tdefl_compressor)0x0;
        }
        uVar15 = uVar15 + uVar16;
      }
      else {
        if (uVar16 < 0xb) {
          *(short *)(param_1 + 0x866c) = *(short *)(param_1 + 0x866c) + 1;
          tVar7 = (tdefl_compressor)((char)uVar16 + -3);
          tVar1 = (tdefl_compressor)0x11;
        }
        else {
          *(short *)(param_1 + 0x866e) = *(short *)(param_1 + 0x866e) + 1;
          tVar7 = (tdefl_compressor)((char)uVar16 + -0xb);
          tVar1 = (tdefl_compressor)0x12;
        }
        local_178[uVar15] = tVar1;
        uVar9 = uVar15 + 1;
        uVar15 = uVar15 + 2;
        local_178[uVar9] = tVar7;
      }
    }
  }
  else if (uVar8 < 3) {
    *(short *)(param_1 + (ulong)(byte)tVar7 * 2 + 0x864a) =
         *(short *)(param_1 + (ulong)(byte)tVar7 * 2 + 0x864a) + (short)uVar8;
    local_178[uVar15] = tVar7;
    if (uVar8 != 1) {
      local_178[uVar15 + 1] = tVar7;
    }
    uVar15 = uVar15 + uVar8;
  }
  else {
    *(short *)(param_1 + 0x866a) = *(short *)(param_1 + 0x866a) + 1;
    local_178[uVar15] = (tdefl_compressor)0x10;
    uVar9 = uVar15 + 1;
    uVar15 = uVar15 + 2;
    local_178[uVar9] = (tdefl_compressor)((char)uVar8 + -3);
  }
  uStack_2c0 = (undefined *)0x100bee;
  tdefl_optimize_huffman_table(param_1,2,0x13,7,0);
  puVar5 = *(undefined1 **)(param_1 + 0x40);
  uVar9 = *(int *)(param_1 + 0x5c) + 2;
  uVar16 = 2 << ((byte)*(int *)(param_1 + 0x5c) & 0x1f) | *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = uVar16;
  *(uint *)(param_1 + 0x5c) = uVar9;
  while (7 < uVar9) {
    if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
      *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
      *puVar5 = (char)uVar16;
      uVar16 = *(uint *)(param_1 + 0x60);
      puVar5 = *(undefined1 **)(param_1 + 0x40);
    }
    uVar16 = uVar16 >> 8;
    *(uint *)(param_1 + 0x60) = uVar16;
    uVar9 = *(int *)(param_1 + 0x5c) - 8;
    *(uint *)(param_1 + 0x5c) = uVar9;
  }
  uVar8 = uVar9 + 5;
  uVar16 = iVar21 << ((byte)uVar9 & 0x1f) | uVar16;
  *(uint *)(param_1 + 0x5c) = uVar8;
  *(uint *)(param_1 + 0x60) = uVar16;
  if (uVar8 < 8) {
    uVar16 = uVar16 | uVar13 << ((byte)uVar8 & 0x1f);
    *(uint *)(param_1 + 0x5c) = uVar9 + 10;
    *(uint *)(param_1 + 0x60) = uVar16;
    while( true ) {
      if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
        *puVar5 = (char)uVar16;
        uVar16 = *(uint *)(param_1 + 0x60);
      }
      uVar16 = uVar16 >> 8;
      *(uint *)(param_1 + 0x60) = uVar16;
      uVar8 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar8;
      if (uVar8 < 8) break;
LAB_00100ca0:
      puVar5 = *(undefined1 **)(param_1 + 0x40);
    }
  }
  else {
    while( true ) {
      if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
        *puVar5 = (char)uVar16;
        uVar16 = *(uint *)(param_1 + 0x60);
      }
      iVar2 = *(int *)(param_1 + 0x5c);
      uVar16 = uVar16 >> 8;
      *(uint *)(param_1 + 0x60) = uVar16;
      uVar9 = iVar2 - 8;
      *(uint *)(param_1 + 0x5c) = uVar9;
      if (uVar9 < 8) break;
      puVar5 = *(undefined1 **)(param_1 + 0x40);
    }
    uVar8 = iVar2 - 3;
    uVar16 = uVar16 | uVar13 << ((byte)uVar9 & 0x1f);
    *(uint *)(param_1 + 0x5c) = uVar8;
    *(uint *)(param_1 + 0x60) = uVar16;
    if (7 < uVar8) goto LAB_00100ca0;
  }
  lVar12 = 0x12;
  do {
    if (param_1[(ulong)(byte)(&tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                               ::s_length_dezigzag)[lVar12] + 0x918a] != (tdefl_compressor)0x0) {
      iVar2 = (int)lVar12;
      if (iVar2 < 3) {
        iVar2 = 3;
      }
      uVar16 = uVar16 | iVar2 + -3 << ((byte)uVar8 & 0x1f);
      goto LAB_00100d09;
    }
    bVar22 = lVar12 != 0;
    lVar12 = lVar12 + -1;
  } while (bVar22);
  iVar2 = 3;
LAB_00100d09:
  uVar8 = uVar8 + 4;
  *(uint *)(param_1 + 0x60) = uVar16;
  *(uint *)(param_1 + 0x5c) = uVar8;
  while (7 < uVar8) {
    puVar5 = *(undefined1 **)(param_1 + 0x40);
    if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
      *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
      *puVar5 = (char)uVar16;
      uVar16 = *(uint *)(param_1 + 0x60);
    }
    uVar16 = uVar16 >> 8;
    *(uint *)(param_1 + 0x60) = uVar16;
    uVar8 = *(int *)(param_1 + 0x5c) - 8;
    *(uint *)(param_1 + 0x5c) = uVar8;
  }
  pbVar19 = &tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
             ::s_length_dezigzag;
  while( true ) {
    uVar9 = uVar8 + 3;
    uVar16 = (uint)(byte)param_1[(ulong)*pbVar19 + 0x918a] << ((byte)uVar8 & 0x1f) | uVar16;
    *(uint *)(param_1 + 0x5c) = uVar9;
    *(uint *)(param_1 + 0x60) = uVar16;
    while (7 < uVar9) {
      puVar5 = *(undefined1 **)(param_1 + 0x40);
      if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
        *puVar5 = (char)uVar16;
        uVar16 = *(uint *)(param_1 + 0x60);
      }
      uVar16 = uVar16 >> 8;
      *(uint *)(param_1 + 0x60) = uVar16;
      uVar9 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar9;
    }
    if (&tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
         ::s_length_dezigzag + iVar2 == pbVar19) break;
    uVar16 = *(uint *)(param_1 + 0x60);
    uVar8 = *(uint *)(param_1 + 0x5c);
    pbVar19 = pbVar19 + 1;
  }
  uVar4 = 0;
  while (ptVar18 = local_178 + uVar4, (uint)uVar4 < uVar15) {
    while( true ) {
      tVar1 = *ptVar18;
      iVar2 = (int)uVar4;
      uVar16 = iVar2 + 1;
      uVar4 = (ulong)uVar16;
      uVar13 = *(int *)(param_1 + 0x5c) + (uint)(byte)param_1[(ulong)(byte)tVar1 + 0x918a];
      uVar9 = (uint)*(ushort *)(param_1 + (ulong)(byte)tVar1 * 2 + 0x8d0a) <<
              ((byte)*(int *)(param_1 + 0x5c) & 0x1f) | *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) = uVar9;
      *(uint *)(param_1 + 0x5c) = uVar13;
      while (7 < uVar13) {
        puVar5 = *(undefined1 **)(param_1 + 0x40);
        if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
          *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
          *puVar5 = (char)uVar9;
          uVar9 = *(uint *)(param_1 + 0x60);
        }
        uVar9 = uVar9 >> 8;
        *(uint *)(param_1 + 0x60) = uVar9;
        uVar13 = *(int *)(param_1 + 0x5c) - 8;
        *(uint *)(param_1 + 0x5c) = uVar13;
      }
      ptVar18 = ptVar18 + 1;
      if (0xf < (byte)tVar1) break;
      if (uVar15 <= uVar16) goto LAB_00100f9c;
    }
    ptVar18 = local_178 + uVar4;
    uVar4 = (ulong)(iVar2 + 2);
    uVar9 = (uint)(byte)*ptVar18 << ((byte)uVar13 & 0x1f) | *(uint *)(param_1 + 0x60);
    uVar13 = (int)(char)(&_LC0)[(byte)tVar1 - 0x10] + uVar13;
    *(uint *)(param_1 + 0x60) = uVar9;
    *(uint *)(param_1 + 0x5c) = uVar13;
    while (7 < uVar13) {
      puVar5 = *(undefined1 **)(param_1 + 0x40);
      if (puVar5 < *(undefined1 **)(param_1 + 0x48)) {
        *(undefined1 **)(param_1 + 0x40) = puVar5 + 1;
        *puVar5 = (char)uVar9;
        uVar9 = *(uint *)(param_1 + 0x60);
      }
      uVar9 = uVar9 >> 8;
      *(uint *)(param_1 + 0x60) = uVar9;
      uVar13 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar13;
    }
  }
LAB_00100f9c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack_2c0 = &UNK_00101134;
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::tdefl_compress_block(buminiz::tdefl_compressor*, int) */

bool buminiz::tdefl_compress_block(tdefl_compressor *param_1,int param_2)

{
  tdefl_compressor *ptVar1;
  tdefl_compressor tVar2;
  ushort uVar3;
  tdefl_compressor *ptVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  byte bVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  tdefl_compressor *ptVar22;
  
  uVar6 = _UNK_001223a8;
  uVar5 = __LC1;
  if (param_2 == 0) {
    tdefl_start_dynamic_block(param_1);
    puVar18 = *(ulong **)(param_1 + 0x40);
    uVar15 = *(uint *)(param_1 + 0x60);
    uVar7 = *(uint *)(param_1 + 0x5c);
    puVar19 = *(ulong **)(param_1 + 0x48);
  }
  else {
    *(undefined8 *)(param_1 + 0x8f4a) = __LC1;
    *(undefined8 *)(param_1 + 0x8f52) = uVar6;
    *(undefined8 *)(param_1 + 0x8f5a) = uVar5;
    *(undefined8 *)(param_1 + 0x8f62) = uVar6;
    *(undefined8 *)(param_1 + 0x8f6a) = uVar5;
    *(undefined8 *)(param_1 + 0x8f72) = uVar6;
    *(undefined8 *)(param_1 + 0x8f7a) = uVar5;
    *(undefined8 *)(param_1 + 0x8f82) = uVar6;
    *(undefined8 *)(param_1 + 0x8f8a) = uVar5;
    *(undefined8 *)(param_1 + 0x8f92) = uVar6;
    *(undefined8 *)(param_1 + 0x8f9a) = uVar5;
    *(undefined8 *)(param_1 + 0x8fa2) = uVar6;
    *(undefined8 *)(param_1 + 0x8faa) = uVar5;
    *(undefined8 *)(param_1 + 0x8fb2) = uVar6;
    *(undefined8 *)(param_1 + 0x8fba) = uVar5;
    *(undefined8 *)(param_1 + 0x8fc2) = uVar6;
    *(undefined8 *)(param_1 + 0x8fca) = uVar5;
    *(undefined8 *)(param_1 + 0x8fd2) = uVar6;
    uVar6 = _UNK_001223b8;
    uVar5 = __LC2;
    *(undefined8 *)(param_1 + 0x905a) = 0x707070707070707;
    *(undefined8 *)(param_1 + 0x8fda) = uVar5;
    *(undefined8 *)(param_1 + 0x8fe2) = uVar6;
    *(undefined8 *)(param_1 + 0x8fea) = uVar5;
    *(undefined8 *)(param_1 + 0x8ff2) = uVar6;
    *(undefined8 *)(param_1 + 0x8ffa) = uVar5;
    *(undefined8 *)(param_1 + 0x9002) = uVar6;
    *(undefined8 *)(param_1 + 0x900a) = uVar5;
    *(undefined8 *)(param_1 + 0x9012) = uVar6;
    *(undefined8 *)(param_1 + 0x901a) = uVar5;
    *(undefined8 *)(param_1 + 0x9022) = uVar6;
    *(undefined8 *)(param_1 + 0x902a) = uVar5;
    *(undefined8 *)(param_1 + 0x9032) = uVar6;
    *(undefined8 *)(param_1 + 0x903a) = uVar5;
    *(undefined8 *)(param_1 + 0x9042) = uVar6;
    uVar6 = _UNK_001223c8;
    uVar5 = __LC3;
    *(undefined8 *)(param_1 + 0x9062) = 0x808080808080808;
    *(undefined8 *)(param_1 + 0x904a) = uVar5;
    *(undefined8 *)(param_1 + 0x9052) = uVar6;
    uVar6 = _UNK_001223d8;
    uVar5 = __LC4;
    *(undefined8 *)(param_1 + 0x906a) = __LC4;
    *(undefined8 *)(param_1 + 0x9072) = uVar6;
    *(undefined8 *)(param_1 + 0x907a) = uVar5;
    *(undefined8 *)(param_1 + 0x9082) = uVar6;
    tdefl_optimize_huffman_table(param_1,0,0x120,0xf,1);
    tdefl_optimize_huffman_table(param_1,1,0x20,0xf,1);
    puVar18 = *(ulong **)(param_1 + 0x40);
    puVar19 = *(ulong **)(param_1 + 0x48);
    uVar7 = *(int *)(param_1 + 0x5c) + 2;
    uVar15 = 1 << ((byte)*(int *)(param_1 + 0x5c) & 0x1f) | *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar15;
    *(uint *)(param_1 + 0x5c) = uVar7;
    while (7 < uVar7) {
      if (puVar18 < puVar19) {
        *(ulong *)(param_1 + 0x40) = (long)puVar18 + 1;
        *(char *)puVar18 = (char)uVar15;
        uVar15 = *(uint *)(param_1 + 0x60);
        puVar18 = *(ulong **)(param_1 + 0x40);
        puVar19 = *(ulong **)(param_1 + 0x48);
      }
      uVar15 = uVar15 >> 8;
      *(uint *)(param_1 + 0x60) = uVar15;
      uVar7 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar7;
    }
  }
  uVar16 = (ulong)uVar15;
  uVar8 = (ulong)uVar7;
  ptVar4 = *(tdefl_compressor **)(param_1 + 0x30);
  ptVar22 = param_1 + 0x92aa;
  if (ptVar22 < ptVar4) {
    uVar7 = 1;
    uVar14 = uVar8;
    do {
      tVar2 = *ptVar22;
      if (uVar7 == 1) {
        ptVar22 = ptVar22 + 1;
        uVar7 = (uint)CONCAT11(1,tVar2);
      }
      uVar8 = (ulong)(uint)(byte)*ptVar22;
      if ((uVar7 & 1) == 0) {
        ptVar1 = ptVar22 + 1;
        uVar20 = uVar7 >> 1;
        uVar15 = (uint)(byte)param_1[uVar8 + 0x8f4a] + (int)uVar14;
        uVar16 = (ulong)*(ushort *)(param_1 + uVar8 * 2 + 0x888a) << ((byte)uVar14 & 0x3f) | uVar16;
        if (((uVar7 & 2) == 0) && (ptVar1 < ptVar4)) {
          ptVar1 = ptVar22 + 2;
          uVar16 = uVar16 | (ulong)*(ushort *)(param_1 + (ulong)(byte)ptVar22[1] * 2 + 0x888a) <<
                            ((byte)uVar15 & 0x3f);
          uVar15 = uVar15 + (byte)param_1[(ulong)(byte)ptVar22[1] + 0x8f4a];
          uVar13 = uVar7 >> 2;
          uVar21 = uVar7 & 4;
          uVar7 = uVar20;
          if ((uVar21 == 0) && (ptVar1 < ptVar4)) {
            uVar16 = uVar16 | (ulong)*(ushort *)(param_1 + (ulong)(byte)ptVar22[2] * 2 + 0x888a) <<
                              ((byte)uVar15 & 0x3f);
            uVar15 = uVar15 + (byte)param_1[(ulong)(byte)ptVar22[2] + 0x8f4a];
            ptVar1 = ptVar22 + 3;
            uVar7 = uVar13;
          }
        }
      }
      else {
        uVar3 = *(ushort *)(ptVar22 + 1);
        iVar10 = (int)uVar14 +
                 (uint)(byte)param_1[(ulong)*(ushort *)(s_tdefl_len_sym + uVar8 * 2) + 0x8f4a];
        iVar11 = iVar10 + (uint)(byte)s_tdefl_len_extra[uVar8];
        uVar15 = (uint)uVar3;
        if (uVar15 < 0x200) {
          bVar9 = s_tdefl_small_dist_sym[uVar15];
          bVar17 = s_tdefl_small_dist_extra[uVar15];
        }
        else {
          bVar17 = (byte)(uVar3 >> 8);
          bVar9 = s_tdefl_large_dist_sym[bVar17];
          bVar17 = s_tdefl_large_dist_extra[bVar17];
        }
        iVar12 = iVar11 + (uint)(byte)param_1[(ulong)bVar9 + 0x906a];
        uVar16 = (ulong)((uint)uVar3 & *(uint *)(mz_bitmasks + (ulong)(uint)bVar17 * 4)) <<
                 ((byte)iVar12 & 0x3f) |
                 (ulong)*(ushort *)(param_1 + (ulong)bVar9 * 2 + 0x8aca) << ((byte)iVar11 & 0x3f) |
                 (ulong)((uint)(byte)*ptVar22 &
                        *(uint *)(mz_bitmasks + (ulong)(byte)s_tdefl_len_extra[uVar8] * 4)) <<
                 ((byte)iVar10 & 0x3f) |
                 (ulong)*(ushort *)
                         (param_1 + (ulong)*(ushort *)(s_tdefl_len_sym + uVar8 * 2) * 2 + 0x888a) <<
                 ((byte)uVar14 & 0x3f) | uVar16;
        uVar15 = iVar12 + (uint)bVar17;
        ptVar1 = ptVar22 + 3;
      }
      ptVar22 = ptVar1;
      if (puVar19 <= puVar18) {
        return false;
      }
      *puVar18 = uVar16;
      uVar7 = uVar7 >> 1;
      puVar18 = (ulong *)((long)puVar18 + (ulong)(uVar15 >> 3));
      uVar8 = (ulong)(uVar15 & 7);
      uVar16 = uVar16 >> ((byte)uVar15 & 0x38);
      uVar14 = (ulong)(uVar15 & 7);
    } while (ptVar22 < ptVar4);
  }
  *(ulong **)(param_1 + 0x40) = puVar18;
  uVar15 = 0;
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  uVar20 = (uint)uVar8;
  while (bVar9 = (byte)uVar15, uVar20 != 0) {
    uVar14 = 0x10;
    if ((uint)uVar8 < 0x11) {
      uVar14 = uVar8;
    }
    uVar20 = *(uint *)(mz_bitmasks + uVar14 * 4);
    uVar15 = uVar15 + (int)uVar14;
    *(uint *)(param_1 + 0x5c) = uVar15;
    uVar7 = uVar7 | (uVar20 & (uint)uVar16) << (bVar9 & 0x1f);
    *(uint *)(param_1 + 0x60) = uVar7;
    while (7 < uVar15) {
      if (puVar18 < puVar19) {
        *(long *)(param_1 + 0x40) = (long)puVar18 + 1;
        *(char *)puVar18 = (char)uVar7;
        uVar7 = *(uint *)(param_1 + 0x60);
        puVar18 = *(ulong **)(param_1 + 0x40);
        puVar19 = *(ulong **)(param_1 + 0x48);
      }
      uVar7 = uVar7 >> 8;
      *(uint *)(param_1 + 0x60) = uVar7;
      uVar15 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar15;
    }
    uVar16 = uVar16 >> ((byte)uVar14 & 0x3f);
    uVar20 = (uint)uVar8 - (int)uVar14;
    uVar8 = (ulong)uVar20;
  }
  uVar15 = (byte)param_1[0x904a] + uVar15;
  uVar7 = (uint)*(ushort *)(param_1 + 0x8a8a) << (bVar9 & 0x1f) | uVar7;
  *(uint *)(param_1 + 0x5c) = uVar15;
  *(uint *)(param_1 + 0x60) = uVar7;
  while (7 < uVar15) {
    if (puVar18 < puVar19) {
      *(long *)(param_1 + 0x40) = (long)puVar18 + 1;
      *(char *)puVar18 = (char)uVar7;
      uVar7 = *(uint *)(param_1 + 0x60);
      puVar18 = *(ulong **)(param_1 + 0x40);
      puVar19 = *(ulong **)(param_1 + 0x48);
    }
    uVar7 = uVar7 >> 8;
    *(uint *)(param_1 + 0x60) = uVar7;
    uVar15 = *(int *)(param_1 + 0x5c) - 8;
    *(uint *)(param_1 + 0x5c) = uVar15;
  }
  return puVar18 < puVar19;
}



/* buminiz::tdefl_flush_block(buminiz::tdefl_compressor*, int) */

int buminiz::tdefl_flush_block(tdefl_compressor *param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  tdefl_compressor *__src;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  bool bVar14;
  byte bVar15;
  
  bVar15 = 0;
  bVar14 = false;
  if (((byte)param_1[0x12] & 8) != 0) {
    bVar14 = (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x58)) <=
             *(uint *)(param_1 + 0x2c);
  }
  if ((*(long *)param_1 == 0) &&
     (0x14ccb < (ulong)(**(long **)(param_1 + 0xa0) - *(long *)(param_1 + 0xc0)))) {
    __src = (tdefl_compressor *)(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 0x90));
  }
  else {
    __src = param_1 + 0x392aa;
  }
  *(tdefl_compressor **)(param_1 + 0x40) = __src;
  *(tdefl_compressor **)(param_1 + 0x48) = __src + 0x14cbc;
  *(undefined8 *)(param_1 + 0x70) = 0;
  **(byte **)(param_1 + 0x38) =
       (byte)((int)(uint)**(byte **)(param_1 + 0x38) >>
             ((byte)*(undefined4 *)(param_1 + 0x50) & 0x1f));
  *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (ulong)(*(int *)(param_1 + 0x50) == 8);
  uVar12 = *(uint *)(param_1 + 0x60);
  uVar8 = *(uint *)(param_1 + 0x5c);
  if ((((byte)param_1[0x11] & 0x10) == 0) || (*(int *)(param_1 + 0x7c) != 0)) {
    puVar13 = *(undefined1 **)(param_1 + 0x40);
  }
  else {
    uVar3 = uVar8 + 8;
    puVar13 = *(undefined1 **)(param_1 + 0x40);
    *(uint *)(param_1 + 0x5c) = uVar3;
    uVar12 = uVar12 | 0x78 << ((byte)uVar8 & 0x1f);
    puVar7 = *(undefined1 **)(param_1 + 0x48);
    *(uint *)(param_1 + 0x60) = uVar12;
    if (uVar3 < 8) {
      iVar4 = uVar8 + 0x10;
    }
    else {
      do {
        if (puVar13 < puVar7) {
          *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
          *puVar13 = (char)uVar12;
          uVar12 = *(uint *)(param_1 + 0x60);
          puVar13 = *(undefined1 **)(param_1 + 0x40);
          puVar7 = *(undefined1 **)(param_1 + 0x48);
        }
        iVar4 = *(int *)(param_1 + 0x5c);
        uVar12 = uVar12 >> 8;
        *(uint *)(param_1 + 0x60) = uVar12;
        uVar3 = iVar4 - 8;
        *(uint *)(param_1 + 0x5c) = uVar3;
      } while (7 < uVar3);
    }
    uVar12 = uVar12 | 1 << (uVar3 & 0x1f);
    *(int *)(param_1 + 0x5c) = iVar4;
    *(uint *)(param_1 + 0x60) = uVar12;
    while( true ) {
      if (puVar13 < puVar7) {
        *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
        *puVar13 = (char)uVar12;
        uVar12 = *(uint *)(param_1 + 0x60);
        puVar13 = *(undefined1 **)(param_1 + 0x40);
      }
      uVar12 = uVar12 >> 8;
      *(uint *)(param_1 + 0x60) = uVar12;
      uVar8 = *(int *)(param_1 + 0x5c) - 8;
      *(uint *)(param_1 + 0x5c) = uVar8;
      if (uVar8 < 8) break;
      puVar7 = *(undefined1 **)(param_1 + 0x48);
    }
  }
  uVar3 = uVar8 + 1;
  *(uint *)(param_1 + 0x5c) = uVar3;
  uVar12 = (uint)(param_2 == 4) << ((byte)uVar8 & 0x1f) | uVar12;
  *(uint *)(param_1 + 0x60) = uVar12;
  while (7 < uVar3) {
    if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
      *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
      *puVar13 = (char)uVar12;
      uVar12 = *(uint *)(param_1 + 0x60);
      puVar13 = *(undefined1 **)(param_1 + 0x40);
    }
    uVar12 = uVar12 >> 8;
    *(uint *)(param_1 + 0x60) = uVar12;
    uVar3 = *(int *)(param_1 + 0x5c) - 8;
    *(uint *)(param_1 + 0x5c) = uVar3;
  }
  if (bVar14) {
    if ((uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x58)) <= *(uint *)(param_1 + 0x2c)) {
LAB_001016b7:
      *(undefined1 **)(param_1 + 0x40) = puVar13;
      *(uint *)(param_1 + 0x60) = uVar12;
      *(uint *)(param_1 + 0x5c) = uVar3 + 2;
      if (uVar3 + 2 < 8) {
LAB_00101b4c:
        *(undefined4 *)(param_1 + 0x5c) = 8;
        while( true ) {
          if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
            *puVar13 = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x60);
          }
          uVar12 = uVar12 >> 8;
          *(uint *)(param_1 + 0x60) = uVar12;
          uVar8 = *(int *)(param_1 + 0x5c) - 8;
          *(uint *)(param_1 + 0x5c) = uVar8;
          if (uVar8 < 8) break;
          puVar13 = *(undefined1 **)(param_1 + 0x40);
        }
      }
      else {
        while( true ) {
          if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
            *puVar13 = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x60);
          }
          uVar12 = uVar12 >> 8;
          *(uint *)(param_1 + 0x60) = uVar12;
          uVar8 = *(int *)(param_1 + 0x5c) - 8;
          *(uint *)(param_1 + 0x5c) = uVar8;
          if (uVar8 < 8) break;
          puVar13 = *(undefined1 **)(param_1 + 0x40);
        }
        if (uVar8 != 0) {
          puVar13 = *(undefined1 **)(param_1 + 0x40);
          goto LAB_00101b4c;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x54);
      iVar4 = 2;
      while( true ) {
        uVar12 = (uVar3 & 0xffff) << ((byte)uVar8 & 0x1f) | uVar12;
        *(uint *)(param_1 + 0x5c) = uVar8 + 0x10;
        *(uint *)(param_1 + 0x60) = uVar12;
        uVar5 = uVar3;
        if (7 < uVar8 + 0x10) {
          do {
            puVar13 = *(undefined1 **)(param_1 + 0x40);
            if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
              *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
              *puVar13 = (char)uVar12;
              uVar12 = *(uint *)(param_1 + 0x60);
            }
            iVar10 = *(int *)(param_1 + 0x5c);
            uVar12 = uVar12 >> 8;
            *(uint *)(param_1 + 0x60) = uVar12;
            *(uint *)(param_1 + 0x5c) = iVar10 - 8U;
          } while (7 < iVar10 - 8U);
          uVar5 = *(uint *)(param_1 + 0x54);
        }
        uVar3 = uVar5 ^ 0xffff;
        *(uint *)(param_1 + 0x54) = uVar3;
        if (iVar4 == 1) break;
        uVar12 = *(uint *)(param_1 + 0x60);
        uVar8 = *(uint *)(param_1 + 0x5c);
        iVar4 = 1;
      }
      uVar8 = 0;
      if (uVar5 != 0xffff) {
        do {
          uVar3 = *(int *)(param_1 + 0x5c) + 8;
          uVar12 = (uint)(byte)param_1[(ulong)(*(int *)(param_1 + 0x58) + uVar8 & 0x7fff) + 200] <<
                   ((byte)*(int *)(param_1 + 0x5c) & 0x1f) | *(uint *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = uVar12;
          *(uint *)(param_1 + 0x5c) = uVar3;
          while (7 < uVar3) {
            puVar13 = *(undefined1 **)(param_1 + 0x40);
            if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
              *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
              *puVar13 = (char)uVar12;
              uVar12 = *(uint *)(param_1 + 0x60);
            }
            uVar12 = uVar12 >> 8;
            *(uint *)(param_1 + 0x60) = uVar12;
            uVar3 = *(int *)(param_1 + 0x5c) - 8;
            *(uint *)(param_1 + 0x5c) = uVar3;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x54));
      }
      goto joined_r0x0010188b;
    }
  }
  else {
    if (((byte)param_1[0x12] & 4) == 0) {
      iVar4 = tdefl_compress_block(param_1,(uint)(*(uint *)(param_1 + 0x54) < 0x30));
      uVar8 = *(uint *)(param_1 + 0x54);
    }
    else {
      iVar4 = tdefl_compress_block(param_1,1);
      uVar8 = *(uint *)(param_1 + 0x54);
    }
    if (((uVar8 != 0) && ((long)(ulong)uVar8 <= (*(long *)(param_1 + 0x40) - (long)puVar13) + 1)) &&
       ((uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x58)) <= *(uint *)(param_1 + 0x2c)))
    goto LAB_001016b7;
    if (iVar4 != 0) goto joined_r0x0010188b;
  }
  *(undefined1 **)(param_1 + 0x40) = puVar13;
  *(uint *)(param_1 + 0x60) = uVar12;
  *(uint *)(param_1 + 0x5c) = uVar3;
  tdefl_compress_block(param_1,1);
joined_r0x0010188b:
  if (param_2 != 0) {
    if (param_2 == 4) {
      if (*(int *)(param_1 + 0x5c) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 8;
        uVar8 = *(uint *)(param_1 + 0x60);
        do {
          puVar13 = *(undefined1 **)(param_1 + 0x40);
          if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
            *puVar13 = (char)uVar8;
            uVar8 = *(uint *)(param_1 + 0x60);
          }
          iVar4 = *(int *)(param_1 + 0x5c);
          uVar8 = uVar8 >> 8;
          *(uint *)(param_1 + 0x60) = uVar8;
          *(uint *)(param_1 + 0x5c) = iVar4 - 8U;
        } while (7 < iVar4 - 8U);
      }
      if (((byte)param_1[0x11] & 0x10) != 0) {
        uVar8 = *(uint *)(param_1 + 0x20);
        iVar4 = 4;
        do {
          uVar12 = *(int *)(param_1 + 0x5c) + 8;
          uVar3 = (uVar8 >> 0x18) << ((byte)*(int *)(param_1 + 0x5c) & 0x1f) |
                  *(uint *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = uVar3;
          *(uint *)(param_1 + 0x5c) = uVar12;
          while (7 < uVar12) {
            puVar13 = *(undefined1 **)(param_1 + 0x40);
            if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
              *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
              *puVar13 = (char)uVar3;
              uVar3 = *(uint *)(param_1 + 0x60);
            }
            uVar3 = uVar3 >> 8;
            *(uint *)(param_1 + 0x60) = uVar3;
            uVar12 = *(int *)(param_1 + 0x5c) - 8;
            *(uint *)(param_1 + 0x5c) = uVar12;
          }
          uVar8 = uVar8 << 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      uVar8 = *(int *)(param_1 + 0x5c) + 3;
      uVar12 = *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x5c) = uVar8;
      while (7 < uVar8) {
        puVar13 = *(undefined1 **)(param_1 + 0x40);
        if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
          *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
          *puVar13 = (char)uVar12;
          uVar12 = *(uint *)(param_1 + 0x60);
        }
        uVar12 = uVar12 >> 8;
        *(uint *)(param_1 + 0x60) = uVar12;
        uVar8 = *(int *)(param_1 + 0x5c) - 8;
        *(uint *)(param_1 + 0x5c) = uVar8;
      }
      if (uVar8 == 0) {
        uVar8 = *(uint *)(param_1 + 0x5c);
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 8;
        do {
          puVar13 = *(undefined1 **)(param_1 + 0x40);
          if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
            *puVar13 = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x60);
          }
          uVar12 = uVar12 >> 8;
          *(uint *)(param_1 + 0x60) = uVar12;
          uVar8 = *(int *)(param_1 + 0x5c) - 8;
          *(uint *)(param_1 + 0x5c) = uVar8;
        } while (7 < uVar8);
      }
      iVar4 = 2;
      uVar3 = 0;
      while( true ) {
        uVar5 = uVar8 + 0x10;
        uVar12 = uVar3 << ((byte)uVar8 & 0x1f) | uVar12;
        *(uint *)(param_1 + 0x5c) = uVar5;
        *(uint *)(param_1 + 0x60) = uVar12;
        while (7 < uVar5) {
          puVar13 = *(undefined1 **)(param_1 + 0x40);
          if (puVar13 < *(undefined1 **)(param_1 + 0x48)) {
            *(undefined1 **)(param_1 + 0x40) = puVar13 + 1;
            *puVar13 = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x60);
          }
          uVar12 = uVar12 >> 8;
          *(uint *)(param_1 + 0x60) = uVar12;
          uVar5 = *(int *)(param_1 + 0x5c) - 8;
          *(uint *)(param_1 + 0x5c) = uVar5;
        }
        if (iVar4 == 1) break;
        uVar12 = *(uint *)(param_1 + 0x60);
        uVar8 = *(uint *)(param_1 + 0x5c);
        uVar3 = uVar3 ^ 0xffff;
        iVar4 = 1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x81ca) = 0;
  *(undefined8 *)(param_1 + 0x8402) = 0;
  puVar9 = (undefined8 *)((ulong)(param_1 + 0x81d2) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 0x81d2) & 0xfffffffffffffff8)) +
                       0x840aU >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar15 * -2 + 1;
  }
  *(undefined1 (*) [16])(param_1 + 0x840a) = (undefined1  [16])0x0;
  *(tdefl_compressor **)(param_1 + 0x30) = param_1 + 0x92ab;
  lVar1 = *(long *)(param_1 + 0x40);
  *(tdefl_compressor **)(param_1 + 0x38) = param_1 + 0x92aa;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
  *(undefined8 *)(param_1 + 0x50) = 8;
  iVar4 = (int)(lVar1 - (long)__src);
  *(undefined1 (*) [16])(param_1 + 0x841a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x842a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x843a) = (undefined1  [16])0x0;
  if (iVar4 != 0) {
    pcVar2 = *(code **)param_1;
    if (pcVar2 == (code *)0x0) {
      lVar1 = *(long *)(param_1 + 0xc0);
      uVar6 = (ulong)iVar4;
      if (param_1 + 0x392aa == __src) {
        uVar11 = **(long **)(param_1 + 0xa0) - lVar1;
        if (uVar6 < (ulong)(**(long **)(param_1 + 0xa0) - lVar1)) {
          uVar11 = uVar6;
        }
        iVar10 = (int)uVar11;
        memcpy((void *)(lVar1 + *(long *)(param_1 + 0x90)),__src,(long)iVar10);
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (long)iVar10;
        iVar4 = iVar4 - iVar10;
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x70) = iVar10;
          *(int *)(param_1 + 0x74) = iVar4;
          return iVar4;
        }
      }
      else {
        *(ulong *)(param_1 + 0xc0) = lVar1 + uVar6;
      }
    }
    else {
      **(long **)(param_1 + 0x98) = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0x88);
      iVar4 = (*pcVar2)(param_1 + 0x392aa,lVar1 - (long)__src & 0xffffffff,
                        *(undefined8 *)(param_1 + 8));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
        return -1;
      }
    }
  }
  return *(int *)(param_1 + 0x74);
}



/* std::_Function_handler<void (), basisu::basis_parallel_compress(unsigned int,
   basisu::vector<basisu::basis_compressor_params> const&,
   basisu::vector<basisu::parallel_results>&)::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x28);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x28);
    }
    return 0;
  }
  *param_1 = (long)&basisu::
                    basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)
                    ::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x38);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x38);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x58);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      puVar3[10] = puVar1[10];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x58);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}::typeinfo;
  return 0;
}



/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00101f04;
    }
    if (__n == 0) goto LAB_00101f04;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00101f04:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::image::renormalize_normal_map() [clone .isra.0] */

void __thiscall basisu::image::renormalize_normal_map(image *this)

{
  byte *pbVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong local_20;
  float local_18;
  float local_14;
  long local_10;
  
  fVar6 = _UNK_00122554;
  fVar4 = _LC11;
  uVar2 = _LC20;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 4) != 0) {
    uVar16 = 0;
    do {
      fVar8 = _UNK_0012255c;
      fVar7 = _LC7;
      fVar5 = _LC11;
      fVar3 = _LC8;
      uVar15 = 0;
      if (*(int *)this != 0) {
        do {
          fVar11 = _LC18;
          fVar10 = _LC17;
          fVar9 = _LC16;
          pbVar1 = (byte *)(*(long *)(this + 0x10) +
                           (ulong)(*(int *)(this + 8) * uVar16 + uVar15) * 4);
          if (((*pbVar1 != 0x80) || (pbVar1[1] != 0x80)) || (pbVar1[2] != 0x80)) {
            local_20 = CONCAT44((float)pbVar1[1] * fVar6 + fVar8,(float)*pbVar1 * fVar4 + fVar7);
            local_18 = (float)pbVar1[2] * fVar5 - fVar3;
            pfVar12 = (float *)&local_20;
            do {
              fVar18 = *pfVar12;
              fVar17 = _LC7;
              if ((_LC7 <= fVar18) && (fVar17 = fVar3, fVar18 <= fVar3)) {
                fVar17 = fVar18;
              }
              *pfVar12 = fVar17;
              pfVar12 = pfVar12 + 1;
            } while (pfVar12 != &local_14);
            auVar20._8_8_ = 0;
            auVar20._0_8_ = local_20;
            fVar18 = (float)(local_20 >> 0x20);
            fVar18 = SQRT(fVar18 * fVar18 + (float)local_20 * (float)local_20 + local_18 * local_18)
            ;
            if (_LC12 <= fVar18) {
              if (_LC12 < (float)((uint)(fVar18 - fVar3) & uVar2)) {
                lVar13 = 0;
                auVar19._4_4_ = fVar18;
                auVar19._0_4_ = fVar18;
                auVar19._12_4_ = _UNK_00122424;
                auVar19._8_4_ = _LC8;
                auVar20 = divps(auVar20,auVar19);
                local_18 = local_18 / fVar18;
                local_20 = auVar20._0_8_;
                do {
                  fVar18 = (*(float *)((long)&local_20 + lVar13 * 4) + fVar3) * fVar9 * fVar10 +
                           fVar10;
                  if ((float)((uint)fVar18 & uVar2) < fVar11) {
                    fVar18 = (float)((uint)((float)(int)fVar18 -
                                           (float)(-(uint)(fVar18 < (float)(int)fVar18) &
                                                  (uint)fVar3)) | ~uVar2 & (uint)fVar18);
                  }
                  bVar14 = 0;
                  if ((0.0 <= fVar18) && (bVar14 = 0xff, fVar18 <= _LC16)) {
                    bVar14 = (byte)(int)fVar18;
                  }
                  pbVar1[lVar13] = bVar14;
                  lVar13 = lVar13 + 1;
                } while (lVar13 != 3);
                if ((pbVar1[1] == 0x80) && (*pbVar1 == 0x80)) {
                  pbVar1[2] = (char)pbVar1[2] >> 7;
                }
              }
            }
            else {
              pbVar1[2] = 0x80;
              pbVar1[0] = 0x80;
              pbVar1[1] = 0x80;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)this);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(this + 4));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00102254;
    }
    if (__n == 0) goto LAB_00102254;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00102254:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102440) */
/* WARNING: Removing unreachable block (ram,0x00102445) */
/* WARNING: Removing unreachable block (ram,0x0010244b) */
/* basisu::imagef::crop(unsigned int, unsigned int, unsigned int, basisu::vec<4u, float> const&)
   [clone .isra.0] */

void __thiscall
basisu::imagef::crop(imagef *this,uint param_1,uint param_2,uint param_3,vec *param_4)

{
  void *__ptr;
  undefined8 uVar1;
  vec *pvVar2;
  vec *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)this;
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((uVar7 != param_1) || (*(uint *)(this + 4) != param_2)) || (*(uint *)(this + 8) != param_3))
  {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if (*(int *)(this + 0x18) != 0) {
        *(undefined4 *)(this + 0x18) = 0;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      lVar8 = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      iVar5 = param_2 * param_3;
      if (iVar5 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar5,0),(uint)(iVar5 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,true);
        uVar7 = *(uint *)this;
        lVar8 = *(long *)(this + 0x10);
        *(int *)(this + 0x18) = iVar5;
      }
      iVar5 = 0;
      uVar6 = 0;
      do {
        uVar4 = 0;
LAB_001023a4:
        do {
          pvVar2 = (vec *)((ulong)(uVar4 + iVar5) * 0x10 + lVar8);
          if ((uVar4 < uVar7) && (uVar6 < *(uint *)(this + 4))) {
            pvVar3 = (vec *)((ulong)(*(int *)(this + 8) * uVar6 + uVar4) * 0x10 + (long)__ptr);
            if (pvVar3 != pvVar2) {
              uVar1 = *(undefined8 *)(pvVar3 + 8);
              *(undefined8 *)pvVar2 = *(undefined8 *)pvVar3;
              *(undefined8 *)(pvVar2 + 8) = uVar1;
            }
          }
          else if (param_4 != pvVar2) {
            uVar1 = *(undefined8 *)(param_4 + 8);
            uVar4 = uVar4 + 1;
            *(undefined8 *)pvVar2 = *(undefined8 *)param_4;
            *(undefined8 *)(pvVar2 + 8) = uVar1;
            if (param_1 <= uVar4) break;
            goto LAB_001023a4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + param_3;
      } while (uVar6 < param_2);
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (),
   basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::_Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uchar *puVar7;
  uchar *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uchar *puVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  uchar local_88 [64];
  uchar local_48 [8];
  long local_40;
  
  plVar1 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = *plVar1;
  uVar18 = *(uint *)(lVar16 + 0x164);
  if (*(char *)(lVar16 + 0x168) != '\0') {
    uVar18 = uVar18 | -(uint)*(byte *)(lVar16 + 0x1e4) & 0x200;
  }
  uVar21 = *(uint *)(plVar1 + 1);
  if (uVar21 < *(uint *)((long)plVar1 + 0xc)) {
    do {
      puVar2 = (uint *)plVar1[4];
      uVar20 = uVar21 / *(uint *)(plVar1 + 2);
      uVar3 = uVar21 % *(uint *)(plVar1 + 2);
      uVar13 = *puVar2;
      uVar11 = puVar2[1];
      lVar16 = *(long *)(puVar2 + 4);
      iVar17 = uVar20 * 4;
      iVar4 = uVar3 * 4;
      puVar15 = local_88;
      if ((uVar13 < iVar4 + 4U) || (uVar11 < iVar17 + 4U)) {
        while( true ) {
          puVar7 = puVar15;
          iVar19 = iVar4;
          while( true ) {
            iVar12 = uVar11 - 1;
            if (iVar17 < (int)(uVar11 - 1)) {
              iVar12 = iVar17;
            }
            if (iVar17 < 0) {
              iVar12 = 0;
            }
            iVar14 = uVar13 - 1;
            if (iVar19 < (int)(uVar13 - 1)) {
              iVar14 = iVar19;
            }
            if (iVar19 < 0) {
              iVar14 = 0;
            }
            puVar8 = puVar7 + 4;
            iVar19 = iVar19 + 1;
            *(undefined4 *)puVar7 =
                 *(undefined4 *)(lVar16 + (ulong)(iVar12 * puVar2[2] + iVar14) * 4);
            if (puVar8 == puVar15 + 0x10) break;
            uVar11 = puVar2[1];
            uVar13 = *puVar2;
            lVar16 = *(long *)(puVar2 + 4);
            puVar7 = puVar8;
          }
          iVar17 = iVar17 + 1;
          if (puVar8 == local_48) break;
          uVar11 = puVar2[1];
          uVar13 = *puVar2;
          lVar16 = *(long *)(puVar2 + 4);
          puVar15 = puVar8;
        }
      }
      else {
        uVar10 = 0x40;
        lVar16 = lVar16 + (ulong)(iVar4 + iVar17 * puVar2[2]) * 4;
        do {
          lVar5 = __memcpy_chk(puVar15,lVar16,0x10,uVar10);
          lVar16 = lVar16 + (ulong)puVar2[2] * 4;
          uVar6 = 0x40;
          if (0x3f < uVar10) {
            uVar6 = uVar10;
          }
          uVar9 = (uVar6 - uVar10) + 0x10;
          if (uVar9 < uVar6) {
            uVar9 = uVar6;
          }
          puVar15 = (uchar *)(lVar5 + 0x10);
          uVar10 = (uVar10 - uVar6) + -0x10 + uVar9;
        } while (puVar15 != local_48);
      }
      lVar16 = plVar1[5];
      basisu::encode_uastc
                (local_88,(uastc_block *)
                          (*(long *)(lVar16 + 0x20) +
                          (ulong)((*(int *)(lVar16 + 0xc) * uVar20 + uVar3) *
                                 *(int *)(lVar16 + 0x1c)) * 8),uVar18);
      LOCK();
      *(int *)plVar1[6] = *(int *)plVar1[6] + 1;
      UNLOCK();
      if (((~*(uint *)plVar1[6] & 0x3fff) == 0) && (*(char *)(*plVar1 + 0x8a) != '\0')) {
        basisu::debug_printf
                  ("basis_compressor::encode_slices_to_uastc: %3.1f%% done\n",
                   (double)(((float)*(uint *)plVar1[6] * __LC21) / (float)*(uint *)(plVar1 + 3)));
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)((long)plVar1 + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::string std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&, char const*)
   [clone .isra.0] */

string * std::operator+(string *param_1,char *param_2)

{
  size_t sVar1;
  char *in_RCX;
  ulong in_RDX;
  
  sVar1 = strlen(in_RCX);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (string)0x0;
  *(string **)param_1 = param_1 + 0x10;
  std::__cxx11::string::reserve((ulong)param_1);
  if (in_RDX <= 0x3fffffffffffffffU - *(long *)(param_1 + 8)) {
    std::__cxx11::string::_M_append((char *)param_1,(ulong)param_2);
    if (sVar1 <= 0x3fffffffffffffffU - *(long *)(param_1 + 8)) {
      std::__cxx11::string::_M_append((char *)param_1,(ulong)in_RCX);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* std::_Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,
   std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc const,
   basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,
   std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const, basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats> >,
   std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,
   std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const, basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats> >
   >::_M_erase(std::_Rb_tree_node<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const, basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats> >*) [clone
   .isra.0] */

void std::
     _Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x38);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x38);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x38);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x38);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x38);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x38);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x38);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x38);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x38);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* void basisu::append_vector<basisu::vector<unsigned char>, unsigned char>(basisu::vector<unsigned
   char>&, unsigned char const*, unsigned long) [clone .part.0] */

void basisu::append_vector<basisu::vector<unsigned_char>,unsigned_char>
               (vector *param_1,uchar *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = (ulong)uVar2;
  uVar1 = uVar3 + param_3;
  if (uVar1 >> 0x20 == 0) {
    uVar5 = (uint)uVar1;
    if (uVar2 != uVar5) {
      if (uVar2 <= uVar5) {
        uVar4 = uVar3;
        if (*(uint *)(param_1 + 0xc) < uVar5) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,SUB81(uVar1,0),(uint)(uVar2 + 1 == uVar5),
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar2 = *(uint *)(param_1 + 8);
          uVar4 = (ulong)uVar2;
        }
        memset((void *)(uVar4 + *(long *)param_1),0,(ulong)(uVar5 - uVar2));
      }
      *(uint *)(param_1 + 8) = uVar5;
    }
  }
  memcpy((void *)(*(long *)param_1 + uVar3),param_2,param_3);
  return;
}



/* std::_Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,
   std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc const,
   basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,
   std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const, basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats> >,
   std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,
   std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const, basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats> >
   >::_M_get_insert_unique_pos(basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc
   const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
::_M_get_insert_unique_pos
          (_Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
           *this,uastc_blk_desc *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var5 = (_Rb_tree_node_base *)(this + 8);
LAB_00102b04:
    if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var5) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var5;
      return auVar1 << 0x40;
    }
    p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
    p_Var3 = p_Var4 + 0x20;
  }
  else {
    do {
      p_Var5 = p_Var4;
      p_Var3 = p_Var5 + 0x20;
      if ((param_1 == (uastc_blk_desc *)p_Var3) ||
         ((*(uint *)(p_Var5 + 0x20) <= *(uint *)param_1 &&
          ((*(uint *)param_1 != *(uint *)(p_Var5 + 0x20) ||
           ((*(uint *)(p_Var5 + 0x24) <= *(uint *)(param_1 + 4) &&
            ((*(uint *)(param_1 + 4) != *(uint *)(p_Var5 + 0x24) ||
             ((*(uint *)(p_Var5 + 0x28) <= *(uint *)(param_1 + 8) &&
              ((*(uint *)(param_1 + 8) != *(uint *)(p_Var5 + 0x28) ||
               ((*(uint *)(p_Var5 + 0x2c) <= *(uint *)(param_1 + 0xc) &&
                ((*(uint *)(param_1 + 0xc) != *(uint *)(p_Var5 + 0x2c) ||
                 (*(uint *)(p_Var5 + 0x30) <= *(uint *)(param_1 + 0x10))))))))))))))))))) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x18);
        bVar2 = false;
      }
      else {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
        bVar2 = true;
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    p_Var4 = p_Var5;
    if (bVar2) goto LAB_00102b04;
  }
  if (param_1 == (uastc_blk_desc *)p_Var3) {
LAB_00102b25:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = p_Var4;
    return auVar6;
  }
  if (*(uint *)param_1 <= *(uint *)(p_Var4 + 0x20)) {
    if (*(uint *)(p_Var4 + 0x20) != *(uint *)param_1) goto LAB_00102b25;
    if (*(uint *)(param_1 + 4) <= *(uint *)(p_Var4 + 0x24)) {
      if (*(uint *)(p_Var4 + 0x24) != *(uint *)(param_1 + 4)) goto LAB_00102b25;
      if (*(uint *)(param_1 + 8) <= *(uint *)(p_Var4 + 0x28)) {
        if (*(uint *)(p_Var4 + 0x28) != *(uint *)(param_1 + 8)) goto LAB_00102b25;
        if (*(uint *)(param_1 + 0xc) <= *(uint *)(p_Var4 + 0x2c)) {
          if (*(uint *)(p_Var4 + 0x2c) != *(uint *)(param_1 + 0xc)) goto LAB_00102b25;
          p_Var3 = (_Rb_tree_node_base *)0x0;
          if (*(uint *)(p_Var4 + 0x30) < *(uint *)(param_1 + 0x10)) {
            p_Var4 = p_Var3;
            p_Var3 = p_Var5;
          }
          goto LAB_00102b3a;
        }
      }
    }
  }
  p_Var4 = (_Rb_tree_node_base *)0x0;
  p_Var3 = p_Var5;
LAB_00102b3a:
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* basisu::vector<unsigned char>::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<unsigned char> const&)
   [clone .isra.0] */

void __thiscall
basisu::vector<unsigned_char>::operator=(vector<unsigned_char> *this,vector *param_1)

{
  uint uVar1;
  void *__ptr;
  
  if (this != (vector<unsigned_char> *)param_1) {
    uVar1 = *(uint *)(param_1 + 8);
    __ptr = *(void **)this;
    if (*(uint *)(this + 0xc) < uVar1) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar1 = *(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar1 = *(uint *)(param_1 + 8);
      __ptr = *(void **)this;
    }
    else if (*(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = 0;
      uVar1 = *(uint *)(param_1 + 8);
    }
    if ((__ptr != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) {
      memcpy(__ptr,*(void **)param_1,(ulong)uVar1);
      uVar1 = *(uint *)(param_1 + 8);
    }
    *(uint *)(this + 8) = uVar1;
    return;
  }
  return;
}



/* basisu::vector<std::__cxx11::string
   >::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<std::__cxx11::string > const&) [clone .isra.0] */

void __thiscall
basisu::vector<std::__cxx11::string>::operator=(vector<std::__cxx11::string> *this,vector *param_1)

{
  ulong __n;
  undefined1 *__src;
  ulong *__dest;
  ulong *__ptr;
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (vector<std::__cxx11::string> *)param_1) {
    __ptr = *(ulong **)this;
    uVar3 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(this + 0xc) < *(uint *)(param_1 + 8)) {
      if (__ptr != (ulong *)0x0) {
        puVar1 = __ptr + (ulong)*(uint *)(this + 8) * 4;
        if (puVar1 != __ptr) {
          do {
            if ((ulong *)*__ptr != __ptr + 2) {
              operator_delete((ulong *)*__ptr,__ptr[2] + 1);
            }
            __ptr = __ptr + 4;
          } while (puVar1 != __ptr);
          __ptr = *(ulong **)this;
        }
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB81(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      uVar3 = (ulong)*(uint *)(param_1 + 8);
      __ptr = *(ulong **)this;
    }
    else if (*(uint *)(this + 8) != 0) {
      puVar1 = __ptr + (ulong)*(uint *)(this + 8) * 4;
      do {
        if ((ulong *)*__ptr != __ptr + 2) {
          operator_delete((ulong *)*__ptr,__ptr[2] + 1);
        }
        __ptr = __ptr + 4;
      } while (puVar1 != __ptr);
      *(undefined4 *)(this + 8) = 0;
      __ptr = *(ulong **)this;
      uVar3 = (ulong)*(uint *)(param_1 + 8);
    }
    if ((int)uVar3 != 0) {
      puVar1 = __ptr;
      puVar4 = *(undefined8 **)param_1;
      do {
        while( true ) {
          __n = puVar4[1];
          puVar2 = puVar1 + 4;
          __dest = puVar1 + 2;
          *puVar1 = (ulong)__dest;
          __src = (undefined1 *)*puVar4;
          local_48 = __n;
          if (__n < 0x10) break;
          __dest = (ulong *)std::__cxx11::string::_M_create(puVar1,(ulong)&local_48);
          *puVar1 = (ulong)__dest;
          puVar1[2] = local_48;
LAB_00102d23:
          memcpy(__dest,__src,__n);
          puVar1[1] = local_48;
          *(undefined1 *)(*puVar1 + local_48) = 0;
          puVar1 = puVar2;
          puVar4 = puVar4 + 4;
          if (puVar2 == __ptr + uVar3 * 4) goto LAB_00102d44;
        }
        if (__n == 1) {
          *(undefined1 *)(puVar1 + 2) = *__src;
        }
        else if (__n != 0) goto LAB_00102d23;
        puVar1[1] = __n;
        *(undefined1 *)((long)__dest + __n) = 0;
        puVar1 = puVar2;
        puVar4 = puVar4 + 4;
      } while (puVar2 != __ptr + uVar3 * 4);
LAB_00102d44:
      uVar3 = (ulong)*(uint *)(param_1 + 8);
    }
    *(int *)(this + 8) = (int)uVar3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<basist::ktx2_transcoder::key_value*,
   __gnu_cxx::__ops::_Val_less_iter>(basist::ktx2_transcoder::key_value*,
   __gnu_cxx::__ops::_Val_less_iter) [clone .isra.0] */

void std::
     __unguarded_linear_insert<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Val_less_iter>
               (undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  char *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  local_40 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_48,SUB41(*(undefined4 *)(param_1 + 1),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_40 = CONCAT44(local_40._4_4_,*(uint *)(param_1 + 1));
  if ((local_48 != (char *)0x0) && ((void *)*param_1 != (void *)0x0)) {
    memcpy(local_48,(void *)*param_1,(ulong)*(uint *)(param_1 + 1));
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_38,SUB41(*(undefined4 *)(param_1 + 3),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_30 = CONCAT44(local_30._4_4_,*(uint *)(param_1 + 3));
  if ((local_38 != (void *)0x0) && ((void *)param_1[2] != (void *)0x0)) {
    memcpy(local_38,(void *)param_1[2],(ulong)*(uint *)(param_1 + 3));
  }
  while( true ) {
    iVar1 = strcmp(local_48,(char *)param_1[-4]);
    uVar4 = (uint)param_1;
    if (-1 < iVar1) break;
    uVar3 = *(uint *)(param_1 + -3);
    pvVar2 = (void *)*param_1;
    if (*(uint *)((long)param_1 + 0xc) < uVar3) {
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
        *param_1 = 0;
        uVar3 = *(uint *)(param_1 + -3);
        param_1[1] = 0;
      }
      basisu::elemental_vector::increase_capacity
                (uVar4,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar3 = *(uint *)(param_1 + -3);
      pvVar2 = (void *)*param_1;
    }
    else if (*(int *)(param_1 + 1) != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if ((pvVar2 != (void *)0x0) && ((void *)param_1[-4] != (void *)0x0)) {
      memcpy(pvVar2,(void *)param_1[-4],(ulong)uVar3);
      uVar3 = *(uint *)(param_1 + -3);
    }
    *(uint *)(param_1 + 1) = uVar3;
    pvVar2 = (void *)param_1[2];
    uVar3 = *(uint *)(param_1 + -1);
    if (*(uint *)((long)param_1 + 0x1c) < uVar3) {
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
        param_1[2] = 0;
        uVar3 = *(uint *)(param_1 + -1);
        param_1[3] = 0;
      }
      basisu::elemental_vector::increase_capacity
                (uVar4 + 0x10,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar3 = *(uint *)(param_1 + -1);
      pvVar2 = (void *)param_1[2];
    }
    else if (*(int *)(param_1 + 3) != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if ((pvVar2 != (void *)0x0) && ((void *)param_1[-2] != (void *)0x0)) {
      memcpy(pvVar2,(void *)param_1[-2],(ulong)uVar3);
      uVar3 = *(uint *)(param_1 + -1);
    }
    *(uint *)(param_1 + 3) = uVar3;
    param_1 = param_1 + -4;
  }
  pvVar2 = (void *)*param_1;
  if (*(uint *)((long)param_1 + 0xc) < (uint)local_40) {
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
      *param_1 = 0;
      param_1[1] = 0;
    }
    basisu::elemental_vector::increase_capacity
              (uVar4,SUB41((uint)local_40,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    pvVar2 = (void *)*param_1;
  }
  else if (*(int *)(param_1 + 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  uVar3 = (uint)local_40;
  if ((pvVar2 != (void *)0x0) && (local_48 != (char *)0x0)) {
    memcpy(pvVar2,local_48,(ulong)(uint)local_40);
    uVar3 = (uint)local_40;
  }
  *(uint *)(param_1 + 1) = uVar3;
  pvVar2 = (void *)param_1[2];
  if (*(uint *)((long)param_1 + 0x1c) < (uint)local_30) {
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    basisu::elemental_vector::increase_capacity
              (uVar4 + 0x10,SUB41((uint)local_30,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false
              );
    pvVar2 = (void *)param_1[2];
  }
  else if (*(int *)(param_1 + 3) != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  uVar4 = (uint)local_30;
  if (pvVar2 != (void *)0x0) {
    if (local_38 == (void *)0x0) {
      *(uint *)(param_1 + 3) = (uint)local_30;
      goto LAB_0010306e;
    }
    memcpy(pvVar2,local_38,(ulong)(uint)local_30);
    uVar4 = (uint)local_30;
  }
  *(uint *)(param_1 + 3) = uVar4;
  if (local_38 != (void *)0x0) {
    free(local_38);
  }
LAB_0010306e:
  if (local_48 != (char *)0x0) {
    free(local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<basist::ktx2_transcoder::key_value*,
   __gnu_cxx::__ops::_Iter_less_iter>(basist::ktx2_transcoder::key_value*,
   basist::ktx2_transcoder::key_value*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  undefined8 *puVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != param_2) && (param_2 != param_1 + 4)) {
    puVar5 = param_1 + 4;
LAB_001031a1:
    do {
      puVar6 = puVar5 + 4;
      iVar1 = strcmp((char *)*puVar5,(char *)*param_1);
      if (iVar1 < 0) {
        local_68 = (void *)0x0;
        local_60 = 0;
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_68,SUB41(*(undefined4 *)(puVar5 + 1),0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        local_60 = CONCAT44(local_60._4_4_,*(uint *)(puVar5 + 1));
        if ((local_68 != (void *)0x0) && ((void *)*puVar5 != (void *)0x0)) {
          memcpy(local_68,(void *)*puVar5,(ulong)*(uint *)(puVar5 + 1));
        }
        local_58 = (void *)0x0;
        local_50 = 0;
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_58,SUB41(*(undefined4 *)(puVar5 + 3),0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        local_50 = CONCAT44(local_50._4_4_,*(uint *)(puVar5 + 3));
        if ((local_58 != (void *)0x0) && ((void *)puVar5[2] != (void *)0x0)) {
          memcpy(local_58,(void *)puVar5[2],(ulong)*(uint *)(puVar5 + 3));
        }
        if (0 < (long)puVar5 - (long)param_1) {
          puVar3 = puVar6;
          do {
            puVar4 = puVar3 + -4;
            if (*(uint *)((long)puVar3 + -0x14) < *(uint *)(puVar3 + -7)) {
              if ((void *)*puVar4 != (void *)0x0) {
                free((void *)*puVar4);
                *puVar4 = 0;
                puVar3[-3] = 0;
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)puVar4,SUB41(*(undefined4 *)(puVar3 + -7),0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            }
            else if (*(int *)(puVar3 + -3) != 0) {
              *(undefined4 *)(puVar3 + -3) = 0;
            }
            if (((void *)*puVar4 != (void *)0x0) && ((void *)puVar3[-8] != (void *)0x0)) {
              memcpy((void *)*puVar4,(void *)puVar3[-8],(ulong)*(uint *)(puVar3 + -7));
            }
            *(undefined4 *)(puVar3 + -3) = *(undefined4 *)(puVar3 + -7);
            if (*(uint *)((long)puVar3 + -4) < *(uint *)(puVar3 + -5)) {
              if ((void *)puVar3[-2] != (void *)0x0) {
                free((void *)puVar3[-2]);
                puVar3[-2] = 0;
                puVar3[-1] = 0;
              }
              basisu::elemental_vector::increase_capacity
                        ((int)puVar3 - 0x10,SUB41(*(undefined4 *)(puVar3 + -5),0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            }
            else if (*(int *)(puVar3 + -1) != 0) {
              *(undefined4 *)(puVar3 + -1) = 0;
            }
            if (((void *)puVar3[-2] != (void *)0x0) && ((void *)puVar3[-6] != (void *)0x0)) {
              memcpy((void *)puVar3[-2],(void *)puVar3[-6],(ulong)*(uint *)(puVar3 + -5));
            }
            *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(puVar3 + -5);
            puVar3 = puVar4;
          } while (puVar4 != puVar5 + ((long)puVar5 - (long)param_1 >> 5) * -4 + 4);
        }
        pvVar2 = (void *)*param_1;
        if (*(uint *)((long)param_1 + 0xc) < (uint)local_60) {
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            *param_1 = 0;
            param_1[1] = 0;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,SUB41((uint)local_60,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          pvVar2 = (void *)*param_1;
        }
        else if (*(int *)(param_1 + 1) != 0) {
          *(undefined4 *)(param_1 + 1) = 0;
        }
        uVar7 = (uint)local_60;
        if ((pvVar2 != (void *)0x0) && (local_68 != (void *)0x0)) {
          memcpy(pvVar2,local_68,(ulong)(uint)local_60);
          uVar7 = (uint)local_60;
        }
        *(uint *)(param_1 + 1) = uVar7;
        pvVar2 = (void *)param_1[2];
        if (*(uint *)((long)param_1 + 0x1c) < (uint)local_50) {
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            param_1[2] = 0;
            param_1[3] = 0;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1 + 0x10,SUB41((uint)local_50,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          pvVar2 = (void *)param_1[2];
        }
        else if (*(int *)(param_1 + 3) != 0) {
          *(undefined4 *)(param_1 + 3) = 0;
        }
        uVar7 = (uint)local_50;
        if (pvVar2 == (void *)0x0) {
LAB_0010338e:
          *(uint *)(param_1 + 3) = uVar7;
          if (local_58 != (void *)0x0) {
            free(local_58);
          }
        }
        else {
          if (local_58 != (void *)0x0) {
            memcpy(pvVar2,local_58,(ulong)(uint)local_50);
            uVar7 = (uint)local_50;
            goto LAB_0010338e;
          }
          *(uint *)(param_1 + 3) = (uint)local_50;
        }
        if (local_68 != (void *)0x0) {
          free(local_68);
          puVar5 = puVar6;
          if (param_2 == puVar6) break;
          goto LAB_001031a1;
        }
      }
      else {
        __unguarded_linear_insert<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Val_less_iter>
                  (puVar5);
      }
      puVar5 = puVar6;
    } while (param_2 != puVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  _Rb_tree_node_base *p_Var1;
  astc_blk *paVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  pthread_mutex_t *__mutex;
  _Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
  *this_00;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  long lVar19;
  _Rb_tree_node_base *p_Var20;
  long lVar21;
  _Rb_tree_node_base *p_Var22;
  uint uVar23;
  float *pfVar24;
  ushort uVar25;
  int iVar26;
  float *pfVar27;
  astc_hdr_pack_results *paVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  uastc_blk_desc *puVar32;
  float *pfVar33;
  long lVar34;
  ushort *puVar35;
  uastc_blk_desc *this_01;
  short sVar36;
  int iVar37;
  _Rb_tree_node_base *p_Var38;
  long in_FS_OFFSET;
  bool bVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double local_358;
  uint local_344;
  void *local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  ushort local_2c8 [48];
  bc6h_block local_268 [96];
  float local_208 [48];
  float local_148 [16];
  float local_108 [48];
  float local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)(vector *)&local_2f8,false,0,(_func_void_void_ptr_void_ptr_uint *)0xd0,false);
  local_344 = *(uint *)(this + 8);
  if (local_344 < *(uint *)(this + 0xc)) {
    do {
      uVar14 = local_344 / *(uint *)(this + 0x10);
      uVar23 = local_344 % *(uint *)(this + 0x10);
      piVar6 = *(int **)(this + 0x20);
      iVar4 = *piVar6;
      iVar37 = piVar6[2];
      iVar31 = uVar14 * 4;
      iVar17 = piVar6[1];
      lVar21 = *(long *)(piVar6 + 4);
      pfVar27 = local_108;
      pfVar33 = local_148;
      do {
        iVar29 = iVar17 + -1;
        if (iVar31 <= iVar17 + -1) {
          iVar29 = iVar31;
        }
        if (iVar31 < 0) {
          iVar29 = 0;
        }
        pfVar24 = pfVar33;
        iVar26 = uVar23 * 4;
        do {
          iVar15 = iVar4 + -1;
          if (iVar26 <= iVar4 + -1) {
            iVar15 = iVar26;
          }
          uVar16 = iVar15 + iVar29 * iVar37;
          if (iVar26 < 0) {
            uVar16 = iVar29 * iVar37;
          }
          pfVar18 = (float *)((ulong)uVar16 * 0x10 + lVar21);
          if (pfVar24 != pfVar18) {
            uVar7 = *(undefined8 *)(pfVar18 + 2);
            *(undefined8 *)pfVar24 = *(undefined8 *)pfVar18;
            *(undefined8 *)(pfVar24 + 2) = uVar7;
          }
          pfVar24 = pfVar24 + 4;
          iVar26 = iVar26 + 1;
        } while (pfVar27 != pfVar24);
        pfVar33 = pfVar33 + 0x10;
        pfVar27 = pfVar27 + 0x10;
        iVar31 = iVar31 + 1;
      } while (pfVar33 != local_48);
      lVar21 = *(long *)(this + 0x28);
      iVar31 = *(int *)(lVar21 + 0xc);
      iVar4 = *(int *)(lVar21 + 0x1c);
      lVar21 = *(long *)(lVar21 + 0x20);
      pfVar27 = local_208;
      puVar35 = local_2c8;
      pfVar33 = local_148;
      do {
        fVar3 = *pfVar33;
        uVar25 = 0;
        *pfVar27 = fVar3;
        uVar16 = (int)fVar3 >> 0x17 & 0xff;
        if (uVar16 != 0) {
          uVar25 = 0x7c00;
          if ((int)(uVar16 - 0x7f) < 0x10) {
            if ((int)(uVar16 - 0x7f) < -0xe) {
              sVar36 = 0;
              iVar37 = 0;
              lVar19 = lrintf((float)((uint)fVar3 & _LC20) * __LC25);
              iVar17 = (int)lVar19;
            }
            else {
              iVar37 = uVar16 - 0x70;
              sVar36 = (short)iVar37;
              lVar19 = lrintf((float)((uint)fVar3 & 0x7fffff) * __LC26);
              iVar17 = (int)lVar19;
            }
            if (iVar17 == 0x400) {
              uVar25 = (sVar36 + 1) * 0x400;
            }
            else {
              uVar25 = (ushort)(iVar37 << 10) | (ushort)iVar17;
            }
          }
        }
        fVar3 = pfVar33[1];
        *puVar35 = uVar25;
        uVar25 = 0;
        pfVar27[1] = fVar3;
        uVar16 = (int)fVar3 >> 0x17 & 0xff;
        if (uVar16 != 0) {
          uVar25 = 0x7c00;
          if ((int)(uVar16 - 0x7f) < 0x10) {
            if ((int)(uVar16 - 0x7f) < -0xe) {
              iVar37 = 0;
              sVar36 = 0;
              lVar19 = lrintf((float)((uint)fVar3 & _LC20) * __LC25);
              iVar17 = (int)lVar19;
            }
            else {
              iVar37 = uVar16 - 0x70;
              sVar36 = (short)iVar37;
              lVar19 = lrintf((float)((uint)fVar3 & 0x7fffff) * __LC26);
              iVar17 = (int)lVar19;
            }
            if (iVar17 == 0x400) {
              uVar25 = (sVar36 + 1) * 0x400;
            }
            else {
              uVar25 = (ushort)(iVar37 << 10) | (ushort)iVar17;
            }
          }
        }
        fVar3 = pfVar33[2];
        puVar35[1] = uVar25;
        uVar25 = 0;
        pfVar27[2] = fVar3;
        uVar16 = (int)fVar3 >> 0x17 & 0xff;
        if (uVar16 != 0) {
          uVar25 = 0x7c00;
          if ((int)(uVar16 - 0x7f) < 0x10) {
            if ((int)(uVar16 - 0x7f) < -0xe) {
              iVar37 = 0;
              sVar36 = 0;
              lVar19 = lrintf((float)((uint)fVar3 & _LC20) * __LC25);
              iVar17 = (int)lVar19;
            }
            else {
              iVar37 = uVar16 - 0x70;
              sVar36 = (short)iVar37;
              lVar19 = lrintf((float)((uint)fVar3 & 0x7fffff) * __LC26);
              iVar17 = (int)lVar19;
            }
            if (iVar17 == 0x400) {
              uVar25 = (sVar36 + 1) * 0x400;
            }
            else {
              uVar25 = (ushort)(iVar37 << 10) | (ushort)iVar17;
            }
          }
        }
        pfVar27 = pfVar27 + 3;
        puVar35[2] = uVar25;
        pfVar33 = pfVar33 + 4;
        puVar35 = puVar35 + 3;
      } while (local_148 != pfVar27);
      cVar12 = basisu::astc_hdr_enc_block
                         (local_208,(astc_hdr_codec_options *)(*(long *)this + 0x260),
                          (vector *)&local_2f8);
      if (cVar12 == '\0') {
LAB_00103a80:
        LOCK();
        **(undefined1 **)(this + 0x38) = 1;
        UNLOCK();
      }
      else {
        fVar3 = *(float *)(*(long *)this + 0x260);
        dVar40 = _LC27 - (double)fVar3;
        if ((uint)local_2f0 == 0) {
          lVar19 = -0xd0;
        }
        else {
          lVar34 = 0;
          uVar16 = 0;
          lVar19 = -1;
          local_358 = _LC136;
          do {
            basisu::unpack_bc6h((void *)((long)local_2f8 + lVar34 + 0xbe),local_268,false,0xc);
            dVar41 = (double)basisu::compute_block_error
                                       (local_2c8,(ushort *)local_268,
                                        (astc_hdr_codec_options *)(*(long *)this + 0x260));
            ((double *)((long)local_2f8 + lVar34))[1] = dVar41;
            dVar41 = dVar41 * (double)fVar3 + dVar40 * *(double *)((long)local_2f8 + lVar34);
            if ((uVar16 == 0) || (dVar41 < local_358)) {
              lVar19 = (long)(int)uVar16;
              local_358 = dVar41;
            }
            uVar16 = uVar16 + 1;
            lVar34 = lVar34 + 0xd0;
          } while (uVar16 < (uint)local_2f0);
          lVar19 = lVar19 * 0xd0;
        }
        paVar28 = (astc_hdr_pack_results *)(lVar19 + (long)local_2f8);
        paVar2 = (astc_blk *)(lVar21 + (ulong)((uVar14 * iVar31 + uVar23) * iVar4) * 8);
        basisu::astc_hdr_pack_results_to_block(paVar2,paVar28);
        if (*(int *)(*(long *)this + 0x2b4) == 0) {
          cVar12 = *(char *)(*(long *)this + 0x8c);
        }
        else {
          cVar12 = basist::astc_hdr_transcode_to_bc6h(paVar2,local_268);
          if ((cVar12 == '\0') && (**(char **)(this + 0x38) == '\0')) {
            basisu::error_printf
                      (
                      "basis_compressor::encode_slices_to_uastc_hdr: UASTC HDR block transcode check failed!\n"
                      );
            goto LAB_00103a80;
          }
          cVar12 = *(char *)(*(long *)this + 0x8c);
        }
        if (cVar12 != '\0') {
          basisu::astc_hdr_block_stats::update(*(astc_hdr_pack_results **)(this + 0x40));
          local_2d8 = 0;
          uStack_2e4 = 0;
          uStack_2e0 = 0;
          uStack_2dc = 0;
          uVar23 = CONCAT31(0,paVar28[0xce]);
          if (paVar28[0xce] == (astc_hdr_pack_results)0x0) {
            uStack_2e4 = *(uint *)(paVar28 + 0x34);
            uStack_2e0 = *(uint *)(paVar28 + 0x3c);
            uStack_2dc = (uint)*(undefined8 *)(paVar28 + 0x28);
            local_2d8 = (uint)((ulong)*(undefined8 *)(paVar28 + 0x28) >> 0x20);
          }
          __mutex = *(pthread_mutex_t **)(this + 0x50);
          local_2e8 = uVar23;
          iVar31 = pthread_mutex_lock(__mutex);
          uVar11 = local_2d8;
          uVar10 = uStack_2dc;
          uVar16 = uStack_2e0;
          uVar14 = uStack_2e4;
          if (iVar31 != 0) {
            std::__throw_system_error(iVar31);
            goto LAB_00103f4f;
          }
          this_00 = *(_Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
                      **)(this + 0x48);
          uVar7 = CONCAT44(uStack_2dc,uStack_2e0);
          p_Var1 = (_Rb_tree_node_base *)(this_00 + 8);
          p_Var20 = *(_Rb_tree_node_base **)(this_00 + 0x10);
          p_Var38 = p_Var1;
          if (*(_Rb_tree_node_base **)(this_00 + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_00103d4d:
            p_Var20 = (_Rb_tree_node_base *)operator_new(0x38);
            lVar21 = *(long *)(this_00 + 0x28);
            *(undefined4 *)(p_Var20 + 0x34) = 0;
            this_01 = (uastc_blk_desc *)(p_Var20 + 0x20);
            *(uint *)(p_Var20 + 0x30) = uVar11;
            *(ulong *)(p_Var20 + 0x20) = CONCAT44(uVar14,uVar23);
            *(undefined8 *)(p_Var20 + 0x28) = uVar7;
            if (lVar21 == 0) {
LAB_00103d87:
              auVar42 = std::
                        _Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
                        ::_M_get_insert_unique_pos(this_00,this_01);
            }
            else {
              uVar30 = *(ulong *)(this_00 + 0x20);
              cVar12 = uastc_blk_desc::operator<((uastc_blk_desc *)(uVar30 + 0x20),this_01);
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar30;
              auVar42 = auVar9 << 0x40;
              if (cVar12 == '\0') goto LAB_00103d87;
            }
LAB_00103d98:
            p_Var22 = auVar42._8_8_;
            p_Var38 = auVar42._0_8_;
            if (p_Var22 != (_Rb_tree_node_base *)0x0) {
              bVar39 = p_Var38 != (_Rb_tree_node_base *)0x0;
LAB_00103e9b:
              p_Var38 = p_Var22;
              if ((p_Var1 == p_Var22) || (bVar39)) {
LAB_00103e61:
                uVar13 = true;
              }
              else {
                puVar32 = (uastc_blk_desc *)(p_Var22 + 0x20);
LAB_00103eaa:
                uVar13 = uastc_blk_desc::operator<(this_01,puVar32);
                p_Var38 = p_Var22;
              }
              std::_Rb_tree_insert_and_rebalance((bool)uVar13,p_Var20,p_Var38,p_Var1);
              *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + 1;
              *(int *)(p_Var20 + 0x34) = *(int *)(p_Var20 + 0x34) + 1;
              pthread_mutex_unlock(__mutex);
              goto LAB_00103a01;
            }
          }
          else {
            do {
              if ((*(uint *)(p_Var20 + 0x20) < uVar23) ||
                 ((uVar23 == *(uint *)(p_Var20 + 0x20) &&
                  ((*(uint *)(p_Var20 + 0x24) < uStack_2e4 ||
                   ((*(uint *)(p_Var20 + 0x24) == uStack_2e4 &&
                    ((*(uint *)(p_Var20 + 0x28) < uStack_2e0 ||
                     ((uStack_2e0 == *(uint *)(p_Var20 + 0x28) &&
                      ((*(uint *)(p_Var20 + 0x2c) < uStack_2dc ||
                       ((uStack_2dc == *(uint *)(p_Var20 + 0x2c) &&
                        (*(uint *)(p_Var20 + 0x30) < local_2d8)))))))))))))))) {
                p_Var22 = *(_Rb_tree_node_base **)(p_Var20 + 0x18);
              }
              else {
                p_Var22 = *(_Rb_tree_node_base **)(p_Var20 + 0x10);
                p_Var38 = p_Var20;
              }
              p_Var20 = p_Var22;
            } while (p_Var22 != (_Rb_tree_node_base *)0x0);
            if (p_Var1 == p_Var38) goto LAB_00103d4d;
            if ((*(uint *)(p_Var38 + 0x20) <= uVar23) &&
               ((uVar23 != *(uint *)(p_Var38 + 0x20) ||
                ((*(uint *)(p_Var38 + 0x24) <= uStack_2e4 &&
                 ((*(uint *)(p_Var38 + 0x24) != uStack_2e4 ||
                  ((*(uint *)(p_Var38 + 0x28) <= uStack_2e0 &&
                   ((uStack_2e0 != *(uint *)(p_Var38 + 0x28) ||
                    ((*(uint *)(p_Var38 + 0x2c) <= uStack_2dc &&
                     ((uStack_2dc != *(uint *)(p_Var38 + 0x2c) ||
                      (*(uint *)(p_Var38 + 0x30) <= local_2d8)))))))))))))))) {
              *(int *)(p_Var38 + 0x34) = *(int *)(p_Var38 + 0x34) + 1;
              pthread_mutex_unlock(__mutex);
              goto LAB_00103a01;
            }
            p_Var20 = (_Rb_tree_node_base *)operator_new(0x38);
            auVar8._4_4_ = uVar14;
            auVar8._0_4_ = uVar23;
            auVar8._8_8_ = uVar7;
            puVar32 = (uastc_blk_desc *)(p_Var38 + 0x20);
            this_01 = (uastc_blk_desc *)(p_Var20 + 0x20);
            *(uint *)(p_Var20 + 0x30) = uVar11;
            *(undefined4 *)(p_Var20 + 0x34) = 0;
            *(undefined1 (*) [16])(p_Var20 + 0x20) = auVar8;
            if (this_01 != puVar32) {
              if (uVar23 < *(uint *)(p_Var38 + 0x20)) {
LAB_00103dce:
                if (p_Var38 != *(_Rb_tree_node_base **)(this_00 + 0x18)) {
                  p_Var22 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var38);
                  if ((this_01 == (uastc_blk_desc *)(p_Var22 + 0x20)) ||
                     ((uVar23 <= *(uint *)(p_Var22 + 0x20) &&
                      ((uVar23 != *(uint *)(p_Var22 + 0x20) ||
                       ((uVar14 <= *(uint *)(p_Var22 + 0x24) &&
                        ((*(uint *)(p_Var22 + 0x24) != uVar14 ||
                         ((uVar16 <= *(uint *)(p_Var22 + 0x28) &&
                          ((uVar16 != *(uint *)(p_Var22 + 0x28) ||
                           ((uVar10 <= *(uint *)(p_Var22 + 0x2c) &&
                            ((uVar10 != *(uint *)(p_Var22 + 0x2c) ||
                             (uVar11 <= *(uint *)(p_Var22 + 0x30)))))))))))))))))))
                  goto LAB_00103d87;
                  if (*(long *)(p_Var22 + 0x18) != 0) goto LAB_00103e61;
                  bVar39 = false;
                  goto LAB_00103e9b;
                }
                goto LAB_00103e61;
              }
              if (uVar23 == *(uint *)(p_Var38 + 0x20)) {
                if (uVar14 < *(uint *)(p_Var38 + 0x24)) goto LAB_00103dce;
                if (*(uint *)(p_Var38 + 0x24) == uVar14) {
                  uVar5 = *(uint *)(p_Var38 + 0x28);
                  if ((uVar16 < uVar5) ||
                     ((uVar16 == uVar5 &&
                      ((uVar10 < *(uint *)(p_Var38 + 0x2c) ||
                       ((uVar10 == *(uint *)(p_Var38 + 0x2c) && (uVar11 < *(uint *)(p_Var38 + 0x30))
                        ))))))) goto LAB_00103dce;
                  if ((uVar16 <= uVar5) &&
                     ((uVar16 != uVar5 ||
                      ((uVar10 <= *(uint *)(p_Var38 + 0x2c) &&
                       ((uVar10 != *(uint *)(p_Var38 + 0x2c) ||
                        (uVar11 <= *(uint *)(p_Var38 + 0x30))))))))) goto LAB_00103da1;
                }
              }
              p_Var22 = p_Var38;
              if (p_Var38 != *(_Rb_tree_node_base **)(this_00 + 0x20)) {
                lVar21 = std::_Rb_tree_increment(p_Var38);
                cVar12 = uastc_blk_desc::operator<(this_01,(uastc_blk_desc *)(lVar21 + 0x20));
                auVar42._8_8_ = lVar21;
                auVar42._0_8_ = lVar21;
                if (cVar12 != '\0') {
                  if (*(long *)(p_Var38 + 0x18) == 0) goto LAB_00103eaa;
                  goto LAB_00103d98;
                }
                goto LAB_00103d87;
              }
              goto LAB_00103eaa;
            }
          }
LAB_00103da1:
          operator_delete(p_Var20,0x38);
          *(int *)(p_Var38 + 0x34) = *(int *)(p_Var38 + 0x34) + 1;
          pthread_mutex_unlock(__mutex);
        }
LAB_00103a01:
        LOCK();
        **(int **)(this + 0x30) = **(int **)(this + 0x30) + 1;
        UNLOCK();
        if (((~**(uint **)(this + 0x30) & 0x3ff) == 0) && (*(char *)(*(long *)this + 0x8a) != '\0'))
        {
          basisu::debug_printf
                    ("basis_compressor::encode_slices_to_uastc_hdr: %3.1f%% done\n",
                     (double)(((float)**(uint **)(this + 0x30) * __LC21) /
                             (float)*(uint *)(this + 0x18)));
        }
      }
      local_344 = local_344 + 1;
    } while (local_344 < *(uint *)(this + 0xc));
  }
  if (local_2f8 != (void *)0x0) {
    free(local_2f8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103f4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (),
   basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}::operator()
            (*(_lambda___1_ **)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<basist::ktx2_transcoder::key_value*, long,
   basist::ktx2_transcoder::key_value,
   __gnu_cxx::__ops::_Iter_less_iter>(basist::ktx2_transcoder::key_value*, long, long,
   basist::ktx2_transcoder::key_value, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __adjust_heap<basist::ktx2_transcoder::key_value*,long,basist::ktx2_transcoder::key_value,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  vector *pvVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  vector<unsigned_char> *this;
  long lVar7;
  long lVar8;
  vector<unsigned_char> *pvVar9;
  long in_FS_OFFSET;
  char *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  if (param_2 < lVar7) {
    do {
      lVar4 = (lVar8 + 1) * 2;
      lVar3 = (lVar8 + 1) * 0x40;
      this = (vector<unsigned_char> *)(param_1 + lVar3);
      iVar2 = strcmp(*(char **)this,*(char **)(param_1 + -0x20 + lVar3));
      if (iVar2 < 0) {
        lVar4 = lVar4 + -1;
        this = (vector<unsigned_char> *)(param_1 + lVar4 * 0x20);
      }
      pvVar9 = (vector<unsigned_char> *)(param_1 + lVar8 * 0x20);
      if (this != pvVar9) {
        uVar5 = *(uint *)(this + 8);
        pvVar6 = *(void **)pvVar9;
        if (*(uint *)(pvVar9 + 0xc) < uVar5) {
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            *(undefined8 *)pvVar9 = 0;
            *(undefined8 *)(pvVar9 + 8) = 0;
            uVar5 = *(uint *)(this + 8);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)pvVar9,SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar5 = *(uint *)(this + 8);
          pvVar6 = *(void **)pvVar9;
        }
        else if (*(int *)(pvVar9 + 8) != 0) {
          *(undefined4 *)(pvVar9 + 8) = 0;
          uVar5 = *(uint *)(this + 8);
        }
        if ((pvVar6 != (void *)0x0) && (*(void **)this != (void *)0x0)) {
          memcpy(pvVar6,*(void **)this,(ulong)uVar5);
          uVar5 = *(uint *)(this + 8);
        }
        *(uint *)(pvVar9 + 8) = uVar5;
      }
      if (pvVar9 + 0x10 != this + 0x10) {
        uVar5 = *(uint *)(this + 0x18);
        pvVar6 = *(void **)(pvVar9 + 0x10);
        if (*(uint *)(pvVar9 + 0x1c) < uVar5) {
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            *(undefined8 *)(pvVar9 + 0x10) = 0;
            *(undefined8 *)(pvVar9 + 0x18) = 0;
            uVar5 = *(uint *)(this + 0x18);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(pvVar9 + 0x10),SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1
                     ,false);
          uVar5 = *(uint *)(this + 0x18);
          pvVar6 = *(void **)(pvVar9 + 0x10);
        }
        else if (*(int *)(pvVar9 + 0x18) != 0) {
          *(undefined4 *)(pvVar9 + 0x18) = 0;
          uVar5 = *(uint *)(this + 0x18);
        }
        if ((pvVar6 != (void *)0x0) && (*(void **)(this + 0x10) != (void *)0x0)) {
          memcpy(pvVar6,*(void **)(this + 0x10),(ulong)uVar5);
          uVar5 = *(uint *)(this + 0x18);
        }
        *(uint *)(pvVar9 + 0x18) = uVar5;
      }
      lVar8 = lVar4;
    } while (lVar4 < lVar7);
  }
  else {
    this = (vector<unsigned_char> *)(param_1 + param_2 * 0x20);
    lVar4 = param_2;
  }
  if (((param_3 & 1) == 0) && ((long)(param_3 - 2) / 2 == lVar4)) {
    pvVar1 = (vector *)(param_1 + -0x20 + (lVar4 + 1) * 0x40);
    basisu::vector<unsigned_char>::operator=(this,pvVar1);
    basisu::vector<unsigned_char>::operator=(this + 0x10,pvVar1 + 0x10);
    lVar4 = (lVar4 + 1) * 2 + -1;
    this = (vector<unsigned_char> *)(param_1 + lVar4 * 0x20);
  }
  local_68 = (char *)0x0;
  local_60 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)(vector *)&local_68,SUB41(*(undefined4 *)(param_4 + 1),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_60 = CONCAT44(local_60._4_4_,*(uint *)(param_4 + 1));
  if ((local_68 != (char *)0x0) && ((void *)*param_4 != (void *)0x0)) {
    memcpy(local_68,(void *)*param_4,(ulong)*(uint *)(param_4 + 1));
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,SUB41(*(undefined4 *)(param_4 + 3),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_50 = CONCAT44(local_50._4_4_,*(uint *)(param_4 + 3));
  if ((local_58 != (void *)0x0) && ((void *)param_4[2] != (void *)0x0)) {
    memcpy(local_58,(void *)param_4[2],(ulong)*(uint *)(param_4 + 3));
  }
  lVar8 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar7 = lVar8 >> 1;
    this = (vector<unsigned_char> *)(param_1 + lVar4 * 0x20);
    pvVar9 = (vector<unsigned_char> *)(lVar7 * 0x20 + param_1);
    iVar2 = strcmp(*(char **)pvVar9,local_68);
    if (-1 < iVar2) break;
    if (pvVar9 != this) {
      uVar5 = *(uint *)(pvVar9 + 8);
      pvVar6 = *(void **)this;
      if (*(uint *)(this + 0xc) < uVar5) {
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          uVar5 = *(uint *)(pvVar9 + 8);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar5 = *(uint *)(pvVar9 + 8);
        pvVar6 = *(void **)this;
      }
      else if (*(int *)(this + 8) != 0) {
        *(undefined4 *)(this + 8) = 0;
        uVar5 = *(uint *)(pvVar9 + 8);
      }
      if ((pvVar6 != (void *)0x0) && (*(void **)pvVar9 != (void *)0x0)) {
        memcpy(pvVar6,*(void **)pvVar9,(ulong)uVar5);
        uVar5 = *(uint *)(pvVar9 + 8);
      }
      *(uint *)(this + 8) = uVar5;
    }
    if (this + 0x10 != pvVar9 + 0x10) {
      uVar5 = *(uint *)(pvVar9 + 0x18);
      pvVar6 = *(void **)(this + 0x10);
      if (*(uint *)(this + 0x1c) < uVar5) {
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          *(undefined8 *)(this + 0x10) = 0;
          *(undefined8 *)(this + 0x18) = 0;
          uVar5 = *(uint *)(pvVar9 + 0x18);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(this + 0x10),SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                   false);
        uVar5 = *(uint *)(pvVar9 + 0x18);
        pvVar6 = *(void **)(this + 0x10);
      }
      else if (*(int *)(this + 0x18) != 0) {
        *(undefined4 *)(this + 0x18) = 0;
        uVar5 = *(uint *)(pvVar9 + 0x18);
      }
      if ((pvVar6 != (void *)0x0) && (*(void **)(pvVar9 + 0x10) != (void *)0x0)) {
        memcpy(pvVar6,*(void **)(pvVar9 + 0x10),(ulong)uVar5);
        uVar5 = *(uint *)(pvVar9 + 0x18);
      }
      *(uint *)(this + 0x18) = uVar5;
    }
    lVar8 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
    lVar4 = lVar7;
    this = pvVar9;
  }
  basisu::vector<unsigned_char>::operator=(this,(vector *)&local_68);
  if (*(uint *)(this + 0x1c) < (uint)local_50) {
    if (*(void **)(this + 0x10) != (void *)0x0) {
      free(*(void **)(this + 0x10));
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((int)this + 0x10,SUB41((uint)local_50,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
               false);
  }
  else if (*(int *)(this + 0x18) != 0) {
    *(undefined4 *)(this + 0x18) = 0;
  }
  uVar5 = (uint)local_50;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    if (local_58 == (void *)0x0) {
      *(uint *)(this + 0x18) = (uint)local_50;
      goto LAB_00104440;
    }
    memcpy(*(void **)(this + 0x10),local_58,(ulong)(uint)local_50);
    uVar5 = (uint)local_50;
  }
  *(uint *)(this + 0x18) = uVar5;
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
LAB_00104440:
  if (local_68 != (char *)0x0) {
    free(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::string_get_filename(char const*, std::__cxx11::string&) [clone .isra.0] */

void basisu::string_get_filename(char *param_1,string *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 *local_48;
  ulong local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_40 = 0;
  local_48 = &local_38;
  cVar1 = string_split_path(param_1,(string *)0x0,(string *)0x0,param_2,(string *)&local_48);
  if (cVar1 != '\0') {
    if (0x3fffffffffffffffU - *(long *)(param_2 + 8) < local_40) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    std::__cxx11::string::_M_append((char *)param_2,(ulong)local_48);
  }
  if (local_48 != &local_38) {
    operator_delete(local_48,CONCAT71(uStack_37,local_38) + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::mz_adler32(unsigned long, unsigned char const*, unsigned long) */

int buminiz::mz_adler32(ulong param_1,uchar *param_2,ulong param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar7 = param_1 & 0xffff;
  uVar9 = param_1 >> 0x10;
  if (param_2 == (uchar *)0x0) {
    return 1;
  }
  if (param_3 != 0) {
    pbVar3 = (byte *)(param_3 % 0x15b0);
    if ((byte *)0x7 < pbVar3) {
      do {
        pbVar10 = param_2 + ((ulong)(pbVar3 + -8) >> 3) * 8 + 8;
        do {
          pbVar2 = param_2 + 8;
          iVar1 = (uint)*param_2 + (int)uVar7;
          iVar15 = (uint)param_2[1] + iVar1;
          iVar14 = (uint)param_2[2] + iVar15;
          iVar13 = (uint)param_2[3] + iVar14;
          iVar5 = (uint)param_2[4] + iVar13;
          iVar4 = (uint)param_2[5] + iVar5;
          iVar12 = (uint)param_2[6] + iVar4;
          uVar6 = (uint)param_2[7] + iVar12;
          uVar7 = (ulong)uVar6;
          uVar9 = (ulong)((int)uVar9 +
                         iVar1 + iVar15 + iVar14 + iVar13 + iVar5 + iVar4 + iVar12 + uVar6);
          param_2 = pbVar2;
        } while (pbVar2 != pbVar10);
        pbVar2 = (byte *)(ulong)((int)((ulong)(pbVar3 + -8) >> 3) * 8 + 8);
        param_2 = pbVar10;
        pbVar11 = pbVar2;
joined_r0x00104697:
        while( true ) {
          if (pbVar3 <= pbVar2) break;
          uVar6 = (int)uVar7 + (uint)*param_2;
          uVar7 = (ulong)uVar6;
          pbVar2 = param_2 + 1 + ((long)pbVar11 - (long)pbVar10);
          uVar9 = (ulong)((int)uVar9 + uVar6);
          param_2 = param_2 + 1;
        }
        uVar6 = (int)uVar7 + (int)(uVar7 / 0xfff1) * -0xfff1;
        uVar7 = (ulong)uVar6;
        uVar8 = (int)uVar9 + (int)((uVar9 & 0xffffffff) / 0xfff1) * -0xfff1;
        uVar9 = (ulong)uVar8;
        param_3 = param_3 - (long)pbVar3;
        pbVar3 = (byte *)0x15b0;
      } while (param_3 != 0);
      return uVar8 * 0x10000 + uVar6;
    }
    pbVar2 = (byte *)0x0;
    pbVar11 = pbVar2;
    pbVar10 = param_2;
    goto joined_r0x00104697;
  }
  return (int)(param_1 >> 0x10) * 0x10000 + (int)uVar7;
}



/* buminiz::mz_crc32(unsigned long, unsigned char const*, unsigned long) */

ulong buminiz::mz_crc32(ulong param_1,uchar *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar2 = param_1 & 0xffffffff;
  if (param_2 == (uchar *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = ~(uint)param_1;
    if (param_3 != 0) {
      pbVar3 = param_2 + param_3;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar4 = uVar4 >> 4 ^
                *(uint *)(mz_crc32(unsigned_long,unsigned_char_const*,unsigned_long)::s_crc32 +
                         (ulong)((uVar4 ^ bVar1) & 0xf) * 4);
        uVar4 = uVar4 >> 4 ^
                *(uint *)(mz_crc32(unsigned_long,unsigned_char_const*,unsigned_long)::s_crc32 +
                         (ulong)((uVar4 ^ bVar1 >> 4) & 0xf) * 4);
      } while (param_2 != pbVar3);
      return (ulong)~uVar4;
    }
  }
  return uVar2;
}



/* buminiz::mz_free(void*) */

void buminiz::mz_free(void *param_1)

{
  free(param_1);
  return;
}



/* buminiz::mz_version() */

char * buminiz::mz_version(void)

{
  return "9.1.15";
}



/* buminiz::mz_deflateEnd(buminiz::mz_stream_s*) */

undefined8 buminiz::mz_deflateEnd(mz_stream_s *param_1)

{
  if (param_1 != (mz_stream_s *)0x0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 0;
  }
  return 0xfffffffe;
}



/* buminiz::mz_deflateBound(buminiz::mz_stream_s*, unsigned long) */

ulong buminiz::mz_deflateBound(mz_stream_s *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2 >> 10;
  uVar1 = param_2 + SUB168(ZEXT816(0x842108421084231) * auVar2,8) * 5 + 0x85;
  uVar3 = (param_2 * 0x6e) / 100 + 0x80;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* buminiz::mz_compressBound(unsigned long) */

ulong buminiz::mz_compressBound(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1 >> 10;
  uVar1 = param_1 + SUB168(ZEXT816(0x842108421084231) * auVar2,8) * 5 + 0x85;
  uVar3 = (param_1 * 0x6e) / 100 + 0x80;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::mz_inflateInit2(buminiz::mz_stream_s*, int) */

undefined8 buminiz::mz_inflateInit2(mz_stream_s *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (param_1 != (mz_stream_s *)0x0) {
    if ((param_2 == 0xf) || (param_2 == -0xf)) {
      pcVar3 = *(code **)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
      if (pcVar3 == (code *)0x0) {
        pcVar3 = def_alloc_func;
        *(code **)(param_1 + 0x40) = def_alloc_func;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
        *(code **)(param_1 + 0x48) = def_free_func;
      }
      puVar2 = (undefined4 *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0xab10);
      uVar1 = _UNK_001224d8;
      uVar4 = __LC66;
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0xfffffffc;
      }
      else {
        *(undefined4 **)(param_1 + 0x38) = puVar2;
        *puVar2 = 0;
        puVar2[0x2ac3] = 1;
        puVar2[0xac2] = param_2;
        *(undefined8 *)(puVar2 + 0xabe) = uVar4;
        *(undefined8 *)(puVar2 + 0xac0) = uVar1;
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xffffd8f0;
    }
    return uVar4;
  }
  return 0xfffffffe;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::mz_inflateInit(buminiz::mz_stream_s*) */

undefined8 buminiz::mz_inflateInit(mz_stream_s *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  
  if (param_1 == (mz_stream_s *)0x0) {
    return 0xfffffffe;
  }
  pcVar5 = *(code **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  if (pcVar5 == (code *)0x0) {
    pcVar5 = def_alloc_func;
    lVar1 = *(long *)(param_1 + 0x48);
    *(code **)(param_1 + 0x40) = def_alloc_func;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  if (lVar1 == 0) {
    *(code **)(param_1 + 0x48) = def_free_func;
  }
  puVar4 = (undefined4 *)(*pcVar5)(*(undefined8 *)(param_1 + 0x50),1,0xab10);
  uVar3 = _UNK_001224d8;
  uVar2 = __LC66;
  if (puVar4 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar4;
  *puVar4 = 0;
  puVar4[0x2ac3] = 1;
  puVar4[0xac2] = 0xf;
  *(undefined8 *)(puVar4 + 0xabe) = uVar2;
  *(undefined8 *)(puVar4 + 0xac0) = uVar3;
  return 0;
}



/* buminiz::mz_inflateEnd(buminiz::mz_stream_s*) */

undefined8 buminiz::mz_inflateEnd(mz_stream_s *param_1)

{
  if (param_1 != (mz_stream_s *)0x0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 0;
  }
  return 0xfffffffe;
}



/* buminiz::mz_error(int) */

undefined * buminiz::mz_error(int param_1)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &mz_error(int)::s_error_descs;
  do {
    if (*piVar3 == param_1) {
      return (&PTR__LC30_00122308)[uVar2 * 2];
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
    piVar3 = piVar3 + 4;
  } while (uVar1 != 10);
  return (undefined *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::tinfl_decompress(buminiz::tinfl_decompressor_tag*, unsigned char const*, unsigned long*,
   unsigned char*, unsigned char*, unsigned long*, unsigned int) */

int buminiz::tinfl_decompress
              (tinfl_decompressor_tag *param_1,uchar *param_2,ulong *param_3,uchar *param_4,
              uchar *param_5,ulong *param_6,uint param_7)

{
  tinfl_decompressor_tag *ptVar1;
  uchar *puVar2;
  long lVar3;
  tinfl_decompressor_tag tVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  tinfl_decompressor_tag *ptVar13;
  ulong uVar14;
  tinfl_decompressor_tag *ptVar15;
  byte bVar16;
  uchar *puVar17;
  uchar *puVar18;
  int iVar19;
  undefined4 uVar20;
  uchar *puVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uchar *puVar30;
  long lVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined8 *puVar35;
  long lVar36;
  byte *pbVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  int iVar41;
  tinfl_decompressor_tag *ptVar42;
  ulong uVar43;
  uchar *puVar44;
  int iVar45;
  byte *pbVar46;
  ulong uVar47;
  long in_FS_OFFSET;
  byte bVar48;
  ulong local_130;
  uint local_128;
  uint local_124;
  uchar *local_110;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  uint local_88 [18];
  long local_40;
  
  bVar48 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar13 = (tinfl_decompressor_tag *)(param_2 + *param_3);
  uVar47 = *param_6;
  puVar2 = param_5 + uVar47;
  uVar32 = param_7 & 4;
  if (uVar32 == 0) {
    local_110 = param_5 + ((uVar47 - 1) - (long)param_4);
    puVar21 = param_5 + (uVar47 - (long)param_4);
    if (((ulong)local_110 & (ulong)puVar21) == 0) goto LAB_00104af9;
LAB_00104d38:
    *param_6 = 0;
    *param_3 = 0;
    iVar10 = -3;
    goto LAB_00104d00;
  }
  local_110 = (uchar *)0xffffffffffffffff;
  puVar21 = (uchar *)0x0;
LAB_00104af9:
  if (param_5 < param_4) goto LAB_00104d38;
  local_128 = *(uint *)(param_1 + 0x20);
  uVar24 = *(uint *)param_1;
  uVar25 = *(uint *)(param_1 + 4);
  uVar47 = *(ulong *)(param_1 + 0x38);
  local_124 = *(uint *)(param_1 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar40 = (ulong)uVar9;
  local_130 = *(ulong *)(param_1 + 0x40);
  bVar16 = (byte)uVar25;
  ptVar42 = (tinfl_decompressor_tag *)param_2;
  puVar44 = param_5;
  switch(uVar24) {
  case 0:
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    if ((param_7 & 1) == 0) {
      uVar40 = 0;
      uVar47 = 0;
      local_124 = 0;
      local_128 = 0;
      uVar25 = 0;
      ptVar15 = (tinfl_decompressor_tag *)param_2;
      goto LAB_00105bdc;
    }
    local_128 = uVar24;
    local_124 = uVar24;
    if (param_2 < ptVar13) {
      bVar16 = *param_2;
      uVar40 = (ulong)uVar24;
      uVar47 = 0;
      uVar25 = uVar24;
LAB_00104fcf:
      uVar9 = (uint)bVar16;
      ptVar15 = (tinfl_decompressor_tag *)(param_2 + 1);
      *(uint *)(param_1 + 8) = uVar9;
      ptVar42 = ptVar15;
      if (ptVar13 <= ptVar15) goto LAB_00105a91;
      ptVar42 = (tinfl_decompressor_tag *)(param_2 + 2);
      uVar28 = (uint)(byte)*ptVar15;
      *(uint *)(param_1 + 0xc) = uVar28;
LAB_00104f6b:
      uVar28 = uVar28 + uVar9 * 0x100;
      uVar24 = uVar25;
      goto LAB_00104f96;
    }
    uVar40 = (ulong)uVar24;
    uVar47 = 0;
    goto LAB_00105035;
  case 1:
    uVar24 = uVar25;
    if (param_2 < ptVar13) {
      bVar16 = *param_2;
      goto LAB_00104fcf;
    }
LAB_00105035:
    if ((param_7 & 2) == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar9 = 0;
LAB_00105a3d:
      uVar25 = uVar24;
      if (((*(ulong *)(param_1 + 8) & 0x200000000f) == 8) &&
         ((uVar32 != 0 ||
          ((bVar16 = (char)(uVar9 >> 4) + 8, (uint)(1 << (bVar16 & 0x1f)) < 0x8001 &&
           ((ulong)puVar21 >> (bVar16 & 0x3f) != 0)))))) {
        uVar40 = 0;
LAB_00104e8e:
        do {
          ptVar15 = ptVar42;
          uVar25 = uVar24;
          if (uVar24 < 3) {
LAB_00105bdc:
            ptVar42 = ptVar15;
            if (ptVar13 <= ptVar15) {
LAB_00105c03:
              if ((param_7 & 2) != 0) {
                *(undefined4 *)param_1 = 3;
                uVar43 = (long)puVar44 - (long)param_5;
                iVar10 = 1;
                uVar14 = (long)ptVar42 - (long)param_2;
                uVar24 = uVar25;
                goto LAB_00104b63;
              }
LAB_00104e8b:
              uVar24 = uVar25 + 8;
              goto LAB_00104e8e;
            }
            ptVar42 = ptVar15 + 1;
            uVar24 = uVar25 + 8;
            uVar47 = uVar47 | (ulong)(byte)*ptVar15 << ((byte)uVar25 & 0x3f);
          }
          uVar25 = uVar24 - 3;
          uVar43 = uVar47 >> 3;
          uVar24 = (uint)uVar47 & 7;
          *(uint *)(param_1 + 0x14) = uVar24;
          uVar24 = uVar24 >> 1;
          *(uint *)(param_1 + 0x18) = uVar24;
          uVar7 = _LC68;
          uVar6 = _UNK_001223d8;
          uVar5 = __LC4;
          uVar47 = uVar43;
          if (uVar24 == 0) {
            for (; uVar24 = uVar25, uVar9 = uVar25 & 7, uVar25 < (uVar25 & 7); uVar25 = uVar25 + 8)
            {
              if (ptVar42 < ptVar13) {
                tVar4 = *ptVar42;
                ptVar42 = ptVar42 + 1;
                uVar24 = uVar25 + 8;
                uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                uVar9 = uVar25;
                break;
              }
LAB_00105b97:
              if ((param_7 & 2) != 0) {
                *(undefined4 *)param_1 = 5;
                uVar43 = (long)puVar44 - (long)param_5;
                iVar10 = 1;
                uVar14 = (long)ptVar42 - (long)param_2;
                uVar24 = uVar25;
                goto LAB_00104b63;
              }
LAB_00104d72:
            }
            uVar47 = uVar47 >> ((byte)uVar9 & 0x3f);
            uVar25 = uVar24 & 0xfffffff8;
            uVar40 = 0;
            do {
              if (uVar25 == 0) {
                if (ptVar42 < ptVar13) {
                  tVar4 = *ptVar42;
                  ptVar42 = ptVar42 + 1;
                  param_1[uVar40 + 0x2928] = tVar4;
                }
                else {
LAB_00105e90:
                  if ((param_7 & 2) != 0) {
                    *(undefined4 *)param_1 = 7;
                    uVar43 = (long)puVar44 - (long)param_5;
                    iVar10 = 1;
                    uVar14 = (long)ptVar42 - (long)param_2;
                    uVar24 = uVar25;
                    goto LAB_00104b63;
                  }
                  param_1[uVar40 + 0x2928] = (tinfl_decompressor_tag)0x0;
                }
              }
              else {
                uVar24 = uVar25;
                if (uVar25 < 8) {
                  do {
                    uVar25 = uVar24;
                    if (ptVar42 < ptVar13) {
                      tVar4 = *ptVar42;
                      ptVar42 = ptVar42 + 1;
                      uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                      break;
                    }
LAB_00105d17:
                    if ((param_7 & 2) != 0) {
                      *(undefined4 *)param_1 = 6;
                      uVar43 = (long)puVar44 - (long)param_5;
                      iVar10 = 1;
                      uVar14 = (long)ptVar42 - (long)param_2;
                      uVar24 = uVar25;
                      goto LAB_00104b63;
                    }
LAB_001056df:
                    uVar24 = uVar25 + 8;
                  } while (uVar25 + 8 < 8);
                }
                else {
                  uVar25 = uVar25 - 8;
                }
                param_1[uVar40 + 0x2928] = SUB81(uVar47,0);
                uVar47 = uVar47 >> 8;
              }
LAB_00104dcc:
              uVar24 = (int)uVar40 + 1;
              uVar40 = (ulong)uVar24;
            } while (uVar24 < 4);
            uVar40 = (ulong)*(ushort *)(param_1 + 0x2928);
            if ((ushort)~*(ushort *)(param_1 + 0x292a) != *(ushort *)(param_1 + 0x2928)) {
              uVar43 = (long)puVar44 - (long)param_5;
              uVar14 = (long)ptVar42 - (long)param_2;
              goto LAB_00104df7;
            }
            for (; uVar24 = uVar25, (int)uVar40 != 0; uVar40 = (ulong)((int)uVar40 - 1)) {
              if (uVar25 == 0) goto LAB_00105a02;
              if (uVar25 < 8) {
                do {
                  uVar25 = uVar24;
                  if (ptVar42 < ptVar13) {
                    tVar4 = *ptVar42;
                    ptVar42 = ptVar42 + 1;
                    uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                    break;
                  }
LAB_00105dd1:
                  if ((param_7 & 2) != 0) {
                    uVar43 = (long)puVar44 - (long)param_5;
                    *(undefined4 *)param_1 = 0x33;
                    iVar10 = 1;
                    uVar14 = (long)ptVar42 - (long)param_2;
                    uVar24 = uVar25;
                    goto LAB_00104b63;
                  }
LAB_00105324:
                  uVar24 = uVar25 + 8;
                } while (uVar25 + 8 < 8);
              }
              else {
                uVar25 = uVar25 - 8;
              }
              local_128 = (uint)uVar47 & 0xff;
              uVar47 = uVar47 >> 8;
              puVar21 = puVar44;
LAB_00104e44:
              if (puVar2 <= puVar21) {
                uVar43 = (long)puVar21 - (long)param_5;
                *(undefined4 *)param_1 = 0x34;
                iVar10 = 2;
                uVar14 = (long)ptVar42 - (long)param_2;
                uVar24 = uVar25;
                goto LAB_00104b63;
              }
              puVar44 = puVar21 + 1;
              *puVar21 = (uchar)local_128._0_1_;
            }
          }
          else {
            if (uVar24 == 3) {
              uVar43 = (long)puVar44 - (long)param_5;
              uVar14 = (long)ptVar42 - (long)param_2;
              goto LAB_0010581d;
            }
            if (uVar24 == 1) {
              *(undefined8 *)(param_1 + 0xde8) = __LC4;
              *(undefined8 *)(param_1 + 0xdf0) = uVar6;
              *(undefined8 *)(param_1 + 0xdf8) = uVar5;
              *(undefined8 *)(param_1 + 0xe00) = uVar6;
              uVar6 = _UNK_001223a8;
              uVar5 = __LC1;
              *(undefined8 *)(param_1 + 0x2c) = uVar7;
              *(undefined8 *)(param_1 + 0x48) = uVar5;
              *(undefined8 *)(param_1 + 0x50) = uVar6;
              *(undefined8 *)(param_1 + 0x58) = uVar5;
              *(undefined8 *)(param_1 + 0x60) = uVar6;
              *(undefined8 *)(param_1 + 0x68) = uVar5;
              *(undefined8 *)(param_1 + 0x70) = uVar6;
              *(undefined8 *)(param_1 + 0x78) = uVar5;
              *(undefined8 *)(param_1 + 0x80) = uVar6;
              *(undefined8 *)(param_1 + 0x88) = uVar5;
              *(undefined8 *)(param_1 + 0x90) = uVar6;
              *(undefined8 *)(param_1 + 0x98) = uVar5;
              *(undefined8 *)(param_1 + 0xa0) = uVar6;
              *(undefined8 *)(param_1 + 0xa8) = uVar5;
              *(undefined8 *)(param_1 + 0xb0) = uVar6;
              *(undefined8 *)(param_1 + 0xb8) = uVar5;
              *(undefined8 *)(param_1 + 0xc0) = uVar6;
              *(undefined8 *)(param_1 + 200) = uVar5;
              *(undefined8 *)(param_1 + 0xd0) = uVar6;
              uVar6 = _UNK_001223b8;
              uVar5 = __LC2;
              *(undefined8 *)(param_1 + 0x158) = 0x707070707070707;
              *(undefined8 *)(param_1 + 0xd8) = uVar5;
              *(undefined8 *)(param_1 + 0xe0) = uVar6;
              *(undefined8 *)(param_1 + 0xe8) = uVar5;
              *(undefined8 *)(param_1 + 0xf0) = uVar6;
              *(undefined8 *)(param_1 + 0xf8) = uVar5;
              *(undefined8 *)(param_1 + 0x100) = uVar6;
              *(undefined8 *)(param_1 + 0x108) = uVar5;
              *(undefined8 *)(param_1 + 0x110) = uVar6;
              *(undefined8 *)(param_1 + 0x118) = uVar5;
              *(undefined8 *)(param_1 + 0x120) = uVar6;
              *(undefined8 *)(param_1 + 0x128) = uVar5;
              *(undefined8 *)(param_1 + 0x130) = uVar6;
              *(undefined8 *)(param_1 + 0x138) = uVar5;
              *(undefined8 *)(param_1 + 0x140) = uVar6;
              uVar6 = _UNK_001223c8;
              uVar5 = __LC3;
              *(undefined8 *)(param_1 + 0x160) = 0x808080808080808;
              uVar43 = (ulong)*(uint *)(param_1 + 0x18);
              *(undefined8 *)(param_1 + 0x148) = uVar5;
              *(undefined8 *)(param_1 + 0x150) = uVar6;
              uVar23 = local_130;
            }
            else {
              uVar24 = 5;
              uVar40 = 0;
              while( true ) {
                uVar43 = uVar40;
                if (uVar25 < uVar24) {
                  do {
                    if (ptVar42 < ptVar13) {
                      tVar4 = *ptVar42;
                      ptVar42 = ptVar42 + 1;
                      uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                    }
                    else {
LAB_00105c32:
                      if ((param_7 & 2) != 0) {
                        *(undefined4 *)param_1 = 0xb;
                        uVar43 = (long)puVar44 - (long)param_5;
                        iVar10 = 1;
                        uVar14 = (long)ptVar42 - (long)param_2;
                        uVar24 = uVar25;
                        goto LAB_00104b63;
                      }
                    }
LAB_00104ef7:
                    uVar25 = uVar25 + 8;
                    uVar24 = (uint)(char)(&_LC69)[uVar40];
                    uVar43 = uVar40;
                  } while (uVar25 < uVar24);
                }
                uVar9 = (int)uVar43 + 1;
                uVar40 = (ulong)uVar9;
                uVar25 = uVar25 - uVar24;
                uVar28 = (uint)uVar47;
                uVar47 = uVar47 >> ((byte)uVar24 & 0x3f);
                *(uint *)(param_1 + uVar43 * 4 + 0x2c) =
                     ((1 << ((byte)uVar24 & 0x1f)) - 1U & uVar28) +
                     (&tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                       ::s_min_table_sizes)[uVar43];
                if (2 < uVar9) break;
                uVar24 = (uint)(char)(&_LC69)[uVar9];
              }
              *(undefined8 *)(param_1 + 0x1b88) = 0;
              uVar24 = 0;
              *(undefined8 *)(param_1 + 0x1ca0) = 0;
              puVar35 = (undefined8 *)((ulong)(param_1 + 0x1b90) & 0xfffffffffffffff8);
              for (uVar40 = (ulong)(((int)param_1 -
                                    (int)(undefined8 *)
                                         ((ulong)(param_1 + 0x1b90) & 0xfffffffffffffff8)) + 0x1ca8U
                                   >> 3); uVar40 != 0; uVar40 = uVar40 - 1) {
                *puVar35 = 0;
                puVar35 = puVar35 + (ulong)bVar48 * -2 + 1;
              }
              uVar9 = *(uint *)(param_1 + 0x34);
              while (uVar40 = (ulong)uVar24, uVar24 < uVar9) {
                uVar24 = uVar25;
                if (uVar25 < 3) {
                  do {
                    if (ptVar42 < ptVar13) {
                      tVar4 = *ptVar42;
                      ptVar42 = ptVar42 + 1;
                      uVar24 = uVar25 + 8;
                      uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                      uVar9 = *(uint *)(param_1 + 0x34);
                      goto LAB_00105587;
                    }
LAB_00105d46:
                    if ((param_7 & 2) != 0) {
                      *(undefined4 *)param_1 = 0xe;
                      uVar43 = (long)puVar44 - (long)param_5;
                      iVar10 = 1;
                      uVar14 = (long)ptVar42 - (long)param_2;
                      uVar24 = uVar25;
                      goto LAB_00104b63;
                    }
LAB_00105557:
                    uVar24 = uVar25 + 8;
                    uVar25 = uVar24;
                  } while (uVar24 < 3);
                  uVar9 = *(uint *)(param_1 + 0x34);
                }
LAB_00105587:
                uVar25 = uVar24 - 3;
                bVar16 = (byte)uVar47;
                uVar47 = uVar47 >> 3;
                param_1[(ulong)(byte)(&tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                                       ::s_length_dezigzag)[uVar40] + 0x1b88] =
                     (tinfl_decompressor_tag)(bVar16 & 7);
                uVar24 = (int)uVar40 + 1;
              }
              *(undefined4 *)(param_1 + 0x34) = 0x13;
              uVar43 = (ulong)*(uint *)(param_1 + 0x18);
              uVar23 = local_130;
            }
            while (-1 < (int)uVar43) {
              lVar31 = uVar43 * 0xda0;
              local_c8 = (undefined1  [16])0x0;
              local_b8 = (undefined1  [16])0x0;
              ptVar15 = param_1 + lVar31 + 0x168;
              local_a8 = (undefined1  [16])0x0;
              local_98 = (undefined1  [16])0x0;
              *(undefined8 *)ptVar15 = 0;
              *(undefined8 *)(ptVar15 + 0x7f8) = 0;
              puVar35 = (undefined8 *)((ulong)(ptVar15 + 8) & 0xfffffffffffffff8);
              for (uVar14 = (ulong)(((int)ptVar15 -
                                    (int)(undefined8 *)((ulong)(ptVar15 + 8) & 0xfffffffffffffff8))
                                    + 0x800U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar35 = 0;
                puVar35 = puVar35 + (ulong)bVar48 * -2 + 1;
              }
              ptVar15 = param_1 + lVar31 + 0x968;
              *(undefined8 *)ptVar15 = 0;
              *(undefined8 *)(ptVar15 + 0x478) = 0;
              puVar35 = (undefined8 *)((ulong)(ptVar15 + 8) & 0xfffffffffffffff8);
              for (uVar14 = (ulong)(((int)ptVar15 -
                                    (int)(undefined8 *)((ulong)(ptVar15 + 8) & 0xfffffffffffffff8))
                                    + 0x480U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar35 = 0;
                puVar35 = puVar35 + (ulong)bVar48 * -2 + 1;
              }
              uVar24 = *(uint *)(param_1 + 0x18);
              uVar9 = *(uint *)(param_1 + (ulong)uVar24 * 4 + 0x2c);
              if (uVar9 != 0) {
                ptVar15 = param_1 + lVar31;
                do {
                  ptVar1 = ptVar15 + 0x48;
                  ptVar15 = ptVar15 + 1;
                  *(int *)(local_c8 + (ulong)(byte)*ptVar1 * 4) =
                       *(int *)(local_c8 + (ulong)(byte)*ptVar1 * 4) + 1;
                } while (ptVar15 != param_1 + lVar31 + (ulong)uVar9);
              }
              uVar28 = 0;
              iVar10 = 0;
              local_88[0] = 0;
              local_88[1] = 0;
              lVar36 = 0;
              do {
                uVar28 = uVar28 + *(int *)(local_c8 + lVar36 + 4);
                iVar10 = (*(int *)(local_c8 + lVar36 + 4) + iVar10) * 2;
                *(int *)((long)local_88 + lVar36 + 8) = iVar10;
                lVar36 = lVar36 + 4;
              } while (lVar36 != 0x3c);
              if ((iVar10 != 0x10000) && (1 < uVar28)) {
                uVar43 = (long)puVar44 - (long)param_5;
                uVar14 = (long)ptVar42 - (long)param_2;
                goto LAB_00105947;
              }
              if (uVar9 != 0) {
                uVar14 = 0;
                iVar10 = -1;
                lVar36 = uVar43 * 0x6d0;
                do {
                  tVar4 = param_1[uVar14 + lVar31 + 0x48];
                  uVar43 = (ulong)(byte)tVar4;
                  if (tVar4 != (tinfl_decompressor_tag)0x0) {
                    uVar29 = (uint)(byte)tVar4;
                    uVar28 = local_88[uVar43];
                    local_88[uVar43] = uVar28 + 1;
                    uVar11 = 0;
                    uVar34 = uVar29;
                    do {
                      uVar12 = uVar11 * 2;
                      uVar39 = uVar28 & 1;
                      uVar11 = uVar12 | uVar39;
                      uVar34 = uVar34 - 1;
                      uVar28 = uVar28 >> 1;
                    } while (uVar34 != 0);
                    if (uVar29 < 0xb) {
                      if (uVar11 < 0x400) {
                        do {
                          uVar43 = (ulong)uVar11;
                          uVar11 = uVar11 + (1 << ((byte)tVar4 & 0x1f));
                          *(ushort *)(param_1 + (uVar43 + 0xb0 + lVar36) * 2 + 8) =
                               (ushort)(byte)tVar4 << 9 | (ushort)uVar14;
                        } while (uVar11 < 0x400);
                      }
                    }
                    else {
                      lVar3 = (ulong)(uVar12 & 0x3ff | uVar39) + 0xb0 + lVar36;
                      iVar8 = (int)*(short *)(param_1 + lVar3 * 2 + 8);
                      iVar19 = iVar10;
                      if (*(short *)(param_1 + lVar3 * 2 + 8) == 0) {
                        *(short *)(param_1 + lVar3 * 2 + 8) = (short)iVar10;
                        iVar19 = iVar10 + -2;
                        iVar8 = iVar10;
                      }
                      uVar12 = uVar12 >> 9;
                      iVar10 = iVar19;
                      while (uVar29 != 0xb) {
                        uVar12 = uVar12 >> 1;
                        lVar3 = (long)(int)~(iVar8 - (uVar12 & 1)) + 0x4b0 + lVar36;
                        iVar8 = (int)*(short *)(param_1 + lVar3 * 2 + 8);
                        iVar19 = iVar10;
                        if (*(short *)(param_1 + lVar3 * 2 + 8) == 0) {
                          *(short *)(param_1 + lVar3 * 2 + 8) = (short)iVar10;
                          iVar19 = iVar10 + -2;
                          iVar8 = iVar10;
                        }
                        uVar29 = (int)uVar43 - 1;
                        uVar43 = (ulong)uVar29;
                        iVar10 = iVar19;
                      }
                      *(ushort *)
                       (param_1 + ((long)(int)~(iVar8 - (uVar12 >> 1 & 1)) + 0x4b0 + lVar36) * 2 + 8
                       ) = (ushort)uVar14;
                    }
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar9);
              }
              if (uVar24 == 2) {
                uVar9 = *(uint *)(param_1 + 0x30);
                uVar28 = *(uint *)(param_1 + 0x2c);
                uVar24 = uVar9 + uVar28;
                if (uVar24 != 0) {
                  uVar40 = 0;
                  do {
                    if (uVar25 < 0xf) {
                      if ((long)ptVar13 - (long)ptVar42 < 2) {
                        do {
                          uVar24 = (uint)*(short *)(param_1 +
                                                   (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x1ca8);
                          if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x1ca8) < 0)
                          {
                            if (10 < uVar25) {
                              uVar9 = 10;
                              do {
                                uVar28 = ~uVar24;
                                uVar34 = uVar9 + 1;
                                uVar24 = (uint)*(short *)(param_1 +
                                                         ((ulong)((uint)(uVar47 >>
                                                                        ((byte)uVar9 & 0x3f)) & 1) +
                                                          0x1250 + (long)(int)uVar28) * 2 + 8);
                                if (-1 < *(short *)(param_1 +
                                                   ((ulong)((uint)(uVar47 >> ((byte)uVar9 & 0x3f)) &
                                                           1) + 0x1250 + (long)(int)uVar28) * 2 + 8)
                                   ) {
                                  uVar24 = (uint)*(short *)(param_1 +
                                                           (ulong)((uint)uVar47 & 0x3ff) * 2 +
                                                           0x1ca8);
                                  goto LAB_00106135;
                                }
                                uVar9 = uVar34;
                              } while (uVar25 != uVar34);
                            }
                          }
                          else if (((int)uVar24 >> 9) - 1U < uVar25) goto LAB_00106064;
                          if (ptVar42 < ptVar13) {
                            tVar4 = *ptVar42;
                            ptVar42 = ptVar42 + 1;
                            uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                          }
                          else {
LAB_00105e03:
                            if ((param_7 & 2) != 0) {
                              uVar43 = (long)puVar44 - (long)param_5;
                              uVar20 = 0x10;
                              iVar10 = 1;
                              uVar14 = (long)ptVar42 - (long)param_2;
                              goto LAB_0010583f;
                            }
                          }
LAB_0010578a:
                          uVar25 = uVar25 + 8;
                        } while (uVar25 < 0xf);
                      }
                      else {
                        ptVar15 = ptVar42 + 1;
                        bVar16 = (byte)uVar25;
                        tVar4 = *ptVar42;
                        ptVar42 = ptVar42 + 2;
                        uVar25 = uVar25 + 0x10;
                        uVar47 = uVar47 | (ulong)(byte)*ptVar15 << (bVar16 + 8 & 0x3f) |
                                          (ulong)(byte)tVar4 << (bVar16 & 0x3f);
                      }
                    }
                    uVar24 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x1ca8);
                    if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x1ca8) < 0) {
LAB_00106135:
                      iVar10 = 10;
                      do {
                        uVar9 = ~uVar24;
                        iVar8 = iVar10 + 1;
                        bVar16 = (byte)iVar10;
                        uVar24 = (uint)*(short *)(param_1 +
                                                 ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) +
                                                  0x1250 + (long)(int)uVar9) * 2 + 8);
                        iVar10 = iVar8;
                      } while (*(short *)(param_1 +
                                         ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x1250 +
                                         (long)(int)uVar9) * 2 + 8) < 0);
                    }
                    else {
LAB_00106064:
                      iVar8 = (int)uVar24 >> 9;
                      uVar24 = uVar24 & 0x1ff;
                    }
                    uVar25 = uVar25 - iVar8;
                    uVar47 = uVar47 >> ((byte)iVar8 & 0x3f);
                    local_128 = uVar24;
                    if ((int)uVar24 < 0x10) {
                      local_128._0_1_ = SUB41(uVar24,0);
                      uVar24 = (int)uVar40 + 1;
                      param_1[uVar40 + 0x292c] = local_128._0_1_;
                    }
                    else {
                      if ((uVar24 == 0x10) && ((int)uVar40 == 0)) {
                        local_128 = 0x10;
                        uVar43 = (long)puVar44 - (long)param_5;
                        uVar14 = (long)ptVar42 - (long)param_2;
                        goto LAB_00105834;
                      }
                      uVar43 = (ulong)(uVar24 - 0x10);
                      local_124 = (uint)(char)(&_LC0)[uVar43];
                      if (uVar25 < local_124) {
                        do {
                          while (ptVar42 < ptVar13) {
                            tVar4 = *ptVar42;
                            uVar24 = uVar25 + 8;
                            ptVar42 = ptVar42 + 1;
                            uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                            uVar25 = uVar24;
                            if (local_124 <= uVar24) goto LAB_001050d5;
                          }
LAB_00105d75:
                          if ((param_7 & 2) != 0) {
                            uVar43 = (long)puVar44 - (long)param_5;
                            uVar20 = 0x12;
                            iVar10 = 1;
                            uVar14 = (long)ptVar42 - (long)param_2;
                            goto LAB_0010583f;
                          }
LAB_001050a2:
                          uVar25 = uVar25 + 8;
                        } while (uVar25 < local_124);
LAB_001050d5:
                        uVar43 = (ulong)(local_128 - 0x10);
                      }
                      uVar9 = 0;
                      uVar25 = uVar25 - local_124;
                      uVar24 = (uint)uVar47;
                      uVar47 = uVar47 >> ((byte)local_124 & 0x3f);
                      uVar24 = (int)(char)(&_LC70)[uVar43] +
                               ((1 << ((byte)local_124 & 0x1f)) - 1U & uVar24);
                      if (local_128 == 0x10) {
                        uVar9 = (uint)(byte)param_1[(ulong)((int)uVar40 - 1) + 0x292c];
                      }
                      memset(param_1 + uVar40 + 0x292c,uVar9,(ulong)uVar24);
                      uVar24 = (int)uVar40 + uVar24;
                    }
                    uVar40 = (ulong)uVar24;
                    uVar28 = *(uint *)(param_1 + 0x2c);
                    uVar9 = *(uint *)(param_1 + 0x30);
                  } while (uVar24 < uVar28 + uVar9);
                  if (uVar28 + uVar9 != uVar24) {
                    uVar43 = (long)puVar44 - (long)param_5;
                    uVar14 = (long)ptVar42 - (long)param_2;
                    goto LAB_001058a8;
                  }
                }
                memcpy(param_1 + 0x48,param_1 + 0x292c,(ulong)uVar28);
                memcpy(param_1 + 0xde8,param_1 + 0x292c + uVar28,(ulong)uVar9);
                uVar40 = (ulong)uVar24;
                uVar23 = local_130;
              }
              iVar10 = *(int *)(param_1 + 0x18);
              *(uint *)(param_1 + 0x18) = iVar10 - 1U;
              uVar43 = (ulong)(iVar10 - 1U);
            }
joined_r0x001055db:
            while( true ) {
              local_130 = uVar23;
              bVar16 = (byte)uVar25;
              if (3 < (long)ptVar13 - (long)ptVar42) break;
              if (uVar25 < 0xf) {
                if (1 < (long)ptVar13 - (long)ptVar42) goto LAB_001067e7;
                do {
                  uVar9 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168);
                  if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168) < 0) {
                    if (10 < uVar25) {
                      uVar24 = 10;
                      do {
                        uVar28 = ~uVar9;
                        uVar34 = uVar24 + 1;
                        uVar9 = (uint)*(short *)(param_1 +
                                                ((ulong)((uint)(uVar47 >> ((byte)uVar24 & 0x3f)) & 1
                                                        ) + 0x4b0 + (long)(int)uVar28) * 2 + 8);
                        if (-1 < *(short *)(param_1 +
                                           ((ulong)((uint)(uVar47 >> ((byte)uVar24 & 0x3f)) & 1) +
                                            0x4b0 + (long)(int)uVar28) * 2 + 8)) {
                          uVar9 = (uint)*(short *)(param_1 +
                                                  (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168);
                          goto LAB_0010623e;
                        }
                        uVar24 = uVar34;
                      } while (uVar25 != uVar34);
                    }
                  }
                  else if (((int)uVar9 >> 9) - 1U < uVar25) goto LAB_00105ed2;
                  if (ptVar42 < ptVar13) {
                    tVar4 = *ptVar42;
                    ptVar42 = ptVar42 + 1;
                    uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                  }
                  else {
LAB_00105e5e:
                    if ((param_7 & 2) != 0) {
                      uVar43 = (long)puVar44 - (long)param_5;
                      *(undefined4 *)param_1 = 0x17;
                      iVar10 = 1;
                      uVar14 = (long)ptVar42 - (long)param_2;
                      uVar24 = uVar25;
                      goto LAB_00104b63;
                    }
                  }
LAB_00105417:
                  uVar25 = uVar25 + 8;
                } while (uVar25 < 0xf);
              }
LAB_00105eb7:
              uVar9 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168);
              if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168) < 0) {
LAB_0010623e:
                iVar10 = 10;
                do {
                  uVar24 = ~uVar9;
                  iVar8 = iVar10 + 1;
                  bVar16 = (byte)iVar10;
                  uVar9 = (uint)*(short *)(param_1 +
                                          ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                          (long)(int)uVar24) * 2 + 8);
                  iVar10 = iVar8;
                } while (*(short *)(param_1 +
                                   ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                   (long)(int)uVar24) * 2 + 8) < 0);
              }
              else {
LAB_00105ed2:
                iVar8 = (int)uVar9 >> 9;
                uVar9 = uVar9 & 0x1ff;
              }
              uVar40 = (ulong)uVar9;
              uVar25 = uVar25 - iVar8;
              uVar47 = uVar47 >> ((byte)iVar8 & 0x3f);
              uVar24 = uVar25;
              if (0xff < (int)uVar9) goto LAB_00105ef3;
LAB_00105974:
              if (puVar2 <= puVar44) {
                uVar43 = (long)puVar44 - (long)param_5;
                *(undefined4 *)param_1 = 0x18;
                iVar10 = 2;
                uVar14 = (long)ptVar42 - (long)param_2;
                uVar24 = uVar25;
                goto LAB_00104b63;
              }
              *puVar44 = (uchar)uVar40;
              puVar44 = puVar44 + 1;
              uVar23 = local_130;
            }
            if ((long)puVar2 - (long)puVar44 < 2) {
              if (uVar25 < 0xf) {
LAB_001067e7:
                ptVar15 = ptVar42 + 1;
                tVar4 = *ptVar42;
                ptVar42 = ptVar42 + 2;
                uVar25 = uVar25 + 0x10;
                uVar47 = uVar47 | (ulong)(byte)*ptVar15 << (bVar16 + 8 & 0x3f) |
                                  (ulong)(byte)tVar4 << (bVar16 & 0x3f);
              }
              goto LAB_00105eb7;
            }
            if (uVar25 < 0x1e) {
              uVar24 = *(uint *)ptVar42;
              ptVar42 = ptVar42 + 4;
              uVar25 = uVar25 + 0x20;
              uVar47 = uVar47 | (ulong)uVar24 << (bVar16 & 0x3f);
            }
            uVar9 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168);
            if ((int)uVar9 < 0) {
              iVar8 = 10;
              do {
                uVar24 = ~uVar9;
                iVar10 = iVar8 + 1;
                bVar16 = (byte)iVar8;
                uVar9 = (uint)*(short *)(param_1 +
                                        ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                        (long)(int)uVar24) * 2 + 8);
                iVar8 = iVar10;
              } while (*(short *)(param_1 +
                                 ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                 (long)(int)uVar24) * 2 + 8) < 0);
            }
            else {
              iVar10 = (int)uVar9 >> 9;
            }
            uVar40 = (ulong)uVar9;
            uVar24 = uVar25 - iVar10;
            uVar47 = uVar47 >> ((byte)iVar10 & 0x3f);
            if ((uVar9 & 0x100) == 0) {
              uVar25 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168);
              if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0x168) < 0) {
                iVar10 = 10;
                do {
                  uVar28 = ~uVar25;
                  iVar8 = iVar10 + 1;
                  bVar16 = (byte)iVar10;
                  uVar25 = (uint)*(short *)(param_1 +
                                           ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                           (long)(int)uVar28) * 2 + 8);
                  iVar10 = iVar8;
                } while (*(short *)(param_1 +
                                   ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0x4b0 +
                                   (long)(int)uVar28) * 2 + 8) < 0);
              }
              else {
                iVar8 = (int)uVar25 >> 9;
              }
              *puVar44 = (uchar)uVar9;
              uVar24 = uVar24 - iVar8;
              uVar47 = uVar47 >> ((byte)iVar8 & 0x3f);
              if ((uVar25 & 0x100) == 0) {
                puVar44[1] = (uchar)uVar25;
                puVar44 = puVar44 + 2;
                uVar25 = uVar24;
                uVar23 = local_130;
                goto joined_r0x001055db;
              }
              puVar44 = puVar44 + 1;
              uVar9 = uVar25;
            }
LAB_00105ef3:
            uVar9 = uVar9 & 0x1ff;
            uVar40 = (ulong)uVar9;
            if (uVar9 != 0x100) {
              local_124 = *(uint *)(tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                                    ::s_length_extra + (ulong)(uVar9 - 0x101) * 4);
              uVar40 = (ulong)*(uint *)(tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                                        ::s_length_base + (ulong)(uVar9 - 0x101) * 4);
              uVar25 = uVar24;
              if (local_124 != 0) {
                for (; uVar25 < local_124; uVar25 = uVar25 + 8) {
                  if (ptVar42 < ptVar13) {
                    tVar4 = *ptVar42;
                    ptVar42 = ptVar42 + 1;
                    uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                  }
                  else {
LAB_00105c90:
                    if ((param_7 & 2) != 0) {
                      *(undefined4 *)param_1 = 0x19;
                      uVar43 = (long)puVar44 - (long)param_5;
                      iVar10 = 1;
                      uVar14 = (long)ptVar42 - (long)param_2;
                      uVar24 = uVar25;
                      goto LAB_00104b63;
                    }
                  }
LAB_001053c7:
                }
                uVar24 = uVar25 - local_124;
                uVar25 = (uint)uVar47;
                uVar47 = uVar47 >> ((byte)local_124 & 0x3f);
                uVar40 = (ulong)((int)uVar40 + ((1 << ((byte)local_124 & 0x1f)) - 1U & uVar25));
              }
              if (uVar24 < 0xf) {
                uVar25 = uVar24;
                if ((long)ptVar13 - (long)ptVar42 < 2) {
                  do {
                    uVar9 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0xf08);
                    if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0xf08) < 0) {
                      if (10 < uVar25) {
                        uVar24 = 10;
                        do {
                          uVar28 = uVar24 + 1;
                          uVar9 = (uint)*(short *)(param_1 +
                                                  ((ulong)((uint)(uVar47 >> ((byte)uVar24 & 0x3f)) &
                                                          1) + 0xb80 + (long)(int)~uVar9) * 2 + 8);
                          if (-1 < (int)uVar9) {
                            uVar9 = (uint)*(short *)(param_1 +
                                                    (ulong)((uint)uVar47 & 0x3ff) * 2 + 0xf08);
                            goto LAB_00105fa3;
                          }
                          uVar24 = uVar28;
                        } while (uVar25 != uVar28);
                      }
                    }
                    else {
                      iVar10 = (int)uVar9 >> 9;
                      if (iVar10 - 1U < uVar25) goto LAB_00105b52;
                    }
                    if (ptVar42 < ptVar13) {
                      tVar4 = *ptVar42;
                      ptVar42 = ptVar42 + 1;
                      uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                    }
                    else {
LAB_00105da2:
                      if ((param_7 & 2) != 0) {
                        *(undefined4 *)param_1 = 0x1a;
                        uVar43 = (long)puVar44 - (long)param_5;
                        iVar10 = 1;
                        uVar14 = (long)ptVar42 - (long)param_2;
                        uVar24 = uVar25;
                        goto LAB_00104b63;
                      }
                    }
LAB_001054df:
                    uVar24 = uVar25 + 8;
                    uVar25 = uVar24;
                  } while (uVar24 < 0xf);
                }
                else {
                  ptVar15 = ptVar42 + 1;
                  bVar16 = (byte)uVar24;
                  tVar4 = *ptVar42;
                  ptVar42 = ptVar42 + 2;
                  uVar24 = uVar24 + 0x10;
                  uVar47 = uVar47 | (ulong)(byte)*ptVar15 << (bVar16 + 8 & 0x3f) |
                                    (ulong)(byte)tVar4 << (bVar16 & 0x3f);
                }
              }
              uVar9 = (uint)*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0xf08);
              uVar25 = uVar24;
              if (*(short *)(param_1 + (ulong)((uint)uVar47 & 0x3ff) * 2 + 0xf08) < 0) {
LAB_00105fa3:
                uVar43 = (ulong)uVar9;
                iVar8 = 10;
                do {
                  uVar24 = (uint)uVar43;
                  iVar10 = iVar8 + 1;
                  bVar16 = (byte)iVar8;
                  uVar43 = (ulong)(uint)(int)*(short *)(param_1 +
                                                       ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) &
                                                               1) + 0xb80 + (long)(int)~uVar24) * 2
                                                       + 8);
                  iVar8 = iVar10;
                } while (*(short *)(param_1 +
                                   ((ulong)((uint)(uVar47 >> (bVar16 & 0x3f)) & 1) + 0xb80 +
                                   (long)(int)~uVar24) * 2 + 8) < 0);
              }
              else {
                iVar10 = (int)uVar9 >> 9;
LAB_00105b52:
                uVar43 = (ulong)(uVar9 & 0x1ff);
              }
              uVar24 = uVar25 - iVar10;
              local_124 = *(uint *)(tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                                    ::s_dist_extra + uVar43 * 4);
              uVar47 = uVar47 >> ((byte)iVar10 & 0x3f);
              local_128 = *(uint *)(tinfl_decompress(buminiz::tinfl_decompressor_tag*,unsigned_char_const*,unsigned_long*,unsigned_char*,unsigned_char*,unsigned_long*,unsigned_int)
                                    ::s_dist_base + uVar43 * 4);
              uVar25 = uVar24;
              if (local_124 != 0) {
                if (uVar24 < local_124) {
                  do {
                    while (ptVar42 < ptVar13) {
                      tVar4 = *ptVar42;
                      uVar24 = uVar25 + 8;
                      ptVar42 = ptVar42 + 1;
                      uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                      uVar25 = uVar24;
                      if (local_124 <= uVar24) goto LAB_001051e2;
                    }
LAB_00105c61:
                    if ((param_7 & 2) != 0) {
                      *(undefined4 *)param_1 = 0x1b;
                      uVar43 = (long)puVar44 - (long)param_5;
                      iVar10 = 1;
                      uVar14 = (long)ptVar42 - (long)param_2;
                      uVar24 = uVar25;
                      goto LAB_00104b63;
                    }
LAB_001051af:
                    uVar24 = uVar25 + 8;
                    uVar25 = uVar24;
                  } while (uVar24 < local_124);
                }
LAB_001051e2:
                uVar25 = uVar24 - local_124;
                local_128 = local_128 + ((1 << ((byte)local_124 & 0x1f)) - 1U & (uint)uVar47);
                uVar47 = uVar47 >> ((byte)local_124 & 0x3f);
              }
              uVar23 = (long)puVar44 - (long)param_4;
              if ((uVar32 != 0) && (uVar23 < local_128)) {
                uVar43 = (long)puVar44 - (long)param_5;
                uVar14 = (long)ptVar42 - (long)param_2;
                local_130 = uVar23;
                goto LAB_001058c2;
              }
              uVar24 = (uint)uVar40;
              puVar21 = param_4 + (uVar23 - local_128 & (ulong)local_110);
              puVar17 = puVar21;
              if (puVar21 <= puVar44) {
                puVar17 = puVar44;
              }
              if (puVar2 < puVar17 + uVar40) {
                while ((int)uVar40 != 0) {
                  uVar40 = (ulong)((int)uVar40 - 1);
                  local_130 = uVar23;
                  if (puVar2 <= puVar44) goto LAB_00105924;
LAB_001058e4:
                  uVar23 = local_130 + 1;
                  *puVar44 = param_4[local_130 - local_128 & (ulong)local_110];
                  puVar44 = puVar44 + 1;
                }
                uVar40 = 0xffffffff;
                goto joined_r0x001055db;
              }
              if ((8 < uVar24) && (uVar24 <= local_128)) {
                puVar17 = puVar21;
                puVar30 = puVar44;
                do {
                  puVar18 = puVar17 + 8;
                  *(undefined4 *)puVar30 = *(undefined4 *)puVar17;
                  *(undefined4 *)(puVar30 + 4) = *(undefined4 *)(puVar17 + 4);
                  puVar17 = puVar18;
                  puVar30 = puVar30 + 8;
                } while (puVar18 < puVar21 + (uVar24 & 0xfffffff8));
                uVar43 = 8;
                if (puVar21 + 1 <= puVar21 + (uVar24 & 0xfffffff8)) {
                  uVar43 = (ulong)(uVar24 & 0xfffffff8);
                }
                puVar44 = puVar44 + uVar43;
                puVar21 = puVar21 + uVar43;
                uVar24 = uVar24 & 7;
                if (uVar24 < 3) {
                  if ((uVar40 & 7) == 0) {
                    uVar40 = 0;
                  }
                  else {
                    *puVar44 = *puVar21;
                    if ((uVar40 & 6) != 0) {
                      puVar44[1] = puVar21[1];
                    }
                    uVar40 = (ulong)uVar24;
                    puVar44 = puVar44 + uVar24;
                  }
                  goto joined_r0x001055db;
                }
                uVar40 = (ulong)uVar24;
              }
              do {
                puVar30 = puVar44;
                puVar17 = puVar21;
                uVar24 = (int)uVar40 - 3;
                uVar40 = (ulong)uVar24;
                puVar44 = puVar30 + 3;
                *puVar30 = *puVar17;
                puVar30[1] = puVar17[1];
                puVar30[2] = puVar17[2];
                puVar21 = puVar17 + 3;
              } while (2 < (int)uVar24);
              if (0 < (int)uVar24) {
                *puVar44 = puVar17[3];
                if (uVar24 == 2) {
                  puVar30[4] = puVar17[4];
                }
                puVar44 = puVar44 + uVar24;
              }
              goto joined_r0x001055db;
            }
          }
LAB_00105a0b:
        } while (((byte)param_1[0x14] & 1) == 0);
        uVar43 = (long)puVar44 - (long)param_5;
        uVar25 = uVar24;
        if ((param_7 & 1) != 0) {
          for (; uVar32 = uVar25, uVar24 = uVar25 & 7, uVar25 < (uVar25 & 7); uVar25 = uVar25 + 8) {
            if (ptVar42 < ptVar13) {
              tVar4 = *ptVar42;
              ptVar42 = ptVar42 + 1;
              uVar32 = uVar25 + 8;
              uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
              uVar24 = uVar25;
              break;
            }
LAB_00105ceb:
            if ((param_7 & 2) != 0) {
              *(undefined4 *)param_1 = 0x20;
              iVar10 = 1;
              uVar14 = (long)ptVar42 - (long)param_2;
              uVar24 = uVar25;
              goto LAB_00104b63;
            }
LAB_0010572f:
          }
          uVar47 = uVar47 >> ((byte)uVar24 & 0x3f);
          uVar25 = uVar32 & 0xfffffff8;
          uVar40 = 0;
          do {
            uVar9 = (uint)uVar40;
            if (uVar25 == 0) {
              if (ptVar42 < ptVar13) {
                uVar32 = (uint)(byte)*ptVar42;
                ptVar42 = ptVar42 + 1;
              }
              else {
LAB_00105e30:
                uVar9 = (uint)uVar40;
                uVar32 = param_7 & 2;
                if (uVar32 != 0) {
                  *(undefined4 *)param_1 = 0x2a;
                  iVar10 = 1;
                  uVar14 = (long)ptVar42 - (long)param_2;
                  uVar24 = uVar25;
                  goto LAB_00104b63;
                }
              }
            }
            else {
              uVar32 = uVar25;
              if (uVar25 < 8) {
                do {
                  uVar25 = uVar32;
                  uVar9 = (uint)uVar40;
                  if (ptVar42 < ptVar13) {
                    tVar4 = *ptVar42;
                    ptVar42 = ptVar42 + 1;
                    uVar47 = uVar47 | (ulong)(byte)tVar4 << ((byte)uVar25 & 0x3f);
                    break;
                  }
LAB_00105cbf:
                  if ((param_7 & 2) != 0) {
                    *(undefined4 *)param_1 = 0x29;
                    iVar10 = 1;
                    uVar14 = (long)ptVar42 - (long)param_2;
                    uVar24 = uVar25;
                    goto LAB_00104b63;
                  }
LAB_0010548f:
                  uVar9 = (uint)uVar40;
                  uVar32 = uVar25 + 8;
                } while (uVar25 + 8 < 8);
              }
              else {
                uVar25 = uVar25 - 8;
              }
              uVar32 = (uint)uVar47 & 0xff;
              uVar47 = uVar47 >> 8;
            }
LAB_0010536f:
            uVar40 = (ulong)(uVar9 + 1);
            *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) << 8 | uVar32;
          } while (uVar9 + 1 < 4);
        }
        uVar14 = (long)ptVar42 - (long)param_2;
LAB_00105809:
        *(undefined4 *)param_1 = 0x22;
        iVar10 = 0;
        uVar24 = uVar25;
      }
      else {
LAB_00104f9e:
        uVar40 = 1;
        uVar14 = (long)ptVar42 - (long)param_2;
LAB_00104faa:
        *(undefined4 *)param_1 = 0x24;
        uVar43 = 0;
        iVar10 = -1;
        uVar24 = uVar25;
      }
    }
    else {
      *(undefined4 *)param_1 = 1;
      uVar43 = 0;
      uVar14 = 0;
      iVar10 = 1;
    }
    break;
  case 2:
    if (param_2 < ptVar13) {
      uVar28 = (uint)*param_2;
      uVar9 = *(uint *)(param_1 + 8);
      ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
      *(uint *)(param_1 + 0xc) = (uint)*param_2;
      goto LAB_00104f6b;
    }
LAB_00105a91:
    uVar24 = uVar25;
    if ((param_7 & 2) != 0) {
      *(undefined4 *)param_1 = 2;
      uVar14 = (long)ptVar42 - (long)param_2;
      uVar43 = 0;
      iVar10 = 1;
      break;
    }
    uVar9 = *(uint *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar28 = uVar9 * 0x100;
LAB_00104f96:
    uVar25 = uVar24;
    if (uVar28 % 0x1f == 0) goto LAB_00105a3d;
    goto LAB_00104f9e;
  case 3:
    if (ptVar13 <= param_2) goto LAB_00105c03;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00104e8b;
  default:
    uVar43 = 0;
    uVar14 = 0;
    iVar10 = -1;
    uVar24 = uVar25;
    break;
  case 5:
    if (ptVar13 <= param_2) goto LAB_00105b97;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00104d72;
  case 6:
    if (ptVar13 <= param_2) goto LAB_00105d17;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_001056df;
  case 7:
    if (ptVar13 <= param_2) goto LAB_00105e90;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    param_1[uVar40 + 0x2928] = (tinfl_decompressor_tag)*param_2;
    goto LAB_00104dcc;
  case 9:
    goto LAB_0010585f;
  case 10:
    uVar43 = 0;
    uVar14 = 0;
LAB_0010581d:
    *(undefined4 *)param_1 = 10;
    iVar10 = -1;
    uVar24 = uVar25;
    break;
  case 0xb:
    if (ptVar13 <= param_2) goto LAB_00105c32;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00104ef7;
  case 0xe:
    if (ptVar13 <= param_2) goto LAB_00105d46;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00105557;
  case 0x10:
    if (ptVar13 <= param_2) goto LAB_00105e03;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_0010578a;
  case 0x11:
    uVar43 = 0;
    uVar14 = 0;
LAB_00105834:
    uVar20 = 0x11;
    iVar10 = -1;
    goto LAB_0010583f;
  case 0x12:
    if (ptVar13 <= param_2) goto LAB_00105d75;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_001050a2;
  case 0x15:
    uVar43 = 0;
    uVar14 = 0;
LAB_001058a8:
    uVar20 = 0x15;
    iVar10 = -1;
    goto LAB_0010583f;
  case 0x17:
    if (ptVar13 <= param_2) goto LAB_00105e5e;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00105417;
  case 0x18:
    goto LAB_00105974;
  case 0x19:
    if (ptVar13 <= param_2) goto LAB_00105c90;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_001053c7;
  case 0x1a:
    if (ptVar13 <= param_2) goto LAB_00105da2;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_001054df;
  case 0x1b:
    if (ptVar13 <= param_2) goto LAB_00105c61;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_001051af;
  case 0x20:
    if (param_2 < ptVar13) {
      ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
      uVar43 = 0;
      uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
      goto LAB_0010572f;
    }
    uVar43 = 0;
    goto LAB_00105ceb;
  case 0x22:
    uVar43 = 0;
    uVar14 = 0;
    goto LAB_00105809;
  case 0x23:
    uVar43 = 0;
    uVar14 = 0;
LAB_00105947:
    uVar20 = 0x23;
    iVar10 = -1;
LAB_0010583f:
    *(undefined4 *)param_1 = uVar20;
    uVar24 = uVar25;
    break;
  case 0x24:
    uVar14 = 0;
    goto LAB_00104faa;
  case 0x25:
    uVar43 = 0;
    uVar14 = 0;
LAB_001058c2:
    *(undefined4 *)param_1 = 0x25;
    iVar10 = -1;
    uVar24 = uVar25;
    break;
  case 0x26:
    goto LAB_0010586d;
  case 0x27:
    uVar43 = 0;
    uVar14 = 0;
LAB_00104df7:
    *(undefined4 *)param_1 = 0x27;
    iVar10 = -1;
    uVar24 = uVar25;
    break;
  case 0x28:
    uVar43 = 0;
    uVar14 = 0;
LAB_0010595c:
    *(undefined4 *)param_1 = 0x28;
    iVar10 = -1;
    uVar24 = uVar25;
    break;
  case 0x29:
    if (param_2 < ptVar13) {
      ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
      uVar43 = 0;
      uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
      goto LAB_0010548f;
    }
    uVar43 = 0;
    goto LAB_00105cbf;
  case 0x2a:
    if (param_2 < ptVar13) {
      uVar32 = (uint)*param_2;
      ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
      uVar43 = 0;
      goto LAB_0010536f;
    }
    uVar43 = 0;
    goto LAB_00105e30;
  case 0x33:
    if (ptVar13 <= param_2) goto LAB_00105dd1;
    ptVar42 = (tinfl_decompressor_tag *)(param_2 + 1);
    uVar47 = uVar47 | (ulong)*param_2 << (bVar16 & 0x3f);
    goto LAB_00105324;
  case 0x34:
    puVar21 = param_5;
    goto LAB_00104e44;
  case 0x35:
    if (param_5 < puVar2) goto LAB_001058e4;
LAB_00105924:
    uVar43 = (long)puVar44 - (long)param_5;
    *(undefined4 *)param_1 = 0x35;
    iVar10 = 2;
    uVar14 = (long)ptVar42 - (long)param_2;
    uVar24 = uVar25;
  }
LAB_00104b63:
  *(uint *)(param_1 + 4) = uVar24;
  *(ulong *)(param_1 + 0x38) = uVar47;
  *(uint *)(param_1 + 0x20) = local_128;
  *(int *)(param_1 + 0x24) = (int)uVar40;
  *(uint *)(param_1 + 0x28) = local_124;
  *(ulong *)(param_1 + 0x40) = local_130;
  *param_3 = uVar14;
  *param_6 = uVar43;
  if (((param_7 & 8) != 0) && (iVar10 != -1)) {
    uVar32 = *(uint *)(param_1 + 0x1c) & 0xffff;
    uVar24 = *(uint *)(param_1 + 0x1c) >> 0x10;
    pbVar46 = (byte *)(uVar43 % 0x15b0);
    if (uVar43 != 0) {
      if (pbVar46 < (byte *)0x8) {
        pbVar37 = (byte *)0x0;
        pbVar26 = param_5;
        pbVar22 = pbVar37;
        goto joined_r0x00104c74;
      }
      do {
        pbVar26 = param_5 + ((ulong)(pbVar46 + -8) >> 3) * 8 + 8;
        do {
          pbVar37 = param_5 + 8;
          iVar8 = *param_5 + uVar32;
          iVar45 = (uint)param_5[1] + iVar8;
          iVar41 = (uint)param_5[2] + iVar45;
          iVar38 = (uint)param_5[3] + iVar41;
          iVar33 = (uint)param_5[4] + iVar38;
          iVar27 = (uint)param_5[5] + iVar33;
          iVar19 = (uint)param_5[6] + iVar27;
          uVar32 = (uint)param_5[7] + iVar19;
          uVar24 = uVar24 + iVar8 + iVar45 + iVar41 + iVar38 + iVar33 + iVar27 + iVar19 + uVar32;
          param_5 = pbVar37;
        } while (pbVar37 != pbVar26);
        pbVar37 = (byte *)(ulong)((int)((ulong)(pbVar46 + -8) >> 3) * 8 + 8);
        param_5 = pbVar26;
        pbVar22 = pbVar37;
joined_r0x00104c74:
        while (pbVar37 < pbVar46) {
          uVar32 = uVar32 + *param_5;
          uVar24 = uVar24 + uVar32;
          pbVar37 = param_5 + 1 + ((long)pbVar22 - (long)pbVar26);
          param_5 = param_5 + 1;
        }
        uVar32 = uVar32 % 0xfff1;
        uVar24 = uVar24 % 0xfff1;
        uVar43 = uVar43 - (long)pbVar46;
        pbVar46 = (byte *)0x15b0;
      } while (uVar43 != 0);
    }
    iVar8 = uVar24 * 0x10000 + uVar32;
    *(int *)(param_1 + 0x1c) = iVar8;
    if (((iVar10 == 0) && ((param_7 & 1) != 0)) && (iVar8 != *(int *)(param_1 + 0x10))) {
      iVar10 = -2;
    }
  }
LAB_00104d00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105a02:
  uVar24 = uVar25;
  if ((int)uVar40 == 0) goto LAB_00105a0b;
LAB_0010585f:
  if (puVar2 <= puVar44) {
    *(undefined4 *)param_1 = 9;
    uVar43 = (long)puVar44 - (long)param_5;
    iVar10 = 2;
    uVar14 = (long)ptVar42 - (long)param_2;
    uVar24 = uVar25;
    goto LAB_00104b63;
  }
LAB_0010586d:
  if (ptVar13 <= ptVar42) {
    uVar43 = (long)puVar44 - (long)param_5;
    uVar14 = (long)ptVar42 - (long)param_2;
    if ((param_7 & 2) == 0) goto LAB_0010595c;
    *(undefined4 *)param_1 = 0x26;
    iVar10 = 1;
    uVar24 = uVar25;
    goto LAB_00104b63;
  }
  uVar43 = (long)ptVar13 - (long)ptVar42;
  if ((ulong)((long)puVar2 - (long)puVar44) < (ulong)((long)ptVar13 - (long)ptVar42)) {
    uVar43 = (long)puVar2 - (long)puVar44;
  }
  if (uVar40 < uVar43) {
    uVar43 = uVar40;
  }
  memcpy(puVar44,ptVar42,uVar43);
  ptVar42 = ptVar42 + uVar43;
  puVar44 = puVar44 + uVar43;
  uVar40 = (ulong)(uint)((int)uVar40 - (int)uVar43);
  goto LAB_00105a02;
}



/* buminiz::mz_inflate2(buminiz::mz_stream_s*, int, int) */

ulong buminiz::mz_inflate2(mz_stream_s *param_1,int param_2,int param_3)

{
  tinfl_decompressor_tag *ptVar1;
  int iVar2;
  tinfl_decompressor_tag *ptVar3;
  void *__dest;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong __n;
  long in_FS_OFFSET;
  int local_74;
  uint local_60;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (uint)(param_3 != 0) * 8;
  if ((param_1 == (mz_stream_s *)0x0) ||
     (ptVar3 = *(tinfl_decompressor_tag **)(param_1 + 0x38), ptVar3 == (tinfl_decompressor_tag *)0x0
     )) {
LAB_00106c02:
    uVar9 = 0xfffffffe;
    goto LAB_00106b39;
  }
  if (param_2 == 1) {
    local_74 = 2;
  }
  else {
    local_74 = param_2;
    if (((param_2 & 0xfffffffdU) != 0) && (param_2 != 4)) goto LAB_00106c02;
  }
  if (0 < *(int *)(ptVar3 + 0x2b08)) {
    local_60 = local_60 | 1;
  }
  iVar8 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(ptVar3 + 0x2b00);
  *(undefined4 *)(ptVar3 + 0x2b00) = 0;
  if (*(int *)(ptVar3 + 0xab0c) < 0) {
LAB_00106bf8:
    uVar9 = 0xfffffffd;
  }
  else {
    if (*(uint *)(ptVar3 + 0x2b04) == 0) {
      *(uint *)(ptVar3 + 0x2b04) = (uint)(local_74 == 4);
      if ((iVar4 != 0) && (local_74 == 4)) {
LAB_00106ab0:
        local_50 = (ulong)*(uint *)(param_1 + 8);
        local_48 = (ulong)*(uint *)(param_1 + 0x20);
        iVar8 = tinfl_decompress(ptVar3,*(uchar **)param_1,&local_50,*(uchar **)(param_1 + 0x18),
                                 *(uchar **)(param_1 + 0x18),&local_48,local_60 | 4);
        *(int *)(ptVar3 + 0xab0c) = iVar8;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - (int)local_50;
        uVar10 = *(uint *)(ptVar3 + 0x1c);
        *(ulong *)param_1 = *(long *)param_1 + (local_50 & 0xffffffff);
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (local_50 & 0xffffffff);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)local_48;
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (local_48 & 0xffffffff);
        *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (local_48 & 0xffffffff);
        *(ulong *)(param_1 + 0x60) = (ulong)uVar10;
        if (-1 < iVar8) {
          if (iVar8 == 0) {
LAB_00106b34:
            uVar9 = 1;
          }
          else {
            *(undefined4 *)(ptVar3 + 0xab0c) = 0xffffffff;
LAB_00106c18:
            uVar9 = 0xfffffffb;
          }
          goto LAB_00106b39;
        }
        goto LAB_00106bf8;
      }
      uVar10 = local_60 | 2;
      if (local_74 == 4) {
        uVar10 = local_60;
      }
    }
    else {
      if (local_74 != 4) goto LAB_00106c02;
      *(uint *)(ptVar3 + 0x2b04) = *(uint *)(ptVar3 + 0x2b04) | 1;
      uVar10 = local_60;
      if (iVar4 != 0) goto LAB_00106ab0;
    }
    local_60 = uVar10;
    uVar10 = *(uint *)(ptVar3 + 0x2afc);
    uVar9 = (ulong)*(uint *)(ptVar3 + 11000);
    if (uVar10 == 0) {
      uVar10 = *(uint *)(param_1 + 8);
      ptVar1 = ptVar3 + 0x2b0c;
      do {
        while( true ) {
          local_50 = (ulong)uVar10;
          local_48 = (ulong)(0x8000 - (int)uVar9);
          iVar4 = tinfl_decompress(ptVar3,*(uchar **)param_1,&local_50,(uchar *)ptVar1,
                                   (uchar *)(ptVar1 + uVar9),&local_48,local_60);
          __dest = *(void **)(param_1 + 0x18);
          *(int *)(ptVar3 + 0xab0c) = iVar4;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - (int)local_50;
          uVar10 = *(uint *)(ptVar3 + 11000);
          *(ulong *)param_1 = *(long *)param_1 + (local_50 & 0xffffffff);
          *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (local_50 & 0xffffffff);
          *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(ptVar3 + 0x1c);
          uVar5 = (uint)local_48;
          *(uint *)(ptVar3 + 0x2afc) = uVar5;
          uVar6 = *(uint *)(param_1 + 0x20);
          if (uVar5 <= *(uint *)(param_1 + 0x20)) {
            uVar6 = uVar5;
          }
          uVar9 = (ulong)uVar6;
          memcpy(__dest,ptVar1 + uVar10,uVar9);
          *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar6;
          iVar2 = *(int *)(ptVar3 + 11000);
          iVar7 = *(int *)(ptVar3 + 0x2afc);
          *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar9;
          *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar9;
          iVar7 = iVar7 - uVar6;
          uVar10 = iVar2 + uVar6 & 0x7fff;
          uVar9 = (ulong)uVar10;
          *(int *)(ptVar3 + 0x2afc) = iVar7;
          *(uint *)(ptVar3 + 11000) = uVar10;
          if (iVar4 < 0) goto LAB_00106bf8;
          if ((iVar4 == 1) && (iVar8 == 0)) goto LAB_00106c18;
          if (local_74 != 4) break;
          if (iVar4 == 0) {
            if (iVar7 == 0) goto LAB_00106b34;
            goto LAB_00106c18;
          }
          if (*(int *)(param_1 + 0x20) == 0) goto LAB_00106c18;
          uVar10 = *(uint *)(param_1 + 8);
        }
      } while ((((iVar4 != 0) && (uVar10 = *(uint *)(param_1 + 8), uVar10 != 0)) &&
               (*(int *)(param_1 + 0x20) != 0)) && (iVar7 == 0));
      uVar9 = (ulong)(iVar7 == 0 && iVar4 == 0);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x20);
      if (uVar10 <= *(uint *)(param_1 + 0x20)) {
        uVar6 = uVar10;
      }
      __n = (ulong)uVar6;
      memcpy(*(void **)(param_1 + 0x18),ptVar3 + uVar9 + 0x2b0c,__n);
      *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar6;
      iVar8 = *(int *)(ptVar3 + 11000);
      iVar4 = *(int *)(ptVar3 + 0x2afc);
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
      *(uint *)(ptVar3 + 0x2afc) = iVar4 - uVar6;
      *(uint *)(ptVar3 + 11000) = iVar8 + uVar6 & 0x7fff;
      uVar9 = (ulong)(iVar4 - uVar6 == 0 && *(int *)(ptVar3 + 0xab0c) == 0);
    }
  }
LAB_00106b39:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* buminiz::mz_inflate(buminiz::mz_stream_s*, int) */

void buminiz::mz_inflate(mz_stream_s *param_1,int param_2)

{
  mz_inflate2(param_1,param_2,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::mz_uncompress(unsigned char*, unsigned long*, unsigned char const*, unsigned long) */

ulong buminiz::mz_uncompress(uchar *param_1,ulong *param_2,uchar *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  mz_stream_s *pmVar6;
  long in_FS_OFFSET;
  uchar *local_98;
  int local_90;
  uchar *local_80;
  undefined4 local_78;
  ulong local_70;
  undefined4 *local_60;
  code *local_58;
  code *pcStack_50;
  undefined8 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pmVar6 = (mz_stream_s *)&local_98;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pmVar6 = 0;
    pmVar6 = pmVar6 + 8;
  }
  if ((*param_2 | param_4) >> 0x20 == 0) {
    local_90 = (int)param_4;
    local_78 = (undefined4)*param_2;
    local_58 = def_alloc_func;
    pcStack_50 = def_free_func;
    local_98 = param_3;
    local_80 = param_1;
    puVar3 = (undefined4 *)def_alloc_func((void *)0x0,1,0xab10);
    uVar2 = _UNK_001224d8;
    uVar1 = __LC66;
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0xfffffffc;
    }
    else {
      *puVar3 = 0;
      puVar3[0x2ac3] = 1;
      puVar3[0xac2] = 0xf;
      *(undefined8 *)(puVar3 + 0xabe) = uVar1;
      *(undefined8 *)(puVar3 + 0xac0) = uVar2;
      local_60 = puVar3;
      uVar4 = mz_inflate2((mz_stream_s *)&local_98,4,1);
      if ((int)uVar4 == 1) {
        *param_2 = local_70;
        if (local_60 != (undefined4 *)0x0) {
          (*pcStack_50)(local_48);
        }
        uVar4 = 0;
      }
      else {
        if (local_60 != (undefined4 *)0x0) {
          (*pcStack_50)(local_48);
          uVar4 = uVar4 & 0xffffffff;
        }
        if (((int)uVar4 == -5) && (uVar4 = uVar4 & 0xffffffff, local_90 == 0)) {
          uVar4 = 0xfffffffd;
        }
      }
    }
  }
  else {
    uVar4 = 0xffffd8f0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* buminiz::tinfl_decompress_mem_to_heap(void const*, unsigned long, unsigned long*, int) */

uchar * buminiz::tinfl_decompress_mem_to_heap
                  (void *param_1,ulong param_2,ulong *param_3,int param_4)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  ulong uVar4;
  size_t sVar5;
  ulong __size;
  uchar *__ptr;
  long in_FS_OFFSET;
  ulong local_2b48;
  ulong local_2b40;
  undefined4 local_2b38 [2750];
  long local_40;
  
  sVar5 = 0;
  puVar3 = (uchar *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_2b40 = 0;
  local_2b38[0] = 0;
  local_2b48 = param_2;
  __size = sVar5;
  __ptr = (uchar *)0x0;
  while( true ) {
    iVar1 = tinfl_decompress((tinfl_decompressor_tag *)local_2b38,(uchar *)((long)param_1 + sVar5),
                             &local_2b48,__ptr,puVar3,&local_2b40,param_4 & 0xfffffff9U | 4);
    if ((iVar1 < 0) || (iVar1 == 1)) break;
    uVar4 = local_2b40 + *param_3;
    *param_3 = uVar4;
    sVar5 = sVar5 + local_2b48;
    puVar3 = __ptr;
    if (iVar1 == 0) goto LAB_00106eec;
    __size = __size * 2;
    if (__size < 0x80) {
      __size = 0x80;
    }
    puVar2 = (uchar *)realloc(__ptr,__size);
    if (puVar2 == (uchar *)0x0) break;
    puVar3 = puVar2 + uVar4;
    local_2b40 = __size - uVar4;
    local_2b48 = param_2 - sVar5;
    __ptr = puVar2;
  }
  puVar3 = (uchar *)0x0;
  free(__ptr);
  *param_3 = 0;
LAB_00106eec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tinfl_decompress_mem_to_mem(void*, unsigned long, void const*, unsigned long, int) */

ulong buminiz::tinfl_decompress_mem_to_mem
                (void *param_1,ulong param_2,void *param_3,ulong param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_2b18;
  ulong local_2b10;
  undefined4 local_2b08 [2750];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b08[0] = 0;
  local_2b18 = param_4;
  local_2b10 = param_2;
  iVar1 = tinfl_decompress((tinfl_decompressor_tag *)local_2b08,(uchar *)param_3,&local_2b18,
                           (uchar *)param_1,(uchar *)param_1,&local_2b10,param_5 & 0xfffffff9U | 4);
  uVar2 = 0xffffffffffffffff;
  if (iVar1 == 0) {
    uVar2 = local_2b10;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tinfl_decompress_mem_to_callback(void const*, unsigned long*, int (*)(void const*, int,
   void*), void*, int) */

uint buminiz::tinfl_decompress_mem_to_callback
               (void *param_1,ulong *param_2,_func_int_void_ptr_int_void_ptr *param_3,void *param_4,
               int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar *__ptr;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_2b48;
  ulong local_2b40;
  undefined4 local_2b38 [2750];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (uchar *)malloc(0x8000);
  if (__ptr == (uchar *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    local_2b38[0] = 0;
    while( true ) {
      local_2b48 = *param_2 - uVar4;
      local_2b40 = 0x8000 - uVar5;
      iVar2 = tinfl_decompress((tinfl_decompressor_tag *)local_2b38,(uchar *)((long)param_1 + uVar4)
                               ,&local_2b48,__ptr,__ptr + uVar5,&local_2b40,param_5 & 0xfffffff9);
      uVar4 = uVar4 + local_2b48;
      iVar1 = (int)local_2b40;
      if (local_2b40 != 0) {
        uVar3 = (*param_3)(__ptr + uVar5,iVar1,param_4);
        if (uVar3 == 0) goto LAB_00107133;
      }
      if (iVar2 != 2) break;
      uVar5 = (ulong)(iVar1 + (int)uVar5 & 0x7fff);
    }
    uVar3 = (uint)(iVar2 == 0);
LAB_00107133:
    free(__ptr);
    *param_2 = uVar4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_compress(buminiz::tdefl_compressor*, void const*, unsigned long*, void*, unsigned
   long*, buminiz::tdefl_flush) */

ulong buminiz::tdefl_compress
                (tdefl_compressor *param_1,tdefl_compressor *param_2,ulong *param_3,long param_4,
                long *param_5,int param_6)

{
  undefined8 uVar1;
  tdefl_compressor tVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  tdefl_compressor *ptVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  tdefl_compressor *ptVar16;
  tdefl_compressor *ptVar17;
  tdefl_compressor *ptVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  tdefl_compressor *ptVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  bool bVar29;
  byte bVar30;
  uint local_80;
  int local_5c;
  
  bVar30 = 0;
  if (param_1 == (tdefl_compressor *)0x0) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0;
    }
    if (param_5 == (long *)0x0) {
      return 0xfffffffe;
    }
    *param_5 = 0;
    return 0xfffffffe;
  }
  *(ulong **)(param_1 + 0x98) = param_3;
  *(tdefl_compressor **)(param_1 + 0x88) = param_2;
  *(tdefl_compressor **)(param_1 + 0xb0) = param_2;
  *(long *)(param_1 + 0x90) = param_4;
  *(long **)(param_1 + 0xa0) = param_5;
  bVar29 = param_5 != (long *)0x0 || param_4 != 0;
  if (param_3 == (ulong *)0x0) {
    *(undefined1 (*) [16])(param_1 + 0xb8) = (undefined1  [16])0x0;
    *(int *)(param_1 + 0xa8) = param_6;
    if ((((*(long *)param_1 != 0) != bVar29) && (*(int *)(param_1 + 0x84) == 0)) &&
       ((uVar27 = *(uint *)(param_1 + 0x80), param_6 == 4 || (uVar27 == 0)))) {
      uVar28 = 0;
      goto LAB_0010724e;
    }
LAB_00107e86:
    if (param_5 == (long *)0x0) goto LAB_00107e92;
  }
  else {
    uVar28 = *param_3;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(ulong *)(param_1 + 0xb8) = uVar28;
    *(int *)(param_1 + 0xa8) = param_6;
    if (((((*(long *)param_1 != 0) == bVar29) || (*(int *)(param_1 + 0x84) != 0)) ||
        ((uVar27 = *(uint *)(param_1 + 0x80), param_6 != 4 && (uVar27 != 0)))) ||
       ((*param_3 != 0 && (param_2 == (tdefl_compressor *)0x0)))) {
      *param_3 = 0;
      goto LAB_00107e86;
    }
LAB_0010724e:
    if ((param_5 == (long *)0x0) || ((*param_5 == 0 || (param_4 != 0)))) {
      *(uint *)(param_1 + 0x80) = uVar27 | param_6 == 4;
      if ((*(int *)(param_1 + 0x74) != 0) || (*(int *)(param_1 + 0x78) != 0)) goto LAB_00107720;
      uVar27 = *(uint *)(param_1 + 0x10);
      ptVar17 = param_2;
      if ((uVar27 & 0xb4fff) == 0x4001) {
        uVar27 = *(uint *)(param_1 + 0x24);
        uVar13 = *(uint *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 0x54);
        uVar15 = *(uint *)(param_1 + 0x2c);
        iVar25 = *(int *)(param_1 + 0x50);
        ptVar17 = *(tdefl_compressor **)(param_1 + 0x30);
        uVar24 = uVar27 & 0x7fff;
        ptVar16 = *(tdefl_compressor **)(param_1 + 0x38);
        do {
          uVar28 = *(ulong *)(param_1 + 0xb8);
          if (uVar28 == 0) {
            if ((*(int *)(param_1 + 0xa8) == 0) || (uVar13 == 0)) {
LAB_001084bc:
              *(uint *)(param_1 + 0x24) = uVar27;
              *(uint *)(param_1 + 0x2c) = uVar15;
              *(uint *)(param_1 + 0x28) = uVar13;
              uVar27 = *(uint *)(param_1 + 0x10);
              *(int *)(param_1 + 0x54) = iVar7;
              *(tdefl_compressor **)(param_1 + 0x30) = ptVar17;
              *(tdefl_compressor **)(param_1 + 0x38) = ptVar16;
              *(int *)(param_1 + 0x50) = iVar25;
              goto LAB_001076d3;
            }
            if (0x8000 - uVar13 < uVar15) {
              uVar15 = 0x8000 - uVar13;
            }
          }
          else {
            uVar20 = uVar27 + uVar13;
            uVar11 = (ulong)(0x1000 - uVar13);
            if (uVar28 < 0x1000 - uVar13) {
              uVar11 = uVar28;
            }
            uVar13 = uVar13 + (int)uVar11;
            *(ulong *)(param_1 + 0xb8) = uVar28 - uVar11;
            if (uVar11 == 0) {
              iVar14 = *(int *)(param_1 + 0xa8);
            }
            else {
              ptVar18 = *(tdefl_compressor **)(param_1 + 0xb0);
              uVar11 = uVar11 & 0xffffffff;
              do {
                uVar20 = uVar20 & 0x7fff;
                uVar26 = (uint)uVar11;
                uVar6 = 0x8000 - uVar20;
                if (uVar26 < 0x8000 - uVar20) {
                  uVar6 = uVar26;
                }
                memcpy(param_1 + (ulong)uVar20 + 200,ptVar18,(ulong)uVar6);
                if (uVar20 < 0x101) {
                  ptVar18 = *(tdefl_compressor **)(param_1 + 0xb0);
                  ptVar12 = param_1 + (ulong)uVar20 + 0x80c8;
                  uVar21 = 0x101 - uVar20;
                  if (uVar6 < 0x101 - uVar20) {
                    uVar21 = uVar6;
                  }
                  if (7 < uVar21) {
                    *(undefined8 *)ptVar12 = *(undefined8 *)ptVar18;
                    *(undefined8 *)(ptVar12 + ((ulong)uVar21 - 8)) =
                         *(undefined8 *)(ptVar18 + ((ulong)uVar21 - 8));
                    lVar10 = (long)ptVar12 - (long)((ulong)(ptVar12 + 8) & 0xfffffffffffffff8);
                    ptVar18 = ptVar18 + -lVar10;
                    puVar23 = (undefined8 *)((ulong)(ptVar12 + 8) & 0xfffffffffffffff8);
                    for (uVar28 = (ulong)((int)lVar10 + uVar21 >> 3); uVar28 != 0;
                        uVar28 = uVar28 - 1) {
                      *puVar23 = *(undefined8 *)ptVar18;
                      ptVar18 = ptVar18 + ((ulong)bVar30 * -2 + 1) * 8;
                      puVar23 = puVar23 + (ulong)bVar30 * -2 + 1;
                    }
                    goto LAB_00108380;
                  }
                  if ((uVar21 & 4) == 0) {
                    if (uVar21 != 0) {
                      *ptVar12 = *ptVar18;
                      if ((uVar21 & 2) == 0) goto LAB_00108380;
                      *(undefined2 *)(ptVar12 + ((ulong)uVar21 - 2)) =
                           *(undefined2 *)(ptVar18 + ((ulong)uVar21 - 2));
                      ptVar18 = *(tdefl_compressor **)(param_1 + 0xb0);
                    }
                  }
                  else {
                    *(undefined4 *)ptVar12 = *(undefined4 *)ptVar18;
                    *(undefined4 *)(ptVar12 + ((ulong)uVar21 - 4)) =
                         *(undefined4 *)(ptVar18 + ((ulong)uVar21 - 4));
                    ptVar18 = *(tdefl_compressor **)(param_1 + 0xb0);
                  }
                }
                else {
LAB_00108380:
                  ptVar18 = *(tdefl_compressor **)(param_1 + 0xb0);
                }
                uVar20 = uVar6 + uVar20;
                ptVar18 = ptVar18 + uVar6;
                *(tdefl_compressor **)(param_1 + 0xb0) = ptVar18;
                uVar11 = (ulong)(uVar26 - uVar6);
              } while (uVar26 - uVar6 != 0);
              iVar14 = *(int *)(param_1 + 0xa8);
            }
            if (0x8000 - uVar13 < uVar15) {
              uVar15 = 0x8000 - uVar13;
            }
            if ((iVar14 == 0) && (uVar13 < 0x1000)) goto LAB_001084bc;
          }
          if (3 < uVar13) {
LAB_00107fba:
            do {
              ptVar18 = param_1 + (ulong)uVar24 + 200;
              uVar6 = *(uint *)ptVar18;
              uVar26 = uVar6 & 0xffffff;
              lVar10 = (ulong)((uVar26 >> 0x11 ^ uVar26) & 0xfff) + 0x14950;
              uVar5 = *(ushort *)(param_1 + lVar10 * 2 + 10);
              *(short *)(param_1 + lVar10 * 2 + 10) = (short)uVar27;
              uVar21 = uVar27 - uVar5;
              uVar20 = uVar21 & 0xffff;
              if ((uVar15 < uVar20) ||
                 (ptVar12 = param_1 + (ulong)(uVar5 & 0x7fff) + 200,
                 uVar26 != (*(uint *)ptVar12 & 0xffffff))) {
LAB_0010801a:
                *ptVar17 = SUB41(uVar26,0);
                uVar9 = 1;
                ptVar18 = ptVar17 + 1;
                *ptVar16 = (tdefl_compressor)((byte)*ptVar16 >> 1);
                *(short *)(param_1 + (ulong)(uVar6 & 0xff) * 2 + 0x81ca) =
                     *(short *)(param_1 + (ulong)(uVar6 & 0xff) * 2 + 0x81ca) + 1;
              }
              else {
                local_5c = 0x20;
                ptVar22 = ptVar18;
                do {
                  if (*(short *)(ptVar22 + 2) != *(short *)(ptVar12 + 2)) {
                    ptVar22 = ptVar22 + 2;
                    ptVar12 = ptVar12 + 2;
LAB_001081d3:
                    uVar9 = (uint)(*ptVar12 == *ptVar22) + ((int)ptVar22 - (int)ptVar18);
                    if ((uVar9 < 3) || ((uVar9 == 3 && (0x1fff < uVar20)))) goto LAB_0010801a;
                    goto LAB_00108200;
                  }
                  if (*(short *)(ptVar22 + 4) != *(short *)(ptVar12 + 4)) {
                    ptVar22 = ptVar22 + 4;
                    ptVar12 = ptVar12 + 4;
                    goto LAB_001081d3;
                  }
                  if (*(short *)(ptVar22 + 6) != *(short *)(ptVar12 + 6)) {
                    ptVar22 = ptVar22 + 6;
                    ptVar12 = ptVar12 + 6;
                    goto LAB_001081d3;
                  }
                  ptVar22 = ptVar22 + 8;
                  ptVar12 = ptVar12 + 8;
                  if (*(short *)ptVar22 != *(short *)ptVar12) goto LAB_001081d3;
                  local_5c = local_5c + -1;
                } while (local_5c != 0);
                if (uVar20 == 0) goto LAB_0010801a;
                uVar9 = 0x102;
LAB_00108200:
                uVar20 = uVar20 - 1;
                if (uVar13 <= uVar9) {
                  uVar9 = uVar13;
                }
                ptVar18 = ptVar17 + 3;
                bVar3 = s_tdefl_small_dist_sym[uVar20 & 0x1ff];
                *ptVar17 = (tdefl_compressor)((char)uVar9 - 3);
                *(short *)(ptVar17 + 1) = (short)uVar21 + -1;
                *ptVar16 = (tdefl_compressor)((byte)*ptVar16 >> 1 | 0x80);
                bVar4 = s_tdefl_large_dist_sym[uVar20 >> 8];
                if (uVar20 < 0x200) {
                  bVar4 = bVar3;
                }
                *(short *)(param_1 + (ulong)bVar4 * 2 + 0x840a) =
                     *(short *)(param_1 + (ulong)bVar4 * 2 + 0x840a) + 1;
                *(short *)(param_1 +
                          (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar9 - 3) * 2) * 2 + 0x81ca)
                     = *(short *)(param_1 +
                                 (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar9 - 3) * 2) * 2 +
                                 0x81ca) + 1;
              }
              iVar25 = iVar25 + -1;
              ptVar17 = ptVar18;
              if (iVar25 == 0) {
                iVar25 = 8;
                ptVar17 = ptVar18 + 1;
                ptVar16 = ptVar18;
              }
              uVar15 = uVar15 + uVar9;
              iVar7 = iVar7 + uVar9;
              uVar27 = uVar27 + uVar9;
              if (0x8000 < uVar15) {
                uVar15 = 0x8000;
              }
              uVar13 = uVar13 - uVar9;
              uVar24 = uVar24 + uVar9 & 0x7fff;
              if (ptVar17 <= param_1 + 0x192a2) {
                if (uVar13 < 4) break;
                goto LAB_00107fba;
              }
              *(uint *)(param_1 + 0x28) = uVar13;
              *(uint *)(param_1 + 0x24) = uVar27;
              *(uint *)(param_1 + 0x2c) = uVar15;
              *(int *)(param_1 + 0x54) = iVar7;
              *(tdefl_compressor **)(param_1 + 0x30) = ptVar17;
              *(tdefl_compressor **)(param_1 + 0x38) = ptVar16;
              *(int *)(param_1 + 0x50) = iVar25;
              iVar7 = tdefl_flush_block(param_1,0);
              bVar29 = iVar7 < 0;
              if (iVar7 != 0) goto LAB_001076c4;
              iVar7 = *(int *)(param_1 + 0x54);
              ptVar17 = *(tdefl_compressor **)(param_1 + 0x30);
              ptVar16 = *(tdefl_compressor **)(param_1 + 0x38);
              iVar25 = *(int *)(param_1 + 0x50);
            } while (3 < uVar13);
          }
          if (uVar13 != 0) {
            iVar14 = uVar13 + 1 + uVar27;
            do {
              while( true ) {
                iVar7 = iVar7 + 1;
                tVar2 = param_1[(ulong)uVar24 + 200];
                *ptVar17 = tVar2;
                *ptVar16 = (tdefl_compressor)((byte)*ptVar16 >> 1);
                iVar25 = iVar25 + -1;
                ptVar18 = ptVar17 + 1;
                if (iVar25 == 0) {
                  iVar25 = 8;
                  ptVar18 = ptVar17 + 2;
                  ptVar16 = ptVar17 + 1;
                }
                ptVar17 = ptVar18;
                *(short *)(param_1 + (ulong)(byte)tVar2 * 2 + 0x81ca) =
                     *(short *)(param_1 + (ulong)(byte)tVar2 * 2 + 0x81ca) + 1;
                uVar20 = uVar15 + 1;
                uVar27 = iVar14 - uVar13;
                uVar15 = 0x8000;
                if (uVar20 < 0x8001) {
                  uVar15 = uVar20;
                }
                uVar13 = uVar13 - 1;
                uVar24 = uVar24 + 1 & 0x7fff;
                if (param_1 + 0x192a2 < ptVar17) break;
                if (uVar13 == 0) goto LAB_00108556;
              }
              *(uint *)(param_1 + 0x24) = uVar27;
              *(uint *)(param_1 + 0x28) = uVar13;
              *(uint *)(param_1 + 0x2c) = uVar15;
              *(int *)(param_1 + 0x54) = iVar7;
              *(tdefl_compressor **)(param_1 + 0x30) = ptVar17;
              *(tdefl_compressor **)(param_1 + 0x38) = ptVar16;
              *(int *)(param_1 + 0x50) = iVar25;
              iVar7 = tdefl_flush_block(param_1,0);
              bVar29 = iVar7 < 0;
              if (iVar7 != 0) goto LAB_001076c4;
              iVar7 = *(int *)(param_1 + 0x54);
              ptVar17 = *(tdefl_compressor **)(param_1 + 0x30);
              ptVar16 = *(tdefl_compressor **)(param_1 + 0x38);
              iVar25 = *(int *)(param_1 + 0x50);
            } while (uVar13 != 0);
          }
LAB_00108556:
          uVar13 = 0;
        } while( true );
      }
LAB_001072b5:
      if (uVar28 != 0) goto LAB_001075d5;
LAB_001072c0:
      if ((param_6 != 0) && (uVar13 = *(uint *)(param_1 + 0x28), uVar13 != 0)) {
        uVar15 = *(uint *)(param_1 + 0x2c);
        ptVar16 = ptVar17;
        if (uVar15 + uVar13 < 2) goto LAB_001076ad;
LAB_001072e9:
        uVar20 = *(int *)(param_1 + 0x24) + uVar13;
        uVar24 = uVar20 - 2;
        uVar6 = (uint)(byte)param_1[(ulong)(uVar24 & 0x7fff) + 200] << 5 ^
                (uint)(byte)param_1[(ulong)(uVar20 - 1 & 0x7fff) + 200];
        uVar11 = (ulong)(0x102 - uVar13);
        if (uVar28 < 0x102 - uVar13) {
          uVar11 = uVar28;
        }
        uVar13 = uVar13 + (int)uVar11;
        ptVar17 = ptVar16 + uVar11;
        uVar28 = uVar28 - uVar11;
        *(uint *)(param_1 + 0x28) = uVar13;
        while (ptVar16 != ptVar17) {
          uVar20 = uVar20 & 0x7fff;
          tVar2 = *ptVar16;
          ptVar16 = ptVar16 + 1;
          param_1[(ulong)uVar20 + 200] = tVar2;
          if (uVar20 < 0x101) {
            param_1[(ulong)(uVar20 + 0x8000) + 200] = tVar2;
          }
          uVar20 = uVar20 + 1;
          uVar6 = (uVar6 << 5 ^ (uint)(byte)tVar2) & 0x7fff;
          *(undefined2 *)(param_1 + (ulong)(uVar24 & 0x7fff) * 2 + 0x192aa) =
               *(undefined2 *)(param_1 + ((ulong)uVar6 + 0x14950) * 2 + 10);
          *(short *)(param_1 + ((ulong)uVar6 + 0x14950) * 2 + 10) = (short)uVar24;
          uVar24 = uVar24 + 1;
        }
LAB_001073b8:
        if (0x8000 - uVar13 <= uVar15) {
          uVar15 = 0x8000 - uVar13;
        }
        *(uint *)(param_1 + 0x2c) = uVar15;
        if ((0x101 < uVar13) || (param_6 != 0)) {
          do {
            uVar20 = *(uint *)(param_1 + 0x24);
            uVar24 = *(uint *)(param_1 + 0x68);
            uVar6 = uVar20 & 0x7fff;
            uVar11 = (ulong)uVar6;
            if (uVar24 == 0) {
              if ((uVar27 & 0x90000) == 0) {
                if ((uVar13 < 3) || (iVar7 = *(int *)(param_1 + 0x14) + -1, iVar7 == 0))
                goto LAB_00107415;
                uVar26 = 2;
LAB_001078f2:
                ptVar16 = param_1 + uVar11 + 200;
                sVar19 = *(short *)(param_1 + (ulong)((uVar6 - 1) + uVar26) + 200);
                local_80 = 0;
                do {
                  while( true ) {
                    uVar5 = *(ushort *)(param_1 + uVar11 * 2 + 0x192aa);
                    if (uVar5 == 0) goto joined_r0x00107b75;
                    uVar21 = uVar20 - uVar5 & 0xffff;
                    if (uVar15 < uVar21) goto joined_r0x00107b75;
                    uVar9 = uVar5 & 0x7fff;
                    uVar11 = (ulong)uVar9;
                    iVar25 = uVar26 - 1;
                    if (*(short *)(param_1 + (ulong)(uVar9 + iVar25) + 200) == sVar19) break;
                    uVar5 = *(ushort *)(param_1 + uVar11 * 2 + 0x192aa);
                    if (uVar5 == 0) goto joined_r0x00107b75;
                    uVar21 = uVar20 - uVar5 & 0xffff;
                    if (uVar15 < uVar21) goto joined_r0x00107b75;
                    uVar9 = uVar5 & 0x7fff;
                    uVar11 = (ulong)uVar9;
                    if (*(short *)(param_1 + (ulong)(uVar9 + iVar25) + 200) == sVar19) break;
                    uVar5 = *(ushort *)(param_1 + uVar11 * 2 + 0x192aa);
                    if (uVar5 == 0) goto joined_r0x00107b75;
                    uVar21 = uVar20 - uVar5 & 0xffff;
                    if (uVar15 < uVar21) goto joined_r0x00107b75;
                    uVar9 = uVar5 & 0x7fff;
                    uVar11 = (ulong)uVar9;
                    if (*(short *)(param_1 + (ulong)(iVar25 + uVar9) + 200) == sVar19) break;
LAB_001079d5:
                    iVar7 = iVar7 + -1;
                    if (iVar7 == 0) goto joined_r0x00107b75;
                  }
                  if (uVar21 == 0) break;
                  ptVar12 = param_1 + uVar11 + 200;
                  ptVar18 = ptVar16;
                  if (*(short *)ptVar16 != *(short *)ptVar12) goto LAB_001079d5;
                  while (*(short *)(ptVar18 + 2) == *(short *)(ptVar12 + 2)) {
                    if (*(short *)(ptVar18 + 4) != *(short *)(ptVar12 + 4)) {
                      ptVar18 = ptVar18 + 4;
                      ptVar12 = ptVar12 + 4;
                      goto LAB_00107a79;
                    }
                    if (*(short *)(ptVar18 + 6) != *(short *)(ptVar12 + 6)) {
                      ptVar18 = ptVar18 + 6;
                      ptVar12 = ptVar12 + 6;
                      goto LAB_00107a79;
                    }
                    ptVar18 = ptVar18 + 8;
                    ptVar12 = ptVar12 + 8;
                    if (*(short *)ptVar18 != *(short *)ptVar12) goto LAB_00107a79;
                    if (ptVar18 == ptVar16 + 0x100) {
                      local_80 = uVar21;
                      uVar26 = 0x102;
                      if (uVar13 < 0x103) {
                        uVar26 = uVar13;
                      }
                      goto joined_r0x00107b75;
                    }
                  }
                  ptVar18 = ptVar18 + 2;
                  ptVar12 = ptVar12 + 2;
LAB_00107a79:
                  uVar9 = (uint)(*ptVar18 == *ptVar12) + ((int)ptVar18 - (int)ptVar16);
                  if (uVar9 <= uVar26) goto LAB_001079d5;
                  uVar26 = uVar13;
                  if (uVar9 <= uVar13) {
                    uVar26 = uVar9;
                  }
                  local_80 = uVar21;
                  if (uVar13 <= uVar9) break;
                  sVar19 = *(short *)(param_1 + (ulong)((uVar6 - 1) + uVar26) + 200);
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
joined_r0x00107b75:
                if (uVar26 != 3) {
LAB_00107b80:
                  if (local_80 == uVar6) goto LAB_00107790;
                  goto LAB_0010742c;
                }
                if (local_80 < 0x2000) {
LAB_00107afa:
                  if (local_80 != uVar6) goto LAB_0010777b;
                }
LAB_00107790:
                ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                if (uVar24 != 0) goto LAB_00107813;
              }
              else {
                if ((uVar15 != 0) && ((uVar27 & 0x80000) == 0)) {
LAB_00107df0:
                  if (uVar13 != 0) {
                    uVar26 = 0;
                    do {
                      if (param_1[(ulong)(uVar6 - 1 & 0x7fff) + 200] !=
                          param_1[(ulong)(uVar6 + uVar26) + 200]) break;
                      uVar26 = uVar26 + 1;
                    } while (uVar26 != uVar13);
                    if (2 < uVar26) {
                      local_80 = 1;
                      if (uVar26 == 3) goto LAB_00107afa;
                      goto LAB_00107b80;
                    }
                  }
                  goto LAB_00107790;
                }
LAB_00107415:
                if (uVar6 != 0) {
                  local_80 = 0;
                  uVar26 = 2;
LAB_0010742c:
                  if (((uVar27 & 0x20000) == 0) || (5 < uVar26)) goto LAB_0010743e;
                  goto LAB_00107790;
                }
                ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
              }
LAB_00107798:
              tVar2 = param_1[(ulong)uVar6 + 200];
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
              *(tdefl_compressor **)(param_1 + 0x30) = ptVar16 + 1;
              *ptVar16 = tVar2;
              **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1;
              ptVar16 = param_1 + 0x50;
              *(int *)ptVar16 = *(int *)ptVar16 + -1;
              if (*(int *)ptVar16 == 0) {
                *(undefined4 *)(param_1 + 0x50) = 8;
                ptVar16 = (tdefl_compressor *)(*(long *)(param_1 + 0x30) + 1);
                uVar1 = *(undefined8 *)(param_1 + 0x30);
                *(tdefl_compressor **)(param_1 + 0x30) = ptVar16;
                *(undefined8 *)(param_1 + 0x38) = uVar1;
              }
              else {
                ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
              }
              uVar20 = *(uint *)(param_1 + 0x24);
              uVar15 = *(uint *)(param_1 + 0x2c);
              uVar26 = 1;
              *(short *)(param_1 + (ulong)(byte)tVar2 * 2 + 0x81ca) =
                   *(short *)(param_1 + (ulong)(byte)tVar2 * 2 + 0x81ca) + 1;
              uVar13 = *(uint *)(param_1 + 0x28);
            }
            else {
              uVar26 = uVar24;
              if ((uVar27 & 0x90000) == 0) {
                if (uVar24 < uVar13) {
                  iVar7 = *(int *)(param_1 + (ulong)(0x1f < uVar24) * 4 + 0x14) + -1;
                  if (iVar7 != 0) goto LAB_001078f2;
                  goto LAB_00107761;
                }
LAB_001077f0:
                if (uVar24 != 3) goto LAB_00107d80;
                if ((uVar6 == 0) || (local_80 = uVar27 & 0x20000, (uVar27 & 0x20000) != 0))
                goto LAB_0010780f;
LAB_00107e74:
                uVar26 = 3;
LAB_0010743e:
                ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                if (uVar24 == 0) {
                  if (local_80 == 0) goto LAB_00107798;
                  if (((uVar27 & 0x10000) == 0 && *(int *)(param_1 + 0x1c) == 0) && (uVar26 < 0x80))
                  {
                    tVar2 = param_1[(ulong)uVar6 + 200];
                    *(uint *)(param_1 + 0x68) = uVar26;
                    uVar26 = 1;
                    *(uint *)(param_1 + 100) = local_80;
                    *(uint *)(param_1 + 0x6c) = (uint)(byte)tVar2;
                  }
                  else {
                    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar26;
                    *ptVar16 = (tdefl_compressor)((char)uVar26 - 3);
                    local_80 = local_80 - 1;
                    *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)local_80;
                    *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(local_80 >> 8);
                    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
                    **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
                    if (*(int *)(param_1 + 0x50) + -1 == 0) {
                      *(undefined4 *)(param_1 + 0x50) = 8;
                      uVar1 = *(undefined8 *)(param_1 + 0x30);
                      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
                      *(undefined8 *)(param_1 + 0x38) = uVar1;
                    }
                    else {
                      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
                    }
                    bVar30 = s_tdefl_large_dist_sym[local_80 >> 8 & 0x7f];
                    if (local_80 < 0x200) {
                      bVar30 = s_tdefl_small_dist_sym[local_80 & 0x1ff];
                    }
                    *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) =
                         *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) + 1;
                    if (2 < uVar26) {
                      *(short *)(param_1 +
                                (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar26 - 3) * 2) * 2 +
                                0x81ca) =
                           *(short *)(param_1 +
                                     (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar26 - 3) * 2) *
                                     2 + 0x81ca) + 1;
                    }
                    uVar20 = *(uint *)(param_1 + 0x24);
                    uVar13 = *(uint *)(param_1 + 0x28);
                    uVar15 = *(uint *)(param_1 + 0x2c);
                    ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                  }
                }
                else {
                  if (uVar26 <= uVar24) goto LAB_00107813;
                  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                  *(tdefl_compressor **)(param_1 + 0x30) = ptVar16 + 1;
                  uVar11 = (ulong)*(uint *)(param_1 + 0x6c) & 0xff;
                  *ptVar16 = SUB41(*(uint *)(param_1 + 0x6c),0);
                  **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1;
                  ptVar16 = param_1 + 0x50;
                  *(int *)ptVar16 = *(int *)ptVar16 + -1;
                  if (*(int *)ptVar16 == 0) {
                    *(undefined4 *)(param_1 + 0x50) = 8;
                    ptVar16 = (tdefl_compressor *)(*(long *)(param_1 + 0x30) + 1);
                    uVar1 = *(undefined8 *)(param_1 + 0x30);
                    *(tdefl_compressor **)(param_1 + 0x30) = ptVar16;
                    *(undefined8 *)(param_1 + 0x38) = uVar1;
                    *(short *)(param_1 + uVar11 * 2 + 0x81ca) =
                         *(short *)(param_1 + uVar11 * 2 + 0x81ca) + 1;
                  }
                  else {
                    ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                    *(short *)(param_1 + uVar11 * 2 + 0x81ca) =
                         *(short *)(param_1 + uVar11 * 2 + 0x81ca) + 1;
                  }
                  if (uVar26 < 0x80) {
                    uVar20 = *(uint *)(param_1 + 0x24);
                    tVar2 = param_1[(ulong)uVar6 + 200];
                    uVar15 = *(uint *)(param_1 + 0x2c);
                    *(uint *)(param_1 + 0x68) = uVar26;
                    uVar26 = 1;
                    *(uint *)(param_1 + 100) = local_80;
                    *(uint *)(param_1 + 0x6c) = (uint)(byte)tVar2;
                    uVar13 = *(uint *)(param_1 + 0x28);
                  }
                  else {
                    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar26;
                    *ptVar16 = (tdefl_compressor)((char)uVar26 - 3);
                    local_80 = local_80 - 1;
                    *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)local_80;
                    *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(local_80 >> 8);
                    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
                    **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
                    ptVar16 = param_1 + 0x50;
                    *(int *)ptVar16 = *(int *)ptVar16 + -1;
                    if (*(int *)ptVar16 == 0) {
                      *(undefined4 *)(param_1 + 0x50) = 8;
                      ptVar16 = (tdefl_compressor *)(*(long *)(param_1 + 0x30) + 1);
                      uVar1 = *(undefined8 *)(param_1 + 0x30);
                      *(tdefl_compressor **)(param_1 + 0x30) = ptVar16;
                      *(undefined8 *)(param_1 + 0x38) = uVar1;
                    }
                    else {
                      ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                    }
                    uVar20 = *(uint *)(param_1 + 0x24);
                    uVar15 = *(uint *)(param_1 + 0x2c);
                    bVar30 = s_tdefl_large_dist_sym[local_80 >> 8 & 0x7f];
                    if (local_80 < 0x200) {
                      bVar30 = s_tdefl_small_dist_sym[local_80 & 0x1ff];
                    }
                    *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) =
                         *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) + 1;
                    *(short *)(param_1 +
                              (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar26 - 3) * 2) * 2 +
                              0x81ca) =
                         *(short *)(param_1 +
                                   (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar26 - 3) * 2) * 2
                                   + 0x81ca) + 1;
                    uVar13 = *(uint *)(param_1 + 0x28);
                    *(undefined4 *)(param_1 + 0x68) = 0;
                  }
                }
              }
              else {
                if (uVar15 == 0) goto LAB_001077f0;
                if ((uVar27 & 0x80000) == 0) goto LAB_00107df0;
LAB_00107761:
                if (uVar24 == 3) {
                  if (uVar6 == 0) goto LAB_0010780f;
                  local_80 = 0;
LAB_0010777b:
                  if ((uVar27 & 0x20000) != 0) goto LAB_00107790;
                  goto LAB_00107e74;
                }
LAB_00107d80:
                if (uVar6 != 0) {
                  local_80 = 0;
                  goto LAB_0010742c;
                }
LAB_0010780f:
                ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
LAB_00107813:
                iVar7 = *(int *)(param_1 + 100);
                *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar24;
                *ptVar16 = (tdefl_compressor)((char)uVar24 - 3);
                uVar27 = iVar7 - 1;
                *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)uVar27;
                *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(uVar27 >> 8);
                *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
                **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
                ptVar16 = param_1 + 0x50;
                *(int *)ptVar16 = *(int *)ptVar16 + -1;
                if (*(int *)ptVar16 == 0) {
                  *(undefined4 *)(param_1 + 0x50) = 8;
                  ptVar16 = (tdefl_compressor *)(*(long *)(param_1 + 0x30) + 1);
                  uVar1 = *(undefined8 *)(param_1 + 0x30);
                  *(tdefl_compressor **)(param_1 + 0x30) = ptVar16;
                  *(undefined8 *)(param_1 + 0x38) = uVar1;
                }
                else {
                  ptVar16 = *(tdefl_compressor **)(param_1 + 0x30);
                }
                bVar30 = s_tdefl_large_dist_sym[uVar27 >> 8 & 0x7f];
                if (uVar27 < 0x200) {
                  bVar30 = s_tdefl_small_dist_sym[uVar27 & 0x1ff];
                }
                *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) =
                     *(short *)(param_1 + (ulong)bVar30 * 2 + 0x840a) + 1;
                if (2 < uVar24) {
                  *(short *)(param_1 +
                            (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar24 - 3) * 2) * 2 +
                            0x81ca) =
                       *(short *)(param_1 +
                                 (ulong)*(ushort *)(s_tdefl_len_sym + (ulong)(uVar24 - 3) * 2) * 2 +
                                 0x81ca) + 1;
                }
                iVar7 = *(int *)(param_1 + 0x68);
                uVar20 = *(uint *)(param_1 + 0x24);
                *(undefined4 *)(param_1 + 0x68) = 0;
                uVar13 = *(uint *)(param_1 + 0x28);
                uVar15 = *(uint *)(param_1 + 0x2c);
                uVar26 = iVar7 - 1;
              }
            }
            *(uint *)(param_1 + 0x28) = uVar13 - uVar26;
            *(uint *)(param_1 + 0x24) = uVar20 + uVar26;
            uVar27 = uVar15 + uVar26;
            if (0x8000 < uVar15 + uVar26) {
              uVar27 = 0x8000;
            }
            *(uint *)(param_1 + 0x2c) = uVar27;
            if (param_1 + 0x192a2 < ptVar16) {
LAB_001075a8:
              *(tdefl_compressor **)(param_1 + 0xb0) = ptVar17;
              *(ulong *)(param_1 + 0xb8) = uVar28;
              iVar7 = tdefl_flush_block(param_1,0);
              bVar29 = iVar7 < 0;
              if (iVar7 != 0) goto LAB_001076c4;
            }
            else if (0x7c00 < *(uint *)(param_1 + 0x54)) {
              if ((*(uint *)(param_1 + 0x54) <=
                   (uint)(((int)ptVar16 - ((int)param_1 + 0x92aa)) * 0x73) >> 7) ||
                 (uVar27 = *(uint *)(param_1 + 0x10), (uVar27 & 0x80000) != 0)) goto LAB_001075a8;
              goto LAB_001072b5;
            }
            uVar27 = *(uint *)(param_1 + 0x10);
            if (uVar28 == 0) goto LAB_001072c0;
LAB_001075d5:
            uVar13 = *(uint *)(param_1 + 0x28);
            uVar15 = *(uint *)(param_1 + 0x2c);
            uVar24 = uVar13 + uVar15;
            ptVar16 = ptVar17;
            if (1 < uVar24) goto LAB_001072e9;
            iVar7 = (int)ptVar17;
            while (uVar13 < 0x102) {
              iVar25 = *(int *)(param_1 + 0x24);
              tVar2 = *ptVar17;
              ptVar17 = ptVar17 + 1;
              uVar28 = uVar28 - 1;
              uVar20 = iVar25 + uVar13 & 0x7fff;
              param_1[(ulong)uVar20 + 200] = tVar2;
              if (uVar20 < 0x101) {
                param_1[(ulong)(uVar20 + 0x8000) + 200] = tVar2;
              }
              uVar13 = uVar13 + 1;
              *(uint *)(param_1 + 0x28) = uVar13;
              if (2 < (uVar24 - iVar7) + (int)ptVar17) {
                iVar25 = iVar25 + uVar13;
                uVar20 = iVar25 - 3;
                uVar11 = (ulong)(uVar20 & 0x7fff);
                lVar10 = (ulong)(((uint)(byte)param_1[(ulong)(iVar25 - 2U & 0x7fff) + 200] << 5 ^
                                  (uint)(byte)param_1[uVar11 + 200] << 10 ^ (uint)(byte)tVar2) &
                                0x7fff) + 0x14950;
                *(undefined2 *)(param_1 + uVar11 * 2 + 0x192aa) =
                     *(undefined2 *)(param_1 + lVar10 * 2 + 10);
                *(short *)(param_1 + lVar10 * 2 + 10) = (short)uVar20;
              }
              if (uVar28 == 0) goto LAB_001073b8;
            }
LAB_001076ad:
            if (0x8000 - uVar13 <= uVar15) {
              uVar15 = 0x8000 - uVar13;
            }
            *(uint *)(param_1 + 0x2c) = uVar15;
          } while( true );
        }
      }
      *(tdefl_compressor **)(param_1 + 0xb0) = ptVar17;
      *(ulong *)(param_1 + 0xb8) = uVar28;
      goto LAB_001076d3;
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0;
    }
  }
  *param_5 = 0;
LAB_00107e92:
  *(undefined4 *)(param_1 + 0x84) = 0xfffffffe;
  return 0xfffffffe;
LAB_001076c4:
  if (bVar29) goto LAB_00107ec1;
  uVar27 = *(uint *)(param_1 + 0x10);
LAB_001076d3:
  if (((uVar27 & 0x3000) != 0) && (param_2 != (tdefl_compressor *)0x0)) {
    uVar8 = mz_adler32((ulong)*(uint *)(param_1 + 0x20),(uchar *)param_2,
                       *(long *)(param_1 + 0xb0) - (long)param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar8;
  }
  if ((((param_6 != 0) && (*(int *)(param_1 + 0x28) == 0)) && (*(long *)(param_1 + 0xb8) == 0)) &&
     (*(int *)(param_1 + 0x74) == 0)) {
    iVar7 = tdefl_flush_block(param_1,param_6);
    if (iVar7 < 0) {
LAB_00107ec1:
      return (ulong)*(uint *)(param_1 + 0x84);
    }
    *(uint *)(param_1 + 0x78) = (uint)(param_6 == 4);
    if (param_6 == 3) {
      memset(param_1 + 0x292aa,0,0x10000);
      memset(param_1 + 0x192aa,0,0x10000);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
LAB_00107720:
  uVar28 = tdefl_flush_output_buffer(param_1);
  *(int *)(param_1 + 0x84) = (int)uVar28;
  return uVar28;
}



/* buminiz::mz_deflate(buminiz::mz_stream_s*, int) */

undefined8 buminiz::mz_deflate(mz_stream_s *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (mz_stream_s *)0x0) || (lVar10 = *(long *)(param_1 + 0x38), lVar10 == 0)) ||
      (4 < (uint)param_2)) || (lVar12 = *(long *)(param_1 + 0x18), lVar12 == 0)) {
LAB_001087f0:
    uVar6 = 0xfffffffe;
    goto LAB_001087a2;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0) {
    if (param_2 == 1) {
      if (*(int *)(lVar10 + 0x84) != 1) {
        param_2 = 2;
        goto LAB_001086c9;
      }
    }
    else if (*(int *)(lVar10 + 0x84) == 1) {
      if (param_2 == 4) {
LAB_001087e5:
        uVar6 = 1;
        goto LAB_001087a2;
      }
    }
    else {
LAB_001086c9:
      lVar1 = *(long *)(param_1 + 0x28);
      lVar2 = *(long *)(param_1 + 0x10);
      uVar8 = *(uint *)(param_1 + 8);
      lVar9 = *(long *)param_1;
      do {
        local_50 = (ulong)uVar8;
        local_48 = uVar5;
        iVar3 = tdefl_compress(lVar10,lVar9,&local_50,lVar12,&local_48,param_2);
        lVar10 = *(long *)(param_1 + 0x38);
        uVar8 = *(int *)(param_1 + 8) - (int)local_50;
        *(uint *)(param_1 + 8) = uVar8;
        uVar4 = *(uint *)(lVar10 + 0x20);
        lVar9 = *(long *)param_1 + (local_50 & 0xffffffff);
        lVar12 = *(long *)(param_1 + 0x18) + (local_48 & 0xffffffff);
        lVar11 = (local_50 & 0xffffffff) + *(long *)(param_1 + 0x10);
        lVar7 = (local_48 & 0xffffffff) + *(long *)(param_1 + 0x28);
        *(long *)param_1 = lVar9;
        *(ulong *)(param_1 + 0x60) = (ulong)uVar4;
        *(long *)(param_1 + 0x10) = lVar11;
        uVar4 = *(int *)(param_1 + 0x20) - (int)local_48;
        uVar5 = (ulong)uVar4;
        *(long *)(param_1 + 0x18) = lVar12;
        *(uint *)(param_1 + 0x20) = uVar4;
        *(long *)(param_1 + 0x28) = lVar7;
        if (iVar3 < 0) goto LAB_001087f0;
        if (iVar3 == 1) goto LAB_001087e5;
        if (uVar4 == 0) goto LAB_001087a0;
      } while ((uVar8 != 0) || (param_2 == 4));
      if ((lVar11 != lVar2 || lVar7 != lVar1) || (param_2 != 0)) {
LAB_001087a0:
        uVar6 = 0;
        goto LAB_001087a2;
      }
    }
  }
  uVar6 = 0xfffffffb;
LAB_001087a2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_compress_buffer(buminiz::tdefl_compressor*, void const*, unsigned long,
   buminiz::tdefl_flush) */

void buminiz::tdefl_compress_buffer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_3;
  tdefl_compress(param_1,param_2,local_10,0,0,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::tdefl_init(buminiz::tdefl_compressor*, int (*)(void const*, int, void*), void*, int) */

void buminiz::tdefl_init(tdefl_compressor *param_1,_func_int_void_ptr_int_void_ptr *param_2,
                        void *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  *(void **)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(_func_int_void_ptr_int_void_ptr **)param_1 = param_2;
  *(int *)(param_1 + 0x14) = (int)(((ulong)(param_4 & 0xfff) + 2) / 3) + 1;
  *(uint *)(param_1 + 0x1c) = (uint)param_4 >> 0xe & 1;
  *(int *)(param_1 + 0x18) = (int)(((ulong)(param_4 >> 2 & 0x3ff) + 2) / 3) + 1;
  if ((param_4 & 0x8000U) == 0) {
    memset(param_1 + 0x292aa,0,0x10000);
  }
  uVar2 = _UNK_001224e8;
  uVar1 = __LC73;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(tdefl_compressor **)(param_1 + 0x30) = param_1 + 0x92ab;
  *(tdefl_compressor **)(param_1 + 0x38) = param_1 + 0x92aa;
  *(tdefl_compressor **)(param_1 + 0x40) = param_1 + 0x392aa;
  *(tdefl_compressor **)(param_1 + 0x48) = param_1 + 0x392aa;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = _UNK_001224f8;
  uVar1 = __LC72;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xb8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x81ca) = 0;
  *(undefined8 *)(param_1 + 0x8402) = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 0x81d2) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 0x81d2) & 0xfffffffffffffff8)) +
                       0x840aU >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  *(undefined1 (*) [16])(param_1 + 0x840a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x841a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x842a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x843a) = (undefined1  [16])0x0;
  return;
}



/* buminiz::mz_deflateReset(buminiz::mz_stream_s*) */

undefined8 buminiz::mz_deflateReset(mz_stream_s *param_1)

{
  tdefl_compressor *ptVar1;
  
  if ((((param_1 != (mz_stream_s *)0x0) &&
       (ptVar1 = *(tdefl_compressor **)(param_1 + 0x38), ptVar1 != (tdefl_compressor *)0x0)) &&
      (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    tdefl_init(ptVar1,(_func_int_void_ptr_int_void_ptr *)0x0,(void *)0x0,*(int *)(ptVar1 + 0x10));
    return 0;
  }
  return 0xfffffffe;
}



/* buminiz::tdefl_get_prev_return_status(buminiz::tdefl_compressor*) */

undefined4 buminiz::tdefl_get_prev_return_status(tdefl_compressor *param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



/* buminiz::tdefl_get_adler32(buminiz::tdefl_compressor*) */

undefined4 buminiz::tdefl_get_adler32(tdefl_compressor *param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* buminiz::tdefl_compress_mem_to_output(void const*, unsigned long, int (*)(void const*, int,
   void*), void*, int) */

bool buminiz::tdefl_compress_mem_to_output
               (void *param_1,ulong param_2,_func_int_void_ptr_int_void_ptr *param_3,void *param_4,
               int param_5)

{
  int iVar1;
  tdefl_compressor *__ptr;
  long in_FS_OFFSET;
  bool bVar2;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0 || param_1 != (void *)0x0) &&
     (param_3 != (_func_int_void_ptr_int_void_ptr *)0x0)) {
    __ptr = (tdefl_compressor *)malloc(0x4df78);
    if (__ptr != (tdefl_compressor *)0x0) {
      iVar1 = tdefl_init(__ptr,param_3,param_4,param_5);
      bVar2 = false;
      if (iVar1 == 0) {
        local_48 = param_2;
        iVar1 = tdefl_compress(__ptr,param_1,&local_48,0,0,4);
        bVar2 = iVar1 == 1;
      }
      free(__ptr);
      goto LAB_00108aa2;
    }
  }
  bVar2 = false;
LAB_00108aa2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_compress_mem_to_heap(void const*, unsigned long, unsigned long*, int) */

undefined8
buminiz::tdefl_compress_mem_to_heap(void *param_1,ulong param_2,ulong *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
    local_28._0_12_ = ZEXT412(1) << 0x40;
    local_28._12_4_ = 0;
    iVar1 = tdefl_compress_mem_to_output
                      (param_1,param_2,tdefl_output_buffer_putter,local_38,param_4);
    if (iVar1 != 0) {
      *param_3 = local_38._0_8_;
      uVar2 = local_28._0_8_;
      goto LAB_00108b5f;
    }
  }
  uVar2 = 0;
LAB_00108b5f:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_compress_mem_to_mem(void*, unsigned long, void const*, unsigned long, int) */

undefined8
buminiz::tdefl_compress_mem_to_mem
          (void *param_1,ulong param_2,void *param_3,ulong param_4,int param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  if (param_1 != (void *)0x0) {
    local_28._8_8_ = 0;
    local_28._0_8_ = param_1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    local_38 = auVar1 << 0x40;
    iVar2 = tdefl_compress_mem_to_output
                      (param_3,param_4,tdefl_output_buffer_putter,local_38,param_5);
    if (iVar2 != 0) {
      uVar3 = local_38._0_8_;
      goto LAB_00108bf2;
    }
  }
  uVar3 = 0;
LAB_00108bf2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::tdefl_create_comp_flags_from_zip_params(int, int, int) */

uint buminiz::tdefl_create_comp_flags_from_zip_params(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < 0) {
    uVar3 = 0x5080;
    if (param_2 < 1) {
      uVar3 = 0x4080;
    }
  }
  else {
    iVar2 = 10;
    if (param_1 < 0xb) {
      iVar2 = param_1;
    }
    uVar3 = *(uint *)(tdefl_write_image_to_png_file_in_memory_ex(void_const*,int,int,int,unsigned_long*,unsigned_int,int)
                      ::s_tdefl_png_num_probes + (long)iVar2 * 4);
    if (param_1 < 4) {
      uVar1 = 0x5000;
      if (param_2 < 1) {
        uVar1 = 0x4000;
      }
      uVar3 = uVar3 | uVar1;
      if (param_1 == 0) {
        return uVar3 | 0x80000;
      }
    }
    else if (0 < param_2) {
      uVar3 = uVar3 | 0x1000;
    }
  }
  if (param_3 == 1) {
    return uVar3 | 0x20000;
  }
  if (param_3 == 2) {
    return uVar3 & 0xfffff000;
  }
  if (param_3 == 4) {
    return uVar3 | 0x40000;
  }
  if (param_3 == 3) {
    uVar3 = uVar3 | 0x10000;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buminiz::mz_deflateInit2(buminiz::mz_stream_s*, int, int, int, int, int) */

undefined8
buminiz::mz_deflateInit2
          (mz_stream_s *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  tdefl_compressor *ptVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar2 = tdefl_create_comp_flags_from_zip_params(param_2,param_4,param_6);
  uVar1 = _UNK_001224e8;
  uVar4 = __LC73;
  if (param_1 == (mz_stream_s *)0x0) {
    return 0xfffffffe;
  }
  if (((param_3 == 8) && (param_5 - 1U < 9)) && ((param_4 == 0xf || (param_4 == -0xf)))) {
    pcVar5 = *(code **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    if (pcVar5 == (code *)0x0) {
      pcVar5 = def_alloc_func;
      *(code **)(param_1 + 0x40) = def_alloc_func;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      *(code **)(param_1 + 0x48) = def_free_func;
    }
    ptVar3 = (tdefl_compressor *)(*pcVar5)(*(undefined8 *)(param_1 + 0x50),1,0x4df78);
    if (ptVar3 == (tdefl_compressor *)0x0) {
      return 0xfffffffc;
    }
    *(tdefl_compressor **)(param_1 + 0x38) = ptVar3;
    uVar4 = tdefl_init(ptVar3,(_func_int_void_ptr_int_void_ptr *)0x0,(void *)0x0,uVar2 | 0x2000);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    mz_deflateEnd(param_1);
  }
  return 0xffffd8f0;
}



/* buminiz::mz_deflateInit(buminiz::mz_stream_s*, int) */

void buminiz::mz_deflateInit(mz_stream_s *param_1,int param_2)

{
  mz_deflateInit2(param_1,param_2,8,0xf,9,0);
  return;
}



/* buminiz::mz_compress2(unsigned char*, unsigned long*, unsigned char const*, unsigned long, int)
    */

int buminiz::mz_compress2(uchar *param_1,ulong *param_2,uchar *param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uchar **ppuVar4;
  long in_FS_OFFSET;
  uchar *local_98;
  undefined4 local_90;
  uchar *local_80;
  undefined4 local_78;
  ulong local_70;
  long local_60;
  code *local_50;
  undefined8 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar4 = &local_98;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *ppuVar4 = (uchar *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  if ((*param_2 | param_4) >> 0x20 == 0) {
    local_90 = (undefined4)param_4;
    local_78 = (undefined4)*param_2;
    local_98 = param_3;
    local_80 = param_1;
    iVar1 = mz_deflateInit2((mz_stream_s *)&local_98,param_5,8,0xf,9,0);
    if (iVar1 == 0) {
      iVar2 = mz_deflate((mz_stream_s *)&local_98,4);
      if (iVar2 == 1) {
        *param_2 = local_70;
        if (local_60 != 0) {
          (*local_50)(local_48);
        }
      }
      else {
        if (local_60 != 0) {
          (*local_50)(local_48);
        }
        iVar1 = -5;
        if (iVar2 != 0) {
          iVar1 = iVar2;
        }
      }
    }
  }
  else {
    iVar1 = -10000;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* buminiz::mz_compress(unsigned char*, unsigned long*, unsigned char const*, unsigned long) */

void buminiz::mz_compress(uchar *param_1,ulong *param_2,uchar *param_3,ulong param_4)

{
  mz_compress2(param_1,param_2,param_3,param_4,-1);
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* buminiz::tdefl_write_image_to_png_file_in_memory_ex(void const*, int, int, int, unsigned long*,
   unsigned int, int) */

undefined8
buminiz::tdefl_write_image_to_png_file_in_memory_ex
          (void *param_1,int param_2,int param_3,int param_4,ulong *param_5,uint param_6,int param_7
          )

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  tdefl_compressor *__ptr;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_a4;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  undefined3 uStack_70;
  undefined4 uStack_6d;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  byte bStack_5f;
  undefined1 auStack_5e [6];
  undefined1 uStack_58;
  uint uStack_57;
  undefined4 uStack_53;
  long local_40;
  
  iVar14 = param_2 * param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (tdefl_compressor *)malloc(0x4df78);
  *param_5 = 0;
  if (__ptr != (tdefl_compressor *)0x0) {
    iVar13 = (iVar14 + 1) * param_3;
    local_88._0_12_ = ZEXT412(1) << 0x40;
    local_88._12_4_ = 0;
    if (iVar13 < 0x40) {
      iVar13 = 0x40;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(iVar13 + 0x39);
    local_98 = auVar3 << 0x40;
    pvVar5 = malloc((long)(iVar13 + 0x39));
    local_88._0_8_ = pvVar5;
    if (pvVar5 == (void *)0x0) {
      free(__ptr);
      uVar7 = 0;
      goto LAB_00109270;
    }
    local_a4 = 0x29;
    do {
      tdefl_output_buffer_putter(&local_a4,1,local_98);
      local_a4 = local_a4 + -1;
    } while (local_a4 != 0);
    uVar6 = 10;
    if (param_6 < 0xb) {
      uVar6 = (ulong)param_6;
    }
    tdefl_init(__ptr,tdefl_output_buffer_putter,local_98,
               (uint)(param_6 < 4) << 0xe |
               *(uint *)(tdefl_write_image_to_png_file_in_memory_ex(void_const*,int,int,int,unsigned_long*,unsigned_int,int)
                         ::s_tdefl_png_num_probes + uVar6 * 4) | 0x1000);
    iVar13 = 1;
    if (0 < param_3) {
      do {
        local_a0 = 1;
        tdefl_compress(__ptr,&local_a4,&local_a0,0,0,0);
        iVar2 = param_3 - iVar13;
        if (param_7 == 0) {
          iVar2 = iVar13 + -1;
        }
        local_a0 = (long)iVar14;
        tdefl_compress(__ptr,(long)(iVar2 * iVar14) + (long)param_1,&local_a0,0,0,0);
        bVar15 = param_3 != iVar13;
        iVar13 = iVar13 + 1;
      } while (bVar15);
    }
    local_a0 = 0;
    iVar14 = tdefl_compress(__ptr,0,&local_a0,0,0,4);
    uVar7 = _LC74;
    if (iVar14 == 1) {
      uStack_53 = 0x54414449;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_64 = 0;
      auStack_5e = (undefined1  [6])0x0;
      uStack_58 = 0;
      local_78 = (undefined1  [8])_LC74;
      uStack_66 = (undefined1)((uint)param_2 >> 8);
      uStack_65 = (char)param_2;
      uStack_62 = (undefined1)((uint)param_3 >> 8);
      bStack_5f = *(byte *)((long)&tdefl_write_image_to_png_file_in_memory_ex(void_const*,int,int,int,unsigned_long*,unsigned_int,int)
                                   ::chans + (long)param_4);
      uStack_69 = 0x52;
      pbVar8 = (byte *)((long)&uStack_6d + 2);
      uStack_6d = 0x4448490d;
      uStack_60 = 8;
      uStack_61 = (char)param_3;
      *param_5 = local_98._0_8_ - 0x29;
      uVar4 = (uint)(local_98._0_8_ - 0x29);
      uStack_57 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = 0x22fde946;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar4 = uVar4 >> 4 ^
                *(uint *)(mz_crc32(unsigned_long,unsigned_char_const*,unsigned_long)::s_crc32 +
                         (ulong)((uVar4 ^ bVar1) & 0xf) * 4);
        uVar4 = uVar4 >> 4 ^
                *(uint *)(mz_crc32(unsigned_long,unsigned_char_const*,unsigned_long)::s_crc32 +
                         (ulong)((bVar1 >> 4 ^ uVar4) & 0xf) * 4);
      } while (pbVar8 != auStack_5e + 3);
      puVar10 = (undefined8 *)local_78;
      uVar4 = ~uVar4;
      do {
        puVar11 = (undefined8 *)((long)puVar10 + 1);
        *(char *)((long)puVar10 + 0x1d) = (char)(uVar4 >> 0x18);
        puVar10 = puVar11;
        uVar4 = uVar4 << 8;
      } while (puVar11 != (undefined8 *)((long)local_78 + 4));
      *(ulong *)(local_88._0_8_ + 0x10) =
           CONCAT17((char)param_3,
                    CONCAT16(uStack_62,(uint6)CONCAT11((char)param_2,uStack_66) << 0x10));
      *(ulong *)(local_88._0_8_ + 0x18) = (ulong)CONCAT11(bStack_5f,8);
      *(undefined8 *)local_88._0_8_ = uVar7;
      *(undefined8 *)(local_88._0_8_ + 8) = 0x524448490d000000;
      *(ulong *)(local_88._0_8_ + 0x19) = CONCAT17(uStack_58,(uint7)bStack_5f);
      *(ulong *)(local_88._0_8_ + 0x21) = CONCAT44(0x54414449,uStack_57);
      iVar14 = tdefl_output_buffer_putter(&DAT_0011f4f8,0x10,local_98);
      if (iVar14 != 0) {
        lVar12 = local_88._0_8_;
        iVar14 = mz_crc32(0,(uchar *)(local_88._0_8_ + 0x25),*param_5 + 4);
        *(char *)(lVar12 + -0x10 + local_98._0_8_) = (char)((uint)iVar14 >> 0x18);
        lVar12 = 1;
        do {
          lVar9 = local_88._0_8_ + lVar12;
          lVar12 = lVar12 + 1;
          *(char *)(lVar9 + local_98._0_8_ + -0x10) = (char)((uint)iVar14 >> 0x10);
          iVar14 = iVar14 << 8;
        } while (lVar12 != 4);
        *param_5 = *param_5 + 0x39;
        free(__ptr);
        uVar7 = local_88._0_8_;
        goto LAB_00109270;
      }
      *param_5 = 0;
    }
    free(__ptr);
    free((void *)local_88._0_8_);
  }
  uVar7 = 0;
LAB_00109270:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* buminiz::tdefl_write_image_to_png_file_in_memory(void const*, int, int, int, unsigned long*) */

void buminiz::tdefl_write_image_to_png_file_in_memory
               (void *param_1,int param_2,int param_3,int param_4,ulong *param_5)

{
  tdefl_write_image_to_png_file_in_memory_ex(param_1,param_2,param_3,param_4,param_5,6,0);
  return;
}



/* basisu::basis_compressor::basis_compressor() */

void __thiscall basisu::basis_compressor::basis_compressor(basis_compressor *this)

{
  undefined8 uVar1;
  
  basis_compressor_params::basis_compressor_params((basis_compressor_params *)this);
  uVar1 = _LC79;
  *(undefined1 (*) [16])(this + 0x2d8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x348) = uVar1;
  *(undefined8 *)(this + 0x350) = 0x100000100000002;
  *(undefined1 (*) [16])(this + 0x368) = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0x358) = 0;
  *(undefined2 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  this[0x35a] = (basis_compressor)0x0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  this[0x382] = (basis_compressor)0x0;
  *(undefined8 *)(this + 900) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined1 (*) [16])(this + 0x4c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  this[0x4f0] = (basis_compressor)0x0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x528) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  basisu::basisu_backend::basisu_backend((basisu_backend *)(this + 0x548));
  *(undefined8 *)(this + 0x6d8) = 0;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined8 *)(this + 0x6e8) = 0;
  *(undefined8 *)(this + 0x6f0) = 0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined8 *)(this + 0x728) = 0;
  *(undefined8 *)(this + 0x730) = 0;
  *(undefined8 *)(this + 0x738) = 0;
  *(undefined8 *)(this + 0x740) = 0;
  *(undefined8 *)(this + 0x748) = 0;
  *(undefined8 *)(this + 0x750) = 0;
  *(undefined8 *)(this + 0x758) = 0;
  *(undefined8 *)(this + 0x760) = 0;
  *(undefined8 *)(this + 0x768) = 0;
  *(undefined8 *)(this + 0x770) = 0;
  *(undefined8 *)(this + 0x778) = 0;
  *(undefined8 *)(this + 0x780) = 0;
  *(undefined8 *)(this + 0x788) = 0;
  *(undefined8 *)(this + 0x790) = 0;
  *(undefined8 *)(this + 0x798) = 0;
  *(undefined8 *)(this + 0x7a0) = 0;
  *(undefined8 *)(this + 0x7a8) = 0;
  *(undefined8 *)(this + 0x7b0) = 0;
  *(undefined8 *)(this + 0x7c8) = 0;
  *(undefined8 *)(this + 2000) = 0;
  *(undefined8 *)(this + 0x7d8) = 0;
  *(undefined8 *)(this + 0x7e0) = 0;
  *(undefined8 *)(this + 0x7e8) = 0;
  *(undefined8 *)(this + 0x7f0) = 0;
  *(undefined8 *)(this + 0x7f8) = 0;
  *(undefined8 *)(this + 0x800) = 0;
  *(undefined8 *)(this + 0x808) = 0;
  *(undefined8 *)(this + 0x810) = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  *(undefined4 *)(this + 0x7b8) = 0;
  *(undefined2 *)(this + 0x7bc) = 0;
  this[0x7be] = (basis_compressor)0x1;
  *(undefined8 *)(this + 0x7c0) = 0;
  *(undefined2 *)(this + 0x828) = 0;
  basisu::debug_printf("basis_compressor::basis_compressor\n");
  return;
}



/* basisu::basis_compressor::~basis_compressor() */

void __thiscall basisu::basis_compressor::~basis_compressor(basis_compressor *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (*(opencl_context **)(this + 0x2d8) != (opencl_context *)0x0) {
    basisu::opencl_destroy_context(*(opencl_context **)(this + 0x2d8));
    *(undefined8 *)(this + 0x2d8) = 0;
  }
  if (*(void **)(this + 0x818) != (void *)0x0) {
    free(*(void **)(this + 0x818));
  }
  puVar2 = *(undefined8 **)(this + 0x808);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulong)*(uint *)(this + 0x810) * 2;
    if (puVar2 != puVar4) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar4 != puVar2);
      puVar4 = *(undefined8 **)(this + 0x808);
    }
    free(puVar4);
  }
  if (*(void **)(this + 0x7f8) != (void *)0x0) {
    free(*(void **)(this + 0x7f8));
  }
  if (*(void **)(this + 0x7e8) != (void *)0x0) {
    free(*(void **)(this + 0x7e8));
  }
  if (*(void **)(this + 0x7d8) != (void *)0x0) {
    free(*(void **)(this + 0x7d8));
  }
  if (*(void **)(this + 0x7c8) != (void *)0x0) {
    free(*(void **)(this + 0x7c8));
  }
  pvVar1 = *(void **)(this + 0x7a8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x7b0) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x7a8);
    }
    free(pvVar3);
  }
  if (*(void **)(this + 0x798) != (void *)0x0) {
    free(*(void **)(this + 0x798));
  }
  if (*(void **)(this + 0x788) != (void *)0x0) {
    free(*(void **)(this + 0x788));
  }
  pvVar1 = *(void **)(this + 0x778);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x780) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x778);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x768);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x770) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x768);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x758);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x760) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x758);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x748);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x750) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x748);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x738);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x740) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x738);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x728);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x730) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x728);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x718);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x720) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x718);
    }
    free(pvVar3);
  }
  if (*(void **)(this + 0x6e8) != (void *)0x0) {
    free(*(void **)(this + 0x6e8));
  }
  if (*(void **)(this + 0x6d8) != (void *)0x0) {
    free(*(void **)(this + 0x6d8));
  }
  if (*(void **)(this + 0x678) != (void *)0x0) {
    free(*(void **)(this + 0x678));
  }
  if (*(void **)(this + 0x668) != (void *)0x0) {
    free(*(void **)(this + 0x668));
  }
  if (*(void **)(this + 0x658) != (void *)0x0) {
    free(*(void **)(this + 0x658));
  }
  if (*(void **)(this + 0x648) != (void *)0x0) {
    free(*(void **)(this + 0x648));
  }
  if (*(void **)(this + 0x638) != (void *)0x0) {
    free(*(void **)(this + 0x638));
  }
  if (*(void **)(this + 0x628) != (void *)0x0) {
    free(*(void **)(this + 0x628));
  }
  pvVar1 = *(void **)(this + 0x618);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((long)pvVar1 + (ulong)*(uint *)(this + 0x620) * 0x18);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 8));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x18);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x618);
    }
    free(pvVar3);
  }
  if (*(void **)(this + 0x608) != (void *)0x0) {
    free(*(void **)(this + 0x608));
  }
  if (*(void **)(this + 0x5f8) != (void *)0x0) {
    free(*(void **)(this + 0x5f8));
  }
  if (*(void **)(this + 0x5e8) != (void *)0x0) {
    free(*(void **)(this + 0x5e8));
  }
  if (*(void **)(this + 0x5d8) != (void *)0x0) {
    free(*(void **)(this + 0x5d8));
  }
  puVar2 = *(undefined8 **)(this + 0x5c8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulong)*(uint *)(this + 0x5d0) * 2;
    if (puVar2 != puVar4) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar4 != puVar2);
      puVar4 = *(undefined8 **)(this + 0x5c8);
    }
    free(puVar4);
  }
  if (*(void **)(this + 0x5b8) != (void *)0x0) {
    free(*(void **)(this + 0x5b8));
  }
  if (*(void **)(this + 0x5a8) != (void *)0x0) {
    free(*(void **)(this + 0x5a8));
  }
  if (*(void **)(this + 0x598) != (void *)0x0) {
    free(*(void **)(this + 0x598));
  }
  if (*(void **)(this + 0x588) != (void *)0x0) {
    free(*(void **)(this + 0x588));
  }
  if (*(void **)(this + 0x568) != (void *)0x0) {
    free(*(void **)(this + 0x568));
  }
  pvVar1 = *(void **)(this + 0x538);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x540) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x538);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x528);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x530) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x528);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x518);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x520) * 0x30 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x30);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x518);
    }
    free(pvVar3);
  }
  if (*(void **)(this + 0x508) != (void *)0x0) {
    free(*(void **)(this + 0x508));
  }
  if (*(void **)(this + 0x4f8) != (void *)0x0) {
    free(*(void **)(this + 0x4f8));
  }
  basisu_frontend::~basisu_frontend((basisu_frontend *)(this + 0x338));
  if (*(void **)(this + 800) != (void *)0x0) {
    free(*(void **)(this + 800));
  }
  puVar2 = *(undefined8 **)(this + 0x300);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulong)*(uint *)(this + 0x308) * 0xe;
    if (puVar2 != puVar4) {
      do {
        if ((undefined8 *)*puVar2 != puVar2 + 2) {
          operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
        }
        puVar2 = puVar2 + 0xe;
      } while (puVar4 != puVar2);
      puVar4 = *(undefined8 **)(this + 0x300);
    }
    free(puVar4);
  }
  pvVar1 = *(void **)(this + 0x2f0);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x2f8) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x2f0);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x2e0);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x2e8) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x2e0);
    }
    free(pvVar3);
  }
  basis_compressor_params::~basis_compressor_params((basis_compressor_params *)this);
  return;
}



/* basisu::basis_compressor::check_for_hdr_inputs() */

void __thiscall basisu::basis_compressor::check_for_hdr_inputs(basis_compressor *this)

{
  basis_compressor bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *__ptr;
  long *plVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined1 *local_a8;
  long local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  long *local_88;
  ulong local_80;
  long local_78 [2];
  long *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  ulong uVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x10) == 0) {
    if ((*(int *)(this + 0x30) != 0) || (*(int *)(this + 0x40) == 0)) {
LAB_00109f81:
      bVar1 = this[2];
joined_r0x0010a1a6:
      if (bVar1 == (basis_compressor)0x0) goto LAB_00109f8c;
      goto LAB_0010a1ac;
    }
    iVar4 = *(int *)(this + 0x20);
    *(undefined2 *)(this + 2) = 0x101;
  }
  else {
    if (this[2] == (basis_compressor)0x0) {
      lVar12 = 0;
      do {
        local_98 = 0;
        local_a0 = 0;
        local_60 = 0;
        local_58 = 0;
        local_a8 = &local_98;
        local_68 = (long *)&local_58;
        cVar2 = string_split_path(*(char **)(lVar12 * 0x20 + *(long *)(this + 8)),(string *)0x0,
                                  (string *)0x0,(string *)&local_a8,(string *)&local_68);
        if (cVar2 != '\0') {
          if (0x3fffffffffffffffU - local_a0 < local_60) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
          }
          std::__cxx11::string::_M_append((char *)&local_a8,(ulong)local_68);
        }
        if (local_68 != (long *)&local_58) {
          operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
        }
        cVar2 = (char)(string *)&local_a8;
        lVar6 = std::__cxx11::string::rfind(cVar2,0x2f);
        if (lVar6 == -1) {
          lVar6 = std::__cxx11::string::rfind(cVar2,0x2e);
          if (lVar6 != -1) {
            iVar4 = -1;
            goto LAB_0010a0c7;
          }
LAB_0010a0d0:
          local_88 = local_78;
          std::__cxx11::string::_M_construct<char_const*>(&local_88,&_LC30);
        }
        else {
          iVar4 = (int)lVar6;
          lVar6 = std::__cxx11::string::rfind(cVar2,0x2e);
          if (lVar6 == -1) {
            if (-2 < iVar4) goto LAB_0010a0d0;
            local_68 = (long *)&local_58;
            std::__cxx11::string::_M_construct<char*>
                      ((string *)&local_68,local_a8,local_a8 + local_a0);
          }
          else {
LAB_0010a0c7:
            iVar3 = (int)lVar6;
            if (iVar3 <= iVar4) goto LAB_0010a0d0;
            local_68 = (long *)&local_58;
            std::__cxx11::string::_M_construct<char*>
                      ((string *)&local_68,local_a8,local_a8 + local_a0);
            if (iVar3 == -2) {
              local_60 = 0;
              *(undefined1 *)local_68 = 0;
            }
            else if (iVar3 != -1) {
              std::__cxx11::string::_M_erase((ulong)&local_68,0);
            }
          }
          local_80 = local_60;
          if (local_68 == (long *)&local_58) {
            uVar14 = local_60 + 1;
            plVar9 = (long *)&local_58;
            plVar13 = local_78;
            if (7 < (uint)uVar14) {
              uVar7 = 0;
              do {
                uVar5 = (int)uVar7 + 8;
                uVar8 = (ulong)uVar5;
                *(undefined8 *)((long)local_78 + uVar7) = *(undefined8 *)((long)&local_58 + uVar7);
                uVar7 = uVar8;
              } while (uVar5 < ((uint)uVar14 & 0xfffffff8));
              plVar13 = (long *)((long)local_78 + uVar8);
              plVar9 = (long *)(uVar8 + (long)&local_58);
            }
            lVar6 = 0;
            if ((uVar14 & 4) != 0) {
              *(int *)plVar13 = (int)*plVar9;
              lVar6 = 4;
            }
            if ((uVar14 & 2) != 0) {
              *(undefined2 *)((long)plVar13 + lVar6) = *(undefined2 *)((long)plVar9 + lVar6);
              lVar6 = lVar6 + 2;
            }
            local_88 = local_78;
            if ((uVar14 & 1) != 0) {
              *(undefined1 *)((long)plVar13 + lVar6) = *(undefined1 *)((long)plVar9 + lVar6);
            }
          }
          else {
            local_78[0] = CONCAT71(uStack_57,local_58);
            local_88 = local_68;
          }
        }
        uVar14 = 0;
        local_68 = (long *)&local_58;
        std::__cxx11::string::_M_construct<char*>
                  ((string *)&local_68,local_88,(undefined1 *)(local_80 + (long)local_88));
        if (local_60 != 0) {
          do {
            pbVar10 = (byte *)((long)local_68 + uVar14);
            uVar14 = uVar14 + 1;
            iVar4 = tolower((uint)*pbVar10);
            *pbVar10 = (byte)iVar4;
          } while (uVar14 < local_60);
        }
        if (local_68 != (long *)&local_58) {
          operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
        }
        if ((local_80 == 3) &&
           ((((short)*local_88 == 0x7865 && (*(char *)((long)local_88 + 2) == 'r')) ||
            (((short)*local_88 == 0x6468 && (*(char *)((long)local_88 + 2) == 'r')))))) {
          *(undefined2 *)(this + 2) = 0x101;
          if (local_88 != local_78) {
            operator_delete(local_88,local_78[0] + 1);
          }
          if (local_a8 != &local_98) {
            operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
          }
          goto LAB_00109f81;
        }
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
        if (local_a8 != &local_98) {
          operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
        }
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(this + 0x10));
      bVar1 = this[2];
      goto joined_r0x0010a1a6;
    }
LAB_0010a1ac:
    iVar4 = *(int *)(this + 0x20);
  }
  if (iVar4 != 0) {
    basisu::debug_printf
              ("Warning: Alpha channel image filenames are not supported in UASTC HDR mode.\n");
    puVar11 = *(undefined8 **)(this + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      __ptr = puVar11 + (ulong)*(uint *)(this + 0x20) * 4;
      if (puVar11 != __ptr) {
        do {
          if ((undefined8 *)*puVar11 != puVar11 + 2) {
            operator_delete((undefined8 *)*puVar11,puVar11[2] + 1);
          }
          puVar11 = puVar11 + 4;
        } while (__ptr != puVar11);
        __ptr = *(undefined8 **)(this + 0x18);
      }
      free(__ptr);
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
    }
    if (this[2] == (basis_compressor)0x0) goto LAB_00109f8c;
  }
  *(undefined2 *)this = 0x101;
LAB_00109f8c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basis_compressor::sanity_check_input_params() */

uint __thiscall basisu::basis_compressor::sanity_check_input_params(basis_compressor *this)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)this[0xd8];
  if (this[0xd8] == (basis_compressor)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      return uVar1;
    }
    if (*(int *)(this + 0x30) != 0) {
      if (*(int *)(this + 0x40) != 0) {
        return uVar1;
      }
LAB_0010a4bc:
      return (uint)(*(int *)(this + 0x60) == 0);
    }
    if (*(int *)(this + 0x40) == 0) {
      return uVar1;
    }
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x50) >> 8),*(int *)(this + 0x50) == 0);
  }
  else {
    uVar1 = 0;
    if (*(int *)(this + 0x10) == 0) {
      return 0;
    }
    if ((*(int *)(this + 0x30) == 0) && (*(int *)(this + 0x40) == 0)) {
      if (*(int *)(this + 0x50) != 0) {
        return 0;
      }
      goto LAB_0010a4bc;
    }
  }
  return uVar1;
}



/* basisu::basis_compressor::generate_mipmaps(basisu::image const&, basisu::vector<basisu::image>&,
   bool) */

undefined4 __thiscall
basisu::basis_compressor::generate_mipmaps
          (basis_compressor *this,image *param_1,vector *param_2,bool param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  image *piVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  image *this_00;
  long lVar19;
  long in_FS_OFFSET;
  interval_timer local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::generate_mipmaps\n");
  basisu::interval_timer::interval_timer(local_58);
  basisu::interval_timer::start();
  uVar12 = *(uint *)param_1;
  uVar14 = *(uint *)(param_1 + 4);
  uVar9 = uVar12;
  if (uVar12 <= uVar14) {
    uVar9 = uVar14;
  }
  if (*(uint *)(this + 0x134) < uVar9) {
    uVar7 = 1;
    uVar2 = uVar12;
    uVar9 = uVar14;
    do {
      uVar2 = uVar2 >> 1;
      uVar16 = (ulong)uVar7;
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar9 = uVar9 >> 1;
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      uVar7 = uVar7 + 1;
      uVar13 = uVar9;
      if (uVar9 <= uVar2) {
        uVar13 = uVar2;
      }
    } while (*(uint *)(this + 0x134) < uVar13);
    if (1 < uVar7) {
      lVar19 = 0;
      while( true ) {
        iVar17 = (int)lVar19 + 1;
        uVar18 = (ulong)*(uint *)(param_2 + 8);
        bVar6 = (byte)iVar17;
        bVar1 = bVar6 & 0x1f;
        uVar9 = uVar12 >> bVar1;
        if (uVar12 >> bVar1 == 0) {
          uVar9 = 1;
        }
        bVar6 = bVar6 & 0x1f;
        uVar12 = uVar14 >> bVar6;
        if (uVar14 >> bVar6 == 0) {
          uVar12 = 1;
        }
        if (uVar18 == 0xffffffff) {
          lVar8 = *(long *)param_2;
        }
        else {
          uVar14 = *(uint *)(param_2 + 8) + 1;
          if (*(uint *)(param_2 + 0xc) < uVar14) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_2,SUB41(uVar14,0),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
                       true);
            lVar10 = (ulong)(uVar14 - *(uint *)(param_2 + 8)) << 5;
            uVar4 = (ulong)*(uint *)(param_2 + 8);
          }
          else {
            lVar10 = 0x20;
            uVar4 = uVar18;
          }
          lVar8 = *(long *)param_2;
          puVar5 = (undefined8 *)(uVar4 * 0x20 + lVar8);
          puVar11 = (undefined8 *)(lVar10 + (long)puVar5);
          for (; puVar5 != puVar11; puVar5 = puVar5 + 4) {
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          *(uint *)(param_2 + 8) = uVar14;
        }
        this_00 = (image *)(uVar18 * 0x20 + lVar8);
        image::crop(this_00,uVar9,uVar12,0xffffffff,(color_rgba *)&g_black_color,true);
        piVar15 = param_1;
        if ((this[0x130] != (basis_compressor)0x0) && (iVar17 != 1)) {
          piVar15 = (image *)(lVar19 * 0x20 + *(long *)param_2);
        }
        uVar3 = basisu::image_resample
                          (piVar15,this_00,(bool)this[0x128],*(char **)(this + 0x108),
                           *(float *)(this + 0xf0),(bool)this[0x12e],0,param_3 + 3);
        if ((char)uVar3 == '\0') {
          basisu::error_printf("basis_compressor::generate_mipmaps: image_resample() failed!\n");
          goto LAB_0010a782;
        }
        if (this[300] != (basis_compressor)0x0) {
          image::renormalize_normal_map(this_00);
        }
        if (uVar16 == lVar19 + 1U) break;
        lVar19 = lVar19 + 1;
        uVar12 = *(uint *)param_1;
        uVar14 = *(uint *)(param_1 + 4);
      }
    }
  }
  if (this[0x8c] != (basis_compressor)0x0) {
    basisu::interval_timer::get_elapsed_secs();
    basisu::debug_printf("Total mipmap generation time: %3.3f secs\n");
  }
  uVar3 = 1;
LAB_0010a782:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* basisu::basis_compressor::clean_hdr_image(basisu::imagef&) */

void __thiscall basisu::basis_compressor::clean_hdr_image(basis_compressor *this,imagef *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  ulong uVar7;
  
  fVar16 = _LC88;
  dVar17 = _LC93;
  iVar1 = *(int *)param_1;
  iVar9 = *(int *)(param_1 + 4);
  if (iVar9 != 0) {
    iVar10 = 0;
    if (iVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      fVar13 = 0.0;
      do {
        uVar6 = *(int *)(param_1 + 8) * iVar10;
        uVar8 = uVar6 + iVar1;
        do {
          uVar7 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          pfVar4 = (float *)(uVar7 * 0x10 + lVar2);
          if (fVar13 <= *pfVar4) {
            fVar13 = *pfVar4;
          }
          if (fVar13 <= pfVar4[1]) {
            fVar13 = pfVar4[1];
          }
          if (fVar13 <= pfVar4[2]) {
            fVar13 = pfVar4[2];
          }
        } while (uVar6 != uVar8);
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar9);
      if (_LC88 < fVar13) {
        iVar10 = 0;
        fVar11 = fVar13 / _LC88;
        fVar18 = _LC88 / fVar13;
        if (iVar1 == 0) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar9);
        }
        else {
          do {
            uVar6 = *(int *)(param_1 + 8) * iVar10;
            uVar8 = uVar6 + iVar1;
            do {
              pfVar5 = (float *)((ulong)uVar6 * 0x10 + lVar2);
              pfVar4 = pfVar5 + 3;
              do {
                dVar14 = (double)*pfVar5 * (double)fVar18;
                fVar12 = fVar16;
                if (dVar14 < dVar17) {
                  fVar12 = (float)dVar14;
                }
                *pfVar5 = fVar12;
                pfVar5 = pfVar5 + 1;
              } while (pfVar5 != pfVar4);
              uVar6 = uVar6 + 1;
            } while (uVar8 != uVar6);
            iVar10 = iVar10 + 1;
          } while (iVar9 != iVar10);
        }
        __printf_chk((double)fVar13,dVar17,2,
                     "Warning: The input HDR image\'s maximum used float value was %f, which is too high to encode as ASTC HDR. The image\'s components have been linearly scaled so the maximum used value is %f, by multiplying by %f.\n"
                    );
        __printf_chk((double)fVar11,2,
                     "The decoded ASTC HDR texture will have to be scaled up by %f.\n");
      }
      cVar3 = imagef::clean_astc_hdr_pixels(param_1,fVar16);
      goto joined_r0x0010aa12;
    }
    do {
      iVar10 = iVar10 + 1;
    } while (iVar9 != iVar10);
  }
  cVar3 = imagef::clean_astc_hdr_pixels(param_1,_LC88);
joined_r0x0010aa12:
  if (cVar3 == '\0') {
    puts(
        "Warning: clean_astc_hdr_pixels() had to modify the input image to encode to ASTC HDR - see previous warning(s)."
        );
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  dVar17 = _LC136;
  dVar14 = _LC91;
  dVar15 = _LC136;
  dVar19 = _LC92;
  if (iVar1 != 0) {
    iVar9 = 0;
    fVar16 = _LC90;
    fVar13 = _LC90;
    fVar11 = _LC89;
    do {
      if (*(int *)param_1 != 0) {
        uVar8 = *(int *)(param_1 + 8) * iVar9;
        uVar6 = uVar8 + *(int *)param_1;
        do {
          pfVar5 = (float *)((ulong)uVar8 * 0x10 + *(long *)(param_1 + 0x10));
          pfVar4 = pfVar5 + 3;
          do {
            fVar18 = *pfVar5;
            if (fVar18 <= fVar13) {
              fVar13 = fVar18;
            }
            if ((fVar18 != 0.0) && (fVar18 <= fVar16)) {
              fVar16 = fVar18;
            }
            pfVar5 = pfVar5 + 1;
            if (fVar11 <= fVar18) {
              fVar11 = fVar18;
            }
          } while (pfVar4 != pfVar5);
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar1);
    dVar17 = (double)fVar16;
    dVar14 = (double)fVar11;
    dVar15 = (double)fVar13;
    dVar19 = (double)(fVar11 / fVar16);
  }
  basisu::debug_printf
            ("Lowest image value: %e, lowest non-zero value: %e, highest value: %e, dynamic range: %e\n"
             ,dVar15,dVar17,dVar14,dVar19);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::generate_mipmaps(basisu::imagef const&,
   basisu::vector<basisu::imagef>&, bool) */

undefined4 __thiscall
basisu::basis_compressor::generate_mipmaps
          (basis_compressor *this,imagef *param_1,vector *param_2,bool param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  imagef *this_00;
  uint uVar14;
  uint uVar15;
  imagef *piVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  interval_timer local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::generate_mipmaps\n");
  basisu::interval_timer::interval_timer(local_78);
  basisu::interval_timer::start();
  uVar12 = *(uint *)param_1;
  uVar15 = *(uint *)(param_1 + 4);
  uVar9 = uVar12;
  if (uVar12 <= uVar15) {
    uVar9 = uVar15;
  }
  if (*(uint *)(this + 0x134) < uVar9) {
    uVar7 = 1;
    uVar2 = uVar12;
    uVar9 = uVar15;
    do {
      uVar2 = uVar2 >> 1;
      uVar17 = (ulong)uVar7;
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar9 = uVar9 >> 1;
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      uVar7 = uVar7 + 1;
      uVar14 = uVar9;
      if (uVar9 <= uVar2) {
        uVar14 = uVar2;
      }
    } while (*(uint *)(this + 0x134) < uVar14);
    if (1 < uVar7) {
      uVar19 = 0;
      while( true ) {
        iVar18 = (int)uVar19 + 1;
        uVar13 = (ulong)*(uint *)(param_2 + 8);
        bVar6 = (byte)iVar18;
        bVar1 = bVar6 & 0x1f;
        uVar9 = uVar12 >> bVar1;
        if (uVar12 >> bVar1 == 0) {
          uVar9 = 1;
        }
        bVar6 = bVar6 & 0x1f;
        uVar12 = uVar15 >> bVar6;
        if (uVar15 >> bVar6 == 0) {
          uVar12 = 1;
        }
        if (uVar13 == 0xffffffff) {
          lVar8 = *(long *)param_2;
        }
        else {
          uVar15 = *(uint *)(param_2 + 8) + 1;
          if (*(uint *)(param_2 + 0xc) < uVar15) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_2,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
                       true);
            lVar10 = (ulong)(uVar15 - *(uint *)(param_2 + 8)) << 5;
            uVar4 = (ulong)*(uint *)(param_2 + 8);
          }
          else {
            lVar10 = 0x20;
            uVar4 = uVar13;
          }
          lVar8 = *(long *)param_2;
          puVar5 = (undefined8 *)(uVar4 * 0x20 + lVar8);
          puVar11 = (undefined8 *)(lVar10 + (long)puVar5);
          for (; puVar5 != puVar11; puVar5 = puVar5 + 4) {
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          *(uint *)(param_2 + 8) = uVar15;
        }
        this_00 = (imagef *)(uVar13 * 0x20 + lVar8);
        local_58 = __LC98;
        uStack_50 = _UNK_00122508;
        imagef::crop(this_00,uVar9,uVar12,0xffffffff,(vec *)&local_58);
        piVar16 = param_1;
        if ((this[0x130] != (basis_compressor)0x0) && (iVar18 != 1)) {
          piVar16 = (imagef *)(uVar19 * 0x20 + *(long *)param_2);
        }
        uVar3 = basisu::image_resample
                          (piVar16,this_00,"box",*(float *)(this + 0xf0),(bool)this[0x12e],0,
                           param_3 + 3);
        if ((char)uVar3 == '\0') {
          basisu::error_printf("basis_compressor::generate_mipmaps: image_resample() failed!\n");
          goto LAB_0010ace0;
        }
        uVar19 = uVar19 + 1;
        clean_hdr_image(this,this_00);
        if (uVar17 == uVar19) break;
        uVar12 = *(uint *)param_1;
        uVar15 = *(uint *)(param_1 + 4);
      }
    }
  }
  if (this[0x8c] != (basis_compressor)0x0) {
    basisu::interval_timer::get_elapsed_secs();
    basisu::debug_printf("Total mipmap generation time: %3.3f secs\n");
  }
  uVar3 = 1;
LAB_0010ace0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basis_compressor::validate_texture_type_constraints() */

undefined4 __thiscall
basisu::basis_compressor::validate_texture_type_constraints(basis_compressor *this)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  basis_compressor bVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  int *local_38;
  ulong local_30;
  long local_20;
  
  uVar5 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::validate_texture_type_constraints\n");
  if (*(int *)(this + 0x154) != 0) {
    bVar6 = this[2];
    uVar2 = 0;
    uVar4 = 0;
    while( true ) {
      if (bVar6 == (basis_compressor)0x0) {
        uVar3 = *(uint *)(this + 0x2e8);
      }
      else {
        uVar3 = *(uint *)(this + 0x2f8);
      }
      if (uVar3 <= (uint)uVar2) break;
      uVar3 = *(int *)(uVar2 * 0x30 + *(long *)(this + 800) + 0x24) + 1;
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
      uVar2 = (ulong)((uint)uVar2 + 1);
    }
    if ((*(int *)(this + 0x154) != 2) ||
       ((uVar4 * -0x55555555 >> 1 | (uint)((uVar4 * -0x55555555 & 1) != 0) << 0x1f) < 0x2aaaaaab)) {
      local_38 = (int *)0x0;
      local_30 = 0;
      if (uVar4 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_38,SUB41(uVar4,0),(uint)(uVar4 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        memset(local_38 + (local_30 & 0xffffffff),0,(ulong)(uVar4 - (uint)local_30) << 2);
        local_30 = CONCAT44(local_30._4_4_,uVar4);
        bVar6 = this[2];
      }
      uVar2 = 0;
      iVar8 = -1;
      iVar7 = -1;
      do {
        if (bVar6 == (basis_compressor)0x0) {
          uVar4 = *(uint *)(this + 0x2e8);
        }
        else {
          uVar4 = *(uint *)(this + 0x2f8);
        }
        if (uVar4 <= (uint)uVar2) {
          if ((uint)local_30 < 2) goto LAB_0010af68;
          uVar2 = 1;
          goto LAB_0010aedd;
        }
        lVar1 = uVar2 * 0x30 + *(long *)(this + 800);
        uVar4 = local_38[*(uint *)(lVar1 + 0x24)];
        uVar3 = *(int *)(lVar1 + 0x28) + 1;
        if (uVar3 < uVar4) {
          uVar3 = uVar4;
        }
        local_38[*(uint *)(lVar1 + 0x24)] = uVar3;
        if (*(int *)(lVar1 + 0x28) == 0) {
          if (iVar7 < 0) {
            iVar7 = *(int *)(lVar1 + 4);
            iVar8 = *(int *)(lVar1 + 8);
          }
          else if ((*(int *)(lVar1 + 4) != iVar7) || (*(int *)(lVar1 + 8) != iVar8))
          goto LAB_0010af30;
        }
        uVar2 = (ulong)((uint)uVar2 + 1);
      } while( true );
    }
    uVar5 = 0;
    basisu::error_printf
              (
              "basis_compressor::validate_texture_type_constraints: For cubemaps the total number of input images is not a multiple of 6!\n"
              );
  }
  goto LAB_0010af00;
LAB_0010af30:
  uVar5 = 0;
  basisu::error_printf
            (
            "basis_compressor::validate_texture_type_constraints: The source image resolutions are not all equal!\n"
            );
  goto joined_r0x0010aefa;
  while (uVar2 = uVar2 + 1, uVar2 != (local_30 & 0xffffffff)) {
LAB_0010aedd:
    if (*local_38 != local_38[uVar2]) {
      uVar5 = 0;
      basisu::error_printf
                (
                "basis_compressor::validate_texture_type_constraints: Each image must have the same number of mipmap levels!\n"
                );
      goto joined_r0x0010aefa;
    }
  }
LAB_0010af68:
  uVar5 = 1;
joined_r0x0010aefa:
  if (local_38 != (int *)0x0) {
    free(local_38);
  }
LAB_0010af00:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::extract_source_blocks() */

basis_compressor __thiscall basisu::basis_compressor::extract_source_blocks(basis_compressor *this)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint *puVar5;
  basis_compressor bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  int iVar28;
  ulong uVar29;
  undefined8 *puVar30;
  int local_7c;
  int *local_78;
  int local_70;
  int *local_50;
  
  basisu::debug_printf("basis_compressor::extract_source_blocks\n");
  bVar6 = this[2];
  uVar21 = *(uint *)(this + 0x330);
  if (bVar6 == (basis_compressor)0x0) {
    uVar2 = *(uint *)(this + 0x500);
    if (uVar21 != uVar2) {
      if ((uVar2 <= uVar21) && (*(uint *)(this + 0x504) < uVar21)) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x4f8,SUB41(uVar21,0),(uint)(uVar2 + 1 == uVar21),
                   (_func_void_void_ptr_void_ptr_uint *)0x40,false);
        bVar6 = this[2];
      }
      *(uint *)(this + 0x500) = uVar21;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x510);
    if (uVar21 != uVar2) {
      if ((uVar2 <= uVar21) && (*(uint *)(this + 0x514) < uVar21)) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x508,SUB41(uVar21,0),(uint)(uVar2 + 1 == uVar21),
                   (_func_void_void_ptr_void_ptr_uint *)0x100,true);
        bVar6 = this[2];
      }
      *(uint *)(this + 0x510) = uVar21;
    }
  }
  uVar21 = 0;
  do {
    uVar2 = _LC20;
    if (bVar6 == (basis_compressor)0x0) {
      if (*(uint *)(this + 0x2e8) <= uVar21) {
        return (basis_compressor)0x1;
      }
      local_50 = (int *)0x0;
      puVar5 = (uint *)((ulong)uVar21 * 0x20 + *(long *)(this + 0x2e0));
      local_78 = (int *)(*(long *)(this + 800) + (ulong)uVar21 * 0x30);
      local_70 = local_78[5];
      iVar25 = local_78[6];
    }
    else {
      if (*(uint *)(this + 0x2f8) <= uVar21) {
        return bVar6;
      }
      local_50 = (int *)((ulong)uVar21 * 0x20 + *(long *)(this + 0x2f0));
      local_78 = (int *)(*(long *)(this + 800) + (ulong)uVar21 * 0x30);
      puVar5 = (uint *)0x0;
      local_70 = local_78[5];
      iVar25 = local_78[6];
    }
    local_7c = 0;
    iVar22 = 0;
    if (iVar25 != 0) {
      do {
        if (local_70 != 0) {
          iVar10 = iVar22 * 4;
          iVar14 = 0;
          iVar26 = 0;
          do {
            uVar29 = (ulong)(uint)(local_7c + *local_78 + iVar14);
            if (bVar6 == (basis_compressor)0x0) {
              uVar19 = *puVar5;
              uVar15 = puVar5[1];
              lVar12 = *(long *)(puVar5 + 4);
              puVar30 = (undefined8 *)(uVar29 * 0x40 + *(long *)(this + 0x4f8));
              if ((uVar19 < iVar26 + 4U) || (uVar15 < iVar10 + 4U)) {
                puVar13 = puVar30 + 2;
                iVar28 = iVar10;
                while( true ) {
                  puVar17 = puVar13 + -2;
                  iVar23 = iVar26;
                  while( true ) {
                    iVar16 = uVar15 - 1;
                    if (iVar28 < (int)(uVar15 - 1)) {
                      iVar16 = iVar28;
                    }
                    if (iVar28 < 0) {
                      iVar16 = 0;
                    }
                    iVar11 = uVar19 - 1;
                    if (iVar23 < (int)(uVar19 - 1)) {
                      iVar11 = iVar23;
                    }
                    if (iVar23 < 0) {
                      iVar11 = 0;
                    }
                    iVar23 = iVar23 + 1;
                    *(undefined4 *)puVar17 =
                         *(undefined4 *)(lVar12 + (ulong)(iVar16 * puVar5[2] + iVar11) * 4);
                    if ((undefined8 *)((long)puVar17 + 4) == puVar13) break;
                    uVar15 = puVar5[1];
                    uVar19 = *puVar5;
                    lVar12 = *(long *)(puVar5 + 4);
                    puVar17 = (undefined8 *)((long)puVar17 + 4);
                  }
                  puVar13 = (undefined8 *)((long)puVar17 + 0x14);
                  iVar28 = iVar28 + 1;
                  if (puVar30 + 10 == puVar13) break;
                  uVar15 = puVar5[1];
                  uVar19 = *puVar5;
                  lVar12 = *(long *)(puVar5 + 4);
                }
              }
              else {
                puVar13 = (undefined8 *)(lVar12 + (ulong)(puVar5[2] * iVar10 + iVar26) * 4);
                puVar17 = puVar30;
                do {
                  uVar3 = puVar13[1];
                  puVar9 = puVar17 + 2;
                  *puVar17 = *puVar13;
                  puVar17[1] = uVar3;
                  puVar13 = (undefined8 *)((long)puVar13 + (ulong)puVar5[2] * 4);
                  puVar17 = puVar9;
                } while (puVar30 + 8 != puVar9);
              }
              bVar6 = this[2];
            }
            else {
              iVar28 = local_50[1];
              puVar17 = (undefined8 *)(*(long *)(this + 0x508) + uVar29 * 0x100);
              lVar12 = *(long *)(local_50 + 4);
              puVar30 = puVar17 + 8;
              iVar23 = *local_50;
              iVar16 = local_50[2];
              puVar13 = puVar17;
              iVar11 = iVar10;
              do {
                iVar20 = iVar28 + -1;
                if (iVar11 <= iVar28 + -1) {
                  iVar20 = iVar11;
                }
                if (iVar11 < 0) {
                  iVar20 = 0;
                }
                puVar9 = puVar13;
                iVar7 = iVar26;
                do {
                  puVar18 = puVar9;
                  iVar8 = iVar23 + -1;
                  if (iVar7 <= iVar23 + -1) {
                    iVar8 = iVar7;
                  }
                  uVar19 = iVar8 + iVar20 * iVar16;
                  if (iVar7 < 0) {
                    uVar19 = iVar20 * iVar16;
                  }
                  puVar9 = (undefined8 *)((ulong)uVar19 * 0x10 + lVar12);
                  if (puVar9 != puVar18) {
                    uVar3 = puVar9[1];
                    *puVar18 = *puVar9;
                    puVar18[1] = uVar3;
                  }
                  iVar7 = iVar7 + 1;
                  puVar9 = puVar18 + 2;
                } while (puVar18 + 2 != puVar30);
                puVar13 = puVar13 + 8;
                puVar30 = puVar18 + 10;
                iVar11 = iVar11 + 1;
              } while (puVar17 + 0x20 != puVar13);
              pfVar27 = (float *)((long)puVar17 + 0xc);
              do {
                pfVar4 = pfVar27 + -3;
                do {
                  pfVar24 = pfVar4;
                  fVar1 = *pfVar24;
                  if ((((NAN(fVar1)) || (__LC33 < (float)((uint)fVar1 & uVar2))) || (fVar1 < 0.0))
                     || (__LC105 < fVar1)) {
                    basisu::error_printf
                              ("basis_compressor::extract_source_blocks: invalid float component\n")
                    ;
                    return (basis_compressor)0x0;
                  }
                  pfVar4 = pfVar24 + 1;
                } while (pfVar24 + 1 != pfVar27);
                pfVar27 = pfVar24 + 5;
              } while ((float *)((long)puVar17 + 0x10c) != pfVar27);
            }
            iVar26 = iVar26 + 4;
            iVar14 = iVar14 + 1;
          } while (iVar14 != local_70);
        }
        iVar22 = iVar22 + 1;
        local_7c = local_7c + local_70;
      } while (iVar22 != iVar25);
    }
    uVar21 = uVar21 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::process_frontend() */

undefined4 __thiscall basisu::basis_compressor::process_frontend(basis_compressor *this)

{
  params *ppVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_490;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::process_frontend\n");
  uVar7 = *(uint *)(this + 0x330);
  if ((int)*(uint *)(this + 0x148) < 0x3f01) {
    if ((int)*(uint *)(this + 0x14c) < 0x3f01) {
      if (*(int *)(this + 0x150) != -1) {
        local_490 = (float)*(int *)(this + 0x150) / _LC16;
        uVar6 = (uint)((double)((float)uVar7 * __LC111) / __LC112);
        if (local_490 < 0.0) {
          fVar10 = 0.0;
          local_490 = 0.0;
LAB_0010b53a:
          fVar10 = powf(fVar10,_LC114);
          uVar9 = 0x12c0;
          if ((int)uVar6 < 0x12c1) {
            uVar9 = uVar6;
          }
          if ((int)uVar9 < 0x100) {
            uVar9 = 0x100;
          }
          if (uVar7 < uVar9) {
            uVar9 = uVar7;
          }
          fVar11 = _LC107;
          if (0x3f < uVar9) {
            fVar11 = (float)(int)uVar9 - _LC107;
          }
          fVar10 = (fVar10 * _LC17 + 0.0) * fVar11 + _LC107 + _LC17;
        }
        else {
          if (local_490 <= _LC8) {
            if (local_490 <= _LC113) {
              fVar10 = local_490 / _LC113;
              goto LAB_0010b53a;
            }
            fVar10 = (local_490 - _LC113) / __LC115;
          }
          else {
            local_490 = _LC8;
            fVar10 = _LC8;
          }
          fVar10 = powf(fVar10,_LC116);
          uVar9 = 0x2000;
          if ((int)uVar6 < 0x2001) {
            uVar9 = uVar6;
          }
          if ((int)uVar9 < 0x100) {
            uVar9 = 0x100;
          }
          if (uVar7 < uVar9) {
            uVar9 = uVar7;
          }
          if (uVar9 < 0x12c0) {
            fVar11 = 0.0;
          }
          else {
            fVar11 = (float)(int)uVar9 - _LC117;
          }
          fVar10 = fVar10 * fVar11 + _LC117 + _LC17;
        }
        fVar11 = _LC17;
        uVar9 = (uint)(long)fVar10;
        if (0x3f00 < uVar9) {
          uVar9 = 0x3f00;
        }
        if (uVar9 < 0x20) {
          uVar9 = 0x20;
        }
        uVar3 = 0x3f00;
        if ((int)uVar6 < 0x3f01) {
          uVar3 = uVar6;
        }
        if ((int)uVar3 < 0x100) {
          uVar3 = 0x100;
        }
        if (uVar3 <= uVar7) {
          uVar7 = uVar3;
        }
        fVar10 = powf(local_490,_LC118);
        if (uVar7 < 0x60) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = (float)(int)uVar7 - _LC119;
        }
        uVar7 = (uint)(long)(fVar10 * fVar12 + _LC119 + fVar11);
        if (0x3f00 < uVar7) {
          uVar7 = 0x3f00;
        }
        if (uVar7 < 8) {
          uVar7 = 8;
        }
        basisu::debug_printf("Max endpoints: %u, max selectors: %u\n",(ulong)uVar9,(ulong)uVar7);
        fVar12 = _LC125;
        fVar10 = _LC121;
        iVar2 = *(int *)(this + 0x150);
        if (iVar2 < 0xdf) {
          if (iVar2 < 0xc0) {
            if (iVar2 < 0xa0) {
              if (0x80 < iVar2) {
                fVar10 = (local_490 - __LC123) / __LC124;
                if (this[0xd4] == (basis_compressor)0x0) {
                  this[0xd4] = (basis_compressor)0x1;
                  *(float *)(this + 0xc4) = (fVar12 * fVar10 + _LC8) * *(float *)(this + 0xc4);
                }
                if (this[0xbc] == (basis_compressor)0x0) {
                  fVar10 = fVar10 * _LC125 + _LC8;
                  goto LAB_0010b69c;
                }
              }
            }
            else {
              if (this[0xd4] == (basis_compressor)0x0) {
                fVar10 = _LC122 * *(float *)(this + 0xc4);
                this[0xd4] = (basis_compressor)0x1;
                *(float *)(this + 0xc4) = fVar10;
              }
              if (this[0xbc] == (basis_compressor)0x0) {
                fVar10 = _LC122 * *(float *)(this + 0xac);
                this[0xbc] = (basis_compressor)0x1;
                *(float *)(this + 0xac) = fVar10;
              }
            }
          }
          else {
            if (this[0xd4] == (basis_compressor)0x0) {
              this[0xd4] = (basis_compressor)0x1;
              *(float *)(this + 0xc4) = fVar11 * *(float *)(this + 0xc4);
            }
            if (this[0xbc] == (basis_compressor)0x0) {
              this[0xbc] = (basis_compressor)0x1;
              *(float *)(this + 0xac) = fVar11 * *(float *)(this + 0xac);
            }
          }
        }
        else if (this[0xbc] == (basis_compressor)0x0) {
          if (this[0xd4] == (basis_compressor)0x0) {
            this[0xd4] = (basis_compressor)0x1;
            *(float *)(this + 0xc4) = *(float *)(this + 0xc4) * fVar10;
          }
LAB_0010b69c:
          this[0xbc] = (basis_compressor)0x1;
          *(float *)(this + 0xac) = fVar10 * *(float *)(this + 0xac);
        }
      }
      ppVar1 = (params *)(this + 0x338);
      uVar4 = basisu::basisu_frontend::init(ppVar1);
      if ((char)uVar4 != '\0') {
        basisu::basisu_frontend::compress();
        if (this[0x4f0] != (basis_compressor)0x0) {
          this[0x829] = (basis_compressor)0x1;
        }
        if ((this[0x90] != (basis_compressor)0x0) && (*(int *)(this + 0x328) != 0)) {
          lVar8 = 0;
          uVar7 = 0;
          do {
            __snprintf_chk(local_448,0x400,2,0x400,"rdo_frontend_output_output_blocks_%u.png",uVar7)
            ;
            puVar5 = (uint *)(*(long *)(this + 800) + lVar8);
            uVar6 = (uint)local_448;
            basisu::basisu_frontend::dump_debug_image
                      ((char *)ppVar1,uVar6,*puVar5,puVar5[5],SUB41(puVar5[6],0));
            uVar9 = uVar7 + 1;
            __snprintf_chk(local_448,0x400,2,0x400,"rdo_frontend_output_api_%u.png",uVar7);
            puVar5 = (uint *)(*(long *)(this + 800) + lVar8);
            lVar8 = lVar8 + 0x30;
            basisu::basisu_frontend::dump_debug_image
                      ((char *)ppVar1,uVar6,*puVar5,puVar5[5],SUB41(puVar5[6],0));
            uVar7 = uVar9;
          } while (uVar9 < *(uint *)(this + 0x328));
        }
        goto LAB_0010b858;
      }
      basisu::error_printf("basisu_frontend::init() failed!\n");
    }
    else {
      basisu::error_printf
                ("Too many selector clusters! (%u but max is %u)\n",(ulong)*(uint *)(this + 0x14c),
                 0x3f00);
    }
  }
  else {
    basisu::error_printf
              ("Too many endpoint clusters! (%u but max is %u)\n",(ulong)*(uint *)(this + 0x148),
               0x3f00);
  }
  uVar4 = 0;
LAB_0010b858:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basis_compressor::process_backend() */

bool __thiscall basisu::basis_compressor::process_backend(basis_compressor *this)

{
  uint uVar1;
  long in_FS_OFFSET;
  vector local_38;
  basis_compressor local_37;
  basis_compressor local_36;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  basis_compressor local_27;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::process_backend\n");
  local_37 = this[0x8c];
  local_34 = 0;
  local_38 = (vector)0x1;
  local_36 = this[0x90];
  local_2c = *(undefined4 *)(this + 0x94);
  if (this[0xc0] == (basis_compressor)0x0) {
    local_34 = (ulong)*(uint *)(this + 0xc4);
  }
  if (this[0xaa] == (basis_compressor)0x0) {
    local_34 = CONCAT44(*(undefined4 *)(this + 0xac),(undefined4)local_34);
  }
  local_27 = this[0x2c4];
  local_28 = *(long *)(this + 0x360) != 0;
  basisu::basisu_backend::init
            ((basisu_frontend *)(this + 0x548),(basisu_backend_params *)(this + 0x338),&local_38);
  uVar1 = basisu::basisu_backend::encode();
  if (uVar1 == 0) {
    basisu::error_printf("basis_compressor::encode() failed!\n");
  }
  else {
    basisu::debug_printf("Total packed bytes (estimated): %u\n",(ulong)uVar1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::write_hdr_debug_images(char const*, basisu::imagef const&, unsigned
   int, unsigned int) */

undefined8 __thiscall
basisu::basis_compressor::write_hdr_debug_images
          (basis_compressor *this,char *param_1,imagef *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_c8;
  int local_c0;
  void *local_b8;
  undefined8 local_b0;
  uint local_a8 [4];
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 uStack_60;
  long local_58 [3];
  long local_40;
  
  uVar9 = *(uint *)(param_2 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = *(undefined8 *)param_2;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_c0 = *(int *)(param_2 + 8);
  if (uVar9 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_b8,SUB41(uVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,true);
    uVar9 = *(uint *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x10);
    if (uVar9 != 0) {
      lVar7 = 0;
      do {
        uVar3 = ((undefined8 *)(lVar2 + lVar7))[1];
        *(undefined8 *)((long)local_b8 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
        ((undefined8 *)((long)local_b8 + lVar7))[1] = uVar3;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar9 << 4 != lVar7);
    }
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar9);
  local_68 = __LC98;
  uStack_60 = _UNK_00122508;
  imagef::crop((imagef *)&local_c8,param_3,param_4,0xffffffff,(vec *)&local_68);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  image::crop((image *)local_a8,param_3,param_4,0xffffffff,(color_rgba *)&g_black_color,true);
  if ((param_4 != 0) && (uVar9 = 0, param_3 != 0)) {
    do {
      uVar10 = 0;
      do {
        pfVar8 = (float *)((ulong)(local_c0 * uVar9 + uVar10) * 0x10 + (long)local_b8);
        fVar12 = *pfVar8;
        fVar13 = pfVar8[1];
        fVar11 = pfVar8[2];
        if (0.0 <= fVar12) {
          fVar14 = _LC8;
          if (fVar12 <= _LC8) {
            fVar14 = fVar12;
          }
          if (fVar13 < 0.0) goto LAB_0010be96;
LAB_0010bd38:
          fVar12 = _LC8;
          if (fVar13 <= _LC8) {
            fVar12 = fVar13;
          }
          if (fVar11 < 0.0) goto LAB_0010bea3;
LAB_0010bd50:
          fVar13 = _LC8;
          if (fVar11 <= _LC8) {
            fVar13 = fVar11;
          }
        }
        else {
          fVar14 = 0.0;
          if (0.0 <= fVar13) goto LAB_0010bd38;
LAB_0010be96:
          fVar12 = 0.0;
          if (0.0 <= fVar11) goto LAB_0010bd50;
LAB_0010bea3:
          fVar13 = 0.0;
        }
        fVar11 = (float)basisu::linear_to_srgb(fVar14);
        fVar12 = (float)basisu::linear_to_srgb(fVar12);
        fVar13 = (float)basisu::linear_to_srgb(fVar13);
        if ((uVar10 < local_a8[0]) && (uVar9 < local_a8[1])) {
          puVar1 = (undefined1 *)((long)local_98 + (ulong)(local_a8[2] * uVar9 + uVar10) * 4);
          fVar11 = roundf(_LC16 * fVar11);
          iVar6 = (int)fVar11;
          fVar12 = _LC16 * fVar12;
          if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          uVar4 = (undefined1)iVar6;
          if (iVar6 < 0) {
            uVar4 = 0;
          }
          *puVar1 = uVar4;
          fVar12 = roundf(fVar12);
          iVar6 = (int)fVar12;
          fVar13 = _LC16 * fVar13;
          if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          uVar4 = (undefined1)iVar6;
          if (iVar6 < 0) {
            uVar4 = 0;
          }
          puVar1[1] = uVar4;
          fVar12 = roundf(fVar13);
          puVar1[3] = 0xff;
          iVar6 = (int)fVar12;
          if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          uVar4 = (undefined1)iVar6;
          if (iVar6 < 0) {
            uVar4 = 0;
          }
          puVar1[2] = uVar4;
        }
        uVar10 = uVar10 + 1;
      } while (param_3 != uVar10);
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  string_format_abi_cxx11_((char *)&local_68,"%s_linear_clamped_to_srgb.png",param_1);
  basisu::save_png((char *)local_68,(image *)local_a8,0,0);
  __printf_chk(2,"Wrote .PNG file %s\n",local_68);
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  string_format_abi_cxx11_((char *)&local_68,"%s_compressive_tonemapped.png",param_1);
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  cVar5 = basisu::tonemap_image_compressive((image *)&local_88,(imagef *)&local_c8);
  if (cVar5 == '\0') {
    basisu::error_printf
              (
              "basis_compressor::write_hdr_debug_images: tonemap_image_compressive() failed (invalid half-float input)\n"
              );
  }
  else {
    basisu::save_png((char *)local_68,(image *)&local_88,0,0);
    __printf_chk(2,"Wrote .PNG file %s\n",local_68);
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  local_88 = 0;
  iVar6 = -5;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  do {
    fVar12 = powf((float)_LC136,(float)iVar6);
    basisu::tonemap_image_reinhard((image *)&local_88,(imagef *)&local_c8,fVar12);
    string_format_abi_cxx11_
              ((char *)&local_68,(double)fVar12,"%s_reinhard_tonemapped_scale_%f.png",param_1);
    basisu::save_png((char *)local_68,(image *)&local_88,2,0);
    __printf_chk(2,"Wrote .PNG file %s\n",local_68);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 6);
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* basisu::basis_compressor::validate_ktx2_constraints() */

undefined4 __thiscall basisu::basis_compressor::validate_ktx2_constraints(basis_compressor *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  int *local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x328) == 0) {
LAB_0010c29c:
    uVar9 = 1;
  }
  else {
    lVar6 = *(long *)(this + 800);
    uVar8 = 0;
    iVar12 = 0;
    iVar11 = 0;
    piVar4 = (int *)(lVar6 + 4);
    piVar10 = piVar4 + (ulong)*(uint *)(this + 0x328) * 0xc;
    do {
      if (piVar4[9] == 0) {
        if (iVar11 == 0) {
          iVar11 = *piVar4;
          iVar12 = piVar4[1];
        }
        else if ((iVar11 != *piVar4) || (piVar4[1] != iVar12)) {
          uVar9 = 0;
          goto LAB_0010c277;
        }
        if (uVar8 < piVar4[8] + 1U) {
          uVar8 = piVar4[8] + 1U;
        }
      }
      piVar4 = piVar4 + 0xc;
    } while (piVar10 != piVar4);
    local_38 = (int *)0x0;
    local_30 = 0;
    if (uVar8 == 0) {
LAB_0010c21a:
      puVar7 = (uint *)(lVar6 + 0x24);
      uVar5 = 0;
      do {
        uVar1 = *puVar7;
        uVar2 = local_38[uVar1];
        uVar3 = puVar7[1] + 1;
        if (puVar7[1] + 1 < uVar2) {
          uVar3 = uVar2;
        }
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 0xc;
        local_38[uVar1] = uVar3;
      } while (uVar5 < *(uint *)(this + 0x328));
    }
    else {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar8,0),(uint)(uVar8 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      memset(local_38 + (local_30 & 0xffffffff),0,(ulong)(uVar8 - (int)local_30) << 2);
      local_30 = CONCAT44(local_30._4_4_,uVar8);
      if (*(int *)(this + 0x328) != 0) {
        lVar6 = *(long *)(this + 800);
        goto LAB_0010c21a;
      }
    }
    if (uVar8 < 2) {
      if (local_38 == (int *)0x0) goto LAB_0010c29c;
    }
    else {
      piVar4 = local_38 + 1;
      do {
        if (*local_38 != *piVar4) {
          uVar9 = 0;
          goto LAB_0010c26f;
        }
        piVar4 = piVar4 + 1;
      } while (local_38 + (ulong)(uVar8 - 2) + 2 != piVar4);
    }
    uVar9 = 1;
LAB_0010c26f:
    free(local_38);
  }
LAB_0010c277:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* basisu::basis_compressor::get_dfd(basisu::vector<unsigned char>&, basist::ktx2_header const&) */

void __thiscall
basisu::basis_compressor::get_dfd(basis_compressor *this,vector *param_1,ktx2_header *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (*this == (basis_compressor)0x0) {
    puVar7 = g_ktx2_etc1s_nonalpha_dfd;
    uVar3 = (-(uint)(this[0x828] == (basis_compressor)0x0) & 0xfffffff0) + 0x3c;
    uVar4 = (-(uint)(this[0x828] == (basis_compressor)0x0) & 0xfffffff0) + 0x3c;
    if (this[0x828] != (basis_compressor)0x0) {
      puVar7 = g_ktx2_etc1s_alpha_dfd;
    }
  }
  else {
    uVar3 = 0x2c;
    uVar4 = 0x2c;
    puVar7 = (undefined1 *)&g_ktx2_uastc_hdr_nonalpha_dfd;
    if ((this[2] == (basis_compressor)0x0) &&
       (puVar7 = g_ktx2_uastc_nonalpha_dfd, this[0x828] != (basis_compressor)0x0)) {
      puVar7 = g_ktx2_uastc_alpha_dfd;
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar4 != uVar1) {
    if (uVar4 < uVar1) {
      *(uint *)(param_1 + 8) = uVar4;
    }
    else {
      if (*(uint *)(param_1 + 0xc) < uVar4) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_1,SUB41(uVar4,0),(uint)(uVar1 + 1 == uVar4),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar1 = *(uint *)(param_1 + 8);
      }
      memset((void *)((ulong)uVar1 + *(long *)param_1),0,(ulong)(uVar4 - uVar1));
      *(uint *)(param_1 + 8) = uVar4;
    }
  }
  puVar9 = *(undefined8 **)param_1;
  *puVar9 = *(undefined8 *)puVar7;
  *(undefined8 *)((long)puVar9 + ((ulong)uVar3 - 8)) =
       *(undefined8 *)((long)puVar7 + ((ulong)uVar3 - 8));
  lVar5 = (long)puVar9 - (long)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)((long)puVar7 - lVar5);
  puVar9 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(uVar3 + (int)lVar5 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
  }
  uVar3 = *(uint *)(*(long *)param_1 + 0xc) & 0xff00ffff;
  if (this[2] == (basis_compressor)0x0) {
    uVar4 = uVar3 | 0x10000;
    if (this[0x25c] != (basis_compressor)0x0) {
      uVar4 = uVar3 | 0x20000;
    }
  }
  else {
    uVar4 = uVar3 | 0x10000;
  }
  *(uint *)(*(long *)param_1 + 0xc) = uVar4;
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar5 = *(long *)param_1;
    uVar2 = *(undefined4 *)(lVar5 + 0x14);
    *(undefined1 *)(lVar5 + 0x14) = 0;
    *(char *)(lVar5 + 0x15) = (char)((uint)uVar2 >> 8);
    *(char *)(lVar5 + 0x17) = (char)((uint)uVar2 >> 0x18);
    *(char *)(lVar5 + 0x16) = (char)((uint)uVar2 >> 0x10);
  }
  uVar3 = *(uint *)(*(long *)param_1 + 0x1c);
  if (*this != (basis_compressor)0x0) {
    uVar3 = uVar3 & 0xf0ffffff | -(uint)(byte)this[0x828] & 0x3000000;
  }
  *(uint *)(*(long *)param_1 + 0x1c) = uVar3;
  return;
}



/* basisu::basis_free_data(void*) */

void basisu::basis_free_data(void *param_1)

{
  free(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::encode_slices_to_uastc_hdr() */

undefined8 __thiscall basisu::basis_compressor::encode_slices_to_uastc_hdr(basis_compressor *this)

{
  function *pfVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  _Rb_tree_node_base *p_Var6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long in_FS_OFFSET;
  byte bVar17;
  undefined4 uVar18;
  char local_29d;
  undefined4 local_29c;
  interval_timer local_298 [32];
  undefined1 local_278 [8];
  undefined4 local_270 [2];
  _Rb_tree_node *local_268;
  _Rb_tree_node_base *local_260;
  _Rb_tree_node_base *local_258;
  ulong local_250;
  undefined1 local_248 [16];
  code *local_238;
  code *pcStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  pthread_mutex_t local_1f8;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [12];
  undefined4 uStack_194;
  undefined1 auStack_190 [12];
  undefined1 local_184 [16];
  undefined1 local_174 [12];
  undefined4 uStack_168;
  undefined1 auStack_164 [12];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [12];
  undefined4 uStack_124;
  undefined1 auStack_120 [12];
  undefined1 local_114 [16];
  undefined1 local_104 [12];
  undefined4 uStack_f8;
  undefined1 auStack_f4 [12];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_c4 [120];
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::encode_slices_to_uastc_hdr\n");
  basisu::interval_timer::interval_timer(local_298);
  basisu::interval_timer::start();
  vector<basisu::gpu_image>::resize
            ((vector<basisu::gpu_image> *)(this + 0x7a8),(ulong)*(uint *)(this + 0x328),false);
  iVar3 = (int)this;
  if (*(int *)(this + 0x328) == 0) {
    *(undefined4 *)(this + 0x7b8) = 2;
    this[0x7bc] = (basis_compressor)0x0;
  }
  else {
    lVar8 = 0;
    do {
      lVar13 = lVar8 + 1;
      lVar4 = *(long *)(this + 800) + lVar8 * 0x30;
      gpu_image::init((gpu_image *)(lVar8 * 0x30 + *(long *)(this + 0x7a8)),0x17,
                      *(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8));
      uVar11 = *(uint *)(this + 0x328);
      lVar8 = lVar13;
    } while ((uint)lVar13 < uVar11);
    *(undefined4 *)(this + 0x7b8) = 2;
    this[0x7bc] = (basis_compressor)0x0;
    if (*(uint *)(this + 0x7f4) < uVar11) {
      if (*(void **)(this + 0x7e8) != (void *)0x0) {
        free(*(void **)(this + 0x7e8));
        uVar11 = *(uint *)(this + 0x328);
        *(undefined8 *)(this + 0x7e8) = 0;
        *(undefined8 *)(this + 0x7f0) = 0;
      }
      basisu::elemental_vector::increase_capacity
                (iVar3 + 0x7e8,SUB41(uVar11,0),0,(_func_void_void_ptr_void_ptr_uint *)0x30,false);
      goto LAB_0010c633;
    }
  }
  if (*(int *)(this + 0x7f0) != 0) {
    *(undefined4 *)(this + 0x7f0) = 0;
  }
LAB_0010c633:
  if ((*(void **)(this + 0x7e8) != (void *)0x0) && (*(void **)(this + 800) != (void *)0x0)) {
    memcpy(*(void **)(this + 0x7e8),*(void **)(this + 800),(ulong)*(uint *)(this + 0x328) * 0x30);
  }
  uVar11 = *(uint *)(this + 0x328);
  uVar7 = *(uint *)(this + 0x810);
  *(uint *)(this + 0x7f0) = uVar11;
  uVar12 = uVar11;
  if (uVar7 != uVar11) {
    if (uVar11 < uVar7) {
      puVar5 = (undefined8 *)((ulong)uVar11 * 0x10 + *(long *)(this + 0x808));
      puVar9 = puVar5 + (ulong)(uVar7 - uVar11) * 2;
      do {
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        puVar5 = puVar5 + 2;
      } while (puVar9 != puVar5);
      uVar12 = *(uint *)(this + 0x328);
    }
    else {
      if (*(uint *)(this + 0x814) < uVar11) {
        basisu::elemental_vector::increase_capacity
                  (iVar3 + 0x808,SUB41(uVar11,0),(uint)(uVar7 + 1 == uVar11),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar7 = *(uint *)(this + 0x810);
        uVar12 = *(uint *)(this + 0x328);
      }
      puVar5 = (undefined8 *)((ulong)uVar7 * 0x10 + *(long *)(this + 0x808));
      puVar9 = puVar5 + (ulong)(uVar11 - uVar7) * 2;
      for (; puVar5 != puVar9; puVar5 = puVar5 + 2) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
    }
    *(uint *)(this + 0x810) = uVar11;
  }
  uVar11 = *(uint *)(this + 0x820);
  if (uVar11 != uVar12) {
    if (uVar11 <= uVar12) {
      if (*(uint *)(this + 0x824) < uVar12) {
        basisu::elemental_vector::increase_capacity
                  (iVar3 + 0x818,SUB41(uVar12,0),(uint)(uVar11 + 1 == uVar12),
                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar11 = *(uint *)(this + 0x820);
      }
      memset((void *)(*(long *)(this + 0x818) + (ulong)uVar11 * 2),0,(ulong)(uVar12 - uVar11) * 2);
    }
    *(uint *)(this + 0x820) = uVar12;
  }
  if (this[0xa8] == (basis_compressor)0x0) {
    *(undefined8 *)(this + 0x2a8) = __LC8;
  }
  uVar18 = _LC139;
  if (this[0x2c8] != (basis_compressor)0x0) {
    uVar18 = _LC138;
  }
  *(undefined4 *)(this + 0x260) = uVar18;
  LOCK();
  local_29d = '\0';
  UNLOCK();
  local_1f8._0_16_ = (undefined1  [16])0x0;
  local_1f8._16_16_ = (undefined1  [16])0x0;
  local_1f8.__data.__list.__next = (__pthread_internal_list *)0x0;
  iVar3 = pthread_mutex_lock(&local_1f8);
  if (iVar3 == 0) {
    lVar4 = 0;
    local_130 = SUB1612((undefined1  [16])0x0,0);
    local_104 = SUB1612((undefined1  [16])0x0,0);
    local_1a0 = SUB1612((undefined1  [16])0x0,0);
    local_174 = SUB1612((undefined1  [16])0x0,0);
    local_140 = (undefined1  [16])0x0;
    uStack_124 = 0;
    auStack_120 = SUB1612((undefined1  [16])0x0,4);
    local_114 = (undefined1  [16])0x0;
    uStack_f8 = 0;
    auStack_f4 = SUB1612((undefined1  [16])0x0,4);
    local_1b0 = (undefined1  [16])0x0;
    uStack_194 = 0;
    auStack_190 = SUB1612((undefined1  [16])0x0,4);
    local_184 = (undefined1  [16])0x0;
    uStack_168 = 0;
    auStack_164 = SUB1612((undefined1  [16])0x0,4);
    local_158 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_44 = 0;
    local_148 = 0;
    local_c8 = 0;
    local_c4._0_8_ = 0;
    local_4c = 0;
    local_1d0 = (undefined1  [16])0x0;
    local_1c0 = (undefined1  [16])0x0;
    puVar5 = (undefined8 *)(local_c4 + 4);
    for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar17 * -2 + 1;
    }
    pthread_mutex_unlock(&local_1f8);
    local_270[0] = 0;
    local_268 = (_Rb_tree_node *)0x0;
    local_250 = 0;
    local_208 = 0;
    local_228 = (undefined1  [16])0x0;
    local_218 = (undefined1  [16])0x0;
    local_260 = (_Rb_tree_node_base *)local_270;
    local_258 = (_Rb_tree_node_base *)local_270;
    if (*(int *)(this + 0x328) != 0) {
      do {
        lVar13 = lVar4 * 0x30 + *(long *)(this + 0x7a8);
        lVar8 = *(long *)(this + 0x2f0);
        uVar10 = *(undefined8 *)(lVar13 + 0xc);
        uVar11 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 0x10);
        LOCK();
        local_29c = 0;
        UNLOCK();
        if (uVar11 != 0) {
          uVar7 = 0;
          do {
            uVar16 = uVar7 + 0x100;
            pfVar1 = *(function **)(this + 0x2d0);
            local_238 = (code *)0x0;
            uVar12 = uVar11;
            if (uVar16 <= uVar11) {
              uVar12 = uVar16;
            }
            local_248 = (undefined1  [16])0x0;
            pcStack_230 = (code *)0x0;
            puVar5 = (undefined8 *)operator_new(0x58);
            *puVar5 = this;
            puVar5[4] = lVar4 * 0x20 + lVar8;
            *(uint *)(puVar5 + 3) = uVar11;
            puVar5[5] = lVar13;
            puVar5[10] = local_228;
            puVar5[1] = CONCAT44(uVar12,uVar7);
            puVar5[2] = uVar10;
            puVar5[6] = &local_29c;
            puVar5[7] = &local_29d;
            puVar5[8] = &local_1f8;
            puVar5[9] = local_278;
            local_248._0_8_ = puVar5;
            local_238 = std::
                        _Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>
                        ::_M_manager;
            pcStack_230 = std::
                          _Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc_hdr()::{lambda()#1}>
                          ::_M_invoke;
            basisu::job_pool::add_job(pfVar1);
            if (local_238 != (code *)0x0) {
              (*local_238)(local_248,local_248,3);
            }
            uVar7 = uVar16;
          } while (uVar16 < uVar11);
        }
        basisu::job_pool::wait_for_all();
        if (local_29d != '\0') {
          uVar10 = 4;
          goto LAB_0010cb67;
        }
        plVar14 = (long *)(*(long *)(this + 0x808) + lVar4 * 0x10);
        uVar11 = *(uint *)(plVar14 + 1);
        uVar12 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 0x10) * *(int *)(lVar13 + 0x1c) * 8;
        plVar15 = plVar14;
        uVar7 = uVar11;
        if (uVar12 != uVar11) {
          uVar7 = uVar12;
          if (uVar11 <= uVar12) {
            if (*(uint *)((long)plVar14 + 0xc) < uVar12) {
              basisu::elemental_vector::increase_capacity
                        ((uint)plVar14,SUB41(uVar12,0),(uint)(uVar11 + 1 == uVar12),
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
              uVar11 = *(uint *)(plVar14 + 1);
            }
            memset((void *)((ulong)uVar11 + *plVar14),0,(ulong)(uVar12 - uVar11));
            plVar15 = (long *)(lVar4 * 0x10 + *(long *)(this + 0x808));
            uVar7 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 0x10) * *(int *)(lVar13 + 0x1c) * 8;
          }
          *(uint *)(plVar14 + 1) = uVar12;
        }
        memcpy((void *)*plVar15,*(void **)(lVar13 + 0x20),(ulong)uVar7);
        uVar2 = basist::crc16(*(void **)(lVar13 + 0x20),
                              (ulong)(uint)(*(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 0x10) *
                                            *(int *)(lVar13 + 0x1c) * 8),0);
        *(undefined2 *)(*(long *)(this + 0x818) + lVar4 * 2) = uVar2;
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x328));
    }
    basisu::interval_timer::get_elapsed_secs();
    basisu::debug_printf("basis_compressor::encode_slices_to_uastc_hdr: Total time: %3.3f secs\n");
    if (this[0x8c] != (basis_compressor)0x0) {
      uVar11 = 0;
      basisu::debug_printf("\n----- Total unique UASTC block descs: %u\n",local_250 & 0xffffffff);
      for (p_Var6 = local_260; p_Var6 != (_Rb_tree_node_base *)local_270;
          p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6)) {
        basisu::debug_printf
                  ("%u. Total uses: %u %3.2f%%, solid color: %u\n",
                   (double)(((float)*(uint *)(p_Var6 + 0x34) * __LC21) /
                           (float)(uint)local_1d0._0_4_),(ulong)uVar11,
                   (ulong)*(uint *)(p_Var6 + 0x34),(ulong)*(uint *)(p_Var6 + 0x20));
        if (*(int *)(p_Var6 + 0x20) == 0) {
          basisu::debug_printf("  Num partitions: %u\n",(ulong)*(uint *)(p_Var6 + 0x24));
          basisu::debug_printf("  CEM index: %u\n",(ulong)*(uint *)(p_Var6 + 0x28));
          lVar8 = (ulong)*(uint *)(p_Var6 + 0x2c) * 3;
          basisu::debug_printf
                    ("  Weight ISE range: %u (%u levels)\n",(ulong)*(uint *)(p_Var6 + 0x2c),
                     (ulong)(uint)(*(char *)((long)&astc_helpers::g_ise_range_table + lVar8 + 2) * 4
                                   + 1 + *(char *)((long)&astc_helpers::g_ise_range_table +
                                                  lVar8 + 1) * 2 <<
                                  (*(byte *)((long)&astc_helpers::g_ise_range_table + lVar8) & 0x1f)
                                  ));
          lVar8 = (ulong)*(uint *)(p_Var6 + 0x30) * 3;
          basisu::debug_printf
                    ("  Endpoint ISE range: %u (%u levels)\n",(ulong)*(uint *)(p_Var6 + 0x30),
                     (ulong)(uint)(*(char *)((long)&astc_helpers::g_ise_range_table + lVar8 + 2) * 4
                                   + 1 + *(char *)((long)&astc_helpers::g_ise_range_table +
                                                  lVar8 + 1) * 2 <<
                                  (*(byte *)((long)&astc_helpers::g_ise_range_table + lVar8) & 0x1f)
                                  ));
        }
        uVar11 = uVar11 + 1;
      }
      putchar(10);
      basisu::astc_hdr_block_stats::print();
    }
    uVar10 = 0;
LAB_0010cb67:
    std::
    _Rb_tree<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc,std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>,std::_Select1st<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>,std::less<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc>,std::allocator<std::pair<basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_const,basisu::basis_compressor::encode_slices_to_uastc_hdr()::uastc_blk_desc_stats>>>
    ::_M_erase(local_268);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar10;
    }
  }
  else {
    std::__throw_system_error(iVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basis_compressor::encode_slices_to_uastc() */

undefined8 __thiscall basisu::basis_compressor::encode_slices_to_uastc(basis_compressor *this)

{
  function *pfVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  job_pool *pjVar15;
  long lVar16;
  uint uVar17;
  long in_FS_OFFSET;
  long local_b0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::encode_slices_to_uastc\n");
  vector<basisu::gpu_image>::resize
            ((vector<basisu::gpu_image> *)(this + 0x7a8),(ulong)*(uint *)(this + 0x328),false);
  iVar2 = (int)this;
  if (*(int *)(this + 0x328) == 0) {
    *(undefined4 *)(this + 0x7b8) = 1;
    this[0x7bc] = (basis_compressor)0x0;
  }
  else {
    lVar11 = 0;
    do {
      lVar12 = lVar11 + 1;
      gpu_image::init((gpu_image *)(lVar11 * 0x30 + *(long *)(this + 0x7a8)),0x16,
                      *(undefined4 *)(*(long *)(this + 800) + lVar11 * 0x30 + 4));
      uVar17 = *(uint *)(this + 0x328);
      lVar11 = lVar12;
    } while ((uint)lVar12 < uVar17);
    *(undefined4 *)(this + 0x7b8) = 1;
    this[0x7bc] = (basis_compressor)0x0;
    if (*(uint *)(this + 0x7f4) < uVar17) {
      if (*(void **)(this + 0x7e8) != (void *)0x0) {
        free(*(void **)(this + 0x7e8));
        uVar17 = *(uint *)(this + 0x328);
        *(undefined8 *)(this + 0x7e8) = 0;
        *(undefined8 *)(this + 0x7f0) = 0;
      }
      basisu::elemental_vector::increase_capacity
                (iVar2 + 0x7e8,SUB41(uVar17,0),0,(_func_void_void_ptr_void_ptr_uint *)0x30,false);
      goto LAB_0010ceef;
    }
  }
  if (*(int *)(this + 0x7f0) != 0) {
    *(undefined4 *)(this + 0x7f0) = 0;
  }
LAB_0010ceef:
  if ((*(void **)(this + 0x7e8) != (void *)0x0) && (*(void **)(this + 800) != (void *)0x0)) {
    memcpy(*(void **)(this + 0x7e8),*(void **)(this + 800),(ulong)*(uint *)(this + 0x328) * 0x30);
  }
  uVar17 = *(uint *)(this + 0x328);
  uVar9 = *(uint *)(this + 0x810);
  *(uint *)(this + 0x7f0) = uVar17;
  uVar10 = uVar17;
  if (uVar9 != uVar17) {
    if (uVar17 < uVar9) {
      puVar5 = (undefined8 *)((ulong)uVar17 * 0x10 + *(long *)(this + 0x808));
      puVar8 = puVar5 + (ulong)(uVar9 - uVar17) * 2;
      do {
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        puVar5 = puVar5 + 2;
      } while (puVar8 != puVar5);
      uVar10 = *(uint *)(this + 0x328);
    }
    else {
      if (*(uint *)(this + 0x814) < uVar17) {
        basisu::elemental_vector::increase_capacity
                  (iVar2 + 0x808,SUB41(uVar17,0),(uint)(uVar9 + 1 == uVar17),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar9 = *(uint *)(this + 0x810);
        uVar10 = *(uint *)(this + 0x328);
      }
      puVar5 = (undefined8 *)((ulong)uVar9 * 0x10 + *(long *)(this + 0x808));
      puVar8 = puVar5 + (ulong)(uVar17 - uVar9) * 2;
      for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
    }
    *(uint *)(this + 0x810) = uVar17;
  }
  uVar17 = *(uint *)(this + 0x820);
  uVar9 = uVar10;
  if (uVar17 != uVar10) {
    if (uVar17 <= uVar10) {
      if (*(uint *)(this + 0x824) < uVar10) {
        basisu::elemental_vector::increase_capacity
                  (iVar2 + 0x818,SUB41(uVar10,0),(uint)(uVar17 + 1 == uVar10),
                   (_func_void_void_ptr_void_ptr_uint *)0x2,false);
        uVar17 = *(uint *)(this + 0x820);
      }
      memset((void *)(*(long *)(this + 0x818) + (ulong)uVar17 * 2),0,(ulong)(uVar10 - uVar17) * 2);
      uVar9 = *(uint *)(this + 0x328);
    }
    *(uint *)(this + 0x820) = uVar10;
  }
  local_b0 = 0;
  if (uVar9 != 0) {
    do {
      lVar11 = *(long *)(this + 0x2e0);
      lVar16 = *(long *)(this + 0x7a8) + local_b0 * 0x30;
      lVar12 = *(long *)(this + 800);
      uVar7 = *(undefined8 *)(lVar16 + 0xc);
      uVar17 = *(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 0x10);
      LOCK();
      local_8c = 0;
      UNLOCK();
      if (uVar17 != 0) {
        uVar9 = 0;
        do {
          uVar13 = uVar9 + 0x100;
          pfVar1 = *(function **)(this + 0x2d0);
          local_68 = (undefined1  [16])0x0;
          local_58 = (code *)0x0;
          pcStack_50 = (code *)0x0;
          uVar10 = uVar17;
          if (uVar13 <= uVar17) {
            uVar10 = uVar13;
          }
          puVar5 = (undefined8 *)operator_new(0x38);
          *puVar5 = this;
          puVar5[4] = lVar11 + local_b0 * 0x20;
          *(uint *)(puVar5 + 3) = uVar17;
          puVar5[5] = lVar16;
          puVar5[6] = &local_8c;
          puVar5[1] = CONCAT44(uVar10,uVar9);
          puVar5[2] = uVar7;
          local_68._0_8_ = puVar5;
          local_58 = std::
                     _Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>
                     ::_M_manager;
          pcStack_50 = std::
                       _Function_handler<void(),basisu::basis_compressor::encode_slices_to_uastc()::{lambda()#1}>
                       ::_M_invoke;
          basisu::job_pool::add_job(pfVar1);
          if (local_58 != (code *)0x0) {
            (*local_58)(local_68,local_68,3);
          }
          uVar9 = uVar13;
        } while (uVar13 < uVar17);
      }
      basisu::job_pool::wait_for_all();
      if (this[0x168] != (basis_compressor)0x0) {
        local_88 = *(undefined4 *)(this + 0x180);
        local_78 = 1;
        local_6c = 100;
        local_84 = CONCAT44(*(undefined4 *)(this + 0x1bc),*(undefined4 *)(this + 0x16c));
        local_7c = *(undefined4 *)(this + 0x1d0);
        local_74 = CONCAT44(*(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x1a8));
        if (this[0x1e6] == (basis_compressor)0x0) {
          uVar17 = 0;
          pjVar15 = (job_pool *)0x0;
        }
        else {
          pjVar15 = *(job_pool **)(this + 0x2d0);
          uVar17 = 0;
          if ((pjVar15 != (job_pool *)0x0) &&
             (uVar17 = (int)(*(long *)(pjVar15 + 8) - *(long *)pjVar15 >> 3) + 1, 4 < uVar17)) {
            uVar17 = 4;
          }
        }
        cVar3 = basisu::uastc_rdo(*(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 0x10),
                                  *(uastc_block **)(lVar16 + 0x20),
                                  (color_rgba *)
                                  ((ulong)*(uint *)(lVar12 + local_b0 * 0x30) * 0x40 +
                                  *(long *)(this + 0x4f8)),(uastc_rdo_params *)&local_88,
                                  *(uint *)(this + 0x164),pjVar15,uVar17);
        if (cVar3 == '\0') {
          uVar7 = 10;
          goto LAB_0010d33c;
        }
      }
      plVar14 = (long *)(*(long *)(this + 0x808) + local_b0 * 0x10);
      uVar17 = *(uint *)(plVar14 + 1);
      uVar10 = *(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 0x10) * *(int *)(lVar16 + 0x1c) * 8;
      plVar6 = plVar14;
      uVar9 = uVar17;
      if (uVar10 != uVar17) {
        uVar9 = uVar10;
        if (uVar17 <= uVar10) {
          if (*(uint *)((long)plVar14 + 0xc) < uVar10) {
            basisu::elemental_vector::increase_capacity
                      ((uint)plVar14,SUB41(uVar10,0),(uint)(uVar17 + 1 == uVar10),
                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            uVar17 = *(uint *)(plVar14 + 1);
          }
          memset((void *)((ulong)uVar17 + *plVar14),0,(ulong)(uVar10 - uVar17));
          plVar6 = (long *)(*(long *)(this + 0x808) + local_b0 * 0x10);
          uVar9 = *(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 0x10) * *(int *)(lVar16 + 0x1c) * 8;
        }
        *(uint *)(plVar14 + 1) = uVar10;
      }
      memcpy((void *)*plVar6,*(void **)(lVar16 + 0x20),(ulong)uVar9);
      uVar4 = basist::crc16(*(void **)(lVar16 + 0x20),
                            (ulong)(uint)(*(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 0x10) *
                                          *(int *)(lVar16 + 0x1c) * 8),0);
      *(undefined2 *)(*(long *)(this + 0x818) + local_b0 * 2) = uVar4;
      local_b0 = local_b0 + 1;
    } while ((uint)local_b0 < *(uint *)(this + 0x328));
  }
  uVar7 = 0;
LAB_0010d33c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basis_compressor::read_dds_source_images() */

undefined8 __thiscall basisu::basis_compressor::read_dds_source_images(basis_compressor *this)

{
  basis_compressor bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  basis_compressor bVar14;
  imagef *piVar15;
  image *piVar16;
  image *piVar17;
  imagef *piVar18;
  void *pvVar19;
  basis_compressor bVar20;
  basis_compressor bVar21;
  void *pvVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  imagef *piVar27;
  image *piVar28;
  long in_FS_OFFSET;
  image *local_88;
  undefined8 local_80;
  imagef *local_78;
  undefined8 local_70;
  long *local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::read_dds_source_images\n");
  bVar1 = this[0xd8];
  if (((((bVar1 != (basis_compressor)0x0) && (*(int *)(this + 0x10) != 0)) &&
       (*(int *)(this + 0x30) == 0)) &&
      ((*(int *)(this + 0x40) == 0 && (*(int *)(this + 0x50) == 0)))) &&
     (*(int *)(this + 0x60) == 0)) {
    lVar25 = 0;
    bVar14 = bVar1;
    bVar20 = (basis_compressor)0x0;
    do {
      string_get_extension((basisu *)local_68,(string *)(lVar25 * 0x20 + *(long *)(this + 8)));
      plVar23 = local_68[0];
      iVar6 = strcasecmp((char *)local_68[0],"dds");
      bVar21 = bVar1;
      if (iVar6 != 0) {
        bVar14 = (basis_compressor)0x0;
        bVar21 = bVar20;
      }
      if (plVar23 != local_58) {
        operator_delete(plVar23,local_58[0] + 1);
      }
      lVar25 = lVar25 + 1;
      bVar20 = bVar21;
    } while ((uint)lVar25 < *(uint *)(this + 0x10));
    if (bVar21 != (basis_compressor)0x0) {
      if (bVar14 == (basis_compressor)0x0) {
        basisu::error_printf("If any filename is DDS, all filenames must be DDS.\n");
        uVar8 = 0;
        goto LAB_0010d7d5;
      }
      if (*(int *)(this + 0x20) != 0) {
        basisu::error_printf("Source alpha filenames are not supported in DDS mode.\n");
        uVar8 = 0;
        goto LAB_0010d7d5;
      }
      if (*(uint *)(this + 0x10) == 0) {
        *(undefined2 *)(this + 0xd8) = 0x100;
        vector<std::__cxx11::string>::clear((vector<std::__cxx11::string> *)(this + 8));
        vector<std::__cxx11::string>::clear((vector<std::__cxx11::string> *)(this + 0x18));
LAB_0010db6a:
        plVar23 = *(long **)(this + 0x48);
        if (plVar23 != (long *)0x0) {
          plVar10 = plVar23 + (ulong)*(uint *)(this + 0x50) * 2;
          if (plVar23 != plVar10) {
            do {
              pvVar19 = (void *)*plVar23;
              if (pvVar19 != (void *)0x0) {
                pvVar22 = (void *)((ulong)*(uint *)(plVar23 + 1) * 0x20 + (long)pvVar19);
                if (pvVar19 != pvVar22) {
                  do {
                    if (*(void **)((long)pvVar19 + 0x10) != (void *)0x0) {
                      free(*(void **)((long)pvVar19 + 0x10));
                    }
                    pvVar19 = (void *)((long)pvVar19 + 0x20);
                  } while (pvVar22 != pvVar19);
                  pvVar19 = (void *)*plVar23;
                }
                free(pvVar19);
              }
              plVar23 = plVar23 + 2;
            } while (plVar10 != plVar23);
            plVar23 = *(long **)(this + 0x48);
          }
          free(plVar23);
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x50) = 0;
        }
        plVar23 = *(long **)(this + 0x58);
        if (plVar23 != (long *)0x0) {
          plVar10 = plVar23 + (ulong)*(uint *)(this + 0x60) * 2;
          if (plVar23 != plVar10) {
            do {
              pvVar19 = (void *)*plVar23;
              if (pvVar19 != (void *)0x0) {
                pvVar22 = (void *)((ulong)*(uint *)(plVar23 + 1) * 0x20 + (long)pvVar19);
                if (pvVar19 != pvVar22) {
                  do {
                    if (*(void **)((long)pvVar19 + 0x10) != (void *)0x0) {
                      free(*(void **)((long)pvVar19 + 0x10));
                    }
                    pvVar19 = (void *)((long)pvVar19 + 0x20);
                  } while (pvVar22 != pvVar19);
                  pvVar19 = (void *)*plVar23;
                }
                free(pvVar19);
              }
              plVar23 = plVar23 + 2;
            } while (plVar10 != plVar23);
            plVar23 = *(long **)(this + 0x58);
          }
          free(plVar23);
          *(undefined8 *)(this + 0x58) = 0;
          *(undefined8 *)(this + 0x60) = 0;
        }
      }
      else {
        cVar4 = '\0';
        lVar25 = 0;
        do {
          local_88 = (image *)0x0;
          local_80 = 0;
          local_78 = (imagef *)0x0;
          local_70 = 0;
          cVar5 = basisu::read_uncompressed_dds_file
                            (*(char **)(*(long *)(this + 8) + lVar25 * 0x20),(vector *)&local_88,
                             (vector *)&local_78);
          if (cVar5 == '\0') {
LAB_0010db20:
            vector<basisu::imagef>::~vector((vector<basisu::imagef> *)&local_78);
            vector<basisu::image>::~vector((vector<basisu::image> *)&local_88);
            uVar8 = 0;
            goto LAB_0010d7d5;
          }
          if (this[0x8a] != (basis_compressor)0x0) {
            if ((uint)local_80 == 0) {
              puVar11 = &_LC150;
              uVar2 = *(undefined4 *)(local_78 + 4);
              uVar3 = *(undefined4 *)local_78;
              iVar6 = (uint)local_70;
            }
            else {
              puVar11 = &_LC149;
              uVar2 = *(undefined4 *)(local_88 + 4);
              uVar3 = *(undefined4 *)local_88;
              iVar6 = (uint)local_80;
            }
            __printf_chk(2,"Read DDS file \"%s\", %s, %ux%u, %u mipmap levels\n",
                         *(undefined8 *)(*(long *)(this + 8) + lVar25 * 0x20),puVar11,uVar3,uVar2,
                         iVar6);
          }
          if ((uint)local_80 == 0) {
            if (*(int *)(this + 0x30) != 0) goto LAB_0010db12;
            vector<basisu::imagef>::push_back((vector<basisu::imagef> *)(this + 0x38),local_78);
            uVar24 = *(uint *)(this + 0x60);
            uVar26 = uVar24 + 1;
            if (uVar24 < 0xffffffff) {
              lVar12 = 0x10;
              if (*(uint *)(this + 100) < uVar26) {
                basisu::elemental_vector::increase_capacity
                          ((int)this + 0x58,SUB41(uVar26,0),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                uVar24 = *(uint *)(this + 0x60);
                lVar12 = (ulong)(uVar26 - uVar24) << 4;
              }
              puVar7 = (undefined8 *)((ulong)uVar24 * 0x10 + *(long *)(this + 0x58));
              puVar13 = (undefined8 *)(lVar12 + (long)puVar7);
              for (; puVar7 != puVar13; puVar7 = puVar7 + 2) {
                *puVar7 = 0;
                puVar7[1] = 0;
              }
            }
            else {
              plVar23 = *(long **)(this + 0x58);
              plVar10 = plVar23 + 0x1fffffffe;
              do {
                pvVar19 = (void *)*plVar23;
                if (pvVar19 != (void *)0x0) {
                  pvVar22 = (void *)((long)pvVar19 + (ulong)*(uint *)(plVar23 + 1) * 0x20);
                  if (pvVar19 != pvVar22) {
                    do {
                      if (*(void **)((long)pvVar19 + 0x10) != (void *)0x0) {
                        free(*(void **)((long)pvVar19 + 0x10));
                      }
                      pvVar19 = (void *)((long)pvVar19 + 0x20);
                    } while (pvVar22 != pvVar19);
                    pvVar22 = (void *)*plVar23;
                  }
                  free(pvVar22);
                }
                plVar23 = plVar23 + 2;
              } while (plVar23 != plVar10);
            }
            *(uint *)(this + 0x60) = uVar26;
            if (1 < (uint)local_70) {
              piVar15 = local_78 + (ulong)((uint)local_70 - 1) * 0x20;
              piVar27 = local_78;
              do {
                piVar18 = piVar27 + 0x20;
                uVar24 = *(uint *)(piVar27 + 0x38);
                pvVar19 = *(void **)(piVar27 + 0x10);
                *(undefined8 *)piVar27 = *(undefined8 *)(piVar27 + 0x20);
                *(undefined4 *)(piVar27 + 8) = *(undefined4 *)(piVar27 + 0x28);
                if (*(uint *)(piVar27 + 0x1c) < uVar24) {
                  if (pvVar19 != (void *)0x0) {
                    free(pvVar19);
                    *(undefined8 *)(piVar27 + 0x10) = 0;
                    uVar24 = *(uint *)(piVar27 + 0x38);
                    *(undefined8 *)(piVar27 + 0x18) = 0;
                  }
                  basisu::elemental_vector::increase_capacity
                            ((int)piVar27 + 0x10,SUB41(uVar24,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)0x10,true);
                  uVar24 = *(uint *)(piVar27 + 0x38);
                  pvVar19 = *(void **)(piVar27 + 0x10);
                }
                else if (*(int *)(piVar27 + 0x18) != 0) {
                  *(undefined4 *)(piVar27 + 0x18) = 0;
                }
                lVar12 = *(long *)(piVar27 + 0x30);
                lVar9 = 0;
                if (uVar24 != 0) {
                  do {
                    uVar8 = ((undefined8 *)(lVar12 + lVar9))[1];
                    *(undefined8 *)((long)pvVar19 + lVar9) = *(undefined8 *)(lVar12 + lVar9);
                    ((undefined8 *)((long)pvVar19 + lVar9))[1] = uVar8;
                    lVar9 = lVar9 + 0x10;
                  } while (lVar9 != (ulong)uVar24 << 4);
                }
                *(uint *)(piVar27 + 0x18) = uVar24;
                piVar27 = piVar18;
              } while (piVar15 != piVar18);
              pvVar19 = *(void **)(piVar15 + 0x10);
              if (pvVar19 != (void *)0x0) {
                free(pvVar19);
              }
              puVar7 = (undefined8 *)
                       ((ulong)(*(int *)(this + 0x60) - 1) * 0x10 + *(long *)(this + 0x58));
              piVar15 = (imagef *)*puVar7;
              *puVar7 = local_78;
              uVar2 = *(undefined4 *)(puVar7 + 1);
              *(uint *)(puVar7 + 1) = (uint)local_70 + -1;
              uVar3 = *(undefined4 *)((long)puVar7 + 0xc);
              *(int *)((long)puVar7 + 0xc) = (int)(local_70 >> 0x20);
              local_70 = CONCAT44(uVar3,uVar2);
              local_78 = piVar15;
              cVar4 = cVar5;
            }
            *(undefined4 *)this = _LC157;
          }
          else {
            if (*(int *)(this + 0x40) != 0) {
LAB_0010db12:
              basisu::error_printf("All DDS files must be of the same type (all LDR, or all HDR)\n")
              ;
              goto LAB_0010db20;
            }
            vector<basisu::image>::push_back((vector<basisu::image> *)(this + 0x28),local_88);
            uVar24 = *(uint *)(this + 0x50);
            uVar26 = uVar24 + 1;
            if (uVar24 < 0xffffffff) {
              lVar12 = 0x10;
              if (*(uint *)(this + 0x54) < uVar26) {
                basisu::elemental_vector::increase_capacity
                          ((int)this + 0x48,SUB41(uVar26,0),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                uVar24 = *(uint *)(this + 0x50);
                lVar12 = (ulong)(uVar26 - uVar24) << 4;
              }
              puVar7 = (undefined8 *)((ulong)uVar24 * 0x10 + *(long *)(this + 0x48));
              puVar13 = (undefined8 *)(lVar12 + (long)puVar7);
              for (; puVar7 != puVar13; puVar7 = puVar7 + 2) {
                *puVar7 = 0;
                puVar7[1] = 0;
              }
            }
            else {
              plVar23 = *(long **)(this + 0x48);
              plVar10 = plVar23 + 0x1fffffffe;
              do {
                pvVar19 = (void *)*plVar23;
                if (pvVar19 != (void *)0x0) {
                  pvVar22 = (void *)((long)pvVar19 + (ulong)*(uint *)(plVar23 + 1) * 0x20);
                  if (pvVar19 != pvVar22) {
                    do {
                      if (*(void **)((long)pvVar19 + 0x10) != (void *)0x0) {
                        free(*(void **)((long)pvVar19 + 0x10));
                      }
                      pvVar19 = (void *)((long)pvVar19 + 0x20);
                    } while (pvVar22 != pvVar19);
                    pvVar22 = (void *)*plVar23;
                  }
                  free(pvVar22);
                }
                plVar23 = plVar23 + 2;
              } while (plVar23 != plVar10);
            }
            *(uint *)(this + 0x50) = uVar26;
            if (1 < (uint)local_80) {
              piVar16 = local_88 + (ulong)((uint)local_80 - 1) * 0x20;
              piVar17 = local_88;
              do {
                piVar28 = piVar17 + 0x20;
                uVar24 = *(uint *)(piVar17 + 0x38);
                pvVar19 = *(void **)(piVar17 + 0x10);
                *(undefined8 *)piVar17 = *(undefined8 *)(piVar17 + 0x20);
                *(undefined4 *)(piVar17 + 8) = *(undefined4 *)(piVar17 + 0x28);
                if (*(uint *)(piVar17 + 0x1c) < uVar24) {
                  if (pvVar19 != (void *)0x0) {
                    free(pvVar19);
                    *(undefined8 *)(piVar17 + 0x10) = 0;
                    uVar24 = *(uint *)(piVar17 + 0x38);
                    *(undefined8 *)(piVar17 + 0x18) = 0;
                  }
                  basisu::elemental_vector::increase_capacity
                            ((int)piVar17 + 0x10,SUB41(uVar24,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                  uVar24 = *(uint *)(piVar17 + 0x38);
                  pvVar19 = *(void **)(piVar17 + 0x10);
                }
                else if (*(int *)(piVar17 + 0x18) != 0) {
                  *(undefined4 *)(piVar17 + 0x18) = 0;
                }
                if ((pvVar19 != (void *)0x0) && (*(void **)(piVar17 + 0x30) != (void *)0x0)) {
                  memcpy(pvVar19,*(void **)(piVar17 + 0x30),(ulong)uVar24 << 2);
                  uVar24 = *(uint *)(piVar17 + 0x38);
                }
                *(uint *)(piVar17 + 0x18) = uVar24;
                piVar17 = piVar28;
              } while (piVar16 != piVar28);
              pvVar19 = *(void **)(piVar16 + 0x10);
              if (pvVar19 != (void *)0x0) {
                free(pvVar19);
              }
              puVar7 = (undefined8 *)
                       ((ulong)(*(int *)(this + 0x50) - 1) * 0x10 + *(long *)(this + 0x48));
              piVar17 = (image *)*puVar7;
              *puVar7 = local_88;
              uVar2 = *(undefined4 *)(puVar7 + 1);
              *(uint *)(puVar7 + 1) = (uint)local_80 + -1;
              uVar3 = *(undefined4 *)((long)puVar7 + 0xc);
              *(int *)((long)puVar7 + 0xc) = (int)(local_80 >> 0x20);
              local_80 = CONCAT44(uVar3,uVar2);
              local_88 = piVar17;
              cVar4 = cVar5;
            }
          }
          if (local_78 != (imagef *)0x0) {
            piVar27 = local_78 + (local_70 & 0xffffffff) * 0x20;
            for (piVar15 = local_78; piVar27 != piVar15; piVar15 = piVar15 + 0x20) {
              if (*(void **)(piVar15 + 0x10) != (void *)0x0) {
                free(*(void **)(piVar15 + 0x10));
              }
            }
            free(local_78);
          }
          if (local_88 != (image *)0x0) {
            piVar28 = local_88 + (local_80 & 0xffffffff) * 0x20;
            piVar17 = piVar28;
            for (piVar16 = local_88; piVar16 != piVar28; piVar16 = piVar16 + 0x20) {
              if (*(void **)(piVar16 + 0x10) != (void *)0x0) {
                free(*(void **)(piVar16 + 0x10));
              }
              piVar17 = local_88;
            }
            free(piVar17);
          }
          lVar25 = lVar25 + 1;
        } while ((uint)lVar25 < *(uint *)(this + 0x10));
        *(undefined2 *)(this + 0xd8) = 0x100;
        vector<std::__cxx11::string>::clear((vector<std::__cxx11::string> *)(this + 8));
        vector<std::__cxx11::string>::clear((vector<std::__cxx11::string> *)(this + 0x18));
        if (cVar4 == '\0') goto LAB_0010db6a;
      }
      if ((this[2] != (basis_compressor)0x0) && (*(int *)(this + 0x40) == 0)) {
        basisu::error_printf
                  (
                  "HDR mode enabled, but only LDR .DDS files were loaded. HDR mode requires half or float (HDR) .DDS inputs.\n"
                  );
        uVar8 = 0;
        goto LAB_0010d7d5;
      }
    }
  }
  uVar8 = 1;
LAB_0010d7d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::write_output_files_and_compute_stats() */

undefined8 __thiscall
basisu::basis_compressor::write_output_files_and_compute_stats(basis_compressor *this)

{
  int *piVar1;
  char *pcVar2;
  basis_compressor bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  void *__s1;
  ulong *puVar12;
  uint uVar13;
  ulong *puVar14;
  size_t sVar15;
  ulong *puVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  imagef *piVar21;
  undefined4 *puVar22;
  void *__ptr;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  image *piVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
  float fVar29;
  ulong local_368;
  long local_348;
  basis_compressor *local_340;
  ulong local_330;
  undefined8 local_328;
  ulong local_320;
  void *local_318;
  undefined8 local_310;
  undefined8 local_308;
  ulong local_300;
  void *local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined8 uStack_2dc;
  undefined8 local_2d4;
  undefined4 local_2cc;
  void *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  void *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [16];
  undefined2 local_258;
  undefined1 local_256;
  ulong *local_248;
  ulong local_240;
  ulong auStack_238 [2];
  undefined1 *local_228;
  long local_220;
  undefined1 local_218;
  undefined7 uStack_217;
  ulong *local_208;
  ulong local_200;
  ulong local_1f8 [2];
  char *local_1e8;
  long local_1e0;
  char local_1d8 [16];
  char *local_1c8;
  long local_1c0;
  char local_1b8 [16];
  char *local_1a8;
  long local_1a0;
  char local_198 [16];
  char *local_188;
  long local_180;
  char local_178 [16];
  char *local_168;
  long local_160;
  char local_158 [16];
  char *local_148;
  long local_140;
  char local_138 [16];
  char *local_128;
  long local_120;
  char local_118 [16];
  char *local_108;
  long local_100;
  char local_f8 [16];
  ulong *local_e8;
  ulong local_e0;
  ulong auStack_d8 [2];
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98 [2];
  char *local_88;
  long local_80;
  char local_78 [16];
  ulong *local_68;
  ulong uStack_60;
  ulong local_58 [5];
  ulong uVar16;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::write_output_files_and_compute_stats\n");
  local_340 = this + 0x6e8;
  if (this[0x230] != (basis_compressor)0x0) {
    local_340 = this + 0x798;
  }
  if (this[0xda] != (basis_compressor)0x0) {
    if (*(uint *)(local_340 + 8) == 0) {
      cVar7 = basisu::write_data_to_file(*(char **)(this + 0x68),&_LC30,0);
      uVar9 = *(undefined8 *)(this + 0x68);
    }
    else {
      cVar7 = basisu::write_data_to_file
                        (*(char **)(this + 0x68),*(void **)local_340,(ulong)*(uint *)(local_340 + 8)
                        );
      uVar9 = *(undefined8 *)(this + 0x68);
    }
    if (cVar7 == '\0') {
      basisu::error_printf("Failed writing output data to file \"%s\"\n",uVar9);
      uVar9 = 0;
      goto LAB_0010de29;
    }
    __printf_chk(2,"Wrote output .basis/.ktx2 file \"%s\"\n");
  }
  if ((this[0xdc] == (basis_compressor)0x0) || (*this == (basis_compressor)0x0)) {
    local_330 = 0;
  }
  else {
    local_330 = 0;
    if (*(uint *)(local_340 + 8) != 0) {
      local_278 = 0;
      uStack_274 = 0;
      uStack_26c = 0;
      uStack_270 = 1;
      local_288._0_4_ = 0;
      local_288._4_4_ = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      iVar8 = buminiz::tdefl_compress_mem_to_output
                        (*(void **)local_340,(ulong)*(uint *)(local_340 + 8),
                         buminiz::tdefl_output_buffer_putter,&local_288,0xfff);
      if (iVar8 == 0) {
        __ptr = (void *)0x0;
      }
      else {
        local_330 = CONCAT44(local_288._4_4_,(undefined4)local_288);
        __ptr = (void *)CONCAT44(uStack_274,local_278);
      }
      local_288._0_4_ = 0;
      local_288._4_4_ = 0;
      __s1 = (void *)buminiz::tinfl_decompress_mem_to_heap(__ptr,local_330,&local_288,0);
      if (((ulong)*(uint *)(local_340 + 8) != CONCAT44(local_288._4_4_,(undefined4)local_288)) ||
         (iVar8 = memcmp(__s1,*(void **)local_340,(ulong)*(uint *)(local_340 + 8)), iVar8 != 0)) {
        puts(
            "basis_compressor::create_basis_file_and_transcode:: miniz compression or decompression failed!"
            );
        uVar9 = 0;
        goto LAB_0010de29;
      }
      free(__ptr);
      free(__s1);
      fVar29 = 0.0;
      if (*(uint *)(this + 0x328) != 0) {
        piVar18 = (int *)(*(long *)(this + 800) + 0x14);
        uVar13 = 0;
        piVar23 = piVar18 + (ulong)*(uint *)(this + 0x328) * 0xc;
        do {
          iVar8 = *piVar18;
          piVar1 = piVar18 + 1;
          piVar18 = piVar18 + 0xc;
          uVar13 = uVar13 + iVar8 * *piVar1 * 0x10;
        } while (piVar23 != piVar18);
        fVar29 = (float)uVar13;
      }
      uVar13 = *(uint *)(local_340 + 8);
      *(double *)(this + 0x318) = (double)(((float)local_330 * __LC165) / fVar29);
      basisu::debug_printf
                ("Output file size: %u, LZ compressed file size: %u, %3.2f bits/texel\n",
                 (ulong)uVar13,local_330 & 0xffffffff);
    }
  }
  vector<basisu::image_stats>::resize
            ((vector<basisu::image_stats> *)(this + 0x300),(ulong)*(uint *)(this + 0x328),false);
  if (this[0x2c4] != (basis_compressor)0x0) {
    if (this[2] == (basis_compressor)0x0) {
      if (*(int *)(this + 0x328) != 0) {
        uVar27 = 0;
        local_348 = 0;
        do {
          lVar11 = uVar27 * 0x30;
          lVar28 = *(long *)(this + 800) + lVar11;
          if (this[0xdc] != (basis_compressor)0x0) {
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(2,"Slice: %u\n",uVar27 & 0xffffffff);
            }
            local_258 = 0;
            local_288._0_4_ = 0;
            local_288._4_4_ = 0;
            uStack_280 = 0;
            uStack_27c = 0;
            lVar20 = uVar27 * 0x20;
            local_278 = 0;
            uStack_274 = 0;
            uStack_270 = 0;
            uStack_26c = 0;
            iVar8 = (int)lVar20;
            lVar25 = local_348 + *(long *)(this + 0x300);
            local_268 = (undefined1  [16])0x0;
            local_256 = 0;
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                       (int)*(undefined8 *)(this + 0x728) + iVar8,0,true,true);
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis RGB Avg:          ");
            }
            uVar9 = *(undefined8 *)(this + 0x728);
            lVar6 = *(long *)(this + 0x2e0);
            *(float *)(lVar25 + 0x28) = (float)(double)local_268._0_8_;
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,true,true)
            ;
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis RGBA Avg:         ");
            }
            uVar9 = *(undefined8 *)(this + 0x728);
            lVar6 = *(long *)(this + 0x2e0);
            *(float *)(lVar25 + 0x2c) = (float)(double)local_268._0_8_;
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,true,true)
            ;
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis R   Avg:          ");
            }
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                       (int)*(undefined8 *)(this + 0x728) + iVar8,1,true,true);
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis G   Avg:          ");
            }
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                       (int)*(undefined8 *)(this + 0x728) + iVar8,2,true,true);
            if (this[0xde] == (basis_compressor)0x0) {
              bVar3 = *this;
            }
            else {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis B   Avg:          ");
              bVar3 = *this;
            }
            if (bVar3 != (basis_compressor)0x0) {
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (int)*(undefined8 *)(this + 0x728) + iVar8,3,true,true);
              if (this[0xde] != (basis_compressor)0x0) {
                __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                             CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                             local_268._0_8_,2,
                             "%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                             ".basis A   Avg:          ");
              }
              *(float *)(lVar25 + 0x30) = (float)(double)local_268._0_8_;
            }
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                       (int)*(undefined8 *)(this + 0x728) + iVar8,0,false,true);
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis 709 Luma:         ");
            }
            uVar9 = *(undefined8 *)(this + 0x728);
            lVar6 = *(long *)(this + 0x2e0);
            *(float *)(lVar25 + 0x34) = (float)(double)local_268._0_8_;
            *(float *)(lVar25 + 0x3c) = (float)(double)local_268._8_8_;
            basisu::image_metrics::calc
                      ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,false,true
                      );
            if (this[0xde] != (basis_compressor)0x0) {
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,"%sMax: %3.3f Mean: %3.3f RMS: %3.3f PSNR: %2.3f dB\n",
                           ".basis 601 Luma:         ");
            }
            iVar5 = *(int *)(this + 0x328);
            *(float *)(lVar25 + 0x38) = (float)(double)local_268._0_8_;
            if (iVar5 == 1) {
              uVar24 = local_330;
              if (local_330 == 0) {
                uVar24 = (ulong)*(uint *)(local_340 + 8);
              }
              if (this[0xde] != (basis_compressor)0x0) {
                fVar29 = (float)(uVar24 & 0xffffffff) * __LC165;
                basisu::debug_printf
                          (".basis RGB PSNR per bit/texel*10000: %3.3f\n",
                           (double)((_LC199 * *(float *)(lVar25 + 0x28)) /
                                   (fVar29 / (float)(uint)(*(int *)(lVar28 + 4) *
                                                          *(int *)(lVar28 + 8)))));
                basisu::debug_printf
                          (".basis Luma 709 PSNR per bit/texel*10000: %3.3f\n",
                           (double)((_LC199 * *(float *)(lVar25 + 0x34)) /
                                   (fVar29 / (float)(uint)(*(int *)(lVar28 + 4) *
                                                          *(int *)(lVar28 + 8)))));
              }
            }
            if (*(int *)(*(long *)(this + 0x748) + lVar20) != 0) {
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (uint)(int *)(*(long *)(this + 0x748) + lVar20),0,true,true);
              uVar9 = *(undefined8 *)(this + 0x748);
              lVar6 = *(long *)(this + 0x2e0);
              *(float *)(lVar25 + 0x44) = (float)(double)local_268._0_8_;
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,true,
                         true);
              uVar9 = *(undefined8 *)(this + 0x748);
              lVar6 = *(long *)(this + 0x2e0);
              *(float *)(lVar25 + 0x48) = (float)(double)local_268._0_8_;
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,true,
                         true);
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (int)*(undefined8 *)(this + 0x748) + iVar8,1,true,true);
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (int)*(undefined8 *)(this + 0x748) + iVar8,2,true,true);
              if (*this != (basis_compressor)0x0) {
                basisu::image_metrics::calc
                          ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                           (int)*(undefined8 *)(this + 0x748) + iVar8,3,true,true);
                *(float *)(lVar25 + 0x4c) = (float)(double)local_268._0_8_;
              }
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (int)*(undefined8 *)(this + 0x748) + iVar8,0,false,true);
              uVar9 = *(undefined8 *)(this + 0x748);
              lVar6 = *(long *)(this + 0x2e0);
              *(float *)(lVar25 + 0x50) = (float)(double)local_268._0_8_;
              *(float *)(lVar25 + 0x58) = (float)(double)local_268._8_8_;
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,false,
                         true);
              *(float *)(lVar25 + 0x54) = (float)(double)local_268._0_8_;
            }
            if (*this == (basis_compressor)0x0) {
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(*(long *)(this + 0x2e0) + lVar20),
                         (int)*(undefined8 *)(this + 0x538) + iVar8,0,true,true);
              uVar9 = *(undefined8 *)(this + 0x538);
              lVar6 = *(long *)(this + 0x2e0);
              *(float *)(lVar25 + 0x5c) = (float)(double)local_268._0_8_;
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(lVar6 + lVar20),(int)uVar9 + iVar8,0,false,
                         true);
              uVar9 = *(undefined8 *)(this + 0x538);
              *(float *)(lVar25 + 0x60) = (float)(double)local_268._0_8_;
              lVar6 = *(long *)(this + 0x2e0);
              *(float *)(lVar25 + 0x68) = (float)(double)local_268._8_8_;
              basisu::image_metrics::calc
                        ((image *)&local_288,(image *)(lVar20 + lVar6),(int)uVar9 + iVar8,0,false,
                         true);
              *(float *)(lVar25 + 100) = (float)(double)local_268._0_8_;
            }
          }
          local_e0 = 0;
          auStack_d8[0] = auStack_d8[0] & 0xffffffffffffff00;
          local_e8 = auStack_d8;
          if (*(long *)(this + 0x70) == 0) {
            if (*(int *)(this + 0x10) != 0) {
              string_get_filename(*(char **)((ulong)*(uint *)(lVar28 + 0x24) * 0x20 +
                                            *(long *)(this + 8)),(string *)&local_e8);
            }
          }
          else {
            uStack_60 = 0;
            local_58[0] = local_58[0] & 0xffffffffffffff00;
            local_68 = local_58;
            cVar7 = string_split_path(*(char **)(this + 0x68),(string *)0x0,(string *)0x0,
                                      (string *)&local_e8,(string *)&local_68);
            if (cVar7 != '\0') {
              if (0x3fffffffffffffff - local_e0 < uStack_60) {
LAB_00110baf:
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("basic_string::append");
              }
              std::__cxx11::string::_M_append((char *)&local_e8,(ulong)local_68);
            }
            if (local_68 != local_58) {
              operator_delete(local_68,local_58[0] + 1);
            }
          }
          cVar7 = (char)(string *)&local_e8;
          lVar20 = std::__cxx11::string::rfind(cVar7,0x2f);
          iVar8 = -1;
          if (lVar20 != -1) {
            iVar8 = (int)lVar20;
          }
          lVar20 = std::__cxx11::string::rfind(cVar7,0x2e);
          if (lVar20 != -1) {
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar8 <= (int)lVar20) {
              std::__cxx11::string::resize((ulong)&local_e8,(char)lVar20);
            }
          }
          string_format_abi_cxx11_((char *)&local_a8,"_slice_%u",uVar27 & 0xffffffff);
          uVar24 = local_e0;
          puVar12 = local_e8;
          local_c0 = 0;
          local_b8 = 0;
          local_c8 = &local_b8;
          std::__cxx11::string::reserve((ulong)&local_c8);
          if ((0x3fffffffffffffffU - local_c0 < 0xc) ||
             (std::__cxx11::string::_M_append((char *)&local_c8,0x11ae8c),
             0x3fffffffffffffffU - local_c0 < uVar24)) goto LAB_00110baf;
          std::__cxx11::string::_M_append((char *)&local_c8,(ulong)puVar12);
          uVar24 = local_c0 + local_a0;
          uVar19 = local_98[0];
          if (local_c8 == &local_b8) {
            if ((0xf < uVar24) && (local_a8 != local_98)) goto LAB_0010e01f;
LAB_0010e02b:
            if (0x3fffffffffffffffU - local_c0 < local_a0) goto LAB_00110baf;
            puVar10 = (undefined8 *)
                      std::__cxx11::string::_M_append((char *)&local_c8,(ulong)local_a8);
            puVar12 = puVar10 + 2;
            if ((ulong *)*puVar10 == puVar12) {
              uVar24 = puVar10[1] + 1;
              puVar17 = puVar12;
              puVar14 = local_58;
              if (7 < (uint)uVar24) {
                uVar19 = 0;
                do {
                  uVar13 = (int)uVar19 + 8;
                  uVar16 = (ulong)uVar13;
                  *(undefined8 *)((long)local_58 + uVar19) = *(undefined8 *)((long)puVar12 + uVar19)
                  ;
                  uVar19 = uVar16;
                } while (uVar13 < ((uint)uVar24 & 0xfffffff8));
                puVar14 = (ulong *)((long)local_58 + uVar16);
                puVar17 = (ulong *)((long)puVar12 + uVar16);
              }
              lVar20 = 0;
              if ((uVar24 & 4) != 0) {
                *(int *)puVar14 = (int)*puVar17;
                lVar20 = 4;
              }
              if ((uVar24 & 2) != 0) {
                *(undefined2 *)((long)puVar14 + lVar20) = *(undefined2 *)((long)puVar17 + lVar20);
                lVar20 = lVar20 + 2;
              }
              local_68 = local_58;
              if ((uVar24 & 1) != 0) {
                *(undefined1 *)((long)puVar14 + lVar20) = *(undefined1 *)((long)puVar17 + lVar20);
              }
            }
            else {
              local_58[0] = puVar10[2];
              local_68 = (ulong *)*puVar10;
            }
            uStack_60 = puVar10[1];
            *puVar10 = puVar12;
            puVar10[1] = 0;
            *(undefined1 *)(puVar10 + 2) = 0;
          }
          else {
            if (uVar24 <= CONCAT71(uStack_b7,local_b8)) goto LAB_0010e02b;
            if (local_a8 == local_98) {
              uVar19 = 0xf;
            }
LAB_0010e01f:
            if (uVar19 < uVar24) goto LAB_0010e02b;
            puVar10 = (undefined8 *)
                      std::__cxx11::string::_M_replace
                                ((ulong)&local_a8,0,(char *)0x0,(ulong)local_c8);
            puVar12 = puVar10 + 2;
            if ((ulong *)*puVar10 == puVar12) {
              uVar24 = puVar10[1] + 1;
              puVar17 = puVar12;
              puVar14 = local_58;
              if (7 < (uint)uVar24) {
                uVar19 = 0;
                do {
                  uVar13 = (int)uVar19 + 8;
                  uVar16 = (ulong)uVar13;
                  *(undefined8 *)((long)local_58 + uVar19) = *(undefined8 *)((long)puVar12 + uVar19)
                  ;
                  uVar19 = uVar16;
                } while (uVar13 < ((uint)uVar24 & 0xfffffff8));
                puVar14 = (ulong *)((long)local_58 + uVar16);
                puVar17 = (ulong *)((long)puVar12 + uVar16);
              }
              lVar20 = 0;
              if ((uVar24 & 4) != 0) {
                *(int *)puVar14 = (int)*puVar17;
                lVar20 = 4;
              }
              if ((uVar24 & 2) != 0) {
                *(undefined2 *)((long)puVar14 + lVar20) = *(undefined2 *)((long)puVar17 + lVar20);
                lVar20 = lVar20 + 2;
              }
              local_68 = local_58;
              if ((uVar24 & 1) != 0) {
                *(undefined1 *)((long)puVar14 + lVar20) = *(undefined1 *)((long)puVar17 + lVar20);
              }
            }
            else {
              local_58[0] = puVar10[2];
              local_68 = (ulong *)*puVar10;
            }
            uStack_60 = puVar10[1];
            *puVar10 = puVar12;
            puVar10[1] = 0;
            *(undefined1 *)(puVar10 + 2) = 0;
          }
          uVar24 = auStack_d8[0];
          puVar12 = local_e8;
          if (local_68 == local_58) {
            uVar24 = uStack_60;
            if (uStack_60 != 0) {
              if (uStack_60 == 1) {
                *(undefined1 *)local_e8 = (undefined1)local_58[0];
                uVar24 = uStack_60;
              }
              else {
                memcpy(local_e8,local_58,uStack_60);
                uVar24 = uStack_60;
              }
            }
            *(undefined1 *)((long)local_e8 + uVar24) = 0;
            local_e0 = uVar24;
          }
          else {
            if (local_e8 != auStack_d8) {
              local_e8 = local_68;
              local_e0 = uStack_60;
              auStack_d8[0] = local_58[0];
              if (puVar12 != (ulong *)0x0) {
                local_68 = puVar12;
                local_58[0] = uVar24;
                goto LAB_0010e10c;
              }
            }
            auStack_d8[0] = local_58[0];
            local_e0 = uStack_60;
            local_e8 = local_68;
            local_68 = local_58;
          }
LAB_0010e10c:
          uStack_60 = 0;
          *(undefined1 *)local_68 = 0;
          if (local_68 != local_58) {
            operator_delete(local_68,local_58[0] + 1);
          }
          if (local_c8 != &local_b8) {
            operator_delete(local_c8,CONCAT71(uStack_b7,local_b8) + 1);
          }
          if (local_a8 != local_98) {
            operator_delete(local_a8,local_98[0] + 1);
          }
          if ((*this == (basis_compressor)0x0) && (this[0x356] != (basis_compressor)0x0)) {
            puVar22 = (undefined4 *)(lVar11 + *(long *)(this + 0x528));
            local_288._0_4_ = *puVar22;
            local_288._4_4_ = (int)*(undefined8 *)(puVar22 + 1);
            uStack_280 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 1) >> 0x20);
            uStack_27c = (undefined4)*(undefined8 *)(puVar22 + 3);
            local_278 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 3) >> 0x20);
            uStack_274 = (undefined4)*(undefined8 *)(puVar22 + 5);
            uStack_270 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 5) >> 0x20);
            uStack_26c = puVar22[7];
            local_268 = ZEXT816(0);
            basisu::elemental_vector::increase_capacity
                      ((uint)local_268,SUB41(puVar22[10],0),0,
                       (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
            local_268._8_4_ = puVar22[10];
            if (((void *)local_268._0_8_ != (void *)0x0) && (*(void **)(puVar22 + 8) != (void *)0x0)
               ) {
              memcpy((void *)local_268._0_8_,*(void **)(puVar22 + 8),(ulong)(uint)puVar22[10] * 8);
            }
            local_288._4_4_ = (int)*(undefined8 *)(lVar28 + 4);
            uStack_280 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 4) >> 0x20);
            std::operator+((string *)&local_68,(char *)local_e8);
            basisu::write_compressed_texture_file((char *)local_68,(gpu_image *)&local_288,true);
            std::__cxx11::string::_M_dispose();
            local_2b8 = 0;
            uStack_2b4 = 0;
            uStack_2b0 = 0;
            uStack_2ac = 0;
            uStack_2a8 = 0;
            uStack_2a4 = 0;
            local_2a0 = 0;
            uStack_29c = 0;
            basisu::gpu_image::unpack((image *)&local_288);
            std::operator+((string *)&local_68,(char *)local_e8);
            basisu::save_png((char *)local_68,(image *)&local_2b8,0,0);
            std::__cxx11::string::_M_dispose();
            if ((void *)CONCAT44(uStack_2a4,uStack_2a8) != (void *)0x0) {
              free((void *)CONCAT44(uStack_2a4,uStack_2a8));
            }
            if ((void *)local_268._0_8_ != (void *)0x0) {
              free((void *)local_268._0_8_);
            }
          }
          if (this[0x90] != (basis_compressor)0x0) {
            puVar22 = (undefined4 *)(lVar11 + *(long *)(this + 0x718));
            local_288._0_4_ = *puVar22;
            local_288._4_4_ = (int)*(undefined8 *)(puVar22 + 1);
            uStack_280 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 1) >> 0x20);
            uStack_27c = (undefined4)*(undefined8 *)(puVar22 + 3);
            local_278 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 3) >> 0x20);
            uStack_274 = (undefined4)*(undefined8 *)(puVar22 + 5);
            uStack_270 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 5) >> 0x20);
            uStack_26c = puVar22[7];
            local_268 = ZEXT816(0);
            basisu::elemental_vector::increase_capacity
                      ((uint)local_268,SUB41(puVar22[10],0),0,
                       (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
            local_268._8_4_ = puVar22[10];
            if (((void *)local_268._0_8_ != (void *)0x0) && (*(void **)(puVar22 + 8) != (void *)0x0)
               ) {
              memcpy((void *)local_268._0_8_,*(void **)(puVar22 + 8),(ulong)(uint)puVar22[10] * 8);
            }
            uVar24 = local_e0;
            puVar12 = local_e8;
            local_80 = 0;
            local_78[0] = '\0';
            local_288._4_4_ = (int)*(undefined8 *)(lVar28 + 4);
            uStack_280 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 4) >> 0x20);
            local_88 = local_78;
            std::__cxx11::string::reserve((ulong)&local_88);
            if ((0x3fffffffffffffffU - local_80 < uVar24) ||
               (std::__cxx11::string::_M_append((char *)&local_88,(ulong)puVar12),
               0x3fffffffffffffffU - local_80 < 0x1d)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_88,0x11b045);
            basisu::write_compressed_texture_file(local_88,(gpu_image *)&local_288,true);
            std::__cxx11::string::_M_dispose();
            local_2b8 = 0;
            uStack_2b4 = 0;
            uStack_2b0 = 0;
            uStack_2ac = 0;
            piVar26 = (image *)(*(long *)(this + 0x728) + uVar27 * 0x20);
            uStack_2a8 = 0;
            uStack_2a4 = 0;
            local_2a0 = 0;
            uStack_29c = 0;
            uVar13 = local_2a0;
            if (piVar26 != (image *)&local_2b8) {
              local_2b8 = (undefined4)*(undefined8 *)piVar26;
              uStack_2b4 = (undefined4)((ulong)*(undefined8 *)piVar26 >> 0x20);
              uStack_2b0 = *(undefined4 *)(piVar26 + 8);
              if (((image *)&uStack_2a8 != piVar26 + 0x10) &&
                 (uVar13 = *(uint *)(piVar26 + 0x18), uVar13 != 0)) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(image *)&uStack_2a8,SUB41(uVar13,0),0,
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                if ((void *)CONCAT44(uStack_2a4,uStack_2a8) != (void *)0x0) {
                  uVar13 = *(uint *)(piVar26 + 0x18);
                  if (*(void **)(piVar26 + 0x10) == (void *)0x0) goto LAB_0010f7ca;
                  memcpy((void *)CONCAT44(uStack_2a4,uStack_2a8),*(void **)(piVar26 + 0x10),
                         (ulong)*(uint *)(piVar26 + 0x18) << 2);
                }
                uVar13 = *(uint *)(piVar26 + 0x18);
              }
            }
LAB_0010f7ca:
            local_2a0 = uVar13;
            image::crop((image *)&local_2b8,*(uint *)(lVar28 + 4),*(uint *)(lVar28 + 8),0xffffffff,
                        (color_rgba *)&g_black_color,true);
            std::operator+((string *)&local_68,(char *)local_e8);
            basisu::save_png((char *)local_68,(image *)&local_2b8,0,0);
            std::__cxx11::string::_M_dispose();
            if ((void *)CONCAT44(uStack_2a4,uStack_2a8) != (void *)0x0) {
              free((void *)CONCAT44(uStack_2a4,uStack_2a8));
            }
            if ((void *)local_268._0_8_ != (void *)0x0) {
              free((void *)local_268._0_8_);
            }
            puVar22 = (undefined4 *)(lVar11 + *(long *)(this + 0x738));
            if (puVar22[1] != 0) {
              local_288._0_4_ = *puVar22;
              uStack_280 = puVar22[2];
              uStack_27c = (undefined4)*(undefined8 *)(puVar22 + 3);
              local_278 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 3) >> 0x20);
              uStack_274 = (undefined4)*(undefined8 *)(puVar22 + 5);
              uStack_270 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 5) >> 0x20);
              uStack_26c = puVar22[7];
              local_268 = ZEXT816(0);
              local_288._4_4_ = puVar22[1];
              basisu::elemental_vector::increase_capacity
                        ((uint)local_268,SUB41(puVar22[10],0),0,
                         (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
              local_268._8_4_ = puVar22[10];
              if (((void *)local_268._0_8_ != (void *)0x0) &&
                 (*(void **)(puVar22 + 8) != (void *)0x0)) {
                memcpy((void *)local_268._0_8_,*(void **)(puVar22 + 8),(ulong)(uint)puVar22[10] * 8)
                ;
              }
              local_288._4_4_ = (int)*(undefined8 *)(lVar28 + 4);
              uStack_280 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 4) >> 0x20);
              std::operator+((string *)&local_68,(char *)local_e8);
              basisu::write_compressed_texture_file((char *)local_68,(gpu_image *)&local_288,true);
              std::__cxx11::string::_M_dispose();
              piVar26 = (image *)(uVar27 * 0x20 + *(long *)(this + 0x748));
              local_2b8 = 0;
              uStack_2b4 = 0;
              uStack_2b0 = 0;
              uStack_2ac = 0;
              uStack_2a8 = 0;
              uStack_2a4 = 0;
              local_2a0 = 0;
              uStack_29c = 0;
              uVar13 = local_2a0;
              if (piVar26 != (image *)&local_2b8) {
                local_2b8 = (undefined4)*(undefined8 *)piVar26;
                uStack_2b4 = (undefined4)((ulong)*(undefined8 *)piVar26 >> 0x20);
                uStack_2b0 = *(undefined4 *)(piVar26 + 8);
                if (((image *)&uStack_2a8 != piVar26 + 0x10) &&
                   (uVar13 = *(uint *)(piVar26 + 0x18), uVar13 != 0)) {
                  basisu::elemental_vector::increase_capacity
                            ((uint)(image *)&uStack_2a8,SUB41(uVar13,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                  if ((void *)CONCAT44(uStack_2a4,uStack_2a8) != (void *)0x0) {
                    uVar13 = *(uint *)(piVar26 + 0x18);
                    if (*(void **)(piVar26 + 0x10) == (void *)0x0) goto LAB_0010f9e3;
                    memcpy((void *)CONCAT44(uStack_2a4,uStack_2a8),*(void **)(piVar26 + 0x10),
                           (ulong)*(uint *)(piVar26 + 0x18) << 2);
                  }
                  uVar13 = *(uint *)(piVar26 + 0x18);
                }
              }
LAB_0010f9e3:
              local_2a0 = uVar13;
              image::crop((image *)&local_2b8,*(uint *)(lVar28 + 4),*(uint *)(lVar28 + 8),0xffffffff
                          ,(color_rgba *)&g_black_color,true);
              std::operator+((string *)&local_68,(char *)local_e8);
              basisu::save_png((char *)local_68,(image *)&local_2b8,0,0);
              std::__cxx11::string::_M_dispose();
              if ((void *)CONCAT44(uStack_2a4,uStack_2a8) != (void *)0x0) {
                free((void *)CONCAT44(uStack_2a4,uStack_2a8));
              }
              if ((void *)local_268._0_8_ != (void *)0x0) {
                free((void *)local_268._0_8_);
              }
            }
          }
          if (local_e8 != auStack_d8) {
            operator_delete(local_e8,auStack_d8[0] + 1);
          }
          local_348 = local_348 + 0x70;
          uVar27 = uVar27 + 1;
        } while ((uint)uVar27 < *(uint *)(this + 0x328));
      }
    }
    else {
      if (this[0xde] != (basis_compressor)0x0) {
        puts(
            "ASTC/BC6H half float space error metrics (a piecewise linear approximation of log2 error):"
            );
      }
      if (*(int *)(this + 0x328) != 0) {
        local_368 = 0;
        do {
          lVar11 = *(long *)(this + 800);
          if (this[0xdc] != (basis_compressor)0x0) {
            lVar28 = local_368 * 0x70 + *(long *)(this + 0x300);
            if (this[0xde] == (basis_compressor)0x0) {
              local_256 = 0;
              lVar20 = local_368 << 5;
              local_258 = 0;
              local_288._0_4_ = 0;
              local_288._4_4_ = 0;
              uStack_280 = 0;
              uStack_27c = 0;
              local_278 = 0;
              uStack_274 = 0;
              uStack_270 = 0;
              uStack_26c = 0;
              local_268 = (undefined1  [16])0x0;
            }
            else {
              __printf_chk(2,"Slice: %u\n",local_368 & 0xffffffff);
              local_258 = 0;
              lVar20 = local_368 * 0x20;
              local_256 = 0;
              local_288._0_4_ = 0;
              local_288._4_4_ = 0;
              uStack_280 = 0;
              uStack_27c = 0;
              local_278 = 0;
              uStack_274 = 0;
              uStack_270 = 0;
              uStack_26c = 0;
              local_268 = (undefined1  [16])0x0;
              if (this[0xde] != (basis_compressor)0x0) {
                puts("\nASTC channels:");
                lVar25 = 0;
                do {
                  basisu::image_metrics::calc_half
                            ((imagef *)&local_288,(imagef *)(*(long *)(this + 0x2f0) + lVar20),
                             (int)*(undefined8 *)(this + 0x778) + (int)lVar20,(uint)lVar25,true);
                  pcVar2 = &_LC170 + lVar25;
                  lVar25 = lVar25 + 1;
                  __printf_chk(2,"%c:   ",(int)*pcVar2);
                  __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                               CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                               local_268._0_8_,2,
                               "%sMax: %3.6f Mean: %3.6f RMS: %3.6f PSNR: %2.6f dB, Any Neg: %u, Half float overflow: %u, Any NaN/Inf: %u\n"
                               ,&_LC30,(undefined1)local_258,local_258._1_1_,local_256);
                } while (lVar25 != 3);
                puts("BC6H channels:");
                lVar25 = 0;
                do {
                  basisu::image_metrics::calc_half
                            ((imagef *)&local_288,(imagef *)(*(long *)(this + 0x2f0) + lVar20),
                             (int)*(undefined8 *)(this + 0x758) + (int)lVar20,(uint)lVar25,true);
                  pcVar2 = &_LC170 + lVar25;
                  lVar25 = lVar25 + 1;
                  __printf_chk(2,"%c:   ",(int)*pcVar2);
                  __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                               CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                               local_268._0_8_,2,
                               "%sMax: %3.6f Mean: %3.6f RMS: %3.6f PSNR: %2.6f dB, Any Neg: %u, Half float overflow: %u, Any NaN/Inf: %u\n"
                               ,&_LC30,(undefined1)local_258,local_258._1_1_,local_256);
                } while (lVar25 != 3);
              }
            }
            basisu::image_metrics::calc_half
                      ((imagef *)&local_288,(imagef *)(*(long *)(this + 0x2f0) + lVar20),
                       (int)*(undefined8 *)(this + 0x778) + (int)lVar20,0,true);
            bVar3 = this[0xde];
            *(float *)(lVar28 + 0x28) = (float)(double)local_268._0_8_;
            if (bVar3 != (basis_compressor)0x0) {
              __printf_chk(2,"\nASTC RGB: ");
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,
                           "%sMax: %3.6f Mean: %3.6f RMS: %3.6f PSNR: %2.6f dB, Any Neg: %u, Half float overflow: %u, Any NaN/Inf: %u\n"
                           ,&_LC30,(undefined1)local_258,local_258._1_1_,local_256);
            }
            basisu::image_metrics::calc_half
                      ((imagef *)&local_288,(imagef *)(*(long *)(this + 0x2f0) + lVar20),
                       (int)*(undefined8 *)(this + 0x758) + (int)lVar20,0,true);
            bVar3 = this[0xde];
            *(float *)(lVar28 + 0x40) = (float)(double)local_268._0_8_;
            if (bVar3 != (basis_compressor)0x0) {
              __printf_chk(2,"BC6H RGB: ");
              __printf_chk(CONCAT44(local_288._4_4_,(undefined4)local_288),
                           CONCAT44(uStack_27c,uStack_280),CONCAT44(uStack_26c,uStack_270),
                           local_268._0_8_,2,
                           "%sMax: %3.6f Mean: %3.6f RMS: %3.6f PSNR: %2.6f dB, Any Neg: %u, Half float overflow: %u, Any NaN/Inf: %u\n"
                           ,&_LC30,(undefined1)local_258,local_258._1_1_,local_256);
              putchar(10);
            }
          }
          if (this[0x90] != (basis_compressor)0x0) {
            auStack_238[0] = auStack_238[0] & 0xffffffffffffff00;
            local_240 = 0;
            lVar28 = local_368 * 0x30;
            lVar11 = lVar11 + lVar28;
            local_248 = auStack_238;
            if (*(long *)(this + 0x70) == 0) {
              if (*(int *)(this + 0x10) != 0) {
                string_get_filename(*(char **)((ulong)*(uint *)(lVar11 + 0x24) * 0x20 +
                                              *(long *)(this + 8)),(string *)&local_248);
              }
            }
            else {
              string_get_filename(*(char **)(this + 0x68),(string *)&local_248);
            }
            cVar7 = (char)(string *)&local_248;
            lVar20 = std::__cxx11::string::rfind(cVar7,0x2f);
            iVar8 = -1;
            if (lVar20 != -1) {
              iVar8 = (int)lVar20;
            }
            lVar20 = std::__cxx11::string::rfind(cVar7,0x2e);
            if (lVar20 != -1) {
              if (iVar8 < 0) {
                iVar8 = 0;
              }
              if (iVar8 <= (int)lVar20) {
                std::__cxx11::string::resize((ulong)&local_248,(char)lVar20);
              }
            }
            string_format_abi_cxx11_((char *)&local_208,"_slice_%u",local_368 & 0xffffffff);
            uVar27 = local_240;
            puVar12 = local_248;
            local_220 = 0;
            local_218 = 0;
            local_228 = &local_218;
            std::__cxx11::string::reserve((ulong)&local_228);
            if ((0x3fffffffffffffffU - local_220 < 0xc) ||
               (std::__cxx11::string::_M_append((char *)&local_228,0x11ae8c),
               0x3fffffffffffffffU - local_220 < uVar27)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_228,(ulong)puVar12);
            uVar27 = local_220 + local_200;
            uVar24 = local_1f8[0];
            if (local_228 == &local_218) {
              if ((0xf < uVar27) && (local_208 != local_1f8)) goto LAB_0010e9cf;
LAB_0010e9db:
              if (0x3fffffffffffffffU - local_220 < local_200) goto LAB_00110baf;
              puVar10 = (undefined8 *)
                        std::__cxx11::string::_M_append((char *)&local_228,(ulong)local_208);
              local_68 = local_58;
              puVar14 = (ulong *)*puVar10;
              puVar12 = puVar10 + 2;
              if (puVar14 == puVar12) {
                uVar27 = puVar10[1] + 1;
                puVar17 = puVar12;
                puVar14 = local_68;
                if (7 < (uint)uVar27) {
                  uVar24 = 0;
                  do {
                    uVar13 = (int)uVar24 + 8;
                    uVar19 = (ulong)uVar13;
                    *(undefined8 *)((long)local_68 + uVar24) =
                         *(undefined8 *)((long)puVar12 + uVar24);
                    uVar24 = uVar19;
                  } while (uVar13 < ((uint)uVar27 & 0xfffffff8));
                  puVar14 = (ulong *)((long)local_68 + uVar19);
                  puVar17 = (ulong *)((long)puVar12 + uVar19);
                }
                lVar20 = 0;
                if ((uVar27 & 4) != 0) {
                  *(int *)puVar14 = (int)*puVar17;
                  lVar20 = 4;
                }
                if ((uVar27 & 2) != 0) {
                  *(undefined2 *)((long)puVar14 + lVar20) = *(undefined2 *)((long)puVar17 + lVar20);
                  lVar20 = lVar20 + 2;
                }
                if ((uVar27 & 1) != 0) {
                  *(undefined1 *)((long)puVar14 + lVar20) = *(undefined1 *)((long)puVar17 + lVar20);
                }
              }
              else {
LAB_0010ea1c:
                local_58[0] = puVar10[2];
                local_68 = puVar14;
              }
            }
            else {
              if (uVar27 <= CONCAT71(uStack_217,local_218)) goto LAB_0010e9db;
              if (local_208 == local_1f8) {
                uVar24 = 0xf;
              }
LAB_0010e9cf:
              if (uVar24 < uVar27) goto LAB_0010e9db;
              puVar10 = (undefined8 *)
                        std::__cxx11::string::_M_replace
                                  ((ulong)&local_208,0,(char *)0x0,(ulong)local_228);
              local_68 = local_58;
              puVar14 = (ulong *)*puVar10;
              puVar12 = puVar10 + 2;
              if (puVar14 != puVar12) goto LAB_0010ea1c;
              uVar27 = puVar10[1] + 1;
              puVar17 = puVar12;
              puVar14 = local_68;
              if (7 < (uint)uVar27) {
                uVar24 = 0;
                do {
                  uVar13 = (int)uVar24 + 8;
                  uVar19 = (ulong)uVar13;
                  *(undefined8 *)((long)local_68 + uVar24) = *(undefined8 *)((long)puVar12 + uVar24)
                  ;
                  uVar24 = uVar19;
                } while (uVar13 < ((uint)uVar27 & 0xfffffff8));
                puVar14 = (ulong *)((long)local_68 + uVar19);
                puVar17 = (ulong *)((long)puVar12 + uVar19);
              }
              lVar20 = 0;
              if ((uVar27 & 4) != 0) {
                *(int *)puVar14 = (int)*puVar17;
                lVar20 = 4;
              }
              if ((uVar27 & 2) != 0) {
                *(undefined2 *)((long)puVar14 + lVar20) = *(undefined2 *)((long)puVar17 + lVar20);
                lVar20 = lVar20 + 2;
              }
              if ((uVar27 & 1) != 0) {
                *(undefined1 *)((long)puVar14 + lVar20) = *(undefined1 *)((long)puVar17 + lVar20);
              }
            }
            uVar27 = auStack_238[0];
            puVar14 = local_248;
            uStack_60 = puVar10[1];
            *(undefined1 *)(puVar10 + 2) = 0;
            *puVar10 = puVar12;
            puVar10[1] = 0;
            if (local_68 == local_58) {
              sVar15 = uStack_60;
              if (uStack_60 != 0) {
                if (uStack_60 == 1) {
                  *(undefined1 *)local_248 = (undefined1)local_58[0];
                  sVar15 = uStack_60;
                }
                else {
                  memcpy(local_248,local_58,uStack_60);
                  sVar15 = uStack_60;
                }
              }
              *(undefined1 *)((long)local_248 + sVar15) = 0;
              local_240 = sVar15;
            }
            else {
              local_240 = uStack_60;
              if (local_248 != auStack_238) {
                local_248 = local_68;
                auStack_238[0] = local_58[0];
                if (puVar14 != (ulong *)0x0) {
                  local_68 = puVar14;
                  local_58[0] = uVar27;
                  goto LAB_0010eab8;
                }
              }
              auStack_238[0] = local_58[0];
              local_248 = local_68;
              local_68 = local_58;
            }
LAB_0010eab8:
            uStack_60 = 0;
            *(undefined1 *)local_68 = 0;
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            puVar22 = (undefined4 *)(*(long *)(this + 0x718) + lVar28);
            local_2e8 = *puVar22;
            local_2e4 = *(undefined8 *)(puVar22 + 1);
            uStack_2dc = *(undefined8 *)(puVar22 + 3);
            local_2d4 = *(undefined8 *)(puVar22 + 5);
            local_2cc = puVar22[7];
            local_2c8 = (void *)0x0;
            local_2c0 = 0;
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_2c8,SUB41(puVar22[10],0),0,
                       (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
            local_2c0 = CONCAT44(local_2c0._4_4_,puVar22[10]);
            if ((local_2c8 != (void *)0x0) && (*(void **)(puVar22 + 8) != (void *)0x0)) {
              memcpy(local_2c8,*(void **)(puVar22 + 8),(ulong)(uint)puVar22[10] * 8);
            }
            uVar27 = local_240;
            puVar12 = local_248;
            local_2e4 = *(undefined8 *)(lVar11 + 4);
            local_1e0 = 0;
            local_1d8[0] = '\0';
            local_1e8 = local_1d8;
            std::__cxx11::string::reserve((ulong)&local_1e8);
            if ((0x3fffffffffffffffU - local_1e0 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_1e8,(ulong)puVar12),
               0x3fffffffffffffffU - local_1e0 < 9)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_1e8,0x11ae99);
            basisu::write_compressed_texture_file(local_1e8,(gpu_image *)&local_2e8,true);
            __printf_chk(2,"Wrote .DDS file %s\n",local_1e8);
            std::__cxx11::string::_M_dispose();
            if (local_2c8 != (void *)0x0) {
              free(local_2c8);
            }
            puVar22 = (undefined4 *)(lVar28 + *(long *)(this + 0x768));
            local_2b8 = *puVar22;
            uStack_2b4 = (undefined4)*(undefined8 *)(puVar22 + 1);
            uStack_2b0 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 1) >> 0x20);
            uStack_2ac = (undefined4)*(undefined8 *)(puVar22 + 3);
            uStack_2a8 = (undefined4)((ulong)*(undefined8 *)(puVar22 + 3) >> 0x20);
            uStack_2a4 = (undefined4)*(undefined8 *)(puVar22 + 5);
            local_2a0 = (uint)((ulong)*(undefined8 *)(puVar22 + 5) >> 0x20);
            uStack_29c = puVar22[7];
            local_290 = 0;
            local_298 = (void *)0x0;
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_298,SUB41(puVar22[10],0),0,
                       (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
            local_290 = CONCAT44(local_290._4_4_,puVar22[10]);
            if ((local_298 != (void *)0x0) && (*(void **)(puVar22 + 8) != (void *)0x0)) {
              memcpy(local_298,*(void **)(puVar22 + 8),(ulong)(uint)puVar22[10] * 8);
            }
            uVar27 = local_240;
            puVar12 = local_248;
            local_1b8[0] = '\0';
            uStack_2b4 = (undefined4)*(undefined8 *)(lVar11 + 4);
            uStack_2b0 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 4) >> 0x20);
            local_1c8 = local_1b8;
            local_1c0 = 0;
            std::__cxx11::string::reserve((ulong)&local_1c8);
            if ((0x3fffffffffffffffU - local_1c0 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_1c8,(ulong)puVar12),
               0x3fffffffffffffffU - local_1c0 < 10)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_1c8,0x11aeb7);
            basisu::write_astc_file
                      (local_1c8,local_298,4,4,*(uint *)(lVar11 + 4),*(uint *)(lVar11 + 8));
            __printf_chk(2,"Wrote .ASTC file %s\n",local_1c8);
            uVar27 = local_240;
            puVar12 = local_248;
            local_1a8 = local_198;
            local_1a0 = 0;
            local_198[0] = '\0';
            std::__cxx11::string::reserve((ulong)&local_1a8);
            if ((0x3fffffffffffffffU - local_1a0 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_1a8,(ulong)puVar12),
               0x3fffffffffffffffU - local_1a0 < 9)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_1a8,0x11aed7);
            basisu::write_compressed_texture_file(local_1a8,(gpu_image *)&local_2b8,true);
            __printf_chk(2,"Wrote .KTX file %s\n",local_1a8);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
            if (local_298 != (void *)0x0) {
              free(local_298);
            }
            local_328 = 0;
            local_320 = 0;
            local_318 = (void *)0x0;
            lVar28 = local_368 * 0x20;
            piVar21 = (imagef *)(*(long *)(this + 0x778) + lVar28);
            local_310 = 0;
            if (piVar21 != (imagef *)&local_328) {
              local_328 = *(undefined8 *)piVar21;
              local_320 = (ulong)*(uint *)(piVar21 + 8);
              if ((imagef *)&local_318 != piVar21 + 0x10) {
                uVar13 = *(uint *)(piVar21 + 0x18);
                if (uVar13 != 0) {
                  basisu::elemental_vector::increase_capacity
                            ((uint)(imagef *)&local_318,SUB41(uVar13,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)0x10,true);
                  uVar13 = *(uint *)(piVar21 + 0x18);
                  lVar20 = *(long *)(piVar21 + 0x10);
                  if (uVar13 != 0) {
                    lVar25 = 0;
                    do {
                      uVar9 = ((undefined8 *)(lVar20 + lVar25))[1];
                      *(undefined8 *)((long)local_318 + lVar25) = *(undefined8 *)(lVar20 + lVar25);
                      ((undefined8 *)((long)local_318 + lVar25))[1] = uVar9;
                      lVar25 = lVar25 + 0x10;
                    } while ((ulong)uVar13 << 4 != lVar25);
                  }
                }
                local_310 = CONCAT44(local_310._4_4_,uVar13);
              }
            }
            local_68 = __LC98;
            uStack_60 = _UNK_00122508;
            imagef::crop((imagef *)&local_328,*(uint *)(lVar11 + 4),*(uint *)(lVar11 + 8),0xffffffff
                         ,(vec *)&local_68);
            uVar27 = local_240;
            puVar12 = local_248;
            local_188 = local_178;
            local_180 = 0;
            local_178[0] = '\0';
            std::__cxx11::string::reserve((ulong)&local_188);
            if ((0x3fffffffffffffffU - local_180 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_188,(ulong)puVar12),
               0x3fffffffffffffffU - local_180 < 0x12)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_188,0x11aef5);
            basisu::write_exr(local_188,(imagef *)&local_328,3,0);
            __printf_chk(2,"Wrote .EXR file %s\n",local_188);
            std::__cxx11::string::_M_dispose();
            if (local_318 != (void *)0x0) {
              free(local_318);
            }
            piVar21 = (imagef *)(lVar28 + *(long *)(this + 0x758));
            local_308 = 0;
            local_300 = 0;
            local_2f8 = (void *)0x0;
            local_2f0 = 0;
            if (piVar21 != (imagef *)&local_308) {
              local_308 = *(undefined8 *)piVar21;
              local_300 = (ulong)*(uint *)(piVar21 + 8);
              if ((imagef *)&local_2f8 != piVar21 + 0x10) {
                uVar13 = *(uint *)(piVar21 + 0x18);
                if (uVar13 != 0) {
                  basisu::elemental_vector::increase_capacity
                            ((uint)(imagef *)&local_2f8,SUB41(uVar13,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)0x10,true);
                  uVar13 = *(uint *)(piVar21 + 0x18);
                  lVar20 = *(long *)(piVar21 + 0x10);
                  if (uVar13 != 0) {
                    lVar25 = 0;
                    do {
                      uVar9 = ((undefined8 *)(lVar20 + lVar25))[1];
                      *(undefined8 *)((long)local_2f8 + lVar25) = *(undefined8 *)(lVar20 + lVar25);
                      ((undefined8 *)((long)local_2f8 + lVar25))[1] = uVar9;
                      lVar25 = lVar25 + 0x10;
                    } while ((ulong)uVar13 << 4 != lVar25);
                  }
                }
                local_2f0 = CONCAT44(local_2f0._4_4_,uVar13);
              }
            }
            local_68 = __LC98;
            uStack_60 = _UNK_00122508;
            imagef::crop((imagef *)&local_308,*(uint *)(lVar11 + 4),*(uint *)(lVar11 + 8),0xffffffff
                         ,(vec *)&local_68);
            uVar27 = local_240;
            puVar12 = local_248;
            local_160 = 0;
            local_168 = local_158;
            local_158[0] = '\0';
            std::__cxx11::string::reserve((ulong)&local_168);
            if ((0x3fffffffffffffffU - local_160 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_168,(ulong)puVar12),
               0x3fffffffffffffffU - local_160 < 0x12)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_168,0x11af1c);
            basisu::write_exr(local_168,(imagef *)&local_308,3,0);
            __printf_chk(2,"Wrote .EXR file %s\n",local_168);
            std::__cxx11::string::_M_dispose();
            if (local_2f8 != (void *)0x0) {
              free(local_2f8);
            }
            uVar27 = local_240;
            puVar12 = local_248;
            uVar13 = *(uint *)(lVar11 + 4);
            uVar4 = *(uint *)(lVar11 + 8);
            local_140 = 0;
            local_138[0] = '\0';
            lVar20 = *(long *)(this + 0x2f0);
            local_148 = local_138;
            std::__cxx11::string::reserve((ulong)&local_148);
            if ((0x3fffffffffffffffU - local_140 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_148,(ulong)puVar12),
               0x3fffffffffffffffU - local_140 < 7)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_148,0x11af2f);
            write_hdr_debug_images(this,local_148,(imagef *)(lVar28 + lVar20),uVar13,uVar4);
            std::__cxx11::string::_M_dispose();
            uVar27 = local_240;
            puVar12 = local_248;
            uVar13 = *(uint *)(lVar11 + 4);
            local_128 = local_118;
            uVar4 = *(uint *)(lVar11 + 8);
            lVar20 = *(long *)(this + 0x778);
            local_120 = 0;
            local_118[0] = '\0';
            std::__cxx11::string::reserve((ulong)&local_128);
            if ((0x3fffffffffffffffU - local_120 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_128,(ulong)puVar12),
               0x3fffffffffffffffU - local_120 < 0xe)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_128,0x11af37);
            write_hdr_debug_images(this,local_128,(imagef *)(lVar28 + lVar20),uVar13,uVar4);
            std::__cxx11::string::_M_dispose();
            uVar27 = local_240;
            puVar12 = local_248;
            uVar13 = *(uint *)(lVar11 + 4);
            uVar4 = *(uint *)(lVar11 + 8);
            local_108 = local_f8;
            local_100 = 0;
            lVar11 = *(long *)(this + 0x758);
            local_f8[0] = '\0';
            std::__cxx11::string::reserve((ulong)&local_108);
            if ((0x3fffffffffffffffU - local_100 < uVar27) ||
               (std::__cxx11::string::_M_append((char *)&local_108,(ulong)puVar12),
               0x3fffffffffffffffU - local_100 < 0xe)) goto LAB_00110baf;
            std::__cxx11::string::_M_append((char *)&local_108,0x11af46);
            write_hdr_debug_images(this,local_108,(imagef *)(lVar28 + lVar11),uVar13,uVar4);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
          }
          local_368 = local_368 + 1;
        } while ((uint)local_368 < *(uint *)(this + 0x328));
      }
    }
  }
  uVar9 = 1;
LAB_0010de29:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* basisu::basis_compressor::extract_frontend_texture_data() [clone .part.0] */

void __thiscall basisu::basis_compressor::extract_frontend_texture_data(basis_compressor *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  long local_50;
  
  basisu::debug_printf("basis_compressor::extract_frontend_texture_data\n");
  uVar2 = *(uint *)(this + 0x328);
  uVar9 = (ulong)uVar2;
  uVar8 = *(uint *)(this + 0x520);
  if (uVar2 != uVar8) {
    if (uVar2 < uVar8) {
      lVar5 = uVar9 * 0x30 + *(long *)(this + 0x518);
      lVar13 = (ulong)(uVar8 - uVar2) * 0x30 + lVar5;
      do {
        if (*(void **)(lVar5 + 0x20) != (void *)0x0) {
          free(*(void **)(lVar5 + 0x20));
        }
        lVar5 = lVar5 + 0x30;
      } while (lVar13 != lVar5);
      uVar9 = (ulong)*(uint *)(this + 0x328);
      uVar8 = *(uint *)(this + 0x328);
    }
    else {
      uVar12 = uVar2;
      if (*(uint *)(this + 0x524) < uVar2) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x518,SUB41(uVar2,0),(uint)(uVar8 + 1 == uVar2),
                   (_func_void_void_ptr_void_ptr_uint *)0x30,true);
        uVar12 = *(uint *)(this + 0x328);
        uVar9 = (ulong)uVar12;
        uVar8 = *(uint *)(this + 0x520);
      }
      puVar4 = (undefined4 *)((ulong)uVar8 * 0x30 + *(long *)(this + 0x518));
      puVar7 = puVar4 + (ulong)(uVar2 - uVar8) * 0xc;
      for (; uVar8 = uVar12, puVar4 != puVar7; puVar4 = puVar4 + 0xc) {
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *puVar4 = 0xffffffff;
        *(undefined8 *)(puVar4 + 5) = 0;
        *(undefined1 (*) [16])(puVar4 + 1) = (undefined1  [16])0x0;
        puVar4[7] = 0;
      }
    }
    *(uint *)(this + 0x520) = uVar2;
  }
  uVar2 = *(uint *)(this + 0x530);
  if (uVar2 != uVar8) {
    if (uVar8 < uVar2) {
      lVar13 = uVar9 * 0x30 + *(long *)(this + 0x528);
      lVar5 = (ulong)(uVar2 - uVar8) * 0x30 + lVar13;
      do {
        if (*(void **)(lVar13 + 0x20) != (void *)0x0) {
          free(*(void **)(lVar13 + 0x20));
        }
        lVar13 = lVar13 + 0x30;
      } while (lVar5 != lVar13);
      *(uint *)(this + 0x530) = uVar8;
      uVar9 = (ulong)*(uint *)(this + 0x328);
    }
    else {
      if (*(uint *)(this + 0x534) < uVar8) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x528,SUB41(uVar8,0),(uint)(uVar2 + 1 == uVar8),
                   (_func_void_void_ptr_void_ptr_uint *)0x30,true);
        uVar2 = *(uint *)(this + 0x530);
        uVar9 = (ulong)*(uint *)(this + 0x328);
      }
      puVar4 = (undefined4 *)((ulong)uVar2 * 0x30 + *(long *)(this + 0x528));
      puVar7 = puVar4 + (ulong)(uVar8 - uVar2) * 0xc;
      for (; puVar4 != puVar7; puVar4 = puVar4 + 0xc) {
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *puVar4 = 0xffffffff;
        *(undefined8 *)(puVar4 + 5) = 0;
        *(undefined1 (*) [16])(puVar4 + 1) = (undefined1  [16])0x0;
        puVar4[7] = 0;
      }
      *(uint *)(this + 0x530) = uVar8;
    }
  }
  vector<basisu::image>::resize((vector<basisu::image> *)(this + 0x538),uVar9,false);
  if (*(int *)(this + 0x328) != 0) {
    local_50 = 0;
    do {
      lVar13 = local_50 * 0x30;
      piVar14 = (int *)(*(long *)(this + 800) + lVar13);
      puVar4 = (undefined4 *)(*(long *)(this + 0x518) + lVar13);
      uVar2 = (uint)*(ulong *)(piVar14 + 5);
      uVar8 = piVar14[6];
      uVar9 = *(ulong *)(piVar14 + 5);
      *(undefined8 *)(puVar4 + 5) = _LC39;
      *puVar4 = 0;
      puVar4[7] = 1;
      iVar11 = uVar2 * 4;
      *(ulong *)(puVar4 + 1) = CONCAT44(uVar8 * 4,iVar11);
      *(ulong *)(puVar4 + 3) = uVar9 & 0x3fffffff3fffffff;
      if (puVar4[10] != 0) {
        puVar4[10] = 0;
      }
      uVar12 = (uVar2 & 0x3fffffff) * (uVar8 & 0x3fffffff);
      if (uVar12 == 0) {
        if (uVar8 != 0) goto LAB_00110dc2;
LAB_00110f4d:
        gpu_image::init((gpu_image *)(*(long *)(this + 0x528) + lVar13),0,iVar11,0);
      }
      else {
        uVar6 = 0;
        if ((uint)puVar4[0xb] < uVar12) {
          basisu::elemental_vector::increase_capacity
                    ((int)puVar4 + 0x20,SUB41(uVar12,0),(uint)(uVar12 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
          uVar6 = puVar4[10];
        }
        memset((void *)(*(long *)(puVar4 + 8) + (ulong)uVar6 * 8),0,(ulong)(uVar12 - uVar6) << 3);
        puVar4[10] = uVar12;
        if (uVar8 == 0) goto LAB_00110f4d;
LAB_00110dc2:
        iVar10 = 0;
        uVar12 = 0;
        if (uVar2 != 0) {
          do {
            uVar6 = 0;
            do {
              lVar5 = *(long *)(this + 0x518) + lVar13;
              uVar1 = *piVar14 + iVar10 + uVar6;
              iVar3 = *(int *)(lVar5 + 0xc) * uVar12 + uVar6;
              uVar6 = uVar6 + 1;
              *(undefined8 *)
               (*(long *)(lVar5 + 0x20) + (ulong)(uint)(iVar3 * *(int *)(lVar5 + 0x1c)) * 8) =
                   *(undefined8 *)(*(long *)(this + 0x3a0) + (ulong)uVar1 * 8);
            } while (uVar2 != uVar6);
            uVar12 = uVar12 + 1;
            iVar10 = iVar10 + uVar2;
          } while (uVar8 != uVar12);
        }
        gpu_image::init((gpu_image *)(*(long *)(this + 0x528) + lVar13),0,iVar11,uVar8 * 4);
        if (uVar2 != 0) {
          iVar11 = 0;
          uVar12 = 0;
          do {
            uVar6 = 0;
            do {
              lVar5 = *(long *)(this + 0x528) + lVar13;
              uVar1 = *piVar14 + iVar11 + uVar6;
              iVar10 = *(int *)(lVar5 + 0xc) * uVar12 + uVar6;
              uVar6 = uVar6 + 1;
              *(undefined8 *)
               (*(long *)(lVar5 + 0x20) + (ulong)(uint)(iVar10 * *(int *)(lVar5 + 0x1c)) * 8) =
                   *(undefined8 *)(*(long *)(this + 0x3c0) + (ulong)uVar1 * 8);
            } while (uVar2 != uVar6);
            uVar12 = uVar12 + 1;
            iVar11 = iVar11 + uVar2;
          } while (uVar8 != uVar12);
        }
      }
      local_50 = local_50 + 1;
      basisu::gpu_image::unpack((image *)(*(long *)(this + 0x528) + lVar13));
    } while ((uint)local_50 < *(uint *)(this + 0x328));
  }
  return;
}



/* basisu::basis_compressor::extract_frontend_texture_data() */

undefined8 __thiscall
basisu::basis_compressor::extract_frontend_texture_data(basis_compressor *this)

{
  if (this[0xdc] == (basis_compressor)0x0) {
    return 1;
  }
  extract_frontend_texture_data(this);
  return 1;
}



/* basisu::vector<basisu::image>::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<basisu::image> const&)
   [clone .isra.0] */

void __thiscall
basisu::vector<basisu::image>::operator=(vector<basisu::image> *this,vector *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *__ptr;
  uint uVar6;
  
  if (this == (vector<basisu::image> *)param_1) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 8);
  if (*(uint *)(this + 0xc) < uVar6) {
    pvVar4 = *(void **)this;
    if (pvVar4 != (void *)0x0) {
      __ptr = (void *)((ulong)*(uint *)(this + 8) * 0x20 + (long)pvVar4);
      if (pvVar4 != __ptr) {
        do {
          if (*(void **)((long)pvVar4 + 0x10) != (void *)0x0) {
            free(*(void **)((long)pvVar4 + 0x10));
          }
          pvVar4 = (void *)((long)pvVar4 + 0x20);
        } while (__ptr != pvVar4);
        __ptr = *(void **)this;
      }
      free(__ptr);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      uVar6 = *(uint *)(param_1 + 8);
    }
    basisu::elemental_vector::increase_capacity
              ((uint)this,SUB41(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
  }
  else {
    resize(this,0,false);
  }
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = *(undefined8 **)this;
  puVar5 = *(undefined8 **)param_1;
  if (iVar2 != 0) {
    puVar1 = puVar3 + (ulong)(iVar2 - 1) * 4 + 4;
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      if (puVar3 != puVar5) {
        *puVar3 = *puVar5;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
        if (puVar3 + 2 != puVar5 + 2) {
          uVar6 = *(uint *)(puVar5 + 3);
          if (uVar6 != 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(puVar3 + 2),SUB41(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                       false);
            if ((void *)puVar3[2] != (void *)0x0) {
              uVar6 = *(uint *)(puVar5 + 3);
              if ((void *)puVar5[2] == (void *)0x0) goto LAB_0011116e;
              memcpy((void *)puVar3[2],(void *)puVar5[2],(ulong)uVar6 * 4);
            }
            uVar6 = *(uint *)(puVar5 + 3);
          }
LAB_0011116e:
          *(uint *)(puVar3 + 3) = uVar6;
        }
      }
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar1);
    iVar2 = *(int *)(param_1 + 8);
  }
  *(int *)(this + 8) = iVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::create_basis_file_and_transcode() */

uint __thiscall basisu::basis_compressor::create_basis_file_and_transcode(basis_compressor *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined *puVar18;
  byte bVar19;
  basis_compressor *pbVar20;
  long in_FS_OFFSET;
  float fVar21;
  double dVar22;
  float fVar23;
  double local_3c8;
  gpu_image *local_3b8;
  interval_timer local_3a8 [32];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  int iStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  int iStack_36c;
  void *local_368;
  ulong local_360;
  long local_358 [99];
  long local_40;
  
  pbVar20 = this + 0x7b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::create_basis_file_and_transcode\n");
  if (*this == (basis_compressor)0x0) {
    pbVar20 = this + 0x578;
  }
  uVar5 = basisu::basisu_file::init
                    (this + 0x688,pbVar20,*(undefined4 *)(this + 0x154),
                     *(undefined4 *)(this + 0x158),*(undefined4 *)(this + 0x15c),this[0x88],
                     *(undefined4 *)(this + 0x160));
  if ((char)uVar5 == '\0') {
    basisu::error_printf
              ("basis_compressor::create_basis_file_and_transcode: basisu_backend:init() failed!\n")
    ;
  }
  else {
    vector<unsigned_char>::operator=
              ((vector<unsigned_char> *)(this + 0x788),(vector *)(this + 0x6e8));
    uVar9 = (ulong)*(uint *)(this + 0x328);
    if (*(uint *)(this + 0x328) == 0) {
      fVar23 = 0.0;
    }
    else {
      uVar12 = 0;
      piVar6 = (int *)(*(long *)(this + 800) + 4);
      piVar8 = piVar6 + uVar9 * 0xc;
      do {
        iVar2 = *piVar6;
        piVar1 = piVar6 + 1;
        piVar6 = piVar6 + 0xc;
        uVar12 = (ulong)(uint)((int)uVar12 + iVar2 * *piVar1);
      } while (piVar6 != piVar8);
      fVar23 = (float)uVar12;
      uVar9 = uVar12;
    }
    uVar16 = *(uint *)(this + 0x6f0);
    *(undefined8 *)(this + 0x318) = 0;
    fVar21 = (float)uVar16 * __LC165;
    *(uint *)(this + 0x310) = uVar16;
    basisu::debug_printf
              ("Total .basis output file size: %u, %3.3f bits/texel\n",(double)(fVar21 / fVar23),
               (ulong)uVar16);
    if (this[0x2c4] == (basis_compressor)0x0) goto LAB_0011135c;
    basisu::interval_timer::interval_timer(local_3a8);
    basisu::interval_timer::start();
    basist::basisu_transcoder_init();
    dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
    basisu::debug_printf("basist::basisu_transcoder_init: Took %f ms\n",dVar22 * _LC216);
    basist::basisu_transcoder::basisu_transcoder((basisu_transcoder *)local_358);
    cVar3 = basist::basisu_transcoder::validate_file_checksums
                      ((basisu_transcoder *)local_358,(uint)*(undefined8 *)(this + 0x6e8),
                       SUB41(*(undefined4 *)(this + 0x6f0),0));
    if (cVar3 == '\0') {
      basisu::error_printf("decoder.validate_file_checksums() failed!\n");
    }
    else {
      vector<basisu::gpu_image>::resize
                ((vector<basisu::gpu_image> *)(this + 0x718),(ulong)*(uint *)(this + 0x328),false);
      if (this[2] == (basis_compressor)0x0) {
        vector<basisu::image>::resize
                  ((vector<basisu::image> *)(this + 0x728),(ulong)*(uint *)(this + 0x328),false);
        vector<basisu::gpu_image>::resize
                  ((vector<basisu::gpu_image> *)(this + 0x738),(ulong)*(uint *)(this + 0x328),false)
        ;
        vector<basisu::image>::resize
                  ((vector<basisu::image> *)(this + 0x748),(ulong)*(uint *)(this + 0x328),false);
      }
      else {
        vector<basisu::imagef>::resize
                  ((vector<basisu::imagef> *)(this + 0x758),(ulong)*(uint *)(this + 0x328),false);
        vector<basisu::gpu_image>::resize
                  ((vector<basisu::gpu_image> *)(this + 0x768),(ulong)*(uint *)(this + 0x328),false)
        ;
        vector<basisu::imagef>::resize
                  ((vector<basisu::imagef> *)(this + 0x778),(ulong)*(uint *)(this + 0x328),false);
      }
      basisu::interval_timer::start();
      if (*(long *)(this + 0x228) != 0) {
        local_358[0] = *(long *)(this + 0x228);
      }
      cVar3 = basist::basisu_transcoder::start_transcoding
                        ((basisu_transcoder *)local_358,(uint)*(undefined8 *)(this + 0x6e8));
      if (cVar3 != '\0') {
        dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
        basisu::debug_printf
                  ("basisu_compressor::start_transcoding() took %3.3fms\n",dVar22 * _LC216);
        if (*(int *)(this + 0x328) == 0) {
          local_3c8 = 0.0;
        }
        else {
          uVar12 = 0;
          local_3c8 = 0.0;
          do {
            if (this[2] == (basis_compressor)0x0) {
              bVar14 = -(*this != (basis_compressor)0x0) & 0x16;
              bVar19 = -(*this != (basis_compressor)0x0) & 0x21;
            }
            else {
              bVar14 = 10;
              bVar19 = 0x23;
            }
            uStack_380 = 0;
            iStack_37c = 0;
            local_388 = 0xffffffff;
            uStack_384 = 0;
            lVar10 = uVar12 * 0x30;
            iStack_378 = 0;
            uStack_374 = 0;
            local_370 = 0;
            iStack_36c = 0;
            local_360 = 0;
            local_368 = (void *)0x0;
            gpu_image::init((gpu_image *)&local_388,bVar14,
                            *(undefined4 *)(*(long *)(this + 800) + lVar10 + 0xc),
                            *(undefined4 *)(*(long *)(this + 800) + lVar10 + 0x10));
            basisu::interval_timer::start();
            cVar3 = basist::basisu_transcoder::transcode_slice
                              ((basisu_transcoder *)local_358,*(undefined8 *)(this + 0x6e8),
                               *(undefined4 *)(this + 0x6f0),uVar12 & 0xffffffff,local_368,
                               *(int *)(*(long *)(this + 800) + lVar10 + 0x14) *
                               *(int *)(*(long *)(this + 800) + lVar10 + 0x18),bVar19,
                               (-(uint)(*this == (basis_compressor)0x0) & 0xfffffff8) + 0x10,0,0,0,0
                               ,0,0xffffffffffffffff,0xffffffffffffffff);
            if (cVar3 == '\0') {
              basisu::error_printf("Transcoding failed on slice %u!\n",uVar12 & 0xffffffff);
              goto joined_r0x00111815;
            }
            dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
            local_3c8 = dVar22 + local_3c8;
            if (*(int *)pbVar20 == 0) {
              sVar4 = basist::crc16(local_368,
                                    (ulong)(uint)(iStack_378 * iStack_37c * iStack_36c * 8),0);
              if (sVar4 != *(short *)(*(long *)(pbVar20 + 0x60) + uVar12 * 2)) {
                basisu::error_printf("Decoded image data CRC check failed on slice %u!\n");
                goto joined_r0x00111815;
              }
              basisu::debug_printf("Decoded image data CRC check succeeded on slice %i\n");
            }
            puVar11 = (undefined4 *)(lVar10 + *(long *)(this + 0x718));
            *(ulong *)(puVar11 + 1) = CONCAT44(uStack_380,uStack_384);
            *(ulong *)(puVar11 + 3) = CONCAT44(iStack_378,iStack_37c);
            *puVar11 = local_388;
            *(ulong *)(puVar11 + 5) = CONCAT44(local_370,uStack_374);
            puVar11[7] = iStack_36c;
            if ((void **)(puVar11 + 8) == &local_368) {
LAB_001116cd:
              if (local_368 != (void *)0x0) {
                free(local_368);
              }
            }
            else {
              uVar17 = local_360 & 0xffffffff;
              pvVar7 = *(void **)(puVar11 + 8);
              if ((uint)puVar11[0xb] < (uint)local_360) {
                if (pvVar7 != (void *)0x0) {
                  free(pvVar7);
                  *(undefined8 *)(puVar11 + 8) = 0;
                  *(undefined8 *)(puVar11 + 10) = 0;
                  uVar17 = local_360 & 0xffffffff;
                }
                basisu::elemental_vector::increase_capacity
                          ((uint)(puVar11 + 8),SUB81(uVar17,0),0,
                           (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
                uVar17 = local_360 & 0xffffffff;
                pvVar7 = *(void **)(puVar11 + 8);
              }
              else if (puVar11[10] != 0) {
                puVar11[10] = 0;
                uVar17 = local_360 & 0xffffffff;
              }
              uVar15 = (int)uVar17;
              if (pvVar7 == (void *)0x0) {
LAB_001116ca:
                puVar11[10] = uVar15;
                goto LAB_001116cd;
              }
              if (local_368 != (void *)0x0) {
                memcpy(pvVar7,local_368,uVar17 << 3);
                uVar15 = (uint)local_360;
                goto LAB_001116ca;
              }
              puVar11[10] = (int)uVar17;
            }
            uVar12 = uVar12 + 1;
          } while ((uint)uVar12 < *(uint *)(this + 0x328));
          uVar5 = uVar5 & 0xff;
        }
        basisu::interval_timer::start();
        if (this[2] == (basis_compressor)0x0) {
          cVar3 = basist::basis_is_format_supported(6,1);
          if (((cVar3 != '\0') && (cVar3 = basist::basis_is_format_supported(6,0), cVar3 != '\0'))
             && (*(int *)(this + 0x328) != 0)) {
            uVar12 = 0;
            do {
              local_3b8 = (gpu_image *)&local_388;
              uStack_380 = 0;
              iStack_37c = 0;
              local_388 = 0xffffffff;
              uStack_384 = 0;
              lVar10 = uVar12 * 0x30;
              iStack_378 = 0;
              uStack_374 = 0;
              local_370 = 0;
              iStack_36c = 0;
              local_360 = 0;
              local_368 = (void *)0x0;
              gpu_image::init(local_3b8,0xb,*(undefined4 *)(*(long *)(this + 800) + lVar10 + 0xc),
                              *(undefined4 *)(*(long *)(this + 800) + lVar10 + 0x10));
              cVar3 = basist::basisu_transcoder::transcode_slice
                                ((basisu_transcoder *)local_358,*(undefined8 *)(this + 0x6e8),
                                 *(undefined4 *)(this + 0x6f0),uVar12 & 0xffffffff,local_368,
                                 *(int *)(*(long *)(this + 800) + lVar10 + 0x14) *
                                 *(int *)(*(long *)(this + 800) + lVar10 + 0x18),8,0x10,0,0,0,0,0,
                                 0xffffffffffffffff,0xffffffffffffffff);
              if (cVar3 == '\0') {
                basisu::error_printf("Transcoding failed to BC7 on slice %u!\n",uVar12 & 0xffffffff)
                ;
                goto joined_r0x00111815;
              }
              puVar11 = (undefined4 *)(lVar10 + *(long *)(this + 0x738));
              *(ulong *)(puVar11 + 1) = CONCAT44(uStack_380,uStack_384);
              *(ulong *)(puVar11 + 3) = CONCAT44(iStack_378,iStack_37c);
              *puVar11 = local_388;
              *(ulong *)(puVar11 + 5) = CONCAT44(local_370,uStack_374);
              puVar11[7] = iStack_36c;
              if ((void **)(puVar11 + 8) == &local_368) {
LAB_00111c4b:
                if (local_368 != (void *)0x0) {
                  free(local_368);
                }
              }
              else {
                pvVar7 = *(void **)(puVar11 + 8);
                if ((uint)puVar11[0xb] < (uint)local_360) {
                  if (pvVar7 != (void *)0x0) {
                    free(pvVar7);
                    *(undefined8 *)(puVar11 + 8) = 0;
                    *(undefined8 *)(puVar11 + 10) = 0;
                  }
                  basisu::elemental_vector::increase_capacity
                            ((uint)(puVar11 + 8),SUB41((uint)local_360,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
                  pvVar7 = *(void **)(puVar11 + 8);
                }
                else if (puVar11[10] != 0) {
                  puVar11[10] = 0;
                }
                uVar16 = (uint)local_360;
                if (pvVar7 == (void *)0x0) {
LAB_00111c48:
                  puVar11[10] = uVar16;
                  goto LAB_00111c4b;
                }
                if (local_368 != (void *)0x0) {
                  memcpy(pvVar7,local_368,(ulong)(uint)local_360 << 3);
                  uVar16 = (uint)local_360;
                  goto LAB_00111c48;
                }
                puVar11[10] = (uint)local_360;
              }
              uVar12 = uVar12 + 1;
            } while ((uint)uVar12 < *(uint *)(this + 0x328));
          }
        }
        else {
          uVar12 = 0;
          if (*(int *)(this + 0x328) != 0) {
            do {
              uStack_380 = 0;
              iStack_37c = 0;
              local_388 = 0xffffffff;
              uStack_384 = 0;
              lVar10 = uVar12 * 0x30;
              iStack_378 = 0;
              uStack_374 = 0;
              local_370 = 0;
              iStack_36c = 0;
              local_360 = 0;
              local_368 = (void *)0x0;
              gpu_image::init((gpu_image *)&local_388,0xd,
                              *(undefined4 *)(*(long *)(this + 800) + lVar10 + 0xc),
                              *(undefined4 *)(*(long *)(this + 800) + lVar10 + 0x10));
              basisu::interval_timer::start();
              cVar3 = basist::basisu_transcoder::transcode_slice
                                ((basisu_transcoder *)local_358,*(undefined8 *)(this + 0x6e8),
                                 *(undefined4 *)(this + 0x6f0),uVar12 & 0xffffffff,local_368,
                                 *(int *)(*(long *)(this + 800) + lVar10 + 0x14) *
                                 *(int *)(*(long *)(this + 800) + lVar10 + 0x18),0x24,0x10,0,0,0,0,0
                                 ,0xffffffffffffffff,0xffffffffffffffff);
              if (cVar3 == '\0') {
                basisu::error_printf
                          ("Transcoding failed to ASTC HDR on slice %u!\n",uVar12 & 0xffffffff);
joined_r0x00111815:
                if (local_368 != (void *)0x0) {
                  free(local_368);
                }
                goto LAB_0011173c;
              }
              puVar11 = (undefined4 *)(lVar10 + *(long *)(this + 0x768));
              *(ulong *)(puVar11 + 1) = CONCAT44(uStack_380,uStack_384);
              *(ulong *)(puVar11 + 3) = CONCAT44(iStack_378,iStack_37c);
              *puVar11 = local_388;
              *(ulong *)(puVar11 + 5) = CONCAT44(local_370,uStack_374);
              puVar11[7] = iStack_36c;
              if ((void **)(puVar11 + 8) == &local_368) {
LAB_001118c2:
                if (local_368 != (void *)0x0) {
                  free(local_368);
                }
              }
              else {
                pvVar7 = *(void **)(puVar11 + 8);
                if ((uint)puVar11[0xb] < (uint)local_360) {
                  if (pvVar7 != (void *)0x0) {
                    free(pvVar7);
                    *(undefined8 *)(puVar11 + 8) = 0;
                    *(undefined8 *)(puVar11 + 10) = 0;
                  }
                  basisu::elemental_vector::increase_capacity
                            ((uint)(puVar11 + 8),SUB41((uint)local_360,0),0,
                             (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
                  pvVar7 = *(void **)(puVar11 + 8);
                }
                else if (puVar11[10] != 0) {
                  puVar11[10] = 0;
                }
                uVar16 = (uint)local_360;
                if (pvVar7 == (void *)0x0) {
LAB_001118bf:
                  puVar11[10] = uVar16;
                  goto LAB_001118c2;
                }
                if (local_368 != (void *)0x0) {
                  memcpy(pvVar7,local_368,(ulong)(uint)local_360 << 3);
                  uVar16 = (uint)local_360;
                  goto LAB_001118bf;
                }
                puVar11[10] = (uint)local_360;
              }
              uVar12 = uVar12 + 1;
            } while ((uint)uVar12 < *(uint *)(this + 0x328));
            uVar5 = uVar5 & 0xff;
          }
        }
        lVar10 = 0;
        dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
        if (*(int *)(this + 0x328) != 0) {
          do {
            lVar13 = lVar10 * 0x30;
            if (this[2] == (basis_compressor)0x0) {
              basisu::gpu_image::unpack((image *)(*(long *)(this + 0x718) + lVar13));
              if (*(int *)((image *)(lVar13 + *(long *)(this + 0x738)) + 4) != 0) {
                basisu::gpu_image::unpack((image *)(lVar13 + *(long *)(this + 0x738)));
              }
            }
            else {
              basisu::gpu_image::unpack_hdr((imagef *)(*(long *)(this + 0x718) + lVar13));
              basisu::gpu_image::unpack_hdr((imagef *)(*(long *)(this + 0x768) + lVar13));
            }
            lVar10 = lVar10 + 1;
          } while ((uint)lVar10 < *(uint *)(this + 0x328));
        }
        puVar18 = &_LC210;
        if ((this[2] == (basis_compressor)0x0) &&
           (puVar18 = &_LC211, *this != (basis_compressor)0x0)) {
          puVar18 = &_LC212;
        }
        basisu::debug_printf
                  ("Transcoded to %s in %3.3fms, %f texels/sec\n",_LC216 * local_3c8,
                   (double)uVar9 / local_3c8,puVar18);
        if (dVar22 != 0.0) {
          basisu::debug_printf
                    ("Alternate transcode in %3.3fms, %f texels/sec\n",_LC216 * dVar22,
                     (double)uVar9 / dVar22);
        }
        basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder
                  ((basisu_lowlevel_etc1s_transcoder *)local_358);
        goto LAB_0011135c;
      }
      basisu::error_printf("decoder.start_transcoding() failed!\n");
    }
LAB_0011173c:
    basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder
              ((basisu_lowlevel_etc1s_transcoder *)local_358);
  }
  uVar5 = 0;
LAB_0011135c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<basisu::imagef>::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<basisu::imagef> const&)
   [clone .isra.0] */

void __thiscall
basisu::vector<basisu::imagef>::operator=(vector<basisu::imagef> *this,vector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *__ptr;
  uint uVar10;
  
  if (this != (vector<basisu::imagef> *)param_1) {
    uVar10 = *(uint *)(param_1 + 8);
    if (*(uint *)(this + 0xc) < uVar10) {
      pvVar8 = *(void **)this;
      if (pvVar8 != (void *)0x0) {
        __ptr = (void *)((ulong)*(uint *)(this + 8) * 0x20 + (long)pvVar8);
        if (pvVar8 != __ptr) {
          do {
            if (*(void **)((long)pvVar8 + 0x10) != (void *)0x0) {
              free(*(void **)((long)pvVar8 + 0x10));
            }
            pvVar8 = (void *)((long)pvVar8 + 0x20);
          } while (__ptr != pvVar8);
          __ptr = *(void **)this;
        }
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar10 = *(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar10,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
    }
    else {
      resize(this,0,false);
    }
    iVar5 = *(int *)(param_1 + 8);
    puVar7 = *(undefined8 **)this;
    puVar9 = *(undefined8 **)param_1;
    if (iVar5 != 0) {
      puVar1 = puVar7 + (ulong)(iVar5 - 1) * 4 + 4;
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        if (puVar9 != puVar7) {
          *puVar7 = *puVar9;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
          if (puVar7 + 2 != puVar9 + 2) {
            uVar10 = *(uint *)(puVar9 + 3);
            if (uVar10 != 0) {
              basisu::elemental_vector::increase_capacity
                        ((uint)(puVar7 + 2),SUB41(uVar10,0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x10,true);
              uVar10 = *(uint *)(puVar9 + 3);
              lVar2 = puVar7[2];
              lVar3 = puVar9[2];
              if (uVar10 != 0) {
                lVar6 = 0;
                do {
                  uVar4 = ((undefined8 *)(lVar3 + lVar6))[1];
                  *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
                  ((undefined8 *)(lVar2 + lVar6))[1] = uVar4;
                  lVar6 = lVar6 + 0x10;
                } while ((ulong)uVar10 << 4 != lVar6);
              }
            }
            *(uint *)(puVar7 + 3) = uVar10;
          }
        }
        puVar7 = puVar7 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar7 != puVar1);
      iVar5 = *(int *)(param_1 + 8);
    }
    *(int *)(this + 8) = iVar5;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::read_source_images() */

undefined8 __thiscall basisu::basis_compressor::read_source_images(basis_compressor *this)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  basis_compressor bVar4;
  undefined1 uVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  long *plVar22;
  long lVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  int *piVar29;
  basis_compressor bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 **ppuVar34;
  undefined8 *puVar35;
  ulong uVar36;
  void *pvVar37;
  imagef *piVar38;
  undefined4 *puVar39;
  int iVar40;
  char *pcVar41;
  void *pvVar42;
  undefined4 *puVar43;
  imagef *piVar44;
  uint uVar45;
  undefined4 uVar46;
  image *piVar47;
  int iVar48;
  ulong uVar49;
  imagef *piVar50;
  undefined4 *puVar51;
  ulong uVar52;
  undefined8 uVar53;
  image *piVar54;
  undefined1 (*pauVar55) [16];
  long lVar56;
  long in_FS_OFFSET;
  bool bVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  ulong local_1d0;
  undefined8 local_1c8;
  uint local_1bc;
  ulong local_1a8;
  int local_190;
  uint local_188;
  uint local_184;
  ulong local_168;
  void *local_138;
  ulong local_130;
  void *local_128;
  ulong local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  ulong local_e0;
  undefined4 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basis_compressor::read_source_images\n");
  if (this[0xd8] == (basis_compressor)0x0) {
    if (this[2] == (basis_compressor)0x0) {
      uVar45 = *(uint *)(this + 0x30);
    }
    else {
      uVar45 = *(uint *)(this + 0x40);
    }
  }
  else {
    uVar45 = *(uint *)(this + 0x10);
  }
  if (uVar45 == 0) {
    uVar53 = 0;
    basisu::debug_printf("basis_compressor::read_source_images: No source images to process\n");
    goto LAB_0011326e;
  }
  vector<basisu::image_stats>::resize((vector<basisu::image_stats> *)(this + 0x300),0,false);
  if (*(int *)(this + 0x328) != 0) {
    *(undefined4 *)(this + 0x328) = 0;
  }
  vector<basisu::image>::resize((vector<basisu::image> *)(this + 0x2e0),0,false);
  vector<basisu::imagef>::resize((vector<basisu::imagef> *)(this + 0x2f0),0,false);
  this[0x828] = (basis_compressor)0x0;
  *(undefined4 *)(this + 0x330) = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  uVar52 = 0;
  do {
    uVar36 = uVar52;
    local_c8 = (undefined4 *)0x0;
    local_c0 = 0;
    lVar56 = uVar36 * 0x20;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (undefined4 *)0x0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    if (this[0xd8] != (basis_compressor)0x0) {
      pcVar41 = *(char **)(*(long *)(this + 8) + lVar56);
      if (this[2] == (basis_compressor)0x0) {
        cVar12 = basisu::load_image(pcVar41,(image *)&local_c8);
        if (cVar12 != '\0') {
LAB_0011216d:
          if (this[2] == (basis_compressor)0x0) {
            uVar31 = (uint)local_c8;
            uVar32 = local_c8._4_4_;
            if (this[0x8a] != (basis_compressor)0x0) {
LAB_001130b0:
              __printf_chk(2,"Read source image \"%s\", %ux%u\n",pcVar41);
              if (this[2] != (basis_compressor)0x0) goto LAB_00112198;
            }
            if (((uint)uVar36 < *(uint *)(this + 0x20)) &&
               (((undefined8 *)(lVar56 + *(long *)(this + 0x18)))[1] != 0)) {
              pcVar7 = *(char **)(lVar56 + *(long *)(this + 0x18));
              local_88 = (undefined4 *)0x0;
              local_80 = 0;
              local_78 = (void *)0x0;
              local_70 = 0;
              cVar12 = basisu::load_image(pcVar7,(image *)&local_88);
              if (cVar12 == '\0') {
                basisu::error_printf("Failed reading source image: %s\n",pcVar7);
                if (local_78 != (void *)0x0) {
                  free(local_78);
                }
                goto LAB_0011330d;
              }
              __printf_chk(2,"Read source alpha image \"%s\", %ux%u\n",pcVar7,
                           (ulong)local_88 & 0xffffffff,local_88._4_4_);
              image::crop((image *)&local_88,uVar31,uVar32,0xffffffff,(color_rgba *)&g_black_color,
                          true);
              if ((uVar32 != 0) && (uVar13 = 0, uVar31 != 0)) {
                do {
                  uVar26 = 0;
                  do {
                    pbVar1 = (byte *)((long)local_78 + (ulong)((int)local_80 * uVar13 + uVar26) * 4)
                    ;
                    uVar27 = (uint)local_c0 * uVar13 + uVar26;
                    uVar26 = uVar26 + 1;
                    *(char *)((long)local_b8 + (ulong)uVar27 * 4 + 3) =
                         (char)((uint)pbVar1[1] * 0xb715 + 0x8000 + (uint)*pbVar1 * 0x3672 +
                                (uint)pbVar1[2] * 0x1279 >> 0x10);
                  } while (uVar26 != uVar31);
                  uVar13 = uVar13 + 1;
                } while (uVar32 != uVar13);
              }
              if (local_78 != (void *)0x0) {
                free(local_78);
              }
              bVar30 = this[2];
              goto joined_r0x001121b2;
            }
LAB_00112827:
            if (this[0xea] != (basis_compressor)0x0) goto LAB_00112adc;
            goto LAB_00112835;
          }
          uVar31 = (uint)local_a8;
          uVar32 = local_a8._4_4_;
          if (this[0x8a] != (basis_compressor)0x0) goto LAB_001130b0;
LAB_00112198:
          clean_hdr_image(this,(imagef *)&local_a8);
          bVar30 = this[2];
joined_r0x001121b2:
          if (bVar30 == (basis_compressor)0x0) goto LAB_00112827;
          if ((*(short *)(this + 0xe6) != 0x100) || (*(short *)(this + 0xe8) != 0x302))
          goto LAB_001121c8;
          uVar52 = (ulong)local_a8 & 0xffffffff;
          goto LAB_001122a4;
        }
        basisu::error_printf("Failed reading source image: %s\n",pcVar41);
      }
      else {
        cVar12 = basisu::load_image_hdr(pcVar41,(imagef *)&local_a8,(bool)this[0x2c6]);
        fVar61 = _LC8;
        if (cVar12 != '\0') {
          if (local_a8._4_4_ != 0) {
            uVar28 = (ulong)local_a8 & 0xffffffff;
            uVar52 = 0;
            iVar25 = 0;
            do {
              iVar40 = (int)uVar52;
              if ((uint)local_a8 != 0) {
                do {
                  uVar31 = (int)uVar52 + 1;
                  *(float *)((long)local_98 + uVar52 * 0x10 + 0xc) = fVar61;
                  uVar52 = (ulong)uVar31;
                } while ((uint)uVar28 != uVar31);
              }
              iVar25 = iVar25 + 1;
              uVar52 = (ulong)(iVar40 + (uint)local_a0);
              uVar28 = (ulong)((uint)uVar28 + (uint)local_a0);
            } while (iVar25 != local_a8._4_4_);
          }
          goto LAB_0011216d;
        }
LAB_00114f9a:
        basisu::error_printf("Failed reading source image: %s\n",pcVar41);
      }
LAB_0011330d:
      if (local_98 != (void *)0x0) {
        free(local_98);
      }
      if (local_b8 != (void *)0x0) {
        free(local_b8);
      }
      goto LAB_00113331;
    }
    if (this[2] != (basis_compressor)0x0) {
      piVar38 = (imagef *)(lVar56 + *(long *)(this + 0x38));
      if (piVar38 != (imagef *)&local_a8) {
        local_a8 = *(undefined4 **)piVar38;
        local_a0 = (ulong)*(uint *)(piVar38 + 8);
        if ((imagef *)&local_98 != piVar38 + 0x10) {
          if (*(int *)(piVar38 + 0x18) == 0) {
LAB_00114e18:
            uVar31 = 0;
          }
          else {
            basisu::elemental_vector::increase_capacity
                      ((uint)(imagef *)&local_98,SUB41(*(int *)(piVar38 + 0x18),0),0,
                       (_func_void_void_ptr_void_ptr_uint *)0x10,true);
            uVar31 = *(uint *)(piVar38 + 0x18);
            lVar56 = *(long *)(piVar38 + 0x10);
            if (uVar31 == 0) goto LAB_00114e18;
            lVar18 = 0;
            do {
              puVar17 = (undefined4 *)(lVar56 + lVar18);
              uVar60 = puVar17[1];
              uVar46 = puVar17[2];
              uVar3 = puVar17[3];
              puVar39 = (undefined4 *)((long)local_98 + lVar18);
              *puVar39 = *puVar17;
              puVar39[1] = uVar60;
              puVar39[2] = uVar46;
              puVar39[3] = uVar3;
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar31 << 4 != lVar18);
          }
          local_90 = CONCAT44(local_90._4_4_,uVar31);
        }
      }
      pcVar41 = "";
      clean_hdr_image(this,(imagef *)&local_a8);
      bVar30 = this[2];
      goto joined_r0x001121b2;
    }
    puVar16 = (undefined8 *)(lVar56 + *(long *)(this + 0x28));
    if (puVar16 != &local_c8) {
      local_c8 = (undefined4 *)*puVar16;
      local_c0 = (ulong)*(uint *)(puVar16 + 1);
      if ((&local_b8 != (void **)(puVar16 + 2)) && (*(int *)(puVar16 + 3) != 0)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_b8,SUB41(*(int *)(puVar16 + 3),0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        if (local_b8 == (void *)0x0) {
LAB_0011322f:
          uVar31 = *(uint *)(puVar16 + 3);
        }
        else {
          uVar31 = *(uint *)(puVar16 + 3);
          if ((void *)puVar16[2] != (void *)0x0) {
            memcpy(local_b8,(void *)puVar16[2],(ulong)uVar31 << 2);
            goto LAB_0011322f;
          }
        }
        local_b0 = CONCAT44(local_b0._4_4_,uVar31);
        bVar30 = this[2];
        pcVar41 = "";
        goto joined_r0x001121b2;
      }
    }
    local_b0 = 0;
    pcVar41 = "";
    if (this[0xea] == (basis_compressor)0x0) {
LAB_00112835:
      if (*(short *)(this + 0xe6) != 0x100) goto LAB_00112845;
      bVar30 = this[2];
LAB_00112feb:
      if (*(short *)(this + 0xe8) != 0x302) goto LAB_00112afe;
      if (bVar30 == (basis_compressor)0x0) {
        if (this[0xe2] != (basis_compressor)0x0) goto LAB_00112287;
        goto LAB_00113011;
      }
    }
    else {
LAB_00112adc:
      image::renormalize_normal_map((image *)&local_c8);
      bVar30 = this[2];
      if (*(short *)(this + 0xe6) == 0x100) goto LAB_00112feb;
LAB_00112afe:
      if (bVar30 == (basis_compressor)0x0) {
LAB_00112845:
        uVar31 = 0;
        if (local_c8._4_4_ != 0) {
          do {
            uVar32 = 0;
            if ((uint)local_c8 != 0) {
              do {
                uVar13 = (uint)local_c0 * uVar31 + uVar32;
                uVar32 = uVar32 + 1;
                puVar17 = (undefined4 *)((long)local_b8 + (ulong)uVar13 * 4);
                *puVar17 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                       ((long)puVar17 + (ulong)(byte)this[0xe9]),
                                                      *(undefined1 *)
                                                       ((long)puVar17 + (ulong)(byte)this[0xe8])),
                                             *(undefined1 *)
                                              ((long)puVar17 + (ulong)(byte)this[0xe7])),
                                    *(undefined1 *)((long)puVar17 + (ulong)(byte)this[0xe6]));
              } while (uVar32 < (uint)local_c8);
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < local_c8._4_4_);
        }
        bVar57 = this[0xe9] != (basis_compressor)0x3;
        bVar30 = this[2];
      }
      else {
LAB_001121c8:
        fVar61 = _LC8;
        uVar52 = (ulong)local_a8 & 0xffffffff;
        if (local_a8._4_4_ == 0) goto LAB_001122a4;
        uVar28 = 0;
        iVar25 = 0;
        do {
          iVar40 = (int)uVar28;
          if ((uint)local_a8 != 0) {
            do {
              uVar31 = (int)uVar28 + 1;
              puVar16 = (undefined8 *)(uVar28 * 0x10 + (long)local_98);
              uVar60 = *(undefined4 *)((long)puVar16 + (ulong)(byte)this[0xe7] * 4);
              uVar46 = *(undefined4 *)((long)puVar16 + (ulong)(byte)this[0xe6] * 4);
              *(undefined4 *)(puVar16 + 1) =
                   *(undefined4 *)((long)puVar16 + (ulong)(byte)this[0xe8] * 4);
              *(float *)((long)puVar16 + 0xc) = fVar61;
              *puVar16 = CONCAT44(uVar60,uVar46);
              uVar28 = (ulong)uVar31;
            } while ((uint)uVar52 != uVar31);
          }
          iVar25 = iVar25 + 1;
          uVar28 = (ulong)(iVar40 + (uint)local_a0);
          uVar52 = (ulong)((uint)uVar52 + (uint)local_a0);
        } while (iVar25 != local_a8._4_4_);
        bVar57 = false;
        bVar30 = this[2];
      }
      if (bVar30 == (basis_compressor)0x0) {
        if ((this[0xe2] != (basis_compressor)0x0) || (bVar57)) {
LAB_00112287:
          this[0x828] = (basis_compressor)0x1;
        }
        else {
LAB_00113011:
          if (this[0xe0] == (basis_compressor)0x0) {
            uVar31 = 0;
            if (local_c8._4_4_ != 0) {
              do {
                uVar32 = 0;
                if ((uint)local_c8 != 0) {
                  do {
                    uVar13 = (uint)local_c0 * uVar31 + uVar32;
                    uVar32 = uVar32 + 1;
                    *(undefined1 *)((long)local_b8 + (ulong)uVar13 * 4 + 3) = 0xff;
                  } while (uVar32 < (uint)local_c8);
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 < local_c8._4_4_);
            }
            bVar30 = this[2];
          }
          else {
            bVar30 = this[2];
            if (local_c8._4_4_ != 0) {
              uVar52 = 0;
              uVar32 = 0;
              uVar31 = (uint)local_c8;
              do {
                iVar25 = (int)uVar52;
                if ((uint)local_c8 != 0) {
                  do {
                    if (*(char *)((long)local_b8 + uVar52 * 4 + 3) != -1) {
                      this[0x828] = (basis_compressor)0x1;
                      goto LAB_0011308c;
                    }
                    uVar13 = (int)uVar52 + 1;
                    uVar52 = (ulong)uVar13;
                  } while (uVar31 != uVar13);
                }
                uVar32 = uVar32 + 1;
                uVar31 = uVar31 + (uint)local_c0;
                uVar52 = (ulong)(iVar25 + (uint)local_c0);
              } while (uVar32 != local_c8._4_4_);
            }
          }
LAB_0011308c:
          if (bVar30 != (basis_compressor)0x0) {
            uVar52 = (ulong)local_a8 & 0xffffffff;
            goto LAB_001122a4;
          }
        }
        uVar52 = (ulong)local_c8 & 0xffffffff;
        goto LAB_001122a4;
      }
    }
    uVar52 = (ulong)local_a8 & 0xffffffff;
LAB_001122a4:
    basisu::debug_printf
              ("Source image index %u filename %s %ux%u has alpha: %u\n",uVar36 & 0xffffffff,pcVar41
               ,uVar52);
    if (this[0x88] != (basis_compressor)0x0) {
      if (this[2] == (basis_compressor)0x0) {
        uVar31 = 0;
        if (local_c8._4_4_ >> 1 != 0) {
          do {
            uVar32 = 0;
            if ((uint)local_c8 != 0) {
              do {
                uVar13 = ((local_c8._4_4_ - uVar31) + -1) * (uint)local_c0 + uVar32;
                uVar26 = (uint)local_c0 * uVar31 + uVar32;
                uVar32 = uVar32 + 1;
                puVar17 = (undefined4 *)((long)local_b8 + (ulong)uVar13 * 4);
                puVar39 = (undefined4 *)((long)local_b8 + (ulong)uVar26 * 4);
                uVar60 = *puVar39;
                *puVar39 = *puVar17;
                *puVar17 = uVar60;
              } while (uVar32 < (uint)local_c8);
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < local_c8._4_4_ >> 1);
        }
      }
      else if (local_a8._4_4_ >> 1 != 0) {
        uVar32 = 0;
        iVar25 = (local_a8._4_4_ - 1) * (uint)local_a0;
        uVar31 = (uint)local_a8 + iVar25;
        iVar25 = -iVar25;
        do {
          uVar13 = uVar31 - (uint)local_a8;
          if ((uint)local_a8 != 0) {
            do {
              puVar20 = (undefined8 *)((ulong)(uVar13 + iVar25) * 0x10 + (long)local_98);
              puVar16 = (undefined8 *)((ulong)uVar13 * 0x10 + (long)local_98);
              uVar53 = *puVar20;
              uVar9 = puVar20[1];
              if (puVar16 != puVar20) {
                uVar10 = puVar16[1];
                *puVar20 = *puVar16;
                puVar20[1] = uVar10;
              }
              uVar13 = uVar13 + 1;
              *puVar16 = uVar53;
              puVar16[1] = uVar9;
            } while (uVar31 != uVar13);
          }
          uVar32 = uVar32 + 1;
          uVar31 = uVar31 - (uint)local_a0;
          iVar25 = iVar25 + (uint)local_a0 * 2;
        } while (uVar32 != local_a8._4_4_ >> 1);
      }
    }
    fVar61 = _LC8;
    uVar31 = *(uint *)(this + 0x1e8);
    if (((int)uVar31 < 1) || (uVar32 = *(uint *)(this + 0x1fc), (int)uVar32 < 1)) {
      fVar59 = *(float *)(this + 0x210);
      if (0.0 < fVar59) {
        if (this[2] != (basis_compressor)0x0) {
          fVar58 = (float)((ulong)local_a8 & 0xffffffff) * fVar59;
          if ((float)(_LC20 & (uint)fVar58) < _LC18) {
            fVar58 = (float)((uint)((float)(int)fVar58 +
                                   (float)(-(uint)((float)(int)fVar58 < fVar58) & (uint)_LC8)) |
                            ~_LC20 & (uint)fVar58);
          }
          uVar31 = (int)fVar58;
          if ((int)fVar58 < 1) {
            uVar31 = 1;
          }
          if (0x4000 < (int)uVar31) {
            uVar31 = 0x4000;
          }
          fVar59 = (float)local_a8._4_4_ * fVar59;
          if ((float)(_LC20 & (uint)fVar59) < _LC18) {
            fVar59 = (float)((uint)((float)(int)fVar59 +
                                   (float)(-(uint)((float)(int)fVar59 < fVar59) & (uint)_LC8)) |
                            ~_LC20 & (uint)fVar59);
          }
          uVar32 = (int)fVar59;
          if ((int)fVar59 < 1) {
            uVar32 = 1;
          }
          if (0x4000 < (int)uVar32) {
            uVar32 = 0x4000;
          }
          basisu::debug_printf("Resampling to %ix%i\n",(ulong)uVar31,(ulong)uVar32);
          local_88 = (undefined4 *)0x0;
          local_80 = 0;
          local_78 = (void *)0x0;
          local_70 = 0;
          local_68 = (undefined4 **)CONCAT44(_UNK_00122504,__LC98);
          uStack_60 = (undefined4 *)CONCAT44(_UNK_0012250c,_UNK_00122508);
          imagef::crop((imagef *)&local_88,uVar31,uVar32,0xffffffff,(vec *)&local_68);
          goto LAB_001124fc;
        }
        fVar58 = (float)((ulong)local_c8 & 0xffffffff) * fVar59;
        if ((float)((uint)fVar58 & _LC20) < _LC18) {
          fVar58 = (float)((uint)((float)(int)fVar58 +
                                 (float)(-(uint)((float)(int)fVar58 < fVar58) & (uint)_LC8)) |
                          ~_LC20 & (uint)fVar58);
        }
        uVar31 = (int)fVar58;
        if ((int)fVar58 < 1) {
          uVar31 = 1;
        }
        if (0x4000 < (int)uVar31) {
          uVar31 = 0x4000;
        }
        fVar59 = (float)local_c8._4_4_ * fVar59;
        if ((float)((uint)fVar59 & _LC20) < _LC18) {
          fVar59 = (float)((uint)((float)(int)fVar59 +
                                 (float)(-(uint)((float)(int)fVar59 < fVar59) & (uint)_LC8)) |
                          ~_LC20 & (uint)fVar59);
        }
        uVar32 = (int)fVar59;
        if ((int)fVar59 < 1) {
          uVar32 = 1;
        }
        if (0x4000 < (int)uVar32) {
          uVar32 = 0x4000;
        }
        basisu::debug_printf("Resampling to %ix%i\n",(ulong)uVar31,(ulong)uVar32);
        local_88 = (undefined4 *)0x0;
        local_80 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        image::crop((image *)&local_88,uVar31,uVar32,0xffffffff,(color_rgba *)&g_black_color,true);
        bVar30 = this[0xa8];
        goto LAB_00112f57;
      }
    }
    else {
      uVar52 = 0x4000;
      if ((int)uVar31 < 0x4001) {
        uVar52 = (ulong)uVar31;
      }
      uVar31 = 0x4000;
      if ((int)uVar32 < 0x4001) {
        uVar31 = uVar32;
      }
      basisu::debug_printf("Resampling to %ix%i\n",uVar52,(ulong)uVar31);
      local_88 = (undefined4 *)0x0;
      local_80 = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      if (this[2] == (basis_compressor)0x0) {
        image::crop((image *)&local_88,(uint)uVar52,uVar31,0xffffffff,(color_rgba *)&g_black_color,
                    true);
        bVar30 = this[0xa8];
        fVar61 = _LC8;
LAB_00112f57:
        basisu::image_resample
                  ((image *)&local_c8,(image *)&local_88,(bool)bVar30,"box",fVar61,false,0,4);
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_80);
        pvVar37 = local_98;
        local_c8 = local_88;
        pvVar42 = local_78;
        local_b0 = local_70;
        pvVar6 = local_b8;
      }
      else {
        local_68 = (undefined4 **)CONCAT44(_UNK_00122504,__LC98);
        uStack_60 = (undefined4 *)CONCAT44(_UNK_0012250c,_UNK_00122508);
        imagef::crop((imagef *)&local_88,(uint)uVar52,uVar31,0xffffffff,(vec *)&local_68);
        fVar61 = _LC8;
LAB_001124fc:
        basisu::image_resample((imagef *)&local_a8,(imagef *)&local_88,"box",fVar61,false,0,4);
        clean_hdr_image(this,(imagef *)&local_88);
        local_a0 = CONCAT44(local_a0._4_4_,(int)local_80);
        local_a8 = local_88;
        pvVar37 = local_78;
        local_90 = local_70;
        pvVar42 = local_b8;
        pvVar6 = local_98;
      }
      local_b8 = pvVar42;
      local_98 = pvVar37;
      if (pvVar6 != (void *)0x0) {
        free(pvVar6);
      }
    }
    uVar28 = local_120;
    uVar52 = local_130;
    if (this[2] == (basis_compressor)0x0) {
      uVar32 = (uint)local_c8;
      uVar31 = local_c8._4_4_;
    }
    else {
      uVar32 = (uint)local_a8;
      uVar31 = local_a8._4_4_;
    }
    if ((uVar32 == 0) || (uVar31 == 0)) {
      basisu::error_printf
                (
                "basis_compressor::read_source_images: Source image has a zero width and/or height!\n"
                );
      goto LAB_0011330d;
    }
    if (0x4000 < uVar32 || 0x4000 < uVar31) {
      basisu::error_printf
                ("basis_compressor::read_source_images: Source image \"%s\" is too large!\n",pcVar41
                );
      goto LAB_0011330d;
    }
    if (this[2] == (basis_compressor)0x0) {
      vector<basisu::image>::resize
                ((vector<basisu::image> *)&local_138,(ulong)((int)local_130 + 1),true);
      puVar17 = (undefined4 *)((uVar52 & 0xffffffff) * 0x20 + (long)local_138);
      uVar60 = *puVar17;
      *puVar17 = (uint)local_c8;
      uVar46 = puVar17[1];
      puVar17[1] = local_c8._4_4_;
      local_c8 = (undefined4 *)CONCAT44(uVar46,uVar60);
      uVar60 = puVar17[2];
      puVar17[2] = (uint)local_c0;
      local_c0 = CONCAT44(local_c0._4_4_,uVar60);
      pvVar6 = *(void **)(puVar17 + 4);
      *(void **)(puVar17 + 4) = local_b8;
      uVar60 = puVar17[6];
      puVar17[6] = (undefined4)local_b0;
      uVar46 = puVar17[7];
      puVar17[7] = local_b0._4_4_;
      local_b0 = CONCAT44(uVar46,uVar60);
      local_b8 = pvVar6;
    }
    else {
      vector<basisu::imagef>::resize
                ((vector<basisu::imagef> *)&local_128,(ulong)((int)local_120 + 1),true);
      puVar17 = (undefined4 *)((uVar28 & 0xffffffff) * 0x20 + (long)local_128);
      uVar60 = *puVar17;
      *puVar17 = (uint)local_a8;
      uVar46 = puVar17[1];
      puVar17[1] = local_a8._4_4_;
      local_a8 = (undefined4 *)CONCAT44(uVar46,uVar60);
      uVar60 = puVar17[2];
      puVar17[2] = (uint)local_a0;
      local_a0 = CONCAT44(local_a0._4_4_,uVar60);
      pvVar6 = *(void **)(puVar17 + 4);
      *(void **)(puVar17 + 4) = local_98;
      uVar60 = puVar17[6];
      puVar17[6] = (undefined4)local_90;
      uVar46 = puVar17[7];
      puVar17[7] = local_90._4_4_;
      local_90 = CONCAT44(uVar46,uVar60);
      local_98 = pvVar6;
    }
    local_68 = local_58;
    if (pcVar41 == (char *)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
      pcVar41 = (char *)0x0;
      goto LAB_00114f9a;
    }
    puVar17 = (undefined4 *)strlen(pcVar41);
    local_88 = puVar17;
    if (puVar17 < (undefined4 *)0x10) {
      ppuVar34 = local_58;
      if (puVar17 == (undefined4 *)0x1) {
        local_58[0] = (undefined4 *)CONCAT71(local_58[0]._1_7_,*pcVar41);
      }
      else if (puVar17 != (undefined4 *)0x0) goto LAB_00112a55;
    }
    else {
      local_68 = (undefined4 **)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_88)
      ;
      local_58[0] = local_88;
      ppuVar34 = local_68;
LAB_00112a55:
      memcpy(ppuVar34,pcVar41,(size_t)puVar17);
      ppuVar34 = local_68;
    }
    *(undefined1 *)((long)ppuVar34 + (long)local_88) = 0;
    uStack_60 = local_88;
    if (local_110._4_4_ <= (uint)local_110) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_118,(bool)((char)local_110 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x20,true);
    }
    plVar22 = local_118 + (ulong)(uint)local_110 * 4;
    *plVar22 = (long)(plVar22 + 2);
    std::__cxx11::string::_M_construct<char*>(plVar22,local_68,(long)uStack_60 + (long)local_68);
    local_110 = CONCAT44(local_110._4_4_,(uint)local_110 + 1);
    if (local_68 != local_58) {
      operator_delete(local_68,(long)local_58[0] + 1);
    }
    if (local_98 != (void *)0x0) {
      free(local_98);
    }
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
    uVar52 = uVar36 + 1;
  } while ((ulong)uVar45 != uVar36 + 1);
  if (this[2] == (basis_compressor)0x0) {
    if (*(uint *)(this + 0x50) == 0) goto LAB_00113460;
    if ((uVar45 != *(uint *)(this + 0x30)) || (*(uint *)(this + 0x30) != *(uint *)(this + 0x50))) {
      basisu::error_printf
                (
                "basis_compressor::read_source_images(): m_params.m_source_mipmap_images.size() must equal m_params.m_source_images.size()!\n"
                );
      goto LAB_00113331;
    }
    if (this[0x828] == (basis_compressor)0x0) {
      puVar16 = *(undefined8 **)(this + 0x48);
      uVar31 = 0;
      do {
        if (*(uint *)(puVar16 + 1) != 0) {
          piVar29 = (int *)*puVar16;
          piVar24 = piVar29 + (ulong)*(uint *)(puVar16 + 1) * 8;
          do {
            iVar25 = piVar29[1];
            if (iVar25 != 0) {
              iVar40 = 0;
              if (*piVar29 == 0) {
                do {
                  iVar40 = iVar40 + 1;
                } while (iVar40 != iVar25);
              }
              else {
                do {
                  uVar32 = piVar29[2] * iVar40;
                  uVar13 = uVar32 + *piVar29;
                  do {
                    if (*(char *)(*(long *)(piVar29 + 4) + (ulong)uVar32 * 4 +
                                 (ulong)(byte)this[0xe9]) != -1) {
                      this[0x828] = (basis_compressor)0x1;
                      goto LAB_00114dfa;
                    }
                    uVar32 = uVar32 + 1;
                  } while (uVar32 != uVar13);
                  iVar40 = iVar40 + 1;
                } while (iVar25 != iVar40);
              }
            }
            piVar29 = piVar29 + 8;
          } while (piVar24 != piVar29);
        }
        uVar31 = uVar31 + 1;
        puVar16 = puVar16 + 2;
      } while (uVar31 < uVar45);
      uVar52 = 0;
    }
    else {
LAB_00114dfa:
      uVar52 = 1;
    }
LAB_00113468:
    basisu::debug_printf("Any source image has alpha: %u\n",uVar52);
    local_168 = 0;
    local_184 = 0;
    do {
      local_108 = (undefined4 *)0x0;
      local_100 = 0;
      puVar16 = local_118 + local_168 * 4;
      local_f8 = (undefined4 *)0x0;
      local_f0 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)(vector *)&local_108,true,0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      if (local_f0._4_4_ < 0x20) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_f8,true,0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      }
      else if (local_f0._4_4_ != 0x20) {
        local_88 = (undefined4 *)0x0;
        local_80 = 0;
        uVar45 = 0x20;
        if (0x1f < (uint)local_f0) {
          uVar45 = (uint)local_f0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(vector<basisu::imagef> *)&local_88,SUB41(uVar45,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        vector<basisu::imagef>::operator=((vector<basisu::imagef> *)&local_88,(vector *)&local_f8);
        uVar28 = local_80;
        puVar39 = local_88;
        uVar52 = local_f0;
        puVar17 = local_f8;
        local_f8 = local_88;
        local_88 = puVar17;
        local_f0 = local_80;
        local_80 = uVar52;
        if (puVar17 != (undefined4 *)0x0) {
          puVar51 = puVar17 + (uVar52 & 0xffffffff) * 8;
          puVar43 = puVar51;
          local_f8 = puVar39;
          local_f0 = uVar28;
          for (; puVar17 != puVar51; puVar17 = puVar17 + 8) {
            if (*(void **)(puVar17 + 4) != (void *)0x0) {
              free(*(void **)(puVar17 + 4));
            }
            puVar43 = local_88;
          }
          free(puVar43);
        }
      }
      piVar54 = (image *)0x0;
      if ((int)local_130 != 0) {
        piVar54 = (image *)((long)local_138 + local_168 * 0x20);
      }
      piVar38 = (imagef *)0x0;
      if ((int)local_120 != 0) {
        piVar38 = (imagef *)(local_168 * 0x20 + (long)local_128);
      }
      if (this[2] == (basis_compressor)0x0) {
        vector<basisu::image>::resize((vector<basisu::image> *)&local_108,1,false);
      }
      else {
        vector<basisu::imagef>::resize((vector<basisu::imagef> *)&local_f8,1,false);
      }
      if (this[2] == (basis_compressor)0x0) {
        if (*(int *)(this + 0x50) == 0) {
          if (this[0xee] != (basis_compressor)0x0) {
            cVar12 = generate_mipmaps(this,piVar54,(vector *)&local_108,(bool)this[0x828]);
            goto joined_r0x00114746;
          }
        }
        else {
          plVar22 = (long *)(*(long *)(this + 0x48) + local_168 * 0x10);
          if ((int)plVar22[1] != 0) {
            lVar56 = 0;
            do {
              piVar47 = (image *)(lVar56 * 0x20 + *plVar22);
              if (((*(short *)(this + 0xe6) != 0x100) || (*(short *)(this + 0xe8) != 0x302)) &&
                 (*(int *)(piVar47 + 4) != 0)) {
                uVar45 = 0;
                do {
                  uVar31 = 0;
                  if (*(int *)piVar47 != 0) {
                    do {
                      uVar32 = *(int *)(piVar47 + 8) * uVar45 + uVar31;
                      uVar31 = uVar31 + 1;
                      puVar17 = (undefined4 *)(*(long *)(piVar47 + 0x10) + (ulong)uVar32 * 4);
                      *puVar17 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                             ((long)puVar17 +
                                                             (ulong)(byte)this[0xe9]),
                                                            *(undefined1 *)
                                                             ((long)puVar17 +
                                                             (ulong)(byte)this[0xe8])),
                                                   *(undefined1 *)
                                                    ((long)puVar17 + (ulong)(byte)this[0xe7])),
                                          *(undefined1 *)((long)puVar17 + (ulong)(byte)this[0xe6]));
                    } while (uVar31 < *(uint *)piVar47);
                  }
                  uVar45 = uVar45 + 1;
                } while (uVar45 < *(uint *)(piVar47 + 4));
              }
              lVar56 = lVar56 + 1;
              vector<basisu::image>::push_back((vector<basisu::image> *)&local_108,piVar47);
              plVar22 = (long *)(*(long *)(this + 0x48) + local_168 * 0x10);
            } while ((uint)lVar56 < *(uint *)(plVar22 + 1));
            goto LAB_001136a2;
          }
        }
LAB_00114786:
        uVar60 = *local_108;
        *local_108 = *(undefined4 *)piVar54;
        *(undefined4 *)piVar54 = uVar60;
        uVar60 = local_108[1];
        local_108[1] = *(undefined4 *)(piVar54 + 4);
        *(undefined4 *)(piVar54 + 4) = uVar60;
        uVar60 = local_108[2];
        local_108[2] = *(undefined4 *)(piVar54 + 8);
        *(undefined4 *)(piVar54 + 8) = uVar60;
        uVar53 = *(undefined8 *)(local_108 + 4);
        *(undefined8 *)(local_108 + 4) = *(undefined8 *)(piVar54 + 0x10);
        *(undefined8 *)(piVar54 + 0x10) = uVar53;
        uVar60 = local_108[6];
        local_108[6] = *(undefined4 *)(piVar54 + 0x18);
        *(undefined4 *)(piVar54 + 0x18) = uVar60;
        uVar60 = local_108[7];
        local_108[7] = *(undefined4 *)(piVar54 + 0x1c);
        *(undefined4 *)(piVar54 + 0x1c) = uVar60;
        iVar25 = (uint)local_100;
      }
      else {
        if (*(int *)(this + 0x60) == 0) {
          if (this[0xee] != (basis_compressor)0x0) {
            cVar12 = generate_mipmaps(this,piVar38,(vector *)&local_f8,(bool)this[0x828]);
joined_r0x00114746:
            if (cVar12 == '\0') {
              vector<basisu::imagef>::~vector((vector<basisu::imagef> *)&local_f8);
              vector<basisu::image>::~vector((vector<basisu::image> *)&local_108);
              goto LAB_00113331;
            }
LAB_001136a2:
            if (this[2] == (basis_compressor)0x0) goto LAB_00114786;
          }
        }
        else {
          lVar56 = 0;
          plVar22 = (long *)(local_168 * 0x10 + *(long *)(this + 0x58));
          if ((int)plVar22[1] != 0) {
            do {
              piVar44 = (imagef *)(lVar56 * 0x20 + *plVar22);
              if (((*(short *)(this + 0xe6) != 0x100) || (*(short *)(this + 0xe8) != 0x302)) &&
                 (iVar25 = *(int *)(piVar44 + 4), iVar25 != 0)) {
                iVar40 = *(int *)piVar44;
                iVar48 = 0;
                if (iVar40 == 0) {
                  do {
                    if (iVar48 + 1 == iVar25) break;
                    iVar48 = iVar48 + 2;
                  } while (iVar48 != iVar25);
                }
                else {
                  lVar18 = *(long *)(piVar44 + 0x10);
                  do {
                    uVar31 = *(int *)(piVar44 + 8) * iVar48;
                    uVar45 = uVar31 + iVar40;
                    do {
                      uVar52 = (ulong)uVar31;
                      uVar31 = uVar31 + 1;
                      puVar20 = (undefined8 *)(uVar52 * 0x10 + lVar18);
                      uVar60 = *(undefined4 *)((long)puVar20 + (ulong)(byte)this[0xe8] * 4);
                      uVar46 = *(undefined4 *)((long)puVar20 + (ulong)(byte)this[0xe7] * 4);
                      uVar3 = *(undefined4 *)((long)puVar20 + (ulong)(byte)this[0xe6] * 4);
                      *(undefined4 *)((long)puVar20 + 0xc) = 0x3f800000;
                      *(undefined4 *)(puVar20 + 1) = uVar60;
                      *puVar20 = CONCAT44(uVar46,uVar3);
                    } while (uVar45 != uVar31);
                    iVar48 = iVar48 + 1;
                  } while (iVar25 != iVar48);
                }
              }
              clean_hdr_image(this,piVar44);
              if (local_f0._4_4_ <= (uint)local_f0) {
                basisu::elemental_vector::increase_capacity
                          ((uint)&local_f8,(bool)((char)local_f0 + '\x01'),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x20,true);
              }
              piVar50 = (imagef *)(local_f8 + (ulong)(uint)local_f0 * 8);
              *(undefined8 *)piVar50 = 0;
              *(undefined4 *)(piVar50 + 8) = 0;
              *(undefined8 *)(piVar50 + 0x10) = 0;
              *(undefined8 *)(piVar50 + 0x18) = 0;
              uVar45 = (uint)local_f0;
              if (piVar44 != piVar50) {
                *(undefined8 *)piVar50 = *(undefined8 *)piVar44;
                *(undefined4 *)(piVar50 + 8) = *(undefined4 *)(piVar44 + 8);
                if (piVar50 + 0x10 != piVar44 + 0x10) {
                  uVar31 = *(uint *)(piVar44 + 0x18);
                  if (uVar31 != 0) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)(piVar50 + 0x10),SUB41(uVar31,0),0,
                               (_func_void_void_ptr_void_ptr_uint *)0x10,true);
                    uVar31 = *(uint *)(piVar44 + 0x18);
                    lVar18 = *(long *)(piVar44 + 0x10);
                    lVar8 = *(long *)(piVar50 + 0x10);
                    if (uVar31 != 0) {
                      lVar23 = 0;
                      do {
                        *(undefined1 (*) [16])(lVar8 + lVar23) =
                             *(undefined1 (*) [16])(lVar18 + lVar23);
                        lVar23 = lVar23 + 0x10;
                      } while ((ulong)uVar31 << 4 != lVar23);
                    }
                    uVar45 = (uint)local_f0;
                  }
                  *(uint *)(piVar50 + 0x18) = uVar31;
                }
              }
              lVar56 = lVar56 + 1;
              local_f0 = CONCAT44(local_f0._4_4_,uVar45 + 1);
              plVar22 = (long *)(*(long *)(this + 0x58) + local_168 * 0x10);
            } while ((uint)lVar56 < *(uint *)(plVar22 + 1));
            goto LAB_001136a2;
          }
        }
        uVar60 = *local_f8;
        *local_f8 = *(undefined4 *)piVar38;
        *(undefined4 *)piVar38 = uVar60;
        uVar60 = local_f8[1];
        local_f8[1] = *(undefined4 *)(piVar38 + 4);
        *(undefined4 *)(piVar38 + 4) = uVar60;
        uVar60 = local_f8[2];
        local_f8[2] = *(undefined4 *)(piVar38 + 8);
        *(undefined4 *)(piVar38 + 8) = uVar60;
        uVar53 = *(undefined8 *)(local_f8 + 4);
        *(undefined8 *)(local_f8 + 4) = *(undefined8 *)(piVar38 + 0x10);
        *(undefined8 *)(piVar38 + 0x10) = uVar53;
        uVar60 = local_f8[6];
        local_f8[6] = *(undefined4 *)(piVar38 + 0x18);
        *(undefined4 *)(piVar38 + 0x18) = uVar60;
        uVar60 = local_f8[7];
        local_f8[7] = *(undefined4 *)(piVar38 + 0x1c);
        *(undefined4 *)(piVar38 + 0x1c) = uVar60;
        iVar25 = (uint)local_f0;
      }
      local_e8 = (undefined4 *)0x0;
      local_e0 = 0;
      if (iVar25 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_e8,SUB41(iVar25,0),(uint)(iVar25 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        memset(local_e8 + (local_e0 & 0xffffffff),0,(ulong)(uint)(iVar25 - (int)local_e0) << 2);
        local_e0 = CONCAT44(local_e0._4_4_,iVar25);
      }
      bVar30 = this[2];
      uVar45 = 0;
      while( true ) {
        uVar31 = (uint)local_100;
        if (bVar30 != (basis_compressor)0x0) {
          uVar31 = (uint)local_f0;
        }
        if (uVar31 <= uVar45) break;
        local_e8[uVar45] = uVar45;
        uVar45 = uVar45 + 1;
      }
      if (bVar30 != (basis_compressor)0x0) {
LAB_00114709:
        local_1d0 = 0;
        goto LAB_00113ec1;
      }
      if ((this[0x828] != (basis_compressor)0x0) && (*this == (basis_compressor)0x0)) {
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0;
        local_c8 = (undefined4 *)0x0;
        local_c0 = 0;
        vector<basisu::image>::reserve
                  ((vector<basisu::image> *)&local_d8,(ulong)((uint)local_100 * 2));
        if ((uint)local_100 != 0) {
          lVar56 = 0;
          do {
            local_a8 = (undefined4 *)0x0;
            local_a0 = 0;
            piVar54 = (image *)(local_108 + lVar56 * 8);
            local_98 = (void *)0x0;
            local_90 = 0;
            if (piVar54 == (image *)&local_a8) {
              uVar60 = 0;
              iVar25 = 0;
              uVar45 = 0;
LAB_00114b40:
              local_80 = CONCAT44(local_80._4_4_,uVar45);
              uVar46 = 0;
              local_78 = (void *)0x0;
              local_70 = 0;
              local_88 = (undefined4 *)CONCAT44(iVar25,uVar60);
            }
            else {
              uVar60 = *(undefined4 *)piVar54;
              iVar25 = *(int *)(piVar54 + 4);
              local_a8 = *(undefined4 **)piVar54;
              uVar45 = *(uint *)(piVar54 + 8);
              local_a0 = (ulong)uVar45;
              if ((image *)&local_98 == piVar54 + 0x10) goto LAB_00114b40;
              uVar31 = *(uint *)(piVar54 + 0x18);
              if (uVar31 != 0) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(image *)&local_98,SUB41(uVar31,0),0,
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                if (local_98 == (void *)0x0) {
LAB_00114479:
                  uVar31 = *(uint *)(piVar54 + 0x18);
                }
                else {
                  uVar31 = *(uint *)(piVar54 + 0x18);
                  if (*(void **)(piVar54 + 0x10) != (void *)0x0) {
                    memcpy(local_98,*(void **)(piVar54 + 0x10),(ulong)uVar31 << 2);
                    goto LAB_00114479;
                  }
                }
                uVar60 = (uint)local_a8;
                iVar25 = local_a8._4_4_;
                uVar45 = (uint)local_a0;
              }
              local_90 = CONCAT44(local_90._4_4_,uVar31);
              local_78 = (void *)0x0;
              local_70 = 0;
              local_80 = CONCAT44(local_80._4_4_,uVar45);
              local_88 = (undefined4 *)CONCAT44(iVar25,uVar60);
              if (uVar31 == 0) {
                uVar46 = 0;
              }
              else {
                basisu::elemental_vector::increase_capacity
                          ((uint)&local_78,SUB41(uVar31,0),0,
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                if (local_78 == (void *)0x0) {
LAB_0011450d:
                  uVar46 = (undefined4)local_90;
                }
                else {
                  uVar46 = (undefined4)local_90;
                  if (local_98 != (void *)0x0) {
                    memcpy(local_78,local_98,(local_90 & 0xffffffff) << 2);
                    goto LAB_0011450d;
                  }
                }
                iVar25 = local_88._4_4_;
              }
            }
            local_70 = CONCAT44(local_70._4_4_,uVar46);
            uVar45 = 0;
            if (iVar25 != 0) {
              do {
                uVar31 = 0;
                if ((uint)local_88 != 0) {
                  do {
                    uVar32 = (int)local_80 * uVar45 + uVar31;
                    uVar31 = uVar31 + 1;
                    puVar2 = (undefined2 *)((long)local_78 + (ulong)uVar32 * 4);
                    uVar5 = *(undefined1 *)((long)puVar2 + 3);
                    *(undefined1 *)((long)puVar2 + 3) = 0xff;
                    *(undefined1 *)(puVar2 + 1) = uVar5;
                    *puVar2 = CONCAT11(uVar5,uVar5);
                  } while (uVar31 < (uint)local_88);
                }
                uVar45 = uVar45 + 1;
              } while (uVar45 < local_88._4_4_);
            }
            uVar45 = 0;
            if (local_a8._4_4_ != 0) {
              do {
                uVar31 = 0;
                if ((uint)local_a8 != 0) {
                  do {
                    uVar32 = (uint)local_a0 * uVar45 + uVar31;
                    uVar31 = uVar31 + 1;
                    *(undefined1 *)((long)local_98 + (ulong)uVar32 * 4 + 3) = 0xff;
                  } while (uVar31 < (uint)local_a8);
                }
                uVar45 = uVar45 + 1;
              } while (uVar45 < local_a8._4_4_);
            }
            vector<basisu::image>::push_back((vector<basisu::image> *)&local_d8,(image *)&local_a8);
            if (local_c0._4_4_ <= (uint)local_c0) {
              basisu::elemental_vector::increase_capacity
                        ((uint)&local_c8,(bool)((char)local_c0 + '\x01'),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            local_c8[(uint)local_c0] = (int)lVar56;
            local_c0._0_4_ = (uint)local_c0 + 1;
            vector<basisu::image>::push_back((vector<basisu::image> *)&local_d8,(image *)&local_88);
            if (local_c0._4_4_ <= (uint)local_c0) {
              basisu::elemental_vector::increase_capacity
                        ((uint)&local_c8,(bool)((char)(uint)local_c0 + '\x01'),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            local_c8[(uint)local_c0] = (int)lVar56;
            local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 + 1);
            if (local_78 != (void *)0x0) {
              free(local_78);
            }
            if (local_98 != (void *)0x0) {
              free(local_98);
            }
            lVar56 = lVar56 + 1;
          } while ((uint)lVar56 < (uint)local_100);
        }
        puVar39 = local_d8;
        puVar17 = local_e8;
        local_d8 = local_108;
        local_e8 = local_c8;
        uVar53 = CONCAT44(local_100._4_4_,(uint)local_100);
        local_108 = puVar39;
        local_100 = local_d0;
        local_e0 = local_c0;
        local_d0 = uVar53;
        if (puVar17 != (undefined4 *)0x0) {
          free(puVar17);
        }
        vector<basisu::image>::~vector((vector<basisu::image> *)&local_d8);
        if (this[2] != (basis_compressor)0x0) goto LAB_00114709;
      }
      local_1d0 = 0;
      if ((uint)local_100 != 0) {
LAB_00113800:
        local_1a8 = local_1d0;
        piVar54 = (image *)(local_108 + local_1d0 * 8);
        local_1c8 = *(undefined8 *)piVar54;
        iVar25 = *(int *)(piVar54 + 4);
        local_1bc = (uint)local_1c8;
        local_190 = *(int *)piVar54;
        uVar31 = (uint)((ulong)local_1c8 >> 0x20);
        uVar52 = (ulong)uVar31;
        bVar30 = this[0x828];
        uVar45 = local_1bc + 3 & 0xfffffffc;
        if (bVar30 == (basis_compressor)0x0) {
LAB_00114046:
          local_188 = 0;
        }
        else {
          bVar30 = *this;
          if (bVar30 != (basis_compressor)0x0) {
            uVar32 = 0;
            if (uVar31 == 0) {
              image::crop(piVar54,uVar45,0,0xffffffff,(color_rgba *)&g_black_color,true);
              bVar30 = (basis_compressor)0x0;
              local_188 = 0;
              goto LAB_00113a2e;
            }
            if (local_1bc == 0) {
              do {
                uVar32 = uVar32 + 1;
              } while (uVar32 != uVar31);
              bVar30 = (basis_compressor)0x0;
            }
            else {
              do {
                uVar13 = *(int *)(piVar54 + 8) * uVar32;
                uVar26 = uVar13 + local_1bc;
                do {
                  if (*(char *)(*(long *)(piVar54 + 0x10) + 3 + (ulong)uVar13 * 4) != -1) {
                    local_188 = 1;
                    goto LAB_001138bd;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar26 != uVar13);
                uVar32 = uVar32 + 1;
              } while (uVar31 != uVar32);
              bVar30 = (basis_compressor)0x0;
            }
            goto LAB_00114046;
          }
          local_188 = (uint)local_1d0 & 1;
          bVar30 = (basis_compressor)((byte)local_1d0 & 1);
        }
LAB_001138bd:
        image::crop(piVar54,uVar45,uVar31 + 3 & 0xfffffffc,0xffffffff,(color_rgba *)&g_black_color,
                    true);
        if ((local_190 != 0) && (iVar25 != 0)) {
          uVar45 = *(uint *)(piVar54 + 4);
          uVar32 = *(uint *)piVar54;
          uVar13 = uVar45;
          if (local_1bc < uVar32) {
            uVar26 = local_1bc;
            do {
              uVar27 = uVar26;
              if (local_1bc - 1 <= uVar26) {
                uVar27 = local_1bc - 1;
              }
              uVar33 = 0;
              if (uVar45 != 0) {
                do {
                  uVar13 = uVar31 - 1;
                  if (uVar33 <= uVar31 - 1) {
                    uVar13 = uVar33;
                  }
                  uVar14 = uVar45 - 1;
                  if ((int)uVar13 < (int)(uVar45 - 1)) {
                    uVar14 = uVar13;
                  }
                  if ((int)uVar13 < 0) {
                    uVar14 = 0;
                  }
                  uVar13 = uVar32 - 1;
                  if ((int)uVar27 < (int)(uVar32 - 1)) {
                    uVar13 = uVar27;
                  }
                  if ((int)uVar27 < 0) {
                    uVar13 = 0;
                  }
                  if (uVar26 < uVar32) {
                    *(undefined4 *)
                     (*(long *)(piVar54 + 0x10) +
                     (ulong)(uVar33 * *(int *)(piVar54 + 8) + uVar26) * 4) =
                         *(undefined4 *)
                          (*(long *)(piVar54 + 0x10) +
                          (ulong)(uVar13 + *(int *)(piVar54 + 8) * uVar14) * 4);
                    uVar32 = *(uint *)piVar54;
                    uVar45 = *(uint *)(piVar54 + 4);
                  }
                  uVar33 = uVar33 + 1;
                  uVar13 = uVar45;
                } while (uVar33 < uVar45);
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar32);
          }
          if (uVar31 < uVar45) {
            uVar28 = uVar52;
            do {
              uVar26 = (uint)uVar28;
              uVar45 = uVar26;
              if (uVar31 - 1 <= uVar26) {
                uVar45 = uVar31 - 1;
              }
              uVar27 = 0;
              if (uVar32 != 0) {
                do {
                  uVar33 = local_1bc - 1;
                  if (uVar27 <= local_1bc - 1) {
                    uVar33 = uVar27;
                  }
                  uVar14 = uVar13 - 1;
                  if ((int)uVar45 < (int)(uVar13 - 1)) {
                    uVar14 = uVar45;
                  }
                  if ((int)uVar45 < 0) {
                    uVar14 = 0;
                  }
                  uVar15 = uVar32 - 1;
                  if ((int)uVar33 < (int)(uVar32 - 1)) {
                    uVar15 = uVar33;
                  }
                  if ((int)uVar33 < 0) {
                    uVar15 = 0;
                  }
                  if (uVar26 < uVar13) {
                    *(undefined4 *)
                     (*(long *)(piVar54 + 0x10) +
                     (ulong)(uVar26 * *(int *)(piVar54 + 8) + uVar27) * 4) =
                         *(undefined4 *)
                          (*(long *)(piVar54 + 0x10) +
                          (ulong)(uVar15 + *(int *)(piVar54 + 8) * uVar14) * 4);
                    uVar13 = *(uint *)(piVar54 + 4);
                    uVar32 = *(uint *)piVar54;
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar32);
              }
              uVar28 = (ulong)(uVar26 + 1);
            } while (uVar26 + 1 < uVar13);
          }
        }
LAB_00113a2e:
        piVar38 = (imagef *)0x0;
LAB_00113a31:
        do {
          if (this[0x90] != (basis_compressor)0x0) {
            if (this[2] == (basis_compressor)0x0) {
              string_format_abi_cxx11_
                        ((char *)&local_68,"basis_debug_source_image_%u_slice_%u.png",
                         local_168 & 0xffffffff);
              basisu::save_png((char *)local_68,piVar54,0,0);
            }
            else {
              string_format_abi_cxx11_
                        ((char *)&local_68,"basis_debug_source_image_%u_slice_%u.exr",
                         local_168 & 0xffffffff);
              basisu::write_exr((char *)local_68,piVar38,3,0);
            }
            if (local_68 != local_58) {
              operator_delete(local_68,(long)local_58[0] + 1);
            }
          }
          uVar45 = *(uint *)(this + 0x308);
          if (this[2] == (basis_compressor)0x0) {
            uVar31 = *(uint *)(this + 0x2e8);
            uVar28 = (ulong)uVar31;
            if (uVar45 != 0xffffffff) goto LAB_00113abd;
LAB_001141a2:
            vector<basisu::image>::resize
                      ((vector<basisu::image> *)(this + 0x2e0),(ulong)uVar31 + 1,false);
          }
          else {
            uVar49 = (ulong)*(uint *)(this + 0x2f8);
            uVar28 = uVar49;
            if (uVar45 != 0xffffffff) {
LAB_00113abd:
              uVar31 = uVar45 + 1;
              lVar56 = 0x70;
              if (*(uint *)(this + 0x30c) < uVar31) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(vector<basisu::image_stats> *)(this + 0x300),SUB41(uVar31,0),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x70,true);
                uVar45 = *(uint *)(this + 0x308);
                lVar56 = (ulong)(uVar31 - uVar45) * 0x70;
              }
              plVar19 = (long *)((ulong)uVar45 * 0x70 + *(long *)(this + 0x300));
              plVar22 = (long *)((long)plVar19 + lVar56);
              for (; plVar19 != plVar22; plVar19 = plVar19 + 0xe) {
                *(undefined1 *)(plVar19 + 2) = 0;
                *plVar19 = (long)(plVar19 + 2);
                plVar19[1] = 0;
                plVar19[4] = 0;
                *(undefined1 (*) [16])(plVar19 + 5) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar19 + 7) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar19 + 9) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar19 + 0xb) = (undefined1  [16])0x0;
                *(undefined4 *)(plVar19 + 0xd) = 0;
                *(undefined1 *)((long)plVar19 + 0x6c) = 0;
              }
              *(uint *)(this + 0x308) = uVar31;
              if (this[2] == (basis_compressor)0x0) {
                uVar31 = *(uint *)(this + 0x2e8);
                goto LAB_001141a2;
              }
              uVar49 = (ulong)*(uint *)(this + 0x2f8);
            }
            if ((int)uVar49 != -1) {
              uVar45 = (int)uVar49 + 1;
              lVar56 = 0x20;
              if (*(uint *)(this + 0x2fc) < uVar45) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(vector<basisu::imagef> *)(this + 0x2f0),SUB41(uVar45,0),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x20,true);
                uVar49 = (ulong)*(uint *)(this + 0x2f8);
                lVar56 = (ulong)(uVar45 - *(uint *)(this + 0x2f8)) << 5;
              }
              puVar20 = (undefined8 *)(uVar49 * 0x20 + *(long *)(this + 0x2f0));
              puVar35 = (undefined8 *)(lVar56 + (long)puVar20);
              for (; puVar20 != puVar35; puVar20 = puVar20 + 4) {
                *puVar20 = 0;
                *(undefined4 *)(puVar20 + 1) = 0;
                puVar20[2] = 0;
                puVar20[3] = 0;
              }
              *(uint *)(this + 0x2f8) = uVar45;
            }
          }
          uVar45 = *(uint *)(this + 0x328);
          if (uVar45 != 0xffffffff) {
            uVar31 = uVar45 + 1;
            lVar56 = 0x30;
            if (*(uint *)(this + 0x32c) < uVar31) {
              basisu::elemental_vector::increase_capacity
                        ((int)this + 800,SUB41(uVar31,0),1,(_func_void_void_ptr_void_ptr_uint *)0x30
                         ,false);
              uVar45 = *(uint *)(this + 0x328);
              lVar56 = (ulong)(uVar31 - uVar45) * 0x30;
            }
            pauVar21 = (undefined1 (*) [16])((ulong)uVar45 * 0x30 + *(long *)(this + 800));
            puVar11 = *pauVar21;
            for (; pauVar21 != (undefined1 (*) [16])(puVar11 + lVar56); pauVar21 = pauVar21 + 3) {
              *pauVar21 = (undefined1  [16])0x0;
              pauVar21[1] = (undefined1  [16])0x0;
              pauVar21[2] = (undefined1  [16])0x0;
            }
            *(uint *)(this + 0x328) = uVar31;
          }
          pcVar41 = (char *)*puVar16;
          uVar49 = *(long *)(this + 0x300) + uVar28 * 0x70;
          strlen(pcVar41);
          std::__cxx11::string::_M_replace(uVar49,0,*(char **)(uVar49 + 8),(ulong)pcVar41);
          bVar4 = this[2];
          *(undefined8 *)(*(long *)(this + 0x300) + 0x20 + uVar28 * 0x70) = local_1c8;
          if (bVar4 == (basis_compressor)0x0) {
            uVar45 = *(uint *)(piVar54 + 4);
            uVar31 = *(uint *)piVar54;
          }
          else {
            uVar45 = *(uint *)(piVar38 + 4);
            uVar31 = *(uint *)piVar38;
          }
          basisu::debug_printf
                    ("****** Slice %u: mip %u, alpha_slice: %u, filename: \"%s\", original: %ux%u actual: %ux%u\n"
                     ,(ulong)(*(int *)(this + 0x328) - 1),(ulong)(uint)local_e8[local_1a8],
                     (ulong)local_188,*puVar16,(ulong)local_1bc,uVar52,(ulong)uVar31,(ulong)uVar45);
          uVar60 = *(undefined4 *)(this + 0x330);
          bVar4 = this[2];
          puVar20 = (undefined8 *)(uVar28 * 0x30 + *(long *)(this + 800));
          *(int *)(puVar20 + 1) = (int)uVar52;
          *puVar20 = CONCAT44(local_190,uVar60);
          if (bVar4 == (basis_compressor)0x0) {
            iVar40 = *(int *)piVar54;
            iVar25 = *(int *)(piVar54 + 4);
            *(int *)((long)puVar20 + 0xc) = iVar40;
          }
          else {
            iVar40 = *(int *)piVar38;
            iVar25 = *(int *)(piVar38 + 4);
            *(int *)((long)puVar20 + 0xc) = iVar40;
          }
          uVar31 = iVar40 + 3U >> 2;
          uVar45 = iVar25 + 3U >> 2;
          *(uint *)(puVar20 + 4) = uVar45 + 1 >> 1;
          iVar40 = *(int *)(this + 0x154);
          *(int *)((long)puVar20 + 0x24) = (int)local_168;
          puVar20[2] = CONCAT44(uVar31,iVar25);
          puVar20[3] = CONCAT44(uVar31 + 1 >> 1,uVar45);
          uVar60 = local_e8[local_1a8];
          *(undefined1 *)((long)puVar20 + 0x2d) = 0;
          *(undefined4 *)(puVar20 + 5) = uVar60;
          *(basis_compressor *)((long)puVar20 + 0x2c) = bVar30;
          if (iVar40 == 3) {
            *(bool *)((long)puVar20 + 0x2d) = (int)local_168 == 0;
          }
          *(uint *)(this + 0x330) = *(int *)(this + 0x330) + uVar31 * uVar45;
          local_184 = local_184 + *(int *)((long)puVar20 + 0x1c) * *(int *)(puVar20 + 4);
          local_1d0._0_4_ = (uint)local_1a8;
          if (bVar4 == (basis_compressor)0x0) goto LAB_00114058;
          puVar17 = (undefined4 *)(uVar28 * 0x20 + *(long *)(this + 0x2f0));
          uVar60 = *puVar17;
          local_1d0 = (ulong)((uint)local_1d0 + 1);
          *puVar17 = *(undefined4 *)piVar38;
          *(undefined4 *)piVar38 = uVar60;
          uVar60 = puVar17[1];
          puVar17[1] = *(undefined4 *)(piVar38 + 4);
          *(undefined4 *)(piVar38 + 4) = uVar60;
          uVar60 = puVar17[2];
          puVar17[2] = *(undefined4 *)(piVar38 + 8);
          *(undefined4 *)(piVar38 + 8) = uVar60;
          uVar53 = *(undefined8 *)(puVar17 + 4);
          *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(piVar38 + 0x10);
          *(undefined8 *)(piVar38 + 0x10) = uVar53;
          uVar60 = puVar17[6];
          puVar17[6] = *(undefined4 *)(piVar38 + 0x18);
          *(undefined4 *)(piVar38 + 0x18) = uVar60;
          uVar60 = puVar17[7];
          puVar17[7] = *(undefined4 *)(piVar38 + 0x1c);
          *(undefined4 *)(piVar38 + 0x1c) = uVar60;
LAB_00113ec1:
          if ((uint)local_f0 <= (uint)local_1d0) break;
          local_1a8 = local_1d0;
          piVar38 = (imagef *)(local_f8 + local_1d0 * 8);
          local_1c8 = *(undefined8 *)piVar38;
          local_190 = *(int *)piVar38;
          iVar25 = *(int *)(piVar38 + 4);
          local_1bc = (uint)local_1c8;
          uVar45 = (uint)((ulong)local_1c8 >> 0x20);
          uVar52 = (ulong)uVar45;
          local_68 = (undefined4 **)CONCAT44(_UNK_00122504,__LC98);
          uStack_60 = (undefined4 *)CONCAT44(_UNK_0012250c,_UNK_00122508);
          imagef::crop(piVar38,local_1bc + 3 & 0xfffffffc,uVar45 + 3 & 0xfffffffc,0xffffffff,
                       (vec *)&local_68);
          if ((local_190 != 0) && (iVar25 != 0)) {
            uVar31 = *(uint *)piVar38;
            uVar32 = *(uint *)(piVar38 + 4);
            if (local_1bc < uVar31) {
              if (uVar32 != 0) {
                iVar25 = *(int *)(piVar38 + 8);
                lVar56 = *(long *)(piVar38 + 0x10);
                uVar13 = local_1bc;
                do {
                  uVar26 = uVar13;
                  if (local_1bc - 1 <= uVar13) {
                    uVar26 = local_1bc - 1;
                  }
                  uVar27 = uVar26;
                  if ((int)(uVar31 - 1) <= (int)uVar26) {
                    uVar27 = uVar31 - 1;
                  }
                  uVar28 = (ulong)uVar27;
                  if ((int)uVar26 < 0) {
                    uVar28 = 0;
                  }
                  uVar27 = 0;
                  uVar26 = uVar13;
                  do {
                    uVar33 = uVar45 - 1;
                    if (uVar27 <= uVar45 - 1) {
                      uVar33 = uVar27;
                    }
                    uVar49 = uVar28;
                    if (-1 < (int)uVar33) {
                      if ((int)(uVar32 - 1) < (int)uVar33) {
                        uVar33 = uVar32 - 1;
                      }
                      uVar49 = (ulong)(uVar33 * iVar25 + (int)uVar28);
                    }
                    puVar20 = (undefined8 *)(uVar49 * 0x10 + lVar56);
                    puVar35 = (undefined8 *)((ulong)uVar26 * 0x10 + lVar56);
                    if (puVar35 != puVar20) {
                      uVar53 = puVar20[1];
                      *puVar35 = *puVar20;
                      puVar35[1] = uVar53;
                    }
                    uVar27 = uVar27 + 1;
                    uVar26 = uVar26 + iVar25;
                  } while (uVar27 != uVar32);
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar31);
                if (uVar45 < uVar32) goto LAB_0011426a;
              }
            }
            else if ((uVar45 < uVar32) && (uVar31 != 0)) {
              iVar25 = *(int *)(piVar38 + 8);
              lVar56 = *(long *)(piVar38 + 0x10);
LAB_0011426a:
              uVar28 = uVar52;
              do {
                uVar26 = (uint)uVar28;
                uVar13 = uVar26;
                if (uVar45 - 1 <= uVar26) {
                  uVar13 = uVar45 - 1;
                }
                uVar27 = uVar13;
                if ((int)(uVar32 - 1) <= (int)uVar13) {
                  uVar27 = uVar32 - 1;
                }
                uVar33 = 0;
                if ((int)uVar13 < 0) {
                  uVar27 = 0;
                }
                do {
                  uVar13 = local_1bc - 1;
                  if (uVar33 <= local_1bc - 1) {
                    uVar13 = uVar33;
                  }
                  uVar14 = uVar31 - 1;
                  if ((int)uVar13 <= (int)(uVar31 - 1)) {
                    uVar14 = uVar13;
                  }
                  uVar14 = uVar14 + uVar27 * iVar25;
                  if ((int)uVar13 < 0) {
                    uVar14 = uVar27 * iVar25;
                  }
                  pauVar55 = (undefined1 (*) [16])
                             ((ulong)(iVar25 * uVar26 + uVar33) * 0x10 + lVar56);
                  pauVar21 = (undefined1 (*) [16])((ulong)uVar14 * 0x10 + lVar56);
                  if (pauVar55 != pauVar21) {
                    *pauVar55 = *pauVar21;
                  }
                  uVar33 = uVar33 + 1;
                } while (uVar31 != uVar33);
                uVar28 = (ulong)(uVar26 + 1);
              } while (uVar26 + 1 != uVar32);
              bVar30 = (basis_compressor)0x0;
              piVar54 = (image *)0x0;
              local_188 = 0;
              goto LAB_00113a31;
            }
          }
          bVar30 = (basis_compressor)0x0;
          piVar54 = (image *)0x0;
          local_188 = 0;
        } while( true );
      }
LAB_001140bf:
      if (local_e8 != (undefined4 *)0x0) {
        free(local_e8);
      }
      if (local_f8 != (undefined4 *)0x0) {
        puVar43 = local_f8 + (local_f0 & 0xffffffff) * 8;
        puVar17 = puVar43;
        for (puVar39 = local_f8; puVar39 != puVar43; puVar39 = puVar39 + 8) {
          if (*(void **)(puVar39 + 4) != (void *)0x0) {
            free(*(void **)(puVar39 + 4));
          }
          puVar17 = local_f8;
        }
        free(puVar17);
      }
      if (local_108 != (undefined4 *)0x0) {
        puVar43 = local_108 + (local_100 & 0xffffffff) * 8;
        puVar17 = puVar43;
        for (puVar39 = local_108; puVar39 != puVar43; puVar39 = puVar39 + 8) {
          if (*(void **)(puVar39 + 4) != (void *)0x0) {
            free(*(void **)(puVar39 + 4));
          }
          puVar17 = local_108;
        }
        free(puVar17);
      }
      bVar57 = uVar36 != local_168;
      local_168 = local_168 + 1;
    } while (bVar57);
    basisu::debug_printf
              ("Total blocks: %u, Total macroblocks: %u\n",(ulong)*(uint *)(this + 0x330),
               (ulong)local_184);
    uVar45 = *(uint *)(this + 0x328);
    if (0xffffff < uVar45) {
      basisu::error_printf("Too many slices!\n");
      goto LAB_00113331;
    }
    if (uVar45 < 2) {
      if (this[0x8a] != (basis_compressor)0x0) goto LAB_00114f51;
LAB_00114f6b:
      if (uVar45 != 0) {
        lVar56 = *(long *)(this + 800);
        goto LAB_00114c60;
      }
    }
    else {
      lVar56 = *(long *)(this + 800);
      piVar29 = (int *)(lVar56 + 0x28);
      iVar25 = *(int *)(lVar56 + 0x24);
      do {
        iVar40 = piVar29[0xb];
        if ((1 < iVar40 - iVar25) || ((iVar40 == iVar25 && (1 < piVar29[0xc] - *piVar29))))
        goto LAB_00113331;
        piVar29 = piVar29 + 0xc;
        iVar25 = iVar40;
      } while (piVar29 != (int *)(lVar56 + 0x58 + (ulong)(uVar45 - 2) * 0x30));
      if (this[0x8a] != (basis_compressor)0x0) {
LAB_00114f51:
        __printf_chk(2,"Total slices: %u\n");
        uVar45 = *(uint *)(this + 0x328);
        goto LAB_00114f6b;
      }
LAB_00114c60:
      uVar52 = 0;
      while( true ) {
        puVar17 = (undefined4 *)(lVar56 + uVar52 * 0x30);
        if (this[0x8a] != (basis_compressor)0x0) {
          __printf_chk(2,
                       "Slice: %u, alpha: %u, orig width/height: %ux%u, width/height: %ux%u, first_block: %u, image_index: %u, mip_level: %u, iframe: %u\n"
                       ,uVar52 & 0xffffffff,*(undefined1 *)(puVar17 + 0xb),puVar17[1],puVar17[2],
                       puVar17[3],puVar17[4],*puVar17,puVar17[9],puVar17[10],
                       *(undefined1 *)((long)puVar17 + 0x2d));
        }
        if (this[0x828] == (basis_compressor)0x0) {
          if (*(char *)(puVar17 + 0xb) != '\0') goto LAB_00113331;
        }
        else {
          if (this[2] != (basis_compressor)0x0) goto LAB_00113331;
          if (*this == (basis_compressor)0x0) {
            if (*(char *)(puVar17 + 0xb) == '\0') {
              if ((uVar52 & 1) != 0) goto LAB_00113331;
            }
            else if ((((((uVar52 & 1) == 0) ||
                       (lVar56 = (ulong)((int)uVar52 - 1) * 0x30 + *(long *)(this + 800),
                       *(int *)(lVar56 + 0x24) != puVar17[9])) || (*(char *)(lVar56 + 0x2c) != '\0')
                      ) || ((*(int *)(lVar56 + 0x28) != puVar17[10] ||
                            (*(int *)(lVar56 + 0x14) != puVar17[5])))) ||
                    (*(int *)(lVar56 + 0x18) != puVar17[6])) goto LAB_00113331;
          }
        }
        if ((((uint)puVar17[3] < (uint)puVar17[1]) || ((uint)puVar17[4] < (uint)puVar17[2])) ||
           ((puVar17[9] == 0 &&
            ((*(int *)(this + 0x154) == 3 && (*(char *)((long)puVar17 + 0x2d) == '\0'))))))
        goto LAB_00113331;
        uVar52 = uVar52 + 1;
        if (*(uint *)(this + 0x328) <= (uint)uVar52) break;
        lVar56 = *(long *)(this + 800);
      }
    }
    uVar53 = 1;
  }
  else {
    if ((*(uint *)(this + 0x60) == 0) ||
       ((uVar45 == *(uint *)(this + 0x40) && (*(uint *)(this + 0x40) == *(uint *)(this + 0x60))))) {
LAB_00113460:
      uVar52 = (ulong)(byte)this[0x828];
      goto LAB_00113468;
    }
    basisu::error_printf
              (
              "basis_compressor::read_source_images(): m_params.m_source_mipmap_images_hdr.size() must equal m_params.m_source_images_hdr.size()!\n"
              );
LAB_00113331:
    uVar53 = 0;
  }
  if (local_118 != (undefined8 *)0x0) {
    puVar35 = local_118 + (local_110 & 0xffffffff) * 4;
    puVar16 = puVar35;
    for (puVar20 = local_118; puVar20 != puVar35; puVar20 = puVar20 + 4) {
      if ((undefined8 *)*puVar20 != puVar20 + 2) {
        operator_delete((undefined8 *)*puVar20,puVar20[2] + 1);
      }
      puVar16 = local_118;
    }
    free(puVar16);
  }
  if (local_128 != (void *)0x0) {
    pvVar42 = (void *)((local_120 & 0xffffffff) * 0x20 + (long)local_128);
    pvVar6 = pvVar42;
    for (pvVar37 = local_128; pvVar37 != pvVar42; pvVar37 = (void *)((long)pvVar37 + 0x20)) {
      if (*(void **)((long)pvVar37 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar37 + 0x10));
      }
      pvVar6 = local_128;
    }
    free(pvVar6);
  }
  if (local_138 != (void *)0x0) {
    pvVar42 = (void *)((local_130 & 0xffffffff) * 0x20 + (long)local_138);
    pvVar6 = pvVar42;
    for (pvVar37 = local_138; pvVar37 != pvVar42; pvVar37 = (void *)((long)pvVar37 + 0x20)) {
      if (*(void **)((long)pvVar37 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar37 + 0x10));
      }
      pvVar6 = local_138;
    }
    free(pvVar6);
  }
LAB_0011326e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar53;
LAB_00114058:
  puVar17 = (undefined4 *)(uVar28 * 0x20 + *(long *)(this + 0x2e0));
  uVar60 = *puVar17;
  uVar45 = (uint)local_1d0 + 1;
  local_1d0 = (ulong)uVar45;
  *puVar17 = *(undefined4 *)piVar54;
  *(undefined4 *)piVar54 = uVar60;
  uVar60 = puVar17[1];
  puVar17[1] = *(undefined4 *)(piVar54 + 4);
  *(undefined4 *)(piVar54 + 4) = uVar60;
  uVar60 = puVar17[2];
  puVar17[2] = *(undefined4 *)(piVar54 + 8);
  *(undefined4 *)(piVar54 + 8) = uVar60;
  uVar53 = *(undefined8 *)(puVar17 + 4);
  *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(piVar54 + 0x10);
  *(undefined8 *)(piVar54 + 0x10) = uVar53;
  uVar60 = puVar17[6];
  puVar17[6] = *(undefined4 *)(piVar54 + 0x18);
  *(undefined4 *)(piVar54 + 0x18) = uVar60;
  uVar60 = puVar17[7];
  puVar17[7] = *(undefined4 *)(piVar54 + 0x1c);
  *(undefined4 *)(piVar54 + 0x1c) = uVar60;
  if ((uint)local_100 <= uVar45) goto LAB_001140bf;
  goto LAB_00113800;
}



/* basisu::basis_parallel_compress(unsigned int, basisu::vector<basisu::basis_compressor_params>
   const&, basisu::vector<basisu::parallel_results>&) */

ulong basisu::basis_parallel_compress(uint param_1,vector *param_2,vector *param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  char local_11a;
  char local_119;
  undefined1 local_118 [16];
  code *local_108;
  code *pcStack_100;
  job_pool local_f8 [200];
  long local_30;
  
  uVar3 = (ulong)(byte)g_library_initialized;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((byte)g_library_initialized == 0) {
    basisu::error_printf
              (
              "basis_parallel_compress: basisu_encoder_init() MUST be called before using any encoder functionality!\n"
              );
  }
  else {
    uVar2 = 1;
    if (param_1 != 0) {
      uVar2 = param_1;
    }
    basisu::job_pool::job_pool(local_f8,uVar2);
    vector<basisu::parallel_results>::resize((vector<basisu::parallel_results> *)param_3,0,false);
    vector<basisu::parallel_results>::resize
              ((vector<basisu::parallel_results> *)param_3,(ulong)*(uint *)(param_2 + 8),false);
    LOCK();
    local_11a = '\x01';
    UNLOCK();
    LOCK();
    local_119 = '\0';
    UNLOCK();
    if (*(int *)(param_2 + 8) != 0) {
      uVar3 = 0;
      do {
        local_108 = (code *)0x0;
        local_118 = (undefined1  [16])0x0;
        pcStack_100 = (code *)0x0;
        piVar1 = (int *)operator_new(0x28);
        *piVar1 = (int)uVar3;
        *(vector **)(piVar1 + 2) = param_2;
        *(vector **)(piVar1 + 4) = param_3;
        *(char **)(piVar1 + 6) = &local_11a;
        *(char **)(piVar1 + 8) = &local_119;
        local_118._0_8_ = piVar1;
        local_108 = std::
                    _Function_handler<void(),basisu::basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)::{lambda()#1}>
                    ::_M_manager;
        pcStack_100 = std::
                      _Function_handler<void(),basisu::basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)::{lambda()#1}>
                      ::_M_invoke;
        basisu::job_pool::add_job((function *)local_f8);
        if (local_108 != (code *)0x0) {
          (*local_108)(local_118,local_118,3);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar2;
      } while (uVar2 < *(uint *)(param_2 + 8));
    }
    basisu::job_pool::wait_for_all();
    if (local_119 != '\0') {
      basisu::error_printf
                (
                "An OpenCL error occured sometime during compression. The compressor fell back to CPU processing after the failure.\n"
                );
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),local_11a != '\0');
    basisu::job_pool::~job_pool(local_f8);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::init(basisu::basis_compressor_params const&) */

undefined4 __thiscall
basisu::basis_compressor::init(basis_compressor *this,basis_compressor_params *param_1)

{
  vector<basisu::image> *pvVar1;
  vector<basisu::imagef> *pvVar2;
  basis_compressor_params bVar3;
  undefined2 uVar4;
  uint uVar5;
  vector *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  vector *pvVar17;
  vector *pvVar18;
  undefined8 *puVar19;
  undefined8 *__ptr;
  undefined8 *puVar20;
  undefined8 *puVar21;
  vector<basisu::image> *this_00;
  void *pvVar22;
  vector<basisu::imagef> *this_01;
  double dVar23;
  
  basisu::debug_printf("basis_compressor::init\n");
  if ((char)g_library_initialized == '\0') {
    basisu::error_printf
              (
              "basis_compressor::init: basisu_encoder_init() MUST be called before using any encoder functionality!\n"
              );
  }
  else {
    if (*(long *)(param_1 + 0x2d0) == 0) {
      basisu::error_printf
                ("basis_compressor::init: A non-null job_pool pointer must be specified\n");
      return 0;
    }
    *(undefined2 *)this = *(undefined2 *)param_1;
    *(undefined2 *)(this + 2) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(this + 4) = *(undefined2 *)(param_1 + 4);
    vector<std::__cxx11::string>::operator=
              ((vector<std::__cxx11::string> *)(this + 8),(vector *)(param_1 + 8));
    vector<std::__cxx11::string>::operator=
              ((vector<std::__cxx11::string> *)(this + 0x18),(vector *)(param_1 + 0x18));
    vector<basisu::image>::operator=
              ((vector<basisu::image> *)(this + 0x28),(vector *)(param_1 + 0x28));
    vector<basisu::imagef>::operator=
              ((vector<basisu::imagef> *)(this + 0x38),(vector *)(param_1 + 0x38));
    if ((basis_compressor_params *)(this + 0x48) != param_1 + 0x48) {
      this_00 = *(vector<basisu::image> **)(this + 0x48);
      uVar15 = (ulong)*(uint *)(param_1 + 0x50);
      if (*(uint *)(this + 0x54) < *(uint *)(param_1 + 0x50)) {
        if (this_00 != (vector<basisu::image> *)0x0) {
          pvVar1 = this_00 + (ulong)*(uint *)(this + 0x50) * 0x10;
          if (pvVar1 != this_00) {
            do {
              pvVar16 = *(void **)this_00;
              if (pvVar16 != (void *)0x0) {
                pvVar22 = (void *)((long)pvVar16 + (ulong)*(uint *)(this_00 + 8) * 0x20);
                if (pvVar16 != pvVar22) {
                  do {
                    if (*(void **)((long)pvVar16 + 0x10) != (void *)0x0) {
                      free(*(void **)((long)pvVar16 + 0x10));
                    }
                    pvVar16 = (void *)((long)pvVar16 + 0x20);
                  } while (pvVar22 != pvVar16);
                  pvVar22 = *(void **)this_00;
                }
                free(pvVar22);
              }
              this_00 = this_00 + 0x10;
            } while (pvVar1 != this_00);
            this_00 = *(vector<basisu::image> **)(this + 0x48);
          }
          free(this_00);
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x50) = 0;
          uVar15 = (ulong)*(uint *)(param_1 + 0x50);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(basis_compressor_params *)(this + 0x48),SUB81(uVar15,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar15 = (ulong)*(uint *)(param_1 + 0x50);
        this_00 = *(vector<basisu::image> **)(this + 0x48);
      }
      else if (*(uint *)(this + 0x50) != 0) {
        pvVar1 = this_00 + (ulong)*(uint *)(this + 0x50) * 0x10;
        do {
          pvVar16 = *(void **)this_00;
          if (pvVar16 != (void *)0x0) {
            pvVar22 = (void *)((ulong)*(uint *)(this_00 + 8) * 0x20 + (long)pvVar16);
            if (pvVar16 != pvVar22) {
              do {
                if (*(void **)((long)pvVar16 + 0x10) != (void *)0x0) {
                  free(*(void **)((long)pvVar16 + 0x10));
                }
                pvVar16 = (void *)((long)pvVar16 + 0x20);
              } while (pvVar22 != pvVar16);
              pvVar22 = *(void **)this_00;
            }
            free(pvVar22);
          }
          this_00 = this_00 + 0x10;
        } while (pvVar1 != this_00);
        *(undefined4 *)(this + 0x50) = 0;
        this_00 = *(vector<basisu::image> **)(this + 0x48);
        uVar15 = (ulong)*(uint *)(param_1 + 0x50);
      }
      pvVar6 = *(vector **)(param_1 + 0x48);
      if ((int)uVar15 != 0) {
        pvVar18 = pvVar6;
        do {
          pvVar17 = pvVar18 + 0x10;
          vector<basisu::image>::vector(this_00,pvVar18);
          pvVar18 = pvVar17;
          this_00 = this_00 + 0x10;
        } while (pvVar17 != pvVar6 + uVar15 * 0x10);
        uVar15 = (ulong)*(uint *)(param_1 + 0x50);
      }
      *(int *)(this + 0x50) = (int)uVar15;
    }
    if ((basis_compressor_params *)(this + 0x58) != param_1 + 0x58) {
      this_01 = *(vector<basisu::imagef> **)(this + 0x58);
      uVar15 = (ulong)*(uint *)(param_1 + 0x60);
      if (*(uint *)(this + 100) < *(uint *)(param_1 + 0x60)) {
        if (this_01 != (vector<basisu::imagef> *)0x0) {
          pvVar2 = this_01 + (ulong)*(uint *)(this + 0x60) * 0x10;
          if (pvVar2 != this_01) {
            do {
              pvVar16 = *(void **)this_01;
              if (pvVar16 != (void *)0x0) {
                pvVar22 = (void *)((long)pvVar16 + (ulong)*(uint *)(this_01 + 8) * 0x20);
                if (pvVar16 != pvVar22) {
                  do {
                    if (*(void **)((long)pvVar16 + 0x10) != (void *)0x0) {
                      free(*(void **)((long)pvVar16 + 0x10));
                    }
                    pvVar16 = (void *)((long)pvVar16 + 0x20);
                  } while (pvVar22 != pvVar16);
                  pvVar22 = *(void **)this_01;
                }
                free(pvVar22);
              }
              this_01 = this_01 + 0x10;
            } while (pvVar2 != this_01);
            this_01 = *(vector<basisu::imagef> **)(this + 0x58);
          }
          free(this_01);
          *(undefined8 *)(this + 0x58) = 0;
          *(undefined8 *)(this + 0x60) = 0;
          uVar15 = (ulong)*(uint *)(param_1 + 0x60);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(basis_compressor_params *)(this + 0x58),SUB81(uVar15,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar15 = (ulong)*(uint *)(param_1 + 0x60);
        this_01 = *(vector<basisu::imagef> **)(this + 0x58);
      }
      else if (*(uint *)(this + 0x60) != 0) {
        pvVar2 = this_01 + (ulong)*(uint *)(this + 0x60) * 0x10;
        do {
          pvVar16 = *(void **)this_01;
          if (pvVar16 != (void *)0x0) {
            pvVar22 = (void *)((ulong)*(uint *)(this_01 + 8) * 0x20 + (long)pvVar16);
            if (pvVar16 != pvVar22) {
              do {
                if (*(void **)((long)pvVar16 + 0x10) != (void *)0x0) {
                  free(*(void **)((long)pvVar16 + 0x10));
                }
                pvVar16 = (void *)((long)pvVar16 + 0x20);
              } while (pvVar22 != pvVar16);
              pvVar22 = *(void **)this_01;
            }
            free(pvVar22);
          }
          this_01 = this_01 + 0x10;
        } while (pvVar2 != this_01);
        *(undefined4 *)(this + 0x60) = 0;
        this_01 = *(vector<basisu::imagef> **)(this + 0x58);
        uVar15 = (ulong)*(uint *)(param_1 + 0x60);
      }
      pvVar6 = *(vector **)(param_1 + 0x58);
      if ((int)uVar15 != 0) {
        pvVar18 = pvVar6;
        do {
          pvVar17 = pvVar18 + 0x10;
          vector<basisu::imagef>::vector(this_01,pvVar18);
          pvVar18 = pvVar17;
          this_01 = this_01 + 0x10;
        } while (pvVar17 != pvVar6 + uVar15 * 0x10);
        uVar15 = (ulong)*(uint *)(param_1 + 0x60);
      }
      *(int *)(this + 0x60) = (int)uVar15;
    }
    std::__cxx11::string::_M_assign((string *)(this + 0x68));
    uVar7 = *(undefined8 *)(param_1 + 0x94);
    uVar8 = *(undefined8 *)(param_1 + 0x9c);
    uVar9 = *(undefined8 *)(param_1 + 0xac);
    uVar10 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined2 *)(this + 0x88) = *(undefined2 *)(param_1 + 0x88);
    *(undefined2 *)(this + 0x8a) = *(undefined2 *)(param_1 + 0x8a);
    *(undefined2 *)(this + 0x8c) = *(undefined2 *)(param_1 + 0x8c);
    *(undefined2 *)(this + 0x8e) = *(undefined2 *)(param_1 + 0x8e);
    uVar4 = *(undefined2 *)(param_1 + 0x90);
    *(undefined8 *)(this + 0x94) = uVar7;
    *(undefined8 *)(this + 0x9c) = uVar8;
    *(undefined2 *)(this + 0x90) = uVar4;
    *(basis_compressor_params *)(this + 0xa4) = param_1[0xa4];
    *(undefined2 *)(this + 0xa8) = *(undefined2 *)(param_1 + 0xa8);
    uVar4 = *(undefined2 *)(param_1 + 0xaa);
    *(undefined8 *)(this + 0xac) = uVar9;
    *(undefined8 *)(this + 0xb4) = uVar10;
    *(undefined2 *)(this + 0xaa) = uVar4;
    *(basis_compressor_params *)(this + 0xbc) = param_1[0xbc];
    uVar7 = *(undefined8 *)(param_1 + 0xc4);
    uVar8 = *(undefined8 *)(param_1 + 0xcc);
    *(undefined2 *)(this + 0xc0) = *(undefined2 *)(param_1 + 0xc0);
    *(undefined8 *)(this + 0xc4) = uVar7;
    *(undefined8 *)(this + 0xcc) = uVar8;
    *(basis_compressor_params *)(this + 0xd4) = param_1[0xd4];
    *(undefined2 *)(this + 0xd8) = *(undefined2 *)(param_1 + 0xd8);
    *(undefined2 *)(this + 0xda) = *(undefined2 *)(param_1 + 0xda);
    *(undefined2 *)(this + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined2 *)(this + 0xde) = *(undefined2 *)(param_1 + 0xde);
    *(undefined2 *)(this + 0xe0) = *(undefined2 *)(param_1 + 0xe0);
    *(undefined2 *)(this + 0xe2) = *(undefined2 *)(param_1 + 0xe2);
    *(undefined2 *)(this + 0xe4) = *(undefined2 *)(param_1 + 0xe4);
    lVar13 = 0xe6;
    do {
      *(basis_compressor_params *)(this + lVar13) = param_1[lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xea);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    uVar8 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined2 *)(this + 0xea) = *(undefined2 *)(param_1 + 0xea);
    *(undefined2 *)(this + 0xec) = *(undefined2 *)(param_1 + 0xec);
    uVar4 = *(undefined2 *)(param_1 + 0xee);
    *(undefined8 *)(this + 0xf0) = uVar7;
    *(undefined8 *)(this + 0xf8) = uVar8;
    *(undefined2 *)(this + 0xee) = uVar4;
    *(basis_compressor_params *)(this + 0x100) = param_1[0x100];
    std::__cxx11::string::_M_assign((string *)(this + 0x108));
    uVar7 = *(undefined8 *)(param_1 + 0x134);
    uVar8 = *(undefined8 *)(param_1 + 0x13c);
    *(undefined2 *)(this + 0x128) = *(undefined2 *)(param_1 + 0x128);
    *(undefined2 *)(this + 0x12a) = *(undefined2 *)(param_1 + 0x12a);
    *(undefined2 *)(this + 300) = *(undefined2 *)(param_1 + 300);
    *(undefined2 *)(this + 0x12e) = *(undefined2 *)(param_1 + 0x12e);
    uVar4 = *(undefined2 *)(param_1 + 0x130);
    *(undefined8 *)(this + 0x134) = uVar7;
    *(undefined8 *)(this + 0x13c) = uVar8;
    *(undefined2 *)(this + 0x130) = uVar4;
    *(basis_compressor_params *)(this + 0x144) = param_1[0x144];
    *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
    *(undefined2 *)(this + 0x168) = *(undefined2 *)(param_1 + 0x168);
    uVar7 = *(undefined8 *)(param_1 + 0x174);
    uVar8 = *(undefined8 *)(param_1 + 0x180);
    uVar9 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_1 + 0x16c);
    *(undefined8 *)(this + 0x174) = uVar7;
    bVar3 = param_1[0x17c];
    *(undefined8 *)(this + 0x180) = uVar8;
    *(undefined8 *)(this + 0x188) = uVar9;
    *(basis_compressor_params *)(this + 0x17c) = bVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x194);
    uVar8 = *(undefined8 *)(param_1 + 0x19c);
    *(basis_compressor_params *)(this + 400) = param_1[400];
    uVar9 = *(undefined8 *)(param_1 + 0x1e8);
    uVar10 = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(this + 0x194) = uVar7;
    *(undefined8 *)(this + 0x19c) = uVar8;
    *(basis_compressor_params *)(this + 0x1a4) = param_1[0x1a4];
    uVar7 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(this + 0x1a8) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(this + 0x1b0) = uVar7;
    *(basis_compressor_params *)(this + 0x1b8) = param_1[0x1b8];
    uVar7 = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(this + 0x1bc) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined8 *)(this + 0x1c4) = uVar7;
    *(basis_compressor_params *)(this + 0x1cc) = param_1[0x1cc];
    uVar7 = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(this + 0x1d8) = uVar7;
    *(basis_compressor_params *)(this + 0x1e0) = param_1[0x1e0];
    *(undefined2 *)(this + 0x1e4) = *(undefined2 *)(param_1 + 0x1e4);
    uVar4 = *(undefined2 *)(param_1 + 0x1e6);
    *(undefined8 *)(this + 0x1e8) = uVar9;
    *(undefined8 *)(this + 0x1f0) = uVar10;
    *(undefined2 *)(this + 0x1e6) = uVar4;
    *(basis_compressor_params *)(this + 0x1f8) = param_1[0x1f8];
    uVar7 = *(undefined8 *)(param_1 + 0x204);
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    uVar9 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(this + 0x1fc) = *(undefined8 *)(param_1 + 0x1fc);
    *(undefined8 *)(this + 0x204) = uVar7;
    bVar3 = param_1[0x20c];
    *(undefined8 *)(this + 0x210) = uVar8;
    *(undefined8 *)(this + 0x218) = uVar9;
    *(basis_compressor_params *)(this + 0x20c) = bVar3;
    *(basis_compressor_params *)(this + 0x220) = param_1[0x220];
    *(undefined8 *)(this + 0x228) = *(undefined8 *)(param_1 + 0x228);
    *(undefined2 *)(this + 0x230) = *(undefined2 *)(param_1 + 0x230);
    *(undefined4 *)(this + 0x234) = *(undefined4 *)(param_1 + 0x234);
    if ((basis_compressor_params *)(this + 0x238) != param_1 + 0x238) {
      __ptr = *(undefined8 **)(this + 0x238);
      uVar15 = (ulong)*(uint *)(param_1 + 0x240);
      if (*(uint *)(this + 0x244) < *(uint *)(param_1 + 0x240)) {
        if (__ptr != (undefined8 *)0x0) {
          puVar19 = __ptr + (ulong)*(uint *)(this + 0x240) * 4;
          if (puVar19 != __ptr) {
            do {
              if ((void *)__ptr[2] != (void *)0x0) {
                free((void *)__ptr[2]);
              }
              if ((void *)*__ptr != (void *)0x0) {
                free((void *)*__ptr);
              }
              __ptr = __ptr + 4;
            } while (puVar19 != __ptr);
            __ptr = *(undefined8 **)(this + 0x238);
          }
          free(__ptr);
          *(undefined8 *)(this + 0x238) = 0;
          *(undefined8 *)(this + 0x240) = 0;
          uVar15 = (ulong)*(uint *)(param_1 + 0x240);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(basis_compressor_params *)(this + 0x238),SUB81(uVar15,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        uVar15 = (ulong)*(uint *)(param_1 + 0x240);
        __ptr = *(undefined8 **)(this + 0x238);
      }
      else if (*(uint *)(this + 0x240) != 0) {
        puVar19 = __ptr + (ulong)*(uint *)(this + 0x240) * 4;
        do {
          if ((void *)__ptr[2] != (void *)0x0) {
            free((void *)__ptr[2]);
          }
          if ((void *)*__ptr != (void *)0x0) {
            free((void *)*__ptr);
          }
          __ptr = __ptr + 4;
        } while (puVar19 != __ptr);
        *(undefined4 *)(this + 0x240) = 0;
        __ptr = *(undefined8 **)(this + 0x238);
        uVar15 = (ulong)*(uint *)(param_1 + 0x240);
      }
      puVar19 = *(undefined8 **)(param_1 + 0x238);
      if ((int)uVar15 != 0) {
        puVar20 = puVar19;
        do {
          *__ptr = 0;
          uVar12 = *(undefined4 *)(puVar20 + 1);
          puVar21 = puVar20 + 4;
          __ptr[1] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)__ptr,SUB41(uVar12,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar5 = *(uint *)(puVar20 + 1);
          *(uint *)(__ptr + 1) = uVar5;
          if (((void *)*__ptr != (void *)0x0) && ((void *)*puVar20 != (void *)0x0)) {
            memcpy((void *)*__ptr,(void *)*puVar20,(ulong)uVar5);
          }
          uVar12 = *(undefined4 *)(puVar20 + 3);
          __ptr[2] = 0;
          __ptr[3] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)__ptr + 0x10,SUB41(uVar12,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                     false);
          uVar5 = *(uint *)(puVar20 + 3);
          *(uint *)(__ptr + 3) = uVar5;
          if (((void *)__ptr[2] != (void *)0x0) && ((void *)puVar20[2] != (void *)0x0)) {
            memcpy((void *)__ptr[2],(void *)puVar20[2],(ulong)uVar5);
          }
          __ptr = __ptr + 4;
          puVar20 = puVar21;
        } while (puVar19 + uVar15 * 4 != puVar21);
        uVar15 = (ulong)*(uint *)(param_1 + 0x240);
      }
      *(int *)(this + 0x240) = (int)uVar15;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x250);
    uVar8 = *(undefined8 *)(param_1 + 0x260);
    uVar9 = *(undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(this + 0x250) = uVar7;
    *(basis_compressor_params *)(this + 600) = param_1[600];
    uVar4 = *(undefined2 *)(param_1 + 0x25c);
    *(undefined8 *)(this + 0x260) = uVar8;
    *(undefined8 *)(this + 0x268) = uVar9;
    uVar7 = *(undefined8 *)(param_1 + 0x270);
    uVar8 = *(undefined8 *)(param_1 + 0x278);
    *(undefined2 *)(this + 0x25c) = uVar4;
    *(undefined8 *)(this + 0x270) = uVar7;
    *(undefined8 *)(this + 0x278) = uVar8;
    uVar7 = *(undefined8 *)(param_1 + 0x288);
    *(undefined8 *)(this + 0x280) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(this + 0x288) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x298);
    *(undefined8 *)(this + 0x290) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(this + 0x298) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(this + 0x2a0) = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)(this + 0x2a8) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined8 *)(this + 0x2b0) = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 *)(this + 0x2b8) = uVar7;
    *(basis_compressor_params *)(this + 0x2c0) = param_1[0x2c0];
    *(undefined2 *)(this + 0x2c4) = *(undefined2 *)(param_1 + 0x2c4);
    *(undefined2 *)(this + 0x2c6) = *(undefined2 *)(param_1 + 0x2c6);
    *(undefined2 *)(this + 0x2c8) = *(undefined2 *)(param_1 + 0x2c8);
    *(undefined8 *)(this + 0x2d0) = *(undefined8 *)(param_1 + 0x2d0);
    if ((this[0xdc] != (basis_compressor)0x0) && (this[0x2c4] == (basis_compressor)0x0)) {
      *(undefined2 *)(this + 0x2c4) = 0x101;
    }
    check_for_hdr_inputs(this);
    if (this[0x8c] == (basis_compressor)0x0) {
      uVar12 = sanity_check_input_params(this);
      cVar11 = (char)uVar12;
    }
    else {
      basisu::debug_printf("basis_compressor::init:\n");
      basisu::debug_printf
                ("Source LDR images: %u, HDR images: %u, filenames: %u, alpha filenames: %i, LDR mipmap images: %u, HDR mipmap images: %u\n"
                 ,(ulong)*(uint *)(this + 0x30),(ulong)*(uint *)(this + 0x40),
                 (ulong)*(uint *)(this + 0x10),(ulong)*(uint *)(this + 0x20),
                 (ulong)*(uint *)(this + 0x50),(ulong)*(uint *)(this + 0x60));
      if (*(int *)(this + 0x50) != 0) {
        lVar13 = 0;
        basisu::debug_printf("m_source_mipmap_images array sizes:\n");
        if (*(int *)(this + 0x50) != 0) {
          do {
            lVar14 = lVar13 + 1;
            basisu::debug_printf("%u ",(ulong)*(uint *)(lVar13 * 0x10 + *(long *)(this + 0x48) + 8))
            ;
            lVar13 = lVar14;
          } while ((uint)lVar14 < *(uint *)(this + 0x50));
        }
        basisu::debug_printf("\n");
      }
      if (*(int *)(this + 0x60) != 0) {
        lVar13 = 0;
        basisu::debug_printf("m_source_mipmap_images_hdr array sizes:\n");
        if (*(int *)(this + 0x60) != 0) {
          do {
            lVar14 = lVar13 + 1;
            basisu::debug_printf("%u ",(ulong)*(uint *)(lVar13 * 0x10 + *(long *)(this + 0x58) + 8))
            ;
            lVar13 = lVar14;
          } while ((uint)lVar14 < *(uint *)(this + 0x60));
        }
        basisu::debug_printf("\n");
      }
      basisu::debug_printf("%s: %u %u\n","m_hdr",(ulong)(byte)this[2],(ulong)(byte)this[3]);
      basisu::debug_printf("%s: %u %u\n","m_uastc",(ulong)(byte)*this,(ulong)(byte)this[1]);
      basisu::debug_printf("%s: %u %u\n","m_use_opencl",(ulong)(byte)this[4],(ulong)(byte)this[5]);
      basisu::debug_printf("%s: %u %u\n","m_y_flip",(ulong)(byte)this[0x88],(ulong)(byte)this[0x89])
      ;
      basisu::debug_printf("%s: %u %u\n","m_debug",(ulong)(byte)this[0x8c],(ulong)(byte)this[0x8d]);
      basisu::debug_printf
                ("%s: %u %u\n","m_validate_etc1s",(ulong)(byte)this[0x8e],(ulong)(byte)this[0x8f]);
      basisu::debug_printf
                ("%s: %u %u\n","m_debug_images",(ulong)(byte)this[0x90],(ulong)(byte)this[0x91]);
      basisu::debug_printf
                ("%s: %i %u\n","m_compression_level",(ulong)*(uint *)(this + 0x94),
                 (ulong)(byte)this[0xa4]);
      basisu::debug_printf
                ("%s: %u %u\n","m_perceptual",(ulong)(byte)this[0xa8],(ulong)(byte)this[0xa9]);
      basisu::debug_printf
                ("%s: %u %u\n","m_no_endpoint_rdo",(ulong)(byte)this[0xc0],(ulong)(byte)this[0xc1]);
      basisu::debug_printf
                ("%s: %u %u\n","m_no_selector_rdo",(ulong)(byte)this[0xaa],(ulong)(byte)this[0xab]);
      basisu::debug_printf
                ("%s: %u %u\n","m_read_source_images",(ulong)(byte)this[0xd8],
                 (ulong)(byte)this[0xd9]);
      basisu::debug_printf
                ("%s: %u %u\n","m_write_output_basis_or_ktx2_files",(ulong)(byte)this[0xda],
                 (ulong)(byte)this[0xdb]);
      basisu::debug_printf
                ("%s: %u %u\n","m_compute_stats",(ulong)(byte)this[0xdc],(ulong)(byte)this[0xdd]);
      basisu::debug_printf
                ("%s: %u %u\n","m_check_for_alpha",(ulong)(byte)this[0xe0],(ulong)(byte)this[0xe1]);
      basisu::debug_printf
                ("%s: %u %u\n","m_force_alpha",(ulong)(byte)this[0xe2],(ulong)(byte)this[0xe3]);
      basisu::debug_printf
                ("swizzle: %d,%d,%d,%d\n",(ulong)(byte)this[0xe6],(ulong)(byte)this[0xe7],
                 (ulong)(byte)this[0xe8],(ulong)(byte)this[0xe9]);
      basisu::debug_printf
                ("%s: %u %u\n","m_renormalize",(ulong)(byte)this[0xea],(ulong)(byte)this[0xeb]);
      basisu::debug_printf
                ("%s: %u %u\n","m_multithreading",(ulong)(byte)this[0xe4],(ulong)(byte)this[0xe5]);
      basisu::debug_printf
                ("%s: %u %u\n","m_disable_hierarchical_endpoint_codebooks",(ulong)(byte)this[0xec],
                 (ulong)(byte)this[0xed]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0xc4),"m_endpoint_rdo_thresh",
                 (ulong)(byte)this[0xd4]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0xac),"m_selector_rdo_thresh",
                 (ulong)(byte)this[0xbc]);
      basisu::debug_printf
                ("%s: %u %u\n","m_mip_gen",(ulong)(byte)this[0xee],(ulong)(byte)this[0xef]);
      basisu::debug_printf
                ("%s: %u %u\n","m_mip_renormalize",(ulong)(byte)this[300],(ulong)(byte)this[0x12d]);
      basisu::debug_printf
                ("%s: %u %u\n","m_mip_wrapping",(ulong)(byte)this[0x12e],(ulong)(byte)this[0x12f]);
      basisu::debug_printf
                ("%s: %u %u\n","m_mip_fast",(ulong)(byte)this[0x130],(ulong)(byte)this[0x131]);
      basisu::debug_printf
                ("%s: %u %u\n","m_mip_srgb",(ulong)(byte)this[0x128],(ulong)(byte)this[0x129]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)(byte)this[0x12a],"m_mip_premultiplied",
                 (ulong)(byte)this[299]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0xf0),"m_mip_scale",
                 (ulong)(byte)this[0x100]);
      basisu::debug_printf
                ("%s: %i %u\n","m_mip_smallest_dimension",(ulong)*(uint *)(this + 0x134),
                 (ulong)(byte)this[0x144]);
      basisu::debug_printf("m_mip_filter: %s\n",*(undefined8 *)(this + 0x108));
      basisu::debug_printf("m_max_endpoint_clusters: %u\n",(ulong)*(uint *)(this + 0x148));
      basisu::debug_printf("m_max_selector_clusters: %u\n",(ulong)*(uint *)(this + 0x14c));
      basisu::debug_printf("m_quality_level: %i\n",(ulong)*(uint *)(this + 0x150));
      basisu::debug_printf("UASTC HDR quality level: %u\n",(ulong)*(uint *)(this + 0x2b4));
      basisu::debug_printf("m_tex_type: %u\n",(ulong)*(uint *)(this + 0x154));
      basisu::debug_printf
                ("m_userdata0: 0x%X, m_userdata1: 0x%X\n",(ulong)*(uint *)(this + 0x158),
                 (ulong)*(uint *)(this + 0x15c));
      dVar23 = 0.0;
      if (*(uint *)(this + 0x160) != 0) {
        dVar23 = (double)(_LC8 / ((float)*(uint *)(this + 0x160) / __LC299));
      }
      basisu::debug_printf("m_us_per_frame: %i (%f fps)\n",dVar23);
      basisu::debug_printf("m_pack_uastc_flags: 0x%X\n",(ulong)*(uint *)(this + 0x164));
      basisu::debug_printf
                ("%s: %u %u\n","m_rdo_uastc",(ulong)(byte)this[0x168],(ulong)(byte)this[0x169]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x16c),"m_rdo_uastc_quality_scalar",
                 (ulong)(byte)this[0x17c]);
      basisu::debug_printf
                ("%s: %i %u\n","m_rdo_uastc_dict_size",(ulong)*(uint *)(this + 0x180),
                 (ulong)(byte)this[400]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x1bc),
                 "m_rdo_uastc_max_allowed_rms_increase_ratio",(ulong)(byte)this[0x1cc]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x1d0),"m_rdo_uastc_skip_block_rms_thresh",
                 (ulong)(byte)this[0x1e0]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x194),
                 "m_rdo_uastc_max_smooth_block_error_scale",(ulong)(byte)this[0x1a4]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x1a8),
                 "m_rdo_uastc_smooth_block_max_std_dev",(ulong)(byte)this[0x1b8]);
      basisu::debug_printf
                ("%s: %u %u\n","m_rdo_uastc_favor_simpler_modes_in_rdo_mode",
                 (ulong)(byte)this[0x1e4],(ulong)(byte)this[0x1e5]);
      basisu::debug_printf
                ("%s: %u %u\n","m_rdo_uastc_multithreading",(ulong)(byte)this[0x1e6],
                 (ulong)(byte)this[0x1e7]);
      basisu::debug_printf
                ("%s: %i %u\n","m_resample_width",(ulong)*(uint *)(this + 0x1e8),
                 (ulong)(byte)this[0x1f8]);
      basisu::debug_printf
                ("%s: %i %u\n","m_resample_height",(ulong)*(uint *)(this + 0x1fc),
                 (ulong)(byte)this[0x20c]);
      basisu::debug_printf
                ("%s: %f %u\n",(double)*(float *)(this + 0x210),"m_resample_factor",
                 (ulong)(byte)this[0x220]);
      basisu::debug_printf("Has global codebooks: %u\n",(ulong)(*(long *)(this + 0x228) != 0));
      lVar13 = *(long *)(this + 0x228);
      if (lVar13 != 0) {
        basisu::debug_printf
                  ("Global codebook endpoints: %u selectors: %u\n",(ulong)*(uint *)(lVar13 + 0x10),
                   (ulong)*(uint *)(lVar13 + 0x20));
      }
      basisu::debug_printf
                ("%s: %u %u\n","m_create_ktx2_file",(ulong)(byte)this[0x230],
                 (ulong)(byte)this[0x231]);
      basisu::debug_printf("KTX2 UASTC supercompression: %u\n",(ulong)*(uint *)(this + 0x234));
      basisu::debug_printf("KTX2 Zstd supercompression level: %i\n",(ulong)*(uint *)(this + 0x248));
      basisu::debug_printf("KTX2 sRGB transfer func: %u\n",(ulong)(byte)this[0x25c]);
      basisu::debug_printf("Total KTX2 key values: %u\n",(ulong)*(uint *)(this + 0x240));
      lVar13 = 0;
      if (*(int *)(this + 0x240) != 0) {
        do {
          lVar14 = lVar13 + 1;
          basisu::debug_printf
                    ("Key: \"%s\"\n",*(undefined8 *)(*(long *)(this + 0x238) + lVar13 * 0x20));
          basisu::debug_printf
                    ("Value size: %u\n",
                     (ulong)*(uint *)(*(long *)(this + 0x238) + 0x18 + lVar13 * 0x20));
          lVar13 = lVar14;
        } while ((uint)lVar14 < *(uint *)(this + 0x240));
      }
      basisu::debug_printf
                ("%s: %u %u\n","m_validate_output_data",(ulong)(byte)this[0x2c4],
                 (ulong)(byte)this[0x2c5]);
      basisu::debug_printf
                ("%s: %u %u\n","m_hdr_ldr_srgb_to_linear_conversion",(ulong)(byte)this[0x2c6],
                 (ulong)(byte)this[0x2c7]);
      basisu::debug_printf("Allow UASTC HDR uber mode: %u\n",(ulong)(byte)this[0x2c0]);
      basisu::debug_printf
                ("%s: %u %u\n","m_hdr_favor_astc",(ulong)(byte)this[0x2c8],(ulong)(byte)this[0x2c9])
      ;
      uVar12 = sanity_check_input_params(this);
      cVar11 = (char)uVar12;
    }
    if (cVar11 != '\0') {
      if (this[4] == (basis_compressor)0x0) {
        return uVar12;
      }
      cVar11 = basisu::opencl_is_available();
      if (cVar11 == '\0') {
        return uVar12;
      }
      if (*(long *)(this + 0x2d8) != 0) {
        return uVar12;
      }
      if (this[0x829] != (basis_compressor)0x0) {
        return uVar12;
      }
      lVar13 = basisu::opencl_create_context();
      *(long *)(this + 0x2d8) = lVar13;
      if (lVar13 != 0) {
        return uVar12;
      }
      this[0x829] = (basis_compressor)0x1;
      return uVar12;
    }
  }
  return 0;
}



/* int 
   std::uniform_int_distribution<int>::TEMPNAMEPLACEHOLDERVALUE(std::mersenne_twister_engine<unsigned
   long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul, 4294967295ul, 7ul, 2636928640ul, 15ul,
   4022730752ul, 18ul, 1812433253ul>&, std::uniform_int_distribution<int>::param_type const&) [clone
   .isra.0] */

int __thiscall
std::uniform_int_distribution<int>::operator()
          (uniform_int_distribution<int> *this,mersenne_twister_engine *param_1,param_type *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar6 = (int)param_1;
  uVar7 = (long)(int)param_2 - (long)iVar6;
  if (uVar7 < 0xffffffff) {
    lVar5 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
            ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                          *)this);
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 * uVar7;
    uVar1 = (uint)lVar5;
    if (uVar1 < (uint)uVar7) {
      while (uVar1 < (uint)((ulong)-(uint)uVar7 % (uVar7 & 0xffffffff))) {
        lVar5 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                              *)this);
        lVar5 = lVar5 * uVar7;
        uVar1 = (uint)lVar5;
      }
    }
    return (int)((ulong)lVar5 >> 0x20) + iVar6;
  }
  if (uVar7 == 0xffffffff) {
    iVar2 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
            ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                          *)this);
    return iVar2 + iVar6;
  }
  do {
    do {
      uVar1 = operator()(this,(mersenne_twister_engine *)0x0,(param_type *)0xffffffff);
      uVar3 = mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
              ::operator()((mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
                            *)this);
      uVar4 = ((ulong)uVar1 << 0x20) + uVar3;
    } while (uVar7 < uVar4);
  } while (CARRY8((ulong)uVar1 << 0x20,uVar3));
  return (int)uVar4 + iVar6;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<basist::ktx2_transcoder::key_value*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(basist::ktx2_transcoder::key_value*,
   basist::ktx2_transcoder::key_value*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::
     __introsort_loop<basist::ktx2_transcoder::key_value*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (key_value *param_1,key_value *param_2,long param_3)

{
  char *pcVar1;
  char *__s2;
  char *__s2_00;
  int iVar2;
  long lVar3;
  void *pvVar4;
  key_value *pkVar5;
  key_value *pkVar6;
  key_value *pkVar7;
  uint uVar8;
  key_value *pkVar9;
  long in_FS_OFFSET;
  long local_a0;
  void *local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (long)param_2 - (long)param_1;
  if (0x200 < lVar3) {
    if (param_3 != 0) {
      pkVar5 = param_1 + 0x20;
      pkVar9 = param_2;
      local_a0 = param_3;
      do {
        pcVar1 = *(char **)(param_1 + 0x20);
        local_a0 = local_a0 + -1;
        __s2 = *(char **)(param_1 + (lVar3 >> 6) * 0x20);
        iVar2 = strcmp(pcVar1,__s2);
        __s2_00 = *(char **)(pkVar9 + -0x20);
        param_2 = pkVar5;
        pkVar7 = pkVar9;
        if (iVar2 < 0) {
          iVar2 = strcmp(__s2,__s2_00);
          if (-1 < iVar2) {
            iVar2 = strcmp(pcVar1,__s2_00);
            if (iVar2 < 0) goto LAB_00116aa1;
            goto LAB_00116a8f;
          }
LAB_001166d7:
          swap<basist::ktx2_transcoder::key_value>(param_1,param_1 + (lVar3 >> 6) * 0x20);
        }
        else {
          iVar2 = strcmp(pcVar1,__s2_00);
          if (iVar2 < 0) {
LAB_00116a8f:
            swap<basist::ktx2_transcoder::key_value>(param_1,pkVar5);
          }
          else {
            iVar2 = strcmp(__s2,__s2_00);
            if (-1 < iVar2) goto LAB_001166d7;
LAB_00116aa1:
            swap<basist::ktx2_transcoder::key_value>(param_1,pkVar9 + -0x20);
          }
        }
        while( true ) {
          pcVar1 = *(char **)param_1;
          while (iVar2 = strcmp(*(char **)param_2,pcVar1), iVar2 < 0) {
            param_2 = param_2 + 0x20;
          }
          do {
            pkVar6 = pkVar7;
            pkVar7 = pkVar6 + -0x20;
            iVar2 = strcmp(pcVar1,*(char **)(pkVar6 + -0x20));
          } while (iVar2 < 0);
          if (pkVar7 <= param_2) break;
          local_68 = (void *)0x0;
          local_60 = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_68,SUB41(*(undefined4 *)(param_2 + 8),0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          local_60 = CONCAT44(local_60._4_4_,*(uint *)(param_2 + 8));
          if ((local_68 != (void *)0x0) && (*(void **)param_2 != (void *)0x0)) {
            memcpy(local_68,*(void **)param_2,(ulong)*(uint *)(param_2 + 8));
          }
          local_58 = (void *)0x0;
          local_50 = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_58,SUB41(*(undefined4 *)(param_2 + 0x18),0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          local_50 = CONCAT44(local_50._4_4_,*(uint *)(param_2 + 0x18));
          if ((local_58 != (void *)0x0) && (*(void **)(param_2 + 0x10) != (void *)0x0)) {
            memcpy(local_58,*(void **)(param_2 + 0x10),(ulong)*(uint *)(param_2 + 0x18));
          }
          if (pkVar7 != param_2) {
            uVar8 = *(uint *)(pkVar6 + -0x18);
            pvVar4 = *(void **)param_2;
            if (*(uint *)(param_2 + 0xc) < uVar8) {
              if (pvVar4 != (void *)0x0) {
                free(pvVar4);
                *(undefined8 *)param_2 = 0;
                *(undefined8 *)(param_2 + 8) = 0;
                uVar8 = *(uint *)(pkVar6 + -0x18);
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)param_2,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                         false);
              uVar8 = *(uint *)(pkVar6 + -0x18);
              pvVar4 = *(void **)param_2;
            }
            else if (*(int *)(param_2 + 8) != 0) {
              *(undefined4 *)(param_2 + 8) = 0;
              uVar8 = *(uint *)(pkVar6 + -0x18);
            }
            if ((pvVar4 != (void *)0x0) && (*(void **)pkVar7 != (void *)0x0)) {
              memcpy(pvVar4,*(void **)pkVar7,(ulong)uVar8);
              uVar8 = *(uint *)(pkVar6 + -0x18);
            }
            *(uint *)(param_2 + 8) = uVar8;
          }
          if (pkVar6 + -0x10 != param_2 + 0x10) {
            uVar8 = *(uint *)(pkVar6 + -8);
            pvVar4 = *(void **)(param_2 + 0x10);
            if (*(uint *)(param_2 + 0x1c) < uVar8) {
              if (pvVar4 != (void *)0x0) {
                free(pvVar4);
                *(undefined8 *)(param_2 + 0x10) = 0;
                *(undefined8 *)(param_2 + 0x18) = 0;
                uVar8 = *(uint *)(pkVar6 + -8);
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)(param_2 + 0x10),SUB41(uVar8,0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
              uVar8 = *(uint *)(pkVar6 + -8);
              pvVar4 = *(void **)(param_2 + 0x10);
            }
            else if (*(int *)(param_2 + 0x18) != 0) {
              *(undefined4 *)(param_2 + 0x18) = 0;
              uVar8 = *(uint *)(pkVar6 + -8);
            }
            if ((pvVar4 != (void *)0x0) && (*(void **)(pkVar6 + -0x10) != (void *)0x0)) {
              memcpy(pvVar4,*(void **)(pkVar6 + -0x10),(ulong)uVar8);
              uVar8 = *(uint *)(pkVar6 + -8);
            }
            *(uint *)(param_2 + 0x18) = uVar8;
          }
          pvVar4 = *(void **)pkVar7;
          if (*(uint *)(pkVar6 + -0x14) < (uint)local_60) {
            if (pvVar4 != (void *)0x0) {
              free(pvVar4);
              *(undefined8 *)pkVar7 = 0;
              *(undefined8 *)(pkVar6 + -0x18) = 0;
            }
            basisu::elemental_vector::increase_capacity
                      ((uint)pkVar7,SUB41((uint)local_60,0),0,
                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            pvVar4 = *(void **)pkVar7;
          }
          else if (*(int *)(pkVar6 + -0x18) != 0) {
            *(undefined4 *)(pkVar6 + -0x18) = 0;
          }
          uVar8 = (uint)local_60;
          if ((pvVar4 != (void *)0x0) && (local_68 != (void *)0x0)) {
            memcpy(pvVar4,local_68,(ulong)(uint)local_60);
            uVar8 = (uint)local_60;
          }
          *(uint *)(pkVar6 + -0x18) = uVar8;
          pvVar4 = *(void **)(pkVar6 + -0x10);
          if (*(uint *)(pkVar6 + -4) < (uint)local_50) {
            if (pvVar4 != (void *)0x0) {
              free(pvVar4);
              *(undefined8 *)(pkVar6 + -0x10) = 0;
              *(undefined8 *)(pkVar6 + -8) = 0;
            }
            basisu::elemental_vector::increase_capacity
                      ((uint)(pkVar6 + -0x10),SUB41((uint)local_50,0),0,
                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            pvVar4 = *(void **)(pkVar6 + -0x10);
          }
          else if (*(int *)(pkVar6 + -8) != 0) {
            *(undefined4 *)(pkVar6 + -8) = 0;
          }
          uVar8 = (uint)local_50;
          if (pvVar4 == (void *)0x0) {
LAB_001168e1:
            *(uint *)(pkVar6 + -8) = uVar8;
            if (local_58 != (void *)0x0) {
              free(local_58);
            }
          }
          else {
            if (local_58 != (void *)0x0) {
              memcpy(pvVar4,local_58,(ulong)(uint)local_50);
              uVar8 = (uint)local_50;
              goto LAB_001168e1;
            }
            *(uint *)(pkVar6 + -8) = (uint)local_50;
          }
          if (local_68 != (void *)0x0) {
            free(local_68);
          }
          param_2 = param_2 + 0x20;
        }
        __introsort_loop<basist::ktx2_transcoder::key_value*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_2,pkVar9,local_a0);
        lVar3 = (long)param_2 - (long)param_1;
        if (lVar3 < 0x201) goto LAB_00116ab2;
        pkVar9 = param_2;
      } while (local_a0 != 0);
    }
    __heap_select<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,param_2,param_2);
    do {
      pkVar5 = param_2 + -0x20;
      local_88 = (void *)0x0;
      local_80 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_88,SUB41(*(undefined4 *)(param_2 + -0x18),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_80 = CONCAT44(local_80._4_4_,*(uint *)(param_2 + -0x18));
      if ((local_88 != (void *)0x0) && (*(void **)pkVar5 != (void *)0x0)) {
        memcpy(local_88,*(void **)pkVar5,(ulong)*(uint *)(param_2 + -0x18));
      }
      local_78 = (void *)0x0;
      local_70 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_78,SUB41(*(undefined4 *)(param_2 + -8),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_70 = CONCAT44(local_70._4_4_,*(uint *)(param_2 + -8));
      if ((local_78 != (void *)0x0) && (*(void **)(param_2 + -0x10) != (void *)0x0)) {
        memcpy(local_78,*(void **)(param_2 + -0x10),(ulong)*(uint *)(param_2 + -8));
      }
      if (pkVar5 != param_1) {
        uVar8 = *(uint *)(param_1 + 8);
        if (*(uint *)(param_2 + -0x14) < uVar8) {
          if (*(void **)pkVar5 != (void *)0x0) {
            free(*(void **)pkVar5);
            *(undefined8 *)pkVar5 = 0;
            *(undefined8 *)(param_2 + -0x18) = 0;
            uVar8 = *(uint *)(param_1 + 8);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)pkVar5,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar8 = *(uint *)(param_1 + 8);
        }
        else if (*(int *)(param_2 + -0x18) != 0) {
          *(undefined4 *)(param_2 + -0x18) = 0;
          uVar8 = *(uint *)(param_1 + 8);
        }
        if ((*(void **)pkVar5 != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) {
          memcpy(*(void **)pkVar5,*(void **)param_1,(ulong)uVar8);
          uVar8 = *(uint *)(param_1 + 8);
        }
        *(uint *)(param_2 + -0x18) = uVar8;
      }
      if (param_2 + -0x10 != param_1 + 0x10) {
        uVar8 = *(uint *)(param_1 + 0x18);
        if (*(uint *)(param_2 + -4) < uVar8) {
          if (*(void **)(param_2 + -0x10) != (void *)0x0) {
            free(*(void **)(param_2 + -0x10));
            *(undefined8 *)(param_2 + -0x10) = 0;
            *(undefined8 *)(param_2 + -8) = 0;
            uVar8 = *(uint *)(param_1 + 0x18);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(param_2 + -0x10),SUB41(uVar8,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar8 = *(uint *)(param_1 + 0x18);
        }
        else if (*(int *)(param_2 + -8) != 0) {
          *(undefined4 *)(param_2 + -8) = 0;
          uVar8 = *(uint *)(param_1 + 0x18);
        }
        if ((*(void **)(param_2 + -0x10) != (void *)0x0) &&
           (*(void **)(param_1 + 0x10) != (void *)0x0)) {
          memcpy(*(void **)(param_2 + -0x10),*(void **)(param_1 + 0x10),(ulong)uVar8);
          uVar8 = *(uint *)(param_1 + 0x18);
        }
        *(uint *)(param_2 + -8) = uVar8;
      }
      local_68 = (void *)0x0;
      local_60 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_68,SUB81(local_80,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_80);
      if ((local_68 != (void *)0x0) && (local_88 != (void *)0x0)) {
        memcpy(local_68,local_88,local_80 & 0xffffffff);
      }
      local_58 = (void *)0x0;
      local_50 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_58,SUB81(local_70,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_70);
      if ((local_58 != (void *)0x0) && (local_78 != (void *)0x0)) {
        memcpy(local_58,local_78,local_70 & 0xffffffff);
      }
      __adjust_heap<basist::ktx2_transcoder::key_value*,long,basist::ktx2_transcoder::key_value,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,(long)pkVar5 - (long)param_1 >> 5,&local_68);
      if (local_58 != (void *)0x0) {
        free(local_58);
      }
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      if (local_78 != (void *)0x0) {
        free(local_78);
      }
      if (local_88 != (void *)0x0) {
        free(local_88);
      }
      param_2 = pkVar5;
    } while (0x20 < (long)pkVar5 - (long)param_1);
  }
LAB_00116ab2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor::create_ktx2_file() */

undefined8 __thiscall basisu::basis_compressor::create_ktx2_file(basis_compressor *this)

{
  vector<unsigned_char> *this_00;
  undefined4 uVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  byte bVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  vector *pvVar23;
  uchar *puVar24;
  uint *puVar25;
  int iVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  long in_FS_OFFSET;
  byte bVar34;
  int local_208;
  undefined8 *local_1c8;
  ulong local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  ulong local_1a0;
  void *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  void *pvStack_178;
  undefined8 uStack_170;
  uchar *puStack_168;
  ulong uStack_160;
  uchar *puStack_158;
  undefined8 uStack_150;
  uchar *local_148;
  undefined8 local_140;
  ulong local_138;
  ulong uStack_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 local_ec;
  ulong uStack_e8;
  uint uStack_e0;
  uint local_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_40;
  
  bVar34 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*this == (basis_compressor)0x0) || ((*(uint *)(this + 0x234) & 0xfffffffd) == 0)) {
    uVar27 = (ulong)*(uint *)(this + 0x328);
    if (*(uint *)(this + 0x328) == 0) {
      uVar31 = 0;
      uVar6 = 0;
      uVar10 = 0;
    }
    else {
      uVar31 = 0;
      uVar32 = 0;
      uVar20 = 0;
      puVar15 = (uint *)(*(long *)(this + 800) + 4);
      puVar25 = puVar15 + uVar27 * 0xc;
      uVar27 = 0;
      do {
        if (puVar15[9] == 0 && uVar20 == 0) {
          uVar20 = *puVar15;
          uVar32 = puVar15[1];
        }
        uVar4 = puVar15[8] + 1;
        if ((uint)uVar27 < uVar4) {
          uVar27 = (ulong)uVar4;
        }
        uVar4 = puVar15[9] + 1;
        if (uVar4 <= uVar31) {
          uVar4 = uVar31;
        }
        if (puVar15[8] == 0) {
          uVar31 = uVar4;
        }
        puVar15 = puVar15 + 0xc;
      } while (puVar15 != puVar25);
      uVar10 = (ulong)uVar31;
      uVar6 = (((((ulong)CONCAT51(CONCAT41(uVar32 >> 0x18,(char)(uVar32 >> 0x10)),
                                  (char)(uVar32 >> 8)) << 8 | (ulong)(uVar32 & 0xff)) << 8 |
                (ulong)(uVar20 >> 0x18)) << 8 | (ulong)(byte)(uVar20 >> 0x10)) << 8 |
              (ulong)(byte)(uVar20 >> 8)) << 8 | (ulong)(uVar20 & 0xff);
    }
    bVar14 = 1;
    iVar19 = 1;
    if (*(int *)(this + 0x154) == 2) {
      iVar19 = 6;
      bVar14 = 6;
      uVar27 = uVar27 / 6;
    }
    uVar20 = (uint)uVar27;
    uStack_d0._4_4_ = 0;
    local_10c = 0;
    uStack_104 = (undefined4)uVar6;
    uStack_100 = (undefined4)(uVar6 >> 0x20);
    local_118 = basist::g_ktx2_file_identifier;
    local_fc = 0;
    local_110 = _set_quality_level;
    uStack_f4 = (uint)bVar14;
    local_ec = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    uStack_d0._0_4_ = 0;
    if (this[2] != (basis_compressor)0x0) {
      local_10c = 0x3b9bcbd0;
    }
    uStack_108 = 1;
    uStack_f8 = 0;
    if (1 < uVar20) {
      uStack_f8 = uVar20;
    }
    uStack_f0 = uVar31;
    if ((*this == (basis_compressor)0x0) || ((*(uint *)(this + 0x234) & 0xfffffffd) == 0)) {
      local_1c8 = (undefined8 *)0x0;
      local_1c0 = 0;
      vector<basisu::vector<unsigned_char>>::resize
                ((vector<basisu::vector<unsigned_char>> *)&local_1c8,uVar10,false);
      local_1b8 = (undefined8 *)0x0;
      local_1b0 = 0;
      vector<basisu::vector<unsigned_char>>::resize
                ((vector<basisu::vector<unsigned_char>> *)&local_1b8,uVar10,false);
      local_1a8 = (void *)0x0;
      local_1a0 = 0;
      iVar26 = *(int *)(this + 0x328);
      if (iVar26 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_1a8,SUB41(iVar26,0),(uint)(iVar26 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        memset((void *)((long)local_1a8 + (local_1a0 & 0xffffffff) * 4),0,
               (ulong)(uint)(iVar26 - (int)local_1a0) << 2);
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar26);
        if (*(int *)(this + 0x328) != 0) {
          lVar21 = 0;
          do {
            while( true ) {
              lVar7 = lVar21 * 0x30 + *(long *)(this + 800);
              *(undefined4 *)((long)local_1a8 + lVar21 * 4) =
                   *(undefined4 *)(local_1c8 + (ulong)*(uint *)(lVar7 + 0x28) * 2 + 1);
              if (*this != (basis_compressor)0x0) break;
              puVar16 = (undefined8 *)(lVar21 * 0x10 + *(long *)(this + 0x5c8));
              uVar32 = *(uint *)(puVar16 + 1);
              if (uVar32 == 0) goto LAB_001170e6;
LAB_00117139:
              uVar27 = (ulong)uVar32;
              pvVar2 = (void *)*puVar16;
              plVar28 = local_1c8 + (ulong)*(uint *)(lVar7 + 0x28) * 2;
              uVar4 = *(uint *)(plVar28 + 1);
              uVar6 = (ulong)uVar4;
              if (uVar27 + uVar6 < 0x100000000) {
                uVar30 = uVar4 + uVar32;
                if (!CARRY4(uVar4,uVar32)) {
                  uVar10 = uVar27;
                  uVar17 = uVar6;
                  if (*(uint *)((long)plVar28 + 0xc) < uVar30) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)plVar28,SUB41(uVar30,0),(uint)(uVar32 == 1),
                               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                    uVar10 = (ulong)(uVar30 - *(uint *)(plVar28 + 1));
                    uVar17 = (ulong)*(uint *)(plVar28 + 1);
                  }
                  memset((void *)(uVar17 + *plVar28),0,uVar10);
                }
                *(uint *)(plVar28 + 1) = uVar30;
              }
              lVar21 = lVar21 + 1;
              memcpy((void *)(*plVar28 + uVar6),pvVar2,uVar27);
              if (*(uint *)(this + 0x328) <= (uint)lVar21) goto LAB_001171fa;
            }
            puVar16 = (undefined8 *)(lVar21 * 0x10 + *(long *)(this + 0x808));
            uVar32 = *(uint *)(puVar16 + 1);
            if (uVar32 != 0) goto LAB_00117139;
LAB_001170e6:
            lVar21 = lVar21 + 1;
          } while ((uint)lVar21 < *(uint *)(this + 0x328));
        }
      }
LAB_001171fa:
      if (local_1b0._4_4_ < (uint)local_1c0) {
        if (local_1b8 != (undefined8 *)0x0) {
          puVar16 = local_1b8 + (local_1b0 & 0xffffffff) * 2;
          puVar18 = puVar16;
          for (puVar29 = local_1b8; puVar29 != puVar16; puVar29 = puVar29 + 2) {
            if ((void *)*puVar29 != (void *)0x0) {
              free((void *)*puVar29);
            }
            puVar18 = local_1b8;
          }
          free(puVar18);
          local_1b8 = (undefined8 *)0x0;
          local_1b0 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(vector<basisu::vector<unsigned_char>> *)&local_1b8,
                   SUB41((uint)local_1c0,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
      }
      else {
        vector<basisu::vector<unsigned_char>>::resize
                  ((vector<basisu::vector<unsigned_char>> *)&local_1b8,0,false);
      }
      if ((uint)local_1c0 != 0) {
        puVar16 = local_1c8 + (local_1c0 & 0xffffffff) * 2;
        puVar18 = local_1b8;
        puVar29 = local_1c8;
        do {
          uVar1 = *(undefined4 *)(puVar29 + 1);
          puVar33 = puVar29 + 2;
          *puVar18 = 0;
          puVar18[1] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar18,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar32 = *(uint *)(puVar29 + 1);
          *(uint *)(puVar18 + 1) = uVar32;
          if (((void *)*puVar18 != (void *)0x0) && ((void *)*puVar29 != (void *)0x0)) {
            memcpy((void *)*puVar18,(void *)*puVar29,(ulong)uVar32);
          }
          puVar18 = puVar18 + 2;
          puVar29 = puVar33;
        } while (puVar16 != puVar33);
      }
      local_1b0 = CONCAT44(local_1b0._4_4_,(uint)local_1c0);
      local_198 = (void *)0x0;
      local_190 = 0;
      if (*this == (basis_compressor)0x0) {
        uVar32 = *(uint *)(this + 0x590);
        uVar4 = *(uint *)(this + 0x5a0);
        local_128 = 0;
        uVar30 = *(uint *)(this + 0x5c0);
        local_148 = (uchar *)0x0;
        local_140 = 0;
        local_138 = ((((ulong)CONCAT61(CONCAT51(CONCAT41(uVar32 >> 0x18,(char)(uVar32 >> 0x10)),
                                                (char)(uVar32 >> 8)),(char)uVar32) << 8 |
                      (ulong)(*(uint *)(this + 0x584) >> 8 & 0xff)) << 8 |
                     (ulong)(*(uint *)(this + 0x584) & 0xff)) << 8 |
                    (ulong)(*(uint *)(this + 0x580) >> 8 & 0xff)) << 8 |
                    (ulong)(*(uint *)(this + 0x580) & 0xff);
        uStack_130 = ((((ulong)CONCAT61(CONCAT51(CONCAT41(uVar30 >> 0x18,(char)(uVar30 >> 0x10)),
                                                 (char)(uVar30 >> 8)),(char)uVar30) << 8 |
                       (ulong)(uVar4 >> 0x18)) << 8 | (ulong)(byte)(uVar4 >> 0x10)) << 8 |
                     (ulong)(byte)(uVar4 >> 8)) << 8 | (ulong)uVar4 & 0xff;
        iVar26 = uVar20 * iVar19 * uVar31;
        if (iVar26 == 0) {
          sVar8 = 0;
        }
        else {
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_148,SUB41(iVar26,0),(uint)(iVar26 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x14,true);
          local_140 = CONCAT44(local_140._4_4_,iVar26);
          sVar8 = (size_t)(uint)(iVar26 * 0x14);
        }
        memset(local_148,0,sVar8);
        lVar7 = 0;
        lVar21 = 0;
        uVar32 = 0;
        if (*(int *)(this + 0x328) != 0) {
          do {
            lVar13 = lVar21 * 3 + *(long *)(this + 800);
            uVar4 = *(uint *)(lVar13 + 0x24);
            iVar26 = *(int *)(lVar13 + 0x28) * uVar20;
            if (*(int *)(this + 0x154) == 2) {
              uVar27 = (ulong)(uVar4 % 6 + (iVar26 + uVar4 / 6) * iVar19);
              if (*(char *)(lVar13 + 0x2c) != '\0') goto LAB_00117e28;
              lVar9 = uVar27 * 0x14;
LAB_00117d89:
              *(undefined4 *)(local_148 + lVar9 + 8) =
                   *(undefined4 *)(*(long *)(this + 0x5c8) + 8 + lVar21);
              *(undefined4 *)(local_148 + lVar9 + 4) = *(undefined4 *)((long)local_1a8 + lVar7);
            }
            else {
              uVar27 = (ulong)((uVar4 + iVar26) * iVar19);
              if (*(char *)(lVar13 + 0x2c) == '\0') {
                lVar9 = uVar27 * 0x14;
                if (*(int *)(this + 0x154) == 3) {
                  bVar14 = *(byte *)(lVar13 + 0x2d);
                  puVar24 = local_148 + lVar9;
                  puVar24[3] = '\0';
                  *puVar24 = (bVar14 ^ 1) * '\x02';
                  puVar24[1] = '\0';
                  puVar24[2] = '\0';
                }
                goto LAB_00117d89;
              }
LAB_00117e28:
              *(undefined4 *)(local_148 + uVar27 * 0x14 + 0x10) =
                   *(undefined4 *)(*(long *)(this + 0x5c8) + 8 + lVar21);
              *(undefined4 *)(local_148 + uVar27 * 0x14 + 0xc) =
                   *(undefined4 *)((long)local_1a8 + lVar7);
            }
            uVar32 = uVar32 + 1;
            lVar21 = lVar21 + 0x10;
            lVar7 = lVar7 + 4;
          } while (uVar32 < *(uint *)(this + 0x328));
        }
        append_vector<basisu::vector<unsigned_char>,unsigned_char>
                  ((vector *)&local_198,(uchar *)&local_138,0x14);
        if ((ulong)(uint)((int)local_140 * 0x14) != 0) {
          append_vector<basisu::vector<unsigned_char>,unsigned_char>
                    ((vector *)&local_198,local_148,(ulong)(uint)((int)local_140 * 0x14));
        }
        uVar20 = *(uint *)(this + 0x590);
        if (uVar20 != 0) {
          uVar27 = local_190 & 0xffffffff;
          pvVar2 = *(void **)(this + 0x588);
          vector<unsigned_char>::resize((vector<unsigned_char> *)&local_198,uVar20 + uVar27,false);
          memcpy((void *)((long)local_198 + uVar27),pvVar2,(ulong)uVar20);
        }
        uVar20 = *(uint *)(this + 0x5a0);
        if (uVar20 != 0) {
          uVar27 = local_190 & 0xffffffff;
          pvVar2 = *(void **)(this + 0x598);
          vector<unsigned_char>::resize((vector<unsigned_char> *)&local_198,uVar20 + uVar27,false);
          memcpy((void *)((long)local_198 + uVar27),pvVar2,(ulong)uVar20);
        }
        uVar20 = *(uint *)(this + 0x5c0);
        if (uVar20 != 0) {
          uVar27 = local_190 & 0xffffffff;
          uVar6 = (ulong)uVar20;
          pvVar2 = *(void **)(this + 0x5b8);
          if (uVar6 + uVar27 >> 0x20 == 0) {
            uVar32 = (uint)local_190 + uVar20;
            if (!CARRY4((uint)local_190,uVar20)) {
              uVar10 = uVar27;
              uVar17 = uVar6;
              if (local_190._4_4_ < uVar32) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(vector *)&local_198,SUB41(uVar32,0),(uint)(uVar20 == 1),
                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                uVar10 = local_190 & 0xffffffff;
                uVar17 = (ulong)(uVar32 - (uint)local_190);
              }
              memset((void *)(uVar10 + (long)local_198),0,uVar17);
            }
            local_190 = CONCAT44(local_190._4_4_,uVar32);
          }
          memcpy((void *)((long)local_198 + uVar27),pvVar2,uVar6);
        }
        local_ec = CONCAT31(local_ec._1_3_,1);
        if (local_148 != (uchar *)0x0) {
          free(local_148);
        }
      }
      local_188 = (undefined8 *)0x0;
      local_180 = 0;
      uVar32 = (uint)&local_188;
      basisu::elemental_vector::increase_capacity
                (uVar32,SUB41(*(undefined4 *)(this + 0x240),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x20,true);
      uVar20 = *(uint *)(this + 0x240);
      local_180._0_4_ = uVar20;
      if (uVar20 == 0) {
        uVar20 = 1;
LAB_001173ea:
        uVar27 = (ulong)(uint)local_180;
        if (local_180._4_4_ < uVar20) {
          basisu::elemental_vector::increase_capacity
                    (uVar32,SUB41(uVar20,0),1,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
        }
        puVar16 = local_188 + (ulong)(uint)local_180 * 4;
        puVar18 = puVar16 + (ulong)(uVar20 - (uint)local_180) * 4;
        for (; puVar16 != puVar18; puVar16 = puVar16 + 4) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
        }
      }
      else {
        puVar16 = local_188 + (ulong)(uVar20 - 1) * 4 + 4;
        puVar18 = local_188;
        puVar29 = *(undefined8 **)(this + 0x238);
        do {
          *puVar18 = 0;
          puVar18[1] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar18,SUB41(*(undefined4 *)(puVar29 + 1),0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar20 = *(uint *)(puVar29 + 1);
          *(uint *)(puVar18 + 1) = uVar20;
          if (((void *)*puVar18 != (void *)0x0) && ((void *)*puVar29 != (void *)0x0)) {
            memcpy((void *)*puVar18,(void *)*puVar29,(ulong)uVar20);
          }
          puVar18[2] = 0;
          uVar1 = *(undefined4 *)(puVar29 + 3);
          puVar18[3] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar18 + 0x10,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                     false);
          uVar20 = *(uint *)(puVar29 + 3);
          *(uint *)(puVar18 + 3) = uVar20;
          if (((void *)puVar18[2] != (void *)0x0) && ((void *)puVar29[2] != (void *)0x0)) {
            memcpy((void *)puVar18[2],(void *)puVar29[2],(ulong)uVar20);
          }
          puVar18 = puVar18 + 4;
          puVar29 = puVar29 + 4;
        } while (puVar18 != puVar16);
        uVar20 = (uint)local_180 + 1;
        if ((uint)local_180 != 0xffffffff) goto LAB_001173ea;
        puVar18 = local_188 + 0x3fffffffc;
        puVar16 = local_188;
        do {
          if ((void *)puVar16[2] != (void *)0x0) {
            free((void *)puVar16[2]);
          }
          if ((void *)*puVar16 != (void *)0x0) {
            free((void *)*puVar16);
          }
          puVar16 = puVar16 + 4;
        } while (puVar18 != puVar16);
        uVar20 = 0;
        uVar27 = 0xffffffff;
      }
      local_180 = CONCAT44(local_180._4_4_,uVar20);
      vector<unsigned_char>::resize((vector<unsigned_char> *)(local_188 + uVar27 * 4),10,false);
      puVar16 = (undefined8 *)local_188[(ulong)((uint)local_180 - 1) * 4];
      *puVar16 = 0x657469727758544b;
      *(undefined2 *)(puVar16 + 1) = 0x72;
      __snprintf_chk(&local_c8,0x80,2,0x80,"Basis Universal %s",&_LC332);
      sVar8 = strlen((char *)&local_c8);
      vector<unsigned_char>::resize
                ((vector<unsigned_char> *)(local_188 + (ulong)((uint)local_180 - 1) * 4 + 2),
                 sVar8 + 1,false);
      sVar8 = strlen((char *)&local_c8);
      puVar16 = local_188;
      uVar27 = sVar8 + 1;
      pcVar11 = (char *)local_188[(ulong)((uint)local_180 - 1) * 4 + 2];
      uVar20 = (uint)uVar27;
      if (uVar20 < 8) {
        if ((uVar27 & 4) == 0) {
          if (uVar20 != 0) {
            *pcVar11 = (char)local_c8;
            if ((uVar27 & 2) != 0) {
              *(undefined2 *)(pcVar11 + ((uVar27 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack_d0 + (uVar27 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)pcVar11 = local_c8;
          *(undefined4 *)(pcVar11 + ((uVar27 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)&uStack_d0 + (uVar27 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)pcVar11 = CONCAT44(uStack_c4,local_c8);
        *(undefined8 *)(pcVar11 + ((uVar27 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)&uStack_d0 + (uVar27 & 0xffffffff));
        lVar21 = (long)pcVar11 - (long)((ulong)(pcVar11 + 8) & 0xfffffffffffffff8);
        pcVar12 = (char *)((long)&local_c8 + -lVar21);
        puVar18 = (undefined8 *)((ulong)(pcVar11 + 8) & 0xfffffffffffffff8);
        for (uVar27 = (ulong)(uVar20 + (int)lVar21 >> 3); uVar27 != 0; uVar27 = uVar27 - 1) {
          *puVar18 = *(undefined8 *)pcVar12;
          pcVar12 = pcVar12 + ((ulong)bVar34 * -2 + 1) * 8;
          puVar18 = puVar18 + (ulong)bVar34 * -2 + 1;
        }
      }
      uVar27 = (local_180 & 0xffffffff) * 0x20;
      puVar18 = local_188 + (local_180 & 0xffffffff) * 4;
      if (local_188 != puVar18) {
        uVar6 = (long)uVar27 >> 5;
        lVar21 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        std::
        __introsort_loop<basist::ktx2_transcoder::key_value*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (local_188,puVar18,(long)(int)lVar21 * 2);
        if (uVar27 < 0x201) {
          std::
          __insertion_sort<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar16,puVar18);
        }
        else {
          puVar29 = puVar16 + 0x40;
          std::
          __insertion_sort<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
                    (puVar16,puVar29);
          for (; puVar18 != puVar29; puVar29 = puVar29 + 4) {
            std::
            __unguarded_linear_insert<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Val_less_iter>
                      (puVar29);
          }
        }
      }
      pvStack_178 = (void *)0x0;
      uStack_170 = 0;
      puStack_168 = (uchar *)0x0;
      uStack_160 = 0;
      get_dfd(this,(vector *)&puStack_168,(ktx2_header *)&local_118);
      local_208 = 2;
      iVar19 = uVar31 * 0x18 + 0x50 + (uint)uStack_160;
LAB_00117627:
      lVar21 = 0;
      uVar20 = (uint)local_180;
      if ((uint)local_180 != 0) {
        do {
          plVar28 = local_188 + lVar21 * 4;
          uVar20 = *(uint *)(plVar28 + 1);
          if (((uVar20 < 2) || (*(char *)(*plVar28 + (ulong)(uVar20 - 1)) != '\0')) ||
             (uVar4 = *(uint *)(plVar28 + 3), 0xfffffffe < (ulong)uVar20 + (ulong)uVar4))
          goto LAB_001177d0;
          uVar27 = uStack_170 & 0xffffffff;
          if (uVar27 + 4 < 0x100000000) {
            uVar30 = (uint)uStack_170 + 4;
            if (uStack_170._4_4_ < uVar30) {
              basisu::elemental_vector::increase_capacity
                        ((uint)&pvStack_178,SUB41(uVar30,0),0,
                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
              sVar8 = (size_t)(uVar30 - (uint)uStack_170);
              uVar6 = uStack_170 & 0xffffffff;
            }
            else {
              sVar8 = 4;
              uVar6 = uVar27;
            }
            memset((void *)(uVar6 + (long)pvStack_178),0,sVar8);
            uStack_170 = CONCAT44(uStack_170._4_4_,uVar30);
          }
          *(uint *)((long)pvStack_178 + uVar27) = uVar20 + uVar4;
          puVar16 = local_188 + lVar21 * 4;
          uVar20 = *(uint *)(puVar16 + 1);
          if (uVar20 != 0) {
            uVar27 = uStack_170 & 0xffffffff;
            pvVar2 = (void *)*puVar16;
            vector<unsigned_char>::resize
                      ((vector<unsigned_char> *)&pvStack_178,uVar20 + uVar27,false);
            memcpy((void *)((long)pvStack_178 + uVar27),pvVar2,(ulong)uVar20);
            puVar16 = local_188 + lVar21 * 4;
          }
          uVar20 = *(uint *)(puVar16 + 3);
          if (uVar20 != 0) {
            uVar27 = uStack_170 & 0xffffffff;
            pvVar2 = (void *)puVar16[2];
            vector<unsigned_char>::resize
                      ((vector<unsigned_char> *)&pvStack_178,uVar20 + uVar27,false);
            memcpy((void *)((long)pvStack_178 + uVar27),pvVar2,(ulong)uVar20);
          }
          uVar4 = 0;
          uVar30 = -(uint)uStack_170;
          uVar20 = (uint)uStack_170;
          if ((uVar30 & 3) != 0) {
            do {
              if (uStack_170._4_4_ <= uVar20) {
                basisu::elemental_vector::increase_capacity
                          ((uint)(vector<unsigned_char> *)&pvStack_178,(bool)((char)uVar20 + '\x01')
                           ,1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
                uVar20 = (uint)uStack_170;
              }
              uVar4 = uVar4 + 1;
              *(undefined1 *)((long)pvStack_178 + (ulong)uVar20) = 0;
              uVar20 = (uint)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar20);
            } while ((uVar30 & 3) != uVar4);
          }
          lVar21 = lVar21 + 1;
          uVar20 = (uint)local_180;
        } while ((uint)lVar21 < (uint)local_180);
      }
      cVar3 = (char)local_ec;
      if ((char)local_ec == '\0') {
        uVar4 = -(iVar19 + (uint)uStack_170) & 0xf;
        if (uVar4 == 0) goto LAB_00118271;
        if (local_208 != 1) goto LAB_00117974;
LAB_001177d0:
        uVar22 = 0;
      }
      else {
LAB_00118271:
        puStack_158 = (uchar *)0x0;
        uStack_150 = 0;
        if (uVar31 == 0) {
          sVar8 = 0;
        }
        else {
          basisu::elemental_vector::increase_capacity
                    ((uint)&puStack_158,SUB41(uVar31,0),(uint)(uVar31 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x18,false);
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar31);
          sVar8 = (size_t)(uVar31 * 0x18);
        }
        memset(puStack_158,0,sVar8);
        this_00 = (vector<unsigned_char> *)(this + 0x798);
        if (*(void **)(this + 0x798) == (void *)0x0) {
          uVar20 = *(uint *)(this + 0x790);
          if (*(uint *)(this + 0x7a4) < uVar20) goto LAB_00118320;
          if (uVar20 < *(uint *)(this + 0x7a4)) {
            local_148 = (uchar *)0x0;
            local_140 = 0;
            if (uVar20 < *(uint *)(this + 0x7a0)) {
              uVar20 = *(uint *)(this + 0x7a0);
            }
            basisu::elemental_vector::increase_capacity
                      ((uint)(vector<unsigned_char> *)&local_148,SUB41(uVar20,0),0,
                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            vector<unsigned_char>::operator=((vector<unsigned_char> *)&local_148,(vector *)this_00);
            pvVar2 = *(void **)(this + 0x798);
            *(uchar **)(this + 0x798) = local_148;
            *(undefined8 *)(this + 0x7a0) = local_140;
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
            }
          }
        }
        else {
          free(*(void **)(this + 0x798));
          uVar20 = *(uint *)(this + 0x790);
          *(undefined8 *)(this + 0x798) = 0;
          *(undefined8 *)(this + 0x7a0) = 0;
          if (uVar20 != 0) {
LAB_00118320:
            basisu::elemental_vector::increase_capacity
                      ((uint)this_00,SUB41(uVar20,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                       false);
          }
        }
        vector<unsigned_char>::resize(this_00,0x50,false);
        if ((ulong)(uint)((int)uStack_150 * 0x18) != 0) {
          append_vector<basisu::vector<unsigned_char>,unsigned_char>
                    ((vector *)this_00,puStack_158,(ulong)(uint)((int)uStack_150 * 0x18));
        }
        uVar20 = *(uint *)(this + 0x7a0);
        uStack_e8 = ((((ulong)CONCAT61(CONCAT51(CONCAT41((uint)uStack_160 >> 0x18,
                                                         (char)(uStack_160 >> 0x10)),
                                                (char)(uStack_160 >> 8)),(char)uStack_160) << 8 |
                      (ulong)(uVar20 >> 0x18)) << 8 | (ulong)(byte)(uVar20 >> 0x10)) << 8 |
                    (ulong)(byte)(uVar20 >> 8)) << 8 | (ulong)(byte)uVar20;
        if ((uStack_160 & 0xffffffff) != 0) {
          append_vector<basisu::vector<unsigned_char>,unsigned_char>
                    ((vector *)this_00,puStack_168,uStack_160 & 0xffffffff);
        }
        if ((uint)uStack_170 != 0) {
          uVar20 = *(uint *)(this + 0x7a0);
          local_dc = (int)CONCAT51(CONCAT41((uint)uStack_170 >> 0x18,(char)(uStack_170 >> 0x10)),
                                   (char)(uStack_170 >> 8)) << 8 | (uint)uStack_170 & 0xff;
          uStack_e0 = (int)CONCAT51(CONCAT41(uVar20 >> 0x18,(char)(uVar20 >> 0x10)),
                                    (char)(uVar20 >> 8)) << 8 | uVar20 & 0xff;
          append_vector<basisu::vector<unsigned_char>>((vector *)this_00,(vector *)&pvStack_178);
        }
        if ((uint)local_190 != 0) {
          iVar19 = *(int *)(this + 0x7a0);
          uVar20 = 0;
          if ((-iVar19 & 7U) != 0) {
            do {
              uVar20 = uVar20 + 1;
              local_148 = (uchar *)((ulong)local_148 & 0xffffffffffffff00);
              vector<unsigned_char>::push_back(this_00,(uchar *)&local_148);
            } while ((-iVar19 & 7U) != uVar20);
          }
          bVar34 = 0;
          pcVar11 = (char *)&uStack_d0;
          do {
            pcVar12 = pcVar11 + 1;
            bVar14 = bVar34 & 0x3f;
            bVar34 = bVar34 + 8;
            *pcVar11 = (char)((uint)local_190 >> bVar14);
            pcVar11 = pcVar12;
          } while (pcVar12 != (char *)&local_c8);
          bVar34 = 0;
          uVar20 = *(uint *)(this + 0x7a0);
          puVar16 = &uStack_d8;
          do {
            puVar18 = (undefined8 *)((long)puVar16 + 1);
            bVar14 = bVar34 & 0x3f;
            bVar34 = bVar34 + 8;
            *(char *)puVar16 = (char)(uVar20 >> bVar14);
            puVar16 = puVar18;
          } while (puVar18 != &uStack_d0);
          append_vector<basisu::vector<unsigned_char>>((vector *)this_00,(vector *)&local_198);
        }
        if ((cVar3 == '\0') && (uVar20 = -*(int *)(this + 0x7a0) & 0xf, uVar20 != 0)) {
          uVar32 = 0;
          __printf_chk(2,
                       "Warning: KTX2 mip level data is not 16-byte aligned. This may trigger a ktx2check validation bug. Writing %u bytes of mipPadding.\n"
                       ,uVar20);
          do {
            uVar32 = uVar32 + 1;
            local_148 = (uchar *)((ulong)local_148 & 0xffffffffffffff00);
            vector<unsigned_char>::push_back(this_00,(uchar *)&local_148);
          } while (uVar32 != uVar20);
        }
        uVar31 = uVar31 - 1;
        if (-1 < (int)uVar31) {
          lVar21 = (ulong)uVar31 << 4;
          lVar7 = (ulong)uVar31 * 0x18;
          do {
            uVar20 = *(uint *)((long)local_1b8 + lVar21 + 8);
            lVar13 = 0;
            do {
              puStack_158[lVar13 + lVar7 + 8] = (uchar)(uVar20 >> ((char)lVar13 * '\b' & 0x3fU));
              lVar13 = lVar13 + 1;
            } while (lVar13 != 8);
            if (*this != (basis_compressor)0x0) {
              uVar20 = *(uint *)((long)local_1c8 + lVar21 + 8);
              lVar13 = 0;
              do {
                puStack_158[lVar13 + lVar7 + 0x10] =
                     (uchar)(uVar20 >> ((char)lVar13 * '\b' & 0x3fU));
                lVar13 = lVar13 + 1;
              } while (lVar13 != 8);
            }
            uVar20 = *(uint *)(this + 0x7a0);
            lVar13 = 0;
            do {
              puStack_158[lVar13 + lVar7] = (uchar)(uVar20 >> ((char)lVar13 * '\b' & 0x3fU));
              lVar13 = lVar13 + 1;
            } while (lVar13 != 8);
            uVar31 = uVar31 - 1;
            lVar7 = lVar7 + -0x18;
            pvVar23 = (vector *)((long)local_1b8 + lVar21);
            lVar21 = lVar21 + -0x10;
            append_vector<basisu::vector<unsigned_char>>((vector *)this_00,pvVar23);
          } while (uVar31 != 0xffffffff);
        }
        puVar16 = *(undefined8 **)(this + 0x798);
        *puVar16 = local_118;
        puVar16[1] = CONCAT44(local_10c,local_110);
        puVar16[2] = CONCAT44(uStack_104,uStack_108);
        puVar16[3] = CONCAT44(local_fc,uStack_100);
        puVar16[4] = CONCAT44(uStack_f4,uStack_f8);
        puVar16[5] = CONCAT44(local_ec,uStack_f0);
        puVar16[6] = uStack_e8;
        puVar16[7] = CONCAT44(local_dc,uStack_e0);
        puVar16[8] = uStack_d8;
        puVar16[9] = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        memcpy((void *)(*(long *)(this + 0x798) + 0x50),puStack_158,
               (ulong)(uint)((int)uStack_150 * 0x18));
        basisu::debug_printf("Total .ktx2 output file size: %u\n",(ulong)*(uint *)(this + 0x7a0));
        if (puStack_158 != (uchar *)0x0) {
          free(puStack_158);
        }
        uVar22 = 1;
      }
      if (puStack_168 != (uchar *)0x0) {
        free(puStack_168);
      }
      if (pvStack_178 != (void *)0x0) {
        free(pvStack_178);
      }
      if (local_188 != (undefined8 *)0x0) {
        puVar29 = local_188 + (local_180 & 0xffffffff) * 4;
        puVar16 = puVar29;
        for (puVar18 = local_188; puVar18 != puVar29; puVar18 = puVar18 + 4) {
          if ((void *)puVar18[2] != (void *)0x0) {
            free((void *)puVar18[2]);
          }
          if ((void *)*puVar18 != (void *)0x0) {
            free((void *)*puVar18);
          }
          puVar16 = local_188;
        }
        free(puVar16);
      }
      if (local_198 != (void *)0x0) {
        free(local_198);
      }
      if (local_1a8 != (void *)0x0) {
        free(local_1a8);
      }
      if (local_1b8 != (undefined8 *)0x0) {
        puVar29 = local_1b8 + (local_1b0 & 0xffffffff) * 2;
        puVar16 = puVar29;
        for (puVar18 = local_1b8; puVar18 != puVar29; puVar18 = puVar18 + 2) {
          if ((void *)*puVar18 != (void *)0x0) {
            free((void *)*puVar18);
          }
          puVar16 = local_1b8;
        }
        free(puVar16);
      }
      if (local_1c8 != (undefined8 *)0x0) {
        puVar29 = local_1c8 + (local_1c0 & 0xffffffff) * 2;
        puVar16 = puVar29;
        for (puVar18 = local_1c8; puVar18 != puVar29; puVar18 = puVar18 + 2) {
          if ((void *)*puVar18 != (void *)0x0) {
            free((void *)*puVar18);
          }
          puVar16 = local_1c8;
        }
        free(puVar16);
      }
      goto LAB_00116fd6;
    }
  }
  uVar22 = 0;
LAB_00116fd6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
LAB_00117974:
  if (uVar4 < 6) {
    uVar4 = uVar4 + 0x10;
  }
  uVar30 = uVar20 + 1;
  if (uVar20 < 0xffffffff) {
    uVar5 = uVar20;
    if (local_180._4_4_ < uVar30) {
      basisu::elemental_vector::increase_capacity
                (uVar32,SUB41(uVar30,0),1,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      uVar5 = (uint)local_180;
    }
    puVar16 = local_188 + (ulong)uVar5 * 4;
    puVar18 = puVar16 + (ulong)(uVar30 - uVar5) * 4;
    for (; puVar16 != puVar18; puVar16 = puVar16 + 4) {
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
    }
  }
  else {
    puVar16 = local_188 + 0x3fffffffc;
    puVar18 = local_188;
    do {
      if ((void *)puVar18[2] != (void *)0x0) {
        free((void *)puVar18[2]);
      }
      if ((void *)*puVar18 != (void *)0x0) {
        free((void *)*puVar18);
      }
      puVar18 = puVar18 + 4;
    } while (puVar16 != puVar18);
  }
  local_180 = CONCAT44(local_180._4_4_,uVar30);
  if (uVar4 != 6) {
    iVar26 = 0;
    do {
      plVar28 = local_188 + (ulong)(uVar30 - 1) * 4;
      uVar20 = *(uint *)(plVar28 + 1);
      if (*(uint *)((long)plVar28 + 0xc) <= uVar20) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar28,(bool)((char)uVar20 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar20 = *(uint *)(plVar28 + 1);
      }
      iVar26 = iVar26 + 1;
      *(undefined1 *)(*plVar28 + (ulong)uVar20) = 0x7f;
      *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
      uVar30 = (uint)local_180;
    } while (iVar26 != uVar4 - 6);
    uVar20 = (uint)local_180 - 1;
  }
  local_148 = (uchar *)((ulong)local_148 & 0xffffffffffffff00);
  vector<unsigned_char>::push_back
            ((vector<unsigned_char> *)(local_188 + (ulong)uVar20 * 4),(uchar *)&local_148);
  local_148 = (uchar *)((ulong)local_148 & 0xffffffffffffff00);
  vector<unsigned_char>::push_back
            ((vector<unsigned_char> *)(local_188 + (ulong)((uint)local_180 - 1) * 4 + 2),
             (uchar *)&local_148);
  puVar18 = local_188;
  uVar27 = (local_180 & 0xffffffff) * 0x20;
  puVar16 = local_188 + (local_180 & 0xffffffff) * 4;
  if (local_188 != puVar16) {
    uVar6 = (long)uVar27 >> 5;
    lVar21 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    std::
    __introsort_loop<basist::ktx2_transcoder::key_value*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (local_188,puVar16,(long)(int)lVar21 * 2);
    if (uVar27 < 0x201) {
      std::__insertion_sort<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
                (puVar18);
    }
    else {
      puVar29 = puVar18 + 0x40;
      std::__insertion_sort<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
                (puVar18);
      for (; puVar16 != puVar29; puVar29 = puVar29 + 4) {
        std::
        __unguarded_linear_insert<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Val_less_iter>
                  (puVar29);
      }
    }
  }
  vector<unsigned_char>::resize((vector<unsigned_char> *)&pvStack_178,0,false);
  local_208 = 1;
  goto LAB_00117627;
}



/* basisu::basis_compressor::process() [clone .part.0] */

ulong __thiscall basisu::basis_compressor::process(basis_compressor *this)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = validate_texture_type_constraints(this);
  if (cVar1 == '\0') {
    return 3;
  }
  if ((this[0x230] != (basis_compressor)0x0) &&
     (cVar1 = validate_ktx2_constraints(this), cVar1 == '\0')) {
    basisu::error_printf
              (
              "Inputs do not satisfy .KTX2 texture constraints: all source images must be the same resolution and have the same number of mipmap levels.\n"
              );
    return 3;
  }
  cVar1 = extract_source_blocks(this);
  if (cVar1 == '\0') {
    return 5;
  }
  if (this[2] == (basis_compressor)0x0) {
    if (*this == (basis_compressor)0x0) {
      __printf_chk(2,"Mode: ETC1S Quality %i, Level %i\n",*(undefined4 *)(this + 0x150),
                   *(undefined4 *)(this + 0x94));
      cVar1 = process_frontend(this);
      if (cVar1 == '\0') {
        return 5;
      }
      if (this[0xdc] != (basis_compressor)0x0) {
        extract_frontend_texture_data(this);
      }
      cVar1 = process_backend(this);
      if (cVar1 == '\0') {
        return 7;
      }
    }
    else {
      __printf_chk(2,"Mode: UASTC LDR Level %u\n",*(uint *)(this + 0x164) & 0xf);
      uVar2 = encode_slices_to_uastc(this);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  else {
    __printf_chk(2,"Mode: UASTC HDR Level %u\n",*(undefined4 *)(this + 0x2b4));
    uVar2 = encode_slices_to_uastc_hdr(this);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  cVar1 = create_basis_file_and_transcode(this);
  if (cVar1 == '\0') {
    return 8;
  }
  if ((this[0x230] != (basis_compressor)0x0) && (cVar1 = create_ktx2_file(this), cVar1 == '\0')) {
    return 0xb;
  }
  cVar1 = write_output_files_and_compute_stats(this);
  return (ulong)(-(uint)(cVar1 == '\0') & 9);
}



/* basisu::basis_compressor::process() */

undefined8 __thiscall basisu::basis_compressor::process(basis_compressor *this)

{
  char cVar1;
  undefined8 uVar2;
  
  basisu::debug_printf("basis_compressor::process\n");
  cVar1 = read_dds_source_images(this);
  if (cVar1 != '\0') {
    cVar1 = read_source_images(this);
    if (cVar1 != '\0') {
      uVar2 = process(this);
      return uVar2;
    }
  }
  return 2;
}



/* basisu::basis_parallel_compress(unsigned int, basisu::vector<basisu::basis_compressor_params>
   const&, basisu::vector<basisu::parallel_results>&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
basisu::
basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  vector<basisu::image_stats> *this_00;
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  vector<basisu::image> *this_01;
  vector<basisu::image> *pvVar20;
  vector<basisu::imagef> *this_02;
  vector<basisu::imagef> *pvVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined2 *puVar24;
  vector *pvVar25;
  vector<basisu::image> *pvVar26;
  vector<basisu::imagef> *pvVar27;
  long *plVar28;
  long *plVar30;
  long in_FS_OFFSET;
  undefined8 uVar31;
  interval_timer *local_c48;
  ulong local_c38 [4];
  job_pool local_c18 [192];
  undefined2 local_b58;
  undefined2 local_b56;
  undefined2 local_b54;
  ulong *local_b50;
  undefined8 local_b48;
  ulong *local_b40;
  undefined8 local_b38;
  vector<basisu::image> local_b30 [16];
  vector<basisu::imagef> local_b20 [16];
  vector<basisu::image> *local_b10;
  undefined8 local_b08;
  vector<basisu::imagef> *local_b00;
  undefined8 local_af8;
  undefined1 *local_af0 [2];
  undefined1 local_ae0 [16];
  undefined2 local_ad0;
  undefined2 local_ace;
  undefined2 local_acc;
  undefined2 local_aca;
  undefined2 local_ac8;
  undefined8 local_ac4;
  undefined8 uStack_abc;
  undefined4 local_ab4;
  undefined2 local_ab0;
  undefined2 local_aae;
  undefined8 local_aac;
  undefined8 uStack_aa4;
  undefined4 local_a9c;
  undefined2 local_a98;
  undefined8 local_a94;
  undefined8 uStack_a8c;
  undefined4 local_a84;
  undefined2 local_a80;
  undefined2 local_a7e;
  undefined2 local_a7c;
  undefined2 local_a7a;
  undefined2 local_a78;
  undefined2 local_a76;
  undefined2 local_a74;
  undefined4 local_a72;
  undefined2 local_a6e;
  undefined2 local_a6c;
  undefined2 local_a6a;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined4 local_a58;
  undefined1 *local_a50 [2];
  undefined1 local_a40 [16];
  undefined2 local_a30;
  undefined2 local_a2e;
  undefined2 local_a2c;
  undefined2 local_a2a;
  undefined2 local_a28;
  undefined8 local_a24;
  undefined8 uStack_a1c;
  undefined4 local_a14;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined8 local_a04;
  undefined8 uStack_9fc;
  undefined4 local_9f4;
  undefined2 local_9f0;
  undefined8 local_9ec;
  undefined8 uStack_9e4;
  undefined4 local_9dc;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined4 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined4 local_9b4;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined4 local_9a0;
  undefined8 local_99c;
  undefined8 uStack_994;
  undefined4 local_98c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined4 local_978;
  undefined2 local_974;
  undefined2 local_972;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined4 local_960;
  undefined8 local_95c;
  undefined8 uStack_954;
  undefined4 local_94c;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined4 local_938;
  undefined8 local_930;
  undefined2 local_928;
  undefined4 local_924;
  undefined8 *local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined4 local_898;
  undefined2 local_894;
  undefined2 local_892;
  undefined2 local_890;
  job_pool *local_888;
  basis_compressor local_878 [768];
  long *local_578;
  uint local_570;
  undefined8 local_560;
  vector local_f0 [16];
  vector local_e0 [144];
  undefined1 local_50;
  char local_4f;
  long local_40;
  long *plVar29;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar24 = (undefined2 *)((ulong)*(uint *)this * 0x2d8 + **(long **)(this + 8));
  local_b58 = *puVar24;
  local_b56 = puVar24[1];
  local_b54 = puVar24[2];
  local_b50 = (ulong *)0x0;
  local_b48 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b50,SUB41(*(undefined4 *)(puVar24 + 8),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x20,true);
  uVar2 = *(uint *)(puVar24 + 8);
  local_b48 = CONCAT44(local_b48._4_4_,uVar2);
  if (uVar2 != 0) {
    puVar22 = *(undefined8 **)(puVar24 + 4) + (ulong)uVar2 * 4;
    puVar23 = *(undefined8 **)(puVar24 + 4);
    puVar19 = local_b50;
    do {
      while( true ) {
        uVar17 = puVar23[1];
        puVar18 = puVar23 + 4;
        puVar16 = puVar19 + 2;
        *puVar19 = (ulong)puVar16;
        puVar4 = (undefined1 *)*puVar23;
        puVar23 = puVar18;
        local_c38[0] = uVar17;
        if (uVar17 < 0x10) break;
        puVar16 = (ulong *)std::__cxx11::string::_M_create(puVar19,(ulong)local_c38);
        *puVar19 = (ulong)puVar16;
        puVar19[2] = local_c38[0];
LAB_00118b4d:
        memcpy(puVar16,puVar4,uVar17);
        puVar19[1] = local_c38[0];
        *(undefined1 *)(*puVar19 + local_c38[0]) = 0;
        puVar19 = puVar19 + 4;
        if (puVar18 == puVar22) goto LAB_00118b6f;
      }
      if (uVar17 == 1) {
        *(undefined1 *)(puVar19 + 2) = *puVar4;
      }
      else if (uVar17 != 0) goto LAB_00118b4d;
      puVar19[1] = uVar17;
      *(undefined1 *)((long)puVar16 + uVar17) = 0;
      puVar19 = puVar19 + 4;
    } while (puVar18 != puVar22);
  }
LAB_00118b6f:
  local_c48 = (interval_timer *)local_c38;
  local_b40 = (ulong *)0x0;
  local_b38 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b40,SUB41(*(undefined4 *)(puVar24 + 0x10),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x20,true);
  uVar2 = *(uint *)(puVar24 + 0x10);
  local_b38 = CONCAT44(local_b38._4_4_,uVar2);
  puVar22 = *(undefined8 **)(puVar24 + 0xc) + (ulong)uVar2 * 4;
  puVar23 = *(undefined8 **)(puVar24 + 0xc);
  puVar19 = local_b40;
  if (uVar2 != 0) {
    do {
      while( true ) {
        uVar17 = puVar23[1];
        puVar18 = puVar23 + 4;
        puVar16 = puVar19 + 2;
        *puVar19 = (ulong)puVar16;
        puVar4 = (undefined1 *)*puVar23;
        puVar23 = puVar18;
        local_c38[0] = uVar17;
        if (uVar17 < 0x10) break;
        puVar16 = (ulong *)std::__cxx11::string::_M_create(puVar19,(ulong)local_c48);
        *puVar19 = (ulong)puVar16;
        puVar19[2] = local_c38[0];
LAB_00118c4b:
        memcpy(puVar16,puVar4,uVar17);
        puVar19[1] = local_c38[0];
        *(undefined1 *)(*puVar19 + local_c38[0]) = 0;
        puVar19 = puVar19 + 4;
        if (puVar18 == puVar22) goto LAB_00118c6d;
      }
      if (uVar17 == 1) {
        *(undefined1 *)(puVar19 + 2) = *puVar4;
      }
      else if (uVar17 != 0) goto LAB_00118c4b;
      puVar19[1] = uVar17;
      *(undefined1 *)((long)puVar16 + uVar17) = 0;
      puVar19 = puVar19 + 4;
    } while (puVar18 != puVar22);
  }
LAB_00118c6d:
  vector<basisu::image>::vector(local_b30,(vector *)(puVar24 + 0x14));
  vector<basisu::imagef>::vector(local_b20,(vector *)(puVar24 + 0x1c));
  local_b10 = (vector<basisu::image> *)0x0;
  local_b08 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b10,SUB41(*(undefined4 *)(puVar24 + 0x28),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x10,false);
  uVar2 = *(uint *)(puVar24 + 0x28);
  local_b08 = CONCAT44(local_b08._4_4_,uVar2);
  pvVar26 = local_b10 + (ulong)uVar2 * 0x10;
  this_01 = local_b10;
  pvVar25 = *(vector **)(puVar24 + 0x24);
  if (uVar2 != 0) {
    do {
      pvVar20 = this_01 + 0x10;
      vector<basisu::image>::vector(this_01,pvVar25);
      this_01 = pvVar20;
      pvVar25 = pvVar25 + 0x10;
    } while (pvVar20 != pvVar26);
  }
  local_b00 = (vector<basisu::imagef> *)0x0;
  local_af8 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b00,SUB41(*(undefined4 *)(puVar24 + 0x30),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x10,false);
  uVar2 = *(uint *)(puVar24 + 0x30);
  pvVar25 = *(vector **)(puVar24 + 0x2c);
  local_af8 = CONCAT44(local_af8._4_4_,uVar2);
  pvVar27 = local_b00 + (ulong)uVar2 * 0x10;
  this_02 = local_b00;
  if (uVar2 != 0) {
    do {
      pvVar21 = this_02 + 0x10;
      vector<basisu::imagef>::vector(this_02,pvVar25);
      this_02 = pvVar21;
      pvVar25 = pvVar25 + 0x10;
    } while (pvVar21 != pvVar27);
  }
  local_af0[0] = local_ae0;
  std::__cxx11::string::_M_construct<char*>
            (local_af0,*(long *)(puVar24 + 0x34),
             *(long *)(puVar24 + 0x38) + *(long *)(puVar24 + 0x34));
  local_ad0 = puVar24[0x44];
  local_aac = *(undefined8 *)(puVar24 + 0x56);
  uStack_aa4 = *(undefined8 *)(puVar24 + 0x5a);
  local_a94 = *(undefined8 *)(puVar24 + 0x62);
  uStack_a8c = *(undefined8 *)(puVar24 + 0x66);
  local_ac4 = *(undefined8 *)(puVar24 + 0x4a);
  uStack_abc = *(undefined8 *)(puVar24 + 0x4e);
  local_ace = puVar24[0x45];
  local_acc = puVar24[0x46];
  local_aca = puVar24[0x47];
  local_ac8 = puVar24[0x48];
  local_ab4 = *(undefined4 *)(puVar24 + 0x52);
  local_ab0 = puVar24[0x54];
  local_aae = puVar24[0x55];
  local_a9c = *(undefined4 *)(puVar24 + 0x5e);
  local_a98 = puVar24[0x60];
  local_a84 = *(undefined4 *)(puVar24 + 0x6a);
  local_a80 = puVar24[0x6c];
  local_a7e = puVar24[0x6d];
  local_a7c = puVar24[0x6e];
  local_a68 = *(undefined8 *)(puVar24 + 0x78);
  uStack_a60 = *(undefined8 *)(puVar24 + 0x7c);
  local_a7a = puVar24[0x6f];
  local_a78 = puVar24[0x70];
  local_a76 = puVar24[0x71];
  local_a74 = puVar24[0x72];
  local_a72 = *(undefined4 *)(puVar24 + 0x73);
  local_a6e = puVar24[0x75];
  local_a6c = puVar24[0x76];
  local_a6a = puVar24[0x77];
  local_a58 = *(undefined4 *)(puVar24 + 0x80);
  local_a50[0] = local_a40;
  std::__cxx11::string::_M_construct<char*>
            (local_a50,*(long *)(puVar24 + 0x84),
             *(long *)(puVar24 + 0x88) + *(long *)(puVar24 + 0x84));
  local_a30 = puVar24[0x94];
  local_a24 = *(undefined8 *)(puVar24 + 0x9a);
  uStack_a1c = *(undefined8 *)(puVar24 + 0x9e);
  local_a04 = *(undefined8 *)(puVar24 + 0xaa);
  uStack_9fc = *(undefined8 *)(puVar24 + 0xae);
  local_9ec = *(undefined8 *)(puVar24 + 0xb6);
  uStack_9e4 = *(undefined8 *)(puVar24 + 0xba);
  local_a2e = puVar24[0x95];
  local_9d8 = *(undefined8 *)(puVar24 + 0xc0);
  uStack_9d0 = *(undefined8 *)(puVar24 + 0xc4);
  local_a2c = puVar24[0x96];
  local_a2a = puVar24[0x97];
  local_a28 = puVar24[0x98];
  local_a14 = *(undefined4 *)(puVar24 + 0xa2);
  local_a10 = *(undefined8 *)(puVar24 + 0xa4);
  local_a08 = *(undefined4 *)(puVar24 + 0xa8);
  local_9f4 = *(undefined4 *)(puVar24 + 0xb2);
  local_9f0 = puVar24[0xb4];
  local_9dc = *(undefined4 *)(puVar24 + 0xbe);
  local_9c8 = *(undefined4 *)(puVar24 + 200);
  local_9c4 = *(undefined8 *)(puVar24 + 0xca);
  uStack_9bc = *(undefined8 *)(puVar24 + 0xce);
  local_9b4 = *(undefined4 *)(puVar24 + 0xd2);
  local_9b0 = *(undefined8 *)(puVar24 + 0xd4);
  uStack_9a8 = *(undefined8 *)(puVar24 + 0xd8);
  local_99c = *(undefined8 *)(puVar24 + 0xde);
  uStack_994 = *(undefined8 *)(puVar24 + 0xe2);
  local_988 = *(undefined8 *)(puVar24 + 0xe8);
  uStack_980 = *(undefined8 *)(puVar24 + 0xec);
  local_9a0 = *(undefined4 *)(puVar24 + 0xdc);
  local_970 = *(undefined8 *)(puVar24 + 0xf4);
  uStack_968 = *(undefined8 *)(puVar24 + 0xf8);
  local_95c = *(undefined8 *)(puVar24 + 0xfe);
  uStack_954 = *(undefined8 *)(puVar24 + 0x102);
  local_98c = *(undefined4 *)(puVar24 + 0xe6);
  local_948 = *(undefined8 *)(puVar24 + 0x108);
  uStack_940 = *(undefined8 *)(puVar24 + 0x10c);
  local_978 = *(undefined4 *)(puVar24 + 0xf0);
  local_974 = puVar24[0xf2];
  local_972 = puVar24[0xf3];
  local_960 = *(undefined4 *)(puVar24 + 0xfc);
  local_94c = *(undefined4 *)(puVar24 + 0x106);
  local_938 = *(undefined4 *)(puVar24 + 0x110);
  local_930 = *(undefined8 *)(puVar24 + 0x114);
  local_928 = puVar24[0x118];
  local_924 = *(undefined4 *)(puVar24 + 0x11a);
  local_920 = (undefined8 *)0x0;
  local_918 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_920,SUB41(*(undefined4 *)(puVar24 + 0x120),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x20,true);
  iVar15 = *(int *)(puVar24 + 0x120);
  local_918 = CONCAT44(local_918._4_4_,iVar15);
  if (iVar15 != 0) {
    puVar23 = local_920 + (ulong)(iVar15 - 1) * 4 + 4;
    puVar22 = local_920;
    puVar18 = *(undefined8 **)(puVar24 + 0x11c);
    do {
      *puVar22 = 0;
      uVar3 = *(undefined4 *)(puVar18 + 1);
      puVar22[1] = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)puVar22,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)(puVar18 + 1);
      *(uint *)(puVar22 + 1) = uVar2;
      if (((void *)*puVar22 != (void *)0x0) && ((void *)*puVar18 != (void *)0x0)) {
        memcpy((void *)*puVar22,(void *)*puVar18,(ulong)uVar2);
      }
      puVar22[2] = 0;
      puVar22[3] = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)puVar22 + 0x10,SUB41(*(undefined4 *)(puVar18 + 3),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)(puVar18 + 3);
      *(uint *)(puVar22 + 3) = uVar2;
      if (((void *)puVar22[2] != (void *)0x0) && ((void *)puVar18[2] != (void *)0x0)) {
        memcpy((void *)puVar22[2],(void *)puVar18[2],(ulong)uVar2);
      }
      puVar22 = puVar22 + 4;
      puVar18 = puVar18 + 4;
    } while (puVar23 != puVar22);
  }
  local_900 = *(undefined4 *)(puVar24 + 300);
  local_910 = *(undefined8 *)(puVar24 + 0x124);
  uStack_908 = *(undefined8 *)(puVar24 + 0x128);
  local_8f8 = *(undefined8 *)(puVar24 + 0x130);
  uStack_8f0 = *(undefined8 *)(puVar24 + 0x134);
  local_8e8 = *(undefined8 *)(puVar24 + 0x138);
  uStack_8e0 = *(undefined8 *)(puVar24 + 0x13c);
  local_8fc = puVar24[0x12e];
  local_8d8 = *(undefined8 *)(puVar24 + 0x140);
  uStack_8d0 = *(undefined8 *)(puVar24 + 0x144);
  local_8c8 = *(undefined8 *)(puVar24 + 0x148);
  uStack_8c0 = *(undefined8 *)(puVar24 + 0x14c);
  local_898 = *(undefined4 *)(puVar24 + 0x160);
  local_8b8 = *(undefined8 *)(puVar24 + 0x150);
  uStack_8b0 = *(undefined8 *)(puVar24 + 0x154);
  local_8a8 = *(undefined8 *)(puVar24 + 0x158);
  uStack_8a0 = *(undefined8 *)(puVar24 + 0x15c);
  local_894 = puVar24[0x162];
  local_892 = puVar24[0x163];
  local_890 = puVar24[0x164];
  local_888 = *(job_pool **)(puVar24 + 0x168);
  puVar23 = (undefined8 *)((ulong)*(uint *)this * 0x50 + **(long **)(this + 0x10));
  basisu::interval_timer::interval_timer(local_c48);
  basisu::interval_timer::start();
  basis_compressor::basis_compressor(local_878);
  basisu::job_pool::job_pool(local_c18,1);
  local_a74 = 0x101;
  if (**(char **)(this + 0x20) != '\0') {
    local_b54 = 0x100;
  }
  local_888 = local_c18;
  cVar14 = basis_compressor::init(local_878,(basis_compressor_params *)&local_b58);
  if (local_4f != '\0') {
    LOCK();
    **(undefined1 **)(this + 0x20) = 1;
    UNLOCK();
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(puVar23 + 1) = 1;
    LOCK();
    **(undefined1 **)(this + 0x18) = 0;
    UNLOCK();
  }
  else {
    basisu::debug_printf("basis_compressor::process\n");
    cVar14 = basis_compressor::read_dds_source_images(local_878);
    if ((cVar14 == '\0') ||
       (cVar14 = basis_compressor::read_source_images(local_878), cVar14 == '\0')) {
      if (local_4f != '\0') {
        LOCK();
        **(undefined1 **)(this + 0x20) = 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar23 + 1) = 2;
    }
    else {
      iVar15 = basis_compressor::process(local_878);
      if (local_4f != '\0') {
        LOCK();
        **(undefined1 **)(this + 0x20) = 1;
        UNLOCK();
      }
      *(int *)(puVar23 + 1) = iVar15;
      if (iVar15 == 0) {
        vector<unsigned_char>::operator=((vector<unsigned_char> *)(puVar23 + 2),local_f0);
        this_00 = (vector<basisu::image_stats> *)(puVar23 + 6);
        vector<unsigned_char>::operator=((vector<unsigned_char> *)(puVar23 + 4),local_e0);
        if (this_00 != (vector<basisu::image_stats> *)&local_578) {
          if (*(uint *)((long)puVar23 + 0x3c) < local_570) {
            puVar22 = (undefined8 *)puVar23[6];
            if (puVar22 != (undefined8 *)0x0) {
              puVar18 = puVar22 + (ulong)*(uint *)(puVar23 + 7) * 0xe;
              if (puVar22 != puVar18) {
                do {
                  if ((undefined8 *)*puVar22 != puVar22 + 2) {
                    operator_delete((undefined8 *)*puVar22,puVar22[2] + 1);
                  }
                  puVar22 = puVar22 + 0xe;
                } while (puVar18 != puVar22);
                puVar18 = (undefined8 *)puVar23[6];
              }
              free(puVar18);
              puVar23[6] = 0;
              puVar23[7] = 0;
            }
            basisu::elemental_vector::increase_capacity
                      ((uint)this_00,SUB41(local_570,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,
                       true);
          }
          else {
            vector<basisu::image_stats>::resize(this_00,0,false);
          }
          uVar17 = (ulong)local_570;
          if (local_570 != 0) {
            plVar28 = local_578;
            plVar30 = (long *)puVar23[6];
            do {
              plVar29 = plVar28 + 0xe;
              *plVar30 = (long)(plVar30 + 2);
              std::__cxx11::string::_M_construct<char*>(plVar30,*plVar28,plVar28[1] + *plVar28);
              lVar5 = plVar28[5];
              lVar6 = plVar28[6];
              lVar7 = plVar28[7];
              lVar8 = plVar28[8];
              lVar9 = plVar28[9];
              lVar10 = plVar28[10];
              lVar11 = plVar28[0xb];
              lVar12 = plVar28[0xc];
              lVar13 = plVar28[0xd];
              plVar30[4] = plVar28[4];
              uVar1 = *(undefined1 *)((long)plVar28 + 0x6c);
              plVar30[5] = lVar5;
              plVar30[6] = lVar6;
              plVar30[7] = lVar7;
              plVar30[8] = lVar8;
              plVar30[9] = lVar9;
              plVar30[10] = lVar10;
              plVar30[0xb] = lVar11;
              plVar30[0xc] = lVar12;
              *(int *)(plVar30 + 0xd) = (int)lVar13;
              *(undefined1 *)((long)plVar30 + 0x6c) = uVar1;
              plVar28 = plVar29;
              plVar30 = plVar30 + 0xe;
            } while (plVar29 != local_578 + uVar17 * 0xe);
          }
          *(uint *)(puVar23 + 7) = local_570;
        }
        puVar23[8] = local_560;
        *(undefined1 *)(puVar23 + 9) = local_50;
        goto LAB_0011963d;
      }
    }
    LOCK();
    **(undefined1 **)(this + 0x18) = 0;
    UNLOCK();
  }
LAB_0011963d:
  uVar31 = basisu::interval_timer::get_elapsed_secs();
  *puVar23 = uVar31;
  basisu::job_pool::~job_pool(local_c18);
  basis_compressor::~basis_compressor(local_878);
  basis_compressor_params::~basis_compressor_params((basis_compressor_params *)&local_b58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Function_handler<void (), basisu::basis_parallel_compress(unsigned int,
   basisu::vector<basisu::basis_compressor_params> const&,
   basisu::vector<basisu::parallel_results>&)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::
  basis_parallel_compress(unsigned_int,basisu::vector<basisu::basis_compressor_params>const&,basisu::vector<basisu::parallel_results>&)
  ::{lambda()#1}::operator()(*(_lambda___1_ **)param_1);
  return;
}



/* basisu::basis_compress(basisu::vector<basisu::image> const*, basisu::vector<basisu::imagef>
   const*, unsigned int, float, unsigned long*, basisu::image_stats*) */

void * basisu::basis_compress
                 (vector *param_1,vector *param_2,uint param_3,float param_4,ulong *param_5,
                 image_stats *param_6)

{
  undefined4 uVar1;
  image_stats iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  vector<basisu::image> *pvVar11;
  long lVar12;
  vector<basisu::imagef> *pvVar13;
  vector<basisu::image> *pvVar14;
  vector<basisu::imagef> *pvVar15;
  undefined8 *puVar16;
  long lVar17;
  void *pvVar18;
  ulong __size;
  undefined8 *puVar19;
  long in_FS_OFFSET;
  bool bVar20;
  job_pool local_c18 [192];
  undefined2 local_b58;
  undefined2 local_b56;
  byte local_b54;
  undefined1 local_b53;
  undefined8 *local_b30 [2];
  undefined8 *local_b20 [2];
  vector<basisu::image> *local_b10;
  uint local_b08;
  int local_b04;
  vector<basisu::imagef> *local_b00;
  uint local_af8;
  int local_af4;
  byte local_ad0;
  undefined1 local_acf;
  byte local_ace;
  undefined1 local_acd;
  byte local_acc;
  undefined1 local_acb;
  byte local_ac8;
  undefined1 local_ac7;
  byte local_ab0;
  undefined1 local_aaf;
  undefined2 local_a7e;
  undefined1 local_a7c;
  undefined1 local_a7b;
  byte local_a7a;
  undefined1 local_a79;
  undefined1 local_a74;
  undefined1 local_a73;
  undefined1 local_a6a;
  undefined1 local_a69;
  byte local_a30;
  undefined1 local_a2f;
  byte local_a2a;
  undefined1 local_a29;
  uint local_a08;
  uint local_9f4;
  byte local_9f0;
  undefined1 local_9ef;
  float local_9ec;
  float local_9e4;
  float local_9e0;
  undefined1 local_9dc;
  char local_928;
  undefined1 local_927;
  undefined4 local_924;
  byte local_8fc;
  undefined1 local_8fb;
  undefined1 local_8f8 [102];
  undefined2 local_892;
  job_pool *local_888;
  basis_compressor local_878 [768];
  long local_578;
  int local_570;
  undefined8 local_f0 [2];
  undefined8 local_e0 [18];
  char local_4f;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (vector *)0x0) {
    iVar3 = *(int *)(param_2 + 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
  }
  if ((iVar3 == 0) || (param_5 == (ulong *)0x0)) {
    pvVar10 = (void *)0x0;
    basisu::error_printf("basis_compress: Invalid parameter\n");
    goto LAB_00119bcf;
  }
  *param_5 = 0;
  uVar8 = 1;
  if ((param_3 & 0x200) != 0) {
    uVar9 = std::thread::hardware_concurrency();
    uVar8 = 1;
    if (uVar9 != 0) {
      uVar8 = uVar9;
    }
  }
  basisu::job_pool::job_pool(local_c18,uVar8);
  basis_compressor_params::basis_compressor_params((basis_compressor_params *)&local_b58);
  local_acf = 1;
  local_ad0 = (byte)(param_3 >> 0x10) & 1;
  local_acb = 1;
  local_ac7 = 1;
  local_acc = (byte)(param_3 >> 10) & 1;
  local_ac8 = (byte)(param_3 >> 0x17) & 1;
  local_888 = local_c18;
  if (param_1 == (vector *)0x0) {
    vector<basisu::imagef>::resize((vector<basisu::imagef> *)local_b20,1,false);
    puVar19 = *(undefined8 **)param_2;
    if (puVar19 != local_b20[0]) {
      *local_b20[0] = *puVar19;
      *(undefined4 *)(local_b20[0] + 1) = *(undefined4 *)(puVar19 + 1);
      if (local_b20[0] + 2 != puVar19 + 2) {
        uVar8 = *(uint *)(puVar19 + 3);
        pvVar10 = (void *)local_b20[0][2];
        if (*(uint *)((long)local_b20[0] + 0x1c) < uVar8) {
          if (pvVar10 != (void *)0x0) {
            free(pvVar10);
            local_b20[0][2] = 0;
            local_b20[0][3] = 0;
            uVar8 = *(uint *)(puVar19 + 3);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(local_b20[0] + 2),SUB41(uVar8,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x10,true);
          uVar8 = *(uint *)(puVar19 + 3);
          pvVar10 = (void *)local_b20[0][2];
        }
        else if (*(int *)(local_b20[0] + 3) != 0) {
          *(undefined4 *)(local_b20[0] + 3) = 0;
          uVar8 = *(uint *)(puVar19 + 3);
        }
        lVar17 = puVar19[2];
        lVar12 = 0;
        if (uVar8 != 0) {
          do {
            uVar6 = ((undefined8 *)(lVar17 + lVar12))[1];
            *(undefined8 *)((long)pvVar10 + lVar12) = *(undefined8 *)(lVar17 + lVar12);
            ((undefined8 *)((long)pvVar10 + lVar12))[1] = uVar6;
            lVar12 = lVar12 + 0x10;
          } while (lVar12 != (ulong)uVar8 << 4);
        }
        *(uint *)(local_b20[0] + 3) = uVar8;
      }
    }
    uVar8 = *(uint *)(param_2 + 8);
    if (1 < uVar8) {
      if (local_af8 != 1) {
        if (local_af8 < 2) {
          uVar8 = 0;
          if (local_af4 == 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_b00,true,1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
            uVar8 = local_af8;
          }
          pvVar13 = local_b00 + (ulong)uVar8 * 0x10;
          pvVar15 = pvVar13 + (ulong)(1 - uVar8) * 0x10;
          for (; pvVar13 != pvVar15; pvVar13 = pvVar13 + 0x10) {
            *(undefined8 *)pvVar13 = 0;
            *(undefined8 *)(pvVar13 + 8) = 0;
          }
        }
        else {
          pvVar13 = local_b00 + 0x10;
          pvVar15 = pvVar13 + (ulong)(local_af8 - 1) * 0x10;
          do {
            pvVar10 = *(void **)pvVar13;
            if (pvVar10 != (void *)0x0) {
              pvVar18 = (void *)((ulong)*(uint *)(pvVar13 + 8) * 0x20 + (long)pvVar10);
              if (pvVar10 != pvVar18) {
                do {
                  if (*(void **)((long)pvVar10 + 0x10) != (void *)0x0) {
                    free(*(void **)((long)pvVar10 + 0x10));
                  }
                  pvVar10 = (void *)((long)pvVar10 + 0x20);
                } while (pvVar18 != pvVar10);
                pvVar18 = *(void **)pvVar13;
              }
              free(pvVar18);
            }
            pvVar13 = pvVar13 + 0x10;
          } while (pvVar15 != pvVar13);
        }
        local_af8 = 1;
        uVar8 = *(uint *)(param_2 + 8);
      }
      vector<basisu::imagef>::resize(local_b00,(ulong)(uVar8 - 1),false);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    vector<basisu::image>::resize((vector<basisu::image> *)local_b30,1,false);
    puVar19 = *(undefined8 **)param_1;
    if (puVar19 != local_b30[0]) {
      *local_b30[0] = *puVar19;
      *(undefined4 *)(local_b30[0] + 1) = *(undefined4 *)(puVar19 + 1);
      if (local_b30[0] + 2 != puVar19 + 2) {
        uVar8 = *(uint *)(puVar19 + 3);
        pvVar10 = (void *)local_b30[0][2];
        if (*(uint *)((long)local_b30[0] + 0x1c) < uVar8) {
          if (pvVar10 != (void *)0x0) {
            free(pvVar10);
            local_b30[0][2] = 0;
            local_b30[0][3] = 0;
            uVar8 = *(uint *)(puVar19 + 3);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(local_b30[0] + 2),SUB41(uVar8,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          pvVar10 = (void *)local_b30[0][2];
          uVar8 = *(uint *)(puVar19 + 3);
        }
        else if (*(int *)(local_b30[0] + 3) != 0) {
          *(undefined4 *)(local_b30[0] + 3) = 0;
          uVar8 = *(uint *)(puVar19 + 3);
        }
        if ((pvVar10 != (void *)0x0) && ((void *)puVar19[2] != (void *)0x0)) {
          memcpy(pvVar10,(void *)puVar19[2],(ulong)uVar8 << 2);
          uVar8 = *(uint *)(puVar19 + 3);
        }
        *(uint *)(local_b30[0] + 3) = uVar8;
      }
    }
    uVar8 = *(uint *)(param_1 + 8);
    if (1 < uVar8) {
      if (local_b08 != 1) {
        if (local_b08 < 2) {
          uVar8 = 0;
          if (local_b04 == 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_b10,true,1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
            uVar8 = local_b08;
          }
          pvVar11 = local_b10 + (ulong)uVar8 * 0x10;
          pvVar14 = pvVar11 + (ulong)(1 - uVar8) * 0x10;
          for (; pvVar11 != pvVar14; pvVar11 = pvVar11 + 0x10) {
            *(undefined8 *)pvVar11 = 0;
            *(undefined8 *)(pvVar11 + 8) = 0;
          }
        }
        else {
          pvVar11 = local_b10 + 0x10;
          pvVar14 = pvVar11 + (ulong)(local_b08 - 1) * 0x10;
          do {
            pvVar10 = *(void **)pvVar11;
            if (pvVar10 != (void *)0x0) {
              pvVar18 = (void *)((long)pvVar10 + (ulong)*(uint *)(pvVar11 + 8) * 0x20);
              if (pvVar10 != pvVar18) {
                do {
                  if (*(void **)((long)pvVar10 + 0x10) != (void *)0x0) {
                    free(*(void **)((long)pvVar10 + 0x10));
                  }
                  pvVar10 = (void *)((long)pvVar10 + 0x20);
                } while (pvVar18 != pvVar10);
                pvVar18 = *(void **)pvVar11;
              }
              free(pvVar18);
            }
            pvVar11 = pvVar11 + 0x10;
          } while (pvVar14 != pvVar11);
        }
        local_b08 = 1;
        uVar8 = *(uint *)(param_1 + 8);
      }
      vector<basisu::image>::resize(local_b10,(ulong)(uVar8 - 1),false);
      if (1 < *(uint *)(param_1 + 8)) {
        lVar17 = 0;
        do {
          puVar19 = (undefined8 *)(*(long *)param_1 + 0x20 + lVar17 * 0x20);
          puVar16 = (undefined8 *)(lVar17 * 0x20 + *(long *)local_b10);
          if (puVar16 != puVar19) {
            *puVar16 = *puVar19;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar19 + 1);
            if (puVar16 + 2 != puVar19 + 2) {
              uVar8 = *(uint *)(puVar19 + 3);
              pvVar10 = (void *)puVar16[2];
              if (*(uint *)((long)puVar16 + 0x1c) < uVar8) {
                if (pvVar10 != (void *)0x0) {
                  free(pvVar10);
                  puVar16[2] = 0;
                  puVar16[3] = 0;
                  uVar8 = *(uint *)(puVar19 + 3);
                }
                basisu::elemental_vector::increase_capacity
                          ((uint)(puVar16 + 2),SUB41(uVar8,0),0,
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                uVar8 = *(uint *)(puVar19 + 3);
                pvVar10 = (void *)puVar16[2];
              }
              else if (*(int *)(puVar16 + 3) != 0) {
                *(undefined4 *)(puVar16 + 3) = 0;
                uVar8 = *(uint *)(puVar19 + 3);
              }
              if ((pvVar10 != (void *)0x0) && ((void *)puVar19[2] != (void *)0x0)) {
                memcpy(pvVar10,(void *)puVar19[2],(ulong)uVar8 << 2);
                uVar8 = *(uint *)(puVar19 + 3);
              }
              *(uint *)(puVar16 + 3) = uVar8;
            }
          }
          iVar3 = (int)lVar17;
          lVar17 = lVar17 + 1;
        } while (iVar3 + 2U < *(uint *)(param_1 + 8));
      }
    }
  }
  local_a73 = 1;
  local_a74 = (param_3 & 0x200) != 0;
  local_b53 = 1;
  local_b54 = (byte)(param_3 >> 8) & 1;
  local_aaf = 1;
  local_a2f = 1;
  local_ab0 = (byte)(param_3 >> 0xd) & 1;
  local_a6a = (param_3 & 0xc000) != 0;
  local_a7e = 0x100;
  local_a2a = (byte)(param_3 >> 0xf) & 1;
  local_a69 = 1;
  local_a29 = 1;
  if ((param_2 == (vector *)0x0) && ((param_3 & 0x200000) == 0)) {
    bVar20 = (param_3 & 0x20000) == 0;
    local_b58 = CONCAT11(1,!bVar20);
    if (bVar20) {
      local_a08 = param_3 & 0xff;
      if (local_a08 == 0) {
        local_a08 = 1;
      }
    }
    else {
      local_9ef = 1;
      local_9f4 = param_3 & 0xf;
      local_9f0 = (byte)(param_3 >> 0x12) & 1;
      if ((local_9e4 <= param_4) && (local_9e4 = local_9e0, param_4 <= local_9e0)) {
        local_9e4 = param_4;
      }
      local_9dc = 1;
      local_9ec = local_9e4;
    }
  }
  else {
    local_b58 = 0x101;
  }
  local_928 = (param_3 & 0x800) != 0;
  local_927 = 1;
  if ((bool)local_928) {
    if (((param_3 & 0x1000) != 0) && (local_b58._0_1_ != (basis_compressor_params)0x0)) {
      local_924 = 2;
    }
    local_8fb = 1;
    local_8fc = local_ab0;
  }
  local_a7c = param_6 != (image_stats *)0x0;
  local_a7b = 1;
  local_a7a = (byte)(param_3 >> 0x13) & 1;
  local_a79 = 1;
  local_acd = 1;
  local_ace = (byte)(param_3 >> 0x14) & 1;
  local_a30 = local_ab0;
  if (((param_3 & 0x200000) != 0) || (param_2 != (vector *)0x0)) {
    local_b56 = 0x101;
    basisu::astc_hdr_codec_options::set_quality_level((int)local_8f8);
  }
  if ((param_3 & 0x400000) != 0) {
    local_892 = 0x101;
  }
  basis_compressor::basis_compressor(local_878);
  cVar7 = basis_compressor::init(local_878,(basis_compressor_params *)&local_b58);
  if (cVar7 == '\0') {
    pvVar10 = (void *)0x0;
    basisu::error_printf("basis_compress: basis_compressor::init() failed!\n");
  }
  else {
    basisu::debug_printf("basis_compressor::process\n");
    cVar7 = basis_compressor::read_dds_source_images(local_878);
    if ((cVar7 == '\0') || (cVar7 = basis_compressor::read_source_images(local_878), cVar7 == '\0'))
    {
      uVar8 = 2;
    }
    else {
      uVar8 = basis_compressor::process(local_878);
      if (uVar8 == 0) {
        if ((param_6 != (image_stats *)0x0) && (local_4f != '\0')) {
          param_6[0x6c] = (image_stats)0x1;
        }
        puVar19 = local_f0;
        if (local_928 != '\0') {
          puVar19 = local_e0;
        }
        __size = (ulong)*(uint *)(puVar19 + 1);
        pvVar10 = malloc(__size);
        if (pvVar10 == (void *)0x0) {
          pvVar10 = (void *)0x0;
          basisu::error_printf("basis_compress: Out of memory\n");
        }
        else {
          __memcpy_chk(pvVar10,*puVar19,__size,__size);
          *param_5 = __size;
          if ((param_6 != (image_stats *)0x0) && (local_570 != 0)) {
            std::__cxx11::string::_M_assign((string *)param_6);
            uVar1 = *(undefined4 *)(local_578 + 0x28);
            *(undefined4 *)(param_6 + 0x20) = *(undefined4 *)(local_578 + 0x20);
            uVar4 = *(undefined4 *)(local_578 + 0x24);
            *(undefined4 *)(param_6 + 0x28) = uVar1;
            uVar1 = *(undefined4 *)(local_578 + 0x2c);
            *(undefined4 *)(param_6 + 0x24) = uVar4;
            *(undefined4 *)(param_6 + 0x2c) = uVar1;
            *(undefined4 *)(param_6 + 0x30) = *(undefined4 *)(local_578 + 0x30);
            *(undefined4 *)(param_6 + 0x34) = *(undefined4 *)(local_578 + 0x34);
            *(undefined4 *)(param_6 + 0x38) = *(undefined4 *)(local_578 + 0x38);
            *(undefined4 *)(param_6 + 0x3c) = *(undefined4 *)(local_578 + 0x3c);
            *(undefined4 *)(param_6 + 0x40) = *(undefined4 *)(local_578 + 0x40);
            *(undefined4 *)(param_6 + 0x44) = *(undefined4 *)(local_578 + 0x44);
            *(undefined4 *)(param_6 + 0x48) = *(undefined4 *)(local_578 + 0x48);
            *(undefined4 *)(param_6 + 0x4c) = *(undefined4 *)(local_578 + 0x4c);
            *(undefined4 *)(param_6 + 0x50) = *(undefined4 *)(local_578 + 0x50);
            *(undefined4 *)(param_6 + 0x54) = *(undefined4 *)(local_578 + 0x54);
            *(undefined4 *)(param_6 + 0x58) = *(undefined4 *)(local_578 + 0x58);
            *(undefined4 *)(param_6 + 0x5c) = *(undefined4 *)(local_578 + 0x5c);
            iVar2 = *(image_stats *)(local_578 + 0x6c);
            *(undefined4 *)(param_6 + 0x60) = *(undefined4 *)(local_578 + 0x60);
            *(undefined4 *)(param_6 + 100) = *(undefined4 *)(local_578 + 100);
            uVar1 = *(undefined4 *)(local_578 + 0x68);
            param_6[0x6c] = iVar2;
            *(undefined4 *)(param_6 + 0x68) = uVar1;
          }
        }
        goto LAB_00119bb4;
      }
    }
    pvVar10 = (void *)0x0;
    basisu::error_printf
              ("basis_compress: basis_compressor::process() failed with error code %u\n",
               (ulong)uVar8);
  }
LAB_00119bb4:
  basis_compressor::~basis_compressor(local_878);
  basis_compressor_params::~basis_compressor_params((basis_compressor_params *)&local_b58);
  basisu::job_pool::~job_pool(local_c18);
LAB_00119bcf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar10;
}



/* basisu::basis_compress(basisu::vector<basisu::image> const&, unsigned int, float, unsigned long*,
   basisu::image_stats*) */

void basisu::basis_compress
               (vector *param_1,uint param_2,float param_3,ulong *param_4,image_stats *param_5)

{
  basis_compress(param_1,(vector *)0x0,param_2,param_3,param_4,param_5);
  return;
}



/* basisu::basis_compress(unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, float, unsigned long*, basisu::image_stats*) */

undefined8
basisu::basis_compress
          (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,float param_6,
          ulong *param_7,image_stats *param_8)

{
  image *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  image *piVar4;
  uint uVar5;
  ulong uVar6;
  image *piVar7;
  uint uVar8;
  long in_FS_OFFSET;
  image *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    param_4 = param_2;
  }
  if ((((param_1 == (uchar *)0x0) || (param_2 == 0)) || (param_3 == 0 || param_4 < param_2)) ||
     (param_7 == (ulong *)0x0)) {
    basisu::error_printf("basis_compress: Invalid parameter\n");
  }
  else {
    *param_7 = 0;
    if ((param_2 < 0x4001) && (param_3 < 0x4001)) {
      local_58 = (image *)0x0;
      local_50 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)(vector *)&local_58,true,1,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      piVar1 = local_58 + (local_50 & 0xffffffff) * 0x20;
      piVar4 = piVar1 + (ulong)(1 - (int)local_50) * 0x20;
      for (; piVar1 != piVar4; piVar1 = piVar1 + 0x20) {
        *(undefined8 *)piVar1 = 0;
        *(undefined4 *)(piVar1 + 8) = 0;
        *(undefined8 *)(piVar1 + 0x10) = 0;
        *(undefined8 *)(piVar1 + 0x18) = 0;
      }
      uVar8 = 0;
      local_50 = CONCAT44(local_50._4_4_,1);
      image::crop(local_58,param_2,param_3,param_2,(color_rgba *)&g_black_color,false);
      uVar5 = 0;
      uVar6 = 0;
      do {
        uVar8 = uVar8 + 1;
        uVar2 = (ulong)uVar5;
        uVar5 = uVar5 + param_4;
        memcpy((void *)(*(long *)(local_58 + 0x10) + uVar6 * 4),param_1 + uVar2 * 4,
               (ulong)param_2 * 4);
        uVar6 = (ulong)((int)uVar6 + param_2);
      } while (uVar8 < param_3);
      uVar3 = basis_compress((vector *)&local_58,(vector *)0x0,param_5,param_6,param_7,param_8);
      if (local_58 != (image *)0x0) {
        piVar7 = local_58 + (local_50 & 0xffffffff) * 0x20;
        piVar1 = piVar7;
        for (piVar4 = local_58; piVar4 != piVar7; piVar4 = piVar4 + 0x20) {
          if (*(void **)(piVar4 + 0x10) != (void *)0x0) {
            free(*(void **)(piVar4 + 0x10));
          }
          piVar1 = local_58;
        }
        free(piVar1);
      }
      goto LAB_0011a544;
    }
    basisu::error_printf("basis_compress: Image too large\n");
  }
  uVar3 = 0;
LAB_0011a544:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* basisu::basis_benchmark_etc1s_opencl(bool*) */

ulong basisu::basis_benchmark_etc1s_opencl(bool *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  void *pvVar15;
  ulong uVar16;
  uint *puVar17;
  double dVar18;
  long lVar19;
  uint *puVar20;
  int iVar21;
  long in_FS_OFFSET;
  double dVar22;
  double local_14a8;
  ulong local_1470;
  uint *local_1468;
  ulong local_1460;
  interval_timer local_1458 [32];
  undefined8 local_1438;
  undefined8 local_1430;
  undefined1 local_1428;
  undefined7 uStack_1427;
  undefined8 local_1418;
  undefined1 local_1410 [16];
  undefined1 local_1400 [16];
  undefined1 local_13f0 [16];
  undefined1 local_13e0 [16];
  undefined4 local_13d0;
  char local_13cc;
  undefined8 local_13c8;
  undefined8 local_13c0 [623];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (bool *)0x0) {
    *param_1 = false;
  }
  uVar5 = basisu::opencl_is_available();
  uVar16 = (ulong)uVar5;
  if ((char)uVar5 == '\0') {
    basisu::error_printf("basis_benchmark_etc1s_opencl: OpenCL support must be enabled first!\n");
    goto LAB_0011aad4;
  }
  local_1468 = (uint *)0x0;
  local_1460 = 0;
  vector<basisu::image>::resize((vector<basisu::image> *)&local_1468,1,true);
  puVar2 = local_1468;
  uVar5 = (uint)local_1468;
  if (((*local_1468 != 0x400) || (local_1468[1] != 0x400)) || (local_1468[2] != 0x400)) {
    pvVar15 = *(void **)(local_1468 + 4);
    local_1468[4] = 0;
    local_1468[5] = 0;
    local_1468[6] = 0;
    local_1468[7] = 0;
    basisu::elemental_vector::increase_capacity
              (uVar5 + 0x10,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    puVar2[6] = 0x100000;
    if (*(long *)puVar2 == 0) {
      puVar1 = *(undefined4 **)(puVar2 + 4);
      puVar13 = puVar1;
      do {
        puVar14 = puVar13 + 1;
        *puVar13 = g_black_color;
        puVar13 = puVar14;
      } while (puVar1 + 0x100000 != puVar14);
    }
    else {
      iVar21 = 0;
      uVar6 = 0;
      do {
        uVar7 = 0;
        do {
          while ((puVar1 = (undefined4 *)(*(long *)(puVar2 + 4) + (ulong)(iVar21 + uVar7) * 4),
                 *puVar2 <= uVar7 || (puVar2[1] <= uVar6))) {
            uVar7 = uVar7 + 1;
            *puVar1 = g_black_color;
            if (uVar7 == 0x400) goto LAB_0011a978;
          }
          uVar8 = puVar2[2] * uVar6 + uVar7;
          uVar7 = uVar7 + 1;
          *puVar1 = *(undefined4 *)((long)pvVar15 + (ulong)uVar8 * 4);
        } while (uVar7 != 0x400);
LAB_0011a978:
        uVar6 = uVar6 + 1;
        iVar21 = iVar21 + 0x400;
      } while (uVar6 != 0x400);
    }
    uVar3 = _LC348;
    puVar2[2] = 0x400;
    *(undefined8 *)puVar2 = uVar3;
    if (pvVar15 != (void *)0x0) {
      free(pvVar15);
    }
  }
  uVar16 = 0x1571;
  lVar19 = 1;
  do {
    uVar16 = (ulong)(((uint)(uVar16 >> 0x1e) ^ (uint)uVar16) * 0x6c078965 + (int)lVar19);
    *(ulong *)((uniform_int_distribution<int> *)&local_13c8 + lVar19 * 8) = uVar16;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x270);
  uVar16 = 200;
  lVar19 = 1;
  local_48 = 0x270;
  local_13c8 = 200;
  do {
    uVar16 = (ulong)(((uint)(uVar16 >> 0x1e) ^ (uint)uVar16) * 0x6c078965 + (int)lVar19);
    *(ulong *)((uniform_int_distribution<int> *)&local_13c8 + lVar19 * 8) = uVar16;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x270);
  iVar21 = 6000;
  do {
    uVar6 = std::uniform_int_distribution<int>::operator()
                      ((uniform_int_distribution<int> *)&local_13c8,(mersenne_twister_engine *)0x0,
                       (param_type *)0x3ff);
    uVar7 = std::uniform_int_distribution<int>::operator()
                      ((uniform_int_distribution<int> *)&local_13c8,(mersenne_twister_engine *)0x0,
                       (param_type *)0x3ff);
    uVar8 = std::uniform_int_distribution<int>::operator()
                      ((uniform_int_distribution<int> *)&local_13c8,(mersenne_twister_engine *)0x1,
                       (param_type *)0x4);
    uVar9 = std::uniform_int_distribution<int>::operator()
                      ((uniform_int_distribution<int> *)&local_13c8,(mersenne_twister_engine *)0x1,
                       (param_type *)0x4);
    iVar10 = std::uniform_int_distribution<int>::operator()
                       ((uniform_int_distribution<int> *)&local_13c8,
                        (mersenne_twister_engine *)0x80000000,(param_type *)0x7fffffff);
    iVar11 = std::uniform_int_distribution<int>::operator()
                       ((uniform_int_distribution<int> *)&local_13c8,
                        (mersenne_twister_engine *)0x80000000,(param_type *)0x7fffffff);
    iVar12 = std::uniform_int_distribution<int>::operator()
                       ((uniform_int_distribution<int> *)&local_13c8,
                        (mersenne_twister_engine *)0x80000000,(param_type *)0x7fffffff);
    puVar4 = local_1438;
    local_1438._4_4_ = SUB84(puVar4,4);
    local_1438._0_4_ = CONCAT13(0xff,CONCAT12((char)iVar10,CONCAT11((char)iVar11,(char)iVar12)));
    iVar10 = std::uniform_int_distribution<int>::operator()
                       ((uniform_int_distribution<int> *)&local_13c8,(mersenne_twister_engine *)0x20
                        ,(param_type *)0x7f);
    basisu::image::debug_text
              (uVar5,uVar6,uVar7,uVar8,(color_rgba *)(ulong)uVar9,(color_rgba *)&local_1438,false,
               (char *)0x0,&_LC349,(ulong)(uint)(int)(char)iVar10);
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  local_1430 = 0;
  iVar21 = 2;
  dVar18 = 1000000000.0;
  local_1428 = 0;
  local_1418 = 0;
  local_13d0 = 0;
  local_13cc = '\0';
  local_1470 = 0;
  local_1410 = (undefined1  [16])0x0;
  local_1400 = (undefined1  [16])0x0;
  local_13f0 = (undefined1  [16])0x0;
  local_13e0 = (undefined1  [16])0x0;
  local_1438 = &local_1428;
  basisu::interval_timer::interval_timer(local_1458);
  while( true ) {
    basisu::interval_timer::start();
    pvVar15 = (void *)basis_compress((vector *)&local_1468,(vector *)0x0,0x22ff,_LC8,&local_1470,
                                     (image_stats *)&local_1438);
    dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
    if (pvVar15 == (void *)0x0) break;
    if (dVar22 <= dVar18) {
      dVar18 = dVar22;
    }
    free(pvVar15);
    if (iVar21 == 1) {
      iVar21 = 2;
      __printf_chk(dVar18,2);
      local_14a8 = _LC346;
      goto LAB_0011a9dc;
    }
    iVar21 = 1;
  }
  basisu::error_printf("basis_benchmark_etc1s_opencl: basis_compress() failed (CPU)!\n");
LAB_0011ab19:
  uVar16 = 0;
LAB_0011aa74:
  if (local_1438 != &local_1428) {
    operator_delete(local_1438,CONCAT71(uStack_1427,local_1428) + 1);
  }
  if (local_1468 != (uint *)0x0) {
    puVar20 = local_1468 + (local_1460 & 0xffffffff) * 8;
    puVar2 = puVar20;
    for (puVar17 = local_1468; puVar17 != puVar20; puVar17 = puVar17 + 8) {
      if (*(void **)(puVar17 + 4) != (void *)0x0) {
        free(*(void **)(puVar17 + 4));
      }
      puVar2 = local_1468;
    }
    free(puVar2);
  }
LAB_0011aad4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011a9dc:
  basisu::interval_timer::start();
  pvVar15 = (void *)basis_compress((vector *)&local_1468,(vector *)0x0,0x23ff,_LC8,&local_1470,
                                   (image_stats *)&local_1438);
  if (local_13cc != '\0') goto LAB_0011ab20;
  dVar22 = (double)basisu::interval_timer::get_elapsed_secs();
  if (pvVar15 == (void *)0x0) {
    uVar16 = 0;
    basisu::error_printf("basis_benchmark_etc1s_opencl: basis_compress() failed (GPU)!\n");
    goto LAB_0011aa74;
  }
  if (dVar22 <= local_14a8) {
    local_14a8 = dVar22;
  }
  free(pvVar15);
  if (iVar21 == 1) {
    __printf_chk(local_14a8,2,"Best GPU time: %3.3f\n");
    uVar16 = CONCAT71((int7)((ulong)dVar18 >> 8),local_14a8 < dVar18);
    goto LAB_0011aa74;
  }
  iVar21 = 1;
  goto LAB_0011a9dc;
LAB_0011ab20:
  basisu::error_printf("basis_benchmark_etc1s_opencl: OpenCL failed!\n");
  free(pvVar15);
  if (param_1 == (bool *)0x0) goto LAB_0011ab19;
  *param_1 = true;
  uVar16 = 0;
  goto LAB_0011aa74;
}



/* basisu::basis_compress(basisu::vector<basisu::imagef> const&, unsigned int, unsigned long*,
   basisu::image_stats*) */

void basisu::basis_compress(vector *param_1,uint param_2,ulong *param_3,image_stats *param_4)

{
  basis_compress((vector *)0x0,param_1,param_2,0.0,param_3,param_4);
  return;
}



/* basisu::vector<basisu::vec<4u, float> >::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::vec<4u,float>>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar2 = (void *)((ulong)param_3 * 0x10 + (long)param_2);
  if (param_2 != pvVar2) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
  }
  return;
}



/* basisu::vector<basisu::pixel_block_hdr>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::pixel_block_hdr>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar6 = (void *)((ulong)param_3 * 0x100 + (long)param_2);
  if (param_2 != pvVar6) {
    pvVar3 = (void *)((long)param_2 + 0x100);
    pvVar5 = param_1;
    pvVar4 = pvVar3;
    while( true ) {
      do {
        lVar2 = 0;
        do {
          uVar1 = ((undefined8 *)((long)param_2 + lVar2))[1];
          *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)((long)param_2 + lVar2);
          ((undefined8 *)((long)param_1 + lVar2))[1] = uVar1;
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != 0x40);
        param_2 = (void *)((long)param_2 + 0x40);
        param_1 = (void *)((long)param_1 + 0x40);
      } while (param_2 != pvVar3);
      param_1 = (void *)((long)pvVar5 + 0x100);
      pvVar3 = (void *)((long)pvVar3 + 0x100);
      if (pvVar6 == pvVar4) break;
      param_2 = pvVar4;
      pvVar5 = param_1;
      pvVar4 = (void *)((long)pvVar4 + 0x100);
    }
  }
  return;
}



/* basisu::vector<basist::ktx2_level_index>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basist::ktx2_level_index>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)((long)param_2 + (ulong)param_3 * 0x18);
  if ((undefined8 *)param_2 != puVar1) {
    do {
                    /* WARNING: Load size is inaccurate */
      puVar2 = (undefined8 *)((long)param_2 + 0x18);
      *(undefined8 *)param_1 = *param_2;
      *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + 8);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_2 + 0x10);
      param_2 = puVar2;
      param_1 = (undefined8 *)((long)param_1 + 0x18);
    } while (puVar1 != puVar2);
  }
  return;
}



/* basisu::vector<basist::ktx2_etc1s_image_desc>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basist::ktx2_etc1s_image_desc>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((long)param_2 + (ulong)param_3 * 0x14);
  if ((undefined4 *)param_2 != puVar1) {
    do {
                    /* WARNING: Load size is inaccurate */
      puVar2 = (undefined4 *)((long)param_2 + 0x14);
      *(undefined4 *)param_1 = *param_2;
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)((long)param_2 + 0x10);
      param_2 = puVar2;
      param_1 = (undefined4 *)((long)param_1 + 0x14);
    } while (puVar1 != puVar2);
  }
  return;
}



/* basisu::vector<basisu::imagef>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::imagef>::object_mover(void *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *__ptr;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  if ((undefined8 *)param_2 != puVar5) {
    do {
      *(undefined8 *)param_1 = 0;
      *(undefined4 *)((long)param_1 + 8) = 0;
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      if (param_2 != param_1) {
                    /* WARNING: Load size is inaccurate */
        *(undefined8 *)param_1 = *param_2;
        *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
        if ((undefined8 *)((long)param_1 + 0x10) == (undefined8 *)((long)param_2 + 0x10)) {
          __ptr = *(void **)((long)param_2 + 0x10);
LAB_0011d41f:
          if (__ptr == (void *)0x0) goto LAB_0011d424;
        }
        else {
          if (*(int *)((long)param_2 + 0x18) == 0) {
            __ptr = *(void **)((long)param_2 + 0x10);
LAB_0011d418:
            *(undefined4 *)((long)param_1 + 0x18) = 0;
            goto LAB_0011d41f;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(undefined8 *)((long)param_1 + 0x10),
                     SUB41(*(int *)((long)param_2 + 0x18),0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x10,true);
          uVar1 = *(uint *)((long)param_2 + 0x18);
          lVar2 = *(long *)((long)param_1 + 0x10);
          __ptr = *(void **)((long)param_2 + 0x10);
          if (uVar1 == 0) goto LAB_0011d418;
          lVar4 = 0;
          do {
            uVar3 = ((undefined8 *)((long)__ptr + lVar4))[1];
            *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)((long)__ptr + lVar4);
            ((undefined8 *)(lVar2 + lVar4))[1] = uVar3;
            lVar4 = lVar4 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar4);
          *(uint *)((long)param_1 + 0x18) = uVar1;
        }
        free(__ptr);
      }
LAB_0011d424:
      param_2 = (void *)((long)param_2 + 0x20);
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar5 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::vector<basisu::image>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::image>::object_mover(void *param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  if ((undefined8 *)param_2 != puVar3) {
    do {
      while( true ) {
        *(undefined8 *)param_1 = 0;
        *(undefined4 *)((long)param_1 + 8) = 0;
        *(undefined8 *)((long)param_1 + 0x10) = 0;
        *(undefined8 *)((long)param_1 + 0x18) = 0;
        if (param_2 != param_1) break;
LAB_0011d4e5:
        param_2 = (void *)((long)param_2 + 0x20);
        param_1 = (void *)((long)param_1 + 0x20);
        if (puVar3 == (undefined8 *)param_2) {
          return;
        }
      }
                    /* WARNING: Load size is inaccurate */
      *(undefined8 *)param_1 = *param_2;
      *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
      if ((undefined8 *)((long)param_1 + 0x10) == (undefined8 *)((long)param_2 + 0x10)) {
        __ptr = *(void **)((long)param_2 + 0x10);
LAB_0011d4db:
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        goto LAB_0011d4e5;
      }
      iVar2 = *(int *)((long)param_2 + 0x18);
      if (iVar2 == 0) {
LAB_0011d4d4:
        __ptr = *(void **)((long)param_2 + 0x10);
        *(int *)((long)param_1 + 0x18) = iVar2;
        goto LAB_0011d4db;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(undefined8 *)((long)param_1 + 0x10),SUB41(iVar2,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      if (*(void **)((long)param_1 + 0x10) == (void *)0x0) {
LAB_0011d4d1:
        iVar2 = *(int *)((long)param_2 + 0x18);
        goto LAB_0011d4d4;
      }
      puVar1 = (uint *)((long)param_2 + 0x18);
      if (*(void **)((long)param_2 + 0x10) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x10),*(void **)((long)param_2 + 0x10),(ulong)*puVar1 << 2
              );
        goto LAB_0011d4d1;
      }
      param_2 = (void *)((long)param_2 + 0x20);
      *(uint *)((long)param_1 + 0x18) = *puVar1;
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar3 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::vector<basisu::gpu_image>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::gpu_image>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)((ulong)param_3 * 0x30 + (long)param_2);
  if ((undefined4 *)param_2 != puVar6) {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar4 = *(undefined8 *)((long)param_2 + 4);
      uVar5 = *(undefined8 *)((long)param_2 + 0xc);
      *(undefined4 *)param_1 = *param_2;
      uVar3 = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined8 *)((long)param_1 + 4) = uVar4;
      *(undefined8 *)((long)param_1 + 0xc) = uVar5;
      *(undefined8 *)((long)param_1 + 0x14) = uVar3;
      uVar1 = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined4 *)((long)param_2 + 0x28);
      *(undefined8 *)((long)param_1 + 0x28) = 0;
      basisu::elemental_vector::increase_capacity
                ((int)param_1 + 0x20,SUB41(uVar1,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
      uVar2 = *(uint *)((long)param_2 + 0x28);
      *(uint *)((long)param_1 + 0x28) = uVar2;
      if (*(void **)((long)param_1 + 0x20) == (void *)0x0) {
LAB_0011d61e:
        if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
          free(*(void **)((long)param_2 + 0x20));
        }
      }
      else if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x20),*(void **)((long)param_2 + 0x20),(ulong)uVar2 << 3);
        goto LAB_0011d61e;
      }
      param_2 = (void *)((long)param_2 + 0x30);
      param_1 = (void *)((long)param_1 + 0x30);
    } while (puVar6 != (undefined4 *)param_2);
  }
  return;
}



/* basisu::vector<basist::ktx2_transcoder::key_value>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basist::ktx2_transcoder::key_value>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  if ((undefined8 *)param_2 != puVar3) {
    do {
      *(undefined8 *)param_1 = 0;
      uVar1 = *(undefined4 *)((long)param_2 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)param_1,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)((long)param_2 + 8);
                    /* WARNING: Load size is inaccurate */
      *(uint *)((long)param_1 + 8) = uVar2;
                    /* WARNING: Load size is inaccurate */
      if ((*param_1 != (void *)0x0) && (*param_2 != (void *)0x0)) {
        memcpy(*param_1,*param_2,(ulong)uVar2);
      }
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      uVar1 = *(undefined4 *)((long)param_2 + 0x18);
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)param_1 + 0x10,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                 false);
      uVar2 = *(uint *)((long)param_2 + 0x18);
      *(uint *)((long)param_1 + 0x18) = uVar2;
      if (*(void **)((long)param_1 + 0x10) == (void *)0x0) {
LAB_0011d701:
        if (*(void **)((long)param_2 + 0x10) != (void *)0x0) {
          free(*(void **)((long)param_2 + 0x10));
        }
      }
      else if (*(void **)((long)param_2 + 0x10) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x10),*(void **)((long)param_2 + 0x10),(ulong)uVar2);
        goto LAB_0011d701;
      }
                    /* WARNING: Load size is inaccurate */
      if (*param_2 != (void *)0x0) {
        free(*param_2);
      }
      param_2 = (void *)((long)param_2 + 0x20);
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar3 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::vector<std::__cxx11::string >::object_mover(void*, void*, unsigned int) */

void basisu::vector<std::__cxx11::string>::object_mover(void *param_1,void *param_2,uint param_3)

{
  ulong __n;
  undefined1 *__src;
  ulong *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  puVar1 = (undefined8 *)((ulong)param_3 * 0x20 + (long)param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((undefined8 *)param_2 != puVar1) {
    do {
      __n = *(ulong *)((long)param_2 + 8);
      __dest = (ulong *)((long)param_1 + 0x10);
      *(ulong **)param_1 = __dest;
                    /* WARNING: Load size is inaccurate */
      __src = *param_2;
      local_48 = __n;
      if (__n < 0x10) {
        if (__n == 1) {
          *(undefined1 *)((long)param_1 + 0x10) = *__src;
        }
        else if (__n != 0) goto LAB_0011d7f5;
      }
      else {
        __dest = (ulong *)std::__cxx11::string::_M_create((ulong *)param_1,(ulong)&local_48);
        *(ulong **)param_1 = __dest;
        *(ulong *)((long)param_1 + 0x10) = local_48;
LAB_0011d7f5:
        memcpy(__dest,__src,__n);
                    /* WARNING: Load size is inaccurate */
        __dest = *param_1;
      }
      *(ulong *)((long)param_1 + 8) = local_48;
      *(undefined1 *)((long)__dest + local_48) = 0;
                    /* WARNING: Load size is inaccurate */
      if (*param_2 != (undefined8 *)((long)param_2 + 0x10)) {
        operator_delete(*param_2,*(long *)((long)param_2 + 0x10) + 1);
      }
      param_2 = (void *)((long)param_2 + 0x20);
      param_1 = (void *)((long)param_1 + 0x20);
    } while (puVar1 != (undefined8 *)param_2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::vector<basisu::image_stats>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::image_stats>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = (long *)((ulong)param_3 * 0x70 + (long)param_2);
  if ((long *)param_2 != plVar12) {
    do {
      lVar2 = *(long *)((long)param_2 + 8);
      *(long **)param_1 = (long *)((long)param_1 + 0x10);
                    /* WARNING: Load size is inaccurate */
      std::__cxx11::string::_M_construct<char*>(param_1,*param_2,lVar2 + *param_2);
      lVar2 = *(long *)((long)param_2 + 0x28);
      lVar4 = *(long *)((long)param_2 + 0x30);
      lVar5 = *(long *)((long)param_2 + 0x38);
      lVar6 = *(long *)((long)param_2 + 0x40);
      lVar7 = *(long *)((long)param_2 + 0x48);
      lVar8 = *(long *)((long)param_2 + 0x50);
      lVar9 = *(long *)((long)param_2 + 0x58);
      lVar10 = *(long *)((long)param_2 + 0x60);
      lVar11 = *(long *)((long)param_2 + 0x68);
      *(long *)((long)param_1 + 0x20) = *(long *)((long)param_2 + 0x20);
      uVar1 = *(undefined1 *)((long)param_2 + 0x6c);
                    /* WARNING: Load size is inaccurate */
      plVar3 = *param_2;
      *(long *)((long)param_1 + 0x28) = lVar2;
      *(long *)((long)param_1 + 0x30) = lVar4;
      *(long *)((long)param_1 + 0x38) = lVar5;
      *(long *)((long)param_1 + 0x40) = lVar6;
      *(undefined1 *)((long)param_1 + 0x6c) = uVar1;
      *(long *)((long)param_1 + 0x48) = lVar7;
      *(long *)((long)param_1 + 0x50) = lVar8;
      *(long *)((long)param_1 + 0x58) = lVar9;
      *(long *)((long)param_1 + 0x60) = lVar10;
      *(int *)((long)param_1 + 0x68) = (int)lVar11;
      if (plVar3 != (long *)((long)param_2 + 0x10)) {
        operator_delete(plVar3,*(long *)((long)param_2 + 0x10) + 1);
      }
      param_2 = (void *)((long)param_2 + 0x70);
      param_1 = (void *)((long)param_1 + 0x70);
    } while (plVar12 != (long *)param_2);
  }
  return;
}



/* basisu::vector<basisu::parallel_results>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::parallel_results>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar17;
  
  puVar19 = (undefined8 *)((ulong)param_3 * 0x50 + (long)param_2);
  if ((undefined8 *)param_2 != puVar19) {
    do {
      uVar3 = *(undefined4 *)((long)param_2 + 8);
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_2;
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      uVar4 = *(undefined4 *)((long)param_2 + 0x18);
      iVar6 = (int)param_1;
      *(undefined4 *)((long)param_1 + 8) = uVar3;
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      *(undefined8 *)param_1 = uVar1;
      basisu::elemental_vector::increase_capacity
                (iVar6 + 0x10,SUB41(uVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar5 = *(uint *)((long)param_2 + 0x18);
      *(uint *)((long)param_1 + 0x18) = uVar5;
      if ((*(void **)((long)param_1 + 0x10) != (void *)0x0) &&
         (*(void **)((long)param_2 + 0x10) != (void *)0x0)) {
        memcpy(*(void **)((long)param_1 + 0x10),*(void **)((long)param_2 + 0x10),(ulong)uVar5);
      }
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      uVar3 = *(undefined4 *)((long)param_2 + 0x28);
      *(undefined8 *)((long)param_1 + 0x28) = 0;
      basisu::elemental_vector::increase_capacity
                (iVar6 + 0x20,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar5 = *(uint *)((long)param_2 + 0x28);
      *(uint *)((long)param_1 + 0x28) = uVar5;
      if ((*(void **)((long)param_1 + 0x20) != (void *)0x0) &&
         (*(void **)((long)param_2 + 0x20) != (void *)0x0)) {
        memcpy(*(void **)((long)param_1 + 0x20),*(void **)((long)param_2 + 0x20),(ulong)uVar5);
      }
      uVar3 = *(undefined4 *)((long)param_2 + 0x38);
      *(undefined8 *)((long)param_1 + 0x30) = 0;
      *(undefined8 *)((long)param_1 + 0x38) = 0;
      basisu::elemental_vector::increase_capacity
                (iVar6 + 0x30,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,true);
      uVar5 = *(uint *)((long)param_2 + 0x38);
      plVar18 = *(long **)((long)param_2 + 0x30);
      *(uint *)((long)param_1 + 0x38) = uVar5;
      if (uVar5 != 0) {
        plVar16 = plVar18;
        plVar20 = *(long **)((long)param_1 + 0x30);
        do {
          plVar17 = plVar16 + 0xe;
          *plVar20 = (long)(plVar20 + 2);
          std::__cxx11::string::_M_construct<char*>(plVar20,*plVar16,plVar16[1] + *plVar16);
          lVar7 = plVar16[5];
          lVar8 = plVar16[6];
          lVar9 = plVar16[7];
          lVar10 = plVar16[8];
          lVar11 = plVar16[9];
          lVar12 = plVar16[10];
          lVar13 = plVar16[0xb];
          lVar14 = plVar16[0xc];
          lVar15 = plVar16[0xd];
          plVar20[4] = plVar16[4];
          uVar2 = *(undefined1 *)((long)plVar16 + 0x6c);
          plVar20[5] = lVar7;
          plVar20[6] = lVar8;
          plVar20[7] = lVar9;
          plVar20[8] = lVar10;
          plVar20[9] = lVar11;
          plVar20[10] = lVar12;
          plVar20[0xb] = lVar13;
          plVar20[0xc] = lVar14;
          *(int *)(plVar20 + 0xd) = (int)lVar15;
          *(undefined1 *)((long)plVar20 + 0x6c) = uVar2;
          plVar16 = plVar17;
          plVar20 = plVar20 + 0xe;
        } while (plVar17 != plVar18 + (ulong)uVar5 * 0xe);
        plVar18 = *(long **)((long)param_2 + 0x30);
      }
      uVar2 = *(undefined1 *)((long)param_2 + 0x48);
      *(undefined8 *)((long)param_1 + 0x40) = *(undefined8 *)((long)param_2 + 0x40);
      *(undefined1 *)((long)param_1 + 0x48) = uVar2;
      if (plVar18 != (long *)0x0) {
        plVar16 = plVar18 + (ulong)*(uint *)((long)param_2 + 0x38) * 0xe;
        if (plVar18 != plVar16) {
          do {
            if ((long *)*plVar18 != plVar18 + 2) {
              operator_delete((long *)*plVar18,plVar18[2] + 1);
            }
            plVar18 = plVar18 + 0xe;
          } while (plVar16 != plVar18);
          plVar16 = *(long **)((long)param_2 + 0x30);
        }
        free(plVar16);
      }
      if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
        free(*(void **)((long)param_2 + 0x20));
      }
      if (*(void **)((long)param_2 + 0x10) != (void *)0x0) {
        free(*(void **)((long)param_2 + 0x10));
      }
      param_2 = (void *)((long)param_2 + 0x50);
      param_1 = (void *)((long)param_1 + 0x50);
    } while (puVar19 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::string_get_extension(std::__cxx11::string const&) */

basisu * __thiscall basisu::string_get_extension(basisu *this,string *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = (char)param_1;
  lVar2 = std::__cxx11::string::rfind(cVar6,0x2f);
  if (lVar2 == -1) {
    lVar2 = std::__cxx11::string::rfind(cVar6,0x2e);
    iVar4 = (int)lVar2;
    if (lVar2 != -1) {
      iVar7 = -1;
      goto LAB_0011dbcb;
    }
LAB_0011dc48:
    *(basisu **)this = this + 0x10;
    std::__cxx11::string::_M_construct<char_const*>(this,&_LC30,&_LC30);
  }
  else {
    iVar7 = (int)lVar2;
    lVar2 = std::__cxx11::string::rfind(cVar6,0x2e);
    iVar4 = (int)lVar2;
    if (lVar2 == -1) {
      if (-2 < iVar7) goto LAB_0011dc48;
      local_58 = &local_48;
      std::__cxx11::string::_M_construct<char*>
                (&local_58,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
    }
    else {
LAB_0011dbcb:
      if (iVar4 <= iVar7) goto LAB_0011dc48;
      local_58 = &local_48;
      std::__cxx11::string::_M_construct<char*>
                (&local_58,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
      if (iVar4 == -2) {
        local_50 = 0;
        *(undefined1 *)local_58 = 0;
      }
      else if (iVar4 != -1) {
        std::__cxx11::string::_M_erase((ulong)&local_58,0);
      }
    }
    *(basisu **)this = this + 0x10;
    if (local_58 == &local_48) {
      uVar5 = local_50 + 1;
      uVar1 = (uint)uVar5;
      if (uVar1 < 8) {
        if ((uVar5 & 4) == 0) {
          if (uVar1 != 0) {
            this[0x10] = local_48._0_1_;
            if ((uVar5 & 2) != 0) {
              *(undefined2 *)(this + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)&local_50 + (uVar5 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)(this + 0x10) = (undefined4)local_48;
          *(undefined4 *)(this + (uVar5 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)&local_50 + (uVar5 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)(this + 0x10) = CONCAT44(local_48._4_4_,(undefined4)local_48);
        *(undefined8 *)(this + (uVar5 & 0xffffffff) + 8) =
             *(undefined8 *)((long)&local_50 + (uVar5 & 0xffffffff));
        lVar2 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
        uVar1 = uVar1 + (int)lVar2 & 0xfffffff8;
        if (7 < uVar1) {
          uVar3 = 0;
          do {
            uVar5 = (ulong)uVar3;
            uVar3 = uVar3 + 8;
            *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)&local_48 + (uVar5 - lVar2));
          } while (uVar3 < uVar1);
        }
      }
    }
    else {
      *(undefined8 **)this = local_58;
      *(ulong *)(this + 0x10) = CONCAT44(local_48._4_4_,(undefined4)local_48);
    }
    *(long *)(this + 8) = local_50;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::string_format[abi:cxx11](char const*, ...) */

char * basisu::string_format_abi_cxx11_(char *param_1,...)

{
  char in_AL;
  size_t sVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined1 *local_8e8;
  undefined1 *local_8e0;
  char local_8d8 [2056];
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_8e8 = &stack0x00000008;
  local_8e0 = local_c8;
  local_8f0 = 0x10;
  local_8ec = 0x30;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  __vsnprintf_chk(local_8d8,0x800,2,0x800,in_RSI,&local_8f0);
  *(char **)param_1 = param_1 + 0x10;
  sVar1 = strlen(local_8d8);
  std::__cxx11::string::_M_construct<char_const*>(param_1,local_8d8,local_8d8 + sVar1);
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::string_split_path(char const*, std::__cxx11::string*, std::__cxx11::string*,
   std::__cxx11::string*, std::__cxx11::string*) */

undefined8
basisu::string_split_path
          (char *param_1,string *param_2,string *param_3,string *param_4,string *param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *psVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  byte bVar15;
  string *local_868;
  undefined8 local_860;
  ulong auStack_858 [2];
  char local_848 [1023];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = strlen(param_1);
  pcVar5 = local_848;
  uVar8 = sVar4 + 1;
  if (uVar8 < 0x401) {
    pcVar6 = local_448;
    pcVar5 = (char *)memcpy(pcVar5,param_1,uVar8);
    if ((uint)uVar8 < 8) {
      if ((uVar8 & 4) == 0) goto LAB_0011e1af;
LAB_0011e210:
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      lVar10 = 4;
    }
    else {
      for (uVar11 = uVar8 >> 3 & 0x1fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined8 *)pcVar6 = *(undefined8 *)param_1;
        param_1 = param_1 + (ulong)bVar15 * -0x10 + 8;
        pcVar6 = pcVar6 + ((ulong)bVar15 * -2 + 1) * 8;
      }
      if ((uVar8 & 4) != 0) goto LAB_0011e210;
LAB_0011e1af:
      lVar10 = 0;
    }
    if ((uVar8 & 2) != 0) {
      *(undefined2 *)(pcVar6 + lVar10) = *(undefined2 *)(param_1 + lVar10);
      lVar10 = lVar10 + 2;
    }
    if ((uVar8 & 1) != 0) {
      pcVar6[lVar10] = param_1[lVar10];
    }
  }
  else {
    pcVar6 = param_1;
    pcVar14 = pcVar5;
    for (lVar10 = 0x7f; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(undefined8 *)pcVar14 = *(undefined8 *)pcVar6;
      pcVar6 = pcVar6 + (ulong)bVar15 * -0x10 + 8;
      pcVar14 = pcVar14 + (ulong)bVar15 * -0x10 + 8;
    }
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
    *(undefined2 *)(pcVar14 + 4) = *(undefined2 *)(pcVar6 + 4);
    cVar1 = pcVar6[6];
    pcVar14[6] = cVar1;
    pcVar6 = local_448;
    for (lVar10 = 0x7f; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(undefined8 *)pcVar6 = *(undefined8 *)param_1;
      param_1 = param_1 + (ulong)bVar15 * -0x10 + 8;
      pcVar6 = pcVar6 + ((ulong)bVar15 * -2 + 1) * 8;
    }
    local_449 = 0;
    uVar2 = *(undefined4 *)param_1;
    pcVar6[6] = cVar1;
    *(undefined4 *)pcVar6 = uVar2;
    *(undefined2 *)(pcVar6 + 4) = *(undefined2 *)(param_1 + 4);
    local_49 = 0;
  }
  if (param_2 != (string *)0x0) {
    std::__cxx11::string::resize((ulong)param_2,'\0');
  }
  pcVar5 = dirname(pcVar5);
  pcVar6 = __xpg_basename(local_448);
  if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
    uVar7 = 0;
    goto LAB_0011e148;
  }
  if (param_3 != (string *)0x0) {
    strlen(pcVar5);
    std::__cxx11::string::_M_replace((ulong)param_3,0,*(char **)(param_3 + 8),(ulong)pcVar5);
    lVar10 = *(long *)(param_3 + 8);
    if ((lVar10 != 0) && (*(char *)(*(long *)param_3 + -1 + lVar10) != '/')) {
      if (lVar10 == 0x3fffffffffffffff) goto LAB_0011e558;
      std::__cxx11::string::_M_append((char *)param_3,0x11dec9);
    }
  }
  if (param_4 != (string *)0x0) {
    strlen(pcVar6);
    std::__cxx11::string::_M_replace((ulong)param_4,0,*(char **)(param_4 + 8),(ulong)pcVar6);
    lVar10 = std::__cxx11::string::rfind((char)param_4,0x2f);
    iVar12 = -1;
    if (lVar10 != -1) {
      iVar12 = (int)lVar10;
    }
    lVar10 = std::__cxx11::string::rfind((char)param_4,0x2e);
    if (lVar10 != -1) {
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if (iVar12 <= (int)lVar10) {
        std::__cxx11::string::resize((ulong)param_4,(char)lVar10);
      }
    }
  }
  if (param_5 != (string *)0x0) {
    strlen(pcVar6);
    std::__cxx11::string::_M_replace((ulong)param_5,0,*(char **)(param_5 + 8),(ulong)pcVar6);
    string_get_extension((basisu *)&local_868,param_5);
    psVar9 = *(string **)param_5;
    if (psVar9 == param_5 + 0x10) {
      if (local_868 == (string *)auStack_858) goto LAB_0011e350;
      *(string **)param_5 = local_868;
      *(ulong *)(param_5 + 8) = local_860;
      *(ulong *)(param_5 + 0x10) = auStack_858[0];
      local_868 = (string *)auStack_858;
    }
    else if (local_868 == (string *)auStack_858) {
LAB_0011e350:
      if (local_860 != 0) {
        if (local_860 == 1) {
          *psVar9 = auStack_858[0]._0_1_;
          psVar9 = *(string **)param_5;
        }
        else {
          uVar3 = (uint)local_860;
          uVar8 = local_860 & 0xffffffff;
          if (uVar3 < 8) {
            if ((local_860 & 4) == 0) {
              if (uVar3 != 0) {
                *psVar9 = auStack_858[0]._0_1_;
                if ((local_860 & 2) == 0) goto LAB_0011e38e;
                *(undefined2 *)(psVar9 + (uVar8 - 2)) =
                     *(undefined2 *)((long)auStack_858 + (uVar8 - 2));
                psVar9 = *(string **)param_5;
              }
            }
            else {
              *(undefined4 *)psVar9 = (undefined4)auStack_858[0];
              *(undefined4 *)(psVar9 + (uVar8 - 4)) =
                   *(undefined4 *)((long)auStack_858 + (uVar8 - 4));
              psVar9 = *(string **)param_5;
            }
          }
          else {
            *(ulong *)psVar9 = auStack_858[0];
            *(undefined8 *)(psVar9 + ((local_860 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)auStack_858 + ((local_860 & 0xffffffff) - 8));
            lVar10 = (long)psVar9 - ((ulong)(psVar9 + 8) & 0xfffffffffffffff8);
            uVar3 = (int)lVar10 + uVar3 & 0xfffffff8;
            if (7 < uVar3) {
              uVar8 = 0;
              do {
                uVar13 = (int)uVar8 + 8;
                *(undefined8 *)(((ulong)(psVar9 + 8) & 0xfffffffffffffff8) + uVar8) =
                     *(undefined8 *)((string *)auStack_858 + (uVar8 - lVar10));
                uVar8 = (ulong)uVar13;
              } while (uVar13 < uVar3);
            }
LAB_0011e38e:
            psVar9 = *(string **)param_5;
          }
        }
      }
      *(ulong *)(param_5 + 8) = local_860;
      psVar9[local_860] = (string)0x0;
    }
    else {
      uVar8 = *(ulong *)(param_5 + 0x10);
      *(string **)param_5 = local_868;
      *(ulong *)(param_5 + 8) = local_860;
      *(ulong *)(param_5 + 0x10) = auStack_858[0];
      local_868 = (string *)auStack_858;
      if (psVar9 != (string *)0x0) {
        local_868 = psVar9;
        auStack_858[0] = uVar8;
      }
    }
    local_860 = 0;
    *local_868 = (string)0x0;
    if (local_868 != (string *)auStack_858) {
      operator_delete(local_868,auStack_858[0] + 1);
    }
    uVar8 = *(ulong *)(param_5 + 8);
    if (uVar8 != 0) {
      uVar11 = *(ulong *)param_5;
      local_860 = 0;
      auStack_858[0] = auStack_858[0] & 0xffffffffffffff00;
      local_868 = (string *)auStack_858;
      std::__cxx11::string::reserve((ulong)&local_868);
      if ((local_860 == 0x3fffffffffffffff) ||
         (std::__cxx11::string::_M_append((char *)&local_868,0x11decb),
         0x3fffffffffffffff - local_860 < uVar8)) {
LAB_0011e558:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)&local_868,uVar11);
      psVar9 = *(string **)param_5;
      if (param_5 + 0x10 == psVar9) {
        if (local_868 == (string *)auStack_858) goto LAB_0011e3d8;
        *(string **)param_5 = local_868;
        *(ulong *)(param_5 + 8) = local_860;
        *(ulong *)(param_5 + 0x10) = auStack_858[0];
        local_868 = (string *)auStack_858;
      }
      else if (local_868 == (string *)auStack_858) {
LAB_0011e3d8:
        if (local_860 != 0) {
          if (local_860 == 1) {
            *psVar9 = auStack_858[0]._0_1_;
            psVar9 = *(string **)param_5;
          }
          else {
            uVar3 = (uint)local_860;
            uVar8 = local_860 & 0xffffffff;
            if (uVar3 < 8) {
              if ((local_860 & 4) == 0) {
                if (uVar3 != 0) {
                  *psVar9 = auStack_858[0]._0_1_;
                  if ((local_860 & 2) == 0) goto LAB_0011e416;
                  *(undefined2 *)(psVar9 + (uVar8 - 2)) =
                       *(undefined2 *)((long)auStack_858 + (uVar8 - 2));
                  psVar9 = *(string **)param_5;
                }
              }
              else {
                *(undefined4 *)psVar9 = (undefined4)auStack_858[0];
                *(undefined4 *)(psVar9 + (uVar8 - 4)) =
                     *(undefined4 *)((long)auStack_858 + (uVar8 - 4));
                psVar9 = *(string **)param_5;
              }
            }
            else {
              *(ulong *)psVar9 = auStack_858[0];
              *(undefined8 *)(psVar9 + ((local_860 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)auStack_858 + ((local_860 & 0xffffffff) - 8));
              lVar10 = (long)psVar9 - ((ulong)(psVar9 + 8) & 0xfffffffffffffff8);
              uVar3 = (int)lVar10 + uVar3 & 0xfffffff8;
              if (7 < uVar3) {
                uVar8 = 0;
                do {
                  uVar13 = (int)uVar8 + 8;
                  *(undefined8 *)(((ulong)(psVar9 + 8) & 0xfffffffffffffff8) + uVar8) =
                       *(undefined8 *)((string *)auStack_858 + (uVar8 - lVar10));
                  uVar8 = (ulong)uVar13;
                } while (uVar13 < uVar3);
              }
LAB_0011e416:
              psVar9 = *(string **)param_5;
            }
          }
        }
        *(ulong *)(param_5 + 8) = local_860;
        psVar9[local_860] = (string)0x0;
      }
      else {
        uVar8 = *(ulong *)(param_5 + 0x10);
        *(string **)param_5 = local_868;
        *(ulong *)(param_5 + 8) = local_860;
        *(ulong *)(param_5 + 0x10) = auStack_858[0];
        local_868 = (string *)auStack_858;
        if (psVar9 != (string *)0x0) {
          local_868 = psVar9;
          auStack_858[0] = uVar8;
        }
      }
      local_860 = 0;
      *local_868 = (string)0x0;
      if (local_868 != (string *)auStack_858) {
        operator_delete(local_868,auStack_858[0] + 1);
      }
    }
  }
  uVar7 = 1;
LAB_0011e148:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::image::crop(unsigned int, unsigned int, unsigned int, basisu::color_rgba const&, bool) */

image * __thiscall
basisu::image::crop(image *this,uint param_1,uint param_2,uint param_3,color_rgba *param_4,
                   bool param_5)

{
  undefined4 *puVar1;
  void *__ptr;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((*(uint *)this != param_1) || (*(uint *)(this + 4) != param_2)) ||
     (*(uint *)(this + 8) != param_3)) {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      uVar5 = *(uint *)(this + 0x18);
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if ((ulong)uVar5 != 0) {
        memmove(*(void **)(this + 0x10),(void *)((long)*(void **)(this + 0x10) + (ulong)uVar5 * 4),0
               );
        *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar5;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      *(undefined8 *)(this + 0x18) = 0;
      iVar4 = param_3 * param_2;
      *(undefined8 *)(this + 0x10) = 0;
      if (iVar4 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar4,0),(uint)(iVar4 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        *(int *)(this + 0x18) = iVar4;
      }
      if (param_5) {
        puVar3 = *(undefined4 **)(this + 0x10);
        if (*(long *)this == 0) {
          puVar1 = puVar3 + *(uint *)(this + 0x18);
          for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
            *puVar3 = *(undefined4 *)param_4;
          }
        }
        else {
          iVar4 = 0;
          uVar5 = 0;
          while( true ) {
            uVar2 = 0;
            while( true ) {
              if ((uVar2 < *(uint *)this) && (uVar5 < *(uint *)(this + 4))) {
                puVar3[iVar4 + uVar2] =
                     *(undefined4 *)((long)__ptr + (ulong)(*(int *)(this + 8) * uVar5 + uVar2) * 4);
              }
              else {
                puVar3[iVar4 + uVar2] = *(undefined4 *)param_4;
              }
              if (param_1 <= uVar2 + 1) break;
              uVar2 = uVar2 + 1;
              puVar3 = *(undefined4 **)(this + 0x10);
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + param_3;
            if (param_2 <= uVar5) break;
            puVar3 = *(undefined4 **)(this + 0x10);
          }
        }
      }
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::imagef::clean_astc_hdr_pixels(float) */

undefined8 __thiscall basisu::imagef::clean_astc_hdr_pixels(imagef *this,float param_1)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  
  uVar10 = 1;
  if (*(int *)(this + 4) != 0) {
    bVar4 = false;
    uVar7 = 0;
    bVar5 = false;
    uVar10 = 1;
    bVar3 = false;
    bVar6 = false;
    bVar2 = false;
    uVar13 = _LC20;
    do {
      uVar9 = 0;
      if (*(int *)this != 0) {
        do {
          pfVar8 = (float *)((ulong)(uVar7 * *(int *)(this + 8) + uVar9) * 0x10 +
                            *(long *)(this + 0x10));
          pfVar1 = pfVar8 + 4;
          do {
            fVar11 = *pfVar8;
            if (NAN(fVar11)) {
              if (!bVar6) {
                fwrite("One or more pixels was NaN, setting to 0.\n",1,0x2a,_stderr);
                bVar6 = true;
                fVar12 = (float)((uint)*pfVar8 & _LC20);
                uVar13 = _LC20;
                goto LAB_0011e963;
              }
LAB_0011e97b:
              if (fVar11 == -0.0) {
                if (!bVar3) {
                  fwrite("One or more pixels was -0, setting them to 0.\n",1,0x2e,_stderr);
                  uVar13 = _LC20;
                }
                bVar3 = true;
              }
              *pfVar8 = 0.0;
              uVar10 = 0;
            }
            else {
              fVar12 = (float)((uint)fVar11 & uVar13);
              if (__LC33 < fVar12 || fVar11 == -0.0) {
LAB_0011e963:
                if (__LC33 < fVar12) {
                  if (!bVar2) {
                    fwrite("One or more pixels was INF, setting to 0.\n",1,0x2a,_stderr);
                    uVar13 = _LC20;
                  }
                  bVar2 = true;
                }
                goto LAB_0011e97b;
              }
              if (fVar11 < 0.0) {
                uVar10 = 0;
                *pfVar8 = 0.0;
                fVar11 = 0.0;
                if (!bVar5) {
                  fwrite("One or more pixels was negative -- setting these pixel components to 0 because ASTC HDR doesn\'t support signed values.\n"
                         ,1,0x77,_stderr);
                  bVar5 = true;
                  fVar11 = *pfVar8;
                  uVar10 = 0;
                  uVar13 = _LC20;
                }
              }
              if (param_1 < fVar11) {
                *pfVar8 = param_1;
                if (!bVar4) {
                  __fprintf_chk((double)param_1,_stderr,2,
                                "One or more pixels had to be clamped to %f.\n");
                  uVar13 = _LC20;
                }
                bVar4 = true;
                uVar10 = 0;
              }
            }
            pfVar8 = pfVar8 + 1;
          } while (pfVar1 != pfVar8);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)this);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(this + 4));
  }
  return uVar10;
}



/* basisu::gpu_image::init(basisu::texture_format, unsigned int, unsigned int) */

void __thiscall basisu::gpu_image::init(gpu_image *this,uint param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_4 + 3U >> 2;
  *(uint *)this = param_2;
  *(int *)(this + 4) = param_3;
  *(int *)(this + 8) = param_4;
  uVar2 = _LC40;
  uVar1 = _LC39;
  if (param_2 == 0x12) {
    *(uint *)(this + 0x10) = uVar5;
    uVar4 = param_3 + 7U >> 3;
    *(undefined8 *)(this + 0x14) = uVar2;
    *(uint *)(this + 0xc) = uVar4;
  }
  else {
    *(uint *)(this + 0x10) = uVar5;
    uVar4 = param_3 + 3U >> 2;
    *(undefined8 *)(this + 0x14) = uVar1;
    uVar3 = 2;
    *(uint *)(this + 0xc) = uVar4;
    if (0x21 < param_2) goto LAB_0011eba3;
  }
  uVar3 = (uint)((byte)CSWTCH_1179[param_2] >> 3);
LAB_0011eba3:
  *(uint *)(this + 0x1c) = uVar3;
  if (*(int *)(this + 0x28) != 0) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  uVar5 = uVar5 * uVar4 * uVar3;
  if (uVar5 == 0) {
    return;
  }
  uVar4 = 0;
  if (*(uint *)(this + 0x2c) < uVar5) {
    basisu::elemental_vector::increase_capacity
              ((int)this + 0x20,SUB41(uVar5,0),(uint)(uVar5 == 1),
               (_func_void_void_ptr_void_ptr_uint *)&DAT_00000008,false);
    uVar4 = *(uint *)(this + 0x28);
  }
  memset((void *)(*(long *)(this + 0x20) + (ulong)uVar4 * 8),0,(ulong)(uVar5 - uVar4) << 3);
  *(uint *)(this + 0x28) = uVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basis_compressor_params::basis_compressor_params() */

void __thiscall
basisu::basis_compressor_params::basis_compressor_params(basis_compressor_params *this)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long *__ptr;
  
  *(basis_compressor_params **)(this + 0x68) = this + 0x78;
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x88) = 0x10000;
  *(undefined2 *)(this + 0x90) = 0;
  uVar5 = (undefined2)_LC43;
  uVar4 = _UNK_001223f8;
  uVar2 = __LC42;
  uVar3 = CONCAT22(_LC43._2_2_,(undefined2)_LC43);
  *(undefined2 *)(this + 0xee) = 0;
  *(undefined8 *)(this + 0x94) = uVar2;
  *(undefined8 *)(this + 0x9c) = uVar4;
  uVar4 = _UNK_00122408;
  uVar2 = __LC44;
  *(undefined4 *)(this + 0xa8) = uVar3;
  uVar6 = _LC46;
  *(undefined8 *)(this + 0xac) = uVar2;
  *(undefined8 *)(this + 0xb4) = uVar4;
  uVar4 = _UNK_00122418;
  uVar2 = __LC45;
  *(undefined8 *)(this + 0xd8) = uVar6;
  uVar3 = CONCAT22(_LC43._2_2_,(undefined2)_LC43);
  *(undefined8 *)(this + 0xc4) = uVar2;
  *(undefined8 *)(this + 0xcc) = uVar4;
  uVar4 = _UNK_00122428;
  uVar2 = CONCAT44(_UNK_00122424,_LC8);
  *(undefined4 *)(this + 0xe0) = uVar3;
  *(undefined8 *)(this + 0xf0) = uVar2;
  *(undefined8 *)(this + 0xf8) = uVar4;
  uVar4 = _UNK_00122438;
  uVar2 = CONCAT44(_UNK_00122434,CONCAT22(_LC43._2_2_,(undefined2)_LC43));
  *(basis_compressor_params **)(this + 0x108) = this + 0x118;
  uVar6 = _LC49;
  *(undefined8 *)(this + 0x134) = uVar2;
  *(undefined8 *)(this + 0x13c) = uVar4;
  this[0xa4] = (basis_compressor_params)0x0;
  this[0xbc] = (basis_compressor_params)0x0;
  *(undefined2 *)(this + 0xc0) = 0;
  this[0xd4] = (basis_compressor_params)0x0;
  *(undefined2 *)(this + 0xe4) = uVar5;
  *(undefined4 *)(this + 0xea) = 0;
  this[0x100] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x118] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x128) = uVar6;
  *(undefined2 *)(this + 0x130) = uVar5;
  this[0x144] = (basis_compressor_params)0x0;
  uVar6 = _LC51;
  uVar4 = _UNK_00122448;
  uVar2 = __LC52;
  *(undefined2 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x148) = uVar6;
  uVar3 = _LC58;
  *(undefined8 *)(this + 0x16c) = uVar2;
  *(undefined8 *)(this + 0x174) = uVar4;
  uVar4 = __LC53;
  uVar2 = CONCAT44(_LC62,_UNK_00122458);
  *(undefined4 *)(this + 0x1e4) = uVar3;
  *(undefined8 *)(this + 0x180) = uVar4;
  *(undefined8 *)(this + 0x188) = uVar2;
  uVar4 = _UNK_00122468;
  uVar2 = __LC54;
  *(undefined4 *)(this + 0x150) = 0xffffffff;
  *(undefined8 *)(this + 0x194) = uVar2;
  *(undefined8 *)(this + 0x19c) = uVar4;
  uVar4 = _UNK_00122478;
  uVar2 = __LC55;
  *(undefined4 *)(this + 0x164) = 2;
  *(undefined8 *)(this + 0x1a8) = uVar2;
  *(undefined8 *)(this + 0x1b0) = uVar4;
  uVar4 = _UNK_00122488;
  uVar2 = __LC56;
  this[0x17c] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x1bc) = uVar2;
  *(undefined8 *)(this + 0x1c4) = uVar4;
  uVar4 = _UNK_00122498;
  uVar2 = __LC165;
  this[400] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x1d0) = uVar2;
  *(undefined8 *)(this + 0x1d8) = uVar4;
  uVar4 = _UNK_001224a8;
  uVar2 = __LC59;
  this[0x1a4] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x1e8) = uVar2;
  *(undefined8 *)(this + 0x1f0) = uVar4;
  *(undefined8 *)(this + 0x1fc) = uVar2;
  *(undefined8 *)(this + 0x204) = uVar4;
  uVar4 = _UNK_001224b8;
  uVar2 = __LC60;
  this[0x1b8] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x210) = uVar2;
  *(undefined8 *)(this + 0x218) = uVar4;
  this[0x1cc] = (basis_compressor_params)0x0;
  this[0x1e0] = (basis_compressor_params)0x0;
  this[0x1f8] = (basis_compressor_params)0x0;
  this[0x20c] = (basis_compressor_params)0x0;
  this[0x220] = (basis_compressor_params)0x0;
  uVar4 = _UNK_001224c8;
  uVar2 = __LC61;
  *(undefined2 *)(this + 0x25c) = 0;
  *(undefined2 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  this[600] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x248) = uVar2;
  *(undefined8 *)(this + 0x250) = uVar4;
  basisu::astc_hdr_codec_options::astc_hdr_codec_options((astc_hdr_codec_options *)(this + 0x260));
  uVar3 = _LC62;
  puVar10 = *(undefined8 **)(this + 8);
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined2 *)(this + 0x8a) = uVar5;
  *(undefined4 *)(this + 0x2c4) = uVar3;
  *(undefined2 *)(this + 0x2c8) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = puVar10 + (ulong)*(uint *)(this + 0x10) * 4;
    if (puVar10 != puVar7) {
      do {
        if ((undefined8 *)*puVar10 != puVar10 + 2) {
          operator_delete((undefined8 *)*puVar10,puVar10[2] + 1);
        }
        puVar10 = puVar10 + 4;
      } while (puVar7 != puVar10);
      puVar7 = *(undefined8 **)(this + 8);
    }
    free(puVar7);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  puVar10 = *(undefined8 **)(this + 0x18);
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = puVar10 + (ulong)*(uint *)(this + 0x20) * 4;
    if (puVar10 != puVar7) {
      do {
        if ((undefined8 *)*puVar10 != puVar10 + 2) {
          operator_delete((undefined8 *)*puVar10,puVar10[2] + 1);
        }
        puVar10 = puVar10 + 4;
      } while (puVar7 != puVar10);
      puVar7 = *(undefined8 **)(this + 0x18);
    }
    free(puVar7);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  pvVar8 = *(void **)(this + 0x28);
  if (pvVar8 != (void *)0x0) {
    pvVar11 = (void *)((ulong)*(uint *)(this + 0x30) * 0x20 + (long)pvVar8);
    if (pvVar8 != pvVar11) {
      do {
        if (*(void **)((long)pvVar8 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar8 + 0x10));
        }
        pvVar8 = (void *)((long)pvVar8 + 0x20);
      } while (pvVar11 != pvVar8);
      pvVar11 = *(void **)(this + 0x28);
    }
    free(pvVar11);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  plVar9 = *(long **)(this + 0x48);
  if (plVar9 != (long *)0x0) {
    __ptr = plVar9 + (ulong)*(uint *)(this + 0x50) * 2;
    if (plVar9 != __ptr) {
      do {
        pvVar8 = (void *)*plVar9;
        if (pvVar8 != (void *)0x0) {
          pvVar11 = (void *)((long)pvVar8 + (ulong)*(uint *)(plVar9 + 1) * 0x20);
          if (pvVar8 != pvVar11) {
            do {
              if (*(void **)((long)pvVar8 + 0x10) != (void *)0x0) {
                free(*(void **)((long)pvVar8 + 0x10));
              }
              pvVar8 = (void *)((long)pvVar8 + 0x20);
            } while (pvVar11 != pvVar8);
            pvVar11 = (void *)*plVar9;
          }
          free(pvVar11);
        }
        plVar9 = plVar9 + 2;
      } while (__ptr != plVar9);
      __ptr = *(long **)(this + 0x48);
    }
    free(__ptr);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined8 *)(this + 0x70) = 0;
  **(undefined1 **)(this + 0x68) = 0;
  uVar3 = CONCAT22(_LC43._2_2_,(undefined2)_LC43);
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xa8) = uVar3;
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x98);
  uVar2 = _LC46;
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(this + 200);
  *(undefined4 *)(this + 0x8c) = 0;
  this[0xbc] = (basis_compressor_params)0x0;
  this[0xa4] = (basis_compressor_params)0x0;
  *(undefined2 *)(this + 0xc0) = 0;
  this[0xd4] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0xe0) = 0x100000100000001;
  *(undefined8 *)(this + 0xe8) = 0x302;
  this[0x100] = (basis_compressor_params)0x0;
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xf4);
  std::__cxx11::string::_M_replace((ulong)(this + 0x108),0,*(char **)(this + 0x110),0x11ec39);
  fVar1 = *(float *)(this + 0xf8);
  if ((*(float *)(this + 0xf8) <= _LC8) &&
     (fVar1 = *(float *)(this + 0xfc), _LC8 <= *(float *)(this + 0xfc))) {
    fVar1 = _LC8;
  }
  *(float *)(this + 0xf0) = fVar1;
  *(undefined1 (*) [16])(this + 0x154) = (undefined1  [16])0x0;
  uVar2 = _LC49;
  this[0x100] = (basis_compressor_params)0x1;
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(this + 0x170);
  *(undefined8 *)(this + 0x128) = uVar2;
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(this + 0x198);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x138);
  uVar3 = _LC58;
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(this + 0x1ac);
  *(undefined4 *)(this + 0x1e4) = uVar3;
  *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(this + 0x1c0);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(this + 0x1ec);
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(this + 0x1d4);
  *(undefined2 *)(this + 0x130) = uVar5;
  this[0x144] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0xffffffff;
  *(undefined4 *)(this + 0x164) = 2;
  *(undefined2 *)(this + 0x168) = 0;
  this[0x17c] = (basis_compressor_params)0x0;
  this[0x1a4] = (basis_compressor_params)0x0;
  this[0x1b8] = (basis_compressor_params)0x0;
  this[0x1cc] = (basis_compressor_params)0x0;
  this[0x1e0] = (basis_compressor_params)0x0;
  this[0x1f8] = (basis_compressor_params)0x0;
  puVar10 = *(undefined8 **)(this + 0x238);
  this[0x20c] = (basis_compressor_params)0x0;
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(this + 0x200);
  this[0x220] = (basis_compressor_params)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined2 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0x214);
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = puVar10 + (ulong)*(uint *)(this + 0x240) * 4;
    if (puVar10 != puVar7) {
      do {
        if ((void *)puVar10[2] != (void *)0x0) {
          free((void *)puVar10[2]);
        }
        if ((void *)*puVar10 != (void *)0x0) {
          free((void *)*puVar10);
        }
        puVar10 = puVar10 + 4;
      } while (puVar7 != puVar10);
      puVar7 = *(undefined8 **)(this + 0x238);
    }
    free(puVar7);
    *(undefined8 *)(this + 0x238) = 0;
    *(undefined8 *)(this + 0x240) = 0;
  }
  this[600] = (basis_compressor_params)0x0;
  *(undefined2 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x248) = *(undefined4 *)(this + 0x24c);
  *(undefined2 *)(this + 0x25c) = 0;
  uVar3 = _LC62;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2c4) = uVar3;
  return;
}



/* basisu::basis_compressor_params::~basis_compressor_params() */

void __thiscall
basisu::basis_compressor_params::~basis_compressor_params(basis_compressor_params *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  puVar2 = *(undefined8 **)(this + 0x238);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulong)*(uint *)(this + 0x240) * 4;
    if (puVar2 != puVar4) {
      do {
        if ((void *)puVar2[2] != (void *)0x0) {
          free((void *)puVar2[2]);
        }
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 4;
      } while (puVar4 != puVar2);
      puVar4 = *(undefined8 **)(this + 0x238);
    }
    free(puVar4);
  }
  if (*(basis_compressor_params **)(this + 0x108) != this + 0x118) {
    operator_delete(*(basis_compressor_params **)(this + 0x108),*(long *)(this + 0x118) + 1);
  }
  if (*(basis_compressor_params **)(this + 0x68) != this + 0x78) {
    operator_delete(*(basis_compressor_params **)(this + 0x68),*(long *)(this + 0x78) + 1);
  }
  plVar5 = *(long **)(this + 0x58);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + (ulong)*(uint *)(this + 0x60) * 2;
    if (plVar5 != plVar6) {
      do {
        pvVar1 = (void *)*plVar5;
        if (pvVar1 != (void *)0x0) {
          pvVar3 = (void *)((ulong)*(uint *)(plVar5 + 1) * 0x20 + (long)pvVar1);
          if (pvVar1 != pvVar3) {
            do {
              if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
                free(*(void **)((long)pvVar1 + 0x10));
              }
              pvVar1 = (void *)((long)pvVar1 + 0x20);
            } while (pvVar3 != pvVar1);
            pvVar3 = (void *)*plVar5;
          }
          free(pvVar3);
        }
        plVar5 = plVar5 + 2;
      } while (plVar6 != plVar5);
      plVar6 = *(long **)(this + 0x58);
    }
    free(plVar6);
  }
  plVar5 = *(long **)(this + 0x48);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + (ulong)*(uint *)(this + 0x50) * 2;
    if (plVar5 != plVar6) {
      do {
        pvVar1 = (void *)*plVar5;
        if (pvVar1 != (void *)0x0) {
          pvVar3 = (void *)((ulong)*(uint *)(plVar5 + 1) * 0x20 + (long)pvVar1);
          if (pvVar1 != pvVar3) {
            do {
              if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
                free(*(void **)((long)pvVar1 + 0x10));
              }
              pvVar1 = (void *)((long)pvVar1 + 0x20);
            } while (pvVar3 != pvVar1);
            pvVar3 = (void *)*plVar5;
          }
          free(pvVar3);
        }
        plVar5 = plVar5 + 2;
      } while (plVar6 != plVar5);
      plVar6 = *(long **)(this + 0x48);
    }
    free(plVar6);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x40) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x38);
    }
    free(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)((ulong)*(uint *)(this + 0x30) * 0x20 + (long)pvVar1);
    if (pvVar1 != pvVar3) {
      do {
        if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x28);
    }
    free(pvVar3);
  }
  puVar2 = *(undefined8 **)(this + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulong)*(uint *)(this + 0x20) * 4;
    if (puVar2 != puVar4) {
      do {
        if ((undefined8 *)*puVar2 != puVar2 + 2) {
          operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
        }
        puVar2 = puVar2 + 4;
      } while (puVar4 != puVar2);
      puVar4 = *(undefined8 **)(this + 0x18);
    }
    free(puVar4);
  }
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = puVar2 + (ulong)*(uint *)(this + 0x10) * 4;
  if (puVar2 != puVar4) {
    do {
      if ((undefined8 *)*puVar2 != puVar2 + 2) {
        operator_delete((undefined8 *)*puVar2,puVar2[2] + 1);
      }
      puVar2 = puVar2 + 4;
    } while (puVar4 != puVar2);
    puVar4 = *(undefined8 **)(this + 8);
  }
  free(puVar4);
  return;
}



/* basisu::basisu_frontend::~basisu_frontend() */

void __thiscall basisu::basisu_frontend::~basisu_frontend(basisu_frontend *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if (*(void **)(this + 0x180) != (void *)0x0) {
    free(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    free(*(void **)(this + 0x170));
  }
  puVar2 = *(undefined8 **)(this + 0x160);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 0x168) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0x160);
    }
    free(puVar3);
  }
  if (*(void **)(this + 0x150) != (void *)0x0) {
    free(*(void **)(this + 0x150));
  }
  puVar2 = *(undefined8 **)(this + 0x140);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 0x148) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0x140);
    }
    free(puVar3);
  }
  if (*(void **)(this + 0x130) != (void *)0x0) {
    free(*(void **)(this + 0x130));
  }
  puVar2 = *(undefined8 **)(this + 0x120);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 0x128) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0x120);
    }
    free(puVar3);
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    free(*(void **)(this + 0x110));
  }
  pvVar1 = *(void **)(this + 0x100);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = (void *)((long)pvVar1 + (ulong)*(uint *)(this + 0x108) * 0x38);
    if (pvVar1 != pvVar4) {
      do {
        if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x20));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x38);
      } while (pvVar4 != pvVar1);
      pvVar4 = *(void **)(this + 0x100);
    }
    free(pvVar4);
  }
  puVar2 = *(undefined8 **)(this + 0xf0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 0xf8) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0xf0);
    }
    free(puVar3);
  }
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    free(*(void **)(this + 0xe0));
  }
  puVar2 = *(undefined8 **)(this + 0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 0xd8) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0xd0);
    }
    free(puVar3);
  }
  puVar2 = *(undefined8 **)(this + 0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + (ulong)*(uint *)(this + 200) * 2;
    if (puVar2 != puVar3) {
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        puVar2 = puVar2 + 2;
      } while (puVar3 != puVar2);
      puVar3 = *(undefined8 **)(this + 0xc0);
    }
    free(puVar3);
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    free(*(void **)(this + 0xa8));
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = (void *)((long)pvVar1 + (ulong)*(uint *)(this + 0xa0) * 0x48);
    if (pvVar1 != pvVar4) {
      do {
        if (*(void **)((long)pvVar1 + 0x30) != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x30));
        }
        pvVar1 = (void *)((long)pvVar1 + 0x48);
      } while (pvVar4 != pvVar1);
      pvVar4 = *(void **)(this + 0x98);
    }
    free(pvVar4);
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    free(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x58) == (void *)0x0) {
    return;
  }
  free(*(void **)(this + 0x58));
  return;
}



/* basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder() */

void __thiscall
basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder
          (basisu_lowlevel_etc1s_transcoder *this)

{
  basisu_lowlevel_etc1s_transcoder *pbVar1;
  basisu_lowlevel_etc1s_transcoder *pbVar2;
  
  pbVar2 = this + 0x310;
  while (pbVar2 != this + 0x110) {
    while( true ) {
      pbVar1 = pbVar2 + -0x10;
      pbVar2 = pbVar2 + -0x10;
      if (*(void **)pbVar1 == (void *)0x0) break;
      free(*(void **)pbVar1);
      if (pbVar2 == this + 0x110) goto LAB_001207dc;
    }
  }
LAB_001207dc:
  if (*(void **)(this + 0x100) != (void *)0x0) {
    free(*(void **)(this + 0x100));
  }
  if (*(void **)(this + 0xf0) != (void *)0x0) {
    free(*(void **)(this + 0xf0));
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    free(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    free(*(void **)(this + 200));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    free(*(void **)(this + 0xa8));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    free(*(void **)(this + 0x98));
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    free(*(void **)(this + 0x68));
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    free(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    free(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    return;
  }
  return;
}



/* basisu::vector<unsigned char>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<unsigned_char>::resize(vector<unsigned_char> *this,ulong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = *(uint *)(this + 8);
    uVar2 = (uint)param_1;
    if (uVar1 != uVar2) {
      if (uVar1 <= uVar2) {
        if (*(uint *)(this + 0xc) < uVar2) {
          if (uVar1 + 1 == uVar2) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar1 = *(uint *)(this + 8);
        }
        memset((void *)((ulong)uVar1 + *(long *)this),0,(ulong)(uVar2 - uVar1));
      }
      *(uint *)(this + 8) = uVar2;
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::image>::~vector() */

void __thiscall basisu::vector<basisu::image>::~vector(vector<basisu::image> *this)

{
  void *pvVar1;
  void *__ptr;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  __ptr = (void *)((ulong)*(uint *)(this + 8) * 0x20 + (long)pvVar1);
  if (pvVar1 != __ptr) {
    do {
      if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar1 + 0x10));
      }
      pvVar1 = (void *)((long)pvVar1 + 0x20);
    } while (__ptr != pvVar1);
    __ptr = *(void **)this;
  }
  free(__ptr);
  return;
}



/* basisu::vector<basisu::imagef>::~vector() */

void __thiscall basisu::vector<basisu::imagef>::~vector(vector<basisu::imagef> *this)

{
  void *pvVar1;
  void *__ptr;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  __ptr = (void *)((ulong)*(uint *)(this + 8) * 0x20 + (long)pvVar1);
  if (pvVar1 != __ptr) {
    do {
      if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
        free(*(void **)((long)pvVar1 + 0x10));
      }
      pvVar1 = (void *)((long)pvVar1 + 0x20);
    } while (__ptr != pvVar1);
    __ptr = *(void **)this;
  }
  free(__ptr);
  return;
}



/* basisu::vector<std::__cxx11::string >::clear() */

void __thiscall basisu::vector<std::__cxx11::string>::clear(vector<std::__cxx11::string> *this)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    __ptr = puVar1 + (ulong)*(uint *)(this + 8) * 4;
    if (puVar1 != __ptr) {
      do {
        if ((undefined8 *)*puVar1 != puVar1 + 2) {
          operator_delete((undefined8 *)*puVar1,puVar1[2] + 1);
        }
        puVar1 = puVar1 + 4;
      } while (__ptr != puVar1);
      __ptr = *(undefined8 **)this;
    }
    free(__ptr);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}



/* basisu::vector<basisu::gpu_image>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::gpu_image>::resize
          (vector<basisu::gpu_image> *this,ulong param_1,bool param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = (uint)param_1;
  if (param_1 >> 0x20 == 0) {
    uVar2 = *(uint *)(this + 8);
    if (uVar2 != uVar5) {
      if (uVar5 < uVar2) {
        lVar4 = param_1 * 0x30 + *(long *)this;
        lVar6 = (ulong)(uVar2 - uVar5) * 0x30 + lVar4;
        do {
          if (*(void **)(lVar4 + 0x20) != (void *)0x0) {
            free(*(void **)(lVar4 + 0x20));
          }
          lVar4 = lVar4 + 0x30;
        } while (lVar6 != lVar4);
        *(uint *)(this + 8) = uVar5;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar5) {
          if (uVar2 + 1 == uVar5) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x30,true);
          uVar2 = *(uint *)(this + 8);
        }
        puVar1 = (undefined4 *)((ulong)uVar2 * 0x30 + *(long *)this);
        puVar3 = puVar1 + (ulong)(uVar5 - uVar2) * 0xc;
        for (; puVar1 != puVar3; puVar1 = puVar1 + 0xc) {
          *(undefined8 *)(puVar1 + 8) = 0;
          *(undefined8 *)(puVar1 + 10) = 0;
          *puVar1 = 0xffffffff;
          *(undefined8 *)(puVar1 + 5) = 0;
          *(undefined1 (*) [16])(puVar1 + 1) = (undefined1  [16])0x0;
          puVar1[7] = 0;
        }
        *(uint *)(this + 8) = uVar5;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::vector<unsigned char> >::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::vector<unsigned_char>>::resize
          (vector<basisu::vector<unsigned_char>> *this,ulong param_1,bool param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  if (param_1 >> 0x20 == 0) {
    uVar2 = *(uint *)(this + 8);
    if (uVar2 != uVar4) {
      if (uVar4 < uVar2) {
        puVar3 = (undefined8 *)(param_1 * 0x10 + *(long *)this);
        puVar1 = puVar3 + (ulong)(uVar2 - uVar4) * 2;
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            free((void *)*puVar3);
          }
          puVar3 = puVar3 + 2;
        } while (puVar1 != puVar3);
        *(uint *)(this + 8) = uVar4;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar4) {
          if (uVar2 + 1 == uVar4) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x10,false);
          uVar2 = *(uint *)(this + 8);
        }
        puVar1 = (undefined8 *)((ulong)uVar2 * 0x10 + *(long *)this);
        puVar3 = puVar1 + (ulong)(uVar4 - uVar2) * 2;
        for (; puVar1 != puVar3; puVar1 = puVar1 + 2) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(this + 8) = uVar4;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::image>::push_back(basisu::image const&) */

void __thiscall basisu::vector<basisu::image>::push_back(vector<basisu::image> *this,image *param_1)

{
  uint uVar1;
  image *piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar3) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar3 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
               true);
    uVar3 = *(uint *)(this + 8);
  }
  piVar2 = (image *)((ulong)uVar3 * 0x20 + *(long *)this);
  *(undefined8 *)piVar2 = 0;
  *(undefined4 *)(piVar2 + 8) = 0;
  *(undefined8 *)(piVar2 + 0x10) = 0;
  *(undefined8 *)(piVar2 + 0x18) = 0;
  if (piVar2 == param_1) goto LAB_00120d7f;
  *(undefined8 *)piVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(piVar2 + 8) = *(undefined4 *)(param_1 + 8);
  if (piVar2 + 0x10 == param_1 + 0x10) goto LAB_00120d7f;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)(piVar2 + 0x10),SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false
              );
    if (*(void **)(piVar2 + 0x10) == (void *)0x0) {
LAB_00120d74:
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        memcpy(*(void **)(piVar2 + 0x10),*(void **)(param_1 + 0x10),(ulong)uVar1 << 2);
        goto LAB_00120d74;
      }
    }
    uVar3 = *(uint *)(this + 8);
  }
  *(uint *)(piVar2 + 0x18) = uVar1;
LAB_00120d7f:
  *(uint *)(this + 8) = uVar3 + 1;
  return;
}



/* basisu::vector<basisu::imagef>::push_back(basisu::imagef const&) */

void __thiscall
basisu::vector<basisu::imagef>::push_back(vector<basisu::imagef> *this,imagef *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  imagef *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar6) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar6 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x20,
               true);
    uVar6 = *(uint *)(this + 8);
  }
  piVar5 = (imagef *)((ulong)uVar6 * 0x20 + *(long *)this);
  *(undefined8 *)piVar5 = 0;
  *(undefined4 *)(piVar5 + 8) = 0;
  *(undefined8 *)(piVar5 + 0x10) = 0;
  *(undefined8 *)(piVar5 + 0x18) = 0;
  if (piVar5 != param_1) {
    *(undefined8 *)piVar5 = *(undefined8 *)param_1;
    *(undefined4 *)(piVar5 + 8) = *(undefined4 *)(param_1 + 8);
    if (piVar5 + 0x10 != param_1 + 0x10) {
      uVar7 = *(uint *)(param_1 + 0x18);
      if (uVar7 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)(piVar5 + 0x10),SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,
                   true);
        uVar7 = *(uint *)(param_1 + 0x18);
        lVar1 = *(long *)(piVar5 + 0x10);
        lVar2 = *(long *)(param_1 + 0x10);
        if (uVar7 != 0) {
          lVar4 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar2 + lVar4))[1];
            *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
            ((undefined8 *)(lVar1 + lVar4))[1] = uVar3;
            lVar4 = lVar4 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar4);
        }
        uVar6 = *(uint *)(this + 8);
      }
      *(uint *)(piVar5 + 0x18) = uVar7;
    }
  }
  *(uint *)(this + 8) = uVar6 + 1;
  return;
}



/* basisu::vector<basisu::image_stats>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::image_stats>::resize
          (vector<basisu::image_stats> *this,ulong param_1,bool param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (param_1 >> 0x20 == 0) {
    uVar2 = *(uint *)(this + 8);
    uVar5 = (uint)param_1;
    if (uVar2 != uVar5) {
      if (uVar5 < uVar2) {
        puVar4 = (undefined8 *)(param_1 * 0x70 + *(long *)this);
        puVar6 = puVar4 + (ulong)(uVar2 - uVar5) * 0xe;
        do {
          if ((undefined8 *)*puVar4 != puVar4 + 2) {
            operator_delete((undefined8 *)*puVar4,puVar4[2] + 1);
          }
          puVar4 = puVar4 + 0xe;
        } while (puVar6 != puVar4);
        *(uint *)(this + 8) = uVar5;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar5) {
          if (uVar2 + 1 == uVar5) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x70,true);
          uVar2 = *(uint *)(this + 8);
        }
        plVar1 = (long *)((ulong)uVar2 * 0x70 + *(long *)this);
        plVar3 = plVar1 + (ulong)(uVar5 - uVar2) * 0xe;
        for (; plVar1 != plVar3; plVar1 = plVar1 + 0xe) {
          *(undefined1 *)(plVar1 + 2) = 0;
          *plVar1 = (long)(plVar1 + 2);
          plVar1[1] = 0;
          plVar1[4] = 0;
          *(undefined1 (*) [16])(plVar1 + 5) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(plVar1 + 7) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(plVar1 + 9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(plVar1 + 0xb) = (undefined1  [16])0x0;
          *(undefined4 *)(plVar1 + 0xd) = 0;
          *(undefined1 *)((long)plVar1 + 0x6c) = 0;
        }
        *(uint *)(this + 8) = uVar5;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::image>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::image>::resize(vector<basisu::image> *this,ulong param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  if (param_1 >> 0x20 != 0) {
    return;
  }
  uVar3 = *(uint *)(this + 8);
  if (uVar3 != uVar6) {
    if (uVar6 < uVar3) {
      lVar5 = param_1 * 0x20 + *(long *)this;
      lVar1 = lVar5 + (ulong)(uVar3 - uVar6) * 0x20;
      do {
        if (*(void **)(lVar5 + 0x10) != (void *)0x0) {
          free(*(void **)(lVar5 + 0x10));
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar1 != lVar5);
      *(uint *)(this + 8) = uVar6;
    }
    else {
      if (*(uint *)(this + 0xc) < uVar6) {
        if (uVar3 + 1 == uVar6) {
          param_2 = true;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),(uint)param_2,
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        uVar3 = *(uint *)(this + 8);
      }
      puVar2 = (undefined8 *)((ulong)uVar3 * 0x20 + *(long *)this);
      puVar4 = puVar2 + (ulong)(uVar6 - uVar3) * 4;
      for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      *(uint *)(this + 8) = uVar6;
    }
  }
  return;
}



/* basisu::vector<basisu::imagef>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::imagef>::resize(vector<basisu::imagef> *this,ulong param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  if (param_1 >> 0x20 != 0) {
    return;
  }
  uVar3 = *(uint *)(this + 8);
  if (uVar3 != uVar6) {
    if (uVar6 < uVar3) {
      lVar5 = param_1 * 0x20 + *(long *)this;
      lVar1 = lVar5 + (ulong)(uVar3 - uVar6) * 0x20;
      do {
        if (*(void **)(lVar5 + 0x10) != (void *)0x0) {
          free(*(void **)(lVar5 + 0x10));
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar1 != lVar5);
      *(uint *)(this + 8) = uVar6;
    }
    else {
      if (*(uint *)(this + 0xc) < uVar6) {
        if (uVar3 + 1 == uVar6) {
          param_2 = true;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),(uint)param_2,
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        uVar3 = *(uint *)(this + 8);
      }
      puVar2 = (undefined8 *)((ulong)uVar3 * 0x20 + *(long *)this);
      puVar4 = puVar2 + (ulong)(uVar6 - uVar3) * 4;
      for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      *(uint *)(this + 8) = uVar6;
    }
  }
  return;
}



/* basisu::vector<basisu::image>::reserve(unsigned long) */

void __thiscall basisu::vector<basisu::image>::reserve(vector<basisu::image> *this,ulong param_1)

{
  ulong uVar1;
  void *__ptr;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  long in_FS_OFFSET;
  void *local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar5 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar5) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
        return;
      }
      goto LAB_0012137f;
    }
    if (uVar5 < *(uint *)(this + 0xc)) {
      local_38 = (void *)0x0;
      local_30 = 0;
      uVar2 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar5) {
        uVar2 = uVar5;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
      operator=((vector<basisu::image> *)&local_38,(vector *)this);
      pvVar4 = *(void **)this;
      uVar1 = *(ulong *)(this + 8);
      *(void **)this = local_38;
      *(ulong *)(this + 8) = local_30;
      local_38 = pvVar4;
      local_30 = uVar1;
      if (pvVar4 != (void *)0x0) {
        pvVar3 = (void *)((uVar1 & 0xffffffff) * 0x20 + (long)pvVar4);
        __ptr = pvVar3;
        for (; pvVar4 != pvVar3; pvVar4 = (void *)((long)pvVar4 + 0x20)) {
          if (*(void **)((long)pvVar4 + 0x10) != (void *)0x0) {
            free(*(void **)((long)pvVar4 + 0x10));
          }
          __ptr = local_38;
        }
        free(__ptr);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0012137f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void basisu::append_vector<basisu::vector<unsigned char> >(basisu::vector<unsigned char>&,
   basisu::vector<unsigned char> const&) */

void basisu::append_vector<basisu::vector<unsigned_char>>(vector *param_1,vector *param_2)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  ulong __n;
  ulong uVar4;
  ulong uVar5;
  ulong __n_00;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0) {
    __n_00 = (ulong)uVar1;
    uVar2 = *(uint *)(param_1 + 8);
    uVar5 = (ulong)uVar2;
    __src = *(void **)param_2;
    if (__n_00 + uVar5 >> 0x20 == 0) {
      uVar3 = uVar2 + uVar1;
      if (!CARRY4(uVar2,uVar1)) {
        __n = __n_00;
        uVar4 = uVar5;
        if (*(uint *)(param_1 + 0xc) < uVar3) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,SUB41(uVar3,0),(uint)(uVar1 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          __n = (ulong)(uVar3 - *(uint *)(param_1 + 8));
          uVar4 = (ulong)*(uint *)(param_1 + 8);
        }
        memset((void *)(uVar4 + *(long *)param_1),0,__n);
      }
      *(uint *)(param_1 + 8) = uVar3;
    }
    memcpy((void *)(*(long *)param_1 + uVar5),__src,__n_00);
    return;
  }
  return;
}



/* basisu::vector<unsigned char>::push_back(unsigned char const&) */

void __thiscall basisu::vector<unsigned_char>::push_back(vector<unsigned_char> *this,uchar *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar1 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
               false);
    uVar1 = *(uint *)(this + 8);
  }
  *(uchar *)(*(long *)this + (ulong)uVar1) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}



/* basisu::vector<basisu::parallel_results>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::parallel_results>::resize
          (vector<basisu::parallel_results> *this,ulong param_1,bool param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 >> 0x20 == 0) {
    uVar2 = *(uint *)(this + 8);
    uVar3 = (uint)param_1;
    if (uVar2 != uVar3) {
      if (uVar3 < uVar2) {
        lVar5 = param_1 * 0x50 + *(long *)this;
        lVar6 = (ulong)(uVar2 - uVar3) * 0x50 + lVar5;
        do {
          puVar1 = *(undefined8 **)(lVar5 + 0x30);
          if (puVar1 != (undefined8 *)0x0) {
            puVar4 = puVar1 + (ulong)*(uint *)(lVar5 + 0x38) * 0xe;
            if (puVar1 != puVar4) {
              do {
                if ((undefined8 *)*puVar1 != puVar1 + 2) {
                  operator_delete((undefined8 *)*puVar1,puVar1[2] + 1);
                }
                puVar1 = puVar1 + 0xe;
              } while (puVar4 != puVar1);
              puVar4 = *(undefined8 **)(lVar5 + 0x30);
            }
            free(puVar4);
          }
          if (*(void **)(lVar5 + 0x20) != (void *)0x0) {
            free(*(void **)(lVar5 + 0x20));
          }
          if (*(void **)(lVar5 + 0x10) != (void *)0x0) {
            free(*(void **)(lVar5 + 0x10));
          }
          lVar5 = lVar5 + 0x50;
        } while (lVar6 != lVar5);
        *(uint *)(this + 8) = uVar3;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar3) {
          if (uVar2 + 1 == uVar3) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x50,false);
          uVar2 = *(uint *)(this + 8);
        }
        puVar1 = (undefined8 *)((ulong)uVar2 * 0x50 + *(long *)this);
        puVar4 = puVar1 + (ulong)(uVar3 - uVar2) * 10;
        for (; puVar1 != puVar4; puVar1 = puVar1 + 10) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 1;
          puVar1[8] = 0;
          *(undefined1 *)(puVar1 + 9) = 0;
        }
        *(uint *)(this + 8) = uVar3;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::image>::vector(basisu::vector<basisu::image> const&) */

void __thiscall basisu::vector<basisu::image>::vector(vector<basisu::image> *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)this,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
  iVar3 = *(int *)(param_1 + 8);
  puVar5 = *(undefined8 **)param_1;
  *(int *)(this + 8) = iVar3;
  puVar4 = *(undefined8 **)this;
  if (iVar3 != 0) {
    puVar1 = puVar4 + (ulong)(iVar3 - 1) * 4 + 4;
    do {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      if (puVar4 != puVar5) {
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        if (puVar4 + 2 != puVar5 + 2) {
          uVar6 = *(uint *)(puVar5 + 3);
          if (uVar6 != 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(puVar4 + 2),SUB41(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                       false);
            if ((void *)puVar4[2] != (void *)0x0) {
              uVar6 = *(uint *)(puVar5 + 3);
              if ((void *)puVar5[2] == (void *)0x0) goto LAB_0012171e;
              memcpy((void *)puVar4[2],(void *)puVar5[2],(ulong)uVar6 * 4);
            }
            uVar6 = *(uint *)(puVar5 + 3);
          }
LAB_0012171e:
          *(uint *)(puVar4 + 3) = uVar6;
        }
      }
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar4 != puVar1);
  }
  return;
}



/* basisu::vector<basisu::imagef>::vector(basisu::vector<basisu::imagef> const&) */

void __thiscall basisu::vector<basisu::imagef>::vector(vector<basisu::imagef> *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  *(undefined8 *)this = 0;
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)this,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x20,true);
  iVar3 = *(int *)(param_1 + 8);
  puVar9 = *(undefined8 **)param_1;
  *(int *)(this + 8) = iVar3;
  puVar8 = *(undefined8 **)this;
  if (iVar3 != 0) {
    puVar1 = puVar8 + (ulong)(iVar3 - 1) * 4 + 4;
    do {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      if (puVar9 != puVar8) {
        *puVar8 = *puVar9;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
        if (puVar8 + 2 != puVar9 + 2) {
          uVar10 = *(uint *)(puVar9 + 3);
          if (uVar10 != 0) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(puVar8 + 2),SUB41(uVar10,0),0,
                       (_func_void_void_ptr_void_ptr_uint *)0x10,true);
            uVar10 = *(uint *)(puVar9 + 3);
            lVar4 = puVar8[2];
            lVar5 = puVar9[2];
            if (uVar10 != 0) {
              lVar7 = 0;
              do {
                uVar6 = ((undefined8 *)(lVar5 + lVar7))[1];
                *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar5 + lVar7);
                ((undefined8 *)(lVar4 + lVar7))[1] = uVar6;
                lVar7 = lVar7 + 0x10;
              } while ((ulong)uVar10 << 4 != lVar7);
            }
          }
          *(uint *)(puVar8 + 3) = uVar10;
        }
      }
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar1 != puVar8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::mersenne_twister_engine<unsigned long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul,
   4294967295ul, 7ul, 2636928640ul, 15ul, 4022730752ul, 18ul, 1812433253ul>::_M_gen_rand() */

void __thiscall
std::
mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
::_M_gen_rand(mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
              *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
  *pmVar9;
  mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
  *pmVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = *(ulong *)this;
  pmVar10 = this;
  do {
    uVar11 = uVar8 & 0xffffffff80000000;
    pmVar9 = pmVar10 + 8;
    uVar8 = *(ulong *)pmVar9;
    *(ulong *)pmVar10 =
         (ulong)(-((uint)uVar8 & 1) & 0x9908b0df) ^
         (uVar11 | (uint)uVar8 & 0x7fffffff) >> 1 ^ *(ulong *)(pmVar10 + 0xc68);
    uVar7 = _UNK_00122548;
    uVar6 = __LC330;
    uVar5 = _UNK_00122538;
    uVar4 = __LC329;
    uVar3 = _UNK_00122528;
    uVar2 = __LC328;
    uVar1 = _UNK_00122518;
    uVar11 = __LC327;
    pmVar10 = pmVar9;
  } while (pmVar9 != this + 0x718);
  do {
    pmVar10 = pmVar9 + 0x10;
    uVar8 = *(ulong *)pmVar9 & uVar11 | *(ulong *)(pmVar9 + 8) & uVar2;
    uVar12 = *(ulong *)(pmVar9 + 8) & uVar1 | *(ulong *)(pmVar9 + 0x10) & uVar3;
    *(ulong *)pmVar9 = -(uVar8 & uVar4) & uVar6 ^ uVar8 >> 1 ^ *(ulong *)(pmVar9 + -0x718);
    *(ulong *)(pmVar9 + 8) = -(uVar12 & uVar5) & uVar7 ^ uVar12 >> 1 ^ *(ulong *)(pmVar9 + -0x710);
    pmVar9 = pmVar10;
  } while (pmVar10 != this + 0x1378);
  *(undefined8 *)(this + 0x1380) = 0;
  uVar8 = *(ulong *)(this + 0x1378) & 0xffffffff80000000 |
          (ulong)((uint)*(undefined8 *)this & 0x7fffffff);
  *(ulong *)(this + 0x1378) =
       (ulong)(-((uint)uVar8 & 1) & 0x9908b0df) ^ uVar8 >> 1 ^ *(ulong *)(this + 0xc60);
  return;
}



/* std::mersenne_twister_engine<unsigned long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul,
   4294967295ul, 7ul, 2636928640ul, 15ul, 4022730752ul, 18ul,
   1812433253ul>::TEMPNAMEPLACEHOLDERVALUE() */

ulong __thiscall
std::
mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
::operator()(mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>
             *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x1380);
  if (0x26f < uVar1) {
    _M_gen_rand(this);
    uVar1 = *(ulong *)(this + 0x1380);
  }
  uVar2 = *(ulong *)(this + uVar1 * 8);
  *(ulong *)(this + 0x1380) = uVar1 + 1;
  uVar2 = uVar2 >> 0xb & 0xffffffff ^ uVar2;
  uVar2 = (uint)(uVar2 << 7) & 0x9d2c5680 ^ uVar2;
  uVar2 = (uint)(uVar2 << 0xf) & 0xefc60000 ^ uVar2;
  return uVar2 >> 0x12 ^ uVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<basist::ktx2_transcoder::key_value*,
   __gnu_cxx::__ops::_Iter_less_iter>(basist::ktx2_transcoder::key_value*,
   basist::ktx2_transcoder::key_value*, basist::ktx2_transcoder::key_value*,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::__heap_select<basist::ktx2_transcoder::key_value*,__gnu_cxx::__ops::_Iter_less_iter>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  void *local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (long)param_2 - (long)param_1 >> 5;
  if (0x20 < (long)param_2 - (long)param_1) {
    lVar2 = (lVar3 + -2) / 2;
    puVar4 = param_1 + lVar2 * 4;
    while( true ) {
      local_88 = (void *)0x0;
      local_80 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_88,SUB41(*(undefined4 *)(puVar4 + 1),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_80 = CONCAT44(local_80._4_4_,*(uint *)(puVar4 + 1));
      if ((local_88 != (void *)0x0) && ((void *)*puVar4 != (void *)0x0)) {
        memcpy(local_88,(void *)*puVar4,(ulong)*(uint *)(puVar4 + 1));
      }
      local_78 = (void *)0x0;
      local_70 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_78,SUB41(*(undefined4 *)(puVar4 + 3),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_70 = CONCAT44(local_70._4_4_,*(uint *)(puVar4 + 3));
      if ((local_78 != (void *)0x0) && ((void *)puVar4[2] != (void *)0x0)) {
        memcpy(local_78,(void *)puVar4[2],(ulong)*(uint *)(puVar4 + 3));
      }
      local_68 = (void *)0x0;
      local_60 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_68,SUB81(local_80,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_80);
      if ((local_68 != (void *)0x0) && (local_88 != (void *)0x0)) {
        memcpy(local_68,local_88,local_80 & 0xffffffff);
      }
      local_58 = (void *)0x0;
      local_50 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_58,SUB81(local_70,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_70);
      if ((local_58 != (void *)0x0) && (local_78 != (void *)0x0)) {
        memcpy(local_58,local_78,local_70 & 0xffffffff);
      }
      __adjust_heap<basist::ktx2_transcoder::key_value*,long,basist::ktx2_transcoder::key_value,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,lVar2,lVar3,&local_68);
      if (local_58 != (void *)0x0) {
        free(local_58);
      }
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      if (local_78 != (void *)0x0) {
        free(local_78);
      }
      if (local_88 != (void *)0x0) {
        free(local_88);
      }
      puVar4 = puVar4 + -4;
    }
    if (local_78 != (void *)0x0) {
      free(local_78);
    }
    if (local_88 != (void *)0x0) {
      free(local_88);
    }
  }
  if (param_2 < param_3) {
    do {
      while (iVar1 = strcmp((char *)*param_2,(char *)*param_1), -1 < iVar1) {
LAB_00121c60:
        param_2 = param_2 + 4;
        if (param_3 <= param_2) goto LAB_00121eb0;
      }
      local_88 = (void *)0x0;
      local_80 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_88,SUB41(*(undefined4 *)(param_2 + 1),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_80 = CONCAT44(local_80._4_4_,*(uint *)(param_2 + 1));
      if ((local_88 != (void *)0x0) && ((void *)*param_2 != (void *)0x0)) {
        memcpy(local_88,(void *)*param_2,(ulong)*(uint *)(param_2 + 1));
      }
      local_78 = (void *)0x0;
      local_70 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_78,SUB41(*(undefined4 *)(param_2 + 3),0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      local_70 = CONCAT44(local_70._4_4_,*(uint *)(param_2 + 3));
      if ((local_78 != (void *)0x0) && ((void *)param_2[2] != (void *)0x0)) {
        memcpy(local_78,(void *)param_2[2],(ulong)*(uint *)(param_2 + 3));
      }
      if (param_1 != param_2) {
        uVar5 = *(uint *)(param_1 + 1);
        pvVar6 = (void *)*param_2;
        if (*(uint *)((long)param_2 + 0xc) < uVar5) {
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            *param_2 = 0;
            param_2[1] = 0;
            uVar5 = *(uint *)(param_1 + 1);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)param_2,SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar5 = *(uint *)(param_1 + 1);
          pvVar6 = (void *)*param_2;
        }
        else if (*(int *)(param_2 + 1) != 0) {
          *(undefined4 *)(param_2 + 1) = 0;
          uVar5 = *(uint *)(param_1 + 1);
        }
        if ((pvVar6 != (void *)0x0) && ((void *)*param_1 != (void *)0x0)) {
          memcpy(pvVar6,(void *)*param_1,(ulong)uVar5);
          uVar5 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_2 + 1) = uVar5;
      }
      if (param_2 + 2 != param_1 + 2) {
        uVar5 = *(uint *)(param_1 + 3);
        pvVar6 = (void *)param_2[2];
        if (*(uint *)((long)param_2 + 0x1c) < uVar5) {
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            param_2[2] = 0;
            param_2[3] = 0;
            uVar5 = *(uint *)(param_1 + 3);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(param_2 + 2),SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                     false);
          uVar5 = *(uint *)(param_1 + 3);
          pvVar6 = (void *)param_2[2];
        }
        else if (*(int *)(param_2 + 3) != 0) {
          *(undefined4 *)(param_2 + 3) = 0;
          uVar5 = *(uint *)(param_1 + 3);
        }
        if ((pvVar6 != (void *)0x0) && ((void *)param_1[2] != (void *)0x0)) {
          memcpy(pvVar6,(void *)param_1[2],(ulong)uVar5);
          uVar5 = *(uint *)(param_1 + 3);
        }
        *(uint *)(param_2 + 3) = uVar5;
      }
      local_68 = (void *)0x0;
      local_60 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_68,SUB81(local_80,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_80);
      if ((local_68 != (void *)0x0) && (local_88 != (void *)0x0)) {
        memcpy(local_68,local_88,local_80 & 0xffffffff);
      }
      local_58 = (void *)0x0;
      local_50 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_58,SUB81(local_70,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
      ;
      local_50 = CONCAT44(local_50._4_4_,(undefined4)local_70);
      if ((local_58 != (void *)0x0) && (local_78 != (void *)0x0)) {
        memcpy(local_58,local_78,local_70 & 0xffffffff);
      }
      __adjust_heap<basist::ktx2_transcoder::key_value*,long,basist::ktx2_transcoder::key_value,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,lVar3,&local_68);
      if (local_58 != (void *)0x0) {
        free(local_58);
      }
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      if (local_78 != (void *)0x0) {
        free(local_78);
      }
      if (local_88 == (void *)0x0) goto LAB_00121c60;
      free(local_88);
      param_2 = param_2 + 4;
    } while (param_2 < param_3);
  }
LAB_00121eb0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<basist::ktx2_transcoder::key_value>
   >, std::is_move_constructible<basist::ktx2_transcoder::key_value>,
   std::is_move_assignable<basist::ktx2_transcoder::key_value> >::value, void>::type
   std::swap<basist::ktx2_transcoder::key_value>(basist::ktx2_transcoder::key_value&,
   basist::ktx2_transcoder::key_value&) */

void std::swap<basist::ktx2_transcoder::key_value>(key_value *param_1,key_value *param_2)

{
  void *pvVar1;
  uint uVar2;
  long in_FS_OFFSET;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_50 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,SUB41(*(undefined4 *)(param_1 + 8),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_50 = CONCAT44(local_50._4_4_,*(uint *)(param_1 + 8));
  if ((local_58 != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) {
    memcpy(local_58,*(void **)param_1,(ulong)*(uint *)(param_1 + 8));
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_48,SUB41(*(undefined4 *)(param_1 + 0x18),0),0,
             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_40 = CONCAT44(local_40._4_4_,*(uint *)(param_1 + 0x18));
  if ((local_48 != (void *)0x0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
    memcpy(local_48,*(void **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x18));
  }
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 8);
    pvVar1 = *(void **)param_1;
    if (*(uint *)(param_1 + 0xc) < uVar2) {
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        uVar2 = *(uint *)(param_2 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)param_1,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)(param_2 + 8);
      pvVar1 = *(void **)param_1;
    }
    else if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      uVar2 = *(uint *)(param_2 + 8);
    }
    if ((pvVar1 != (void *)0x0) && (*(void **)param_2 != (void *)0x0)) {
      memcpy(pvVar1,*(void **)param_2,(ulong)uVar2);
      uVar2 = *(uint *)(param_2 + 8);
    }
    *(uint *)(param_1 + 8) = uVar2;
  }
  if (param_2 + 0x10 != param_1 + 0x10) {
    uVar2 = *(uint *)(param_2 + 0x18);
    pvVar1 = *(void **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x1c) < uVar2) {
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar2 = *(uint *)(param_2 + 0x18);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(param_1 + 0x10),SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                 false);
      uVar2 = *(uint *)(param_2 + 0x18);
      pvVar1 = *(void **)(param_1 + 0x10);
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar2 = *(uint *)(param_2 + 0x18);
    }
    if ((pvVar1 != (void *)0x0) && (*(void **)(param_2 + 0x10) != (void *)0x0)) {
      memcpy(pvVar1,*(void **)(param_2 + 0x10),(ulong)uVar2);
      uVar2 = *(uint *)(param_2 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar2;
  }
  pvVar1 = *(void **)param_2;
  if (*(uint *)(param_2 + 0xc) < (uint)local_50) {
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      *(undefined8 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((uint)param_2,SUB41((uint)local_50,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
               false);
    pvVar1 = *(void **)param_2;
  }
  else if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  uVar2 = (uint)local_50;
  if ((pvVar1 != (void *)0x0) && (local_58 != (void *)0x0)) {
    memcpy(pvVar1,local_58,(ulong)(uint)local_50);
    uVar2 = (uint)local_50;
  }
  *(uint *)(param_2 + 8) = uVar2;
  pvVar1 = *(void **)(param_2 + 0x10);
  if (*(uint *)(param_2 + 0x1c) < (uint)local_40) {
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((uint)(param_2 + 0x10),SUB41((uint)local_40,0),0,
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    pvVar1 = *(void **)(param_2 + 0x10);
  }
  else if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  uVar2 = (uint)local_40;
  if (pvVar1 != (void *)0x0) {
    if (local_48 == (void *)0x0) {
      *(uint *)(param_2 + 0x18) = (uint)local_40;
      goto LAB_00122197;
    }
    memcpy(pvVar1,local_48,(ulong)(uint)local_40);
    uVar2 = (uint)local_40;
  }
  *(uint *)(param_2 + 0x18) = uVar2;
  if (local_48 != (void *)0x0) {
    free(local_48);
  }
LAB_00122197:
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* buminiz::mz_adler32(unsigned long, unsigned char const*, unsigned long) */

void buminiz::_GLOBAL__sub_I_mz_adler32(void)

{
  basisu::g_black_color = 0xff000000;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::vector<basisu::imagef>::~vector() */

void __thiscall basisu::vector<basisu::imagef>::~vector(vector<basisu::imagef> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::vector<basisu::image>::~vector() */

void __thiscall basisu::vector<basisu::image>::~vector(vector<basisu::image> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder() */

void __thiscall
basist::basisu_lowlevel_etc1s_transcoder::~basisu_lowlevel_etc1s_transcoder
          (basisu_lowlevel_etc1s_transcoder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::basisu_frontend::~basisu_frontend() */

void __thiscall basisu::basisu_frontend::~basisu_frontend(basisu_frontend *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::basis_compressor_params::~basis_compressor_params() */

void __thiscall
basisu::basis_compressor_params::~basis_compressor_params(basis_compressor_params *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::basis_compressor_params::basis_compressor_params() */

void __thiscall
basisu::basis_compressor_params::basis_compressor_params(basis_compressor_params *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::vector<basisu::imagef>::vector(basisu::vector<basisu::imagef> const&) */

void basisu::vector<basisu::imagef>::vector(vector *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::vector<basisu::image>::vector(basisu::vector<basisu::image> const&) */

void basisu::vector<basisu::image>::vector(vector *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.