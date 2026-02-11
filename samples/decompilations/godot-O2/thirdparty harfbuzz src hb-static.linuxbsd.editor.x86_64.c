
/* hb_face_t::load_upem() const */

void __thiscall hb_face_t::load_upem(hb_face_t *this)

{
  hb_face_t *phVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  phVar1 = this + 0x78;
LAB_001000a5:
  lVar4 = *(long *)phVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(this + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::head,1u,true>::create(*(hb_face_t **)(this + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *(long *)phVar1;
        if (lVar5 == 0) {
          *(long *)phVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100146;
      }
      else {
        LOCK();
        lVar5 = *(long *)phVar1;
        if (lVar5 == 0) {
          *(long *)phVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100111;
      }
    }
  }
  uVar3 = 1000;
  if ((0x35 < *(uint *)(lVar4 + 0x18)) &&
     (uVar2 = *(ushort *)(*(long *)(lVar4 + 0x10) + 0x12), uVar2 = uVar2 << 8 | uVar2 >> 8,
     uVar3 = (uint)uVar2, 0x3ff0 < uVar2 - 0x10)) {
    uVar3 = 1000;
  }
  *(uint *)(this + 0x14) = uVar3;
  return;
code_r0x00100146:
  if (lVar4 != 0) {
LAB_00100111:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_001000a5;
}



/* hb_face_t::load_num_glyphs() const */

void __thiscall hb_face_t::load_num_glyphs(hb_face_t *this)

{
  hb_face_t *phVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  phVar1 = this + 0x80;
LAB_00100178:
  lVar4 = *(long *)phVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(this + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(hb_face_t **)(this + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *(long *)phVar1;
        if (lVar5 == 0) {
          *(long *)phVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100202;
      }
      else {
        LOCK();
        lVar5 = *(long *)phVar1;
        if (lVar5 == 0) {
          *(long *)phVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_001001d1;
      }
    }
  }
  uVar3 = 0;
  if (5 < *(uint *)(lVar4 + 0x18)) {
    uVar2 = *(ushort *)(*(long *)(lVar4 + 0x10) + 4);
    uVar3 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
  }
  *(uint *)(this + 0x18) = uVar3;
  return;
code_r0x00100202:
  if (lVar4 != 0) {
LAB_001001d1:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_00100178;
}



/* hb_font_t::scale_glyph_extents(hb_glyph_extents_t*) */

void __thiscall hb_font_t::scale_glyph_extents(hb_font_t *this,hb_glyph_extents_t *param_1)

{
  hb_font_t hVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = (float)(int)(short)*(undefined4 *)param_1 * *(float *)(this + 0x4c);
  fVar7 = (float)(int)(short)((short)*(undefined4 *)param_1 + *(short *)(param_1 + 8)) *
          *(float *)(this + 0x4c);
  fVar10 = (float)(int)(short)*(undefined4 *)(param_1 + 4) * *(float *)(this + 0x50);
  fVar8 = (float)(int)(short)((short)*(undefined4 *)(param_1 + 4) + *(short *)(param_1 + 0xc)) *
          *(float *)(this + 0x50);
  fVar11 = *(float *)(this + 0x48);
  if (fVar11 != 0.0) {
    fVar9 = fVar11 * fVar10;
    fVar11 = fVar11 * fVar8;
    fVar4 = fVar4 + (float)(~-(uint)(fVar9 <= fVar11) & (uint)fVar11 |
                           (uint)fVar9 & -(uint)(fVar9 <= fVar11));
    fVar7 = fVar7 + (float)((uint)fVar9 & -(uint)(fVar11 <= fVar9) |
                           ~-(uint)(fVar11 <= fVar9) & (uint)fVar11);
  }
  if ((float)((uint)fVar4 & _LC4) < _LC1) {
    fVar4 = (float)((uint)((float)(int)fVar4 - (float)(-(uint)(fVar4 < (float)(int)fVar4) & _LC3)) |
                   ~_LC4 & (uint)fVar4);
  }
  if ((float)((uint)fVar10 & _LC4) < _LC1) {
    fVar10 = (float)((uint)((float)(int)fVar10 -
                           (float)(-(uint)(fVar10 < (float)(int)fVar10) & _LC3)) |
                    ~_LC4 & (uint)fVar10);
  }
  if ((float)((uint)fVar7 & _LC4) < _LC1) {
    fVar7 = (float)((uint)((float)(int)fVar7 + (float)(-(uint)((float)(int)fVar7 < fVar7) & _LC3)) |
                   ~_LC4 & (uint)fVar7);
  }
  if ((float)((uint)fVar8 & _LC4) < _LC1) {
    fVar8 = (float)((uint)((float)(int)fVar8 + (float)(-(uint)((float)(int)fVar8 < fVar8) & _LC3)) |
                   ~_LC4 & (uint)fVar8);
  }
  iVar5 = (int)(fVar7 - (float)(int)fVar4);
  iVar6 = (int)(fVar8 - (float)(int)fVar10);
  *(int *)param_1 = (int)fVar4;
  *(int *)(param_1 + 4) = (int)fVar10;
  *(int *)(param_1 + 8) = iVar5;
  *(int *)(param_1 + 0xc) = iVar6;
  iVar2 = *(int *)(this + 0x3c);
  iVar3 = *(int *)(this + 0x40);
  if (iVar2 != 0 || iVar3 != 0) {
    if (*(int *)(this + 0x2c) < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar6 - iVar3;
    iVar6 = *(int *)(this + 0x28);
    *(int *)(param_1 + 4) = (int)fVar10 + iVar3;
    if (iVar6 < 0) {
      iVar2 = -iVar2;
      hVar1 = this[0x38];
    }
    else {
      hVar1 = this[0x38];
    }
    if (hVar1 != (hb_font_t)0x0) {
      *(int *)param_1 = (int)fVar4 - iVar2 / 2;
    }
    *(int *)(param_1 + 8) = iVar2 + iVar5;
  }
  return;
}



/* contour_point_vector_t::extend(hb_array_t<contour_point_t> const&) */

void __thiscall contour_point_vector_t::extend(contour_point_vector_t *this,hb_array_t *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)this;
  uVar2 = *(uint *)(this + 4);
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  if (-1 < (int)uVar1) {
    uVar5 = *(uint *)(param_1 + 8) + uVar2;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar6 = uVar1;
    if (uVar1 < uVar5) {
      do {
        uVar6 = (uVar6 >> 1) + 8 + uVar6;
      } while (uVar6 < uVar5);
      if (0x15555555 < uVar6) {
        *(uint *)this = ~uVar1;
        return;
      }
      pvVar4 = realloc(*(void **)(this + 8),(ulong)uVar6 * 0xc);
      if (pvVar4 == (void *)0x0) {
        if (*(uint *)this < uVar6) {
          *(uint *)this = ~*(uint *)this;
          return;
        }
        pvVar4 = *(void **)(this + 8);
        uVar3 = (ulong)*(uint *)(param_1 + 8);
      }
      else {
        *(void **)(this + 8) = pvVar4;
        uVar3 = (ulong)*(uint *)(param_1 + 8);
        *(uint *)this = uVar6;
      }
    }
    else {
      pvVar4 = *(void **)(this + 8);
    }
    *(uint *)(this + 4) = uVar5;
    if (uVar3 * 0xc != 0) {
      memcpy((void *)((long)pvVar4 + (ulong)uVar2 * 0xc),*(void **)param_1,uVar3 * 0xc);
      return;
    }
  }
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
      goto LAB_00100efa;
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
LAB_00100efa:
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
                0 < iVar5)))) goto LAB_00100f60;
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
LAB_00100f60:
      pIVar7 = pIVar7 + 4;
    } while (this + (ulong)(uVar2 - 1) * 4 + 0x10 != pIVar7);
  }
  return 1;
}



/* OT::TupleVariationData::decompile_points(OT::IntType<unsigned char, 1u> const*&,
   hb_vector_t<unsigned int, false>&, OT::IntType<unsigned char, 1u> const*) */

undefined8
OT::TupleVariationData::decompile_points(IntType **param_1,hb_vector_t *param_2,IntType *param_3)

{
  IntType IVar1;
  IntType *pIVar2;
  IntType *pIVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  bool bVar17;
  
  pIVar2 = *param_1;
  if (param_3 < pIVar2 + 1) {
    return 0;
  }
  *param_1 = pIVar2 + 1;
  IVar1 = *pIVar2;
  uVar8 = (uint)(byte)IVar1;
  if ((char)IVar1 < '\0') {
    if (param_3 < pIVar2 + 2) {
      return 0;
    }
    *param_1 = pIVar2 + 2;
    uVar8 = ((byte)IVar1 & 0x7f) << 8 | (uint)(byte)pIVar2[1];
  }
  uVar15 = *(uint *)param_2;
  if ((int)uVar15 < 0) {
    return 0;
  }
  if (uVar15 < uVar8) {
    do {
      uVar15 = (uVar15 >> 1) + 8 + uVar15;
    } while (uVar15 < uVar8);
    pvVar6 = realloc(*(void **)(param_2 + 8),(ulong)uVar15 << 2);
    if (pvVar6 == (void *)0x0) {
      if (*(uint *)param_2 < uVar15) {
        *(uint *)param_2 = ~*(uint *)param_2;
        return 0;
      }
      *(uint *)(param_2 + 4) = uVar8;
    }
    else {
      *(void **)(param_2 + 8) = pvVar6;
      *(uint *)param_2 = uVar15;
      *(uint *)(param_2 + 4) = uVar8;
    }
  }
  else {
    *(uint *)(param_2 + 4) = uVar8;
    if (uVar8 == 0) {
      return 1;
    }
  }
  uVar15 = 0;
  iVar5 = 0;
  do {
    pIVar3 = *param_1;
    pIVar2 = pIVar3 + 1;
    if (param_3 < pIVar2) {
      return 0;
    }
    *param_1 = pIVar2;
    bVar9 = ((byte)*pIVar3 & 0x7f) + 1;
    uVar12 = bVar9 + uVar15;
    if (uVar8 < uVar12) {
      return 0;
    }
    if ((char)*pIVar3 < '\0') {
      if (param_3 < pIVar2 + ((uint)bVar9 + (uint)bVar9)) {
        return 0;
      }
      uVar10 = (ulong)uVar15;
      lVar14 = *(long *)(param_2 + 8);
      lVar11 = uVar10 * -2;
      do {
        iVar5 = iVar5 + (uint)(ushort)(*(ushort *)(pIVar3 + uVar10 * 2 + lVar11 + 1) << 8 |
                                      *(ushort *)(pIVar3 + uVar10 * 2 + lVar11 + 1) >> 8);
        *(int *)(lVar14 + uVar10 * 4) = iVar5;
        uVar10 = uVar10 + 1;
      } while ((uint)uVar10 < uVar12);
      uVar13 = uVar15 + 1;
      iVar4 = bVar9 - 1;
      if (uVar12 < uVar13) {
        iVar4 = 0;
      }
      lVar11 = (ulong)bVar9 * 2;
      uVar15 = uVar13 + iVar4;
      if (uVar12 < uVar13) {
        lVar11 = 2;
      }
      *param_1 = pIVar2 + lVar11;
    }
    else {
      uVar10 = (ulong)bVar9;
      if (param_3 < pIVar2 + uVar10) {
        return 0;
      }
      uVar16 = (ulong)uVar15;
      lVar11 = *(long *)(param_2 + 8);
      uVar7 = uVar16;
      do {
        iVar5 = iVar5 + (uint)(byte)pIVar3[uVar7 + (1 - uVar16)];
        *(int *)(lVar11 + uVar7 * 4) = iVar5;
        uVar7 = uVar7 + 1;
      } while ((uint)uVar7 < uVar12);
      bVar17 = uVar15 + 1 <= uVar12;
      uVar13 = bVar9 - 1;
      uVar12 = 0;
      if (bVar17) {
        uVar12 = uVar13;
      }
      uVar15 = uVar15 + 1 + uVar12;
      if (!bVar17) {
        uVar10 = 1;
      }
      lVar14 = (ulong)uVar13 << 2;
      if (!bVar17) {
        lVar14 = 0;
      }
      *param_1 = pIVar2 + uVar10;
      *(int *)(lVar11 + uVar16 * 4 + lVar14) = iVar5;
    }
  } while (uVar15 < uVar8);
  return 1;
}



/* OT::HVARVVAR::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::HVARVVAR::sanitize(HVARVVAR *this,hb_sanitize_context_t *param_1)

{
  HVARVVAR *pHVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  HVARVVAR *pHVar5;
  int iVar6;
  
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (*(short *)this != 0x100) {
    return 0;
  }
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 4);
  if ((uVar4 != 0) &&
     (cVar3 = ItemVariationStore::sanitize
                        ((ItemVariationStore *)
                         (this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18)),param_1), cVar3 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xc - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 8);
  if (uVar4 != 0) {
    pHVar5 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
                    );
    if (pHVar5 + (1 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*pHVar5 == (HVARVVAR)0x0) {
        pHVar1 = pHVar5 + 4;
        if ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          if (((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             && (uVar4 = (((byte)pHVar5[1] >> 4 & 3) + 1) *
                         (uint)(ushort)(*(ushort *)(pHVar5 + 2) << 8 | *(ushort *)(pHVar5 + 2) >> 8)
                , uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1))) {
            iVar6 = *(int *)(param_1 + 0x1c) - uVar4;
            *(int *)(param_1 + 0x1c) = iVar6;
joined_r0x0010161c:
            if (0 < iVar6) goto LAB_001013c9;
          }
        }
      }
      else {
        if (*pHVar5 != (HVARVVAR)0x1) goto LAB_001013c9;
        pHVar1 = pHVar5 + 6;
        if ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar4 = *(uint *)(pHVar5 + 2);
          lVar2 = (ulong)(((byte)pHVar5[1] >> 4 & 3) + 1) *
                  (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18);
          uVar4 = (uint)lVar2;
          if ((((int)((ulong)lVar2 >> 0x20) == 0) &&
              ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
             && (uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1))) {
            iVar6 = *(int *)(param_1 + 0x1c) - uVar4;
            *(int *)(param_1 + 0x1c) = iVar6;
            goto joined_r0x0010161c;
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
    *(undefined4 *)(this + 8) = 0;
  }
LAB_001013c9:
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x10 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 0xc);
  if (uVar4 != 0) {
    pHVar5 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
                    );
    if (pHVar5 + (1 - *(long *)(param_1 + 8)) <= (HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*pHVar5 == (HVARVVAR)0x0) {
        pHVar1 = pHVar5 + 4;
        if ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          if (((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             && (uVar4 = (((byte)pHVar5[1] >> 4 & 3) + 1) *
                         (uint)(ushort)(*(ushort *)(pHVar5 + 2) << 8 | *(ushort *)(pHVar5 + 2) >> 8)
                , uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1))) {
LAB_0010157d:
            iVar6 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = iVar6 - uVar4;
            if (0 < (int)(iVar6 - uVar4)) goto LAB_001013e4;
          }
        }
      }
      else {
        if (*pHVar5 != (HVARVVAR)0x1) goto LAB_001013e4;
        pHVar1 = pHVar5 + 6;
        if ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar4 = *(uint *)(pHVar5 + 2);
          lVar2 = (ulong)(((byte)pHVar5[1] >> 4 & 3) + 1) *
                  (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18);
          uVar4 = (uint)lVar2;
          if ((((int)((ulong)lVar2 >> 0x20) == 0) &&
              ((ulong)((long)pHVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
             && (uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1)))
          goto LAB_0010157d;
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
    *(undefined4 *)(this + 0xc) = 0;
  }
LAB_001013e4:
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x14 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 0x10);
  if (uVar4 == 0) {
    return 1;
  }
  pHVar5 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  if ((HVARVVAR *)(ulong)*(uint *)(param_1 + 0x18) < pHVar5 + (1 - *(long *)(param_1 + 8)))
  goto LAB_001016a5;
  if (*pHVar5 == (HVARVVAR)0x0) {
    pHVar1 = pHVar5 + 4;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pHVar1 - *(long *)(param_1 + 8)))
    goto LAB_001016a5;
    if (((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pHVar1 - *(long *)(param_1 + 8))) ||
       (uVar4 = (((byte)pHVar5[1] >> 4 & 3) + 1) *
                (uint)(ushort)(*(ushort *)(pHVar5 + 2) << 8 | *(ushort *)(pHVar5 + 2) >> 8),
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1) < uVar4)) goto LAB_001016a5;
  }
  else {
    if (*pHVar5 != (HVARVVAR)0x1) {
      return 1;
    }
    pHVar1 = pHVar5 + 6;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pHVar1 - *(long *)(param_1 + 8)))
    goto LAB_001016a5;
    uVar4 = *(uint *)(pHVar5 + 2);
    lVar2 = (ulong)(((byte)pHVar5[1] >> 4 & 3) + 1) *
            (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
    ;
    uVar4 = (uint)lVar2;
    if ((((int)((ulong)lVar2 >> 0x20) != 0) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pHVar1 - *(long *)(param_1 + 8)))) ||
       ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pHVar1) < uVar4)) goto LAB_001016a5;
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar6 - uVar4;
  if (0 < (int)(iVar6 - uVar4)) {
    return 1;
  }
LAB_001016a5:
  if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
     (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
     param_1[0x28] != (hb_sanitize_context_t)0x0)) {
    *(undefined4 *)(this + 0x10) = 0;
    return 1;
  }
  return 0;
}



/* OT::VVAR::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall OT::VVAR::sanitize(VVAR *this,hb_sanitize_context_t *param_1)

{
  VVAR *pVVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  VVAR *pVVar6;
  
  uVar3 = HVARVVAR::sanitize((HVARVVAR *)this,param_1);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  if ((VVAR *)(ulong)*(uint *)(param_1 + 0x18) < this + (0x18 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 0x14);
  if (uVar4 == 0) {
    return uVar3;
  }
  pVVar6 = this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  if ((VVAR *)(ulong)*(uint *)(param_1 + 0x18) < pVVar6 + (1 - *(long *)(param_1 + 8)))
  goto LAB_00101850;
  if (*pVVar6 == (VVAR)0x0) {
    pVVar1 = pVVar6 + 4;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar1 - *(long *)(param_1 + 8)))
    goto LAB_00101850;
    if (((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar1 - *(long *)(param_1 + 8))) ||
       (uVar4 = (((byte)pVVar6[1] >> 4 & 3) + 1) *
                (uint)(ushort)(*(ushort *)(pVVar6 + 2) << 8 | *(ushort *)(pVVar6 + 2) >> 8),
       (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar1) < uVar4)) goto LAB_00101850;
    iVar5 = *(int *)(param_1 + 0x1c) - uVar4;
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  else {
    if (*pVVar6 != (VVAR)0x1) {
      return uVar3;
    }
    pVVar1 = pVVar6 + 6;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar1 - *(long *)(param_1 + 8)))
    goto LAB_00101850;
    uVar4 = *(uint *)(pVVar6 + 2);
    lVar2 = (ulong)(((byte)pVVar6[1] >> 4 & 3) + 1) *
            (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
    ;
    uVar4 = (uint)lVar2;
    if ((((int)((ulong)lVar2 >> 0x20) != 0) ||
        ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pVVar1 - *(long *)(param_1 + 8)))) ||
       ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pVVar1) < uVar4)) goto LAB_00101850;
    iVar5 = *(int *)(param_1 + 0x1c) - uVar4;
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  if (0 < iVar5) {
    return uVar3;
  }
LAB_00101850:
  if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
     (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
     param_1[0x28] != (hb_sanitize_context_t)0x0)) {
    *(undefined4 *)(this + 0x14) = 0;
    return uVar3;
  }
  return 0;
}



/* OT::gvar::sanitize_shallow(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::gvar::sanitize_shallow(gvar *this,hb_sanitize_context_t *param_1)

{
  gvar *pgVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pgVar1 = this + 0x14;
  if ((((ulong)((long)pgVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(short *)this == 0x100)) &&
     (iVar3 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) *
              (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8),
     this + (0xc - *(long *)(param_1 + 8)) <= (gvar *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar4 = *(uint *)(this + 8);
    if (-1 < iVar3) {
      if (((ulong)((long)(this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18)) - *(long *)(param_1 + 8)) <=
           (ulong)*(uint *)(param_1 + 0x18)) &&
         ((uint)(iVar3 * 2) <=
          (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                (int)(this + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                             uVar4 << 0x18))))) {
        iVar3 = *(int *)(param_1 + 0x1c) + iVar3 * -2;
        *(int *)(param_1 + 0x1c) = iVar3;
        if (0 < iVar3) {
          uVar4 = *(int *)(param_1 + 0x38) + 1;
          if (((byte)this[0xf] & 1) == 0) {
            uVar5 = uVar4 * 2;
            if ((int)uVar4 < 0) {
              return 0;
            }
          }
          else {
            uVar5 = uVar4 * 4;
            if (uVar4 >> 0x1e != 0) {
              return 0;
            }
          }
          uVar2 = (long)pgVar1 - *(long *)(param_1 + 8);
          if ((uVar2 <= *(uint *)(param_1 + 0x18)) &&
             (uVar5 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pgVar1))) {
            *(uint *)(param_1 + 0x1c) = iVar3 - uVar5;
            return CONCAT71((int7)(uVar2 >> 8),0 < (int)(iVar3 - uVar5));
          }
        }
      }
    }
  }
  return 0;
}



/* OT::glyf_impl::SimpleGlyph::trim_padding() const */

