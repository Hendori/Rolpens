
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint hb_ot_meta_get_entry_tags(long param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  long *plVar1;
  DataMap *pDVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 *__ptr;
  undefined *puVar7;
  DataMap *this;
  undefined *puVar8;
  uint uVar9;
  
  plVar1 = (long *)(param_1 + 0xc0);
  do {
    while( true ) {
      __ptr = (undefined8 *)*plVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_00100031;
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) goto LAB_0010018f;
      __ptr = (undefined8 *)
              hb_lazy_loader_t<OT::meta_accelerator_t,hb_face_lazy_loader_t<OT::meta_accelerator_t,10u>,hb_face_t,10u,OT::meta_accelerator_t>
              ::create(*(hb_face_t **)(param_1 + 0x70));
      if (__ptr == (undefined8 *)0x0) break;
      LOCK();
      lVar3 = *plVar1;
      if (lVar3 == 0) {
        *plVar1 = (long)__ptr;
      }
      UNLOCK();
      if (lVar3 == 0) goto LAB_00100031;
      if (__ptr != (undefined8 *)&_hb_NullPool) {
        hb_blob_destroy(*__ptr);
        free(__ptr);
      }
    }
    LOCK();
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      *plVar1 = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (lVar3 != 0);
LAB_0010018f:
  __ptr = (undefined8 *)&_hb_NullPool;
LAB_00100031:
  puVar8 = (undefined *)*__ptr;
  if (param_3 != (uint *)0x0) {
    puVar7 = &_hb_NullPool;
    uVar9 = *param_3;
    puVar6 = &_hb_NullPool;
    if (puVar8 != (undefined *)0x0) {
      puVar6 = puVar8;
    }
    if (0xf < *(uint *)(puVar6 + 0x18)) {
      puVar7 = *(undefined **)(puVar6 + 0x10);
    }
    uVar4 = *(uint *)(puVar7 + 0xc);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (uVar4 < param_2) {
      *param_3 = 0;
    }
    else {
      uVar4 = uVar4 - param_2;
      if (uVar9 < uVar4) {
        uVar4 = uVar9;
      }
      this = (DataMap *)(puVar7 + (ulong)param_2 * 0xc + 0x10);
      *param_3 = uVar4;
      if (uVar4 != 0) {
        pDVar2 = this + (ulong)(uVar4 - 1) * 0xc + 0xc;
        do {
          uVar5 = OT::DataMap::get_tag(this);
          if (uVar9 != 0) {
            *param_4 = uVar5;
            uVar9 = uVar9 - 1;
            param_4 = param_4 + 1;
            uVar5 = __hb_CrapPool;
          }
          __hb_CrapPool = uVar5;
          this = this + 0xc;
        } while (pDVar2 != this);
      }
    }
  }
  puVar7 = &_hb_NullPool;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = &_hb_NullPool;
  }
  if (0xf < *(uint *)(puVar8 + 0x18)) {
    puVar7 = *(undefined **)(puVar8 + 0x10);
  }
  uVar9 = *(uint *)(puVar7 + 0xc);
  return uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
}



