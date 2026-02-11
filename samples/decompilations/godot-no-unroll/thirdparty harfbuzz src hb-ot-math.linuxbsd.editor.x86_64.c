
uint hb_ot_math_get_glyph_kernings
               (hb_font_t *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,long param_6
               )

{
  long *plVar1;
  hb_face_t *phVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  Coverage *this;
  ulong uVar14;
  long lVar15;
  uint local_3c;
  
  lVar15 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar15 + 0x1b0);
LAB_0010002e:
  lVar9 = *plVar1;
  if (lVar9 == 0) {
    phVar2 = *(hb_face_t **)(lVar15 + 0x70);
    if (phVar2 == (hb_face_t *)0x0) {
      lVar9 = hb_blob_get_empty();
    }
    else {
      lVar9 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar2);
      if (lVar9 == 0) {
        lVar9 = hb_blob_get_empty();
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto code_r0x0010029c;
      }
      else {
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto LAB_00100210;
      }
    }
  }
  puVar7 = &_hb_NullPool;
  puVar11 = &_hb_NullPool;
  if (9 < *(uint *)(lVar9 + 0x18)) {
    puVar11 = *(undefined **)(lVar9 + 0x10);
  }
  uVar3 = *(ushort *)(puVar11 + 6);
  if (uVar3 != 0) {
    puVar7 = puVar11 + (ushort)(uVar3 << 8 | uVar3 >> 8);
  }
  uVar3 = *(ushort *)(puVar7 + 6);
  puVar13 = (ushort *)&_hb_NullPool;
  if (uVar3 != 0) {
    puVar13 = (ushort *)(puVar7 + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar3 = *puVar13;
  this = (Coverage *)&_hb_NullPool;
  if (uVar3 != 0) {
    this = (Coverage *)((long)puVar13 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar4 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  puVar12 = (ushort *)&_hb_NullPool;
  if (uVar4 < (ushort)(puVar13[1] << 8 | puVar13[1] >> 8)) {
    puVar12 = puVar13 + (ulong)uVar4 * 4 + 2;
  }
  if ((param_3 < 4) && (uVar3 = puVar12[param_3], uVar3 != 0)) {
    puVar13 = (ushort *)((long)puVar13 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
    uVar3 = *puVar13 << 8 | *puVar13 >> 8;
    local_3c = uVar3 + 1;
    if (param_5 != (uint *)0x0) {
      uVar14 = (ulong)param_4;
      if (local_3c < param_4) {
        uVar14 = (ulong)local_3c;
      }
      uVar4 = *param_5 + (int)uVar14;
      if (local_3c < uVar4) {
        uVar4 = local_3c;
      }
      uVar4 = uVar4 - (int)uVar14;
      *param_5 = uVar4;
      if (uVar4 != 0) {
        uVar8 = (ulong)uVar3;
        lVar15 = 0;
        while( true ) {
          uVar5 = 0x7fffffff;
          if ((uint)uVar3 != (uint)uVar14) {
            uVar5 = OT::MathValueRecord::get_y_value
                              ((MathValueRecord *)(puVar13 + uVar14 * 2 + 1),param_1,puVar13);
          }
          uVar6 = OT::MathValueRecord::get_x_value
                            ((MathValueRecord *)(puVar13 + (uVar14 + uVar8) * 2 + 1),param_1,puVar13
                            );
          *(undefined4 *)(param_6 + lVar15 * 8) = uVar5;
          *(undefined4 *)(param_6 + 4 + lVar15 * 8) = uVar6;
          lVar15 = lVar15 + 1;
          if (*param_5 <= (uint)lVar15) break;
          uVar3 = *puVar13 << 8 | *puVar13 >> 8;
          uVar14 = (ulong)((uint)uVar14 + 1);
        }
      }
    }
  }
  else {
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    local_3c = 0;
  }
  return local_3c;
code_r0x0010029c:
  if (lVar9 != 0) {
LAB_00100210:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy(lVar9);
    }
  }
  goto LAB_0010002e;
}



bool hb_ot_math_has_data(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  
  plVar1 = (long *)(param_1 + 0x1b0);
LAB_001002c8:
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar2 = hb_blob_get_empty();
    }
    else {
      lVar2 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar2 == 0) {
        lVar2 = hb_blob_get_empty();
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto code_r0x00100380;
      }
      else {
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto LAB_00100341;
      }
    }
  }
  puVar4 = (ushort *)&_hb_NullPool;
  if (9 < *(uint *)(lVar2 + 0x18)) {
    puVar4 = *(ushort **)(lVar2 + 0x10);
  }
  return (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8) * 0x10000 +
         (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8) != 0;
code_r0x00100380:
  if (lVar2 != 0) {
LAB_00100341:
    lVar3 = hb_blob_get_empty();
    if (lVar2 != lVar3) {
      hb_blob_destroy(lVar2);
    }
  }
  goto LAB_001002c8;
}



bool hb_ot_math_is_glyph_extended_shape(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  Coverage *this;
  
  plVar1 = (long *)(param_1 + 0x1b0);
LAB_001003a8:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x001004a4;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_0010044d;
      }
    }
  }
  puVar6 = &_hb_NullPool;
  if (9 < *(uint *)(lVar4 + 0x18)) {
    puVar6 = *(undefined **)(lVar4 + 0x10);
  }
  uVar2 = *(ushort *)(puVar6 + 6);
  puVar7 = &_hb_NullPool;
  if (uVar2 != 0) {
    puVar7 = puVar6 + (ushort)(uVar2 << 8 | uVar2 >> 8);
  }
  uVar2 = *(ushort *)(puVar7 + 4);
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)(puVar7 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  iVar3 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  return iVar3 != -1;
code_r0x001004a4:
  if (lVar4 != 0) {
LAB_0010044d:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_001003a8;
}



long hb_ot_math_get_min_connector_overlap(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  hb_face_t *phVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar8 + 0x1b0);
LAB_001004d2:
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    phVar3 = *(hb_face_t **)(lVar8 + 0x70);
    if (phVar3 == (hb_face_t *)0x0) {
      lVar4 = hb_blob_get_empty();
    }
    else {
      lVar4 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar3);
      if (lVar4 == 0) {
        lVar4 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x001005b2;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar4;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_00100574;
      }
    }
  }
  puVar7 = &_hb_NullPool;
  if (9 < *(uint *)(lVar4 + 0x18)) {
    puVar7 = *(undefined **)(lVar4 + 0x10);
  }
  uVar2 = *(ushort *)(puVar7 + 8);
  puVar6 = (ushort *)&_hb_NullPool;
  if (uVar2 != 0) {
    puVar6 = (ushort *)(puVar7 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  lVar8 = *(long *)(param_1 + 0x60);
  if ((param_2 & 0xfffffffe) != 6) {
    lVar8 = *(long *)(param_1 + 0x58);
  }
  return (short)(*puVar6 << 8 | *puVar6 >> 8) * lVar8 + 0x8000 >> 0x10;
code_r0x001005b2:
  if (lVar4 != 0) {
LAB_00100574:
    lVar5 = hb_blob_get_empty();
    if (lVar4 != lVar5) {
      hb_blob_destroy(lVar4);
    }
  }
  goto LAB_001004d2;
}



void hb_ot_math_get_glyph_italics_correction(hb_font_t *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  hb_face_t *phVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ushort *puVar10;
  Coverage *this;
  MathValueRecord *this_00;
  
  lVar3 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar3 + 0x1b0);
LAB_001005de:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    phVar4 = *(hb_face_t **)(lVar3 + 0x70);
    if (phVar4 == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar4);
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x0010070c;
      }
      else {
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_001006b5;
      }
    }
  }
  puVar6 = (ushort *)&_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (9 < *(uint *)(lVar7 + 0x18)) {
    puVar9 = *(undefined **)(lVar7 + 0x10);
  }
  uVar2 = *(ushort *)(puVar9 + 6);
  if (uVar2 != 0) {
    puVar6 = (ushort *)(puVar9 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar2 = *puVar6;
  puVar10 = (ushort *)&_hb_NullPool;
  if (uVar2 != 0) {
    puVar10 = (ushort *)((long)puVar6 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar2 = *puVar10;
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)((long)puVar10 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar5 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  this_00 = (MathValueRecord *)&_hb_NullPool;
  if (uVar5 < (ushort)(puVar10[1] << 8 | puVar10[1] >> 8)) {
    this_00 = (MathValueRecord *)(puVar10 + (ulong)uVar5 * 2 + 2);
  }
  OT::MathValueRecord::get_x_value(this_00,param_1,puVar10);
  return;
code_r0x0010070c:
  if (lVar7 != 0) {
LAB_001006b5:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_001005de;
}



void hb_ot_math_get_glyph_variants
               (long param_1,uint param_2,uint param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  hb_face_t *phVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ushort uVar11;
  Coverage *this;
  MathGlyphConstruction *pMVar12;
  
  lVar3 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar3 + 0x1b0);
LAB_0010074a:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    phVar4 = *(hb_face_t **)(lVar3 + 0x70);
    if (phVar4 == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar4);
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x00100916;
      }
      else {
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00100880;
      }
    }
  }
  puVar10 = &_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (9 < *(uint *)(lVar7 + 0x18)) {
    puVar9 = *(undefined **)(lVar7 + 0x10);
  }
  uVar11 = *(ushort *)(puVar9 + 8);
  if (uVar11 != 0) {
    puVar10 = puVar9 + (ushort)(uVar11 << 8 | uVar11 >> 8);
  }
  if ((param_3 & 0xfffffffe) == 6) {
    puVar6 = (ushort *)(puVar10 + 2);
    uVar11 = *(ushort *)(puVar10 + 6) << 8 | *(ushort *)(puVar10 + 6) >> 8;
  }
  else {
    puVar6 = (ushort *)(puVar10 + 4);
    uVar11 = *(ushort *)(puVar10 + 8) << 8 | *(ushort *)(puVar10 + 8) >> 8;
  }
  uVar2 = *puVar6;
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)(puVar10 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar5 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  pMVar12 = (MathGlyphConstruction *)&_hb_NullPool;
  if (uVar5 < uVar11) {
    if ((param_3 & 0xfffffffe) != 6) {
      uVar5 = uVar5 + (ushort)(*(ushort *)(puVar10 + 6) << 8 | *(ushort *)(puVar10 + 6) >> 8);
    }
    pMVar12 = (MathGlyphConstruction *)&_hb_NullPool;
    uVar11 = *(ushort *)(puVar10 + (ulong)uVar5 * 2 + 10);
    if (uVar11 != 0) {
      pMVar12 = (MathGlyphConstruction *)(puVar10 + (ushort)(uVar11 << 8 | uVar11 >> 8));
    }
  }
  OT::MathGlyphConstruction::get_variants(pMVar12,param_3,param_1,param_4,param_5,param_6);
  return;
code_r0x00100916:
  if (lVar7 != 0) {
LAB_00100880:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_0010074a;
}



ulong hb_ot_math_get_glyph_top_accent_attachment(hb_font_t *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  hb_face_t *phVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  Coverage *this;
  MathValueRecord *this_00;
  ushort *puVar12;
  
  lVar11 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar11 + 0x1b0);
LAB_00100952:
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    phVar3 = *(hb_face_t **)(lVar11 + 0x70);
    if (phVar3 == (hb_face_t *)0x0) {
      lVar8 = hb_blob_get_empty();
    }
    else {
      lVar8 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar3);
      if (lVar8 == 0) {
        lVar8 = hb_blob_get_empty();
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto code_r0x00100ab2;
      }
      else {
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto LAB_00100a74;
      }
    }
  }
  puVar6 = &_hb_NullPool;
  puVar10 = &_hb_NullPool;
  if (9 < *(uint *)(lVar8 + 0x18)) {
    puVar10 = *(undefined **)(lVar8 + 0x10);
  }
  uVar2 = *(ushort *)(puVar10 + 6);
  if (uVar2 != 0) {
    puVar6 = puVar10 + (ushort)(uVar2 << 8 | uVar2 >> 8);
  }
  uVar2 = *(ushort *)(puVar6 + 2);
  puVar12 = (ushort *)&_hb_NullPool;
  if (uVar2 != 0) {
    puVar12 = (ushort *)(puVar6 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar2 = *puVar12;
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)((long)puVar12 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar4 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  if (uVar4 == 0xffffffff) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x28);
    }
    iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,lVar11);
    return (ulong)(uint)(iVar5 / 2);
  }
  this_00 = (MathValueRecord *)&_hb_NullPool;
  if (uVar4 < (ushort)(puVar12[1] << 8 | puVar12[1] >> 8)) {
    this_00 = (MathValueRecord *)(puVar12 + (ulong)uVar4 * 2 + 2);
  }
  uVar7 = OT::MathValueRecord::get_x_value(this_00,param_1,puVar12);
  return uVar7;