undefined1  [16] __thiscall OT::glyf_impl::SimpleGlyph::trim_padding(SimpleGlyph *this)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  lVar2 = *(long *)(this + 8);
  uVar5 = *(uint *)(this + 0x10);
  puVar11 = (ushort *)((ulong)uVar5 + lVar2);
  puVar4 = (ushort *)
           ((ulong)((short)(**(ushort **)this << 8 | **(ushort **)this >> 8) * 2 + 10) + lVar2);
  if (puVar4 + 1 < puVar11) {
    uVar9 = 0;
    iVar10 = 0;
    uVar12 = (ushort)(puVar4[-1] << 8 | puVar4[-1] >> 8) + 1;
    puVar4 = (ushort *)((long)puVar4 + (ulong)(ushort)(*puVar4 << 8 | *puVar4 >> 8) + 2);
    do {
      puVar7 = puVar4;
      if (puVar11 <= puVar4) break;
      bVar1 = (byte)*puVar4;
      puVar7 = (ushort *)((long)puVar4 + 1);
      if ((bVar1 & 8) == 0) {
        iVar8 = 1;
      }
      else {
        if (puVar11 <= puVar7) goto LAB_00101ad0;
        puVar7 = puVar4 + 1;
        iVar8 = *(byte *)((long)puVar4 + 1) + 1;
      }
      iVar3 = 1;
      if ((bVar1 & 2) == 0) {
        iVar3 = ((bVar1 >> 4 ^ 1) & 1) * 2;
      }
      iVar6 = 1;
      if ((bVar1 & 4) == 0) {
        iVar6 = ((bVar1 >> 5 ^ 1) & 1) * 2;
      }
      uVar9 = uVar9 + iVar8;
      iVar10 = iVar10 + (iVar3 + iVar6) * iVar8;
      puVar4 = puVar7;
    } while (uVar9 < uVar12);
    if (uVar9 == uVar12) {
      uVar9 = (iVar10 + uVar5) - ((int)puVar11 - (int)puVar7);
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      auVar13._8_4_ = uVar5;
      auVar13._0_8_ = lVar2;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
LAB_00101ad0:
  return ZEXT816(0);
}



/* OT::glyf_impl::SimpleGlyph::get_contour_points(contour_point_vector_t&, bool) const */

ulong __thiscall
OT::glyf_impl::SimpleGlyph::get_contour_points
          (SimpleGlyph *this,contour_point_vector_t *param_1,bool param_2)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  void *pvVar5;
  float *pfVar6;
  ushort *puVar7;
  float *pfVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  undefined7 in_register_00000011;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort *puVar19;
  int iVar20;
  ushort uVar21;
  byte local_49;
  
  puVar9 = *(ushort **)this;
  puVar7 = puVar9 + 5;
  uVar21 = *puVar9 << 8 | *puVar9 >> 8;
  lVar11 = (long)(short)uVar21;
  puVar19 = puVar7 + lVar11;
  if (puVar19 < *(ushort **)(this + 8)) {
    return 0;
  }
  uVar18 = CONCAT71(in_register_00000011,param_2) & 0xffffffff;
  puVar4 = (ushort *)((long)*(ushort **)(this + 8) + (ulong)*(uint *)(this + 0x10));
  if (puVar4 < puVar19) {
    return 0;
  }
  if ((uint)((int)puVar4 - (int)puVar19) < 2) {
    return 0;
  }
  uVar16 = *(uint *)(param_1 + 4);
  uVar3 = puVar9[lVar11 + 4] << 8 | puVar9[lVar11 + 4] >> 8;
  iVar20 = uVar3 + 1;
  uVar14 = uVar16 + 5 + (uint)uVar3;
  uVar10 = *(uint *)param_1;
  if ((int)uVar10 < 0) {
    return 0;
  }
  if (uVar14 < uVar16) {
    uVar14 = uVar16;
  }
  if (uVar10 < uVar14) {
    if (0x15555555 < uVar14) goto LAB_00101b6b;
    pvVar5 = *(void **)(param_1 + 8);
LAB_00101be4:
    pvVar5 = realloc(pvVar5,(ulong)uVar14 * 0xc);
    if (pvVar5 != (void *)0x0) {
LAB_00101c2e:
      *(void **)(param_1 + 8) = pvVar5;
      *(uint *)param_1 = uVar14;
      uVar10 = uVar14;
      uVar15 = *(uint *)(param_1 + 4);
      goto LAB_00101c3c;
    }
    uVar10 = *(uint *)param_1;
    if (uVar10 < uVar14) goto LAB_00101b6b;
    uVar17 = (ulong)(uint)(iVar20 + *(int *)(param_1 + 4));
    if (iVar20 + *(int *)(param_1 + 4) < 0) {
      uVar17 = 0;
    }
    if ((int)uVar10 < 0) {
      return 0;
    }
  }
  else {
    uVar15 = uVar16;
    if (uVar14 < uVar10 >> 2) {
      if (0x15555555 < uVar14) goto LAB_00101b6b;
      pvVar5 = *(void **)(param_1 + 8);
      if (uVar14 != 0) goto LAB_00101be4;
      free(pvVar5);
      pvVar5 = (void *)0x0;
      goto LAB_00101c2e;
    }
LAB_00101c3c:
    uVar17 = (ulong)(uVar15 + iVar20);
    if ((int)(uVar15 + iVar20) < 0) {
      uVar17 = 0;
    }
  }
  uVar15 = (uint)uVar17;
  uVar14 = uVar10;
  if (uVar10 < uVar15) {
    do {
      uVar14 = uVar14 + 8 + (uVar14 >> 1);
    } while (uVar14 < uVar15);
    if (0x15555555 < uVar14) {
LAB_00101b6b:
      *(uint *)param_1 = ~uVar10;
      return 0;
    }
    pvVar5 = realloc(*(void **)(param_1 + 8),(ulong)uVar14 * 0xc);
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 8) = pvVar5;
      *(uint *)param_1 = uVar14;
      goto LAB_00101c54;
    }
    uVar10 = *(uint *)param_1;
    if (uVar10 < uVar14) goto LAB_00101b6b;
  }
  pvVar5 = *(void **)(param_1 + 8);
LAB_00101c54:
  *(uint *)(param_1 + 4) = uVar15;
  if (uVar16 != 0) {
    uVar17 = 0;
    if (uVar16 <= uVar15) {
      uVar17 = (ulong)(uVar15 - uVar16);
    }
    pvVar5 = (void *)((long)pvVar5 + (ulong)uVar16 * 0xc);
  }
  if ((char)uVar18 != '\0') {
    return uVar18;
  }
  pfVar6 = (float *)memset(pvVar5,0,(ulong)(uint)(iVar20 * 0xc));
  uVar16 = (uint)uVar17;
  if (0 < (short)uVar21) {
    puVar4 = puVar7;
    do {
      uVar3 = *puVar4 << 8 | *puVar4 >> 8;
      if (uVar3 < uVar16) {
        pfVar8 = pfVar6 + (ulong)uVar3 * 3;
      }
      else {
        _hb_CrapPool = 0;
        pfVar8 = (float *)&_hb_CrapPool;
        DAT_001008e8 = 0;
      }
      puVar4 = puVar4 + 1;
      *(undefined1 *)((long)pfVar8 + 9) = 1;
    } while (puVar9 + (ulong)(uVar21 - 1) + 6 != puVar4);
  }
  puVar7 = (ushort *)
           (lVar11 * 2 + 2 + (ulong)(ushort)(*puVar19 << 8 | *puVar19 >> 8) + (long)puVar7);
  if (puVar7 < *(ushort **)(this + 8)) {
    return 0;
  }
  puVar19 = (ushort *)((long)*(ushort **)(this + 8) + (ulong)*(uint *)(this + 0x10));
  if (puVar19 <= puVar7) {
    return 0;
  }
  uVar10 = 0;
LAB_00101d2c:
  pfVar8 = pfVar6 + (ulong)uVar10 * 3 + 2;
  while (puVar9 = puVar7, uVar10 < uVar16) {
    puVar4 = (ushort *)((long)puVar9 + 1);
    if (puVar19 < puVar4) {
      return 0;
    }
    bVar1 = (byte)*puVar9;
    uVar10 = uVar10 + 1;
    *(byte *)pfVar8 = bVar1;
    puVar7 = puVar4;
    pfVar8 = pfVar8 + 3;
    if ((bVar1 & 8) != 0) goto LAB_00101ec0;
  }
  iVar20 = 0;
  pfVar8 = pfVar6 + uVar17 * 3;
  pfVar12 = pfVar6;
  if (pfVar8 == pfVar6) goto LAB_00101f9f;
  do {
    fVar2 = pfVar12[2];
    if (((uint)fVar2 & 2) == 0) {
      puVar7 = puVar9;
      if (((uint)fVar2 & 0x10) == 0) {
        puVar7 = puVar9 + 1;
        if (puVar19 < puVar7) {
          return 0;
        }
        iVar20 = iVar20 + (short)(*puVar9 << 8 | *puVar9 >> 8);
      }
    }
    else {
      puVar7 = (ushort *)((long)puVar9 + 1);
      if (puVar19 < puVar7) {
        return 0;
      }
      if (((uint)fVar2 & 0x10) == 0) {
        iVar20 = iVar20 - (uint)(byte)*puVar9;
      }
      else {
        iVar20 = iVar20 + (uint)(byte)*puVar9;
      }
    }
    pfVar13 = pfVar12 + 3;
    *pfVar12 = (float)iVar20;
    puVar9 = puVar7;
    pfVar12 = pfVar13;
  } while (pfVar8 != pfVar13);
  iVar20 = 0;
  do {
    fVar2 = pfVar6[2];
    local_49 = param_2;
    if (((uint)fVar2 & 4) == 0) {
      puVar9 = puVar7;
      if (((uint)fVar2 & 0x20) == 0) {
        puVar9 = puVar7 + 1;
        if (puVar19 < puVar9) goto LAB_00101fa4;
        iVar20 = iVar20 + (short)(*puVar7 << 8 | *puVar7 >> 8);
      }
    }
    else {
      puVar9 = (ushort *)((long)puVar7 + 1);
      if (puVar19 < puVar9) goto LAB_00101fa4;
      if (((uint)fVar2 & 0x20) == 0) {
        iVar20 = iVar20 - (uint)(byte)*puVar7;
      }
      else {
        iVar20 = iVar20 + (uint)(byte)*puVar7;
      }
    }
    pfVar12 = pfVar6 + 3;
    pfVar6[1] = (float)iVar20;
    puVar7 = puVar9;
    pfVar6 = pfVar12;
  } while (pfVar8 != pfVar12);
LAB_00101f9f:
  local_49 = 1;
LAB_00101fa4:
  return (ulong)local_49;
LAB_00101ec0:
  puVar7 = puVar9 + 1;
  if (puVar19 < puVar7) {
    return 0;
  }
  uVar18 = (ulong)(*(byte *)puVar4 + uVar10);
  if (uVar16 < *(byte *)puVar4 + uVar10) {
    uVar18 = uVar17;
  }
  uVar14 = (uint)uVar18;
  if (uVar10 < uVar14) {
    pfVar8 = pfVar6 + (ulong)uVar10 * 3 + 2;
    pfVar12 = pfVar6 + ((ulong)((uVar14 - uVar10) - 1) + (ulong)uVar10) * 3 + 5;
    pfVar13 = pfVar8;
    uVar10 = uVar14;
    if (((int)pfVar12 - (int)pfVar8 & 4U) != 0) {
      *(byte *)pfVar8 = bVar1;
      pfVar13 = pfVar8 + 3;
      if (pfVar12 == pfVar8 + 3) goto LAB_00101d2c;
    }
    do {
      *(byte *)pfVar13 = bVar1;
      pfVar8 = pfVar13 + 6;
      *(byte *)(pfVar13 + 3) = bVar1;
      pfVar13 = pfVar8;
    } while (pfVar12 != pfVar8);
  }
  goto LAB_00101d2c;
}



/* OT::glyf_accelerator_t::glyph_for_gid(unsigned int, bool) const */

undefined1 (*) [16] OT::glyf_accelerator_t::glyph_for_gid(uint param_1,bool param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  char in_CL;
  ushort uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint in_EDX;
  uint uVar9;
  long lVar10;
  undefined7 in_register_00000031;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar14) [16];
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  ushort *local_38;
  ushort *puStack_30;
  uint local_28;
  undefined4 local_24;
  long local_20;
  
  pauVar14 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  lVar11 = CONCAT71(in_register_00000031,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < *(uint *)(lVar11 + 0x1c)) {
    lVar10 = *(long *)(lVar11 + 0x20);
    if (*(char *)(lVar11 + 0x18) == '\0') {
      if (lVar10 != 0) {
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      uVar3 = *(uint *)(lVar10 + (ulong)in_EDX * 4);
      uVar9 = *(uint *)(lVar10 + (ulong)(in_EDX + 1) * 4);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    }
    else {
      if (lVar10 != 0) {
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      uVar6 = *(ushort *)(lVar10 + (ulong)in_EDX * 2);
      uVar1 = *(ushort *)(lVar10 + (ulong)(in_EDX + 1) * 2);
      uVar3 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8) * 2;
      uVar9 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8) * 2;
    }
    if (uVar3 <= uVar9) {
      puVar8 = *(undefined1 **)(lVar11 + 0x28);
      if (puVar8 == (undefined1 *)0x0) {
        uVar13 = 0;
        puVar8 = _hb_NullPool;
      }
      else {
        uVar13 = *(uint *)(puVar8 + 0x18);
      }
      if (uVar9 <= uVar13) {
        uVar9 = uVar9 - uVar3;
        puVar5 = (ushort *)((ulong)uVar3 + *(long *)(puVar8 + 0x10));
        if (uVar9 < 10) {
          if (in_CL != '\0') {
            *(ushort **)*pauVar14 = puVar5;
            *(uint *)(*pauVar14 + 8) = uVar9;
            *(undefined4 *)(*pauVar14 + 0xc) = 0;
LAB_001021c5:
            *(uint *)(pauVar14[1] + 8) = in_EDX;
            *(undefined1 **)pauVar14[1] = _hb_NullPool;
LAB_001021d3:
            iVar4 = 0;
LAB_00102189:
            *(int *)(pauVar14[1] + 0xc) = iVar4;
            goto LAB_001020fc;
          }
          uVar7 = 0;
          puVar12 = (ushort *)_hb_NullPool;
        }
        else {
          uVar6 = *puVar5 << 8 | *puVar5 >> 8;
          puVar12 = puVar5;
          if (uVar6 == 0) {
            if (in_CL != '\0') {
LAB_00102160:
              *(ushort **)*pauVar14 = puVar5;
              *(uint *)(*pauVar14 + 8) = uVar9;
              *(undefined4 *)(*pauVar14 + 0xc) = 0;
LAB_0010216d:
              *(ushort **)pauVar14[1] = puVar5;
              uVar6 = *puVar5;
              *(uint *)(pauVar14[1] + 8) = in_EDX;
              uVar6 = uVar6 << 8 | uVar6 >> 8;
              if (uVar6 == 0) goto LAB_001021d3;
              iVar4 = ((short)uVar6 < 1) + 1;
              goto LAB_00102189;
            }
            uVar7 = 0;
          }
          else if ((short)uVar6 < 1) {
            if (in_CL != '\0') goto LAB_00102160;
            uVar7 = 2;
          }
          else {
            if (in_CL != '\0') {
              local_24 = 0;
              local_38 = puVar5;
              puStack_30 = puVar5;
              local_28 = uVar9;
              auVar15 = glyf_impl::SimpleGlyph::trim_padding((SimpleGlyph *)&local_38);
              puVar5 = auVar15._0_8_;
              *pauVar14 = auVar15;
              if (auVar15._8_4_ < 10) goto LAB_001021c5;
              goto LAB_0010216d;
            }
            uVar7 = 1;
          }
        }
        *(ushort **)*pauVar14 = puVar5;
        *(uint *)(*pauVar14 + 8) = uVar9;
        *(undefined4 *)(*pauVar14 + 0xc) = 0;
        *(ushort **)pauVar14[1] = puVar12;
        *(uint *)(pauVar14[1] + 8) = in_EDX;
        *(undefined4 *)(pauVar14[1] + 0xc) = uVar7;
        goto LAB_001020fc;
      }
    }
  }
  *(undefined1 **)pauVar14[1] = _hb_NullPool;
  uVar2 = _LC5;
  *pauVar14 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar14[1] + 8) = uVar2;
LAB_001020fc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,unsigned_int,true> __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  size_t __size;
  uint uVar16;
  int iVar17;
  short sVar18;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  hVar10 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
LAB_00102563:
    hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_001024cd;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar14 = param_1 * 2 + 8;
    uVar9 = (ulong)uVar14;
    if (uVar14 == 0) {
      pvVar4 = malloc(0xc);
      if (pvVar4 == (void *)0x0) goto LAB_0010255f;
      iVar17 = 0;
      sVar18 = 0;
      iVar7 = 0xc;
      __size = 0xc;
LAB_001022a9:
      pvVar4 = (void *)__memset_chk(pvVar4,0,iVar7,__size);
    }
    else {
      iVar7 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      uVar14 = iVar7 + 1;
      uVar9 = (ulong)uVar14;
      uVar16 = 1 << ((byte)uVar14 & 0x1f);
      __size = (ulong)uVar16 * 0xc;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
LAB_0010255f:
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
        goto LAB_00102563;
      }
      sVar18 = (short)uVar14 * 2;
      iVar17 = uVar16 - 1;
      iVar7 = 0xc << ((byte)uVar14 & 0x1f);
      if (iVar7 != 0) goto LAB_001022a9;
    }
    uStack_c0 = _UNK_001085f8;
    uStack_c8 = __LC7;
    iVar7 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar17;
    __ptr = *(int **)(this + 0x28);
    uVar14 = (iVar7 + 1) - (uint)(iVar7 == 0);
    uStack_b8 = __LC8;
    uStack_b0 = _UNK_00108608;
    uStack_a8 = __LC9;
    uStack_a0 = _UNK_00108618;
    uStack_98 = __LC10;
    uStack_90 = _UNK_00108628;
    uStack_88 = __LC11;
    uStack_80 = _UNK_00108638;
    uStack_78 = __LC12;
    uStack_70 = _UNK_00108648;
    uStack_68 = __LC13;
    uStack_60 = _UNK_00108658;
    uStack_58 = __LC14;
    uStack_50 = _UNK_00108668;
    if ((int)uVar9 == 0x20) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar8 = *(undefined4 *)((long)&uStack_c8 + uVar9 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar8;
    *(short *)(this + 0x12) = sVar18;
    *(void **)(this + 0x28) = pvVar4;
    if (uVar14 != 0) {
      piVar15 = __ptr;
      do {
        if (((*(byte *)(piVar15 + 1) & 1) != 0) &&
           (uVar16 = (uint)piVar15[1] >> 2,
           this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0)) {
          uVar13 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar13 >> 1) + uVar13) {
            cVar3 = alloc(this,0);
            if (cVar3 == '\0') goto LAB_00102370;
            uVar13 = *(uint *)(this + 0x18);
          }
          lVar2 = *(long *)(this + 0x28);
          iVar17 = *piVar15;
          uVar9 = (ulong)uVar16 % (ulong)*(uint *)(this + 0x20);
          iVar7 = *(int *)(this + 0x14);
          lVar5 = uVar9 * 0xc;
          piVar6 = (int *)(lVar2 + lVar5);
          bVar1 = *(byte *)(piVar6 + 1);
          if ((bVar1 & 2) == 0) {
            *piVar6 = iVar17;
            piVar6[2] = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            *(uint *)(this + 0x18) = uVar13 + 1;
            *(int *)(this + 0x14) = iVar7 + 1;
          }
          else {
            uVar11 = 0;
            uVar12 = 0xffffffff;
            do {
              if (*piVar6 == iVar17) {
                if (uVar12 == 0xffffffff) goto LAB_0010242f;
                goto LAB_00102424;
              }
              if (((bVar1 & 1) == 0) && (uVar12 == 0xffffffff)) {
                uVar12 = (uint)uVar9;
              }
              uVar11 = uVar11 + 1;
              uVar9 = (ulong)((uint)uVar9 + uVar11 & *(uint *)(this + 0x1c));
              lVar5 = uVar9 * 0xc;
              piVar6 = (int *)(lVar2 + lVar5);
              bVar1 = *(byte *)(piVar6 + 1);
            } while ((bVar1 & 2) != 0);
            if (uVar12 == 0xffffffff) {
LAB_0010250a:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00102424:
              lVar5 = (ulong)uVar12 * 0xc;
LAB_0010242f:
              piVar6 = (int *)(lVar2 + lVar5);
              if ((*(byte *)(piVar6 + 1) & 2) == 0) goto LAB_0010250a;
              iVar7 = iVar7 - (*(byte *)(piVar6 + 1) & 1);
              *(uint *)(this + 0x18) = uVar13 - 1;
              *(int *)(this + 0x14) = iVar7;
              iVar17 = *piVar15;
            }
            *piVar6 = iVar17;
            iVar17 = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            piVar6[2] = iVar17;
            *(uint *)(this + 0x18) = uVar13;
            *(int *)(this + 0x14) = iVar7 + 1;
            if ((*(ushort *)(this + 0x12) < uVar11) && (*(uint *)(this + 0x1c) < uVar13 << 3)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_00102370:
        piVar15 = piVar15 + 3;
      } while (__ptr + (ulong)uVar14 * 3 != piVar15);
    }
    free(__ptr);
  }
LAB_001024cd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar10;
}



