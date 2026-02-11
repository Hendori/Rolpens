
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 crc32_update_no_xor_pclmul(uint param_1,undefined1 (*param_2) [16],size_t param_3)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar53;
  undefined1 (*pauVar54) [16];
  undefined1 (*pauVar55) [16];
  ulong uVar56;
  undefined8 *puVar57;
  undefined4 uVar61;
  ulong uVar58;
  undefined4 *puVar59;
  long lVar60;
  uint uVar62;
  long lVar63;
  ulong uVar64;
  undefined8 *puVar65;
  undefined4 *puVar66;
  long in_FS_OFFSET;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar57 = (undefined8 *)local_e8;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puVar65 = puVar57;
  for (lVar63 = 0x18; lVar63 != 0; lVar63 = lVar63 + -1) {
    *puVar65 = 0;
    puVar65 = puVar65 + 1;
  }
  if (param_3 < 0x80) {
    puVar57 = (undefined8 *)memcpy(puVar57,param_2,param_3);
    auVar67 = ZEXT416(param_1) ^ local_e8;
    local_e8 = auVar67;
    puVar65 = puVar57;
    if (param_3 < 0x20) goto LAB_0010028a;
    uVar64 = param_3 - 0x10;
    uVar56 = param_3 - 0x20;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = auVar67._8_8_;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = _UNK_00100518;
    auVar31 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar68 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar69 << uVar53;
      }
    }
    auVar70._8_8_ = 0;
    auVar70._0_8_ = auVar67._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = __LC1;
    auVar67 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar70 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar67 = auVar67 ^ auVar1 << uVar53;
      }
    }
    auStack_d8 = auVar67 ^ auVar31 ^ auStack_d8;
    auVar67 = auStack_d8;
    if (0x1f < uVar64) goto LAB_00100189;
  }
  else {
    auStack_d8 = param_2[1];
    auStack_c8 = param_2[2];
    auStack_b8 = param_2[3];
    local_e8 = ZEXT416(param_1) ^ *param_2;
    pauVar54 = param_2;
    do {
      auVar31._8_8_ = 0;
      auVar31._0_8_ = local_e8._8_8_;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = _UNK_00100508;
      auVar67 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar31 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar67 = auVar67 ^ auVar41 << uVar53;
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_e8._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = __LC0;
      auVar31 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar2 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar31 = auVar31 ^ auVar14 << uVar53;
        }
      }
      pauVar55 = pauVar54 + 4;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = auStack_d8._8_8_;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = _UNK_00100508;
      auVar68 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar32 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar68 = auVar68 ^ auVar42 << uVar53;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_d8._0_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = __LC0;
      auVar69 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar3 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar69 = auVar69 ^ auVar15 << uVar53;
        }
      }
      auVar33._8_8_ = 0;
      auVar33._0_8_ = auStack_c8._8_8_;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = _UNK_00100508;
      auVar70 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar33 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar70 = auVar70 ^ auVar43 << uVar53;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_c8._0_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = __LC0;
      auVar1 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar4 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar1 = auVar1 ^ auVar16 << uVar53;
        }
      }
      auVar34._8_8_ = 0;
      auVar34._0_8_ = auStack_b8._8_8_;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = _UNK_00100508;
      auVar41 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar34 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar41 = auVar41 ^ auVar44 << uVar53;
        }
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auStack_b8._0_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = __LC0;
      auVar2 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar5 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar2 = auVar2 ^ auVar17 << uVar53;
        }
      }
      local_e8 = auVar67 ^ auVar31 ^ *pauVar55;
      auStack_d8 = auVar68 ^ auVar69 ^ pauVar54[5];
      auStack_c8 = auVar1 ^ auVar70 ^ pauVar54[6];
      auStack_b8 = auVar41 ^ auVar2 ^ pauVar54[7];
      pauVar54 = pauVar55;
    } while (pauVar55 != (undefined1 (*) [16])(param_2[4] + (param_3 - 0x80 & 0xffffffffffffffc0)));
    puVar66 = (undefined4 *)auStack_a8;
    auVar67 = local_e8;
    uVar56 = param_3 - 0x80 & 0xffffffffffffffc0;
    lVar63 = param_3 - uVar56;
    puVar59 = (undefined4 *)(param_2[8] + uVar56);
    param_3 = lVar63 - 0x40;
    uVar56 = lVar63 - 0x80;
    if ((uint)uVar56 < 8) {
      if ((uVar56 & 4) == 0) goto LAB_00100146;
LAB_00100350:
      *puVar66 = *puVar59;
      lVar60 = 4;
    }
    else {
      uVar64 = 0;
      do {
        uVar53 = (int)uVar64 + 8;
        uVar58 = (ulong)uVar53;
        *(undefined8 *)((long)puVar66 + uVar64) = *(undefined8 *)((long)puVar59 + uVar64);
        uVar64 = uVar58;
      } while (uVar53 < ((uint)uVar56 & 0xfffffff8));
      puVar66 = (undefined4 *)((long)puVar66 + uVar58);
      puVar59 = (undefined4 *)(uVar58 + (long)puVar59);
      if ((uVar56 & 4) != 0) goto LAB_00100350;
LAB_00100146:
      lVar60 = 0;
    }
    if ((uVar56 & 2) != 0) {
      *(undefined2 *)((long)puVar66 + lVar60) = *(undefined2 *)((long)puVar59 + lVar60);
      lVar60 = lVar60 + 2;
    }
    if ((uVar56 & 1) != 0) {
      *(undefined1 *)((long)puVar66 + lVar60) = *(undefined1 *)((long)puVar59 + lVar60);
    }
    uVar64 = lVar63 - 0x50;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_e8._8_8_;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = _UNK_00100518;
    auVar31 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar35 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar45 << uVar53;
      }
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_e8._0_8_;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = __LC1;
    auVar68 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar6 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar68 = auVar68 ^ auVar18 << uVar53;
      }
    }
    auStack_d8 = auVar31 ^ auVar68 ^ auStack_d8;
    local_e8 = auVar67;
