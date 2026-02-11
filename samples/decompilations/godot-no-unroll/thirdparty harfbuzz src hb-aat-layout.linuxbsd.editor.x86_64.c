
/* is_deleted_glyph(hb_glyph_info_t const*) */

bool is_deleted_glyph(hb_glyph_info_t *param_1)

{
  return *(int *)param_1 == 0xffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::hb_ot_apply_context_t::match_properties_mark(unsigned int, unsigned int, unsigned int) const
   [clone .part.0] [clone .isra.0] */

undefined4 OT::hb_ot_apply_context_t::match_properties_mark(uint param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 in_register_0000003c;
  undefined8 *puVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  ulong *puVar12;
  
  puVar8 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  uVar3 = param_3 >> 0x10;
  puVar12 = (ulong *)&_hb_NullPool;
  if (uVar3 < *(uint *)((long)puVar8 + 0xc)) {
    puVar12 = (ulong *)(puVar8[2] + (ulong)uVar3 * 0x18);
  }
  if ((((1L << ((byte)(param_2 >> 4) & 0x3f) & *puVar12) != 0) &&
      ((1L << ((byte)param_2 & 0x3f) & puVar12[1]) != 0)) &&
     ((1L << ((byte)(param_2 >> 9) & 0x3f) & puVar12[2]) != 0)) {
    puVar7 = (undefined *)*puVar8;
    if (puVar7 == (undefined *)0x0) {
      puVar7 = &_hb_NullPool;
    }
    psVar2 = (short *)&_hb_NullPool;
    if (3 < *(uint *)(puVar7 + 0x18)) {
      psVar2 = *(short **)(puVar7 + 0x10);
    }
    if (((*psVar2 == 0x100) &&
        (0x10001 < (ushort)(psVar2[1] << 8 | (ushort)psVar2[1] >> 8) + 0x10000)) &&
       (uVar1 = psVar2[6], uVar1 != 0)) {
      psVar2 = (short *)((long)psVar2 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
    else {
      psVar2 = (short *)&_hb_NullPool;
    }
    if (*psVar2 == 0x100) {
      puVar9 = (uint *)&_hb_NullPool;
      if (uVar3 < (ushort)(psVar2[1] << 8 | (ushort)psVar2[1] >> 8)) {
        puVar9 = (uint *)(psVar2 + (ulong)(uVar3 + 1) * 2);
      }
      uVar3 = *puVar9;
      psVar5 = (short *)&_hb_NullPool;
      if (uVar3 != 0) {
        psVar5 = (short *)((long)psVar2 +
                          (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                 uVar3 << 0x18));
      }
      if (*psVar5 == 0x100) {
        uVar1 = psVar5[1] << 8 | (ushort)psVar5[1] >> 8;
        iVar11 = uVar1 - 1;
        if (uVar1 != 0) {
          iVar6 = 0;
          do {
            uVar3 = (uint)(iVar6 + iVar11) >> 1;
            uVar4 = (uint)(ushort)(psVar5[(ulong)uVar3 + 2] << 8 |
                                  (ushort)psVar5[(ulong)uVar3 + 2] >> 8);
            if (param_2 < uVar4) {
              iVar11 = uVar3 - 1;
            }
            else {
              if (param_2 == uVar4) {
                return 1;
              }
              iVar6 = uVar3 + 1;
            }
          } while (iVar6 <= iVar11);
        }
      }
      else if (*psVar5 == 0x200) {
        uVar1 = psVar5[1] << 8 | (ushort)psVar5[1] >> 8;
        iVar11 = uVar1 - 1;
        if (uVar1 != 0) {
          iVar6 = 0;
          do {
            uVar3 = (uint)(iVar6 + iVar11) >> 1;
            puVar10 = (ushort *)(psVar5 + (ulong)uVar3 * 3 + 2);
            uVar1 = *puVar10 << 8 | *puVar10 >> 8;
            if (param_2 < uVar1) {
              iVar11 = uVar3 - 1;
            }
            else {
              if (param_2 <= (ushort)(puVar10[1] << 8 | puVar10[1] >> 8)) goto LAB_00100219;
              iVar6 = uVar3 + 1;
            }
          } while (iVar6 <= iVar11);
        }
        uVar1 = __hb_Null_OT_RangeRecord << 8 | __hb_Null_OT_RangeRecord >> 8;
        if (uVar1 <= (ushort)(_DAT_0011900a << 8 | _DAT_0011900a >> 8)) {
          puVar10 = (ushort *)&_hb_Null_OT_RangeRecord;
LAB_00100219:
          iVar11 = param_2 + ((uint)(ushort)(puVar10[2] << 8 | puVar10[2] >> 8) - (uint)uVar1);
          return CONCAT31((int3)((uint)iVar11 >> 8),iVar11 != -1);
        }
      }
    }
  }
  return 0;
}



/* AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t() */

void __thiscall AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t(hb_aat_apply_context_t *this)

{
  hb_blob_destroy(*(undefined8 *)(this + 0x58));
  return;
}



/* AAT::hb_aat_apply_context_t::set_ankr_table(AAT::ankr const*) */

void __thiscall
AAT::hb_aat_apply_context_t::set_ankr_table(hb_aat_apply_context_t *this,ankr *param_1)

{
  *(ankr **)(this + 0x68) = param_1;
  return;
}



/* hb_aat_layout_find_feature_mapping(unsigned int) */

uint * hb_aat_layout_find_feature_mapping(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0x4d;
  iVar2 = 0;
  while( true ) {
    while( true ) {
      uVar3 = (uint)(iVar2 + iVar4) >> 1;
      uVar1 = *(uint *)(&feature_mappings + (ulong)uVar3 * 0x10);
      if (uVar1 <= param_1) break;
      iVar4 = uVar3 - 1;
      if (iVar4 < iVar2) {
        return (uint *)0x0;
      }
    }
    if (param_1 <= uVar1) break;
    iVar2 = uVar3 + 1;
    if (iVar4 < iVar2) {
      return (uint *)0x0;
    }
  }
  return (uint *)(&feature_mappings + (ulong)uVar3 * 0x10);
}



/* hb_aat_layout_zero_width_deleted_glyphs(hb_buffer_t*) */

void hb_aat_layout_zero_width_deleted_glyphs(hb_buffer_t *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x80);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + lVar4) == 0xffff) {
        *(undefined1 (*) [16])(lVar3 + lVar4) = (undefined1  [16])0x0;
      }
      lVar4 = lVar4 + 0x14;
    } while (lVar4 != (ulong)uVar1 * 0x14);
  }
  return;
}



/* hb_aat_layout_remove_deleted_glyphs(hb_buffer_t*) */

void hb_aat_layout_remove_deleted_glyphs(hb_buffer_t *param_1)

{
  hb_buffer_t::delete_glyphs_inplace((_func_bool_hb_glyph_info_t_ptr *)param_1);
  return;
}



/* AAT::hb_aat_apply_context_t::hb_aat_apply_context_t(hb_ot_shape_plan_t const*, hb_font_t*,
   hb_buffer_t*, hb_blob_t*) */

void __thiscall
AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
          (hb_aat_apply_context_t *this,hb_ot_shape_plan_t *param_1,hb_font_t *param_2,
          hb_buffer_t *param_3,hb_blob_t *param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  hb_face_t *phVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  accelerator_t *this_00;
  undefined *puVar9;
  
  *(hb_font_t **)(this + 0x10) = param_2;
  lVar4 = *(long *)(param_2 + 0x20);
  *(undefined2 *)(this + 100) = 0;
  *(undefined4 *)this = 0;
  plVar1 = (long *)(lVar4 + 0x130);
  *(hb_ot_shape_plan_t **)(this + 8) = param_1;
  *(long *)(this + 0x18) = lVar4;
  *(hb_buffer_t **)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (hb_aat_apply_context_t)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0x1000000000000;
  *(undefined **)(this + 0x68) = &_hb_NullPool;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  do {
    while( true ) {
      this_00 = (accelerator_t *)*plVar1;
      if (this_00 != (accelerator_t *)0x0) goto LAB_001003a3;
      phVar5 = *(hb_face_t **)(lVar4 + 0x70);
      if (phVar5 == (hb_face_t *)0x0) goto LAB_00100515;
      this_00 = (accelerator_t *)calloc(1,0x218);
      if (this_00 == (accelerator_t *)0x0) break;
      OT::GDEF::accelerator_t::accelerator_t(this_00,phVar5);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this_00;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_001003a3;
      if (this_00 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)this_00);
        if (*(int *)(this_00 + 8) != 0) {
          free(*(void **)(this_00 + 0x10));
        }
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
LAB_00100515:
  this_00 = (accelerator_t *)&_hb_NullPool;
LAB_001003a3:
  puVar7 = *(undefined **)this_00;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = &_hb_NullPool;
  }
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  puVar9 = &_hb_NullPool;
  if (3 < *(uint *)(puVar7 + 0x18)) {
    puVar9 = *(undefined **)(puVar7 + 0x10);
  }
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 200) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined **)(this + 0x70) = puVar9;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  uVar8 = hb_blob_reference(param_4);
  this[0x50] = (hb_aat_apply_context_t)0x0;
  *(undefined8 *)(this + 0x58) = uVar8;
  iVar6 = *(int *)(*(long *)(this + 0x18) + 0x18);
  if (iVar6 == -1) {
    iVar6 = hb_face_t::load_num_glyphs();
  }
  *(int *)(this + 0x60) = iVar6;
  this[100] = (hb_aat_apply_context_t)0x1;
  lVar4 = *(long *)(*(long *)(this + 0x58) + 0x10);
  uVar3 = *(uint *)(*(long *)(this + 0x58) + 0x18);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(uint *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x44) = 0x3fffffff;
  *(long *)(this + 0x30) = lVar4;
  *(ulong *)(this + 0x38) = (ulong)uVar3 + lVar4;
  return;
}



/* hb_aat_layout_track(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

void hb_aat_layout_track(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  hb_face_t *phVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int *piVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  TrackData *pTVar17;
  long in_FS_OFFSET;
  bool bVar18;
  float fVar19;
  float fVar20;
  hb_aat_apply_context_t local_128 [8];
  long local_120;
  long local_118;
  long local_108;
  undefined8 local_d0;
  long local_40;
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)(lVar5 + 0x170);
LAB_0010056c:
  lVar12 = *plVar1;
  if (lVar12 == 0) {
    phVar6 = *(hb_face_t **)(lVar5 + 0x70);
    if (phVar6 == (hb_face_t *)0x0) {
      lVar12 = hb_blob_get_empty();
    }
    else {
      lVar12 = hb_table_lazy_loader_t<AAT::trak,32u,false>::create(phVar6);
      if (lVar12 == 0) {
        lVar12 = hb_blob_get_empty();
        LOCK();
        lVar13 = *plVar1;
        if (lVar13 == 0) {
          *plVar1 = lVar12;
        }
        UNLOCK();
        if (lVar13 != 0) goto code_r0x001009b8;
      }
      else {
        LOCK();
        lVar13 = *plVar1;
        if (lVar13 == 0) {
          *plVar1 = lVar12;
        }
        UNLOCK();
        if (lVar13 != 0) goto LAB_0010096e;
      }
    }
  }
  puVar9 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar12 + 0x18)) {
    puVar9 = *(undefined **)(lVar12 + 0x10);
  }
  AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
            (local_128,param_1,param_2,param_3,(hb_blob_t *)&_hb_NullPool);
  fVar19 = *(float *)(local_118 + 0x70);
  uVar3 = *(uint *)(local_120 + 0xa4);
  if (0.0 < fVar19) {
    if ((*(uint *)(local_108 + 0x38) & 0xfffffffe) == 4) {
      uVar2 = *(ushort *)(puVar9 + 6);
      pTVar17 = (TrackData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pTVar17 = (TrackData *)(puVar9 + (ushort)(uVar2 << 8 | uVar2 >> 8));
      }
      iVar7 = AAT::TrackData::get_tracking(pTVar17,puVar9,fVar19);
      fVar19 = (float)(iVar7 / 2) * *(float *)(local_118 + 0x4c) + _LC5;
      if ((float)((uint)fVar19 & _LC8) < _LC6) {
        fVar19 = (float)((uint)((float)(int)fVar19 -
                               (float)(-(uint)(fVar19 < (float)(int)fVar19) & _LC2)) |
                        ~_LC8 & (uint)fVar19);
      }
      fVar20 = (float)iVar7 * *(float *)(local_118 + 0x4c) + _LC5;
      if ((float)((uint)fVar20 & _LC8) < _LC6) {
        uVar4 = *(uint *)(local_108 + 0x60);
        fVar20 = (float)((uint)((float)(int)fVar20 -
                               (float)(-(uint)(fVar20 < (float)(int)fVar20) & _LC2)) |
                        ~_LC8 & (uint)fVar20);
      }
      else {
        uVar4 = *(uint *)(local_108 + 0x60);
      }
      if (uVar4 != 0) {
        lVar5 = *(long *)(local_108 + 0x70);
        uVar14 = 0;
        puVar11 = (ushort *)(lVar5 + 0x24);
        do {
          uVar14 = uVar14 + 1;
          if (uVar4 == uVar14) break;
          uVar2 = *puVar11;
          puVar11 = puVar11 + 10;
        } while ((uVar2 & 0x80) != 0);
        uVar15 = 0;
        uVar16 = uVar4;
        do {
          if ((uVar3 & *(uint *)(lVar5 + 4 + uVar15 * 0x14)) != 0) {
            piVar10 = (int *)(uVar15 * 0x14 + *(long *)(local_108 + 0x80));
            *piVar10 = *piVar10 + (int)fVar20;
            piVar10[2] = piVar10[2] + (int)fVar19;
            uVar16 = *(uint *)(local_108 + 0x60);
          }
          lVar12 = lVar5 + (ulong)(uVar14 + 1) * 0x14;
          uVar8 = uVar14;
          do {
            uVar8 = uVar8 + 1;
            if (uVar16 <= uVar8) break;
            puVar11 = (ushort *)(lVar12 + 0x10);
            lVar12 = lVar12 + 0x14;
          } while ((*puVar11 & 0x80) != 0);
          uVar15 = (ulong)uVar14;
          bVar18 = uVar14 < uVar4;
          uVar14 = uVar8;
        } while (bVar18);
      }
    }
    else {
      uVar2 = *(ushort *)(puVar9 + 8);
      pTVar17 = (TrackData *)&_hb_NullPool;
      if (uVar2 != 0) {
        pTVar17 = (TrackData *)(puVar9 + (ushort)(uVar2 << 8 | uVar2 >> 8));
      }
      iVar7 = AAT::TrackData::get_tracking(pTVar17,puVar9,fVar19);
      fVar19 = (float)(iVar7 / 2) * *(float *)(local_118 + 0x50) + _LC5;
      if ((float)((uint)fVar19 & _LC8) < _LC6) {
        fVar19 = (float)((uint)((float)(int)fVar19 -
                               (float)(-(uint)(fVar19 < (float)(int)fVar19) & _LC2)) |
                        ~_LC8 & (uint)fVar19);
      }
      fVar20 = (float)iVar7 * *(float *)(local_118 + 0x50) + _LC5;
      if ((float)((uint)fVar20 & _LC8) < _LC6) {
        uVar4 = *(uint *)(local_108 + 0x60);
        fVar20 = (float)((uint)((float)(int)fVar20 -
                               (float)(-(uint)(fVar20 < (float)(int)fVar20) & _LC2)) |
                        ~_LC8 & (uint)fVar20);
      }
      else {
        uVar4 = *(uint *)(local_108 + 0x60);
      }
      if (uVar4 != 0) {
        lVar5 = *(long *)(local_108 + 0x70);
        uVar14 = 0;
        puVar11 = (ushort *)(lVar5 + 0x24);
        do {
          uVar14 = uVar14 + 1;
          if (uVar4 == uVar14) break;
          uVar2 = *puVar11;
          puVar11 = puVar11 + 10;
        } while ((uVar2 & 0x80) != 0);
        uVar15 = 0;
        uVar16 = uVar4;
        do {
          if ((uVar3 & *(uint *)(lVar5 + 4 + uVar15 * 0x14)) != 0) {
            lVar12 = uVar15 * 0x14 + *(long *)(local_108 + 0x80);
            piVar10 = (int *)(lVar12 + 4);
            *piVar10 = *piVar10 + (int)fVar20;
            piVar10 = (int *)(lVar12 + 0xc);
            *piVar10 = *piVar10 + (int)fVar19;
            uVar16 = *(uint *)(local_108 + 0x60);
          }
          lVar12 = lVar5 + (ulong)(uVar14 + 1) * 0x14;
          uVar8 = uVar14;
          do {
            uVar8 = uVar8 + 1;
            if (uVar16 <= uVar8) break;
            puVar11 = (ushort *)(lVar12 + 0x10);
            lVar12 = lVar12 + 0x14;
          } while ((*puVar11 & 0x80) != 0);
          uVar15 = (ulong)uVar14;
          bVar18 = uVar14 < uVar4;
          uVar14 = uVar8;
        } while (bVar18);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    hb_blob_destroy(local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001009b8:
  if (lVar12 != 0) {
LAB_0010096e:
    lVar13 = hb_blob_get_empty();
    if (lVar12 != lVar13) {
      hb_blob_destroy(lVar12);
    }
  }
  goto LAB_0010056c;
}



bool hb_aat_layout_has_tracking(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  
  plVar1 = (long *)(param_1 + 0x170);
LAB_001009f8:
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar2 = hb_blob_get_empty();
    }
    else {
      lVar2 = hb_table_lazy_loader_t<AAT::trak,32u,false>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar2 == 0) {
        lVar2 = hb_blob_get_empty();
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto code_r0x00100ab0;
      }
      else {
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto LAB_00100a71;
      }
    }
  }
  puVar4 = (ushort *)&_hb_NullPool;
  if (0xb < *(uint *)(lVar2 + 0x18)) {
    puVar4 = *(ushort **)(lVar2 + 0x10);
  }
  return (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8) * 0x10000 +
         (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8) != 0;
code_r0x00100ab0:
  if (lVar2 != 0) {
LAB_00100a71:
    lVar3 = hb_blob_get_empty();
    if (lVar2 != lVar3) {
      hb_blob_destroy(lVar2);
    }
  }
  goto LAB_001009f8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint hb_aat_layout_feature_type_get_selector_infos
               (long param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  
  plVar1 = (long *)(param_1 + 0x180);
LAB_00100aea:
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar5 = hb_blob_get_empty();
    }
    else {
      lVar5 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar5 == 0) {
        lVar5 = hb_blob_get_empty();
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto code_r0x00100d32;
      }
      else {
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto LAB_00100cce;
      }
    }
  }
  puVar7 = (ushort *)&_hb_NullPool;
  puVar14 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar5 + 0x18)) {
    puVar14 = *(undefined **)(lVar5 + 0x10);
  }
  uVar3 = *(ushort *)(puVar14 + 4) << 8 | *(ushort *)(puVar14 + 4) >> 8;
  iVar12 = uVar3 - 1;
  if (uVar3 != 0) {
    iVar10 = 0;
    do {
      while( true ) {
        uVar8 = (uint)(iVar10 + iVar12) >> 1;
        puVar7 = (ushort *)(puVar14 + (ulong)uVar8 * 0xc + 0xc);
        uVar4 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
        if (-1 < (int)(param_2 - uVar4)) break;
        iVar12 = uVar8 - 1;
        if (iVar12 < iVar10) goto LAB_00100b5d;
      }
      if (param_2 == uVar4) goto LAB_00100b64;
      iVar10 = uVar8 + 1;
    } while (iVar10 <= iVar12);
LAB_00100b5d:
    puVar7 = (ushort *)&_hb_NullPool;
  }
LAB_00100b64:
  uVar3 = puVar7[4];
  uVar4 = *(uint *)(puVar7 + 2);
  uVar13 = 0xffff;
  uVar8 = 0xffff;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar11 = (uint)(ushort)(puVar7[1] << 8 | puVar7[1] >> 8);
  if ((short)(uVar3 << 8 | uVar3 >> 8) < 0) {
    uVar8 = 0;
    if ((uVar3 << 8 & 0x4000) != 0) {
      uVar8 = (uint)(uVar3 >> 8);
    }
    puVar7 = (ushort *)&_hb_Null_AAT_SettingName;
    if (uVar8 < uVar11) {
      puVar7 = (ushort *)(puVar14 + (ulong)uVar8 * 4 + (ulong)uVar4);
    }
    uVar13 = (uint)(ushort)(*puVar7 << 8 | *puVar7 >> 8);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar8;
  }
  if (param_4 != (uint *)0x0) {
    uVar8 = *param_4;
    if (uVar11 < param_3) {
      *param_4 = 0;
    }
    else {
      puVar7 = (ushort *)(puVar14 + (ulong)param_3 * 4 + (ulong)uVar4);
      uVar4 = uVar11 - param_3;
      if (uVar8 < uVar11 - param_3) {
        uVar4 = uVar8;
      }
      *param_4 = uVar4;
      if (uVar4 != 0) {
        puVar2 = puVar7 + (ulong)(uVar4 - 1) * 2 + 2;
        do {
          uVar3 = *puVar7 << 8 | *puVar7 >> 8;
          uVar4 = uVar3 + 1;
          if (uVar13 != 0xffff) {
            uVar4 = uVar13;
          }
          uVar9 = (uint)(ushort)(puVar7[1] << 8 | puVar7[1] >> 8);
          if (uVar8 == 0) {
            _DAT_0011904c = 0;
            __hb_CrapPool = (ulong)CONCAT24(uVar3,uVar9);
            _hb_face_get_glyph_count = uVar4;
          }
          else {
            *param_5 = uVar9;
            uVar8 = uVar8 - 1;
            param_5[1] = (uint)uVar3;
            param_5[2] = uVar4;
            param_5[3] = 0;
            param_5 = param_5 + 4;
          }
          puVar7 = puVar7 + 2;
        } while (puVar7 != puVar2);
      }
    }
  }
  return uVar11;
code_r0x00100d32:
  if (lVar5 != 0) {
LAB_00100cce:
    lVar6 = hb_blob_get_empty();
    if (lVar5 != lVar6) {
      hb_blob_destroy();
    }
  }
  goto LAB_00100aea;
}



int hb_aat_layout_feature_type_get_name_id(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined *puVar10;
  
  plVar1 = (long *)(param_1 + 0x180);
LAB_00100d58:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100e4a;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100e0b;
      }
    }
  }
  puVar10 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar4 + 0x18)) {
    puVar10 = *(undefined **)(lVar4 + 0x10);
  }
  puVar9 = (ushort *)&_hb_NullPool;
  uVar2 = *(ushort *)(puVar10 + 4) << 8 | *(ushort *)(puVar10 + 4) >> 8;
  iVar8 = uVar2 - 1;
  if (uVar2 != 0) {
    iVar6 = 0;
    do {
      while( true ) {
        uVar7 = (uint)(iVar6 + iVar8) >> 1;
        puVar9 = (ushort *)(puVar10 + (ulong)uVar7 * 0xc + 0xc);
        uVar3 = (uint)(ushort)(*puVar9 << 8 | *puVar9 >> 8);
        if (-1 < (int)(param_2 - uVar3)) break;
        iVar8 = uVar7 - 1;
        if (iVar8 < iVar6) goto LAB_00100dcd;
      }
      if (param_2 == uVar3) goto LAB_00100dd4;
      iVar6 = uVar7 + 1;
    } while (iVar6 <= iVar8);
LAB_00100dcd:
    puVar9 = (ushort *)&_hb_NullPool;
  }
LAB_00100dd4:
  return (int)(short)(puVar9[5] << 8 | puVar9[5] >> 8);
code_r0x00100e4a:
  if (lVar4 != 0) {
LAB_00100e0b:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_00100d58;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort hb_aat_layout_get_feature_types(long param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  long *plVar1;
  FeatureName *pFVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  FeatureName *this;
  ushort uVar8;
  uint uVar9;
  
  plVar1 = (long *)(param_1 + 0x180);
LAB_00100e82:
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar5 = hb_blob_get_empty();
    }
    else {
      lVar5 = hb_table_lazy_loader_t<AAT::feat,34u,false>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar5 == 0) {
        lVar5 = hb_blob_get_empty();
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto code_r0x00100fc3;
      }
      else {
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto LAB_00100f6d;
      }
    }
  }
  puVar4 = &_hb_NullPool;
  if (0xb < *(uint *)(lVar5 + 0x18)) {
    puVar4 = *(undefined **)(lVar5 + 0x10);
  }
  uVar8 = *(ushort *)(puVar4 + 4) << 8 | *(ushort *)(puVar4 + 4) >> 8;
  if (param_3 != (uint *)0x0) {
    uVar9 = *param_3;
    if (uVar8 < param_2) {
      *param_3 = 0;
    }
    else {
      uVar7 = uVar8 - param_2;
      this = (FeatureName *)(puVar4 + (ulong)param_2 * 0xc + 0xc);
      if (uVar9 < uVar7) {
        uVar7 = uVar9;
      }
      *param_3 = uVar7;
      if (uVar7 != 0) {
        pFVar2 = this + (ulong)(uVar7 - 1) * 0xc + 0xc;
        do {
          uVar3 = AAT::FeatureName::get_feature_type(this);
          if (uVar9 != 0) {
            *param_4 = uVar3;
            uVar9 = uVar9 - 1;
            param_4 = param_4 + 1;
            uVar3 = __hb_CrapPool;
          }
          __hb_CrapPool = uVar3;
          this = this + 0xc;
        } while (this != pFVar2);
      }
    }
  }
  return uVar8;
code_r0x00100fc3:
  if (lVar5 != 0) {
LAB_00100f6d:
    lVar6 = hb_blob_get_empty();
    if (lVar5 != lVar6) {
      hb_blob_destroy(lVar5);
    }
  }
  goto LAB_00100e82;
}



bool hb_aat_layout_has_positioning(long param_1)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  short *psVar4;
  accelerator_t *this;
  undefined *puVar5;
  
  plVar1 = (long *)(param_1 + 0x160);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_00100ff2;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_001010a8;
      this = (accelerator_t *)calloc(1,0x18);
      if (this == (accelerator_t *)0x0) break;
      AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_00100ff2;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)this);
        if (*(int *)(this + 8) != 0) {
          free(*(void **)(this + 0x10));
        }
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
LAB_001010a8:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00100ff2:
  puVar5 = *(undefined **)this;
  psVar4 = (short *)&_hb_NullPool;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  if (7 < *(uint *)(puVar5 + 0x18)) {
    psVar4 = *(short **)(puVar5 + 0x10);
  }
  return *psVar4 != 0;
}



/* hb_aat_layout_position(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

void hb_aat_layout_position(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  hb_face_t *phVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  accelerator_t *this;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  short *psVar17;
  short *psVar18;
  undefined8 *puVar19;
  uint *puVar20;
  bool bVar21;
  undefined *puVar22;
  hb_buffer_t *this_00;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  hb_aat_apply_context_t local_178 [16];
  hb_font_t *local_168;
  hb_buffer_t *local_158;
  uint *local_148;
  uint *puStack_140;
  uint local_138;
  long local_120;
  undefined *local_110;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_40;
  
  lVar4 = *(long *)(param_2 + 0x20);
  plVar1 = (long *)(lVar4 + 0x160);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_0010110d;
      phVar5 = *(hb_face_t **)(lVar4 + 0x70);
      if (phVar5 == (hb_face_t *)0x0) goto LAB_00101e50;
      this = (accelerator_t *)calloc(1,0x18);
      if (this == (accelerator_t *)0x0) break;
      AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(this,phVar5);
      LOCK();
      lVar13 = *plVar1;
      if (lVar13 == 0) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      if (lVar13 == 0) goto LAB_0010110d;
      if (this != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)this);
        if (*(int *)(this + 8) != 0) {
          free(*(void **)(this + 0x10));
        }
        free(this);
      }
    }
    LOCK();
    lVar13 = *plVar1;
    if (lVar13 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar13 != 0);
LAB_00101e50:
  this = (accelerator_t *)&_hb_NullPool;
LAB_0010110d:
  AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
            (local_178,param_1,param_2,param_3,*(hb_blob_t **)this);
  cVar8 = hb_buffer_t::message(param_3,param_2,"start table kerx");
  if (cVar8 != '\0') {
    lVar4 = *(long *)(param_2 + 0x20);
    plVar1 = (long *)(lVar4 + 0x168);
LAB_00101158:
    lVar13 = *plVar1;
    if (lVar13 == 0) {
      phVar5 = *(hb_face_t **)(lVar4 + 0x70);
      if (phVar5 == (hb_face_t *)0x0) {
        lVar13 = hb_blob_get_empty();
      }
      else {
        lVar13 = hb_table_lazy_loader_t<AAT::ankr,31u,false>::create(phVar5);
        if (lVar13 == 0) {
          lVar13 = hb_blob_get_empty();
          LOCK();
          lVar14 = *plVar1;
          if (lVar14 == 0) {
            *plVar1 = lVar13;
          }
          UNLOCK();
          if (lVar14 != 0) goto code_r0x00101e7f;
        }
        else {
          LOCK();
          lVar14 = *plVar1;
          if (lVar14 == 0) {
            *plVar1 = lVar13;
          }
          UNLOCK();
          if (lVar14 != 0) goto LAB_00101cec;
        }
      }
    }
    this_00 = local_158;
    local_110 = &_hb_NullPool;
    if (0xb < *(uint *)(lVar13 + 0x18)) {
      local_110 = *(undefined **)(lVar13 + 0x10);
    }
    puVar10 = *(undefined **)this;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = &_hb_NullPool;
    }
    puVar22 = &_hb_NullPool;
    if (7 < *(uint *)(puVar10 + 0x18)) {
      puVar22 = *(undefined **)(puVar10 + 0x10);
    }
    if (((byte)local_158[0x18] & 0x40) != 0) {
      hb_buffer_t::_set_glyph_flags(local_158,2,0,0xffffffff,false,false);
    }
    uVar23 = *(uint *)(this_00 + 0x60);
    if (uVar23 < 0x20) {
      puVar20 = *(uint **)(this_00 + 0x70);
      if (uVar23 == 0) {
        uStack_f0 = 0;
        local_f8 = 0;
        local_e8 = 0;
      }
      else {
        local_f8 = 0;
        puVar2 = puVar20 + (ulong)uVar23 * 5;
        puVar16 = puVar20;
        do {
          uVar23 = *puVar16;
          puVar16 = puVar16 + 5;
          local_f8 = local_f8 | 1L << ((byte)(uVar23 >> 4) & 0x3f);
        } while (puVar16 != puVar2);
        uStack_f0 = 0;
        puVar16 = puVar20;
        do {
          uVar23 = *puVar16;
          puVar16 = puVar16 + 5;
          uStack_f0 = uStack_f0 | 1L << ((byte)uVar23 & 0x3f);
        } while (puVar16 != puVar2);
        local_e8 = 0;
        do {
          uVar23 = *puVar20;
          puVar20 = puVar20 + 5;
          local_e8 = local_e8 | 1L << ((byte)(uVar23 >> 9) & 0x3f);
        } while (puVar20 != puVar2);
      }
    }
    else {
      local_e8 = 0xffffffffffffffff;
      local_f8 = 0xffffffffffffffff;
      uStack_f0 = 0xffffffffffffffff;
    }
    uVar23 = *(uint *)(puVar22 + 4);
    puVar20 = (uint *)(puVar22 + 8);
    local_94 = 0;
    uVar24 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
    if (uVar23 != 0) {
      uVar25 = 0;
      cVar8 = '\0';
      do {
        uVar23 = *(uint *)(this_00 + 0x38);
        uVar15 = puVar20[1];
        if ((((uVar23 & 0xfffffffe) == 4) == (bool)((byte)~(byte)uVar15 >> 7)) &&
           (cVar9 = hb_buffer_t::message(this_00,local_168,"start subtable %u"), cVar9 != '\0')) {
          cVar7 = cVar9;
          if ((cVar8 == '\0') && (cVar7 = cVar8, (puVar20[1] & 0x40) != 0)) {
            lVar4 = *(long *)(local_158 + 0x80);
            uVar3 = *(uint *)(local_158 + 0x60);
            cVar7 = cVar9;
            if (uVar3 != 0) {
              psVar17 = (short *)(lVar4 + 0x10);
              do {
                *(undefined1 *)(psVar17 + 1) = 2;
                bVar21 = (*(uint *)(local_158 + 0x38) & 0xfffffffd) != 4;
                psVar18 = psVar17 + 10;
                *psVar17 = (bVar21 - 1) + (ushort)bVar21;
                psVar17 = psVar18;
              } while ((short *)(lVar4 + 0x10) + (ulong)uVar3 * 10 != psVar18);
            }
          }
          bVar21 = (bool)((byte)uVar15 >> 4 & 1);
          bVar26 = (uVar23 & 0xfffffffd) == 5;
          if (bVar21 != bVar26) {
            uVar23 = *(uint *)(local_158 + 0x60);
            if (1 < uVar23) {
              uVar15 = 0;
              puVar11 = *(undefined8 **)(local_158 + 0x70);
              puVar19 = (undefined8 *)
                        ((long)*(undefined8 **)(local_158 + 0x70) + (ulong)(uVar23 - 1) * 0x14);
              do {
                uVar6 = puVar11[1];
                local_78 = *(undefined4 *)(puVar19 + 2);
                uVar15 = uVar15 + 1;
                local_88 = *puVar19;
                uStack_80 = puVar19[1];
                *puVar19 = *puVar11;
                puVar19[1] = uVar6;
                *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar11 + 2);
                *(undefined4 *)(puVar11 + 2) = local_78;
                *puVar11 = local_88;
                puVar11[1] = uStack_80;
                puVar11 = (undefined8 *)((long)puVar11 + 0x14);
                puVar19 = (undefined8 *)((long)puVar19 + -0x14);
              } while (uVar15 < (uVar23 - 1) - uVar15);
              if (local_158[0x5b] != (hb_buffer_t)0x0) {
                if (*(uint *)(local_158 + 0x60) < uVar23) {
                  uVar23 = *(uint *)(local_158 + 0x60);
                }
                if (1 < uVar23) {
                  uVar15 = 0;
                  puVar11 = *(undefined8 **)(local_158 + 0x80);
                  puVar19 = (undefined8 *)
                            ((long)*(undefined8 **)(local_158 + 0x80) + (ulong)(uVar23 - 1) * 0x14);
                  do {
                    uVar6 = puVar11[1];
                    local_78 = *(undefined4 *)(puVar19 + 2);
                    uVar15 = uVar15 + 1;
                    local_88 = *puVar19;
                    uStack_80 = puVar19[1];
                    *puVar19 = *puVar11;
                    puVar19[1] = uVar6;
                    *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar11 + 2);
                    *(undefined4 *)(puVar11 + 2) = local_78;
                    *puVar11 = local_88;
                    puVar11[1] = uStack_80;
                    puVar11 = (undefined8 *)((long)puVar11 + 0x14);
                    puVar19 = (undefined8 *)((long)puVar19 + -0x14);
                  } while (uVar15 < (uVar23 - 1) - uVar15);
                }
              }
            }
          }
          puVar11 = (undefined8 *)&_hb_NullPool;
          if ((uint)uVar25 < *(uint *)(this + 0xc)) {
            puVar11 = (undefined8 *)(uVar25 * 0x30 + *(long *)(this + 0x10));
          }
          local_b8 = puVar11[2];
          local_c8 = *puVar11;
          uStack_c0 = puVar11[1];
          local_b0 = puVar11[3];
          uStack_a8 = puVar11[4];
          local_a0 = puVar11[5];
          uVar12 = (ulong)*(uint *)(local_120 + 0x18);
          local_148 = *(uint **)(local_120 + 0x10);
          puStack_140 = (uint *)(uVar12 + (long)local_148);
          if ((uint)uVar25 < uVar24 - 1) {
            if ((puVar20 < puStack_140) && (local_148 <= puVar20)) {
              uVar23 = *puVar20;
              uVar12 = (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                              uVar23 << 0x18);
              if ((ulong)((long)puStack_140 - (long)puVar20) <= uVar12) {
                uVar12 = (long)puStack_140 - (long)puVar20;
              }
              puStack_140 = (uint *)((long)puVar20 + uVar12);
              local_148 = puVar20;
            }
            else {
              uVar12 = 0;
              local_148 = (uint *)0x0;
              puStack_140 = (uint *)0x0;
            }
          }
          local_138 = (uint)uVar12;
          if (puVar20[1] < 0x7000000) {
                    /* WARNING: Could not recover jumptable at 0x001013e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00113880 + *(int *)(&DAT_00113880 + (ulong)(puVar20[1] >> 0x18) * 4)))
                      (&DAT_00113880,uVar25 & 0xffffffff,
                       &DAT_00113880 + *(int *)(&DAT_00113880 + (ulong)(puVar20[1] >> 0x18) * 4));
            return;
          }
          local_138 = *(uint *)(local_120 + 0x18);
          puStack_140 = (uint *)((ulong)local_138 + *(long *)(local_120 + 0x10));
          local_148 = (uint *)*(long *)(local_120 + 0x10);
          if (bVar21 != bVar26) {
            uVar23 = *(uint *)(local_158 + 0x60);
            if (1 < uVar23) {
              uVar15 = 0;
              puVar11 = *(undefined8 **)(local_158 + 0x70);
              puVar19 = (undefined8 *)
                        ((long)*(undefined8 **)(local_158 + 0x70) + (ulong)(uVar23 - 1) * 0x14);
              do {
                uVar6 = puVar11[1];
                local_78 = *(undefined4 *)(puVar19 + 2);
                uVar15 = uVar15 + 1;
                local_88 = *puVar19;
                uStack_80 = puVar19[1];
                *puVar19 = *puVar11;
                puVar19[1] = uVar6;
                *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar11 + 2);
                *(undefined4 *)(puVar11 + 2) = local_78;
                *puVar11 = local_88;
                puVar11[1] = uStack_80;
                puVar11 = (undefined8 *)((long)puVar11 + 0x14);
                puVar19 = (undefined8 *)((long)puVar19 + -0x14);
              } while (uVar15 < (uVar23 - 1) - uVar15);
              if (local_158[0x5b] != (hb_buffer_t)0x0) {
                if (*(uint *)(local_158 + 0x60) < uVar23) {
                  uVar23 = *(uint *)(local_158 + 0x60);
                }
                if (1 < uVar23) {
                  uVar15 = 0;
                  puVar11 = *(undefined8 **)(local_158 + 0x80);
                  puVar19 = (undefined8 *)
                            ((long)*(undefined8 **)(local_158 + 0x80) + (ulong)(uVar23 - 1) * 0x14);
                  do {
                    uVar6 = puVar11[1];
                    local_78 = *(undefined4 *)(puVar19 + 2);
                    uVar15 = uVar15 + 1;
                    local_88 = *puVar19;
                    uStack_80 = puVar19[1];
                    *puVar19 = *puVar11;
                    puVar19[1] = uVar6;
                    *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar11 + 2);
                    *(undefined4 *)(puVar11 + 2) = local_78;
                    *puVar11 = local_88;
                    puVar11[1] = uStack_80;
                    puVar11 = (undefined8 *)((long)puVar11 + 0x14);
                    puVar19 = (undefined8 *)((long)puVar19 + -0x14);
                  } while (uVar15 < (uVar23 - 1) - uVar15);
                }
              }
            }
          }
          hb_buffer_t::message(local_158,local_168,"end subtable %u",(ulong)local_94);
          cVar8 = cVar7;
        }
        uVar23 = *puVar20;
        local_94 = local_94 + 1;
        uVar25 = uVar25 + 1;
        puVar20 = (uint *)((long)puVar20 +
                          (ulong)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8
                                 | uVar23 << 0x18));
        this_00 = local_158;
      } while ((uint)uVar25 < uVar24);
    }
    hb_buffer_t::message(param_3,param_2,"end table kerx");
  }
  hb_blob_destroy(local_120);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00101e7f:
  if (lVar13 != 0) {
LAB_00101cec:
    lVar14 = hb_blob_get_empty();
    if (lVar13 != lVar14) {
      hb_blob_destroy(lVar13);
    }
  }
  goto LAB_00101158;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_aat_layout_compile_map(hb_aat_map_builder_t const*, hb_aat_map_t*) */

void hb_aat_layout_compile_map(hb_aat_map_builder_t *param_1,hb_aat_map_t *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  hb_face_t *phVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  accelerator_t *this;
  void *pvVar11;
  accelerator_t *this_00;
  short *psVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  Chain<AAT::ExtendedTypes> *this_01;
  Chain<AAT::ObsoleteTypes> *this_02;
  long lVar18;
  bool bVar19;
  
  lVar18 = *(long *)param_1;
  plVar1 = (long *)(lVar18 + 0x150);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_00101ed1;
      phVar6 = *(hb_face_t **)(lVar18 + 0x70);
      if (phVar6 == (hb_face_t *)0x0) goto LAB_00102341;
      this = (accelerator_t *)calloc(1,0x18);
      if (this == (accelerator_t *)0x0) break;
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
                (this,phVar6);
      LOCK();
      bVar19 = *plVar1 == 0;
      if (bVar19) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      uVar14 = (ulong)bVar19;
      if (bVar19) goto LAB_00101ed1;
      if (this != (accelerator_t *)&_hb_NullPool) {
        if (*(int *)(this + 8) != 0) {
          do {
            lVar2 = uVar14 * 8;
            uVar14 = uVar14 + 1;
            free(*(void **)(*(long *)(this + 0x10) + lVar2));
          } while ((uint)uVar14 < *(uint *)(this + 8));
        }
        free(*(void **)(this + 0x10));
        hb_blob_destroy(*(undefined8 *)this);
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
LAB_00102341:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00101ed1:
  puVar10 = *(undefined **)this;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = &_hb_NullPool;
  }
  psVar12 = (short *)&_hb_NullPool;
  if (7 < *(uint *)(puVar10 + 0x18)) {
    psVar12 = *(short **)(puVar10 + 0x10);
  }
  if (*psVar12 == 0) {
    lVar18 = *(long *)param_1;
    plVar1 = (long *)(lVar18 + 0x158);
    do {
      while( true ) {
        this_00 = (accelerator_t *)*plVar1;
        if (this_00 != (accelerator_t *)0x0) goto LAB_00101f0c;
        phVar6 = *(hb_face_t **)(lVar18 + 0x70);
        if (phVar6 == (hb_face_t *)0x0) goto LAB_00102382;
        this_00 = (accelerator_t *)calloc(1,0x18);
        if (this_00 == (accelerator_t *)0x0) break;
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
                  (this_00,phVar6);
        LOCK();
        bVar19 = *plVar1 == 0;
        if (bVar19) {
          *plVar1 = (long)this_00;
        }
        UNLOCK();
        uVar14 = (ulong)bVar19;
        if (bVar19) goto LAB_00101f0c;
        if (this_00 != (accelerator_t *)&_hb_NullPool) {
          if (*(int *)(this_00 + 8) != 0) {
            do {
              lVar2 = uVar14 * 8;
              uVar14 = uVar14 + 1;
              free(*(void **)(*(long *)(this_00 + 0x10) + lVar2));
            } while ((uint)uVar14 < *(uint *)(this_00 + 8));
          }
          free(*(void **)(this_00 + 0x10));
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
LAB_00102382:
    this_00 = (accelerator_t *)&_hb_NullPool;
LAB_00101f0c:
    puVar10 = *(undefined **)this_00;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = &_hb_NullPool;
    }
    psVar12 = (short *)&_hb_NullPool;
    if (7 < *(uint *)(puVar10 + 0x18)) {
      psVar12 = *(short **)(puVar10 + 0x10);
    }
    if (*psVar12 != 0) {
      uVar15 = *(uint *)(psVar12 + 2);
      this_02 = (Chain<AAT::ObsoleteTypes> *)(psVar12 + 4);
      uVar17 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      cVar7 = hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false>::resize
                        ((hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false> *)param_2
                         ,uVar17,true,false);
      if ((cVar7 != '\0') && (uVar15 != 0)) {
        lVar18 = 0;
        do {
          if ((uint)lVar18 < *(uint *)(param_2 + 4)) {
            puVar13 = (uint *)(lVar18 * 0x10 + *(long *)(param_2 + 8));
          }
          else {
            __hb_CrapPool = __hb_NullPool;
            _hb_face_get_glyph_count = CONCAT44(_DAT_0011900c,__hb_Null_OT_RangeRecord);
            puVar13 = (uint *)&_hb_CrapPool;
          }
          uVar8 = AAT::Chain<AAT::ObsoleteTypes>::compile_flags(this_02,param_1);
          uVar4 = *(undefined4 *)(param_1 + 0x48);
          uVar15 = puVar13[1];
          uVar14 = (ulong)uVar15;
          uVar9 = *puVar13;
          uVar5 = *(undefined4 *)(param_1 + 0x4c);
          if ((int)uVar15 < (int)uVar9) {
            pvVar11 = *(void **)(puVar13 + 2);
            uVar15 = uVar15 + 1;
LAB_001020f3:
            puVar13[1] = uVar15;
            puVar3 = (undefined8 *)((long)pvVar11 + uVar14 * 0xc);
            *(undefined4 *)(puVar3 + 1) = uVar5;
            *puVar3 = CONCAT44(uVar4,uVar8);
          }
          else {
            uVar15 = uVar15 + 1;
            if (-1 < (int)uVar9) {
              uVar16 = uVar9;
              if (uVar9 < uVar15) {
                do {
                  uVar16 = uVar16 + 8 + (uVar16 >> 1);
                } while (uVar16 < uVar15);
                if (0x15555555 < uVar16) {
LAB_0010234d:
                  *puVar13 = ~uVar9;
                  goto LAB_00102351;
                }
                pvVar11 = realloc(*(void **)(puVar13 + 2),(ulong)uVar16 * 0xc);
                if (pvVar11 == (void *)0x0) {
                  uVar9 = *puVar13;
                  if (uVar9 < uVar16) goto LAB_0010234d;
                  uVar14 = (ulong)puVar13[1];
                  pvVar11 = *(void **)(puVar13 + 2);
                  uVar15 = puVar13[1] + 1;
                }
                else {
                  uVar14 = (ulong)puVar13[1];
                  *(void **)(puVar13 + 2) = pvVar11;
                  *puVar13 = uVar16;
                  uVar15 = puVar13[1] + 1;
                }
              }
              else {
                pvVar11 = *(void **)(puVar13 + 2);
              }
              goto LAB_001020f3;
            }
LAB_00102351:
            __hb_CrapPool = __hb_NullPool;
            _hb_face_get_glyph_count = CONCAT44(_DAT_0011904c,__hb_Null_OT_RangeRecord);
          }
          uVar15 = *(uint *)(this_02 + 4);
          lVar18 = lVar18 + 1;
          this_02 = this_02 + (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                              uVar15 << 0x18);
        } while ((uint)lVar18 < uVar17);
      }
    }
  }
  else {
    uVar15 = *(uint *)(psVar12 + 2);
    this_01 = (Chain<AAT::ExtendedTypes> *)(psVar12 + 4);
    uVar17 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    cVar7 = hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false>::resize
                      ((hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false> *)param_2,
                       uVar17,true,false);
    if ((cVar7 != '\0') && (uVar15 != 0)) {
      lVar18 = 0;
      do {
        if ((uint)lVar18 < *(uint *)(param_2 + 4)) {
          puVar13 = (uint *)(lVar18 * 0x10 + *(long *)(param_2 + 8));
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          _hb_face_get_glyph_count = CONCAT44(_DAT_0011900c,__hb_Null_OT_RangeRecord);
          puVar13 = (uint *)&_hb_CrapPool;
        }
        uVar8 = AAT::Chain<AAT::ExtendedTypes>::compile_flags(this_01,param_1);
        uVar4 = *(undefined4 *)(param_1 + 0x48);
        uVar15 = puVar13[1];
        uVar14 = (ulong)uVar15;
        uVar9 = *puVar13;
        uVar5 = *(undefined4 *)(param_1 + 0x4c);
        if ((int)uVar15 < (int)uVar9) {
          pvVar11 = *(void **)(puVar13 + 2);
          uVar15 = uVar15 + 1;
LAB_00101fa7:
          puVar13[1] = uVar15;
          puVar3 = (undefined8 *)((long)pvVar11 + uVar14 * 0xc);
          *(undefined4 *)(puVar3 + 1) = uVar5;
          *puVar3 = CONCAT44(uVar4,uVar8);
        }
        else {
          uVar15 = uVar15 + 1;
          if (-1 < (int)uVar9) {
            uVar16 = uVar9;
            if (uVar9 < uVar15) {
              do {
                uVar16 = uVar16 + 8 + (uVar16 >> 1);
              } while (uVar16 < uVar15);
              if (0x15555555 < uVar16) {
LAB_0010230c:
                *puVar13 = ~uVar9;
                goto LAB_00102310;
              }
              pvVar11 = realloc(*(void **)(puVar13 + 2),(ulong)uVar16 * 0xc);
              if (pvVar11 == (void *)0x0) {
                uVar9 = *puVar13;
                if (uVar9 < uVar16) goto LAB_0010230c;
                uVar14 = (ulong)puVar13[1];
                pvVar11 = *(void **)(puVar13 + 2);
                uVar15 = puVar13[1] + 1;
              }
              else {
                uVar14 = (ulong)puVar13[1];
                *(void **)(puVar13 + 2) = pvVar11;
                *puVar13 = uVar16;
                uVar15 = puVar13[1] + 1;
              }
            }
            else {
              pvVar11 = *(void **)(puVar13 + 2);
            }
            goto LAB_00101fa7;
          }
LAB_00102310:
          __hb_CrapPool = __hb_NullPool;
          _hb_face_get_glyph_count = CONCAT44(_DAT_0011904c,__hb_Null_OT_RangeRecord);
        }
        uVar15 = *(uint *)(this_01 + 4);
        lVar18 = lVar18 + 1;
        this_01 = this_01 + (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                            uVar15 << 0x18);
      } while ((uint)lVar18 < uVar17);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_aat_layout_has_substitution(long param_1)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  hb_face_t *phVar4;
  undefined *puVar5;
  accelerator_t *this;
  accelerator_t *this_00;
  short *psVar6;
  ulong uVar7;
  bool bVar8;
  
  plVar1 = (long *)(param_1 + 0x150);
  do {
    while( true ) {
      this = (accelerator_t *)*plVar1;
      if (this != (accelerator_t *)0x0) goto LAB_001023e6;
      phVar4 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar4 == (hb_face_t *)0x0) goto LAB_001025c7;
      this = (accelerator_t *)calloc(1,0x18);
      if (this == (accelerator_t *)0x0) break;
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
                (this,phVar4);
      LOCK();
      bVar8 = *plVar1 == 0;
      if (bVar8) {
        *plVar1 = (long)this;
      }
      UNLOCK();
      uVar7 = (ulong)bVar8;
      if (bVar8) goto LAB_001023e6;
      if (this != (accelerator_t *)&_hb_NullPool) {
        if (*(int *)(this + 8) != 0) {
          do {
            lVar2 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            free(*(void **)(*(long *)(this + 0x10) + lVar2));
          } while ((uint)uVar7 < *(uint *)(this + 8));
        }
        free(*(void **)(this + 0x10));
        hb_blob_destroy(*(undefined8 *)this);
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
LAB_001025c7:
  this = (accelerator_t *)&_hb_NullPool;
LAB_001023e6:
  puVar5 = *(undefined **)this;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  psVar6 = (short *)&_hb_NullPool;
  if (7 < *(uint *)(puVar5 + 0x18)) {
    psVar6 = *(short **)(puVar5 + 0x10);
  }
  if (*psVar6 != 0) {
    return true;
  }
  plVar1 = (long *)(param_1 + 0x158);
  do {
    while( true ) {
      this_00 = (accelerator_t *)*plVar1;
      if (this_00 != (accelerator_t *)0x0) goto LAB_0010242f;
      phVar4 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar4 == (hb_face_t *)0x0) goto LAB_001025e6;
      this_00 = (accelerator_t *)calloc(1,0x18);
      if (this_00 == (accelerator_t *)0x0) break;
      AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
                (this_00,phVar4);
      LOCK();
      bVar8 = *plVar1 == 0;
      if (bVar8) {
        *plVar1 = (long)this_00;
      }
      UNLOCK();
      uVar7 = (ulong)bVar8;
      if (bVar8) goto LAB_0010242f;
      if (this_00 != (accelerator_t *)&_hb_NullPool) {
        if (*(int *)(this_00 + 8) != 0) {
          do {
            lVar2 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            free(*(void **)(*(long *)(this_00 + 0x10) + lVar2));
          } while ((uint)uVar7 < *(uint *)(this_00 + 8));
        }
        free(*(void **)(this_00 + 0x10));
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
LAB_001025e6:
  this_00 = (accelerator_t *)&_hb_NullPool;
LAB_0010242f:
  puVar5 = *(undefined **)this_00;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  sVar3 = __hb_NullPool;
  if (7 < *(uint *)(puVar5 + 0x18)) {
    sVar3 = **(short **)(puVar5 + 0x10);
  }
  return sVar3 != 0;
}



/* hb_aat_layout_substitute(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*, hb_feature_t
   const*, unsigned int) */

void hb_aat_layout_substitute
               (hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3,
               hb_feature_t *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  hb_feature_t *phVar5;
  long lVar6;
  hb_blob_t *phVar7;
  hb_face_t *phVar8;
  char cVar9;
  mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u> *this;
  mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> *this_00;
  accelerator_t *this_01;
  accelerator_t *this_02;
  hb_blob_t *phVar10;
  int *piVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_188 [2];
  void *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  hb_aat_apply_context_t local_128 [88];
  undefined8 local_d0;
  long local_40;
  
  local_178 = *(undefined8 *)(param_2 + 0x20);
  local_170 = *(undefined8 *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = *(undefined8 *)(param_1 + 0x18);
  local_168 = *(undefined8 *)(param_1 + 8);
  uStack_160 = *(undefined8 *)(param_1 + 0x10);
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_130 = _LC9;
  if (param_5 != 0) {
    phVar5 = param_4 + (ulong)param_5 * 0x10;
    do {
      param_4 = param_4 + 0x10;
      hb_aat_map_builder_t::add_feature((hb_feature_t *)&local_178);
    } while (phVar5 != param_4);
  }
  local_188[0] = 0;
  local_188[1] = 0;
  local_180 = (void *)0x0;
  hb_aat_map_builder_t::compile((hb_aat_map_t *)&local_178);
  lVar6 = *(long *)(param_2 + 0x20);
  plVar3 = (long *)(lVar6 + 0x150);
  do {
    while( true ) {
      this_02 = (accelerator_t *)*plVar3;
      if (this_02 != (accelerator_t *)0x0) goto LAB_001026f8;
      phVar8 = *(hb_face_t **)(lVar6 + 0x70);
      if (phVar8 == (hb_face_t *)0x0) goto LAB_00102b84;
      this_02 = (accelerator_t *)calloc(1,0x18);
      if (this_02 == (accelerator_t *)0x0) break;
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
                (this_02,phVar8);
      LOCK();
      bVar13 = *plVar3 == 0;
      if (bVar13) {
        *plVar3 = (long)this_02;
      }
      UNLOCK();
      uVar12 = (ulong)bVar13;
      if (bVar13) goto LAB_001026f8;
      if (this_02 != (accelerator_t *)&_hb_NullPool) {
        if (*(int *)(this_02 + 8) != 0) {
          do {
            lVar4 = uVar12 * 8;
            uVar12 = uVar12 + 1;
            free(*(void **)(*(long *)(this_02 + 0x10) + lVar4));
          } while ((uint)uVar12 < *(uint *)(this_02 + 8));
        }
        free(*(void **)(this_02 + 0x10));
        hb_blob_destroy(*(undefined8 *)this_02);
        free(this_02);
      }
    }
    LOCK();
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      *plVar3 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar4 != 0);
LAB_00102b84:
  this_02 = (accelerator_t *)&_hb_NullPool;
LAB_001026f8:
  phVar7 = *(hb_blob_t **)this_02;
  phVar10 = (hb_blob_t *)&_hb_NullPool;
  if (phVar7 != (hb_blob_t *)0x0) {
    phVar10 = phVar7;
  }
  this = (mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u> *)&_hb_NullPool;
  if (7 < *(uint *)(phVar10 + 0x18)) {
    this = *(mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u> **)(phVar10 + 0x10);
  }
  if (*(short *)this == 0) {
    lVar6 = *(long *)(param_2 + 0x20);
    plVar3 = (long *)(lVar6 + 0x158);
    do {
      while( true ) {
        this_01 = (accelerator_t *)*plVar3;
        if (this_01 != (accelerator_t *)0x0) goto LAB_001027da;
        phVar8 = *(hb_face_t **)(lVar6 + 0x70);
        if (phVar8 == (hb_face_t *)0x0) goto LAB_00102b66;
        this_01 = (accelerator_t *)calloc(1,0x18);
        if (this_01 == (accelerator_t *)0x0) break;
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
                  (this_01,phVar8);
        LOCK();
        bVar13 = *plVar3 == 0;
        if (bVar13) {
          *plVar3 = (long)this_01;
        }
        UNLOCK();
        uVar12 = (ulong)bVar13;
        if (bVar13) goto LAB_001027da;
        if (this_01 != (accelerator_t *)&_hb_NullPool) {
          if (*(int *)(this_01 + 8) != 0) {
            do {
              lVar4 = uVar12 * 8;
              uVar12 = uVar12 + 1;
              free(*(void **)(*(long *)(this_01 + 0x10) + lVar4));
            } while ((uint)uVar12 < *(uint *)(this_01 + 8));
          }
          free(*(void **)(this_01 + 0x10));
          hb_blob_destroy(*(undefined8 *)this_01);
          free(this_01);
        }
      }
      LOCK();
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        *plVar3 = (long)&_hb_NullPool;
      }
      UNLOCK();
    } while (lVar4 != 0);
LAB_00102b66:
    this_01 = (accelerator_t *)&_hb_NullPool;
LAB_001027da:
    phVar7 = *(hb_blob_t **)this_01;
    phVar10 = (hb_blob_t *)&_hb_NullPool;
    if (phVar7 != (hb_blob_t *)0x0) {
      phVar10 = phVar7;
    }
    this_00 = (mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> *)&_hb_NullPool;
    if (7 < *(uint *)(phVar10 + 0x18)) {
      this_00 = *(mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> **)(phVar10 + 0x10);
    }
    if (*(short *)this_00 != 0) {
      AAT::hb_aat_apply_context_t::hb_aat_apply_context_t(local_128,param_1,param_2,param_3,phVar7);
      cVar9 = hb_buffer_t::message(param_3,param_2,"start table mort");
      if (cVar9 != '\0') {
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::apply
                  (this_00,local_128,(hb_aat_map_t *)local_188,this_01);
        hb_buffer_t::message(param_3,param_2,"end table mort");
      }
      goto LAB_0010275c;
    }
    if (local_188[0] == 0) goto LAB_00102775;
    piVar11 = (int *)((long)local_180 + (ulong)(uint)local_188[1] * 0x10 + -0x10);
    if (local_188[1] != 0) {
      piVar1 = piVar11 + (ulong)(local_188[1] - 1) * -4 + -4;
      do {
        if (*piVar11 != 0) {
          free(*(void **)(piVar11 + 2));
        }
        piVar11 = piVar11 + -4;
      } while (piVar1 != piVar11);
    }
  }
  else {
    AAT::hb_aat_apply_context_t::hb_aat_apply_context_t(local_128,param_1,param_2,param_3,phVar7);
    cVar9 = hb_buffer_t::message(param_3,param_2,"start table morx");
    if (cVar9 != '\0') {
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::apply
                (this,local_128,(hb_aat_map_t *)local_188,this_02);
      hb_buffer_t::message(param_3,param_2,"end table morx");
    }
LAB_0010275c:
    hb_blob_destroy(local_d0);
    if (local_188[0] == 0) goto LAB_00102775;
    piVar11 = (int *)((long)local_180 + (ulong)(uint)local_188[1] * 0x10 + -0x10);
    if (local_188[1] != 0) {
      piVar1 = piVar11 + (ulong)(local_188[1] - 1) * -4 + -4;
      do {
        while (*piVar11 == 0) {
          piVar11 = piVar11 + -4;
          if (piVar11 == piVar1) goto LAB_00102946;
        }
        piVar2 = piVar11 + 2;
        piVar11 = piVar11 + -4;
        free(*(void **)piVar2);
      } while (piVar11 != piVar1);
    }
  }
LAB_00102946:
  free(local_180);
LAB_00102775:
  if ((int)local_140 != 0) {
    free(local_138);
  }
  if ((int)local_150 != 0) {
    free(local_148);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AAT::FeatureName::get_feature_type() const */

ushort __thiscall AAT::FeatureName::get_feature_type(FeatureName *this)

{
  return *(ushort *)this << 8 | *(ushort *)this >> 8;
}



/* AAT::Lookup<OT::IntType<unsigned int, 4u> >::get_value_or_null(unsigned int, unsigned int) const
   [clone .part.0] */

uint __thiscall
AAT::Lookup<OT::IntType<unsigned_int,4u>>::get_value_or_null
          (Lookup<OT::IntType<unsigned_int,4u>> *this,uint param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar2 < 9) {
    switch(uVar2) {
    case 0:
      pLVar3 = this + (ulong)param_1 * 4 + 2;
      if (param_1 < param_2) goto LAB_00102bef;
      break;
    case 2:
      uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
      uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      if (uVar2 != 0) {
        iVar8 = uVar2 - 1;
        uVar4 = (ulong)(iVar8 * (uint)uVar5);
        if ((*(short *)(this + uVar4 + 0xc) != -1) ||
           (iVar6 = (uint)uVar2 - (uint)(*(short *)(this + uVar4 + 0xe) == -1), iVar8 = iVar6 + -1,
           iVar6 != 0)) {
          iVar6 = 0;
          do {
            uVar1 = (uint)(iVar6 + iVar8) >> 1;
            uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
            if (param_1 < (ushort)(uVar2 << 8 | uVar2 >> 8)) {
              iVar8 = uVar1 - 1;
            }
            else {
              uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
              if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) {
                uVar1 = *(uint *)(this + (ulong)(uVar1 * uVar5) + 0x10);
                return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18;
              }
              iVar6 = uVar1 + 1;
            }
          } while (iVar6 <= iVar8);
        }
      }
      break;
    case 4:
      uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
      uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      if (uVar2 != 0) {
        iVar8 = uVar2 - 1;
        uVar4 = (ulong)(iVar8 * (uint)uVar5);
        if ((*(short *)(this + uVar4 + 0xc) != -1) ||
           (iVar6 = (uint)uVar2 - (uint)(*(short *)(this + uVar4 + 0xe) == -1), iVar8 = iVar6 + -1,
           iVar6 != 0)) {
          iVar6 = 0;
          do {
            while( true ) {
              uVar1 = (uint)(iVar6 + iVar8) >> 1;
              uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
              if (param_1 < (ushort)(uVar2 << 8 | uVar2 >> 8)) break;
              uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
              if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) {
                pLVar3 = this + (ulong)(uVar1 * uVar5) + 0xc;
                uVar1 = (uint)(ushort)(*(ushort *)(pLVar3 + 2) << 8 | *(ushort *)(pLVar3 + 2) >> 8);
                if ((uVar1 <= param_1) &&
                   (param_1 <= (ushort)(*(ushort *)pLVar3 << 8 | *(ushort *)pLVar3 >> 8))) {
                  pLVar3 = this + (ulong)(ushort)(*(ushort *)(pLVar3 + 4) << 8 |
                                                 *(ushort *)(pLVar3 + 4) >> 8) +
                                  (ulong)(param_1 - uVar1) * 4;
                  goto LAB_00102d70;
                }
                goto LAB_00102d69;
              }
              iVar6 = uVar1 + 1;
              if (iVar8 < iVar6) goto LAB_00102d69;
            }
            iVar8 = uVar1 - 1;
          } while (iVar6 <= iVar8);
LAB_00102d69:
          pLVar3 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
LAB_00102d70:
          uVar1 = *(uint *)pLVar3;
          return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        }
      }
      break;
    case 6:
      uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
      uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
      if (uVar5 != 0) {
        iVar8 = uVar5 - 1;
        if ((*(short *)(this + (ulong)(iVar8 * (uint)uVar2) + 0xc) != -1) ||
           (iVar8 = uVar5 - 2, uVar5 != 1)) {
          iVar6 = 0;
          do {
            uVar1 = (uint)(iVar6 + iVar8) >> 1;
            uVar7 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar1 * (ulong)uVar2 + 0xc) << 8 |
                                  *(ushort *)(this + (ulong)uVar1 * (ulong)uVar2 + 0xc) >> 8);
            if (param_1 < uVar7) {
              iVar8 = uVar1 - 1;
            }
            else {
              if (param_1 == uVar7) {
                uVar1 = *(uint *)(this + (ulong)(uVar1 * uVar2) + 0xe);
                return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18;
              }
              iVar6 = uVar1 + 1;
            }
          } while (iVar6 <= iVar8);
        }
      }
      break;
    case 8:
      uVar1 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
      if ((uVar1 <= param_1) &&
         (uVar1 = param_1 - uVar1,
         uVar1 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8))) {
        pLVar3 = this + (ulong)uVar1 * 4 + 6;
        goto LAB_00102bef;
      }
    }
  }
  pLVar3 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
LAB_00102bef:
  uVar1 = *(uint *)pLVar3;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */

void __thiscall
hb_buffer_t::_set_glyph_flags
          (hb_buffer_t *this,uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_50;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x60) < param_3) {
    param_3 = *(uint *)(this + 0x60);
  }
  if ((param_5) || (!param_4)) {
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
    if ((param_5) && (this[0x5a] != (hb_buffer_t)0x0)) {
      uVar5 = *(uint *)(this + 100);
      if (!param_4) {
        if (param_2 < uVar5) {
          puVar4 = (uint *)(*(long *)(this + 0x78) + 4 + (ulong)param_2 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 5;
          } while (param_2 < *(uint *)(this + 100));
        }
        uVar5 = *(uint *)(this + 0x5c);
        if (uVar5 < param_3) {
          lVar3 = *(long *)(this + 0x70);
          puVar4 = (uint *)(lVar3 + 4 + (ulong)uVar5 * 0x14);
          do {
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + ((ulong)((param_3 - uVar5) - 1) + (ulong)uVar5) * 0x14)
                   != puVar4);
        }
        goto LAB_00102f70;
      }
      iVar1 = *(int *)(this + 0x1c);
      uVar11 = *(uint *)(this + 0x5c);
      lVar3 = *(long *)(this + 0x70);
      lVar8 = *(long *)(this + 0x78);
      if (uVar11 == param_3) {
        local_44 = 0xffffffff;
        if (param_2 == uVar5) goto LAB_00102f70;
        if (iVar1 == 2) goto LAB_0010330e;
LAB_001030c5:
        lVar10 = lVar8 + (ulong)(uVar5 - 1) * 0x14;
        uVar6 = (ulong)param_2;
        uVar7 = *(uint *)(lVar10 + 8);
        lVar12 = lVar8 + uVar6 * 0x14;
        uVar13 = *(uint *)(lVar12 + 8);
        if (uVar7 < uVar13) {
          uVar13 = uVar7;
          lVar12 = lVar10;
        }
        puVar4 = (uint *)(lVar12 + 8);
        if (local_44 <= uVar13) {
          puVar4 = &local_44;
        }
        uVar7 = *puVar4;
        if (param_2 == uVar5) {
LAB_001033a5:
          if (param_3 == uVar11) goto LAB_00102f70;
LAB_001033ae:
          uVar9 = (ulong)(param_3 - 1);
          uVar6 = (ulong)uVar11;
          goto LAB_001033b5;
        }
        local_50 = uVar6 * 0x14;
        lVar12 = (ulong)(uVar5 - 1) * 0x14;
        uVar13 = *(uint *)(lVar8 + 8 + local_50);
        lVar10 = lVar8 + lVar12;
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar7 == uVar13) {
LAB_0010326d:
          if (param_2 < uVar5) {
            do {
              if (*(uint *)(lVar10 + 8) == uVar7) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_1;
              lVar10 = lVar10 + -0x14;
            } while (lVar10 != lVar8 + -0x14 + lVar12 + (ulong)((uVar5 - param_2) - 1) * -0x14);
LAB_00103189:
            uVar11 = *(uint *)(this + 0x5c);
          }
        }
        else {
          if (uVar7 != uVar2) goto LAB_00103362;
          if (uVar7 == uVar13) goto LAB_0010326d;
          if (param_2 < uVar5) {
            puVar4 = (uint *)(lVar8 + 4 + local_50);
            do {
              if (puVar4[1] == uVar2) break;
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar8 + 0x18 + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
            goto LAB_00103189;
          }
        }
        if (uVar11 == param_3) goto LAB_00102f70;
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
LAB_001031b3:
        if (uVar5 != uVar7) {
          if (uVar13 != uVar7) goto LAB_001033d6;
          if (uVar5 != uVar7) {
            if (uVar11 < param_3) {
              puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
              do {
                if (puVar4[1] == uVar13) break;
                *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                *puVar4 = *puVar4 | param_1;
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14));
            }
            goto LAB_00102f70;
          }
        }
        if (uVar11 < param_3) {
          lVar8 = lVar3 + uVar9 * 0x14;
          do {
            if (*(uint *)(lVar8 + 8) == uVar7) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
            lVar8 = lVar8 + -0x14;
          } while (lVar8 != lVar3 + -0x14 + uVar9 * 0x14 + (ulong)((int)uVar9 - uVar11) * -0x14);
        }
      }
      else {
        if (iVar1 == 2) {
          if (uVar11 < param_3) {
            puVar4 = (uint *)(lVar3 + 8 + (ulong)uVar11 * 0x14);
            local_44 = 0xffffffff;
            do {
              if (*puVar4 < local_44) {
                local_44 = *puVar4;
              }
              puVar4 = puVar4 + 5;
            } while (puVar4 != (uint *)(lVar3 + 0x1c +
                                       ((ulong)((param_3 - uVar11) - 1) + (ulong)uVar11) * 0x14));
          }
          else {
            local_44 = 0xffffffff;
          }
          uVar7 = local_44;
          if (param_2 != uVar5) {
LAB_0010330e:
            uVar6 = (ulong)param_2;
            uVar7 = local_44;
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 8 + uVar6 * 0x14);
              do {
                if (*puVar4 < uVar7) {
                  uVar7 = *puVar4;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x1c + (((uVar5 - param_2) - 1) + uVar6) * 0x14));
              if (param_2 == uVar5) goto LAB_001033a5;
            }
            local_50 = uVar6 * 0x14;
LAB_00103362:
            if (param_2 < uVar5) {
              puVar4 = (uint *)(lVar8 + 4 + local_50);
              do {
                if (puVar4[1] != uVar7) {
                  *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
                  *puVar4 = *puVar4 | param_1;
                }
                puVar4 = puVar4 + 5;
              } while (puVar4 != (uint *)(lVar8 + 0x18 +
                                         ((ulong)((uVar5 - param_2) - 1) + (ulong)param_2) * 0x14));
              uVar11 = *(uint *)(this + 0x5c);
            }
            goto LAB_001033a5;
          }
          goto LAB_001033ae;
        }
        uVar9 = (ulong)(param_3 - 1);
        uVar6 = (ulong)uVar11;
        uVar7 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        if (uVar13 < uVar7) {
          uVar7 = uVar13;
        }
        local_44 = uVar7;
        if (param_2 != uVar5) goto LAB_001030c5;
LAB_001033b5:
        uVar5 = *(uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar13 = *(uint *)(lVar3 + 8 + uVar9 * 0x14);
        if (iVar1 != 2) goto LAB_001031b3;
LAB_001033d6:
        if (uVar11 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
          do {
            if (puVar4[1] != uVar7) {
              *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
              *puVar4 = *puVar4 | param_1;
            }
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 + (((int)uVar9 - uVar11) + uVar6) * 0x14) != puVar4);
        }
      }
      goto LAB_00102f70;
    }
    if (!param_4) {
      if (param_2 < param_3) {
        lVar3 = *(long *)(this + 0x70);
        puVar4 = (uint *)(lVar3 + 4 + (ulong)param_2 * 0x14);
        do {
          *puVar4 = *puVar4 | param_1;
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 +
                                   ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14));
      }
      goto LAB_00102f70;
    }
  }
  else {
    if (param_3 - param_2 < 2) goto LAB_00102f70;
    *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
  }
  lVar3 = *(long *)(this + 0x70);
  if (param_2 != param_3) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_2 < param_3) {
        uVar6 = (ulong)param_2;
        puVar4 = (uint *)(lVar3 + 8 + uVar6 * 0x14);
        uVar5 = 0xffffffff;
        do {
          if (*puVar4 < uVar5) {
            uVar5 = *puVar4;
          }
          puVar4 = puVar4 + 5;
        } while ((uint *)(lVar3 + 0x1c + (((param_3 - param_2) - 1) + uVar6) * 0x14) != puVar4);
        puVar4 = (uint *)(lVar3 + 4 + uVar6 * 0x14);
        do {
          if (uVar5 != puVar4[1]) {
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
          }
          puVar4 = puVar4 + 5;
        } while (puVar4 != (uint *)(lVar3 + 0x18 + (((param_3 - param_2) - 1) + uVar6) * 0x14));
      }
    }
    else {
      lVar12 = (ulong)(param_3 - 1) * 0x14;
      lVar10 = (ulong)param_2 * 0x14;
      lVar8 = lVar3 + lVar12;
      uVar5 = *(uint *)(lVar3 + 8 + lVar10);
      uVar11 = *(uint *)(lVar8 + 8);
      if (uVar11 < uVar5) {
        if (param_2 < param_3) {
          puVar4 = (uint *)(lVar3 + 4 + lVar10);
          do {
            if (puVar4[1] == uVar11) break;
            *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_1;
            puVar4 = puVar4 + 5;
          } while ((uint *)(lVar3 + 0x18 +
                           ((ulong)((param_3 - param_2) - 1) + (ulong)param_2) * 0x14) != puVar4);
        }
      }
      else if (param_2 < param_3) {
        do {
          if (*(uint *)(lVar8 + 8) == uVar5) break;
          *(uint *)(this + 0xc0) = *(uint *)(this + 0xc0) | 0x20;
          *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | param_1;
          lVar8 = lVar8 + -0x14;
        } while (lVar3 + -0x14 + lVar12 + (ulong)((param_3 - param_2) - 1) * -0x14 != lVar8);
      }
    }
  }
LAB_00102f70:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* hb_buffer_t::message(hb_font_t*, char const*, ...) */

undefined8 __thiscall hb_buffer_t::message(hb_buffer_t *this,hb_font_t *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (*(long *)(this + 0xd0) != 0) {
    uVar2 = hb_buffer_t::message_impl((hb_font_t *)this,(char *)param_1,(__va_list_tag *)param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_font_t::get_glyph_v_origin_with_fallback(unsigned int, int*, int*) */

void __thiscall
hb_font_t::get_glyph_v_origin_with_fallback(hb_font_t *this,uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x90);
  *param_3 = 0;
  *param_2 = 0;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x50);
  }
  iVar1 = (**(code **)(lVar3 + 0x70))
                    (this,*(undefined8 *)(this + 0x98),param_1,param_2,param_3,lVar5);
  if (iVar1 == 0) {
    lVar3 = *(long *)(this + 0x90);
    *param_3 = 0;
    *param_2 = 0;
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x48);
    }
    iVar1 = (**(code **)(lVar3 + 0x68))
                      (this,*(undefined8 *)(this + 0x98),param_1,param_2,param_3,lVar5);
    if (iVar1 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x90) + 0x10);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      uVar2 = (**(code **)(*(long *)(this + 0x90) + 0x48))
                        (this,*(undefined8 *)(this + 0x98),param_1,lVar3);
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      plVar4 = *(long **)(*(long *)(this + 0x90) + 0x10);
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)*plVar4;
      }
      iVar1 = (**(code **)(*(long *)(this + 0x90) + 0x20))
                        (this,*(undefined8 *)(this + 0x98),local_68,plVar4);
      if (iVar1 == 0) {
        iVar1 = (int)((double)*(int *)(this + 0x2c) * __LC0);
      }
      else {
        iVar1 = local_68._0_4_;
      }
      *param_2 = *param_2 + ((int)(((uint)(uVar2 >> 0x1f) & 1) + (int)uVar2) >> 1);
      *param_3 = *param_3 + iVar1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_font_t::get_glyph_contour_point_for_origin(unsigned int, unsigned int, hb_direction_t, int*,
   int*) */

int __thiscall
hb_font_t::get_glyph_contour_point_for_origin
          (hb_font_t *this,uint param_1,undefined4 param_2,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  int local_80;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0x90);
  *param_6 = 0;
  *param_5 = 0;
  lVar5 = *(long *)(lVar7 + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x70);
  }
  iVar1 = (**(code **)(lVar7 + 0x90))
                    (this,*(undefined8 *)(this + 0x98),param_1,param_2,param_5,param_6,lVar5);
  if (iVar1 != 0) {
    if ((param_4 & 0xfffffffe) == 4) {
      local_7c = 0;
      local_80 = 0;
      lVar7 = *(long *)(*(long *)(this + 0x90) + 0x10);
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 0x48);
      }
      iVar2 = (**(code **)(*(long *)(this + 0x90) + 0x68))
                        (this,*(undefined8 *)(this + 0x98),param_1,&local_80,&local_7c,lVar7);
      iVar3 = local_7c;
      iVar4 = local_80;
      if (iVar2 == 0) {
        local_7c = 0;
        local_80 = 0;
        lVar7 = *(long *)(*(long *)(this + 0x90) + 0x10);
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x50);
        }
        iVar2 = (**(code **)(*(long *)(this + 0x90) + 0x70))
                          (this,*(undefined8 *)(this + 0x98),param_1,&local_80,&local_7c,lVar7);
        iVar3 = local_7c;
        iVar4 = local_80;
        if (iVar2 != 0) {
          lVar7 = *(long *)(*(long *)(this + 0x90) + 0x10);
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x28);
          }
          uVar6 = (**(code **)(*(long *)(this + 0x90) + 0x48))
                            (this,*(undefined8 *)(this + 0x98),param_1,lVar7);
          local_78 = (undefined1  [16])0x0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          plVar8 = *(long **)(*(long *)(this + 0x90) + 0x10);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)*plVar8;
          }
          iVar4 = (**(code **)(*(long *)(this + 0x90) + 0x20))
                            (this,*(undefined8 *)(this + 0x98),local_78,plVar8);
          if (iVar4 == 0) {
            iVar4 = (int)((double)*(int *)(this + 0x2c) * __LC0);
          }
          else {
            iVar4 = local_78._0_4_;
          }
          iVar3 = local_7c - iVar4;
          iVar4 = local_80 - ((int)(((uint)(uVar6 >> 0x1f) & 1) + (int)uVar6) >> 1);
        }
      }
    }
    else {
      get_glyph_v_origin_with_fallback(this,param_1,&local_80,&local_7c);
      iVar3 = local_7c;
      iVar4 = local_80;
    }
    *param_5 = *param_5 - iVar4;
    *param_6 = *param_6 - iVar3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* AAT::ltag::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall AAT::ltag::sanitize(ltag *this,hb_sanitize_context_t *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ltag *plVar4;
  uint uVar5;
  uint uVar6;
  
  plVar4 = this + 0xc;
  if ((((ulong)((long)plVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(int *)this != 0)) &&
     ((ulong)((long)plVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar5 = *(uint *)(this + 8);
    uVar2 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    bVar1 = (uVar5 << 0x18) >> 0x1e != 0;
    uVar5 = (uint)bVar1;
    if (((!bVar1) &&
        ((ulong)((long)plVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       ((uVar2 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)plVar4) &&
        (iVar3 = *(int *)(param_1 + 0x1c) + uVar2 * -4, *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)
        ))) {
      uVar2 = *(uint *)(this + 8);
      if (uVar2 == 0) {
        return 1;
      }
      plVar4 = this + 0x10;
      if ((ulong)((long)plVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        while( true ) {
          if ((ulong)*(uint *)(param_1 + 0x18) <
              (ulong)((long)(this + (ushort)(*(ushort *)(plVar4 + -4) << 8 |
                                            *(ushort *)(plVar4 + -4) >> 8)) - *(long *)(param_1 + 8)
                     )) {
            return 0;
          }
          uVar6 = (uint)(ushort)(*(ushort *)(plVar4 + -2) << 8 | *(ushort *)(plVar4 + -2) >> 8);
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
                    (int)(this + (ushort)(*(ushort *)(plVar4 + -4) << 8 |
                                         *(ushort *)(plVar4 + -4) >> 8))) < uVar6) {
            return 0;
          }
          iVar3 = *(int *)(param_1 + 0x1c) - uVar6;
          *(int *)(param_1 + 0x1c) = iVar3;
          if (iVar3 < 1) {
            return 0;
          }
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 4;
          if ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) <=
              uVar5) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)plVar4 - *(long *)(param_1 + 8))) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* AAT::ankr::get_anchor(unsigned int, unsigned int, unsigned int) const */

ankr * __thiscall AAT::ankr::get_anchor(ankr *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  ankr *paVar8;
  ankr *paVar9;
  
  uVar1 = *(uint *)(this + 4);
  paVar9 = (ankr *)&_hb_Null_AAT_Lookup;
  if (uVar1 != 0) {
    paVar9 = this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
  }
  switch(*(ushort *)paVar9 << 8 | *(ushort *)paVar9 >> 8) {
  case 0:
    paVar9 = paVar9 + (ulong)param_1 * 2 + 2;
    if (param_3 <= param_1) break;
    goto LAB_00103bac;
  case 1:
  case 3:
  case 5:
  case 7:
    break;
  case 2:
    uVar3 = *(ushort *)(paVar9 + 4) << 8 | *(ushort *)(paVar9 + 4) >> 8;
    uVar6 = *(ushort *)(paVar9 + 2) << 8 | *(ushort *)(paVar9 + 2) >> 8;
    if (uVar3 != 0) {
      iVar7 = uVar3 - 1;
      uVar2 = (ulong)(iVar7 * (uint)uVar6);
      if ((*(short *)(paVar9 + uVar2 + 0xc) != -1) ||
         (iVar4 = (uint)uVar3 - (uint)(*(short *)(paVar9 + uVar2 + 0xe) == -1), iVar7 = iVar4 + -1,
         iVar4 != 0)) {
        iVar4 = 0;
        do {
          uVar1 = (uint)(iVar4 + iVar7) >> 1;
          uVar3 = *(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc + 2);
          if (param_1 < (ushort)(uVar3 << 8 | uVar3 >> 8)) {
            iVar7 = uVar1 - 1;
          }
          else {
            uVar3 = *(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc);
            if (param_1 <= (ushort)(uVar3 << 8 | uVar3 >> 8)) {
              paVar9 = paVar9 + (ulong)(uVar1 * uVar6) + 0x10;
              goto LAB_00103bac;
            }
            iVar4 = uVar1 + 1;
          }
        } while (iVar4 <= iVar7);
      }
    }
    break;
  case 4:
    uVar3 = *(ushort *)(paVar9 + 4) << 8 | *(ushort *)(paVar9 + 4) >> 8;
    uVar6 = *(ushort *)(paVar9 + 2) << 8 | *(ushort *)(paVar9 + 2) >> 8;
    if (uVar3 != 0) {
      iVar7 = uVar3 - 1;
      uVar2 = (ulong)(iVar7 * (uint)uVar6);
      if ((*(short *)(paVar9 + uVar2 + 0xc) != -1) ||
         (iVar4 = (uint)uVar3 - (uint)(*(short *)(paVar9 + uVar2 + 0xe) == -1), iVar7 = iVar4 + -1,
         iVar4 != 0)) {
        iVar4 = 0;
        do {
          uVar1 = (uint)(iVar4 + iVar7) >> 1;
          uVar3 = *(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc + 2);
          if (param_1 < (ushort)(uVar3 << 8 | uVar3 >> 8)) {
            iVar7 = uVar1 - 1;
          }
          else {
            uVar3 = *(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc);
            if (param_1 <= (ushort)(uVar3 << 8 | uVar3 >> 8)) {
              paVar8 = paVar9 + (ulong)(uVar1 * uVar6) + 0xc;
              uVar1 = (uint)(ushort)(*(ushort *)(paVar8 + 2) << 8 | *(ushort *)(paVar8 + 2) >> 8);
              if ((uVar1 <= param_1) &&
                 (param_1 <= (ushort)(*(ushort *)paVar8 << 8 | *(ushort *)paVar8 >> 8))) {
                paVar9 = paVar9 + (ulong)(ushort)(*(ushort *)(paVar8 + 4) << 8 |
                                                 *(ushort *)(paVar8 + 4) >> 8) +
                                  (ulong)(param_1 - uVar1) * 2;
                goto LAB_00103bac;
              }
              break;
            }
            iVar4 = uVar1 + 1;
          }
        } while (iVar4 <= iVar7);
      }
    }
    break;
  case 6:
    uVar3 = *(ushort *)(paVar9 + 4) << 8 | *(ushort *)(paVar9 + 4) >> 8;
    uVar6 = *(ushort *)(paVar9 + 2) << 8 | *(ushort *)(paVar9 + 2) >> 8;
    if (uVar3 != 0) {
      iVar7 = uVar3 - 1;
      if ((*(short *)(paVar9 + (ulong)(iVar7 * (uint)uVar6) + 0xc) != -1) ||
         (iVar7 = uVar3 - 2, uVar3 != 1)) {
        iVar4 = 0;
        do {
          uVar1 = (uint)(iVar4 + iVar7) >> 1;
          uVar5 = (uint)(ushort)(*(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc) << 8 |
                                *(ushort *)(paVar9 + (ulong)uVar1 * (ulong)uVar6 + 0xc) >> 8);
          if (param_1 < uVar5) {
            iVar7 = uVar1 - 1;
          }
          else {
            if (param_1 == uVar5) {
              paVar9 = paVar9 + (ulong)(uVar1 * uVar6) + 0xe;
              goto LAB_00103bac;
            }
            iVar4 = uVar1 + 1;
          }
        } while (iVar4 <= iVar7);
      }
    }
    break;
  case 8:
    uVar1 = (uint)(ushort)(*(ushort *)(paVar9 + 2) << 8 | *(ushort *)(paVar9 + 2) >> 8);
    if ((param_1 < uVar1) ||
       (uVar1 = param_1 - uVar1,
       (ushort)(*(ushort *)(paVar9 + 4) << 8 | *(ushort *)(paVar9 + 4) >> 8) <= uVar1)) break;
    paVar9 = paVar9 + (ulong)uVar1 * 2 + 6;
LAB_00103bac:
    uVar1 = *(uint *)(this + 8);
    uVar5 = *(uint *)(this + (ulong)(ushort)(*(ushort *)paVar9 << 8 | *(ushort *)paVar9 >> 8) +
                             (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                    | uVar1 << 0x18));
    if (param_2 < (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18))
    {
      return this + (ulong)(ushort)(*(ushort *)paVar9 << 8 | *(ushort *)paVar9 >> 8) +
                    (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18) + (ulong)param_2 * 4 + 4;
    }
    break;
  default:
    return (ankr *)&_hb_NullPool;
  }
  return (ankr *)&_hb_NullPool;
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
      goto LAB_00103e9a;
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
LAB_00103e9a:
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
                0 < iVar5)))) goto LAB_00103f00;
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
LAB_00103f00:
      pIVar7 = pIVar7 + 4;
    } while (this + (ulong)(uVar2 - 1) * 4 + 0x10 != pIVar7);
  }
  return 1;
}



/* OT::AttachList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::AttachList::sanitize(AttachList *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  AttachList *pAVar2;
  AttachList *pAVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if ((AttachList *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(ushort *)this;
  if (uVar4 != 0) {
    pAVar3 = this + (ushort)(uVar4 << 8 | uVar4 >> 8);
    if (pAVar3 + (2 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pAVar3 == 0x100) {
        if (pAVar3 + (4 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18))
        {
          lVar7 = *(long *)(param_1 + 8);
          pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pAVar3 + (4 - lVar7) <= pAVar2) {
            uVar6 = (uint)(ushort)(*(ushort *)(pAVar3 + 2) << 8 | *(ushort *)(pAVar3 + 2) >> 8);
LAB_0010427e:
            if ((uVar6 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pAVar3 + 4))) &&
               (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5,
               0 < iVar5)) goto LAB_00104111;
          }
        }
      }
      else {
        if (*(short *)pAVar3 != 0x200) goto LAB_0010410a;
        if (pAVar3 + (4 - *(long *)(param_1 + 8)) <= (AttachList *)(ulong)*(uint *)(param_1 + 0x18))
        {
          lVar7 = *(long *)(param_1 + 8);
          pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pAVar3 + (4 - lVar7) <= pAVar2) {
            uVar4 = *(ushort *)(pAVar3 + 2) << 8 | *(ushort *)(pAVar3 + 2) >> 8;
            uVar6 = (uint)uVar4 + (uint)uVar4 * 2;
            goto LAB_0010427e;
          }
        }
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)this = 0;
  }
LAB_0010410a:
  lVar7 = *(long *)(param_1 + 8);
  pAVar2 = (AttachList *)(ulong)*(uint *)(param_1 + 0x18);
LAB_00104111:
  pAVar3 = this + 4;
  if ((((pAVar2 < pAVar3 + -lVar7) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar3 - *(long *)(param_1 + 8)))) ||
      (uVar6 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pAVar3) < uVar6 * 2)) ||
     (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)) {
    return 0;
  }
  uVar4 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar4 != 0) {
    pAVar3 = this + 6;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar3 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(ushort *)(pAVar3 + -2);
      if (uVar1 != 0) {
        pAVar2 = this + (ushort)(uVar1 << 8 | uVar1 >> 8) + 2;
        if ((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar2 - *(long *)(param_1 + 8))) ||
            (uVar1 = *(ushort *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),
            (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pAVar2 - *(long *)(param_1 + 8)))) ||
           ((uVar6 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8),
            (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pAVar2) < uVar6 * 2 ||
            (iVar5 = *(int *)(param_1 + 0x1c) + uVar6 * -2, *(int *)(param_1 + 0x1c) = iVar5,
            iVar5 < 1)))) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined2 *)(pAVar3 + -2) = 0;
        }
      }
      pAVar3 = pAVar3 + 2;
    } while (this + (ulong)(uVar4 - 1) * 2 + 8 != pAVar3);
  }
  return 1;
}



/* OT::LigGlyph::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::LigGlyph::sanitize(LigGlyph *this,hb_sanitize_context_t *param_1)

{
  short sVar1;
  LigGlyph *pLVar2;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  LigGlyph *pLVar8;
  LigGlyph *pLVar9;
  uint uVar10;
  LigGlyph *pLVar3;
  
  pLVar2 = this + 2;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8)))) ||
      (uVar7 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar2) < uVar7 * 2)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
    return 0;
  }
  uVar4 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar4 != 0) {
    pLVar2 = this + 4;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar5 = *(ushort *)(pLVar2 + -2);
      if (uVar5 != 0) goto LAB_001043e9;
      pLVar2 = pLVar2 + 2;
    } while (this + (ulong)(uVar4 - 1) * 2 + 6 != pLVar2);
  }
  return 1;
LAB_001043e9:
  pLVar8 = this + (ushort)(uVar5 << 8 | uVar5 >> 8);
  pLVar3 = pLVar2;
  if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (2 - *(long *)(param_1 + 8))) {
LAB_00104468:
    uVar7 = *(uint *)(param_1 + 0x2c);
LAB_0010446b:
    if (0x1f < uVar7) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar7 + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(ushort *)(pLVar2 + -2) = 0;
  }
  else {
    sVar1 = *(short *)pLVar8;
    if (sVar1 != 0x200) {
      if (sVar1 != 0x300) {
        if (sVar1 != 0x100) goto LAB_00104420;
        goto LAB_00104458;
      }
      if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (6 - *(long *)(param_1 + 8)))
      goto LAB_00104468;
      uVar5 = *(ushort *)(pLVar8 + 4);
      if (uVar5 == 0) goto LAB_00104420;
      pLVar9 = pLVar8 + (ushort)(uVar5 << 8 | uVar5 >> 8);
      if (pLVar9 + (6 - *(long *)(param_1 + 8)) <= (LigGlyph *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar5 = *(ushort *)(pLVar9 + 4);
        if ((ushort)((uVar5 << 8 | uVar5 >> 8) - 1) < 3) {
          uVar7 = (uint)(ushort)(*(ushort *)(pLVar9 + 2) << 8 | *(ushort *)(pLVar9 + 2) >> 8);
          uVar10 = (uint)(ushort)(*(ushort *)pLVar9 << 8 | *(ushort *)pLVar9 >> 8);
          if (uVar7 < uVar10) {
            uVar7 = 6;
          }
          else {
            uVar7 = (uVar7 - uVar10 >> (4U - (char)(uVar5 >> 8) & 0x1f)) * 2 + 8;
          }
          if ((((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar9 + -*(long *)(param_1 + 8)) ||
              ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar9) < uVar7)) ||
             (iVar6 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar6 - uVar7,
             (int)(iVar6 - uVar7) < 1)) goto LAB_00104550;
        }
        goto LAB_00104420;
      }
LAB_00104550:
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      uVar7 = *(uint *)(param_1 + 0x2c) + 1;
      *(uint *)(param_1 + 0x2c) = uVar7;
      if (param_1[0x28] != (hb_sanitize_context_t)0x0) {
        *(short *)(pLVar8 + 4) = 0;
        goto LAB_00104420;
      }
      goto LAB_0010446b;
    }
LAB_00104458:
    if ((LigGlyph *)(ulong)*(uint *)(param_1 + 0x18) < pLVar8 + (4 - *(long *)(param_1 + 8)))
    goto LAB_00104468;
  }
LAB_00104420:
  do {
    pLVar2 = pLVar3 + 2;
    if (this + (ulong)(uVar4 - 1) * 2 + 6 == pLVar2) {
      return 1;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar5 = *(ushort *)pLVar3;
    pLVar3 = pLVar2;
  } while (uVar5 == 0);
  goto LAB_001043e9;
}



/* OT::LigCaretList::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::LigCaretList::sanitize(LigCaretList *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  LigCaretList *pLVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  LigCaretList *pLVar8;
  
  if ((LigCaretList *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar3 = *(ushort *)this;
  if (uVar3 != 0) {
    pLVar8 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
    if (pLVar8 + (2 - *(long *)(param_1 + 8)) <= (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pLVar8 == 0x100) {
        if (pLVar8 + (4 - *(long *)(param_1 + 8)) <=
            (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar5 = *(long *)(param_1 + 8);
          pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pLVar8 + (4 - lVar5) <= pLVar4) {
            uVar7 = (uint)(ushort)(*(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8);
LAB_00104726:
            if ((uVar7 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pLVar8 + 4))) &&
               (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6,
               0 < iVar6)) goto LAB_001045db;
          }
        }
      }
      else {
        if (*(short *)pLVar8 != 0x200) goto LAB_001045d4;
        if (pLVar8 + (4 - *(long *)(param_1 + 8)) <=
            (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar5 = *(long *)(param_1 + 8);
          pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
          if (pLVar8 + (4 - lVar5) <= pLVar4) {
            uVar3 = *(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8;
            uVar7 = (uint)uVar3 + (uint)uVar3 * 2;
            goto LAB_00104726;
          }
        }
      }
    }
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)this = 0;
  }
LAB_001045d4:
  lVar5 = *(long *)(param_1 + 8);
  pLVar4 = (LigCaretList *)(ulong)*(uint *)(param_1 + 0x18);
LAB_001045db:
  pLVar8 = this + 4;
  if ((((pLVar4 < pLVar8 + -lVar5) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar8 - *(long *)(param_1 + 8)))) ||
      (uVar7 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar8) < uVar7 * 2)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar7 * -2, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar3 != 0) {
    pLVar8 = this + 6;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar8 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar1 = *(ushort *)(pLVar8 + -2);
      if ((uVar1 != 0) &&
         (cVar2 = LigGlyph::sanitize((LigGlyph *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1)
         , cVar2 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined2 *)(pLVar8 + -2) = 0;
      }
      pLVar8 = pLVar8 + 2;
    } while (this + (ulong)(uVar3 - 1) * 2 + 8 != pLVar8);
  }
  return 1;
}



/* OT::MarkGlyphSets::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MarkGlyphSets::sanitize(MarkGlyphSets *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  MarkGlyphSets *pMVar5;
  MarkGlyphSets *pMVar6;
  
  if ((MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this == 0x100) {
    pMVar6 = this + 4;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar4 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar6) < uVar4 * 4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x1c) + uVar4 * -4;
    *(int *)(param_1 + 0x1c) = iVar3;
    if (iVar3 < 1) {
      return 0;
    }
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar1 != 0) {
      pMVar6 = this + 8;
      do {
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar4 = *(uint *)(pMVar6 + -4);
        if (uVar4 != 0) {
          pMVar5 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
          if (pMVar5 + (2 - *(long *)(param_1 + 8)) <=
              (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) {
            if (*(short *)pMVar5 == 0x100) {
              if ((pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                   (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) &&
                 (pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                  (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18))) {
                uVar4 = (uint)(ushort)(*(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8);
LAB_001048f2:
                if ((uVar4 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar5 + 4)))
                   && (iVar3 = *(int *)(param_1 + 0x1c) + uVar4 * -2,
                      *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) goto LAB_00104870;
              }
            }
            else {
              if (*(short *)pMVar5 != 0x200) goto LAB_00104870;
              if ((pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                   (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18)) &&
                 (pMVar5 + (4 - *(long *)(param_1 + 8)) <=
                  (MarkGlyphSets *)(ulong)*(uint *)(param_1 + 0x18))) {
                uVar2 = *(ushort *)(pMVar5 + 2) << 8 | *(ushort *)(pMVar5 + 2) >> 8;
                uVar4 = (uint)uVar2 + (uint)uVar2 * 2;
                goto LAB_001048f2;
              }
            }
          }
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined4 *)(pMVar6 + -4) = 0;
        }
LAB_00104870:
        pMVar6 = pMVar6 + 4;
      } while (this + (ulong)(uVar1 - 1) * 4 + 0xc != pMVar6);
    }
  }
  return 1;
}



/* OT::GDEF::get_glyph_props(unsigned int) const */

uint __thiscall OT::GDEF::get_glyph_props(GDEF *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  GDEF *pGVar3;
  int iVar4;
  int iVar5;
  GDEF *pGVar6;
  
  pGVar6 = (GDEF *)&_hb_NullPool;
  if ((*(short *)this == 0x100) && (uVar1 = *(ushort *)(this + 4), uVar1 != 0)) {
    pGVar6 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
  }
  if (*(short *)pGVar6 == 0x100) {
    pGVar3 = (GDEF *)&_hb_NullPool;
    uVar2 = param_1 - (ushort)(*(ushort *)(pGVar6 + 2) << 8 | *(ushort *)(pGVar6 + 2) >> 8);
    if (uVar2 < (ushort)(*(ushort *)(pGVar6 + 4) << 8 | *(ushort *)(pGVar6 + 4) >> 8)) {
      pGVar3 = pGVar6 + (ulong)uVar2 * 2 + 6;
    }
    uVar1 = *(ushort *)pGVar3 << 8 | *(ushort *)pGVar3 >> 8;
  }
  else {
    if (*(short *)pGVar6 != 0x200) {
      return 0;
    }
    pGVar3 = (GDEF *)&_hb_Null_OT_RangeRecord;
    uVar1 = *(ushort *)(pGVar6 + 2) << 8 | *(ushort *)(pGVar6 + 2) >> 8;
    iVar5 = uVar1 - 1;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        while( true ) {
          uVar2 = (uint)(iVar4 + iVar5) >> 1;
          pGVar3 = pGVar6 + (ulong)uVar2 * 6 + 4;
          if (param_1 < (ushort)(*(ushort *)pGVar3 << 8 | *(ushort *)pGVar3 >> 8)) break;
          if (param_1 <= (ushort)(*(ushort *)(pGVar3 + 2) << 8 | *(ushort *)(pGVar3 + 2) >> 8))
          goto LAB_00104a25;
          iVar4 = uVar2 + 1;
          if (iVar5 < iVar4) goto LAB_00104a1e;
        }
        iVar5 = uVar2 - 1;
      } while (iVar4 <= iVar5);
LAB_00104a1e:
      pGVar3 = (GDEF *)&_hb_Null_OT_RangeRecord;
    }
LAB_00104a25:
    uVar1 = *(ushort *)(pGVar3 + 4) << 8 | *(ushort *)(pGVar3 + 4) >> 8;
  }
  uVar2 = 4;
  if (uVar1 != 2) {
    if (uVar1 == 3) {
      pGVar6 = (GDEF *)&_hb_NullPool;
      if ((*(short *)this == 0x100) && (uVar1 = *(ushort *)(this + 10), uVar1 != 0)) {
        pGVar6 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
      }
      if (*(short *)pGVar6 == 0x100) {
        pGVar3 = (GDEF *)&_hb_NullPool;
        uVar2 = param_1 - (ushort)(*(ushort *)(pGVar6 + 2) << 8 | *(ushort *)(pGVar6 + 2) >> 8);
        if (uVar2 < (ushort)(*(ushort *)(pGVar6 + 4) << 8 | *(ushort *)(pGVar6 + 4) >> 8)) {
          pGVar3 = pGVar6 + (ulong)uVar2 * 2 + 6;
        }
        return (uint)(ushort)(*(ushort *)pGVar3 << 8 | *(ushort *)pGVar3 >> 8) << 8 | 8;
      }
      if (*(short *)pGVar6 != 0x200) {
        return 8;
      }
      pGVar3 = (GDEF *)&_hb_Null_OT_RangeRecord;
      uVar1 = *(ushort *)(pGVar6 + 2) << 8 | *(ushort *)(pGVar6 + 2) >> 8;
      iVar5 = uVar1 - 1;
      if (uVar1 != 0) {
        iVar4 = 0;
        do {
          uVar2 = (uint)(iVar4 + iVar5) >> 1;
          pGVar3 = pGVar6 + (ulong)uVar2 * 6 + 4;
          if (param_1 < (ushort)(*(ushort *)pGVar3 << 8 | *(ushort *)pGVar3 >> 8)) {
            iVar5 = uVar2 - 1;
          }
          else {
            if (param_1 <= (ushort)(*(ushort *)(pGVar3 + 2) << 8 | *(ushort *)(pGVar3 + 2) >> 8))
            goto LAB_00104baf;
            iVar4 = uVar2 + 1;
          }
        } while (iVar4 <= iVar5);
        pGVar3 = (GDEF *)&_hb_Null_OT_RangeRecord;
      }
LAB_00104baf:
      return (uint)(ushort)(*(ushort *)(pGVar3 + 4) << 8 | *(ushort *)(pGVar3 + 4) >> 8) << 8 | 8;
    }
    uVar2 = 2;
    if (uVar1 != 1) {
      return 0;
    }
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::TrackData::get_tracking(void const*, float) const */

int __thiscall AAT::TrackData::get_tracking(TrackData *this,void *param_1,float param_2)

{
  ushort uVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  TrackData *pTVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  ushort *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar1 != 0) {
    pTVar5 = this + 8;
    do {
      uVar10 = *(uint *)pTVar5;
      if (((float)(int)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18) + 0.0) * _LC4 == 0.0) {
        uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
        if (uVar1 == 0) {
          return 0;
        }
        puVar9 = (ushort *)
                 ((ulong)(ushort)(*(ushort *)(pTVar5 + 6) << 8 | *(ushort *)(pTVar5 + 6) >> 8) +
                 (long)param_1);
        uVar10 = (uint)uVar1;
        if (uVar10 == 1) {
          return (int)(short)(*puVar9 << 8 | *puVar9 >> 8);
        }
        uVar4 = *(uint *)(this + 4);
        uVar6 = 0;
        puVar8 = (uint *)((ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18) + (long)param_1);
        puVar2 = puVar8;
        goto LAB_00104c8f;
      }
      pTVar5 = pTVar5 + 8;
    } while (this + (ulong)(uVar1 - 1) * 8 + 0x10 != pTVar5);
  }
  return 0;
  while( true ) {
    uVar4 = uVar7 + 1;
    uVar6 = (ulong)uVar4;
    puVar2 = puVar2 + 1;
    uVar7 = uVar1 - 1;
    if (uVar4 == uVar1 - 1) break;
LAB_00104c8f:
    uVar4 = *puVar2;
    uVar7 = (uint)uVar6;
    fVar13 = _LC2;
    if (param_2 <=
        ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18) + 0.0) * _LC4) {
      if (uVar7 == 0) {
        uVar4 = *puVar8;
        uVar7 = 1;
        fVar12 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 0.0) * _LC4;
        goto LAB_00104cc9;
      }
      break;
    }
  }
  uVar4 = uVar7 - 1;
  uVar6 = (ulong)uVar4;
  puVar2 = (uint *)&_hb_NullPool;
  if (uVar4 < uVar10) {
    puVar2 = puVar8 + uVar4;
  }
  uVar4 = *puVar2;
  fVar12 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18) + 0.0) * _LC4;
  if (uVar7 < uVar1) {
LAB_00104cc9:
    uVar3 = (ulong)uVar7;
    uVar4 = puVar8[uVar3];
    fVar11 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18) + 0.0) * _LC4;
    if (fVar11 != fVar12) goto LAB_00104cef;
    fVar12 = 0.0;
LAB_00104d15:
    fVar12 = fVar12 * (float)(int)(short)(puVar9[uVar3] << 8 | puVar9[uVar3] >> 8);
  }
  else {
    fVar11 = ((float)(int)(__hb_NullPool >> 0x18 | (__hb_NullPool & 0xff0000) >> 8 |
                           (__hb_NullPool & 0xff00) << 8 | __hb_NullPool << 0x18) + 0.0) * _LC4;
    if (fVar12 == fVar11) {
      fVar12 = 0.0;
    }
    else {
LAB_00104cef:
      fVar12 = (param_2 - fVar12) / (fVar11 - fVar12);
      fVar13 = _LC2 - fVar12;
      if (uVar7 < uVar1) {
        uVar3 = (ulong)uVar7;
        goto LAB_00104d15;
      }
    }
    fVar11 = (float)(int)(short)((ushort)__hb_NullPool << 8 | (ushort)__hb_NullPool >> 8);
    fVar12 = fVar12 * fVar11;
    if (uVar10 <= (uint)uVar6) goto LAB_00104d3d;
  }
  fVar11 = (float)(int)(short)(puVar9[uVar6] << 8 | puVar9[uVar6] >> 8);
LAB_00104d3d:
  fVar13 = fVar13 * fVar11 + fVar12 + _LC5;
  if ((float)((uint)fVar13 & _LC8) < _LC6) {
    fVar13 = (float)((uint)((float)(int)fVar13 -
                           (float)(-(uint)(fVar13 < (float)(int)fVar13) & (uint)_LC2)) |
                    ~_LC8 & (uint)fVar13);
  }
  return (int)fVar13;
}



/* AAT::TrackData::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall
AAT::TrackData::sanitize(TrackData *this,hb_sanitize_context_t *param_1,void *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  TrackData *pTVar5;
  ulong uVar6;
  uint uVar7;
  
  pTVar5 = this + 8;
  if (((ulong)((long)pTVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
     ((ulong)((long)pTVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar7 = *(uint *)(this + 4);
    lVar2 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18)
            + (long)param_2;
    if ((ulong)(lVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar7 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
      if (uVar7 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)lVar2)) {
        iVar4 = *(int *)(param_1 + 0x1c) + uVar7 * -4;
        *(int *)(param_1 + 0x1c) = iVar4;
        if ((0 < iVar4) &&
           ((ulong)((long)pTVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
          uVar1 = *(ushort *)this << 8 | *(ushort *)this >> 8;
          if (((uint)uVar1 * 8 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pTVar5)) &&
             (iVar4 = iVar4 + (uint)uVar1 * -8, *(int *)(param_1 + 0x1c) = iVar4, 0 < iVar4)) {
            if (uVar1 != 0) {
              lVar2 = *(long *)(param_1 + 8);
              uVar6 = (ulong)*(uint *)(param_1 + 0x18);
              pTVar5 = this + 0x10;
              do {
                if (uVar6 < (ulong)((long)pTVar5 - lVar2)) {
                  return 0;
                }
                lVar2 = *(long *)(param_1 + 8);
                uVar6 = (ulong)*(uint *)(param_1 + 0x18);
                lVar3 = (ulong)(ushort)(*(ushort *)(pTVar5 + -2) << 8 |
                                       *(ushort *)(pTVar5 + -2) >> 8) + (long)param_2;
                if (uVar6 < (ulong)(lVar3 - lVar2)) {
                  return 0;
                }
                uVar7 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
                if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)lVar3) < uVar7 * 2) {
                  return 0;
                }
                iVar4 = *(int *)(param_1 + 0x1c) + uVar7 * -2;
                *(int *)(param_1 + 0x1c) = iVar4;
                if (iVar4 < 1) {
                  return 0;
                }
                pTVar5 = pTVar5 + 8;
              } while (this + (ulong)(uVar1 - 1) * 8 + 0x18 != pTVar5);
            }
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}



/* AAT::trak::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall AAT::trak::sanitize(trak *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  char cVar2;
  
  if ((trak *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xc - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((*(short *)this == 0x100) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (trak *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar1 = *(ushort *)(this + 6);
    if ((uVar1 != 0) &&
       (cVar2 = TrackData::sanitize((TrackData *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1,
                                    this), cVar2 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 6) = 0;
    }
    if (this + (10 - *(long *)(param_1 + 8)) <= (trak *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(ushort *)(this + 8);
      if ((uVar1 != 0) &&
         (cVar2 = TrackData::sanitize((TrackData *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),
                                      param_1,this), cVar2 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined2 *)(this + 8) = 0;
      }
      return 1;
    }
  }
  return 0;
}



/* OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
          (GDEFVersion1_2<OT::Layout::SmallTypes> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar4;
  long lVar5;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar6;
  int iVar7;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar8;
  
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4);
  if (uVar2 == 0) {
LAB_00105120:
    lVar5 = *(long *)(param_1 + 8);
    pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
  }
  else {
    pGVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        pGVar4 + (2 - *(long *)(param_1 + 8))) {
LAB_00105268:
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 4) = 0;
      goto LAB_00105120;
    }
    if (*(short *)pGVar4 != 0x100) {
      if (*(short *)pGVar4 != 0x200) goto LAB_00105120;
      pGVar8 = pGVar4 + 4;
      if ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        lVar5 = *(long *)(param_1 + 8);
        pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
        if (pGVar8 + -lVar5 <= pGVar6) {
          uVar2 = *(ushort *)(pGVar4 + 2) << 8 | *(ushort *)(pGVar4 + 2) >> 8;
          uVar3 = (uint)uVar2 + (uint)uVar2 * 2;
          goto LAB_00105246;
        }
      }
      goto LAB_00105268;
    }
    pGVar8 = pGVar4 + 6;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pGVar8 - *(long *)(param_1 + 8)))
    goto LAB_00105268;
    lVar5 = *(long *)(param_1 + 8);
    pGVar6 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18);
    if (pGVar6 < pGVar8 + -lVar5) goto LAB_00105268;
    uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 4) << 8 | *(ushort *)(pGVar4 + 4) >> 8);
LAB_00105246:
    if (((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8) < uVar3 * 2) ||
       (iVar7 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1))
    goto LAB_00105268;
  }
  if (pGVar6 < this + (8 - lVar5)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6);
  if ((uVar2 != 0) &&
     (cVar1 = AttachList::sanitize((AttachList *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1)
     , cVar1 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 6) = 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (10 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 8);
  if ((uVar2 != 0) &&
     (cVar1 = LigCaretList::sanitize
                        ((LigCaretList *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1),
     cVar1 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 8) = 0;
  }
  if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (0xc - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 10);
  if (uVar2 == 0) goto LAB_00105186;
  pGVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if (pGVar4 + (2 - *(long *)(param_1 + 8)) <=
      (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*(short *)pGVar4 == 0x100) {
      pGVar8 = pGVar4 + 6;
      if ((((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 4) << 8 | *(ushort *)(pGVar4 + 4) >> 8) * 2,
         uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8))) {
LAB_00105529:
        iVar7 = *(int *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c) = iVar7 - uVar3;
        if (0 < (int)(iVar7 - uVar3)) goto LAB_00105186;
      }
    }
    else {
      if (*(short *)pGVar4 != 0x200) goto LAB_00105186;
      pGVar8 = pGVar4 + 4;
      if ((((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pGVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar3 = (uint)(ushort)(*(ushort *)(pGVar4 + 2) << 8 | *(ushort *)(pGVar4 + 2) >> 8) * 6,
         uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pGVar8))) goto LAB_00105529;
    }
  }
  if (0x1f < *(uint *)(param_1 + 0x2c)) {
    return 0;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
  if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
    return 0;
  }
  *(undefined2 *)(this + 10) = 0;
LAB_00105186:
  if (0x10001 < (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) * 0x10000 +
                (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xe - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 0xc);
    if ((uVar2 != 0) &&
       (cVar1 = MarkGlyphSets::sanitize
                          ((MarkGlyphSets *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1),
       cVar1 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 0xc) = 0;
    }
  }
  if (0x10002 < (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) * 0x10000 +
                (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x12 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0xe);
    if ((uVar3 != 0) &&
       (cVar1 = ItemVariationStore::sanitize
                          ((ItemVariationStore *)
                           (this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                   | uVar3 << 0x18)),param_1), cVar1 == '\0')) {
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined4 *)(this + 0xe) = 0;
    }
  }
  return 1;
}



/* AAT::StateTable<AAT::ObsoleteTypes, void>::sanitize(hb_sanitize_context_t*, unsigned int*) const
    */

undefined1  [16] __thiscall
AAT::StateTable<AAT::ObsoleteTypes,void>::sanitize
          (StateTable<AAT::ObsoleteTypes,void> *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  StateTable<AAT::ObsoleteTypes,void> *pSVar12;
  ulong uVar13;
  ulong uVar14;
  StateTable<AAT::ObsoleteTypes,void> *pSVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  StateTable<AAT::ObsoleteTypes,void> *pSVar21;
  uint uVar22;
  StateTable<AAT::ObsoleteTypes,void> *pSVar23;
  StateTable<AAT::ObsoleteTypes,void> *pSVar24;
  undefined1 auVar25 [16];
  
  pSVar12 = this + (8 - *(long *)(param_1 + 8));
  if (((this + (8 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8,
      pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar8, 3 < uVar8)) &&
     (pSVar12 = this + (4 - *(long *)(param_1 + 8)),
     this + (4 - *(long *)(param_1 + 8)) <=
     (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18))) {
    pSVar12 = this + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    pSVar15 = pSVar12 + 4;
    if ((ulong)((long)pSVar15 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      lVar2 = *(long *)(param_1 + 8);
      pSVar24 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
      uVar8 = *(ushort *)(pSVar12 + 2);
      pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar8;
      if (pSVar15 + -lVar2 <= pSVar24) {
        lVar3 = *(long *)(param_1 + 0x10);
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar8;
        if (((uint)uVar8 <= (uint)((int)lVar3 - (int)pSVar15)) &&
           (iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar8, *(int *)(param_1 + 0x1c) = iVar6,
           0 < iVar6)) {
          uVar7 = 0;
          uVar22 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar20 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
          uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8;
          pSVar15 = this + (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
          pSVar21 = this + uVar20;
          uVar18 = (ulong)uVar8;
          uVar17 = (uint)uVar8;
          uVar11 = 0;
LAB_0010578f:
          uVar19 = uVar13;
          if ((int)uVar11 <= (int)uVar16) {
            while( true ) {
              uVar1 = uVar16 + 1;
              uVar4 = uVar1 * uVar18;
              uVar9 = (uint)(uVar4 >> 0x20);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
              if (((uVar9 != 0) || (pSVar12 = pSVar21 + -lVar2, pSVar24 < pSVar12)) ||
                 (pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(lVar3 - (long)pSVar21),
                 (uint)pSVar12 < (uint)uVar4)) goto LAB_001055c8;
              pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(uVar4 & 0xffffffff);
              iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar4;
              if (iVar6 < 1) break;
              uVar9 = iVar6 - ((uVar16 - uVar11) + 1);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
              *(uint *)(param_1 + 0x1c) = uVar9;
              if (((int)uVar9 < 1) || (CARRY8(uVar4 & 0xffffffff,(ulong)pSVar21)))
              goto LAB_001055c8;
              pSVar12 = pSVar21 + uVar11 * uVar17;
              uVar14 = uVar13;
              if (pSVar12 < pSVar21 + (uVar4 & 0xffffffff)) {
                do {
                  if ((uint)uVar19 < (byte)*pSVar12 + 1) {
                    uVar19 = (ulong)((byte)*pSVar12 + 1);
                  }
                  pSVar12 = pSVar12 + 1;
                } while (pSVar21 + (uVar4 & 0xffffffff) != pSVar12);
              }
              do {
                uVar13 = uVar19;
                iVar6 = (int)uVar13;
                pSVar12 = pSVar15 + -lVar2;
                if ((pSVar24 < pSVar15 + -lVar2) ||
                   (pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(lVar3 - (long)pSVar15),
                   (uint)pSVar12 < (uint)(iVar6 * 4))) goto LAB_001055c8;
                uVar11 = *(int *)(param_1 + 0x1c) + iVar6 * -4;
                pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar11;
                if ((int)uVar11 < 1) {
                  *(uint *)(param_1 + 0x1c) = uVar11;
                  goto LAB_001055c8;
                }
                iVar6 = ((int)uVar14 - iVar6) + uVar11;
                *(int *)(param_1 + 0x1c) = iVar6;
                if (iVar6 < 1) goto LAB_001055c8;
                for (pSVar23 = pSVar15 + uVar14 * 4; pSVar23 < pSVar15 + uVar13 * 4;
                    pSVar23 = pSVar23 + 4) {
                  iVar6 = (uint)(ushort)(*(ushort *)pSVar23 << 8 | *(ushort *)pSVar23 >> 8) -
                          (uint)uVar20;
                  uVar11 = iVar6 / (int)uVar17;
                  pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)
                            ((long)iVar6 % (long)(int)uVar17 & 0xffffffff);
                  if ((int)uVar11 < (int)uVar7) {
                    uVar7 = uVar11;
                  }
                  if ((int)uVar16 < (int)uVar11) {
                    uVar16 = uVar11;
                  }
                }
                uVar11 = uVar1;
                if ((int)uVar22 <= (int)uVar7) goto LAB_0010578f;
                uVar9 = (uint)(uVar7 * uVar18 >> 0x20);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
                if (uVar9 != 0) goto LAB_001055c8;
                uVar10 = (uint)(-uVar7 * uVar18 >> 0x20);
                uVar9 = (uint)(-uVar7 * uVar18);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar10;
                if (((uVar10 != 0) ||
                    (pSVar12 = pSVar21 + (uVar7 * uVar18 & 0xffffffff), pSVar24 < pSVar12 + -lVar2))
                   || ((uint)((int)lVar3 - (int)pSVar12) < uVar9)) goto LAB_001055c8;
                iVar6 = *(int *)(param_1 + 0x1c) - uVar9;
                if (iVar6 < 1) {
                  *(int *)(param_1 + 0x1c) = iVar6;
                  goto LAB_001055c8;
                }
                iVar6 = iVar6 - (uVar22 - uVar7);
                *(int *)(param_1 + 0x1c) = iVar6;
                if ((iVar6 < 1) || (pSVar21 < pSVar12)) goto LAB_001055c8;
                uVar19 = uVar13;
                pSVar23 = pSVar21;
                if (pSVar12 < pSVar21) {
                  do {
                    if ((uint)uVar19 < (byte)pSVar23[-1] + 1) {
                      uVar19 = (ulong)((byte)pSVar23[-1] + 1);
                    }
                    pSVar23 = pSVar23 + -1;
                  } while (pSVar12 != pSVar23);
                }
                uVar14 = uVar13;
                uVar22 = uVar7;
              } while ((int)uVar16 < (int)uVar1);
            }
            *(int *)(param_1 + 0x1c) = iVar6;
            goto LAB_001055c8;
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)uVar13;
          }
          uVar5 = 1;
          goto LAB_001055ca;
        }
      }
    }
  }
LAB_001055c8:
  uVar5 = 0;
LAB_001055ca:
  auVar25._8_8_ = pSVar12;
  auVar25._0_8_ = uVar5;
  return auVar25;
}



/* AAT::LookupFormat4<OT::IntType<unsigned short, 2u> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
AAT::LookupFormat4<OT::IntType<unsigned_short,2u>>::sanitize
          (LookupFormat4<OT::IntType<unsigned_short,2u>> *this,hb_sanitize_context_t *param_1)

{
  LookupFormat4<OT::IntType<unsigned_short,2u>> *pLVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  LookupFormat4<OT::IntType<unsigned_short,2u>> *pLVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar2 < 6)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar3 = (uint)uVar2 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar3 ||
      (iVar7 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar3 = (uint)uVar2;
  if ((uVar3 == 0) ||
     ((uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                      (uVar2 - 1)), *(short *)(this + uVar4 + 0xc) == -1 &&
      (uVar3 = uVar3 - (*(short *)(this + uVar4 + 0xe) == -1), uVar3 == 0)))) {
    return 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar8 = (uint)uVar2;
    pLVar5 = (LookupFormat4<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
    if (uVar8 != 0) {
      uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                     (uVar8 - 1));
      if (*(short *)(pLVar1 + uVar4) == -1) {
        uVar8 = uVar8 - (*(short *)(this + uVar4 + 0xe) == -1);
      }
      pLVar5 = (LookupFormat4<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
      if (uVar6 < uVar8) {
        pLVar5 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * uVar6;
      }
    }
    if ((LookupFormat4<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar8 = (uint)(ushort)(*(ushort *)pLVar5 << 8 | *(ushort *)pLVar5 >> 8);
    uVar9 = (uint)(ushort)(*(ushort *)(pLVar5 + 2) << 8 | *(ushort *)(pLVar5 + 2) >> 8);
    if (uVar8 < uVar9) {
      return 0;
    }
    iVar7 = (uVar8 + 1) - uVar9;
    if ((LookupFormat4<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (iVar7 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) <
        (ulong)((long)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))
               - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
              (int)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))) <
        (uint)(iVar7 * 2)) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x1c) + iVar7 * -2;
    *(int *)(param_1 + 0x1c) = iVar7;
    if (iVar7 < 1) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == uVar3) {
      return 1;
    }
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 0;
}



/* AAT::Lookup<OT::IntType<unsigned short, 2u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
AAT::Lookup<OT::IntType<unsigned_short,2u>>::sanitize
          (Lookup<OT::IntType<unsigned_short,2u>> *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar6;
  
  pLVar6 = this + 2;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6) < (uint)(iVar4 * 2)) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x1c) + iVar4 * -2;
    *(int *)(param_1 + 0x1c) = iVar4;
    return (ulong)CONCAT31((int3)((uint)iVar4 >> 8),0 < iVar4);
  default:
    return 1;
  case 2:
    if ((Lookup<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 < 6) {
      return 0;
    }
    break;
  case 4:
    uVar5 = LookupFormat4<OT::IntType<unsigned_short,2u>>::sanitize
                      ((LookupFormat4<OT::IntType<unsigned_short,2u>> *)this,param_1);
    return uVar5;
  case 6:
    if ((Lookup<OT::IntType<unsigned_short,2u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 < 4) {
      return 0;
    }
    break;
  case 8:
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 6) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) * 2;
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this + 6)) < uVar3) {
      return 0;
    }
    goto LAB_00105be3;
  case 10:
    pLVar6 = this + 8;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (4 < uVar1) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    goto LAB_00105aff;
  }
  pLVar6 = this + 0xc;
  if ((ulong)((long)pLVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
LAB_00105aff:
    uVar3 = (uint)uVar2 * (uint)uVar1;
    if (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6)) {
LAB_00105be3:
      iVar4 = *(int *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x1c) = iVar4 - uVar3;
      return (ulong)CONCAT31((int3)(uVar3 >> 8),0 < (int)(iVar4 - uVar3));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   OT::MarkGlyphSetsFormat1::collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned
   long, 4u>, hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >, false>&) const */

void __thiscall
OT::MarkGlyphSetsFormat1::
collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (MarkGlyphSetsFormat1 *this,hb_vector_t *param_1)

{
  MarkGlyphSetsFormat1 *pMVar1;
  MarkGlyphSetsFormat1 *pMVar2;
  MarkGlyphSetsFormat1 MVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined1 (*pauVar11) [16];
  void *pvVar12;
  ulong *puVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  byte bVar17;
  short sVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  MarkGlyphSetsFormat1 *pMVar22;
  ushort uVar23;
  MarkGlyphSetsFormat1 *pMVar24;
  MarkGlyphSetsFormat1 *pMVar25;
  ushort uVar26;
  ulong uVar27;
  ulong uVar28;
  MarkGlyphSetsFormat1 *pMVar29;
  ulong uVar30;
  
  pMVar22 = this + 4;
  uVar28 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
  pMVar2 = pMVar22 + uVar28 * 4;
  if (uVar28 != 0) {
    do {
      while( true ) {
        uVar10 = *(uint *)pMVar22;
        pMVar29 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
        if (uVar10 != 0) {
          pMVar29 = this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                           uVar10 << 0x18);
        }
        uVar10 = *(uint *)param_1;
        uVar16 = *(uint *)(param_1 + 4);
        if (-1 < (int)uVar10) break;
LAB_00105f66:
        __hb_CrapPool = __hb_NullPool;
        _hb_face_get_glyph_count = __hb_Null_OT_RangeRecord;
        _hb_face_reference_table = ___stack_chk_fail;
        sVar18 = *(short *)pMVar29;
        puVar13 = (ulong *)&_hb_CrapPool;
        if (sVar18 == 0x100) goto LAB_00105fa3;
LAB_00105d03:
        if (sVar18 == 0x200) {
          pMVar25 = pMVar29 + 4;
          lVar5 = (ulong)(ushort)(*(ushort *)(pMVar29 + 2) << 8 | *(ushort *)(pMVar29 + 2) >> 8) * 6
          ;
          pMVar29 = pMVar25 + lVar5;
          if (lVar5 != 0) {
            do {
              uVar15 = *(ushort *)(pMVar25 + 2);
              uVar4 = *(ushort *)pMVar25;
              uVar23 = uVar15 << 8 | uVar15 >> 8;
              uVar26 = uVar4 << 8 | uVar4 >> 8;
              if (*puVar13 == 0xffffffffffffffff) {
LAB_00105e0a:
                uVar28 = puVar13[1];
                uVar30 = puVar13[2];
                bVar8 = false;
                if (uVar28 == 0xffffffffffffffff) {
                  if (uVar30 == 0xffffffffffffffff) break;
LAB_00105e3d:
                  bVar14 = 0;
LAB_00105d8d:
                  bVar17 = (byte)uVar15 >> 1;
                  bVar20 = (byte)uVar4 >> 1;
                  if ((uint)bVar17 - (uint)bVar20 < 0x3f) {
                    bVar17 = bVar17 & 0x3f;
                    uVar28 = 1L << (bVar20 & 0x3f);
                    puVar13[2] = ((2L << bVar17) - uVar28) - (ulong)((ulong)(1L << bVar17) < uVar28)
                                 | uVar30;
                    goto LAB_00105db6;
                  }
                  puVar13[2] = 0xffffffffffffffff;
                  bVar8 = (bool)(bVar8 | bVar14);
                }
                else {
LAB_00105e1f:
                  if ((uint)uVar23 - (uint)uVar26 < 0x3f) {
                    uVar27 = 1L << ((byte)(uVar4 >> 8) & 0x3f);
                    bVar17 = (byte)(uVar15 >> 8);
                    bVar14 = 1;
                    puVar13[1] = ((2L << (bVar17 & 0x3f)) - uVar27) -
                                 (ulong)((ulong)(1L << (bVar17 & 0x3f)) < uVar27) | uVar28;
                    if (uVar30 == 0xffffffffffffffff) goto LAB_00105db6;
                    goto LAB_00105d8d;
                  }
                  puVar13[1] = 0xffffffffffffffff;
                  if (uVar30 != 0xffffffffffffffff) goto LAB_00105e3d;
                }
                if (!bVar8) break;
              }
              else {
                uVar6 = uVar23 >> 4;
                uVar7 = uVar26 >> 4;
                if (0x3e < (uint)uVar6 - (uint)uVar7) {
                  *puVar13 = 0xffffffffffffffff;
                  goto LAB_00105e0a;
                }
                uVar30 = 1L << ((byte)uVar7 & 0x3f);
                uVar28 = puVar13[1];
                bVar14 = (byte)uVar6;
                bVar8 = true;
                *puVar13 = ((2L << (bVar14 & 0x3f)) - uVar30) -
                           (ulong)((ulong)(1L << (bVar14 & 0x3f)) < uVar30) | *puVar13;
                uVar30 = puVar13[2];
                if (uVar28 != 0xffffffffffffffff) goto LAB_00105e1f;
                if (uVar30 != 0xffffffffffffffff) goto LAB_00105e3d;
              }
LAB_00105db6:
              pMVar25 = pMVar25 + 6;
            } while (pMVar29 != pMVar25);
          }
        }
LAB_00105ec3:
        pMVar22 = pMVar22 + 4;
        if (pMVar2 == pMVar22) {
          return;
        }
      }
      uVar21 = uVar16 + 1;
      if ((int)uVar21 < 0) {
        uVar21 = 0;
      }
      uVar19 = uVar10;
      if (uVar10 < uVar21) {
        do {
          uVar19 = (uVar19 >> 1) + 8 + uVar19;
        } while (uVar19 < uVar21);
        if (0xaaaaaaa < uVar19) {
LAB_00105f60:
          *(uint *)param_1 = ~uVar10;
          goto LAB_00105f66;
        }
        pvVar12 = realloc(*(void **)(param_1 + 8),(ulong)uVar19 * 0x18);
        if (pvVar12 == (void *)0x0) {
          uVar10 = *(uint *)param_1;
          if (uVar10 < uVar19) goto LAB_00105f60;
          pvVar12 = *(void **)(param_1 + 8);
          uVar16 = *(uint *)(param_1 + 4);
        }
        else {
          *(void **)(param_1 + 8) = pvVar12;
          uVar16 = *(uint *)(param_1 + 4);
          *(uint *)param_1 = uVar19;
        }
      }
      else {
        pvVar12 = *(void **)(param_1 + 8);
      }
      if (uVar16 < uVar21) {
        pauVar11 = (undefined1 (*) [16])((long)pvVar12 + (ulong)uVar16 * 0x18);
        do {
          *(undefined8 *)pauVar11[1] = 0;
          pauVar9 = pauVar11 + 1;
          *pauVar11 = (undefined1  [16])0x0;
          pauVar11 = (undefined1 (*) [16])(*pauVar9 + 8);
        } while ((undefined1 (*) [16])
                 ((long)pvVar12 + ((ulong)((uVar21 - 1) - uVar16) + (ulong)uVar16) * 0x18 + 0x18) !=
                 (undefined1 (*) [16])(*pauVar9 + 8));
      }
      sVar18 = *(short *)pMVar29;
      *(uint *)(param_1 + 4) = uVar21;
      puVar13 = (ulong *)((long)pvVar12 + (ulong)(uVar21 - 1) * 0x18);
      if (sVar18 != 0x100) goto LAB_00105d03;
LAB_00105fa3:
      pMVar25 = pMVar29 + 4;
      uVar15 = *(ushort *)(pMVar29 + 2) << 8 | *(ushort *)(pMVar29 + 2) >> 8;
      if (uVar15 == 0) goto LAB_00105ec3;
      uVar28 = *puVar13;
      pMVar29 = pMVar29 + (ulong)(uVar15 + 2) * 2;
      pMVar24 = pMVar25;
      do {
        uVar15 = *(ushort *)pMVar24;
        pMVar24 = pMVar24 + 2;
        uVar28 = uVar28 | 1L << ((byte)((ushort)(uVar15 << 8 | uVar15 >> 8) >> 4) & 0x3f);
      } while (pMVar24 != pMVar29);
      *puVar13 = uVar28;
      uVar28 = puVar13[1];
      pMVar24 = pMVar25;
      do {
        pMVar1 = pMVar24 + 1;
        pMVar24 = pMVar24 + 2;
        uVar28 = uVar28 | 1L << ((byte)*pMVar1 & 0x3f);
      } while (pMVar24 != pMVar29);
      uVar30 = puVar13[2];
      puVar13[1] = uVar28;
      do {
        MVar3 = *pMVar25;
        pMVar25 = pMVar25 + 2;
        uVar30 = uVar30 | 1L << ((byte)MVar3 >> 1 & 0x3f);
      } while (pMVar25 != pMVar29);
      pMVar22 = pMVar22 + 4;
      puVar13[2] = uVar30;
    } while (pMVar2 != pMVar22);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  ushort uVar1;
  short sVar2;
  GDEFVersion1_2<OT::Layout::SmallTypes> *this_00;
  char cVar3;
  accelerator_t *paVar4;
  hb_face_t *phVar5;
  long lVar6;
  hb_face_t *phVar7;
  short *psVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  hb_blob_t *phVar12;
  MarkGlyphSetsFormat1 *this_01;
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
  undefined1 local_3c;
  undefined1 local_3b;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  puVar11 = (undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8);
  for (uVar9 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x20) & 0xfffffffffffffff8))
                       + 0x218U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (paVar4 = this + 0x18; paVar4 != this + 0x218; paVar4 = paVar4 + 2) {
    *(undefined2 *)paVar4 = 0xffff;
  }
  local_58 = 0;
  local_50 = '\0';
  local_3b = 0;
  local_40 = hb_face_get_glyph_count(param_1);
  local_3c = 1;
  phVar5 = (hb_face_t *)hb_face_reference_table(param_1,0x47444546);
  lVar6 = hb_blob_reference(phVar5);
  local_48 = lVar6;
  while( true ) {
    local_60 = *(uint *)(lVar6 + 0x18);
    this_00 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(lVar6 + 0x10);
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
    local_70._8_8_ = this_00 + local_60;
    local_70._0_8_ = this_00;
    local_4c = 0;
    local_78[0] = 0;
    local_54 = 0;
    if (this_00 == (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
      hb_blob_destroy(lVar6);
      goto LAB_001061e3;
    }
    if ((ulong)local_60 < 4) goto LAB_00106342;
    if ((*(short *)this_00 != 0x100) ||
       (cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                          (this_00,(hb_sanitize_context_t *)local_78), lVar6 = local_48,
       cVar3 != '\0')) break;
    if ((local_4c == 0) || (local_50 != '\0')) goto LAB_00106342;
    local_70._0_8_ = hb_blob_get_data_writable(phVar5,0);
    local_70._8_8_ = (ulong)*(uint *)(phVar5 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00106342;
    local_50 = '\x01';
  }
  if (local_4c == 0) {
LAB_001061d6:
    hb_blob_destroy(local_48);
  }
  else {
    local_4c = 0;
    if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)local_60 < this_00 + (4 - local_70._0_8_))
    {
      hb_blob_destroy(local_48);
      goto LAB_00106347;
    }
    if (*(short *)this_00 != 0x100) goto LAB_001061d6;
    cVar3 = GDEFVersion1_2<OT::Layout::SmallTypes>::sanitize
                      (this_00,(hb_sanitize_context_t *)local_78);
    lVar6 = local_48;
    if (local_4c != 0) {
LAB_00106342:
      hb_blob_destroy(lVar6);
LAB_00106347:
      hb_blob_destroy(phVar5);
      phVar5 = (hb_face_t *)hb_blob_get_empty();
LAB_001061e3:
      *(hb_face_t **)this = phVar5;
      phVar7 = (hb_face_t *)&_hb_NullPool;
      if (phVar5 != (hb_face_t *)0x0) {
        phVar7 = phVar5;
      }
      phVar12 = (hb_blob_t *)&_hb_NullPool;
      if (3 < *(uint *)(phVar7 + 0x18)) {
        phVar12 = *(hb_blob_t **)(phVar7 + 0x10);
      }
      cVar3 = OT::GDEF::is_blocklisted(phVar12,phVar5);
      if (cVar3 == '\0') {
        puVar10 = *(undefined **)this;
      }
      else {
        hb_blob_destroy(*(undefined8 *)this);
        puVar10 = (undefined *)hb_blob_get_empty();
        *(undefined **)this = puVar10;
      }
      if (puVar10 == (undefined *)0x0) {
        puVar10 = &_hb_NullPool;
      }
      psVar8 = (short *)&_hb_NullPool;
      if (3 < *(uint *)(puVar10 + 0x18)) {
        psVar8 = *(short **)(puVar10 + 0x10);
      }
      if (((*psVar8 == 0x100) &&
          (0x10001 < (ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) + 0x10000)) &&
         (uVar1 = psVar8[6], uVar1 != 0)) {
        this_01 = (MarkGlyphSetsFormat1 *)((long)psVar8 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
        sVar2 = *(short *)this_01;
      }
      else {
        this_01 = (MarkGlyphSetsFormat1 *)&_hb_NullPool;
        sVar2 = __hb_NullPool;
      }
      if (sVar2 == 0x100) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          MarkGlyphSetsFormat1::
          collect_coverage<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                    (this_01,(hb_vector_t *)(this + 8));
          return;
        }
      }
      else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    hb_blob_destroy(local_48);
    local_48 = 0;
    local_60 = 0;
    local_70 = (undefined1  [16])0x0;
    if (cVar3 == '\0') goto LAB_00106347;
  }
  hb_blob_make_immutable(phVar5);
  goto LAB_001061e3;
}



/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,uint param_1,hb_font_t *param_2,hb_buffer_t *param_3,
          hb_blob_t *param_4)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  short *psVar8;
  hb_face_t *phVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  undefined *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  accelerator_t *paVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  hb_ot_apply_context_t hVar22;
  
  this[0x24] = (hb_ot_apply_context_t)0x0;
  uVar10 = _LC9;
  this[100] = (hb_ot_apply_context_t)0x0;
  *(uint *)(this + 0x88) = param_1;
  *(hb_buffer_t **)(this + 0xa0) = param_3;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)this = 0;
  *(hb_font_t **)(this + 0x90) = param_2;
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = uVar10;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xd0] = (hb_ot_apply_context_t)0x0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xdc) = 0x1000000000000;
  *(undefined2 *)(this + 0xe4) = 0;
  lVar13 = hb_blob_reference();
  this[0xd0] = (hb_ot_apply_context_t)0x0;
  *(long *)(this + 0xd8) = lVar13;
  if (lVar13 != 0) {
    lVar7 = *(long *)(lVar13 + 0x10);
    uVar4 = *(uint *)(lVar13 + 0x18);
    *(long *)(this + 0xb0) = lVar7;
    uVar12 = uVar4 * 0x40;
    if (uVar4 >> 0x1a == 0) {
      if (0x3fffffff < uVar12) {
        uVar12 = 0x3fffffff;
      }
      if (uVar12 < 0x4000) {
        uVar12 = 0x4000;
      }
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(ulong *)(this + 0xb8) = lVar7 + (ulong)uVar4;
    *(uint *)(this + 0xc0) = uVar4;
    *(uint *)(this + 0xc4) = uVar12;
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xcc) = 0;
  }
  lVar13 = *(long *)(this + 0x98);
  *(undefined8 *)(this + 0xe8) = 0;
  plVar1 = (long *)(lVar13 + 0x130);
  do {
    while( true ) {
      paVar17 = (accelerator_t *)*plVar1;
      if (paVar17 != (accelerator_t *)0x0) goto LAB_001065a3;
      phVar9 = *(hb_face_t **)(lVar13 + 0x70);
      if (phVar9 == (hb_face_t *)0x0) goto LAB_001069d2;
      paVar17 = (accelerator_t *)calloc(1,0x218);
      if (paVar17 == (accelerator_t *)0x0) break;
      GDEF::accelerator_t::accelerator_t(paVar17,phVar9);
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)paVar17;
      }
      UNLOCK();
      if (lVar7 == 0) goto LAB_001065a3;
      if (paVar17 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)paVar17);
        if (*(int *)(paVar17 + 8) != 0) {
          free(*(void **)(paVar17 + 0x10));
        }
        free(paVar17);
      }
    }
    LOCK();
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar7 != 0);
LAB_001069d2:
  paVar17 = (accelerator_t *)&_hb_NullPool;
LAB_001065a3:
  puVar14 = *(undefined **)paVar17;
  if (puVar14 == (undefined *)0x0) {
    puVar14 = &_hb_NullPool;
  }
  puVar18 = &_hb_NullPool;
  if (3 < *(uint *)(puVar14 + 0x18)) {
    puVar18 = *(undefined **)(puVar14 + 0x10);
  }
  *(undefined **)(this + 0xf0) = puVar18;
  lVar13 = *(long *)(this + 0x98);
  plVar1 = (long *)(lVar13 + 0x130);
  do {
    while( true ) {
      paVar17 = (accelerator_t *)*plVar1;
      if (paVar17 != (accelerator_t *)0x0) goto LAB_001065e1;
      phVar9 = *(hb_face_t **)(lVar13 + 0x70);
      if (phVar9 == (hb_face_t *)0x0) goto LAB_001069b4;
      paVar17 = (accelerator_t *)calloc(1,0x218);
      if (paVar17 == (accelerator_t *)0x0) break;
      GDEF::accelerator_t::accelerator_t(paVar17,phVar9);
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = (long)paVar17;
      }
      UNLOCK();
      if (lVar7 == 0) goto LAB_001065e1;
      if (paVar17 != (accelerator_t *)&_hb_NullPool) {
        hb_blob_destroy(*(undefined8 *)paVar17);
        if (*(int *)(paVar17 + 8) != 0) {
          free(*(void **)(paVar17 + 0x10));
        }
        free(paVar17);
      }
    }
    LOCK();
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar7 != 0);
LAB_001069b4:
  paVar17 = (accelerator_t *)&_hb_NullPool;
LAB_001065e1:
  psVar8 = *(short **)(this + 0xf0);
  *(accelerator_t **)(this + 0xf8) = paVar17;
  if (((*psVar8 == 0x100) && (0x10002 < (ushort)(psVar8[1] << 8 | (ushort)psVar8[1] >> 8) + 0x10000)
      ) && (uVar4 = *(uint *)(psVar8 + 7), uVar4 != 0)) {
    puVar14 = (undefined *)
              ((long)psVar8 +
              (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18));
  }
  else {
    puVar14 = &_hb_NullPool;
  }
  iVar5 = *(int *)(this + 0x88);
  *(undefined **)(this + 0x100) = puVar14;
  if ((iVar5 == 1) && (*(int *)(*(long *)(this + 0x90) + 0x78) != 0)) {
    uVar4 = *(uint *)(puVar14 + 2);
    puVar18 = &_hb_NullPool;
    if (uVar4 != 0) {
      puVar18 = puVar14 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18);
    }
    uVar11 = *(ushort *)(puVar18 + 2) << 8 | *(ushort *)(puVar18 + 2) >> 8;
    puVar16 = (undefined4 *)malloc((ulong)uVar11 * 4);
    uVar6 = _LC10;
    if (puVar16 != (undefined4 *)0x0) {
      if (uVar11 != 0) {
        puVar20 = puVar16;
        do {
          *puVar20 = uVar6;
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar16 + (ulong)(uVar11 - 1) + 1);
      }
      goto LAB_0010661b;
    }
  }
  puVar16 = (undefined4 *)0x0;
LAB_0010661b:
  *(undefined4 **)(this + 0x108) = puVar16;
  uVar4 = *(uint *)(param_3 + 0x60);
  puVar19 = *(uint **)(param_3 + 0x70);
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x120) = 0;
  if (uVar4 != 0) {
    uVar21 = 0;
    puVar2 = puVar19 + (ulong)uVar4 * 5;
    puVar15 = puVar19;
    do {
      uVar4 = *puVar15;
      puVar15 = puVar15 + 5;
      uVar21 = uVar21 | 1L << ((byte)(uVar4 >> 4) & 0x3f);
    } while (puVar2 != puVar15);
    *(ulong *)(this + 0x110) = uVar21;
    uVar21 = 0;
    puVar15 = puVar19;
    do {
      uVar4 = *puVar15;
      puVar15 = puVar15 + 5;
      uVar21 = uVar21 | 1L << ((byte)uVar4 & 0x3f);
    } while (puVar2 != puVar15);
    *(ulong *)(this + 0x118) = uVar21;
    uVar21 = 0;
    do {
      uVar4 = *puVar19;
      puVar19 = puVar19 + 5;
      uVar21 = uVar21 | 1L << ((byte)(uVar4 >> 9) & 0x3f);
    } while (puVar2 != puVar19);
    *(ulong *)(this + 0x120) = uVar21;
  }
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_3 + 0x38);
  *(undefined8 *)(this + 300) = 0xffffffff00000001;
  *(undefined8 *)(this + 0x134) = 0x4000000000;
  hVar22 = (hb_ot_apply_context_t)0x0;
  if (**(short **)(this + 0xf0) == 0x100) {
    hVar22 = (hb_ot_apply_context_t)((*(short **)(this + 0xf0))[2] != 0);
  }
  this[0x13c] = hVar22;
  uVar3 = _LC11;
  hVar22 = (hb_ot_apply_context_t)(iVar5 == 1);
  *(undefined8 *)(this + 0x148) = 0xffffffff;
  *(hb_ot_apply_context_t **)(this + 0x10) = this;
  *(undefined4 *)(this + 0x13d) = 0x101;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  uVar6 = *(undefined4 *)(*(long *)(this + 0xa0) + 0x60);
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x20] = hVar22;
  this[0x21] = (hb_ot_apply_context_t)0x1;
  this[0x22] = hVar22;
  *(undefined2 *)(this + 0x23) = 0;
  *(hb_ot_apply_context_t **)(this + 0x50) = this;
  *(undefined4 *)(this + 0x80) = uVar6;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x60) = 0x101;
  this[0x62] = hVar22;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined2 *)(this + 99) = 0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  return;
}



/* hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t, true>, false>::resize(int, bool, bool) */

undefined8 __thiscall
hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false>::resize
          (hb_vector_t<hb_vector_t<hb_aat_map_t::range_flags_t,true>,false> *this,int param_1,
          bool param_2,bool param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  
  uVar4 = 0;
  if (-1 < param_1) {
    uVar4 = param_1;
  }
  uVar5 = *(uint *)this;
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (param_3) {
    uVar9 = *(uint *)(this + 4);
    uVar3 = uVar9;
    if (uVar9 <= uVar4) {
      uVar3 = uVar4;
    }
    uVar10 = (ulong)uVar3;
    if (uVar5 < uVar3) {
      if (0xfffffff < uVar3) goto LAB_00106ada;
      pvVar8 = *(void **)(this + 8);
LAB_00106ba4:
      uVar9 = (uint)uVar10;
      pvVar8 = realloc(pvVar8,uVar10 << 4);
      if (pvVar8 == (void *)0x0) {
        uVar5 = *(uint *)this;
        if (uVar5 < uVar9) {
LAB_00106ada:
          *(uint *)this = ~uVar5;
          return 0;
        }
        goto LAB_00106a45;
      }
    }
    else {
      if (uVar5 >> 2 <= uVar3) goto LAB_00106a48;
      if (0xfffffff < uVar3) goto LAB_00106ada;
      pvVar8 = *(void **)(this + 8);
      if (uVar3 != 0) goto LAB_00106ba4;
      free(pvVar8);
      uVar9 = 0;
      pvVar8 = (void *)0x0;
    }
    *(void **)(this + 8) = pvVar8;
    *(uint *)this = uVar9;
  }
  else {
    uVar9 = uVar5;
    if (uVar5 < uVar4) {
      do {
        uVar9 = uVar9 + 8 + (uVar9 >> 1);
      } while (uVar9 < uVar4);
      if (0xfffffff < uVar9) goto LAB_00106ada;
      pvVar8 = *(void **)(this + 8);
      uVar10 = (ulong)uVar9;
      goto LAB_00106ba4;
    }
  }
LAB_00106a45:
  uVar9 = *(uint *)(this + 4);
LAB_00106a48:
  if (uVar9 < uVar4) {
    if (param_2) {
      lVar2 = *(long *)(this + 8);
      puVar6 = (undefined4 *)((ulong)uVar9 * 0x10 + lVar2);
      do {
        *puVar6 = 0;
        puVar7 = puVar6 + 4;
        puVar6[1] = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar6 = puVar7;
      } while ((undefined4 *)(lVar2 + 0x10 + ((ulong)((uVar4 - 1) - uVar9) + (ulong)uVar9) * 0x10)
               != puVar7);
    }
  }
  else if ((uVar4 < uVar9) && (param_2)) {
    piVar1 = (int *)(*(long *)(this + 8) + -0x10 + (ulong)uVar9 * 0x10);
    piVar11 = piVar1;
    do {
      piVar12 = piVar11 + -4;
      if (*piVar11 != 0) {
        free(*(void **)(piVar11 + 2));
      }
      piVar11 = piVar12;
    } while (piVar1 + (ulong)(uVar9 - uVar4) * -4 != piVar12);
  }
  *(uint *)(this + 4) = uVar4;
  return 1;
}



/* AAT::LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor, OT::IntType<unsigned int, 4u> >,
   OT::IntType<unsigned short, 2u>, void, false> >::sanitize(hb_sanitize_context_t*, void const*)
   const */

undefined8 __thiscall
AAT::
LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
::sanitize(LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *this,hb_sanitize_context_t *param_1,void *param_2)

{
  LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar10;
  uint uVar11;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar3 < 6)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar4 = (uint)uVar3 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar4 ||
      (iVar8 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar8, iVar8 < 1)))) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar4 = (uint)uVar3;
  if ((uVar4 == 0) ||
     ((uVar9 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                      (uVar3 - 1)), *(short *)(this + uVar9 + 0xc) == -1 &&
      (uVar4 = uVar4 - (*(short *)(this + uVar9 + 0xe) == -1), uVar4 == 0)))) {
    return 1;
  }
  uVar11 = 0;
  while( true ) {
    uVar5 = (uint)uVar3;
    pLVar10 = (LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
               *)&_hb_NullPool;
    if (uVar5 != 0) {
      uVar9 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                     (uVar5 - 1));
      if (*(short *)(pLVar1 + uVar9) == -1) {
        uVar5 = uVar5 - (*(short *)(this + uVar9 + 0xe) == -1);
      }
      pLVar10 = (LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                 *)&_hb_NullPool;
      if (uVar11 < uVar5) {
        pLVar10 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                           uVar11;
      }
    }
    if ((LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
         *)(ulong)*(uint *)(param_1 + 0x18) < pLVar10 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    puVar7 = (uint *)((ulong)(ushort)(*(ushort *)(pLVar10 + 4) << 8 | *(ushort *)(pLVar10 + 4) >> 8)
                     + (long)param_2);
    puVar2 = puVar7 + 1;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar5 = *puVar7;
    uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if ((uVar5 << 0x18) >> 0x1e != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar2) < uVar6 * 4) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x1c) + uVar6 * -4;
    *(int *)(param_1 + 0x1c) = iVar8;
    if (iVar8 < 1) {
      return 0;
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar4) break;
    uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 1;
}



/* AAT::LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor, OT::IntType<unsigned int, 4u> >,
   OT::IntType<unsigned short, 2u>, void, false> >::sanitize(hb_sanitize_context_t*, void const*)
   const */

undefined8 __thiscall
AAT::
LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
::sanitize(LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *this,hb_sanitize_context_t *param_1,void *param_2)

{
  LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar12;
  uint uVar13;
  long lVar14;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar3 < 6)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar4 = (uint)uVar3 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar4 ||
      (iVar9 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar9, iVar9 < 1)))) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar4 = (uint)uVar3;
  if ((uVar4 == 0) ||
     ((uVar6 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                      (uVar3 - 1)), *(short *)(this + uVar6 + 0xc) == -1 &&
      (uVar4 = uVar4 - (*(short *)(this + uVar6 + 0xe) == -1), uVar4 == 0)))) {
    return 1;
  }
  uVar13 = 0;
  while( true ) {
    uVar10 = (uint)uVar3;
    pLVar7 = (LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
              *)&_hb_NullPool;
    if (uVar10 != 0) {
      uVar6 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                     (uVar10 - 1));
      if (*(short *)(pLVar1 + uVar6) == -1) {
        uVar10 = uVar10 - (*(short *)(this + uVar6 + 0xe) == -1);
      }
      pLVar7 = (LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                *)&_hb_NullPool;
      if (uVar13 < uVar10) {
        pLVar7 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * uVar13
        ;
      }
    }
    if ((LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
         *)(ulong)*(uint *)(param_1 + 0x18) < pLVar7 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar10 = (uint)(ushort)(*(ushort *)pLVar7 << 8 | *(ushort *)pLVar7 >> 8);
    uVar11 = (uint)(ushort)(*(ushort *)(pLVar7 + 2) << 8 | *(ushort *)(pLVar7 + 2) >> 8);
    if (uVar10 < uVar11) {
      return 0;
    }
    uVar11 = (uVar10 + 1) - uVar11;
    if ((LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
         *)(ulong)*(uint *)(param_1 + 0x18) < pLVar7 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((int)uVar11 < 0) {
      return 0;
    }
    pLVar7 = this + (ushort)(*(ushort *)(pLVar7 + 4) << 8 | *(ushort *)(pLVar7 + 4) >> 8);
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar7 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar7) < uVar11 * 2) {
      return 0;
    }
    iVar9 = *(int *)(param_1 + 0x1c) + uVar11 * -2;
    *(int *)(param_1 + 0x1c) = iVar9;
    if (iVar9 < 1) break;
    lVar14 = *(long *)(param_1 + 8);
    uVar6 = (ulong)*(uint *)(param_1 + 0x18);
    pLVar12 = pLVar7 + 2;
    do {
      if (uVar6 < (ulong)((long)pLVar12 - lVar14)) {
        return 0;
      }
      puVar8 = (uint *)((ulong)(ushort)(*(ushort *)(pLVar12 + -2) << 8 |
                                       *(ushort *)(pLVar12 + -2) >> 8) + (long)param_2);
      puVar2 = puVar8 + 1;
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar10 = *puVar8;
      uVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      if ((uVar10 << 0x18) >> 0x1e != 0) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 8);
      uVar6 = (ulong)*(uint *)(param_1 + 0x18);
      if (uVar6 < (ulong)((long)puVar2 - lVar14)) {
        return 0;
      }
      if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar2) < uVar5 * 4) {
        return 0;
      }
      iVar9 = *(int *)(param_1 + 0x1c) + uVar5 * -4;
      *(int *)(param_1 + 0x1c) = iVar9;
      if (iVar9 < 1) {
        return 0;
      }
      pLVar12 = pLVar12 + 2;
    } while (pLVar7 + (ulong)uVar11 * 2 + 2 != pLVar12);
    uVar13 = uVar13 + 1;
    if (uVar13 == uVar4) {
      return 1;
    }
    uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 0;
}



/* AAT::LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor, OT::IntType<unsigned int, 4u> >,
   OT::IntType<unsigned short, 2u>, void, false> >::sanitize(hb_sanitize_context_t*, void const*)
   const */

undefined8 __thiscall
AAT::
LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
::sanitize(LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *this,hb_sanitize_context_t *param_1,void *param_2)

{
  LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar3 < 4)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar4 = (uint)uVar3 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar4 ||
      (iVar8 = *(int *)(param_1 + 0x1c) - uVar4, *(int *)(param_1 + 0x1c) = iVar8, iVar8 < 1)))) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  if ((uVar3 == 0) ||
     ((uVar10 = uVar3 - 1, uVar4 = (uint)uVar3,
      *(short *)(this + (ulong)((ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                               uVar10) + 0xc) == -1 && (uVar4 = uVar10, uVar10 == 0)))) {
    return 1;
  }
  uVar10 = 0;
  while( true ) {
    uVar9 = (uint)uVar3;
    pLVar6 = (LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
              *)&_hb_NullPool;
    if (uVar9 != 0) {
      uVar5 = uVar9 - 1;
      if (*(short *)(pLVar1 + (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8
                                            ) * (uVar9 - 1)) != -1) {
        uVar5 = uVar9;
      }
      if (uVar10 < uVar5) {
        pLVar6 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * uVar10
        ;
      }
    }
    if ((LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
         *)(ulong)*(uint *)(param_1 + 0x18) < pLVar6 + (4 - *(long *)(param_1 + 8))) {
      return 0;
    }
    puVar7 = (uint *)((ulong)(ushort)(*(ushort *)(pLVar6 + 2) << 8 | *(ushort *)(pLVar6 + 2) >> 8) +
                     (long)param_2);
    puVar2 = puVar7 + 1;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar9 = *puVar7;
    uVar5 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if ((uVar9 << 0x18) >> 0x1e != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar2) < uVar5 * 4) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x1c) + uVar5 * -4;
    *(int *)(param_1 + 0x1c) = iVar8;
    if (iVar8 < 1) {
      return 0;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == uVar4) break;
    uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 1;
}



/* AAT::Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor, OT::IntType<unsigned int, 4u> >,
   OT::IntType<unsigned short, 2u>, void, false> >::sanitize(hb_sanitize_context_t*, void const*)
   const */

undefined8 __thiscall
AAT::
Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
::sanitize(Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
           *this,hb_sanitize_context_t *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar9;
  ulong uVar10;
  long lVar11;
  
  pLVar9 = this + 2;
  if ((ulong)((long)pLVar9 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
    case 0:
      uVar2 = *(uint *)(param_1 + 0x38);
      if ((((-1 < (int)uVar2) &&
           ((ulong)((long)pLVar9 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar2 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar9))) &&
         (iVar8 = *(int *)(param_1 + 0x1c) + uVar2 * -2, *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8
         )) {
        if (uVar2 == 0) {
          return 1;
        }
        lVar11 = *(long *)(param_1 + 8);
        uVar10 = (ulong)*(uint *)(param_1 + 0x18);
        pLVar9 = this + 4;
        while( true ) {
          if (uVar10 < (ulong)((long)pLVar9 - lVar11)) {
            return 0;
          }
          puVar6 = (uint *)((ulong)(ushort)(*(ushort *)(pLVar9 + -2) << 8 |
                                           *(ushort *)(pLVar9 + -2) >> 8) + (long)param_2);
          puVar1 = puVar6 + 1;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_1 + 8))) {
            return 0;
          }
          uVar5 = *puVar6;
          uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if ((uVar5 << 0x18) >> 0x1e != 0) {
            return 0;
          }
          lVar11 = *(long *)(param_1 + 8);
          uVar10 = (ulong)*(uint *)(param_1 + 0x18);
          if (uVar10 < (ulong)((long)puVar1 - lVar11)) break;
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar1) < uVar4 * 4) {
            return 0;
          }
          iVar8 = *(int *)(param_1 + 0x1c) + uVar4 * -4;
          *(int *)(param_1 + 0x1c) = iVar8;
          if (iVar8 < 1) {
            return 0;
          }
          pLVar9 = pLVar9 + 2;
          if (pLVar9 == this + (ulong)uVar2 * 2 + 4) {
            return 1;
          }
        }
        return 0;
      }
      break;
    default:
      return 1;
    case 2:
      uVar7 = LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
              ::sanitize((LookupFormat2<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                          *)this,param_1,param_2);
      return uVar7;
    case 4:
      uVar7 = LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
              ::sanitize((LookupFormat4<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                          *)this,param_1,param_2);
      return uVar7;
    case 6:
      uVar7 = LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
              ::sanitize((LookupFormat6<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                          *)this,param_1,param_2);
      return uVar7;
    case 8:
      if ((ulong)((long)(this + 6) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
        uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        if (((uint)uVar3 + (uint)uVar3 <=
             (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this + 6))) &&
           (iVar8 = *(int *)(param_1 + 0x1c) - ((uint)uVar3 + (uint)uVar3),
           *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8)) {
          if (uVar3 == 0) {
            return 1;
          }
          lVar11 = *(long *)(param_1 + 8);
          uVar10 = (ulong)*(uint *)(param_1 + 0x18);
          pLVar9 = this + 8;
          while( true ) {
            if (uVar10 < (ulong)((long)pLVar9 - lVar11)) {
              return 0;
            }
            puVar6 = (uint *)((ulong)(ushort)(*(ushort *)(pLVar9 + -2) << 8 |
                                             *(ushort *)(pLVar9 + -2) >> 8) + (long)param_2);
            puVar1 = puVar6 + 1;
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_1 + 8))) {
              return 0;
            }
            uVar2 = *puVar6;
            uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
            if ((uVar2 << 0x18) >> 0x1e != 0) {
              return 0;
            }
            lVar11 = *(long *)(param_1 + 8);
            uVar10 = (ulong)*(uint *)(param_1 + 0x18);
            if (uVar10 < (ulong)((long)puVar1 - lVar11)) break;
            if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar1) < uVar5 * 4) {
              return 0;
            }
            iVar8 = *(int *)(param_1 + 0x1c) + uVar5 * -4;
            *(int *)(param_1 + 0x1c) = iVar8;
            if (iVar8 < 1) {
              return 0;
            }
            pLVar9 = pLVar9 + 2;
            if (this + (ulong)(uVar3 - 1) * 2 + 10 == pLVar9) {
              return 1;
            }
          }
          return 0;
        }
      }
      break;
    case 10:
      break;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00107580) */
/* hb_table_lazy_loader_t<AAT::ankr, 31u, false>::create(hb_face_t*) */

long hb_table_lazy_loader_t<AAT::ankr,31u,false>::create(hb_face_t *param_1)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  short *local_60;
  long local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  uint local_3c;
  long local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = '\0';
  local_2b = 0;
  local_30 = hb_face_get_glyph_count();
  local_2c = 1;
  lVar5 = hb_face_reference_table(param_1,0x616e6b72);
  lVar6 = hb_blob_reference(lVar5);
  local_38 = lVar6;
  do {
    local_50 = *(uint *)(lVar6 + 0x18);
    psVar2 = *(short **)(lVar6 + 0x10);
    local_4c = local_50 * 0x40;
    local_58 = (long)psVar2 + (ulong)local_50;
    if (local_50 >> 0x1a == 0) {
      if (0x3fffffff < local_4c) {
        local_4c = 0x3fffffff;
      }
      if (local_4c < 0x4000) {
        local_4c = 0x4000;
      }
    }
    else {
      local_4c = 0x3fffffff;
    }
    local_3c = 0;
    local_68[0] = 0;
    local_44 = 0;
    local_60 = psVar2;
    if (psVar2 == (short *)0x0) {
      hb_blob_destroy(lVar6);
LAB_001075c8:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar5;
      }
      goto LAB_0010774b;
    }
    if ((ulong)local_50 < 0xc) goto LAB_001075f0;
    if (*psVar2 != 0) {
LAB_001075e8:
      local_3c = 0;
      lVar6 = local_38;
LAB_001075f0:
      hb_blob_destroy(lVar6);
LAB_001075f8:
      hb_blob_destroy(lVar5);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar6 = hb_blob_get_empty();
        return lVar6;
      }
LAB_0010774b:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar4 = *(uint *)(psVar2 + 4);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if ((((uint)((int)local_58 - (int)psVar2) < uVar4) ||
        (local_4c = local_4c - uVar4, (int)local_4c < 1)) || (local_50 < 8)) goto LAB_001075e8;
    uVar1 = *(uint *)(psVar2 + 2);
    if ((uVar1 == 0) ||
       (cVar3 = AAT::
                Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            *)((ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                       (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + (long)psVar2),
                           (hb_sanitize_context_t *)local_68,(void *)((long)psVar2 + (ulong)uVar4)),
       lVar6 = local_38, cVar3 != '\0')) {
      if (local_3c == 0) {
        hb_blob_destroy(local_38);
LAB_0010756a:
        hb_blob_make_immutable(lVar5);
        goto LAB_001075c8;
      }
LAB_00107678:
      local_3c = 0;
      if ((ulong)local_50 < (ulong)((long)psVar2 + (0xc - (long)local_60))) goto LAB_001075e8;
      if (*psVar2 == 0) {
        uVar4 = *(uint *)(psVar2 + 4);
        if ((((ulong)((long)psVar2 - (long)local_60) <= (ulong)local_50) &&
            (uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
            , uVar4 <= (uint)((int)local_58 - (int)psVar2))) &&
           ((local_4c = local_4c - uVar4, 0 < (int)local_4c &&
            ((ulong)((long)psVar2 + (8 - (long)local_60)) <= (ulong)local_50)))) {
          uVar1 = *(uint *)(psVar2 + 2);
          if ((uVar1 == 0) ||
             (cVar3 = AAT::
                      Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                      ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                  *)((ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                             (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + (long)psVar2),
                                 (hb_sanitize_context_t *)local_68,
                                 (void *)((long)psVar2 + (ulong)uVar4)), cVar3 != '\0')) {
            if (local_3c == 0) {
              hb_blob_destroy(local_38);
              goto LAB_0010756a;
            }
          }
          else if ((local_3c < 0x20) && (local_3c = local_3c + 1, local_40 != '\0')) {
            psVar2[2] = 0;
            psVar2[3] = 0;
          }
        }
      }
      hb_blob_destroy(local_38);
      goto LAB_001075f8;
    }
    if (local_3c < 0x20) {
      local_3c = local_3c + 1;
      if (local_40 != '\0') {
        psVar2[2] = 0;
        psVar2[3] = 0;
        goto LAB_00107678;
      }
    }
    else if (local_40 != '\0') goto LAB_001075f0;
    local_60 = (short *)hb_blob_get_data_writable(lVar5,0);
    local_58 = (ulong)*(uint *)(lVar5 + 0x18) + (long)local_60;
    if (local_60 == (short *)0x0) goto LAB_001075f0;
    local_40 = '\x01';
  } while( true );
}



/* AAT::StateTable<AAT::ExtendedTypes,
   AAT::Format1Entry<true>::EntryData>::sanitize(hb_sanitize_context_t*, unsigned int*) const */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData>::sanitize
          (StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *this,
          hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *pSVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *pSVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *)
      (ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar12 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar11 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar10 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar10 < 1) {
LAB_0010791d:
            *(int *)(param_1 + 0x1c) = iVar10;
            return '\0';
          }
          iVar10 = iVar10 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar9 = uVar11;
          for (pSVar8 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar9,
              pSVar8 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar8 = pSVar8 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar9 = (ulong)uVar6;
            }
          }
          uVar6 = (uint)(uVar9 * 6);
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar12 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar12) < uVar6) {
            return '\0';
          }
          iVar10 = iVar10 - uVar6;
          if (iVar10 < 1) goto LAB_0010791d;
          iVar10 = iVar10 + ((int)uVar11 - uVar5);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          for (pSVar8 = pSVar12 + uVar11 * 6; pSVar8 < pSVar12 + uVar9 * 6; pSVar8 = pSVar8 + 6) {
            uVar4 = *(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar11 = uVar9;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* AAT::StateTable<AAT::ExtendedTypes,
   AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>::sanitize(hb_sanitize_context_t*,
   unsigned int*) const */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>::
sanitize(StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
         *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
  *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
  *pSVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
  *pSVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
         *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData> *
      )(ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar12 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar11 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar10 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar10 < 1) {
LAB_00107b1d:
            *(int *)(param_1 + 0x1c) = iVar10;
            return '\0';
          }
          iVar10 = iVar10 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar9 = uVar11;
          for (pSVar8 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar9,
              pSVar8 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar8 = pSVar8 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar9 = (ulong)uVar6;
            }
          }
          uVar6 = (uint)(uVar9 * 6);
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar12 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar12) < uVar6) {
            return '\0';
          }
          iVar10 = iVar10 - uVar6;
          if (iVar10 < 1) goto LAB_00107b1d;
          iVar10 = iVar10 + ((int)uVar11 - uVar5);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          for (pSVar8 = pSVar12 + uVar11 * 6; pSVar8 < pSVar12 + uVar9 * 6; pSVar8 = pSVar8 + 6) {
            uVar4 = *(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar11 = uVar9;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* void AAT::Lookup<OT::IntType<unsigned short, 2u>
   >::collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >&, unsigned int) const */

void __thiscall
AAT::Lookup<OT::IntType<unsigned_short,2u>>::
collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (Lookup<OT::IntType<unsigned_short,2u>> *this,hb_set_digest_combiner_t *param_1,
          uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar10;
  ulong uVar11;
  uint uVar12;
  ushort uVar13;
  ulong uVar14;
  uint uVar15;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar15 = param_2 - 1;
    if (*(ulong *)param_1 == 0xffffffffffffffff) {
      uVar14 = *(ulong *)(param_1 + 8);
LAB_001082da:
      uVar11 = *(ulong *)(param_1 + 0x10);
      if (uVar14 == 0xffffffffffffffff) goto LAB_00107d96;
      if (0x3e < uVar15) goto LAB_00107d8e;
      uVar6 = 1;
      *(ulong *)(param_1 + 8) = (2L << ((byte)uVar15 & 0x3f)) - 1U | uVar14;
      if (uVar11 == 0xffffffffffffffff) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
      if (uVar15 < 0x3f0) {
        *(ulong *)param_1 = (2L << ((byte)(uVar15 >> 4) & 0x3f)) - 1U | *(ulong *)param_1;
        goto LAB_001082da;
      }
      *(undefined8 *)param_1 = 0xffffffffffffffff;
      uVar11 = *(ulong *)(param_1 + 0x10);
      if (uVar14 != 0xffffffffffffffff) {
LAB_00107d8e:
        *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      }
LAB_00107d96:
      if (uVar11 == 0xffffffffffffffff) {
        return;
      }
      if (0x7dff < uVar15) goto LAB_00107db1;
      uVar6 = (2L << ((byte)(uVar15 >> 9) & 0x3f)) - 1;
    }
    *(ulong *)(param_1 + 0x10) = uVar11 | uVar6;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar15 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar14 = (ulong)((uVar5 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
      if ((*(short *)(this + uVar14 + 0xc) != -1) ||
         (uVar15 = uVar15 - (*(short *)(this + uVar14 + 0xe) == -1), uVar15 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            uVar14 = (ulong)((uVar4 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
            if (*(short *)(this + uVar14 + 0xc) == -1) {
              uVar4 = uVar4 - (*(short *)(this + uVar14 + 0xe) == -1);
            }
            pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)(pLVar10 + 2);
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            uVar1 = *(ushort *)pLVar10;
            uVar13 = uVar1 << 8 | uVar1 >> 8;
            if (*(ulong *)param_1 != 0xffffffffffffffff) {
              uVar2 = uVar13 >> 4;
              if ((uint)uVar2 - (uint)(uVar9 >> 4) < 0x3f) {
                uVar14 = 1L << ((byte)(uVar9 >> 4) & 0x3f);
                bVar7 = (byte)uVar2;
                *(ulong *)param_1 =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)param_1;
              }
              else {
                *(undefined8 *)param_1 = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
              if ((uint)uVar13 - (uint)uVar9 < 0x3f) {
                uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
                bVar7 = (byte)(uVar1 >> 8);
                *(ulong *)(param_1 + 8) =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
              }
              else {
                *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
              bVar8 = (byte)uVar1 >> 1;
              bVar7 = (byte)uVar5 >> 1;
              if ((uint)bVar8 - (uint)bVar7 < 0x3f) {
                bVar8 = bVar8 & 0x3f;
                uVar14 = 1L << (bVar7 & 0x3f);
                *(ulong *)(param_1 + 0x10) =
                     ((2L << bVar8) - uVar14) - (ulong)((ulong)(1L << bVar8) < uVar14) |
                     *(ulong *)(param_1 + 0x10);
              }
              else {
                *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
              }
            }
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 4:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar15 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar14 = (ulong)((uVar5 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
      if ((*(short *)(this + uVar14 + 0xc) != -1) ||
         (uVar15 = uVar15 - (*(short *)(this + uVar14 + 0xe) == -1), uVar15 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            uVar14 = (ulong)((uVar4 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
            if (*(short *)(this + uVar14 + 0xc) == -1) {
              uVar4 = uVar4 - (*(short *)(this + uVar14 + 0xe) == -1);
            }
            pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)(pLVar10 + 2);
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            uVar1 = *(ushort *)pLVar10;
            uVar13 = uVar1 << 8 | uVar1 >> 8;
            if (*(ulong *)param_1 != 0xffffffffffffffff) {
              uVar2 = uVar13 >> 4;
              if ((uint)uVar2 - (uint)(uVar9 >> 4) < 0x3f) {
                uVar14 = 1L << ((byte)(uVar9 >> 4) & 0x3f);
                bVar7 = (byte)uVar2;
                *(ulong *)param_1 =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)param_1;
              }
              else {
                *(undefined8 *)param_1 = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
              if ((uint)uVar13 - (uint)uVar9 < 0x3f) {
                uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
                bVar7 = (byte)(uVar1 >> 8);
                *(ulong *)(param_1 + 8) =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
              }
              else {
                *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
              bVar8 = (byte)uVar1 >> 1;
              bVar7 = (byte)uVar5 >> 1;
              if ((uint)bVar8 - (uint)bVar7 < 0x3f) {
                bVar8 = bVar8 & 0x3f;
                uVar14 = 1L << (bVar7 & 0x3f);
                *(ulong *)(param_1 + 0x10) =
                     ((2L << bVar8) - uVar14) - (ulong)((ulong)(1L << bVar8) < uVar14) |
                     *(ulong *)(param_1 + 0x10);
              }
              else {
                *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
              }
            }
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 6:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    if (uVar5 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar12 = uVar5 - 1;
      uVar15 = (uint)uVar5;
      if ((*(short *)(this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc) != -1) ||
         (uVar15 = uVar12, uVar12 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_short,2u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            if (*(short *)(this + (ulong)((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * (uVar4 - 1)) +
                                  0xc) == -1) {
              uVar4 = uVar4 - 1;
            }
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)pLVar10;
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            *(ulong *)param_1 = *(ulong *)param_1 | 1L << ((byte)(uVar9 >> 4) & 0x3f);
            *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 1L << ((byte)(uVar5 >> 8) & 0x3f);
            *(ulong *)(param_1 + 0x10) =
                 *(ulong *)(param_1 + 0x10) | 1L << ((byte)(uVar5 >> 1) & 0x3f);
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 8:
    uVar15 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8);
    if (uVar15 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 2);
    goto LAB_00107ca3;
  case 10:
    uVar5 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar5 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 4);
LAB_00107ca3:
    uVar3 = uVar5 << 8 | uVar5 >> 8;
    if (uVar3 != 0xffff) {
      uVar12 = (uVar15 - 1) + (uint)uVar3;
      if (*(ulong *)param_1 != 0xffffffffffffffff) {
        if ((uVar12 >> 4) - (uint)(uVar3 >> 4) < 0x3f) {
          uVar14 = 1L << ((byte)(uVar3 >> 4) & 0x3f);
          bVar7 = (byte)(uVar12 >> 4);
          *(ulong *)param_1 =
               ((2L << (bVar7 & 0x3f)) - uVar14) - (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) |
               *(ulong *)param_1;
        }
        else {
          *(undefined8 *)param_1 = 0xffffffffffffffff;
        }
      }
      if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
        if (uVar15 - 1 < 0x3f) {
          uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
          *(ulong *)(param_1 + 8) =
               ((2L << ((byte)uVar12 & 0x3f)) - uVar14) -
               (ulong)((ulong)(1L << ((byte)uVar12 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
        }
        else {
          *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        }
      }
      if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
        bVar7 = (byte)uVar5 >> 1;
        if (0x3e < (uVar12 >> 9) - (uint)bVar7) {
LAB_00107db1:
          *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
          return;
        }
        uVar14 = 1L << (bVar7 & 0x3f);
        bVar7 = (byte)(uVar12 >> 9);
        *(ulong *)(param_1 + 0x10) =
             ((2L << (bVar7 & 0x3f)) - uVar14) - (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) |
             *(ulong *)(param_1 + 0x10);
      }
    }
    break;
  default:
    return;
  }
  return;
}



/* void AAT::Lookup<OT::IntType<unsigned int, 4u>
   >::collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >
   >(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >&, unsigned int) const */

void __thiscall
AAT::Lookup<OT::IntType<unsigned_int,4u>>::
collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
          (Lookup<OT::IntType<unsigned_int,4u>> *this,hb_set_digest_combiner_t *param_1,uint param_2
          )

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar10;
  ulong uVar11;
  uint uVar12;
  ushort uVar13;
  ulong uVar14;
  uint uVar15;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar15 = param_2 - 1;
    if (*(ulong *)param_1 == 0xffffffffffffffff) {
      uVar14 = *(ulong *)(param_1 + 8);
LAB_00108b0a:
      uVar11 = *(ulong *)(param_1 + 0x10);
      if (uVar14 == 0xffffffffffffffff) goto LAB_001085c6;
      if (0x3e < uVar15) goto LAB_001085be;
      uVar6 = 1;
      *(ulong *)(param_1 + 8) = (2L << ((byte)uVar15 & 0x3f)) - 1U | uVar14;
      if (uVar11 == 0xffffffffffffffff) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(param_1 + 8);
      if (uVar15 < 0x3f0) {
        *(ulong *)param_1 = (2L << ((byte)(uVar15 >> 4) & 0x3f)) - 1U | *(ulong *)param_1;
        goto LAB_00108b0a;
      }
      *(undefined8 *)param_1 = 0xffffffffffffffff;
      uVar11 = *(ulong *)(param_1 + 0x10);
      if (uVar14 != 0xffffffffffffffff) {
LAB_001085be:
        *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      }
LAB_001085c6:
      if (uVar11 == 0xffffffffffffffff) {
        return;
      }
      if (0x7dff < uVar15) goto LAB_001085e1;
      uVar6 = (2L << ((byte)(uVar15 >> 9) & 0x3f)) - 1;
    }
    *(ulong *)(param_1 + 0x10) = uVar11 | uVar6;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar15 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar14 = (ulong)((uVar5 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
      if ((*(short *)(this + uVar14 + 0xc) != -1) ||
         (uVar15 = uVar15 - (*(short *)(this + uVar14 + 0xe) == -1), uVar15 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            uVar14 = (ulong)((uVar4 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
            if (*(short *)(this + uVar14 + 0xc) == -1) {
              uVar4 = uVar4 - (*(short *)(this + uVar14 + 0xe) == -1);
            }
            pLVar10 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)(pLVar10 + 2);
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            uVar1 = *(ushort *)pLVar10;
            uVar13 = uVar1 << 8 | uVar1 >> 8;
            if (*(ulong *)param_1 != 0xffffffffffffffff) {
              uVar2 = uVar13 >> 4;
              if ((uint)uVar2 - (uint)(uVar9 >> 4) < 0x3f) {
                uVar14 = 1L << ((byte)(uVar9 >> 4) & 0x3f);
                bVar7 = (byte)uVar2;
                *(ulong *)param_1 =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)param_1;
              }
              else {
                *(undefined8 *)param_1 = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
              if ((uint)uVar13 - (uint)uVar9 < 0x3f) {
                uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
                bVar7 = (byte)(uVar1 >> 8);
                *(ulong *)(param_1 + 8) =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
              }
              else {
                *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
              bVar8 = (byte)uVar1 >> 1;
              bVar7 = (byte)uVar5 >> 1;
              if ((uint)bVar8 - (uint)bVar7 < 0x3f) {
                bVar8 = bVar8 & 0x3f;
                uVar14 = 1L << (bVar7 & 0x3f);
                *(ulong *)(param_1 + 0x10) =
                     ((2L << bVar8) - uVar14) - (ulong)((ulong)(1L << bVar8) < uVar14) |
                     *(ulong *)(param_1 + 0x10);
              }
              else {
                *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
              }
            }
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 4:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar15 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar14 = (ulong)((uVar5 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
      if ((*(short *)(this + uVar14 + 0xc) != -1) ||
         (uVar15 = uVar15 - (*(short *)(this + uVar14 + 0xe) == -1), uVar15 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            uVar14 = (ulong)((uVar4 - 1) * (uint)(ushort)(uVar3 << 8 | uVar3 >> 8));
            if (*(short *)(this + uVar14 + 0xc) == -1) {
              uVar4 = uVar4 - (*(short *)(this + uVar14 + 0xe) == -1);
            }
            pLVar10 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)(pLVar10 + 2);
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            uVar1 = *(ushort *)pLVar10;
            uVar13 = uVar1 << 8 | uVar1 >> 8;
            if (*(ulong *)param_1 != 0xffffffffffffffff) {
              uVar2 = uVar13 >> 4;
              if ((uint)uVar2 - (uint)(uVar9 >> 4) < 0x3f) {
                uVar14 = 1L << ((byte)(uVar9 >> 4) & 0x3f);
                bVar7 = (byte)uVar2;
                *(ulong *)param_1 =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)param_1;
              }
              else {
                *(undefined8 *)param_1 = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
              if ((uint)uVar13 - (uint)uVar9 < 0x3f) {
                uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
                bVar7 = (byte)(uVar1 >> 8);
                *(ulong *)(param_1 + 8) =
                     ((2L << (bVar7 & 0x3f)) - uVar14) -
                     (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
              }
              else {
                *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
              }
            }
            if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
              bVar8 = (byte)uVar1 >> 1;
              bVar7 = (byte)uVar5 >> 1;
              if ((uint)bVar8 - (uint)bVar7 < 0x3f) {
                bVar8 = bVar8 & 0x3f;
                uVar14 = 1L << (bVar7 & 0x3f);
                *(ulong *)(param_1 + 0x10) =
                     ((2L << bVar8) - uVar14) - (ulong)((ulong)(1L << bVar8) < uVar14) |
                     *(ulong *)(param_1 + 0x10);
              }
              else {
                *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
              }
            }
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 6:
    uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    if (uVar5 != 0) {
      uVar3 = *(ushort *)(this + 2);
      uVar12 = uVar5 - 1;
      uVar15 = (uint)uVar5;
      if ((*(short *)(this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc) != -1) ||
         (uVar15 = uVar12, uVar12 != 0)) {
        uVar12 = 0;
        while( true ) {
          uVar4 = (uint)uVar5;
          pLVar10 = (Lookup<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if (uVar4 != 0) {
            if (*(short *)(this + (ulong)((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * (uVar4 - 1)) +
                                  0xc) == -1) {
              uVar4 = uVar4 - 1;
            }
            if (uVar12 < uVar4) {
              uVar3 = *(ushort *)(this + 2);
              pLVar10 = this + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) * uVar12) + 0xc;
            }
          }
          uVar5 = *(ushort *)pLVar10;
          uVar9 = uVar5 << 8 | uVar5 >> 8;
          if (uVar9 != 0xffff) {
            *(ulong *)param_1 = *(ulong *)param_1 | 1L << ((byte)(uVar9 >> 4) & 0x3f);
            *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 1L << ((byte)(uVar5 >> 8) & 0x3f);
            *(ulong *)(param_1 + 0x10) =
                 *(ulong *)(param_1 + 0x10) | 1L << ((byte)(uVar5 >> 1) & 0x3f);
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar15) break;
          uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
        }
      }
    }
    break;
  case 8:
    uVar15 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8);
    if (uVar15 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 2);
    goto LAB_001084d3;
  case 10:
    uVar5 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    uVar15 = (uint)uVar5;
    if (uVar5 == 0) {
      return;
    }
    uVar5 = *(ushort *)(this + 4);
LAB_001084d3:
    uVar3 = uVar5 << 8 | uVar5 >> 8;
    if (uVar3 != 0xffff) {
      uVar12 = (uVar15 - 1) + (uint)uVar3;
      if (*(ulong *)param_1 != 0xffffffffffffffff) {
        if ((uVar12 >> 4) - (uint)(uVar3 >> 4) < 0x3f) {
          uVar14 = 1L << ((byte)(uVar3 >> 4) & 0x3f);
          bVar7 = (byte)(uVar12 >> 4);
          *(ulong *)param_1 =
               ((2L << (bVar7 & 0x3f)) - uVar14) - (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) |
               *(ulong *)param_1;
        }
        else {
          *(undefined8 *)param_1 = 0xffffffffffffffff;
        }
      }
      if (*(ulong *)(param_1 + 8) != 0xffffffffffffffff) {
        if (uVar15 - 1 < 0x3f) {
          uVar14 = 1L << ((byte)(uVar5 >> 8) & 0x3f);
          *(ulong *)(param_1 + 8) =
               ((2L << ((byte)uVar12 & 0x3f)) - uVar14) -
               (ulong)((ulong)(1L << ((byte)uVar12 & 0x3f)) < uVar14) | *(ulong *)(param_1 + 8);
        }
        else {
          *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        }
      }
      if (*(ulong *)(param_1 + 0x10) != 0xffffffffffffffff) {
        bVar7 = (byte)uVar5 >> 1;
        if (0x3e < (uVar12 >> 9) - (uint)bVar7) {
LAB_001085e1:
          *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
          return;
        }
        uVar14 = 1L << (bVar7 & 0x3f);
        bVar7 = (byte)(uVar12 >> 9);
        *(ulong *)(param_1 + 0x10) =
             ((2L << (bVar7 & 0x3f)) - uVar14) - (ulong)((ulong)(1L << (bVar7 & 0x3f)) < uVar14) |
             *(ulong *)(param_1 + 0x10);
      }
    }
    break;
  default:
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::KerxTable<AAT::kerx>::create_accelerator_data(unsigned int) const */

uint * AAT::KerxTable<AAT::kerx>::create_accelerator_data(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  uint in_EDX;
  uint uVar8;
  uint *puVar9;
  long in_RSI;
  undefined4 in_register_0000003c;
  uint *puVar10;
  Lookup<OT::IntType<unsigned_short,2u>> *this;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  ulong local_88;
  undefined1 local_78 [16];
  ulong local_68;
  hb_set_digest_combiner_t local_58 [16];
  ulong local_48;
  long local_40;
  
  puVar10 = (uint *)CONCAT44(in_register_0000003c,param_1);
  puVar9 = (uint *)(in_RSI + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10[0] = 0;
  puVar10[1] = 0;
  uVar2 = *(uint *)(in_RSI + 4);
  puVar10[2] = 0;
  puVar10[3] = 0;
  if (uVar2 != 0) {
    uVar13 = 0;
    do {
      local_88 = 0;
      local_68 = 0;
      local_98 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      switch(*(undefined1 *)((long)puVar9 + 7)) {
      case 0:
        uVar8 = puVar9[3];
        lVar3 = (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18) * 6;
        if (lVar3 != 0) {
          local_68 = 0;
          local_78._8_8_ = 0;
          local_78._0_8_ = 0;
          local_88 = 0;
          local_98._8_8_ = 0;
          local_98._0_8_ = 0;
          puVar11 = puVar9 + 7;
          do {
            uVar1 = (ushort)*puVar11;
            puVar12 = (uint *)((long)puVar11 + 6);
            local_98._0_8_ =
                 local_98._0_8_ | 1L << ((byte)((ushort)(uVar1 << 8 | uVar1 >> 8) >> 4) & 0x3f);
            local_98._8_8_ = local_98._8_8_ | 1L << ((byte)(uVar1 >> 8) & 0x3f);
            local_88 = local_88 | 1L << ((byte)uVar1 >> 1 & 0x3f);
            uVar1 = *(ushort *)((long)puVar11 + 2);
            local_78._0_8_ =
                 local_78._0_8_ | 1L << ((byte)((ushort)(uVar1 << 8 | uVar1 >> 8) >> 4) & 0x3f);
            local_78._8_8_ = local_78._8_8_ | 1L << ((byte)(uVar1 >> 8) & 0x3f);
            local_68 = 1L << ((byte)uVar1 >> 1 & 0x3f) | local_68;
            puVar11 = puVar12;
          } while ((uint *)((long)(puVar9 + 7) + lVar3) != puVar12);
        }
        break;
      case 1:
      case 4:
        uVar8 = puVar9[4];
        local_58[0] = (hb_set_digest_combiner_t)0x0;
        local_58[1] = (hb_set_digest_combiner_t)0x0;
        local_58[2] = (hb_set_digest_combiner_t)0x0;
        local_58[3] = (hb_set_digest_combiner_t)0x0;
        local_58[4] = (hb_set_digest_combiner_t)0x0;
        local_58[5] = (hb_set_digest_combiner_t)0x0;
        local_58[6] = (hb_set_digest_combiner_t)0x0;
        local_58[7] = (hb_set_digest_combiner_t)0x0;
        local_58[8] = (hb_set_digest_combiner_t)0x0;
        local_58[9] = (hb_set_digest_combiner_t)0x0;
        local_58[10] = (hb_set_digest_combiner_t)0x0;
        local_58[0xb] = (hb_set_digest_combiner_t)0x0;
        local_58[0xc] = (hb_set_digest_combiner_t)0x0;
        local_58[0xd] = (hb_set_digest_combiner_t)0x0;
        local_58[0xe] = (hb_set_digest_combiner_t)0x0;
        local_58[0xf] = (hb_set_digest_combiner_t)0x0;
        local_48 = 0;
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                   ((long)puVar9 +
                   (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18) + 0xc),local_58,in_EDX);
        local_88 = local_48;
        local_68 = local_48;
        local_98[0] = local_58[0];
        local_98[1] = local_58[1];
        local_98[2] = local_58[2];
        local_98[3] = local_58[3];
        local_98[4] = local_58[4];
        local_98[5] = local_58[5];
        local_98[6] = local_58[6];
        local_98[7] = local_58[7];
        local_98[8] = local_58[8];
        local_98[9] = local_58[9];
        local_98[10] = local_58[10];
        local_98[0xb] = local_58[0xb];
        local_98[0xc] = local_58[0xc];
        local_98[0xd] = local_58[0xd];
        local_98[0xe] = local_58[0xe];
        local_98[0xf] = local_58[0xf];
        local_78[0] = local_58[0];
        local_78[1] = local_58[1];
        local_78[2] = local_58[2];
        local_78[3] = local_58[3];
        local_78[4] = local_58[4];
        local_78[5] = local_58[5];
        local_78[6] = local_58[6];
        local_78[7] = local_58[7];
        local_78[8] = local_58[8];
        local_78[9] = local_58[9];
        local_78[10] = local_58[10];
        local_78[0xb] = local_58[0xb];
        local_78[0xc] = local_58[0xc];
        local_78[0xd] = local_58[0xd];
        local_78[0xe] = local_58[0xe];
        local_78[0xf] = local_58[0xf];
        break;
      case 2:
        uVar8 = puVar9[4];
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                   ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                           uVar8 << 0x18) + (long)puVar9),(hb_set_digest_combiner_t *)local_98,
                   in_EDX);
        uVar8 = puVar9[5];
LAB_00108d3f:
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                   ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                           uVar8 << 0x18) + (long)puVar9),(hb_set_digest_combiner_t *)local_78,
                   in_EDX);
        uVar14 = puVar10[1];
        uVar4 = (ulong)uVar14;
        uVar8 = *puVar10;
        uVar7 = uVar14 + 1;
        if ((int)uVar8 <= (int)uVar14) goto LAB_00108d64;
        goto LAB_00108ca4;
      case 6:
        uVar8 = puVar9[5];
        this = (Lookup<OT::IntType<unsigned_short,2u>> *)
               ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                       uVar8 << 0x18) + (long)puVar9);
        if ((*(byte *)((long)puVar9 + 0xf) & 1) == 0) {
          Lookup<OT::IntType<unsigned_short,2u>>::
          collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                    (this,(hb_set_digest_combiner_t *)local_98,in_EDX);
          uVar8 = puVar9[6];
          goto LAB_00108d3f;
        }
        Lookup<OT::IntType<unsigned_int,4u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_int,4u>> *)this,(hb_set_digest_combiner_t *)local_98
                   ,in_EDX);
        uVar8 = puVar9[6];
        Lookup<OT::IntType<unsigned_int,4u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_int,4u>> *)
                   ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                           uVar8 << 0x18) + (long)puVar9),(hb_set_digest_combiner_t *)local_78,
                   in_EDX);
      }
      uVar14 = puVar10[1];
      uVar4 = (ulong)uVar14;
      uVar8 = *puVar10;
      uVar7 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar8) {
LAB_00108ca4:
        pvVar6 = *(void **)(puVar10 + 2);
LAB_00108ca8:
        puVar10[1] = uVar7;
        puVar5 = (undefined8 *)(uVar4 * 0x30 + (long)pvVar6);
        *puVar5 = local_98._0_8_;
        puVar5[1] = local_98._8_8_;
        puVar5[2] = local_88;
        puVar5[3] = local_78._0_8_;
        puVar5[4] = local_78._8_8_;
        puVar5[5] = local_68;
      }
      else {
LAB_00108d64:
        if (-1 < (int)uVar8) {
          uVar15 = (ulong)uVar8;
          if (uVar7 <= uVar8) goto LAB_00108ca4;
          do {
            uVar14 = (int)uVar15 + 8 + (int)(uVar15 >> 1);
            uVar15 = (ulong)uVar14;
          } while (uVar14 < uVar7);
          if (0x5555555 < uVar14) {
            *puVar10 = ~uVar8;
            goto LAB_00108efa;
          }
          pvVar6 = realloc(*(void **)(puVar10 + 2),uVar15 * 0x30);
          if (pvVar6 == (void *)0x0) {
            if (*puVar10 < uVar14) {
              *puVar10 = ~*puVar10;
              goto LAB_00108efa;
            }
            uVar4 = (ulong)puVar10[1];
            pvVar6 = *(void **)(puVar10 + 2);
            uVar7 = puVar10[1] + 1;
          }
          else {
            *(void **)(puVar10 + 2) = pvVar6;
            uVar4 = (ulong)puVar10[1];
            *puVar10 = uVar14;
            uVar7 = puVar10[1] + 1;
          }
          goto LAB_00108ca8;
        }
LAB_00108efa:
        __hb_CrapPool = __hb_NullPool;
        _hb_face_get_glyph_count = __hb_Null_OT_RangeRecord;
        _hb_face_reference_table = ___stack_chk_fail;
        _hb_blob_reference = _message_impl;
        _hb_blob_make_immutable = __hb_Null_AAT_Lookup;
        _is_blocklisted = _hb_blob_destroy;
      }
      uVar8 = *puVar9;
      uVar13 = uVar13 + 1;
      puVar9 = (uint *)((long)puVar9 +
                       (ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18));
    } while (uVar13 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<AAT::trak, 32u, false>::create(hb_face_t*) */

long hb_table_lazy_loader_t<AAT::trak,32u,false>::create(hb_face_t *param_1)

{
  trak *this;
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
  undefined1 local_3c;
  undefined1 local_3b;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = '\0';
  local_3b = 0;
  local_40 = hb_face_get_glyph_count();
  local_3c = 1;
  lVar2 = hb_face_reference_table(param_1,0x7472616b);
  lVar3 = hb_blob_reference(lVar2);
  local_48 = lVar3;
  do {
    local_60 = *(uint *)(lVar3 + 0x18);
    this = *(trak **)(lVar3 + 0x10);
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
    if (this == (trak *)0x0) {
      hb_blob_destroy(lVar3);
LAB_001090a3:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar2;
      }
      goto LAB_0010917e;
    }
    cVar1 = AAT::trak::sanitize(this,(hb_sanitize_context_t *)local_78);
    lVar3 = local_48;
    if (cVar1 != '\0') {
      if (local_4c == 0) {
        hb_blob_destroy(local_48);
      }
      else {
        local_4c = 0;
        cVar1 = AAT::trak::sanitize(this,(hb_sanitize_context_t *)local_78);
        if (local_4c != 0) {
          hb_blob_destroy(local_48);
          goto LAB_001090d0;
        }
        hb_blob_destroy(local_48);
        local_48 = 0;
        local_60 = 0;
        local_70 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_001090d0;
      }
      hb_blob_make_immutable(lVar2);
      goto LAB_001090a3;
    }
    if ((local_4c == 0) || (local_50 != '\0')) {
LAB_001090c8:
      hb_blob_destroy(lVar3);
LAB_001090d0:
      hb_blob_destroy(lVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar3 = hb_blob_get_empty();
        return lVar3;
      }
LAB_0010917e:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_70._0_8_ = hb_blob_get_data_writable(lVar2,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar2 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_001090c8;
    local_50 = '\x01';
  } while( true );
}



/* hb_table_lazy_loader_t<AAT::feat, 34u, false>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<AAT::feat,34u,false>::create(hb_face_t *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  short *psVar9;
  ulong uVar10;
  
  hb_face_get_glyph_count();
  uVar6 = hb_face_reference_table(param_1,0x66656174);
  lVar7 = hb_blob_reference(uVar6);
  uVar1 = *(uint *)(lVar7 + 0x18);
  uVar10 = (ulong)uVar1;
  psVar2 = *(short **)(lVar7 + 0x10);
  if (uVar1 >> 0x1a == 0) {
    uVar5 = uVar1 << 6;
    if (0x3fffffff < uVar1 << 6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 < 0x4000) {
      uVar5 = 0x4000;
    }
  }
  else {
    uVar5 = 0x3fffffff;
  }
  if (psVar2 == (short *)0x0) {
    hb_blob_destroy(lVar7);
    return uVar6;
  }
  if ((0xb < uVar10) && (*psVar2 == 0x100)) {
    uVar4 = psVar2[2] << 8 | (ushort)psVar2[2] >> 8;
    iVar8 = (uint)uVar4 + (uint)uVar4 * 2;
    if (((uint)(iVar8 * 4) <= uVar1 - 0xc) && (iVar8 = uVar5 + iVar8 * -4, 0 < iVar8)) {
      if (uVar4 != 0) {
        psVar9 = psVar2 + 0xc;
        do {
          if (uVar10 < (ulong)((long)psVar9 - (long)psVar2)) goto LAB_0010928c;
          uVar5 = *(uint *)(psVar9 + -4);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if (((uVar10 < uVar5) ||
              (uVar3 = (uint)(ushort)(psVar9[-5] << 8 | (ushort)psVar9[-5] >> 8),
              uVar1 - uVar5 < uVar3 * 4)) || (iVar8 = iVar8 + uVar3 * -4, iVar8 < 1))
          goto LAB_0010928c;
          psVar9 = psVar9 + 6;
        } while (psVar2 + (ulong)(uVar4 - 1) * 6 + 0x12 != psVar9);
      }
      hb_blob_destroy(lVar7);
      hb_blob_make_immutable(uVar6);
      return uVar6;
    }
  }
LAB_0010928c:
  hb_blob_destroy(lVar7);
  hb_blob_destroy(uVar6);
  uVar6 = hb_blob_get_empty();
  return uVar6;
}



/* AAT::StateTable<AAT::ObsoleteTypes,
   AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>::sanitize(hb_sanitize_context_t*,
   unsigned int*) const */

undefined1  [16] __thiscall
AAT::StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>::sanitize
          (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
           *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar12;
  ulong uVar13;
  ulong uVar14;
  StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar21;
  uint uVar22;
  StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar23;
  StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar24;
  undefined1 auVar25 [16];
  
  pSVar12 = this + (8 - *(long *)(param_1 + 8));
  if (((this + (8 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8,
      pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)uVar8, 3 < uVar8)) &&
     (pSVar12 = this + (4 - *(long *)(param_1 + 8)),
     this + (4 - *(long *)(param_1 + 8)) <=
     (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData> *)
     (ulong)*(uint *)(param_1 + 0x18))) {
    pSVar12 = this + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    pSVar15 = pSVar12 + 4;
    if ((ulong)((long)pSVar15 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      lVar2 = *(long *)(param_1 + 8);
      pSVar24 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)*(uint *)(param_1 + 0x18);
      uVar8 = *(ushort *)(pSVar12 + 2);
      pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)uVar8;
      if (pSVar15 + -lVar2 <= pSVar24) {
        lVar3 = *(long *)(param_1 + 0x10);
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                   *)(ulong)uVar8;
        if (((uint)uVar8 <= (uint)((int)lVar3 - (int)pSVar15)) &&
           (iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar8, *(int *)(param_1 + 0x1c) = iVar6,
           0 < iVar6)) {
          uVar7 = 0;
          uVar22 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar20 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
          uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8;
          pSVar15 = this + (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
          pSVar21 = this + uVar20;
          uVar18 = (ulong)uVar8;
          uVar17 = (uint)uVar8;
          uVar11 = 0;
LAB_0010953f:
          uVar19 = uVar13;
          if ((int)uVar11 <= (int)uVar16) {
            while( true ) {
              uVar1 = uVar16 + 1;
              uVar4 = uVar1 * uVar18;
              uVar9 = (uint)(uVar4 >> 0x20);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(ulong)uVar9;
              if (((uVar9 != 0) || (pSVar12 = pSVar21 + -lVar2, pSVar24 < pSVar12)) ||
                 (pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                             *)(lVar3 - (long)pSVar21), (uint)pSVar12 < (uint)uVar4))
              goto LAB_00109378;
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(uVar4 & 0xffffffff);
              iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar4;
              if (iVar6 < 1) break;
              uVar9 = iVar6 - ((uVar16 - uVar11) + 1);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(ulong)uVar9;
              *(uint *)(param_1 + 0x1c) = uVar9;
              if (((int)uVar9 < 1) || (CARRY8(uVar4 & 0xffffffff,(ulong)pSVar21)))
              goto LAB_00109378;
              pSVar12 = pSVar21 + uVar11 * uVar17;
              uVar14 = uVar13;
              if (pSVar12 < pSVar21 + (uVar4 & 0xffffffff)) {
                do {
                  if ((uint)uVar19 < (byte)*pSVar12 + 1) {
                    uVar19 = (ulong)((byte)*pSVar12 + 1);
                  }
                  pSVar12 = pSVar12 + 1;
                } while (pSVar21 + (uVar4 & 0xffffffff) != pSVar12);
              }
              do {
                uVar13 = uVar19;
                iVar6 = (int)uVar13;
                pSVar12 = pSVar15 + -lVar2;
                if ((pSVar24 < pSVar15 + -lVar2) ||
                   (pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                               *)(lVar3 - (long)pSVar15), (uint)pSVar12 < (uint)(iVar6 * 8)))
                goto LAB_00109378;
                uVar11 = *(int *)(param_1 + 0x1c) + iVar6 * -8;
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar11;
                if ((int)uVar11 < 1) {
                  *(uint *)(param_1 + 0x1c) = uVar11;
                  goto LAB_00109378;
                }
                iVar6 = ((int)uVar14 - iVar6) + uVar11;
                *(int *)(param_1 + 0x1c) = iVar6;
                if (iVar6 < 1) goto LAB_00109378;
                for (pSVar23 = pSVar15 + uVar14 * 8; pSVar23 < pSVar15 + uVar13 * 8;
                    pSVar23 = pSVar23 + 8) {
                  iVar6 = (uint)(ushort)(*(ushort *)pSVar23 << 8 | *(ushort *)pSVar23 >> 8) -
                          (uint)uVar20;
                  uVar11 = iVar6 / (int)uVar17;
                  pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                             *)((long)iVar6 % (long)(int)uVar17 & 0xffffffff);
                  if ((int)uVar11 < (int)uVar7) {
                    uVar7 = uVar11;
                  }
                  if ((int)uVar16 < (int)uVar11) {
                    uVar16 = uVar11;
                  }
                }
                uVar11 = uVar1;
                if ((int)uVar22 <= (int)uVar7) goto LAB_0010953f;
                uVar9 = (uint)(uVar7 * uVar18 >> 0x20);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar9;
                if (uVar9 != 0) goto LAB_00109378;
                uVar10 = (uint)(-uVar7 * uVar18 >> 0x20);
                uVar9 = (uint)(-uVar7 * uVar18);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar10;
                if (((uVar10 != 0) ||
                    (pSVar12 = pSVar21 + (uVar7 * uVar18 & 0xffffffff), pSVar24 < pSVar12 + -lVar2))
                   || ((uint)((int)lVar3 - (int)pSVar12) < uVar9)) goto LAB_00109378;
                iVar6 = *(int *)(param_1 + 0x1c) - uVar9;
                if (iVar6 < 1) {
                  *(int *)(param_1 + 0x1c) = iVar6;
                  goto LAB_00109378;
                }
                iVar6 = iVar6 - (uVar22 - uVar7);
                *(int *)(param_1 + 0x1c) = iVar6;
                if ((iVar6 < 1) || (pSVar21 < pSVar12)) goto LAB_00109378;
                uVar19 = uVar13;
                pSVar23 = pSVar21;
                if (pSVar12 < pSVar21) {
                  do {
                    if ((uint)uVar19 < (byte)pSVar23[-1] + 1) {
                      uVar19 = (ulong)((byte)pSVar23[-1] + 1);
                    }
                    pSVar23 = pSVar23 + -1;
                  } while (pSVar12 != pSVar23);
                }
                uVar14 = uVar13;
                uVar22 = uVar7;
              } while ((int)uVar16 < (int)uVar1);
            }
            *(int *)(param_1 + 0x1c) = iVar6;
            goto LAB_00109378;
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)uVar13;
          }
          uVar5 = 1;
          goto LAB_0010937a;
        }
      }
    }
  }
LAB_00109378:
  uVar5 = 0;
LAB_0010937a:
  auVar25._8_8_ = pSVar12;
  auVar25._0_8_ = uVar5;
  return auVar25;
}



/* AAT::StateTable<AAT::ObsoleteTypes,
   AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>::sanitize(hb_sanitize_context_t*, unsigned
   int*) const */

undefined1  [16] __thiscall
AAT::StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>::sanitize
          (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
           *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar12;
  ulong uVar13;
  ulong uVar14;
  StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar21;
  uint uVar22;
  StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar23;
  StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *pSVar24;
  undefined1 auVar25 [16];
  
  pSVar12 = this + (8 - *(long *)(param_1 + 8));
  if (((this + (8 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8,
      pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)uVar8, 3 < uVar8)) &&
     (pSVar12 = this + (4 - *(long *)(param_1 + 8)),
     this + (4 - *(long *)(param_1 + 8)) <=
     (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData> *)
     (ulong)*(uint *)(param_1 + 0x18))) {
    pSVar12 = this + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    pSVar15 = pSVar12 + 4;
    if ((ulong)((long)pSVar15 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
      lVar2 = *(long *)(param_1 + 8);
      pSVar24 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)*(uint *)(param_1 + 0x18);
      uVar8 = *(ushort *)(pSVar12 + 2);
      pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                 *)(ulong)uVar8;
      if (pSVar15 + -lVar2 <= pSVar24) {
        lVar3 = *(long *)(param_1 + 0x10);
        uVar8 = uVar8 << 8 | uVar8 >> 8;
        pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                   *)(ulong)uVar8;
        if (((uint)uVar8 <= (uint)((int)lVar3 - (int)pSVar15)) &&
           (iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar8, *(int *)(param_1 + 0x1c) = iVar6,
           0 < iVar6)) {
          uVar7 = 0;
          uVar22 = 0;
          uVar16 = 0;
          uVar13 = 0;
          uVar20 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
          uVar8 = *(ushort *)this << 8 | *(ushort *)this >> 8;
          pSVar15 = this + (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
          pSVar21 = this + uVar20;
          uVar18 = (ulong)uVar8;
          uVar17 = (uint)uVar8;
          uVar11 = 0;
LAB_0010987f:
          uVar19 = uVar13;
          if ((int)uVar11 <= (int)uVar16) {
            while( true ) {
              uVar1 = uVar16 + 1;
              uVar4 = uVar1 * uVar18;
              uVar9 = (uint)(uVar4 >> 0x20);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(ulong)uVar9;
              if (((uVar9 != 0) || (pSVar12 = pSVar21 + -lVar2, pSVar24 < pSVar12)) ||
                 (pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                             *)(lVar3 - (long)pSVar21), (uint)pSVar12 < (uint)uVar4))
              goto LAB_001096b8;
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(uVar4 & 0xffffffff);
              iVar6 = *(int *)(param_1 + 0x1c) - (uint)uVar4;
              if (iVar6 < 1) break;
              uVar9 = iVar6 - ((uVar16 - uVar11) + 1);
              pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                         *)(ulong)uVar9;
              *(uint *)(param_1 + 0x1c) = uVar9;
              if (((int)uVar9 < 1) || (CARRY8(uVar4 & 0xffffffff,(ulong)pSVar21)))
              goto LAB_001096b8;
              pSVar12 = pSVar21 + uVar11 * uVar17;
              uVar14 = uVar13;
              if (pSVar12 < pSVar21 + (uVar4 & 0xffffffff)) {
                do {
                  if ((uint)uVar19 < (byte)*pSVar12 + 1) {
                    uVar19 = (ulong)((byte)*pSVar12 + 1);
                  }
                  pSVar12 = pSVar12 + 1;
                } while (pSVar21 + (uVar4 & 0xffffffff) != pSVar12);
              }
              do {
                uVar13 = uVar19;
                iVar6 = (int)uVar13;
                pSVar12 = pSVar15 + -lVar2;
                if ((pSVar24 < pSVar15 + -lVar2) ||
                   (pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                               *)(lVar3 - (long)pSVar15), (uint)pSVar12 < (uint)(iVar6 * 8)))
                goto LAB_001096b8;
                uVar11 = *(int *)(param_1 + 0x1c) + iVar6 * -8;
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar11;
                if ((int)uVar11 < 1) {
                  *(uint *)(param_1 + 0x1c) = uVar11;
                  goto LAB_001096b8;
                }
                iVar6 = ((int)uVar14 - iVar6) + uVar11;
                *(int *)(param_1 + 0x1c) = iVar6;
                if (iVar6 < 1) goto LAB_001096b8;
                for (pSVar23 = pSVar15 + uVar14 * 8; pSVar23 < pSVar15 + uVar13 * 8;
                    pSVar23 = pSVar23 + 8) {
                  iVar6 = (uint)(ushort)(*(ushort *)pSVar23 << 8 | *(ushort *)pSVar23 >> 8) -
                          (uint)uVar20;
                  uVar11 = iVar6 / (int)uVar17;
                  pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                             *)((long)iVar6 % (long)(int)uVar17 & 0xffffffff);
                  if ((int)uVar11 < (int)uVar7) {
                    uVar7 = uVar11;
                  }
                  if ((int)uVar16 < (int)uVar11) {
                    uVar16 = uVar11;
                  }
                }
                uVar11 = uVar1;
                if ((int)uVar22 <= (int)uVar7) goto LAB_0010987f;
                uVar9 = (uint)(uVar7 * uVar18 >> 0x20);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar9;
                if (uVar9 != 0) goto LAB_001096b8;
                uVar10 = (uint)(-uVar7 * uVar18 >> 0x20);
                uVar9 = (uint)(-uVar7 * uVar18);
                pSVar12 = (StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                           *)(ulong)uVar10;
                if (((uVar10 != 0) ||
                    (pSVar12 = pSVar21 + (uVar7 * uVar18 & 0xffffffff), pSVar24 < pSVar12 + -lVar2))
                   || ((uint)((int)lVar3 - (int)pSVar12) < uVar9)) goto LAB_001096b8;
                iVar6 = *(int *)(param_1 + 0x1c) - uVar9;
                if (iVar6 < 1) {
                  *(int *)(param_1 + 0x1c) = iVar6;
                  goto LAB_001096b8;
                }
                iVar6 = iVar6 - (uVar22 - uVar7);
                *(int *)(param_1 + 0x1c) = iVar6;
                if ((iVar6 < 1) || (pSVar21 < pSVar12)) goto LAB_001096b8;
                uVar19 = uVar13;
                pSVar23 = pSVar21;
                if (pSVar12 < pSVar21) {
                  do {
                    if ((uint)uVar19 < (byte)pSVar23[-1] + 1) {
                      uVar19 = (ulong)((byte)pSVar23[-1] + 1);
                    }
                    pSVar23 = pSVar23 + -1;
                  } while (pSVar12 != pSVar23);
                }
                uVar14 = uVar13;
                uVar22 = uVar7;
              } while ((int)uVar16 < (int)uVar1);
            }
            *(int *)(param_1 + 0x1c) = iVar6;
            goto LAB_001096b8;
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)uVar13;
          }
          uVar5 = 1;
          goto LAB_001096ba;
        }
      }
    }
  }
LAB_001096b8:
  uVar5 = 0;
LAB_001096ba:
  auVar25._8_8_ = pSVar12;
  auVar25._0_8_ = uVar5;
  return auVar25;
}



/* OT::hb_kern_machine_t<AAT::KerxSubTableFormat0<AAT::KerxSubTableHeader>::accelerator_t>::kern(hb_font_t*,
   hb_buffer_t*, unsigned int, bool) const */

void __thiscall
OT::hb_kern_machine_t<AAT::KerxSubTableFormat0<AAT::KerxSubTableHeader>::accelerator_t>::kern
          (hb_kern_machine_t<AAT::KerxSubTableFormat0<AAT::KerxSubTableHeader>::accelerator_t> *this
          ,hb_font_t *param_1,hb_buffer_t *param_2,uint param_3,bool param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  hb_blob_t *phVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  ushort *puVar25;
  ushort uVar26;
  short sVar27;
  long in_FS_OFFSET;
  hb_ot_apply_context_t local_198 [8];
  uint local_190;
  hb_ot_apply_context_t *local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  char local_177;
  undefined1 local_176 [2];
  char cStack_174;
  code *local_170;
  undefined1 local_168 [16];
  int local_158;
  hb_ot_apply_context_t *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [2];
  char cStack_136;
  byte local_135;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128 [16];
  int local_118;
  int local_110;
  long local_f8;
  long local_c0;
  void *local_90;
  uint local_6c;
  undefined4 local_64;
  undefined1 local_5b;
  char local_5a;
  byte local_59;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar9 = hb_buffer_t::message(param_2,param_1,"start kern");
  if (cVar9 == '\0') goto LAB_00109d3a;
  if (((byte)param_2[0x18] & 0x40) != 0) {
    hb_buffer_t::_set_glyph_flags(param_2,2,0,0xffffffff,false,false);
  }
  phVar14 = (hb_blob_t *)hb_blob_get_empty();
  hb_ot_apply_context_t::hb_ot_apply_context_t(local_198,1,param_1,param_2,phVar14);
  local_50 = 0xffffffff;
  local_158 = *(int *)(local_f8 + 0x60);
  local_170 = (code *)0x0;
  local_168 = (undefined1  [16])0x0;
  if (local_110 == 1) {
    local_178 = '\x01';
    _local_176 = 1;
    local_138 = (undefined1  [2])0x101;
    cVar11 = cVar9;
LAB_00109dc2:
    _local_138 = CONCAT12(cVar11,local_138);
    local_59 = 0;
  }
  else {
    local_178 = '\0';
    if (local_110 != 0) {
      _local_176 = 0;
      local_138[1] = 1;
      local_138[0] = local_5b;
      cVar11 = '\0';
      goto LAB_00109dc2;
    }
    _local_176 = (uint3)local_59 << 8;
    _local_138 = CONCAT21(1,local_5b);
  }
  local_177 = local_5a;
  local_128 = (undefined1  [16])0x0;
  local_130 = 0;
  local_13c = 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x38);
  lVar5 = *(long *)(param_2 + 0x80);
  uVar20 = 0;
  local_134 = 0;
  lVar6 = *(long *)(param_2 + 0x70);
  uVar4 = *(uint *)(param_2 + 0x60);
  local_64 = 8;
  local_180 = 8;
  local_140 = 8;
  local_188 = local_198;
  local_17c = param_3;
  local_148 = local_198;
  local_135 = local_59;
  local_118 = local_158;
  local_6c = param_3;
  if (uVar4 != 0) {
    do {
      lVar22 = (ulong)uVar20 * 0x14;
      puVar2 = (uint *)(lVar6 + lVar22);
      if ((param_3 & puVar2[1]) == 0) {
LAB_00109b38:
        uVar19 = uVar20 + 1;
      }
      else {
        uVar10 = 0;
        lVar7 = *(long *)(local_188 + 0xa0);
        local_158 = *(int *)(lVar7 + 0x60);
        if (*(uint *)(lVar7 + 0x5c) == uVar20) {
          uVar10 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xf + lVar22);
        }
        if (local_176[1] == '\0') {
          uVar10 = 0;
        }
        iVar16 = local_158 + -1;
        _local_176 = CONCAT12(uVar10,local_176);
        local_190 = uVar20;
LAB_00109ba1:
        do {
          uVar15 = (ulong)local_190;
          while( true ) {
            cVar11 = '\0';
            do {
              uVar24 = (uint)uVar15;
              if (iVar16 <= (int)uVar24) {
                if (cVar11 != '\0') {
                  local_190 = uVar24;
                }
                goto LAB_00109b38;
              }
              uVar24 = uVar24 + 1;
              uVar15 = (ulong)uVar24;
              puVar1 = (uint *)(*(long *)(*(long *)(local_188 + 0xa0) + 0x70) + uVar15 * 0x14);
              uVar26 = (ushort)puVar1[3];
              cVar11 = cVar9;
            } while ((uVar26 & local_180 & 0xe) != 0);
            local_190 = uVar24;
            if ((uVar26 & 8) == 0) goto LAB_00109bee;
            if ((local_180 & 0x10) != 0) break;
            if (((local_180 & 0xff00) == 0) || (((uVar26 ^ local_180) & 0xff00) == 0))
            goto LAB_00109bee;
          }
          cVar11 = hb_ot_apply_context_t::match_properties_mark
                             ((uint)*(undefined8 *)(local_188 + 0xf8),*puVar1,local_180);
          if (cVar11 == '\0') goto LAB_00109ba1;
LAB_00109bee:
          uVar26 = (ushort)puVar1[4];
          sVar27 = 0;
          if (((uVar26 & 0x20) != 0) && ((puVar1[3] & 0x10) == 0)) {
            if (local_178 == '\0') {
              if ((uVar26 & 0x1f) == 1) {
                sVar27 = 0;
                if ((uVar26 & 0x200) != 0) goto LAB_00109c38;
                if (local_177 == '\0') goto LAB_0010a0a4;
              }
            }
            else if ((local_177 == '\0') && ((uVar26 & 0x1f) == 1)) {
LAB_0010a0a4:
              sVar27 = 0;
              if ((uVar26 & 0x100) != 0) goto LAB_00109c38;
            }
            if (local_176[0] == '\0') {
              sVar27 = ((uVar26 >> 6 ^ 1) & 1) * 2;
            }
            else {
              sVar27 = 2;
            }
          }
LAB_00109c38:
          uVar26 = 0;
          if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
            uVar26 = *(ushort *)local_168._8_8_ << 8 | *(ushort *)local_168._8_8_ >> 8;
          }
          if (((puVar1[1] & local_17c) == 0) ||
             ((cStack_174 != '\0' && (cStack_174 != *(char *)((long)puVar1 + 0xf))))) {
LAB_00109de0:
            if (sVar27 == 0) goto LAB_00109b38;
            goto LAB_00109ba1;
          }
          if (local_170 != (code *)0x0) {
            cVar11 = (*local_170)(puVar1,uVar26,local_168._0_8_);
            if (cVar11 == '\0') goto LAB_00109de0;
            break;
          }
        } while (sVar27 != 0);
        if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
          local_168._8_8_ = (ushort *)(local_168._8_8_ + 2);
        }
        uVar24 = *puVar2;
        lVar7 = (*(long **)this)[1];
        uVar19 = local_190;
        if ((((1L << ((byte)(uVar24 >> 4) & 0x3f) & *(ulong *)(lVar7 + 0xb0)) != 0) &&
            ((1L << ((byte)uVar24 & 0x3f) & *(ulong *)(lVar7 + 0xb8)) != 0)) &&
           ((1L << ((byte)(uVar24 >> 9) & 0x3f) & *(ulong *)(lVar7 + 0xc0)) != 0)) {
          uVar13 = *(uint *)(lVar6 + (ulong)local_190 * 0x14);
          lVar17 = (ulong)local_190 * 0x14;
          if ((((1L << ((byte)(uVar13 >> 4) & 0x3f) & *(ulong *)(lVar7 + 200)) != 0) &&
              ((1L << ((byte)uVar13 & 0x3f) & *(ulong *)(lVar7 + 0xd0)) != 0)) &&
             ((1L << ((byte)(uVar13 >> 9) & 0x3f) & *(ulong *)(lVar7 + 0xd8)) != 0)) {
            lVar8 = **(long **)this;
            puVar25 = (ushort *)&_hb_NullPool;
            uVar12 = *(uint *)(lVar8 + 0xc);
            iVar16 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18) - 1;
            if (-1 < iVar16) {
              iVar23 = 0;
              do {
                while( true ) {
                  uVar21 = (uint)(iVar23 + iVar16) >> 1;
                  puVar25 = (ushort *)(lVar8 + 0x1c + (ulong)uVar21 * 6);
                  uVar12 = (uint)(ushort)(*puVar25 << 8 | *puVar25 >> 8);
                  if (uVar12 <= uVar24) break;
LAB_00109ec0:
                  iVar16 = uVar21 - 1;
                  if (iVar16 < iVar23) goto LAB_00109f04;
                }
                if (uVar24 == uVar12) {
                  uVar12 = (uint)(ushort)(puVar25[1] << 8 | puVar25[1] >> 8);
                  if (uVar13 < uVar12) goto LAB_00109ec0;
                  if (uVar13 == uVar12) goto LAB_00109f0f;
                }
                iVar23 = uVar21 + 1;
              } while (iVar23 <= iVar16);
LAB_00109f04:
              puVar25 = (ushort *)&_hb_NullPool;
            }
LAB_00109f0f:
            uVar24 = *(uint *)(lVar8 + 8);
            uVar13 = (uint)(short)(puVar25[2] << 8 | puVar25[2] >> 8);
            if (uVar24 != 0) {
              uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
              if ((((int)uVar24 < 0) ||
                  (puVar25 = (ushort *)((ulong)uVar13 + lVar8),
                  (ulong)*(uint *)(lVar7 + 0x40) < (ulong)((long)puVar25 - *(long *)(lVar7 + 0x30)))
                  ) || (((uint)((int)*(undefined8 *)(lVar7 + 0x38) - (int)puVar25) < uVar24 * 2 ||
                        (iVar16 = *(int *)(lVar7 + 0x44) + uVar24 * -2,
                        *(int *)(lVar7 + 0x44) = iVar16, iVar16 < 1)))) goto LAB_00109b3b;
              uVar13 = (uint)(short)(*puVar25 << 8 | *puVar25 >> 8);
            }
            if (uVar13 != 0) {
              if ((uVar3 & 0xfffffffe) == 4) {
                if (param_4) {
                  uVar13 = (uint)((ulong)((long)(int)uVar13 * *(long *)(param_1 + 0x58) + 0x8000) >>
                                 0x10);
                }
                piVar18 = (int *)(lVar17 + lVar5);
                if (this[8] ==
                    (hb_kern_machine_t<AAT::KerxSubTableFormat0<AAT::KerxSubTableHeader>::accelerator_t>
                     )0x0) {
                  iVar16 = uVar13 - ((int)uVar13 >> 1);
                  *(int *)(lVar5 + lVar22) = *(int *)(lVar5 + lVar22) + ((int)uVar13 >> 1);
                  *piVar18 = *piVar18 + iVar16;
                  piVar18[2] = piVar18[2] + iVar16;
                }
                else {
                  piVar18[3] = uVar13;
                  *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                }
              }
              else {
                if (param_4) {
                  uVar13 = (uint)((ulong)((long)(int)uVar13 * *(long *)(param_1 + 0x60) + 0x8000) >>
                                 0x10);
                }
                lVar17 = lVar17 + lVar5;
                if (this[8] ==
                    (hb_kern_machine_t<AAT::KerxSubTableFormat0<AAT::KerxSubTableHeader>::accelerator_t>
                     )0x0) {
                  iVar16 = uVar13 - ((int)uVar13 >> 1);
                  piVar18 = (int *)(lVar5 + 4 + lVar22);
                  *piVar18 = *piVar18 + ((int)uVar13 >> 1);
                  *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + iVar16;
                  *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + iVar16;
                }
                else {
                  *(uint *)(lVar17 + 8) = uVar13;
                  *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                }
              }
              hb_buffer_t::_set_glyph_flags(param_2,3,uVar20,local_190 + 1,true,false);
              uVar19 = local_190;
            }
          }
        }
      }
LAB_00109b3b:
      uVar20 = uVar19;
    } while (uVar19 < uVar4);
  }
  hb_buffer_t::message(param_2,param_1,"end kern");
  free(local_90);
  if (local_c0 != 0) {
    hb_blob_destroy();
  }
LAB_00109d3a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AAT::LookupFormat4<OT::HBGlyphID16>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
AAT::LookupFormat4<OT::HBGlyphID16>::sanitize
          (LookupFormat4<OT::HBGlyphID16> *this,hb_sanitize_context_t *param_1)

{
  LookupFormat4<OT::HBGlyphID16> *pLVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  LookupFormat4<OT::HBGlyphID16> *pLVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar2 < 6)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar3 = (uint)uVar2 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar3 ||
      (iVar7 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar3 = (uint)uVar2;
  if ((uVar3 == 0) ||
     ((uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                      (uVar2 - 1)), *(short *)(this + uVar4 + 0xc) == -1 &&
      (uVar3 = uVar3 - (*(short *)(this + uVar4 + 0xe) == -1), uVar3 == 0)))) {
    return 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar8 = (uint)uVar2;
    pLVar5 = (LookupFormat4<OT::HBGlyphID16> *)&_hb_NullPool;
    if (uVar8 != 0) {
      uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                     (uVar8 - 1));
      if (*(short *)(pLVar1 + uVar4) == -1) {
        uVar8 = uVar8 - (*(short *)(this + uVar4 + 0xe) == -1);
      }
      pLVar5 = (LookupFormat4<OT::HBGlyphID16> *)&_hb_NullPool;
      if (uVar6 < uVar8) {
        pLVar5 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * uVar6;
      }
    }
    if ((LookupFormat4<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar8 = (uint)(ushort)(*(ushort *)pLVar5 << 8 | *(ushort *)pLVar5 >> 8);
    uVar9 = (uint)(ushort)(*(ushort *)(pLVar5 + 2) << 8 | *(ushort *)(pLVar5 + 2) >> 8);
    if (uVar8 < uVar9) {
      return 0;
    }
    iVar7 = (uVar8 + 1) - uVar9;
    if ((LookupFormat4<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (iVar7 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) <
        (ulong)((long)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))
               - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
              (int)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))) <
        (uint)(iVar7 * 2)) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x1c) + iVar7 * -2;
    *(int *)(param_1 + 0x1c) = iVar7;
    if (iVar7 < 1) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == uVar3) {
      return 1;
    }
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 0;
}



/* AAT::Lookup<OT::HBGlyphID16>::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
AAT::Lookup<OT::HBGlyphID16>::sanitize(Lookup<OT::HBGlyphID16> *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Lookup<OT::HBGlyphID16> *pLVar6;
  
  pLVar6 = this + 2;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6) < (uint)(iVar4 * 2)) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x1c) + iVar4 * -2;
    *(int *)(param_1 + 0x1c) = iVar4;
    return (ulong)CONCAT31((int3)((uint)iVar4 >> 8),0 < iVar4);
  default:
    return 1;
  case 2:
    if ((Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 < 6) {
      return 0;
    }
    break;
  case 4:
    uVar5 = LookupFormat4<OT::HBGlyphID16>::sanitize((LookupFormat4<OT::HBGlyphID16> *)this,param_1)
    ;
    return uVar5;
  case 6:
    if ((Lookup<OT::HBGlyphID16> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 < 4) {
      return 0;
    }
    break;
  case 8:
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 6) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) * 2;
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this + 6)) < uVar3) {
      return 0;
    }
    goto LAB_0010a563;
  case 10:
    pLVar6 = this + 8;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (4 < uVar1) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    goto LAB_0010a47f;
  }
  pLVar6 = this + 0xc;
  if ((ulong)((long)pLVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
LAB_0010a47f:
    uVar3 = (uint)uVar2 * (uint)uVar1;
    if (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6)) {
LAB_0010a563:
      iVar4 = *(int *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x1c) = iVar4 - uVar3;
      return (ulong)CONCAT31((int3)(uVar3 >> 8),0 < (int)(iVar4 - uVar3));
    }
  }
  return 0;
}



/* AAT::Chain<AAT::ObsoleteTypes>::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined8 __thiscall
AAT::Chain<AAT::ObsoleteTypes>::sanitize
          (Chain<AAT::ObsoleteTypes> *this,hb_sanitize_context_t *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  Chain<AAT::ObsoleteTypes> *pCVar6;
  Chain<AAT::ObsoleteTypes> *pCVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this + (8 - *(long *)(param_1 + 8)) <=
      (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar9 = *(uint *)(this + 4);
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (0xb < uVar9) {
      lVar5 = *(long *)(param_1 + 8);
      pCVar6 = (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18);
      if ((this + -lVar5 <= pCVar6) &&
         (uVar9 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this))) {
        iVar11 = *(int *)(param_1 + 0x1c) - uVar9;
        *(int *)(param_1 + 0x1c) = iVar11;
        if (0 < iVar11) {
          pCVar7 = this + 0xc;
          if (pCVar7 + -lVar5 <= pCVar6) {
            uVar8 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
            iVar10 = (uint)uVar8 + (uint)uVar8 * 2;
            uVar9 = iVar10 * 4;
            if ((uVar9 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)) &&
               (iVar11 = iVar11 + iVar10 * -4, *(int *)(param_1 + 0x1c) = iVar11, 0 < iVar11)) {
              pCVar7 = pCVar7 + uVar9;
              uVar8 = *(ushort *)(this + 10) << 8 | *(ushort *)(this + 10) >> 8;
              if (uVar8 == 0) {
LAB_0010a868:
                uVar4 = 1;
                if (param_2 < 3) goto LAB_0010a5ea;
                if ((((ulong)((long)pCVar7 - *(long *)(param_1 + 8)) <=
                      (ulong)*(uint *)(param_1 + 0x18)) &&
                    ((uint)uVar8 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7)))
                   && (iVar11 = *(int *)(param_1 + 0x1c) + (uint)uVar8 * -4,
                      *(int *)(param_1 + 0x1c) = iVar11, 0 < iVar11)) {
                  uVar9 = *(int *)(param_1 + 0x38) + 7U >> 3;
                  if (uVar8 != 0) {
                    pCVar6 = pCVar7 + 4;
                    do {
                      uVar1 = *(uint *)(pCVar6 + -4);
                      if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18) - 1 < 0xfffffffe) {
                        if ((ulong)*(uint *)(param_1 + 0x18) <
                            (ulong)((long)pCVar6 - *(long *)(param_1 + 8))) goto LAB_0010a5e8;
                        uVar1 = *(uint *)(pCVar6 + -4);
                        if ((((ulong)*(uint *)(param_1 + 0x18) <
                              (ulong)((long)(pCVar7 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                                       (uVar1 & 0xff00) << 8 | uVar1 << 0x18)) -
                                     *(long *)(param_1 + 8))) ||
                            ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                   (int)(pCVar7 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                                   (uVar1 & 0xff00) << 8 | uVar1 << 0x18))) < uVar9)
                            ) || (iVar11 = *(int *)(param_1 + 0x1c) - uVar9,
                                 *(int *)(param_1 + 0x1c) = iVar11, iVar11 < 1)) goto LAB_0010a5e8;
                      }
                      pCVar6 = pCVar6 + 4;
                    } while (pCVar7 + (ulong)(uVar8 - 1) * 4 + 8 != pCVar6);
                  }
                  uVar4 = 1;
                  goto LAB_0010a5ea;
                }
              }
              else {
                uVar9 = 0;
                while ((pCVar7 + (2 - lVar5) <= pCVar6 &&
                       (uVar3 = *(ushort *)pCVar7 << 8 | *(ushort *)pCVar7 >> 8, 7 < uVar3))) {
                  lVar5 = *(long *)(param_1 + 8);
                  pCVar6 = (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18);
                  if ((pCVar6 < pCVar7 + -lVar5) ||
                     (((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar7) < (uint)uVar3 ||
                      (iVar11 = *(int *)(param_1 + 0x1c) - (uint)uVar3,
                      *(int *)(param_1 + 0x1c) = iVar11, iVar11 < 1)))) break;
                  switch(pCVar7[3]) {
                  case (Chain<AAT::ObsoleteTypes>)0x0:
                    cVar2 = StateTable<AAT::ObsoleteTypes,void>::sanitize
                                      ((StateTable<AAT::ObsoleteTypes,void> *)(pCVar7 + 8),param_1,
                                       (uint *)0x0);
                    goto LAB_0010a754;
                  case (Chain<AAT::ObsoleteTypes>)0x1:
                    local_44 = 0;
                    cVar2 = StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                            ::sanitize((StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                                        *)(pCVar7 + 8),param_1,&local_44);
                    if (((cVar2 == '\0') ||
                        ((Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18) <
                         pCVar7 + (0x12 - *(long *)(param_1 + 8)))) ||
                       (((StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                          *)(ulong)*(uint *)(param_1 + 0x18) <
                         (StateTable<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                          *)(pCVar7 + 8) +
                         ((ulong)(ushort)(*(ushort *)(pCVar7 + 0x10) << 8 |
                                         *(ushort *)(pCVar7 + 0x10) >> 8) - *(long *)(param_1 + 8))
                        || (*(int *)(param_1 + 0x1c) < 1)))) goto LAB_0010a5e8;
                    break;
                  case (Chain<AAT::ObsoleteTypes>)0x2:
                    if ((((pCVar7 + (0x16 - lVar5) <= pCVar6) &&
                         (cVar2 = StateTable<AAT::ObsoleteTypes,void>::sanitize
                                            ((StateTable<AAT::ObsoleteTypes,void> *)(pCVar7 + 8),
                                             param_1,(uint *)0x0), cVar2 != '\0')) &&
                        (*(ushort *)(pCVar7 + 0x10) != 0)) && (*(ushort *)(pCVar7 + 0x12) != 0)) {
                      uVar3 = *(ushort *)(pCVar7 + 0x14);
                      goto joined_r0x0010a73b;
                    }
                    goto LAB_0010a5e8;
                  case (Chain<AAT::ObsoleteTypes>)0x4:
                    cVar2 = Lookup<OT::HBGlyphID16>::sanitize
                                      ((Lookup<OT::HBGlyphID16> *)(pCVar7 + 8),param_1);
LAB_0010a754:
                    if (cVar2 == '\0') goto LAB_0010a5e8;
                    break;
                  case (Chain<AAT::ObsoleteTypes>)0x5:
                    if ((pCVar6 < pCVar7 + (0x12 - lVar5)) ||
                       (cVar2 = StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                                ::sanitize((StateTable<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                                            *)(pCVar7 + 8),param_1,(uint *)0x0), cVar2 == '\0'))
                    goto LAB_0010a5e8;
                    uVar3 = *(ushort *)(pCVar7 + 0x10);
joined_r0x0010a73b:
                    if (uVar3 == 0) goto LAB_0010a5e8;
                  }
                  uVar9 = uVar9 + 1;
                  pCVar7 = pCVar7 + (ushort)(*(ushort *)pCVar7 << 8 | *(ushort *)pCVar7 >> 8);
                  if (uVar9 == uVar8) goto LAB_0010a868;
                  lVar5 = *(long *)(param_1 + 8);
                  pCVar6 = (Chain<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x18);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0010a5e8:
  uVar4 = 0;
LAB_0010a5ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes,
   1836020340u>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  uint uVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  Chain<AAT::ObsoleteTypes> *this_00;
  uint uVar12;
  long in_FS_OFFSET;
  Chain<AAT::ObsoleteTypes> *local_98;
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
  puVar5 = (undefined *)hb_face_reference_table(param_1,0x6d6f7274);
  lVar6 = hb_blob_reference(puVar5);
  local_58 = lVar6;
  do {
    local_70 = *(uint *)(lVar6 + 0x18);
    puVar2 = *(ushort **)(lVar6 + 0x10);
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
    local_80._8_8_ = (long)puVar2 + (ulong)local_70;
    local_80._0_8_ = puVar2;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (puVar2 == (ushort *)0x0) {
      hb_blob_destroy(lVar6);
      local_58 = 0;
      local_70 = 0;
      local_80 = (undefined1  [16])0x0;
      goto LAB_0010ab50;
    }
    if ((ulong)local_70 < 2) goto LAB_0010abf3;
    uVar4 = *puVar2;
    if ((uVar4 != 0) &&
       (local_98 = (Chain<AAT::ObsoleteTypes> *)(puVar2 + 4),
       (ulong)((long)local_98 - (long)puVar2) <= (ulong)local_70)) {
      uVar11 = *(uint *)(puVar2 + 2);
      if (uVar11 == 0) {
LAB_0010ab10:
        if (local_5c == 0) goto LAB_0010ab21;
        local_5c = 0;
        if ((ulong)local_70 < (ulong)((long)puVar2 + (2 - local_80._0_8_))) {
          hb_blob_destroy(local_58);
          goto LAB_0010abf8;
        }
        uVar4 = *puVar2;
        lVar6 = local_58;
        if ((uVar4 != 0) && ((ulong)((long)local_98 - local_80._0_8_) <= (ulong)local_70)) {
          uVar11 = *(uint *)(puVar2 + 2);
          if (uVar11 == 0) goto LAB_0010ace4;
          uVar12 = 0;
          break;
        }
        goto LAB_0010abf3;
      }
      uVar12 = 0;
      this_00 = local_98;
      while (cVar3 = Chain<AAT::ObsoleteTypes>::sanitize
                               (this_00,(hb_sanitize_context_t *)local_88,
                                (uint)(ushort)(uVar4 << 8 | uVar4 >> 8)), cVar3 != '\0') {
        uVar1 = *(uint *)(this_00 + 4);
        uVar12 = uVar12 + 1;
        this_00 = this_00 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
        if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
            uVar12) goto LAB_0010ab10;
        uVar4 = *puVar2;
      }
    }
    lVar6 = local_58;
    if ((local_5c == 0) || (local_60 != '\0')) goto LAB_0010abf3;
    local_80._0_8_ = hb_blob_get_data_writable(puVar5,0);
    local_80._8_8_ = (ulong)*(uint *)(puVar5 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) goto LAB_0010abf3;
    local_60 = '\x01';
  } while( true );
LAB_0010acc0:
  cVar3 = Chain<AAT::ObsoleteTypes>::sanitize
                    (local_98,(hb_sanitize_context_t *)local_88,
                     (uint)(ushort)(uVar4 << 8 | uVar4 >> 8));
  lVar6 = local_58;
  if (cVar3 == '\0') goto LAB_0010abf3;
  uVar1 = *(uint *)(local_98 + 4);
  uVar12 = uVar12 + 1;
  local_98 = local_98 +
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
      uVar12) goto LAB_0010ace4;
  uVar4 = *puVar2;
  goto LAB_0010acc0;
LAB_0010ace4:
  lVar6 = local_58;
  if (local_5c == 0) {
LAB_0010ab21:
    hb_blob_destroy(local_58);
    local_58 = 0;
    local_70 = 0;
    local_80 = (undefined1  [16])0x0;
    hb_blob_make_immutable(puVar5);
  }
  else {
LAB_0010abf3:
    hb_blob_destroy(lVar6);
LAB_0010abf8:
    local_58 = 0;
    local_80 = (undefined1  [16])0x0;
    local_70 = 0;
    hb_blob_destroy(puVar5);
    puVar5 = (undefined *)hb_blob_get_empty();
  }
LAB_0010ab50:
  puVar10 = &_hb_NullPool;
  if (puVar5 != (undefined *)0x0) {
    puVar10 = puVar5;
  }
  *(undefined **)this = puVar5;
  puVar7 = &_hb_NullPool;
  if (7 < *(uint *)(puVar10 + 0x18)) {
    puVar7 = *(undefined **)(puVar10 + 0x10);
  }
  uVar11 = *(uint *)(puVar7 + 4);
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  *(uint *)(this + 8) = uVar11;
  pvVar8 = calloc((ulong)uVar11,8);
  *(void **)(this + 0x10) = pvVar8;
  if (pvVar8 == (void *)0x0) {
    *(undefined4 *)(this + 8) = 0;
    hb_blob_destroy(puVar5);
    *(undefined8 *)this = 0;
    uVar9 = hb_blob_get_empty();
    *(undefined8 *)this = uVar9;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010af04) */
/* WARNING: Removing unreachable block (ram,0x0010af0b) */
/* WARNING: Removing unreachable block (ram,0x0010af2a) */
/* WARNING: Removing unreachable block (ram,0x0010afb0) */
/* WARNING: Removing unreachable block (ram,0x0010afd2) */
/* WARNING: Removing unreachable block (ram,0x0010affa) */
/* hb_table_lazy_loader_t<AAT::ltag, 33u, false>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<AAT::ltag,33u,false>::create(hb_face_t *param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long in_FS_OFFSET;
  int local_4c;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  hb_face_get_glyph_count();
  uVar8 = hb_face_reference_table(param_1,0x6c746167);
  lVar9 = hb_blob_reference(uVar8);
  uVar1 = *(uint *)(lVar9 + 0x18);
  piVar3 = *(int **)(lVar9 + 0x10);
  uVar6 = uVar1 * 0x40;
  iVar5 = (int)piVar3 + uVar1;
  if (uVar1 >> 0x1a == 0) {
    if (0x3fffffff < uVar6) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 < 0x4000) {
      uVar6 = 0x4000;
    }
  }
  else {
    uVar6 = 0x3fffffff;
  }
  if (piVar3 == (int *)0x0) {
    hb_blob_destroy(lVar9);
LAB_0010af52:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
  }
  else {
    piVar11 = piVar3 + 3;
    if (((0xb < uVar1) && (*piVar3 != 0)) && ((ulong)((long)piVar11 - (long)piVar3) <= (ulong)uVar1)
       ) {
      uVar12 = piVar3[2];
      uVar7 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      bVar4 = (uVar12 << 0x18) >> 0x1e != 0;
      uVar12 = (uint)bVar4;
      if (((!bVar4) && ((ulong)((long)piVar11 - (long)piVar3) <= (ulong)uVar1)) &&
         ((uVar7 * 4 <= (uint)(iVar5 - (int)piVar11) &&
          (local_4c = uVar6 + uVar7 * -4, 0 < local_4c)))) {
        uVar6 = piVar3[2];
        if (uVar6 != 0) {
          piVar11 = piVar3 + 4;
          do {
            if ((ulong)uVar1 < (ulong)((long)piVar11 - (long)piVar3)) goto LAB_0010af83;
            lVar10 = (ulong)(ushort)(*(ushort *)(piVar11 + -1) << 8 | *(ushort *)(piVar11 + -1) >> 8
                                    ) + (long)piVar3;
            if ((((ulong)uVar1 < (ulong)(lVar10 - (long)piVar3)) ||
                (uVar7 = (uint)(ushort)(*(ushort *)((long)piVar11 + -2) << 8 |
                                       *(ushort *)((long)piVar11 + -2) >> 8),
                (uint)(iVar5 - (int)lVar10) < uVar7)) || (local_4c = local_4c - uVar7, local_4c < 1)
               ) goto LAB_0010af83;
            uVar12 = uVar12 + 1;
            piVar11 = piVar11 + 1;
          } while (uVar12 < (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18));
        }
        hb_blob_destroy(lVar9);
        hb_blob_make_immutable(uVar8);
        goto LAB_0010af52;
      }
    }
LAB_0010af83:
    hb_blob_destroy(lVar9);
    hb_blob_destroy(uVar8);
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = hb_blob_get_empty();
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AAT::Chain<AAT::ExtendedTypes>::compile_flags(hb_aat_map_builder_t const*) const */

uint __thiscall
AAT::Chain<AAT::ExtendedTypes>::compile_flags
          (Chain<AAT::ExtendedTypes> *this,hb_aat_map_builder_t *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  hb_face_t *phVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  Chain<AAT::ExtendedTypes> *pCVar22;
  
  uVar2 = *(uint *)(this + 8);
  uVar15 = *(uint *)this;
  uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  if (uVar2 != 0) {
    uVar21 = 0;
    pCVar22 = this + 0x10;
    do {
      uVar16 = *(ushort *)(pCVar22 + 2) << 8 | *(ushort *)(pCVar22 + 2) >> 8;
      uVar20 = (uint)(ushort)(*(ushort *)pCVar22 << 8 | *(ushort *)pCVar22 >> 8);
      uVar18 = (ulong)uVar16;
      if (-1 < *(int *)(param_1 + 0x3c) + -1) {
        do {
          iVar7 = 0;
          iVar19 = *(int *)(param_1 + 0x3c) + -1;
          do {
            while( true ) {
              uVar13 = (uint)(iVar7 + iVar19) >> 1;
              puVar8 = (uint *)((ulong)uVar13 * 0x10 + *(long *)(param_1 + 0x40));
              uVar3 = *puVar8;
              uVar17 = (uint)uVar18;
              if (uVar3 != uVar20) break;
              uVar3 = puVar8[1];
              if (uVar3 == uVar17) goto LAB_0010b178;
              if ((int)uVar17 < (int)uVar3) goto LAB_0010b085;
LAB_0010b0b4:
              iVar7 = uVar13 + 1;
              if (iVar19 < iVar7) goto LAB_0010b0bc;
            }
            if ((int)uVar3 <= (int)uVar20) goto LAB_0010b0b4;
LAB_0010b085:
            iVar19 = uVar13 - 1;
          } while (iVar7 <= iVar19);
LAB_0010b0bc:
          if ((uVar20 != 3) || (uVar17 != 3)) goto LAB_0010b0e3;
          uVar18 = 1;
          uVar20 = 0x25;
        } while( true );
      }
      if ((uVar16 != 3) || (uVar20 != 3)) {
LAB_0010b0e3:
        if ((uVar20 == 0x27) && ((int)uVar18 != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          lVar5 = *(long *)param_1;
          plVar1 = (long *)(lVar5 + 0x178);
LAB_0010b10d:
          lVar11 = *plVar1;
          if (lVar11 == 0) {
            phVar6 = *(hb_face_t **)(lVar5 + 0x70);
            iVar7 = (int)uVar18;
            if (phVar6 == (hb_face_t *)0x0) {
              lVar11 = hb_blob_get_empty();
              uVar18 = (ulong)iVar7;
            }
            else {
              lVar11 = hb_table_lazy_loader_t<AAT::ltag,33u,false>::create(phVar6);
              uVar18 = (ulong)iVar7;
              if (lVar11 == 0) {
                lVar11 = hb_blob_get_empty();
                LOCK();
                lVar12 = *plVar1;
                if (lVar12 == 0) {
                  *plVar1 = lVar11;
                }
                UNLOCK();
                uVar18 = (ulong)iVar7;
                if (lVar12 != 0) goto code_r0x0010b247;
              }
              else {
                LOCK();
                lVar12 = *plVar1;
                if (lVar12 == 0) {
                  *plVar1 = lVar11;
                }
                UNLOCK();
                if (lVar12 != 0) goto LAB_0010b1e1;
              }
            }
          }
          puVar9 = &_hb_NullPool;
          if (0xb < *(uint *)(lVar11 + 0x18)) {
            puVar9 = *(undefined **)(lVar11 + 0x10);
          }
          puVar14 = (ushort *)&_hb_NullPool;
          uVar20 = *(uint *)(puVar9 + 8);
          if ((int)uVar18 - 1U <
              (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18))
          {
            puVar14 = (ushort *)(puVar9 + uVar18 * 4 + 8);
          }
          uVar10 = hb_language_from_string
                             (puVar9 + (ushort)(*puVar14 << 8 | *puVar14 >> 8),
                              puVar14[1] << 8 | puVar14[1] >> 8);
          iVar7 = hb_language_matches(uVar10,uVar4);
          if (iVar7 != 0) {
LAB_0010b178:
            uVar20 = *(uint *)(pCVar22 + 8);
            uVar3 = *(uint *)(pCVar22 + 4);
            uVar15 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                     | (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18) & uVar15;
          }
        }
      }
      uVar21 = uVar21 + 1;
      pCVar22 = pCVar22 + 0xc;
    } while (uVar21 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18));
  }
  return uVar15;
code_r0x0010b247:
  if (lVar11 != 0) {
LAB_0010b1e1:
    lVar12 = hb_blob_get_empty();
    uVar18 = (ulong)iVar7;
    if (lVar11 != lVar12) {
      hb_blob_destroy();
      uVar18 = (ulong)iVar7;
    }
  }
  goto LAB_0010b10d;
}



/* AAT::Chain<AAT::ObsoleteTypes>::compile_flags(hb_aat_map_builder_t const*) const */

uint __thiscall
AAT::Chain<AAT::ObsoleteTypes>::compile_flags
          (Chain<AAT::ObsoleteTypes> *this,hb_aat_map_builder_t *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  hb_face_t *phVar5;
  int iVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  Chain<AAT::ObsoleteTypes> *pCVar19;
  
  uVar17 = *(uint *)this;
  uVar12 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
  uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  if (uVar12 != 0) {
    pCVar19 = this + 0xc;
    do {
      uVar16 = (uint)(ushort)(*(ushort *)pCVar19 << 8 | *(ushort *)pCVar19 >> 8);
      uVar18 = (uint)(ushort)(*(ushort *)(pCVar19 + 2) << 8 | *(ushort *)(pCVar19 + 2) >> 8);
      if (-1 < *(int *)(param_1 + 0x3c) + -1) {
        do {
          iVar15 = 0;
          iVar6 = *(int *)(param_1 + 0x3c) + -1;
          do {
            uVar13 = (uint)(iVar15 + iVar6) >> 1;
            puVar7 = (uint *)((ulong)uVar13 * 0x10 + *(long *)(param_1 + 0x40));
            uVar2 = *puVar7;
            if (uVar16 == uVar2) {
              uVar2 = puVar7[1];
              if (uVar2 == uVar18) goto LAB_0010b3e0;
              if ((int)uVar18 < (int)uVar2) goto LAB_0010b2ee;
LAB_0010b329:
              iVar15 = uVar13 + 1;
            }
            else {
              if ((int)uVar2 <= (int)uVar16) goto LAB_0010b329;
LAB_0010b2ee:
              iVar6 = uVar13 - 1;
            }
          } while (iVar15 <= iVar6);
          if ((uVar16 != 3) || (uVar18 != 3)) goto LAB_0010b33e;
          uVar18 = 1;
          uVar16 = 0x25;
        } while( true );
      }
      if ((uVar16 != 3) || (uVar18 != 3)) {
LAB_0010b33e:
        if ((uVar16 == 0x27) && (uVar18 != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x10);
          lVar4 = *(long *)param_1;
          plVar1 = (long *)(lVar4 + 0x178);
LAB_0010b36a:
          lVar10 = *plVar1;
          if (lVar10 == 0) {
            phVar5 = *(hb_face_t **)(lVar4 + 0x70);
            if (phVar5 == (hb_face_t *)0x0) {
              lVar10 = hb_blob_get_empty();
            }
            else {
              lVar10 = hb_table_lazy_loader_t<AAT::ltag,33u,false>::create(phVar5);
              if (lVar10 == 0) {
                lVar10 = hb_blob_get_empty();
                LOCK();
                lVar11 = *plVar1;
                if (lVar11 == 0) {
                  *plVar1 = lVar10;
                }
                UNLOCK();
                if (lVar11 != 0) goto code_r0x0010b493;
              }
              else {
                LOCK();
                lVar11 = *plVar1;
                if (lVar11 == 0) {
                  *plVar1 = lVar10;
                }
                UNLOCK();
                if (lVar11 != 0) goto LAB_0010b446;
              }
            }
          }
          puVar8 = &_hb_NullPool;
          if (0xb < *(uint *)(lVar10 + 0x18)) {
            puVar8 = *(undefined **)(lVar10 + 0x10);
          }
          puVar14 = (ushort *)&_hb_NullPool;
          uVar16 = *(uint *)(puVar8 + 8);
          if (uVar18 - 1 <
              (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18))
          {
            puVar14 = (ushort *)(puVar8 + (long)(int)uVar18 * 4 + 8);
          }
          uVar9 = hb_language_from_string
                            (puVar8 + (ushort)(*puVar14 << 8 | *puVar14 >> 8),
                             puVar14[1] << 8 | puVar14[1] >> 8);
          iVar6 = hb_language_matches(uVar9,uVar3);
          if (iVar6 != 0) {
LAB_0010b3e0:
            uVar16 = *(uint *)(pCVar19 + 8);
            uVar18 = *(uint *)(pCVar19 + 4);
            uVar17 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18 |
                     (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18) & uVar17;
          }
        }
      }
      pCVar19 = pCVar19 + 0xc;
    } while (pCVar19 != this + (ulong)(uVar12 - 1) * 0xc + 0x18);
  }
  return uVar17;
code_r0x0010b493:
  if (lVar10 != 0) {
LAB_0010b446:
    lVar11 = hb_blob_get_empty();
    if (lVar10 != lVar11) {
      hb_blob_destroy();
    }
  }
  goto LAB_0010b36a;
}



/* AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::
drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t*,AAT::hb_aat_apply_context_t*)
::{lambda()#2}::operator()(_lambda___2_ *this)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  bool bVar11;
  
  lVar10 = *(long *)(this + 0x18);
  iVar3 = *(int *)(**(long **)(this + 8) + 0x5c);
  iVar4 = *(int *)(**(long **)(this + 8) + 0x60);
  if ((iVar4 != iVar3) || (*(char *)(**(long **)this + 0x18) != '\0')) {
    if (*(short *)(lVar10 + 4) != -1) {
      return false;
    }
    if (*(short *)(lVar10 + 6) != -1) {
      return false;
    }
  }
  if ((**(int **)(this + 0x20) != 0) &&
     (((*(ushort *)(lVar10 + 2) & 0x40) == 0 || (**(int **)(this + 0x28) != 0)))) {
    puVar9 = *(undefined8 **)(this + 0x30);
    puVar8 = *(uint **)*puVar9;
    uVar5 = *puVar8;
    lVar10 = (ulong)*(uint *)puVar9[1] * 2;
    uVar6 = puVar8[2];
    if ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <=
        *(uint *)puVar9[1]) {
      lVar10 = 2;
    }
    uVar5 = puVar8[3];
    uVar2 = *(ushort *)
             ((long)puVar8 +
             (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
                    ) + lVar10);
    puVar1 = (ushort *)
             ((long)puVar8 +
             (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 8 +
             (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                    ));
    if ((*(int *)(*(long *)puVar9[3] + 0x5c) != *(int *)(*(long *)puVar9[3] + 0x60)) ||
       (*(char *)(*(long *)puVar9[2] + 0x18) != '\0')) {
      if (puVar1[2] != 0xffff) {
        return false;
      }
      if (puVar1[3] != 0xffff) {
        return false;
      }
    }
    if (*(uint *)puVar9[4] != (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8)) {
      return false;
    }
    if ((((byte)puVar1[1] ^ (byte)*(undefined2 *)(puVar9[5] + 2)) & 0x40) != 0) {
      return false;
    }
  }
  puVar8 = (uint *)**(undefined8 **)(this + 0x10);
  uVar5 = *puVar8;
  uVar6 = puVar8[3];
  uVar7 = puVar8[2];
  uVar2 = *(ushort *)
           ((long)puVar8 +
           (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18)
           + (ulong)(**(int **)(this + 0x20) *
                     (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18) + (uint)(uVar5 == 0)) * 2);
  lVar10 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 8 +
           (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
  if (((iVar4 != iVar3) || (bVar11 = true, *(char *)(**(long **)this + 0x18) != '\0')) &&
     (bVar11 = false, *(short *)((long)puVar8 + lVar10 + 4) == -1)) {
    bVar11 = *(short *)((long)puVar8 + lVar10 + 6) == -1;
  }
  return bVar11;
}



/* AAT::Lookup<OT::HBGlyphID16>::get_value(unsigned int, unsigned int) const */

Lookup<OT::HBGlyphID16> * __thiscall
AAT::Lookup<OT::HBGlyphID16>::get_value(Lookup<OT::HBGlyphID16> *this,uint param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  Lookup<OT::HBGlyphID16> *pLVar8;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    if (param_1 < param_2) {
      return this + (ulong)param_1 * 2 + 2;
    }
    break;
  case 2:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      uVar7 = (ulong)(iVar6 * (uint)uVar5);
      if ((*(short *)(this + uVar7 + 0xc) != -1) ||
         (iVar3 = (uint)uVar2 - (uint)(*(short *)(this + uVar7 + 0xe) == -1), iVar6 = iVar3 + -1,
         iVar3 != 0)) {
        iVar3 = 0;
        do {
          uVar1 = (uint)(iVar3 + iVar6) >> 1;
          uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
          if (param_1 < (ushort)(uVar2 << 8 | uVar2 >> 8)) {
            iVar6 = uVar1 - 1;
          }
          else {
            uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
            if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) {
              return this + (ulong)(uVar1 * uVar5) + 0x10;
            }
            iVar3 = uVar1 + 1;
          }
        } while (iVar3 <= iVar6);
      }
    }
    break;
  case 4:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      uVar7 = (ulong)(iVar6 * (uint)uVar5);
      if ((*(short *)(this + uVar7 + 0xc) != -1) ||
         (iVar3 = (uint)uVar2 - (uint)(*(short *)(this + uVar7 + 0xe) == -1), iVar6 = iVar3 + -1,
         iVar3 != 0)) {
        iVar3 = 0;
        while( true ) {
          while( true ) {
            uVar1 = (uint)(iVar3 + iVar6) >> 1;
            uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
            if ((ushort)(uVar2 << 8 | uVar2 >> 8) <= param_1) break;
            iVar6 = uVar1 - 1;
            if (iVar6 < iVar3) {
              return (Lookup<OT::HBGlyphID16> *)0x0;
            }
          }
          uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
          if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) break;
          iVar3 = uVar1 + 1;
          if (iVar6 < iVar3) {
            return (Lookup<OT::HBGlyphID16> *)0x0;
          }
        }
        pLVar8 = this + (ulong)(uVar1 * uVar5) + 0xc;
        uVar1 = (uint)(ushort)(*(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8);
        if (param_1 < uVar1) {
          return (Lookup<OT::HBGlyphID16> *)0x0;
        }
        if ((ushort)(*(ushort *)pLVar8 << 8 | *(ushort *)pLVar8 >> 8) < param_1) {
          return (Lookup<OT::HBGlyphID16> *)0x0;
        }
        return this + (ulong)(ushort)(*(ushort *)(pLVar8 + 4) << 8 | *(ushort *)(pLVar8 + 4) >> 8) +
                      (ulong)(param_1 - uVar1) * 2;
      }
    }
    break;
  case 6:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      if ((*(short *)(this + (ulong)(iVar6 * (uint)uVar5) + 0xc) == -1) &&
         (iVar6 = uVar2 - 2, uVar2 == 1)) {
        return (Lookup<OT::HBGlyphID16> *)0x0;
      }
      iVar3 = 0;
      do {
        uVar4 = (uint)(iVar3 + iVar6) >> 1;
        uVar1 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar4 * (ulong)uVar5 + 0xc) << 8 |
                              *(ushort *)(this + (ulong)uVar4 * (ulong)uVar5 + 0xc) >> 8);
        if (param_1 < uVar1) {
          iVar6 = uVar4 - 1;
        }
        else {
          if (param_1 == uVar1) {
            return this + (ulong)(uVar4 * uVar5) + 0xe;
          }
          iVar3 = uVar4 + 1;
        }
      } while (iVar3 <= iVar6);
    }
    break;
  case 8:
    uVar1 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uVar1 <= param_1) &&
       (uVar1 = param_1 - uVar1,
       uVar1 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8))) {
      return this + (ulong)uVar1 * 2 + 6;
    }
  }
  return (Lookup<OT::HBGlyphID16> *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void AAT::StateTableDriver<AAT::ObsoleteTypes,
   void>::drive<AAT::RearrangementSubtable<AAT::ObsoleteTypes>::driver_context_t>(AAT::RearrangementSubtable<AAT::ObsoleteTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ObsoleteTypes,void>::
drive<AAT::RearrangementSubtable<AAT::ObsoleteTypes>::driver_context_t>
          (StateTableDriver<AAT::ObsoleteTypes,void> *this,driver_context_t *param_1,
          hb_aat_apply_context_t *param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  hb_buffer_t *this_00;
  byte bVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  hb_buffer_t hVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ushort uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ushort *puVar26;
  long lVar27;
  uint uVar28;
  ushort *puVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  ulong uVar34;
  int iVar35;
  undefined8 *puVar36;
  int iVar37;
  uint *puVar38;
  uint *puVar39;
  long in_FS_OFFSET;
  uint local_fc;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar39 = *(uint **)(param_2 + 0x78);
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar39 != (uint *)0x0) {
    if (puVar39[1] < 2) {
      puVar39 = (uint *)0x0;
    }
    else {
      puVar39 = *(uint **)(puVar39 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    local_fc = *(uint *)(this_00 + 0x60);
    uVar32 = 0;
    iVar35 = 0;
    uVar31 = (uint)this_00;
    if (puVar39 == (uint *)0x0) goto LAB_0010bc64;
LAB_0010b9d0:
    uVar25 = *(uint *)(param_2 + 0xe0);
    if (uVar32 < local_fc) goto LAB_0010ba1b;
    while( true ) {
      if ((uVar25 & *puVar39) != 0) goto LAB_0010c170;
      if (uVar32 == local_fc) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_0010be70;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(uint *)(this_00 + 100) == uVar32)) {
            iVar35 = 0;
            *(uint *)(this_00 + 100) = uVar32 + 1;
            *(uint *)(this_00 + 0x5c) = uVar32 + 1;
            goto LAB_0010bc58;
          }
          cVar9 = hb_buffer_t::make_room_for(uVar31,1);
          if (cVar9 == '\0') {
            hVar10 = this_00[0x58];
          }
          else {
            puVar36 = (undefined8 *)
                      (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            puVar22 = (undefined8 *)
                      (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar7 = puVar22[1];
            *puVar36 = *puVar22;
            puVar36[1] = uVar7;
            *(undefined4 *)(puVar36 + 2) = *(undefined4 *)(puVar22 + 2);
            hVar10 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          iVar35 = 0;
          if (hVar10 != (hb_buffer_t)0x0) goto LAB_0010bdf4;
          goto LAB_0010be70;
        }
        uVar32 = uVar32 + 1;
        iVar35 = 0;
        *(uint *)(this_00 + 0x5c) = uVar32;
        if (local_fc <= uVar32) break;
LAB_0010ba1b:
        lVar27 = *(long *)(this_00 + 0x70);
        uVar34 = (ulong)uVar32;
        puVar21 = (uint *)(lVar27 + uVar34 * 0x14);
        uVar13 = puVar21[2];
        uVar28 = puVar39[1];
        while (uVar13 < uVar28) {
          uVar28 = puVar39[-2];
          puVar39 = puVar39 + -3;
        }
        puVar38 = puVar39;
        if (puVar39[2] < uVar13) {
          do {
            puVar39 = puVar38 + 3;
            puVar21 = puVar38 + 5;
            puVar38 = puVar39;
          } while (*puVar21 < uVar13);
          if ((uVar25 & *puVar39) != 0) goto LAB_0010ba61;
        }
        else if ((uVar25 & *puVar39) != 0) goto LAB_0010ba69;
      }
    }
  }
LAB_0010be70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010ba61:
  puVar21 = (uint *)(lVar27 + uVar34 * 0x14);
LAB_0010ba69:
  puVar29 = *(ushort **)this;
  uVar25 = *puVar21;
  if (uVar25 == 0xffff) {
    uVar34 = 2;
  }
  else {
    uVar34 = 1;
    if ((((1L << ((byte)(uVar25 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar25 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar25 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      puVar26 = (ushort *)((ulong)(ushort)(puVar29[1] << 8 | puVar29[1] >> 8) + (long)puVar29);
      uVar25 = uVar25 - (ushort)(*puVar26 << 8 | *puVar26 >> 8);
      if (uVar25 < (ushort)(puVar26[1] << 8 | puVar26[1] >> 8)) {
        uVar34 = (ulong)*(byte *)((long)puVar26 + (ulong)uVar25 + 4);
      }
    }
  }
  do {
    uVar20 = *puVar29 << 8 | *puVar29 >> 8;
    if ((uint)uVar20 <= (uint)uVar34) {
      uVar34 = 1;
    }
    iVar37 = iVar35 * (uint)uVar20;
    uVar33 = puVar29[2] << 8 | puVar29[2] >> 8;
    uVar11 = puVar29[3] << 8 | puVar29[3] >> 8;
    puVar26 = (ushort *)
              ((long)puVar29 +
              (ulong)*(byte *)((long)puVar29 + (ulong)(uint)(iVar37 + (int)uVar34) + (ulong)uVar33)
              * 4 + (ulong)uVar11);
    uVar4 = puVar26[1];
    uVar25 = (uint)uVar20;
    iVar12 = (int)((uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8) - (uint)uVar33) / (int)uVar25;
    if (((uVar4 & 0xf00) == 0) || (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4))) {
      if ((iVar35 != 0) && (((uVar4 & 0x40) == 0 || (iVar12 != 0)))) {
        puVar1 = (ushort *)
                 ((long)puVar29 +
                 (ulong)*(byte *)((long)puVar29 + uVar34 + uVar33) * 4 + (ulong)uVar11);
        uVar20 = puVar1[1];
        if ((((uVar20 & 0xf00) != 0) && (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8))) ||
           ((uVar5 = *puVar1,
            iVar12 != (int)((uint)(ushort)(uVar5 << 8 | uVar5 >> 8) - (uint)uVar33) / (int)uVar25 ||
            (((uVar4 ^ uVar20) & 0x40) != 0)))) goto LAB_0010bb5b;
      }
      if (((*(byte *)((long)puVar29 +
                     (ulong)*(byte *)((long)puVar29 +
                                     (ulong)(iVar37 + (uint)(uVar25 == 0)) + (ulong)uVar33) * 4 +
                     (ulong)uVar11 + 3) & 0xf) != 0) &&
         (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8))) goto LAB_0010bb5b;
    }
    else {
LAB_0010bb5b:
      uVar25 = uVar32;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        uVar25 = *(uint *)(this_00 + 100);
      }
      if ((uVar25 != 0) && (uVar32 < local_fc)) {
        hb_buffer_t::_set_glyph_flags(this_00,3,uVar25 - 1,uVar32 + 1,true,true);
        uVar32 = *(uint *)(this_00 + 0x5c);
      }
    }
    if ((short)(uVar4 << 8 | uVar4 >> 8) < 0) {
      *(uint *)(param_1 + 4) = uVar32;
    }
    if ((uVar4 << 8 & 0x2000) != 0) {
      uVar25 = uVar32 + 1;
      if (*(uint *)(this_00 + 0x60) < uVar32 + 1) {
        uVar25 = *(uint *)(this_00 + 0x60);
      }
      *(uint *)(param_1 + 8) = uVar25;
    }
    if ((uVar4 & 0xf00) != 0) {
      local_fc = *(uint *)(param_1 + 8);
      uVar25 = *(uint *)(param_1 + 4);
      if (uVar25 < local_fc) {
        local_58 = __LC16;
        uStack_50 = _UNK_00116fb8;
        bVar3 = *(byte *)((long)&local_58 + (ulong)(uVar4 >> 8 & 0xf));
        bVar6 = bVar3 >> 4;
        uVar28 = 2;
        if (bVar6 < 3) {
          uVar28 = (uint)bVar6;
        }
        bVar8 = 2;
        if ((bVar3 & 0xe) == 0) {
          bVar8 = bVar3 & 0xf;
        }
        uVar24 = (uint)bVar8;
        uVar13 = local_fc - uVar25;
        if ((uVar28 + uVar24 <= uVar13) && (uVar13 < 0x41)) {
          uVar14 = *(uint *)(this_00 + 0x60);
          if (uVar32 + 1 <= *(uint *)(this_00 + 0x60)) {
            uVar14 = uVar32 + 1;
          }
          if (1 < uVar14 - uVar25) {
            hb_buffer_t::merge_clusters_impl(uVar31,uVar25);
            local_fc = *(uint *)(param_1 + 8);
            uVar25 = *(uint *)(param_1 + 4);
            uVar13 = local_fc - uVar25;
          }
          if (1 < uVar13) {
            hb_buffer_t::merge_clusters_impl(uVar31,uVar25);
            local_fc = *(uint *)(param_1 + 8);
            uVar25 = *(uint *)(param_1 + 4);
          }
          uVar30 = (ulong)uVar25;
          uVar34 = (ulong)uVar28;
          lVar27 = *(long *)(this_00 + 0x70);
          uVar15 = uVar34 * 0x14;
          puVar36 = (undefined8 *)(lVar27 + uVar30 * 0x14);
          uVar32 = (uint)uVar15;
          if (uVar34 * 5 != 0) {
            puVar22 = local_a8;
            puVar18 = puVar36;
            if (7 < uVar32) {
              uVar17 = 0;
              do {
                uVar13 = (int)uVar17 + 8;
                uVar23 = (ulong)uVar13;
                *(undefined8 *)((long)puVar22 + uVar17) = *(undefined8 *)((long)puVar36 + uVar17);
                uVar17 = uVar23;
              } while (uVar13 < (uVar32 & 0xfffffff8));
              puVar22 = (undefined8 *)((long)puVar22 + uVar23);
              puVar18 = (undefined8 *)(uVar23 + (long)puVar36);
            }
            if ((uVar15 & 4) != 0) {
              *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
            }
          }
          uVar16 = (ulong)local_fc;
          uVar17 = (ulong)uVar24;
          puVar2 = (undefined4 *)(lVar27 + (uVar16 - uVar17) * 0x14);
          uVar23 = uVar17 * 0x14;
          if (uVar17 * 5 == 0) {
            if (uVar28 != uVar24) {
              memmove((void *)(lVar27 + (uVar30 + uVar17) * 0x14),
                      (void *)(lVar27 + (uVar34 + uVar30) * 0x14),
                      (ulong)(((local_fc - uVar28) - uVar24) - uVar25) * 0x14);
              uVar16 = (ulong)*(uint *)(param_1 + 8);
            }
          }
          else {
            uVar13 = (uint)uVar23;
            if (uVar13 < 8) {
              if ((uVar23 & 4) == 0) {
                if (uVar13 != 0) {
                  local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)puVar2);
                }
              }
              else {
                local_80 = *puVar2;
                *(undefined4 *)((long)&uStack_88 + uVar23 + 4) = puVar2[uVar17 * 5 + -1];
              }
            }
            else {
              *(undefined8 *)((long)&uStack_88 + uVar23) = *(undefined8 *)(puVar2 + uVar17 * 5 + -2)
              ;
              if (7 < uVar13 - 1) {
                local_b0 = uVar23;
                uVar14 = 0;
                do {
                  uVar23 = (ulong)uVar14;
                  uVar14 = uVar14 + 8;
                  *(undefined8 *)((long)&local_80 + uVar23) = *(undefined8 *)((long)puVar2 + uVar23)
                  ;
                  uVar23 = local_b0;
                } while (uVar14 < (uVar13 - 1 & 0xfffffff8));
              }
            }
            if (uVar28 != uVar24) {
              local_b0 = uVar23;
              memmove((void *)(lVar27 + (uVar30 + uVar17) * 0x14),
                      (void *)(lVar27 + (uVar34 + uVar30) * 0x14),
                      (ulong)(((local_fc - uVar28) - uVar24) - uVar25) * 0x14);
              puVar36 = (undefined8 *)(lVar27 + (ulong)*(uint *)(param_1 + 4) * 0x14);
              uVar23 = local_b0;
            }
            uVar25 = (uint)uVar23;
            if (uVar25 < 8) {
              if ((uVar23 & 4) == 0) {
                if (uVar25 != 0) {
                  *(undefined1 *)puVar36 = (undefined1)local_80;
                }
              }
              else {
                *(undefined4 *)puVar36 = local_80;
                *(undefined4 *)((long)puVar36 + (uVar23 - 4)) =
                     *(undefined4 *)((long)&uStack_88 + uVar23 + 4);
              }
            }
            else {
              *puVar36 = CONCAT44(uStack_7c,local_80);
              *(undefined8 *)((long)puVar36 + (uVar23 - 8)) =
                   *(undefined8 *)((long)&uStack_88 + uVar23);
              lVar19 = (long)puVar36 - ((ulong)(puVar36 + 1) & 0xfffffffffffffff8);
              uVar25 = (int)lVar19 + uVar25 & 0xfffffff8;
              if (7 < uVar25) {
                uVar30 = 0;
                do {
                  uVar28 = (int)uVar30 + 8;
                  *(undefined8 *)(((ulong)(puVar36 + 1) & 0xfffffffffffffff8) + uVar30) =
                       *(undefined8 *)((long)&local_80 + (uVar30 - lVar19));
                  uVar30 = (ulong)uVar28;
                } while (uVar28 < uVar25);
              }
            }
            uVar16 = (ulong)*(uint *)(param_1 + 8);
          }
          puVar36 = (undefined8 *)(lVar27 + (uVar16 - uVar34) * 0x14);
          if (uVar15 != 0) {
            if (uVar32 < 8) {
              if ((uVar15 & 4) == 0) {
                if (uVar32 != 0) {
                  *(undefined1 *)puVar36 = (undefined1)local_a8[0];
                }
              }
              else {
                *(undefined4 *)puVar36 = (undefined4)local_a8[0];
                *(undefined4 *)((long)puVar36 + (uVar15 - 4)) =
                     *(undefined4 *)((long)local_a8 + (uVar15 - 4));
              }
            }
            else {
              *puVar36 = local_a8[0];
              *(undefined8 *)((long)puVar36 + (uVar15 - 8)) =
                   *(undefined8 *)((long)local_a8 + (uVar15 - 8));
              lVar19 = (long)puVar36 - ((ulong)(puVar36 + 1) & 0xfffffffffffffff8);
              uVar32 = (int)lVar19 + uVar32 & 0xfffffff8;
              if (7 < uVar32) {
                uVar25 = 0;
                do {
                  uVar34 = (ulong)uVar25;
                  uVar25 = uVar25 + 8;
                  *(undefined8 *)(((ulong)(puVar36 + 1) & 0xfffffffffffffff8) + uVar34) =
                       *(undefined8 *)((long)local_a8 + (uVar34 - lVar19));
                } while (uVar25 < uVar32);
              }
            }
          }
          if (bVar6 == 3) {
            puVar36 = (undefined8 *)(lVar27 + (ulong)(*(int *)(param_1 + 8) - 2) * 0x14);
            puVar22 = (undefined8 *)(lVar27 + (ulong)(*(int *)(param_1 + 8) - 1) * 0x14);
            uVar7 = puVar36[1];
            local_a8[0] = *puVar22;
            local_a8[1] = puVar22[1];
            local_98 = *(undefined4 *)(puVar22 + 2);
            *puVar22 = *puVar36;
            puVar22[1] = uVar7;
            *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar36 + 2);
            puVar36 = (undefined8 *)(lVar27 + (ulong)(*(int *)(param_1 + 8) - 2) * 0x14);
            *(undefined4 *)(puVar36 + 2) = local_98;
            *puVar36 = local_a8[0];
            puVar36[1] = local_a8[1];
          }
          if ((bVar3 & 0xf) == 3) {
            puVar36 = (undefined8 *)(lVar27 + (ulong)*(uint *)(param_1 + 4) * 0x14);
            local_a8[0] = *puVar36;
            local_a8[1] = puVar36[1];
            local_98 = *(undefined4 *)(puVar36 + 2);
            puVar22 = (undefined8 *)(lVar27 + (ulong)(*(uint *)(param_1 + 4) + 1) * 0x14);
            uVar7 = puVar22[1];
            *puVar36 = *puVar22;
            puVar36[1] = uVar7;
            *(undefined4 *)(puVar36 + 2) = *(undefined4 *)(puVar22 + 2);
            puVar36 = (undefined8 *)(lVar27 + (ulong)(*(int *)(param_1 + 4) + 1) * 0x14);
            *(undefined4 *)(puVar36 + 2) = local_98;
            *puVar36 = local_a8[0];
            puVar36[1] = local_a8[1];
          }
          uVar32 = *(uint *)(this_00 + 0x5c);
        }
      }
    }
    if ((*(uint *)(this_00 + 0x60) == uVar32) || (this_00[0x58] == (hb_buffer_t)0x0))
    goto LAB_0010be70;
    iVar35 = iVar12;
    if (((puVar26[1] & 0x40) == 0) ||
       (iVar12 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar12 + -1, iVar12 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(uint *)(this_00 + 0x5c) = uVar32 + 1;
        goto LAB_0010bc4c;
      }
      if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
         (uVar32 == *(uint *)(this_00 + 100))) {
        *(uint *)(this_00 + 100) = uVar32 + 1;
        *(uint *)(this_00 + 0x5c) = uVar32 + 1;
        goto LAB_0010bc4c;
      }
      cVar9 = hb_buffer_t::make_room_for(uVar31,1);
      if (cVar9 == '\0') {
        hVar10 = this_00[0x58];
      }
      else {
        puVar36 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14)
        ;
        puVar22 = (undefined8 *)
                  (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
        uVar7 = puVar22[1];
        *puVar36 = *puVar22;
        puVar36[1] = uVar7;
        *(undefined4 *)(puVar36 + 2) = *(undefined4 *)(puVar22 + 2);
        hVar10 = this_00[0x58];
        *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
      }
      if (hVar10 == (hb_buffer_t)0x0) goto LAB_0010be70;
LAB_0010bdf4:
      local_fc = *(uint *)(this_00 + 0x60);
    }
    else {
LAB_0010bc4c:
      local_fc = *(uint *)(this_00 + 0x60);
    }
LAB_0010bc58:
    uVar32 = *(uint *)(this_00 + 0x5c);
    if (puVar39 != (uint *)0x0) goto LAB_0010b9d0;
LAB_0010bc64:
    if (uVar32 < local_fc) break;
LAB_0010c170:
    uVar34 = 0;
    puVar29 = *(ushort **)this;
  } while( true );
  lVar27 = *(long *)(this_00 + 0x70);
  uVar34 = (ulong)uVar32;
  goto LAB_0010ba61;
}



/* void AAT::StateTableDriver<AAT::ObsoleteTypes,
   AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>::drive<AAT::ContextualSubtable<AAT::ObsoleteTypes>::driver_context_t>(AAT::ContextualSubtable<AAT::ObsoleteTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>::
drive<AAT::ContextualSubtable<AAT::ObsoleteTypes>::driver_context_t>
          (StateTableDriver<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
           *this,driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  hb_buffer_t *this_00;
  undefined8 uVar5;
  char cVar6;
  hb_buffer_t hVar7;
  undefined2 uVar8;
  int iVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort uVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  ushort uVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  
  puVar18 = *(uint **)(param_2 + 0x78);
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  if (puVar18 != (uint *)0x0) {
    if (puVar18[1] < 2) {
      puVar18 = (uint *)0x0;
    }
    else {
      puVar18 = *(uint **)(puVar18 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar30 = *(uint *)(this_00 + 0x60);
    uVar20 = 0;
    iVar28 = 0;
    puVar17 = puVar18;
    if (puVar18 == (uint *)0x0) goto LAB_0010c81f;
LAB_0010c450:
    uVar15 = *(uint *)(param_2 + 0xe0);
    if ((uint)uVar20 < uVar30) goto LAB_0010c49a;
    while( true ) {
      puVar17 = puVar18;
      if ((uVar15 & *puVar18) != 0) goto LAB_0010cb00;
      if ((uint)uVar20 == uVar30) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) {
          return;
        }
        iVar9 = (int)uVar20;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(int *)(this_00 + 100) == iVar9)) {
            iVar28 = 0;
            *(int *)(this_00 + 100) = iVar9 + 1;
            *(int *)(this_00 + 0x5c) = iVar9 + 1;
            goto LAB_0010c810;
          }
          cVar6 = hb_buffer_t::make_room_for((uint)this_00,1);
          if (cVar6 == '\0') {
            hVar7 = this_00[0x58];
          }
          else {
            puVar2 = (undefined8 *)
                     (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            puVar3 = (undefined8 *)
                     (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar5 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar5;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            hVar7 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          iVar28 = 0;
          goto LAB_0010ca34;
        }
        uVar19 = iVar9 + 1;
        uVar20 = (ulong)uVar19;
        iVar28 = 0;
        *(uint *)(this_00 + 0x5c) = uVar19;
        if (uVar30 <= uVar19) break;
LAB_0010c49a:
        lVar16 = *(long *)(this_00 + 0x70);
        puVar22 = (uint *)(lVar16 + uVar20 * 0x14);
        uVar4 = puVar22[2];
        uVar19 = puVar18[1];
        while (uVar4 < uVar19) {
          uVar19 = puVar18[-2];
          puVar18 = puVar18 + -3;
        }
        if (puVar18[2] < uVar4) {
          do {
            puVar17 = puVar18 + 3;
            puVar22 = puVar18 + 5;
            puVar18 = puVar17;
          } while (*puVar22 < uVar4);
          if ((uVar15 & *puVar17) != 0) goto LAB_0010c4d9;
        }
        else if ((uVar15 & *puVar18) != 0) goto LAB_0010c4e1;
      }
    }
  }
  return;
LAB_0010c4d9:
  puVar22 = (uint *)(lVar16 + uVar20 * 0x14);
  puVar18 = puVar17;
LAB_0010c4e1:
  uVar15 = *puVar22;
  puVar10 = *(ushort **)this;
  if (uVar15 == 0xffff) {
    uVar27 = 2;
  }
  else {
    uVar27 = 1;
    if ((((1L << ((byte)(uVar15 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar15 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar15 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      puVar13 = (ushort *)((ulong)(ushort)(puVar10[1] << 8 | puVar10[1] >> 8) + (long)puVar10);
      uVar15 = uVar15 - (ushort)(*puVar13 << 8 | *puVar13 >> 8);
      if (uVar15 < (ushort)(puVar13[1] << 8 | puVar13[1] >> 8)) {
        uVar27 = (ulong)*(byte *)((long)puVar13 + (ulong)uVar15 + 4);
      }
    }
  }
  do {
    uVar21 = *puVar10 << 8 | *puVar10 >> 8;
    if ((uint)uVar21 <= (uint)uVar27) {
      uVar27 = 1;
    }
    uVar25 = puVar10[2] << 8 | puVar10[2] >> 8;
    iVar29 = iVar28 * (uint)uVar21;
    uVar14 = puVar10[3] << 8 | puVar10[3] >> 8;
    puVar13 = (ushort *)
              ((long)puVar10 +
              (ulong)*(byte *)((long)puVar10 + (ulong)(uint)(iVar29 + (int)uVar27) + (ulong)uVar25)
              * 8 + (ulong)uVar14);
    uVar19 = (uint)uVar21;
    iVar9 = (int)((uint)(ushort)(*puVar13 << 8 | *puVar13 >> 8) - (uint)uVar25) / (int)uVar19;
    uVar15 = (uint)uVar20;
    if ((uVar15 == uVar30) && (param_1[0x18] == (driver_context_t)0x0)) {
      if (iVar28 != 0) {
LAB_0010c906:
        if ((((puVar13[1] & 0x40) != 0) && (iVar9 == 0)) ||
           ((((puVar1 = (ushort *)
                        ((long)puVar10 +
                        (ulong)*(byte *)((long)puVar10 + uVar27 + uVar25) * 8 + (ulong)uVar14),
              uVar15 == uVar30 && (param_1[0x18] == (driver_context_t)0x0)) ||
             ((puVar1[2] == 0xffff && (puVar1[3] == 0xffff)))) &&
            ((iVar9 == (int)((uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8) - (uint)uVar25) /
                       (int)uVar19 && (((puVar13[1] ^ puVar1[1]) & 0x40) == 0))))))
        goto LAB_0010c990;
LAB_0010c5d1:
        uVar19 = uVar15;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          uVar19 = *(uint *)(this_00 + 100);
        }
        if ((uVar19 != 0) && (uVar15 < uVar30)) {
          hb_buffer_t::_set_glyph_flags(this_00,3,uVar19 - 1,uVar15 + 1,true,true);
          uVar30 = *(uint *)(this_00 + 0x60);
          uVar20 = (ulong)*(uint *)(this_00 + 0x5c);
        }
        goto LAB_0010c5e9;
      }
      if (uVar15 == uVar30) goto LAB_0010c8d0;
    }
    else {
      if ((puVar13[2] != 0xffff) || (puVar13[3] != 0xffff)) goto LAB_0010c5d1;
      if (iVar28 != 0) goto LAB_0010c906;
LAB_0010c990:
      lVar16 = (ulong)*(byte *)((long)puVar10 +
                               (ulong)(iVar29 + (uint)(uVar19 == 0)) + (ulong)uVar25) * 8 +
               (ulong)uVar14;
      if ((uVar15 == uVar30) && (param_1[0x18] == (driver_context_t)0x0)) goto LAB_0010c8d0;
      if ((*(short *)((long)puVar10 + lVar16 + 4) != -1) ||
         (*(short *)((long)puVar10 + lVar16 + 6) != -1)) goto LAB_0010c5d1;
LAB_0010c5e9:
      if ((uint)uVar20 == uVar30) {
LAB_0010c8d0:
        if (param_1[0x18] == (driver_context_t)0x0) {
          return;
        }
      }
    }
    lVar16 = *(long *)(this_00 + 0x70);
    lVar12 = *(long *)(param_1 + 0x28);
    uVar15 = ((uint)(ushort)(puVar13[2] << 8 | puVar13[2] >> 8) +
             *(int *)(lVar16 + (ulong)*(uint *)(param_1 + 0x1c) * 0x14)) * 2;
    iVar28 = (int)*(undefined8 *)(param_1 + 0x20);
    uVar19 = (int)lVar12 - iVar28;
    if (uVar15 < uVar19) {
      uVar27 = 0x7ffffffe;
    }
    else {
      uVar27 = (ulong)(uVar15 - uVar19 & 0xfffffffe);
    }
    lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x30);
    uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40);
    if ((ulong)((long)(uVar27 + lVar12) + (2 - lVar26)) <= uVar23) {
      uVar21 = *(ushort *)(uVar27 + lVar12);
      uVar14 = uVar21 << 8 | uVar21 >> 8;
      if (uVar14 == 0) {
        uVar30 = *(uint *)(this_00 + 0x60);
        uVar20 = (ulong)*(uint *)(this_00 + 0x5c);
        lVar16 = *(long *)(this_00 + 0x70);
        lVar12 = *(long *)(param_1 + 0x28);
        iVar28 = (int)*(undefined8 *)(param_1 + 0x20);
        lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x30);
        uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40);
      }
      else {
        uVar30 = *(int *)(this_00 + 0x5c) + 1U;
        if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
          uVar30 = *(uint *)(this_00 + 0x60);
        }
        hb_buffer_t::_set_glyph_flags(this_00,3,*(uint *)(param_1 + 0x1c),uVar30,true,false);
        lVar16 = *(long *)(this_00 + 0x70);
        lVar24 = *(long *)(param_1 + 8);
        *(uint *)(lVar16 + (ulong)*(uint *)(param_1 + 0x1c) * 0x14) = (uint)uVar14;
        *(ulong *)(lVar24 + 0x80) = *(ulong *)(lVar24 + 0x80) | 1L << ((byte)(uVar14 >> 4) & 0x3f);
        *(ulong *)(lVar24 + 0x88) = *(ulong *)(lVar24 + 0x88) | 1L << ((byte)(uVar21 >> 8) & 0x3f);
        *(ulong *)(lVar24 + 0x90) = *(ulong *)(lVar24 + 0x90) | 1L << ((byte)uVar21 >> 1 & 0x3f);
        if (param_1[0x19] != (driver_context_t)0x0) {
          uVar8 = OT::GDEF::get_glyph_props(*(GDEF **)(param_1 + 0x10),(uint)uVar14);
          *(undefined2 *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(param_1 + 0x1c) * 0x14 + 0xc)
               = uVar8;
          lVar16 = *(long *)(this_00 + 0x70);
          lVar24 = *(long *)(param_1 + 8);
        }
        lVar26 = *(long *)(lVar24 + 0x30);
        uVar30 = *(uint *)(this_00 + 0x60);
        *param_1 = (driver_context_t)0x1;
        uVar20 = (ulong)*(uint *)(this_00 + 0x5c);
        lVar12 = *(long *)(param_1 + 0x28);
        iVar28 = (int)*(undefined8 *)(param_1 + 0x20);
        uVar23 = (ulong)*(uint *)(lVar24 + 0x40);
      }
    }
    uVar27 = (ulong)(uVar30 - 1);
    if ((uint)uVar20 < uVar30 - 1) {
      uVar27 = uVar20;
    }
    uVar15 = ((uint)(ushort)(puVar13[3] << 8 | puVar13[3] >> 8) + *(int *)(lVar16 + uVar27 * 0x14))
             * 2;
    uVar19 = (int)lVar12 - iVar28;
    if (uVar15 < uVar19) {
      uVar11 = 0x7ffffffe;
    }
    else {
      uVar11 = (ulong)(uVar15 - uVar19 & 0xfffffffe);
    }
    if ((ulong)((long)(uVar11 + lVar12) + (2 - lVar26)) <= uVar23) {
      uVar21 = *(ushort *)(uVar11 + lVar12);
      uVar14 = uVar21 << 8 | uVar21 >> 8;
      if (uVar14 != 0) {
        *(uint *)(*(long *)(this_00 + 0x70) + uVar27 * 0x14) = (uint)uVar14;
        lVar16 = *(long *)(param_1 + 8);
        *(ulong *)(lVar16 + 0x80) = *(ulong *)(lVar16 + 0x80) | 1L << ((byte)(uVar14 >> 4) & 0x3f);
        *(ulong *)(lVar16 + 0x88) = *(ulong *)(lVar16 + 0x88) | 1L << ((byte)(uVar21 >> 8) & 0x3f);
        *(ulong *)(lVar16 + 0x90) = *(ulong *)(lVar16 + 0x90) | 1L << ((byte)uVar21 >> 1 & 0x3f);
        if (param_1[0x19] != (driver_context_t)0x0) {
          uVar8 = OT::GDEF::get_glyph_props(*(GDEF **)(param_1 + 0x10),(uint)uVar14);
          *(undefined2 *)(*(long *)(this_00 + 0x70) + 0xc + uVar27 * 0x14) = uVar8;
        }
        *param_1 = (driver_context_t)0x1;
      }
      uVar30 = *(uint *)(this_00 + 0x60);
      uVar20 = (ulong)*(uint *)(this_00 + 0x5c);
    }
    uVar21 = puVar13[1] << 8;
    uVar15 = (uint)uVar20;
    if ((short)(uVar21 | puVar13[1] >> 8) < 0) {
      param_1[0x18] = (driver_context_t)0x1;
      *(uint *)(param_1 + 0x1c) = uVar15;
    }
    if (uVar30 == uVar15) {
      return;
    }
    if (this_00[0x58] == (hb_buffer_t)0x0) {
      return;
    }
    iVar28 = iVar9;
    if (((uVar21 & 0x4000) == 0) ||
       (iVar9 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar9 + -1, iVar9 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(uint *)(this_00 + 0x5c) = uVar15 + 1;
        goto LAB_0010c807;
      }
      if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
         (*(uint *)(this_00 + 100) == uVar15)) {
        *(uint *)(this_00 + 100) = uVar15 + 1;
        *(uint *)(this_00 + 0x5c) = uVar15 + 1;
        goto LAB_0010c807;
      }
      cVar6 = hb_buffer_t::make_room_for((uint)this_00,1);
      if (cVar6 == '\0') {
        hVar7 = this_00[0x58];
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
        puVar3 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14)
        ;
        uVar5 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
        hVar7 = this_00[0x58];
        *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
      }
LAB_0010ca34:
      if (hVar7 == (hb_buffer_t)0x0) {
        return;
      }
      uVar30 = *(uint *)(this_00 + 0x60);
    }
    else {
LAB_0010c807:
      uVar30 = *(uint *)(this_00 + 0x60);
    }
LAB_0010c810:
    uVar20 = (ulong)*(uint *)(this_00 + 0x5c);
    puVar17 = puVar18;
    if (puVar18 != (uint *)0x0) goto LAB_0010c450;
LAB_0010c81f:
    if ((uint)uVar20 < uVar30) break;
LAB_0010cb00:
    uVar27 = 0;
    puVar10 = *(ushort **)this;
    puVar18 = puVar17;
  } while( true );
  lVar16 = *(long *)(this_00 + 0x70);
  goto LAB_0010c4d9;
}



/* void AAT::StateTableDriver<AAT::ObsoleteTypes,
   void>::drive<AAT::LigatureSubtable<AAT::ObsoleteTypes>::driver_context_t>(AAT::LigatureSubtable<AAT::ObsoleteTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ObsoleteTypes,void>::
drive<AAT::LigatureSubtable<AAT::ObsoleteTypes>::driver_context_t>
          (StateTableDriver<AAT::ObsoleteTypes,void> *this,driver_context_t *param_1,
          hb_aat_apply_context_t *param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  hb_buffer_t *this_00;
  ushort uVar4;
  undefined8 uVar5;
  char cVar6;
  hb_buffer_t hVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint *puVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  hb_buffer_t::clear_output();
  puVar29 = *(uint **)(param_2 + 0x78);
  if (puVar29 != (uint *)0x0) {
    if (puVar29[1] < 2) {
      puVar29 = (uint *)0x0;
    }
    else {
      puVar29 = *(uint **)(puVar29 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar14 = *(uint *)(this_00 + 0x60);
    uVar22 = 0;
    iVar26 = 0;
    uVar21 = (uint)this_00;
    if (puVar29 == (uint *)0x0) goto LAB_0010d010;
LAB_0010cc80:
    uVar27 = *(uint *)(param_2 + 0xe0);
    if (uVar22 < uVar14) goto LAB_0010ccc8;
    while( true ) {
      if ((uVar27 & *puVar29) != 0) goto LAB_0010d3e0;
      if (uVar14 == uVar22) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_0010d1ce;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(uint *)(this_00 + 100) == uVar22)) {
            *(uint *)(this_00 + 100) = uVar22 + 1;
            *(uint *)(this_00 + 0x5c) = uVar22 + 1;
            iVar26 = 0;
            goto LAB_0010d004;
          }
          cVar6 = hb_buffer_t::make_room_for(uVar21,1);
          if (cVar6 == '\0') {
            hVar7 = this_00[0x58];
          }
          else {
            puVar2 = (undefined8 *)
                     (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar5 = puVar2[1];
            puVar17 = (undefined8 *)
                      (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            *puVar17 = *puVar2;
            puVar17[1] = uVar5;
            *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar2 + 2);
            hVar7 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          iVar9 = 0;
          if (hVar7 != (hb_buffer_t)0x0) goto LAB_0010d158;
          goto LAB_0010d1ce;
        }
        uVar22 = uVar22 + 1;
        iVar26 = 0;
        *(uint *)(this_00 + 0x5c) = uVar22;
        if (uVar14 <= uVar22) break;
LAB_0010ccc8:
        lVar20 = *(long *)(this_00 + 0x70);
        uVar24 = (ulong)uVar22;
        puVar12 = (uint *)(lVar20 + uVar24 * 0x14);
        uVar11 = puVar12[2];
        uVar19 = puVar29[1];
        while (uVar11 < uVar19) {
          uVar19 = puVar29[-2];
          puVar29 = puVar29 + -3;
        }
        puVar28 = puVar29;
        if (puVar29[2] < uVar11) {
          do {
            puVar29 = puVar28 + 3;
            puVar12 = puVar28 + 5;
            puVar28 = puVar29;
          } while (*puVar12 < uVar11);
          if ((uVar27 & *puVar29) != 0) goto LAB_0010cd0a;
        }
        else if ((uVar27 & *puVar29) != 0) goto LAB_0010cd12;
      }
    }
  }
LAB_0010d1ce:
  hb_buffer_t::sync();
  return;
LAB_0010cd0a:
  puVar12 = (uint *)(lVar20 + uVar24 * 0x14);
LAB_0010cd12:
  puVar15 = *(ushort **)this;
  uVar27 = *puVar12;
  if (uVar27 == 0xffff) {
    uVar24 = 2;
  }
  else {
    uVar24 = 1;
    if ((((1L << ((byte)(uVar27 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar27 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar27 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      puVar16 = (ushort *)((ulong)(ushort)(puVar15[1] << 8 | puVar15[1] >> 8) + (long)puVar15);
      uVar27 = uVar27 - (ushort)(*puVar16 << 8 | *puVar16 >> 8);
      if (uVar27 < (ushort)(puVar16[1] << 8 | puVar16[1] >> 8)) {
        uVar24 = (ulong)*(byte *)((long)puVar16 + (ulong)uVar27 + 4);
      }
    }
  }
  do {
    uVar10 = *puVar15 << 8 | *puVar15 >> 8;
    if ((uint)uVar10 <= (uint)uVar24) {
      uVar24 = 1;
    }
    iVar25 = iVar26 * (uint)uVar10;
    uVar23 = puVar15[2] << 8 | puVar15[2] >> 8;
    uVar8 = puVar15[3] << 8 | puVar15[3] >> 8;
    puVar16 = (ushort *)
              ((long)puVar15 +
              (ulong)*(byte *)((long)puVar15 + (ulong)(uint)(iVar25 + (int)uVar24) + (ulong)uVar23)
              * 4 + (ulong)uVar8);
    uVar4 = puVar16[1] << 8;
    uVar13 = puVar16[1] >> 8;
    uVar18 = uVar4 | uVar13;
    uVar27 = (uint)uVar10;
    iVar9 = (int)((uint)(ushort)(*puVar16 << 8 | *puVar16 >> 8) - (uint)uVar23) / (int)uVar27;
    uVar13 = uVar4 & 0x3fff | uVar13;
    if (uVar13 == 0) {
      if ((iVar26 != 0) && (((uVar4 & 0x4000) == 0 || (iVar9 != 0)))) {
        puVar1 = (ushort *)
                 ((long)puVar15 +
                 (ulong)*(byte *)((long)puVar15 + uVar24 + uVar23) * 4 + (ulong)uVar8);
        uVar10 = puVar1[1];
        uVar4 = uVar10 << 8;
        if (((uVar4 & 0x3fff) != 0 || uVar10 >> 8 != 0) ||
           ((uVar10 = *puVar1,
            iVar9 != (int)((uint)(ushort)(uVar10 << 8 | uVar10 >> 8) - (uint)uVar23) / (int)uVar27
            || (((uVar4 ^ uVar18) & 0x4000) != 0)))) goto LAB_0010ce48;
      }
      uVar10 = *(ushort *)
                ((long)puVar15 +
                (ulong)*(byte *)((long)puVar15 +
                                (ulong)(iVar25 + (uint)(uVar27 == 0)) + (ulong)uVar23) * 4 +
                (ulong)uVar8 + 2);
      if ((uVar10 & 0x3f) != 0 || uVar10 >> 8 != 0) goto LAB_0010ce48;
      if ((short)uVar18 < 0) goto LAB_0010d098;
    }
    else {
LAB_0010ce48:
      uVar27 = uVar22;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        uVar27 = *(uint *)(this_00 + 100);
      }
      if ((uVar27 != 0) && (uVar22 < uVar14)) {
        hb_buffer_t::_set_glyph_flags(this_00,3,uVar27 - 1,uVar22 + 1,true,true);
        uVar22 = *(uint *)(this_00 + 0x5c);
        uVar14 = *(uint *)(this_00 + 0x60);
      }
      if ((short)uVar18 < 0) {
LAB_0010d098:
        uVar27 = *(uint *)(param_1 + 0x30);
        uVar24 = (ulong)uVar27;
        iVar26 = *(int *)(this_00 + 100);
        uVar19 = 1;
        if (uVar27 != 0) {
          uVar19 = uVar27 - 1 & 0x3f;
          if (iVar26 == *(int *)(param_1 + (ulong)uVar19 * 4 + 0x34)) {
            uVar24 = (ulong)uVar19;
            uVar19 = uVar27;
          }
          else {
            uVar24 = (ulong)(uVar27 & 0x3f);
            uVar19 = uVar27 + 1;
          }
        }
        *(uint *)(param_1 + 0x30) = uVar19;
        *(int *)(param_1 + uVar24 * 4 + 0x34) = iVar26;
      }
      if (((uVar13 != 0) && (uVar27 = *(uint *)(param_1 + 0x30), uVar27 != 0)) && (uVar22 < uVar14))
      {
        uVar22 = (int)*(long *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x10);
        if (uVar13 < uVar22) {
          uVar24 = 0x7ffffffc;
        }
        else {
          uVar24 = (ulong)(uVar13 - uVar22 & 0xfffffffc);
        }
        uVar22 = 0;
        puVar12 = (uint *)(*(long *)(param_1 + 0x18) + uVar24);
        do {
          uVar27 = uVar27 - 1;
          cVar6 = hb_buffer_t::move_to(uVar21);
          if (cVar6 == '\0') {
LAB_0010d440:
            uVar22 = *(uint *)(this_00 + 0x5c);
            uVar14 = *(uint *)(this_00 + 0x60);
            goto LAB_0010cfc0;
          }
          if ((ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40) <
              (ulong)((long)(puVar12 + 1) - *(long *)(*(long *)(param_1 + 8) + 0x30)))
          goto LAB_0010cfab;
          uVar14 = *puVar12;
          uVar19 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8;
          uVar14 = uVar14 << 0x18;
          uVar11 = uVar19 | uVar14;
          uVar19 = uVar19 | uVar14 & 0x3fffffff;
          if ((uVar14 & 0x20000000) != 0) {
            uVar19 = uVar11 | 0xc0000000;
          }
          uVar14 = (uVar19 + *(int *)(*(long *)(this_00 + 0x70) +
                                     (ulong)*(uint *)(this_00 + 0x5c) * 0x14)) * 2;
          uVar19 = (int)*(long *)(param_1 + 0x20) - (int)*(undefined8 *)(param_1 + 0x10);
          if (uVar14 < uVar19) {
            uVar24 = 0x7ffffffe;
          }
          else {
            uVar24 = (ulong)(uVar14 - uVar19 & 0xfffffffe);
          }
          puVar15 = (ushort *)(*(long *)(param_1 + 0x20) + uVar24);
          if ((ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40) <
              (ulong)((long)puVar15 + (2 - *(long *)(*(long *)(param_1 + 8) + 0x30))))
          goto LAB_0010cfab;
          uVar10 = *puVar15;
          uVar22 = uVar22 + (ushort)(uVar10 << 8 | uVar10 >> 8);
          if (0x3fffffff < uVar11) {
            uVar14 = (int)*(long *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x10);
            if (uVar22 < uVar14) {
              uVar24 = 0x7ffffffe;
              uVar22 = 0x3fffffff;
            }
            else {
              uVar22 = uVar22 - uVar14 >> 1;
              uVar24 = (ulong)(uVar22 * 2);
            }
            puVar15 = (ushort *)(*(long *)(param_1 + 0x28) + uVar24);
            if ((ulong)((long)puVar15 + (2 - *(long *)(*(long *)(param_1 + 8) + 0x30))) <=
                (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40)) {
              uVar10 = *puVar15;
              cVar6 = hb_buffer_t::make_room_for(uVar21,1);
              if (cVar6 != '\0') {
                puVar2 = *(undefined8 **)(this_00 + 0x78);
                uVar14 = *(uint *)(this_00 + 100);
                if (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) {
                  puVar17 = (undefined8 *)
                            (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
                }
                else {
                  puVar17 = puVar2;
                  if (uVar14 != 0) {
                    puVar17 = (undefined8 *)((long)puVar2 + (ulong)(uVar14 - 1) * 0x14);
                  }
                }
                uVar5 = puVar17[1];
                puVar28 = (uint *)((long)puVar2 + (ulong)uVar14 * 0x14);
                *(undefined8 *)puVar28 = *puVar17;
                *(undefined8 *)(puVar28 + 2) = uVar5;
                uVar14 = *(uint *)(puVar17 + 2);
                *puVar28 = (uint)(ushort)(uVar10 << 8 | uVar10 >> 8);
                puVar28[4] = uVar14;
                iVar26 = *(int *)(param_1 + 0x30);
                *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
                *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
                if (uVar27 < iVar26 - 1U) {
                  *(uint *)(param_1 + 0x30) = iVar26 - 1U;
                  cVar6 = hb_buffer_t::move_to(uVar21);
                  do {
                    if (cVar6 == '\0') {
LAB_0010d3c5:
                      uVar22 = *(uint *)(this_00 + 0x5c);
                      uVar14 = *(uint *)(this_00 + 0x60);
                      goto LAB_0010cfc0;
                    }
                    puVar15 = (ushort *)
                              (*(long *)(this_00 + 0x70) + 0x10 +
                              (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
                    *puVar15 = *puVar15 | 0x20;
                    cVar6 = hb_buffer_t::make_room_for(uVar21,1);
                    if (cVar6 == '\0') goto LAB_0010d3c5;
                    puVar2 = *(undefined8 **)(this_00 + 0x78);
                    uVar14 = *(uint *)(this_00 + 100);
                    if (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) {
                      puVar17 = (undefined8 *)
                                (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14
                                );
                    }
                    else {
                      puVar17 = puVar2;
                      if (uVar14 != 0) {
                        puVar17 = (undefined8 *)((long)puVar2 + (ulong)(uVar14 - 1) * 0x14);
                      }
                    }
                    uVar5 = puVar17[1];
                    puVar2 = (undefined8 *)((long)puVar2 + (ulong)uVar14 * 0x14);
                    *puVar2 = *puVar17;
                    puVar2[1] = uVar5;
                    uVar3 = *(undefined4 *)(puVar17 + 2);
                    *(undefined4 *)puVar2 = 0xffff;
                    *(undefined4 *)(puVar2 + 2) = uVar3;
                    iVar26 = *(int *)(param_1 + 0x30);
                    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
                    *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
                    if (iVar26 - 1U <= uVar27) break;
                    *(uint *)(param_1 + 0x30) = iVar26 - 1U;
                    cVar6 = hb_buffer_t::move_to(uVar21);
                  } while( true );
                }
                cVar6 = hb_buffer_t::move_to(uVar21);
                if (cVar6 != '\0') {
                  hb_buffer_t::merge_out_clusters
                            (uVar21,*(uint *)(param_1 + (ulong)(uVar27 & 0x3f) * 4 + 0x34));
                  goto LAB_0010cf87;
                }
              }
              goto LAB_0010d440;
            }
            goto LAB_0010cfab;
          }
LAB_0010cf87:
          if ((int)uVar11 < 0) goto LAB_0010cfab;
          puVar12 = puVar12 + 1;
        } while (uVar27 != 0);
        *(undefined4 *)(param_1 + 0x30) = 0;
LAB_0010cfab:
        hb_buffer_t::move_to(uVar21);
        uVar22 = *(uint *)(this_00 + 0x5c);
        uVar14 = *(uint *)(this_00 + 0x60);
      }
    }
LAB_0010cfc0:
    if ((uVar22 == uVar14) || (this_00[0x58] == (hb_buffer_t)0x0)) goto LAB_0010d1ce;
    iVar26 = iVar9;
    if (((puVar16[1] & 0x40) == 0) ||
       (iVar25 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar25 + -1, iVar25 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(uint *)(this_00 + 0x5c) = uVar22 + 1;
      }
      else if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
              (uVar22 == *(uint *)(this_00 + 100))) {
        *(uint *)(this_00 + 100) = uVar22 + 1;
        *(uint *)(this_00 + 0x5c) = uVar22 + 1;
      }
      else {
        cVar6 = hb_buffer_t::make_room_for(uVar21,1);
        if (cVar6 == '\0') {
          hVar7 = this_00[0x58];
        }
        else {
          puVar2 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          puVar17 = (undefined8 *)
                    (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar5 = puVar17[1];
          *puVar2 = *puVar17;
          puVar2[1] = uVar5;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar17 + 2);
          hVar7 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        if (hVar7 == (hb_buffer_t)0x0) goto LAB_0010d1ce;
LAB_0010d158:
        uVar14 = *(uint *)(this_00 + 0x60);
        iVar26 = iVar9;
      }
    }
LAB_0010d004:
    uVar22 = *(uint *)(this_00 + 0x5c);
    if (puVar29 != (uint *)0x0) goto LAB_0010cc80;
LAB_0010d010:
    if (uVar22 < uVar14) break;
LAB_0010d3e0:
    uVar24 = 0;
    puVar15 = *(ushort **)this;
  } while( true );
  lVar20 = *(long *)(this_00 + 0x70);
  uVar24 = (ulong)uVar22;
  goto LAB_0010cd0a;
}



/* void AAT::StateTableDriver<AAT::ObsoleteTypes,
   AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>::drive<AAT::InsertionSubtable<AAT::ObsoleteTypes>::driver_context_t>(AAT::InsertionSubtable<AAT::ObsoleteTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>::
drive<AAT::InsertionSubtable<AAT::ObsoleteTypes>::driver_context_t>
          (StateTableDriver<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
           *this,driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  hb_buffer_t *this_00;
  long lVar4;
  undefined8 *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  hb_buffer_t hVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ushort *puVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ushort *puVar26;
  ushort *puVar27;
  ulong uVar28;
  long lVar29;
  ushort *puVar30;
  ushort uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  ushort *puVar35;
  uint *puVar36;
  uint *puVar37;
  long in_FS_OFFSET;
  
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  hb_buffer_t::clear_output();
  puVar37 = *(uint **)(param_2 + 0x78);
  if (puVar37 != (uint *)0x0) {
    if (puVar37[1] < 2) {
      puVar37 = (uint *)0x0;
    }
    else {
      puVar37 = *(uint **)(puVar37 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] == (hb_buffer_t)0x0) {
LAB_0010dd40:
    if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
      hb_buffer_t::sync();
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar23 = *(uint *)(this_00 + 0x60);
  uVar32 = 0;
  iVar14 = 0;
LAB_0010d5a2:
  uVar25 = (uint)this_00;
  iVar20 = iVar14;
  if (puVar37 == (uint *)0x0) goto LAB_0010db1c;
LAB_0010d5ab:
  uVar15 = *(uint *)(param_2 + 0xe0);
  if ((uint)uVar32 < uVar23) goto LAB_0010d5f3;
  while( true ) {
    if ((uVar15 & *puVar37) != 0) goto LAB_0010def0;
    if (uVar23 == (uint)uVar32) break;
    while( true ) {
      if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_0010dd40;
      iVar14 = (int)uVar32;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
           (*(int *)(this_00 + 100) == iVar14)) {
          uVar25 = iVar14 + 1;
          uVar32 = (ulong)uVar25;
          iVar14 = 0;
          *(uint *)(this_00 + 100) = uVar25;
          *(uint *)(this_00 + 0x5c) = uVar25;
          goto LAB_0010d5a2;
        }
        cVar10 = hb_buffer_t::make_room_for(uVar25,1);
        if (cVar10 == '\0') {
          hVar11 = this_00[0x58];
        }
        else {
          puVar5 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar7 = puVar5[1];
          puVar17 = (undefined8 *)
                    (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *puVar17 = *puVar5;
          puVar17[1] = uVar7;
          *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar5 + 2);
          hVar11 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        iVar14 = 0;
        goto joined_r0x0010dd34;
      }
      uVar24 = iVar14 + 1;
      uVar32 = (ulong)uVar24;
      iVar20 = 0;
      *(uint *)(this_00 + 0x5c) = uVar24;
      if (uVar23 <= uVar24) break;
LAB_0010d5f3:
      lVar29 = *(long *)(this_00 + 0x70);
      puVar16 = (uint *)(lVar29 + uVar32 * 0x14);
      uVar19 = puVar16[2];
      uVar24 = puVar37[1];
      while (uVar19 < uVar24) {
        uVar24 = puVar37[-2];
        puVar37 = puVar37 + -3;
      }
      puVar36 = puVar37;
      if (puVar37[2] < uVar19) {
        do {
          puVar37 = puVar36 + 3;
          puVar16 = puVar36 + 5;
          puVar36 = puVar37;
        } while (*puVar16 < uVar19);
        if ((uVar15 & *puVar37) != 0) goto LAB_0010d63a;
      }
      else if ((uVar15 & *puVar37) != 0) goto LAB_0010d642;
    }
  }
  goto LAB_0010dd40;
LAB_0010d63a:
  puVar16 = (uint *)(lVar29 + uVar32 * 0x14);
LAB_0010d642:
  puVar30 = *(ushort **)this;
  uVar15 = *puVar16;
  if (uVar15 == 0xffff) {
    uVar33 = 2;
  }
  else {
    uVar33 = 1;
    if ((((1L << ((byte)(uVar15 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar15 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar15 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      puVar21 = (ushort *)((ulong)(ushort)(puVar30[1] << 8 | puVar30[1] >> 8) + (long)puVar30);
      uVar15 = uVar15 - (ushort)(*puVar21 << 8 | *puVar21 >> 8);
      if (uVar15 < (ushort)(puVar21[1] << 8 | puVar21[1] >> 8)) {
        uVar33 = (ulong)*(byte *)((long)puVar21 + (ulong)uVar15 + 4);
      }
    }
  }
LAB_0010d6a8:
  uVar15 = (uint)uVar32;
  uVar18 = *puVar30 << 8 | *puVar30 >> 8;
  if ((uint)uVar18 <= (uint)uVar33) {
    uVar33 = 1;
  }
  iVar34 = iVar20 * (uint)uVar18;
  uVar31 = puVar30[2] << 8 | puVar30[2] >> 8;
  uVar12 = puVar30[3] << 8 | puVar30[3] >> 8;
  puVar21 = (ushort *)
            ((long)puVar30 +
            (ulong)*(byte *)((long)puVar30 + (ulong)(uint)(iVar34 + (int)uVar33) + (ulong)uVar31) *
            8 + (ulong)uVar12);
  uVar1 = puVar21[1];
  uVar24 = (uint)uVar18;
  iVar14 = (int)((uint)(ushort)(*puVar21 << 8 | *puVar21 >> 8) - (uint)uVar31) / (int)uVar24;
  uVar18 = uVar1 << 8;
  uVar13 = uVar18 | uVar1 >> 8;
  if (((uVar18 & 0x3ff) == 0 && uVar1 >> 8 == 0) ||
     ((puVar21[2] == 0xffff && (puVar21[3] == 0xffff)))) {
    if ((iVar20 != 0) && (((uVar18 & 0x4000) == 0 || (iVar14 != 0)))) {
      puVar35 = (ushort *)
                ((long)puVar30 +
                (ulong)*(byte *)((long)puVar30 + uVar33 + uVar31) * 8 + (ulong)uVar12);
      uVar6 = puVar35[1] << 8;
      if (((((uVar6 & 0x3ff) != 0 || puVar35[1] >> 8 != 0) &&
           ((puVar35[2] != 0xffff || (puVar35[3] != 0xffff)))) ||
          (iVar14 != (int)((uint)(ushort)(*puVar35 << 8 | *puVar35 >> 8) - (uint)uVar31) /
                     (int)uVar24)) || (((uVar6 ^ uVar13) & 0x4000) != 0)) goto LAB_0010d734;
    }
    lVar29 = (ulong)*(byte *)((long)puVar30 + (ulong)(iVar34 + (uint)(uVar24 == 0)) + (ulong)uVar31)
             * 8 + (ulong)uVar12;
    uVar12 = *(ushort *)((long)puVar30 + lVar29 + 2);
    if (((uVar12 & 3) != 0 || uVar12 >> 8 != 0) &&
       ((*(short *)((long)puVar30 + lVar29 + 4) != -1 ||
        (*(short *)((long)puVar30 + lVar29 + 6) != -1)))) goto LAB_0010d734;
  }
  else {
LAB_0010d734:
    uVar24 = uVar15;
    if (this_00[0x5a] != (hb_buffer_t)0x0) {
      uVar24 = *(uint *)(this_00 + 100);
    }
    if ((uVar15 < uVar23) && (uVar24 != 0)) {
      hb_buffer_t::_set_glyph_flags(this_00,3,uVar24 - 1,uVar15 + 1,true,true);
    }
  }
  uVar2 = *(undefined4 *)(this_00 + 100);
  uVar12 = puVar21[3];
  if (uVar12 == 0xffff) {
LAB_0010d960:
    if ((short)uVar13 < 0) {
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    uVar18 = puVar21[2];
    if (uVar18 != 0xffff) {
      iVar20 = *(int *)(this_00 + 200);
      uVar23 = (uVar13 & 0x3e0) >> 5;
      *(uint *)(this_00 + 200) = iVar20 - uVar23;
      if (0 < (int)(iVar20 - uVar23)) {
        puVar30 = (ushort *)
                  (*(long *)(param_1 + 0x18) + (ulong)(ushort)(uVar18 << 8 | uVar18 >> 8) * 2);
        lVar29 = *(long *)(param_1 + 8);
        if ((((ulong)*(uint *)(lVar29 + 0x40) < (ulong)((long)puVar30 - *(long *)(lVar29 + 0x30)))
            || ((uint)((int)*(undefined8 *)(lVar29 + 0x38) - (int)puVar30) < uVar23 * 2)) ||
           (iVar20 = *(int *)(lVar29 + 0x44) + uVar23 * -2, *(int *)(lVar29 + 0x44) = iVar20,
           iVar20 < 1)) {
          uVar23 = 0;
        }
        bVar22 = ((byte)uVar1 >> 3 ^ 1) & 1;
        if ((*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) && (bVar22 != 0)) {
          puVar5 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar7 = *puVar5;
          uVar8 = puVar5[1];
          uVar2 = *(undefined4 *)(puVar5 + 2);
          cVar10 = hb_buffer_t::make_room_for(uVar25,0);
          if (cVar10 == '\0') goto LAB_0010daca;
          puVar5 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *(undefined4 *)(puVar5 + 2) = uVar2;
          *puVar5 = uVar7;
          puVar5[1] = uVar8;
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        }
        cVar10 = hb_buffer_t::make_room_for(uVar25,0);
        if (cVar10 != '\0') {
          uVar15 = *(uint *)(this_00 + 0x5c);
          uVar24 = *(uint *)(this_00 + 0x60);
          puVar5 = *(undefined8 **)(this_00 + 0x78);
          uVar19 = *(uint *)(this_00 + 100);
          if (uVar15 < uVar24) {
            puVar17 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)uVar15 * 0x14);
          }
          else {
            puVar17 = puVar5;
            if (uVar19 != 0) {
              puVar17 = (undefined8 *)((long)puVar5 + (ulong)(uVar19 - 1) * 0x14);
            }
          }
          if (uVar23 != 0) {
            puVar16 = (uint *)((long)puVar5 + (ulong)uVar19 * 0x14);
            puVar35 = puVar30;
            do {
              uVar7 = puVar17[1];
              puVar26 = puVar35 + 1;
              *(undefined8 *)puVar16 = *puVar17;
              *(undefined8 *)(puVar16 + 2) = uVar7;
              puVar16[4] = *(uint *)(puVar17 + 2);
              *puVar16 = (uint)(ushort)(*puVar35 << 8 | *puVar35 >> 8);
              puVar16 = puVar16 + 5;
              puVar35 = puVar26;
            } while (puVar30 + uVar23 != puVar26);
            uVar15 = *(uint *)(this_00 + 0x5c);
            uVar24 = *(uint *)(this_00 + 0x60);
            uVar19 = *(uint *)(this_00 + 100);
          }
          *(uint *)(this_00 + 100) = uVar19 + uVar23;
          if ((uVar15 < uVar24) && (bVar22 != 0)) {
            *(uint *)(this_00 + 0x5c) = uVar15 + 1;
          }
          hb_buffer_t::move_to(uVar25);
        }
      }
    }
  }
  else {
    iVar20 = *(int *)(this_00 + 200);
    uVar23 = (byte)(uVar1 >> 8) & 0x1f;
    *(uint *)(this_00 + 200) = iVar20 - uVar23;
    if (0 < (int)(iVar20 - uVar23)) {
      puVar30 = (ushort *)
                (*(long *)(param_1 + 0x18) + (ulong)(ushort)(uVar12 << 8 | uVar12 >> 8) * 2);
      lVar29 = *(long *)(param_1 + 8);
      if ((((ulong)*(uint *)(lVar29 + 0x40) < (ulong)((long)puVar30 - *(long *)(lVar29 + 0x30))) ||
          ((uint)((int)*(undefined8 *)(lVar29 + 0x38) - (int)puVar30) < uVar23 * 2)) ||
         (iVar20 = *(int *)(lVar29 + 0x44) + uVar23 * -2, *(int *)(lVar29 + 0x44) = iVar20,
         iVar20 < 1)) {
        uVar23 = 0;
      }
      cVar10 = hb_buffer_t::move_to(uVar25);
      if (cVar10 != '\0') {
        bVar9 = (uVar18 & 0x400) == 0;
        if ((*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) && (bVar9)) {
          puVar5 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar7 = *puVar5;
          uVar8 = puVar5[1];
          uVar3 = *(undefined4 *)(puVar5 + 2);
          cVar10 = hb_buffer_t::make_room_for(uVar25,0);
          if (cVar10 == '\0') goto LAB_0010daca;
          puVar5 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *(undefined4 *)(puVar5 + 2) = uVar3;
          *puVar5 = uVar7;
          puVar5[1] = uVar8;
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        }
        cVar10 = hb_buffer_t::make_room_for(uVar25,0);
        if (cVar10 != '\0') {
          uVar15 = *(uint *)(this_00 + 0x5c);
          uVar24 = *(uint *)(this_00 + 0x60);
          puVar5 = *(undefined8 **)(this_00 + 0x78);
          uVar19 = *(uint *)(this_00 + 100);
          if (uVar15 < uVar24) {
            puVar17 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)uVar15 * 0x14);
          }
          else {
            puVar17 = puVar5;
            if (uVar19 != 0) {
              puVar17 = (undefined8 *)((long)puVar5 + (ulong)(uVar19 - 1) * 0x14);
            }
          }
          if (uVar23 != 0) {
            puVar35 = puVar30 + uVar23;
            puVar16 = (uint *)((long)puVar5 + (ulong)uVar19 * 0x14);
            puVar26 = puVar30;
            do {
              uVar7 = puVar17[1];
              puVar27 = puVar26 + 1;
              *(undefined8 *)puVar16 = *puVar17;
              *(undefined8 *)(puVar16 + 2) = uVar7;
              puVar16[4] = *(uint *)(puVar17 + 2);
              *puVar16 = (uint)(ushort)(*puVar26 << 8 | *puVar26 >> 8);
              puVar16 = puVar16 + 5;
              puVar26 = puVar27;
            } while (puVar35 != puVar27);
            *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar23;
            lVar29 = *(long *)(param_1 + 8);
            uVar32 = *(ulong *)(lVar29 + 0x80);
            uVar33 = *(ulong *)(lVar29 + 0x88);
            uVar28 = *(ulong *)(lVar29 + 0x90);
            do {
              uVar18 = *puVar30;
              puVar30 = puVar30 + 1;
              uVar32 = uVar32 | 1L << ((byte)((ushort)(uVar18 << 8 | uVar18 >> 8) >> 4) & 0x3f);
              uVar33 = uVar33 | 1L << ((byte)(uVar18 >> 8) & 0x3f);
              uVar28 = uVar28 | 1L << ((byte)uVar18 >> 1 & 0x3f);
            } while (puVar35 != puVar30);
            *(ulong *)(lVar29 + 0x80) = uVar32;
            uVar15 = *(uint *)(this_00 + 0x5c);
            *(ulong *)(lVar29 + 0x88) = uVar33;
            *(ulong *)(lVar29 + 0x90) = uVar28;
            uVar24 = *(uint *)(this_00 + 0x60);
          }
          *param_1 = (driver_context_t)0x1;
          if ((uVar15 < uVar24) && (bVar9)) {
            *(uint *)(this_00 + 0x5c) = uVar15 + 1;
          }
          cVar10 = hb_buffer_t::move_to(uVar25);
          if (cVar10 != '\0') {
            uVar23 = *(int *)(this_00 + 0x5c) + 1U;
            if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
              uVar23 = *(uint *)(this_00 + 0x60);
            }
            hb_buffer_t::_set_glyph_flags(this_00,3,*(uint *)(param_1 + 0x10),uVar23,true,true);
            goto LAB_0010d960;
          }
        }
      }
    }
  }
LAB_0010daca:
  uVar23 = *(uint *)(this_00 + 0x5c);
  uVar32 = (ulong)uVar23;
  if ((uVar23 == *(uint *)(this_00 + 0x60)) || (this_00[0x58] == (hb_buffer_t)0x0))
  goto LAB_0010dd40;
  if (((puVar21[1] & 0x40) == 0) ||
     (iVar20 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar20 + -1, iVar20 < 1)) {
    if (this_00[0x5a] == (hb_buffer_t)0x0) {
      uVar32 = (ulong)(uVar23 + 1);
      *(uint *)(this_00 + 0x5c) = uVar23 + 1;
    }
    else {
      if ((*(long *)(this_00 + 0x78) != *(long *)(this_00 + 0x70)) ||
         (uVar23 != *(uint *)(this_00 + 100))) goto LAB_0010dc66;
      uVar23 = uVar23 + 1;
      uVar32 = (ulong)uVar23;
      *(uint *)(this_00 + 100) = uVar23;
      *(uint *)(this_00 + 0x5c) = uVar23;
    }
  }
  uVar23 = *(uint *)(this_00 + 0x60);
  iVar20 = iVar14;
  if (puVar37 != (uint *)0x0) goto LAB_0010d5ab;
LAB_0010db1c:
  if ((uint)uVar32 < uVar23) goto code_r0x0010db25;
LAB_0010def0:
  uVar33 = 0;
  puVar30 = *(ushort **)this;
  goto LAB_0010d6a8;
LAB_0010dc66:
  cVar10 = hb_buffer_t::make_room_for(uVar25,1);
  if (cVar10 == '\0') {
    hVar11 = this_00[0x58];
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
    puVar17 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
    uVar7 = puVar17[1];
    *puVar5 = *puVar17;
    puVar5[1] = uVar7;
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar17 + 2);
    hVar11 = this_00[0x58];
    *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
  }
joined_r0x0010dd34:
  if (hVar11 == (hb_buffer_t)0x0) goto LAB_0010dd40;
  uVar23 = *(uint *)(this_00 + 0x60);
  uVar32 = (ulong)*(uint *)(this_00 + 0x5c);
  goto LAB_0010d5a2;
code_r0x0010db25:
  lVar29 = *(long *)(this_00 + 0x70);
  goto LAB_0010d63a;
}



/* AAT::Chain<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*,
   AAT::hb_aat_layout_chain_accelerator_t const*) const */

void __thiscall
AAT::Chain<AAT::ObsoleteTypes>::apply
          (Chain<AAT::ObsoleteTypes> *this,hb_aat_apply_context_t *param_1,
          hb_aat_layout_chain_accelerator_t *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  GDEF *this_00;
  long lVar5;
  ulong uVar6;
  char cVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ushort *puVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  ulong *puVar17;
  uint *puVar18;
  hb_aat_layout_chain_accelerator_t *phVar19;
  ushort uVar20;
  int iVar21;
  byte bVar22;
  uint *puVar23;
  hb_buffer_t *phVar24;
  Chain<AAT::ObsoleteTypes> *pCVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_1b8;
  uint local_1b0;
  Chain<AAT::ObsoleteTypes> *local_1a8;
  hb_aat_apply_context_t *local_1a0;
  short *psStack_198;
  Chain<AAT::ObsoleteTypes> *local_190;
  Chain<AAT::ObsoleteTypes> *local_188;
  Chain<AAT::ObsoleteTypes> *local_180;
  ulong local_178;
  hb_aat_apply_context_t *phStack_170;
  Chain<AAT::ObsoleteTypes> *local_168;
  Chain<AAT::ObsoleteTypes> *local_160;
  Chain<AAT::ObsoleteTypes> *local_158;
  Chain<AAT::ObsoleteTypes> *local_150;
  undefined4 local_148;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
  pCVar25 = this + (ulong)(((uint)uVar8 + (uint)uVar8 * 2) * 4) + 0xc;
  uVar8 = *(ushort *)(this + 10) << 8 | *(ushort *)(this + 10) >> 8;
  if (uVar8 == 0) {
LAB_0010e414:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar21 = *(int *)(param_1 + 0xe4);
  phVar19 = param_2;
LAB_0010e008:
  iVar2 = *(int *)(*(long *)(param_1 + 0x78) + 4);
  puVar10 = *(uint **)(*(long *)(param_1 + 0x78) + 8);
  if (iVar2 != 0) {
    uVar14 = *(uint *)(pCVar25 + 4);
    puVar23 = puVar10 + (ulong)(iVar2 - 1) * 3 + 3;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    do {
      if ((uVar14 & *puVar10) != 0) {
        *(uint *)(param_1 + 0xe0) = uVar14;
        uVar30 = 0xffffffff;
        uVar27 = 0xffffffff;
        uVar28 = 0xffffffff;
        uVar29 = 0xffffffff;
        uVar11 = 0xffffffffffffffff;
        if (param_2 != (hb_aat_layout_chain_accelerator_t *)0x0) {
          uVar11 = *(undefined8 *)(phVar19 + 0x10);
          uVar27 = *(undefined4 *)phVar19;
          uVar28 = *(undefined4 *)(phVar19 + 4);
          uVar29 = *(undefined4 *)(phVar19 + 8);
          uVar30 = *(undefined4 *)(phVar19 + 0xc);
        }
        *(undefined8 *)(param_1 + 0xa8) = uVar11;
        phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x98) = uVar27;
        *(undefined4 *)(param_1 + 0x9c) = uVar28;
        *(undefined4 *)(param_1 + 0xa0) = uVar29;
        *(undefined4 *)(param_1 + 0xa4) = uVar30;
        uVar16 = *(ushort *)(pCVar25 + 2);
        if (((uVar16 & 0x20) != 0) ||
           (((*(uint *)(phVar24 + 0x38) & 0xfffffffe) == 6) == (bool)-((char)(byte)uVar16 >> 7))) {
          bVar22 = (byte)uVar16 >> 6 & 1;
          if ((uVar16 & 0x10) == 0) {
            bVar22 = bVar22 ^ (*(uint *)(phVar24 + 0x38) & 0xfffffffd) == 5;
          }
          cVar7 = hb_buffer_t::message
                            (phVar24,*(hb_font_t **)(param_1 + 0x10),"start chainsubtable %u");
          if (cVar7 == '\0') goto LAB_0010e3e4;
          if (bVar22 == 0) {
            switch(pCVar25[3]) {
            case (Chain<AAT::ObsoleteTypes>)0x0:
              goto switchD_0010e103_caseD_0;
            case (Chain<AAT::ObsoleteTypes>)0x1:
              goto switchD_0010e103_caseD_1;
            case (Chain<AAT::ObsoleteTypes>)0x2:
              goto switchD_0010e103_caseD_2;
            default:
              goto switchD_0010e103_caseD_3;
            case (Chain<AAT::ObsoleteTypes>)0x4:
              goto switchD_0010e103_caseD_4;
            case (Chain<AAT::ObsoleteTypes>)0x5:
              goto switchD_0010e103_caseD_5;
            }
          }
          lVar5 = *(long *)(param_1 + 0x20);
          uVar14 = *(uint *)(lVar5 + 0x60);
          if (1 < uVar14) {
            uVar15 = 0;
            puVar13 = *(ulong **)(lVar5 + 0x70);
            puVar17 = (ulong *)((long)*(ulong **)(lVar5 + 0x70) + (ulong)(uVar14 - 1) * 0x14);
            do {
              uVar4 = puVar13[1];
              uVar6 = puVar17[2];
              uVar15 = uVar15 + 1;
              local_178 = *puVar17;
              phStack_170 = (hb_aat_apply_context_t *)puVar17[1];
              *puVar17 = *puVar13;
              puVar17[1] = uVar4;
              local_168 = (Chain<AAT::ObsoleteTypes> *)CONCAT44(local_168._4_4_,(int)uVar6);
              *(int *)(puVar17 + 2) = (int)puVar13[2];
              *(int *)(puVar13 + 2) = (int)uVar6;
              *puVar13 = local_178;
              puVar13[1] = (ulong)phStack_170;
              puVar13 = (ulong *)((long)puVar13 + 0x14);
              puVar17 = (ulong *)((long)puVar17 + -0x14);
            } while (uVar15 < (uVar14 - 1) - uVar15);
            if (*(char *)(lVar5 + 0x5b) != '\0') {
              uVar15 = *(uint *)(lVar5 + 0x60);
              if (uVar14 <= *(uint *)(lVar5 + 0x60)) {
                uVar15 = uVar14;
              }
              if (1 < uVar15) {
                uVar14 = 0;
                puVar13 = *(ulong **)(lVar5 + 0x80);
                puVar17 = (ulong *)((long)*(ulong **)(lVar5 + 0x80) + (ulong)(uVar15 - 1) * 0x14);
                do {
                  uVar4 = puVar13[1];
                  uVar6 = puVar17[2];
                  uVar14 = uVar14 + 1;
                  local_178 = *puVar17;
                  phStack_170 = (hb_aat_apply_context_t *)puVar17[1];
                  *puVar17 = *puVar13;
                  puVar17[1] = uVar4;
                  local_168 = (Chain<AAT::ObsoleteTypes> *)CONCAT44(local_168._4_4_,(int)uVar6);
                  *(int *)(puVar17 + 2) = (int)puVar13[2];
                  *(int *)(puVar13 + 2) = (int)uVar6;
                  *puVar13 = local_178;
                  puVar13[1] = (ulong)phStack_170;
                  puVar13 = (ulong *)((long)puVar13 + 0x14);
                  puVar17 = (ulong *)((long)puVar17 + -0x14);
                } while (uVar14 < (uVar15 - 1) - uVar14);
              }
            }
          }
          goto LAB_0010e791;
        }
        break;
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar23);
  }
  goto LAB_0010e3eb;
LAB_0010e791:
  switch(pCVar25[3]) {
  case (Chain<AAT::ObsoleteTypes>)0x0:
switchD_0010e103_caseD_0:
    local_1a8 = pCVar25 + 8;
    local_1b8 = (Chain<AAT::ObsoleteTypes> *)0x0;
    local_1b0 = 0;
    iVar21 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    if (iVar21 == -1) {
      iVar21 = hb_face_t::load_num_glyphs();
    }
    local_1a0 = (hb_aat_apply_context_t *)CONCAT44(local_1a0._4_4_,iVar21);
    uVar16 = *(ushort *)(local_1a8 + 4) << 8 | *(ushort *)(local_1a8 + 4) >> 8;
    if ((((*(uint *)(local_1a8 +
                    (ulong)(ushort)(*(ushort *)(local_1a8 + 6) << 8 |
                                   *(ushort *)(local_1a8 + 6) >> 8) +
                    (ulong)(byte)local_1a8[(ulong)uVar16 + 1] * 4) & 0xf000000) != 0) &&
        (local_1b8._4_4_ < local_1b0)) ||
       ((uVar20 = (ushort)*(uint *)(local_1a8 +
                                   (ulong)(ushort)(*(ushort *)(local_1a8 + 6) << 8 |
                                                  *(ushort *)(local_1a8 + 6) >> 8) +
                                   (ulong)(byte)local_1a8[(ulong)uVar16 + 1] * 4),
        (int)((uint)(ushort)(uVar20 << 8 | uVar20 >> 8) - (uint)uVar16) /
        (int)(uint)(ushort)(*(ushort *)local_1a8 << 8 | *(ushort *)local_1a8 >> 8) != 0 ||
        ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
          ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
         ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))))) {
      StateTableDriver<AAT::ObsoleteTypes,void>::
      drive<AAT::RearrangementSubtable<AAT::ObsoleteTypes>::driver_context_t>
                ((StateTableDriver<AAT::ObsoleteTypes,void> *)&local_1a8,
                 (driver_context_t *)&local_1b8,param_1);
    }
    break;
  case (Chain<AAT::ObsoleteTypes>)0x1:
switchD_0010e103_caseD_1:
    psStack_198 = *(short **)(param_1 + 0x70);
    bVar26 = false;
    local_1a8 = (Chain<AAT::ObsoleteTypes> *)((ulong)local_1a8._1_7_ << 8);
    local_1b8 = pCVar25 + 8;
    if (*psStack_198 == 0x100) {
      bVar26 = psStack_198[2] != 0;
    }
    local_190 = (Chain<AAT::ObsoleteTypes> *)
                (((ulong)CONCAT61(local_190._2_6_,bVar26) & 0xffffff) << 8);
    local_180 = local_1b8 +
                (ushort)(*(ushort *)(pCVar25 + 0x10) << 8 | *(ushort *)(pCVar25 + 0x10) >> 8);
    uVar14 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    local_1a0 = param_1;
    local_188 = local_1b8;
    if (uVar14 == 0xffffffff) {
      uVar14 = hb_face_t::load_num_glyphs();
    }
    phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
    uVar16 = *(ushort *)(local_1b8 + 4) << 8 | *(ushort *)(local_1b8 + 4) >> 8;
    uVar11 = *(undefined8 *)
              (local_1b8 +
              (ulong)(ushort)(*(ushort *)(local_1b8 + 6) << 8 | *(ushort *)(local_1b8 + 6) >> 8) +
              (ulong)(byte)local_1b8[(ulong)uVar16 + 1] * 8);
    local_1b0 = uVar14;
    if (((((*(int *)(phVar24 + 0x5c) != *(int *)(phVar24 + 0x60)) || ((char)local_190 != '\0')) &&
         ((ushort)((ushort)((ulong)uVar11 >> 0x20) & (ushort)((ulong)uVar11 >> 0x30)) != 0xffff)) ||
        ((int)((uint)(ushort)((ushort)uVar11 << 8 | (ushort)uVar11 >> 8) - (uint)uVar16) /
         (int)(uint)(ushort)(*(ushort *)local_1b8 << 8 | *(ushort *)local_1b8 >> 8) != 0)) ||
       ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
         ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
        ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))) {
      StateTableDriver<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>::
      drive<AAT::ContextualSubtable<AAT::ObsoleteTypes>::driver_context_t>
                ((StateTableDriver<AAT::ObsoleteTypes,AAT::ContextualSubtable<AAT::ObsoleteTypes>::EntryData>
                  *)&local_1b8,(driver_context_t *)&local_1a8,param_1);
      phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
    }
    goto LAB_0010e344;
  case (Chain<AAT::ObsoleteTypes>)0x2:
switchD_0010e103_caseD_2:
    local_1a8 = pCVar25 + 8;
    local_178 = local_178 & 0xffffffffffffff00;
    local_148 = 0;
    local_160 = local_1a8 +
                (ushort)(*(ushort *)(pCVar25 + 0x10) << 8 | *(ushort *)(pCVar25 + 0x10) >> 8);
    local_158 = local_1a8 +
                (ushort)(*(ushort *)(pCVar25 + 0x12) << 8 | *(ushort *)(pCVar25 + 0x12) >> 8);
    local_150 = local_1a8 +
                (ushort)(*(ushort *)(pCVar25 + 0x14) << 8 | *(ushort *)(pCVar25 + 0x14) >> 8);
    iVar21 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    phStack_170 = param_1;
    local_168 = local_1a8;
    if (iVar21 == -1) {
      iVar21 = hb_face_t::load_num_glyphs();
    }
    local_1a0 = (hb_aat_apply_context_t *)CONCAT44(local_1a0._4_4_,iVar21);
    uVar16 = *(ushort *)(local_1a8 + 4) << 8 | *(ushort *)(local_1a8 + 4) >> 8;
    uVar14 = *(uint *)(local_1a8 +
                      (ulong)(ushort)(*(ushort *)(local_1a8 + 6) << 8 |
                                     *(ushort *)(local_1a8 + 6) >> 8) +
                      (ulong)(byte)local_1a8[(ulong)uVar16 + 1] * 4);
    if ((((uVar14 & 0x3f0000) != 0 || (ushort)(uVar14 >> 0x18) != 0) ||
        ((int)((uint)(ushort)((ushort)uVar14 << 8 | (ushort)uVar14 >> 8) - (uint)uVar16) /
         (int)(uint)(ushort)(*(ushort *)local_1a8 << 8 | *(ushort *)local_1a8 >> 8) != 0)) ||
       (((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
        (((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0 &&
         ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))))) {
      StateTableDriver<AAT::ObsoleteTypes,void>::
      drive<AAT::LigatureSubtable<AAT::ObsoleteTypes>::driver_context_t>
                ((StateTableDriver<AAT::ObsoleteTypes,void> *)&local_1a8,
                 (driver_context_t *)&local_178,param_1);
    }
    break;
  default:
    phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
    goto LAB_0010e349;
  case (Chain<AAT::ObsoleteTypes>)0x4:
switchD_0010e103_caseD_4:
    this_00 = *(GDEF **)(param_1 + 0x70);
    bVar26 = false;
    if (*(short *)this_00 == 0x100) {
      bVar26 = *(short *)(this_00 + 4) != 0;
    }
    uVar14 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    if (uVar14 == 0xffffffff) {
      uVar14 = hb_face_t::load_num_glyphs();
    }
    phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
    puVar10 = *(uint **)(param_1 + 0x78);
    puVar23 = *(uint **)(phVar24 + 0x70);
    if (puVar10 != (uint *)0x0) {
      if (puVar10[1] < 2) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = *(uint **)(puVar10 + 2);
      }
    }
    if (*(uint *)(phVar24 + 0x60) == 0) goto LAB_0010e3be;
    puVar1 = puVar23 + (ulong)*(uint *)(phVar24 + 0x60) * 5;
    do {
      if (puVar10 != (uint *)0x0) {
        while( true ) {
          uVar15 = puVar23[2];
          if (puVar10[1] <= uVar15) goto LAB_0010e2a4;
          do {
            puVar18 = puVar10;
            puVar10 = puVar18 + -3;
          } while (uVar15 < puVar18[-2]);
          uVar3 = puVar18[-1];
          while (uVar3 < uVar15) {
            puVar10 = puVar10 + 3;
LAB_0010e2a4:
            uVar3 = puVar10[2];
          }
          if ((*puVar10 & *(uint *)(param_1 + 0xe0)) != 0) break;
          puVar23 = puVar23 + 5;
          if (puVar1 == puVar23) goto LAB_0010e340;
        }
      }
      puVar12 = (ushort *)
                Lookup<OT::HBGlyphID16>::get_value
                          ((Lookup<OT::HBGlyphID16> *)(pCVar25 + 8),*puVar23,uVar14);
      if (puVar12 != (ushort *)0x0) {
        uVar16 = *puVar12;
        uVar20 = uVar16 << 8 | uVar16 >> 8;
        *puVar23 = (uint)uVar20;
        *(ulong *)(param_1 + 0x80) = *(ulong *)(param_1 + 0x80) | 1L << ((byte)(uVar20 >> 4) & 0x3f)
        ;
        *(ulong *)(param_1 + 0x88) = *(ulong *)(param_1 + 0x88) | 1L << ((byte)(uVar16 >> 8) & 0x3f)
        ;
        *(ulong *)(param_1 + 0x90) = *(ulong *)(param_1 + 0x90) | 1L << ((byte)uVar16 >> 1 & 0x3f);
        if (bVar26) {
          uVar9 = OT::GDEF::get_glyph_props(this_00,(uint)uVar20);
          *(undefined2 *)(puVar23 + 3) = uVar9;
        }
      }
      puVar23 = puVar23 + 5;
    } while (puVar23 != puVar1);
    break;
  case (Chain<AAT::ObsoleteTypes>)0x5:
switchD_0010e103_caseD_5:
    local_1b8 = pCVar25 + 8;
    local_1a8 = (Chain<AAT::ObsoleteTypes> *)((ulong)local_1a8._1_7_ << 8);
    psStack_198 = (short *)((ulong)psStack_198 & 0xffffffff00000000);
    local_190 = local_1b8 +
                (ushort)(*(ushort *)(pCVar25 + 0x10) << 8 | *(ushort *)(pCVar25 + 0x10) >> 8);
    uVar14 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    local_1a0 = param_1;
    if (uVar14 == 0xffffffff) {
      uVar14 = hb_face_t::load_num_glyphs();
    }
    uVar16 = *(ushort *)(local_1b8 + 4) << 8 | *(ushort *)(local_1b8 + 4) >> 8;
    uVar4 = *(ulong *)(local_1b8 +
                      (ulong)(ushort)(*(ushort *)(local_1b8 + 6) << 8 |
                                     *(ushort *)(local_1b8 + 6) >> 8) +
                      (ulong)(byte)local_1b8[(ulong)uVar16 + 1] * 8);
    local_1b0 = uVar14;
    if (((((uVar4 & 0x30000) != 0 || (ushort)((ushort)(uVar4 >> 0x10) >> 8) != 0) &&
         ((ushort)((ushort)(uVar4 >> 0x20) & (ushort)(uVar4 >> 0x30)) != 0xffff)) ||
        ((int)((uint)(ushort)((ushort)uVar4 << 8 | (ushort)uVar4 >> 8) - (uint)uVar16) /
         (int)(uint)(ushort)(*(ushort *)local_1b8 << 8 | *(ushort *)local_1b8 >> 8) != 0)) ||
       ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
         ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
        ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))) {
      StateTableDriver<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>::
      drive<AAT::InsertionSubtable<AAT::ObsoleteTypes>::driver_context_t>
                ((StateTableDriver<AAT::ObsoleteTypes,AAT::InsertionSubtable<AAT::ObsoleteTypes>::EntryData>
                  *)&local_1b8,(driver_context_t *)&local_1a8,param_1);
    }
  }
LAB_0010e340:
  phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
LAB_0010e344:
  if (bVar22 != 0) {
LAB_0010e349:
    uVar14 = *(uint *)(phVar24 + 0x60);
    if (1 < uVar14) {
      uVar15 = 0;
      puVar13 = *(ulong **)(phVar24 + 0x70);
      puVar17 = (ulong *)((long)*(ulong **)(phVar24 + 0x70) + (ulong)(uVar14 - 1) * 0x14);
      do {
        uVar4 = puVar13[1];
        uVar6 = puVar17[2];
        uVar15 = uVar15 + 1;
        local_178 = *puVar17;
        phStack_170 = (hb_aat_apply_context_t *)puVar17[1];
        *puVar17 = *puVar13;
        puVar17[1] = uVar4;
        local_168 = (Chain<AAT::ObsoleteTypes> *)CONCAT44(local_168._4_4_,(int)uVar6);
        *(int *)(puVar17 + 2) = (int)puVar13[2];
        *(int *)(puVar13 + 2) = (int)uVar6;
        *puVar13 = local_178;
        puVar13[1] = (ulong)phStack_170;
        puVar13 = (ulong *)((long)puVar13 + 0x14);
        puVar17 = (ulong *)((long)puVar17 + -0x14);
      } while (uVar15 < (uVar14 - 1) - uVar15);
      if (phVar24[0x5b] != (hb_buffer_t)0x0) {
        uVar15 = *(uint *)(phVar24 + 0x60);
        if (uVar14 <= *(uint *)(phVar24 + 0x60)) {
          uVar15 = uVar14;
        }
        if (1 < uVar15) {
          uVar14 = 0;
          puVar13 = *(ulong **)(phVar24 + 0x80);
          puVar17 = (ulong *)((long)*(ulong **)(phVar24 + 0x80) + (ulong)(uVar15 - 1) * 0x14);
          do {
            uVar4 = puVar13[1];
            uVar6 = puVar17[2];
            uVar14 = uVar14 + 1;
            local_178 = *puVar17;
            phStack_170 = (hb_aat_apply_context_t *)puVar17[1];
            *puVar17 = *puVar13;
            puVar17[1] = uVar4;
            local_168 = (Chain<AAT::ObsoleteTypes> *)CONCAT44(local_168._4_4_,(int)uVar6);
            *(int *)(puVar17 + 2) = (int)puVar13[2];
            *(int *)(puVar13 + 2) = (int)uVar6;
            *puVar13 = local_178;
            puVar13[1] = (ulong)phStack_170;
            puVar13 = (ulong *)((long)puVar13 + 0x14);
            puVar17 = (ulong *)((long)puVar17 + -0x14);
          } while (uVar14 < (uVar15 - 1) - uVar14);
        }
      }
switchD_0010e103_caseD_3:
      phVar24 = *(hb_buffer_t **)(param_1 + 0x20);
    }
  }
LAB_0010e3be:
  hb_buffer_t::message
            (phVar24,*(hb_font_t **)(param_1 + 0x10),"end chainsubtable %u",
             (ulong)*(uint *)(param_1 + 0xe4));
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == '\0') goto LAB_0010e414;
LAB_0010e3e4:
  iVar21 = *(int *)(param_1 + 0xe4);
LAB_0010e3eb:
  uVar16 = *(ushort *)pCVar25;
  iVar21 = iVar21 + 1;
  phVar19 = phVar19 + 0x18;
  *(int *)(param_1 + 0xe4) = iVar21;
  pCVar25 = pCVar25 + (ushort)(uVar16 << 8 | uVar16 >> 8);
  if (phVar19 == param_2 + (ulong)(uVar8 - 1) * 0x18 + 0x18) goto LAB_0010e414;
  goto LAB_0010e008;
}



/* AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes, 1836020340u>::apply(AAT::hb_aat_apply_context_t*,
   hb_aat_map_t const&, AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes, 1836020340u>::accelerator_t
   const&) const */

void __thiscall
AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::apply
          (mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> *this,hb_aat_apply_context_t *param_1,
          hb_aat_map_t *param_2,accelerator_t *param_3)

{
  uint *puVar1;
  hb_aat_layout_chain_accelerator_t *phVar2;
  long *plVar3;
  Chain<AAT::ObsoleteTypes> *pCVar4;
  uint uVar5;
  uint uVar6;
  hb_buffer_t *this_00;
  ushort uVar7;
  ushort uVar8;
  undefined *puVar9;
  uint *puVar10;
  hb_aat_layout_chain_accelerator_t *__ptr;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  Chain<AAT::ObsoleteTypes> *pCVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> *this_01;
  bool bVar21;
  
  this_00 = *(hb_buffer_t **)(param_1 + 0x20);
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    if (((byte)this_00[0x18] & 0x40) != 0) {
      hb_buffer_t::_set_glyph_flags(this_00,2,0,0xffffffff,false,false);
    }
    uVar6 = *(uint *)(this_00 + 0x60);
    if (uVar6 < 0x20) {
      puVar10 = *(uint **)(this_00 + 0x70);
      if (uVar6 == 0) {
        uVar17 = 0;
        uVar15 = 0;
        uVar12 = 0;
      }
      else {
        uVar17 = 0;
        puVar1 = puVar10 + (ulong)uVar6 * 5;
        puVar13 = puVar10;
        do {
          uVar6 = *puVar13;
          puVar13 = puVar13 + 5;
          uVar17 = uVar17 | 1L << ((byte)(uVar6 >> 4) & 0x3f);
        } while (puVar13 != puVar1);
        uVar15 = 0;
        puVar13 = puVar10;
        do {
          uVar6 = *puVar13;
          puVar13 = puVar13 + 5;
          uVar15 = uVar15 | 1L << ((byte)uVar6 & 0x3f);
        } while (puVar13 != puVar1);
        uVar12 = 0;
        do {
          uVar6 = *puVar10;
          puVar10 = puVar10 + 5;
          uVar12 = uVar12 | 1L << ((byte)(uVar6 >> 9) & 0x3f);
        } while (puVar10 != puVar1);
      }
      *(ulong *)(param_1 + 0x80) = uVar17;
    }
    else {
      uVar15 = 0xffffffffffffffff;
      uVar12 = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
    }
    uVar6 = *(uint *)(this + 4);
    this_01 = this + 8;
    *(ulong *)(param_1 + 0x88) = uVar15;
    *(ulong *)(param_1 + 0x90) = uVar12;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (uVar6 != 0) {
      lVar20 = 0;
      do {
        uVar19 = (uint)lVar20;
        if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) == -1) {
          hb_face_t::load_num_glyphs();
          if (*(uint *)(param_3 + 8) <= uVar19) goto LAB_0010eb28;
LAB_0010ea9d:
          while (__ptr = *(hb_aat_layout_chain_accelerator_t **)
                          (*(long *)(param_3 + 0x10) + lVar20 * 8),
                __ptr == (hb_aat_layout_chain_accelerator_t *)0x0) {
            uVar7 = *(ushort *)((Chain<AAT::ObsoleteTypes> *)this_01 + 10) << 8 |
                    *(ushort *)((Chain<AAT::ObsoleteTypes> *)this_01 + 10) >> 8;
            __ptr = (hb_aat_layout_chain_accelerator_t *)
                    calloc(1,(ulong)(((uint)uVar7 + (uint)uVar7 * 2) * 8));
            if (__ptr == (hb_aat_layout_chain_accelerator_t *)0x0) goto LAB_0010eb28;
            uVar8 = *(ushort *)((Chain<AAT::ObsoleteTypes> *)this_01 + 8) << 8 |
                    *(ushort *)((Chain<AAT::ObsoleteTypes> *)this_01 + 8) >> 8;
            pCVar16 = (Chain<AAT::ObsoleteTypes> *)this_01 +
                      (ulong)(((uint)uVar8 + (uint)uVar8 * 2) * 4) + 0xc;
            if (uVar7 != 0) {
              uVar5 = 0;
              uVar12 = 0;
              do {
                iVar11 = (int)uVar12;
                uVar15 = uVar12;
                switch(pCVar16[3]) {
                case (Chain<AAT::ObsoleteTypes>)0x0:
                  phVar2 = __ptr + uVar12 * 0x18;
                  pCVar4 = pCVar16 + (ulong)(ushort)(*(ushort *)(pCVar16 + 10) << 8 |
                                                    *(ushort *)(pCVar16 + 10) >> 8) + 8;
                  uVar8 = *(ushort *)(pCVar4 + 2);
                  if (uVar8 == 0) goto LAB_0010ed07;
                  lVar18 = 0;
                  do {
                    if (pCVar4[lVar18 + 4] != (Chain<AAT::ObsoleteTypes>)0x1) {
                      uVar14 = (uint)(ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) +
                               (int)lVar18;
                      *(ulong *)phVar2 = *(ulong *)phVar2 | 1L << ((byte)(uVar14 >> 4) & 0x3f);
                      *(ulong *)(phVar2 + 8) = *(ulong *)(phVar2 + 8) | 1L << ((byte)uVar14 & 0x3f);
                      *(ulong *)(phVar2 + 0x10) =
                           *(ulong *)(phVar2 + 0x10) | 1L << ((byte)(uVar14 >> 9) & 0x3f);
                    }
                    lVar18 = lVar18 + 1;
                  } while ((uint)lVar18 < (uint)(ushort)(uVar8 << 8 | uVar8 >> 8));
                  uVar15 = (ulong)(iVar11 + 1);
                  break;
                case (Chain<AAT::ObsoleteTypes>)0x1:
                  phVar2 = __ptr + uVar12 * 0x18;
                  pCVar4 = pCVar16 + (ulong)(ushort)(*(ushort *)(pCVar16 + 10) << 8 |
                                                    *(ushort *)(pCVar16 + 10) >> 8) + 8;
                  uVar8 = *(ushort *)(pCVar4 + 2);
                  if (uVar8 == 0) goto LAB_0010ed07;
                  lVar18 = 0;
                  do {
                    if (pCVar4[lVar18 + 4] != (Chain<AAT::ObsoleteTypes>)0x1) {
                      uVar14 = (uint)(ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) +
                               (int)lVar18;
                      *(ulong *)phVar2 = *(ulong *)phVar2 | 1L << ((byte)(uVar14 >> 4) & 0x3f);
                      *(ulong *)(phVar2 + 8) = *(ulong *)(phVar2 + 8) | 1L << ((byte)uVar14 & 0x3f);
                      *(ulong *)(phVar2 + 0x10) =
                           *(ulong *)(phVar2 + 0x10) | 1L << ((byte)(uVar14 >> 9) & 0x3f);
                    }
                    lVar18 = lVar18 + 1;
                  } while ((uint)lVar18 < (uint)(ushort)(uVar8 << 8 | uVar8 >> 8));
                  uVar15 = (ulong)(iVar11 + 1);
                  break;
                case (Chain<AAT::ObsoleteTypes>)0x2:
                  phVar2 = __ptr + uVar12 * 0x18;
                  pCVar4 = pCVar16 + (ulong)(ushort)(*(ushort *)(pCVar16 + 10) << 8 |
                                                    *(ushort *)(pCVar16 + 10) >> 8) + 8;
                  uVar8 = *(ushort *)(pCVar4 + 2);
                  if (uVar8 == 0) goto LAB_0010ed07;
                  lVar18 = 0;
                  do {
                    if (pCVar4[lVar18 + 4] != (Chain<AAT::ObsoleteTypes>)0x1) {
                      uVar14 = (uint)(ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) +
                               (int)lVar18;
                      *(ulong *)phVar2 = *(ulong *)phVar2 | 1L << ((byte)(uVar14 >> 4) & 0x3f);
                      *(ulong *)(phVar2 + 8) = *(ulong *)(phVar2 + 8) | 1L << ((byte)uVar14 & 0x3f);
                      *(ulong *)(phVar2 + 0x10) =
                           *(ulong *)(phVar2 + 0x10) | 1L << ((byte)(uVar14 >> 9) & 0x3f);
                    }
                    lVar18 = lVar18 + 1;
                  } while ((uint)lVar18 < (uint)(ushort)(uVar8 << 8 | uVar8 >> 8));
                  uVar15 = (ulong)(iVar11 + 1);
                  break;
                case (Chain<AAT::ObsoleteTypes>)0x4:
                  uVar15 = (ulong)(iVar11 + 1);
                  phVar2 = __ptr + uVar12 * 0x18;
                  *(undefined8 *)(phVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined4 *)phVar2 = 0xffffffff;
                  *(undefined4 *)(phVar2 + 4) = 0xffffffff;
                  *(undefined4 *)(phVar2 + 8) = 0xffffffff;
                  *(undefined4 *)(phVar2 + 0xc) = 0xffffffff;
                  break;
                case (Chain<AAT::ObsoleteTypes>)0x5:
                  phVar2 = __ptr + uVar12 * 0x18;
                  pCVar4 = pCVar16 + (ulong)(ushort)(*(ushort *)(pCVar16 + 10) << 8 |
                                                    *(ushort *)(pCVar16 + 10) >> 8) + 8;
                  uVar8 = *(ushort *)(pCVar4 + 2);
                  if (uVar8 != 0) {
                    lVar18 = 0;
                    do {
                      if (pCVar4[lVar18 + 4] != (Chain<AAT::ObsoleteTypes>)0x1) {
                        uVar14 = (uint)(ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) +
                                 (int)lVar18;
                        *(ulong *)phVar2 = *(ulong *)phVar2 | 1L << ((byte)(uVar14 >> 4) & 0x3f);
                        *(ulong *)(phVar2 + 8) =
                             *(ulong *)(phVar2 + 8) | 1L << ((byte)uVar14 & 0x3f);
                        *(ulong *)(phVar2 + 0x10) =
                             *(ulong *)(phVar2 + 0x10) | 1L << ((byte)(uVar14 >> 9) & 0x3f);
                      }
                      lVar18 = lVar18 + 1;
                    } while ((uint)lVar18 < (uint)(ushort)(uVar8 << 8 | uVar8 >> 8));
                  }
LAB_0010ed07:
                  uVar15 = (ulong)(iVar11 + 1);
                }
                uVar5 = uVar5 + 1;
                pCVar16 = pCVar16 + (ushort)(*(ushort *)pCVar16 << 8 | *(ushort *)pCVar16 >> 8);
                uVar12 = uVar15;
              } while (uVar7 != uVar5);
            }
            plVar3 = (long *)(*(long *)(param_3 + 0x10) + lVar20 * 8);
            LOCK();
            bVar21 = *plVar3 == 0;
            if (bVar21) {
              *plVar3 = (long)__ptr;
            }
            UNLOCK();
            if (bVar21) break;
            free(__ptr);
          }
        }
        else {
          if (uVar19 < *(uint *)(param_3 + 8)) goto LAB_0010ea9d;
LAB_0010eb28:
          __ptr = (hb_aat_layout_chain_accelerator_t *)0x0;
        }
        puVar9 = &_hb_NullPool;
        if (uVar19 < *(uint *)(param_2 + 4)) {
          puVar9 = (undefined *)(lVar20 * 0x10 + *(long *)(param_2 + 8));
        }
        *(undefined **)(param_1 + 0x78) = puVar9;
        Chain<AAT::ObsoleteTypes>::apply((Chain<AAT::ObsoleteTypes> *)this_01,param_1,__ptr);
        if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == '\0') {
          return;
        }
        uVar19 = *(uint *)((Chain<AAT::ObsoleteTypes> *)this_01 + 4);
        lVar20 = lVar20 + 1;
        this_01 = (mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u> *)
                  ((Chain<AAT::ObsoleteTypes> *)this_01 +
                  (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                  uVar19 << 0x18));
      } while ((uint)lVar20 <
               (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18));
    }
  }
  return;
}



/* AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t::transition(hb_buffer_t*,
   AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>*,
   AAT::Entry<AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> const&) */

void __thiscall
AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t::transition
          (driver_context_t *this,hb_buffer_t *param_1,StateTableDriver *param_2,Entry *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  long lVar6;
  undefined2 uVar7;
  uint uVar8;
  ushort *puVar9;
  Lookup<OT::HBGlyphID16> *pLVar10;
  ushort uVar11;
  long lVar12;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar8 = *(uint *)(param_1 + 0x60);
  if ((uVar2 == uVar8) && (this[0x18] == (driver_context_t)0x0)) {
    return;
  }
  uVar1 = *(ushort *)(param_3 + 4);
  if (uVar1 != 0xffff) {
    puVar5 = *(uint **)(this + 0x28);
    pLVar10 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_AAT_Lookup;
    if (puVar5 <= puVar5 + (ushort)(uVar1 << 8 | uVar1 >> 8)) {
      uVar8 = puVar5[(ushort)(uVar1 << 8 | uVar1 >> 8)];
      pLVar10 = (Lookup<OT::HBGlyphID16> *)
                ((ulong)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                        uVar8 << 0x18) + (long)puVar5);
    }
    puVar9 = (ushort *)
             Lookup<OT::HBGlyphID16>::get_value
                       (pLVar10,*(uint *)(*(long *)(param_1 + 0x70) +
                                         (ulong)*(uint *)(this + 0x1c) * 0x14),
                        *(uint *)(param_2 + 8));
    if (puVar9 != (ushort *)0x0) {
      uVar8 = *(int *)(param_1 + 0x5c) + 1U;
      if (*(uint *)(param_1 + 0x60) < *(int *)(param_1 + 0x5c) + 1U) {
        uVar8 = *(uint *)(param_1 + 0x60);
      }
      hb_buffer_t::_set_glyph_flags(param_1,3,*(uint *)(this + 0x1c),uVar8,true,false);
      uVar1 = *puVar9;
      uVar11 = uVar1 << 8 | uVar1 >> 8;
      *(uint *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(this + 0x1c) * 0x14) = (uint)uVar11;
      lVar12 = *(long *)(this + 8);
      *(ulong *)(lVar12 + 0x80) = *(ulong *)(lVar12 + 0x80) | 1L << ((byte)(uVar11 >> 4) & 0x3f);
      *(ulong *)(lVar12 + 0x88) = *(ulong *)(lVar12 + 0x88) | 1L << ((byte)(uVar1 >> 8) & 0x3f);
      *(ulong *)(lVar12 + 0x90) = *(ulong *)(lVar12 + 0x90) | 1L << ((byte)(uVar1 >> 1) & 0x3f);
      if (this[0x19] != (driver_context_t)0x0) {
        uVar7 = OT::GDEF::get_glyph_props(*(GDEF **)(this + 0x10),(uint)uVar11);
        *(undefined2 *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(this + 0x1c) * 0x14 + 0xc) =
             uVar7;
      }
      *this = (driver_context_t)0x1;
    }
    uVar8 = *(uint *)(param_1 + 0x60);
    uVar2 = *(uint *)(param_1 + 0x5c);
  }
  uVar1 = *(ushort *)(param_3 + 6);
  if (uVar1 != 0xffff) {
    puVar5 = *(uint **)(this + 0x28);
    pLVar10 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_AAT_Lookup;
    if (puVar5 <= puVar5 + (ushort)(uVar1 << 8 | uVar1 >> 8)) {
      uVar3 = puVar5[(ushort)(uVar1 << 8 | uVar1 >> 8)];
      pLVar10 = (Lookup<OT::HBGlyphID16> *)
                ((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18) + (long)puVar5);
    }
    uVar3 = uVar8 - 1;
    if (uVar2 < uVar8 - 1) {
      uVar3 = uVar2;
    }
    lVar12 = (ulong)uVar3 * 0x14;
    puVar9 = (ushort *)
             Lookup<OT::HBGlyphID16>::get_value
                       (pLVar10,*(uint *)(*(long *)(param_1 + 0x70) + lVar12),*(uint *)(param_2 + 8)
                       );
    if (puVar9 != (ushort *)0x0) {
      uVar1 = *puVar9;
      uVar11 = uVar1 << 8 | uVar1 >> 8;
      *(uint *)(*(long *)(param_1 + 0x70) + lVar12) = (uint)uVar11;
      lVar6 = *(long *)(this + 8);
      *(ulong *)(lVar6 + 0x80) = *(ulong *)(lVar6 + 0x80) | 1L << ((byte)(uVar11 >> 4) & 0x3f);
      *(ulong *)(lVar6 + 0x88) = *(ulong *)(lVar6 + 0x88) | 1L << ((byte)(uVar1 >> 8) & 0x3f);
      *(ulong *)(lVar6 + 0x90) = *(ulong *)(lVar6 + 0x90) | 1L << ((byte)(uVar1 >> 1) & 0x3f);
      if (this[0x19] != (driver_context_t)0x0) {
        uVar7 = OT::GDEF::get_glyph_props(*(GDEF **)(this + 0x10),(uint)uVar11);
        *(undefined2 *)(*(long *)(param_1 + 0x70) + 0xc + lVar12) = uVar7;
      }
      *this = (driver_context_t)0x1;
    }
  }
  if (((byte)param_3[2] & 0x80) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    this[0x18] = (driver_context_t)0x1;
    *(undefined4 *)(this + 0x1c) = uVar4;
  }
  return;
}



/* AAT::LookupFormat4<OT::IntType<unsigned int, 4u> >::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
AAT::LookupFormat4<OT::IntType<unsigned_int,4u>>::sanitize
          (LookupFormat4<OT::IntType<unsigned_int,4u>> *this,hb_sanitize_context_t *param_1)

{
  LookupFormat4<OT::IntType<unsigned_int,4u>> *pLVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  LookupFormat4<OT::IntType<unsigned_int,4u>> *pLVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pLVar1 = this + 0xc;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8))) ||
       (uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8, uVar2 < 6)) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar1 - *(long *)(param_1 + 8)))) ||
     ((uVar3 = (uint)uVar2 * (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)
      , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar1) < uVar3 ||
      (iVar7 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar3 = (uint)uVar2;
  if ((uVar3 == 0) ||
     ((uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                      (uVar2 - 1)), *(short *)(this + uVar4 + 0xc) == -1 &&
      (uVar3 = uVar3 - (*(short *)(this + uVar4 + 0xe) == -1), uVar3 == 0)))) {
    return 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar8 = (uint)uVar2;
    pLVar5 = (LookupFormat4<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
    if (uVar8 != 0) {
      uVar4 = (ulong)((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) *
                     (uVar8 - 1));
      if (*(short *)(pLVar1 + uVar4) == -1) {
        uVar8 = uVar8 - (*(short *)(this + uVar4 + 0xe) == -1);
      }
      pLVar5 = (LookupFormat4<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
      if (uVar6 < uVar8) {
        pLVar5 = pLVar1 + (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) * uVar6;
      }
    }
    if ((LookupFormat4<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar8 = (uint)(ushort)(*(ushort *)pLVar5 << 8 | *(ushort *)pLVar5 >> 8);
    uVar9 = (uint)(ushort)(*(ushort *)(pLVar5 + 2) << 8 | *(ushort *)(pLVar5 + 2) >> 8);
    if (uVar8 < uVar9) {
      return 0;
    }
    uVar9 = (uVar8 + 1) - uVar9;
    if ((LookupFormat4<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        pLVar5 + (6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if (uVar9 >> 0x1e != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) <
        (ulong)((long)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))
               - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
              (int)(this + (ushort)(*(ushort *)(pLVar5 + 4) << 8 | *(ushort *)(pLVar5 + 4) >> 8))) <
        uVar9 * 4) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x1c) + uVar9 * -4;
    *(int *)(param_1 + 0x1c) = iVar7;
    if (iVar7 < 1) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == uVar3) {
      return 1;
    }
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  }
  return 0;
}



/* AAT::Lookup<OT::IntType<unsigned int, 4u> >::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall
AAT::Lookup<OT::IntType<unsigned_int,4u>>::sanitize
          (Lookup<OT::IntType<unsigned_int,4u>> *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar6;
  
  pLVar6 = this + 2;
  if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar1 >> 0x1e != 0) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6) < uVar1 * 4) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x1c) + uVar1 * -4;
    *(int *)(param_1 + 0x1c) = iVar5;
    return (ulong)CONCAT31((int3)((uint)iVar5 >> 8),0 < iVar5);
  default:
    return 1;
  case 2:
    if ((Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar3 < 8) {
      return 0;
    }
    break;
  case 4:
    uVar4 = LookupFormat4<OT::IntType<unsigned_int,4u>>::sanitize
                      ((LookupFormat4<OT::IntType<unsigned_int,4u>> *)this,param_1);
    return uVar4;
  case 6:
    if ((Lookup<OT::IntType<unsigned_int,4u>> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0xc - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar3 < 6) {
      return 0;
    }
    break;
  case 8:
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(this + 6) - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar4 = (ulong)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) << 2;
    if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this + 6)) < (uint)uVar4) {
      return 0;
    }
    goto LAB_0010f564;
  case 10:
    pLVar6 = this + 8;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (4 < uVar2) {
      return 0;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pLVar6 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar3 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    goto LAB_0010f46f;
  }
  pLVar6 = this + 0xc;
  if ((ulong)((long)pLVar6 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
LAB_0010f46f:
    uVar4 = (ulong)((uint)uVar3 * (uint)uVar2);
    if ((uint)uVar3 * (uint)uVar2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pLVar6)) {
LAB_0010f564:
      iVar5 = *(int *)(param_1 + 0x1c) - (int)uVar4;
      *(int *)(param_1 + 0x1c) = iVar5;
      return CONCAT71((int7)(uVar4 >> 8),0 < iVar5);
    }
  }
  return 0;
}



/* AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall
AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::sanitize
          (KerxSubTableFormat6<AAT::KerxSubTableHeader> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (0x24 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (((byte)this[0xf] & 1) == 0) {
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x18 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(uint *)(this + 0x14);
    cVar1 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18)),param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x1c - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(uint *)(this + 0x18);
    cVar1 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18)),param_1);
  }
  else {
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x18 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(uint *)(this + 0x14);
    cVar1 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_int,4u>> *)
                       (this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18)),param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
        this + (0x1c - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(uint *)(this + 0x18);
    cVar1 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_int,4u>> *)
                       (this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18)),param_1);
  }
  if ((cVar1 != '\0') &&
     (uVar2 = *(uint *)(this + 0x1c),
     (ulong)((long)this - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((uVar2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this)) &&
       (iVar3 = *(int *)(param_1 + 0x1c) - uVar2, *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) {
      if (*(int *)(this + 8) == 0) {
        return 1;
      }
      uVar2 = *(uint *)(this + 0x20);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if (uVar2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this)) {
        iVar3 = *(int *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c) = iVar3 - uVar2;
        return CONCAT31((int3)(uVar2 >> 8),0 < (int)(iVar3 - uVar2));
      }
    }
  }
  return 0;
}



/* AAT::KerxTable<AAT::kerx>::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
AAT::KerxTable<AAT::kerx>::sanitize(KerxTable<AAT::kerx> *this,hb_sanitize_context_t *param_1)

{
  StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
  *this_00;
  uint uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  KerxSubTableFormat6<AAT::KerxSubTableHeader> *pKVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  KerxSubTableFormat6<AAT::KerxSubTableHeader> *this_01;
  ushort uVar11;
  ulong uVar12;
  KerxSubTableFormat6<AAT::KerxSubTableHeader> *pKVar13;
  uint uVar14;
  uint uVar15;
  
  if ((KerxTable<AAT::kerx> *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))
     ) {
    return 0;
  }
  uVar11 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  if (uVar11 < 2) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  this_01 = (KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(this + 8);
  uVar8 = (ulong)*(uint *)(param_1 + 0x18);
  if (uVar8 < (ulong)((long)this_01 - lVar6)) {
    return 0;
  }
  uVar1 = *(uint *)(this + 4);
  uVar15 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 != 0) {
    uVar14 = 0;
    do {
      this_00 = (StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
                 *)(this_01 + 0xc);
      if (uVar8 < (ulong)((long)this_00 - lVar6)) {
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x30);
      if (uVar14 < uVar15 - 1) {
        pKVar13 = *(KerxSubTableFormat6<AAT::KerxSubTableHeader> **)(lVar6 + 0x10);
        pKVar7 = pKVar13 + *(uint *)(lVar6 + 0x18);
        *(uint *)(param_1 + 0x18) = *(uint *)(lVar6 + 0x18);
        if ((this_01 < pKVar13) || (pKVar7 <= this_01)) {
          *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
          goto LAB_0010f830;
        }
        uVar5 = *(uint *)this_01;
        uVar8 = (long)pKVar7 - (long)this_01;
        *(KerxSubTableFormat6<AAT::KerxSubTableHeader> **)(param_1 + 8) = this_01;
        uVar12 = 0xc;
        uVar10 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                        uVar5 << 0x18);
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        *(KerxSubTableFormat6<AAT::KerxSubTableHeader> **)(param_1 + 0x10) = this_01 + uVar8;
        uVar5 = (uint)uVar8;
      }
      else {
        lVar2 = *(long *)(lVar6 + 0x10);
        uVar5 = *(uint *)(lVar6 + 0x18);
        uVar8 = (ulong)uVar5;
        uVar12 = (long)this_00 - lVar2;
        *(long *)(param_1 + 8) = lVar2;
        *(ulong *)(param_1 + 0x10) = lVar2 + uVar8;
      }
      *(uint *)(param_1 + 0x18) = uVar5;
      if (uVar8 < uVar12) goto LAB_0010f830;
      uVar5 = *(uint *)this_01;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (uVar5 < 0xc) goto LAB_0010f830;
      lVar6 = *(long *)(param_1 + 8);
      pKVar13 = (KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18);
      if (((pKVar13 < this_01 + -lVar6) ||
          ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this_01) < uVar5)) ||
         (iVar9 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar9 - uVar5,
         (int)(iVar9 - uVar5) < 1)) goto LAB_0010f830;
      switch(this_01[7]) {
      case (KerxSubTableFormat6<AAT::KerxSubTableHeader>)0x0:
        if (pKVar13 < this_01 + (0x14 - lVar6)) goto LAB_0010f830;
        uVar5 = *(uint *)(this_01 + 0xc);
        lVar6 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18) * 6;
        uVar5 = (uint)lVar6;
        if (((((int)((ulong)lVar6 >> 0x20) != 0) ||
             ((ulong)*(uint *)(param_1 + 0x18) <
              (ulong)((long)(this_01 + 0x1c) - *(long *)(param_1 + 8)))) ||
            ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)(this_01 + 0x1c)) < uVar5)) ||
           (iVar9 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar9, iVar9 < 1))
        goto LAB_0010f830;
        uVar5 = *(uint *)this_01;
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        goto switchD_0010f818_caseD_3;
      case (KerxSubTableFormat6<AAT::KerxSubTableHeader>)0x1:
        if (pKVar13 < this_01 + (0x20 - lVar6)) goto LAB_0010f830;
        cVar4 = StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData>::sanitize
                          ((StateTable<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *)
                           this_00,param_1,(uint *)0x0);
        break;
      case (KerxSubTableFormat6<AAT::KerxSubTableHeader>)0x2:
        if ((pKVar13 < this_01 + (0x1c - lVar6)) || (pKVar13 < this_01 + (0x14 - lVar6)))
        goto LAB_0010f830;
        uVar5 = *(uint *)(this_01 + 0x10);
        cVar4 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           (this_01 +
                           (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18)),param_1);
        if ((cVar4 == '\0') ||
           ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_1 + 0x18) <
            this_01 + (0x18 - *(long *)(param_1 + 8)))) goto LAB_0010f830;
        uVar5 = *(uint *)(this_01 + 0x14);
        cVar4 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           (this_01 +
                           (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18)),param_1);
        if ((((cVar4 == '\0') ||
             (uVar5 = *(uint *)(this_01 + 0x18),
             (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)this_01 - *(long *)(param_1 + 8)))) ||
            (uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
            , (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this_01) < uVar5)) ||
           (iVar9 = *(int *)(param_1 + 0x1c) - uVar5, *(int *)(param_1 + 0x1c) = iVar9, iVar9 < 1))
        goto LAB_0010f830;
        goto LAB_0010f8b7;
      default:
        goto switchD_0010f818_caseD_3;
      case (KerxSubTableFormat6<AAT::KerxSubTableHeader>)0x4:
        if (pKVar13 < this_01 + (0x20 - lVar6)) goto LAB_0010f830;
        cVar4 = StateTable<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
                ::sanitize(this_00,param_1,(uint *)0x0);
        break;
      case (KerxSubTableFormat6<AAT::KerxSubTableHeader>)0x6:
        cVar4 = KerxSubTableFormat6<AAT::KerxSubTableHeader>::sanitize(this_01,param_1);
      }
      if (cVar4 == '\0') {
LAB_0010f830:
        lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
        *(uint *)(param_1 + 0x18) = uVar1;
        *(long *)(param_1 + 8) = lVar6;
        *(ulong *)(param_1 + 0x10) = (ulong)uVar1 + lVar6;
        return 0;
      }
LAB_0010f8b7:
      uVar5 = *(uint *)this_01;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
switchD_0010f818_caseD_3:
      uVar14 = uVar14 + 1;
      this_01 = this_01 + uVar5;
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      uVar5 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x18) = uVar5;
      *(long *)(param_1 + 8) = lVar6;
      *(ulong *)(param_1 + 0x10) = lVar6 + uVar8;
    } while (uVar14 < uVar15);
    uVar11 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  }
  if (uVar11 < 3) {
    return 1;
  }
  bVar3 = (uVar1 << 0x18) >> 0x1e != 0;
  uVar14 = (uint)bVar3;
  if (((bVar3) ||
      ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)this_01 - *(long *)(param_1 + 8)))) ||
     (((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this_01) < uVar15 * 4 ||
      (iVar9 = *(int *)(param_1 + 0x1c) + uVar15 * -4, *(int *)(param_1 + 0x1c) = iVar9, iVar9 < 1))
     )) {
    return 0;
  }
  uVar5 = *(int *)(param_1 + 0x38) + 7U >> 3;
  pKVar13 = this_01;
  if (uVar1 != 0) {
    do {
      uVar1 = *(uint *)pKVar13;
      if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) - 1 <
          0xfffffffe) {
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)(pKVar13 + 4) - *(long *)(param_1 + 8))
           ) {
          return 0;
        }
        uVar1 = *(uint *)pKVar13;
        if ((ulong)*(uint *)(param_1 + 0x18) <
            (ulong)((long)(this_01 +
                          (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18)) - *(long *)(param_1 + 8))) {
          return 0;
        }
        if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
                  (int)(this_01 +
                       (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18))) < uVar5) {
          return 0;
        }
        iVar9 = *(int *)(param_1 + 0x1c) - uVar5;
        *(int *)(param_1 + 0x1c) = iVar9;
        if (iVar9 < 1) {
          return 0;
        }
      }
      uVar14 = uVar14 + 1;
      pKVar13 = pKVar13 + 4;
    } while (uVar14 < uVar15);
  }
  return 1;
}



/* AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  int iVar1;
  KerxTable<AAT::kerx> *this_00;
  void *__ptr;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar3 = hb_face_reference_table(param_1,0x6b657278);
  lVar4 = hb_blob_reference(lVar3);
  local_58 = lVar4;
  while( true ) {
    local_70 = *(uint *)(lVar4 + 0x18);
    this_00 = *(KerxTable<AAT::kerx> **)(lVar4 + 0x10);
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
    if (this_00 == (KerxTable<AAT::kerx> *)0x0) {
      hb_blob_destroy(lVar4);
      local_70 = 0;
      local_58 = 0;
      local_80 = (undefined1  [16])0x0;
      goto LAB_0010fcee;
    }
    cVar2 = KerxTable<AAT::kerx>::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar4 = local_58;
    if (cVar2 != '\0') break;
    if ((local_5c == 0) || (local_60 != '\0')) goto LAB_0010fda3;
    local_80._0_8_ = hb_blob_get_data_writable(lVar3,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar3 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) goto LAB_0010fda3;
    local_60 = '\x01';
  }
  if (local_5c == 0) {
    hb_blob_destroy(local_58);
  }
  else {
    local_5c = 0;
    cVar2 = KerxTable<AAT::kerx>::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar4 = local_58;
    if (local_5c != 0) {
LAB_0010fda3:
      hb_blob_destroy(lVar4);
LAB_0010fdc2:
      local_58 = 0;
      local_70 = 0;
      local_80 = (undefined1  [16])0x0;
      hb_blob_destroy(lVar3);
      lVar3 = hb_blob_get_empty();
LAB_0010fcee:
      *(long *)this = lVar3;
      if (*(int *)(param_1 + 0x18) == -1) {
        hb_face_t::load_num_glyphs();
      }
      create_accelerator_data((uint)&local_98);
      iVar1 = *(int *)(this + 8);
      __ptr = *(void **)(this + 0x10);
      *(undefined8 *)(this + 8) = local_98;
      *(undefined8 *)(this + 0x10) = local_90;
      if (iVar1 != 0) {
        free(__ptr);
      }
      if (local_58 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        hb_blob_destroy();
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    hb_blob_destroy(local_58);
    if (cVar2 == '\0') goto LAB_0010fdc2;
  }
  local_58 = 0;
  local_70 = 0;
  local_80 = (undefined1  [16])0x0;
  hb_blob_make_immutable(lVar3);
  goto LAB_0010fcee;
}



/* AAT::Lookup<OT::IntType<unsigned short, 2u> >::get_value(unsigned int, unsigned int) const */

Lookup<OT::IntType<unsigned_short,2u>> * __thiscall
AAT::Lookup<OT::IntType<unsigned_short,2u>>::get_value
          (Lookup<OT::IntType<unsigned_short,2u>> *this,uint param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar8;
  
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    if (param_1 < param_2) {
      return this + (ulong)param_1 * 2 + 2;
    }
    break;
  case 2:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      uVar7 = (ulong)(iVar6 * (uint)uVar5);
      if ((*(short *)(this + uVar7 + 0xc) != -1) ||
         (iVar3 = (uint)uVar2 - (uint)(*(short *)(this + uVar7 + 0xe) == -1), iVar6 = iVar3 + -1,
         iVar3 != 0)) {
        iVar3 = 0;
        do {
          uVar1 = (uint)(iVar3 + iVar6) >> 1;
          uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
          if (param_1 < (ushort)(uVar2 << 8 | uVar2 >> 8)) {
            iVar6 = uVar1 - 1;
          }
          else {
            uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
            if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) {
              return this + (ulong)(uVar1 * uVar5) + 0x10;
            }
            iVar3 = uVar1 + 1;
          }
        } while (iVar3 <= iVar6);
      }
    }
    break;
  case 4:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      uVar7 = (ulong)(iVar6 * (uint)uVar5);
      if ((*(short *)(this + uVar7 + 0xc) != -1) ||
         (iVar3 = (uint)uVar2 - (uint)(*(short *)(this + uVar7 + 0xe) == -1), iVar6 = iVar3 + -1,
         iVar3 != 0)) {
        iVar3 = 0;
        while( true ) {
          while( true ) {
            uVar1 = (uint)(iVar3 + iVar6) >> 1;
            uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc + 2);
            if ((ushort)(uVar2 << 8 | uVar2 >> 8) <= param_1) break;
            iVar6 = uVar1 - 1;
            if (iVar6 < iVar3) {
              return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
            }
          }
          uVar2 = *(ushort *)(this + (ulong)uVar1 * (ulong)uVar5 + 0xc);
          if (param_1 <= (ushort)(uVar2 << 8 | uVar2 >> 8)) break;
          iVar3 = uVar1 + 1;
          if (iVar6 < iVar3) {
            return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
          }
        }
        pLVar8 = this + (ulong)(uVar1 * uVar5) + 0xc;
        uVar1 = (uint)(ushort)(*(ushort *)(pLVar8 + 2) << 8 | *(ushort *)(pLVar8 + 2) >> 8);
        if (param_1 < uVar1) {
          return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
        }
        if ((ushort)(*(ushort *)pLVar8 << 8 | *(ushort *)pLVar8 >> 8) < param_1) {
          return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
        }
        return this + (ulong)(ushort)(*(ushort *)(pLVar8 + 4) << 8 | *(ushort *)(pLVar8 + 4) >> 8) +
                      (ulong)(param_1 - uVar1) * 2;
      }
    }
    break;
  case 6:
    uVar2 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    uVar5 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    if (uVar2 != 0) {
      iVar6 = uVar2 - 1;
      if ((*(short *)(this + (ulong)(iVar6 * (uint)uVar5) + 0xc) == -1) &&
         (iVar6 = uVar2 - 2, uVar2 == 1)) {
        return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
      }
      iVar3 = 0;
      do {
        uVar4 = (uint)(iVar3 + iVar6) >> 1;
        uVar1 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar4 * (ulong)uVar5 + 0xc) << 8 |
                              *(ushort *)(this + (ulong)uVar4 * (ulong)uVar5 + 0xc) >> 8);
        if (param_1 < uVar1) {
          iVar6 = uVar4 - 1;
        }
        else {
          if (param_1 == uVar1) {
            return this + (ulong)(uVar4 * uVar5) + 0xe;
          }
          iVar3 = uVar4 + 1;
        }
      } while (iVar3 <= iVar6);
    }
    break;
  case 8:
    uVar1 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
    if ((uVar1 <= param_1) &&
       (uVar1 = param_1 - uVar1,
       uVar1 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8))) {
      return this + (ulong)uVar1 * 2 + 6;
    }
  }
  return (Lookup<OT::IntType<unsigned_short,2u>> *)0x0;
}



/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>::drive<AAT::InsertionSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::InsertionSubtable<AAT::ExtendedTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>::
drive<AAT::InsertionSubtable<AAT::ExtendedTypes>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>
           *this,driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  hb_buffer_t *this_00;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  hb_buffer_t hVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  ushort uVar30;
  byte bVar31;
  ulong uVar32;
  ushort *puVar33;
  uint uVar34;
  ushort *puVar35;
  long in_FS_OFFSET;
  
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  hb_buffer_t::clear_output();
  puVar22 = *(uint **)(param_2 + 0x78);
  if (puVar22 != (uint *)0x0) {
    if (puVar22[1] < 2) {
      puVar22 = (uint *)0x0;
    }
    else {
      puVar22 = *(uint **)(puVar22 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] == (hb_buffer_t)0x0) {
LAB_001109c0:
    if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    hb_buffer_t::sync();
    return;
  }
  uVar28 = *(uint *)(this_00 + 0x60);
  uVar14 = 0;
  uVar25 = 0;
LAB_001101fe:
  uVar24 = (uint)this_00;
  puVar21 = puVar22;
  uVar34 = uVar25;
  if (puVar22 == (uint *)0x0) goto LAB_00110773;
LAB_00110207:
  uVar25 = *(uint *)(param_2 + 0xe0);
  if (uVar14 < uVar28) goto LAB_0011024b;
  while( true ) {
    puVar21 = puVar22;
    if ((uVar25 & *puVar22) != 0) goto LAB_00110b78;
    if (uVar28 == uVar14) break;
    while( true ) {
      if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_001109c0;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
           (*(uint *)(this_00 + 100) == uVar14)) {
          uVar14 = uVar14 + 1;
          uVar25 = 0;
          *(uint *)(this_00 + 100) = uVar14;
          *(uint *)(this_00 + 0x5c) = uVar14;
          goto LAB_001101fe;
        }
        cVar12 = hb_buffer_t::make_room_for(uVar24,1);
        if (cVar12 == '\0') {
          hVar13 = this_00[0x58];
        }
        else {
          puVar7 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar9 = puVar7[1];
          puVar16 = (undefined8 *)
                    (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *puVar16 = *puVar7;
          puVar16[1] = uVar9;
          *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar7 + 2);
          hVar13 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        uVar25 = 0;
        if (hVar13 != (hb_buffer_t)0x0) goto LAB_00110944;
        goto LAB_001109c0;
      }
      uVar14 = uVar14 + 1;
      uVar34 = 0;
      *(uint *)(this_00 + 0x5c) = uVar14;
      if (uVar28 <= uVar14) break;
LAB_0011024b:
      lVar29 = *(long *)(this_00 + 0x70);
      uVar32 = (ulong)uVar14;
      puVar15 = (uint *)(lVar29 + uVar32 * 0x14);
      uVar3 = puVar15[2];
      uVar20 = puVar22[1];
      while (uVar3 < uVar20) {
        uVar20 = puVar22[-2];
        puVar22 = puVar22 + -3;
      }
      if (puVar22[2] < uVar3) {
        do {
          puVar21 = puVar22 + 3;
          puVar15 = puVar22 + 5;
          puVar22 = puVar21;
        } while (*puVar15 < uVar3);
        if ((uVar25 & *puVar21) != 0) goto LAB_00110290;
      }
      else if ((uVar25 & *puVar22) != 0) goto LAB_00110298;
    }
  }
  goto LAB_001109c0;
LAB_00110290:
  puVar15 = (uint *)(lVar29 + uVar32 * 0x14);
  puVar22 = puVar21;
LAB_00110298:
  uVar28 = *puVar15;
  puVar15 = *(uint **)this;
  if (uVar28 == 0xffff) {
    uVar32 = 2;
  }
  else {
    uVar32 = 1;
    if ((((1L << ((byte)(uVar28 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar28 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar28 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      uVar14 = puVar15[1];
      puVar17 = (ushort *)
                Lookup<OT::IntType<unsigned_short,2u>>::get_value
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           ((ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                    (uVar14 & 0xff00) << 8 | uVar14 << 0x18) + (long)puVar15),uVar28
                           ,*(uint *)(this + 8));
      if (puVar17 != (ushort *)0x0) {
        uVar32 = (ulong)(ushort)(*puVar17 << 8 | *puVar17 >> 8);
      }
      puVar15 = *(uint **)this;
    }
  }
LAB_00110300:
  uVar28 = *puVar15;
  uVar14 = puVar15[2];
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  uVar25 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
  if (uVar25 <= (uint)uVar32) {
    uVar32 = 1;
  }
  uVar20 = puVar15[3];
  iVar26 = uVar25 * uVar34;
  uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
  uVar1 = *(ushort *)((long)puVar15 + (ulong)(uint)(iVar26 + (int)uVar32) * 2 + (ulong)uVar14);
  puVar17 = (ushort *)((long)puVar15 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) * 8 + (ulong)uVar20)
  ;
  uVar25 = (uint)(ushort)(*puVar17 << 8 | *puVar17 >> 8);
  uVar1 = puVar17[1];
  uVar8 = uVar1 << 8;
  uVar30 = uVar8 | uVar1 >> 8;
  if (((uVar8 & 0x3ff) == 0 && uVar1 >> 8 == 0) ||
     ((puVar17[2] == 0xffff && (puVar17[3] == 0xffff)))) {
    if ((uVar34 != 0) && (((uVar8 & 0x4000) == 0 || (uVar25 != 0)))) {
      uVar2 = *(ushort *)((long)puVar15 + uVar32 * 2 + (ulong)uVar14);
      puVar33 = (ushort *)
                ((long)puVar15 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 8 + (ulong)uVar20);
      uVar2 = puVar33[1] << 8;
      if (((((uVar2 & 0x3ff) != 0 || puVar33[1] >> 8 != 0) &&
           ((puVar33[2] != 0xffff || (puVar33[3] != 0xffff)))) ||
          (uVar25 != (ushort)(*puVar33 << 8 | *puVar33 >> 8))) || (((uVar2 ^ uVar30) & 0x4000) != 0)
         ) goto LAB_00110377;
    }
    uVar2 = *(ushort *)((long)puVar15 + (ulong)(iVar26 + (uint)(uVar28 == 0)) * 2 + (ulong)uVar14);
    lVar29 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 8 + (ulong)uVar20;
    uVar2 = *(ushort *)((long)puVar15 + lVar29 + 2);
    if ((uVar2 & 3) != 0 || uVar2 >> 8 != 0) {
      if (*(short *)((long)puVar15 + lVar29 + 4) != -1) goto LAB_00110377;
      if (*(short *)((long)puVar15 + lVar29 + 6) == -1) goto LAB_00110398;
      hVar13 = this_00[0x5a];
      goto joined_r0x001108a2;
    }
  }
  else {
LAB_00110377:
    hVar13 = this_00[0x5a];
joined_r0x001108a2:
    if (hVar13 == (hb_buffer_t)0x0) {
      iVar26 = *(int *)(this_00 + 0x5c);
    }
    else {
      iVar26 = *(int *)(this_00 + 100);
    }
    if ((iVar26 != 0) && (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60))) {
      hb_buffer_t::_set_glyph_flags(this_00,3,iVar26 - 1,*(uint *)(this_00 + 0x5c) + 1,true,true);
    }
  }
LAB_00110398:
  uVar4 = *(undefined4 *)(this_00 + 100);
  uVar2 = puVar17[3];
  if (uVar2 == 0xffff) {
LAB_001105bb:
    if ((short)uVar30 < 0) {
      *(undefined4 *)(param_1 + 0x10) = uVar4;
    }
    uVar8 = puVar17[2];
    if (uVar8 != 0xffff) {
      iVar26 = *(int *)(this_00 + 200);
      uVar28 = (uVar30 & 0x3e0) >> 5;
      *(uint *)(this_00 + 200) = iVar26 - uVar28;
      if (0 < (int)(iVar26 - uVar28)) {
        puVar33 = (ushort *)
                  (*(long *)(param_1 + 0x18) + (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) * 2);
        lVar29 = *(long *)(param_1 + 8);
        if ((((ulong)*(uint *)(lVar29 + 0x40) < (ulong)((long)puVar33 - *(long *)(lVar29 + 0x30)))
            || ((uint)((int)*(undefined8 *)(lVar29 + 0x38) - (int)puVar33) < uVar28 * 2)) ||
           (iVar26 = *(int *)(lVar29 + 0x44) + uVar28 * -2, *(int *)(lVar29 + 0x44) = iVar26,
           iVar26 < 1)) {
          uVar28 = 0;
        }
        bVar31 = ((byte)uVar1 >> 3 ^ 1) & 1;
        if ((*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) && (bVar31 != 0)) {
          puVar7 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar9 = *puVar7;
          uVar10 = puVar7[1];
          uVar4 = *(undefined4 *)(puVar7 + 2);
          cVar12 = hb_buffer_t::make_room_for(uVar24,0);
          if (cVar12 == '\0') goto LAB_00110723;
          puVar7 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *(undefined4 *)(puVar7 + 2) = uVar4;
          *puVar7 = uVar9;
          puVar7[1] = uVar10;
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        }
        cVar12 = hb_buffer_t::make_room_for(uVar24,0);
        if (cVar12 != '\0') {
          uVar14 = *(uint *)(this_00 + 0x5c);
          uVar34 = *(uint *)(this_00 + 0x60);
          puVar7 = *(undefined8 **)(this_00 + 0x78);
          uVar20 = *(uint *)(this_00 + 100);
          if (uVar14 < uVar34) {
            puVar16 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)uVar14 * 0x14);
          }
          else {
            puVar16 = puVar7;
            if (uVar20 != 0) {
              puVar16 = (undefined8 *)((long)puVar7 + (ulong)(uVar20 - 1) * 0x14);
            }
          }
          if (uVar28 != 0) {
            puVar21 = (uint *)((long)puVar7 + (ulong)uVar20 * 0x14);
            puVar35 = puVar33;
            do {
              uVar9 = puVar16[1];
              puVar18 = puVar35 + 1;
              *(undefined8 *)puVar21 = *puVar16;
              *(undefined8 *)(puVar21 + 2) = uVar9;
              puVar21[4] = *(uint *)(puVar16 + 2);
              *puVar21 = (uint)(ushort)(*puVar35 << 8 | *puVar35 >> 8);
              puVar21 = puVar21 + 5;
              puVar35 = puVar18;
            } while (puVar33 + uVar28 != puVar18);
            uVar14 = *(uint *)(this_00 + 0x5c);
            uVar34 = *(uint *)(this_00 + 0x60);
            uVar20 = *(uint *)(this_00 + 100);
          }
          *(uint *)(this_00 + 100) = uVar20 + uVar28;
          if ((uVar14 < uVar34) && (bVar31 != 0)) {
            *(uint *)(this_00 + 0x5c) = uVar14 + 1;
          }
          hb_buffer_t::move_to(uVar24);
        }
      }
    }
  }
  else {
    iVar26 = *(int *)(this_00 + 200);
    uVar28 = uVar1 >> 8 & 0x1f;
    *(uint *)(this_00 + 200) = iVar26 - uVar28;
    if (0 < (int)(iVar26 - uVar28)) {
      puVar33 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2)
      ;
      lVar29 = *(long *)(param_1 + 8);
      if ((((ulong)*(uint *)(lVar29 + 0x40) < (ulong)((long)puVar33 - *(long *)(lVar29 + 0x30))) ||
          ((uint)((int)*(undefined8 *)(lVar29 + 0x38) - (int)puVar33) < uVar28 * 2)) ||
         (iVar26 = *(int *)(lVar29 + 0x44) + uVar28 * -2, *(int *)(lVar29 + 0x44) = iVar26,
         iVar26 < 1)) {
        uVar28 = 0;
      }
      cVar12 = hb_buffer_t::move_to(uVar24);
      if (cVar12 != '\0') {
        bVar11 = (uVar8 & 0x400) == 0;
        if ((*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) && (bVar11)) {
          puVar7 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar9 = *puVar7;
          uVar10 = puVar7[1];
          uVar5 = *(undefined4 *)(puVar7 + 2);
          cVar12 = hb_buffer_t::make_room_for(uVar24,0);
          if (cVar12 == '\0') goto LAB_00110723;
          puVar7 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *(undefined4 *)(puVar7 + 2) = uVar5;
          *puVar7 = uVar9;
          puVar7[1] = uVar10;
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        }
        cVar12 = hb_buffer_t::make_room_for(uVar24,0);
        if (cVar12 != '\0') {
          uVar14 = *(uint *)(this_00 + 0x5c);
          uVar34 = *(uint *)(this_00 + 0x60);
          puVar7 = *(undefined8 **)(this_00 + 0x78);
          uVar20 = *(uint *)(this_00 + 100);
          if (uVar14 < uVar34) {
            puVar16 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)uVar14 * 0x14);
          }
          else {
            puVar16 = puVar7;
            if (uVar20 != 0) {
              puVar16 = (undefined8 *)((long)puVar7 + (ulong)(uVar20 - 1) * 0x14);
            }
          }
          if (uVar28 != 0) {
            puVar35 = puVar33 + uVar28;
            puVar18 = puVar33;
            puVar21 = (uint *)((long)puVar7 + (ulong)uVar20 * 0x14);
            do {
              uVar9 = puVar16[1];
              puVar19 = puVar18 + 1;
              *(undefined8 *)puVar21 = *puVar16;
              *(undefined8 *)(puVar21 + 2) = uVar9;
              puVar21[4] = *(uint *)(puVar16 + 2);
              *puVar21 = (uint)(ushort)(*puVar18 << 8 | *puVar18 >> 8);
              puVar18 = puVar19;
              puVar21 = puVar21 + 5;
            } while (puVar35 != puVar19);
            lVar29 = *(long *)(param_1 + 8);
            *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar28;
            uVar32 = *(ulong *)(lVar29 + 0x80);
            uVar27 = *(ulong *)(lVar29 + 0x88);
            uVar23 = *(ulong *)(lVar29 + 0x90);
            do {
              uVar8 = *puVar33;
              puVar33 = puVar33 + 1;
              uVar32 = uVar32 | 1L << ((byte)((ushort)(uVar8 << 8 | uVar8 >> 8) >> 4) & 0x3f);
              uVar27 = uVar27 | 1L << ((byte)(uVar8 >> 8) & 0x3f);
              uVar23 = uVar23 | 1L << ((byte)uVar8 >> 1 & 0x3f);
            } while (puVar35 != puVar33);
            *(ulong *)(lVar29 + 0x80) = uVar32;
            uVar14 = *(uint *)(this_00 + 0x5c);
            *(ulong *)(lVar29 + 0x90) = uVar23;
            *(ulong *)(lVar29 + 0x88) = uVar27;
            uVar34 = *(uint *)(this_00 + 0x60);
          }
          *param_1 = (driver_context_t)0x1;
          if ((uVar14 < uVar34) && (bVar11)) {
            *(uint *)(this_00 + 0x5c) = uVar14 + 1;
          }
          cVar12 = hb_buffer_t::move_to(uVar24);
          if (cVar12 != '\0') {
            uVar28 = *(int *)(this_00 + 0x5c) + 1U;
            if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
              uVar28 = *(uint *)(this_00 + 0x60);
            }
            hb_buffer_t::_set_glyph_flags(this_00,3,*(uint *)(param_1 + 0x10),uVar28,true,true);
            goto LAB_001105bb;
          }
        }
      }
    }
  }
LAB_00110723:
  uVar14 = *(uint *)(this_00 + 0x5c);
  if ((uVar14 == *(uint *)(this_00 + 0x60)) || (this_00[0x58] == (hb_buffer_t)0x0))
  goto LAB_001109c0;
  if (((puVar17[1] & 0x40) == 0) ||
     (iVar26 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar26 + -1, iVar26 < 1)) {
    if (this_00[0x5a] == (hb_buffer_t)0x0) {
      uVar14 = uVar14 + 1;
      *(uint *)(this_00 + 0x5c) = uVar14;
    }
    else {
      if ((*(long *)(this_00 + 0x78) != *(long *)(this_00 + 0x70)) ||
         (uVar14 != *(uint *)(this_00 + 100))) goto LAB_001108e6;
      uVar14 = uVar14 + 1;
      *(uint *)(this_00 + 100) = uVar14;
      *(uint *)(this_00 + 0x5c) = uVar14;
    }
  }
  uVar28 = *(uint *)(this_00 + 0x60);
  puVar21 = puVar22;
  uVar34 = uVar25;
  if (puVar22 != (uint *)0x0) goto LAB_00110207;
LAB_00110773:
  if (uVar14 < uVar28) goto code_r0x0011077b;
LAB_00110b78:
  uVar32 = 0;
  puVar15 = *(uint **)this;
  puVar22 = puVar21;
  goto LAB_00110300;
LAB_001108e6:
  cVar12 = hb_buffer_t::make_room_for(uVar24,1);
  if (cVar12 == '\0') {
    hVar13 = this_00[0x58];
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
    puVar16 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
    uVar9 = puVar16[1];
    *puVar7 = *puVar16;
    puVar7[1] = uVar9;
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar16 + 2);
    hVar13 = this_00[0x58];
    *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
  }
  if (hVar13 == (hb_buffer_t)0x0) goto LAB_001109c0;
LAB_00110944:
  uVar28 = *(uint *)(this_00 + 0x60);
  uVar14 = *(uint *)(this_00 + 0x5c);
  goto LAB_001101fe;
code_r0x0011077b:
  lVar29 = *(long *)(this_00 + 0x70);
  uVar32 = (ulong)uVar14;
  goto LAB_00110290;
}



/* OT::hb_kern_machine_t<AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::accelerator_t>::kern(hb_font_t*,
   hb_buffer_t*, unsigned int, bool) const */

void __thiscall
OT::hb_kern_machine_t<AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::accelerator_t>::kern
          (hb_kern_machine_t<AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::accelerator_t> *this
          ,hb_font_t *param_1,hb_buffer_t *param_2,uint param_3,bool param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  hb_blob_t *phVar14;
  ulong uVar15;
  ushort *puVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ushort uVar23;
  uint uVar24;
  short sVar25;
  uint uVar26;
  long in_FS_OFFSET;
  hb_ot_apply_context_t local_198 [8];
  uint local_190;
  hb_ot_apply_context_t *local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  char local_177;
  undefined1 local_176 [2];
  char cStack_174;
  code *local_170;
  undefined1 local_168 [16];
  int local_158;
  hb_ot_apply_context_t *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [2];
  char cStack_136;
  byte local_135;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128 [16];
  int local_118;
  int local_110;
  long local_f8;
  long local_c0;
  void *local_90;
  uint local_6c;
  undefined4 local_64;
  undefined1 local_5b;
  char local_5a;
  byte local_59;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar10 = hb_buffer_t::message(param_2,param_1,"start kern");
  if (cVar10 == '\0') goto LAB_001111a2;
  if (((byte)param_2[0x18] & 0x40) != 0) {
    hb_buffer_t::_set_glyph_flags(param_2,2,0,0xffffffff,false,false);
  }
  phVar14 = (hb_blob_t *)hb_blob_get_empty();
  hb_ot_apply_context_t::hb_ot_apply_context_t(local_198,1,param_1,param_2,phVar14);
  local_50 = 0xffffffff;
  local_158 = *(int *)(local_f8 + 0x60);
  local_170 = (code *)0x0;
  local_168 = (undefined1  [16])0x0;
  if (local_110 == 1) {
    local_178 = '\x01';
    _local_176 = 1;
    local_138 = (undefined1  [2])0x101;
    cVar12 = cVar10;
LAB_0011122a:
    _local_138 = CONCAT12(cVar12,local_138);
    local_59 = 0;
  }
  else {
    local_178 = '\0';
    if (local_110 != 0) {
      _local_176 = 0;
      local_138[1] = 1;
      local_138[0] = local_5b;
      cVar12 = '\0';
      goto LAB_0011122a;
    }
    _local_176 = (uint3)local_59 << 8;
    _local_138 = CONCAT21(1,local_5b);
  }
  local_177 = local_5a;
  local_128 = (undefined1  [16])0x0;
  local_130 = 0;
  local_13c = 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x60);
  uVar21 = 0;
  local_134 = 0;
  lVar6 = *(long *)(param_2 + 0x70);
  local_64 = 8;
  lVar7 = *(long *)(param_2 + 0x80);
  local_180 = 8;
  local_140 = 8;
  local_188 = local_198;
  local_17c = param_3;
  local_148 = local_198;
  local_135 = local_59;
  local_118 = local_158;
  local_6c = param_3;
  if (uVar4 != 0) {
    do {
      lVar22 = (ulong)uVar21 * 0x14;
      puVar2 = (uint *)(lVar6 + lVar22);
      if ((param_3 & puVar2[1]) == 0) {
LAB_00110dc0:
        uVar20 = uVar21 + 1;
      }
      else {
        uVar11 = 0;
        lVar8 = *(long *)(local_188 + 0xa0);
        local_158 = *(int *)(lVar8 + 0x60);
        if (*(uint *)(lVar8 + 0x5c) == uVar21) {
          uVar11 = *(undefined1 *)(*(long *)(lVar8 + 0x70) + 0xf + lVar22);
        }
        if (local_176[1] == '\0') {
          uVar11 = 0;
        }
        iVar17 = local_158 + -1;
        _local_176 = CONCAT12(uVar11,local_176);
        local_190 = uVar21;
LAB_00110e32:
        do {
          uVar15 = (ulong)local_190;
          while( true ) {
            cVar12 = '\0';
            do {
              uVar24 = (uint)uVar15;
              if (iVar17 <= (int)uVar24) {
                if (cVar12 != '\0') {
                  local_190 = uVar24;
                }
                goto LAB_00110dc0;
              }
              uVar24 = uVar24 + 1;
              uVar15 = (ulong)uVar24;
              puVar1 = (uint *)(*(long *)(*(long *)(local_188 + 0xa0) + 0x70) + uVar15 * 0x14);
              uVar23 = (ushort)puVar1[3];
              cVar12 = cVar10;
            } while ((uVar23 & local_180 & 0xe) != 0);
            local_190 = uVar24;
            if ((uVar23 & 8) == 0) goto LAB_00110e7f;
            if ((local_180 & 0x10) != 0) break;
            if (((local_180 & 0xff00) == 0) || (((uVar23 ^ local_180) & 0xff00) == 0))
            goto LAB_00110e7f;
          }
          cVar12 = hb_ot_apply_context_t::match_properties_mark
                             ((uint)*(undefined8 *)(local_188 + 0xf8),*puVar1,local_180);
          if (cVar12 == '\0') goto LAB_00110e32;
LAB_00110e7f:
          uVar23 = (ushort)puVar1[4];
          sVar25 = 0;
          if (((uVar23 & 0x20) != 0) && ((puVar1[3] & 0x10) == 0)) {
            if (local_178 == '\0') {
              if ((uVar23 & 0x1f) == 1) {
                sVar25 = 0;
                if ((uVar23 & 0x200) != 0) goto LAB_00110ec8;
                if (local_177 == '\0') goto LAB_00111394;
              }
            }
            else if ((local_177 == '\0') && ((uVar23 & 0x1f) == 1)) {
LAB_00111394:
              sVar25 = 0;
              if ((uVar23 & 0x100) != 0) goto LAB_00110ec8;
            }
            if (local_176[0] == '\0') {
              sVar25 = ((uVar23 >> 6 ^ 1) & 1) * 2;
            }
            else {
              sVar25 = 2;
            }
          }
LAB_00110ec8:
          uVar23 = 0;
          if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
            uVar23 = *(ushort *)local_168._8_8_ << 8 | *(ushort *)local_168._8_8_ >> 8;
          }
          if (((puVar1[1] & local_17c) == 0) ||
             ((cStack_174 != '\0' && (cStack_174 != *(char *)((long)puVar1 + 0xf))))) {
LAB_001112c0:
            if (sVar25 == 0) goto LAB_00110dc0;
            goto LAB_00110e32;
          }
          if (local_170 != (code *)0x0) {
            cVar12 = (*local_170)(puVar1,uVar23,local_168._0_8_);
            if (cVar12 == '\0') goto LAB_001112c0;
            break;
          }
        } while (sVar25 != 0);
        uVar24 = local_190;
        if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
          local_168._8_8_ = (ushort *)(local_168._8_8_ + 2);
        }
        uVar26 = *puVar2;
        lVar8 = (*(long **)this)[1];
        uVar20 = local_190;
        if ((((1L << ((byte)(uVar26 >> 4) & 0x3f) & *(ulong *)(lVar8 + 0xb0)) != 0) &&
            ((1L << ((byte)uVar26 & 0x3f) & *(ulong *)(lVar8 + 0xb8)) != 0)) &&
           ((1L << ((byte)(uVar26 >> 9) & 0x3f) & *(ulong *)(lVar8 + 0xc0)) != 0)) {
          uVar13 = *(uint *)(lVar6 + (ulong)local_190 * 0x14);
          lVar18 = (ulong)local_190 * 0x14;
          if ((((1L << ((byte)(uVar13 >> 4) & 0x3f) & *(ulong *)(lVar8 + 200)) != 0) &&
              ((1L << ((byte)uVar13 & 0x3f) & *(ulong *)(lVar8 + 0xd0)) != 0)) &&
             ((1L << ((byte)(uVar13 >> 9) & 0x3f) & *(ulong *)(lVar8 + 0xd8)) != 0)) {
            lVar9 = **(long **)this;
            uVar20 = *(uint *)(lVar8 + 0x60);
            uVar5 = *(uint *)(lVar9 + 0x10);
            puVar16 = (ushort *)
                      AAT::Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                 ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                          (uVar5 & 0xff00) << 8 | uVar5 << 0x18) + lVar9),uVar26,
                                 uVar20);
            uVar26 = 0;
            if (puVar16 != (ushort *)0x0) {
              uVar26 = (uint)(ushort)(*puVar16 << 8 | *puVar16 >> 8);
            }
            uVar5 = *(uint *)(lVar9 + 0x14);
            puVar16 = (ushort *)
                      AAT::Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                 ((ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                          (uVar5 & 0xff00) << 8 | uVar5 << 0x18) + lVar9),uVar13,
                                 uVar20);
            if (puVar16 != (ushort *)0x0) {
              uVar26 = uVar26 + (ushort)(*puVar16 << 8 | *puVar16 >> 8);
            }
            uVar20 = *(uint *)(lVar9 + 0x18);
            puVar16 = (ushort *)
                      ((ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                              uVar20 << 0x18) + (ulong)uVar26 * 2 + lVar9);
            uVar20 = local_190;
            if ((ulong)((long)puVar16 + (2 - *(long *)(lVar8 + 0x30))) <=
                (ulong)*(uint *)(lVar8 + 0x40)) {
              uVar23 = *puVar16;
              uVar26 = *(uint *)(lVar9 + 8);
              uVar13 = (uint)(short)(uVar23 << 8 | uVar23 >> 8);
              if (uVar26 != 0) {
                uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                         uVar26 << 0x18;
                if ((((int)uVar26 < 0) ||
                    (puVar16 = (ushort *)((ulong)uVar13 + lVar9),
                    (ulong)*(uint *)(lVar8 + 0x40) <
                    (ulong)((long)puVar16 - *(long *)(lVar8 + 0x30)))) ||
                   (((uint)((int)*(undefined8 *)(lVar8 + 0x38) - (int)puVar16) < uVar26 * 2 ||
                    (iVar17 = *(int *)(lVar8 + 0x44) + uVar26 * -2, *(int *)(lVar8 + 0x44) = iVar17,
                    iVar17 < 1)))) goto LAB_00110dc3;
                uVar13 = (uint)(short)(*puVar16 << 8 | *puVar16 >> 8);
              }
              if (uVar13 != 0) {
                if ((uVar3 & 0xfffffffe) == 4) {
                  if (param_4) {
                    uVar13 = (uint)((ulong)((long)(int)uVar13 * *(long *)(param_1 + 0x58) + 0x8000)
                                   >> 0x10);
                  }
                  piVar19 = (int *)(lVar18 + lVar7);
                  if (this[8] ==
                      (hb_kern_machine_t<AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::accelerator_t>
                       )0x0) {
                    iVar17 = uVar13 - ((int)uVar13 >> 1);
                    *(int *)(lVar7 + lVar22) = *(int *)(lVar7 + lVar22) + ((int)uVar13 >> 1);
                    *piVar19 = *piVar19 + iVar17;
                    piVar19[2] = piVar19[2] + iVar17;
                  }
                  else {
                    piVar19[3] = uVar13;
                    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                  }
                }
                else {
                  if (param_4) {
                    uVar13 = (uint)((ulong)((long)(int)uVar13 * *(long *)(param_1 + 0x60) + 0x8000)
                                   >> 0x10);
                  }
                  lVar18 = lVar18 + lVar7;
                  if (this[8] ==
                      (hb_kern_machine_t<AAT::KerxSubTableFormat2<AAT::KerxSubTableHeader>::accelerator_t>
                       )0x0) {
                    iVar17 = uVar13 - ((int)uVar13 >> 1);
                    piVar19 = (int *)(lVar7 + 4 + lVar22);
                    *piVar19 = *piVar19 + ((int)uVar13 >> 1);
                    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + iVar17;
                    *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + iVar17;
                  }
                  else {
                    *(uint *)(lVar18 + 8) = uVar13;
                    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
                  }
                }
                hb_buffer_t::_set_glyph_flags(param_2,3,uVar21,uVar24 + 1,true,false);
                uVar20 = local_190;
              }
            }
          }
        }
      }
LAB_00110dc3:
      uVar21 = uVar20;
    } while (uVar20 < uVar4);
  }
  hb_buffer_t::message(param_2,param_1,"end kern");
  free(local_90);
  if (local_c0 != 0) {
    hb_blob_destroy();
  }
LAB_001111a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning(unsigned int, unsigned int,
   AAT::hb_aat_apply_context_t*) const */

ulong __thiscall
AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning
          (KerxSubTableFormat6<AAT::KerxSubTableHeader> *this,uint param_1,uint param_2,
          hb_aat_apply_context_t *param_3)

{
  Lookup<OT::IntType<unsigned_short,2u>> LVar1;
  Lookup<OT::IntType<unsigned_int,4u>> LVar2;
  ushort *puVar3;
  ulong uVar4;
  KerxSubTableFormat6<AAT::KerxSubTableHeader> *pKVar5;
  ushort uVar6;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar11;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar12;
  Lookup<OT::IntType<unsigned_int,4u>> *pLVar13;
  uint uVar14;
  bool bVar15;
  
  uVar9 = *(uint *)(this + 0x14);
  uVar14 = *(uint *)(param_3 + 0x60);
  pLVar12 = (Lookup<OT::IntType<unsigned_short,2u>> *)
            (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    ));
  if ((*(uint *)(this + 0xc) & 0x1000000) == 0) {
    if (*(short *)pLVar12 == 0xa00) {
      uVar10 = (uint)(ushort)(*(ushort *)(pLVar12 + 4) << 8 | *(ushort *)(pLVar12 + 4) >> 8);
      if ((param_1 < uVar10) ||
         (uVar10 = param_1 - uVar10,
         (ushort)(*(ushort *)(pLVar12 + 6) << 8 | *(ushort *)(pLVar12 + 6) >> 8) <= uVar10)) {
        uVar9 = (uint)(ushort)((ushort)__hb_NullPool << 8 | (ushort)__hb_NullPool >> 8);
        goto LAB_00111753;
      }
      uVar6 = *(ushort *)(pLVar12 + 2) << 8 | *(ushort *)(pLVar12 + 2) >> 8;
      uVar9 = (uint)uVar6;
      pLVar12 = pLVar12 + (uVar10 * uVar6 + 8);
      if (uVar6 == 0) goto LAB_00111753;
      uVar9 = 0;
      pLVar7 = pLVar12 + uVar6;
      do {
        LVar1 = *pLVar12;
        pLVar12 = pLVar12 + 1;
        uVar9 = uVar9 << 8 | (uint)(byte)LVar1;
      } while (pLVar7 != pLVar12);
    }
    else {
      puVar3 = (ushort *)Lookup<OT::IntType<unsigned_short,2u>>::get_value(pLVar12,param_1,uVar14);
      if (puVar3 == (ushort *)0x0) {
        puVar3 = (ushort *)&_hb_NullPool;
      }
      uVar9 = (uint)(ushort)(*puVar3 << 8 | *puVar3 >> 8);
    }
    uVar9 = uVar9 & 0xffff;
LAB_00111753:
    uVar10 = *(uint *)(this + 0x18);
    pLVar12 = (Lookup<OT::IntType<unsigned_short,2u>> *)
              (this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                      uVar10 << 0x18));
    if (*(short *)pLVar12 == 0xa00) {
      uVar14 = (uint)(ushort)(*(ushort *)(pLVar12 + 4) << 8 | *(ushort *)(pLVar12 + 4) >> 8);
      if ((param_2 < uVar14) ||
         (uVar14 = param_2 - uVar14,
         (ushort)(*(ushort *)(pLVar12 + 6) << 8 | *(ushort *)(pLVar12 + 6) >> 8) <= uVar14)) {
        uVar9 = uVar9 + (ushort)((ushort)__hb_NullPool << 8 | (ushort)__hb_NullPool >> 8);
      }
      else {
        uVar6 = *(ushort *)(pLVar12 + 2) << 8 | *(ushort *)(pLVar12 + 2) >> 8;
        pLVar12 = pLVar12 + (uVar14 * uVar6 + 8);
        if (uVar6 != 0) {
          pLVar7 = pLVar12 + uVar6;
          uVar14 = 0;
          do {
            uVar10 = uVar14;
            LVar1 = *pLVar12;
            pLVar12 = pLVar12 + 1;
            uVar14 = (uint)(byte)LVar1;
          } while (pLVar7 != pLVar12);
          uVar9 = uVar9 + (uVar10 << 8 | (uint)(byte)LVar1);
        }
      }
    }
    else {
      puVar3 = (ushort *)Lookup<OT::IntType<unsigned_short,2u>>::get_value(pLVar12,param_2,uVar14);
      if (puVar3 == (ushort *)0x0) {
        puVar3 = (ushort *)&_hb_NullPool;
      }
      uVar9 = uVar9 + (ushort)(*puVar3 << 8 | *puVar3 >> 8);
    }
    uVar14 = *(uint *)(this + 0x1c);
    if ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_3 + 0x40) <
        this + (ulong)(uVar9 * 2) +
               (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18) + (2 - *(long *)(param_3 + 0x30))) {
      return 0;
    }
    uVar6 = *(ushort *)
             (this + (ulong)(uVar9 * 2) +
                     (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                            uVar14 << 0x18));
    uVar9 = *(uint *)(this + 8);
    uVar4 = (ulong)(uint)(int)(short)(uVar6 << 8 | uVar6 >> 8);
    if (uVar9 == 0) {
      return uVar4;
    }
    uVar14 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = *(uint *)(this + 0x20);
    if (-1 < (int)uVar14) {
      pKVar5 = this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18) + uVar4;
      if ((ulong)*(uint *)(param_3 + 0x40) < (ulong)((long)pKVar5 - *(long *)(param_3 + 0x30))) {
        return 0;
      }
      if (uVar14 * 2 <= (uint)((int)*(undefined8 *)(param_3 + 0x38) - (int)pKVar5)) {
        iVar8 = *(int *)(param_3 + 0x44) + uVar14 * -2;
        *(int *)(param_3 + 0x44) = iVar8;
        if (0 < iVar8) {
          return (ulong)(uint)(int)(short)(*(ushort *)pKVar5 << 8 | *(ushort *)pKVar5 >> 8);
        }
        return 0;
      }
      return 0;
    }
    return 0;
  }
  if (*(short *)pLVar12 == 0xa00) {
    uVar10 = (uint)(ushort)(*(ushort *)(pLVar12 + 4) << 8 | *(ushort *)(pLVar12 + 4) >> 8);
    if ((param_1 < uVar10) ||
       (uVar10 = param_1 - uVar10,
       (ushort)(*(ushort *)(pLVar12 + 6) << 8 | *(ushort *)(pLVar12 + 6) >> 8) <= uVar10)) {
      uVar9 = __hb_NullPool >> 0x18 | (__hb_NullPool & 0xff0000) >> 8 |
              (__hb_NullPool & 0xff00) << 8 | __hb_NullPool << 0x18;
    }
    else {
      uVar6 = *(ushort *)(pLVar12 + 2) << 8 | *(ushort *)(pLVar12 + 2) >> 8;
      uVar9 = (uint)uVar6;
      pLVar12 = pLVar12 + (uVar10 * uVar6 + 8);
      if (uVar6 != 0) {
        uVar9 = 0;
        pLVar7 = pLVar12 + uVar6;
        do {
          LVar1 = *pLVar12;
          pLVar12 = pLVar12 + 1;
          uVar9 = uVar9 << 8 | (uint)(byte)LVar1;
        } while (pLVar12 != pLVar7);
      }
    }
  }
  else {
    uVar9 = Lookup<OT::IntType<unsigned_int,4u>>::get_value_or_null
                      ((Lookup<OT::IntType<unsigned_int,4u>> *)pLVar12,param_1,uVar14);
  }
  uVar10 = *(uint *)(this + 0x18);
  pLVar13 = (Lookup<OT::IntType<unsigned_int,4u>> *)
            (this + (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                    uVar10 << 0x18));
  if (*(short *)pLVar13 == 0xa00) {
    uVar14 = (uint)(ushort)(*(ushort *)(pLVar13 + 4) << 8 | *(ushort *)(pLVar13 + 4) >> 8);
    if ((param_2 < uVar14) ||
       (uVar14 = param_2 - uVar14,
       (ushort)(*(ushort *)(pLVar13 + 6) << 8 | *(ushort *)(pLVar13 + 6) >> 8) <= uVar14)) {
      uVar14 = __hb_NullPool >> 0x18 | (__hb_NullPool & 0xff0000) >> 8 |
               (__hb_NullPool & 0xff00) << 8 | __hb_NullPool << 0x18;
      bVar15 = CARRY4(uVar14,uVar9);
      uVar9 = uVar14 + uVar9;
      goto LAB_001116c2;
    }
    uVar6 = *(ushort *)(pLVar13 + 2) << 8 | *(ushort *)(pLVar13 + 2) >> 8;
    pLVar13 = pLVar13 + (uVar14 * uVar6 + 8);
    if (uVar6 == 0) {
      bVar15 = false;
      goto LAB_001116c2;
    }
    uVar14 = 0;
    pLVar11 = pLVar13 + uVar6;
    do {
      LVar2 = *pLVar13;
      pLVar13 = pLVar13 + 1;
      uVar14 = uVar14 << 8 | (uint)(byte)LVar2;
    } while (pLVar13 != pLVar11);
  }
  else {
    uVar14 = Lookup<OT::IntType<unsigned_int,4u>>::get_value_or_null(pLVar13,param_2,uVar14);
  }
  bVar15 = CARRY4(uVar14,uVar9);
  uVar9 = uVar14 + uVar9;
LAB_001116c2:
  if ((uVar9 < 0x40000000) && (!bVar15)) {
    uVar14 = *(uint *)(this + 0x1c);
    if (this + (ulong)(uVar9 * 4) +
               (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18) + (4 - *(long *)(param_3 + 0x30)) <=
        (KerxSubTableFormat6<AAT::KerxSubTableHeader> *)(ulong)*(uint *)(param_3 + 0x40)) {
      uVar9 = *(uint *)(this + (ulong)(uVar9 * 4) +
                               (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                       (uVar14 & 0xff00) << 8 | uVar14 << 0x18));
      uVar14 = *(uint *)(this + 8);
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      if (uVar14 != 0) {
        uVar10 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
        ;
        uVar14 = *(uint *)(this + 0x20);
        if ((int)uVar10 < 0) {
          return 0;
        }
        pKVar5 = this + (ulong)uVar9 +
                        (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18);
        if ((ulong)*(uint *)(param_3 + 0x40) < (ulong)((long)pKVar5 - *(long *)(param_3 + 0x30))) {
          return 0;
        }
        if ((uint)((int)*(undefined8 *)(param_3 + 0x38) - (int)pKVar5) < uVar10 * 2) {
          return 0;
        }
        iVar8 = *(int *)(param_3 + 0x44) + uVar10 * -2;
        *(int *)(param_3 + 0x44) = iVar8;
        if (iVar8 < 1) {
          return 0;
        }
        uVar9 = (uint)(short)(*(ushort *)pKVar5 << 8 | *(ushort *)pKVar5 >> 8);
      }
      return (ulong)uVar9;
    }
  }
  return 0;
}



/* OT::hb_kern_machine_t<AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::accelerator_t>::kern(hb_font_t*,
   hb_buffer_t*, unsigned int, bool) const */

void __thiscall
OT::hb_kern_machine_t<AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::accelerator_t>::kern
          (hb_kern_machine_t<AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::accelerator_t> *this
          ,hb_font_t *param_1,hb_buffer_t *param_2,uint param_3,bool param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  hb_aat_apply_context_t *phVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  hb_blob_t *phVar14;
  ulong uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  short sVar23;
  long lVar24;
  long in_FS_OFFSET;
  hb_ot_apply_context_t local_198 [8];
  uint local_190;
  hb_ot_apply_context_t *local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  char local_177;
  undefined1 local_176 [2];
  char cStack_174;
  code *local_170;
  undefined1 local_168 [16];
  int local_158;
  hb_ot_apply_context_t *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [2];
  char cStack_136;
  byte local_135;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128 [16];
  int local_118;
  int local_110;
  long local_f8;
  long local_c0;
  void *local_90;
  uint local_6c;
  undefined4 local_64;
  undefined1 local_5b;
  char local_5a;
  byte local_59;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar10 = hb_buffer_t::message(param_2,param_1,"start kern");
  if (cVar10 == '\0') goto LAB_00111e22;
  if (((byte)param_2[0x18] & 0x40) != 0) {
    hb_buffer_t::_set_glyph_flags(param_2,2,0,0xffffffff,false,false);
  }
  phVar14 = (hb_blob_t *)hb_blob_get_empty();
  hb_ot_apply_context_t::hb_ot_apply_context_t(local_198,1,param_1,param_2,phVar14);
  local_50 = 0xffffffff;
  local_158 = *(int *)(local_f8 + 0x60);
  local_168 = (undefined1  [16])0x0;
  local_170 = (code *)0x0;
  if (local_110 == 1) {
    local_178 = '\x01';
    _local_176 = 1;
    local_138 = (undefined1  [2])0x101;
    cVar12 = cVar10;
LAB_00111ea8:
    _local_138 = CONCAT12(cVar12,local_138);
    local_59 = 0;
  }
  else {
    local_178 = '\0';
    if (local_110 != 0) {
      _local_176 = 0;
      local_138[1] = 1;
      local_138[0] = local_5b;
      cVar12 = '\0';
      goto LAB_00111ea8;
    }
    _local_176 = (uint3)local_59 << 8;
    _local_138 = CONCAT21(1,local_5b);
  }
  local_177 = local_5a;
  local_128 = (undefined1  [16])0x0;
  local_130 = 0;
  local_13c = 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x60);
  uVar19 = 0;
  local_134 = 0;
  lVar7 = *(long *)(param_2 + 0x70);
  local_64 = 8;
  lVar8 = *(long *)(param_2 + 0x80);
  local_180 = 8;
  local_140 = 8;
  local_188 = local_198;
  local_17c = param_3;
  local_148 = local_198;
  local_135 = local_59;
  local_118 = local_158;
  local_6c = param_3;
  if (uVar4 != 0) {
    do {
      lVar24 = (ulong)uVar19 * 0x14;
      puVar1 = (uint *)(lVar7 + lVar24);
      if ((param_3 & puVar1[1]) == 0) {
LAB_00111b20:
        uVar18 = uVar19 + 1;
      }
      else {
        uVar11 = 0;
        lVar21 = *(long *)(local_188 + 0xa0);
        local_158 = *(int *)(lVar21 + 0x60);
        if (*(uint *)(lVar21 + 0x5c) == uVar19) {
          uVar11 = *(undefined1 *)(*(long *)(lVar21 + 0x70) + 0xf + lVar24);
        }
        if (local_176[1] == '\0') {
          uVar11 = 0;
        }
        iVar20 = local_158 + -1;
        _local_176 = CONCAT12(uVar11,local_176);
        local_190 = uVar19;
LAB_00111b90:
        do {
          uVar15 = (ulong)local_190;
          while( true ) {
            cVar12 = '\0';
            do {
              uVar17 = (uint)uVar15;
              if (iVar20 <= (int)uVar17) {
                if (cVar12 != '\0') {
                  local_190 = uVar17;
                }
                goto LAB_00111b20;
              }
              uVar17 = uVar17 + 1;
              uVar15 = (ulong)uVar17;
              puVar2 = (uint *)(*(long *)(*(long *)(local_188 + 0xa0) + 0x70) + uVar15 * 0x14);
              uVar16 = (ushort)puVar2[3];
              cVar12 = cVar10;
            } while ((uVar16 & local_180 & 0xe) != 0);
            local_190 = uVar17;
            if ((uVar16 & 8) == 0) goto LAB_00111bdb;
            if ((local_180 & 0x10) != 0) break;
            if (((local_180 & 0xff00) == 0) || (((uVar16 ^ local_180) & 0xff00) == 0))
            goto LAB_00111bdb;
          }
          cVar12 = hb_ot_apply_context_t::match_properties_mark
                             ((uint)*(undefined8 *)(local_188 + 0xf8),*puVar2,local_180);
          if (cVar12 == '\0') goto LAB_00111b90;
LAB_00111bdb:
          uVar16 = (ushort)puVar2[4];
          sVar23 = 0;
          if (((uVar16 & 0x20) != 0) && ((puVar2[3] & 0x10) == 0)) {
            if (local_178 == '\0') {
              if ((uVar16 & 0x1f) == 1) {
                sVar23 = 0;
                if ((uVar16 & 0x200) != 0) goto LAB_00111c28;
                if (local_177 == '\0') goto LAB_00112004;
              }
            }
            else if ((local_177 == '\0') && ((uVar16 & 0x1f) == 1)) {
LAB_00112004:
              sVar23 = 0;
              if ((uVar16 & 0x100) != 0) goto LAB_00111c28;
            }
            if (local_176[0] == '\0') {
              sVar23 = ((uVar16 >> 6 ^ 1) & 1) * 2;
            }
            else {
              sVar23 = 2;
            }
          }
LAB_00111c28:
          uVar16 = 0;
          if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
            uVar16 = *(ushort *)local_168._8_8_ << 8 | *(ushort *)local_168._8_8_ >> 8;
          }
          if (((puVar2[1] & local_17c) == 0) ||
             ((cStack_174 != '\0' && (cStack_174 != *(char *)((long)puVar2 + 0xf))))) {
LAB_00111f40:
            if (sVar23 == 0) goto LAB_00111b20;
            goto LAB_00111b90;
          }
          if (local_170 != (code *)0x0) {
            cVar12 = (*local_170)(puVar2,uVar16,local_168._0_8_);
            if (cVar12 == '\0') goto LAB_00111f40;
            break;
          }
        } while (sVar23 != 0);
        uVar17 = local_190;
        if ((ushort *)local_168._8_8_ != (ushort *)0x0) {
          local_168._8_8_ = (ushort *)(local_168._8_8_ + 2);
        }
        uVar5 = *puVar1;
        phVar9 = (hb_aat_apply_context_t *)(*(undefined8 **)this)[1];
        uVar18 = local_190;
        if ((((1L << ((byte)(uVar5 >> 4) & 0x3f) & *(ulong *)(phVar9 + 0xb0)) != 0) &&
            ((1L << ((byte)uVar5 & 0x3f) & *(ulong *)(phVar9 + 0xb8)) != 0)) &&
           ((1L << ((byte)(uVar5 >> 9) & 0x3f) & *(ulong *)(phVar9 + 0xc0)) != 0)) {
          lVar21 = (ulong)local_190 * 0x14;
          uVar6 = *(uint *)(lVar7 + (ulong)local_190 * 0x14);
          if ((((1L << ((byte)(uVar6 >> 4) & 0x3f) & *(ulong *)(phVar9 + 200)) != 0) &&
              ((1L << ((byte)uVar6 & 0x3f) & *(ulong *)(phVar9 + 0xd0)) != 0)) &&
             (((1L << ((byte)(uVar6 >> 9) & 0x3f) & *(ulong *)(phVar9 + 0xd8)) != 0 &&
              (iVar20 = AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning
                                  ((KerxSubTableFormat6<AAT::KerxSubTableHeader> *)
                                   **(undefined8 **)this,uVar5,uVar6,phVar9), uVar18 = local_190,
              iVar20 != 0)))) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_4) {
                iVar20 = (int)((ulong)((long)(short)iVar20 * *(long *)(param_1 + 0x58) + 0x8000) >>
                              0x10);
              }
              piVar22 = (int *)(lVar21 + lVar8);
              if (this[8] ==
                  (hb_kern_machine_t<AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::accelerator_t>
                   )0x0) {
                iVar13 = iVar20 - (iVar20 >> 1);
                *(int *)(lVar8 + lVar24) = *(int *)(lVar8 + lVar24) + (iVar20 >> 1);
                *piVar22 = *piVar22 + iVar13;
                piVar22[2] = piVar22[2] + iVar13;
              }
              else {
                piVar22[3] = iVar20;
                *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
              }
            }
            else {
              if (param_4) {
                iVar20 = (int)((ulong)((long)(short)iVar20 * *(long *)(param_1 + 0x60) + 0x8000) >>
                              0x10);
              }
              lVar21 = lVar21 + lVar8;
              if (this[8] ==
                  (hb_kern_machine_t<AAT::KerxSubTableFormat6<AAT::KerxSubTableHeader>::accelerator_t>
                   )0x0) {
                iVar13 = iVar20 - (iVar20 >> 1);
                piVar22 = (int *)(lVar8 + 4 + lVar24);
                *piVar22 = *piVar22 + (iVar20 >> 1);
                *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + iVar13;
                *(int *)(lVar21 + 0xc) = *(int *)(lVar21 + 0xc) + iVar13;
              }
              else {
                *(int *)(lVar21 + 8) = iVar20;
                *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) | 8;
              }
            }
            hb_buffer_t::_set_glyph_flags(param_2,3,uVar19,uVar17 + 1,true,false);
            uVar18 = local_190;
          }
        }
      }
      uVar19 = uVar18;
    } while (uVar18 < uVar4);
  }
  hb_buffer_t::message(param_2,param_1,"end kern");
  free(local_90);
  if (local_c0 != 0) {
    hb_blob_destroy();
  }
LAB_00111e22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::
drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
           *this,driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  Entry *pEVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  hb_buffer_t *this_00;
  undefined8 uVar6;
  hb_buffer_t *phVar7;
  char cVar8;
  hb_buffer_t hVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  driver_context_t *local_d0 [2];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  hb_buffer_t *local_b0;
  StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
  *local_a8;
  uint *local_a0;
  driver_context_t **local_98;
  hb_buffer_t **local_90;
  uint *local_88;
  Entry *local_80;
  driver_context_t **local_78;
  hb_buffer_t **pphStack_70;
  StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
  *local_68;
  Entry *local_60;
  uint *local_58;
  uint *puStack_50;
  StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
  **local_48;
  long local_40;
  
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  puVar14 = *(uint **)(param_2 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = 0;
  if (puVar14 != (uint *)0x0) {
    if (puVar14[1] < 2) {
      puVar14 = (uint *)0x0;
    }
    else {
      puVar14 = *(uint **)(puVar14 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  local_d0[0] = param_1;
  local_b0 = this_00;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar10 = 0;
LAB_001121d7:
    uVar17 = *(uint *)(this_00 + 0x60);
    if (puVar14 == (uint *)0x0) goto LAB_001124b0;
LAB_001121e3:
    uVar16 = *(uint *)(param_2 + 0xe0);
LAB_001121ea:
    if (uVar10 < uVar17) goto LAB_00112229;
LAB_001121ee:
    if ((uVar16 & *puVar14) != 0) {
      puVar15 = *(uint **)this;
      goto LAB_00112633;
    }
    if (uVar10 != uVar17) {
      do {
        if (this_00[0x58] == (hb_buffer_t)0x0) break;
        hVar9 = this_00[0x5a];
        local_bc = 0;
        if (hVar9 != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (uVar17 = uVar10, *(uint *)(this_00 + 100) == uVar10)) {
LAB_0011258d:
            *(uint *)(this_00 + 100) = uVar10 + 1;
            *(uint *)(this_00 + 0x5c) = uVar17 + 1;
          }
          else {
            cVar8 = hb_buffer_t::make_room_for((uint)this_00,1);
            if (cVar8 != '\0') {
              puVar2 = (undefined8 *)
                       (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
              uVar6 = puVar2[1];
              puVar3 = (undefined8 *)
                       (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
              uVar10 = *(uint *)(this_00 + 100);
              hVar9 = this_00[0x58];
              uVar17 = *(uint *)(this_00 + 0x5c);
              goto LAB_0011258d;
            }
            hVar9 = this_00[0x58];
          }
          if (hVar9 == (hb_buffer_t)0x0) break;
          uVar10 = *(uint *)(this_00 + 0x5c);
          uVar17 = *(uint *)(this_00 + 0x60);
          uVar16 = *(uint *)(param_2 + 0xe0);
          goto LAB_001121ea;
        }
        uVar10 = uVar10 + 1;
        *(uint *)(this_00 + 0x5c) = uVar10;
        if (uVar17 <= uVar10) goto LAB_001121ee;
LAB_00112229:
        uVar5 = *(uint *)(*(long *)(this_00 + 0x70) + 8 + (ulong)uVar10 * 0x14);
        uVar13 = puVar14[1];
        while (uVar5 < uVar13) {
          uVar13 = puVar14[-2];
          puVar14 = puVar14 + -3;
        }
        uVar13 = puVar14[2];
        while (uVar13 < uVar5) {
          uVar13 = puVar14[5];
          puVar14 = puVar14 + 3;
        }
        if ((uVar16 & *puVar14) != 0) {
          puVar15 = *(uint **)this;
          uVar10 = *(uint *)(*(long *)(this_00 + 0x70) + (ulong)uVar10 * 0x14);
          if (uVar10 == 0xffff) goto LAB_001124d4;
          goto LAB_00112276;
        }
      } while( true );
    }
  }
LAB_001125b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00112276:
  uVar17 = 1;
  if ((((1L << ((byte)(uVar10 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
      ((1L << ((byte)uVar10 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
     ((1L << ((byte)(uVar10 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
    uVar16 = puVar15[1];
    puVar12 = (ushort *)
              Lookup<OT::IntType<unsigned_short,2u>>::get_value
                        ((Lookup<OT::IntType<unsigned_short,2u>> *)
                         ((ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18) + (long)puVar15),uVar10,*(uint *)(this + 8));
    if (puVar12 != (ushort *)0x0) {
      uVar17 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
    }
    puVar15 = *(uint **)this;
  }
  while( true ) {
    while( true ) {
      uVar10 = *puVar15;
      uVar16 = puVar15[2];
      uVar13 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      uVar10 = uVar17;
      if (uVar13 <= uVar17) {
        uVar10 = 1;
      }
      uVar5 = puVar15[3];
      uVar4 = *(ushort *)
               ((long)puVar15 +
               (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                      uVar16 << 0x18) + (ulong)(uVar13 * local_bc + uVar10) * 2);
      pEVar1 = (Entry *)((long)puVar15 +
                        (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) * 8 +
                        (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                               uVar5 << 0x18));
      local_a0 = &local_b8;
      uVar16 = (uint)(ushort)(*(ushort *)pEVar1 << 8 | *(ushort *)pEVar1 >> 8);
      local_48 = &local_a8;
      local_b8 = uVar17;
      local_b4 = uVar16;
      local_a8 = this;
      local_98 = local_d0;
      local_90 = &local_b0;
      local_88 = &local_b4;
      local_80 = pEVar1;
      local_78 = local_d0;
      pphStack_70 = &local_b0;
      local_68 = this;
      local_60 = pEVar1;
      local_58 = &local_bc;
      puStack_50 = &local_b4;
      cVar8 = drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t*,AAT::hb_aat_apply_context_t*)
              ::{lambda()#2}::operator()((_lambda___2_ *)&local_78);
      if (cVar8 == '\0') {
        if (this_00[0x5a] == (hb_buffer_t)0x0) {
          iVar11 = *(int *)(this_00 + 0x5c);
        }
        else {
          iVar11 = *(int *)(this_00 + 100);
        }
        if ((iVar11 != 0) && (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60))) {
          hb_buffer_t::_set_glyph_flags
                    (this_00,3,iVar11 - 1,*(uint *)(this_00 + 0x5c) + 1,true,true);
        }
      }
      ContextualSubtable<AAT::ExtendedTypes>::driver_context_t::transition
                (local_d0[0],this_00,(StateTableDriver *)this,pEVar1);
      phVar7 = local_b0;
      uVar10 = *(uint *)(this_00 + 0x5c);
      local_bc = uVar16;
      if ((uVar10 == *(uint *)(this_00 + 0x60)) || (this_00[0x58] == (hb_buffer_t)0x0))
      goto LAB_001125b0;
      if (((*(ushort *)(pEVar1 + 2) & 0x40) != 0) &&
         (iVar11 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar11 + -1, 0 < iVar11))
      goto LAB_001121d7;
      if (local_b0[0x5a] == (hb_buffer_t)0x0) {
        *(int *)(local_b0 + 0x5c) = *(int *)(local_b0 + 0x5c) + 1;
        uVar10 = *(uint *)(this_00 + 0x5c);
        goto LAB_001121d7;
      }
      if ((*(long *)(local_b0 + 0x78) == *(long *)(local_b0 + 0x70)) &&
         (*(int *)(local_b0 + 100) == *(int *)(local_b0 + 0x5c))) {
        iVar11 = *(int *)(local_b0 + 0x5c) + 1;
        *(int *)(local_b0 + 100) = iVar11;
        *(int *)(local_b0 + 0x5c) = iVar11;
        uVar10 = *(uint *)(this_00 + 0x5c);
        goto LAB_001121d7;
      }
      cVar8 = hb_buffer_t::make_room_for((uint)local_b0,1);
      if (cVar8 == '\0') {
        hVar9 = this_00[0x58];
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(phVar7 + 0x78) + (ulong)*(uint *)(phVar7 + 100) * 0x14);
        puVar3 = (undefined8 *)(*(long *)(phVar7 + 0x70) + (ulong)*(uint *)(phVar7 + 0x5c) * 0x14);
        uVar6 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar6;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
        hVar9 = this_00[0x58];
        *(int *)(phVar7 + 100) = *(int *)(phVar7 + 100) + 1;
        *(int *)(phVar7 + 0x5c) = *(int *)(phVar7 + 0x5c) + 1;
      }
      if (hVar9 == (hb_buffer_t)0x0) goto LAB_001125b0;
      uVar10 = *(uint *)(this_00 + 0x5c);
      uVar17 = *(uint *)(this_00 + 0x60);
      if (puVar14 != (uint *)0x0) goto LAB_001121e3;
LAB_001124b0:
      puVar15 = *(uint **)this;
      if (uVar10 < uVar17) break;
LAB_00112633:
      uVar17 = 0;
    }
    uVar10 = *(uint *)(*(long *)(this_00 + 0x70) + (ulong)uVar10 * 0x14);
    if (uVar10 != 0xffff) break;
LAB_001124d4:
    uVar17 = 2;
  }
  goto LAB_00112276;
}



/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::Format1Entry<true>::EntryData>::drive<AAT::KerxSubTableFormat1<AAT::KerxSubTableHeader>::driver_context_t>(AAT::KerxSubTableFormat1<AAT::KerxSubTableHeader>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData>::
drive<AAT::KerxSubTableFormat1<AAT::KerxSubTableHeader>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,AAT::Format1Entry<true>::EntryData> *this,
          driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  hb_buffer_t *this_00;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  hb_buffer_t hVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  ushort uVar22;
  uint uVar23;
  int *piVar24;
  ulong uVar25;
  
  puVar20 = *(uint **)(param_2 + 0x78);
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  if (puVar20 != (uint *)0x0) {
    if (puVar20[1] < 2) {
      puVar20 = (uint *)0x0;
    }
    else {
      puVar20 = *(uint **)(puVar20 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] == (hb_buffer_t)0x0) {
    return;
  }
  uVar12 = *(uint *)(this_00 + 0x60);
  uVar11 = 0;
  uVar23 = 0;
LAB_001126d9:
  puVar19 = puVar20;
  if (puVar20 == (uint *)0x0) goto LAB_0011290d;
LAB_001126e2:
  uVar17 = *(uint *)(param_2 + 0xe0);
  if (uVar11 < uVar12) goto LAB_00112722;
  do {
    puVar19 = puVar20;
    if ((uVar17 & *puVar20) != 0) goto LAB_00112d00;
    if (uVar11 == uVar12) {
      return;
    }
    while( true ) {
      if (this_00[0x58] == (hb_buffer_t)0x0) {
        return;
      }
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
           (*(uint *)(this_00 + 100) == uVar11)) {
          uVar11 = uVar11 + 1;
          uVar23 = 0;
          *(uint *)(this_00 + 100) = uVar11;
          *(uint *)(this_00 + 0x5c) = uVar11;
          goto LAB_001126d9;
        }
        cVar7 = hb_buffer_t::make_room_for((uint)this_00,1);
        if (cVar7 == '\0') {
          hVar8 = this_00[0x58];
        }
        else {
          puVar1 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
          hVar8 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        uVar23 = 0;
        goto LAB_00112c2c;
      }
      uVar11 = uVar11 + 1;
      uVar23 = 0;
      *(uint *)(this_00 + 0x5c) = uVar11;
      if (uVar12 <= uVar11) break;
LAB_00112722:
      lVar21 = *(long *)(this_00 + 0x70);
      uVar25 = (ulong)uVar11;
      puVar14 = (uint *)(lVar21 + uVar25 * 0x14);
      uVar4 = puVar14[2];
      uVar13 = puVar20[1];
      while (uVar4 < uVar13) {
        uVar13 = puVar20[-2];
        puVar20 = puVar20 + -3;
      }
      if (puVar20[2] < uVar4) {
        do {
          puVar19 = puVar20 + 3;
          puVar14 = puVar20 + 5;
          puVar20 = puVar19;
        } while (*puVar14 < uVar4);
        if ((uVar17 & *puVar19) != 0) goto LAB_00112769;
      }
      else if ((uVar17 & *puVar20) != 0) goto LAB_00112771;
    }
  } while( true );
LAB_00112769:
  puVar14 = (uint *)(lVar21 + uVar25 * 0x14);
  puVar20 = puVar19;
LAB_00112771:
  uVar12 = *puVar14;
  puVar14 = *(uint **)this;
  if (uVar12 == 0xffff) {
    uVar25 = 2;
  }
  else {
    uVar25 = 1;
    if ((((1L << ((byte)(uVar12 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar12 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar12 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      uVar11 = puVar14[1];
      puVar15 = (ushort *)
                Lookup<OT::IntType<unsigned_short,2u>>::get_value
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           ((ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                    (uVar11 & 0xff00) << 8 | uVar11 << 0x18) + (long)puVar14),uVar12
                           ,*(uint *)(this + 8));
      uVar25 = 1;
      if (puVar15 != (ushort *)0x0) {
        uVar25 = (ulong)(ushort)(*puVar15 << 8 | *puVar15 >> 8);
      }
      puVar14 = *(uint **)this;
    }
  }
LAB_001127d0:
  uVar12 = *puVar14;
  uVar11 = puVar14[2];
  uVar17 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
  if (uVar11 <= (uint)uVar25) {
    uVar25 = 1;
  }
  uVar13 = puVar14[3];
  iVar16 = uVar11 * uVar23;
  uVar11 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
  uVar3 = *(ushort *)((long)puVar14 + (ulong)(uint)(iVar16 + (int)uVar25) * 2 + (ulong)uVar17);
  puVar15 = (ushort *)((long)puVar14 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) * 6 + (ulong)uVar11)
  ;
  uVar3 = puVar15[2];
  uVar22 = *puVar15 << 8 | *puVar15 >> 8;
  if (((uVar3 == 0xffff) &&
      (((uVar23 == 0 || (((puVar15[1] & 0x40) != 0 && (uVar22 == 0)))) ||
       ((uVar10 = *(ushort *)((long)puVar14 + uVar25 * 2 + (ulong)uVar17),
        puVar18 = (ushort *)
                  ((long)puVar14 + (ulong)(ushort)(uVar10 << 8 | uVar10 >> 8) * 6 + (ulong)uVar11),
        puVar18[2] == 0xffff &&
        ((uVar22 == (ushort)(*puVar18 << 8 | *puVar18 >> 8) &&
         (((puVar15[1] ^ puVar18[1]) & 0x40) == 0)))))))) &&
     (uVar10 = *(ushort *)
                ((long)puVar14 + (ulong)(iVar16 + (uint)(uVar12 == 0)) * 2 + (ulong)uVar17),
     *(short *)((long)puVar14 + (ulong)(ushort)(uVar10 << 8 | uVar10 >> 8) * 6 + (ulong)uVar11 + 4)
     == -1)) {
    uVar10 = puVar15[1] << 8;
    uVar9 = uVar10 | puVar15[1] >> 8;
    if ((uVar10 & 0x2000) == 0) {
      if (-1 < (short)uVar9) goto LAB_001128c0;
LAB_001129d4:
      uVar12 = *(uint *)(param_1 + 0x38);
      uVar25 = (ulong)uVar12;
      uVar11 = *(uint *)(this_00 + 0x5c);
      if (uVar12 < 8) {
        iVar16 = uVar12 + 1;
        goto LAB_001129e8;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
LAB_00112b98:
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (-1 < (short)uVar9) goto LAB_001128c0;
      uVar11 = *(uint *)(this_00 + 0x5c);
      iVar16 = 1;
      uVar25 = 0;
LAB_001129e8:
      *(int *)(param_1 + 0x38) = iVar16;
      *(uint *)(param_1 + uVar25 * 4 + 0x18) = uVar11;
      if (uVar3 != 0xffff) goto LAB_001129fd;
    }
LAB_001128c3:
    uVar12 = *(uint *)(this_00 + 0x60);
    if (uVar11 == uVar12) {
      return;
    }
  }
  else {
    if (this_00[0x5a] == (hb_buffer_t)0x0) {
      iVar16 = *(int *)(this_00 + 0x5c);
    }
    else {
      iVar16 = *(int *)(this_00 + 100);
    }
    if ((iVar16 != 0) && (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60))) {
      hb_buffer_t::_set_glyph_flags(this_00,3,iVar16 - 1,*(uint *)(this_00 + 0x5c) + 1,true,true);
    }
    uVar10 = puVar15[1] << 8;
    uVar9 = uVar10 | puVar15[1] >> 8;
    if ((uVar10 & 0x2000) != 0) goto LAB_00112b98;
    if ((short)uVar9 < 0) goto LAB_001129d4;
    if ((uVar3 == 0xffff) || (iVar16 = *(int *)(param_1 + 0x38), iVar16 == 0)) goto LAB_001128c0;
LAB_001129fd:
    lVar21 = *(long *)param_1;
    uVar12 = *(uint *)(*(long *)(param_1 + 8) + 8);
    if (iVar16 < 0) {
LAB_00112b70:
      *(undefined4 *)(param_1 + 0x38) = 0;
LAB_001128c0:
      uVar11 = *(uint *)(this_00 + 0x5c);
      goto LAB_001128c3;
    }
    uVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    lVar5 = (ulong)(uint)(iVar16 * 2) * (ulong)uVar11;
    uVar12 = (uint)lVar5;
    if (((((int)((ulong)lVar5 >> 0x20) != 0) ||
         (puVar18 = (ushort *)
                    (*(long *)(param_1 + 0x10) + (ulong)((ushort)(uVar3 << 8 | uVar3 >> 8) & 0xfffe)
                    ),
         (ulong)*(uint *)(lVar21 + 0x40) < (ulong)((long)puVar18 - *(long *)(lVar21 + 0x30)))) ||
        ((uint)((int)*(undefined8 *)(lVar21 + 0x38) - (int)puVar18) < uVar12)) ||
       (iVar16 = *(int *)(lVar21 + 0x44) - uVar12, *(int *)(lVar21 + 0x44) = iVar16, iVar16 < 1))
    goto LAB_00112b70;
    uVar12 = *(uint *)(this_00 + 0x60);
    uVar23 = *(uint *)(*(long *)(*(long *)param_1 + 8) + 0xa0);
    do {
      while( true ) {
        if (*(int *)(param_1 + 0x38) == 0) goto LAB_00112b4e;
        uVar13 = *(int *)(param_1 + 0x38) - 1;
        uVar17 = *(uint *)(param_1 + (ulong)uVar13 * 4 + 0x18);
        *(uint *)(param_1 + 0x38) = uVar13;
        if (uVar17 < uVar12) break;
        puVar18 = puVar18 + uVar11;
      }
      uVar3 = *puVar18;
      lVar21 = (ulong)uVar17 * 0x14;
      piVar24 = (int *)(*(long *)(this_00 + 0x80) + lVar21);
      uVar10 = uVar3 << 8 | uVar3 >> 8 & 0xfffe;
      if ((*(uint *)(this_00 + 0x38) & 0xfffffffe) == 4) {
        if (param_1[0x3c] == (driver_context_t)0x0) {
          if ((uVar23 & *(uint *)(*(long *)(this_00 + 0x70) + 4 + lVar21)) != 0) {
            iVar16 = (int)((ulong)((long)(short)uVar10 *
                                   *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x58) + 0x8000) >>
                          0x10);
            *piVar24 = *piVar24 + iVar16;
            piVar24[2] = piVar24[2] + iVar16;
            uVar12 = *(uint *)(this_00 + 0x60);
          }
        }
        else if (uVar10 == 0x8000) {
          *(undefined1 *)((long)piVar24 + 0x12) = 0;
          *(undefined2 *)(piVar24 + 4) = 0;
          piVar24[3] = 0;
          uVar12 = *(uint *)(this_00 + 0x60);
        }
        else if (*(char *)((long)piVar24 + 0x12) != '\0') {
          piVar24[3] = piVar24[3] +
                       (int)((ulong)((long)(short)uVar10 *
                                     *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x60) + 0x8000)
                            >> 0x10);
          uVar12 = *(uint *)(this_00 + 0x60);
          *(uint *)(this_00 + 0xc0) = *(uint *)(this_00 + 0xc0) | 8;
        }
      }
      else if (param_1[0x3c] == (driver_context_t)0x0) {
        if ((uVar23 & *(uint *)(*(long *)(this_00 + 0x70) + 4 + lVar21)) != 0) {
          iVar16 = (int)((ulong)((long)(short)uVar10 *
                                 *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x60) + 0x8000) >>
                        0x10);
          piVar24[1] = piVar24[1] + iVar16;
          piVar24[3] = piVar24[3] + iVar16;
          uVar12 = *(uint *)(this_00 + 0x60);
        }
      }
      else if (uVar10 == 0x8000) {
        *(undefined1 *)((long)piVar24 + 0x12) = 0;
        *(undefined2 *)(piVar24 + 4) = 0;
        piVar24[2] = 0;
        uVar12 = *(uint *)(this_00 + 0x60);
      }
      else if (*(char *)((long)piVar24 + 0x12) != '\0') {
        piVar24[2] = piVar24[2] +
                     (int)((ulong)((long)(short)uVar10 *
                                   *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x58) + 0x8000) >>
                          0x10);
        uVar12 = *(uint *)(this_00 + 0x60);
        *(uint *)(this_00 + 0xc0) = *(uint *)(this_00 + 0xc0) | 8;
      }
      puVar18 = puVar18 + uVar11;
    } while ((uVar3 & 0x100) == 0);
LAB_00112b4e:
    uVar11 = *(uint *)(this_00 + 0x5c);
    if (uVar11 == uVar12) {
      return;
    }
  }
  uVar23 = (uint)uVar22;
  if (this_00[0x58] == (hb_buffer_t)0x0) {
    return;
  }
  if (((puVar15[1] & 0x40) == 0) ||
     (iVar16 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar16 + -1, iVar16 < 1)) {
    if (this_00[0x5a] == (hb_buffer_t)0x0) {
      uVar11 = uVar11 + 1;
      *(uint *)(this_00 + 0x5c) = uVar11;
    }
    else {
      if ((*(long *)(this_00 + 0x78) != *(long *)(this_00 + 0x70)) ||
         (uVar11 != *(uint *)(this_00 + 100))) goto LAB_00112bce;
      uVar11 = uVar11 + 1;
      *(uint *)(this_00 + 100) = uVar11;
      *(uint *)(this_00 + 0x5c) = uVar11;
    }
  }
  puVar19 = puVar20;
  if (puVar20 != (uint *)0x0) goto LAB_001126e2;
LAB_0011290d:
  if (uVar11 < uVar12) goto code_r0x00112915;
LAB_00112d00:
  puVar14 = *(uint **)this;
  uVar25 = 0;
  puVar20 = puVar19;
  goto LAB_001127d0;
LAB_00112bce:
  cVar7 = hb_buffer_t::make_room_for((uint)this_00,1);
  if (cVar7 == '\0') {
    hVar8 = this_00[0x58];
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
    puVar2 = (undefined8 *)(*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
    hVar8 = this_00[0x58];
    *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
  }
LAB_00112c2c:
  if (hVar8 == (hb_buffer_t)0x0) {
    return;
  }
  uVar12 = *(uint *)(this_00 + 0x60);
  uVar11 = *(uint *)(this_00 + 0x5c);
  goto LAB_001126d9;
code_r0x00112915:
  lVar21 = *(long *)(this_00 + 0x70);
  uVar25 = (ulong)uVar11;
  goto LAB_00112769;
}



/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>::drive<AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::driver_context_t>(AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::
StateTableDriver<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>::
drive<AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,AAT::KerxSubTableFormat4<AAT::KerxSubTableHeader>::EntryData>
           *this,driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  hb_buffer_t *this_00;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  hb_buffer_t hVar7;
  ushort uVar8;
  ushort uVar9;
  uint *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  
  puVar19 = *(uint **)(param_2 + 0x78);
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar19 != (uint *)0x0) {
    if (puVar19[1] < 2) {
      puVar19 = (uint *)0x0;
    }
    else {
      puVar19 = *(uint **)(puVar19 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar14 = *(uint *)(this_00 + 0x60);
    uVar17 = 0;
    uVar16 = 0;
    puVar18 = puVar19;
    if (puVar19 == (uint *)0x0) goto LAB_00113391;
LAB_00112f30:
    uVar21 = *(uint *)(param_2 + 0xe0);
    if ((uint)uVar17 < uVar14) goto LAB_00112f6f;
    while( true ) {
      puVar18 = puVar19;
      if ((uVar21 & *puVar19) != 0) goto LAB_00113520;
      if (uVar14 == (uint)uVar17) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_001134b0;
        iVar22 = (int)uVar17;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(int *)(this_00 + 100) == iVar22)) {
            *(int *)(this_00 + 100) = iVar22 + 1;
            *(int *)(this_00 + 0x5c) = iVar22 + 1;
            uVar16 = 0;
            goto LAB_00113385;
          }
          cVar6 = hb_buffer_t::make_room_for((uint)this_00,1);
          if (cVar6 == '\0') {
            hVar7 = this_00[0x58];
          }
          else {
            puVar1 = (undefined8 *)
                     (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)
                     (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
            hVar7 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          uVar21 = 0;
          if (hVar7 != (hb_buffer_t)0x0) goto LAB_00113426;
          goto LAB_001134b0;
        }
        uVar15 = iVar22 + 1;
        uVar17 = (ulong)uVar15;
        uVar16 = 0;
        *(uint *)(this_00 + 0x5c) = uVar15;
        if (uVar14 <= uVar15) break;
LAB_00112f6f:
        lVar23 = *(long *)(this_00 + 0x70);
        puVar10 = (uint *)(lVar23 + uVar17 * 0x14);
        uVar20 = puVar10[2];
        uVar15 = puVar19[1];
        while (uVar20 < uVar15) {
          uVar15 = puVar19[-2];
          puVar19 = puVar19 + -3;
        }
        if (puVar19[2] < uVar20) {
          do {
            puVar18 = puVar19 + 3;
            puVar10 = puVar19 + 5;
            puVar19 = puVar18;
          } while (*puVar10 < uVar20);
          if ((uVar21 & *puVar18) != 0) goto LAB_00112fb0;
        }
        else if ((uVar21 & *puVar19) != 0) goto LAB_00112fb8;
      }
    }
  }
LAB_001134b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00112fb0:
  puVar10 = (uint *)(lVar23 + uVar17 * 0x14);
  puVar19 = puVar18;
LAB_00112fb8:
  uVar14 = *puVar10;
  puVar10 = *(uint **)this;
  if (uVar14 == 0xffff) {
    uVar24 = 2;
  }
  else {
    uVar24 = 1;
    if ((((1L << ((byte)(uVar14 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar14 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar14 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      uVar21 = puVar10[1];
      puVar11 = (ushort *)
                Lookup<OT::IntType<unsigned_short,2u>>::get_value
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           ((ulong)(uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 |
                                    (uVar21 & 0xff00) << 8 | uVar21 << 0x18) + (long)puVar10),uVar14
                           ,*(uint *)(this + 8));
      if (puVar11 != (ushort *)0x0) {
        uVar24 = (ulong)(ushort)(*puVar11 << 8 | *puVar11 >> 8);
      }
      uVar17 = (ulong)*(uint *)(this_00 + 0x5c);
      puVar10 = *(uint **)this;
    }
  }
  do {
    uVar14 = *puVar10;
    uVar21 = puVar10[3];
    uVar15 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
    uVar21 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    if (uVar21 <= (uint)uVar24) {
      uVar24 = 1;
    }
    uVar20 = puVar10[2];
    iVar22 = uVar21 * uVar16;
    uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar9 = *(ushort *)((long)puVar10 + (ulong)(uint)(iVar22 + (int)uVar24) * 2 + (ulong)uVar20);
    puVar11 = (ushort *)
              ((long)puVar10 + (ulong)(ushort)(uVar9 << 8 | uVar9 >> 8) * 6 + (ulong)uVar15);
    uVar8 = *puVar11 << 8 | *puVar11 >> 8;
    uVar21 = (uint)uVar8;
    uVar9 = puVar11[2];
    if ((uVar9 == 0xffff) &&
       ((((uVar16 == 0 || (((puVar11[1] & 0x40) != 0 && (uVar8 == 0)))) ||
         ((uVar8 = *(ushort *)((long)puVar10 + uVar24 * 2 + (ulong)uVar20),
          puVar12 = (ushort *)
                    ((long)puVar10 + (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) * 6 + (ulong)uVar15),
          puVar12[2] == 0xffff &&
          ((uVar21 == (ushort)(*puVar12 << 8 | *puVar12 >> 8) &&
           (((puVar12[1] ^ puVar11[1]) & 0x40) == 0)))))) &&
        (uVar8 = *(ushort *)
                  ((long)puVar10 + (ulong)(iVar22 + (uint)(uVar14 == 0)) * 2 + (ulong)uVar20),
        *(short *)((long)puVar10 + (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) * 6 + (ulong)uVar15 + 4)
        == -1)))) {
LAB_0011333a:
      uVar14 = *(uint *)(this_00 + 0x60);
LAB_0011333d:
      if ((puVar11[1] & 0x80) != 0) {
        param_1[0x18] = (driver_context_t)0x1;
        *(int *)(param_1 + 0x1c) = (int)uVar17;
      }
LAB_0011334e:
      if ((uint)uVar17 == uVar14) goto LAB_001134b0;
    }
    else {
      uVar16 = (uint)uVar17;
      uVar14 = uVar16;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        uVar14 = *(uint *)(this_00 + 100);
      }
      if ((uVar14 != 0) && (uVar16 < *(uint *)(this_00 + 0x60))) {
        hb_buffer_t::_set_glyph_flags(this_00,3,uVar14 - 1,uVar16 + 1,true,true);
        uVar17 = (ulong)*(uint *)(this_00 + 0x5c);
      }
      if (param_1[0x18] == (driver_context_t)0x0) goto LAB_0011333a;
      uVar9 = uVar9 << 8 | uVar9 >> 8;
      uVar14 = *(uint *)(this_00 + 0x60);
      if ((uVar9 == 0xffff) || (uVar14 <= (uint)uVar17)) goto LAB_0011333d;
      lVar23 = *(long *)(this_00 + 0x80) + uVar17 * 0x14;
      iVar22 = *(int *)(param_1 + 8);
      if (iVar22 != 1) {
        if (iVar22 == 2) {
          puVar12 = (ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar9 * 8);
          lVar3 = *(long *)param_1;
          if ((((ulong)*(uint *)(lVar3 + 0x40) < (ulong)((long)puVar12 - *(long *)(lVar3 + 0x30)))
              || ((uint)((int)*(undefined8 *)(lVar3 + 0x38) - (int)puVar12) < 8)) ||
             (iVar22 = *(int *)(lVar3 + 0x44) + -8, *(int *)(lVar3 + 0x44) = iVar22, iVar22 < 1))
          goto LAB_00113356;
          uVar9 = puVar12[3];
          uVar8 = puVar12[1];
          lVar3 = *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x58);
          lVar4 = *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x60);
          *(int *)(lVar23 + 8) =
               (int)((ulong)((short)(*puVar12 << 8 | *puVar12 >> 8) * lVar3 + 0x8000) >> 0x10) -
               (int)((ulong)((short)(puVar12[2] << 8 | puVar12[2] >> 8) * lVar3 + 0x8000) >> 0x10);
          *(int *)(lVar23 + 0xc) =
               (int)((ulong)((short)(uVar8 << 8 | uVar8 >> 8) * lVar4 + 0x8000) >> 0x10) -
               (int)((ulong)((short)(uVar9 << 8 | uVar9 >> 8) * lVar4 + 0x8000) >> 0x10);
LAB_00113270:
          *(undefined1 *)(lVar23 + 0x12) = 1;
          *(short *)(lVar23 + 0x10) =
               (short)*(undefined4 *)(param_1 + 0x1c) - *(short *)(this_00 + 0x5c);
          uVar17 = (ulong)*(uint *)(this_00 + 0x5c);
          *(uint *)(this_00 + 0xc0) = *(uint *)(this_00 + 0xc0) | 8;
          goto LAB_0011333a;
        }
        if (iVar22 != 0) goto LAB_00113270;
        puVar12 = (ushort *)(*(long *)(param_1 + 0x10) + (ulong)((uint)uVar9 * 2) * 2);
        lVar3 = *(long *)param_1;
        if ((((ulong)((long)puVar12 - *(long *)(lVar3 + 0x30)) <= (ulong)*(uint *)(lVar3 + 0x40)) &&
            (3 < (uint)((int)*(undefined8 *)(lVar3 + 0x38) - (int)puVar12))) &&
           (iVar22 = *(int *)(lVar3 + 0x44) + -4, *(int *)(lVar3 + 0x44) = iVar22, 0 < iVar22)) {
          uVar9 = puVar12[1];
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          iVar22 = hb_font_t::get_glyph_contour_point_for_origin
                             (*(hb_font_t **)(*(long *)param_1 + 0x10),
                              *(undefined4 *)
                               (*(long *)(*(long *)(*(long *)param_1 + 0x20) + 0x70) +
                               (ulong)*(uint *)(param_1 + 0x1c) * 0x14),
                              *puVar12 << 8 | *puVar12 >> 8,4,&local_50,&local_4c);
          if ((iVar22 != 0) &&
             (lVar3 = *(long *)(*(long *)param_1 + 0x20),
             iVar22 = hb_font_t::get_glyph_contour_point_for_origin
                                (*(hb_font_t **)(*(long *)param_1 + 0x10),
                                 *(undefined4 *)
                                  (*(long *)(lVar3 + 0x70) + (ulong)*(uint *)(lVar3 + 0x5c) * 0x14),
                                 uVar9 << 8 | uVar9 >> 8,4,&local_48,&local_44), iVar22 != 0)) {
            *(int *)(lVar23 + 8) = local_50 - local_48;
            *(int *)(lVar23 + 0xc) = local_4c - local_44;
            goto LAB_00113270;
          }
          uVar17 = (ulong)*(uint *)(this_00 + 0x5c);
          uVar14 = *(uint *)(this_00 + 0x60);
        }
        goto LAB_0011334e;
      }
      puVar12 = (ushort *)(*(long *)(param_1 + 0x10) + (ulong)((uint)uVar9 + (uint)uVar9) * 2);
      lVar3 = *(long *)param_1;
      if ((((ulong)((long)puVar12 - *(long *)(lVar3 + 0x30)) <= (ulong)*(uint *)(lVar3 + 0x40)) &&
          (3 < (uint)((int)*(undefined8 *)(lVar3 + 0x38) - (int)puVar12))) &&
         (iVar22 = *(int *)(lVar3 + 0x44) + -4, *(int *)(lVar3 + 0x44) = iVar22, 0 < iVar22)) {
        lVar3 = *(long *)param_1;
        uVar9 = puVar12[1];
        puVar12 = (ushort *)
                  ankr::get_anchor(*(ankr **)(lVar3 + 0x68),
                                   *(uint *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x70) +
                                            (ulong)*(uint *)(param_1 + 0x1c) * 0x14),
                                   (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8),
                                   *(uint *)(lVar3 + 0x60));
        lVar3 = *(long *)param_1;
        puVar13 = (ushort *)
                  ankr::get_anchor(*(ankr **)(lVar3 + 0x68),
                                   *(uint *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x70) +
                                            (ulong)*(uint *)(*(long *)(lVar3 + 0x20) + 0x5c) * 0x14)
                                   ,(uint)(ushort)(uVar9 << 8 | uVar9 >> 8),*(uint *)(lVar3 + 0x60))
        ;
        lVar3 = *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x58);
        lVar4 = *(long *)(*(long *)(*(long *)param_1 + 0x10) + 0x60);
        uVar9 = puVar13[1];
        *(int *)(lVar23 + 8) =
             (int)((ulong)((short)(*puVar12 << 8 | *puVar12 >> 8) * lVar3 + 0x8000) >> 0x10) -
             (int)((ulong)((short)(*puVar13 << 8 | *puVar13 >> 8) * lVar3 + 0x8000) >> 0x10);
        *(int *)(lVar23 + 0xc) =
             (int)((ulong)((short)(puVar12[1] << 8 | puVar12[1] >> 8) * lVar4 + 0x8000) >> 0x10) -
             (int)((ulong)((short)(uVar9 << 8 | uVar9 >> 8) * lVar4 + 0x8000) >> 0x10);
        goto LAB_00113270;
      }
    }
LAB_00113356:
    if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_001134b0;
    uVar16 = uVar21;
    if (((puVar11[1] & 0x40) == 0) ||
       (iVar22 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar22 + -1, iVar22 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
      }
      else if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
              (*(int *)(this_00 + 100) == *(int *)(this_00 + 0x5c))) {
        iVar22 = *(int *)(this_00 + 0x5c) + 1;
        *(int *)(this_00 + 100) = iVar22;
        *(int *)(this_00 + 0x5c) = iVar22;
      }
      else {
        cVar6 = hb_buffer_t::make_room_for((uint)this_00,1);
        if (cVar6 == '\0') {
          hVar7 = this_00[0x58];
        }
        else {
          puVar1 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          puVar2 = (undefined8 *)
                   (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar5 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
          hVar7 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        if (hVar7 == (hb_buffer_t)0x0) goto LAB_001134b0;
LAB_00113426:
        uVar14 = *(uint *)(this_00 + 0x60);
        uVar16 = uVar21;
      }
    }
LAB_00113385:
    uVar17 = (ulong)*(uint *)(this_00 + 0x5c);
    puVar18 = puVar19;
    if (puVar19 != (uint *)0x0) goto LAB_00112f30;
LAB_00113391:
    if ((uint)uVar17 < uVar14) break;
LAB_00113520:
    uVar24 = 0;
    puVar10 = *(uint **)this;
    puVar19 = puVar18;
  } while( true );
  lVar23 = *(long *)(this_00 + 0x70);
  goto LAB_00112fb0;
}



/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   AAT::LigatureEntry<true>::EntryData>::drive<AAT::LigatureSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::LigatureSubtable<AAT::ExtendedTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData>::
drive<AAT::LigatureSubtable<AAT::ExtendedTypes>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *this,
          driver_context_t *param_1,hb_aat_apply_context_t *param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  hb_buffer_t *this_00;
  undefined8 uVar6;
  char cVar7;
  hb_buffer_t hVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ushort uVar25;
  ushort uVar26;
  
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  hb_buffer_t::clear_output();
  puVar15 = *(uint **)(param_2 + 0x78);
  if (puVar15 != (uint *)0x0) {
    if (puVar15[1] < 2) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = *(uint **)(puVar15 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar20 = *(uint *)(this_00 + 0x60);
    uVar9 = 0;
    uVar23 = 0;
    uVar19 = (uint)this_00;
    puVar14 = puVar15;
    if (puVar15 == (uint *)0x0) goto LAB_0011415a;
LAB_00113df0:
    uVar16 = *(uint *)(param_2 + 0xe0);
    if (uVar9 < uVar20) goto LAB_00113e34;
    while( true ) {
      puVar14 = puVar15;
      if ((uVar16 & *puVar15) != 0) goto LAB_00114540;
      if (uVar20 == uVar9) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_00114336;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(uint *)(this_00 + 100) == uVar9)) {
            *(uint *)(this_00 + 100) = uVar9 + 1;
            *(uint *)(this_00 + 0x5c) = uVar9 + 1;
            uVar23 = 0;
            goto LAB_0011414e;
          }
          cVar7 = hb_buffer_t::make_room_for(uVar19,1);
          if (cVar7 == '\0') {
            hVar8 = this_00[0x58];
          }
          else {
            puVar2 = (undefined8 *)
                     (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar6 = puVar2[1];
            puVar13 = (undefined8 *)
                      (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            *puVar13 = *puVar2;
            puVar13[1] = uVar6;
            *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar2 + 2);
            hVar8 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          uVar16 = 0;
          if (hVar8 != (hb_buffer_t)0x0) goto LAB_001142be;
          goto LAB_00114336;
        }
        uVar9 = uVar9 + 1;
        uVar23 = 0;
        *(uint *)(this_00 + 0x5c) = uVar9;
        if (uVar20 <= uVar9) break;
LAB_00113e34:
        lVar22 = *(long *)(this_00 + 0x70);
        uVar24 = (ulong)uVar9;
        puVar18 = (uint *)(lVar22 + uVar24 * 0x14);
        uVar12 = puVar18[2];
        uVar21 = puVar15[1];
        while (uVar12 < uVar21) {
          uVar21 = puVar15[-2];
          puVar15 = puVar15 + -3;
        }
        if (puVar15[2] < uVar12) {
          do {
            puVar14 = puVar15 + 3;
            puVar18 = puVar15 + 5;
            puVar15 = puVar14;
          } while (*puVar18 < uVar12);
          if ((uVar16 & *puVar14) != 0) goto LAB_00113e79;
        }
        else if ((uVar16 & *puVar15) != 0) goto LAB_00113e81;
      }
    }
  }
LAB_00114336:
  hb_buffer_t::sync();
  return;
LAB_00113e79:
  puVar18 = (uint *)(lVar22 + uVar24 * 0x14);
  puVar15 = puVar14;
LAB_00113e81:
  uVar16 = *puVar18;
  puVar18 = *(uint **)this;
  if (uVar16 == 0xffff) {
    uVar24 = 2;
  }
  else {
    uVar24 = 1;
    if ((((1L << ((byte)(uVar16 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar16 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar16 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      uVar9 = puVar18[1];
      puVar10 = (ushort *)
                Lookup<OT::IntType<unsigned_short,2u>>::get_value
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8
                                   | uVar9 << 0x18) + (long)puVar18),uVar16,*(uint *)(this + 8));
      if (puVar10 != (ushort *)0x0) {
        uVar24 = (ulong)(ushort)(*puVar10 << 8 | *puVar10 >> 8);
      }
      uVar20 = *(uint *)(this_00 + 0x60);
      puVar18 = *(uint **)this;
      uVar9 = *(uint *)(this_00 + 0x5c);
    }
  }
  do {
    uVar21 = *puVar18;
    uVar16 = puVar18[3];
    uVar12 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
    uVar16 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
    if (uVar16 <= (uint)uVar24) {
      uVar24 = 1;
    }
    uVar11 = puVar18[2];
    iVar17 = uVar16 * uVar23;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar3 = *(ushort *)((long)puVar18 + (ulong)(uint)(iVar17 + (int)uVar24) * 2 + (ulong)uVar11);
    puVar10 = (ushort *)
              ((long)puVar18 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) * 6 + (ulong)uVar12);
    uVar3 = puVar10[1] << 8;
    uVar25 = uVar3 | puVar10[1] >> 8;
    uVar26 = *puVar10 << 8 | *puVar10 >> 8;
    uVar16 = (uint)uVar26;
    if ((uVar3 & 0x2000) == 0) {
      if ((uVar23 != 0) && (((uVar3 & 0x4000) == 0 || (uVar26 != 0)))) {
        uVar26 = *(ushort *)((long)puVar18 + uVar24 * 2 + (ulong)uVar11);
        puVar1 = (ushort *)
                 ((long)puVar18 + (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8) * 6 + (ulong)uVar12);
        uVar26 = puVar1[1] << 8;
        if (((uVar26 & 0x2000) != 0) ||
           ((uVar4 = *puVar1, uVar16 != (ushort)(uVar4 << 8 | uVar4 >> 8) ||
            (((uVar26 ^ uVar25) & 0x4000) != 0)))) goto LAB_00113fb0;
      }
      uVar26 = *(ushort *)
                ((long)puVar18 + (ulong)(iVar17 + (uint)(uVar21 == 0)) * 2 + (ulong)uVar11);
      if ((*(ushort *)
            ((long)puVar18 + (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8) * 6 + (ulong)uVar12 + 2) &
          0x20) != 0) goto LAB_00113fb0;
      if ((short)uVar25 < 0) goto LAB_00114202;
    }
    else {
LAB_00113fb0:
      uVar23 = uVar9;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        uVar23 = *(uint *)(this_00 + 100);
      }
      if ((uVar23 != 0) && (uVar9 < uVar20)) {
        hb_buffer_t::_set_glyph_flags(this_00,3,uVar23 - 1,uVar9 + 1,true,true);
        uVar9 = *(uint *)(this_00 + 0x5c);
        uVar20 = *(uint *)(this_00 + 0x60);
      }
      if ((short)uVar25 < 0) {
LAB_00114202:
        uVar23 = *(uint *)(param_1 + 0x30);
        uVar24 = (ulong)uVar23;
        iVar17 = *(int *)(this_00 + 100);
        uVar21 = 1;
        if (uVar23 != 0) {
          uVar21 = uVar23 - 1 & 0x3f;
          if (iVar17 == *(int *)(param_1 + (ulong)uVar21 * 4 + 0x34)) {
            uVar24 = (ulong)uVar21;
            uVar21 = uVar23;
          }
          else {
            uVar24 = (ulong)(uVar23 & 0x3f);
            uVar21 = uVar23 + 1;
          }
        }
        *(uint *)(param_1 + 0x30) = uVar21;
        *(int *)(param_1 + uVar24 * 4 + 0x34) = iVar17;
      }
      if ((((uVar3 & 0x2000) != 0) && (uVar23 = *(uint *)(param_1 + 0x30), uVar23 != 0)) &&
         (uVar9 < uVar20)) {
        uVar9 = 0;
        puVar14 = (uint *)(*(long *)(param_1 + 0x18) +
                          (ulong)(ushort)(puVar10[2] << 8 | puVar10[2] >> 8) * 4);
        do {
          uVar23 = uVar23 - 1;
          cVar7 = hb_buffer_t::move_to(uVar19);
          if (cVar7 == '\0') {
LAB_001145b0:
            uVar9 = *(uint *)(this_00 + 0x5c);
            uVar20 = *(uint *)(this_00 + 0x60);
            goto LAB_00114110;
          }
          if ((ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40) <
              (ulong)((long)(puVar14 + 1) - *(long *)(*(long *)(param_1 + 8) + 0x30)))
          goto LAB_001140f3;
          uVar20 = *puVar14;
          uVar21 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8;
          uVar20 = uVar20 << 0x18;
          uVar12 = uVar21 | uVar20;
          uVar21 = uVar21 | uVar20 & 0x3fffffff;
          if ((uVar20 & 0x20000000) != 0) {
            uVar21 = uVar12 | 0xc0000000;
          }
          puVar1 = (ushort *)
                   (*(long *)(param_1 + 0x20) +
                   (ulong)(uVar21 + *(int *)(*(long *)(this_00 + 0x70) +
                                            (ulong)*(uint *)(this_00 + 0x5c) * 0x14)) * 2);
          if ((ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40) <
              (ulong)((long)puVar1 + (2 - *(long *)(*(long *)(param_1 + 8) + 0x30))))
          goto LAB_001140f3;
          uVar3 = *puVar1;
          uVar9 = uVar9 + (ushort)(uVar3 << 8 | uVar3 >> 8);
          if (0x3fffffff < uVar12) {
            puVar1 = (ushort *)(*(long *)(param_1 + 0x28) + (ulong)uVar9 * 2);
            if ((ulong)((long)puVar1 + (2 - *(long *)(*(long *)(param_1 + 8) + 0x30))) <=
                (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x40)) {
              uVar3 = *puVar1;
              cVar7 = hb_buffer_t::make_room_for(uVar19,1);
              if (cVar7 != '\0') {
                puVar2 = *(undefined8 **)(this_00 + 0x78);
                uVar20 = *(uint *)(this_00 + 100);
                if (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) {
                  puVar13 = (undefined8 *)
                            (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
                }
                else {
                  puVar13 = puVar2;
                  if (uVar20 != 0) {
                    puVar13 = (undefined8 *)((long)puVar2 + (ulong)(uVar20 - 1) * 0x14);
                  }
                }
                uVar6 = puVar13[1];
                puVar18 = (uint *)((long)puVar2 + (ulong)uVar20 * 0x14);
                *(undefined8 *)puVar18 = *puVar13;
                *(undefined8 *)(puVar18 + 2) = uVar6;
                uVar20 = *(uint *)(puVar13 + 2);
                *puVar18 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
                puVar18[4] = uVar20;
                iVar17 = *(int *)(param_1 + 0x30);
                *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
                *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
                if (uVar23 < iVar17 - 1U) {
                  *(uint *)(param_1 + 0x30) = iVar17 - 1U;
                  cVar7 = hb_buffer_t::move_to(uVar19);
                  do {
                    if (cVar7 == '\0') {
LAB_00114521:
                      uVar9 = *(uint *)(this_00 + 0x5c);
                      uVar20 = *(uint *)(this_00 + 0x60);
                      goto LAB_00114110;
                    }
                    puVar1 = (ushort *)
                             (*(long *)(this_00 + 0x70) + 0x10 +
                             (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
                    *puVar1 = *puVar1 | 0x20;
                    cVar7 = hb_buffer_t::make_room_for(uVar19,1);
                    if (cVar7 == '\0') goto LAB_00114521;
                    puVar2 = *(undefined8 **)(this_00 + 0x78);
                    uVar20 = *(uint *)(this_00 + 100);
                    if (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) {
                      puVar13 = (undefined8 *)
                                (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14
                                );
                    }
                    else {
                      puVar13 = puVar2;
                      if (uVar20 != 0) {
                        puVar13 = (undefined8 *)((long)puVar2 + (ulong)(uVar20 - 1) * 0x14);
                      }
                    }
                    uVar6 = puVar13[1];
                    puVar2 = (undefined8 *)((long)puVar2 + (ulong)uVar20 * 0x14);
                    *puVar2 = *puVar13;
                    puVar2[1] = uVar6;
                    uVar5 = *(undefined4 *)(puVar13 + 2);
                    *(undefined4 *)puVar2 = 0xffff;
                    *(undefined4 *)(puVar2 + 2) = uVar5;
                    iVar17 = *(int *)(param_1 + 0x30);
                    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
                    *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
                    if (iVar17 - 1U <= uVar23) break;
                    *(uint *)(param_1 + 0x30) = iVar17 - 1U;
                    cVar7 = hb_buffer_t::move_to(uVar19);
                  } while( true );
                }
                cVar7 = hb_buffer_t::move_to(uVar19);
                if (cVar7 != '\0') {
                  hb_buffer_t::merge_out_clusters
                            (uVar19,*(uint *)(param_1 + (ulong)(uVar23 & 0x3f) * 4 + 0x34));
                  goto LAB_001140cb;
                }
              }
              goto LAB_001145b0;
            }
            goto LAB_001140f3;
          }
LAB_001140cb:
          if ((int)uVar12 < 0) goto LAB_001140f3;
          puVar14 = puVar14 + 1;
        } while (uVar23 != 0);
        *(undefined4 *)(param_1 + 0x30) = 0;
LAB_001140f3:
        hb_buffer_t::move_to(uVar19);
        uVar9 = *(uint *)(this_00 + 0x5c);
        uVar20 = *(uint *)(this_00 + 0x60);
      }
    }
LAB_00114110:
    if ((uVar20 == uVar9) || (this_00[0x58] == (hb_buffer_t)0x0)) goto LAB_00114336;
    uVar23 = uVar16;
    if (((puVar10[1] & 0x40) == 0) ||
       (iVar17 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar17 + -1, iVar17 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(uint *)(this_00 + 0x5c) = uVar9 + 1;
      }
      else if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
              (*(uint *)(this_00 + 100) == uVar9)) {
        *(uint *)(this_00 + 100) = uVar9 + 1;
        *(uint *)(this_00 + 0x5c) = uVar9 + 1;
      }
      else {
        cVar7 = hb_buffer_t::make_room_for(uVar19,1);
        if (cVar7 == '\0') {
          hVar8 = this_00[0x58];
        }
        else {
          puVar2 = (undefined8 *)
                   (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
          puVar13 = (undefined8 *)
                    (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
          uVar6 = puVar13[1];
          *puVar2 = *puVar13;
          puVar2[1] = uVar6;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar13 + 2);
          hVar8 = this_00[0x58];
          *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        }
        if (hVar8 == (hb_buffer_t)0x0) goto LAB_00114336;
LAB_001142be:
        uVar20 = *(uint *)(this_00 + 0x60);
        uVar23 = uVar16;
      }
    }
LAB_0011414e:
    uVar9 = *(uint *)(this_00 + 0x5c);
    puVar14 = puVar15;
    if (puVar15 != (uint *)0x0) goto LAB_00113df0;
LAB_0011415a:
    if (uVar9 < uVar20) break;
LAB_00114540:
    uVar24 = 0;
    puVar18 = *(uint **)this;
    puVar15 = puVar14;
  } while( true );
  lVar22 = *(long *)(this_00 + 0x70);
  uVar24 = (ulong)uVar9;
  goto LAB_00113e79;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void AAT::StateTableDriver<AAT::ExtendedTypes,
   void>::drive<AAT::RearrangementSubtable<AAT::ExtendedTypes>::driver_context_t>(AAT::RearrangementSubtable<AAT::ExtendedTypes>::driver_context_t*,
   AAT::hb_aat_apply_context_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ExtendedTypes,void>::
drive<AAT::RearrangementSubtable<AAT::ExtendedTypes>::driver_context_t>
          (StateTableDriver<AAT::ExtendedTypes,void> *this,driver_context_t *param_1,
          hb_aat_apply_context_t *param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  hb_buffer_t *this_00;
  undefined8 uVar7;
  char cVar8;
  hb_buffer_t hVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  uint uVar34;
  ushort uVar35;
  long in_FS_OFFSET;
  undefined8 *local_d8;
  uint local_b0 [2];
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar24 = *(uint **)(param_2 + 0x78);
  this_00 = *(hb_buffer_t **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar24 != (uint *)0x0) {
    if (puVar24[1] < 2) {
      puVar24 = (uint *)0x0;
    }
    else {
      puVar24 = *(uint **)(puVar24 + 2);
    }
  }
  *(undefined4 *)(this_00 + 0x5c) = 0;
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    uVar23 = 0;
    uVar10 = *(uint *)(this_00 + 0x60);
    uVar31 = 0;
    uVar30 = (uint)this_00;
    puVar25 = puVar24;
    if (puVar24 == (uint *)0x0) goto LAB_0011497c;
LAB_00114700:
    uVar18 = *(uint *)(param_2 + 0xe0);
    if (uVar31 < uVar10) goto LAB_00114746;
    while( true ) {
      puVar25 = puVar24;
      if ((uVar18 & *puVar24) != 0) goto LAB_00114e90;
      if (uVar10 == uVar31) break;
      while( true ) {
        if (this_00[0x58] == (hb_buffer_t)0x0) goto LAB_00114b78;
        if (this_00[0x5a] != (hb_buffer_t)0x0) {
          if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
             (*(uint *)(this_00 + 100) == uVar31)) {
            uVar23 = 0;
            *(uint *)(this_00 + 100) = uVar31 + 1;
            *(uint *)(this_00 + 0x5c) = uVar31 + 1;
            goto LAB_0011496f;
          }
          cVar8 = hb_buffer_t::make_room_for(uVar30,1);
          if (cVar8 == '\0') {
            hVar9 = this_00[0x58];
          }
          else {
            puVar32 = (undefined8 *)
                      (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
            uVar7 = puVar32[1];
            puVar22 = (undefined8 *)
                      (*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14);
            *puVar22 = *puVar32;
            puVar22[1] = uVar7;
            *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar32 + 2);
            hVar9 = this_00[0x58];
            *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
            *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
          }
          uVar23 = 0;
          if (hVar9 != (hb_buffer_t)0x0) goto LAB_00114afb;
          goto LAB_00114b78;
        }
        uVar31 = uVar31 + 1;
        uVar23 = 0;
        *(uint *)(this_00 + 0x5c) = uVar31;
        if (uVar10 <= uVar31) break;
LAB_00114746:
        lVar26 = *(long *)(this_00 + 0x70);
        uVar27 = (ulong)uVar31;
        puVar11 = (uint *)(lVar26 + uVar27 * 0x14);
        uVar19 = puVar11[2];
        uVar28 = puVar24[1];
        while (uVar19 < uVar28) {
          uVar28 = puVar24[-2];
          puVar24 = puVar24 + -3;
        }
        if (puVar24[2] < uVar19) {
          do {
            puVar25 = puVar24 + 3;
            puVar11 = puVar24 + 5;
            puVar24 = puVar25;
          } while (*puVar11 < uVar19);
          if ((uVar18 & *puVar25) != 0) goto LAB_00114788;
        }
        else if ((uVar18 & *puVar24) != 0) goto LAB_00114791;
      }
    }
  }
LAB_00114b78:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00114788:
  puVar11 = (uint *)(lVar26 + uVar27 * 0x14);
  puVar24 = puVar25;
LAB_00114791:
  uVar10 = *puVar11;
  puVar11 = *(uint **)this;
  if (uVar10 == 0xffff) {
    uVar27 = 2;
  }
  else {
    uVar27 = 1;
    if ((((1L << ((byte)(uVar10 >> 4) & 0x3f) & *(ulong *)(param_2 + 0x98)) != 0) &&
        ((1L << ((byte)uVar10 & 0x3f) & *(ulong *)(param_2 + 0xa0)) != 0)) &&
       ((1L << ((byte)(uVar10 >> 9) & 0x3f) & *(ulong *)(param_2 + 0xa8)) != 0)) {
      uVar31 = puVar11[1];
      puVar12 = (ushort *)
                Lookup<OT::IntType<unsigned_short,2u>>::get_value
                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                           ((ulong)(uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 |
                                    (uVar31 & 0xff00) << 8 | uVar31 << 0x18) + (long)puVar11),uVar10
                           ,*(uint *)(this + 8));
      if (puVar12 != (ushort *)0x0) {
        uVar27 = (ulong)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
      }
      uVar31 = *(uint *)(this_00 + 0x5c);
      puVar11 = *(uint **)this;
    }
  }
  do {
    uVar10 = *puVar11;
    uVar18 = puVar11[2];
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar28 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if (uVar28 <= (uint)uVar27) {
      uVar27 = 1;
    }
    iVar29 = uVar28 * uVar23;
    uVar28 = puVar11[3];
    uVar28 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
    uVar4 = *(ushort *)((long)puVar11 + (ulong)(uint)(iVar29 + (int)uVar27) * 2 + (ulong)uVar18);
    puVar12 = (ushort *)
              ((long)puVar11 + (ulong)(ushort)(uVar4 << 8 | uVar4 >> 8) * 4 + (ulong)uVar28);
    uVar4 = puVar12[1];
    uVar35 = *puVar12 << 8 | *puVar12 >> 8;
    uVar19 = (byte)(uVar4 >> 8) & 0xffff000f;
    if (((uVar4 & 0xf00) == 0) || (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4))) {
      if ((uVar23 != 0) && (((uVar4 & 0x40) == 0 || (uVar35 != 0)))) {
        uVar5 = *(ushort *)((long)puVar11 + uVar27 * 2 + (ulong)uVar18);
        puVar1 = (ushort *)
                 ((long)puVar11 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) * 4 + (ulong)uVar28);
        uVar5 = puVar1[1];
        if ((((uVar5 & 0xf00) != 0) && (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8))) ||
           ((uVar6 = *puVar1, uVar35 != (ushort)(uVar6 << 8 | uVar6 >> 8) ||
            (((uVar4 ^ uVar5) & 0x40) != 0)))) goto LAB_00114866;
      }
      uVar5 = *(ushort *)((long)puVar11 + (ulong)(iVar29 + (uint)(uVar10 == 0)) * 2 + (ulong)uVar18)
      ;
      if (((*(byte *)((long)puVar11 +
                     (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) * 4 + (ulong)uVar28 + 3) & 0xf) != 0)
         && (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8))) goto LAB_00114866;
    }
    else {
LAB_00114866:
      uVar10 = uVar31;
      if (this_00[0x5a] != (hb_buffer_t)0x0) {
        uVar10 = *(uint *)(this_00 + 100);
      }
      if ((uVar10 != 0) && (uVar31 < *(uint *)(this_00 + 0x60))) {
        hb_buffer_t::_set_glyph_flags(this_00,3,uVar10 - 1,uVar31 + 1,true,true);
        uVar31 = *(uint *)(this_00 + 0x5c);
      }
    }
    if ((short)(uVar4 << 8 | uVar4 >> 8) < 0) {
      *(uint *)(param_1 + 4) = uVar31;
    }
    if ((uVar4 << 8 & 0x2000) != 0) {
      uVar10 = uVar31 + 1;
      if (*(uint *)(this_00 + 0x60) < uVar31 + 1) {
        uVar10 = *(uint *)(this_00 + 0x60);
      }
      *(uint *)(param_1 + 8) = uVar10;
    }
    if ((short)uVar19 != 0) {
      uVar10 = *(uint *)(param_1 + 4);
      uVar23 = *(uint *)(param_1 + 8);
      if (uVar10 < uVar23) {
        local_58 = __LC16;
        uStack_50 = _UNK_00116fb8;
        bVar3 = *(byte *)((long)&local_58 + (ulong)uVar19);
        uVar18 = (uint)(bVar3 >> 4);
        uVar28 = 2;
        if (uVar18 < 3) {
          uVar28 = uVar18;
        }
        bVar17 = 2;
        if ((bVar3 & 0xe) == 0) {
          bVar17 = bVar3 & 0xf;
        }
        uVar34 = (uint)bVar17;
        uVar19 = uVar23 - uVar10;
        if ((uVar28 + uVar34 <= uVar19) && (uVar19 < 0x41)) {
          uVar20 = *(uint *)(this_00 + 0x60);
          if (uVar31 + 1 <= *(uint *)(this_00 + 0x60)) {
            uVar20 = uVar31 + 1;
          }
          if (1 < uVar20 - uVar10) {
            hb_buffer_t::merge_clusters_impl(uVar30,uVar10);
            uVar23 = *(uint *)(param_1 + 8);
            uVar10 = *(uint *)(param_1 + 4);
            uVar19 = uVar23 - uVar10;
          }
          if (1 < uVar19) {
            hb_buffer_t::merge_clusters_impl(uVar30,uVar10);
            uVar10 = *(uint *)(param_1 + 4);
            uVar23 = *(uint *)(param_1 + 8);
          }
          uVar27 = (ulong)uVar28;
          lVar26 = *(long *)(this_00 + 0x70);
          uVar13 = (ulong)uVar10;
          local_d8 = (undefined8 *)(lVar26 + uVar13 * 0x14);
          uVar14 = uVar27 * 0x14;
          uVar31 = (uint)uVar14;
          if (uVar27 * 5 != 0) {
            puVar32 = local_a8;
            puVar22 = local_d8;
            if (7 < uVar31) {
              uVar15 = 0;
              do {
                uVar19 = (int)uVar15 + 8;
                uVar21 = (ulong)uVar19;
                *(undefined8 *)((long)puVar32 + uVar15) = *(undefined8 *)((long)local_d8 + uVar15);
                uVar15 = uVar21;
              } while (uVar19 < (uVar31 & 0xfffffff8));
              puVar32 = (undefined8 *)((long)puVar32 + uVar21);
              puVar22 = (undefined8 *)(uVar21 + (long)local_d8);
            }
            if ((uVar14 & 4) != 0) {
              *(undefined4 *)puVar32 = *(undefined4 *)puVar22;
            }
          }
          uVar21 = (ulong)uVar23;
          uVar33 = (ulong)uVar34;
          uVar15 = uVar33 * 0x14;
          puVar2 = (undefined4 *)(lVar26 + (uVar21 - uVar33) * 0x14);
          if (uVar33 * 5 == 0) {
            if (uVar28 != uVar34) {
              memmove((void *)(lVar26 + (uVar13 + uVar33) * 0x14),
                      (void *)(lVar26 + (uVar27 + uVar13) * 0x14),
                      (ulong)(((uVar23 - uVar28) - uVar34) - uVar10) * 0x14);
              uVar21 = (ulong)*(uint *)(param_1 + 8);
            }
          }
          else {
            uVar19 = (uint)uVar15;
            if (uVar19 < 8) {
              if ((uVar15 & 4) == 0) {
                if (uVar19 != 0) {
                  local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)puVar2);
                }
              }
              else {
                local_80 = *puVar2;
                *(undefined4 *)((long)&uStack_88 + uVar15 + 4) = puVar2[uVar33 * 5 + -1];
              }
            }
            else {
              *(undefined8 *)((long)&uStack_88 + uVar15) = *(undefined8 *)(puVar2 + uVar33 * 5 + -2)
              ;
              if (7 < uVar19 - 1) {
                local_b0[0] = uVar19 - 1 & 0xfffffff8;
                local_b0[1] = uVar23;
                uVar21 = 0;
                do {
                  uVar20 = (int)uVar21 + 8;
                  *(undefined8 *)((long)&local_80 + uVar21) = *(undefined8 *)((long)puVar2 + uVar21)
                  ;
                  uVar21 = (ulong)uVar20;
                  uVar23 = local_b0[1];
                } while (uVar20 < local_b0[0]);
              }
            }
            if (uVar28 != uVar34) {
              local_b0[0] = uVar18;
              memmove((void *)(lVar26 + (uVar13 + uVar33) * 0x14),
                      (void *)(lVar26 + (uVar27 + uVar13) * 0x14),
                      (ulong)(((uVar23 - uVar28) - uVar34) - uVar10) * 0x14);
              local_d8 = (undefined8 *)(lVar26 + (ulong)*(uint *)(param_1 + 4) * 0x14);
              uVar18 = local_b0[0];
            }
            if (uVar19 < 8) {
              if ((uVar15 & 4) == 0) {
                if (uVar19 != 0) {
                  *(undefined1 *)local_d8 = (undefined1)local_80;
                }
              }
              else {
                *(undefined4 *)local_d8 = local_80;
                *(undefined4 *)((long)local_d8 + (uVar15 - 4)) =
                     *(undefined4 *)((long)&uStack_88 + uVar15 + 4);
              }
            }
            else {
              *local_d8 = CONCAT44(uStack_7c,local_80);
              *(undefined8 *)((long)local_d8 + (uVar15 - 8)) =
                   *(undefined8 *)((long)&uStack_88 + uVar15);
              lVar16 = (long)local_d8 - ((ulong)(local_d8 + 1) & 0xfffffffffffffff8);
              uVar10 = (int)lVar16 + uVar19 & 0xfffffff8;
              if (7 < uVar10) {
                uVar23 = 0;
                do {
                  uVar13 = (ulong)uVar23;
                  uVar23 = uVar23 + 8;
                  *(undefined8 *)(((ulong)(local_d8 + 1) & 0xfffffffffffffff8) + uVar13) =
                       *(undefined8 *)((long)&local_80 + (uVar13 - lVar16));
                } while (uVar23 < uVar10);
              }
            }
            uVar21 = (ulong)*(uint *)(param_1 + 8);
          }
          puVar32 = (undefined8 *)(lVar26 + (uVar21 - uVar27) * 0x14);
          if (uVar14 != 0) {
            if (uVar31 < 8) {
              if ((uVar14 & 4) == 0) {
                if (uVar31 != 0) {
                  *(undefined1 *)puVar32 = (undefined1)local_a8[0];
                }
              }
              else {
                *(undefined4 *)puVar32 = (undefined4)local_a8[0];
                *(undefined4 *)((long)puVar32 + (uVar14 - 4)) =
                     *(undefined4 *)((long)local_a8 + (uVar14 - 4));
              }
            }
            else {
              *puVar32 = local_a8[0];
              *(undefined8 *)((long)puVar32 + (uVar14 - 8)) = *(undefined8 *)(local_b0 + uVar27 * 5)
              ;
              lVar16 = (long)puVar32 - ((ulong)(puVar32 + 1) & 0xfffffffffffffff8);
              uVar10 = (int)lVar16 + uVar31 & 0xfffffff8;
              if (7 < uVar10) {
                uVar31 = 0;
                do {
                  uVar27 = (ulong)uVar31;
                  uVar31 = uVar31 + 8;
                  *(undefined8 *)(((ulong)(puVar32 + 1) & 0xfffffffffffffff8) + uVar27) =
                       *(undefined8 *)((long)local_a8 + (uVar27 - lVar16));
                } while (uVar31 < uVar10);
              }
            }
          }
          if (uVar18 == 3) {
            puVar32 = (undefined8 *)(lVar26 + (ulong)(*(int *)(param_1 + 8) - 2) * 0x14);
            puVar22 = (undefined8 *)(lVar26 + (ulong)(*(int *)(param_1 + 8) - 1) * 0x14);
            uVar7 = puVar32[1];
            local_a8[0] = *puVar22;
            local_a8[1] = puVar22[1];
            local_98 = *(undefined4 *)(puVar22 + 2);
            *puVar22 = *puVar32;
            puVar22[1] = uVar7;
            *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar32 + 2);
            puVar32 = (undefined8 *)(lVar26 + (ulong)(*(int *)(param_1 + 8) - 2) * 0x14);
            *(undefined4 *)(puVar32 + 2) = local_98;
            *puVar32 = local_a8[0];
            puVar32[1] = local_a8[1];
          }
          if ((bVar3 & 0xf) == 3) {
            puVar32 = (undefined8 *)(lVar26 + (ulong)*(uint *)(param_1 + 4) * 0x14);
            local_a8[0] = *puVar32;
            local_a8[1] = puVar32[1];
            local_98 = *(undefined4 *)(puVar32 + 2);
            puVar22 = (undefined8 *)(lVar26 + (ulong)(*(uint *)(param_1 + 4) + 1) * 0x14);
            uVar7 = puVar22[1];
            *puVar32 = *puVar22;
            puVar32[1] = uVar7;
            *(undefined4 *)(puVar32 + 2) = *(undefined4 *)(puVar22 + 2);
            puVar32 = (undefined8 *)(lVar26 + (ulong)(*(int *)(param_1 + 4) + 1) * 0x14);
            *(undefined4 *)(puVar32 + 2) = local_98;
            *puVar32 = local_a8[0];
            puVar32[1] = local_a8[1];
          }
          uVar31 = *(uint *)(this_00 + 0x5c);
        }
      }
    }
    if ((*(uint *)(this_00 + 0x60) == uVar31) || (this_00[0x58] == (hb_buffer_t)0x0))
    goto LAB_00114b78;
    uVar23 = (uint)uVar35;
    if (((puVar12[1] & 0x40) == 0) ||
       (iVar29 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar29 + -1, iVar29 < 1)) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        *(uint *)(this_00 + 0x5c) = uVar31 + 1;
        goto LAB_00114968;
      }
      if ((*(long *)(this_00 + 0x78) == *(long *)(this_00 + 0x70)) &&
         (uVar31 == *(uint *)(this_00 + 100))) {
        *(uint *)(this_00 + 100) = uVar31 + 1;
        *(uint *)(this_00 + 0x5c) = uVar31 + 1;
        goto LAB_00114968;
      }
      cVar8 = hb_buffer_t::make_room_for(uVar30,1);
      if (cVar8 == '\0') {
        hVar9 = this_00[0x58];
      }
      else {
        puVar32 = (undefined8 *)(*(long *)(this_00 + 0x78) + (ulong)*(uint *)(this_00 + 100) * 0x14)
        ;
        puVar22 = (undefined8 *)
                  (*(long *)(this_00 + 0x70) + (ulong)*(uint *)(this_00 + 0x5c) * 0x14);
        uVar7 = puVar22[1];
        *puVar32 = *puVar22;
        puVar32[1] = uVar7;
        *(undefined4 *)(puVar32 + 2) = *(undefined4 *)(puVar22 + 2);
        hVar9 = this_00[0x58];
        *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
      }
      if (hVar9 == (hb_buffer_t)0x0) goto LAB_00114b78;
LAB_00114afb:
      uVar10 = *(uint *)(this_00 + 0x60);
    }
    else {
LAB_00114968:
      uVar10 = *(uint *)(this_00 + 0x60);
    }
LAB_0011496f:
    uVar31 = *(uint *)(this_00 + 0x5c);
    puVar25 = puVar24;
    if (puVar24 != (uint *)0x0) goto LAB_00114700;
LAB_0011497c:
    if (uVar31 < uVar10) break;
LAB_00114e90:
    uVar27 = 0;
    puVar11 = *(uint **)this;
    puVar24 = puVar25;
  } while( true );
  lVar26 = *(long *)(this_00 + 0x70);
  uVar27 = (ulong)uVar31;
  goto LAB_00114788;
}



/* AAT::Chain<AAT::ExtendedTypes>::apply(AAT::hb_aat_apply_context_t*,
   AAT::hb_aat_layout_chain_accelerator_t const*) const */

void __thiscall
AAT::Chain<AAT::ExtendedTypes>::apply
          (Chain<AAT::ExtendedTypes> *this,hb_aat_apply_context_t *param_1,
          hb_aat_layout_chain_accelerator_t *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  GDEF *this_00;
  long lVar7;
  ulong uVar8;
  char cVar9;
  undefined2 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  ushort *puVar13;
  hb_buffer_t *phVar14;
  ulong *puVar15;
  int iVar16;
  uint uVar17;
  ulong *puVar18;
  ushort uVar19;
  uint uVar20;
  byte bVar21;
  uint *puVar22;
  Chain<AAT::ExtendedTypes> *pCVar23;
  uint uVar24;
  uint *puVar25;
  hb_aat_layout_chain_accelerator_t *phVar26;
  long in_FS_OFFSET;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_1c8;
  uint local_1c0;
  Chain<AAT::ExtendedTypes> *local_1b8;
  hb_aat_apply_context_t *local_1b0;
  short *psStack_1a8;
  Chain<AAT::ExtendedTypes> *local_1a0;
  Chain<AAT::ExtendedTypes> *local_198;
  Chain<AAT::ExtendedTypes> *local_190;
  uint local_17e;
  undefined2 local_17a;
  ulong local_178;
  hb_aat_apply_context_t *phStack_170;
  Chain<AAT::ExtendedTypes> *local_168;
  Chain<AAT::ExtendedTypes> *local_160;
  Chain<AAT::ExtendedTypes> *local_158;
  Chain<AAT::ExtendedTypes> *local_150;
  undefined4 local_148;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(this + 8);
  pCVar23 = this + (ulong)((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                           uVar3 << 0x18) * 0xc) + 0x10;
  uVar3 = *(uint *)(this + 0xc);
  if (uVar3 == 0) {
LAB_00115573:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar24 = 0;
  iVar16 = *(int *)(param_1 + 0xe4);
  phVar26 = param_2;
LAB_00115178:
  iVar4 = *(int *)(*(long *)(param_1 + 0x78) + 4);
  puVar11 = *(uint **)(*(long *)(param_1 + 0x78) + 8);
  if (iVar4 != 0) {
    uVar20 = *(uint *)(pCVar23 + 8);
    puVar25 = puVar11 + (ulong)(iVar4 - 1) * 3 + 3;
    uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    do {
      if ((uVar20 & *puVar11) != 0) {
        *(uint *)(param_1 + 0xe0) = uVar20;
        uVar31 = 0xffffffff;
        uVar28 = 0xffffffff;
        uVar29 = 0xffffffff;
        uVar30 = 0xffffffff;
        uVar12 = 0xffffffffffffffff;
        if (param_2 != (hb_aat_layout_chain_accelerator_t *)0x0) {
          uVar12 = *(undefined8 *)(phVar26 + 0x10);
          uVar28 = *(undefined4 *)phVar26;
          uVar29 = *(undefined4 *)(phVar26 + 4);
          uVar30 = *(undefined4 *)(phVar26 + 8);
          uVar31 = *(undefined4 *)(phVar26 + 0xc);
        }
        *(undefined8 *)(param_1 + 0xa8) = uVar12;
        phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x98) = uVar28;
        *(undefined4 *)(param_1 + 0x9c) = uVar29;
        *(undefined4 *)(param_1 + 0xa0) = uVar30;
        *(undefined4 *)(param_1 + 0xa4) = uVar31;
        uVar20 = *(uint *)(pCVar23 + 4);
        if (((uVar20 & 0x20) != 0) ||
           (((*(uint *)(phVar14 + 0x38) & 0xfffffffe) == 6) == (bool)-((char)uVar20 >> 7))) {
          bVar21 = (byte)(uVar20 >> 6) & 1;
          if ((uVar20 & 0x10) == 0) {
            bVar21 = bVar21 ^ (*(uint *)(phVar14 + 0x38) & 0xfffffffd) == 5;
          }
          cVar9 = hb_buffer_t::message
                            (phVar14,*(hb_font_t **)(param_1 + 0x10),"start chainsubtable %u");
          if (cVar9 == '\0') goto LAB_00115544;
          if (bVar21 == 0) {
            switch(pCVar23[7]) {
            case (Chain<AAT::ExtendedTypes>)0x0:
              goto switchD_0011526c_caseD_0;
            case (Chain<AAT::ExtendedTypes>)0x1:
              goto switchD_0011526c_caseD_1;
            case (Chain<AAT::ExtendedTypes>)0x2:
              goto switchD_0011526c_caseD_2;
            default:
              goto switchD_0011526c_caseD_3;
            case (Chain<AAT::ExtendedTypes>)0x4:
              goto switchD_0011526c_caseD_4;
            case (Chain<AAT::ExtendedTypes>)0x5:
              goto switchD_0011526c_caseD_5;
            }
          }
          lVar7 = *(long *)(param_1 + 0x20);
          uVar20 = *(uint *)(lVar7 + 0x60);
          if (1 < uVar20) {
            uVar17 = 0;
            puVar15 = *(ulong **)(lVar7 + 0x70);
            puVar18 = (ulong *)((long)*(ulong **)(lVar7 + 0x70) + (ulong)(uVar20 - 1) * 0x14);
            do {
              uVar6 = puVar15[1];
              uVar8 = puVar18[2];
              uVar17 = uVar17 + 1;
              local_178 = *puVar18;
              phStack_170 = (hb_aat_apply_context_t *)puVar18[1];
              *puVar18 = *puVar15;
              puVar18[1] = uVar6;
              local_168 = (Chain<AAT::ExtendedTypes> *)CONCAT44(local_168._4_4_,(int)uVar8);
              *(int *)(puVar18 + 2) = (int)puVar15[2];
              *(int *)(puVar15 + 2) = (int)uVar8;
              *puVar15 = local_178;
              puVar15[1] = (ulong)phStack_170;
              puVar15 = (ulong *)((long)puVar15 + 0x14);
              puVar18 = (ulong *)((long)puVar18 + -0x14);
            } while (uVar17 < (uVar20 - 1) - uVar17);
            if (*(char *)(lVar7 + 0x5b) != '\0') {
              if (*(uint *)(lVar7 + 0x60) < uVar20) {
                uVar20 = *(uint *)(lVar7 + 0x60);
              }
              if (1 < uVar20) {
                uVar17 = 0;
                puVar15 = *(ulong **)(lVar7 + 0x80);
                puVar18 = (ulong *)((long)*(ulong **)(lVar7 + 0x80) + (ulong)(uVar20 - 1) * 0x14);
                do {
                  uVar6 = puVar15[1];
                  uVar8 = puVar18[2];
                  uVar17 = uVar17 + 1;
                  local_178 = *puVar18;
                  phStack_170 = (hb_aat_apply_context_t *)puVar18[1];
                  *puVar18 = *puVar15;
                  puVar18[1] = uVar6;
                  local_168 = (Chain<AAT::ExtendedTypes> *)CONCAT44(local_168._4_4_,(int)uVar8);
                  *(int *)(puVar18 + 2) = (int)puVar15[2];
                  *(int *)(puVar15 + 2) = (int)uVar8;
                  *puVar15 = local_178;
                  puVar15[1] = (ulong)phStack_170;
                  puVar15 = (ulong *)((long)puVar15 + 0x14);
                  puVar18 = (ulong *)((long)puVar18 + -0x14);
                } while (uVar17 < (uVar20 - 1) - uVar17);
              }
            }
          }
          goto LAB_001158c4;
        }
        break;
      }
      puVar11 = puVar11 + 3;
    } while (puVar25 != puVar11);
  }
  goto LAB_0011554a;
LAB_001158c4:
  switch(pCVar23[7]) {
  case (Chain<AAT::ExtendedTypes>)0x0:
switchD_0011526c_caseD_0:
    local_1b8 = pCVar23 + 0xc;
    local_1c8 = (Chain<AAT::ExtendedTypes> *)0x0;
    local_1c0 = 0;
    iVar16 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    if (iVar16 == -1) {
      iVar16 = hb_face_t::load_num_glyphs();
    }
    local_1b0 = (hb_aat_apply_context_t *)CONCAT44(local_1b0._4_4_,iVar16);
    uVar20 = *(uint *)(local_1b8 + 8);
    uVar17 = *(uint *)(local_1b8 + 0xc);
    if ((((*(uint *)(local_1b8 +
                    (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                           uVar17 << 0x18) +
                    (ulong)(ushort)(*(ushort *)
                                     (local_1b8 +
                                     (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                             (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) << 8 |
                                   *(ushort *)
                                    (local_1b8 +
                                    (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                            (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) >> 8) * 4)
          & 0xf000000) != 0) && (local_1c8._4_4_ < local_1c0)) ||
       (((short)*(uint *)(local_1b8 +
                         (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                | uVar17 << 0x18) +
                         (ulong)(ushort)(*(ushort *)
                                          (local_1b8 +
                                          (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                                  (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) << 8
                                        | *(ushort *)
                                           (local_1b8 +
                                           (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                                   (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) >>
                                          8) * 4) != 0 ||
        ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
          ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
         ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))))) {
      StateTableDriver<AAT::ExtendedTypes,void>::
      drive<AAT::RearrangementSubtable<AAT::ExtendedTypes>::driver_context_t>
                ((StateTableDriver<AAT::ExtendedTypes,void> *)&local_1b8,
                 (driver_context_t *)&local_1c8,param_1);
    }
    break;
  case (Chain<AAT::ExtendedTypes>)0x1:
switchD_0011526c_caseD_1:
    psStack_1a8 = *(short **)(param_1 + 0x70);
    bVar27 = false;
    local_1b8 = (Chain<AAT::ExtendedTypes> *)((ulong)local_1b8._1_7_ << 8);
    local_1c8 = pCVar23 + 0xc;
    if (*psStack_1a8 == 0x100) {
      bVar27 = psStack_1a8[2] != 0;
    }
    uVar20 = *(uint *)(pCVar23 + 0x1c);
    local_1a0 = (Chain<AAT::ExtendedTypes> *)
                (((ulong)CONCAT61(local_1a0._2_6_,bVar27) & 0xffffff) << 8);
    local_190 = local_1c8 +
                (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
                );
    uVar20 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    local_1b0 = param_1;
    local_198 = local_1c8;
    if (uVar20 == 0xffffffff) {
      uVar20 = hb_face_t::load_num_glyphs();
    }
    phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
    uVar17 = *(uint *)(local_1c8 + 8);
    uVar5 = *(uint *)(local_1c8 + 0xc);
    uVar12 = *(undefined8 *)
              (local_1c8 +
              (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18) +
              (ulong)(ushort)(*(ushort *)
                               (local_1c8 +
                               (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                       (uVar17 & 0xff00) << 8 | uVar17 << 0x18) + 2) << 8 |
                             *(ushort *)
                              (local_1c8 +
                              (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                      (uVar17 & 0xff00) << 8 | uVar17 << 0x18) + 2) >> 8) * 8);
    local_1c0 = uVar20;
    if (((((*(int *)(phVar14 + 0x5c) != *(int *)(phVar14 + 0x60)) || ((char)local_1a0 != '\0')) &&
         ((ushort)((ushort)((ulong)uVar12 >> 0x20) & (ushort)((ulong)uVar12 >> 0x30)) != 0xffff)) ||
        ((short)uVar12 != 0)) ||
       ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
         ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
        ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))) {
      StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::
      drive<AAT::ContextualSubtable<AAT::ExtendedTypes>::driver_context_t>
                ((StateTableDriver<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
                  *)&local_1c8,(driver_context_t *)&local_1b8,param_1);
      phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
    }
    goto LAB_001154a4;
  case (Chain<AAT::ExtendedTypes>)0x2:
switchD_0011526c_caseD_2:
    uVar20 = *(uint *)(pCVar23 + 0x1c);
    local_1b8 = pCVar23 + 0xc;
    local_178 = local_178 & 0xffffffffffffff00;
    local_160 = local_1b8 +
                (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
                );
    uVar20 = *(uint *)(pCVar23 + 0x20);
    local_148 = 0;
    local_158 = local_1b8 +
                (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
                );
    uVar20 = *(uint *)(pCVar23 + 0x24);
    local_150 = local_1b8 +
                (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
                );
    iVar16 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    phStack_170 = param_1;
    local_168 = local_1b8;
    if (iVar16 == -1) {
      iVar16 = hb_face_t::load_num_glyphs();
    }
    local_1b0 = (hb_aat_apply_context_t *)CONCAT44(local_1b0._4_4_,iVar16);
    uVar20 = *(uint *)(local_1b8 + 8);
    uVar17 = *(uint *)(local_1b8 + 0xc);
    local_17e = *(uint *)(local_1b8 +
                         (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                | uVar17 << 0x18) +
                         (ulong)(ushort)(*(ushort *)
                                          (local_1b8 +
                                          (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                                  (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) << 8
                                        | *(ushort *)
                                           (local_1b8 +
                                           (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                                   (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) >>
                                          8) * 6);
    local_17a = *(undefined2 *)
                 (local_1b8 +
                  (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                         uVar17 << 0x18) +
                  (ulong)(ushort)(*(ushort *)
                                   (local_1b8 +
                                   (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                           (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) << 8 |
                                 *(ushort *)
                                  (local_1b8 +
                                  (ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                          (uVar20 & 0xff00) << 8 | uVar20 << 0x18) + 2) >> 8) * 6 +
                 4);
    if (((local_17e & 0x200000) != 0 || (short)local_17e != 0) ||
       ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
         ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
        ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))) {
      StateTableDriver<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData>::
      drive<AAT::LigatureSubtable<AAT::ExtendedTypes>::driver_context_t>
                ((StateTableDriver<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *)
                 &local_1b8,(driver_context_t *)&local_178,param_1);
    }
    break;
  default:
    phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
    goto LAB_001154a9;
  case (Chain<AAT::ExtendedTypes>)0x4:
switchD_0011526c_caseD_4:
    this_00 = *(GDEF **)(param_1 + 0x70);
    bVar27 = false;
    if (*(short *)this_00 == 0x100) {
      bVar27 = *(short *)(this_00 + 4) != 0;
    }
    uVar20 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    if (uVar20 == 0xffffffff) {
      uVar20 = hb_face_t::load_num_glyphs();
    }
    phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
    puVar11 = *(uint **)(param_1 + 0x78);
    puVar25 = *(uint **)(phVar14 + 0x70);
    if (puVar11 != (uint *)0x0) {
      if (puVar11[1] < 2) {
        puVar11 = (uint *)0x0;
      }
      else {
        puVar11 = *(uint **)(puVar11 + 2);
      }
    }
    if (*(uint *)(phVar14 + 0x60) == 0) goto LAB_0011551f;
    puVar1 = puVar25 + (ulong)*(uint *)(phVar14 + 0x60) * 5;
    do {
      if (puVar11 != (uint *)0x0) {
        while( true ) {
          uVar17 = puVar25[2];
          if (puVar11[1] <= uVar17) goto LAB_001153fc;
          do {
            puVar22 = puVar11;
            puVar11 = puVar22 + -3;
          } while (uVar17 < puVar22[-2]);
          uVar5 = puVar22[-1];
          while (uVar5 < uVar17) {
            puVar11 = puVar11 + 3;
LAB_001153fc:
            uVar5 = puVar11[2];
          }
          if ((*puVar11 & *(uint *)(param_1 + 0xe0)) != 0) break;
          puVar25 = puVar25 + 5;
          if (puVar25 == puVar1) goto LAB_001154a0;
        }
      }
      puVar13 = (ushort *)
                Lookup<OT::HBGlyphID16>::get_value
                          ((Lookup<OT::HBGlyphID16> *)(pCVar23 + 0xc),*puVar25,uVar20);
      if (puVar13 != (ushort *)0x0) {
        uVar2 = *puVar13;
        uVar19 = uVar2 << 8 | uVar2 >> 8;
        *puVar25 = (uint)uVar19;
        *(ulong *)(param_1 + 0x80) = *(ulong *)(param_1 + 0x80) | 1L << ((byte)(uVar19 >> 4) & 0x3f)
        ;
        *(ulong *)(param_1 + 0x88) = *(ulong *)(param_1 + 0x88) | 1L << ((byte)(uVar2 >> 8) & 0x3f);
        *(ulong *)(param_1 + 0x90) = *(ulong *)(param_1 + 0x90) | 1L << ((byte)uVar2 >> 1 & 0x3f);
        if (bVar27) {
          uVar10 = OT::GDEF::get_glyph_props(this_00,(uint)uVar19);
          *(undefined2 *)(puVar25 + 3) = uVar10;
        }
      }
      puVar25 = puVar25 + 5;
    } while (puVar25 != puVar1);
    break;
  case (Chain<AAT::ExtendedTypes>)0x5:
switchD_0011526c_caseD_5:
    uVar20 = *(uint *)(pCVar23 + 0x1c);
    local_1c8 = pCVar23 + 0xc;
    local_1b8 = (Chain<AAT::ExtendedTypes> *)((ulong)local_1b8._1_7_ << 8);
    local_1a0 = local_1c8 +
                (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
                );
    psStack_1a8 = (short *)((ulong)psStack_1a8 & 0xffffffff00000000);
    uVar20 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
    local_1b0 = param_1;
    if (uVar20 == 0xffffffff) {
      uVar20 = hb_face_t::load_num_glyphs();
    }
    uVar17 = *(uint *)(local_1c8 + 8);
    uVar5 = *(uint *)(local_1c8 + 0xc);
    uVar6 = *(ulong *)(local_1c8 +
                      (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18) +
                      (ulong)(ushort)(*(ushort *)
                                       (local_1c8 +
                                       (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                               (uVar17 & 0xff00) << 8 | uVar17 << 0x18) + 2) << 8 |
                                     *(ushort *)
                                      (local_1c8 +
                                      (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                              (uVar17 & 0xff00) << 8 | uVar17 << 0x18) + 2) >> 8) *
                      8);
    local_1c0 = uVar20;
    if (((((uVar6 & 0x30000) != 0 || (ushort)((ushort)(uVar6 >> 0x10) >> 8) != 0) &&
         ((ushort)((ushort)(uVar6 >> 0x20) & (ushort)(uVar6 >> 0x30)) != 0xffff)) ||
        ((short)uVar6 != 0)) ||
       ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
         ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
        ((*(ulong *)(param_1 + 0x90) & *(ulong *)(param_1 + 0xa8)) != 0)))) {
      StateTableDriver<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>::
      drive<AAT::InsertionSubtable<AAT::ExtendedTypes>::driver_context_t>
                ((StateTableDriver<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>
                  *)&local_1c8,(driver_context_t *)&local_1b8,param_1);
    }
  }
LAB_001154a0:
  phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
LAB_001154a4:
  if (bVar21 != 0) {
LAB_001154a9:
    uVar20 = *(uint *)(phVar14 + 0x60);
    if (1 < uVar20) {
      uVar17 = 0;
      puVar15 = (ulong *)((long)*(ulong **)(phVar14 + 0x70) + (ulong)(uVar20 - 1) * 0x14);
      puVar18 = *(ulong **)(phVar14 + 0x70);
      do {
        uVar6 = puVar18[1];
        uVar8 = puVar15[2];
        uVar17 = uVar17 + 1;
        local_178 = *puVar15;
        phStack_170 = (hb_aat_apply_context_t *)puVar15[1];
        *puVar15 = *puVar18;
        puVar15[1] = uVar6;
        local_168 = (Chain<AAT::ExtendedTypes> *)CONCAT44(local_168._4_4_,(int)uVar8);
        *(int *)(puVar15 + 2) = (int)puVar18[2];
        *(int *)(puVar18 + 2) = (int)uVar8;
        *puVar18 = local_178;
        puVar18[1] = (ulong)phStack_170;
        puVar15 = (ulong *)((long)puVar15 + -0x14);
        puVar18 = (ulong *)((long)puVar18 + 0x14);
      } while (uVar17 < (uVar20 - 1) - uVar17);
      if (phVar14[0x5b] != (hb_buffer_t)0x0) {
        uVar17 = *(uint *)(phVar14 + 0x60);
        if (uVar20 <= *(uint *)(phVar14 + 0x60)) {
          uVar17 = uVar20;
        }
        if (1 < uVar17) {
          uVar20 = 0;
          puVar15 = *(ulong **)(phVar14 + 0x80);
          puVar18 = (ulong *)((long)*(ulong **)(phVar14 + 0x80) + (ulong)(uVar17 - 1) * 0x14);
          do {
            uVar6 = puVar15[1];
            uVar8 = puVar18[2];
            uVar20 = uVar20 + 1;
            local_178 = *puVar18;
            phStack_170 = (hb_aat_apply_context_t *)puVar18[1];
            *puVar18 = *puVar15;
            puVar18[1] = uVar6;
            local_168 = (Chain<AAT::ExtendedTypes> *)CONCAT44(local_168._4_4_,(int)uVar8);
            *(int *)(puVar18 + 2) = (int)puVar15[2];
            *(int *)(puVar15 + 2) = (int)uVar8;
            *puVar15 = local_178;
            puVar15[1] = (ulong)phStack_170;
            puVar15 = (ulong *)((long)puVar15 + 0x14);
            puVar18 = (ulong *)((long)puVar18 + -0x14);
          } while (uVar20 < (uVar17 - 1) - uVar20);
        }
      }
switchD_0011526c_caseD_3:
      phVar14 = *(hb_buffer_t **)(param_1 + 0x20);
    }
  }
LAB_0011551f:
  hb_buffer_t::message
            (phVar14,*(hb_font_t **)(param_1 + 0x10),"end chainsubtable %u",
             (ulong)*(uint *)(param_1 + 0xe4));
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == '\0') goto LAB_00115573;
LAB_00115544:
  iVar16 = *(int *)(param_1 + 0xe4);
LAB_0011554a:
  uVar20 = *(uint *)pCVar23;
  iVar16 = iVar16 + 1;
  uVar24 = uVar24 + 1;
  phVar26 = phVar26 + 0x18;
  *(int *)(param_1 + 0xe4) = iVar16;
  pCVar23 = pCVar23 + (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                      uVar20 << 0x18);
  if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <= uVar24)
  goto LAB_00115573;
  goto LAB_00115178;
}



/* AAT::mortmorx<AAT::morx, AAT::ExtendedTypes, 1836020344u>::apply(AAT::hb_aat_apply_context_t*,
   hb_aat_map_t const&, AAT::mortmorx<AAT::morx, AAT::ExtendedTypes, 1836020344u>::accelerator_t
   const&) const */

void __thiscall
AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::apply
          (mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u> *this,hb_aat_apply_context_t *param_1,
          hb_aat_map_t *param_2,accelerator_t *param_3)

{
  uint *puVar1;
  hb_aat_layout_chain_accelerator_t *phVar2;
  long *plVar3;
  Chain<AAT::ExtendedTypes> CVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  hb_buffer_t *this_00;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  hb_aat_layout_chain_accelerator_t *__ptr;
  Chain<AAT::ExtendedTypes> *this_01;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  Chain<AAT::ExtendedTypes> *pCVar17;
  uint uVar18;
  bool bVar19;
  
  this_00 = *(hb_buffer_t **)(param_1 + 0x20);
  if (this_00[0x58] != (hb_buffer_t)0x0) {
    if (((byte)this_00[0x18] & 0x40) != 0) {
      hb_buffer_t::_set_glyph_flags(this_00,2,0,0xffffffff,false,false);
    }
    uVar5 = *(uint *)(this_00 + 0x60);
    if (uVar5 < 0x20) {
      puVar10 = *(uint **)(this_00 + 0x70);
      if (uVar5 == 0) {
        uVar16 = 0;
        uVar15 = 0;
        uVar11 = 0;
      }
      else {
        uVar16 = 0;
        puVar1 = puVar10 + (ulong)uVar5 * 5;
        puVar12 = puVar10;
        do {
          uVar5 = *puVar12;
          puVar12 = puVar12 + 5;
          uVar16 = uVar16 | 1L << ((byte)(uVar5 >> 4) & 0x3f);
        } while (puVar12 != puVar1);
        uVar15 = 0;
        puVar12 = puVar10;
        do {
          uVar5 = *puVar12;
          puVar12 = puVar12 + 5;
          uVar15 = uVar15 | 1L << ((byte)uVar5 & 0x3f);
        } while (puVar12 != puVar1);
        uVar11 = 0;
        do {
          uVar5 = *puVar10;
          puVar10 = puVar10 + 5;
          uVar11 = uVar11 | 1L << ((byte)(uVar5 >> 9) & 0x3f);
        } while (puVar10 != puVar1);
      }
      *(ulong *)(param_1 + 0x80) = uVar16;
    }
    else {
      uVar15 = 0xffffffffffffffff;
      uVar11 = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
    }
    uVar5 = *(uint *)(this + 4);
    this_01 = (Chain<AAT::ExtendedTypes> *)(this + 8);
    *(ulong *)(param_1 + 0x88) = uVar15;
    *(ulong *)(param_1 + 0x90) = uVar11;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (uVar5 != 0) {
      lVar14 = 0;
      do {
        uVar8 = *(uint *)(*(long *)(param_1 + 0x18) + 0x18);
        uVar13 = (uint)lVar14;
        if (uVar8 == 0xffffffff) {
          uVar8 = hb_face_t::load_num_glyphs();
          if (*(uint *)(param_3 + 8) <= uVar13) goto LAB_00115c63;
LAB_00115bbd:
          while (__ptr = *(hb_aat_layout_chain_accelerator_t **)
                          (*(long *)(param_3 + 0x10) + lVar14 * 8),
                __ptr == (hb_aat_layout_chain_accelerator_t *)0x0) {
            uVar6 = *(uint *)(this_01 + 0xc);
            __ptr = (hb_aat_layout_chain_accelerator_t *)
                    calloc(1,(ulong)((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                      (uVar6 & 0xff00) << 8 | uVar6 << 0x18) * 0x18));
            if (__ptr == (hb_aat_layout_chain_accelerator_t *)0x0) {
              __ptr = (hb_aat_layout_chain_accelerator_t *)0x0;
              break;
            }
            uVar6 = *(uint *)(this_01 + 8);
            uVar7 = *(uint *)(this_01 + 0xc);
            uVar11 = 0;
            uVar18 = 0;
            pCVar17 = this_01 + (ulong)((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                         (uVar6 & 0xff00) << 8 | uVar6 << 0x18) * 0xc) + 0x10;
            if (uVar7 != 0) {
              do {
                CVar4 = pCVar17[7];
                if (CVar4 == (Chain<AAT::ExtendedTypes>)0x4) {
                  phVar2 = __ptr + uVar11 * 0x18;
                  *(undefined8 *)(phVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined4 *)phVar2 = 0xffffffff;
                  *(undefined4 *)(phVar2 + 4) = 0xffffffff;
                  *(undefined4 *)(phVar2 + 8) = 0xffffffff;
                  *(undefined4 *)(phVar2 + 0xc) = 0xffffffff;
                  uVar11 = (ulong)((int)uVar11 + 1);
                }
                else if ((byte)CVar4 < 5) {
                  if (CVar4 != (Chain<AAT::ExtendedTypes>)0x3) goto LAB_00115dc5;
                }
                else if (CVar4 == (Chain<AAT::ExtendedTypes>)0x5) {
LAB_00115dc5:
                  uVar6 = *(uint *)(pCVar17 + 0x10);
                  Lookup<OT::IntType<unsigned_short,2u>>::
                  collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                            ((Lookup<OT::IntType<unsigned_short,2u>> *)
                             (pCVar17 +
                             (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                    | uVar6 << 0x18) + 0xc),
                             (hb_set_digest_combiner_t *)(__ptr + uVar11 * 0x18),uVar8);
                  uVar11 = (ulong)((int)uVar11 + 1);
                }
                uVar6 = *(uint *)pCVar17;
                uVar18 = uVar18 + 1;
                pCVar17 = pCVar17 + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                    | uVar6 << 0x18);
              } while (uVar18 < (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                                uVar7 << 0x18));
            }
            plVar3 = (long *)(*(long *)(param_3 + 0x10) + lVar14 * 8);
            LOCK();
            bVar19 = *plVar3 == 0;
            if (bVar19) {
              *plVar3 = (long)__ptr;
            }
            UNLOCK();
            if (bVar19) break;
            free(__ptr);
          }
        }
        else {
          if (uVar13 < *(uint *)(param_3 + 8)) goto LAB_00115bbd;
LAB_00115c63:
          __ptr = (hb_aat_layout_chain_accelerator_t *)0x0;
        }
        puVar9 = &_hb_NullPool;
        if (uVar13 < *(uint *)(param_2 + 4)) {
          puVar9 = (undefined *)(lVar14 * 0x10 + *(long *)(param_2 + 8));
        }
        *(undefined **)(param_1 + 0x78) = puVar9;
        Chain<AAT::ExtendedTypes>::apply(this_01,param_1,__ptr);
        if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == '\0') {
          return;
        }
        lVar14 = lVar14 + 1;
        uVar8 = *(uint *)(this_01 + 4);
        this_01 = this_01 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18);
      } while ((uint)lVar14 <
               (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18));
    }
  }
  return;
}



/* AAT::StateTable<AAT::ExtendedTypes, void>::sanitize(hb_sanitize_context_t*, unsigned int*) const
    */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,void>::sanitize
          (StateTable<AAT::ExtendedTypes,void> *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,void> *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  StateTable<AAT::ExtendedTypes,void> *pSVar10;
  StateTable<AAT::ExtendedTypes,void> *pSVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,void> *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,void> *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar11 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar12 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar9 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar9 < 1) {
LAB_001160b5:
            *(int *)(param_1 + 0x1c) = iVar9;
            return '\0';
          }
          iVar9 = iVar9 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar8 = uVar12;
          for (pSVar10 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar8,
              pSVar10 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar10 = pSVar10 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar8 = (ulong)uVar6;
            }
          }
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar11 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar11) < uVar5 * 4) {
            return '\0';
          }
          iVar9 = iVar9 + uVar5 * -4;
          if (iVar9 < 1) goto LAB_001160b5;
          iVar9 = ((int)uVar12 - uVar5) + iVar9;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          for (pSVar10 = pSVar11 + uVar12 * 4; pSVar10 < pSVar11 + uVar8 * 4; pSVar10 = pSVar10 + 4)
          {
            uVar4 = *(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar12 = uVar8;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* AAT::StateTable<AAT::ExtendedTypes,
   AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::sanitize(hb_sanitize_context_t*,
   unsigned int*) const */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::sanitize
          (StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
           *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> *pSVar10;
  StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> *pSVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData> *)
      (ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar11 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar12 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar9 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar9 < 1) {
LAB_001162b5:
            *(int *)(param_1 + 0x1c) = iVar9;
            return '\0';
          }
          iVar9 = iVar9 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar8 = uVar12;
          for (pSVar10 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar8,
              pSVar10 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar10 = pSVar10 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar8 = (ulong)uVar6;
            }
          }
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar11 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar11) < uVar5 * 8) {
            return '\0';
          }
          iVar9 = iVar9 + uVar5 * -8;
          if (iVar9 < 1) goto LAB_001162b5;
          iVar9 = ((int)uVar12 - uVar5) + iVar9;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          for (pSVar10 = pSVar11 + uVar12 * 8; pSVar10 < pSVar11 + uVar8 * 8; pSVar10 = pSVar10 + 8)
          {
            uVar4 = *(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar12 = uVar8;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* AAT::ContextualSubtable<AAT::ExtendedTypes>::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall
AAT::ContextualSubtable<AAT::ExtendedTypes>::sanitize
          (ContextualSubtable<AAT::ExtendedTypes> *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ContextualSubtable<AAT::ExtendedTypes> *pCVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ContextualSubtable<AAT::ExtendedTypes> *pCVar10;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  uVar2 = StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>::
          sanitize((StateTable<AAT::ExtendedTypes,AAT::ContextualSubtable<AAT::ExtendedTypes>::EntryData>
                    *)this,param_1,&local_34);
  if ((char)uVar2 != '\0') {
    uVar8 = *(uint *)(this + 0xc);
    uVar4 = (ulong)local_34;
    pCVar5 = this + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18
                    );
    if (local_34 != 0) {
      pCVar10 = pCVar5 + uVar4 * 8;
      uVar4 = 0;
      do {
        uVar6 = *(ushort *)(pCVar5 + 4) << 8 | *(ushort *)(pCVar5 + 4) >> 8;
        uVar8 = uVar6 + 1;
        uVar9 = (ulong)uVar8;
        if (uVar8 <= (uint)uVar4) {
          uVar9 = uVar4;
        }
        if (uVar6 != 0xffff) {
          uVar4 = uVar9;
        }
        uVar6 = *(ushort *)(pCVar5 + 6) << 8 | *(ushort *)(pCVar5 + 6) >> 8;
        uVar8 = uVar6 + 1;
        uVar9 = (ulong)uVar8;
        if (uVar8 <= (uint)uVar4) {
          uVar9 = uVar4;
        }
        if (uVar6 != 0xffff) {
          uVar4 = uVar9;
        }
        pCVar5 = pCVar5 + 8;
      } while (pCVar5 != pCVar10);
    }
    if (this + (0x14 - *(long *)(param_1 + 8)) <=
        (ContextualSubtable<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar3 = (uint)uVar4;
      uVar8 = *(uint *)(this + 0x10);
      if ((((uVar3 >> 0x1e == 0) &&
           (pCVar5 = this + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18),
           (ulong)((long)pCVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
          (uVar3 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar5))) &&
         (iVar7 = *(int *)(param_1 + 0x1c) + uVar3 * -4, *(int *)(param_1 + 0x1c) = iVar7, 0 < iVar7
         )) {
        if (uVar3 != 0) {
          pCVar10 = pCVar5 + 4;
          do {
            if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar10 - *(long *)(param_1 + 8)))
            goto LAB_001163d1;
            uVar8 = *(uint *)(pCVar10 + -4);
            cVar1 = Lookup<OT::HBGlyphID16>::sanitize
                              ((Lookup<OT::HBGlyphID16> *)
                               (pCVar5 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 |
                                          (uVar8 & 0xff00) << 8 | uVar8 << 0x18)),param_1);
            if (cVar1 == '\0') goto LAB_001163d1;
            pCVar10 = pCVar10 + 4;
          } while (pCVar5 + uVar4 * 4 + 4 != pCVar10);
        }
        goto LAB_001163d3;
      }
    }
  }
LAB_001163d1:
  uVar2 = 0;
LAB_001163d3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AAT::StateTable<AAT::ExtendedTypes,
   AAT::LigatureEntry<true>::EntryData>::sanitize(hb_sanitize_context_t*, unsigned int*) const */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData>::sanitize
          (StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *this,
          hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *pSVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *pSVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData> *)
      (ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar12 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar11 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar10 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar10 < 1) {
LAB_0011662d:
            *(int *)(param_1 + 0x1c) = iVar10;
            return '\0';
          }
          iVar10 = iVar10 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar9 = uVar11;
          for (pSVar8 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar9,
              pSVar8 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar8 = pSVar8 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar9 = (ulong)uVar6;
            }
          }
          uVar6 = (uint)(uVar9 * 6);
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar12 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar12) < uVar6) {
            return '\0';
          }
          iVar10 = iVar10 - uVar6;
          if (iVar10 < 1) goto LAB_0011662d;
          iVar10 = iVar10 + ((int)uVar11 - uVar5);
          *(int *)(param_1 + 0x1c) = iVar10;
          if (iVar10 < 1) {
            return '\0';
          }
          for (pSVar8 = pSVar12 + uVar11 * 6; pSVar8 < pSVar12 + uVar9 * 6; pSVar8 = pSVar8 + 6) {
            uVar4 = *(ushort *)pSVar8 << 8 | *(ushort *)pSVar8 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar11 = uVar9;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* AAT::StateTable<AAT::ExtendedTypes,
   AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>::sanitize(hb_sanitize_context_t*, unsigned
   int*) const */

char __thiscall
AAT::StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>::sanitize
          (StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>
           *this,hb_sanitize_context_t *param_1,uint *param_2)

{
  StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData> *pSVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData> *pSVar10;
  StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData> *pSVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  if (((this + (0x10 - *(long *)(param_1 + 8)) <=
        (StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData> *)
        (ulong)*(uint *)(param_1 + 0x18)) &&
      (uVar14 = *(uint *)this,
      3 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18))) &&
     (this + (8 - *(long *)(param_1 + 8)) <=
      (StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData> *)
      (ulong)*(uint *)(param_1 + 0x18))) {
    uVar14 = *(uint *)(this + 4);
    cVar3 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                      ((Lookup<OT::IntType<unsigned_short,2u>> *)
                       (this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18)),param_1);
    if (cVar3 != '\0') {
      uVar14 = *(uint *)(this + 8);
      uVar7 = *(uint *)(this + 0xc);
      uVar6 = *(uint *)this;
      pSVar1 = this + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                      uVar14 << 0x18);
      pSVar11 = this + (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18);
      uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (-1 < (int)uVar14) {
        uVar7 = 0;
        uVar12 = 0;
        uVar6 = 0;
        while( true ) {
          uVar13 = uVar7 + 1;
          lVar2 = (ulong)(uVar14 * 2) * (ulong)uVar13;
          uVar5 = (uint)lVar2;
          if ((int)((ulong)lVar2 >> 0x20) != 0) break;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar1 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar1) < uVar5) {
            return '\0';
          }
          iVar9 = *(int *)(param_1 + 0x1c) - uVar5;
          if (iVar9 < 1) {
LAB_00116825:
            *(int *)(param_1 + 0x1c) = iVar9;
            return '\0';
          }
          iVar9 = iVar9 - ((uVar7 - uVar6) + 1);
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          if ((int)((ulong)uVar13 * (ulong)uVar14 >> 0x20) != 0) {
            return '\0';
          }
          if (pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2 < pSVar1) {
            return '\0';
          }
          uVar8 = uVar12;
          for (pSVar10 = pSVar1 + (ulong)(uVar6 * uVar14) * 2; uVar5 = (uint)uVar8,
              pSVar10 < pSVar1 + ((ulong)uVar13 * (ulong)uVar14 & 0xffffffff) * 2;
              pSVar10 = pSVar10 + 2) {
            uVar6 = (ushort)(*(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8) + 1;
            if (uVar5 < uVar6) {
              uVar8 = (ulong)uVar6;
            }
          }
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pSVar11 - *(long *)(param_1 + 8))) {
            return '\0';
          }
          if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pSVar11) < uVar5 * 8) {
            return '\0';
          }
          iVar9 = iVar9 + uVar5 * -8;
          if (iVar9 < 1) goto LAB_00116825;
          iVar9 = ((int)uVar12 - uVar5) + iVar9;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return '\0';
          }
          for (pSVar10 = pSVar11 + uVar12 * 8; pSVar10 < pSVar11 + uVar8 * 8; pSVar10 = pSVar10 + 8)
          {
            uVar4 = *(ushort *)pSVar10 << 8 | *(ushort *)pSVar10 >> 8;
            if (uVar7 < uVar4) {
              uVar7 = (uint)uVar4;
            }
          }
          uVar12 = uVar8;
          uVar6 = uVar13;
          if (uVar7 < uVar13) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar5;
              return cVar3;
            }
            return cVar3;
          }
        }
      }
    }
  }
  return '\0';
}



/* AAT::Chain<AAT::ExtendedTypes>::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined8 __thiscall
AAT::Chain<AAT::ExtendedTypes>::sanitize
          (Chain<AAT::ExtendedTypes> *this,hb_sanitize_context_t *param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  Chain<AAT::ExtendedTypes> *pCVar5;
  Chain<AAT::ExtendedTypes> *pCVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  if (this + (8 - *(long *)(param_1 + 8)) <=
      (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(this + 4);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (0xf < uVar3) {
      lVar7 = *(long *)(param_1 + 8);
      pCVar5 = (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18);
      if ((this + -lVar7 <= pCVar5) &&
         (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)this))) {
        iVar9 = *(int *)(param_1 + 0x1c) - uVar3;
        *(int *)(param_1 + 0x1c) = iVar9;
        if (0 < iVar9) {
          uVar3 = *(uint *)(this + 8);
          uVar8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          lVar1 = (ulong)uVar8 * 0xc;
          bVar11 = (int)((ulong)lVar1 >> 0x20) != 0;
          uVar3 = (uint)lVar1;
          uVar10 = (uint)bVar11;
          if ((((!bVar11) && (pCVar6 = this + 0x10, pCVar6 + -lVar7 <= pCVar5)) &&
              (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar6))) &&
             (iVar9 = iVar9 - uVar3, *(int *)(param_1 + 0x1c) = iVar9, 0 < iVar9)) {
            pCVar6 = pCVar6 + uVar8 * 0xc;
            uVar3 = *(uint *)(this + 0xc);
            uVar8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
            if (uVar3 == 0) {
LAB_00116aa0:
              if (param_2 < 3) {
                return 1;
              }
              bVar11 = (uVar3 << 0x18) >> 0x1e != 0;
              uVar10 = (uint)bVar11;
              if (((!bVar11) &&
                  ((ulong)((long)pCVar6 - *(long *)(param_1 + 8)) <=
                   (ulong)*(uint *)(param_1 + 0x18))) &&
                 ((uVar8 * 4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar6) &&
                  (iVar9 = *(int *)(param_1 + 0x1c) + uVar8 * -4, *(int *)(param_1 + 0x1c) = iVar9,
                  0 < iVar9)))) {
                uVar4 = *(int *)(param_1 + 0x38) + 7U >> 3;
                pCVar5 = pCVar6;
                if (uVar3 != 0) {
                  do {
                    uVar3 = *(uint *)pCVar5;
                    if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18) - 1 < 0xfffffffe) {
                      if ((ulong)*(uint *)(param_1 + 0x18) <
                          (ulong)((long)(pCVar5 + 4) - *(long *)(param_1 + 8))) {
                        return 0;
                      }
                      uVar3 = *(uint *)pCVar5;
                      if ((ulong)*(uint *)(param_1 + 0x18) <
                          (ulong)((long)(pCVar6 + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                                   (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) -
                                 *(long *)(param_1 + 8))) {
                        return 0;
                      }
                      if ((uint)((int)*(undefined8 *)(param_1 + 0x10) -
                                (int)(pCVar6 + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                                (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) < uVar4) {
                        return 0;
                      }
                      iVar9 = *(int *)(param_1 + 0x1c) - uVar4;
                      *(int *)(param_1 + 0x1c) = iVar9;
                      if (iVar9 < 1) {
                        return 0;
                      }
                    }
                    uVar10 = uVar10 + 1;
                    pCVar5 = pCVar5 + 4;
                  } while (uVar10 < uVar8);
                }
                return 1;
              }
            }
            else {
              while (pCVar6 + (4 - lVar7) <= pCVar5) {
                uVar4 = *(uint *)pCVar6;
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
                if (uVar4 < 0xc) {
                  return 0;
                }
                lVar7 = *(long *)(param_1 + 8);
                pCVar5 = (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18);
                if (pCVar5 < pCVar6 + -lVar7) {
                  return 0;
                }
                if ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pCVar6) < uVar4) {
                  return 0;
                }
                iVar9 = *(int *)(param_1 + 0x1c);
                *(uint *)(param_1 + 0x1c) = iVar9 - uVar4;
                if ((int)(iVar9 - uVar4) < 1) {
                  return 0;
                }
                switch(pCVar6[7]) {
                case (Chain<AAT::ExtendedTypes>)0x0:
                  cVar2 = StateTable<AAT::ExtendedTypes,void>::sanitize
                                    ((StateTable<AAT::ExtendedTypes,void> *)(pCVar6 + 0xc),param_1,
                                     (uint *)0x0);
                  break;
                case (Chain<AAT::ExtendedTypes>)0x1:
                  cVar2 = ContextualSubtable<AAT::ExtendedTypes>::sanitize
                                    ((ContextualSubtable<AAT::ExtendedTypes> *)(pCVar6 + 0xc),
                                     param_1);
                  break;
                case (Chain<AAT::ExtendedTypes>)0x2:
                  if (pCVar5 < pCVar6 + (0x28 - lVar7)) {
                    return 0;
                  }
                  cVar2 = StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData>::
                          sanitize((StateTable<AAT::ExtendedTypes,AAT::LigatureEntry<true>::EntryData>
                                    *)(pCVar6 + 0xc),param_1,(uint *)0x0);
                  if (cVar2 == '\0') {
                    return 0;
                  }
                  if (*(uint *)(pCVar6 + 0x1c) == 0) {
                    return 0;
                  }
                  if (*(uint *)(pCVar6 + 0x20) == 0) {
                    return 0;
                  }
                  uVar4 = *(uint *)(pCVar6 + 0x24);
                  goto joined_r0x001169eb;
                default:
                  goto switchD_001169b4_caseD_3;
                case (Chain<AAT::ExtendedTypes>)0x4:
                  cVar2 = Lookup<OT::HBGlyphID16>::sanitize
                                    ((Lookup<OT::HBGlyphID16> *)(pCVar6 + 0xc),param_1);
                  break;
                case (Chain<AAT::ExtendedTypes>)0x5:
                  if (pCVar5 < pCVar6 + (0x20 - lVar7)) {
                    return 0;
                  }
                  cVar2 = StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>
                          ::sanitize((StateTable<AAT::ExtendedTypes,AAT::InsertionSubtable<AAT::ExtendedTypes>::EntryData>
                                      *)(pCVar6 + 0xc),param_1,(uint *)0x0);
                  if (cVar2 == '\0') {
                    return 0;
                  }
                  uVar4 = *(uint *)(pCVar6 + 0x1c);
joined_r0x001169eb:
                  if (uVar4 == 0) {
                    return 0;
                  }
                  goto switchD_001169b4_caseD_3;
                }
                if (cVar2 == '\0') {
                  return 0;
                }
switchD_001169b4_caseD_3:
                uVar4 = *(uint *)pCVar6;
                uVar10 = uVar10 + 1;
                pCVar6 = pCVar6 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                  uVar4 << 0x18);
                if (uVar8 <= uVar10) goto LAB_00116aa0;
                pCVar5 = (Chain<AAT::ExtendedTypes> *)(ulong)*(uint *)(param_1 + 0x18);
                lVar7 = *(long *)(param_1 + 8);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* AAT::mortmorx<AAT::morx, AAT::ExtendedTypes,
   1836020344u>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  uint uVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  Chain<AAT::ExtendedTypes> *this_00;
  uint uVar12;
  long in_FS_OFFSET;
  Chain<AAT::ExtendedTypes> *local_98;
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
  puVar5 = (undefined *)hb_face_reference_table(param_1,0x6d6f7278);
  lVar6 = hb_blob_reference(puVar5);
  local_58 = lVar6;
  do {
    local_70 = *(uint *)(lVar6 + 0x18);
    puVar2 = *(ushort **)(lVar6 + 0x10);
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
    local_80._8_8_ = (long)puVar2 + (ulong)local_70;
    local_80._0_8_ = puVar2;
    local_5c = 0;
    local_88[0] = 0;
    local_64 = 0;
    if (puVar2 == (ushort *)0x0) {
      hb_blob_destroy(lVar6);
      local_58 = 0;
      local_70 = 0;
      local_80 = (undefined1  [16])0x0;
      goto LAB_00116da0;
    }
    if ((ulong)local_70 < 2) goto LAB_00116e43;
    uVar4 = *puVar2;
    if ((uVar4 != 0) &&
       (local_98 = (Chain<AAT::ExtendedTypes> *)(puVar2 + 4),
       (ulong)((long)local_98 - (long)puVar2) <= (ulong)local_70)) {
      uVar11 = *(uint *)(puVar2 + 2);
      if (uVar11 == 0) {
LAB_00116d60:
        if (local_5c == 0) goto LAB_00116d71;
        local_5c = 0;
        if ((ulong)local_70 < (ulong)((long)puVar2 + (2 - local_80._0_8_))) {
          hb_blob_destroy(local_58);
          goto LAB_00116e48;
        }
        uVar4 = *puVar2;
        lVar6 = local_58;
        if ((uVar4 != 0) && ((ulong)((long)local_98 - local_80._0_8_) <= (ulong)local_70)) {
          uVar11 = *(uint *)(puVar2 + 2);
          if (uVar11 == 0) goto LAB_00116f34;
          uVar12 = 0;
          break;
        }
        goto LAB_00116e43;
      }
      uVar12 = 0;
      this_00 = local_98;
      while (cVar3 = Chain<AAT::ExtendedTypes>::sanitize
                               (this_00,(hb_sanitize_context_t *)local_88,
                                (uint)(ushort)(uVar4 << 8 | uVar4 >> 8)), cVar3 != '\0') {
        uVar1 = *(uint *)(this_00 + 4);
        uVar12 = uVar12 + 1;
        this_00 = this_00 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
        if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
            uVar12) goto LAB_00116d60;
        uVar4 = *puVar2;
      }
    }
    lVar6 = local_58;
    if ((local_5c == 0) || (local_60 != '\0')) goto LAB_00116e43;
    local_80._0_8_ = hb_blob_get_data_writable(puVar5,0);
    local_80._8_8_ = (ulong)*(uint *)(puVar5 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) goto LAB_00116e43;
    local_60 = '\x01';
  } while( true );
LAB_00116f10:
  cVar3 = Chain<AAT::ExtendedTypes>::sanitize
                    (local_98,(hb_sanitize_context_t *)local_88,
                     (uint)(ushort)(uVar4 << 8 | uVar4 >> 8));
  lVar6 = local_58;
  if (cVar3 == '\0') goto LAB_00116e43;
  uVar1 = *(uint *)(local_98 + 4);
  uVar12 = uVar12 + 1;
  local_98 = local_98 +
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
      uVar12) goto LAB_00116f34;
  uVar4 = *puVar2;
  goto LAB_00116f10;
LAB_00116f34:
  lVar6 = local_58;
  if (local_5c == 0) {
LAB_00116d71:
    hb_blob_destroy(local_58);
    local_58 = 0;
    local_70 = 0;
    local_80 = (undefined1  [16])0x0;
    hb_blob_make_immutable(puVar5);
  }
  else {
LAB_00116e43:
    hb_blob_destroy(lVar6);
LAB_00116e48:
    local_58 = 0;
    local_80 = (undefined1  [16])0x0;
    local_70 = 0;
    hb_blob_destroy(puVar5);
    puVar5 = (undefined *)hb_blob_get_empty();
  }
LAB_00116da0:
  puVar10 = &_hb_NullPool;
  if (puVar5 != (undefined *)0x0) {
    puVar10 = puVar5;
  }
  *(undefined **)this = puVar5;
  puVar7 = &_hb_NullPool;
  if (7 < *(uint *)(puVar10 + 0x18)) {
    puVar7 = *(undefined **)(puVar10 + 0x10);
  }
  uVar11 = *(uint *)(puVar7 + 4);
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  *(uint *)(this + 8) = uVar11;
  pvVar8 = calloc((ulong)uVar11,8);
  *(void **)(this + 0x10) = pvVar8;
  if (pvVar8 == (void *)0x0) {
    *(undefined4 *)(this + 8) = 0;
    hb_blob_destroy(puVar5);
    *(undefined8 *)this = 0;
    uVar9 = hb_blob_get_empty();
    *(undefined8 *)this = uVar9;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* AAT::mortmorx<AAT::morx, AAT::ExtendedTypes,
   1836020344u>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes,
   1836020340u>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hb_ot_apply_context_t::hb_ot_apply_context_t(unsigned int, hb_font_t*, hb_buffer_t*,
   hb_blob_t*) */

void __thiscall
OT::hb_ot_apply_context_t::hb_ot_apply_context_t
          (hb_ot_apply_context_t *this,uint param_1,hb_font_t *param_2,hb_buffer_t *param_3,
          hb_blob_t *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::GDEF::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::GDEF::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