/* hb_hashmap_t<unsigned int, unsigned int, true>::fini() */

void __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  *(undefined4 *)this = 0xffff2153;
  __mutex = *(pthread_mutex_t **)(this + 8);
  if (__mutex != (pthread_mutex_t *)0x0) {
    if (*(int *)((long)__mutex + 0x2c) != 0) {
      do {
        pthread_mutex_lock(__mutex);
        iVar2 = *(int *)((long)__mutex + 0x2c);
        while( true ) {
          if (iVar2 == 0) {
            if (__mutex[1].__data.__lock != 0) {
              free(*(void **)((long)__mutex + 0x30));
            }
            __mutex[1].__align = 0;
            *(undefined8 *)((long)__mutex + 0x30) = 0;
            pthread_mutex_unlock(__mutex);
            goto LAB_00102678;
          }
          lVar1 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar2 - 1U) * 0x18;
          pcVar3 = *(code **)(lVar1 + 0x10);
          uVar4 = *(undefined8 *)(lVar1 + 8);
          *(uint *)((long)__mutex + 0x2c) = iVar2 - 1U;
          pthread_mutex_unlock(__mutex);
          if (pcVar3 == (code *)0x0) break;
          (*pcVar3)(uVar4);
          pthread_mutex_lock(__mutex);
          iVar2 = *(int *)((long)__mutex + 0x2c);
        }
      } while( true );
    }
    if (__mutex[1].__data.__lock != 0) {
      free(*(void **)((long)__mutex + 0x30));
    }
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00102678:
    pthread_mutex_destroy(__mutex);
    free(__mutex);
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)(this + 0x14) = 0;
  return;
}



/* bool OT::TupleValues::decompile<int>(OT::IntType<unsigned char, 1u> const*&, hb_vector_t<int,
   false>&, OT::IntType<unsigned char, 1u> const*, bool) */

bool OT::TupleValues::decompile<int>
               (IntType **param_1,hb_vector_t *param_2,IntType *param_3,bool param_4)

{
  IntType IVar1;
  long lVar2;
  byte bVar3;
  IntType *pIVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  if (param_4) {
    pIVar4 = *param_1;
    uVar8 = *(uint *)param_2;
    uVar10 = (uint)(((long)param_3 - (long)pIVar4) / 2);
    if ((int)uVar8 < 0) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = 0xffffffff;
      uVar11 = uVar8;
      if (uVar8 < uVar10) {
        do {
          uVar11 = (uVar11 >> 1) + 8 + uVar11;
        } while (uVar11 < uVar10);
        if (uVar11 < 0x40000000) {
          pvVar7 = realloc(*(void **)(param_2 + 8),(ulong)uVar11 << 2);
          if (pvVar7 == (void *)0x0) {
            pIVar4 = *param_1;
            uVar16 = 0xffffffff;
            if (*(uint *)param_2 < uVar11) {
              *(uint *)param_2 = ~*(uint *)param_2;
            }
          }
          else {
            *(void **)(param_2 + 8) = pvVar7;
            uVar16 = 0xffffffff;
            pIVar4 = *param_1;
            *(uint *)param_2 = uVar11;
          }
        }
        else {
          uVar16 = 0xffffffff;
          *(uint *)param_2 = ~uVar8;
        }
      }
    }
  }
  else {
    uVar16 = *(uint *)(param_2 + 4);
    if (uVar16 == 0) {
      return true;
    }
    pIVar4 = *param_1;
  }
  uVar8 = 0;
  do {
    if (param_3 < pIVar4 + 1) {
      return param_4;
    }
    *param_1 = pIVar4 + 1;
    IVar1 = *pIVar4;
    bVar12 = ((byte)IVar1 & 0x3f) + 1;
    uVar10 = (uint)bVar12;
    if (param_4) {
      uVar11 = *(uint *)param_2;
      if ((int)uVar11 < 0) {
        return false;
      }
      uVar15 = *(int *)(param_2 + 4) + uVar10;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      uVar14 = uVar11;
      if (uVar11 < uVar15) {
        do {
          uVar14 = uVar14 + 8 + (uVar14 >> 1);
        } while (uVar14 < uVar15);
        if (0x3fffffff < uVar14) {
LAB_00102a48:
          *(uint *)param_2 = ~uVar11;
          return false;
        }
        pvVar7 = realloc(*(void **)(param_2 + 8),(ulong)uVar14 << 2);
        if (pvVar7 != (void *)0x0) {
          *(void **)(param_2 + 8) = pvVar7;
          *(uint *)param_2 = uVar14;
          *(uint *)(param_2 + 4) = uVar15;
          goto joined_r0x00102836;
        }
        uVar11 = *(uint *)param_2;
        if (uVar11 < uVar14) goto LAB_00102a48;
      }
      *(uint *)(param_2 + 4) = uVar15;
    }
joined_r0x00102836:
    uVar11 = bVar12 + uVar8;
    if (uVar16 < uVar11) {
      return false;
    }
    bVar3 = (byte)IVar1 & 0xc0;
    if (bVar3 == 0x80) {
      if (uVar8 < uVar11) {
        memset((void *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 4),0,(ulong)(uVar10 - 1) * 4 + 4);
        uVar8 = uVar11;
      }
    }
    else {
      pIVar4 = *param_1;
      if (bVar3 == 0x40) {
        if (param_3 < pIVar4 + uVar10 * 2) {
          return false;
        }
        if (uVar8 < uVar11) {
          lVar9 = 0;
          lVar2 = *(long *)(param_2 + 8);
          do {
            *(int *)(lVar2 + (ulong)uVar8 * 4 + lVar9 * 2) =
                 (int)(short)(*(ushort *)(pIVar4 + lVar9) << 8 | *(ushort *)(pIVar4 + lVar9) >> 8);
            lVar9 = lVar9 + 2;
          } while (lVar9 != (ulong)(uVar10 - 1) * 2 + 2);
          *param_1 = pIVar4 + lVar9;
          uVar8 = uVar11;
        }
      }
      else if (bVar3 == 0xc0) {
        if (param_3 < pIVar4 + uVar10 * 4) {
          return false;
        }
        if (uVar8 < uVar11) {
          lVar2 = (ulong)(uVar10 - 1) * 4 + 4;
          lVar9 = *(long *)(param_2 + 8);
          lVar6 = 0;
          do {
            uVar10 = *(uint *)(pIVar4 + lVar6);
            *(uint *)(lVar9 + (ulong)uVar8 * 4 + lVar6) =
                 uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
            ;
            lVar6 = lVar6 + 4;
          } while (lVar2 != lVar6);
          *param_1 = pIVar4 + lVar2;
          uVar8 = uVar11;
        }
      }
      else {
        if (param_3 < pIVar4 + bVar12) {
          return false;
        }
        if (uVar8 < uVar11) {
          lVar2 = *(long *)(param_2 + 8);
          uVar13 = (ulong)(uVar10 - 1);
          uVar5 = 0;
          do {
            IVar1 = pIVar4[uVar5];
            *(int *)(lVar2 + (ulong)uVar8 * 4 + uVar5 * 4) = (int)(char)IVar1;
            bVar17 = uVar5 != uVar13;
            uVar5 = uVar5 + 1;
          } while (bVar17);
          *param_1 = pIVar4 + uVar13 + 1;
          *(int *)(lVar2 + (uVar8 + uVar13) * 4) = (int)(char)IVar1;
          uVar8 = uVar11;
        }
      }
    }
    if (uVar16 <= uVar8) {
      return true;
    }
    pIVar4 = *param_1;
  } while( true );
}



/* OT::gvar::accelerator_t::apply_deltas_to_points(unsigned int, hb_array_t<int const>,
   hb_array_t<contour_point_t>, bool) const [clone .isra.0] */

void OT::gvar::accelerator_t::apply_deltas_to_points
               (long *param_1,uint param_2,long param_3,uint param_4,long param_5,undefined8 param_6
               ,char param_7)