LAB_00100189:
    auVar36._8_8_ = 0;
    auVar36._0_8_ = auStack_d8._8_8_;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = _UNK_00100518;
    auVar67 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar36 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar67 = auVar67 ^ auVar46 << uVar53;
      }
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auStack_d8._0_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = __LC1;
    auVar31 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((auVar7 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar19 << uVar53;
      }
    }
    uVar56 = param_3 - 0x20;
    auStack_c8 = auVar31 ^ auVar67 ^ auStack_c8;
    puVar65 = puVar57;
    auVar67 = auStack_c8;
    if (0x1f < uVar56) {
      auVar37._8_8_ = 0;
      auVar37._0_8_ = auStack_c8._8_8_;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = _UNK_00100518;
      auVar67 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar37 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar67 = auVar67 ^ auVar47 << uVar53;
        }
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auStack_c8._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = __LC1;
      auVar31 = (undefined1  [16])0x0;
      for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
        if ((auVar8 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
          auVar31 = auVar31 ^ auVar20 << uVar53;
        }
      }
      auStack_b8 = auVar31 ^ auVar67 ^ auStack_b8;
      auVar67 = auStack_b8;
      if (0x1f < param_3 - 0x30) {
        auVar38._8_8_ = 0;
        auVar38._0_8_ = auStack_b8._8_8_;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = _UNK_00100518;
        auVar67 = (undefined1  [16])0x0;
        for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
          if ((auVar38 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
            auVar67 = auVar67 ^ auVar48 << uVar53;
          }
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = auStack_b8._0_8_;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = __LC1;
        auVar31 = (undefined1  [16])0x0;
        for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
          if ((auVar9 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
            auVar31 = auVar31 ^ auVar21 << uVar53;
          }
        }
        auStack_a8 = auVar31 ^ auVar67 ^ auStack_a8;
        auVar67 = auStack_a8;
        if (0x1f < param_3 - 0x40) {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = auStack_a8._8_8_;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = _UNK_00100518;
          auVar67 = (undefined1  [16])0x0;
          for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
            if ((auVar39 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
              auVar67 = auVar67 ^ auVar49 << uVar53;
            }
          }
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auStack_a8._0_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = __LC1;
          auVar31 = (undefined1  [16])0x0;
          for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
            if ((auVar10 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
              auVar31 = auVar31 ^ auVar22 << uVar53;
            }
          }
          auStack_98 = auVar31 ^ auVar67 ^ auStack_98;
          auVar67 = auStack_98;
          if (0x1f < param_3 - 0x50) {
            auVar40._8_8_ = 0;
            auVar40._0_8_ = auStack_98._8_8_;
            auVar50._8_8_ = 0;
            auVar50._0_8_ = _UNK_00100518;
            auVar67 = (undefined1  [16])0x0;
            for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
              if ((auVar40 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
                auVar67 = auVar67 ^ auVar50 << uVar53;
              }
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = auStack_98._0_8_;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = __LC1;
            auVar31 = (undefined1  [16])0x0;
            for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
              if ((auVar11 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
                auVar31 = auVar31 ^ auVar23 << uVar53;
              }
            }
            auStack_88 = auVar67 ^ auVar31 ^ auStack_88;
            auVar67 = auStack_88;
          }
        }
      }
    }
  }
  uVar56 = uVar56 >> 4;
  puVar57 = (undefined8 *)(uVar56 * 0x10);
  param_3 = uVar64 + uVar56 * -0x10;
  puVar65 = puVar65 + (uVar56 + 1) * 2;
