
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 *puVar45;
  uint uVar46;
  size_t sVar47;
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar50) [16];
  int *piVar51;
  long lVar52;
  ulong uVar53;
  undefined1 *puVar54;
  ulong uVar55;
  ulong uVar56;
  long in_FS_OFFSET;
  bool bVar57;
  undefined1 auVar58 [16];
  ulong uVar59;
  ulong uVar60;
  undefined1 auStack_10030 [65536];
  undefined1 (*pauVar49) [16];
  
  puVar45 = &stack0xffffffffffffffd0;
  do {
    puVar54 = puVar45;
    *(undefined8 *)(puVar54 + -0x1000) = *(undefined8 *)(puVar54 + -0x1000);
    puVar45 = puVar54 + -0x1000;
  } while (puVar54 + -0x1000 != auStack_10030);
  *(long *)(puVar54 + -0x1020) = param_3;
  *(undefined8 *)(puVar54 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (ulong *)0x0 || param_3 == 0) || (param_1 == (FILE *)0x0)) {
LAB_001003e4:
    uVar46 = 0;
  }
  else {
    uVar55 = 0;
    __ptr = (undefined1 (*) [16])(puVar54 + -0x1018);
    uVar53 = 0;
    do {
      *(undefined8 *)(puVar54 + -0x1030) = 0x100095;
      sVar47 = fread_unlocked(__ptr,1,0x10000,param_1);
      if (sVar47 == 0) {
        uVar46 = param_1->_flags;
        break;
      }
      bVar57 = CARRY8(uVar55,sVar47);
      uVar55 = uVar55 + sVar47;
      if (bVar57) {
        *(undefined8 *)(puVar54 + -0x1030) = 0x1003de;
        piVar51 = __errno_location();
        *piVar51 = 0x4b;
        goto LAB_001003e4;
      }
      uVar59 = SUB168(__LC2,0);
      uVar60 = SUB168(__LC2,8);
      if (sVar47 < 0x80) {
        lVar52 = sVar47 - 1;
        pauVar50 = __ptr;
        if (0x1f < sVar47) {
          auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar53,3);
          auVar58 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0x1018),__LC0);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = SUB168(auVar58 ^ auVar2,0);
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar59;
          auVar5 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar15 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar26 << uVar46;
            }
          }
          auVar37._8_8_ = 0;
          auVar37._0_8_ = SUB168(auVar58 ^ auVar2,8);
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uVar60;
          auVar2 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar37 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar2 = auVar2 ^ auVar44 << uVar46;
            }
          }
          auVar58 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0x1008),__LC0);
          auVar58 = auVar5 ^ auVar2 ^ auVar58;
          if (0x1f < sVar47 - 0x10) goto LAB_00100289;
          uVar56 = sVar47 - 0x20;
          goto LAB_0010034b;
        }
      }
      else {
        uVar56 = sVar47 - 0x80 >> 6;
        auVar2 = vpinsrd_avx((undefined1  [16])0x0,(int)uVar53,3);
        auVar58 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0x1018),__LC0);
        auVar2 = auVar2 ^ auVar58;
        pauVar50 = __ptr + (uVar56 + 1) * 4;
        auVar58 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0x1008),__LC0);
        auVar5 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0xff8),__LC0);
        auVar3 = vpshufb_avx(*(undefined1 (*) [16])(puVar54 + -0xfe8),__LC0);
        pauVar48 = __ptr;
        do {
          pauVar49 = pauVar48 + 4;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar3._0_8_;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = __LC1;
          auVar4 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar4 = auVar4 ^ auVar16 << uVar46;
            }
          }
          auVar27._8_8_ = 0;
          auVar27._0_8_ = auVar3._8_8_;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = _UNK_00100418;
          auVar6 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar27 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar6 = auVar6 ^ auVar3 << uVar46;
            }
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar2._0_8_;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = __LC1;
          auVar3 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar3 = auVar3 ^ auVar17 << uVar46;
            }
          }
          auVar28._8_8_ = 0;
          auVar28._0_8_ = auVar2._8_8_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = _UNK_00100418;
          auVar16 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar28 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar16 = auVar16 ^ auVar2 << uVar46;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar58._0_8_;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = __LC1;
          auVar27 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar27 = auVar27 ^ auVar18 << uVar46;
            }
          }
          auVar29._8_8_ = 0;
          auVar29._0_8_ = auVar58._8_8_;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = _UNK_00100418;
          auVar7 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar29 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar7 = auVar7 ^ auVar58 << uVar46;
            }
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar5._0_8_;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = __LC1;
          auVar17 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar17 = auVar17 ^ auVar19 << uVar46;
            }
          }
          auVar2 = vpshufb_avx(*pauVar49,__LC0);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = auVar5._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = _UNK_00100418;
          auVar28 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar30 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar28 = auVar28 ^ auVar5 << uVar46;
            }
          }
          auVar2 = auVar16 ^ auVar3 ^ auVar2;
          auVar58 = vpshufb_avx(pauVar48[5],__LC0);
          auVar58 = auVar7 ^ auVar27 ^ auVar58;
          auVar5 = vpshufb_avx(pauVar48[6],__LC0);
          auVar5 = auVar17 ^ auVar28 ^ auVar5;
          auVar3 = vpshufb_avx(pauVar48[7],__LC0);
          auVar3 = auVar4 ^ auVar6 ^ auVar3;
          pauVar48 = pauVar49;
        } while (pauVar49 != pauVar50);
        auVar3 = vpshufb_avx(auVar3,__LC0);
        auVar2 = vpshufb_avx(auVar2,__LC0);
        auVar5 = vpshufb_avx(auVar5,__LC0);
        pauVar50[3] = auVar3;
        auVar58 = vpshufb_avx(auVar58,__LC0);
        *pauVar50 = auVar2;
        auVar2 = vpshufb_avx(auVar2,__LC0);
        sVar47 = (sVar47 - 0x40) + uVar56 * -0x40;
        pauVar50[2] = auVar5;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar2._0_8_;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar59;
        auVar5 = (undefined1  [16])0x0;
        for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
          if ((auVar4 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
            auVar5 = auVar5 ^ auVar20 << uVar46;
          }
        }
        auVar31._8_8_ = 0;
        auVar31._0_8_ = auVar2._8_8_;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar60;
        auVar2 = (undefined1  [16])0x0;
        for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
          if ((auVar31 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
            auVar2 = auVar2 ^ auVar38 << uVar46;
          }
        }
        pauVar50[1] = auVar58;
        auVar58 = vpshufb_avx(auVar58,__LC0);
        auVar58 = auVar5 ^ auVar2 ^ auVar58;
