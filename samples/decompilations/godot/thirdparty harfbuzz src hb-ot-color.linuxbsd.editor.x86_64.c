
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_ot_color_has_png(long param_1)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  undefined *puVar4;
  accelerator_t *this;
  accelerator_t *this_00;
  bool bVar5;
  
  plVar1 = (long *)(param_1 + 0x198);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_0010002c;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_001001a9;
      this = (accelerator_t *)calloc(1,0x18);
      if (this == (accelerator_t *)0x0) break;
      OT::CBDT::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_0010002c;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)this);
        *(undefined8 *)this = 0;
        hb_blob_destroy(*(undefined8 *)(this + 8));
        free(this);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_001001a9:
  this = (accelerator_t *)&_hb_NullPool;
LAB_0010002c:
  puVar4 = *(undefined **)(this + 8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &_hb_NullPool;
  }
  bVar5 = true;
  if (*(int *)(puVar4 + 0x18) == 0) {
    plVar1 = (long *)(param_1 + 0x1a0);
    do {
      while( true ) {
        this_00 = (accelerator_t *)*plVar1;
        if (this_00 != (accelerator_t *)0x0) goto LAB_00100077;
        phVar3 = *(hb_face_t **)(param_1 + 0x70);
        if (phVar3 == (hb_face_t *)0x0) goto LAB_001001c8;
        this_00 = (accelerator_t *)calloc(1,0x10);
        if (this_00 == (accelerator_t *)0x0) break;
        OT::sbix::accelerator_t::accelerator_t(this_00,phVar3);
        LOCK();
        lVar2 = *plVar1;
        if (lVar2 == 0) {
          *plVar1 = (long)this_00;
        }
        UNLOCK();
        if (lVar2 == 0) goto LAB_00100077;
        if (this_00 != (accelerator_t *)&_hb_NullPool) {
          hb_blob_destroy(*(undefined8 *)this_00);
          free(this_00);
        }
      }
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)&_hb_NullPool;
      }
      UNLOCK();
    } while (lVar2 != 0);
LAB_001001c8:
    this_00 = (accelerator_t *)&_hb_NullPool;
LAB_00100077:
    puVar4 = *(undefined **)this_00;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &_hb_NullPool;
    }
    if (*(uint *)(puVar4 + 0x18) < 8) {
      bVar5 = __hb_NullPool != 0;
    }
    else {
      bVar5 = **(short **)(puVar4 + 0x10) != 0;
    }
  }
  return bVar5;
}



long hb_ot_color_glyph_reference_png(hb_font_t *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  hb_face_t *phVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  accelerator_t *paVar12;
  accelerator_t *paVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  short *psVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  uVar10 = (ulong)param_2;
  lVar6 = hb_blob_get_empty();
  lVar11 = *(long *)(param_1 + 0x20);
  plVar2 = (long *)(lVar11 + 0x1a0);
  do {
    while( true ) {
      paVar12 = (accelerator_t *)*plVar2;
      if (paVar12 != (accelerator_t *)0x0) goto LAB_00100219;
      phVar4 = *(hb_face_t **)(lVar11 + 0x70);
      if (phVar4 == (hb_face_t *)0x0) goto LAB_00100762;
      paVar12 = (accelerator_t *)calloc(1,0x10);
      if (paVar12 == (accelerator_t *)0x0) break;
      OT::sbix::accelerator_t::accelerator_t(paVar12,phVar4);
      LOCK();
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        *plVar2 = (long)paVar12;
      }
      UNLOCK();
      if (lVar3 == 0) goto LAB_00100219;
      if (paVar12 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)paVar12);
        free(paVar12);
      }
    }
    LOCK();
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      *plVar2 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar3 != 0);
LAB_00100762:
  paVar12 = (accelerator_t *)&_hb_NullPool;
LAB_00100219:
  puVar7 = *(undefined **)paVar12;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = &_hb_NullPool;
  }
  psVar17 = (short *)&_hb_NullPool;
  if (7 < *(uint *)(puVar7 + 0x18)) {
    psVar17 = *(short **)(puVar7 + 0x10);
  }
  if (*psVar17 == 0) {
LAB_00100239:
    iVar15 = *(int *)(lVar6 + 0x18);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20);
    plVar2 = (long *)(lVar11 + 0x1a0);
    do {
      while( true ) {
        paVar12 = (accelerator_t *)*plVar2;
        if (paVar12 != (accelerator_t *)0x0) goto LAB_0010027a;
        phVar4 = *(hb_face_t **)(lVar11 + 0x70);
        if (phVar4 == (hb_face_t *)0x0) goto LAB_001007a2;
        paVar12 = (accelerator_t *)calloc(1,0x10);
        if (paVar12 == (accelerator_t *)0x0) break;
        OT::sbix::accelerator_t::accelerator_t(paVar12,phVar4);
        LOCK();
        lVar6 = *plVar2;
        if (lVar6 == 0) {
          *plVar2 = (long)paVar12;
        }
        UNLOCK();
        if (lVar6 == 0) goto LAB_0010027a;
        if (paVar12 != (accelerator_t *)&_hb_NullPool) {
          hb_blob_destroy(*(undefined8 *)paVar12);
          free(paVar12);
        }
      }
      LOCK();
      lVar6 = *plVar2;
      if (lVar6 == 0) {
        *plVar2 = (long)&_hb_NullPool;
      }
      UNLOCK();
    } while (lVar6 != 0);
LAB_001007a2:
    paVar12 = (accelerator_t *)&_hb_NullPool;
LAB_0010027a:
    puVar7 = *(undefined **)paVar12;
    psVar17 = (short *)&_hb_NullPool;
    puVar9 = &_hb_NullPool;
    if (puVar7 != (undefined *)0x0) {
      puVar9 = puVar7;
    }
    puVar16 = &_hb_NullPool;
    if (7 < *(uint *)(puVar9 + 0x18)) {
      puVar16 = *(undefined **)(puVar9 + 0x10);
    }
    uVar19 = *(uint *)(puVar16 + 4);
    uVar22 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
    if (uVar19 != 0) {
      uVar19 = *(uint *)(param_1 + 0x68);
      uVar23 = *(uint *)(param_1 + 0x6c);
      if ((*(uint *)(param_1 + 0x6c) <= uVar19) && (uVar23 = 0x40000000, uVar19 != 0)) {
        uVar23 = uVar19;
      }
      uVar19 = *(uint *)(puVar16 + 8);
      puVar18 = (ushort *)&_hb_NullPool;
      if (uVar19 != 0) {
        puVar18 = (ushort *)
                  (puVar16 +
                  (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                  uVar19 << 0x18));
      }
      puVar7 = *(undefined **)paVar12;
      if (uVar22 < 2) {
        uVar21 = 0;
      }
      else {
        lVar11 = 8;
        uVar21 = 0;
        uVar14 = 1;
        uVar19 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
        do {
          while( true ) {
            puVar9 = &_hb_NullPool;
            if (puVar7 != (undefined *)0x0) {
              puVar9 = puVar7;
            }
            puVar16 = &_hb_NullPool;
            if (7 < *(uint *)(puVar9 + 0x18)) {
              puVar16 = *(undefined **)(puVar9 + 0x10);
            }
            uVar5 = *(uint *)(puVar16 + 4);
            if (uVar14 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18)) {
              puVar7 = *(undefined **)paVar12;
              puVar8 = (uint *)(puVar16 + lVar11 + 4);
            }
            else {
              puVar8 = (uint *)&_hb_NullPool;
            }
            lVar11 = lVar11 + 4;
            uVar5 = *puVar8;
            puVar18 = (ushort *)&_hb_NullPool;
            if (uVar5 != 0) {
              puVar18 = (ushort *)
                        (puVar16 +
                        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18));
            }
            uVar5 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
            if ((uVar5 < uVar23) || (uVar19 <= uVar5)) break;
LAB_00100308:
            uVar21 = (ulong)uVar14;
            uVar14 = uVar14 + 1;
            uVar19 = uVar5;
            if (uVar22 == uVar14) goto LAB_00100385;
          }
          uVar24 = uVar23;
          if (uVar5 <= uVar23) {
            uVar24 = uVar5;
          }
          if (uVar19 < uVar24) goto LAB_00100308;
          uVar14 = uVar14 + 1;
        } while (uVar22 != uVar14);
      }