LAB_0010028a:
  uVar61 = (undefined4)((ulong)puVar57 >> 0x20);
  if (param_3 != 0x10) {
    lVar63 = -param_3;
    lVar60 = lVar63 + 0x30;
    puVar57 = (undefined8 *)((long)&local_108 + lVar63);
    uVar53 = (uint)param_3;
    uVar56 = param_3 & 0xffffffff;
    if (uVar53 < 8) {
      if ((param_3 & 4) == 0) {
        if ((uVar53 != 0) && (*(undefined1 *)puVar57 = *(undefined1 *)puVar65, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)&uStack_110 + uVar56 + lVar60 + -0x2a) =
               *(undefined2 *)((long)puVar65 + (uVar56 - 2));
        }
      }
      else {
        *(undefined4 *)puVar57 = *(undefined4 *)puVar65;
        *(undefined4 *)((long)&uStack_110 + uVar56 + lVar60 + -0x2c) =
             *(undefined4 *)((long)puVar65 + (uVar56 - 4));
      }
    }
    else {
      uVar56 = (long)&uStack_100 + lVar63 & 0xfffffffffffffff8;
      *puVar57 = *puVar65;
      *(undefined8 *)((long)&uStack_110 + (param_3 & 0xffffffff) + lVar60 + -0x30) =
           *(undefined8 *)((long)puVar65 + ((param_3 & 0xffffffff) - 8));
      lVar63 = (long)puVar57 - uVar56;
      uVar53 = uVar53 + (int)lVar63 & 0xfffffff8;
      if (7 < uVar53) {
        uVar62 = 0;
        do {
          uVar64 = (ulong)uVar62;
          uVar62 = uVar62 + 8;
          *(undefined8 *)(uVar56 + uVar64) = *(undefined8 *)((long)puVar65 + (uVar64 - lVar63));
        } while (uVar62 < uVar53);
      }
    }
    uVar61 = 0;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = _UNK_00100528;
    auVar67 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((ZEXT816(0) & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar67 = auVar67 ^ auVar51 << uVar53;
      }
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = __LC2;
    auVar31 = (undefined1  [16])0x0;
    for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
      if ((ZEXT816(0) & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar26 << uVar53;
      }
    }
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uStack_110;
    auVar67 = auVar31 ^ auVar67 ^ auVar52 << 0x40;
  }
  auVar31 = vpand_avx(auVar67,__LC4);
  auVar69 = vpsrldq_avx(auVar67,8);
  auVar68 = vpsrldq_avx(auVar67,0xc);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = __LC3;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar31._0_8_;
  auVar67 = (undefined1  [16])0x0;
  for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
    if ((auVar12 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
      auVar67 = auVar67 ^ auVar24 << uVar53;
    }
  }
  auVar70 = vpsrldq_avx(auVar67,4);
  auVar67 = vpand_avx(auVar67 ^ auVar69,__LC5);
  auVar31 = vpand_avx(__LC5,auVar68);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = _UNK_00100538;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = auVar67._0_8_;
  auVar67 = (undefined1  [16])0x0;
  for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
    if ((auVar27 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
      auVar67 = auVar67 ^ auVar29 << uVar53;
    }
  }
  auVar31 = auVar67 ^ auVar70 ^ auVar31;
  auVar67 = vpand_avx(auVar31,__LC5);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = __LC6;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar67._0_8_;
  auVar67 = (undefined1  [16])0x0;
  for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
    if ((auVar13 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
      auVar67 = auVar67 ^ auVar25 << uVar53;
    }
  }
  auVar67 = vpand_avx(auVar67,__LC5);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = _UNK_00100568;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar67._0_8_;
  auVar67 = (undefined1  [16])0x0;
  for (uVar53 = 0; uVar53 < 0x40; uVar53 = uVar53 + 1) {
    if ((auVar28 & (undefined1  [16])0x1 << uVar53) != (undefined1  [16])0x0) {
      auVar67 = auVar67 ^ auVar30 << uVar53;
    }
  }
  auVar67 = vpsrldq_avx(auVar67 ^ auVar31,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(uVar61,auVar67._0_4_);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


