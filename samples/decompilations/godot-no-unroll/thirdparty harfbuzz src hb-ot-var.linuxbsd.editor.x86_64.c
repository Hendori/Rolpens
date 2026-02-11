
ushort hb_ot_var_get_axis_count(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100018:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x001000b6;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100081;
      }
    }
  }
  puVar2 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar3 + 0x18)) {
    puVar2 = *(undefined **)(lVar3 + 0x10);
  }
  return *(ushort *)(puVar2 + 8) << 8 | *(ushort *)(puVar2 + 8) >> 8;
code_r0x001000b6:
  if (lVar3 != 0) {
LAB_00100081:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_00100018;
}



ushort hb_ot_var_get_named_instance_count(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_001000e8:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x00100186;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100151;
      }
    }
  }
  puVar2 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar3 + 0x18)) {
    puVar2 = *(undefined **)(lVar3 + 0x10);
  }
  return *(ushort *)(puVar2 + 0xc) << 8 | *(ushort *)(puVar2 + 0xc) >> 8;
code_r0x00100186:
  if (lVar3 != 0) {
LAB_00100151:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_001000e8;
}



bool hb_ot_var_has_data(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_001001b8:
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar2 = hb_blob_get_empty();
    }
    else {
      lVar2 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar2 == 0) {
        lVar2 = hb_blob_get_empty();
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto code_r0x00100270;
      }
      else {
        LOCK();
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          *plVar1 = lVar2;
        }
        UNLOCK();
        if (lVar3 != 0) goto LAB_00100231;
      }
    }
  }
  puVar4 = (ushort *)&_hb_NullPool;
  if (0xf < *(uint *)(lVar2 + 0x18)) {
    puVar4 = *(ushort **)(lVar2 + 0x10);
  }
  return (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8) * 0x10000 +
         (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8) != 0;
code_r0x00100270:
  if (lVar2 != 0) {
LAB_00100231:
    lVar3 = hb_blob_get_empty();
    if (lVar2 != lVar3) {
      hb_blob_destroy(lVar2);
    }
  }
  goto LAB_001001b8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort hb_ot_var_named_instance_get_subfamily_name_id(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ushort *puVar6;
  ushort uVar7;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100298:
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar3 = hb_blob_get_empty();
    }
    else {
      lVar3 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar3 == 0) {
        lVar3 = hb_blob_get_empty();
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto code_r0x001003b2;
      }
      else {
        LOCK();
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          *plVar1 = lVar3;
        }
        UNLOCK();
        if (lVar4 != 0) goto LAB_00100364;
      }
    }
  }
  puVar5 = &_hb_NullPool;
  if (*(uint *)(lVar3 + 0x18) < 0x10) {
    uVar2 = _DAT_0010400c << 8 | _DAT_0010400c >> 8;
  }
  else {
    puVar5 = *(undefined **)(lVar3 + 0x10);
    uVar2 = *(ushort *)(puVar5 + 0xc) << 8 | *(ushort *)(puVar5 + 0xc) >> 8;
  }
  if (uVar2 <= param_2) {
    return 0xffff;
  }
  uVar2 = *(ushort *)(puVar5 + 4);
  uVar7 = *(ushort *)(puVar5 + 8) << 8 | *(ushort *)(puVar5 + 8) >> 8;
  lVar3 = (ulong)((ushort)(*(ushort *)(puVar5 + 0xe) << 8 | *(ushort *)(puVar5 + 0xe) >> 8) *
                 param_2) + (ulong)(((uint)uVar7 + (uint)uVar7 * 4) * 4);
  if (uVar2 == 0) {
    puVar6 = (ushort *)(&_hb_NullPool + lVar3);
  }
  else {
    puVar6 = (ushort *)(puVar5 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + lVar3);
  }
  return *puVar6 << 8 | *puVar6 >> 8;
code_r0x001003b2:
  if (lVar3 != 0) {
LAB_00100364:
    lVar4 = hb_blob_get_empty();
    if (lVar3 != lVar4) {
      hb_blob_destroy(lVar3);
    }
  }
  goto LAB_00100298;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort hb_ot_var_named_instance_get_postscript_name_id(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_001003d8:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar5 != 0) goto code_r0x00100512;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar5 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar5 != 0) goto LAB_001004d4;
      }
    }
  }
  puVar8 = &_hb_NullPool;
  if (*(uint *)(lVar7 + 0x18) < 0x10) {
    uVar2 = _DAT_0010400c << 8 | _DAT_0010400c >> 8;
  }
  else {
    puVar8 = *(undefined **)(lVar7 + 0x10);
    uVar2 = *(ushort *)(puVar8 + 0xc) << 8 | *(ushort *)(puVar8 + 0xc) >> 8;
  }
  if (uVar2 <= param_2) {
    return 0xffff;
  }
  uVar2 = *(ushort *)(puVar8 + 4);
  uVar3 = *(ushort *)(puVar8 + 8) << 8 | *(ushort *)(puVar8 + 8) >> 8;
  uVar6 = (uint)(ushort)(*(ushort *)(puVar8 + 0xe) << 8 | *(ushort *)(puVar8 + 0xe) >> 8);
  uVar9 = (uint)uVar3 * 4;
  lVar7 = (ulong)(param_2 * uVar6) + (ulong)((uVar3 + uVar9) * 4);
  puVar4 = &_hb_NullPool + lVar7;
  if (uVar2 != 0) {
    puVar4 = puVar8 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + lVar7;
  }
  uVar2 = 0xffff;
  if (uVar9 + 6 <= uVar6) {
    uVar2 = *(ushort *)(puVar4 + (ulong)uVar9 + 4) << 8 |
            *(ushort *)(puVar4 + (ulong)uVar9 + 4) >> 8;
  }
  return uVar2;
code_r0x00100512:
  if (lVar7 != 0) {
LAB_001004d4:
    lVar5 = hb_blob_get_empty();
    if (lVar7 != lVar5) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_001003d8;
}



undefined8 hb_ot_var_find_axis_info(long param_1,uint param_2,undefined1 (*param_3) [16])

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  undefined *puVar9;
  ushort uVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100541:
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar5 = hb_blob_get_empty();
    }
    else {
      lVar5 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar5 == 0) {
        lVar5 = hb_blob_get_empty();
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto code_r0x00100703;
      }
      else {
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto LAB_001006c5;
      }
    }
  }
  fVar14 = _LC7;
  puVar11 = (uint *)&_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar5 + 0x18)) {
    puVar9 = *(undefined **)(lVar5 + 0x10);
  }
  uVar2 = *(ushort *)(puVar9 + 4);
  uVar10 = *(ushort *)(puVar9 + 8) << 8 | *(ushort *)(puVar9 + 8) >> 8;
  if (uVar2 != 0) {
    puVar11 = (uint *)(puVar9 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  if (uVar10 != 0) {
    uVar8 = 0;
    puVar7 = puVar11;
    do {
      uVar3 = *puVar7;
      if (param_2 ==
          (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) {
        puVar7 = (uint *)&_hb_NullPool;
        if (uVar8 < uVar10) {
          puVar7 = puVar11 + (ulong)uVar8 * 5;
        }
        uVar3 = *puVar7;
        auVar15._4_4_ =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        auVar15._0_4_ = uVar8;
        auVar15._10_2_ = 0;
        auVar15._8_2_ =
             *(ushort *)((long)puVar7 + 0x12) << 8 | *(ushort *)((long)puVar7 + 0x12) >> 8;
        auVar15._12_2_ = (ushort)puVar7[4] << 8 | (ushort)puVar7[4] >> 8;
        auVar15._14_2_ = 0;
        *param_3 = auVar15;
        uVar8 = puVar7[2];
        uVar3 = puVar7[1];
        uVar4 = puVar7[3];
        *(undefined4 *)(param_3[1] + 0xc) = 0;
        fVar12 = ((float)(int)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18) + 0.0) * fVar14;
        fVar13 = ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18) + 0.0) * fVar14;
        *(float *)(param_3[1] + 4) = fVar12;
        uVar8 = -(uint)(fVar13 < fVar12);
        *(uint *)param_3[1] = (uint)fVar13 & uVar8 | ~uVar8 & (uint)fVar12;
        fVar14 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 0.0) * fVar14;
        uVar8 = -(uint)(fVar14 <= fVar12);
        *(uint *)(param_3[1] + 8) = (uint)fVar12 & uVar8 | ~uVar8 & (uint)fVar14;
        return 1;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 5;
    } while (uVar10 != uVar8);
  }
  return 0;
