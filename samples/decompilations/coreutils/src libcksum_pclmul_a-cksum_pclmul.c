
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool cksum_pclmul(FILE *fp,uint_fast32_t *crc_out,uintmax_t *length_out)

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
  _Bool _Var23;
  uint uVar24;
  size_t sVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar28) [16];
  int *piVar29;
  long lVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  __m128i buf [4096];
  undefined1 (*pauVar27) [16];
  
  puVar22 = &stack0xffffffffffffffd0;
  do {
    puVar32 = puVar22;
    *(undefined8 *)(puVar32 + -0x1000) = *(undefined8 *)(puVar32 + -0x1000);
    puVar22 = puVar32 + -0x1000;
  } while ((longlong *)(puVar32 + -0x1000) != buf[1] + 1);
  *(uintmax_t **)(puVar32 + -0x1020) = length_out;
  *(undefined8 *)(puVar32 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((crc_out == (uint_fast32_t *)0x0 || length_out == (uintmax_t *)0x0) || (fp == (FILE *)0x0)) {
LAB_00100308:
    _Var23 = false;
  }
  else {
    uVar33 = 0;
    __ptr = (undefined1 (*) [16])(puVar32 + -0x1018);
    uVar31 = 0;
    do {
      *(undefined8 *)(puVar32 + -0x1030) = 0x100095;
      sVar25 = fread_unlocked(__ptr,1,0x10000,(FILE *)fp);
      if (sVar25 == 0) {
        uVar24 = fp->_flags;
        break;
      }
      bVar35 = CARRY8(uVar33,sVar25);
      uVar33 = uVar33 + sVar25;
      if (bVar35) {
        *(undefined8 *)(puVar32 + -0x1030) = 0x100302;
        piVar29 = __errno_location();
        *piVar29 = 0x4b;
        goto LAB_00100308;
      }
      if (sVar25 < 0x80) {
        lVar30 = sVar25 - 1;
        pauVar28 = __ptr;
        if (0x1f < sVar25) {
          auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar31,3);
          auVar4 = vpshufb_avx(*(undefined1 (*) [16])(puVar32 + -0x1018),__LC0);
          auVar4 = auVar4 ^ auVar2;
          pauVar26 = __ptr;
          goto LAB_00100270;
        }
      }
      else {
        uVar34 = sVar25 - 0x80 >> 6;
        auVar4 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar31,3);
        auVar2 = vpshufb_avx(*(undefined1 (*) [16])(puVar32 + -0x1018),__LC0);
        auVar4 = auVar4 ^ auVar2;
        pauVar26 = __ptr + (uVar34 + 1) * 4;
        auVar2 = vpshufb_avx(*(undefined1 (*) [16])(puVar32 + -0x1008),__LC0);
        auVar5 = vpshufb_avx(*(undefined1 (*) [16])(puVar32 + -0xff8),__LC0);
        auVar3 = vpshufb_avx(*(undefined1 (*) [16])(puVar32 + -0xfe8),__LC0);
        pauVar28 = __ptr;
        do {
          pauVar27 = pauVar28 + 4;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar5._0_8_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = __LC1;
          auVar10 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar10 = auVar10 ^ auVar11 << uVar24;
            }
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auVar5._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = _UNK_00100338;
          auVar6 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar16 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar6 = auVar6 ^ auVar5 << uVar24;
            }
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar4._0_8_;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = __LC1;
          auVar5 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar12 << uVar24;
            }
          }
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auVar4._8_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = _UNK_00100338;
          auVar11 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar17 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar11 = auVar11 ^ auVar4 << uVar24;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar3._0_8_;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = __LC1;
          auVar16 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar16 = auVar16 ^ auVar13 << uVar24;
            }
          }
          auVar18._8_8_ = 0;
          auVar18._0_8_ = auVar3._8_8_;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = _UNK_00100338;
          auVar7 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar18 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar7 = auVar7 ^ auVar3 << uVar24;
            }
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar2._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = __LC1;
          auVar3 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar3 = auVar3 ^ auVar14 << uVar24;
            }
          }
          auVar4 = vpshufb_avx(*pauVar27,__LC0);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = auVar2._8_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = _UNK_00100338;
          auVar12 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar19 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar12 = auVar12 ^ auVar2 << uVar24;
            }
          }
          auVar4 = auVar11 ^ auVar5 ^ auVar4;
          auVar2 = vpshufb_avx(pauVar28[5],__LC0);
          auVar2 = auVar12 ^ auVar3 ^ auVar2;
          auVar5 = vpshufb_avx(pauVar28[6],__LC0);
          auVar5 = auVar10 ^ auVar6 ^ auVar5;
          auVar3 = vpshufb_avx(pauVar28[7],__LC0);
          auVar3 = auVar16 ^ auVar7 ^ auVar3;
          pauVar28 = pauVar27;
        } while (pauVar27 != pauVar26);
        auVar4 = vpshufb_avx(auVar4,__LC0);
        auVar2 = vpshufb_avx(auVar2,__LC0);
        auVar5 = vpshufb_avx(auVar5,__LC0);
        auVar3 = vpshufb_avx(auVar3,__LC0);
        *pauVar26 = auVar4;
        sVar25 = (sVar25 - 0x40) + uVar34 * -0x40;
        pauVar26[1] = auVar2;
        auVar4 = vpshufb_avx(auVar4,__LC0);
        pauVar26[2] = auVar5;
        pauVar26[3] = auVar3;
LAB_00100270:
        uVar34 = sVar25 - 0x20 >> 4;
        pauVar28 = pauVar26 + uVar34 + 1;
        do {
          pauVar27 = pauVar26 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar4._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = __LC2;
          auVar2 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar10 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar2 = auVar2 ^ auVar15 << uVar24;
            }
          }
          pauVar26 = pauVar26 + 1;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = auVar4._8_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = _UNK_00100348;
          auVar5 = (undefined1  [16])0x0;
          for (uVar24 = 0; uVar24 < 0x40; uVar24 = uVar24 + 1) {
            if ((auVar20 & (undefined1  [16])0x1 << uVar24) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar21 << uVar24;
            }
          }
          auVar4 = vpshufb_avx(*pauVar27,__LC0);
          auVar4 = auVar5 ^ auVar2 ^ auVar4;
        } while (pauVar26 != pauVar28);
        auVar4 = vpshufb_avx(auVar4,__LC0);
        uVar31 = 0;
        *pauVar28 = auVar4;
        lVar30 = (sVar25 - 0x11) + uVar34 * -0x10;
      }
      pauVar26 = pauVar28;
      do {
        pauVar27 = (undefined1 (*) [16])((long)*pauVar26 + 1);
        uVar31 = uVar31 << 8 ^
                 *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar31 >> 0x18) ^ (*pauVar26)[0]) * 8);
        pauVar26 = pauVar27;
      } while (pauVar27 != (undefined1 (*) [16])((long)*pauVar28 + lVar30 + 1));
      uVar24 = fp->_flags;
    } while ((uVar24 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar32 + -0x1020);
    *crc_out = uVar31;
    *puVar1 = uVar33;
    _Var23 = (_Bool)(((byte)(uVar24 >> 5) ^ 1) & 1);
  }
  if (*(long *)(puVar32 + 0xeff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var23;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar32 + -0x1030) = 0x100314;
  __stack_chk_fail();
}