LAB_00100385:
      puVar8 = (uint *)&_hb_NullPool;
      puVar9 = &_hb_NullPool;
      if (puVar7 != (undefined *)0x0) {
        puVar9 = puVar7;
      }
      puVar16 = &_hb_NullPool;
      if (7 < *(uint *)(puVar9 + 0x18)) {
        puVar16 = *(undefined **)(puVar9 + 0x10);
      }
      uVar19 = *(uint *)(puVar16 + 4);
      if ((uint)uVar21 <
          (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18)) {
        puVar7 = *(undefined **)paVar12;
        puVar8 = (uint *)(puVar16 + uVar21 * 4 + 8);
      }
      uVar19 = *puVar8;
      psVar17 = (short *)&_hb_NullPool;
      if (uVar19 != 0) {
        psVar17 = (short *)(puVar16 +
                           (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                           uVar19 << 0x18));
      }
    }
    if (*psVar17 != 0) {
      iVar20 = (int)psVar17 - (int)*(undefined8 *)(puVar7 + 0x10);
      iVar15 = 9;
      do {
        if (*(uint *)(paVar12 + 8) <= (uint)uVar10) break;
        uVar19 = *(uint *)(psVar17 + uVar10 * 2 + 2);
        uVar22 = *(uint *)(psVar17 + (ulong)((uint)uVar10 + 1) * 2 + 2);
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
        ;
        uVar23 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
        if (((uVar22 <= uVar23) || (uVar22 - uVar23 < 9)) ||
           ((uint)(*(int *)(puVar7 + 0x18) - iVar20) < uVar22)) break;
        iVar1 = (uVar22 - uVar23) - 8;
        puVar9 = (undefined *)((ulong)uVar23 + (long)psVar17);
        if (uVar19 == 0) {
          puVar9 = &_hb_NullPool;
        }
        if (*(int *)(puVar9 + 4) != 0x65707564) {
          if (*(int *)(puVar9 + 4) == 0x20676e70) {
            lVar6 = hb_blob_create_sub_blob(puVar7,uVar23 + 8 + iVar20,iVar1);
            goto LAB_00100239;
          }
          break;
        }
        if (iVar1 == 1) break;
        uVar10 = (ulong)(ushort)(*(ushort *)(puVar9 + 8) << 8 | *(ushort *)(puVar9 + 8) >> 8);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    lVar6 = hb_blob_get_empty();
    iVar15 = *(int *)(lVar6 + 0x18);
  }
  if (iVar15 == 0) {
    lVar11 = *(long *)(param_1 + 0x20);
    plVar2 = (long *)(lVar11 + 0x198);
    do {
      while( true ) {
        paVar13 = (accelerator_t *)*plVar2;
        if (paVar13 != (accelerator_t *)0x0) goto LAB_0010048f;
        phVar4 = *(hb_face_t **)(lVar11 + 0x70);
        if (phVar4 == (hb_face_t *)0x0) goto LAB_001007c0;
        paVar13 = (accelerator_t *)calloc(1,0x18);
        if (paVar13 == (accelerator_t *)0x0) break;
        OT::CBDT::accelerator_t::accelerator_t(paVar13,phVar4);
        LOCK();
        lVar3 = *plVar2;
        if (lVar3 == 0) {
          *plVar2 = (long)paVar13;
        }
        UNLOCK();
        if (lVar3 == 0) goto LAB_0010048f;
        if (paVar13 != (accelerator_t *)&_hb_NullPool) {
          hb_blob_destroy(*(undefined8 *)paVar13);
          *(undefined8 *)paVar13 = 0;
          hb_blob_destroy(*(undefined8 *)(paVar13 + 8));
          free(paVar13);
        }
      }
      LOCK();
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        *plVar2 = (long)&_hb_NullPool;
      }
      UNLOCK();
    } while (lVar3 != 0);
LAB_001007c0:
    paVar13 = (accelerator_t *)&_hb_NullPool;
LAB_0010048f:
    puVar7 = *(undefined **)(paVar13 + 8);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = &_hb_NullPool;
    }
    if (*(int *)(puVar7 + 0x18) != 0) {
      lVar11 = *(long *)(param_1 + 0x20);
      plVar2 = (long *)(lVar11 + 0x198);
      do {
        while( true ) {
          paVar13 = (accelerator_t *)*plVar2;
          if (paVar13 != (accelerator_t *)0x0) goto LAB_001004c7;
          phVar4 = *(hb_face_t **)(lVar11 + 0x70);
          if (phVar4 == (hb_face_t *)0x0) goto LAB_001007df;
          paVar13 = (accelerator_t *)calloc(1,0x18);
          if (paVar13 == (accelerator_t *)0x0) break;
          OT::CBDT::accelerator_t::accelerator_t(paVar13,phVar4);
          LOCK();
          lVar6 = *plVar2;
          if (lVar6 == 0) {
            *plVar2 = (long)paVar13;
          }
          UNLOCK();
          if (lVar6 == 0) goto LAB_001004c7;
          if (paVar13 != (accelerator_t *)&_hb_NullPool) {
            hb_blob_destroy(*(undefined8 *)paVar13);
            *(undefined8 *)paVar13 = 0;
            hb_blob_destroy(*(undefined8 *)(paVar13 + 8));
            free(paVar13);
          }
        }
        LOCK();
        lVar6 = *plVar2;
        if (lVar6 == 0) {
          *plVar2 = (long)&_hb_NullPool;
        }
        UNLOCK();
      } while (lVar6 != 0);
LAB_001007df:
      paVar13 = (accelerator_t *)&_hb_NullPool;
LAB_001004c7:
      lVar11 = OT::CBDT::accelerator_t::reference_png(paVar13,param_1,param_2);
      return lVar11;
    }
  }
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort hb_ot_color_palette_get_colors
                 (long param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ushort uVar10;
  undefined *puVar11;
  ushort uVar12;
  ushort uVar13;
  
  plVar1 = (long *)(param_1 + 400);
LAB_00100817:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x001009b0;
      }
      else {
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_0010092c;
      }
    }
  }
  puVar11 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar7 + 0x18)) {
    puVar11 = *(undefined **)(lVar7 + 0x10);
  }
  if (param_2 < (ushort)(*(ushort *)(puVar11 + 4) << 8 | *(ushort *)(puVar11 + 4) >> 8)) {
    uVar10 = *(ushort *)(puVar11 + 6) << 8 | *(ushort *)(puVar11 + 6) >> 8;
    uVar13 = *(ushort *)(puVar11 + (ulong)param_2 * 2 + 0xc) << 8 |
             *(ushort *)(puVar11 + (ulong)param_2 * 2 + 0xc) >> 8;
    uVar12 = *(ushort *)(puVar11 + 2) << 8 | *(ushort *)(puVar11 + 2) >> 8;
    uVar5 = (uint)uVar10 - (uint)uVar13;
    if (uVar12 < uVar5) {
      uVar5 = (uint)uVar12;
    }
    if ((uint)uVar10 < (uint)uVar13) {
      uVar5 = 0;
    }
    if (param_4 != (uint *)0x0) {
      uVar3 = *(uint *)(puVar11 + 8);
      uVar9 = *param_4;
      if (uVar5 < param_3) {
        *param_4 = 0;
      }
      else {
        uVar4 = uVar5 - param_3;
        if (uVar9 < uVar5 - param_3) {
          uVar4 = uVar9;
        }
        *param_4 = uVar4;
        puVar6 = (uint *)(puVar11 +
                         ((ulong)uVar13 + (ulong)param_3) * 4 +
                         (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18));
        puVar2 = puVar6 + uVar4;
        if (uVar4 != 0) {
          do {
            uVar5 = *puVar6;
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (uVar9 != 0) {
              *param_5 = uVar5;
              uVar9 = uVar9 - 1;
              param_5 = param_5 + 1;
              uVar5 = __hb_CrapPool;
            }
            __hb_CrapPool = uVar5;
            puVar6 = puVar6 + 1;
          } while (puVar6 != puVar2);
        }
      }
    }
  }
  else {
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
    }
    uVar12 = 0;
  }
  return uVar12;
code_r0x001009b0:
  if (lVar7 != 0) {
LAB_0010092c:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy();
    }
  }
  goto LAB_00100817;
}



ushort hb_ot_color_palette_get_count(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 400);
LAB_001009d8:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x00100a76;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100a41;
      }
    }
  }
  puVar2 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    puVar2 = *(undefined **)(lVar3 + 0x10);
  }
  return *(ushort *)(puVar2 + 4) << 8 | *(ushort *)(puVar2 + 4) >> 8;
code_r0x00100a76:
  if (lVar3 != 0) {
LAB_00100a41:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_001009d8;
}



bool hb_ot_color_has_palettes(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 400);
LAB_00100aa8:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x00100b46;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100b11;
      }
    }
  }
  puVar2 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    puVar2 = *(undefined **)(lVar3 + 0x10);
  }
  return *(short *)(puVar2 + 4) != 0;
code_r0x00100b46:
  if (lVar3 != 0) {
LAB_00100b11:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_00100aa8;
}



ushort hb_ot_color_palette_color_get_name_id(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  ushort uVar7;
  ushort *puVar8;
  
  plVar1 = (long *)(param_1 + 400);
LAB_00100b78:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100c6a;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100c2c;
      }
    }
  }
  psVar3 = (short *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar4 + 0x18)) {
    psVar3 = *(short **)(lVar4 + 0x10);
  }
  psVar6 = (short *)&_hb_NullPool;
  if (*psVar3 != 0) {
    psVar6 = psVar3 + (ulong)(ushort)(psVar3[2] << 8 | (ushort)psVar3[2] >> 8) + 6;
  }
  uVar2 = *(uint *)(psVar6 + 4);
  uVar7 = 0xffff;
  if (uVar2 != 0) {
    puVar8 = (ushort *)&_hb_Null_OT_Index;
    if (param_2 < (ushort)(psVar3[1] << 8 | (ushort)psVar3[1] >> 8)) {
      puVar8 = (ushort *)
               ((long)psVar3 +
               (ulong)param_2 * 2 +
               (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18));
    }
    uVar7 = *puVar8 << 8 | *puVar8 >> 8;
  }
  return uVar7;
code_r0x00100c6a:
  if (lVar4 != 0) {
LAB_00100c2c:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_00100b78;
}



uint hb_ot_color_palette_get_flags(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  uint *puVar6;
  short *psVar7;
  
  plVar1 = (long *)(param_1 + 400);
LAB_00100c98:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x00100d72;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100d34;
      }
    }
  }
  puVar6 = (uint *)&_hb_NullPool;
  psVar7 = (short *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    psVar7 = *(short **)(lVar3 + 0x10);
  }
  if (*psVar7 == 0) {
    uVar5 = psVar7[2] << 8 | (ushort)psVar7[2] >> 8;
  }
  else {
    uVar5 = psVar7[2] << 8 | (ushort)psVar7[2] >> 8;
    puVar6 = (uint *)((ulong)(uVar5 + 0xc + (uint)uVar5) + (long)psVar7);
  }
  uVar2 = *puVar6;
  if (uVar2 != 0) {
    puVar6 = (uint *)&_hb_NullPool;
    if (param_2 < uVar5) {
      puVar6 = (uint *)((long)psVar7 +
                       (ulong)param_2 * 4 +
                       (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18));
    }
    uVar2 = *puVar6;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return uVar2;
code_r0x00100d72:
  if (lVar3 != 0) {
LAB_00100d34:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_00100c98;
}



ushort hb_ot_color_palette_get_name_id(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  undefined *puVar7;
  ushort *puVar8;
  short *psVar9;
  
  plVar1 = (long *)(param_1 + 400);
LAB_00100d98:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100e82;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100e44;
      }
    }
  }
  puVar7 = &_hb_NullPool;
  psVar9 = (short *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar4 + 0x18)) {
    psVar9 = *(short **)(lVar4 + 0x10);
  }
  if (*psVar9 == 0) {
    uVar3 = psVar9[2] << 8 | (ushort)psVar9[2] >> 8;
  }
  else {
    uVar3 = psVar9[2] << 8 | (ushort)psVar9[2] >> 8;
    puVar7 = (undefined *)((ulong)(uVar3 + 0xc + (uint)uVar3) + (long)psVar9);
  }
  uVar2 = *(uint *)(puVar7 + 4);
  uVar6 = 0xffff;
  if (uVar2 != 0) {
    puVar8 = (ushort *)&_hb_Null_OT_Index;
    if (param_2 < uVar3) {
      puVar8 = (ushort *)
               ((long)psVar9 +
               (ulong)param_2 * 2 +
               (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18));
    }
    uVar6 = *puVar8 << 8 | *puVar8 >> 8;
  }
  return uVar6;