LAB_00100289:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = auVar58._0_8_;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar59;
        auVar2 = (undefined1  [16])0x0;
        for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
          if ((auVar10 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
            auVar2 = auVar2 ^ auVar21 << uVar46;
          }
        }
        uVar56 = sVar47 - 0x20;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = auVar58._8_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar60;
        auVar5 = (undefined1  [16])0x0;
        for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
          if ((auVar32 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
            auVar5 = auVar5 ^ auVar39 << uVar46;
          }
        }
        auVar58 = vpshufb_avx(pauVar50[2],__LC0);
        auVar58 = auVar2 ^ auVar5 ^ auVar58;
        if (0x1f < uVar56) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar58._0_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar59;
          auVar2 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar11 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar2 = auVar2 ^ auVar22 << uVar46;
            }
          }
          auVar33._8_8_ = 0;
          auVar33._0_8_ = auVar58._8_8_;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = uVar60;
          auVar5 = (undefined1  [16])0x0;
          for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
            if ((auVar33 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
              auVar5 = auVar5 ^ auVar40 << uVar46;
            }
          }
          auVar58 = vpshufb_avx(pauVar50[3],__LC0);
          auVar58 = auVar2 ^ auVar5 ^ auVar58;
          if (0x1f < sVar47 - 0x30) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = auVar58._0_8_;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar59;
            auVar2 = (undefined1  [16])0x0;
            for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
              if ((auVar12 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                auVar2 = auVar2 ^ auVar23 << uVar46;
              }
            }
            auVar34._8_8_ = 0;
            auVar34._0_8_ = auVar58._8_8_;
            auVar41._8_8_ = 0;
            auVar41._0_8_ = uVar60;
            auVar5 = (undefined1  [16])0x0;
            for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
              if ((auVar34 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                auVar5 = auVar5 ^ auVar41 << uVar46;
              }
            }
            auVar58 = vpshufb_avx(pauVar50[4],__LC0);
            auVar58 = auVar2 ^ auVar5 ^ auVar58;
            if (0x1f < sVar47 - 0x40) {
              auVar13._8_8_ = 0;
              auVar13._0_8_ = auVar58._0_8_;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar59;
              auVar2 = (undefined1  [16])0x0;
              for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
                if ((auVar13 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                  auVar2 = auVar2 ^ auVar24 << uVar46;
                }
              }
              auVar35._8_8_ = 0;
              auVar35._0_8_ = auVar58._8_8_;
              auVar42._8_8_ = 0;
              auVar42._0_8_ = uVar60;
              auVar5 = (undefined1  [16])0x0;
              for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
                if ((auVar35 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                  auVar5 = auVar5 ^ auVar42 << uVar46;
                }
              }
              auVar58 = vpshufb_avx(pauVar50[5],__LC0);
              auVar58 = auVar2 ^ auVar5 ^ auVar58;
              if (0x1f < sVar47 - 0x50) {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = auVar58._0_8_;
                auVar25._8_8_ = 0;
                auVar25._0_8_ = uVar59;
                auVar2 = (undefined1  [16])0x0;
                for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
                  if ((auVar14 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                    auVar2 = auVar2 ^ auVar25 << uVar46;
                  }
                }
                auVar36._8_8_ = 0;
                auVar36._0_8_ = auVar58._8_8_;
                auVar43._8_8_ = 0;
                auVar43._0_8_ = uVar60;
                auVar5 = (undefined1  [16])0x0;
                for (uVar46 = 0; uVar46 < 0x40; uVar46 = uVar46 + 1) {
                  if ((auVar36 & (undefined1  [16])0x1 << uVar46) != (undefined1  [16])0x0) {
                    auVar5 = auVar5 ^ auVar43 << uVar46;
                  }
                }
                auVar58 = vpshufb_avx(pauVar50[6],__LC0);
                auVar58 = auVar5 ^ auVar2 ^ auVar58;
              }
            }
          }
        }
