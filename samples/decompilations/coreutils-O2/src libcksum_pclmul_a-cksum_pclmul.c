
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint cksum_pclmul(FILE *param_1,ulong *param_2,long param_3)

{
  undefined1 (*__ptr) [16];
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *puVar22;
  uint uVar23;
  size_t sVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar27) [16];
  int *piVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  undefined1 auStack_10030 [65536];
  undefined1 (*pauVar26) [16];
  
  puVar22 = &stack0xffffffffffffffd0;
  do {
    puVar31 = puVar22;
    *(undefined8 *)(puVar31 + -0x1000) = *(undefined8 *)(puVar31 + -0x1000);
    puVar22 = puVar31 + -0x1000;
  } while (puVar31 + -0x1000 != auStack_10030);
  *(long *)(puVar31 + -0x1020) = param_3;
  *(undefined8 *)(puVar31 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_00100308:
    uVar23 = 0;
  }
  else {
    uVar32 = 0;
    __ptr = (undefined1 (*) [16])(puVar31 + -0x1018);
    uVar30 = 0;
    do {
      *(undefined8 *)(puVar31 + -0x1030) = 0x100095;
      sVar24 = fread_unlocked(__ptr,1,0x10000,param_1);
      if (sVar24 == 0) {
        uVar23 = param_1->_flags;
        break;
      }
      bVar34 = CARRY8(uVar32,sVar24);
      uVar32 = uVar32 + sVar24;
      if (bVar34) {
        *(undefined8 *)(puVar31 + -0x1030) = 0x100302;
        piVar28 = __errno_location();
        *piVar28 = 0x4b;
        goto LAB_00100308;
      }
      if (sVar24 < 0x80) {
        lVar29 = sVar24 - 1;
        pauVar27 = __ptr;
        if (0x1f < sVar24) {
          auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar30,3);
          auVar4 = vpshufb_avx(*(undefined1 (*) [16])(puVar31 + -0x1018),__LC0);
          auVar4 = auVar4 ^ auVar2;
          pauVar25 = __ptr;
          goto LAB_00100270;
        }
      }
      else {
        uVar33 = sVar24 - 0x80 >> 6;
        auVar4 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar30,3);
        auVar2 = vpshufb_avx(*(undefined1 (*) [16])(puVar31 + -0x1018),__LC0);
        auVar4 = auVar4 ^ auVar2;
        pauVar25 = __ptr + (uVar33 + 1) * 4;
        auVar2 = vpshufb_avx(*(undefined1 (*) [16])(puVar31 + -0x1008),__LC0);
        auVar5 = vpshufb_avx(*(undefined1 (*) [16])(puVar31 + -0xff8),__LC0);
        auVar3 = vpshufb_avx(*(undefined1 (*) [16])(puVar31 + -0xfe8),__LC0);
        pauVar27 = __ptr;
        do {
          pauVar26 = pauVar27 + 4;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar5._0_8_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = __LC1;
          auVar10 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar10 = auVar10 ^ auVar11 << uVar23;
            }
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auVar5._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = _UNK_00100338;
          auVar6 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar16 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar6 = auVar6 ^ auVar5 << uVar23;
            }
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar4._0_8_;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = __LC1;
          auVar5 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar12 << uVar23;
            }
          }
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auVar4._8_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = _UNK_00100338;
          auVar11 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar17 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar11 = auVar11 ^ auVar4 << uVar23;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar3._0_8_;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = __LC1;
          auVar16 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar16 = auVar16 ^ auVar13 << uVar23;
            }
          }
          auVar18._8_8_ = 0;
          auVar18._0_8_ = auVar3._8_8_;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = _UNK_00100338;
          auVar7 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar18 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar7 = auVar7 ^ auVar3 << uVar23;
            }
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar2._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = __LC1;
          auVar3 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar3 = auVar3 ^ auVar14 << uVar23;
            }
          }
          auVar4 = vpshufb_avx(*pauVar26,__LC0);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auVar2._8_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = _UNK_00100338;
          auVar12 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar19 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar12 = auVar12 ^ auVar2 << uVar23;
            }
          }
          auVar4 = auVar11 ^ auVar5 ^ auVar4;
          auVar2 = vpshufb_avx(pauVar27[5],__LC0);
          auVar2 = auVar12 ^ auVar3 ^ auVar2;
          auVar5 = vpshufb_avx(pauVar27[6],__LC0);
          auVar5 = auVar10 ^ auVar6 ^ auVar5;
          auVar3 = vpshufb_avx(pauVar27[7],__LC0);
          auVar3 = auVar16 ^ auVar7 ^ auVar3;
          pauVar27 = pauVar26;
        } while (pauVar26 != pauVar25);
        auVar4 = vpshufb_avx(auVar4,__LC0);
        auVar2 = vpshufb_avx(auVar2,__LC0);
        auVar5 = vpshufb_avx(auVar5,__LC0);
        auVar3 = vpshufb_avx(auVar3,__LC0);
        *pauVar25 = auVar4;
        sVar24 = (sVar24 - 0x40) + uVar33 * -0x40;
        pauVar25[1] = auVar2;
        auVar4 = vpshufb_avx(auVar4,__LC0);
        pauVar25[2] = auVar5;
        pauVar25[3] = auVar3;
LAB_00100270:
        uVar33 = sVar24 - 0x20 >> 4;
        pauVar27 = pauVar25 + uVar33 + 1;
        do {
          pauVar26 = pauVar25 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar4._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = __LC2;
          auVar2 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar10 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar2 = auVar2 ^ auVar15 << uVar23;
            }
          }
          pauVar25 = pauVar25 + 1;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar4._8_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = _UNK_00100348;
          auVar5 = (undefined1  [16])0x0;
          for (uVar23 = 0; uVar23 < 0x40; uVar23 = uVar23 + 1) {
            if ((auVar20 & (undefined1  [16])0x1 << uVar23) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar21 << uVar23;
            }
          }
          auVar4 = vpshufb_avx(*pauVar26,__LC0);
          auVar4 = auVar5 ^ auVar2 ^ auVar4;
        } while (pauVar25 != pauVar27);
        auVar4 = vpshufb_avx(auVar4,__LC0);
        uVar30 = 0;
        *pauVar27 = auVar4;
        lVar29 = (sVar24 - 0x11) + uVar33 * -0x10;
      }
      pauVar25 = pauVar27;
      do {
        pauVar26 = (undefined1 (*) [16])((long)*pauVar25 + 1);
        uVar30 = uVar30 << 8 ^
                 *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar30 >> 0x18) ^ (*pauVar25)[0]) * 8);
        pauVar25 = pauVar26;
      } while (pauVar26 != (undefined1 (*) [16])((long)*pauVar27 + lVar29 + 1));
      uVar23 = param_1->_flags;
    } while ((uVar23 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar31 + -0x1020);
    *param_2 = uVar30;
    *puVar1 = uVar32;
    uVar23 = (uVar23 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar31 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar31 + -0x1030) = 0x100314;
  __stack_chk_fail();
}