code_r0x00100e82:
  if (lVar4 != 0) {
LAB_00100e44:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_00100d98;
}



void hb_ot_color_glyph_reference_svg(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined8 *__ptr;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ushort *puVar13;
  
  plVar1 = (long *)(param_1 + 0x1a8);
  do {
    while( true ) {
      __ptr = (undefined8 *)*plVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_00100eb7;
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) goto LAB_00100fd5;
      __ptr = (undefined8 *)
              hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
              ::create(*(hb_face_t **)(param_1 + 0x70));
      if (__ptr == (undefined8 *)0x0) break;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)__ptr;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_00100eb7;
      if (__ptr != (undefined8 *)&_hb_NullPool) {
        hb_blob_destroy(*__ptr);
        free(__ptr);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_00100fd5:
  __ptr = (undefined8 *)&_hb_NullPool;
LAB_00100eb7:
  puVar4 = (undefined *)*__ptr;
  puVar7 = (ushort *)&_hb_NullPool;
  puVar6 = &_hb_NullPool;
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
  }
  puVar12 = &_hb_NullPool;
  if (9 < *(uint *)(puVar6 + 0x18)) {
    puVar12 = *(undefined **)(puVar6 + 0x10);
  }
  uVar8 = *(uint *)(puVar12 + 2);
  uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  puVar13 = (ushort *)(puVar12 + uVar9);
  if (uVar8 == 0) {
    puVar13 = (ushort *)&_hb_NullPool;
  }
  uVar5 = *puVar13 << 8 | *puVar13 >> 8;
  iVar11 = uVar5 - 1;
  if (uVar5 != 0) {
    iVar10 = 0;
    do {
      while( true ) {
        uVar8 = (uint)(iVar10 + iVar11) >> 1;
        puVar7 = puVar13 + (ulong)uVar8 * 6 + 1;
        if (param_2 < (ushort)(*puVar7 << 8 | *puVar7 >> 8)) break;
        if (param_2 <= (ushort)(puVar7[1] << 8 | puVar7[1] >> 8)) goto LAB_00100f46;
        iVar10 = uVar8 + 1;
        if (iVar11 < iVar10) goto LAB_00100f70;
      }
      iVar11 = uVar8 - 1;
    } while (iVar10 <= iVar11);
LAB_00100f70:
    puVar7 = (ushort *)&_hb_NullPool;
  }
LAB_00100f46:
  uVar8 = *(uint *)(puVar7 + 2);
  uVar3 = *(uint *)(puVar7 + 4);
  hb_blob_create_sub_blob
            (puVar4,uVar9 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18),
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  return;
}



bool hb_ot_color_has_svg(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *__ptr;
  undefined *puVar4;
  
  plVar1 = (long *)(param_1 + 0x1a8);
  do {
    while( true ) {
      __ptr = (undefined8 *)*plVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_00101014;
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) goto LAB_001010a6;
      __ptr = (undefined8 *)
              hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
              ::create(*(hb_face_t **)(param_1 + 0x70));
      if (__ptr == (undefined8 *)0x0) break;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)__ptr;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_00101014;
      if (__ptr != (undefined8 *)&_hb_NullPool) {
        hb_blob_destroy(*__ptr);
        free(__ptr);
      }
    }
    LOCK();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar2 != 0);
LAB_001010a6:
  __ptr = (undefined8 *)&_hb_NullPool;
LAB_00101014:
  puVar4 = (undefined *)*__ptr;
  puVar3 = &_hb_NullPool;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &_hb_NullPool;
  }
  if (9 < *(uint *)(puVar4 + 0x18)) {
    puVar3 = *(undefined **)(puVar4 + 0x10);
  }
  return *(int *)(puVar3 + 2) != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint hb_ot_color_glyph_get_layers
               (long param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  long *plVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  
  plVar1 = (long *)(param_1 + 0x188);
LAB_001010e6:
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x001012e2;
      }
      else {
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_0010127c;
      }
    }
  }
  puVar11 = (ushort *)&_hb_NullPool;
  puVar15 = &_hb_NullPool;
  if (0xd < *(uint *)(lVar6 + 0x18)) {
    puVar15 = *(undefined **)(lVar6 + 0x10);
  }
  uVar14 = *(uint *)(puVar15 + 4);
  uVar4 = *(ushort *)(puVar15 + 2) << 8 | *(ushort *)(puVar15 + 2) >> 8;
  iVar13 = uVar4 - 1;
  if (uVar4 != 0) {
    iVar8 = 0;
    do {
      while( true ) {
        uVar10 = (uint)(iVar8 + iVar13) >> 1;
        puVar11 = (ushort *)
                  (puVar15 +
                  (ulong)uVar10 * 6 +
                  (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                         uVar14 << 0x18));
        uVar5 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8);
        if (param_2 < uVar5) break;
        if (param_2 <= uVar5) goto LAB_00101160;
        iVar8 = uVar10 + 1;
        if (iVar13 < iVar8) goto LAB_00101223;
      }
      iVar13 = uVar10 - 1;
    } while (iVar8 <= iVar13);
LAB_00101223:
    puVar11 = (ushort *)&_hb_NullPool;
  }
LAB_00101160:
  uVar12 = *(ushort *)(puVar15 + 0xc) << 8 | *(ushort *)(puVar15 + 0xc) >> 8;
  uVar4 = puVar11[1] << 8 | puVar11[1] >> 8;
  if ((uint)uVar12 < (uint)uVar4) {
    uVar14 = 0;
  }
  else {
    uVar9 = puVar11[2] << 8 | puVar11[2] >> 8;
    uVar14 = (uint)uVar12 - (uint)uVar4;
    if (uVar9 < uVar14) {
      uVar14 = (uint)uVar9;
    }
  }
  if (param_4 != (uint *)0x0) {
    uVar5 = *(uint *)(puVar15 + 8);
    uVar10 = *param_4;
    if (uVar14 < param_3) {
      *param_4 = 0;
    }
    else {
      uVar3 = uVar14 - param_3;
      if (uVar10 < uVar14 - param_3) {
        uVar3 = uVar10;
      }
      puVar11 = (ushort *)
                (puVar15 +
                ((ulong)uVar4 + (ulong)param_3) * 4 +
                (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18));
      *param_4 = uVar3;
      puVar2 = puVar11 + (ulong)uVar3 * 2;
      if (uVar3 != 0) {
        do {
          uVar4 = puVar11[1] << 8 | puVar11[1] >> 8;
          uVar5 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8);
          if (uVar10 == 0) {
            __hb_CrapPool = (ulong)CONCAT24(uVar4,uVar5);
          }
          else {
            *param_5 = uVar5;
            uVar10 = uVar10 - 1;
            param_5[1] = (uint)uVar4;
            param_5 = param_5 + 2;
          }
          puVar11 = puVar11 + 2;
        } while (puVar11 != puVar2);
      }
    }
  }
  return uVar14;
code_r0x001012e2:
  if (lVar6 != 0) {
LAB_0010127c:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy();
    }
  }
  goto LAB_001010e6;
}



bool hb_ot_color_has_layers(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x188);
LAB_00101308:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x001013a6;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00101371;
      }
    }
  }
  puVar2 = &_hb_NullPool;
  if (0xd < *(uint *)(lVar3 + 0x18)) {
    puVar2 = *(undefined **)(lVar3 + 0x10);
  }
  return *(short *)(puVar2 + 2) != 0;
code_r0x001013a6:
  if (lVar3 != 0) {
LAB_00101371:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_00101308;
}



bool hb_ot_color_has_paint(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  int *piVar6;
  bool bVar7;
  
  plVar1 = (long *)(param_1 + 0x188);
LAB_001013d8:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x00101484;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00101449;
      }
    }
  }
  piVar6 = (int *)&_hb_NullPool;
  psVar5 = (short *)&_hb_NullPool;
  if (0xd < *(uint *)(lVar3 + 0x18)) {
    psVar5 = *(short **)(lVar3 + 0x10);
  }
  bVar7 = false;
  if (*psVar5 != 0) {
    uVar2 = *(uint *)(psVar5 + 7);
    if (uVar2 != 0) {
      piVar6 = (int *)((long)psVar5 +
                      (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                             uVar2 << 0x18));
    }
    bVar7 = *piVar6 != 0;
  }
  return bVar7;
code_r0x00101484:
  if (lVar3 != 0) {
LAB_00101449:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_001013d8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_ot_color_glyph_has_paint(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  
  plVar1 = (long *)(param_1 + 0x188);
LAB_001014a8:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::COLR,35u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x001015ba;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_0010157c;
      }
    }
  }
  puVar10 = (uint *)&_hb_NullPool;
  psVar8 = (short *)&_hb_NullPool;
  if (0xd < *(uint *)(lVar4 + 0x18)) {
    psVar8 = *(short **)(lVar4 + 0x10);
  }
  bVar11 = false;
  if (*psVar8 != 0) {
    uVar3 = *(uint *)(psVar8 + 7);
    if (uVar3 != 0) {
      puVar10 = (uint *)((long)psVar8 +
                        (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                               uVar3 << 0x18));
    }
    uVar3 = *puVar10;
    iVar6 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) - 1;
    if (-1 < iVar6) {
      iVar9 = 0;
      do {
        uVar7 = (uint)(iVar9 + iVar6) >> 1;
        uVar2 = *(ushort *)((long)puVar10 + (ulong)uVar7 * 6 + 4);
        uVar3 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
        if (param_2 < uVar3) {
          iVar6 = uVar7 - 1;
        }
        else {
          if (param_2 <= uVar3) {
            return true;
          }
          iVar9 = uVar7 + 1;
        }
      } while (iVar9 <= iVar6);
    }
    bVar11 = param_2 == (ushort)(__hb_NullPool << 8 | __hb_NullPool >> 8);
  }
  return bVar11;