{
  IntType *pIVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  byte bVar11;
  char cVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  hb_vector_t *phVar18;
  long lVar19;
  void *pvVar20;
  uint *puVar21;
  ushort uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  size_t sVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ushort uVar31;
  uint uVar32;
  int iVar33;
  IntType *pIVar34;
  int iVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  ulong uVar38;
  int iVar39;
  long lVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  char cVar44;
  ushort uVar45;
  IntType *pIVar46;
  IntType *pIVar47;
  char *pcVar48;
  void *pvVar49;
  uint uVar50;
  void *pvVar51;
  long in_FS_OFFSET;
  bool bVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  uint local_14c;
  IntType *local_138;
  uint local_128;
  uint local_118;
  uint local_114;
  uint local_110;
  IntType *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint *local_e8;
  ulong local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  long local_b8;
  undefined8 local_b0;
  IntType *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = param_5;
  local_b0 = param_6;
  if (*(uint *)(param_1 + 1) <= param_2) goto LAB_00102be0;
  lVar28 = *param_1;
  puVar23 = _hb_NullPool;
  if ((lVar28 != 0) && (0x13 < *(uint *)(lVar28 + 0x18))) {
    puVar23 = *(undefined1 **)(lVar28 + 0x10);
  }
  if ((puVar23[0xf] & 1) == 0) {
    uVar26 = (uint)(ushort)(*(ushort *)(puVar23 + (ulong)param_2 * 2 + 0x14) << 8 |
                           *(ushort *)(puVar23 + (ulong)param_2 * 2 + 0x14) >> 8) * 2;
  }
  else {
    uVar26 = *(uint *)(puVar23 + (ulong)param_2 * 4 + 0x14);
    uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
  }
  param_2 = param_2 + 1;
  if (*(uint *)(param_1 + 1) < param_2) {
    uVar15 = 0;
  }
  else if ((puVar23[0xf] & 1) == 0) {
    uVar15 = (uint)(ushort)(*(ushort *)(puVar23 + (ulong)param_2 * 2 + 0x14) << 8 |
                           *(ushort *)(puVar23 + (ulong)param_2 * 2 + 0x14) >> 8) * 2;
  }
  else {
    uVar15 = *(uint *)(puVar23 + (ulong)param_2 * 4 + 0x14);
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  }
  if (uVar15 < uVar26) goto LAB_00102be0;
  uVar25 = *(uint *)(puVar23 + 0x10);
  uVar25 = uVar26 + (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                    uVar25 << 0x18);
  if (*(uint *)(lVar28 + 0x18) < uVar25) goto LAB_00102be0;
  uVar50 = *(uint *)(lVar28 + 0x18) - uVar25;
  if (uVar15 - uVar26 < uVar50) {
    uVar50 = uVar15 - uVar26;
  }
  pIVar1 = (IntType *)(*(long *)(lVar28 + 0x10) + (ulong)uVar25);
  if ((uVar50 < 4) || (uVar45 = *(ushort *)pIVar1, uVar45 == 0)) goto LAB_00102be0;
  local_98 = 0;
  local_90 = (void *)0x0;
  lVar28 = *param_1;
  uVar26 = 0;
  if ((lVar28 != 0) && (uVar26 = 0, 0x13 < *(uint *)(lVar28 + 0x18))) {
    uVar22 = *(ushort *)(*(long *)(lVar28 + 0x10) + 4);
    uVar26 = (uint)(ushort)(uVar22 << 8 | uVar22 >> 8);
  }
  if ((short)(uVar45 << 8 | uVar45 >> 8) < 0) {
    puVar23 = _hb_NullPool;
    uVar45 = *(ushort *)(pIVar1 + 2);
    if (uVar45 != 0) {
      puVar23 = pIVar1 + (ushort)(uVar45 << 8 | uVar45 >> 8);
    }
    local_108 = pIVar1 + uVar50;
    local_58 = (IntType *)puVar23;
    cVar14 = TupleVariationData::decompile_points
                       ((IntType **)&local_58,(hb_vector_t *)&local_98,local_108);
    if (cVar14 == '\0') {
      local_c8 = (int)local_98;
    }
    else {
      local_c8 = (int)local_98;
      if ((((*(ushort *)pIVar1 & 0xf) != 0 || *(ushort *)pIVar1 >> 8 != 0) &&
          (pIVar1 + 4 <= local_108)) && (3 < uVar50 - 4)) {
        local_118 = (int)local_58 - (int)puVar23;
        goto LAB_00102cdd;
      }
    }
  }
  else {
    if ((((uVar45 << 8 & 0xfff) == 0 && uVar45 >> 8 == 0) ||
        (local_108 = pIVar1 + uVar50, local_108 < pIVar1 + 4)) || (uVar50 - 4 < 4))
    goto LAB_00102be0;
    local_c8 = 0;
    local_118 = 0;
LAB_00102cdd:
    iVar33 = uVar26 * 2;
    local_138 = pIVar1 + 4;
    uVar45 = *(ushort *)(pIVar1 + 6) << 8;
    uVar22 = uVar45 | *(ushort *)(pIVar1 + 6) >> 8;
    uVar31 = *(ushort *)local_138 << 8 | *(ushort *)local_138 >> 8;
    local_110 = (uint)uVar31;
    uVar26 = ((uVar45 >> 0xe & 1) * 2 - ((int)(short)uVar22 >> 0x1f)) * iVar33 + 4;
    if (uVar26 < local_110) {
      uVar26 = (uint)uVar31;
    }
    if (uVar26 <= uVar50 - 4) {
      local_88 = 0;
      local_80 = (void *)0x0;
      lVar28 = *param_1;
      if ((lVar28 == 0) || (*(uint *)(lVar28 + 0x18) < 0x14)) {
        local_f4 = 0;
        local_d8 = _hb_NullPool;
        local_128 = 0;
      }
      else {
        lVar28 = *(long *)(lVar28 + 0x10);
        uVar26 = *(uint *)(lVar28 + 8);
        local_128 = (uint)(ushort)(*(ushort *)(lVar28 + 4) << 8 | *(ushort *)(lVar28 + 4) >> 8);
        local_d8 = (undefined1 *)
                   (lVar28 + (ulong)(uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 |
                                     (uVar26 & 0xff00) << 8 | uVar26 << 0x18));
        local_f4 = (ushort)(*(ushort *)(lVar28 + 6) << 8 | *(ushort *)(lVar28 + 6) >> 8) * local_128
        ;
      }
      uVar25 = (uint)local_b0;
      pvVar51 = (void *)0x0;
      local_78 = 0;
      pvVar49 = (void *)0x0;
      local_70 = (void *)0x0;
      local_68 = 0;
      local_60 = (void *)0x0;
      local_58 = (IntType *)0x0;
      local_50 = (void *)0x0;
      local_fc = 1;
      uVar26 = 0;
      uVar15 = 0;
      local_e8 = (uint *)0x0;
      local_d0 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_114 = 0;
      local_cc = 0;
      bVar52 = false;
      do {
        local_e0 = (ulong)uVar31;
        local_14c = (uint)uVar22;
        uVar45 = uVar22 & 0x4000;
        uVar50 = local_128;
        dVar53 = _LC15;
        if ((short)uVar22 < 0) {
          pIVar47 = local_138 + 4;
          if ((uVar22 & 0x4000) == 0) {
            uVar38 = 0;
            iVar42 = 1;
            pIVar34 = (IntType *)0x0;
            pIVar46 = (IntType *)0x0;
          }
          else {
            uVar30 = (ulong)local_128;
            iVar17 = 1;
            uVar38 = 0;
            iVar42 = 1;
LAB_001037d8:
            pIVar46 = local_138 + uVar30 * 2 + 4;
            pIVar34 = local_138 + (ulong)((iVar17 + 1) * local_128) * 2 + 4;
          }
LAB_00102ef8:
          fVar6 = _LC3;
          if ((uint)uVar38 < uVar50) {
LAB_00102f5e:
            do {
              iVar17 = (int)(short)(*(ushort *)(pIVar47 + uVar38 * 2) << 8 |
                                   *(ushort *)(pIVar47 + uVar38 * 2) >> 8);
              if (iVar17 != 0) {
                if ((uint)uVar38 < param_4) {
                  iVar39 = *(int *)(param_3 + uVar38 * 4);
                  if (iVar17 != iVar39) {
                    if ((uVar22 & 0x4000) != 0) goto LAB_00102f88;
                    if (iVar39 == 0) goto LAB_00103425;
                    if (iVar17 < 0) {
                      if (iVar39 < iVar17) goto LAB_00103425;
                      iVar35 = 0;
                    }
                    else {
                      iVar35 = iVar17;
                      if (iVar39 < 0) goto LAB_00103425;
                    }
                    if (iVar35 < iVar39) goto LAB_00103425;
                    dVar53 = dVar53 * ((double)iVar39 / (double)iVar17);
                  }
                }
                else {
                  if ((uVar22 & 0x4000) == 0) goto LAB_00103425;
                  iVar39 = 0;
LAB_00102f88:
                  uVar31 = *(ushort *)(pIVar46 + uVar38 * 2) << 8 |
                           *(ushort *)(pIVar46 + uVar38 * 2) >> 8;
                  iVar41 = (int)(short)(*(ushort *)(pIVar34 + uVar38 * 2) << 8 |
                                       *(ushort *)(pIVar34 + uVar38 * 2) >> 8);
                  iVar35 = (int)(short)uVar31;
                  if (((iVar17 <= iVar41) && (iVar35 <= iVar17)) &&
                     ((-1 < (short)uVar31 || (iVar41 < 1)))) {
                    if ((iVar39 < iVar35) || (iVar41 < iVar39)) goto LAB_00103425;
                    if (iVar39 < iVar17) {
                      dVar53 = dVar53 * ((double)(iVar39 - iVar35) / (double)(iVar17 - iVar35));
                    }
                    else {
                      dVar53 = dVar53 * ((double)(iVar41 - iVar39) / (double)(iVar41 - iVar17));
                    }
                  }
                }
              }
              uVar16 = (uint)uVar38 + iVar42;
              uVar38 = (ulong)uVar16;
            } while (uVar16 < uVar50);
            fVar6 = (float)dVar53;
            if ((float)dVar53 == 0.0) goto LAB_00103425;
          }
          puVar23 = _hb_NullPool;
          uVar45 = *(ushort *)(pIVar1 + 2);
          if (uVar45 != 0) {
            puVar23 = pIVar1 + (ushort)(uVar45 << 8 | uVar45 >> 8);
          }
          pIVar47 = (IntType *)puVar23 + local_118;
          local_a0 = pIVar47;
          if (((pIVar1 <= pIVar47) && (pIVar47 <= local_108)) &&
             (local_110 <= (uint)((int)local_108 - (int)pIVar47))) {
            if (local_114 == 0) {
              local_114 = 0;
              if (-1 < (int)uVar25) {
                local_114 = uVar25;
              }
              pvVar20 = pvVar51;
              uVar50 = local_f8;
              if (local_f8 < local_114) {
                do {
                  uVar50 = (uVar50 >> 1) + 8 + uVar50;
                } while (uVar50 < local_114);
                if ((0x15555555 < uVar50) ||
                   (pvVar20 = realloc(pvVar51,(ulong)uVar50 * 0xc), pvVar20 == (void *)0x0)) {
                  local_f8 = ~local_f8;
                  goto LAB_00103328;
                }
              }
              local_f8 = uVar50;
              pvVar51 = pvVar20;
              if (param_7 == '\0') {
                if (uVar25 * 0xc == 0) goto LAB_00103082;
                sVar27 = (size_t)(uVar25 * 0xc);
              }
              else {
                sVar27 = 0x30;
                pvVar20 = (void *)((long)pvVar20 + (ulong)(uVar25 - 4) * 0xc);
              }
              memset(pvVar20,0,sVar27);
            }
LAB_00103082:
            pIVar47 = pIVar47 + local_e0;
            phVar18 = (hb_vector_t *)&local_98;
            if ((uVar22 & 0x2000) != 0) {
              phVar18 = (hb_vector_t *)&local_78;
              cVar14 = TupleVariationData::decompile_points(&local_a0,phVar18,pIVar47);
              if (cVar14 == '\0') goto LAB_001035e0;
            }
            uVar50 = *(uint *)(phVar18 + 4);
            lVar28 = *(long *)(phVar18 + 8);
            uVar16 = uVar25;
            if (uVar50 != 0) {
              uVar16 = uVar50;
            }
            if (-1 < (int)uVar15) {
              uVar43 = 0;
              if (-1 < (int)uVar16) {
                uVar43 = uVar16;
              }
              uVar32 = uVar15;
              if (uVar15 < uVar43) {
                do {
                  uVar32 = (uVar32 >> 1) + 8 + uVar32;
                } while (uVar32 < uVar43);
                if ((0x3fffffff < uVar32) ||
                   (pvVar20 = realloc(local_60,(ulong)uVar32 << 2), pvVar20 == (void *)0x0)) {
                  uVar15 = ~uVar15;
                  goto LAB_00103328;
                }
                local_68 = (ulong)uVar32;
                local_60 = pvVar20;
              }
              local_68 = CONCAT44(uVar43,(uint)local_68);
              bVar13 = TupleValues::decompile<int>(&local_a0,(hb_vector_t *)&local_68,pIVar47,false)
              ;
              if (!bVar13) {
                uVar15 = (uint)local_68;
                goto LAB_00103328;
              }
              if (-1 < (int)uVar26) {
                if (uVar26 < uVar43) {
                  do {
                    uVar26 = (uVar26 >> 1) + 8 + uVar26;
                  } while (uVar26 < uVar43);
                  if ((0x3fffffff < uVar26) ||
                     (pvVar20 = realloc(local_50,(ulong)uVar26 << 2), pvVar20 == (void *)0x0))
                  goto LAB_001038ff;
                  local_58 = (IntType *)(ulong)uVar26;
                  local_50 = pvVar20;
                }
                local_58 = (IntType *)CONCAT44(uVar43,(uint)local_58);
                bVar13 = TupleValues::decompile<int>
                                   (&local_a0,(hb_vector_t *)&local_58,pIVar47,false);
                if (!bVar13) goto LAB_00103303;
                if (uVar50 == 0) {
                  if (fVar6 == _LC3) {
                    uVar26 = 0;
                    if (param_7 != '\0') {
                      uVar26 = uVar25 - 4;
                    }
                    uVar38 = (ulong)uVar26;
                    if (uVar26 < uVar25) {
                      lVar28 = uVar38 * 4;
                      puVar24 = (undefined8 *)((long)pvVar51 + uVar38 * 0xc);
                      do {
                        piVar2 = (int *)((long)local_60 + lVar28);
                        piVar3 = (int *)((long)local_50 + lVar28);
                        lVar28 = lVar28 + 4;
                        *puVar24 = CONCAT44((float)*piVar3 + (float)((ulong)*puVar24 >> 0x20),
                                            (float)*piVar2 + (float)*puVar24);
                        puVar24 = (undefined8 *)((long)puVar24 + 0xc);
                      } while (lVar28 != (uVar38 + 1 + (ulong)((uVar25 - 1) - uVar26)) * 4);
                    }
                  }
                  else {
                    uVar26 = 0;
                    if (param_7 != '\0') {
                      uVar26 = uVar25 - 4;
                    }
                    uVar38 = (ulong)uVar26;
                    if (uVar26 < uVar25) {
                      lVar28 = uVar38 * 4;
                      puVar24 = (undefined8 *)((long)pvVar51 + uVar38 * 0xc);
                      do {
                        piVar2 = (int *)((long)local_60 + lVar28);
                        piVar3 = (int *)((long)local_50 + lVar28);
                        lVar28 = lVar28 + 4;
                        *puVar24 = CONCAT44((float)*piVar3 * fVar6 +
                                            (float)((ulong)*puVar24 >> 0x20),
                                            (float)*piVar2 * fVar6 + (float)*puVar24);
                        puVar24 = (undefined8 *)((long)puVar24 + 0xc);
                      } while (lVar28 != (uVar38 + 1 + (ulong)((uVar25 - 1) - uVar26)) * 4);
                    }
                  }
                }
                else {
                  if (local_cc == 0) {
                    if (param_7 != '\0') {
                      if (bVar52 != false) {
LAB_00103f02:
                        uVar38 = (ulong)(uVar25 - 4);
                        if (3 < uVar25) goto LAB_00103f0f;
                      }
                      goto LAB_001031ac;
                    }
                    contour_point_vector_t::extend
                              ((contour_point_vector_t *)&local_88,(hb_array_t *)&local_b8);
                    if ((int)local_88 < 0) {
                      uVar15 = (uint)local_68;
                      uVar26 = (uint)local_58;
                      goto LAB_00103328;
                    }
                    local_cc = local_88._4_4_;
                    pvVar49 = local_80;
                    if (bVar52 == false) goto LAB_00103d6b;
                    uVar38 = 0;
                    if (uVar25 != 0) goto LAB_00103f0f;
LAB_00103d84:
                    if (fVar6 != _LC3) {
                      if (uVar16 == 0) goto LAB_00103288;
LAB_00103dcf:
                      lVar19 = 0;
                      do {
                        if ((uint)lVar19 < uVar50) {
                          uVar38 = (ulong)*(uint *)(lVar28 + lVar19 * 4);
                        }
                        else {
                          _hb_CrapPool._0_4_ = 0;
                          uVar38 = 0;
                        }
                        if (((uint)uVar38 < local_114) &&
                           ((param_7 == '\0' || (uVar25 - 4 <= (uint)uVar38)))) {
                          iVar17 = *(int *)((long)local_60 + lVar19 * 4);
                          iVar42 = *(int *)((long)local_50 + lVar19 * 4);
                          puVar24 = (undefined8 *)((long)pvVar51 + uVar38 * 0xc);
                          *(undefined1 *)(puVar24 + 1) = 1;
                          *puVar24 = CONCAT44((float)iVar42 * fVar6 +
                                              (float)((ulong)*puVar24 >> 0x20),
                                              (float)iVar17 * fVar6 + (float)*puVar24);
                        }
                        lVar19 = lVar19 + 1;
                      } while ((uint)lVar19 < uVar16);
                      goto LAB_0010327a;
                    }
                    if (uVar16 != 0) goto LAB_00103200;
                  }
                  else {
                    if (bVar52 != false) {
                      if (param_7 != '\0') goto LAB_00103f02;
                      uVar38 = 0;
                      if (uVar25 == 0) goto LAB_00103d84;
LAB_00103f0f:
                      puVar24 = (undefined8 *)(uVar38 * 0xc + (long)pvVar51);
                      puVar29 = (undefined8 *)(local_b8 + uVar38 * 0xc);
                      do {
                        uVar26 = (int)uVar38 + 1;
                        uVar38 = (ulong)uVar26;
                        *puVar29 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                            (float)((ulong)*puVar29 >> 0x20),
                                            (float)*puVar24 + (float)*puVar29);
                        puVar24 = (undefined8 *)((long)puVar24 + 0xc);
                        puVar29 = (undefined8 *)((long)puVar29 + 0xc);
                      } while (uVar26 < uVar25);
                    }
                    if (param_7 == '\0') {
LAB_00103d6b:
                      sVar27 = (size_t)(uVar25 * 0xc);
                      pvVar20 = pvVar51;
                      if (uVar25 * 0xc == 0) goto LAB_00103d84;
                    }
                    else {
LAB_001031ac:
                      sVar27 = 0x30;
                      pvVar20 = (void *)((long)pvVar51 + (ulong)(uVar25 - 4) * 0xc);
                    }
                    memset(pvVar20,0,sVar27);
                    if (fVar6 == _LC3) {
                      if (uVar16 != 0) {
LAB_00103200:
                        lVar19 = 0;
                        do {
                          if ((uint)lVar19 < uVar50) {
                            uVar38 = (ulong)*(uint *)(lVar28 + lVar19 * 4);
                          }
                          else {
                            _hb_CrapPool._0_4_ = 0;
                            uVar38 = 0;
                          }
                          if (((uint)uVar38 < local_114) &&
                             ((param_7 == '\0' || (uVar25 - 4 <= (uint)uVar38)))) {
                            iVar17 = *(int *)((long)local_60 + lVar19 * 4);
                            iVar42 = *(int *)((long)local_50 + lVar19 * 4);
                            puVar24 = (undefined8 *)((long)pvVar51 + uVar38 * 0xc);
                            *(undefined1 *)(puVar24 + 1) = 1;
                            *puVar24 = CONCAT44((float)iVar42 + (float)((ulong)*puVar24 >> 0x20),
                                                (float)iVar17 + (float)*puVar24);
                          }
                          lVar19 = lVar19 + 1;
                        } while ((uint)lVar19 < uVar16);
                      }
                    }
                    else if (uVar16 != 0) goto LAB_00103dcf;
LAB_0010327a:
                    if (param_7 != '\0') goto LAB_001036c4;
                  }
LAB_00103288:
                  uVar38 = (ulong)local_d0;
                  if (local_d0 == 0) {
                    if (uVar25 == 0) {
                      if (-1 < (int)local_100) goto LAB_001036c4;
                    }
                    else {
                      uVar26 = 0;
                      pcVar48 = (char *)(local_b8 + 9);
LAB_001032c5:
                      do {
                        if (*pcVar48 != '\0') {
                          uVar50 = (int)uVar38 + 1;
                          uVar15 = local_100;
                          puVar21 = local_e8;
                          if ((int)local_100 <= (int)uVar38) {
                            if ((int)local_100 < 0) {
LAB_001040a8:
                              _hb_CrapPool._0_4_ = 0;
                              uVar26 = uVar26 + 1;
                              pcVar48 = pcVar48 + 0xc;
                              if (uVar25 == uVar26) goto LAB_00103303;
                              goto LAB_001032c5;
                            }
                            if (local_100 < uVar50) {
                              do {
                                uVar15 = (uVar15 >> 1) + 8 + uVar15;
                              } while (uVar15 < uVar50);
                              if ((0x3fffffff < uVar15) ||
                                 (puVar21 = (uint *)realloc(local_e8,(ulong)uVar15 << 2),
                                 puVar21 == (uint *)0x0)) {
                                local_100 = ~local_100;
                                goto LAB_001040a8;
                              }
                            }
                          }
                          local_e8 = puVar21;
                          local_100 = uVar15;
                          pcVar48 = pcVar48 + 0xc;
                          local_e8[uVar38] = uVar26;
                          uVar38 = (ulong)uVar50;
                          uVar26 = uVar26 + 1;
                          if (uVar25 == uVar26) break;
                          goto LAB_001032c5;
                        }
                        uVar26 = uVar26 + 1;
                        pcVar48 = pcVar48 + 0xc;
                      } while (uVar25 != uVar26);
                      local_d0 = (uint)uVar38;
                      if (-1 < (int)local_100) goto LAB_0010361a;
                    }
LAB_00103303:
                    uVar15 = (uint)local_68;
                    uVar26 = (uint)local_58;
                    goto LAB_00103328;
                  }
LAB_0010361a:
                  if (local_e8 + local_d0 != local_e8) {
                    puVar21 = local_e8;
                    uVar26 = 0;
                    do {
                      uVar15 = *puVar21;
                      if (uVar26 < uVar15 + 1) {
                        uVar50 = uVar15 - uVar26;
                        lVar28 = (ulong)uVar26 * 0xc;
                        pbVar37 = (byte *)((long)pvVar51 + lVar28 + 8);
                        iVar17 = 0;
                        do {
                          bVar11 = *pbVar37;
                          pbVar37 = pbVar37 + 0xc;
                          iVar17 = iVar17 + (uint)bVar11;
                        } while (pbVar37 !=
                                 (byte *)((long)pvVar51 +
                                         ((ulong)uVar50 + (ulong)uVar26) * 0xc + 0x14));
                        if (uVar50 - iVar17 < uVar50) {
                          iVar17 = (uVar50 - iVar17) + 1;
                          cVar14 = *(char *)((float *)((long)pvVar51 + lVar28) + 2);
                          cVar12 = cVar14;
                          uVar50 = uVar26;
LAB_001039c8:
                          do {
                            cVar44 = cVar12;
                            uVar38 = (ulong)uVar50;
                            bVar52 = uVar15 <= uVar50;
                            uVar50 = uVar50 + 1;
                            if (bVar52) {
                              uVar50 = uVar26;
                            }
                            cVar12 = *(char *)((long)pvVar51 + (ulong)uVar50 * 0xc + 8);
                          } while ((cVar44 == '\0') || (uVar30 = uVar38, cVar12 != '\0'));
                          do {
                            uVar16 = uVar26;
                            if (uVar15 <= (uint)uVar30) goto LAB_00103a06;
                            while( true ) {
                              uVar16 = (int)uVar30 + 1;
LAB_00103a06:
                              uVar30 = (ulong)uVar16;
                              lVar19 = uVar30 * 0xc;
                              pfVar4 = (float *)((long)pvVar51 + lVar19);
                              cVar12 = *(char *)(pfVar4 + 2);
                              bVar52 = cVar44 != '\0';
                              cVar44 = cVar12;
                              if (bVar52) break;
                              while( true ) {
                                if (cVar12 != '\0') {
                                  lVar40 = uVar38 * 0xc;
                                  goto LAB_00103b0f;
                                }
                                cVar44 = '\0';
                                if ((uint)uVar30 < uVar15) break;
                                uVar30 = (ulong)uVar26;
                                lVar19 = lVar28;
                                pfVar4 = (float *)((long)pvVar51 + lVar28);
                                cVar12 = cVar14;
                                uVar16 = uVar26;
                              }
                            }
                          } while( true );
                        }
                      }
LAB_001036af:
                      puVar21 = puVar21 + 1;
                      uVar26 = uVar15 + 1;
                    } while (puVar21 != local_e8 + local_d0);
                  }
                }
LAB_001036c4:
                uVar45 = *(ushort *)(local_138 + 2) << 8;
                uVar22 = uVar45 | *(ushort *)(local_138 + 2) >> 8;
                uVar45 = uVar45 & 0x4000;
                local_110 = (uint)(ushort)(*(ushort *)local_138 << 8 | *(ushort *)local_138 >> 8);
                uVar15 = (uint)local_68;
                uVar26 = (uint)local_58;
                bVar52 = bVar13;
                goto LAB_00103425;
              }
LAB_001038ff:
              iVar33 = (int)local_88;
              uVar15 = (uint)local_68;
              goto LAB_00103914;
            }
          }
LAB_001035e0:
          goto LAB_00103328;
        }
        uVar16 = ((local_14c & 0xfff) + 1) * local_128;
        if ((uVar16 <= local_f4) && ((local_14c & 0xfff) < *(uint *)((long)param_1 + 0x14))) {
          puVar21 = (uint *)(param_1[3] + (ulong)(uVar22 & 0xfff) * 8);
          uVar43 = puVar21[1];
          uVar32 = *puVar21;
          uVar38 = (ulong)uVar32;
          if (uVar43 != 0xffffffff) {
            iVar42 = uVar43 - uVar32;
            uVar50 = uVar43 + 1;
LAB_00102ed3:
            pIVar47 = (IntType *)(local_d8 + (ulong)(uVar16 - local_128) * 2);
            if ((uVar22 & 0x4000) == 0) {
              pIVar34 = (IntType *)0x0;
              pIVar46 = (IntType *)0x0;
              goto LAB_00102ef8;
            }
LAB_00103c64:
            uVar30 = 0;
            iVar17 = 0;
            goto LAB_001037d8;
          }
          if (uVar32 == 0xffffffff) {
            iVar42 = 1;
            uVar38 = 0;
            goto LAB_00102ed3;
          }
          uVar50 = uVar32 + 1;
          pIVar47 = (IntType *)(local_d8 + (ulong)(uVar16 - local_128) * 2);
          if ((uVar22 & 0x4000) != 0) {
            iVar42 = 1;
            goto LAB_00103c64;
          }
          pIVar34 = (IntType *)0x0;
          pIVar46 = (IntType *)0x0;
          iVar42 = 1;
          goto LAB_00102f5e;
        }
LAB_00103425:
        local_118 = local_118 + local_110;
        if ((((((ushort)(*(ushort *)pIVar1 << 8 | *(ushort *)pIVar1 >> 8) & 0xfff) <= local_fc) ||
             (local_138 = local_138 +
                          (((uint)(uVar45 != 0) * 2 - ((int)(short)uVar22 >> 0x1f)) * iVar33 + 4),
             local_138 < pIVar1)) || (local_108 < local_138)) ||
           (uVar50 = (int)local_108 - (int)local_138, uVar50 < 4)) break;
        local_fc = local_fc + 1;
        uVar45 = *(ushort *)(local_138 + 2) << 8;
        uVar22 = uVar45 | *(ushort *)(local_138 + 2) >> 8;
        uVar31 = *(ushort *)local_138 << 8 | *(ushort *)local_138 >> 8;
        local_110 = (uint)uVar31;
        uVar16 = ((uVar45 >> 0xe & 1) * 2 - ((int)(short)uVar22 >> 0x1f)) * iVar33 + 4;
        if (uVar16 < local_110) {
          uVar16 = (uint)uVar31;
        }
      } while (uVar16 <= uVar50);
      if (bVar52 != false) {
        uVar50 = uVar25 - 4;
        if (param_7 == '\0') {
          uVar50 = 0;
        }
        if (uVar50 < uVar25) {
          lVar28 = (ulong)uVar50 * 0xc;
          puVar29 = (undefined8 *)(lVar28 + (long)pvVar51);
          puVar24 = (undefined8 *)(local_b8 + lVar28);
          do {
            uVar10 = *puVar29;
            puVar36 = (undefined8 *)((long)puVar24 + 0xc);
            puVar29 = (undefined8 *)((long)puVar29 + 0xc);
            *puVar24 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)*puVar24 >> 0x20),
                                (float)uVar10 + (float)*puVar24);
            puVar24 = puVar36;
          } while (puVar36 !=
                   (undefined8 *)
                   (local_b8 + 0xc + ((ulong)((uVar25 - 1) - uVar50) + (ulong)uVar50) * 0xc));
        }
      }
LAB_00103328:
      iVar33 = (int)local_88;
      if (uVar26 == 0) {
        if (uVar15 == 0) goto LAB_00103344;
LAB_0010392f:
        free(local_60);
      }
      else {
LAB_00103914:
        free(local_50);
        if (uVar15 != 0) goto LAB_0010392f;
LAB_00103344:
      }
      if ((int)local_78 != 0) {
        free(local_70);
      }
      if (local_100 != 0) {
        free(local_e8);
      }
      if (local_f8 != 0) {
        free(pvVar51);
      }
      if (iVar33 != 0) {
        free(local_80);
      }
    }
  }
  if (local_c8 != 0) {
    free(local_90);
  }