code_r0x00100703:
  if (lVar5 != 0) {
LAB_001006c5:
    lVar6 = hb_blob_get_empty();
    if (lVar5 != lVar6) {
      hb_blob_destroy(lVar5);
    }
  }
  goto LAB_00100541;
}



undefined8 hb_ot_var_find_axis(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  ushort uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_44;
  long local_40;
  
  plVar1 = (long *)(param_1 + 0x100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00100744:
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar6 = hb_blob_get_empty();
    }
    else {
      lVar6 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar6 == 0) {
        lVar6 = hb_blob_get_empty();
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto code_r0x001008fd;
      }
      else {
        LOCK();
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          *plVar1 = lVar6;
        }
        UNLOCK();
        if (lVar7 != 0) goto LAB_001008b8;
      }
    }
  }
  fVar14 = _LC7;
  puVar10 = (uint *)&_hb_NullPool;
  puVar9 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar6 + 0x18)) {
    puVar9 = *(undefined **)(lVar6 + 0x10);
  }
  if (param_3 == (uint *)0x0) {
    param_3 = &local_44;
  }
  uVar11 = *(ushort *)(puVar9 + 8);
  uVar2 = *(ushort *)(puVar9 + 4);
  *param_3 = 0xffffffff;
  uVar11 = uVar11 << 8 | uVar11 >> 8;
  if (uVar2 != 0) {
    puVar10 = (uint *)(puVar9 + (ushort)(uVar2 << 8 | uVar2 >> 8));
  }
  if (uVar11 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *puVar10;
      if (param_2 ==
          (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) {
        *param_3 = uVar8;
        if (uVar11 <= uVar8) {
          puVar10 = (uint *)&_hb_NullPool;
        }
        uVar8 = *puVar10;
        *param_4 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        param_4[1] = (uint)(ushort)(*(ushort *)((long)puVar10 + 0x12) << 8 |
                                   *(ushort *)((long)puVar10 + 0x12) >> 8);
        uVar8 = puVar10[2];
        uVar3 = puVar10[1];
        uVar4 = puVar10[3];
        fVar12 = ((float)(int)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                              uVar8 << 0x18) + 0.0) * fVar14;
        fVar13 = ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18) + 0.0) * fVar14;
        param_4[3] = (uint)fVar12;
        uVar8 = -(uint)(fVar13 < fVar12);
        param_4[2] = (uint)fVar13 & uVar8 | ~uVar8 & (uint)fVar12;
        uVar5 = 1;
        fVar14 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 0.0) * fVar14;
        uVar8 = -(uint)(fVar14 <= fVar12);
        param_4[4] = (uint)fVar12 & uVar8 | ~uVar8 & (uint)fVar14;
        goto LAB_001007b5;
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 5;
    } while (uVar11 != uVar8);
  }
  uVar5 = 0;
LAB_001007b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
code_r0x001008fd:
  if (lVar6 != 0) {
LAB_001008b8:
    lVar7 = hb_blob_get_empty();
    if (lVar6 != lVar7) {
      hb_blob_destroy();
    }
  }
  goto LAB_00100744;
}



ushort hb_ot_var_named_instance_get_design_coords
                 (long param_1,uint param_2,uint *param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100935:
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar5 = hb_blob_get_empty();
    }
    else {
      lVar5 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar5 == 0) {
        lVar5 = hb_blob_get_empty();
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto code_r0x00100ade;
      }
      else {
        LOCK();
        lVar6 = *plVar1;
        if (lVar6 == 0) {
          *plVar1 = lVar5;
        }
        UNLOCK();
        if (lVar6 != 0) goto LAB_00100a5e;
      }
    }
  }
  puVar9 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar5 + 0x18)) {
    puVar9 = *(undefined **)(lVar5 + 0x10);
  }
  if (param_2 < (ushort)(*(ushort *)(puVar9 + 0xc) << 8 | *(ushort *)(puVar9 + 0xc) >> 8)) {
    uVar2 = *(ushort *)(puVar9 + 4);
    uVar7 = *(ushort *)(puVar9 + 8) << 8 | *(ushort *)(puVar9 + 8) >> 8;
    lVar5 = (ulong)((ushort)(*(ushort *)(puVar9 + 0xe) << 8 | *(ushort *)(puVar9 + 0xe) >> 8) *
                   param_2) + (ulong)(((uint)uVar7 + (uint)uVar7 * 4) * 4);
    if (uVar2 == 0) {
      puVar9 = &_hb_NullPool + lVar5;
    }
    else {
      puVar9 = puVar9 + (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) + lVar5;
    }
    if ((param_3 != (uint *)0x0) && (uVar8 = *param_3, uVar8 != 0)) {
      if (uVar7 <= uVar8) {
        *param_3 = (uint)uVar7;
        uVar8 = (uint)uVar7;
        if (uVar8 == 0) {
          return uVar7;
        }
      }
      fVar4 = _LC7;
      lVar5 = 0;
      do {
        uVar3 = *(uint *)(puVar9 + lVar5 + 4);
        *(float *)(param_4 + lVar5) =
             ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18) + 0.0) * fVar4;
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar8 * 4);
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    uVar7 = 0;
  }
  return uVar7;
code_r0x00100ade:
  if (lVar5 != 0) {
LAB_00100a5e:
    lVar6 = hb_blob_get_empty();
    if (lVar5 != lVar6) {
      hb_blob_destroy(lVar5);
    }
  }
  goto LAB_00100935;
}



ushort hb_ot_var_get_axes(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  ushort uVar12;
  undefined *puVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100b14:
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar8 = hb_blob_get_empty();
    }
    else {
      lVar8 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar8 == 0) {
        lVar8 = hb_blob_get_empty();
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto code_r0x00100ceb;
      }
      else {
        LOCK();
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          *plVar1 = lVar8;
        }
        UNLOCK();
        if (lVar9 != 0) goto LAB_00100c7f;
      }
    }
  }
  puVar13 = &_hb_NullPool;
  puVar11 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar8 + 0x18)) {
    puVar11 = *(undefined **)(lVar8 + 0x10);
  }
  uVar12 = *(ushort *)(puVar11 + 8) << 8 | *(ushort *)(puVar11 + 8) >> 8;
  if (param_3 != (uint *)0x0) {
    uVar2 = *(ushort *)(puVar11 + 4);
    if (uVar2 != 0) {
      puVar13 = puVar11 + (ushort)(uVar2 << 8 | uVar2 >> 8);
    }
    if (uVar12 < param_2) {
      *param_3 = 0;
    }
    else {
      uVar10 = uVar12 - param_2;
      if (*param_3 < uVar10) {
        uVar10 = *param_3;
      }
      *param_3 = uVar10;
      fVar5 = _LC7;
      if (uVar10 != 0) {
        puVar6 = (uint *)(puVar13 + (ulong)param_2 * 0x14);
        do {
          uVar14 = *puVar6;
          puVar7 = puVar6 + 5;
          *param_4 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
          param_4[1] = (uint)(ushort)(*(ushort *)((long)puVar6 + 0x12) << 8 |
                                     *(ushort *)((long)puVar6 + 0x12) >> 8);
          uVar14 = puVar6[2];
          uVar3 = puVar6[1];
          uVar4 = puVar6[3];
          fVar15 = ((float)(int)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8
                                | uVar14 << 0x18) + 0.0) * fVar5;
          fVar16 = ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18) + 0.0) * fVar5;
          param_4[3] = (uint)fVar15;
          uVar14 = -(uint)(fVar16 < fVar15);
          param_4[2] = (uint)fVar16 & uVar14 | ~uVar14 & (uint)fVar15;
          fVar16 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                uVar4 << 0x18) + 0.0) * fVar5;
          uVar14 = -(uint)(fVar16 <= fVar15);
          param_4[4] = (uint)fVar15 & uVar14 | ~uVar14 & (uint)fVar16;
          puVar6 = puVar7;
          param_4 = param_4 + 5;
        } while ((uint *)(puVar13 + ((ulong)uVar10 + (ulong)param_2) * 0x14) != puVar7);
      }
    }
  }
  return uVar12;