code_r0x001015ba:
  if (lVar4 != 0) {
LAB_0010157c:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_001014a8;
}



/* OT::CBLC::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::CBLC::sanitize(CBLC *this,hb_sanitize_context_t *param_1)

{
  CBLC *pCVar1;
  short sVar2;
  uint uVar3;
  CBLC *pCVar4;
  uint uVar5;
  CBLC *pCVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CBLC *pCVar11;
  CBLC *pCVar12;
  CBLC *pCVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  bool bVar17;
  
  pCVar6 = this + 8;
  if ((((ulong)((long)pCVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) - 2 < 2)) &&
     ((ulong)((long)pCVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar5 = *(uint *)(this + 4);
    lVar16 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                    ) * 0x30;
    bVar17 = (int)((ulong)lVar16 >> 0x20) != 0;
    uVar5 = (uint)lVar16;
    uVar15 = (uint)bVar17;
    if (((!bVar17) &&
        ((ulong)((long)pCVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       ((uVar5 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar6) &&
        (iVar7 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7)))) {
      uVar5 = *(uint *)(this + 4);
      if (uVar5 == 0) {
        return 1;
      }
      pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
      pCVar6 = this + 0x38;
      lVar16 = *(long *)(param_1 + 8);
      do {
        if ((pCVar12 < pCVar6 + -lVar16) ||
           ((CBLC *)(ulong)*(uint *)(param_1 + 0x18) < pCVar6 + (-0x2c - *(long *)(param_1 + 8)))) {
          return 0;
        }
        uVar8 = *(uint *)(pCVar6 + -0x28);
        uVar9 = *(uint *)(pCVar6 + -0x30);
        uVar14 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        bVar17 = (uVar8 << 0x18) >> 0x1d != 0;
        uVar10 = (uint)bVar17;
        if (bVar17) {
          return 0;
        }
        pCVar11 = this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 << 0x18);
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar11 - *(long *)(param_1 + 8))) {
          return 0;
        }
        if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar11) < uVar14 * 8) {
          return 0;
        }
        iVar7 = *(int *)(param_1 + 0x1c) + uVar14 * -8;
        *(int *)(param_1 + 0x1c) = iVar7;
        if (iVar7 < 1) {
          return 0;
        }
        lVar16 = *(long *)(param_1 + 8);
        if (uVar8 == 0) {
          pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
        }
        else {
          pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
          pCVar4 = pCVar11;
          do {
            pCVar13 = pCVar4 + 8;
            if (pCVar12 < pCVar13 + -lVar16) {
              return 0;
            }
            uVar8 = (uint)(ushort)(*(ushort *)(pCVar4 + 2) << 8 | *(ushort *)(pCVar4 + 2) >> 8);
            uVar9 = (uint)(ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8);
            if (uVar8 < uVar9) {
              return 0;
            }
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar13 - *(long *)(param_1 + 8)))
            {
              return 0;
            }
            uVar3 = *(uint *)(pCVar4 + 4);
            if (uVar3 == 0) {
LAB_0010173d:
              lVar16 = *(long *)(param_1 + 8);
              pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
            }
            else {
              pCVar1 = pCVar11 + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                 uVar3 << 0x18) + 8;
              if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar1 - *(long *)(param_1 + 8)))
              {
LAB_0010183f:
                if (0x1f < *(uint *)(param_1 + 0x2c)) {
                  return 0;
                }
                *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
                if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                  return 0;
                }
                *(undefined4 *)(pCVar4 + 4) = 0;
                goto LAB_0010173d;
              }
              iVar7 = uVar8 - uVar9;
              sVar2 = *(short *)(pCVar11 +
                                (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18));
              lVar16 = *(long *)(param_1 + 8);
              if (sVar2 == 0x100) {
                pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
                if ((pCVar1 + -lVar16 <= pCVar12) &&
                   (uVar9 = iVar7 + 2, uVar8 = uVar9 * 4, uVar9 >> 0x1e == 0)) {
LAB_00101822:
                  if ((uVar8 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar1)) &&
                     (iVar7 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar7 - uVar8,
                     0 < (int)(iVar7 - uVar8))) goto LAB_00101744;
                }
                goto LAB_0010183f;
              }
              pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
              if (sVar2 == 0x300) {
                if ((pCVar1 + -lVar16 <= pCVar12) &&
                   (iVar7 = iVar7 + 2, uVar8 = iVar7 * 2, -1 < iVar7)) goto LAB_00101822;
                goto LAB_0010183f;
              }
            }
LAB_00101744:
            uVar10 = uVar10 + 1;
            pCVar4 = pCVar13;
          } while (uVar10 < uVar14);
        }
        if (pCVar12 < pCVar6 + (-0x14 - lVar16)) {
          return 0;
        }
        if (pCVar12 < pCVar6 + (-8 - lVar16)) {
          return 0;
        }
        uVar15 = uVar15 + 1;
        pCVar6 = pCVar6 + 0x30;
        if ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <=
            uVar15) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}



/* OT::CBDT::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::CBDT::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  ushort uVar1;
  CBLC *this_00;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar4 = hb_face_reference_table(param_1,0x43424c43);
  lVar5 = hb_blob_reference(lVar4);
  local_58 = lVar5;
  while( true ) {
    local_70 = *(uint *)(lVar5 + 0x18);
    this_00 = *(CBLC **)(lVar5 + 0x10);
    local_6c = local_70 * 0x40;
    if (local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_6c) {
        local_6c = 0x3fffffff;
      }
      if (local_6c < 0x4000) {
        local_6c = 0x4000;
      }
    }
    else {
      local_6c = 0x3fffffff;
    }
    local_80._8_8_ = this_00 + local_70;
    local_80._0_8_ = this_00;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (this_00 == (CBLC *)0x0) {
      hb_blob_destroy(lVar5);
      goto LAB_001019e5;
    }
    cVar2 = CBLC::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar5 = local_58;
    if (cVar2 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar2 = CBLC::sanitize(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_00101aa8;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar2 == '\0') goto LAB_00101aa8;
      }
      hb_blob_make_immutable(lVar4);
      goto LAB_001019e5;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(lVar4,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar4 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  }
  hb_blob_destroy(lVar5);
LAB_00101aa8:
  hb_blob_destroy(lVar4);
  lVar4 = hb_blob_get_empty();
LAB_001019e5:
  *(long *)this = lVar4;
  hb_face_get_glyph_count(param_1);
  uVar6 = hb_face_reference_table(param_1,0x43424454);
  lVar5 = hb_blob_reference(uVar6);
  if (*(ushort **)(lVar5 + 0x10) == (ushort *)0x0) {
    hb_blob_destroy();
  }
  else if ((*(uint *)(lVar5 + 0x18) < 4) ||
          (uVar1 = **(ushort **)(lVar5 + 0x10), 1 < (ushort)(uVar1 << 8 | uVar1 >> 8) - 2)) {
    hb_blob_destroy();
    hb_blob_destroy(uVar6);
    uVar6 = hb_blob_get_empty();
  }
  else {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar6);
  }
  *(undefined8 *)(this + 8) = uVar6;
  uVar3 = hb_face_get_upem(param_1);
  *(undefined4 *)(this + 0x10) = uVar3;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OT::CBDT::accelerator_t::reference_png(hb_font_t*, unsigned int) const */