LAB_00102be0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103b0f:
  uVar50 = (uint)uVar38 + 1;
  if (uVar15 <= (uint)uVar38) {
    uVar50 = uVar26;
  }
  uVar38 = (ulong)uVar50;
  pfVar5 = (float *)((long)pvVar51 + uVar38 * 0xc);
  if (uVar50 == uVar16) goto LAB_00103bd0;
  fVar6 = *(float *)((long)pvVar49 + lVar40);
  fVar7 = *(float *)((long)pvVar49 + lVar19);
  fVar8 = *(float *)((long)pvVar49 + uVar38 * 0xc);
  fVar55 = *(float *)((long)pvVar51 + lVar40);
  fVar9 = *pfVar4;
  fVar54 = fVar55;
  if (NAN(fVar6) || NAN(fVar7)) {
LAB_00103a68:
    if (fVar8 <= fVar7) {
      fVar54 = (float)((uint)fVar55 & -(uint)(fVar6 < fVar7) | ~-(uint)(fVar6 < fVar7) & (uint)fVar9
                      );
    }
    else if (fVar6 < fVar7) {
      if (fVar8 < fVar7) goto LAB_00103a7f;
      fVar54 = (float)((uint)fVar55 & -(uint)(fVar7 < fVar6) | ~-(uint)(fVar7 < fVar6) & (uint)fVar9
                      );
    }
    else if (fVar8 < fVar6) {
LAB_00103a7f:
      fVar54 = fVar55 + ((fVar8 - fVar6) / (fVar7 - fVar6)) * (fVar9 - fVar55);
    }
  }
  else {
    if (fVar6 != fVar7) {
      if (fVar7 < fVar6) goto LAB_00103a68;
      if ((fVar8 <= fVar6) || (fVar54 = fVar9, fVar7 <= fVar8)) goto LAB_00103a97;
      goto LAB_00103a7f;
    }
    if (fVar55 != fVar9) {
      fVar54 = 0.0;
    }
  }
LAB_00103a97:
  fVar6 = *(float *)((long)pvVar49 + lVar40 + 4);
  fVar7 = *(float *)((long)pvVar49 + lVar19 + 4);
  *pfVar5 = fVar54;
  fVar8 = *(float *)((long)pvVar49 + uVar38 * 0xc + 4);
  fVar55 = *(float *)((long)pvVar51 + lVar40 + 4);
  fVar9 = *(float *)((long)pvVar51 + lVar19 + 4);
  if (NAN(fVar6) || NAN(fVar7)) {
LAB_00103ad0:
    if (fVar8 <= fVar7) {
      fVar55 = (float)((uint)fVar55 & -(uint)(fVar6 < fVar7) | ~-(uint)(fVar6 < fVar7) & (uint)fVar9
                      );
    }
    else if (fVar6 < fVar7) {
      if (fVar8 < fVar7) goto LAB_00103ae7;
      fVar55 = (float)((uint)fVar55 & -(uint)(fVar7 < fVar6) | ~-(uint)(fVar7 < fVar6) & (uint)fVar9
                      );
    }
    else if (fVar8 < fVar6) {
LAB_00103ae7:
      fVar55 = fVar55 + ((fVar8 - fVar6) / (fVar7 - fVar6)) * (fVar9 - fVar55);
    }
LAB_00103aff:
    pfVar5[1] = fVar55;
  }
  else {
    if (fVar6 == fVar7) {
      if (fVar55 != fVar9) {
        fVar55 = 0.0;
      }
      goto LAB_00103aff;
    }
    if (fVar7 < fVar6) goto LAB_00103ad0;
    if (fVar8 <= fVar6) goto LAB_00103aff;
    if (fVar8 < fVar7) goto LAB_00103ae7;
    pfVar5[1] = fVar9;
  }
  iVar17 = iVar17 + -1;
  if (iVar17 == 0) goto LAB_001036af;
  goto LAB_00103b0f;
LAB_00103bd0:
  cVar12 = *(char *)(pfVar5 + 2);
  goto LAB_001039c8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>(hb_font_t*, OT::glyf_accelerator_t
   const&, contour_point_vector_t&, contour_point_vector_t*, head_maxp_info_t*, unsigned int*, bool,
   bool, bool, hb_array_t<int const>, hb_map_t*, unsigned int, unsigned int*) const */

bool OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
               (undefined8 *param_1,long param_2,undefined8 *param_3,contour_point_vector_t *param_4
               ,uint *param_5,long param_6,uint *param_7,char param_8,char param_9,bool param_10,
               undefined8 param_11,ulong param_12,
               hb_hashmap_t<unsigned_int,unsigned_int,true> *param_13,uint param_14,uint *param_15)

