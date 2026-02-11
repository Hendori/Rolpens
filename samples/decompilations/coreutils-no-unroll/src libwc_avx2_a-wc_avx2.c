
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * wc_lines_avx2(undefined8 param_1,undefined4 param_2)

{
  undefined1 (*__buf) [32];
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  void *pvVar6;
  undefined1 *puVar7;
  int iVar8;
  ssize_t sVar9;
  ssize_t sVar10;
  undefined1 (*pauVar11) [32];
  int *piVar12;
  undefined1 (*pauVar13) [32];
  long lVar14;
  undefined1 *puVar15;
  undefined1 (*pauVar16) [32];
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [64];
  undefined1 auStack_40040 [262144];
  undefined1 auStack_40 [16];
  
  puVar7 = auStack_40;
  do {
    puVar15 = puVar7;
    *(undefined8 *)(puVar15 + -0x1000) = *(undefined8 *)(puVar15 + -0x1000);
    puVar7 = puVar15 + -0x1000;
  } while (puVar15 + -0x1000 != auStack_40040);
  lVar14 = 0;
  lVar18 = 0;
  *(undefined8 *)(puVar15 + -0x1030) = param_1;
  __buf = (undefined1 (*) [32])(puVar15 + -0x1020);
  *(undefined4 *)(puVar15 + -0x1024) = param_2;
  *(undefined8 *)(puVar15 + 0x3eff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
LAB_00100068:
  while( true ) {
    do {
      *(undefined8 *)(puVar15 + -0x1048) = 0x100079;
      sVar9 = read(*(int *)(puVar15 + -0x1024),__buf,0x40000);
      if (sVar9 < 1) {
        iVar8 = 0;
        if (sVar9 != 0) {
          *(undefined8 *)(puVar15 + -0x1048) = 0x1001ec;
          piVar12 = __errno_location();
          iVar8 = *piVar12;
        }
        piVar12 = *(int **)(puVar15 + -0x1030);
        *piVar12 = iVar8;
        *(long *)(piVar12 + 2) = lVar18;
        *(long *)(piVar12 + 4) = lVar14;
        if (*(long *)(puVar15 + 0x3eff8) == *(long *)(in_FS_OFFSET + 0x28)) {
          return piVar12;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar15 + -0x1048) = 0x10048a;
        __stack_chk_fail();
      }
      lVar14 = lVar14 + sVar9;
      if (sVar9 < 0x20) goto LAB_00100230;
      auVar23[8] = 10;
      auVar23._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar23[9] = 10;
      auVar23[10] = 10;
      auVar23[0xb] = 10;
      auVar23[0xc] = 10;
      auVar23[0xd] = 10;
      auVar23[0xe] = 10;
      auVar23[0xf] = 10;
      auVar23[0x10] = 10;
      auVar23[0x11] = 10;
      auVar23[0x12] = 10;
      auVar23[0x13] = 10;
      auVar23[0x14] = 10;
      auVar23[0x15] = 10;
      auVar23[0x16] = 10;
      auVar23[0x17] = 10;
      auVar23[0x18] = 10;
      auVar23[0x19] = 10;
      auVar23[0x1a] = 10;
      auVar23[0x1b] = 10;
      auVar23[0x1c] = 10;
      auVar23[0x1d] = 10;
      auVar23[0x1e] = 10;
      auVar23[0x1f] = 10;
      uVar17 = sVar9 - 0x20U >> 5;
      pauVar16 = __buf + uVar17 + 1;
      pauVar13 = __buf;
      do {
        auVar25 = vpcmpeqb_avx2(auVar23,*pauVar13);
        pauVar13 = pauVar13 + 1;
        lVar18 = lVar18 + (ulong)(uint)POPCOUNT((uint)(SUB321(auVar25 >> 7,0) & 1) |
                                                (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
                                                (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
                                                (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
                                                (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
                                                (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
                                                (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
                                                (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
                                                (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
                                                (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
                                                (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
                                                (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
                                                (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
                                                (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
                                                (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe |
                                                (uint)SUB321(auVar25 >> 0x7f,0) << 0xf |
                                                (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
                                                (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
                                                (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
                                                (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
                                                (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
                                                (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
                                                (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
                                                (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
                                                (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
                                                (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
                                                (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
                                                (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
                                                (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
                                                (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
                                                (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
                                                (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f);
      } while (pauVar13 != pauVar16);
      sVar10 = (sVar9 - 0x20U) + uVar17 * -0x20;
      pauVar11 = (undefined1 (*) [32])((long)pauVar13[-1 - uVar17] + sVar9);
    } while (pauVar11 <= pauVar13);
    uVar17 = sVar10 - 1;
    if (uVar17 < 0x1f) break;
    auVar27 = ZEXT1664((undefined1  [16])0x0);
    auVar26[8] = 10;
    auVar26._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar26[9] = 10;
    auVar26[10] = 10;
    auVar26[0xb] = 10;
    auVar26[0xc] = 10;
    auVar26[0xd] = 10;
    auVar26[0xe] = 10;
    auVar26[0xf] = 10;
    auVar26[0x10] = 10;
    auVar26[0x11] = 10;
    auVar26[0x12] = 10;
    auVar26[0x13] = 10;
    auVar26[0x14] = 10;
    auVar26[0x15] = 10;
    auVar26[0x16] = 10;
    auVar26[0x17] = 10;
    auVar26[0x18] = 10;
    auVar26[0x19] = 10;
    auVar26[0x1a] = 10;
    auVar26[0x1b] = 10;
    auVar26[0x1c] = 10;
    auVar26[0x1d] = 10;
    auVar26[0x1e] = 10;
    auVar26[0x1f] = 10;
    auVar25[8] = 1;
    auVar25._0_8_ = 0x101010101010101;
    auVar25[9] = 1;
    auVar25[10] = 1;
    auVar25[0xb] = 1;
    auVar25[0xc] = 1;
    auVar25[0xd] = 1;
    auVar25[0xe] = 1;
    auVar25[0xf] = 1;
    auVar25[0x10] = 1;
    auVar25[0x11] = 1;
    auVar25[0x12] = 1;
    auVar25[0x13] = 1;
    auVar25[0x14] = 1;
    auVar25[0x15] = 1;
    auVar25[0x16] = 1;
    auVar25[0x17] = 1;
    auVar25[0x18] = 1;
    auVar25[0x19] = 1;
    auVar25[0x1a] = 1;
    auVar25[0x1b] = 1;
    auVar25[0x1c] = 1;
    auVar25[0x1d] = 1;
    auVar25[0x1e] = 1;
    auVar25[0x1f] = 1;
    pauVar11 = pauVar13;
    do {
      auVar23 = vpcmpeqb_avx2(auVar26,*pauVar11);
      pauVar11 = pauVar11 + 1;
      auVar23 = vpand_avx2(auVar23,auVar25);
      auVar1 = vpmovzxbw_avx2(auVar23._0_16_);
      auVar3 = vpmovzxwd_avx2(auVar1._0_16_);
      auVar2 = vpmovzxbw_avx2(auVar23._16_16_);
      auVar23 = vpmovzxdq_avx2(auVar3._0_16_);
      auVar1 = vpmovzxwd_avx2(auVar1._16_16_);
      auVar23 = vpaddq_avx2(auVar23,auVar27._0_32_);
      auVar4 = vpmovzxdq_avx2(auVar3._16_16_);
      auVar3 = vpmovzxwd_avx2(auVar2._0_16_);
      auVar23 = vpaddq_avx2(auVar4,auVar23);
      auVar4 = vpmovzxdq_avx2(auVar1._0_16_);
      auVar23 = vpaddq_avx2(auVar4,auVar23);
      auVar4 = vpmovzxdq_avx2(auVar3._0_16_);
      auVar5 = vpmovzxdq_avx2(auVar1._16_16_);
      auVar1 = vpmovzxwd_avx2(auVar2._16_16_);
      auVar23 = vpaddq_avx2(auVar5,auVar23);
      auVar2 = vpmovzxdq_avx2(auVar1._0_16_);
      auVar23 = vpaddq_avx2(auVar4,auVar23);
      auVar1 = vpmovzxdq_avx2(auVar1._16_16_);
      auVar3 = vpmovzxdq_avx2(auVar3._16_16_);
      auVar23 = vpaddq_avx2(auVar3,auVar23);
      auVar23 = vpaddq_avx2(auVar2,auVar23);
      auVar23 = vpaddq_avx2(auVar1,auVar23);
      auVar27 = ZEXT3264(auVar23);
    } while (pauVar13 != pauVar11);
    auVar24 = vpaddq_avx(auVar23._0_16_,auVar23._16_16_);
    auVar21 = vpsrldq_avx(auVar24,8);
    auVar24 = vpaddq_avx(auVar24,auVar21);
    lVar18 = lVar18 + auVar24._0_8_;
  }
  goto LAB_00100245;
LAB_00100230:
  pauVar11 = (undefined1 (*) [32])((long)*__buf + sVar9);
  uVar17 = sVar9 - 1;
  sVar10 = sVar9;
  pauVar16 = __buf;
  if (__buf < pauVar11) {
LAB_00100245:
    if (0xe < uVar17) {
      pvVar6 = *pauVar16;
                    /* WARNING: Load size is inaccurate */
      pauVar16 = (undefined1 (*) [32])((long)*pauVar16 + 0x10);
      auVar24 = vpcmpeqb_avx(*pvVar6,__LC2);
      auVar24 = vpand_avx(auVar24,__LC3);
      auVar21 = vpmovzxbw_avx(auVar24);
      auVar19 = vpsrldq_avx(auVar24,8);
      auVar24 = vpmovzxwd_avx(auVar21);
      auVar22 = vpsrldq_avx(auVar21,8);
      auVar21 = vpmovzxbw_avx(auVar19);
      auVar20 = vpmovzxdq_avx(auVar24);
      auVar24 = vpsrldq_avx(auVar24,8);
      auVar19 = vpmovzxwd_avx(auVar22);
      auVar24 = vpmovzxdq_avx(auVar24);
      auVar22 = vpmovzxwd_avx(auVar21);
      auVar24 = vpaddq_avx(auVar20,auVar24);
      auVar20 = vpsrldq_avx(auVar21,8);
      auVar21 = vpmovzxdq_avx(auVar19);
      auVar19 = vpsrldq_avx(auVar19,8);
      auVar24 = vpaddq_avx(auVar21,auVar24);
      auVar21 = vpmovzxwd_avx(auVar20);
      auVar19 = vpmovzxdq_avx(auVar19);
      auVar24 = vpaddq_avx(auVar19,auVar24);
      auVar19 = vpmovzxdq_avx(auVar22);
      auVar22 = vpsrldq_avx(auVar22,8);
      auVar24 = vpaddq_avx(auVar19,auVar24);
      auVar19 = vpmovzxdq_avx(auVar22);
      auVar24 = vpaddq_avx(auVar19,auVar24);
      auVar19 = vpmovzxdq_avx(auVar21);
      auVar21 = vpsrldq_avx(auVar21,8);
      auVar24 = vpaddq_avx(auVar19,auVar24);
      auVar21 = vpmovzxdq_avx(auVar21);
      auVar24 = vpaddq_avx(auVar21,auVar24);
      auVar21 = vpsrldq_avx(auVar24,8);
      auVar24 = vpaddq_avx(auVar24,auVar21);
      lVar18 = lVar18 + auVar24._0_8_;
      if (sVar10 == 0x10) goto LAB_00100068;
    }
    lVar18 = lVar18 + (ulong)((*pauVar16)[0] == '\n');
    if ((((((undefined1 (*) [32])((long)*pauVar16 + 1U) < pauVar11) &&
          (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 1) == '\n'),
          (undefined1 (*) [32])((long)*pauVar16 + 2U) < pauVar11)) &&
         (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 2) == '\n'),
         (undefined1 (*) [32])((long)*pauVar16 + 3U) < pauVar11)) &&
        ((((lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 3) == '\n'),
           (undefined1 (*) [32])((long)*pauVar16 + 4U) < pauVar11 &&
           (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 4) == '\n'),
           (undefined1 (*) [32])((long)*pauVar16 + 5U) < pauVar11)) &&
          ((lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 5) == '\n'),
           (undefined1 (*) [32])((long)*pauVar16 + 6U) < pauVar11 &&
           ((lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 6) == '\n'),
            (undefined1 (*) [32])((long)*pauVar16 + 7U) < pauVar11 &&
            (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 7) == '\n'),
            (undefined1 (*) [32])((long)*pauVar16 + 8U) < pauVar11)))))) &&
         (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 8) == '\n'),
         (undefined1 (*) [32])((long)*pauVar16 + 9U) < pauVar11)))) &&
       ((((lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 9) == '\n'),
          (undefined1 (*) [32])((long)*pauVar16 + 10U) < pauVar11 &&
          (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 10) == '\n'),
          (undefined1 (*) [32])((long)*pauVar16 + 0xbU) < pauVar11)) &&
         (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 0xb) == '\n'),
         (undefined1 (*) [32])((long)*pauVar16 + 0xcU) < pauVar11)) &&
        ((lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 0xc) == '\n'),
         (undefined1 (*) [32])((long)*pauVar16 + 0xdU) < pauVar11 &&
         (lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 0xd) == '\n'),
         (undefined1 (*) [32])((long)*pauVar16 + 0xeU) < pauVar11)))))) {
      lVar18 = lVar18 + (ulong)(*(char *)((long)*pauVar16 + 0xe) == '\n');
    }
  }
  goto LAB_00100068;
}