void __thiscall
OT::CBDT::accelerator_t::reference_png(accelerator_t *this,hb_font_t *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  int iVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  byte *pbVar23;
  
  puVar21 = (uint *)&_hb_NullPool;
  puVar18 = *(undefined **)this;
  puVar11 = &_hb_NullPool;
  if (puVar18 != (undefined *)0x0) {
    puVar11 = puVar18;
  }
  puVar19 = &_hb_NullPool;
  if (7 < *(uint *)(puVar11 + 0x18)) {
    puVar19 = *(undefined **)(puVar11 + 0x10);
  }
  uVar20 = *(uint *)(puVar19 + 4);
  if (uVar20 != 0) {
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar22 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = *(uint *)(param_1 + 0x6c);
    if ((*(uint *)(param_1 + 0x6c) <= uVar5) && (uVar20 = 0x40000000, uVar5 != 0)) {
      uVar20 = uVar5;
    }
    puVar18 = puVar19 + 8;
    if (*(int *)(puVar19 + 4) == 0) {
      puVar18 = &_hb_NullPool;
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(puVar19 + 4);
    }
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    bVar1 = puVar18[0x2c];
    if ((byte)puVar18[0x2c] < (byte)puVar19[0x35]) {
      bVar1 = puVar19[0x35];
    }
    if (uVar22 < 2) {
      uVar15 = 0;
    }
    else {
      puVar18 = puVar19 + 0x38;
      uVar3 = 1;
      uVar14 = 0;
      uVar10 = (uint)bVar1;
      do {
        while( true ) {
          uVar15 = uVar3;
          uVar6 = (uint)uVar15;
          if (uVar6 < uVar5) {
            uVar5 = *(uint *)(puVar19 + 4);
            pbVar23 = puVar18 + 0x2d;
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            puVar13 = puVar18;
            if (uVar6 < uVar5) {
              uVar5 = *(uint *)(puVar19 + 4);
              uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18;
              puVar11 = puVar18;
            }
            else {
              puVar11 = &_hb_NullPool;
            }
          }
          else {
            pbVar23 = &DAT_00105075;
            puVar11 = &_hb_NullPool;
            puVar13 = &_hb_NullPool;
          }
          bVar1 = puVar11[0x2c];
          if (bVar1 < (byte)puVar13[0x2d]) {
            bVar1 = *pbVar23;
          }
          uVar9 = (uint)bVar1;
          if ((uVar9 < uVar20) || (uVar10 <= uVar9)) break;
LAB_00101be0:
          puVar18 = puVar18 + 0x30;
          uVar3 = (ulong)(uVar6 + 1);
          uVar14 = uVar15;
          uVar10 = uVar9;
          if (uVar22 == uVar6 + 1) goto LAB_00101c49;
        }
        uVar12 = uVar20;
        if (uVar9 <= uVar20) {
          uVar12 = uVar9;
        }
        if (uVar10 < uVar12) goto LAB_00101be0;
        puVar18 = puVar18 + 0x30;
        uVar3 = (ulong)(uVar6 + 1);
        uVar15 = uVar14;
      } while (uVar22 != uVar6 + 1);
    }
LAB_00101c49:
    if ((uint)uVar15 < uVar5) {
      puVar21 = (uint *)(puVar19 + uVar15 * 0x30 + 8);
      puVar18 = *(undefined **)this;
    }
    else {
      puVar18 = *(undefined **)this;
      puVar21 = (uint *)&_hb_NullPool;
    }
  }
  if (puVar18 == (undefined *)0x0) {
    puVar18 = &_hb_NullPool;
  }
  puVar11 = &_hb_NullPool;
  if (7 < *(uint *)(puVar18 + 0x18)) {
    puVar11 = *(undefined **)(puVar18 + 0x10);
  }
  uVar20 = *puVar21;
  uVar5 = puVar21[2];
  if (uVar5 != 0) {
    uVar22 = 0;
    puVar7 = (ushort *)
             (puVar11 +
             (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18));
    do {
      uVar4 = *puVar7 << 8 | *puVar7 >> 8;
      if ((uVar4 <= param_2) &&
         (uVar10 = (uint)(ushort)(puVar7[1] << 8 | puVar7[1] >> 8), param_2 <= uVar10)) {
        if (((char)puVar21[0xb] == '\0') ||
           (((*(char *)((long)puVar21 + 0x2d) == '\0' || (param_2 < uVar4)) || (uVar10 < param_2))))
        break;
        uVar5 = *(uint *)(puVar7 + 2);
        psVar8 = (short *)&_hb_NullPool;
        if (uVar5 != 0) {
          psVar8 = (short *)((long)(puVar11 +
                                   (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                    (uVar20 & 0xff00) << 8 | uVar20 << 0x18)) +
                            (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                   | uVar5 << 0x18));
        }
        uVar20 = param_2 - uVar4;
        sVar2 = psVar8[1];
        if (*psVar8 == 0x100) {
          uVar5 = *(uint *)(psVar8 + (ulong)(uVar20 + 1) * 2 + 4);
          uVar20 = *(uint *)(psVar8 + (ulong)uVar20 * 2 + 4);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
          if (uVar5 <= uVar20) break;
        }
        else {
          if (*psVar8 != 0x300) break;
          uVar16 = psVar8[(ulong)uVar20 + 4] << 8 | (ushort)psVar8[(ulong)uVar20 + 4] >> 8;
          uVar4 = psVar8[(ulong)(uVar20 + 1) + 4] << 8 |
                  (ushort)psVar8[(ulong)(uVar20 + 1) + 4] >> 8;
          uVar20 = (uint)uVar16;
          uVar5 = (uint)uVar4;
          if (uVar4 <= uVar16) break;
        }
        uVar22 = *(uint *)(psVar8 + 2);
        puVar18 = *(undefined **)(this + 8);
        uVar5 = uVar5 - uVar20;
        uVar20 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                 uVar22 << 0x18) + uVar20;
        puVar11 = &_hb_NullPool;
        if (puVar18 != (undefined *)0x0) {
          puVar11 = puVar18;
        }
        uVar22 = *(uint *)(puVar11 + 0x18);
        if ((uVar22 < uVar20) || (uVar22 - uVar20 < uVar5)) break;
        if (sVar2 == 0x1200) {
          if (uVar5 < 0xc) break;
          puVar19 = &_hb_NullPool;
          if (3 < uVar22) {
            puVar19 = *(undefined **)(puVar11 + 0x10);
          }
          uVar5 = *(uint *)(puVar19 + (ulong)uVar20 + 8);
          iVar17 = uVar20 + 0xc;
          uVar20 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        }
        else if (sVar2 == 0x1300) {
          if (uVar5 < 4) break;
          puVar19 = &_hb_NullPool;
          if (3 < uVar22) {
            puVar19 = *(undefined **)(puVar11 + 0x10);
          }
          uVar5 = *(uint *)(puVar19 + uVar20);
          iVar17 = uVar20 + 4;
          uVar20 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        }
        else {
          if ((sVar2 != 0x1100) || (uVar5 < 9)) break;
          puVar19 = &_hb_NullPool;
          if (3 < uVar22) {
            puVar19 = *(undefined **)(puVar11 + 0x10);
          }
          uVar5 = *(uint *)(puVar19 + (ulong)uVar20 + 5);
          iVar17 = uVar20 + 9;
          uVar20 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        }
        hb_blob_create_sub_blob(puVar18,iVar17,uVar20);
        return;
      }
      uVar22 = uVar22 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar22 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                      uVar5 << 0x18));
  }
  hb_blob_get_empty();
  return;
}