{
  float *pfVar1;
  undefined8 uVar2;
  uint *puVar3;
  ushort *puVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  ulong uVar12;
  float *pfVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  float *pfVar24;
  ushort *puVar25;
  ulong uVar26;
  float *pfVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  undefined2 uVar32;
  ushort *puVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  ushort *puVar38;
  long in_FS_OFFSET;
  bool bVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint local_164;
  uint *local_160;
  contour_point_vector_t *local_158;
  undefined8 local_138;
  uint local_120;
  uint local_fc;
  float *local_f8;
  uint local_bc;
  undefined8 local_b8;
  void *local_b0;
  float *local_a8;
  uint local_a0;
  undefined4 local_9c;
  ushort *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  undefined1 local_64 [16];
  undefined8 local_50;
  long local_40;
  
  local_160 = param_15;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = param_11;
  local_164 = (uint)param_12;
  if (0x40 < param_14) {
LAB_00104928:
    bVar5 = 0;
    goto LAB_00104651;
  }
  local_bc = 0;
  if (param_15 == (uint *)0x0) {
    local_160 = &local_bc;
    uVar22 = 0;
  }
  else {
    uVar22 = *param_15;
    if (0x800 < uVar22) goto LAB_00104928;
  }
  *local_160 = uVar22 + 1;
  local_78 = 1;
  local_74 = 1;
  local_70 = 0;
  local_68 = 1;
  local_66 = 0;
  local_50 = 0;
  local_64 = (undefined1  [16])0x0;
  if (param_13 == (hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0) {
    param_13 = (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_78;
  }
  if (param_6 != 0) {
    uVar22 = *(uint *)(param_6 + 0x24);
    if (*(uint *)(param_6 + 0x24) < param_14) {
      uVar22 = param_14;
    }
    *(uint *)(param_6 + 0x24) = uVar22;
  }
  if ((uint)param_12 == 0) {
    local_164 = *(uint *)(param_2 + 0x78);
    local_138 = *(undefined8 *)(param_2 + 0x80);
    param_12 = 0;
  }
  local_b8 = 0;
  local_b0 = (void *)0x0;
  if (*(int *)((long)param_1 + 0x1c) != 1) {
    if (*(int *)((long)param_1 + 0x1c) == 2) {
      puVar4 = (ushort *)*param_1;
      puVar38 = (ushort *)(param_1[2] + 10);
      if ((puVar4 <= puVar38) &&
         (puVar25 = (ushort *)((long)puVar4 + (ulong)*(uint *)(param_1 + 1)), puVar38 <= puVar25)) {
        uVar22 = (int)puVar25 - (int)puVar38;
        if (3 < uVar22) {
          uVar7 = *(ushort *)(param_1[2] + 10);
          uVar20 = uVar7 >> 8;
          uVar30 = -(uint)((uVar20 & 1) == 0) & 0xfffffffe;
          if ((uVar20 & 8) == 0) {
            if ((uVar20 & 0x40) == 0) {
              uVar18 = uVar30 + 8;
              if ((uVar20 & 0x80) != 0) {
                uVar18 = uVar30 + 0x10;
              }
              uVar37 = (ulong)uVar18;
            }
            else {
              uVar37 = (ulong)(uVar30 + 0xc);
            }
          }
          else {
            uVar37 = (ulong)(uVar30 + 10);
          }
          if ((uint)uVar37 <= uVar22) {
            uVar22 = 0;
            uVar30 = 0;
            uVar20 = uVar7 >> 8;
            uVar32 = _LC16;
            if ((uVar7 & 0x100) == 0) goto LAB_00105ae7;
LAB_00105a01:
            iVar28 = (int)(short)(puVar38[2] << 8 | puVar38[2] >> 8);
            iVar34 = (int)(short)(puVar38[3] << 8 | puVar38[3] >> 8);
            if ((uVar20 & 2) == 0) goto LAB_00105afa;
LAB_00105a20:
            fVar43 = (float)iVar34;
            fVar45 = (float)iVar28;
            do {
              uVar18 = uVar30 + 4;
              if ((int)uVar22 < 0) {
LAB_00104910:
                bVar5 = 0;
                goto LAB_00104913;
              }
              if (uVar22 < uVar18) {
                do {
                  uVar22 = uVar22 + 8 + (uVar22 >> 1);
                } while (uVar22 < uVar18);
                if ((0x15555555 < uVar22) ||
                   (pvVar11 = realloc(local_b0,(ulong)uVar22 * 0xc), pvVar11 == (void *)0x0))
                goto LAB_00104910;
                local_b0 = pvVar11;
                local_b8 = CONCAT44(local_b8._4_4_,uVar22);
                uVar32 = _LC16;
              }
              uVar8 = uVar30 + 1;
              if (((int)uVar30 < (int)uVar22) || (uVar12 = (ulong)uVar22, uVar8 <= uVar22)) {
LAB_00105a5d:
                local_b8 = CONCAT44(uVar8,(int)local_b8);
                uVar18 = uVar30 + 5;
                pfVar1 = (float *)((long)local_b0 + (ulong)uVar30 * 0xc);
                *(undefined2 *)(pfVar1 + 2) = uVar32;
                *pfVar1 = fVar45;
                pfVar1[1] = fVar43;
                uVar30 = uVar8;
              }
              else {
                do {
                  uVar21 = (int)uVar12 + 8 + (int)(uVar12 >> 1);
                  uVar12 = (ulong)uVar21;
                } while (uVar21 < uVar8);
                if ((uVar21 < 0x15555556) &&
                   (pvVar11 = realloc(local_b0,uVar12 * 0xc), uVar32 = _LC16, pvVar11 != (void *)0x0
                   )) {
                  local_b0 = pvVar11;
                  local_b8 = (ulong)uVar21;
                  uVar22 = uVar21;
                  goto LAB_00105a5d;
                }
                _hb_CrapPool = 0;
                uVar22 = ~uVar22;
                local_b8 = CONCAT44(local_b8._4_4_,uVar22);
                DAT_001008e8 = 0;
              }
              if (((((*puVar38 & 0x2000) == 0) ||
                   (puVar38 = (ushort *)((long)puVar38 + uVar37), puVar38 < puVar4)) ||
                  (puVar25 < puVar38)) || (uVar8 = (int)puVar25 - (int)puVar38, uVar8 < 4)) {
LAB_00105b10:
                uVar30 = 0;
                if (-1 < (int)uVar18) {
                  uVar30 = uVar18;
                }
                if ((int)uVar22 < 0) goto LAB_00104910;
                local_158 = (contour_point_vector_t *)&local_b8;
                local_fc = 0;
                goto LAB_00104745;
              }
              uVar7 = *puVar38;
              uVar20 = uVar7 >> 8;
              uVar21 = -(uint)((uVar20 & 1) == 0) & 0xfffffffe;
              if ((uVar20 & 8) == 0) {
                if ((uVar20 & 0x40) == 0) {
                  uVar10 = uVar21 + 8;
                  if ((uVar20 & 0x80) != 0) {
                    uVar10 = uVar21 + 0x10;
                  }
                  uVar37 = (ulong)uVar10;
                }
                else {
                  uVar37 = (ulong)(uVar21 + 0xc);
                }
              }
              else {
                uVar37 = (ulong)(uVar21 + 10);
              }
              if (uVar8 < (uint)uVar37) goto LAB_00105b10;
              uVar20 = uVar7 >> 8;
              if ((uVar7 & 0x100) != 0) goto LAB_00105a01;
LAB_00105ae7:
              iVar28 = (int)(char)puVar38[2];
              iVar34 = (int)*(char *)((long)puVar38 + 5);
              if ((uVar20 & 2) != 0) goto LAB_00105a20;
LAB_00105afa:
              fVar45 = 0.0;
              fVar43 = 0.0;
            } while( true );
          }
        }
      }
      local_158 = (contour_point_vector_t *)&local_b8;
      uVar30 = 4;
      uVar37 = 0;
      uVar22 = 0;
      local_fc = 0;
LAB_001047d0:
      do {
        uVar18 = (int)(uVar37 >> 1) + 8 + (int)uVar37;
        uVar37 = (ulong)uVar18;
      } while (uVar18 < uVar30);
      if (uVar18 < 0x15555556) goto LAB_001042d4;
      bVar5 = 0;
      *(uint *)local_158 = ~uVar22;
      iVar28 = (int)local_b8;
    }
    else {
      local_158 = (contour_point_vector_t *)&local_b8;
      local_fc = 0;
      uVar30 = 4;
      uVar37 = 8;
LAB_001042d4:
      pvVar11 = realloc(*(void **)(local_158 + 8),uVar37 * 0xc);
      if (pvVar11 == (void *)0x0) {
        if (*(uint *)local_158 < (uint)uVar37) {
          bVar5 = 0;
          *(uint *)local_158 = ~*(uint *)local_158;
          iVar28 = (int)local_b8;
          goto LAB_0010463e;
        }
        pvVar11 = *(void **)(local_158 + 8);
      }
      else {
        *(void **)(local_158 + 8) = pvVar11;
        *(uint *)local_158 = (uint)uVar37;
      }
LAB_0010430f:
      uVar22 = *(uint *)(local_158 + 4);
      if (uVar22 < uVar30) {
        uVar18 = (uVar30 - uVar22) * 0xc;
        if (uVar18 != 0) {
          memset((void *)((long)pvVar11 + (ulong)uVar22 * 0xc),0,(ulong)uVar18);
          pvVar11 = *(void **)(local_158 + 8);
        }
      }
      uVar22 = uVar30 - 4;
      lVar16 = param_1[2];
      local_9c = 0;
      *(uint *)(local_158 + 4) = uVar30;
      uVar21 = (uint)(uVar22 <= uVar30) * 4;
      pfVar1 = (float *)((long)pvVar11 + (ulong)uVar22 * 0xc);
      local_a0 = uVar21;
      uVar18 = *(uint *)(param_1 + 3);
      uVar37 = (ulong)uVar18;
      local_a8 = pfVar1;
      puVar14 = (uint *)param_3[1];
      uVar8 = *puVar14;
      if (uVar18 < uVar8) {
        lVar17 = *(long *)(puVar14 + 6);
        if (lVar17 != 0) {
          lVar17 = *(long *)(lVar17 + 0x10);
        }
        uVar7 = *(ushort *)(lVar17 + 2 + (ulong)uVar18 * 4);
        uVar7 = uVar7 << 8 | uVar7 >> 8;
LAB_001043e9:
        uVar20 = *(ushort *)(lVar16 + 2);
        iVar28 = (int)(short)(uVar20 << 8 | uVar20 >> 8) - (int)(short)uVar7;
        fVar43 = (float)iVar28;
      }
      else {
        if (uVar18 < puVar14[1]) {
          lVar17 = *(long *)(puVar14 + 6);
          if (lVar17 != 0) {
            lVar17 = *(long *)(lVar17 + 0x10);
          }
          uVar7 = *(ushort *)(lVar17 + (ulong)uVar8 * 4 + (ulong)(uVar18 - uVar8) * 2);
          uVar7 = uVar7 << 8 | uVar7 >> 8;
          goto LAB_001043e9;
        }
        iVar28 = 0;
        fVar43 = 0.0;
      }
      puVar3 = (uint *)param_3[2];
      uVar10 = *puVar3;
      if (uVar18 < uVar10) {
        lVar17 = *(long *)(puVar3 + 6);
        if (lVar17 != 0) {
          lVar17 = *(long *)(lVar17 + 0x10);
        }
        uVar7 = *(ushort *)(lVar17 + 2 + uVar37 * 4);
        iVar34 = (int)(short)(uVar7 << 8 | uVar7 >> 8);
      }
      else if (uVar18 < puVar3[1]) {
        lVar17 = *(long *)(puVar3 + 6);
        if (lVar17 != 0) {
          lVar17 = *(long *)(lVar17 + 0x10);
        }
        uVar7 = *(ushort *)(lVar17 + (ulong)uVar10 * 4 + (ulong)(uVar18 - uVar10) * 2);
        iVar34 = (int)(short)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        iVar34 = 0;
      }
      uVar7 = *(ushort *)(lVar16 + 8);
      iVar34 = (short)(uVar7 << 8 | uVar7 >> 8) + iVar34;
      if (uVar18 < puVar14[1]) {
        lVar16 = *(long *)(puVar14 + 6);
        if (lVar16 != 0) {
          lVar16 = *(long *)(lVar16 + 0x10);
        }
        uVar12 = (ulong)(uVar8 - 1);
        if (uVar18 < uVar8 - 1) {
          uVar12 = uVar37;
        }
        uVar7 = *(ushort *)(lVar16 + uVar12 * 4);
        uVar8 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        uVar8 = 0;
        if (puVar14[2] == 0) {
          uVar8 = puVar14[4];
        }
      }
      if (uVar18 < puVar3[1]) {
        lVar16 = *(long *)(puVar3 + 6);
        if (lVar16 != 0) {
          lVar16 = *(long *)(lVar16 + 0x10);
        }
        uVar12 = (ulong)(uVar10 - 1);
        if (uVar18 < uVar10 - 1) {
          uVar12 = uVar37;
        }
        uVar7 = *(ushort *)(lVar16 + uVar12 * 4);
        iVar9 = iVar34 - (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
      }
      else {
        iVar9 = iVar34;
        if (puVar3[2] == 0) {
          iVar9 = iVar34 - puVar3[4];
        }
      }
      if (uVar30 < uVar22) {
        pfVar13 = (float *)&_hb_CrapPool;
        _hb_CrapPool = 0;
        DAT_001008e8 = 0;
        local_f8 = (float *)&_hb_CrapPool;
      }
      else {
        *pfVar1 = fVar43;
        pfVar13 = pfVar1 + 9;
        pfVar1[3] = (float)(int)(uVar8 + iVar28);
        pfVar1[7] = (float)iVar34;
        local_f8 = pfVar1;
      }
      pfVar13[1] = (float)iVar9;
      if (local_164 != 0) {
        bVar40 = false;
        if (param_10 != false) {
          bVar40 = *(int *)((long)param_1 + 0x1c) == 1;
        }
        uVar18 = *(uint *)(local_158 + 4);
        lVar16 = *(long *)(local_158 + 8);
        if (local_fc != 0) {
          uVar8 = uVar18 - local_fc;
          bVar39 = local_fc <= uVar18;
          uVar18 = 0;
          if (bVar39) {
            uVar18 = uVar8;
          }
          lVar16 = lVar16 + (ulong)local_fc * 0xc;
        }
        gvar::accelerator_t::apply_deltas_to_points
                  (*param_3,uVar37,local_138,local_164,lVar16,uVar18,bVar40);
      }
      iVar28 = (int)local_b8;
      iVar34 = *(int *)((long)param_1 + 0x1c);
      if ((param_5 == (uint *)0x0) || (param_14 != 0)) {
        if (iVar34 == 1) {
          if (param_14 == 0) goto LAB_00104ba1;
        }
        else {
          if (iVar34 == 2) {
LAB_00104978:
            puVar4 = (ushort *)*param_1;
            puVar38 = (ushort *)(param_1[2] + 10);
            if ((puVar38 < puVar4) ||
               (puVar25 = (ushort *)((long)puVar4 + (ulong)*(uint *)(param_1 + 1)),
               puVar25 < puVar38)) {
LAB_00104b00:
              local_120 = 0;
            }
            else {
              uVar18 = (int)puVar25 - (int)puVar38;
              if (uVar18 < 4) goto LAB_00104b00;
              bVar5 = *(byte *)(param_1[2] + 0xb);
              uVar8 = -(uint)((bVar5 & 1) == 0) & 0xfffffffe;
              if ((bVar5 & 8) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  uVar10 = uVar8 + 0x10;
                  if ((bVar5 & 0x80) == 0) {
                    uVar10 = uVar8 + 8;
                  }
                }
                else {
                  uVar10 = uVar8 + 0xc;
                }
              }
              else {
                uVar10 = uVar8 + 10;
              }
              local_120 = 0;
              if (uVar10 <= uVar18) {
                do {
                  lVar16 = *(long *)(param_13 + 0x28);
                  uVar18 = *(uint *)(param_13 + 0x20);
                  uVar7 = puVar38[1] << 8 | puVar38[1] >> 8;
                  uVar8 = (uint)uVar7;
                  uVar36 = uVar8 * -0x61c8864f;
                  if (lVar16 != 0) {
                    uVar37 = (ulong)(uVar36 & 0x3fffffff) % (ulong)uVar18;
                    puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                    bVar5 = (byte)puVar14[1];
                    if ((bVar5 & 2) != 0) {
                      iVar34 = 0;
                      do {
                        if (uVar8 == *puVar14) {
                          if ((bVar5 & 1) != 0) goto LAB_00104a8f;
                          break;
                        }
                        iVar34 = iVar34 + 1;
                        uVar37 = (ulong)((int)uVar37 + iVar34 & *(uint *)(param_13 + 0x1c));
                        puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                        bVar5 = (byte)puVar14[1];
                      } while ((bVar5 & 2) != 0);
                    }
                  }
                  uVar35 = (uint)uVar7;
                  if (param_13[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
                    uVar29 = *(uint *)(param_13 + 0x18);
                    if (*(uint *)(param_13 + 0x1c) <= (uVar29 >> 1) + uVar29) {
                      cVar6 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_13,0);
                      if (cVar6 == '\0') goto LAB_00104d32;
                      lVar16 = *(long *)(param_13 + 0x28);
                      uVar18 = *(uint *)(param_13 + 0x20);
                      uVar29 = *(uint *)(param_13 + 0x18);
                    }
                    iVar34 = *(int *)(param_13 + 0x14);
                    uVar37 = (ulong)(uVar36 & 0x3fffffff) % (ulong)uVar18;
                    lVar17 = uVar37 * 0xc;
                    puVar14 = (uint *)(lVar16 + lVar17);
                    bVar5 = (byte)puVar14[1];
                    if ((bVar5 & 2) == 0) {
                      *puVar14 = uVar35;
                      *(ulong *)(puVar14 + 1) =
                           (ulong)((uVar36 & 0x3fffffff) * 4) | 0xffffffff00000003;
                      *(uint *)(param_13 + 0x18) = uVar29 + 1;
                      *(int *)(param_13 + 0x14) = iVar34 + 1;
                    }
                    else {
                      uVar19 = 0;
                      uVar18 = 0xffffffff;
                      do {
                        if (uVar35 == *puVar14) {
                          if (uVar18 == 0xffffffff) goto LAB_00104ce7;
                          goto LAB_00104cdc;
                        }
                        if ((uVar18 == 0xffffffff) && ((bVar5 & 1) == 0)) {
                          uVar18 = (uint)uVar37;
                        }
                        uVar19 = uVar19 + 1;
                        uVar37 = (ulong)((uint)uVar37 + uVar19 & *(uint *)(param_13 + 0x1c));
                        lVar17 = uVar37 * 0xc;
                        puVar14 = (uint *)(lVar16 + lVar17);
                        bVar5 = (byte)puVar14[1];
                      } while ((bVar5 & 2) != 0);
                      if (uVar18 == 0xffffffff) {
LAB_00104eaa:
                        uVar29 = uVar29 + 1;
                      }
                      else {
LAB_00104cdc:
                        lVar17 = (ulong)uVar18 * 0xc;
LAB_00104ce7:
                        puVar14 = (uint *)(lVar16 + lVar17);
                        if (((byte)puVar14[1] & 2) == 0) goto LAB_00104eaa;
                        iVar34 = iVar34 - ((byte)puVar14[1] & 1);
                      }
                      *puVar14 = uVar35;
                      *(ulong *)(puVar14 + 1) = (ulong)(uVar8 * 0x78dde6c4) | 0xffffffff00000003;
                      *(uint *)(param_13 + 0x18) = uVar29;
                      *(int *)(param_13 + 0x14) = iVar34 + 1;
                      if ((*(ushort *)(param_13 + 0x12) < uVar19) &&
                         (*(uint *)(param_13 + 0x1c) < uVar29 << 3)) {
                        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                                  (param_13,*(uint *)(param_13 + 0x1c) - 8);
                      }
                    }
                  }
LAB_00104d32:
                  uVar18 = *(uint *)(param_4 + 4);
                  if (param_10 == false) {
LAB_00104ec8:
                    glyf_accelerator_t::glyph_for_gid((uint)&local_98,SUB81(param_3,0));
                    param_12 = param_12 & 0xffffffff00000000 | (ulong)local_164;
                    bVar40 = get_points<OT::glyf_accelerator_t>
                                       (&local_98,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,param_9,param_10,local_138,param_12,param_13,
                                        param_14 + 1,local_160);
                    if (!bVar40) {
                      lVar16 = *(long *)(param_13 + 0x28);
                      if (lVar16 == 0) goto LAB_0010552f;
                      uVar37 = (ulong)(uVar36 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                      puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                      bVar5 = (byte)puVar14[1];
                      if ((bVar5 & 2) == 0) goto LAB_0010552f;
                      iVar34 = 0;
                      goto LAB_00105dc9;
                    }
                    uVar29 = *(uint *)(param_4 + 4);
                    uVar8 = (uint)*puVar38;
                    pfVar13 = *(float **)(param_4 + 8);
                    if (uVar18 == 0) {
LAB_00104fbc:
                      uVar37 = (ulong)uVar29;
                      if (param_9 == '\0') goto LAB_00104fd2;
                      goto LAB_00104fc1;
                    }
                    if (uVar18 <= uVar29) goto LAB_00104fb1;
                    pfVar13 = pfVar13 + (ulong)uVar18 * 3;
                    if (param_9 != '\0') goto LAB_00105437;
                    uVar37 = 0;
                    uVar18 = (uint)(*puVar38 >> 8);
LAB_00104fdf:
                    uVar12 = (ulong)*(uint *)(param_4 + 4);
                    if (((uVar18 & 2) == 0) && (param_10 == false)) {
                      if ((uVar18 & 1) == 0) {
                        uVar26 = (ulong)(byte)puVar38[2];
                        uVar23 = (ulong)*(byte *)((long)puVar38 + 5);
                      }
                      else {
                        uVar26 = (ulong)(ushort)(puVar38[2] << 8 | puVar38[2] >> 8);
                        uVar23 = (ulong)(ushort)(puVar38[3] << 8 | puVar38[3] >> 8);
                      }
                      if (((uint)uVar23 < (uint)uVar37) && ((uint)uVar26 < *(uint *)(param_4 + 4)))
                      {
                        uVar2 = *(undefined8 *)(*(long *)(param_4 + 8) + uVar26 * 0xc);
                        fVar43 = (float)uVar2 - (float)*(undefined8 *)(pfVar13 + uVar23 * 3);
                        fVar45 = (float)((ulong)uVar2 >> 0x20) -
                                 (float)((ulong)*(undefined8 *)(pfVar13 + uVar23 * 3) >> 0x20);
                        if (fVar43 == 0.0) {
                          if (fVar45 != 0.0) {
                            pfVar24 = pfVar13;
                            do {
                              pfVar31 = pfVar24 + 3;
                              pfVar24[1] = pfVar24[1] + fVar45;
                              pfVar24 = pfVar31;
                            } while (pfVar13 + uVar37 * 3 != pfVar31);
                          }
                        }
                        else {
                          pfVar24 = pfVar13;
                          if (fVar45 == 0.0) {
                            do {
                              pfVar31 = pfVar24 + 3;
                              *pfVar24 = *pfVar24 + fVar43;
                              pfVar24 = pfVar31;
                            } while (pfVar13 + uVar37 * 3 != pfVar31);
                          }
                          else {
                            do {
                              pfVar31 = pfVar24 + 3;
                              *(ulong *)pfVar24 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) + fVar45,
                                            (float)*(undefined8 *)pfVar24 + fVar43);
                              pfVar24 = pfVar31;
                            } while (pfVar13 + uVar37 * 3 != pfVar31);
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar8 = (uint)*puVar38;
                    if (param_9 != '\0') {
                      if ((*puVar38 & 2) != 0) goto LAB_00104ec8;
                      pfVar13 = *(float **)(param_4 + 8);
                      uVar29 = uVar18;
                      if (uVar18 != 0) {
LAB_00104fb1:
                        uVar29 = uVar29 - uVar18;
                        pfVar13 = pfVar13 + (ulong)uVar18 * 3;
                        goto LAB_00104fbc;
                      }
LAB_00105437:
                      uVar37 = 0;
LAB_00104fc1:
                      if ((uVar8 & 2) != 0) {
                        uVar18 = (uint)uVar37;
                        uVar8 = uVar18 - 4;
                        pfVar24 = pfVar1;
                        do {
                          if (uVar8 < uVar18) {
                            pfVar31 = pfVar13 + (ulong)uVar8 * 3;
                          }
                          else {
                            _hb_CrapPool = 0;
                            pfVar31 = (float *)&_hb_CrapPool;
                            DAT_001008e8 = 0;
                          }
                          pfVar27 = pfVar24;
                          if (uVar21 <= (4 - uVar18) + uVar8) {
                            _hb_CrapPool = 0;
                            pfVar27 = (float *)&_hb_CrapPool;
                            DAT_001008e8 = 0;
                          }
                          uVar8 = uVar8 + 1;
                          pfVar24 = pfVar24 + 3;
                          *(undefined8 *)pfVar27 = *(undefined8 *)pfVar31;
                          pfVar27[2] = pfVar31[2];
                        } while (uVar18 != uVar8);
                        uVar8 = (uint)*puVar38;
                      }
LAB_00104fd2:
                      fVar43 = _LC3;
                      uVar7 = (ushort)uVar8;
                      uVar18 = uVar8 >> 8;
                      if ((int)uVar37 != 0) {
                        puVar33 = puVar38 + 3;
                        if ((uVar18 & 1) != 0) {
                          puVar33 = puVar38 + 4;
                        }
                        if ((uVar8 & 0x800) == 0) {
                          if ((uVar8 & 0x4000) == 0) {
                            if ((uVar18 & 0x80) == 0) {
                              fVar47 = 0.0;
                              fVar46 = 0.0;
                              fVar45 = _LC3;
                              fVar44 = _LC3;
                            }
                            else {
                              fVar46 = ((float)(int)(short)(puVar33[1] << 8 | puVar33[1] >> 8) + 0.0
                                       ) * __LC17;
                              fVar47 = ((float)(int)(short)(puVar33[2] << 8 | puVar33[2] >> 8) + 0.0
                                       ) * __LC17;
                              fVar45 = ((float)(int)(short)(puVar33[3] << 8 | puVar33[3] >> 8) + 0.0
                                       ) * __LC17;
                              fVar44 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) *
                                       __LC17;
                            }
                          }
                          else {
                            fVar47 = 0.0;
                            fVar46 = 0.0;
                            fVar45 = ((float)(int)(short)(puVar33[1] << 8 | puVar33[1] >> 8) + 0.0)
                                     * __LC17;
                            fVar44 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) *
                                     __LC17;
                          }
                        }
                        else {
                          fVar47 = 0.0;
                          fVar46 = 0.0;
                          fVar45 = ((float)(int)(short)(*puVar33 << 8 | *puVar33 >> 8) + 0.0) *
                                   __LC17;
                          fVar44 = fVar45;
                        }
                        if (local_120 < *(uint *)(local_158 + 4)) {
                          pfVar24 = (float *)(*(long *)(local_158 + 8) + (ulong)local_120 * 0xc);
                        }
                        else {
                          _hb_CrapPool = 0;
                          pfVar24 = (float *)&_hb_CrapPool;
                          DAT_001008e8 = 0;
                          uVar7 = *puVar38;
                          uVar18 = (uint)(uVar7 >> 8);
                        }
                        if ((uVar7 & 0x18) == 8) {
                          fVar41 = (float)*(undefined8 *)pfVar24;
                          fVar42 = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20);
                          if (fVar41 == 0.0) {
                            if (fVar42 != 0.0) {
                              pfVar13[1] = fVar42 + pfVar13[1];
                              pfVar31 = pfVar13;
                              while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                                pfVar31[1] = pfVar31[1] + pfVar24[1];
                              }
                            }
                          }
                          else if (fVar42 == 0.0) {
                            *pfVar13 = fVar41 + *pfVar13;
                            pfVar31 = pfVar13;
                            while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                              *pfVar31 = *pfVar31 + *pfVar24;
                            }
                          }
                          else {
                            *(ulong *)pfVar13 =
                                 CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)pfVar13 >> 0x20),
                                          fVar41 + (float)*(undefined8 *)pfVar13);
                            pfVar31 = pfVar13;
                            while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                              *(ulong *)pfVar31 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar31 >> 0x20) +
                                            (float)((ulong)*(undefined8 *)pfVar24 >> 0x20),
                                            (float)*(undefined8 *)pfVar31 +
                                            (float)*(undefined8 *)pfVar24);
                            }
                          }
                          if ((((fVar44 != fVar43) || (fVar46 != 0.0)) || (fVar47 != 0.0)) ||
                             (fVar45 != fVar43)) {
                            pfVar24 = pfVar13;
                            do {
                              pfVar31 = pfVar24 + 3;
                              fVar43 = (float)*(undefined8 *)pfVar24;
                              fVar41 = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20);
                              *(ulong *)pfVar24 =
                                   CONCAT44(fVar41 * fVar45 + fVar43 * fVar46,
                                            fVar41 * fVar47 + fVar43 * fVar44);
                              pfVar24 = pfVar31;
                            } while (pfVar13 + uVar37 * 3 != pfVar31);
                          }
                        }
                        else {
                          if (((fVar44 != _LC3) || (fVar46 != 0.0)) ||
                             ((fVar47 != 0.0 || (fVar45 != _LC3)))) {
                            pfVar31 = pfVar13;
                            do {
                              pfVar27 = pfVar31 + 3;
                              fVar43 = (float)*(undefined8 *)pfVar31;
                              fVar41 = (float)((ulong)*(undefined8 *)pfVar31 >> 0x20);
                              *(ulong *)pfVar31 =
                                   CONCAT44(fVar41 * fVar45 + fVar43 * fVar46,
                                            fVar41 * fVar47 + fVar43 * fVar44);
                              pfVar31 = pfVar27;
                            } while (pfVar13 + uVar37 * 3 != pfVar27);
                          }
                          fVar43 = (float)*(undefined8 *)pfVar24;
                          fVar45 = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20);
                          if (fVar43 == 0.0) {
                            if (fVar45 != 0.0) {
                              pfVar13[1] = fVar45 + pfVar13[1];
                              pfVar31 = pfVar13;
                              while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                                pfVar31[1] = pfVar31[1] + pfVar24[1];
                              }
                            }
                          }
                          else if (fVar45 == 0.0) {
                            *pfVar13 = fVar43 + *pfVar13;
                            pfVar31 = pfVar13;
                            while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                              *pfVar31 = *pfVar31 + *pfVar24;
                            }
                          }
                          else {
                            *(ulong *)pfVar13 =
                                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)pfVar13 >> 0x20),
                                          fVar43 + (float)*(undefined8 *)pfVar13);
                            pfVar31 = pfVar13;
                            while (pfVar31 = pfVar31 + 3, pfVar13 + uVar37 * 3 != pfVar31) {
                              *(ulong *)pfVar31 =
                                   CONCAT44((float)((ulong)*(undefined8 *)pfVar31 >> 0x20) +
                                            (float)((ulong)*(undefined8 *)pfVar24 >> 0x20),
                                            (float)*(undefined8 *)pfVar31 +
                                            (float)*(undefined8 *)pfVar24);
                            }
                          }
                        }
                      }
                      goto LAB_00104fdf;
                    }
                    if (uVar18 != 0) {
                      pfVar13 = (float *)(*(long *)(param_4 + 8) + (ulong)uVar18 * 0xc);
                      uVar37 = 0;
                      goto LAB_00104fd2;
                    }
                    uVar12 = 0;
                  }
                  uVar18 = *(uint *)param_4;
                  uVar8 = (uint)uVar12;
                  if (-1 < (int)uVar18) {
                    uVar29 = uVar8 - 4;
                    if ((int)uVar29 < 0) {
                      uVar29 = 0;
                    }
                    uVar37 = (ulong)uVar18;
                    if (uVar18 < uVar29) {
                      do {
                        uVar19 = (int)uVar37 + 8 + (int)(uVar37 >> 1);
                        uVar37 = (ulong)uVar19;
                      } while (uVar19 < uVar29);
                      if (0x15555555 < uVar19) {
                        *(uint *)param_4 = ~uVar18;
                        goto LAB_00104db8;
                      }
                      pvVar11 = realloc(*(void **)(param_4 + 8),uVar37 * 0xc);
                      if (pvVar11 == (void *)0x0) {
                        if (*(uint *)param_4 < uVar19) {
                          uVar8 = *(uint *)(param_4 + 4);
                          *(uint *)param_4 = ~*(uint *)param_4;
                          goto LAB_00104db8;
                        }
                      }
                      else {
                        *(void **)(param_4 + 8) = pvVar11;
                        *(uint *)param_4 = uVar19;
                      }
                      uVar12 = (ulong)*(uint *)(param_4 + 4);
                    }
                    if ((uint)uVar12 < uVar29) {
                      uVar18 = (uVar29 - (uint)uVar12) * 0xc;
                      if (uVar18 != 0) {
                        memset((void *)(*(long *)(param_4 + 8) + uVar12 * 0xc),0,(ulong)uVar18);
                      }
                    }
                    *(uint *)(param_4 + 4) = uVar29;
                    uVar8 = uVar29;
                  }
LAB_00104db8:
                  lVar16 = *(long *)(param_13 + 0x28);
                  if (200000 < uVar8) {
                    if (lVar16 == 0) goto LAB_0010552f;
                    uVar37 = (ulong)(uVar36 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                    puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                    bVar5 = (byte)puVar14[1];
                    if ((bVar5 & 2) == 0) goto LAB_0010552f;
                    iVar34 = 0;
                    goto LAB_0010551c;
                  }
                  local_120 = local_120 + 1;
                  if (lVar16 != 0) {
                    uVar37 = (ulong)(uVar36 & 0x3fffffff) % (ulong)*(uint *)(param_13 + 0x20);
                    puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                    bVar5 = (byte)puVar14[1];
                    if ((bVar5 & 2) != 0) {
                      iVar34 = 0;
                      do {
                        if (uVar35 == *puVar14) {
                          if ((bVar5 & 1) != 0) {
                            *(byte *)(puVar14 + 1) = (byte)puVar14[1] & 0xfe;
                            *(int *)(param_13 + 0x14) = *(int *)(param_13 + 0x14) + -1;
                          }
                          break;
                        }
                        iVar34 = iVar34 + 1;
                        uVar37 = (ulong)((int)uVar37 + iVar34 & *(uint *)(param_13 + 0x1c));
                        puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
                        bVar5 = (byte)puVar14[1];
                      } while ((bVar5 & 2) != 0);
                    }
                  }
LAB_00104a8f:
                  if (((((*puVar38 & 0x2000) == 0) ||
                       (puVar38 = (ushort *)((long)puVar38 + (ulong)uVar10), puVar38 < puVar4)) ||
                      (puVar25 < puVar38)) || (uVar18 = (int)puVar25 - (int)puVar38, uVar18 < 4))
                  break;
                  uVar7 = *puVar38;
                  uVar8 = -(uint)((uVar7 & 0x100) == 0) & 0xfffffffe;
                  if ((uVar7 & 0x800) == 0) {
                    if ((uVar7 & 0x4000) == 0) {
                      uVar10 = uVar8 + 0x10;
                      if ((uVar7 & 0x8000) == 0) {
                        uVar10 = uVar8 + 8;
                      }
                    }
                    else {
                      uVar10 = uVar8 + 0xc;
                    }
                  }
                  else {
                    uVar10 = uVar8 + 10;
                  }
                } while (uVar10 <= uVar18);
              }
            }
            if (param_6 != 0) {
              if (param_14 == 0) {
                if (param_7 != (uint *)0x0) {
                  uVar18 = *(uint *)(param_6 + 0x1c);
                  if (*(uint *)(param_6 + 0x1c) < *param_7) {
                    uVar18 = *param_7;
                  }
                  *(uint *)(param_6 + 0x1c) = uVar18;
                }
                uVar18 = *(uint *)(param_6 + 0x18);
                if (*(uint *)(param_6 + 0x18) < *(uint *)(param_4 + 4)) {
                  uVar18 = *(uint *)(param_4 + 4);
                }
                *(uint *)(param_6 + 0x18) = uVar18;
                uVar18 = *(uint *)(param_6 + 0x20);
                if (*(uint *)(param_6 + 0x20) < local_120) {
                  uVar18 = local_120;
                }
                *(uint *)(param_6 + 0x20) = uVar18;
                goto LAB_00104b6b;
              }
              contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
              iVar28 = (int)local_b8;
              goto LAB_00104630;
            }
