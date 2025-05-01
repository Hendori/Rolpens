
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint32_t crc32_update_no_xor_pclmul(uint32_t crc,void *buf,size_t len)

{
  undefined8 *puVar1;
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
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  undefined1 (*__dest) [16];
  uint uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  long in_FS_OFFSET;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  __m128i in256 [4];
  __m128i final_buf [12];
  ulong local_138;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __dest = &local_e8;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  pauVar30 = __dest;
  for (lVar34 = 0x18; lVar34 != 0; lVar34 = lVar34 + -1) {
    *(undefined8 *)*pauVar30 = 0;
    pauVar30 = (undefined1 (*) [16])((long)*pauVar30 + 8);
  }
  if (len < 0x80) {
    memcpy(__dest,buf,len);
    local_138 = (ulong)crc;
    local_e8._0_8_ = local_138 ^ local_e8._0_8_;
    if (len < 0x20) goto LAB_0010018d;
  }
  else {
    uVar36 = len - 0x80;
    auStack_d8 = *(undefined1 (*) [16])((long)buf + 0x10);
    auStack_c8 = *(undefined1 (*) [16])((long)buf + 0x20);
    auStack_b8 = *(undefined1 (*) [16])((long)buf + 0x30);
                    /* WARNING: Load size is inaccurate */
    local_e8 = ZEXT416(crc) ^ *buf;
    pauVar30 = (undefined1 (*) [16])buf;
    do {
      auVar39._8_8_ = 0;
      auVar39._0_8_ = local_e8._8_8_;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = _UNK_00100358;
      auVar38 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar39 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar38 = auVar38 ^ auVar40 << uVar35;
        }
      }
      auVar41._8_8_ = 0;
      auVar41._0_8_ = local_e8._0_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = __LC0;
      auVar39 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar41 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar39 = auVar39 ^ auVar8 << uVar35;
        }
      }
      pauVar31 = pauVar30 + 4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = auStack_d8._8_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = _UNK_00100358;
      auVar40 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar20 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar40 = auVar40 ^ auVar24 << uVar35;
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auStack_d8._0_8_;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = __LC0;
      auVar41 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar2 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar41 = auVar41 ^ auVar9 << uVar35;
        }
      }
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auStack_c8._8_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = _UNK_00100358;
      auVar8 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar21 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar8 = auVar8 ^ auVar25 << uVar35;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_c8._0_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = __LC0;
      auVar20 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar3 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar20 = auVar20 ^ auVar10 << uVar35;
        }
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auStack_b8._8_8_;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = _UNK_00100358;
      auVar24 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar22 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar24 = auVar24 ^ auVar26 << uVar35;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_b8._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = __LC0;
      auVar2 = (undefined1  [16])0x0;
      for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
        if ((auVar4 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
          auVar2 = auVar2 ^ auVar11 << uVar35;
        }
      }
      local_e8 = auVar38 ^ auVar39 ^ *pauVar31;
      auStack_d8 = auVar40 ^ auVar41 ^ pauVar30[5];
      auStack_c8 = auVar20 ^ auVar8 ^ pauVar30[6];
      auStack_b8 = auVar24 ^ auVar2 ^ pauVar30[7];
      pauVar30 = pauVar31;
    } while (pauVar31 != (undefined1 (*) [16])((long)buf + (uVar36 & 0xffffffffffffffc0) + 0x40));
    uVar32 = uVar36 & 0xffffffffffffffc0;
    len = (len - 0x40) - uVar32;
    memcpy(auStack_a8,(void *)((long)buf + uVar32 + 0x80),uVar36 - uVar32);
    if (len < 0x20) goto LAB_0010018d;
  }
  uVar36 = len - 0x20 >> 4;
  pauVar30 = __dest + uVar36 + 1;
  auVar38 = local_e8;
  do {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar38._8_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = _UNK_00100368;
    auVar39 = (undefined1  [16])0x0;
    for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
      if ((auVar23 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
        auVar39 = auVar39 ^ auVar27 << uVar35;
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar38._0_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = __LC1;
    auVar38 = (undefined1  [16])0x0;
    for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
      if ((auVar5 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar12 << uVar35;
      }
    }
    __dest = __dest + 1;
    auVar38 = auVar39 ^ auVar38 ^ *__dest;
    *__dest = auVar38;
  } while (__dest != pauVar30);
  len = (len - 0x10) + uVar36 * -0x10;
  __dest = pauVar30;
LAB_0010018d:
  if (len == 0x10) {
    auVar38 = *__dest;
  }
  else {
    lVar34 = -len;
    lVar37 = lVar34 + 0x30;
    puVar1 = (undefined8 *)((long)&local_108 + lVar34);
    uVar35 = (uint)len;
    uVar36 = len & 0xffffffff;
    if (uVar35 < 8) {
      if ((len & 4) == 0) {
        if ((uVar35 != 0) && (*(undefined1 *)puVar1 = (*__dest)[0], (len & 2) != 0)) {
          *(undefined2 *)((long)&uStack_110 + uVar36 + lVar37 + -0x2a) =
               *(undefined2 *)(__dest[-1] + uVar36 + 0xe);
        }
      }
      else {
        *(undefined4 *)puVar1 = *(undefined4 *)*__dest;
        *(undefined4 *)((long)&uStack_110 + uVar36 + lVar37 + -0x2c) =
             *(undefined4 *)(__dest[-1] + uVar36 + 0xc);
      }
    }
    else {
      uVar36 = (long)&uStack_100 + lVar34 & 0xfffffffffffffff8;
      *puVar1 = *(undefined8 *)*__dest;
      *(undefined8 *)((long)&uStack_110 + (len & 0xffffffff) + lVar37 + -0x30) =
           *(undefined8 *)(__dest[-1] + (len & 0xffffffff) + 8);
      lVar34 = (long)puVar1 - uVar36;
      uVar35 = uVar35 + (int)lVar34 & 0xfffffff8;
      if (7 < uVar35) {
        uVar33 = 0;
        do {
          uVar32 = (ulong)uVar33;
          uVar33 = uVar33 + 8;
          *(undefined8 *)(uVar36 + uVar32) = *(undefined8 *)((long)__dest + (uVar32 - lVar34));
        } while (uVar33 < uVar35);
      }
    }
    auVar28._8_8_ = 0;
    auVar28._0_8_ = _UNK_00100378;
    auVar38 = (undefined1  [16])0x0;
    for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
      if ((ZEXT816(0) & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
        auVar38 = auVar38 ^ auVar28 << uVar35;
      }
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = __LC2;
    auVar39 = (undefined1  [16])0x0;
    for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
      if ((ZEXT816(0) & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
        auVar39 = auVar39 ^ auVar15 << uVar35;
      }
    }
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uStack_110;
    auVar38 = auVar39 ^ auVar38 ^ auVar29 << 0x40;
  }
  auVar40 = vpsrldq_avx(auVar38,8);
  auVar39 = vpsrldq_avx(auVar38,0xc);
  auVar38 = vpand_avx(auVar38,__LC4);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __LC3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auVar38._0_8_;
  auVar38 = (undefined1  [16])0x0;
  for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
      auVar38 = auVar38 ^ auVar13 << uVar35;
    }
  }
  auVar41 = vpsrldq_avx(auVar38,4);
  auVar38 = vpand_avx(auVar38 ^ auVar40,__LC5);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = _UNK_00100388;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = auVar38._0_8_;
  auVar38 = (undefined1  [16])0x0;
  for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
    if ((auVar16 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
      auVar38 = auVar38 ^ auVar18 << uVar35;
    }
  }
  auVar39 = vpand_avx(__LC5,auVar39);
  auVar39 = auVar38 ^ auVar41 ^ auVar39;
  auVar38 = vpand_avx(auVar39,__LC5);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = __LC6;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar38._0_8_;
  auVar38 = (undefined1  [16])0x0;
  for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
      auVar38 = auVar38 ^ auVar14 << uVar35;
    }
  }
  auVar38 = vpand_avx(auVar38,__LC5);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = _UNK_001003b8;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar38._0_8_;
  auVar38 = (undefined1  [16])0x0;
  for (uVar35 = 0; uVar35 < 0x40; uVar35 = uVar35 + 1) {
    if ((auVar17 & (undefined1  [16])0x1 << uVar35) != (undefined1  [16])0x0) {
      auVar38 = auVar38 ^ auVar19 << uVar35;
    }
  }
  auVar38 = vpsrldq_avx(auVar38 ^ auVar39,4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar38._0_4_;
}