/* OT::ItemVariationStore::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::ItemVariationStore::sanitize(ItemVariationStore *this,hb_sanitize_context_t *param_1)

{
  ItemVariationStore *pIVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ItemVariationStore *pIVar7;
  long lVar8;
  ItemVariationStore *pIVar9;
  ushort uVar10;
  
  pIVar7 = this + 8;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this != 0x100) {
    return 0;
  }
  if ((ItemVariationStore *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8)))
  {
    return 0;
  }
  uVar3 = *(uint *)(this + 2);
  if (uVar3 != 0) {
    pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
    pIVar1 = pIVar9 + 4;
    if (((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
       (lVar8 = (ulong)((uint)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8) *
                       (uint)(ushort)(*(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8))
                * 6, uVar3 = (uint)lVar8, (int)((ulong)lVar8 >> 0x20) == 0)) {
      lVar8 = *(long *)(param_1 + 8);
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      if (((ulong)((long)pIVar1 - lVar8) <= uVar6) &&
         ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
          (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5))))
      goto LAB_00101eda;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 2) = 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
LAB_00101eda:
  if ((((uVar6 < (ulong)((long)pIVar7 - lVar8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8)))) ||
      (uVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar7) < uVar3 * 4)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -4, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  if (uVar2 != 0) {
    pIVar7 = this + 0xc;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pIVar7 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar3 = *(uint *)(pIVar7 + -4);
      if (uVar3 != 0) {
        pIVar9 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18);
        pIVar1 = pIVar9 + 6;
        if ((((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
            ((ulong)((long)pIVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
           ((uVar3 = (uint)(ushort)(*(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8),
            uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pIVar1) &&
            (iVar5 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar5,
            0 < iVar5)))) {
          uVar4 = *(ushort *)(pIVar9 + 2) << 8 | *(ushort *)(pIVar9 + 2) >> 8;
          uVar10 = *(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8;
          uVar3 = uVar4 & 0x7fff;
          if (uVar3 <= uVar10) {
            uVar3 = uVar3 + uVar10;
            if ((short)uVar4 < 0) {
              uVar3 = uVar3 * 2;
            }
            lVar8 = (ulong)uVar3 * (ulong)(ushort)(*(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8);
            uVar3 = (uint)lVar8;
            if ((((int)((ulong)lVar8 >> 0x20) == 0) &&
                ((ulong)((long)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4) -
                        *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
               ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                (int)(pIVar9 + (ulong)(uVar10 + 2 + (uint)uVar10) + 4)) &&
                (iVar5 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar5,
                0 < iVar5)))) goto LAB_00101f40;
          }
        }
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pIVar7 + -4) = 0;
      }
LAB_00101f40:
      pIVar7 = pIVar7 + 4;
    } while (pIVar7 != this + (ulong)(uVar2 - 1) * 4 + 0x10);
  }
  return 1;
}



/* OT::DeltaSetIndexMap::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
OT::DeltaSetIndexMap::sanitize(DeltaSetIndexMap *this,hb_sanitize_context_t *param_1)

{
  DeltaSetIndexMap *pDVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  if (this + (1 - *(long *)(param_1 + 8)) <= (DeltaSetIndexMap *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*this == (DeltaSetIndexMap)0x0) {
      pDVar1 = this + 4;
      if ((ulong)((long)pDVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        if (((ulong)((long)pDVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
           (uVar4 = (((byte)this[1] >> 4 & 3) + 1) *
                    (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
           uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pDVar1))) {
          iVar3 = *(int *)(param_1 + 0x1c) - uVar4;
          *(int *)(param_1 + 0x1c) = iVar3;
          return (ulong)CONCAT31((int3)((uint)iVar3 >> 8),0 < iVar3);
        }
      }
    }
    else {
      if (*this != (DeltaSetIndexMap)0x1) {
        return 1;
      }
      pDVar1 = this + 6;
      if ((ulong)((long)pDVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        uVar4 = *(uint *)(this + 2);
        lVar2 = (ulong)(((byte)this[1] >> 4 & 3) + 1) *
                (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18);
        if ((((int)((ulong)lVar2 >> 0x20) == 0) &&
            ((ulong)((long)pDVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
           ((uint)lVar2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pDVar1))) {
          iVar3 = *(int *)(param_1 + 0x1c) - (uint)lVar2;
          *(int *)(param_1 + 0x1c) = iVar3;
          return CONCAT71((int7)((ulong)lVar2 >> 8),0 < iVar3) & 0xffffffff;
        }
      }
    }
  }
  return 0;
}



/* OT::ClipList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::ClipList::sanitize(ClipList *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  uint uVar2;
  ClipList *pCVar3;
  int iVar4;
  ClipList *pCVar5;
  uint uVar6;
  bool bVar7;
  
  pCVar5 = this + 5;
  if ((ulong)((long)pCVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar2 = *(uint *)(this + 1);
    lVar1 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
            * 7;
    bVar7 = (int)((ulong)lVar1 >> 0x20) != 0;
    uVar2 = (uint)lVar1;
    uVar6 = (uint)bVar7;
    if ((((!bVar7) &&
         ((ulong)((long)pCVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
        (uVar2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar5))) &&
       (iVar4 = *(int *)(param_1 + 0x1c) - uVar2, *(int *)(param_1 + 0x1c) = iVar4, 0 < iVar4)) {
      uVar2 = *(uint *)(this + 1);
      pCVar5 = this + 0xc;
      if (uVar2 != 0) {
        do {
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar5 - *(long *)(param_1 + 8))) {
            return 0;
          }
          iVar4 = (uint)(byte)pCVar5[-3] * 0x10000 + (uint)(byte)pCVar5[-2] * 0x100 +
                  (uint)(byte)pCVar5[-1];
          if (iVar4 != 0) {
            pCVar3 = this + iVar4;
            if ((ClipList *)(ulong)*(uint *)(param_1 + 0x18) < pCVar3 + (1 - *(long *)(param_1 + 8))
               ) {
LAB_00102320:
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
                return 0;
              }
              pCVar5[-1] = (ClipList)0x0;
              *(undefined2 *)(pCVar5 + -3) = 0;
            }
            else if (*pCVar3 == (ClipList)0x1) {
              if ((ClipList *)(ulong)*(uint *)(param_1 + 0x18) <
                  pCVar3 + (9 - *(long *)(param_1 + 8))) goto LAB_00102320;
            }
            else if (*pCVar3 == (ClipList)0x2) {
              if (((ClipList *)(ulong)*(uint *)(param_1 + 0x18) <
                   pCVar3 + (0xd - *(long *)(param_1 + 8))) ||
                 ((ClipList *)(ulong)*(uint *)(param_1 + 0x18) <
                  pCVar3 + (9 - *(long *)(param_1 + 8)))) goto LAB_00102320;
            }
          }
          uVar6 = uVar6 + 1;
          pCVar5 = pCVar5 + 7;
        } while (uVar6 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18));
      }
      return 1;
    }
  }
  return 0;
}



/* OT::CPAL::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall OT::CPAL::sanitize(CPAL *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  CPAL *pCVar5;
  ushort uVar6;
  CPAL *pCVar7;
  int iVar8;
  
  pCVar5 = this + 0xc;
  if ((ulong)((long)pCVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(this + 8);
    if ((ulong)((long)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18)) - *(long *)(param_1 + 8)) <=
        (ulong)*(uint *)(param_1 + 0x18)) {
      uVar4 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
      if (uVar4 * 4 <=
          (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                (int)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18)))) {
        iVar8 = *(int *)(param_1 + 0x1c) + uVar4 * -4;
        *(int *)(param_1 + 0x1c) = iVar8;
        if ((((0 < iVar8) &&
             ((ulong)((long)pCVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
            && (uVar3 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8),
               uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar5))) &&
           (iVar8 = iVar8 + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8)) {
          if (*(short *)this == 0) {
            return 1;
          }
          lVar2 = *(long *)(param_1 + 8);
          pCVar7 = (CPAL *)(ulong)*(uint *)(param_1 + 0x18);
          uVar1 = *(ushort *)(this + 2);
          uVar6 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
          uVar3 = uVar6 + 0xc + (uint)uVar6;
          pCVar5 = this + uVar3;
          if (pCVar5 + (0xc - lVar2) <= pCVar7) {
            uVar4 = *(uint *)pCVar5;
            if (((uVar4 == 0) ||
                (((this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + -lVar2 <= pCVar7 &&
                  ((uint)uVar6 * 4 <=
                   (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                         (int)(this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                       (uVar4 & 0xff00) << 8 | uVar4 << 0x18))))) &&
                 (iVar8 = *(int *)(param_1 + 0x1c) + (uint)uVar6 * -4,
                 *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8)))) &&
               ((uVar4 = *(uint *)(pCVar5 + 4), uVar4 == 0 ||
                (((this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + -lVar2 <= pCVar7 &&
                  (uVar3 = uVar3 - 0xc,
                  uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                 (int)(this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                               (uVar4 & 0xff00) << 8 | uVar4 << 0x18))))) &&
                 (iVar8 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar8,
                 0 < iVar8)))))) {
              uVar3 = *(uint *)(pCVar5 + 8);
              if (uVar3 == 0) {
                return 1;
              }
              if ((this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18) + -lVar2 <= pCVar7) &&
                 (uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8),
                 uVar4 * 2 <=
                 (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                       (int)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                    | uVar3 << 0x18))))) {
                iVar8 = *(int *)(param_1 + 0x1c) + uVar4 * -2;
                *(int *)(param_1 + 0x1c) = iVar8;
                return CONCAT31((int3)((uint)iVar8 >> 8),0 < iVar8);
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



/* OT::sbix::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::sbix::sanitize(sbix *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  sbix *psVar6;
  uint uVar7;
  
  psVar6 = this + 8;
  if ((((ulong)((long)psVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(short *)this != 0)) &&
     ((ulong)((long)psVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar3 = *(uint *)(this + 4);
    uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    bVar2 = (uVar3 << 0x18) >> 0x1e != 0;
    uVar3 = (uint)bVar2;
    if (((!bVar2) &&
        ((ulong)((long)psVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       ((uVar4 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)psVar6) &&
        (iVar5 = *(int *)(param_1 + 0x1c) + uVar4 * -4, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5)
        ))) {
      uVar4 = *(uint *)(this + 4);
      psVar6 = this + 0xc;
      if (uVar4 != 0) {
        do {
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)psVar6 - *(long *)(param_1 + 8))) {
            return 0;
          }
          uVar1 = *(uint *)(psVar6 + -4);
          if (uVar1 != 0) {
            if ((ulong)((long)(this + (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                              (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + 4) -
                       *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
              uVar7 = *(int *)(param_1 + 0x38) + 1;
              if (((uVar7 >> 0x1e == 0) &&
                  (uVar7 * 4 <=
                   (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                         (int)(this + (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                              (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + 4)))) &&
                 (iVar5 = *(int *)(param_1 + 0x1c) + uVar7 * -4, *(int *)(param_1 + 0x1c) = iVar5,
                 0 < iVar5)) goto LAB_001025d8;
            }
            if (0x1f < *(uint *)(param_1 + 0x2c)) {
              return 0;
            }
            *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
            if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
              return 0;
            }
            *(undefined4 *)(psVar6 + -4) = 0;
          }
LAB_001025d8:
          uVar3 = uVar3 + 1;
          psVar6 = psVar6 + 4;
        } while (uVar3 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18));
      }
      return 1;
    }
  }
  return 0;
}



/* OT::sbix::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::sbix::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  sbix *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_5c;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar3 = hb_face_reference_table(param_1,0x73626978);
  lVar4 = hb_blob_reference(lVar3);
  local_58 = lVar4;
  do {
    local_70 = *(uint *)(lVar4 + 0x18);
    this_00 = *(sbix **)(lVar4 + 0x10);
    local_6c = local_70 * 0x40;
    if (local_70 >> 0x1a == 0) {
      if (0x3fffffff < local_6c) {
        local_6c = 0x3fffffff;
      }
      if (local_6c < 0x4000) {
        local_6c = 0x4000;
      }
    }
    else {
      local_6c = 0x3fffffff;
    }
    local_80._8_8_ = this_00 + local_70;
    local_80._0_8_ = this_00;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (this_00 == (sbix *)0x0) {
      hb_blob_destroy(lVar4);
LAB_001027c3:
      *(long *)this = lVar3;
      iVar2 = *(int *)(param_1 + 0x18);
      goto joined_r0x001027cf;
    }
    cVar1 = sbix::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar4 = local_58;
    if (cVar1 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar1 = sbix::sanitize(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_00102808;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_00102808;
      }
      hb_blob_make_immutable(lVar3);
      goto LAB_001027c3;
    }
    if ((local_5c == 0) || (local_60 != '\0')) {
LAB_00102800:
      hb_blob_destroy(lVar4);
LAB_00102808:
      hb_blob_destroy(lVar3);
      uVar5 = hb_blob_get_empty();
      *(undefined8 *)this = uVar5;
      iVar2 = *(int *)(param_1 + 0x18);
joined_r0x001027cf:
      if (iVar2 == -1) {
        iVar2 = hb_face_t::load_num_glyphs();
      }
      *(int *)(this + 8) = iVar2;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_80._0_8_ = hb_blob_get_data_writable(lVar3,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar3 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) goto LAB_00102800;
    local_60 = '\x01';
  } while( true );
}



/* hb_table_lazy_loader_t<OT::CPAL, 36u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::CPAL,36u,true>::create(hb_face_t *param_1)

{
  CPAL *this;
  char cVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  int local_4c;
  long local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 1;
  local_58 = 0;
  local_50 = '\0';
  local_40 = 0;
  lVar2 = hb_face_reference_table(param_1,0x4350414c);
  lVar3 = hb_blob_reference(lVar2);
  local_48 = lVar3;
  do {
    local_60 = *(uint *)(lVar3 + 0x18);
    this = *(CPAL **)(lVar3 + 0x10);
    local_5c = local_60 * 0x40;
    if (local_60 >> 0x1a == 0) {
      if (0x3fffffff < local_5c) {
        local_5c = 0x3fffffff;
      }
      if (local_5c < 0x4000) {
        local_5c = 0x4000;
      }
    }
    else {
      local_5c = 0x3fffffff;
    }
    local_70._8_8_ = this + local_60;
    local_70._0_8_ = this;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (this == (CPAL *)0x0) {
      hb_blob_destroy(lVar3);
LAB_001029e3:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar2;
      }
      goto LAB_00102abe;
    }
    cVar1 = OT::CPAL::sanitize(this,(hb_sanitize_context_t *)local_78);
    lVar3 = local_48;
    if (cVar1 != '\0') {
      if (local_4c == 0) {
        hb_blob_destroy(local_48);
      }
      else {
        local_4c = 0;
        cVar1 = OT::CPAL::sanitize(this,(hb_sanitize_context_t *)local_78);
        if (local_4c != 0) {
          hb_blob_destroy(local_48);
          goto LAB_00102a10;
        }
        hb_blob_destroy(local_48);
        local_48 = 0;
        local_60 = 0;
        local_70 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_00102a10;
      }
      hb_blob_make_immutable(lVar2);
      goto LAB_001029e3;
    }
    if ((local_4c == 0) || (local_50 != '\0')) {
LAB_00102a08:
      hb_blob_destroy(lVar3);
LAB_00102a10:
      hb_blob_destroy(lVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar3 = hb_blob_get_empty();
        return lVar3;
      }
LAB_00102abe:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_70._0_8_ = hb_blob_get_data_writable(lVar2,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar2 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00102a08;
    local_50 = '\x01';
  } while( true );
}



/* hb_lazy_loader_t<OT::SVG_accelerator_t, hb_face_lazy_loader_t<OT::SVG_accelerator_t, 39u>,
   hb_face_t, 39u, OT::SVG_accelerator_t>::create(hb_face_t*) */