LAB_00104856:
            contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
            iVar28 = (int)local_b8;
          }
          else if (iVar34 == 0) goto LAB_00104856;
          if (param_14 == 0) goto LAB_001045d0;
        }
      }
      else {
        if (iVar34 == 2) {
          uVar18 = *param_5;
          if (-1 < (int)uVar18) {
            uVar8 = *(uint *)(local_158 + 4);
            if ((int)*(uint *)(local_158 + 4) < 0) {
              uVar8 = 0;
            }
            uVar10 = uVar18;
            if (uVar8 <= uVar18) {
LAB_001056d8:
              uVar36 = param_5[1];
              uVar10 = uVar18;
              if (uVar36 < uVar8) {
LAB_001056e5:
                uVar18 = (uVar8 - uVar36) * 0xc;
                if (uVar18 == 0) {
                  uVar10 = *param_5;
                }
                else {
                  memset((void *)(*(long *)(param_5 + 2) + (ulong)uVar36 * 0xc),0,(ulong)uVar18);
                  uVar10 = *param_5;
                }
              }
              if ((int)uVar10 < 0) {
                uVar10 = ~uVar10;
                *param_5 = uVar10;
              }
LAB_00105729:
              param_5[1] = 0;
              uVar18 = *(uint *)(local_158 + 4);
              uVar37 = (ulong)uVar18;
              if (uVar10 < uVar18) {
                if (0x15555555 < uVar18) goto LAB_00104bf1;
                pvVar11 = *(void **)(param_5 + 2);
LAB_00105770:
                pvVar11 = realloc(pvVar11,uVar37 * 0xc);
                if (pvVar11 != (void *)0x0) {
LAB_00105793:
                  *(void **)(param_5 + 2) = pvVar11;
                  *param_5 = uVar18;
                  uVar37 = (ulong)*(uint *)(local_158 + 4);
                  goto LAB_001057a8;
                }
                uVar8 = *param_5;
                if (uVar8 < uVar18) {
                  *param_5 = ~uVar8;
                }
                else if (-1 < (int)uVar8) {
                  uVar37 = (ulong)*(uint *)(local_158 + 4);
                  goto LAB_001057a8;
                }
LAB_00104bfa:
                iVar34 = *(int *)((long)param_1 + 0x1c);
                if (iVar34 == 1) {
LAB_00105ddc:
                  goto LAB_00104ba1;
                }
                if (iVar34 == 2) goto LAB_00104978;
                if (iVar34 == 0) goto LAB_00104b6b;
              }
              else {
                if (uVar18 < uVar10 >> 2) {
                  if (uVar18 < 0x15555556) {
                    pvVar11 = *(void **)(param_5 + 2);
                    if (uVar18 != 0) goto LAB_00105770;
                    free(pvVar11);
                    pvVar11 = (void *)0x0;
                    goto LAB_00105793;
                  }
LAB_00104bf1:
                  *param_5 = ~uVar10;
                  goto LAB_00104bfa;
                }
LAB_001057a8:
                lVar16 = *(long *)(local_158 + 8);
                param_5[1] = (uint)uVar37;
                if ((uint)uVar37 == 0) goto LAB_00104bfa;
                lVar17 = *(long *)(param_5 + 2);
                lVar15 = 0;
                do {
                  *(undefined8 *)(lVar17 + lVar15) = *(undefined8 *)(lVar16 + lVar15);
                  *(undefined4 *)(lVar17 + 8 + lVar15) = *(undefined4 *)(lVar16 + 8 + lVar15);
                  lVar15 = lVar15 + 0xc;
                } while (lVar15 != uVar37 * 0xc);
                iVar34 = *(int *)((long)param_1 + 0x1c);
                if (iVar34 == 1) goto LAB_00105ddc;
                if (iVar34 == 2) goto LAB_00104978;
                if (iVar34 == 0) goto LAB_00104856;
              }
              iVar28 = (int)local_b8;
              goto LAB_001045d0;
            }
            do {
              uVar10 = uVar10 + 8 + (uVar10 >> 1);
            } while (uVar10 < uVar8);
            if (uVar10 < 0x15555556) {
              pvVar11 = realloc(*(void **)(param_5 + 2),(ulong)uVar10 * 0xc);
              if (pvVar11 != (void *)0x0) {
                uVar36 = param_5[1];
                *(void **)(param_5 + 2) = pvVar11;
                *param_5 = uVar10;
                if (uVar36 < uVar8) goto LAB_001056e5;
                goto LAB_00105729;
              }
              uVar18 = *param_5;
              if (uVar10 <= uVar18) goto LAB_001056d8;
              *param_5 = ~uVar18;
            }
            else {
              *param_5 = ~uVar18;
            }
          }
          goto LAB_0010552f;
        }
        if (iVar34 == 1) {
LAB_00104ba1:
          iVar28 = (int)local_b8;
          if (param_6 != 0) {
            local_fc = (*(int *)(param_4 + 4) + -4) - local_fc;
            if (local_fc < *(uint *)(param_6 + 0x10)) {
              local_fc = *(uint *)(param_6 + 0x10);
            }
            *(uint *)(param_6 + 0x10) = local_fc;
          }
        }
        else if (iVar34 == 0) {
LAB_00104b6b:
          contour_point_vector_t::extend(param_4,(hb_array_t *)&local_a8);
          iVar28 = (int)local_b8;
        }
LAB_001045d0:
        if (param_8 != '\0') {
          if (uVar30 < uVar22) {
            _hb_CrapPool = 0;
            DAT_001008e8 = 0;
          }
          fVar43 = *local_f8;
          if (fVar43 != 0.0) {
            pfVar13 = *(float **)(param_4 + 8);
            pfVar1 = pfVar13 + (ulong)*(uint *)(param_4 + 4) * 3;
            for (; pfVar1 != pfVar13; pfVar13 = pfVar13 + 3) {
              *pfVar13 = *pfVar13 - fVar43;
            }
          }
        }
      }
LAB_00104630:
      bVar5 = (byte)~(byte)((uint)*(undefined4 *)param_4 >> 0x18) >> 7;
    }
    goto LAB_0010463e;
  }
  local_fc = *(uint *)(param_4 + 4);
  local_98 = (ushort *)param_1[2];
  if (param_14 == 0) {
    if (param_6 != 0) {
      uVar22 = (uint)(short)(*local_98 << 8 | *local_98 >> 8);
      if (uVar22 < *(uint *)(param_6 + 0x14)) {
        uVar22 = *(uint *)(param_6 + 0x14);
      }
      *(uint *)(param_6 + 0x14) = uVar22;
    }
  }
  else if (param_7 != (uint *)0x0) {
    *param_7 = *param_7 + (int)(short)(*local_98 << 8 | *local_98 >> 8);
  }
  local_88 = param_1[1];
  uStack_90 = *param_1;
  bVar5 = SimpleGlyph::get_contour_points((SimpleGlyph *)&local_98,param_4,param_10);
  if (bVar5 != 0) {
    uVar22 = *(uint *)param_4;
    uVar30 = *(int *)(param_4 + 4) + 4U;
    if ((int)(*(int *)(param_4 + 4) + 4U) < 0) {
      uVar30 = 0;
    }
    local_158 = param_4;
    if (-1 < (int)uVar22) {
LAB_00104745:
      uVar37 = (ulong)uVar22;
      if (uVar22 < uVar30) goto LAB_001047d0;
      pvVar11 = *(void **)(local_158 + 8);
      goto LAB_0010430f;
    }
    bVar5 = 0;
  }
  goto LAB_00104647;
  while( true ) {
    iVar34 = iVar34 + 1;
    uVar37 = (ulong)((int)uVar37 + iVar34 & *(uint *)(param_13 + 0x1c));
    puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
    bVar5 = (byte)puVar14[1];
    if ((bVar5 & 2) == 0) break;
LAB_00105dc9:
    if (uVar35 == *puVar14) goto joined_r0x00105dd1;
  }
  goto LAB_0010552f;
joined_r0x00105dd1:
  if ((bVar5 & 1) != 0) {
    *(byte *)(puVar14 + 1) = (byte)puVar14[1] & 0xfe;
    *(int *)(param_13 + 0x14) = *(int *)(param_13 + 0x14) + -1;
  }
  goto LAB_0010552f;
  while( true ) {
    iVar34 = iVar34 + 1;
    uVar37 = (ulong)((int)uVar37 + iVar34 & *(uint *)(param_13 + 0x1c));
    puVar14 = (uint *)(lVar16 + uVar37 * 0xc);
    bVar5 = (byte)puVar14[1];
    if ((bVar5 & 2) == 0) break;
LAB_0010551c:
    if (uVar35 == *puVar14) goto joined_r0x00105dd1;
  }
LAB_0010552f:
  bVar5 = 0;
LAB_0010463e:
  if (iVar28 != 0) {
LAB_00104913:
    free(local_b0);
  }
LAB_00104647:
  hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
            ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_78);
LAB_00104651:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)bVar5;
}



/* bool OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>(hb_font_t*,
   unsigned int, OT::glyf_accelerator_t::points_aggregator_t, hb_array_t<int const>) const */