void hb_ot_meta_reference_entry(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 *__ptr;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  plVar1 = (long *)(param_1 + 0xc0);
  do {
    while( true ) {
      __ptr = (undefined8 *)*plVar1;
      if (__ptr != (undefined8 *)0x0) goto LAB_001001c7;
      if (*(hb_face_t **)(param_1 + 0x70) == (hb_face_t *)0x0) goto LAB_0010029e;
      __ptr = (undefined8 *)
              hb_lazy_loader_t<OT::meta_accelerator_t,hb_face_lazy_loader_t<OT::meta_accelerator_t,10u>,hb_face_t,10u,OT::meta_accelerator_t>
              ::create(*(hb_face_t **)(param_1 + 0x70));
      if (__ptr == (undefined8 *)0x0) break;
      LOCK();
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        *plVar1 = (long)__ptr;
      }
      UNLOCK();
      if (lVar2 == 0) goto LAB_001001c7;
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
LAB_0010029e:
  __ptr = (undefined8 *)&_hb_NullPool;
LAB_001001c7:
  puVar4 = (undefined *)*__ptr;
  puVar5 = (uint *)&_hb_NullPool;
  puVar7 = &_hb_NullPool;
  if (puVar4 != (undefined *)0x0) {
    puVar7 = puVar4;
  }
  puVar9 = &_hb_NullPool;
  if (0xf < *(uint *)(puVar7 + 0x18)) {
    puVar9 = *(undefined **)(puVar7 + 0x10);
  }
  uVar3 = *(uint *)(puVar9 + 0xc);
  if (uVar3 != 0) {
    uVar8 = 0;
    puVar5 = (uint *)(puVar9 + 0x10);
    do {
      uVar6 = *puVar5;
      if (param_2 ==
          (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18)) {
        puVar5 = (uint *)((long)(puVar9 + 0x10) + uVar8 * 3 * 4);
        goto LAB_0010021a;
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar6;
      puVar5 = puVar5 + 3;
    } while (uVar6 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                     uVar3 << 0x18));
    puVar5 = (uint *)&_hb_NullPool;
  }
LAB_0010021a:
  uVar3 = puVar5[2];
  uVar6 = puVar5[1];
  hb_blob_create_sub_blob
            (puVar4,uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18,
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
  return;
}



/* OT::DataMap::get_tag() const */

uint __thiscall OT::DataMap::get_tag(DataMap *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



/* OT::meta::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::meta::sanitize(meta *this,hb_sanitize_context_t *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  meta *pmVar5;
  uint uVar6;
  uint uVar7;
  meta *pmVar8;
  bool bVar9;
  
  pmVar8 = this + 0x10;
  if ((((ulong)((long)pmVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(int *)this == 0x1000000)) &&
     ((ulong)((long)pmVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar3 = *(uint *)(this + 0xc);
    lVar2 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
            * 0xc;
    bVar9 = (int)((ulong)lVar2 >> 0x20) != 0;
    uVar3 = (uint)lVar2;
    uVar7 = (uint)bVar9;
    if (((!bVar9) &&
        ((ulong)((long)pmVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       ((uVar3 <= (uint)((int)*(undefined8 *)(param_1 + 0x10) - (int)pmVar8) &&
        (iVar4 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar4, 0 < iVar4)))) {
      uVar3 = *(uint *)(this + 0xc);
      if (uVar3 == 0) {
        return 1;
      }
      pmVar8 = this + 0x18;
      if ((this + (0x1c - *(long *)(param_1 + 8)) <= (meta *)(ulong)*(uint *)(param_1 + 0x18)) &&
         ((ulong)((long)pmVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
        while( true ) {
          uVar1 = *(uint *)(pmVar8 + -4);
          uVar6 = *(uint *)pmVar8;
          if (((meta *)(ulong)*(uint *)(param_1 + 0x18) <
               this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18) + -*(long *)(param_1 + 8)) ||
             ((uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                       uVar6 << 0x18,
              (uint)((int)*(undefined8 *)(param_1 + 0x10) -
                    (int)(this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                 uVar1 << 0x18))) < uVar6 ||
              (iVar4 = *(int *)(param_1 + 0x1c) - uVar6, *(int *)(param_1 + 0x1c) = iVar4, iVar4 < 1
              )))) {
            return 0;
          }
          uVar7 = uVar7 + 1;
          pmVar5 = pmVar8 + 0xc;
          if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <=
              uVar7) {
            return 1;
          }
          if ((meta *)(ulong)*(uint *)(param_1 + 0x18) < pmVar8 + (0x10 - *(long *)(param_1 + 8)))
          break;
          pmVar8 = pmVar5;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pmVar5 - *(long *)(param_1 + 8))) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



/* hb_lazy_loader_t<OT::meta_accelerator_t, hb_face_lazy_loader_t<OT::meta_accelerator_t, 10u>,
   hb_face_t, 10u, OT::meta_accelerator_t>::create(hb_face_t*) */

long * hb_lazy_loader_t<OT::meta_accelerator_t,hb_face_lazy_loader_t<OT::meta_accelerator_t,10u>,hb_face_t,10u,OT::meta_accelerator_t>
       ::create(hb_face_t *param_1)

{
  meta *this;
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
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
  plVar2 = (long *)calloc(1,8);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    local_58 = 0;
    local_50 = '\0';
    local_3b = 0;
    local_40 = hb_face_get_glyph_count(param_1);
    local_3c = 1;
    lVar3 = hb_face_reference_table(param_1,0x6d657461);
    lVar4 = hb_blob_reference(lVar3);
    local_48 = lVar4;
    while( true ) {
      local_60 = *(uint *)(lVar4 + 0x18);
      this = *(meta **)(lVar4 + 0x10);
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
      if (this == (meta *)0x0) {
        hb_blob_destroy(lVar4);
        goto LAB_00100563;
      }
      cVar1 = OT::meta::sanitize(this,(hb_sanitize_context_t *)local_78);
      lVar4 = local_48;
      if (cVar1 != '\0') {
        if (local_4c == 0) {
          hb_blob_destroy(local_48);
        }
        else {
          local_4c = 0;
          cVar1 = OT::meta::sanitize(this,(hb_sanitize_context_t *)local_78);
          if (local_4c != 0) {
            hb_blob_destroy(local_48);
            goto LAB_00100598;
          }
          hb_blob_destroy(local_48);
          local_48 = 0;
          local_60 = 0;
          local_70 = (undefined1  [16])0x0;
          if (cVar1 == '\0') goto LAB_00100598;
        }
        hb_blob_make_immutable(lVar3);
        goto LAB_00100563;
      }
      if ((local_4c == 0) || (local_50 != '\0')) break;
      local_70._0_8_ = hb_blob_get_data_writable(lVar3,0);
      local_70._8_8_ = (ulong)*(uint *)(lVar3 + 0x18) + local_70._0_8_;
      if (local_70._0_8_ == 0) break;
      local_50 = '\x01';
    }
    hb_blob_destroy(lVar4);
LAB_00100598:
    hb_blob_destroy(lVar3);
    lVar3 = hb_blob_get_empty();
LAB_00100563:
    *plVar2 = lVar3;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar2;
}