code_r0x00100ceb:
  if (lVar8 != 0) {
LAB_00100c7f:
    lVar9 = hb_blob_get_empty();
    if (lVar8 != lVar9) {
      hb_blob_destroy(lVar8);
    }
  }
  goto LAB_00100b14;
}



ushort hb_ot_var_get_axis_infos(long param_1,uint param_2,uint *param_3,undefined1 (*param_4) [16])

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  long lVar9;
  long lVar10;
  undefined *puVar11;
  uint *puVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100d24:
  lVar9 = *plVar1;
  if (lVar9 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar9 = hb_blob_get_empty();
    }
    else {
      lVar9 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar9 == 0) {
        lVar9 = hb_blob_get_empty();
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto code_r0x00100f0c;
      }
      else {
        LOCK();
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          *plVar1 = lVar9;
        }
        UNLOCK();
        if (lVar10 != 0) goto LAB_00100eb5;
      }
    }
  }
  puVar11 = &_hb_NullPool;
  puVar6 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar9 + 0x18)) {
    puVar6 = *(undefined **)(lVar9 + 0x10);
  }
  uVar14 = *(ushort *)(puVar6 + 8) << 8 | *(ushort *)(puVar6 + 8) >> 8;
  if (param_3 != (uint *)0x0) {
    uVar2 = *(ushort *)(puVar6 + 4);
    if (uVar2 != 0) {
      puVar11 = puVar6 + (ushort)(uVar2 << 8 | uVar2 >> 8);
    }
    if (uVar14 < param_2) {
      *param_3 = 0;
    }
    else {
      uVar13 = uVar14 - param_2;
      if (*param_3 < uVar13) {
        uVar13 = *param_3;
      }
      *param_3 = uVar13;
      fVar5 = _LC7;
      if (uVar13 != 0) {
        pauVar7 = param_4;
        puVar12 = (uint *)(puVar11 + (ulong)param_2 * 0x14);
        do {
          uVar15 = *puVar12;
          pauVar8 = pauVar7 + 2;
          auVar18._4_4_ =
               uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
          auVar18._0_4_ = param_2;
          auVar18._10_2_ = 0;
          auVar18._8_2_ =
               *(ushort *)((long)puVar12 + 0x12) << 8 | *(ushort *)((long)puVar12 + 0x12) >> 8;
          auVar18._12_2_ = (ushort)puVar12[4] << 8 | (ushort)puVar12[4] >> 8;
          auVar18._14_2_ = 0;
          *pauVar7 = auVar18;
          uVar15 = puVar12[2];
          uVar3 = puVar12[1];
          uVar4 = puVar12[3];
          *(undefined4 *)(pauVar7[1] + 0xc) = 0;
          fVar16 = ((float)(int)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8
                                | uVar15 << 0x18) + 0.0) * fVar5;
          fVar17 = ((float)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18) + 0.0) * fVar5;
          *(float *)(pauVar7[1] + 4) = fVar16;
          uVar15 = -(uint)(fVar17 < fVar16);
          *(uint *)pauVar7[1] = (uint)fVar17 & uVar15 | ~uVar15 & (uint)fVar16;
          fVar17 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                uVar4 << 0x18) + 0.0) * fVar5;
          uVar15 = -(uint)(fVar17 <= fVar16);
          *(uint *)(pauVar7[1] + 8) = (uint)fVar16 & uVar15 | ~uVar15 & (uint)fVar17;
          pauVar7 = pauVar8;
          puVar12 = puVar12 + 5;
          param_2 = param_2 + 1;
        } while (pauVar8 != param_4 + (ulong)uVar13 * 2);
      }
    }
  }
  return uVar14;
code_r0x00100f0c:
  if (lVar9 != 0) {
LAB_00100eb5:
    lVar10 = hb_blob_get_empty();
    if (lVar9 != lVar10) {
      hb_blob_destroy();
    }
  }
  goto LAB_00100d24;
}



void hb_ot_var_normalize_variations
               (long param_1,undefined4 *param_2,uint param_3,int *param_4,uint param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  avar *this;
  undefined *puVar10;
  undefined *puVar11;
  long in_FS_OFFSET;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != 0) {
    memset(param_4,0,(ulong)param_5 << 2);
  }
  plVar1 = (long *)(param_1 + 0x100);
LAB_00100f70:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x001012a9;
      }
      else {
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00101206;
      }
    }
  }
  puVar11 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar7 + 0x18)) {
    puVar11 = *(undefined **)(lVar7 + 0x10);
  }
  if (param_3 != 0) {
    puVar2 = param_2 + (ulong)param_3 * 2;
    do {
      iVar6 = hb_ot_var_find_axis_info(param_1,*param_2,local_68);
      if ((iVar6 != 0) && (local_68[0] < param_5)) {
        puVar10 = &_hb_NullPool;
        uVar3 = *(ushort *)(puVar11 + 4);
        fVar14 = (float)param_2[1];
        if (uVar3 != 0) {
          puVar10 = puVar11 + (ushort)(uVar3 << 8 | uVar3 >> 8);
        }
        puVar9 = &_hb_NullPool;
        if (local_68[0] < (ushort)(*(ushort *)(puVar11 + 8) << 8 | *(ushort *)(puVar11 + 8) >> 8)) {
          puVar9 = puVar10 + (ulong)local_68[0] * 0x14;
        }
        uVar12 = *(uint *)(puVar9 + 8);
        uVar4 = *(uint *)(puVar9 + 4);
        uVar5 = *(uint *)(puVar9 + 0xc);
        fVar15 = ((float)(int)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                              uVar12 << 0x18) + 0.0) * _LC7;
        fVar13 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 0.0) * _LC7;
        uVar12 = -(uint)(fVar13 < fVar15);
        fVar13 = (float)((uint)fVar13 & uVar12 | ~uVar12 & (uint)fVar15);
        fVar16 = ((float)(int)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                              uVar5 << 0x18) + 0.0) * _LC7;
        if (fVar15 < fVar16) {
          fVar14 = (float)((uint)fVar14 & -(uint)(fVar13 <= fVar14) |
                          ~-(uint)(fVar13 <= fVar14) & (uint)fVar13);
          uVar12 = -(uint)(fVar14 <= fVar16);
          fVar14 = (float)((uint)fVar14 & uVar12 | ~uVar12 & (uint)fVar16);
LAB_00101132:
          if (fVar14 == fVar15) goto LAB_001010a9;
          if (fVar15 <= fVar14) {
            fVar13 = fVar16 - fVar15;
          }
          else {
            fVar13 = fVar15 - fVar13;
          }
          fVar14 = ((fVar14 - fVar15) / fVar13) * _LC10 + _LC2;
          if ((float)((uint)fVar14 & _LC6) < _LC3) {
            fVar14 = (float)((uint)((float)(int)fVar14 -
                                   (float)(-(uint)(fVar14 < (float)(int)fVar14) & _LC1)) |
                            ~_LC6 & (uint)fVar14);
          }
          iVar6 = (int)fVar14;
        }
        else {
          if (fVar14 < fVar13) {
            fVar14 = fVar13;
          }
          fVar16 = fVar15;
          if (fVar14 <= fVar15) goto LAB_00101132;
LAB_001010a9:
          iVar6 = 0;
        }
        param_4[local_68[0]] = iVar6;
      }
      param_2 = param_2 + 2;
    } while (puVar2 != param_2);
  }
  plVar1 = (long *)(param_1 + 0x108);