bool OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>
               (long param_1,long param_2,uint param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,hb_font_t *param_7,hb_glyph_extents_t *param_8,undefined8 *param_9
               ,undefined8 param_10,undefined8 param_11,float param_12)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  float *local_70;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_5;
  if ((int)param_5 == 0) {
    param_5 = (ulong)*(uint *)(param_2 + 0x78);
    param_4 = *(undefined8 *)(param_2 + 0x80);
    uVar4 = 0;
  }
  bVar3 = false;
  if (param_3 < *(uint *)(param_1 + 0x1c)) {
    local_78 = 0;
    local_70 = (float *)0x0;
    glyph_for_gid((uint)local_68,SUB81(param_1,0));
    bVar3 = glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
                      (local_68,param_2,param_1,&local_78,0,0,0,1,1,
                       param_8 == (hb_glyph_extents_t *)0x0,param_4,
                       uVar4 & 0xffffffff00000000 | param_5 & 0xffffffff,0,0,0);
    if (bVar3) {
      uVar2 = local_78._4_4_;
      uVar6 = local_78._4_4_ - 4;
      if (param_8 != (hb_glyph_extents_t *)0x0) {
        uVar1 = uVar6;
        if (local_78._4_4_ <= uVar6) {
          uVar1 = local_78._4_4_;
        }
        for (pfVar5 = local_70; local_70 + (ulong)uVar1 * 3 != pfVar5; pfVar5 = pfVar5 + 3) {
          fVar7 = *pfVar5;
          fVar8 = pfVar5[1];
          param_10._4_4_ =
               (float)((uint)param_10._4_4_ & -(uint)(param_10._4_4_ <= fVar7) |
                      ~-(uint)(param_10._4_4_ <= fVar7) & (uint)fVar7);
          param_11._0_4_ =
               (float)((uint)(float)param_11 & -(uint)((float)param_11 <= fVar8) |
                      ~-(uint)((float)param_11 <= fVar8) & (uint)fVar8);
          param_11._4_4_ =
               (float)((uint)param_11._4_4_ & -(uint)(fVar7 <= param_11._4_4_) |
                      ~-(uint)(fVar7 <= param_11._4_4_) & (uint)fVar7);
          param_12 = (float)((uint)param_12 & -(uint)(fVar8 <= param_12) |
                            ~-(uint)(fVar8 <= param_12) & (uint)fVar8);
        }
        if ((param_11._4_4_ <= param_10._4_4_) || (param_12 <= (float)param_11)) {
          *(undefined1 (*) [16])param_8 = (undefined1  [16])0x0;
        }
        else {
          param_10._4_4_ = param_10._4_4_ + _LC19;
          if ((float)((uint)param_10._4_4_ & _LC4) < _LC1) {
            param_10._4_4_ =
                 (float)((uint)((float)(int)param_10._4_4_ -
                               (float)(-(uint)(param_10._4_4_ < (float)(int)param_10._4_4_) & _LC3))
                        | ~_LC4 & (uint)param_10._4_4_);
          }
          fVar7 = (param_11._4_4_ - (float)(int)param_10._4_4_) + _LC19;
          if ((float)((uint)fVar7 & _LC4) < _LC1) {
            fVar7 = (float)((uint)((float)(int)fVar7 -
                                  (float)(-(uint)(fVar7 < (float)(int)fVar7) & _LC3)) |
                           ~_LC4 & (uint)fVar7);
          }
          param_12 = param_12 + _LC19;
          if ((float)((uint)param_12 & _LC4) < _LC1) {
            param_12 = (float)((uint)((float)(int)param_12 -
                                     (float)(-(uint)(param_12 < (float)(int)param_12) & _LC3)) |
                              ~_LC4 & (uint)param_12);
          }
          fVar8 = ((float)param_11 - (float)(int)param_12) + _LC19;
          if ((float)((uint)fVar8 & _LC4) < _LC1) {
            fVar8 = (float)((uint)((float)(int)fVar8 -
                                  (float)(-(uint)(fVar8 < (float)(int)fVar8) & _LC3)) |
                           ~_LC4 & (uint)fVar8);
          }
          *(int *)param_8 = (int)param_10._4_4_;
          *(int *)(param_8 + 4) = (int)param_12;
          *(int *)(param_8 + 8) = (int)fVar7;
          *(int *)(param_8 + 0xc) = (int)fVar8;
          if ((char)param_10 != '\0') {
            hb_font_t::scale_glyph_extents(param_7,param_8);
          }
        }
      }
      if (param_9 != (undefined8 *)0x0) {
        do {
          uVar4 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          *param_9 = *(undefined8 *)(local_70 + uVar4 * 3);
          *(float *)(param_9 + 1) = (local_70 + uVar4 * 3)[2];
          param_9 = (undefined8 *)((long)param_9 + 0xc);
        } while (uVar6 != uVar2);
      }
    }
    if ((int)local_78 != 0) {
      free(local_70);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<OT::head, 1u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::head,1u,true>::create(hb_face_t *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = hb_face_reference_table(param_1,0x68656164);
  lVar3 = hb_blob_reference(uVar2);
  psVar1 = *(short **)(lVar3 + 0x10);
  if (psVar1 == (short *)0x0) {
    hb_blob_destroy();
  }
  else {
    if (((*(uint *)(lVar3 + 0x18) < 0x36) || (*psVar1 != 0x100)) ||
       (*(int *)(psVar1 + 6) != -0xac3f0a1)) {
      hb_blob_destroy();
      hb_blob_destroy(uVar2);
      uVar2 = hb_blob_get_empty();
      return uVar2;
    }
    hb_blob_destroy();
    hb_blob_make_immutable(uVar2);
  }
  return uVar2;
}



/* hb_table_lazy_loader_t<OT::maxp, 2u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::maxp,2u,true>::create(hb_face_t *param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar2 = hb_face_reference_table(param_1,0x6d617870);
  lVar3 = hb_blob_reference(uVar2);
  puVar1 = *(ushort **)(lVar3 + 0x10);
  if (puVar1 == (ushort *)0x0) {
    hb_blob_destroy();
  }
  else {
    if (*(uint *)(lVar3 + 0x18) < 6) {
LAB_00106385:
      hb_blob_destroy();
      hb_blob_destroy(uVar2);
      uVar2 = hb_blob_get_empty();
      return uVar2;
    }
    uVar4 = *puVar1 << 8 | *puVar1 >> 8;
    if (uVar4 == 1) {
      if (*(uint *)(lVar3 + 0x18) < 0x20) goto LAB_00106385;
    }
    else if ((uVar4 != 0) || (puVar1[1] != 0x50)) goto LAB_00106385;
    hb_blob_destroy();
    hb_blob_make_immutable(uVar2);
  }
  return uVar2;
}



/* OT::gvar::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::gvar::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  ushort uVar1;
  uint uVar2;
  gvar *this_00;
  int *piVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
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
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar6 = hb_face_reference_table(param_1);
  lVar7 = hb_blob_reference(lVar6);
  local_58 = lVar7;
  do {
    local_70 = *(uint *)(lVar7 + 0x18);
    this_00 = *(gvar **)(lVar7 + 0x10);
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
    if (this_00 == (gvar *)0x0) {
      hb_blob_destroy(lVar7);
LAB_00106503:
      *(long *)this = lVar6;
      goto joined_r0x0010650a;
    }
    cVar4 = sanitize_shallow(this_00,(hb_sanitize_context_t *)local_88);
    lVar7 = local_58;
    if (cVar4 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar4 = sanitize_shallow(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_0010662c;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar4 == '\0') goto LAB_0010662c;
      }
      hb_blob_make_immutable(lVar6);
      goto LAB_00106503;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(lVar6);
    local_80._8_8_ = (ulong)*(uint *)(lVar6 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  } while( true );
  hb_blob_destroy(lVar7);
LAB_0010662c:
  hb_blob_destroy(lVar6);
  lVar6 = hb_blob_get_empty();
  *(long *)this = lVar6;
joined_r0x0010650a:
  if (lVar6 == 0) {
    *(undefined4 *)(this + 8) = 0;
LAB_0010664e:
    if (-1 < *(int *)(this + 0x10)) {
      *(undefined4 *)(this + 0x14) = 0;
    }
    goto LAB_00106601;
  }
  if (*(uint *)(lVar6 + 0x18) < 0x14) {
    *(undefined4 *)(this + 8) = 0;
LAB_00106665:
    if (*(int *)(this + 0x10) < 0) goto LAB_00106601;
    puVar17 = _hb_NullPool;
    uVar18 = 0;
LAB_00106676:
    *(int *)(this + 0x14) = (int)uVar18;
LAB_0010667a:
    uVar16 = 0;
    if (0x13 < *(uint *)(lVar6 + 0x18)) {
      uVar10 = *(ushort *)(*(long *)(lVar6 + 0x10) + 4);
      uVar16 = (ulong)(ushort)(uVar10 << 8 | uVar10 >> 8);
    }
    if ((int)uVar18 == 0) goto LAB_00106601;
  }
  else {
    uVar10 = **(ushort **)(lVar6 + 0x10);
    uVar1 = (*(ushort **)(lVar6 + 0x10))[1];
    if ((uint)(ushort)(uVar10 << 8 | uVar10 >> 8) * 0x10000 +
        (uint)(ushort)(uVar1 << 8 | uVar1 >> 8) == 0) {
      *(undefined4 *)(this + 8) = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18);
      if (iVar5 == -1) {
        iVar5 = hb_face_t::load_num_glyphs(param_1);
        lVar6 = *(long *)this;
      }
      *(int *)(this + 8) = iVar5;
      if (lVar6 == 0) goto LAB_0010664e;
      if (*(uint *)(lVar6 + 0x18) < 0x14) goto LAB_00106665;
    }
    lVar7 = *(long *)(lVar6 + 0x10);
    uVar15 = *(uint *)(this + 0x10);
    uVar2 = *(uint *)(lVar7 + 8);
    if ((int)uVar15 < 0) goto LAB_00106601;
    uVar10 = *(ushort *)(lVar7 + 6) << 8 | *(ushort *)(lVar7 + 6) >> 8;
    uVar18 = (ulong)uVar10;
    puVar17 = (undefined1 *)
              (lVar7 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18));
    if (uVar10 <= uVar15) goto LAB_00106676;
    do {
      uVar15 = (uVar15 >> 1) + 8 + uVar15;
    } while (uVar15 < uVar10);
    pvVar8 = realloc(*(void **)(this + 0x18),(ulong)uVar15 << 3);
    if (pvVar8 == (void *)0x0) {
      if (*(uint *)(this + 0x10) < uVar15) {
        *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
        goto LAB_00106601;
      }
    }
    else {
      *(void **)(this + 0x18) = pvVar8;
      *(uint *)(this + 0x10) = uVar15;
    }
    lVar6 = *(long *)this;
    *(uint *)(this + 0x14) = (uint)uVar10;
    if (lVar6 != 0) goto LAB_0010667a;
    uVar16 = 0;
  }
  piVar3 = *(int **)(this + 0x18);
  uVar15 = 0;
  piVar14 = piVar3;
  do {
    if ((int)uVar16 == 0) {
LAB_001065e0:
      iVar5 = -1;
      iVar11 = -1;
    }
    else {
      iVar5 = -1;
      uVar9 = 0;
      iVar12 = -1;
      do {
        iVar11 = iVar12;
        if (((*(short *)(puVar17 + uVar9 * 2 + (ulong)uVar15 * 2) != 0) &&
            (iVar11 = (int)uVar9, iVar12 != -1)) &&
           (bVar19 = iVar5 != -1, iVar5 = iVar11, iVar11 = iVar12, bVar19)) goto LAB_001065e0;
        uVar9 = uVar9 + 1;
        iVar12 = iVar11;
      } while (uVar9 != uVar16);
    }
    *piVar14 = iVar11;
    piVar13 = piVar14 + 2;
    uVar15 = uVar15 + (int)uVar16;
    piVar14[1] = iVar5;
    piVar14 = piVar13;
  } while (piVar13 != piVar3 + uVar18 * 2);
LAB_00106601:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<OT::hhea, 4u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::hhea,4u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x68686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  HVARVVAR *this_00;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
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
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  hb_face_get_glyph_count(param_1);
  uVar6 = hb_face_reference_table(param_1,0x686d7478);
  lVar7 = hb_blob_reference(uVar6);
  if (*(long *)(lVar7 + 0x10) == 0) {
    hb_blob_destroy(lVar7);
  }
  else {
    hb_blob_destroy(lVar7);
    hb_blob_make_immutable(uVar6);
  }
  *(undefined8 *)(this + 0x18) = uVar6;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar8 = hb_face_reference_table(param_1,0x48564152);
  lVar7 = hb_blob_reference(lVar8);
  local_58 = lVar7;
  while( true ) {
    local_70 = *(uint *)(lVar7 + 0x18);
    this_00 = *(HVARVVAR **)(lVar7 + 0x10);
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
    if (this_00 == (HVARVVAR *)0x0) {
      hb_blob_destroy(lVar7);
      goto LAB_001069c3;
    }
    cVar2 = HVARVVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar7 = local_58;
    if (cVar2 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar2 = HVARVVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_00106ae8;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar2 == '\0') goto LAB_00106ae8;
      }
      hb_blob_make_immutable(lVar8);
      goto LAB_001069c3;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(lVar8,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar8 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  }
  hb_blob_destroy(lVar7);
LAB_00106ae8:
  hb_blob_destroy(lVar8);
  lVar8 = hb_blob_get_empty();
LAB_001069c3:
  *(long *)(this + 0x20) = lVar8;
  uVar10 = 0;
  uVar4 = hb_face_get_upem(param_1);
  *(uint *)(this + 0x10) = uVar4 >> 1;
  if (*(long *)(this + 0x18) != 0) {
    uVar4 = *(uint *)(*(long *)(this + 0x18) + 0x18);
    uVar10 = (uVar4 - 1) + (uint)((uVar4 & 1) == 0);
  }
  phVar1 = param_1 + 0x90;
LAB_001069f5:
  lVar7 = *(long *)phVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::hhea,4u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x00106cc6;
      }
      else {
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00106b75;
      }
    }
  }
  uVar5 = 0;
  uVar4 = uVar10;
  if (0x23 < *(uint *)(lVar7 + 0x18)) {
    uVar3 = *(ushort *)(*(long *)(lVar7 + 0x10) + 0x22);
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    uVar5 = (uint)uVar3;
    if (uVar10 < (uint)uVar3 * 4) {
      uVar4 = uVar10 & 3;
      uVar5 = uVar10 >> 2;
    }
    else {
      uVar4 = uVar10 + (uint)uVar3 * -4;
    }
  }
  *(uint *)this = uVar5;
  phVar1 = param_1 + 0x80;
LAB_00106a38:
  lVar7 = *(long *)phVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x00106ca1;
      }
      else {
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00106bbd;
      }
    }
  }
  if (*(uint *)(lVar7 + 0x18) < 6) {
    uVar10 = *(uint *)this;
    if (*(uint *)this != 0) goto LAB_00106b0f;
  }
  else {
    uVar3 = *(ushort *)(*(long *)(lVar7 + 0x10) + 4);
    uVar5 = *(uint *)this;
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    uVar10 = uVar5;
    if (uVar3 < uVar5) {
LAB_00106b0f:
      *(uint *)(this + 4) = uVar10;
      goto LAB_00106a7f;
    }
    uVar9 = (uVar3 - uVar5) * 2;
    if (uVar4 < uVar9) {
      uVar10 = uVar5 + (uVar4 >> 1);
      uVar9 = (uVar4 >> 1) * 2;
      *(uint *)(this + 4) = uVar10;
    }
    else {
      *(uint *)(this + 4) = (uint)uVar3;
      uVar10 = (uint)uVar3;
    }
    uVar4 = uVar4 - uVar9;
    if (uVar5 != 0) goto LAB_00106a7f;
  }
  *(undefined8 *)this = 0;
  uVar10 = 0;
LAB_00106a7f:
  *(uint *)(this + 8) = (uVar4 >> 1) + uVar10;
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0xffffffff) {
    uVar4 = hb_face_t::load_num_glyphs(param_1);
  }
  uVar10 = *(uint *)(this + 8);
  if (*(uint *)(this + 8) < uVar4) {
    uVar10 = uVar4;
  }
  *(uint *)(this + 0xc) = uVar10;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00106cc6:
  if (lVar7 != 0) {
LAB_00106b75:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_001069f5;
code_r0x00106ca1:
  if (lVar7 != 0) {
LAB_00106bbd:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_00106a38;
}



/* hb_table_lazy_loader_t<OT::vhea, 11u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::vhea,11u,true>::create(hb_face_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = hb_face_reference_table(param_1,0x76686561);
  lVar2 = hb_blob_reference(uVar1);
  if (*(short **)(lVar2 + 0x10) == (short *)0x0) {
    hb_blob_destroy();
    return uVar1;
  }
  if ((0x23 < *(uint *)(lVar2 + 0x18)) && (**(short **)(lVar2 + 0x10) == 0x100)) {
    hb_blob_destroy();
    hb_blob_make_immutable(uVar1);
    return uVar1;
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar1);
  uVar1 = hb_blob_get_empty();
  return uVar1;
}



/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  VVAR *this_00;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
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
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  hb_face_get_glyph_count(param_1);
  uVar6 = hb_face_reference_table(param_1,0x766d7478);
  lVar7 = hb_blob_reference(uVar6);
  if (*(long *)(lVar7 + 0x10) == 0) {
    hb_blob_destroy(lVar7);
  }
  else {
    hb_blob_destroy(lVar7);
    hb_blob_make_immutable(uVar6);
  }
  *(undefined8 *)(this + 0x18) = uVar6;
  local_68 = 0;
  local_60 = '\0';
  local_4b = 0;
  local_50 = hb_face_get_glyph_count(param_1);
  local_4c = 1;
  lVar8 = hb_face_reference_table(param_1,0x56564152);
  lVar7 = hb_blob_reference(lVar8);
  local_58 = lVar7;
  while( true ) {
    local_70 = *(uint *)(lVar7 + 0x18);
    this_00 = *(VVAR **)(lVar7 + 0x10);
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
    if (this_00 == (VVAR *)0x0) {
      hb_blob_destroy(lVar7);
      goto LAB_00106ef3;
    }
    cVar2 = VVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
    lVar7 = local_58;
    if (cVar2 != '\0') {
      if (local_5c == 0) {
        hb_blob_destroy(local_58);
      }
      else {
        local_5c = 0;
        cVar2 = VVAR::sanitize(this_00,(hb_sanitize_context_t *)local_88);
        if (local_5c != 0) {
          hb_blob_destroy(local_58);
          goto LAB_00107010;
        }
        hb_blob_destroy(local_58);
        local_58 = 0;
        local_70 = 0;
        local_80 = (undefined1  [16])0x0;
        if (cVar2 == '\0') goto LAB_00107010;
      }
      hb_blob_make_immutable(lVar8);
      goto LAB_00106ef3;
    }
    if ((local_5c == 0) || (local_60 != '\0')) break;
    local_80._0_8_ = hb_blob_get_data_writable(lVar8,0);
    local_80._8_8_ = (ulong)*(uint *)(lVar8 + 0x18) + local_80._0_8_;
    if (local_80._0_8_ == 0) break;
    local_60 = '\x01';
  }
  hb_blob_destroy(lVar7);
LAB_00107010:
  hb_blob_destroy(lVar8);
  lVar8 = hb_blob_get_empty();
LAB_00106ef3:
  *(long *)(this + 0x20) = lVar8;
  uVar10 = 0;
  uVar4 = hb_face_get_upem(param_1);
  *(undefined4 *)(this + 0x10) = uVar4;
  if (*(long *)(this + 0x18) != 0) {
    uVar10 = *(uint *)(*(long *)(this + 0x18) + 0x18);
    uVar10 = (uVar10 - 1) + (uint)((uVar10 & 1) == 0);
  }
  phVar1 = param_1 + 200;
LAB_00106f23:
  lVar7 = *(long *)phVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::vhea,11u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x001071e6;
      }
      else {
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00107095;
      }
    }
  }
  uVar5 = 0;
  uVar11 = uVar10;
  if (0x23 < *(uint *)(lVar7 + 0x18)) {
    uVar3 = *(ushort *)(*(long *)(lVar7 + 0x10) + 0x22);
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    uVar5 = (uint)uVar3;
    if (uVar10 < (uint)uVar3 * 4) {
      uVar11 = uVar10 & 3;
      uVar5 = uVar10 >> 2;
    }
    else {
      uVar11 = uVar10 + (uint)uVar3 * -4;
    }
  }
  *(uint *)this = uVar5;
  phVar1 = param_1 + 0x80;
LAB_00106f66:
  lVar7 = *(long *)phVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x001071c1;
      }
      else {
        LOCK();
        lVar8 = *(long *)phVar1;
        if (lVar8 == 0) {
          *(long *)phVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_001070dd;
      }
    }
  }
  if (*(uint *)(lVar7 + 0x18) < 6) {
    uVar10 = *(uint *)this;
    if (*(uint *)this != 0) goto LAB_00107037;
  }
  else {
    uVar3 = *(ushort *)(*(long *)(lVar7 + 0x10) + 4);
    uVar5 = *(uint *)this;
    uVar3 = uVar3 << 8 | uVar3 >> 8;
    uVar10 = uVar5;
    if (uVar3 < uVar5) {
LAB_00107037:
      *(uint *)(this + 4) = uVar10;
      goto LAB_00106fad;
    }
    uVar9 = (uVar3 - uVar5) * 2;
    if (uVar11 < uVar9) {
      uVar10 = uVar5 + (uVar11 >> 1);
      uVar9 = (uVar11 >> 1) * 2;
      *(uint *)(this + 4) = uVar10;
    }
    else {
      *(uint *)(this + 4) = (uint)uVar3;
      uVar10 = (uint)uVar3;
    }
    uVar11 = uVar11 - uVar9;
    if (uVar5 != 0) goto LAB_00106fad;
  }
  *(undefined8 *)this = 0;
  uVar10 = 0;
LAB_00106fad:
  *(uint *)(this + 8) = (uVar11 >> 1) + uVar10;
  uVar10 = *(uint *)(param_1 + 0x18);
  if (uVar10 == 0xffffffff) {
    uVar10 = hb_face_t::load_num_glyphs(param_1);
  }
  uVar11 = *(uint *)(this + 8);
  if (*(uint *)(this + 8) < uVar10) {
    uVar11 = uVar10;
  }
  *(uint *)(this + 0xc) = uVar11;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x001071e6:
  if (lVar7 != 0) {
LAB_00107095:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_00106f23;
code_r0x001071c1:
  if (lVar7 != 0) {
LAB_001070dd:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_00106f66;
}



/* OT::glyf_accelerator_t::glyf_accelerator_t(hb_face_t*) */

void __thiscall
OT::glyf_accelerator_t::glyf_accelerator_t(glyf_accelerator_t *this,hb_face_t *param_1)

{
  hb_face_t *phVar1;
  ushort uVar2;
  hb_face_t *phVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  phVar1 = param_1 + 0x78;
  this[0x18] = (glyf_accelerator_t)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
LAB_0010724a:
  lVar6 = *(long *)phVar1;
  if (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::head,1u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x001076b7;
      }
      else {
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_0010744d;
      }
    }
  }
  puVar9 = _hb_NullPool;
  if (*(uint *)(lVar6 + 0x18) < 0x36) goto LAB_0010726c;
  puVar9 = *(undefined1 **)(lVar6 + 0x10);
  lVar6 = *(long *)phVar1;
  while (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
      break;
    }
    lVar6 = hb_table_lazy_loader_t<OT::head,1u,true>::create(*(hb_face_t **)(param_1 + 0x70));
    if (lVar6 == 0) {
      lVar6 = hb_blob_get_empty();
      LOCK();
      lVar7 = *(long *)phVar1;
      if (lVar7 == 0) {
        *(long *)phVar1 = lVar6;
      }
      UNLOCK();
      if (lVar7 == 0) break;
      if (lVar6 != 0) goto LAB_001073fe;
    }
    else {
      LOCK();
      lVar7 = *(long *)phVar1;
      if (lVar7 == 0) {
        *(long *)phVar1 = lVar6;
      }
      UNLOCK();
      if (lVar7 == 0) break;
LAB_001073fe:
      lVar7 = hb_blob_get_empty();
      if (lVar6 != lVar7) {
        hb_blob_destroy(lVar6);
      }
    }
LAB_0010726c:
    lVar6 = *(long *)phVar1;
  }
  if ((0x35 < *(uint *)(lVar6 + 0x18)) &&
     ((uVar2 = *(ushort *)(*(long *)(lVar6 + 0x10) + 0x32), 1 < (ushort)(uVar2 << 8 | uVar2 >> 8) ||
      (uVar2 = *(ushort *)(*(long *)(lVar6 + 0x10) + 0x34), 1 < (ushort)(uVar2 << 8 | uVar2 >> 8))))
     ) {
    return;
  }
  phVar1 = param_1 + 0xe0;
  this[0x18] = (glyf_accelerator_t)(*(short *)(puVar9 + 0x32) == 0);
LAB_0010729e:
  lVar6 = *(long *)phVar1;
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_face_reference_table(*(long *)(param_1 + 0x70),0x6c6f6361);
      lVar7 = hb_blob_reference(lVar6);
      if (*(long *)(lVar7 + 0x10) == 0) {
        hb_blob_destroy(lVar7);
      }
      else {
        hb_blob_destroy(lVar7);
        hb_blob_make_immutable(lVar6);
      }
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x00107751;
      }
      else {
        LOCK();
        lVar7 = *(long *)phVar1;
        if (lVar7 == 0) {
          *(long *)phVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_0010761c;
      }
    }
  }
  *(long *)(this + 0x20) = lVar6;
  hb_face_get_glyph_count(param_1);
  uVar5 = hb_face_reference_table(param_1,0x676c7966);
  lVar6 = hb_blob_reference(uVar5);
  if (*(long *)(lVar6 + 0x10) == 0) {
    hb_blob_destroy(lVar6);
  }
  else {
    hb_blob_destroy(lVar6);
    hb_blob_make_immutable(uVar5);
  }
  *(undefined8 *)(this + 0x28) = uVar5;
  phVar1 = param_1 + 0x118;
  do {
    while( true ) {
      puVar9 = *(undefined1 **)phVar1;
      if ((accelerator_t *)puVar9 != (accelerator_t *)0x0) goto LAB_00107307;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_001076f9;
      puVar9 = (undefined1 *)calloc(1,0x20);
      if ((accelerator_t *)puVar9 == (accelerator_t *)0x0) break;
      gvar::accelerator_t::accelerator_t((accelerator_t *)puVar9,phVar3);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(undefined1 **)phVar1 = puVar9;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_00107307;
      hb_blob_destroy(*(undefined8 *)puVar9);
      if (*(int *)((accelerator_t *)puVar9 + 0x10) != 0) {
        free(*(void **)((accelerator_t *)puVar9 + 0x18));
      }
      free(puVar9);
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined1 **)phVar1 = _hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_001076f9:
  puVar9 = _hb_NullPool;
LAB_00107307:
  *(undefined1 **)this = puVar9;
  phVar1 = param_1 + 0x98;
  do {
    while( true ) {
      puVar9 = *(undefined1 **)phVar1;
      if ((accelerator_t *)puVar9 != (accelerator_t *)0x0) goto LAB_00107321;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_001076db;
      puVar9 = (undefined1 *)calloc(1,0x28);
      if ((accelerator_t *)puVar9 == (accelerator_t *)0x0) break;
      hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
                ((accelerator_t *)puVar9,phVar3);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(undefined1 **)phVar1 = puVar9;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_00107321;
      hb_blob_destroy(*(undefined8 *)((accelerator_t *)puVar9 + 0x18));
      *(undefined8 *)((accelerator_t *)puVar9 + 0x18) = 0;
      hb_blob_destroy(*(undefined8 *)((accelerator_t *)puVar9 + 0x20));
      free(puVar9);
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined1 **)phVar1 = _hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_001076db:
  puVar9 = _hb_NullPool;
LAB_00107321:
  *(undefined1 **)(this + 8) = puVar9;
  phVar1 = param_1 + 0xd0;
  do {
    while( true ) {
      puVar9 = *(undefined1 **)phVar1;
      if ((accelerator_t *)puVar9 != (accelerator_t *)0x0) goto LAB_0010733c;
      phVar3 = *(hb_face_t **)(param_1 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) goto LAB_00107718;
      puVar9 = (undefined1 *)calloc(1,0x28);
      if ((accelerator_t *)puVar9 == (accelerator_t *)0x0) break;
      hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
                ((accelerator_t *)puVar9,phVar3);
      LOCK();
      lVar6 = *(long *)phVar1;
      if (lVar6 == 0) {
        *(undefined1 **)phVar1 = puVar9;
      }
      UNLOCK();
      if (lVar6 == 0) goto LAB_0010733c;
      hb_blob_destroy(*(undefined8 *)((accelerator_t *)puVar9 + 0x18));
      *(undefined8 *)((accelerator_t *)puVar9 + 0x18) = 0;
      hb_blob_destroy(*(undefined8 *)((accelerator_t *)puVar9 + 0x20));
      free(puVar9);
    }
    LOCK();
    lVar6 = *(long *)phVar1;
    if (lVar6 == 0) {
      *(undefined1 **)phVar1 = _hb_NullPool;
    }
    UNLOCK();
  } while (lVar6 != 0);
LAB_00107718:
  puVar9 = _hb_NullPool;
LAB_0010733c:
  *(undefined1 **)(this + 0x10) = puVar9;
  uVar4 = 0;
  if (*(long *)(this + 0x20) != 0) {
    uVar4 = *(uint *)(*(long *)(this + 0x20) + 0x18);
  }
  uVar4 = uVar4 / ((-(uint)(this[0x18] == (glyf_accelerator_t)0x0) & 2) + 2);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  *(uint *)(this + 0x1c) = uVar4 - 1;
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0xffffffff) {
    uVar4 = hb_face_t::load_num_glyphs(param_1);
  }
  uVar8 = *(uint *)(this + 0x1c);
  if (uVar4 < *(uint *)(this + 0x1c)) {
    uVar8 = uVar4;
  }
  *(uint *)(this + 0x1c) = uVar8;
  return;
code_r0x001076b7:
  if (lVar6 != 0) {
LAB_0010744d:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_0010724a;
code_r0x00107751:
  if (lVar6 != 0) {
LAB_0010761c:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_0010729e;
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::glyf_accelerator_t::glyf_accelerator_t(hb_face_t*) */

void __thiscall
OT::glyf_accelerator_t::glyf_accelerator_t(glyf_accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OT::gvar::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::gvar::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