undefined8 *
hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
::create(hb_face_t *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  
  puVar6 = (undefined8 *)calloc(1,8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    hb_face_get_glyph_count(param_1);
    uVar7 = hb_face_reference_table(param_1,0x53564720);
    lVar8 = hb_blob_reference(uVar7);
    uVar1 = *(uint *)(lVar8 + 0x18);
    lVar3 = *(long *)(lVar8 + 0x10);
    if (uVar1 >> 0x1a == 0) {
      uVar10 = uVar1 * 0x40;
      if (0x3fffffff < uVar1 * 0x40) {
        uVar10 = 0x3fffffff;
      }
      if (uVar10 < 0x4000) {
        uVar10 = 0x4000;
      }
    }
    else {
      uVar10 = 0x3fffffff;
    }
    if (lVar3 != 0) {
      if (9 < (ulong)uVar1) {
        uVar2 = *(uint *)(lVar3 + 2);
        puVar9 = (ushort *)&_hb_NullPool;
        if (uVar2 != 0) {
          puVar9 = (ushort *)
                   (lVar3 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                   | uVar2 << 0x18));
        }
        if ((((ulong)((long)(puVar9 + 1) - lVar3) <= (ulong)uVar1) &&
            (uVar4 = *puVar9 << 8 | *puVar9 >> 8, iVar5 = (uint)uVar4 + (uint)uVar4 * 2,
            (uint)(iVar5 * 4) <= ((int)lVar3 + uVar1) - (int)(puVar9 + 1))) &&
           (0 < (int)(uVar10 + iVar5 * -4))) {
          hb_blob_destroy(lVar8);
          hb_blob_make_immutable(uVar7);
          *puVar6 = uVar7;
          return puVar6;
        }
      }
      hb_blob_destroy(lVar8);
      hb_blob_destroy(uVar7);
      uVar7 = hb_blob_get_empty();
      *puVar6 = uVar7;
      return puVar6;
    }
    hb_blob_destroy(lVar8);
    *puVar6 = uVar7;
  }
  return puVar6;
}



/* OT::NoVariable<OT::PaintLinearGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintLinearGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0x10 - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintLinearGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintLinearGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintLinearGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintLinearGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintLinearGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintLinearGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x14 - lVar1)) || (pVVar4 < this + (0x10 - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintLinearGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::NoVariable<OT::PaintRadialGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintRadialGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0x10 - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintRadialGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintRadialGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintRadialGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintRadialGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintRadialGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintRadialGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x14 - lVar1)) || (pVVar4 < this + (0x10 - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintRadialGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::NoVariable<OT::PaintSweepGradient<OT::NoVariable> >::sanitize(hb_sanitize_context_t*) const
    */

undefined8 __thiscall
OT::NoVariable<OT::PaintSweepGradient<OT::NoVariable>>::sanitize
          (NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *this,hb_sanitize_context_t *param_1)