code_r0x00100ab2:
  if (lVar8 != 0) {
LAB_00100a74:
    lVar9 = hb_blob_get_empty();
    if (lVar8 != lVar9) {
      hb_blob_destroy(lVar8);
    }
  }
  goto LAB_00100952;
}



void hb_ot_math_get_glyph_assembly
               (long param_1,uint param_2,uint param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  hb_face_t *phVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ushort uVar11;
  Coverage *this;
  MathGlyphAssembly *pMVar12;
  
  lVar3 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar3 + 0x1b0);
LAB_00100aec:
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    phVar4 = *(hb_face_t **)(lVar3 + 0x70);
    if (phVar4 == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar4);
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x00100d13;
      }
      else {
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_00100c5a;
      }
    }
  }
  puVar10 = &_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (9 < *(uint *)(lVar6 + 0x18)) {
    puVar9 = *(undefined **)(lVar6 + 0x10);
  }
  uVar11 = *(ushort *)(puVar9 + 8);
  if (uVar11 != 0) {
    puVar10 = puVar9 + (ushort)(uVar11 << 8 | uVar11 >> 8);
  }
  if ((param_3 & 0xfffffffe) == 6) {
    puVar8 = (ushort *)(puVar10 + 2);
    uVar11 = *(ushort *)(puVar10 + 6) << 8 | *(ushort *)(puVar10 + 6) >> 8;
  }
  else {
    puVar8 = (ushort *)(puVar10 + 4);
    uVar11 = *(ushort *)(puVar10 + 8) << 8 | *(ushort *)(puVar10 + 8) >> 8;
  }
  uVar2 = *puVar8;
  this = (Coverage *)&_hb_NullPool;
  if (uVar2 != 0) {
    this = (Coverage *)(puVar10 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  uVar5 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  puVar8 = (ushort *)&_hb_NullPool;
  if (uVar5 < uVar11) {
    if ((param_3 & 0xfffffffe) != 6) {
      uVar5 = uVar5 + (ushort)(*(ushort *)(puVar10 + 6) << 8 | *(ushort *)(puVar10 + 6) >> 8);
    }
    puVar8 = (ushort *)&_hb_NullPool;
    uVar11 = *(ushort *)(puVar10 + (ulong)uVar5 * 2 + 10);
    if (uVar11 != 0) {
      puVar8 = (ushort *)(puVar10 + (ushort)(uVar11 << 8 | uVar11 >> 8));
    }
  }
  uVar11 = *puVar8;
  pMVar12 = (MathGlyphAssembly *)&_hb_NullPool;
  if (uVar11 != 0) {
    pMVar12 = (MathGlyphAssembly *)((long)puVar8 + (ulong)(ushort)(uVar11 << 8 | uVar11 >> 8));
  }
  OT::MathGlyphAssembly::get_parts(pMVar12,param_3,param_1,param_4,param_5,param_6);
  return;
code_r0x00100d13:
  if (lVar6 != 0) {
LAB_00100c5a:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_00100aec;
}



ulong hb_ot_math_get_constant(hb_font_t *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  hb_face_t *phVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar3 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar3 + 0x1b0);
LAB_00100d50:
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    phVar4 = *(hb_face_t **)(lVar3 + 0x70);
    if (phVar4 == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar4);
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x00100f12;
      }
      else {
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_00100ebc;
      }
    }
  }
  puVar9 = &_hb_NullPool;
  puVar8 = &_hb_NullPool;
  if (9 < *(uint *)(lVar6 + 0x18)) {
    puVar8 = *(undefined **)(lVar6 + 0x10);
  }
  uVar2 = *(ushort *)(puVar8 + 4);
  if (uVar2 != 0) {
    puVar9 = puVar8 + (ushort)(uVar2 << 8 | uVar2 >> 8);
  }
  if (param_2 < 0x38) {
    if (param_2 < 4) {
      if (1 < param_2) {
        return (long)(short)(*(ushort *)(puVar9 + (long)(int)param_2 * 2) << 8 |
                            *(ushort *)(puVar9 + (long)(int)param_2 * 2) >> 8) *
               *(long *)(param_1 + 0x60) + 0x8000 >> 0x10;
      }
      return (ulong)(uint)(int)(short)(*(ushort *)(puVar9 + (ulong)param_2 * 2) << 8 |
                                      *(ushort *)(puVar9 + (ulong)param_2 * 2) >> 8);
    }
    uVar5 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar5 & 0x1ffdfffffdfff0) != 0) {
      uVar5 = OT::MathValueRecord::get_y_value
                        ((MathValueRecord *)(puVar9 + (long)(int)param_2 * 4 + -8),param_1,puVar9);
      return uVar5;
    }
    if ((uVar5 & 0x60020000020000) != 0) {
      uVar5 = OT::MathValueRecord::get_x_value
                        ((MathValueRecord *)(puVar9 + (long)(int)param_2 * 4 + -8),param_1,puVar9);
      return uVar5;
    }
    if (param_2 == 0x37) {
      return (ulong)(uint)(int)(short)(*(ushort *)(puVar9 + 0xd4) << 8 |
                                      *(ushort *)(puVar9 + 0xd4) >> 8);
    }
  }
  return 0;
code_r0x00100f12:
  if (lVar6 != 0) {
LAB_00100ebc:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy(lVar6);
    }
  }
  goto LAB_00100d50;
}



undefined8 hb_ot_math_get_glyph_kerning(hb_font_t *param_1,uint param_2,uint param_3,int param_4)

{
  long *plVar1;
  hb_face_t *phVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  ushort *puVar12;
  Coverage *this;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar16 + 0x1b0);