LAB_001010c1:
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar7 = hb_blob_get_empty();
    }
    else {
      lVar7 = hb_table_lazy_loader_t<OT::avar,19u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar7 == 0) {
        lVar7 = hb_blob_get_empty();
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto code_r0x001012d6;
      }
      else {
        LOCK();
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          *plVar1 = lVar7;
        }
        UNLOCK();
        if (lVar8 != 0) goto LAB_00101254;
      }
    }
  }
  this = (avar *)&_hb_NullPool;
  if (7 < *(uint *)(lVar7 + 0x18)) {
    this = *(avar **)(lVar7 + 0x10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    OT::avar::map_coords(this,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001012a9:
  if (lVar7 != 0) {
LAB_00101206:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_00100f70;
code_r0x001012d6:
  if (lVar7 != 0) {
LAB_00101254:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_001010c1;
}



void hb_ot_var_normalize_coords(long param_1,uint param_2,long param_3,int *param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  avar *this;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  plVar1 = (long *)(param_1 + 0x100);
LAB_00101314:
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar13 = hb_blob_get_empty();
    }
    else {
      lVar13 = hb_table_lazy_loader_t<OT::fvar,18u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar13 == 0) {
        lVar13 = hb_blob_get_empty();
        LOCK();
        lVar14 = *plVar1;
        if (lVar14 == 0) {
          *plVar1 = lVar13;
        }
        UNLOCK();
        if (lVar14 != 0) goto code_r0x00101666;
      }
      else {
        LOCK();
        lVar14 = *plVar1;
        if (lVar14 == 0) {
          *plVar1 = lVar13;
        }
        UNLOCK();
        if (lVar14 != 0) goto LAB_001015ac;
      }
    }
  }
  uVar10 = _LC6;
  fVar9 = _LC10;
  fVar8 = _LC7;
  fVar7 = _LC3;
  fVar6 = _LC2;
  puVar11 = &_hb_NullPool;
  if (0xf < *(uint *)(lVar13 + 0x18)) {
    puVar11 = *(undefined **)(lVar13 + 0x10);
  }
  if (param_2 != 0) {
    uVar2 = *(ushort *)(puVar11 + 4);
    uVar3 = *(ushort *)(puVar11 + 8);
    uVar12 = 0;
    do {
      while( true ) {
        fVar18 = *(float *)(param_3 + uVar12 * 4);
        puVar15 = &_hb_NullPool;
        puVar16 = puVar11 + (ushort)(uVar2 << 8 | uVar2 >> 8);
        if (uVar2 == 0) {
          puVar16 = &_hb_NullPool;
        }
        if ((uint)uVar12 < (uint)(ushort)(uVar3 << 8 | uVar3 >> 8)) {
          puVar15 = puVar16 + uVar12 * 0x14;
        }
        uVar17 = *(uint *)(puVar15 + 8);
        uVar4 = *(uint *)(puVar15 + 4);
        uVar5 = *(uint *)(puVar15 + 0xc);
        fVar21 = ((float)(int)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                              uVar17 << 0x18) + 0.0) * fVar8;
        fVar19 = ((float)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18) + 0.0) * fVar8;
        uVar17 = -(uint)(fVar19 < fVar21);
        fVar19 = (float)((uint)fVar19 & uVar17 | ~uVar17 & (uint)fVar21);
        fVar20 = ((float)(int)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                              uVar5 << 0x18) + 0.0) * fVar8;
        if (fVar21 < fVar20) break;
        if (fVar18 < fVar19) {
          fVar18 = fVar19;
        }
        fVar20 = fVar21;
        if (fVar18 <= fVar21) goto LAB_001013c0;
LAB_00101518:
        param_4[uVar12] = 0;
        uVar12 = uVar12 + 1;
        if (uVar12 == param_2) goto LAB_0010152c;
      }
      fVar18 = (float)((uint)fVar18 & -(uint)(fVar19 <= fVar18) |
                      ~-(uint)(fVar19 <= fVar18) & (uint)fVar19);
      uVar17 = -(uint)(fVar18 <= fVar20);
      fVar18 = (float)((uint)fVar18 & uVar17 | ~uVar17 & (uint)fVar20);
LAB_001013c0:
      if (fVar18 == fVar21) goto LAB_00101518;
      if (fVar21 <= fVar18) {
        fVar19 = fVar20 - fVar21;
      }
      else {
        fVar19 = fVar21 - fVar19;
      }
      fVar18 = ((fVar18 - fVar21) / fVar19) * fVar9 + fVar6;
      if ((float)((uint)fVar18 & uVar10) < fVar7) {
        fVar18 = (float)((uint)((float)(int)fVar18 -
                               (float)(-(uint)(fVar18 < (float)(int)fVar18) & _LC1)) |
                        ~uVar10 & (uint)fVar18);
      }
      param_4[uVar12] = (int)fVar18;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_2);
  }
LAB_0010152c:
  plVar1 = (long *)(param_1 + 0x108);
LAB_00101533:
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) {
      lVar13 = hb_blob_get_empty();
    }
    else {
      lVar13 = hb_table_lazy_loader_t<OT::avar,19u,true>::create(*(hb_face_t **)(param_1 + 0x70));
      if (lVar13 == 0) {
        lVar13 = hb_blob_get_empty();
        LOCK();
        lVar14 = *plVar1;
        if (lVar14 == 0) {
          *plVar1 = lVar13;
        }
        UNLOCK();
        if (lVar14 != 0) goto code_r0x0010163f;
      }
      else {
        LOCK();
        lVar14 = *plVar1;
        if (lVar14 == 0) {
          *plVar1 = lVar13;
        }
        UNLOCK();
        if (lVar14 != 0) goto LAB_001015f4;
      }
    }
  }
  this = (avar *)&_hb_NullPool;
  if (7 < *(uint *)(lVar13 + 0x18)) {
    this = *(avar **)(lVar13 + 0x10);
  }
  OT::avar::map_coords(this,param_4,param_2);
  return;
code_r0x00101666:
  if (lVar13 != 0) {
LAB_001015ac:
    lVar14 = hb_blob_get_empty();
    if (lVar13 != lVar14) {
      hb_blob_destroy();
    }
  }
  goto LAB_00101314;
code_r0x0010163f:
  if (lVar13 != 0) {
LAB_001015f4:
    lVar14 = hb_blob_get_empty();
    if (lVar13 != lVar14) {
      hb_blob_destroy(lVar13);
    }
  }
  goto LAB_00101533;
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
      goto LAB_001016ca;
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
LAB_001016ca:
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
                0 < iVar5)))) goto LAB_00101730;
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
LAB_00101730:
      pIVar7 = pIVar7 + 4;
    } while (this + (ulong)(uVar2 - 1) * 4 + 0x10 != pIVar7);
  }
  return 1;
}



/* OT::avarV2Tail::sanitize(hb_sanitize_context_t*, void const*) const */