LAB_0010034b:
        auVar2 = vpshufb_avx(auVar58,__LC0);
        uVar53 = 0;
        pauVar50 = pauVar50 + (uVar56 >> 4) + 1;
        lVar52 = (sVar47 - 0x11) + (uVar56 >> 4) * -0x10;
        *pauVar50 = auVar2;
      }
      pauVar48 = pauVar50;
      do {
        pauVar49 = (undefined1 (*) [16])((long)*pauVar48 + 1);
        uVar53 = uVar53 << 8 ^
                 *(ulong *)(&crctab + (ulong)(byte)((byte)(uVar53 >> 0x18) ^ (*pauVar48)[0]) * 8);
        pauVar48 = pauVar49;
      } while (pauVar49 != (undefined1 (*) [16])((long)*pauVar50 + lVar52 + 1));
      uVar46 = param_1->_flags;
    } while ((uVar46 & 0x10) == 0);
    puVar1 = *(ulong **)(puVar54 + -0x1020);
    *param_2 = uVar53;
    *puVar1 = uVar55;
    uVar46 = (uVar46 >> 5 ^ 1) & 1;
  }
  if (*(long *)(puVar54 + 0xeff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar54 + -0x1030) = 0x1003fc;
    __stack_chk_fail();
  }
  return uVar46;
}