LAB_00100f45:
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    phVar2 = *(hb_face_t **)(lVar16 + 0x70);
    if (phVar2 == (hb_face_t *)0x0) {
      lVar8 = hb_blob_get_empty();
    }
    else {
      lVar8 = hb_table_lazy_loader_t<OT::MATH,40u,true>::create(phVar2);
      if (lVar8 == 0) {
        lVar8 = hb_blob_get_empty();
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto code_r0x00101186;
      }
      else {
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto LAB_001010f8;
      }
    }
  }
  puVar6 = &_hb_NullPool;
  puVar11 = &_hb_NullPool;
  if (9 < *(uint *)(lVar8 + 0x18)) {
    puVar11 = *(undefined **)(lVar8 + 0x10);
  }
  uVar3 = *(ushort *)(puVar11 + 6);
  if (uVar3 != 0) {
    puVar6 = puVar11 + (ushort)(uVar3 << 8 | uVar3 >> 8);
  }
  uVar3 = *(ushort *)(puVar6 + 6);
  puVar15 = (ushort *)&_hb_NullPool;
  if (uVar3 != 0) {
    puVar15 = (ushort *)(puVar6 + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar3 = *puVar15;
  this = (Coverage *)&_hb_NullPool;
  if (uVar3 != 0) {
    this = (Coverage *)((long)puVar15 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar4 = OT::Layout::Common::Coverage::get_coverage(this,param_2);
  puVar12 = (ushort *)&_hb_NullPool;
  if (uVar4 < (ushort)(puVar15[1] << 8 | puVar15[1] >> 8)) {
    puVar12 = puVar15 + (ulong)uVar4 * 4 + 2;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar3 = puVar12[param_3];
  puVar12 = (ushort *)&_hb_NullPool;
  if (uVar3 != 0) {
    puVar12 = (ushort *)((long)puVar15 + (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  uVar3 = *puVar12 << 8 | *puVar12 >> 8;
  uVar4 = *(int *)(param_1 + 0x2c) >> 0x1f | 1;
  iVar14 = uVar3 - 1;
  if (uVar3 == 0) {
    lVar16 = 0;
  }
  else {
    param_4 = param_4 * uVar4;
    uVar13 = 0;
    do {
      while( true ) {
        uVar10 = iVar14 + uVar13 >> 1;
        iVar5 = OT::MathValueRecord::get_y_value
                          ((MathValueRecord *)(puVar12 + (ulong)uVar10 * 2 + 1),param_1,puVar12);
        iVar5 = iVar5 * uVar4;
        if (-1 < param_4 - iVar5) break;
        iVar14 = uVar10 - 1;
        if (iVar14 < (int)uVar13) goto LAB_0010107c;
      }
      if (param_4 == iVar5) {
        lVar16 = (ulong)uVar3 + (ulong)(uVar10 + 1);
        goto LAB_00101087;
      }
      uVar13 = uVar10 + 1;
    } while ((int)uVar13 <= iVar14);
LAB_0010107c:
    lVar16 = (ulong)uVar3 + (ulong)uVar13;
  }
LAB_00101087:
  uVar7 = OT::MathValueRecord::get_x_value
                    ((MathValueRecord *)(puVar12 + lVar16 * 2 + 1),param_1,puVar12);
  return uVar7;
code_r0x00101186:
  if (lVar8 != 0) {
LAB_001010f8:
    lVar9 = hb_blob_get_empty();
    if (lVar8 != lVar9) {
      hb_blob_destroy(lVar8);
    }
  }
  goto LAB_00100f45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::Layout::Common::Coverage::get_coverage(unsigned int) const */

uint __thiscall OT::Layout::Common::Coverage::get_coverage(Coverage *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Coverage *pCVar5;
  int iVar6;
  
  if (*(short *)this == 0x100) {
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    iVar6 = uVar1 - 1;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        uVar2 = (uint)(iVar4 + iVar6) >> 1;
        uVar3 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar2 * 2 + 4) << 8 |
                              *(ushort *)(this + (ulong)uVar2 * 2 + 4) >> 8);
        if (param_1 < uVar3) {
          iVar6 = uVar2 - 1;
        }
        else {
          if (param_1 == uVar3) {
            return uVar2;
          }
          iVar4 = uVar2 + 1;
        }
      } while (iVar4 <= iVar6);
    }
  }
  else if (*(short *)this == 0x200) {
    uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    iVar6 = uVar1 - 1;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        while( true ) {
          uVar2 = (uint)(iVar4 + iVar6) >> 1;
          pCVar5 = this + (ulong)uVar2 * 6 + 4;
          uVar1 = *(ushort *)pCVar5 << 8 | *(ushort *)pCVar5 >> 8;
          if (param_1 < uVar1) break;
          if (param_1 <= (ushort)(*(ushort *)(pCVar5 + 2) << 8 | *(ushort *)(pCVar5 + 2) >> 8))
          goto LAB_00101243;
          iVar4 = uVar2 + 1;
          if (iVar6 < iVar4) goto LAB_0010121e;
        }
        iVar6 = uVar2 - 1;
      } while (iVar4 <= iVar6);
    }
LAB_0010121e:
    uVar1 = __hb_Null_OT_RangeRecord << 8 | __hb_Null_OT_RangeRecord >> 8;
    if (uVar1 <= (ushort)(_DAT_00105002 << 8 | _DAT_00105002 >> 8)) {
      pCVar5 = (Coverage *)&_hb_Null_OT_RangeRecord;
LAB_00101243:
      return ((uint)(ushort)(*(ushort *)(pCVar5 + 4) << 8 | *(ushort *)(pCVar5 + 4) >> 8) -
             (uint)uVar1) + param_1;
    }
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::MathValueRecord::get_x_value(hb_font_t*, void const*) const */

int __thiscall
OT::MathValueRecord::get_x_value(MathValueRecord *this,hb_font_t *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  ushort *puVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  ushort uVar19;
  int iVar20;
  uint *puVar21;
  ushort uVar22;
  ushort *puVar23;
  ushort uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar21 = (uint *)&_hb_NullPool;
  iVar4 = (int)((ulong)((long)(short)(*(ushort *)this << 8 | *(ushort *)this >> 8) *
                        *(long *)(param_1 + 0x58) + 0x8000) >> 0x10);
  uVar24 = *(ushort *)(this + 2);
  if (uVar24 != 0) {
    puVar21 = (uint *)((long)param_2 + (ulong)(ushort)(uVar24 << 8 | uVar24 >> 8));
  }
  uVar24 = (ushort)puVar21[1];
  if ((ushort)(uVar24 << 8 | uVar24 >> 8) < 4) {
    if (uVar24 == 0) {
      return iVar4;
    }
    uVar11 = *(uint *)(param_1 + 0x68);
    if (uVar11 == 0) {
      return iVar4;
    }
    uVar15 = (uint)(ushort)((ushort)*puVar21 << 8 | (ushort)*puVar21 >> 8);
    if (uVar11 < uVar15) {
      return iVar4;
    }
    if ((ushort)(*(ushort *)((long)puVar21 + 2) << 8 | *(ushort *)((long)puVar21 + 2) >> 8) < uVar11
       ) {
      return iVar4;
    }
    bVar3 = (byte)(uVar24 >> 8);
    uVar15 = uVar11 - uVar15;
    uVar24 = *(ushort *)((long)puVar21 + (ulong)(uVar15 >> (4 - bVar3 & 0x1f)) * 2 + 6);
    uVar5 = 0xffff >> (0x10U - (char)(1 << (bVar3 & 0x1f)) & 0x1f);
    uVar15 = (ushort)(uVar24 << 8 | uVar24 >> 8) >>
             (0x10U - (char)(((1 << (4 - bVar3 & 0x1f)) - 1U & uVar15) + 1 << (bVar3 & 0x1f)) & 0x1f
             ) & uVar5;
    if (uVar5 + 1 >> 1 <= uVar15) {
      uVar15 = (uVar15 - uVar5) - 1;
    }
    if (uVar15 == 0) {
      return iVar4;
    }
    return iVar4 + (int)(((long)*(int *)(param_1 + 0x28) * (long)(int)uVar15) / (long)(ulong)uVar11)
    ;
  }
  if (uVar24 != 0x80) {
    return iVar4;
  }
  uVar11 = *puVar21;
  uVar15 = *(uint *)(param_1 + 0x78);
  lVar2 = *(long *)(param_1 + 0x80);
  uVar5 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8;
  uVar11 = ((uVar11 & 0xff00) << 8 | uVar11 << 0x18) >> 0x10;
  if (uVar11 < (ushort)(_DAT_0010500e << 8 | _DAT_0010500e >> 8)) {
    puVar23 = (ushort *)&_hb_NullPool;
    uVar11 = *(uint *)(&_hb_NullPool + (ulong)(uVar11 + 2) * 4);
    if (uVar11 != 0) {
      puVar23 = (ushort *)
                (&_hb_NullPool +
                (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                ));
    }
    puVar14 = (ushort *)&_hb_NullPool;
    if (_DAT_0010500a != 0) {
      puVar14 = (ushort *)
                (&_hb_NullPool +
                (_DAT_0010500a >> 0x18 | (_DAT_0010500a & 0xff0000) >> 8 |
                 (_DAT_0010500a & 0xff00) << 8 | _DAT_0010500a << 0x18));
    }
    if (uVar5 < (ushort)(*puVar23 << 8 | *puVar23 >> 8)) {
      uVar24 = puVar23[1] << 8;
      uVar19 = puVar23[1] >> 8;
      uVar22 = uVar24 | uVar19;
      uVar9 = (uint)(ushort)(puVar23[2] << 8 | puVar23[2] >> 8);
      uVar11 = uVar22 & 0x7fff;
      uVar19 = uVar24 & 0x7fff | uVar19;
      uVar16 = (ulong)(uVar9 * 2 + 2);
      uVar5 = uVar5 * (uVar9 + uVar11);
      if ((short)uVar22 < 0) {
        puVar13 = (undefined *)((long)puVar23 + uVar5 * 2 + uVar16 + 4);
        uVar5 = uVar9;
        if (uVar19 == 0) {
          fVar28 = 0.0;
          uVar11 = 0;
        }
        else {
          lVar8 = 0;
          fVar28 = 0.0;
          do {
            uVar6 = (uint)(ushort)(puVar23[lVar8 + 3] << 8 | puVar23[lVar8 + 3] >> 8);
            if (uVar6 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
              uVar24 = *puVar14 << 8 | *puVar14 >> 8;
              fVar27 = _LC1;
              if (uVar24 != 0) {
                puVar10 = puVar14 + (ulong)(uVar6 * uVar24) * 3 + 2;
                lVar7 = 0;
                do {
                  uVar22 = puVar10[1];
                  if ((uint)lVar7 < uVar15) {
                    iVar1 = *(int *)(lVar2 + lVar7 * 4);
                    iVar20 = (int)(short)(uVar22 << 8 | uVar22 >> 8);
                    if ((uVar22 != 0) && (iVar1 != iVar20)) {
                      if (iVar1 == 0) goto LAB_0010159e;
                      uVar17 = *puVar10 << 8 | *puVar10 >> 8;
                      uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                      iVar18 = (int)(short)uVar17;
                      iVar12 = (int)(short)uVar22;
                      if (((iVar18 <= iVar20) && (iVar20 <= iVar12)) &&
                         ((-1 < (short)uVar17 || ((short)uVar22 < 1)))) {
                        if ((iVar1 <= iVar18) || (iVar12 <= iVar1)) goto LAB_0010159e;
                        if (iVar1 < iVar20) {
                          fVar26 = (float)(iVar1 - iVar18) / (float)(iVar20 - iVar18);
                        }
                        else {
                          fVar26 = (float)(iVar12 - iVar1) / (float)(iVar12 - iVar20);
                        }
                        if (fVar26 == 0.0) goto LAB_0010159e;
                        fVar27 = fVar27 * fVar26;
                      }
                    }
                  }
                  else if (uVar22 != 0) goto LAB_0010159e;
                  lVar7 = lVar7 + 1;
                  puVar10 = puVar10 + 3;
                } while ((uint)lVar7 < (uint)uVar24);
              }
            }
            else {
LAB_0010159e:
              fVar27 = 0.0;
            }
            uVar6 = *(uint *)(puVar13 + lVar8 * 4);
            lVar8 = lVar8 + 1;
            fVar28 = fVar28 + (float)(int)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                           (uVar6 & 0xff00) << 8 | uVar6 << 0x18) * fVar27;
          } while ((uint)lVar8 < uVar11);
          puVar13 = puVar13 + (ulong)uVar19 * 4;
        }
      }
      else {
        fVar28 = 0.0;
        puVar13 = (undefined *)((long)puVar23 + uVar5 + uVar16 + 4);
        uVar5 = uVar11;
        uVar11 = 0;
      }
      if (uVar11 < uVar5) {
        uVar16 = (ulong)uVar11;
        lVar8 = uVar16 * -2;
        do {
          uVar6 = (uint)(ushort)(puVar23[uVar16 + 3] << 8 | puVar23[uVar16 + 3] >> 8);
          if (uVar6 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
            uVar24 = *puVar14 << 8 | *puVar14 >> 8;
            fVar27 = _LC1;
            if (uVar24 != 0) {
              puVar10 = puVar14 + (ulong)(uVar6 * uVar24) * 3 + 2;
              lVar7 = 0;
              do {
                uVar19 = puVar10[1];
                if ((uint)lVar7 < uVar15) {
                  iVar1 = *(int *)(lVar2 + lVar7 * 4);
                  iVar20 = (int)(short)(uVar19 << 8 | uVar19 >> 8);
                  if ((uVar19 != 0) && (iVar1 != iVar20)) {
                    if (iVar1 == 0) goto LAB_00101733;
                    uVar19 = *puVar10 << 8 | *puVar10 >> 8;
                    uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                    iVar12 = (int)(short)uVar19;
                    iVar18 = (int)(short)uVar22;
                    if (((iVar12 <= iVar20) && (iVar20 <= iVar18)) &&
                       ((-1 < (short)uVar19 || ((short)uVar22 < 1)))) {
                      if ((iVar1 <= iVar12) || (iVar18 <= iVar1)) goto LAB_00101733;
                      if (iVar1 < iVar20) {
                        fVar26 = (float)(iVar1 - iVar12) / (float)(iVar20 - iVar12);
                      }
                      else {
                        fVar26 = (float)(iVar18 - iVar1) / (float)(iVar18 - iVar20);
                      }
                      if (fVar26 == 0.0) goto LAB_00101733;
                      fVar27 = fVar27 * fVar26;
                    }
                  }
                }
                else if (uVar19 != 0) goto LAB_00101733;
                lVar7 = lVar7 + 1;
                puVar10 = puVar10 + 3;
              } while ((uint)lVar7 < (uint)uVar24);
            }
          }
          else {
LAB_00101733:
            fVar27 = 0.0;
          }
          lVar7 = uVar16 * 2;
          uVar16 = uVar16 + 1;
          fVar28 = fVar28 + (float)(int)(short)(*(ushort *)(puVar13 + lVar7 + lVar8) << 8 |
                                               *(ushort *)(puVar13 + lVar7 + lVar8) >> 8) * fVar27;
        } while ((uint)uVar16 < uVar5);
        puVar13 = puVar13 + (ulong)((uVar5 - 1) - uVar11) * 2 + 2;
        uVar11 = uVar5;
      }
      if (uVar11 < uVar9) {
        uVar16 = 0;
        do {
          uVar5 = (uint)(ushort)(puVar23[(ulong)uVar11 + uVar16 + 3] << 8 |
                                puVar23[(ulong)uVar11 + uVar16 + 3] >> 8);
          if (uVar5 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
            uVar24 = *puVar14 << 8 | *puVar14 >> 8;
            fVar27 = _LC1;
            if (uVar24 != 0) {
              puVar10 = puVar14 + (ulong)(uVar5 * uVar24) * 3 + 2;
              lVar8 = 0;
              do {
                uVar19 = puVar10[1];
                if ((uint)lVar8 < uVar15) {
                  iVar1 = *(int *)(lVar2 + lVar8 * 4);
                  iVar20 = (int)(short)(uVar19 << 8 | uVar19 >> 8);
                  if ((uVar19 != 0) && (iVar1 != iVar20)) {
                    if (iVar1 == 0) goto LAB_001018a5;
                    uVar19 = *puVar10 << 8 | *puVar10 >> 8;
                    uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                    iVar12 = (int)(short)uVar19;
                    iVar18 = (int)(short)uVar22;
                    if (((iVar12 <= iVar20) && (iVar20 <= iVar18)) &&
                       ((-1 < (short)uVar19 || ((short)uVar22 < 1)))) {
                      if ((iVar1 <= iVar12) || (iVar18 <= iVar1)) goto LAB_001018a5;
                      if (iVar1 < iVar20) {
                        fVar26 = (float)(iVar1 - iVar12) / (float)(iVar20 - iVar12);
                      }
                      else {
                        fVar26 = (float)(iVar18 - iVar1) / (float)(iVar18 - iVar20);
                      }
                      if (fVar26 == 0.0) goto LAB_001018a5;
                      fVar27 = fVar27 * fVar26;
                    }
                  }
                }
                else if (uVar19 != 0) goto LAB_001018a5;
                lVar8 = lVar8 + 1;
                puVar10 = puVar10 + 3;
              } while ((uint)lVar8 < (uint)uVar24);
            }
          }
          else {
LAB_001018a5:
            fVar27 = 0.0;
          }
          fVar28 = fVar28 + (float)(int)(char)puVar13[uVar16] * fVar27;
          bVar25 = (uVar9 - 1) - uVar11 != uVar16;
          uVar16 = uVar16 + 1;
        } while (bVar25);
      }
      goto LAB_001013f6;
    }
  }
  fVar28 = 0.0;
LAB_001013f6:
  fVar28 = _LC2 + fVar28 * *(float *)(param_1 + 0x4c);
  if ((float)((uint)fVar28 & _LC5) < _LC3) {
    fVar28 = (float)((uint)((float)(int)fVar28 -
                           (float)(-(uint)(fVar28 < (float)(int)fVar28) & (uint)_LC1)) |
                    ~_LC5 & (uint)fVar28);
  }
  return (int)fVar28 + iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::MathValueRecord::get_y_value(hb_font_t*, void const*) const */

int __thiscall
OT::MathValueRecord::get_y_value(MathValueRecord *this,hb_font_t *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  ushort *puVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  ushort uVar19;
  int iVar20;
  uint *puVar21;
  ushort uVar22;
  ushort *puVar23;
  ushort uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar21 = (uint *)&_hb_NullPool;
  iVar4 = (int)((ulong)((long)(short)(*(ushort *)this << 8 | *(ushort *)this >> 8) *
                        *(long *)(param_1 + 0x60) + 0x8000) >> 0x10);
  uVar24 = *(ushort *)(this + 2);
  if (uVar24 != 0) {
    puVar21 = (uint *)((long)param_2 + (ulong)(ushort)(uVar24 << 8 | uVar24 >> 8));
  }
  uVar24 = (ushort)puVar21[1];
  if ((ushort)(uVar24 << 8 | uVar24 >> 8) < 4) {
    if (uVar24 == 0) {
      return iVar4;
    }
    uVar11 = *(uint *)(param_1 + 0x6c);
    if (uVar11 == 0) {
      return iVar4;
    }
    uVar15 = (uint)(ushort)((ushort)*puVar21 << 8 | (ushort)*puVar21 >> 8);
    if (uVar11 < uVar15) {
      return iVar4;
    }
    if ((ushort)(*(ushort *)((long)puVar21 + 2) << 8 | *(ushort *)((long)puVar21 + 2) >> 8) < uVar11
       ) {
      return iVar4;
    }
    bVar3 = (byte)(uVar24 >> 8);
    uVar15 = uVar11 - uVar15;
    uVar24 = *(ushort *)((long)puVar21 + (ulong)(uVar15 >> (4 - bVar3 & 0x1f)) * 2 + 6);
    uVar5 = 0xffff >> (0x10U - (char)(1 << (bVar3 & 0x1f)) & 0x1f);
    uVar15 = (ushort)(uVar24 << 8 | uVar24 >> 8) >>
             (0x10U - (char)(((1 << (4 - bVar3 & 0x1f)) - 1U & uVar15) + 1 << (bVar3 & 0x1f)) & 0x1f
             ) & uVar5;
    if (uVar5 + 1 >> 1 <= uVar15) {
      uVar15 = (uVar15 - uVar5) - 1;
    }
    if (uVar15 == 0) {
      return iVar4;
    }
    return iVar4 + (int)(((long)*(int *)(param_1 + 0x2c) * (long)(int)uVar15) / (long)(ulong)uVar11)
    ;
  }
  if (uVar24 != 0x80) {
    return iVar4;
  }
  uVar11 = *puVar21;
  uVar15 = *(uint *)(param_1 + 0x78);
  lVar2 = *(long *)(param_1 + 0x80);
  uVar5 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8;
  uVar11 = ((uVar11 & 0xff00) << 8 | uVar11 << 0x18) >> 0x10;
  if (uVar11 < (ushort)(_DAT_0010500e << 8 | _DAT_0010500e >> 8)) {
    puVar23 = (ushort *)&_hb_NullPool;
    uVar11 = *(uint *)(&_hb_NullPool + (ulong)(uVar11 + 2) * 4);
    if (uVar11 != 0) {
      puVar23 = (ushort *)
                (&_hb_NullPool +
                (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
                ));
    }
    puVar14 = (ushort *)&_hb_NullPool;
    if (_DAT_0010500a != 0) {
      puVar14 = (ushort *)
                (&_hb_NullPool +
                (_DAT_0010500a >> 0x18 | (_DAT_0010500a & 0xff0000) >> 8 |
                 (_DAT_0010500a & 0xff00) << 8 | _DAT_0010500a << 0x18));
    }
    if (uVar5 < (ushort)(*puVar23 << 8 | *puVar23 >> 8)) {
      uVar24 = puVar23[1] << 8;
      uVar19 = puVar23[1] >> 8;
      uVar22 = uVar24 | uVar19;
      uVar9 = (uint)(ushort)(puVar23[2] << 8 | puVar23[2] >> 8);
      uVar11 = uVar22 & 0x7fff;
      uVar19 = uVar24 & 0x7fff | uVar19;
      uVar16 = (ulong)(uVar9 * 2 + 2);
      uVar5 = uVar5 * (uVar9 + uVar11);
      if ((short)uVar22 < 0) {
        puVar13 = (undefined *)((long)puVar23 + uVar5 * 2 + uVar16 + 4);
        uVar5 = uVar9;
        if (uVar19 == 0) {
          fVar28 = 0.0;
          uVar11 = 0;
        }
        else {
          lVar8 = 0;
          fVar28 = 0.0;
          do {
            uVar6 = (uint)(ushort)(puVar23[lVar8 + 3] << 8 | puVar23[lVar8 + 3] >> 8);
            if (uVar6 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
              uVar24 = *puVar14 << 8 | *puVar14 >> 8;
              fVar27 = _LC1;
              if (uVar24 != 0) {
                puVar10 = puVar14 + (ulong)(uVar6 * uVar24) * 3 + 2;
                lVar7 = 0;
                do {
                  uVar22 = puVar10[1];
                  if ((uint)lVar7 < uVar15) {
                    iVar1 = *(int *)(lVar2 + lVar7 * 4);
                    iVar20 = (int)(short)(uVar22 << 8 | uVar22 >> 8);
                    if ((uVar22 != 0) && (iVar1 != iVar20)) {
                      if (iVar1 == 0) goto LAB_00101d6e;
                      uVar17 = *puVar10 << 8 | *puVar10 >> 8;
                      uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                      iVar18 = (int)(short)uVar17;
                      iVar12 = (int)(short)uVar22;
                      if (((iVar18 <= iVar20) && (iVar20 <= iVar12)) &&
                         ((-1 < (short)uVar17 || ((short)uVar22 < 1)))) {
                        if ((iVar1 <= iVar18) || (iVar12 <= iVar1)) goto LAB_00101d6e;
                        if (iVar1 < iVar20) {
                          fVar26 = (float)(iVar1 - iVar18) / (float)(iVar20 - iVar18);
                        }
                        else {
                          fVar26 = (float)(iVar12 - iVar1) / (float)(iVar12 - iVar20);
                        }
                        if (fVar26 == 0.0) goto LAB_00101d6e;
                        fVar27 = fVar27 * fVar26;
                      }
                    }
                  }
                  else if (uVar22 != 0) goto LAB_00101d6e;
                  lVar7 = lVar7 + 1;
                  puVar10 = puVar10 + 3;
                } while ((uint)lVar7 < (uint)uVar24);
              }
            }
            else {
LAB_00101d6e:
              fVar27 = 0.0;
            }
            uVar6 = *(uint *)(puVar13 + lVar8 * 4);
            lVar8 = lVar8 + 1;
            fVar28 = fVar28 + (float)(int)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                           (uVar6 & 0xff00) << 8 | uVar6 << 0x18) * fVar27;
          } while ((uint)lVar8 < uVar11);
          puVar13 = puVar13 + (ulong)uVar19 * 4;
        }
      }
      else {
        fVar28 = 0.0;
        puVar13 = (undefined *)((long)puVar23 + uVar5 + uVar16 + 4);
        uVar5 = uVar11;
        uVar11 = 0;
      }
      if (uVar11 < uVar5) {
        uVar16 = (ulong)uVar11;
        lVar8 = uVar16 * -2;
        do {
          uVar6 = (uint)(ushort)(puVar23[uVar16 + 3] << 8 | puVar23[uVar16 + 3] >> 8);
          if (uVar6 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
            uVar24 = *puVar14 << 8 | *puVar14 >> 8;
            fVar27 = _LC1;
            if (uVar24 != 0) {
              puVar10 = puVar14 + (ulong)(uVar6 * uVar24) * 3 + 2;
              lVar7 = 0;
              do {
                uVar19 = puVar10[1];
                if ((uint)lVar7 < uVar15) {
                  iVar1 = *(int *)(lVar2 + lVar7 * 4);
                  iVar20 = (int)(short)(uVar19 << 8 | uVar19 >> 8);
                  if ((uVar19 != 0) && (iVar1 != iVar20)) {
                    if (iVar1 == 0) goto LAB_00101f03;
                    uVar19 = *puVar10 << 8 | *puVar10 >> 8;
                    uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                    iVar12 = (int)(short)uVar19;
                    iVar18 = (int)(short)uVar22;
                    if (((iVar12 <= iVar20) && (iVar20 <= iVar18)) &&
                       ((-1 < (short)uVar19 || ((short)uVar22 < 1)))) {
                      if ((iVar1 <= iVar12) || (iVar18 <= iVar1)) goto LAB_00101f03;
                      if (iVar1 < iVar20) {
                        fVar26 = (float)(iVar1 - iVar12) / (float)(iVar20 - iVar12);
                      }
                      else {
                        fVar26 = (float)(iVar18 - iVar1) / (float)(iVar18 - iVar20);
                      }
                      if (fVar26 == 0.0) goto LAB_00101f03;
                      fVar27 = fVar27 * fVar26;
                    }
                  }
                }
                else if (uVar19 != 0) goto LAB_00101f03;
                lVar7 = lVar7 + 1;
                puVar10 = puVar10 + 3;
              } while ((uint)lVar7 < (uint)uVar24);
            }
          }
          else {
LAB_00101f03:
            fVar27 = 0.0;
          }
          lVar7 = uVar16 * 2;
          uVar16 = uVar16 + 1;
          fVar28 = fVar28 + (float)(int)(short)(*(ushort *)(puVar13 + lVar7 + lVar8) << 8 |
                                               *(ushort *)(puVar13 + lVar7 + lVar8) >> 8) * fVar27;
        } while ((uint)uVar16 < uVar5);
        puVar13 = puVar13 + (ulong)((uVar5 - 1) - uVar11) * 2 + 2;
        uVar11 = uVar5;
      }
      if (uVar11 < uVar9) {
        uVar16 = 0;
        do {
          uVar5 = (uint)(ushort)(puVar23[(ulong)uVar11 + uVar16 + 3] << 8 |
                                puVar23[(ulong)uVar11 + uVar16 + 3] >> 8);
          if (uVar5 < (ushort)(puVar14[1] << 8 | puVar14[1] >> 8)) {
            uVar24 = *puVar14 << 8 | *puVar14 >> 8;
            fVar27 = _LC1;
            if (uVar24 != 0) {
              puVar10 = puVar14 + (ulong)(uVar5 * uVar24) * 3 + 2;
              lVar8 = 0;
              do {
                uVar19 = puVar10[1];
                if ((uint)lVar8 < uVar15) {
                  iVar1 = *(int *)(lVar2 + lVar8 * 4);
                  iVar20 = (int)(short)(uVar19 << 8 | uVar19 >> 8);
                  if ((uVar19 != 0) && (iVar1 != iVar20)) {
                    if (iVar1 == 0) goto LAB_00102075;
                    uVar19 = *puVar10 << 8 | *puVar10 >> 8;
                    uVar22 = puVar10[2] << 8 | puVar10[2] >> 8;
                    iVar12 = (int)(short)uVar19;
                    iVar18 = (int)(short)uVar22;
                    if (((iVar12 <= iVar20) && (iVar20 <= iVar18)) &&
                       ((-1 < (short)uVar19 || ((short)uVar22 < 1)))) {
                      if ((iVar1 <= iVar12) || (iVar18 <= iVar1)) goto LAB_00102075;
                      if (iVar1 < iVar20) {
                        fVar26 = (float)(iVar1 - iVar12) / (float)(iVar20 - iVar12);
                      }
                      else {
                        fVar26 = (float)(iVar18 - iVar1) / (float)(iVar18 - iVar20);
                      }
                      if (fVar26 == 0.0) goto LAB_00102075;
                      fVar27 = fVar27 * fVar26;
                    }
                  }
                }
                else if (uVar19 != 0) goto LAB_00102075;
                lVar8 = lVar8 + 1;
                puVar10 = puVar10 + 3;
              } while ((uint)lVar8 < (uint)uVar24);
            }
          }
          else {
LAB_00102075:
            fVar27 = 0.0;
          }
          fVar28 = fVar28 + (float)(int)(char)puVar13[uVar16] * fVar27;
          bVar25 = (uVar9 - 1) - uVar11 != uVar16;
          uVar16 = uVar16 + 1;
        } while (bVar25);
      }
      goto LAB_00101bc6;
    }
  }
  fVar28 = 0.0;
LAB_00101bc6:
  fVar28 = _LC2 + fVar28 * *(float *)(param_1 + 0x50);
  if ((float)((uint)fVar28 & _LC5) < _LC3) {
    fVar28 = (float)((uint)((float)(int)fVar28 -
                           (float)(-(uint)(fVar28 < (float)(int)fVar28) & (uint)_LC1)) |
                    ~_LC5 & (uint)fVar28);
  }
  return (int)fVar28 + iVar4;
}



/* OT::MathValueRecord::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall
OT::MathValueRecord::sanitize(MathValueRecord *this,hb_sanitize_context_t *param_1,void *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (this + (4 - *(long *)(param_1 + 8)) <= (MathValueRecord *)(ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)(this + 2);
    if (uVar1 == 0) {
      return 1;
    }
    puVar4 = (ushort *)((long)param_2 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    if ((ulong)((long)puVar4 + (6 - *(long *)(param_1 + 8))) <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = puVar4[2];
      if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) {
        return 1;
      }
      uVar3 = (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8);
      uVar5 = (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
      if (uVar3 < uVar5) {
        uVar3 = 6;
      }
      else {
        uVar3 = (uVar3 - uVar5 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
      }
      if ((((ulong)((long)puVar4 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)puVar4))) &&
         (iVar2 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar2 - uVar3,
         0 < (int)(iVar2 - uVar3))) {
        return 1;
      }
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
       param_1[0x28] != (hb_sanitize_context_t)0x0)) {
      *(undefined2 *)(this + 2) = 0;
      return 1;
    }
  }
  return 0;
}



/* OT::MathItalicsCorrectionInfo::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MathItalicsCorrectionInfo::sanitize
          (MathItalicsCorrectionInfo *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  MathItalicsCorrectionInfo *pMVar5;
  MathItalicsCorrectionInfo *pMVar6;
  uint uVar7;
  uint uVar8;
  MathItalicsCorrectionInfo *pMVar9;
  
  pMVar6 = this + 4;
  if ((MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18) <
      pMVar6 + -*(long *)(param_1 + 8)) {
    return 0;
  }
  if ((MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar1 = *(ushort *)this;
  if (uVar1 != 0) {
    pMVar9 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
    if (pMVar9 + (2 - *(long *)(param_1 + 8)) <=
        (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pMVar9 == 0x100) {
        if (pMVar9 + (4 - *(long *)(param_1 + 8)) <=
            (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar4 = *(long *)(param_1 + 8);
          pMVar5 = (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18);
          if (pMVar9 + (4 - lVar4) <= pMVar5) {
            uVar8 = (uint)(ushort)(*(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8);
LAB_001025a4:
            if ((uVar8 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar9 + 4))) &&
               (iVar3 = *(int *)(param_1 + 0x1c) + uVar8 * -2, *(int *)(param_1 + 0x1c) = iVar3,
               0 < iVar3)) goto LAB_00102384;
          }
        }
      }
      else {
        if (*(short *)pMVar9 != 0x200) goto LAB_0010237d;
        if (pMVar9 + (4 - *(long *)(param_1 + 8)) <=
            (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar4 = *(long *)(param_1 + 8);
          pMVar5 = (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18);
          if (pMVar9 + (4 - lVar4) <= pMVar5) {
            uVar1 = *(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8;
            uVar8 = (uint)uVar1 + (uint)uVar1 * 2;
            goto LAB_001025a4;
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
LAB_0010237d:
  lVar4 = *(long *)(param_1 + 8);
  pMVar5 = (MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18);
LAB_00102384:
  if ((((pMVar5 < pMVar6 + -lVar4) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8)))) ||
      (uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar6) < uVar8 * 4)) ||
     (iVar3 = *(int *)(param_1 + 0x1c) + uVar8 * -4, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)) {
    return 0;
  }
  uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar1 != 0) {
    pMVar6 = this + 8;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar2 = *(ushort *)(pMVar6 + -2);
      if (uVar2 != 0) goto LAB_00102423;
      pMVar6 = pMVar6 + 4;
    } while (this + (ulong)(uVar1 - 1) * 4 + 0xc != pMVar6);
  }
  return 1;
LAB_00102423:
  pMVar9 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if ((MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18) <
      pMVar9 + (6 - *(long *)(param_1 + 8))) {
LAB_00102528:
    if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
       param_1[0x28] == (hb_sanitize_context_t)0x0)) {
      return 0;
    }
    *(undefined2 *)(pMVar6 + -2) = 0;
  }
  else {
    uVar2 = *(ushort *)(pMVar9 + 4);
    if ((ushort)((uVar2 << 8 | uVar2 >> 8) - 1) < 3) {
      uVar8 = (uint)(ushort)(*(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8);
      uVar7 = (uint)(ushort)(*(ushort *)pMVar9 << 8 | *(ushort *)pMVar9 >> 8);
      if (uVar8 < uVar7) {
        uVar8 = 6;
      }
      else {
        uVar8 = (uVar8 - uVar7 >> (4U - (char)(uVar2 >> 8) & 0x1f)) * 2 + 8;
      }
      if ((((MathItalicsCorrectionInfo *)(ulong)*(uint *)(param_1 + 0x18) <
            pMVar9 + -*(long *)(param_1 + 8)) ||
          ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar9) < uVar8)) ||
         (iVar3 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar3 - uVar8,
         (int)(iVar3 - uVar8) < 1)) goto LAB_00102528;
    }
  }
  do {
    pMVar9 = pMVar6 + 4;
    if (this + (ulong)(uVar1 - 1) * 4 + 0xc == pMVar9) {
      return 1;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar9 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(pMVar6 + 2);
    pMVar6 = pMVar9;
  } while (uVar2 == 0);
  goto LAB_00102423;
}



/* OT::MathTopAccentAttachment::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MathTopAccentAttachment::sanitize(MathTopAccentAttachment *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  MathTopAccentAttachment *pMVar5;
  MathTopAccentAttachment *pMVar6;
  uint uVar7;
  uint uVar8;
  MathTopAccentAttachment *pMVar9;
  
  pMVar6 = this + 4;
  if ((MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18) < pMVar6 + -*(long *)(param_1 + 8)
     ) {
    return 0;
  }
  if ((MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar1 = *(ushort *)this;
  if (uVar1 != 0) {
    pMVar9 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
    if (pMVar9 + (2 - *(long *)(param_1 + 8)) <=
        (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pMVar9 == 0x100) {
        if (pMVar9 + (4 - *(long *)(param_1 + 8)) <=
            (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar4 = *(long *)(param_1 + 8);
          pMVar5 = (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18);
          if (pMVar9 + (4 - lVar4) <= pMVar5) {
            uVar8 = (uint)(ushort)(*(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8);
LAB_001028b4:
            if ((uVar8 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar9 + 4))) &&
               (iVar3 = *(int *)(param_1 + 0x1c) + uVar8 * -2, *(int *)(param_1 + 0x1c) = iVar3,
               0 < iVar3)) goto LAB_00102694;
          }
        }
      }
      else {
        if (*(short *)pMVar9 != 0x200) goto LAB_0010268d;
        if (pMVar9 + (4 - *(long *)(param_1 + 8)) <=
            (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18)) {
          lVar4 = *(long *)(param_1 + 8);
          pMVar5 = (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18);
          if (pMVar9 + (4 - lVar4) <= pMVar5) {
            uVar1 = *(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8;
            uVar8 = (uint)uVar1 + (uint)uVar1 * 2;
            goto LAB_001028b4;
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
LAB_0010268d:
  lVar4 = *(long *)(param_1 + 8);
  pMVar5 = (MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18);
LAB_00102694:
  if ((((pMVar5 < pMVar6 + -lVar4) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8)))) ||
      (uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar6) < uVar8 * 4)) ||
     (iVar3 = *(int *)(param_1 + 0x1c) + uVar8 * -4, *(int *)(param_1 + 0x1c) = iVar3, iVar3 < 1)) {
    return 0;
  }
  uVar1 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar1 != 0) {
    pMVar6 = this + 8;
    do {
      if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar6 - *(long *)(param_1 + 8))) {
        return 0;
      }
      uVar2 = *(ushort *)(pMVar6 + -2);
      if (uVar2 != 0) goto LAB_00102733;
      pMVar6 = pMVar6 + 4;
    } while (this + (ulong)(uVar1 - 1) * 4 + 0xc != pMVar6);
  }
  return 1;
LAB_00102733:
  pMVar9 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if ((MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18) <
      pMVar9 + (6 - *(long *)(param_1 + 8))) {
LAB_00102838:
    if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
       param_1[0x28] == (hb_sanitize_context_t)0x0)) {
      return 0;
    }
    *(undefined2 *)(pMVar6 + -2) = 0;
  }
  else {
    uVar2 = *(ushort *)(pMVar9 + 4);
    if ((ushort)((uVar2 << 8 | uVar2 >> 8) - 1) < 3) {
      uVar8 = (uint)(ushort)(*(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8);
      uVar7 = (uint)(ushort)(*(ushort *)pMVar9 << 8 | *(ushort *)pMVar9 >> 8);
      if (uVar8 < uVar7) {
        uVar8 = 6;
      }
      else {
        uVar8 = (uVar8 - uVar7 >> (4U - (char)(uVar2 >> 8) & 0x1f)) * 2 + 8;
      }
      if ((((MathTopAccentAttachment *)(ulong)*(uint *)(param_1 + 0x18) <
            pMVar9 + -*(long *)(param_1 + 8)) ||
          ((uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar9) < uVar8)) ||
         (iVar3 = *(int *)(param_1 + 0x1c), *(uint *)(param_1 + 0x1c) = iVar3 - uVar8,
         (int)(iVar3 - uVar8) < 1)) goto LAB_00102838;
    }
  }
  do {
    pMVar9 = pMVar6 + 4;
    if (this + (ulong)(uVar1 - 1) * 4 + 0xc == pMVar9) {
      return 1;
    }
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar9 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar2 = *(ushort *)(pMVar6 + 2);
    pMVar6 = pMVar9;
  } while (uVar2 == 0);
  goto LAB_00102733;
}



/* OT::MathKernInfo::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::MathKernInfo::sanitize(MathKernInfo *this,hb_sanitize_context_t *param_1)

{
  MathKernInfo *pMVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  MathKernInfo *pMVar9;
  MathKernInfo *pMVar10;
  MathKernInfo *pMVar11;
  uint uVar12;
  
  pMVar10 = this + 4;
  if ((MathKernInfo *)(ulong)*(uint *)(param_1 + 0x18) < pMVar10 + -*(long *)(param_1 + 8)) {
    return 0;
  }
  if ((MathKernInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar3 = *(ushort *)this;
  if (uVar3 != 0) {
    pMVar9 = this + (ushort)(uVar3 << 8 | uVar3 >> 8);
    if (pMVar9 + (2 - *(long *)(param_1 + 8)) <= (MathKernInfo *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*(short *)pMVar9 == 0x100) {
        pMVar11 = pMVar9 + 4;
        if ((ulong)((long)pMVar11 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          lVar8 = *(long *)(param_1 + 8);
          uVar6 = (ulong)*(uint *)(param_1 + 0x18);
          if (((ulong)((long)pMVar11 - lVar8) <= uVar6) &&
             (uVar5 = (uint)(ushort)(*(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8),
             uVar5 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar11))) {
            iVar7 = *(int *)(param_1 + 0x1c) + uVar5 * -2;
            *(int *)(param_1 + 0x1c) = iVar7;
joined_r0x00102bd1:
            if (0 < iVar7) goto LAB_001029b7;
          }
        }
      }
      else {
        if (*(short *)pMVar9 != 0x200) goto LAB_001029b0;
        pMVar11 = pMVar9 + 4;
        if ((ulong)((long)pMVar11 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          lVar8 = *(long *)(param_1 + 8);
          uVar6 = (ulong)*(uint *)(param_1 + 0x18);
          if (((ulong)((long)pMVar11 - lVar8) <= uVar6) &&
             (uVar3 = *(ushort *)(pMVar9 + 2) << 8 | *(ushort *)(pMVar9 + 2) >> 8,
             iVar7 = (uint)uVar3 + (uint)uVar3 * 2,
             (uint)(iVar7 * 2) <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar11))) {
            iVar7 = *(int *)(param_1 + 0x1c) + iVar7 * -2;
            *(int *)(param_1 + 0x1c) = iVar7;
            goto joined_r0x00102bd1;
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
LAB_001029b0:
  lVar8 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
LAB_001029b7:
  if ((((uVar6 < (ulong)((long)pMVar10 - lVar8)) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar10 - *(long *)(param_1 + 8)))) ||
      (uVar5 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar10) < uVar5 * 8)) ||
     (iVar7 = *(int *)(param_1 + 0x1c) + uVar5 * -8, *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)) {
    return 0;
  }
  uVar3 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar3 != 0) {
    pMVar10 = this + 0xe;
    do {
      pMVar9 = pMVar10 + -8;
      do {
        if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar9 - *(long *)(param_1 + 8))) {
          return 0;
        }
        uVar4 = *(ushort *)(pMVar9 + -2);
        if (uVar4 != 0) {
          pMVar1 = this + (ushort)(uVar4 << 8 | uVar4 >> 8);
          pMVar11 = pMVar1 + 2;
          if ((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar11 - *(long *)(param_1 + 8)))
              || ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar11 - *(long *)(param_1 + 8))
                 )) || ((uVar4 = *(ushort *)pMVar1 << 8 | *(ushort *)pMVar1 >> 8,
                        uVar5 = uVar4 + 1 + (uint)uVar4,
                        (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar11) < uVar5 * 4 ||
                        (iVar7 = *(int *)(param_1 + 0x1c) + uVar5 * -4,
                        *(int *)(param_1 + 0x1c) = iVar7, iVar7 < 1)))) {
LAB_00102b18:
            if (0x1f < *(uint *)(param_1 + 0x2c)) {
              return 0;
            }
            *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
            if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
              return 0;
            }
            *(undefined2 *)(pMVar9 + -2) = 0;
          }
          else {
            uVar12 = 0;
            do {
              cVar2 = MathValueRecord::sanitize((MathValueRecord *)pMVar11,param_1,pMVar1);
              if (cVar2 == '\0') goto LAB_00102b18;
              uVar12 = uVar12 + 1;
              pMVar11 = (MathKernInfo *)((MathValueRecord *)pMVar11 + 4);
            } while (uVar12 < uVar5);
          }
        }
        pMVar9 = pMVar9 + 2;
      } while (pMVar10 != pMVar9);
      pMVar10 = pMVar10 + 8;
    } while (this + (ulong)(uVar3 - 1) * 8 + 0x16 != pMVar10);
  }
  return 1;
}



/* OT::MathGlyphInfo::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MathGlyphInfo::sanitize(MathGlyphInfo *this,hb_sanitize_context_t *param_1)

{
  MathGlyphInfo *pMVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  MathGlyphInfo *pMVar6;
  
  if ((MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)this;
  if ((uVar2 != 0) &&
     (cVar4 = MathItalicsCorrectionInfo::sanitize
                        ((MathItalicsCorrectionInfo *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),
                         param_1), cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)this = 0;
  }
  if ((MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 2);
  if ((uVar2 != 0) &&
     (cVar4 = MathTopAccentAttachment::sanitize
                        ((MathTopAccentAttachment *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),
                         param_1), cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 2) = 0;
  }
  if ((MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (6 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4);
  if (uVar2 == 0) goto LAB_00102cd2;
  pMVar6 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if (pMVar6 + (2 - *(long *)(param_1 + 8)) <= (MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*(short *)pMVar6 == 0x100) {
      pMVar1 = pMVar6 + 4;
      if ((((ulong)((long)pMVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pMVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar5 = (uint)(ushort)(*(ushort *)(pMVar6 + 2) << 8 | *(ushort *)(pMVar6 + 2) >> 8) * 2,
         uVar5 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar1))) {
LAB_00102e0e:
        iVar3 = *(int *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c) = iVar3 - uVar5;
        if (0 < (int)(iVar3 - uVar5)) goto LAB_00102cd2;
      }
    }
    else {
      if (*(short *)pMVar6 != 0x200) goto LAB_00102cd2;
      pMVar1 = pMVar6 + 4;
      if ((((ulong)((long)pMVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
          ((ulong)((long)pMVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
         (uVar5 = (uint)(ushort)(*(ushort *)(pMVar6 + 2) << 8 | *(ushort *)(pMVar6 + 2) >> 8) * 6,
         uVar5 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar1))) goto LAB_00102e0e;
    }
  }
  if (0x1f < *(uint *)(param_1 + 0x2c)) {
    return 0;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
  if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
    return 0;
  }
  *(undefined2 *)(this + 4) = 0;
LAB_00102cd2:
  if ((MathGlyphInfo *)(ulong)*(uint *)(param_1 + 0x18) < this + (8 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 6);
  if ((uVar2 != 0) &&
     (cVar4 = MathKernInfo::sanitize
                        ((MathKernInfo *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),param_1),
     cVar4 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined2 *)(this + 6) = 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::MathGlyphAssembly::get_parts(hb_direction_t, hb_font_t*, unsigned int, unsigned int*,
   hb_ot_math_glyph_part_t*, int*) const */

ushort __thiscall
OT::MathGlyphAssembly::get_parts
          (MathGlyphAssembly *this,uint param_2,hb_font_t *param_3,uint param_4,uint *param_5,
          uint *param_6,undefined4 *param_7)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  MathGlyphAssembly *pMVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  MathGlyphAssembly *pMVar10;
  long lVar11;
  MathGlyphAssembly *pMVar12;
  long lVar13;
  undefined8 uVar14;
  
  if (param_5 != (uint *)0x0) {
    uVar2 = *param_5;
    uVar4 = (ulong)uVar2;
    lVar11 = *(long *)(param_3 + 0x60);
    if ((param_2 & 0xfffffffe) != 6) {
      lVar11 = *(long *)(param_3 + 0x58);
    }
    uVar7 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
    if (uVar7 < param_4) {
      lVar13 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 - param_4;
      if (uVar2 < uVar8) {
        lVar13 = uVar4 * 10;
        uVar8 = uVar2;
      }
      else {
        lVar13 = (ulong)uVar8 * 10;
      }
    }
    *param_5 = uVar8;
    pMVar10 = this + (ulong)param_4 * 10 + 6;
    puVar1 = param_6 + uVar4 * 5;
    pMVar12 = pMVar10 + lVar13;
LAB_00103010:
    iVar9 = (int)uVar4;
    puVar6 = param_6;
    if (pMVar12 == pMVar10) {
      if (uVar8 != 0) {
        pMVar5 = pMVar12;
        if (param_6 != puVar1) {
          if (iVar9 == 0) goto LAB_001030f1;
          goto LAB_00102f8d;
        }
        if (iVar9 != 0) goto LAB_00102f8d;
      }
    }
    else {
      if (param_6 == puVar1) {
        if (iVar9 == 0) goto LAB_00103048;
      }
      else if (iVar9 == 0) goto LAB_00103082;
      while( true ) {
        pMVar5 = (MathGlyphAssembly *)&_hb_NullPool;
        if (uVar8 != 0) {
          pMVar5 = pMVar10;
        }
LAB_00102f8d:
        while( true ) {
          *puVar6 = (uint)(ushort)(*(ushort *)pMVar5 << 8 | *(ushort *)pMVar5 >> 8);
          puVar6[1] = (uint)((ulong)((short)(*(ushort *)(pMVar5 + 2) << 8 |
                                            *(ushort *)(pMVar5 + 2) >> 8) * lVar11 + 0x8000) >> 0x10
                            );
          puVar6[2] = (uint)((ulong)((short)(*(ushort *)(pMVar5 + 4) << 8 |
                                            *(ushort *)(pMVar5 + 4) >> 8) * lVar11 + 0x8000) >> 0x10
                            );
          puVar6[3] = (uint)((ulong)((short)(*(ushort *)(pMVar5 + 6) << 8 |
                                            *(ushort *)(pMVar5 + 6) >> 8) * lVar11 + 0x8000) >> 0x10
                            );
          puVar6[4] = (byte)pMVar5[9] & 1;
          if (uVar8 != 0) {
            uVar8 = uVar8 - 1;
            pMVar10 = pMVar10 + 10;
          }
          if (iVar9 != 0) {
            param_6 = param_6 + 5;
            uVar4 = (ulong)(iVar9 - 1);
            goto LAB_00103010;
          }
          if (pMVar10 != pMVar12) break;
          if ((uVar8 == 0) || (param_6 == puVar1)) goto LAB_00103048;
LAB_001030f1:
          _hb_blob_reference = _hb_face_reference_table;
          _hb_face_reference_table = __hb_CrapPool;
          pMVar5 = pMVar10;
          puVar6 = (uint *)&_hb_CrapPool;
          __hb_CrapPool = __hb_NullPool;
        }
        if (param_6 == puVar1) break;
LAB_00103082:
        uVar14 = __hb_CrapPool;
        _hb_blob_reference = _hb_face_reference_table;
        puVar6 = (uint *)&_hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
        _hb_face_reference_table = uVar14;
      }
    }
  }
LAB_00103048:
  if (param_7 != (undefined4 *)0x0) {
    uVar3 = MathValueRecord::get_x_value((MathValueRecord *)this,param_3,this);
    *param_7 = uVar3;
  }
  return *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
}



/* OT::MathGlyphConstruction::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall
OT::MathGlyphConstruction::sanitize(MathGlyphConstruction *this,hb_sanitize_context_t *param_1)

{
  MathGlyphConstruction *pMVar1;
  MathValueRecord *pMVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  MathValueRecord *this_00;
  
  pMVar1 = this + 4;
  if ((MathGlyphConstruction *)(ulong)*(uint *)(param_1 + 0x18) < pMVar1 + -*(long *)(param_1 + 8))
  {
    return 0;
  }
  if ((MathGlyphConstruction *)(ulong)*(uint *)(param_1 + 0x18) <
      this + (2 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar7 = *(ushort *)this;
  if (uVar7 != 0) {
    this_00 = (MathValueRecord *)(this + (ushort)(uVar7 << 8 | uVar7 >> 8));
    pMVar2 = this_00 + 6;
    if ((((ulong)((long)pMVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
        (cVar3 = MathValueRecord::sanitize(this_00,param_1,this_00), cVar3 != '\0')) &&
       ((ulong)((long)pMVar2 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
      lVar6 = *(long *)(param_1 + 8);
      uVar5 = (ulong)*(uint *)(param_1 + 0x18);
      if ((((ulong)((long)pMVar2 - lVar6) <= uVar5) &&
          (uVar7 = *(ushort *)(this_00 + 4) << 8 | *(ushort *)(this_00 + 4) >> 8,
          iVar8 = (uint)uVar7 + (uint)uVar7 * 4,
          (uint)(iVar8 * 2) <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar2))) &&
         (iVar8 = *(int *)(param_1 + 0x1c) + iVar8 * -2, *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8
         )) goto LAB_0010318b;
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
  lVar6 = *(long *)(param_1 + 8);
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
LAB_0010318b:
  if (((ulong)((long)pMVar1 - lVar6) <= uVar5) &&
     ((ulong)((long)pMVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    lVar6 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) << 2;
    uVar4 = (uint)lVar6;
    if (uVar4 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar1)) {
      iVar8 = *(int *)(param_1 + 0x1c) - uVar4;
      *(int *)(param_1 + 0x1c) = iVar8;
      return CONCAT71((int7)((ulong)lVar6 >> 8),0 < iVar8);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::MathGlyphConstruction::get_variants(hb_direction_t, hb_font_t*, unsigned int, unsigned int*,
   hb_ot_math_glyph_variant_t*) const */

ushort __thiscall
OT::MathGlyphConstruction::get_variants
          (MathGlyphConstruction *this,uint param_2,long param_3,uint param_4,uint *param_5,
          uint *param_6)

{
  MathGlyphConstruction *pMVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  MathGlyphConstruction *pMVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  MathGlyphConstruction *pMVar13;
  
  if (param_5 == (uint *)0x0) {
    return *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  }
  lVar7 = *(long *)(param_3 + 0x60);
  if ((param_2 & 0xfffffffe) != 6) {
    lVar7 = *(long *)(param_3 + 0x58);
  }
  uVar3 = *param_5;
  uVar6 = (ulong)uVar3;
  uVar10 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
  if (uVar10 < param_4) {
    lVar12 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = uVar10 - param_4;
    lVar12 = (ulong)uVar11 << 2;
    if (uVar3 < uVar11) {
      lVar12 = uVar6 * 4;
      uVar11 = uVar3;
    }
  }
  pMVar5 = this + (ulong)param_4 * 4 + 4;
  *param_5 = uVar11;
  puVar2 = param_6 + uVar6 * 2;
  pMVar13 = pMVar5 + lVar12;
LAB_00103367:
  iVar8 = (int)uVar6;
  puVar9 = param_6;
  if (pMVar13 == pMVar5) {
    if (uVar11 == 0) {
LAB_00103394:
      return *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    }
    if (param_6 == puVar2) {
      if (iVar8 == 0) goto LAB_00103394;
    }
    else if (iVar8 == 0) goto LAB_00103432;
  }
  else {
    if (param_6 == puVar2) {
      if (iVar8 == 0) goto LAB_00103394;
    }
    else if (iVar8 == 0) goto LAB_001033b2;
    if (uVar11 == 0) goto LAB_001033d0;
  }
LAB_00103329:
  do {
    pMVar1 = pMVar5 + 2;
    uVar10 = *(ushort *)pMVar5;
    uVar11 = uVar11 - 1;
    pMVar5 = pMVar5 + 4;
    uVar4 = *(ushort *)pMVar1 << 8 | *(ushort *)pMVar1 >> 8;
    uVar10 = uVar10 << 8 | uVar10 >> 8;
    while( true ) {
      *puVar9 = (uint)uVar10;
      puVar9[1] = (uint)((ulong)((short)uVar4 * lVar7 + 0x8000) >> 0x10);
      if (iVar8 != 0) {
        param_6 = param_6 + 2;
        uVar6 = (ulong)(iVar8 - 1);
        goto LAB_00103367;
      }
      if (pMVar5 == pMVar13) break;
      if (param_6 == puVar2) goto LAB_00103394;
LAB_001033b2:
      __hb_CrapPool = CONCAT44(_DAT_0010500c,CONCAT22(_DAT_0010500a,__hb_NullPool));
      puVar9 = (uint *)&_hb_CrapPool;
      if (uVar11 != 0) goto LAB_00103329;
LAB_001033d0:
      uVar4 = _DAT_0010500a << 8 | _DAT_0010500a >> 8;
      uVar10 = __hb_NullPool << 8 | __hb_NullPool >> 8;
    }
    if ((uVar11 == 0) || (param_6 == puVar2)) goto LAB_00103394;
LAB_00103432:
    __hb_CrapPool = CONCAT44(_DAT_0010500c,CONCAT22(_DAT_0010500a,__hb_NullPool));
    puVar9 = (uint *)&_hb_CrapPool;
  } while( true );
}



/* OT::MathVariants::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::MathVariants::sanitize(MathVariants *this,hb_sanitize_context_t *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  MathVariants *pMVar4;
  ulong uVar5;
  long lVar6;
  MathVariants *pMVar7;
  int iVar8;
  MathVariants *pMVar9;
  
  pMVar9 = this + 10;
  if ((MathVariants *)(ulong)*(uint *)(param_1 + 0x18) < pMVar9 + -*(long *)(param_1 + 8)) {
    return 0;
  }
  if ((MathVariants *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 2);
  if (uVar2 == 0) {
LAB_001034ab:
    lVar6 = *(long *)(param_1 + 8);
    pMVar7 = (MathVariants *)(ulong)*(uint *)(param_1 + 0x18);
  }
  else {
    pMVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
    if ((MathVariants *)(ulong)*(uint *)(param_1 + 0x18) < pMVar4 + (2 - *(long *)(param_1 + 8))) {
LAB_001035be:
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
      if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
        return 0;
      }
      *(undefined2 *)(this + 2) = 0;
      goto LAB_001034ab;
    }
    if (*(short *)pMVar4 != 0x100) {
      if (*(short *)pMVar4 != 0x200) goto LAB_001034ab;
      if (pMVar4 + (4 - *(long *)(param_1 + 8)) <= (MathVariants *)(ulong)*(uint *)(param_1 + 0x18))
      {
        lVar6 = *(long *)(param_1 + 8);
        pMVar7 = (MathVariants *)(ulong)*(uint *)(param_1 + 0x18);
        if (pMVar4 + (4 - lVar6) <= pMVar7) {
          uVar2 = *(ushort *)(pMVar4 + 2) << 8 | *(ushort *)(pMVar4 + 2) >> 8;
          uVar3 = (uint)uVar2 + (uint)uVar2 * 2;
          goto LAB_001036f0;
        }
      }
      goto LAB_001035be;
    }
    if ((MathVariants *)(ulong)*(uint *)(param_1 + 0x18) < pMVar4 + (4 - *(long *)(param_1 + 8)))
    goto LAB_001035be;
    lVar6 = *(long *)(param_1 + 8);
    pMVar7 = (MathVariants *)(ulong)*(uint *)(param_1 + 0x18);
    if (pMVar7 < pMVar4 + (4 - lVar6)) goto LAB_001035be;
    uVar3 = (uint)(ushort)(*(ushort *)(pMVar4 + 2) << 8 | *(ushort *)(pMVar4 + 2) >> 8);
LAB_001036f0:
    if (((uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar4 + 4)) < uVar3 * 2) ||
       (iVar8 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar8, iVar8 < 1))
    goto LAB_001035be;
  }
  if (pMVar7 < this + (6 - lVar6)) {
    return 0;
  }
  uVar2 = *(ushort *)(this + 4);
  if (uVar2 == 0) goto LAB_001034cf;
  pMVar4 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  if (pMVar4 + (2 - *(long *)(param_1 + 8)) <= (MathVariants *)(ulong)*(uint *)(param_1 + 0x18)) {
    if (*(short *)pMVar4 == 0x100) {
      if ((pMVar4 + (4 - *(long *)(param_1 + 8)) <= (MathVariants *)(ulong)*(uint *)(param_1 + 0x18)
          ) && (pMVar4 + (4 - *(long *)(param_1 + 8)) <=
                (MathVariants *)(ulong)*(uint *)(param_1 + 0x18))) {
        uVar3 = (uint)(ushort)(*(ushort *)(pMVar4 + 2) << 8 | *(ushort *)(pMVar4 + 2) >> 8);
LAB_00103653:
        if ((uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - ((int)pMVar4 + 4))) &&
           (iVar8 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar8,
           0 < iVar8)) goto LAB_001034cf;
      }
    }
    else {
      if (*(short *)pMVar4 != 0x200) goto LAB_001034cf;
      if ((pMVar4 + (4 - *(long *)(param_1 + 8)) <= (MathVariants *)(ulong)*(uint *)(param_1 + 0x18)
          ) && (pMVar4 + (4 - *(long *)(param_1 + 8)) <=
                (MathVariants *)(ulong)*(uint *)(param_1 + 0x18))) {
        uVar2 = *(ushort *)(pMVar4 + 2) << 8 | *(ushort *)(pMVar4 + 2) >> 8;
        uVar3 = (uint)uVar2 + (uint)uVar2 * 2;
        goto LAB_00103653;
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
  *(undefined2 *)(this + 4) = 0;
LAB_001034cf:
  lVar6 = *(long *)(param_1 + 8);
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if ((ulong)((long)pMVar9 - lVar6) <= uVar5) {
    uVar3 = (uint)(ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8) +
            (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    if ((uVar3 * 2 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pMVar9)) &&
       (iVar8 = *(int *)(param_1 + 0x1c) + uVar3 * -2, *(int *)(param_1 + 0x1c) = iVar8, 0 < iVar8))
    {
      if (uVar3 == 0) {
        return 1;
      }
      pMVar9 = this + 0xc;
      pMVar4 = pMVar9 + (ulong)uVar3 * 2;
      while ((ulong)((long)pMVar9 - lVar6) <= uVar5) {
        uVar2 = *(ushort *)(pMVar9 + -2);
        if ((uVar2 != 0) &&
           (cVar1 = MathGlyphConstruction::sanitize
                              ((MathGlyphConstruction *)(this + (ushort)(uVar2 << 8 | uVar2 >> 8)),
                               param_1), cVar1 == '\0')) {
          if (0x1f < *(uint *)(param_1 + 0x2c)) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
          if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
            return 0;
          }
          *(undefined2 *)(pMVar9 + -2) = 0;
        }
        pMVar9 = pMVar9 + 2;
        if (pMVar4 == pMVar9) {
          return 1;
        }
        uVar5 = (ulong)*(uint *)(param_1 + 0x18);
        lVar6 = *(long *)(param_1 + 8);
      }
    }
  }
  return 0;
}



/* OT::MATH::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::MATH::sanitize(MATH *this,hb_sanitize_context_t *param_1)

{
  ushort uVar1;
  char cVar2;
  MathValueRecord *this_00;
  MATH *pMVar3;
  
  if ((MATH *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if ((*(short *)this == 0x100) &&
     (this + (6 - *(long *)(param_1 + 8)) <= (MATH *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar1 = *(ushort *)(this + 4);
    if (uVar1 != 0) {
      pMVar3 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
      if ((MATH *)(ulong)*(uint *)(param_1 + 0x18) < pMVar3 + (0xd6 - *(long *)(param_1 + 8))) {
LAB_0010389f:
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined2 *)(this + 4) = 0;
      }
      else {
        this_00 = (MathValueRecord *)(pMVar3 + 8);
        do {
          cVar2 = MathValueRecord::sanitize(this_00,param_1,pMVar3);
          if (cVar2 == '\0') goto LAB_0010389f;
          this_00 = this_00 + 4;
        } while ((MathValueRecord *)(pMVar3 + 0xd4) != this_00);
      }
    }
    if (this + (8 - *(long *)(param_1 + 8)) <= (MATH *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(ushort *)(this + 6);
      if ((uVar1 != 0) &&
         (cVar2 = MathGlyphInfo::sanitize
                            ((MathGlyphInfo *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1),
         cVar2 == '\0')) {
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
          return 0;
        }
        *(undefined2 *)(this + 6) = 0;
      }
      if (this + (10 - *(long *)(param_1 + 8)) <= (MATH *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar1 = *(ushort *)(this + 8);
        if ((uVar1 != 0) &&
           (cVar2 = MathVariants::sanitize
                              ((MathVariants *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1),
           cVar2 == '\0')) {
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
  }
  return 0;
}



/* hb_table_lazy_loader_t<OT::MATH, 40u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::MATH,40u,true>::create(hb_face_t *param_1)

{
  MATH *this;
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
  lVar2 = hb_face_reference_table(param_1,0x4d415448);
  lVar3 = hb_blob_reference(lVar2);
  local_48 = lVar3;
  do {
    local_60 = *(uint *)(lVar3 + 0x18);
    this = *(MATH **)(lVar3 + 0x10);
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
    if (this == (MATH *)0x0) {
      hb_blob_destroy(lVar3);
LAB_00103a83:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar2;
      }
      goto LAB_00103b5e;
    }
    cVar1 = OT::MATH::sanitize(this,(hb_sanitize_context_t *)local_78);
    lVar3 = local_48;
    if (cVar1 != '\0') {
      if (local_4c == 0) {
        hb_blob_destroy(local_48);
      }
      else {
        local_4c = 0;
        cVar1 = OT::MATH::sanitize(this,(hb_sanitize_context_t *)local_78);
        if (local_4c != 0) {
          hb_blob_destroy(local_48);
          goto LAB_00103ab0;
        }
        hb_blob_destroy(local_48);
        local_48 = 0;
        local_60 = 0;
        local_70 = (undefined1  [16])0x0;
        if (cVar1 == '\0') goto LAB_00103ab0;
      }
      hb_blob_make_immutable(lVar2);
      goto LAB_00103a83;
    }
    if ((local_4c == 0) || (local_50 != '\0')) {
LAB_00103aa8:
      hb_blob_destroy(lVar3);
LAB_00103ab0:
      hb_blob_destroy(lVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar3 = hb_blob_get_empty();
        return lVar3;
      }
LAB_00103b5e:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_70._0_8_ = hb_blob_get_data_writable(lVar2,0);
    local_70._8_8_ = (ulong)*(uint *)(lVar2 + 0x18) + local_70._0_8_;
    if (local_70._0_8_ == 0) goto LAB_00103aa8;
    local_50 = '\x01';
  } while( true );
}