undefined8 __thiscall
OT::avarV2Tail::sanitize(avarV2Tail *this,hb_sanitize_context_t *param_1,void *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  avarV2Tail *paVar6;
  int iVar7;
  
  if ((avarV2Tail *)(ulong)*(uint *)(param_1 + 0x18) < this + (4 - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    pcVar5 = (char *)((ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18) + (long)param_2);
    if (pcVar5 + (1 - *(long *)(param_1 + 8)) <= (char *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (*pcVar5 == '\0') {
        pcVar1 = pcVar5 + 4;
        if ((ulong)((long)pcVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          lVar4 = *(long *)(param_1 + 8);
          paVar6 = (avarV2Tail *)(ulong)*(uint *)(param_1 + 0x18);
          if (((avarV2Tail *)(pcVar1 + -lVar4) <= paVar6) &&
             (uVar3 = (((byte)pcVar5[1] >> 4 & 3) + 1) *
                      (uint)(ushort)(*(ushort *)(pcVar5 + 2) << 8 | *(ushort *)(pcVar5 + 2) >> 8),
             uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pcVar1))) {
            iVar7 = *(int *)(param_1 + 0x1c) - uVar3;
            *(int *)(param_1 + 0x1c) = iVar7;
joined_r0x001019eb:
            if (0 < iVar7) goto LAB_00101941;
          }
        }
      }
      else {
        if (*pcVar5 != '\x01') goto LAB_0010193a;
        pcVar1 = pcVar5 + 6;
        if ((ulong)((long)pcVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
          uVar3 = *(uint *)(pcVar5 + 2);
          lVar4 = (ulong)(((byte)pcVar5[1] >> 4 & 3) + 1) *
                  (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18);
          uVar3 = (uint)lVar4;
          if ((int)((ulong)lVar4 >> 0x20) == 0) {
            lVar4 = *(long *)(param_1 + 8);
            paVar6 = (avarV2Tail *)(ulong)*(uint *)(param_1 + 0x18);
            if (((avarV2Tail *)(pcVar1 + -lVar4) <= paVar6) &&
               (uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pcVar1))) {
              iVar7 = *(int *)(param_1 + 0x1c) - uVar3;
              *(int *)(param_1 + 0x1c) = iVar7;
              goto joined_r0x001019eb;
            }
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
    *(undefined4 *)this = 0;
  }
LAB_0010193a:
  lVar4 = *(long *)(param_1 + 8);
  paVar6 = (avarV2Tail *)(ulong)*(uint *)(param_1 + 0x18);
LAB_00101941:
  if (paVar6 < this + (8 - lVar4)) {
    return 0;
  }
  uVar3 = *(uint *)(this + 4);
  if ((uVar3 != 0) &&
     (cVar2 = ItemVariationStore::sanitize
                        ((ItemVariationStore *)
                         ((long)param_2 +
                         (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18)),param_1), cVar2 == '\0')) {
    if (0x1f < *(uint *)(param_1 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
    if (param_1[0x28] == (hb_sanitize_context_t)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::avar::map_coords(int*, unsigned int) const */

void __thiscall OT::avar::map_coords(avar *this,int *param_1,uint param_2)

{
  avar aVar1;
  uint uVar2;
  float *__ptr;
  ulong uVar3;
  float *pfVar4;
  sbyte sVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  avar *paVar9;
  avar *paVar10;
  float *pfVar11;
  ushort uVar12;
  int iVar13;
  avar *paVar14;
  uint uVar15;
  avar aVar16;
  int iVar17;
  avar *paVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ushort uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  avar *local_a0;
  uint local_7c;
  ulong local_78;
  avar *local_70;
  uint local_54;
  float *local_50;
  
  uVar19 = _LC6;
  fVar35 = _LC3;
  paVar18 = this + 8;
  uVar7 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
  if (param_2 < uVar7) {
    uVar7 = param_2;
  }
  if (uVar7 != 0) {
    piVar23 = param_1;
    do {
      iVar28 = *piVar23;
      uVar12 = *(ushort *)paVar18 << 8 | *(ushort *)paVar18 >> 8;
      uVar15 = (uint)uVar12;
      if (uVar12 < 2) {
        if (uVar12 != 0) {
          iVar28 = (iVar28 - (short)(*(ushort *)(paVar18 + 2) << 8 | *(ushort *)(paVar18 + 2) >> 8))
                   + (int)(short)(*(ushort *)(paVar18 + 4) << 8 | *(ushort *)(paVar18 + 4) >> 8);
        }
      }
      else {
        iVar13 = (int)(short)(*(ushort *)(paVar18 + 2) << 8 | *(ushort *)(paVar18 + 2) >> 8);
        if (iVar13 < iVar28) {
          lVar30 = 1;
          if (uVar15 == 2) {
            uVar12 = *(ushort *)(paVar18 + 6);
            iVar13 = 1;
            lVar29 = 4;
            iVar25 = (int)(short)(uVar12 << 8 | uVar12 >> 8);
          }
          else {
            do {
              uVar12 = *(ushort *)(paVar18 + lVar30 * 4 + 2);
              iVar13 = (int)lVar30;
              iVar25 = (int)(short)(uVar12 << 8 | uVar12 >> 8);
              if (iVar28 <= iVar25) {
                lVar29 = lVar30 * 4;
                goto LAB_00101c04;
              }
              lVar30 = lVar30 + 1;
            } while ((uint)lVar30 < uVar15 - 1);
            lVar29 = lVar30 * 4;
            iVar13 = iVar13 + 1;
            uVar12 = *(ushort *)(paVar18 + lVar29 + 2);
            iVar25 = (int)(short)(uVar12 << 8 | uVar12 >> 8);
          }
LAB_00101c04:
          if (iVar28 < iVar25) {
            uVar6 = *(ushort *)(paVar18 + (ulong)(iVar13 - 1) * 4 + 2);
            if (uVar6 == uVar12) {
              iVar28 = (int)(short)(*(ushort *)(paVar18 + lVar29) << 8 |
                                   *(ushort *)(paVar18 + lVar29) >> 8);
            }
            else {
              iVar17 = (int)(short)(uVar6 << 8 | uVar6 >> 8);
              iVar13 = (int)(short)(*(ushort *)(paVar18 + lVar29) << 8 |
                                   *(ushort *)(paVar18 + lVar29) >> 8);
              fVar32 = ((float)((short)(*(ushort *)(paVar18 + lVar30 * 4 + 4) << 8 |
                                       *(ushort *)(paVar18 + lVar30 * 4 + 4) >> 8) - iVar13) *
                       (float)(iVar28 - iVar17)) / (float)(iVar25 - iVar17) + (float)iVar13 + _LC2;
              if ((float)((uint)fVar32 & uVar19) < fVar35) {
                fVar32 = (float)((uint)((float)(int)fVar32 -
                                       (float)(-(uint)(fVar32 < (float)(int)fVar32) & (uint)_LC1)) |
                                ~uVar19 & (uint)fVar32);
              }
              iVar28 = (int)fVar32;
            }
          }
          else {
            iVar28 = (iVar28 - iVar25) +
                     (int)(short)(*(ushort *)(paVar18 + lVar30 * 4 + 4) << 8 |
                                 *(ushort *)(paVar18 + lVar30 * 4 + 4) >> 8);
          }
        }
        else {
          iVar28 = (iVar28 - iVar13) +
                   (int)(short)(*(ushort *)(paVar18 + 4) << 8 | *(ushort *)(paVar18 + 4) >> 8);
        }
      }
      *piVar23 = iVar28;
      piVar23 = piVar23 + 1;
      paVar18 = paVar18 + (uVar15 * 4 + 2);
    } while (piVar23 != param_1 + uVar7);
  }
  if ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) < 2) {
    return;
  }
  uVar19 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
  if (uVar7 < uVar19) {
    do {
      uVar7 = uVar7 + 1;
      paVar18 = paVar18 + (ulong)(ushort)(*(ushort *)paVar18 << 8 | *(ushort *)paVar18 >> 8) * 4 + 2
      ;
    } while (uVar7 != uVar19);
  }
  uVar19 = *(uint *)paVar18;
  local_70 = (avar *)&_hb_NullPool;
  if (uVar19 != 0) {
    local_70 = this + (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                      uVar19 << 0x18);
  }
  uVar19 = *(uint *)(paVar18 + 4);
  paVar18 = (avar *)&_hb_NullPool;
  if (uVar19 != 0) {
    paVar18 = this + (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18);
  }
  uVar19 = *(uint *)(paVar18 + 2);
  paVar14 = (avar *)&_hb_NullPool;
  if (uVar19 != 0) {
    paVar14 = paVar18 + (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                        uVar19 << 0x18);
  }
  uVar12 = *(ushort *)(paVar14 + 2) << 8 | *(ushort *)(paVar14 + 2) >> 8;
  __ptr = (float *)malloc((ulong)uVar12 * 4);
  fVar35 = _LC5;
  if ((__ptr != (float *)0x0) && (uVar12 != 0)) {
    pfVar4 = __ptr;
    do {
      *pfVar4 = fVar35;
      pfVar4 = pfVar4 + 1;
    } while (__ptr + (ulong)(uVar12 - 1) + 1 != pfVar4);
  }
  local_50 = __ptr;
  if (param_2 != 0) {
    uVar19 = 0;
    do {
      uVar19 = (uVar19 >> 1) + 8 + uVar19;
    } while (uVar19 < param_2);
    if (uVar19 < 0x40000000) {
      local_50 = (float *)malloc((ulong)uVar19 << 2);
      local_54 = 0xffffffff;
      if (local_50 != (float *)0x0) {
        local_54 = uVar19;
      }
    }
    else {
      local_50 = (float *)0x0;
      local_54 = 0xffffffff;
    }
    local_78 = 0;
    local_7c = 0;
    uVar19 = _LC6;
    fVar35 = _LC2;
    uVar7 = _LC6;
    uVar26 = local_78;
    do {
      local_78 = uVar26;
      uVar26 = local_78 & 0xffffffff;
      iVar28 = param_1[local_78];
      uVar15 = (uint)local_78;
      if (*local_70 == (avar)0x0) {
        uVar12 = *(ushort *)(local_70 + 2) << 8 | *(ushort *)(local_70 + 2) >> 8;
        if (uVar12 != 0) {
          aVar16 = local_70[1];
          if (uVar12 <= uVar15) {
            uVar15 = uVar12 - 1;
          }
          uVar2 = 0;
          uVar8 = ((byte)aVar16 >> 4 & 3) + 1;
          paVar14 = local_70 + (ulong)(uVar15 * uVar8) + 4;
          paVar9 = paVar14 + uVar8;
          do {
            aVar1 = *paVar14;
            paVar14 = paVar14 + 1;
            uVar2 = uVar2 * 0x100 + (uint)(byte)aVar1;
          } while (paVar14 != paVar9);
          goto LAB_00101f0d;
        }
      }
      else if ((*local_70 == (avar)0x1) && (uVar2 = *(uint *)(local_70 + 2), uVar2 != 0)) {
        aVar16 = local_70[1];
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        if (uVar2 <= uVar15) {
          uVar15 = uVar2 - 1;
        }
        uVar2 = 0;
        uVar8 = ((byte)aVar16 >> 4 & 3) + 1;
        paVar14 = local_70 + (ulong)(uVar15 * uVar8) + 6;
        paVar9 = paVar14 + uVar8;
        do {
          aVar1 = *paVar14;
          paVar14 = paVar14 + 1;
          uVar2 = uVar2 * 0x100 + (uint)(byte)aVar1;
        } while (paVar14 != paVar9);
LAB_00101f0d:
        sVar5 = ((byte)aVar16 & 0xf) + 1;
        uVar26 = (ulong)((uVar2 >> sVar5) << 0x10 | (1 << sVar5) - 1U & uVar2);
      }
      uVar15 = (uint)uVar26 & 0xffff;
      if ((uint)(uVar26 >> 0x10) <
          (uint)(ushort)(*(ushort *)(paVar18 + 6) << 8 | *(ushort *)(paVar18 + 6) >> 8)) {
        uVar2 = *(uint *)(paVar18 + (uVar26 >> 0x10) * 4 + 8);
        paVar14 = (avar *)&_hb_NullPool;
        if (uVar2 != 0) {
          paVar14 = paVar18 + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18);
        }
        uVar2 = *(uint *)(paVar18 + 2);
        local_a0 = (avar *)&_hb_NullPool;
        if (uVar2 != 0) {
          local_a0 = paVar18 + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18);
        }
        if ((ushort)(*(ushort *)paVar14 << 8 | *(ushort *)paVar14 >> 8) <= uVar15)
        goto LAB_00102822;
        uVar12 = *(ushort *)(paVar14 + 2) << 8;
        uVar6 = *(ushort *)(paVar14 + 2) >> 8;
        uVar20 = uVar12 | uVar6;
        uVar8 = (uint)(ushort)(*(ushort *)(paVar14 + 4) << 8 | *(ushort *)(paVar14 + 4) >> 8);
        uVar2 = uVar20 & 0x7fff;
        uVar6 = uVar12 & 0x7fff | uVar6;
        uVar26 = (ulong)(uVar8 * 2 + 2);
        uVar15 = (uVar8 + uVar2) * uVar15;
        if ((short)uVar20 < 0) {
          paVar9 = paVar14 + uVar15 * 2 + uVar26 + 4;
          uVar15 = uVar8;
          if (uVar6 == 0) goto LAB_00101fdb;
          fVar32 = 0.0;
          lVar30 = 0;
          uVar12 = *(ushort *)(local_a0 + 2);
          do {
            uVar20 = *(ushort *)(paVar14 + lVar30 * 2 + 6) << 8 |
                     *(ushort *)(paVar14 + lVar30 * 2 + 6) >> 8;
            if ((uint)uVar20 < (uint)(ushort)(uVar12 << 8 | uVar12 >> 8)) {
              if (__ptr == (float *)0x0) {
                pfVar4 = (float *)0x0;
                uVar21 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                uVar24 = (uint)uVar21;
                fVar33 = _LC1;
                if (uVar24 != 0) {
LAB_0010257a:
                  paVar10 = local_a0 + (ulong)(uVar20 * uVar24) * 6 + 4;
                  uVar26 = 0;
                  fVar33 = _LC1;
                  do {
                    uVar20 = *(ushort *)(paVar10 + 2);
                    if ((uint)uVar26 < param_2) {
                      iVar13 = param_1[uVar26];
                      iVar25 = (int)(short)(uVar20 << 8 | uVar20 >> 8);
                      if ((uVar20 != 0) && (iVar13 != iVar25)) {
                        if (iVar13 != 0) {
                          uVar20 = *(ushort *)paVar10 << 8 | *(ushort *)paVar10 >> 8;
                          uVar27 = *(ushort *)(paVar10 + 4) << 8 | *(ushort *)(paVar10 + 4) >> 8;
                          iVar17 = (int)(short)uVar20;
                          iVar22 = (int)(short)uVar27;
                          if (((iVar25 < iVar17) || (iVar22 < iVar25)) ||
                             (((short)uVar20 < 0 && (0 < (short)uVar27)))) goto LAB_0010262c;
                          if ((iVar17 < iVar13) && (iVar13 < iVar22)) {
                            if (iVar13 < iVar25) {
                              fVar34 = (float)(iVar13 - iVar17) / (float)(iVar25 - iVar17);
                            }
                            else {
                              fVar34 = (float)(iVar22 - iVar13) / (float)(iVar22 - iVar25);
                            }
                            if (fVar34 != 0.0) {
                              fVar33 = fVar33 * fVar34;
                              goto LAB_0010262c;
                            }
                          }
                        }
LAB_0010264b:
                        if (__ptr != (float *)0x0) {
                          *pfVar4 = 0.0;
                        }
                        goto LAB_00102666;
                      }
                    }
                    else if (uVar20 != 0) goto LAB_0010264b;
LAB_0010262c:
                    uVar26 = uVar26 + 1;
                    paVar10 = paVar10 + 6;
                  } while (uVar21 != uVar26);
                  if (__ptr != (float *)0x0) goto LAB_001026a8;
                }
              }
              else {
                pfVar4 = __ptr + uVar20;
                fVar33 = *pfVar4;
                if (fVar33 == _LC5) {
                  uVar21 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                  uVar24 = (uint)uVar21;
                  fVar33 = _LC1;
                  if (uVar24 != 0) goto LAB_0010257a;
LAB_001026a8:
                  *pfVar4 = fVar33;
                }
              }
            }
            else {
LAB_00102666:
              fVar33 = 0.0;
            }
            uVar24 = *(uint *)(paVar9 + lVar30 * 4);
            lVar30 = lVar30 + 1;
            fVar32 = fVar32 + fVar33 * (float)(int)(uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                                    (uVar24 & 0xff00) << 8 | uVar24 << 0x18);
          } while ((uint)lVar30 < uVar2);
          paVar9 = paVar9 + (ulong)uVar6 * 4;
          if (uVar2 < uVar8) goto LAB_00101fe8;
        }
        else {
          paVar9 = paVar14 + uVar15 + uVar26 + 4;
          uVar15 = uVar2;
LAB_00101fdb:
          uVar2 = 0;
          fVar32 = 0.0;
          if (uVar15 != 0) {
LAB_00101fe8:
            uVar26 = (ulong)uVar2;
            uVar12 = *(ushort *)(local_a0 + 2);
            lVar30 = uVar26 * -2;
            do {
              uVar6 = *(ushort *)(paVar14 + uVar26 * 2 + 6) << 8 |
                      *(ushort *)(paVar14 + uVar26 * 2 + 6) >> 8;
              if ((uint)uVar6 < (uint)(ushort)(uVar12 << 8 | uVar12 >> 8)) {
                if (__ptr == (float *)0x0) {
                  pfVar4 = (float *)0x0;
                  uVar20 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                  uVar24 = (uint)uVar20;
                  fVar33 = _LC1;
                  if (uVar24 != 0) {
LAB_001020bd:
                    paVar10 = local_a0 + (ulong)(uVar6 * uVar24) * 6 + 4;
                    uVar3 = 0;
                    fVar33 = _LC1;
                    do {
                      uVar6 = *(ushort *)(paVar10 + 2);
                      if ((uint)uVar3 < param_2) {
                        iVar13 = param_1[uVar3];
                        iVar25 = (int)(short)(uVar6 << 8 | uVar6 >> 8);
                        if ((uVar6 != 0) && (iVar13 != iVar25)) {
                          if (iVar13 != 0) {
                            uVar6 = *(ushort *)paVar10 << 8 | *(ushort *)paVar10 >> 8;
                            uVar21 = *(ushort *)(paVar10 + 4) << 8 | *(ushort *)(paVar10 + 4) >> 8;
                            iVar17 = (int)(short)uVar6;
                            iVar22 = (int)(short)uVar21;
                            if (((iVar25 < iVar17) || (iVar22 < iVar25)) ||
                               (((short)uVar6 < 0 && (0 < (short)uVar21)))) goto LAB_00102164;
                            if ((iVar17 < iVar13) && (iVar13 < iVar22)) {
                              if (iVar13 < iVar25) {
                                fVar34 = (float)(iVar13 - iVar17) / (float)(iVar25 - iVar17);
                              }
                              else {
                                fVar34 = (float)(iVar22 - iVar13) / (float)(iVar22 - iVar25);
                              }
                              if (fVar34 != 0.0) {
                                fVar33 = fVar33 * fVar34;
                                goto LAB_00102164;
                              }
                            }
                          }
LAB_00102183:
                          if (__ptr != (float *)0x0) {
                            *pfVar4 = 0.0;
                          }
                          goto LAB_00102195;
                        }
                      }
                      else if (uVar6 != 0) goto LAB_00102183;
LAB_00102164:
                      uVar3 = uVar3 + 1;
                      paVar10 = paVar10 + 6;
                    } while (uVar20 != uVar3);
                    if (__ptr != (float *)0x0) goto LAB_001021ce;
                  }
                }
                else {
                  pfVar4 = __ptr + uVar6;
                  fVar33 = *pfVar4;
                  if (fVar33 == _LC5) {
                    uVar20 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                    uVar24 = (uint)uVar20;
                    fVar33 = _LC1;
                    if (uVar24 != 0) goto LAB_001020bd;
LAB_001021ce:
                    *pfVar4 = fVar33;
                  }
                }
              }
              else {
LAB_00102195:
                fVar33 = 0.0;
              }
              lVar29 = uVar26 * 2;
              uVar26 = uVar26 + 1;
              fVar32 = fVar32 + fVar33 * (float)(int)(short)(*(ushort *)(paVar9 + lVar29 + lVar30)
                                                             << 8 | *(ushort *)
                                                                     (paVar9 + lVar29 + lVar30) >> 8
                                                            );
            } while ((uint)uVar26 < uVar15);
            paVar9 = paVar9 + (ulong)((uVar15 - 1) - uVar2) * 2 + 2;
            uVar2 = uVar15;
          }
        }
        if (uVar2 < uVar8) {
          uVar12 = *(ushort *)(local_a0 + 2);
          uVar26 = 0;
          do {
            uVar6 = *(ushort *)(paVar14 + uVar26 * 2 + (ulong)uVar2 * 2 + 6) << 8 |
                    *(ushort *)(paVar14 + uVar26 * 2 + (ulong)uVar2 * 2 + 6) >> 8;
            if ((uint)uVar6 < (uint)(ushort)(uVar12 << 8 | uVar12 >> 8)) {
              if (__ptr == (float *)0x0) {
                pfVar4 = (float *)0x0;
                uVar20 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                uVar15 = (uint)uVar6 * (uint)uVar20;
                fVar33 = _LC1;
                if (uVar20 != 0) {
LAB_001022d1:
                  paVar10 = local_a0 + (ulong)uVar15 * 6 + 4;
                  uVar3 = 0;
                  fVar33 = _LC1;
                  do {
                    uVar6 = *(ushort *)(paVar10 + 2);
                    if ((uint)uVar3 < param_2) {
                      iVar13 = param_1[uVar3];
                      iVar25 = (int)(short)(uVar6 << 8 | uVar6 >> 8);
                      if ((uVar6 != 0) && (iVar13 != iVar25)) {
                        if (iVar13 != 0) {
                          uVar6 = *(ushort *)paVar10 << 8 | *(ushort *)paVar10 >> 8;
                          uVar21 = *(ushort *)(paVar10 + 4) << 8 | *(ushort *)(paVar10 + 4) >> 8;
                          iVar17 = (int)(short)uVar6;
                          iVar22 = (int)(short)uVar21;
                          if (((iVar25 < iVar17) || (iVar22 < iVar25)) ||
                             (((short)uVar6 < 0 && (0 < (short)uVar21)))) goto LAB_00102374;
                          if ((iVar17 < iVar13) && (iVar13 < iVar22)) {
                            if (iVar13 < iVar25) {
                              fVar34 = (float)(iVar13 - iVar17) / (float)(iVar25 - iVar17);
                            }
                            else {
                              fVar34 = (float)(iVar22 - iVar13) / (float)(iVar22 - iVar25);
                            }
                            if (fVar34 != 0.0) {
                              fVar33 = fVar33 * fVar34;
                              goto LAB_00102374;
                            }
                          }
                        }
LAB_00102393:
                        if (__ptr != (float *)0x0) {
                          *pfVar4 = 0.0;
                        }
                        goto LAB_001023a5;
                      }
                    }
                    else if (uVar6 != 0) goto LAB_00102393;
LAB_00102374:
                    uVar3 = uVar3 + 1;
                    paVar10 = paVar10 + 6;
                  } while (uVar20 != uVar3);
                  if (__ptr != (float *)0x0) goto LAB_001023de;
                }
              }
              else {
                pfVar4 = __ptr + uVar6;
                fVar33 = *pfVar4;
                if (fVar33 == _LC5) {
                  uVar20 = *(ushort *)local_a0 << 8 | *(ushort *)local_a0 >> 8;
                  uVar15 = (uint)uVar6 * (uint)uVar20;
                  fVar33 = _LC1;
                  if (uVar20 != 0) goto LAB_001022d1;
LAB_001023de:
                  *pfVar4 = fVar33;
                }
              }
            }
            else {
LAB_001023a5:
              fVar33 = 0.0;
            }
            fVar32 = fVar32 + fVar33 * (float)(int)(char)paVar9[uVar26];
            bVar31 = (uVar8 - 1) - uVar2 != uVar26;
            uVar26 = uVar26 + 1;
          } while (bVar31);
          fVar32 = fVar32 + fVar35;
          if ((float)((uint)fVar32 & uVar19) < _LC3) {
            fVar32 = (float)((uint)((float)(int)fVar32 -
                                   (float)(-(uint)(fVar32 < (float)(int)fVar32) & (uint)_LC1)) |
                            ~uVar19 & (uint)fVar32);
          }
        }
        else {
          fVar32 = fVar32 + _LC2;
          if ((float)((uint)fVar32 & uVar7) < _LC3) {
            fVar32 = (float)((uint)((float)(int)fVar32 -
                                   (float)(-(uint)(fVar32 < (float)(int)fVar32) & (uint)_LC1)) |
                            ~uVar7 & (uint)fVar32);
          }
        }
      }
      else {
LAB_00102822:
        fVar32 = 0.0;
      }
      fVar33 = (float)(int)(fVar32 + (float)iVar28);
      if (0x4000 < (int)(fVar32 + (float)iVar28)) {
        fVar33 = 2.29589e-41;
      }
      if ((int)fVar33 < -0x4000) {
        fVar33 = -NAN;
      }
      uVar15 = local_7c + 1;
      uVar2 = local_54;
      pfVar4 = local_50;
      if ((int)local_7c < (int)local_54) {
LAB_00102473:
        local_50 = pfVar4;
        local_54 = uVar2;
        local_50[local_7c] = fVar33;
        local_7c = uVar15;
      }
      else {
        if (-1 < (int)local_54) {
          uVar26 = (ulong)local_54;
          if (local_54 < uVar15) {
            do {
              uVar2 = (int)uVar26 + 8 + (int)(uVar26 >> 1);
              uVar26 = (ulong)uVar2;
            } while (uVar2 < uVar15);
            if ((0x3fffffff < uVar2) ||
               (pfVar4 = (float *)realloc(local_50,uVar26 << 2), uVar19 = _LC6, fVar35 = _LC2,
               uVar7 = _LC6, pfVar4 == (float *)0x0)) {
              local_54 = ~local_54;
              goto LAB_00102919;
            }
          }
          goto LAB_00102473;
        }
LAB_00102919:
        __hb_CrapPool = __hb_NullPool;
      }
      uVar26 = local_78 + 1;
    } while ((ulong)param_2 != local_78 + 1);
    uVar26 = 0;
    pfVar4 = local_50;
    do {
      pfVar11 = pfVar4;
      if (local_7c <= (uint)uVar26) {
        __hb_CrapPool = __hb_NullPool;
        pfVar11 = (float *)&_hb_CrapPool;
      }
      pfVar4 = pfVar4 + 1;
      param_1[uVar26] = (int)*pfVar11;
      bVar31 = local_78 != uVar26;
      uVar26 = uVar26 + 1;
    } while (bVar31);
    free(__ptr);
    if (local_54 == 0) {
      return;
    }
  }
  free(local_50);
  return;
}



/* hb_table_lazy_loader_t<OT::fvar, 18u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::fvar,18u,true>::create(hb_face_t *param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined *puVar12;
  
  uVar5 = hb_face_reference_table(param_1,0x66766172);
  lVar6 = hb_blob_reference(uVar5);
  psVar2 = *(short **)(lVar6 + 0x10);
  uVar9 = *(uint *)(lVar6 + 0x18);
  uVar10 = (ulong)uVar9;
  if (uVar9 >> 0x1a == 0) {
    uVar11 = uVar9 << 6;
    if (0x3fffffff < uVar9 << 6) {
      uVar11 = 0x3fffffff;
    }
    if (uVar11 < 0x4000) {
      uVar11 = 0x4000;
    }
  }
  else {
    uVar11 = 0x3fffffff;
  }
  if (psVar2 == (short *)0x0) {
    hb_blob_destroy();
    return uVar5;
  }
  if ((((3 < uVar10) && (*psVar2 == 0x100)) && (0xf < uVar10)) && (psVar2[5] == 0x1400)) {
    uVar7 = psVar2[4] << 8 | (ushort)psVar2[4] >> 8;
    uVar4 = (uint)(ushort)(psVar2[7] << 8 | (ushort)psVar2[7] >> 8);
    if ((uint)uVar7 * 4 + 4 <= uVar4) {
      uVar1 = psVar2[2];
      puVar12 = &_hb_NullPool;
      if (uVar1 != 0) {
        puVar12 = (undefined *)((long)psVar2 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
      }
      if ((ulong)((long)puVar12 - (long)psVar2) <= uVar10) {
        iVar3 = (int)psVar2 + uVar9;
        iVar8 = (uint)uVar7 + (uint)uVar7 * 4;
        uVar9 = iVar8 * 4;
        if ((uVar9 <= (uint)(iVar3 - (int)puVar12)) && (iVar8 = uVar11 + iVar8 * -4, 0 < iVar8)) {
          if (((ulong)((long)(puVar12 + uVar9) - (long)psVar2) <= uVar10) &&
             ((uVar4 = (ushort)(psVar2[6] << 8 | (ushort)psVar2[6] >> 8) * uVar4,
              uVar4 <= (uint)(iVar3 - (int)(puVar12 + uVar9)) && (0 < (int)(iVar8 - uVar4))))) {
            hb_blob_destroy();
            hb_blob_make_immutable(uVar5);
            return uVar5;
          }
        }
      }
    }
  }
  hb_blob_destroy();
  hb_blob_destroy(uVar5);
  uVar5 = hb_blob_get_empty();
  return uVar5;
}



/* hb_table_lazy_loader_t<OT::avar, 19u, true>::create(hb_face_t*) */

long hb_table_lazy_loader_t<OT::avar,19u,true>::create(hb_face_t *param_1)

{
  avarV2Tail *paVar1;
  ushort *puVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  avarV2Tail *this;
  avarV2Tail *paVar9;
  uint uVar10;
  ushort uVar11;
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  undefined1 local_60 [16];
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  int local_3c;
  long local_38;
  undefined4 local_30;
  undefined2 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 1;
  local_48 = 0;
  local_40 = '\0';
  local_30 = 0;
  lVar7 = hb_face_reference_table(param_1,0x61766172);
  lVar8 = hb_blob_reference(lVar7);
  local_38 = lVar8;
  while( true ) {
    local_50 = *(uint *)(lVar8 + 0x18);
    puVar2 = *(ushort **)(lVar8 + 0x10);
    local_4c = local_50 * 0x40;
    local_60._8_8_ = (long)puVar2 + (ulong)local_50;
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
    local_60._0_8_ = puVar2;
    local_3c = 0;
    local_68[0] = 0;
    local_44 = 0;
    if (puVar2 == (ushort *)0x0) {
      hb_blob_destroy(lVar8);
      goto LAB_00102cb1;
    }
    if ((ulong)local_50 < 4) goto LAB_00102dd3;
    uVar5 = *puVar2 << 8 | *puVar2 >> 8;
    if ((uVar5 - 1 < 2) &&
       (this = (avarV2Tail *)(puVar2 + 4), (ulong)((long)this - (long)puVar2) <= (ulong)local_50))
    break;
LAB_00102c3a:
    lVar8 = local_38;
    if ((local_3c == 0) || (local_40 != '\0')) goto LAB_00102dd3;
    local_60._0_8_ = hb_blob_get_data_writable(lVar7,0);
    local_60._8_8_ = (ulong)*(uint *)(lVar7 + 0x18) + local_60._0_8_;
    if (local_60._0_8_ == 0) goto LAB_00102dd3;
    local_40 = '\x01';
  }
  uVar11 = puVar2[3] << 8 | puVar2[3] >> 8;
  paVar9 = this;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      paVar1 = paVar9 + 2;
      if (((ulong)local_50 < (ulong)((long)paVar1 - (long)puVar2)) ||
         ((ulong)local_50 < (ulong)((long)paVar1 - (long)puVar2))) goto LAB_00102c3a;
      uVar3 = (uint)(ushort)(*(ushort *)paVar9 << 8 | *(ushort *)paVar9 >> 8);
      uVar6 = uVar3 * 4;
      if (((uint)((int)local_60._8_8_ - (int)paVar1) < uVar6) ||
         (local_4c = local_4c + uVar3 * -4, (int)local_4c < 1)) goto LAB_00102c3a;
      uVar10 = uVar10 + 1;
      paVar9 = paVar9 + (uVar6 + 2);
    } while (uVar11 != uVar10);
    uVar5 = *puVar2 << 8 | *puVar2 >> 8;
  }
  if (uVar5 < 2) {
LAB_00102c9f:
    hb_blob_destroy(local_38);
    goto LAB_00102ca9;
  }
  cVar4 = OT::avarV2Tail::sanitize(paVar9,(hb_sanitize_context_t *)local_68,puVar2);
  if (cVar4 == '\0') goto LAB_00102c3a;
  if (local_3c == 0) goto LAB_00102c9f;
  local_3c = 0;
  if ((ulong)local_50 < (ulong)((long)puVar2 + (4 - local_60._0_8_))) {
    hb_blob_destroy(local_38);
    goto LAB_00102dd8;
  }
  uVar5 = *puVar2;
  lVar8 = local_38;
  if (((ushort)(uVar5 << 8 | uVar5 >> 8) - 1 < 2) &&
     ((ulong)((long)this - local_60._0_8_) <= (ulong)local_50)) {
    uVar11 = puVar2[3] << 8 | puVar2[3] >> 8;
    if (uVar11 == 0) goto LAB_00102e06;
    uVar10 = 0;
    goto LAB_00102d9f;
  }
LAB_00102dd3:
  hb_blob_destroy(lVar8);
  goto LAB_00102dd8;
  while( true ) {
    uVar3 = (uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8);
    uVar6 = uVar3 * 4;
    if (((uint)(local_60._8_4_ - (int)paVar9) < uVar6) ||
       (local_4c = local_4c + uVar3 * -4, (int)local_4c < 1)) goto LAB_00102dd3;
    uVar10 = uVar10 + 1;
    this = this + (uVar6 + 2);
    if (uVar11 == uVar10) break;
LAB_00102d9f:
    paVar9 = this + 2;
    if (((ulong)local_50 < (ulong)((long)paVar9 - local_60._0_8_)) ||
       ((ulong)local_50 < (ulong)((long)paVar9 - local_60._0_8_))) goto LAB_00102dd3;
  }
  uVar5 = *puVar2;
LAB_00102e06:
  if ((ushort)(uVar5 << 8 | uVar5 >> 8) < 2) {
    hb_blob_destroy(local_38);
LAB_00102ca9:
    hb_blob_make_immutable(lVar7);
LAB_00102cb1:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar7;
    }
    goto LAB_00102e8b;
  }
  cVar4 = OT::avarV2Tail::sanitize(this,(hb_sanitize_context_t *)local_68,puVar2);
  lVar8 = local_38;
  if (local_3c != 0) goto LAB_00102dd3;
  hb_blob_destroy(local_38);
  local_38 = 0;
  local_50 = 0;
  local_60 = (undefined1  [16])0x0;
  if (cVar4 != '\0') goto LAB_00102ca9;
LAB_00102dd8:
  hb_blob_destroy(lVar7);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    lVar8 = hb_blob_get_empty();
    return lVar8;
  }
LAB_00102e8b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