{
  NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *pNVar1;
  ushort uVar2;
  int iVar3;
  
  if (((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
       this + (0xc - *(long *)(param_1 + 8))) ||
     ((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8)))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     ((((pNVar1 = this + (long)iVar3 + 3,
        (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pNVar1 - *(long *)(param_1 + 8)))) ||
       (uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 2,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pNVar1) < (uint)(iVar3 * 2))) ||
      (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)))
     ) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (NoVariable<OT::PaintSweepGradient<OT::NoVariable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::Variable<OT::PaintSweepGradient<OT::Variable> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::Variable<OT::PaintSweepGradient<OT::Variable>>::sanitize
          (Variable<OT::PaintSweepGradient<OT::Variable>> *this,hb_sanitize_context_t *param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  Variable<OT::PaintSweepGradient<OT::Variable>> *pVVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  pVVar4 = (Variable<OT::PaintSweepGradient<OT::Variable>> *)(ulong)*(uint *)(param_1 + 0x18);
  if (((pVVar4 < this + (0x10 - lVar1)) || (pVVar4 < this + (0xc - lVar1))) ||
     (pVVar4 < this + (4 - lVar1))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if ((iVar3 != 0) &&
     (((pVVar4 = this + (long)iVar3 + 3,
       (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar4 - *(long *)(param_1 + 8)))) ||
      ((uVar2 = *(ushort *)(this + (long)iVar3 + 1) << 8 | *(ushort *)(this + (long)iVar3 + 1) >> 8,
       iVar3 = (uint)uVar2 + (uint)uVar2 * 4,
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar4) < (uint)(iVar3 * 2) ||
       (iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1))
      )))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Variable<OT::PaintSweepGradient<OT::Variable>>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
  return 1;
}



/* OT::PaintTransform<OT::Variable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintTransform<OT::Variable>::sanitize
          (PaintTransform<OT::Variable> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_001031a0;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintTransform<OT::Variable>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_001031a0:
  if ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
  if (iVar3 != 0) {
    if (((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
         this + (((long)iVar3 + 0x1c) - *(long *)(param_1 + 8))) ||
       ((PaintTransform<OT::Variable> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (((long)iVar3 + 0x18) - *(long *)(param_1 + 8)))) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      this[6] = (PaintTransform<OT::Variable>)0x0;
      *(undefined2 *)(this + 4) = 0;
    }
  }
  return 1;
}



/* hb_sanitize_context_t::return_t
   OT::Paint::dispatch<hb_sanitize_context_t>(hb_sanitize_context_t*) const */

ulong __thiscall
OT::Paint::dispatch<hb_sanitize_context_t>(Paint *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Paint *pPVar6;
  
  if ((Paint *)(ulong)*(uint *)(param_1 + 0x18) < this + (1 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*this) {
  default:
    goto LAB_00103332;
  case (Paint)0x1:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (6 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0x2:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (5 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0x3:
    if ((Paint *)(ulong)*(uint *)(param_1 + 0x18) < this + (9 - *(long *)(param_1 + 8))) {
      return 0;
    }
    return CONCAT71((int7)((ulong)(this + (9 - *(long *)(param_1 + 8))) >> 8),
                    this + (5 - *(long *)(param_1 + 8)) <= (Paint *)(ulong)*(uint *)(param_1 + 0x18)
                   );
  case (Paint)0x4:
    uVar4 = NoVariable<OT::PaintLinearGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintLinearGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x5:
    uVar4 = Variable<OT::PaintLinearGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintLinearGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0x6:
    uVar4 = NoVariable<OT::PaintRadialGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintRadialGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x7:
    uVar4 = Variable<OT::PaintRadialGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintRadialGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0x8:
    uVar4 = NoVariable<OT::PaintSweepGradient<OT::NoVariable>>::sanitize
                      ((NoVariable<OT::PaintSweepGradient<OT::NoVariable>> *)this,param_1);
    return uVar4;
  case (Paint)0x9:
    uVar4 = Variable<OT::PaintSweepGradient<OT::Variable>>::sanitize
                      ((Variable<OT::PaintSweepGradient<OT::Variable>> *)this,param_1);
    return uVar4;
  case (Paint)0xa:
  case (Paint)0x14:
  case (Paint)0x18:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    goto LAB_001032c7;
  case (Paint)0xb:
    return (ulong)CONCAT31((int3)(*(uint *)(param_1 + 0x18) >> 8),
                           this + (3 - *(long *)(param_1 + 8)) <=
                           (Paint *)(ulong)*(uint *)(param_1 + 0x18));
  case (Paint)0xc:
    uVar4 = PaintTransform<OT::NoVariable>::sanitize((PaintTransform<OT::NoVariable> *)this,param_1)
    ;
    return uVar4;
  case (Paint)0xd:
    uVar4 = PaintTransform<OT::Variable>::sanitize((PaintTransform<OT::Variable> *)this,param_1);
    return uVar4;
  case (Paint)0xe:
  case (Paint)0x10:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    goto LAB_0010331b;
  case (Paint)0xf:
  case (Paint)0x11:
  case (Paint)0x1d:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
LAB_0010331b:
    if (pPVar6 < this + (8 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x12:
  case (Paint)0x1e:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x13:
  case (Paint)0x1f:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0x10 - lVar5)) {
      return 0;
    }
    if (pPVar6 < this + (0xc - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x15:
  case (Paint)0x19:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
LAB_001032c7:
    if (pPVar6 < this + (6 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x16:
  case (Paint)0x1a:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x17:
  case (Paint)0x1b:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (0xe - lVar5)) {
      return 0;
    }
    if (pPVar6 < this + (10 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x1c:
    lVar5 = *(long *)(param_1 + 8);
    pPVar6 = (Paint *)(ulong)*(uint *)(param_1 + 0x18);
    if (pPVar6 < this + (8 - lVar5)) {
      return 0;
    }
    break;
  case (Paint)0x20:
    uVar4 = PaintComposite::sanitize((PaintComposite *)this,param_1);
    return uVar4;
  }
  if (pPVar6 < this + (4 - lVar5)) {
    return 0;
  }
  iVar2 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar3 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar3, iVar3 != 0)) {
      cVar1 = dispatch<hb_sanitize_context_t>(this + iVar2,param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (Paint)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00103332:
  return 1;
}



/* OT::BaseGlyphList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::BaseGlyphList::sanitize(BaseGlyphList *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  BaseGlyphList *pBVar6;
  uint uVar7;
  bool bVar8;
  
  pBVar6 = this + 4;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)this;
  lVar2 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) *
          6;
  bVar8 = (int)((ulong)lVar2 >> 0x20) != 0;
  uVar4 = (uint)lVar2;
  uVar7 = (uint)bVar8;
  if ((((bVar8) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8)))) ||
      ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pBVar6) < uVar4)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar4 = *(uint *)this;
  pBVar6 = this + 10;
  if (uVar4 != 0) {
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pBVar6 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(uint *)(pBVar6 + -4);
      if (uVar1 != 0) {
        if ((*(int *)(param_1 + 0x24) < 0x40) &&
           (iVar5 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar5, iVar5 != 0)) {
          cVar3 = Paint::dispatch<hb_sanitize_context_t>
                            ((Paint *)(this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                               (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),param_1);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          if (cVar3 != '\0') goto LAB_001036b0;
        }
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(pBVar6 + -4) = 0;
      }
LAB_001036b0:
      uVar7 = uVar7 + 1;
      pBVar6 = pBVar6 + 6;
    } while (uVar7 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18));
  }
  return 1;
}



/* OT::COLR::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::COLR::sanitize(COLR *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  COLR *pCVar7;
  COLR *pCVar8;
  uint uVar9;
  
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xe - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar9 = *(uint *)(this + 4);
  if ((ulong)*(uint *)(param_1 + 0x18) <
      (ulong)((long)(this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18)) - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  iVar6 = (uint)uVar5 + (uint)uVar5 * 2;
  if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
            (int)(this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 << 0x18))) < (uint)(iVar6 * 2)) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x1c) + iVar6 * -2;
  *(int *)(param_1 + 0x1c) = iVar6;
  if (iVar6 < 1) {
    return 0;
  }
  uVar9 = *(uint *)(this + 8);
  if ((ulong)*(uint *)(param_1 + 0x18) <
      (ulong)((long)(this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18)) - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
  if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
            (int)(this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 << 0x18))) < uVar4 * 4) {
    return 0;
  }
  iVar6 = iVar6 + uVar4 * -4;
  *(int *)(param_1 + 0x1c) = iVar6;
  if (iVar6 < 1) {
    return 0;
  }
  if (*(short *)this == 0) {
    return 1;
  }
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x12 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar9 = *(uint *)(this + 0xe);
  if ((uVar9 != 0) &&
     (cVar3 = BaseGlyphList::sanitize
                        ((BaseGlyphList *)
                         (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                 uVar9 << 0x18)),param_1), cVar3 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0xe) = 0;
  }
  if ((COLR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x16 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar9 = *(uint *)(this + 0x12);
  if (uVar9 != 0) {
    pCVar8 = this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    );
    pCVar7 = pCVar8 + 4;
    if ((ulong)((long)pCVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar9 = *(uint *)pCVar8;
      uVar4 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      bVar2 = (uVar9 << 0x18) >> 0x1e != 0;
      uVar9 = (uint)bVar2;
      if ((((!bVar2) &&
           ((ulong)((long)pCVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar4 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7))) &&
         (iVar6 = *(int *)(param_1 + 0x1c) + uVar4 * -4, *(int *)(param_1 + 0x1c) = iVar6, 0 < iVar6
         )) {
        uVar4 = *(uint *)pCVar8;
        if (uVar4 != 0) {
          pCVar7 = pCVar8 + 8;
          do {
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar7 - *(long *)(param_1 + 8)))
            goto LAB_00103a00;
            uVar1 = *(uint *)(pCVar7 + -4);
            if (uVar1 != 0) {
              if ((*(int *)(param_1 + 0x24) < 0x40) &&
                 (iVar6 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar6, iVar6 != 0
                 )) {
                cVar3 = Paint::dispatch<hb_sanitize_context_t>
                                  ((Paint *)(pCVar8 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                                       (uVar1 & 0xff00) << 8 | uVar1 << 0x18)),
                                   param_1);
                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
                if (cVar3 != '\0') goto LAB_00103990;
              }
              if (0x1f < *(uint *)(param_1 + 0x2c)) {
                return 0;
              }
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
              if (param_1[0x28] == (hb_sanitize_context_t)0x0) goto LAB_00103a00;
              *(uint *)(pCVar7 + -4) = 0;
            }
LAB_00103990:
            uVar9 = uVar9 + 1;
            pCVar7 = pCVar7 + 4;
          } while (uVar9 < (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                           uVar4 << 0x18));
        }
        goto LAB_0010385e;
      }
    }
LAB_00103a00:
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0x12) = 0;
  }
LAB_0010385e:
  if (this + (0x1a - *(long *)(param_1 + 8)) <= (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar9 = *(uint *)(this + 0x16);
    if ((uVar9 != 0) &&
       (cVar3 = ClipList::sanitize((ClipList *)
                                   (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                            (uVar9 & 0xff00) << 8 | uVar9 << 0x18)),param_1),
       cVar3 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined4 *)(this + 0x16) = 0;
    }
    if (this + (0x1e - *(long *)(param_1 + 8)) <= (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar9 = *(uint *)(this + 0x1a);
      if ((uVar9 != 0) &&
         (cVar3 = DeltaSetIndexMap::sanitize
                            ((DeltaSetIndexMap *)
                             (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                      (uVar9 & 0xff00) << 8 | uVar9 << 0x18)),param_1),
         cVar3 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined4 *)(this + 0x1a) = 0;
      }
      if (this + (0x22 - *(long *)(param_1 + 8)) <= (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar9 = *(uint *)(this + 0x1e);
        if ((uVar9 != 0) &&
           (cVar3 = ItemVariationStore::sanitize
                              ((ItemVariationStore *)
                               (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                        (uVar9 & 0xff00) << 8 | uVar9 << 0x18)),param_1),
           cVar3 == '\0')) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined4 *)(this + 0x1e) = 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



/* hb_table_lazy_loader_t<OT::COLR, 35u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::COLR,35u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  COLR *this;
  char cVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  ulong local_68;
  COLR *local_60;
  COLR *pCStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  undefined2 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 1;
  local_60 = (COLR *)0x0;
  pCStack_58 = (COLR *)0x0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar3 = hb_face_reference_table(param_1,0x434f4c52);
  local_38 = hb_blob_reference(lVar3);
  local_40 = local_40 & 0xffffffffffffff00;
  while( true ) {
    uVar1 = *(uint *)(local_38 + 0x18);
    this = *(COLR **)(local_38 + 0x10);
    pCStack_58 = this + uVar1;
    if (uVar1 >> 0x1a == 0) {
      uVar4 = uVar1 << 6;
      if (0x3fffffff < uVar1 << 6) {
        uVar4 = 0x3fffffff;
      }
      if (uVar4 < 0x4000) {
        uVar4 = 0x4000;
      }
    }
    else {
      uVar4 = 0x3fffffff;
    }
    local_50 = CONCAT44(uVar4,uVar1);
    local_40 = local_40 & 0xffffffff;
    local_68 = local_68 & 0xffffffff00000000;
    local_48 = local_48 & 0xffffffff;
    local_60 = this;
    if (this == (COLR *)0x0) goto LAB_00103c4a;
    cVar2 = OT::COLR::sanitize(this,(hb_sanitize_context_t *)&local_68);
    if (cVar2 != '\0') break;
    if ((local_40._4_4_ == 0) || ((char)local_40 != '\0')) goto LAB_00103c70;
    local_60 = (COLR *)hb_blob_get_data_writable(lVar3,0);
    pCStack_58 = local_60 + *(uint *)(lVar3 + 0x18);
    if (local_60 == (COLR *)0x0) goto LAB_00103c70;
    local_40 = CONCAT71(local_40._1_7_,1);
  }
  if (local_40._4_4_ == 0) {
    hb_blob_destroy(local_38);
    local_50 = local_50 & 0xffffffff00000000;
  }
  else {
    local_40 = local_40 & 0xffffffff;
    cVar2 = OT::COLR::sanitize(this,(hb_sanitize_context_t *)&local_68);
    if (local_40._4_4_ != 0) {
LAB_00103c70:
      hb_blob_destroy(local_38);
      local_50 = local_50 & 0xffffffff00000000;
LAB_00103c94:
      pCStack_58 = (COLR *)0x0;
      local_60 = (COLR *)0x0;
      local_38 = 0;
      hb_blob_destroy(lVar3);
      lVar3 = hb_blob_get_empty();
LAB_00103ca4:
      if (local_38 != 0) {
LAB_00103c4a:
        hb_blob_destroy();
      }
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar3;
    }
    hb_blob_destroy(local_38);
    local_50 = local_50 & 0xffffffff00000000;
    if (cVar2 == '\0') goto LAB_00103c94;
  }
  pCStack_58 = (COLR *)0x0;
  local_60 = (COLR *)0x0;
  local_38 = 0;
  hb_blob_make_immutable(lVar3);
  goto LAB_00103ca4;
}



/* OT::PaintTransform<OT::NoVariable>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintTransform<OT::NoVariable>::sanitize
          (PaintTransform<OT::NoVariable> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_00103da0;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintTransform<OT::NoVariable>)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00103da0:
  if ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (7 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[4] * 0x10000 + (uint)(byte)this[5] * 0x100 + (uint)(byte)this[6];
  if ((iVar3 != 0) &&
     ((PaintTransform<OT::NoVariable> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + ((long)(iVar3 + 0x18) - *(long *)(param_1 + 8)))) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[6] = (PaintTransform<OT::NoVariable>)0x0;
    *(undefined2 *)(this + 4) = 0;
  }
  return 1;
}



/* OT::PaintComposite::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::PaintComposite::sanitize(PaintComposite *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) < 9) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    return 0;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -8;
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[1] * 0x10000 + (uint)(byte)this[2] * 0x100 + (uint)(byte)this[3];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') goto LAB_00103ec6;
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[3] = (PaintComposite)0x0;
    *(undefined2 *)(this + 1) = 0;
  }
LAB_00103ec6:
  if ((PaintComposite *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  iVar3 = (uint)(byte)this[5] * 0x10000 + (uint)(byte)this[6] * 0x100 + (uint)(byte)this[7];
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x24) < 0x40) &&
       (iVar2 = *(int *)(param_1 + 0x24) + 1, *(int *)(param_1 + 0x24) = iVar2, iVar2 != 0)) {
      cVar1 = Paint::dispatch<hb_sanitize_context_t>((Paint *)(this + iVar3),param_1);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    this[7] = (PaintComposite)0x0;
    *(undefined2 *)(this + 5) = 0;
  }
  return 1;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::sbix::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::sbix::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::CBDT::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::CBDT::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


