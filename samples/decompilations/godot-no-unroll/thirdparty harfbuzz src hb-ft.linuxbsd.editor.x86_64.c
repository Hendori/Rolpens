
/* hb_ft_face_finalize(void*) */

void hb_ft_face_finalize(void *param_1)

{
  hb_face_destroy(*(undefined8 *)((long)param_1 + 0x58));
  return;
}



/* finalize_ft_library(void*) */

void finalize_ft_library(void *param_1)

{
  FT_Done_Library(*(undefined8 *)((long)param_1 + 0x58));
  return;
}



/* destroy_ft_library(void*) */

void destroy_ft_library(void *param_1)

{
  FT_Done_Library();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* reference_ft_library() */

long reference_ft_library(void)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
LAB_001001e6:
  do {
    lVar2 = static_ft_library;
    if (static_ft_library != 0) goto LAB_001001f5;
    iVar1 = FT_New_Library(m,&local_28);
    if (iVar1 == 0) {
      FT_Add_Default_Modules(local_28);
      FT_Set_Default_Properties(local_28);
      if (local_28 != 0) {
        LOCK();
        bVar3 = static_ft_library == 0;
        if (bVar3) {
          static_ft_library = local_28;
        }
        UNLOCK();
        lVar2 = local_28;
        if (bVar3) goto LAB_001001f5;
        FT_Done_Library(local_28);
        goto LAB_001001e6;
      }
    }
    LOCK();
    bVar3 = static_ft_library == 0;
    if (bVar3) {
      static_ft_library = 0;
    }
    UNLOCK();
    if (bVar3) {
      lVar2 = 0;
LAB_001001f5:
      iVar1 = FT_Reference_Library(lVar2);
      if (iVar1 != 0) {
        lVar2 = 0;
      }
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar2;
    }
  } while( true );
}



void hb_ft_font_changed_part_0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  lVar1 = *(long *)(param_1 + 0x98);
  lVar2 = *(long *)(*(long *)(lVar1 + 0x30) + 0xa0);
  uVar3 = (ulong)*(ushort *)(*(long *)(lVar1 + 0x30) + 0x88);
  hb_font_set_scale(param_1,uVar3 * *(long *)(lVar2 + 0x20) + 0x8000 >> 0x10,
                    *(long *)(lVar2 + 0x28) * uVar3 + 0x8000 >> 0x10);
  puVar4 = (undefined8 *)(lVar1 + 0x44U & 0xfffffffffffffff8);
  *(undefined8 *)(lVar1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x434) = 0xffffffffffffffff;
  uVar3 = (ulong)(((int)lVar1 - (int)puVar4) + 0x43cU >> 3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0xffffffffffffffff;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x10);
  return;
}



void hb_ft_font_set_load_flags(long param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy)) {
    **(undefined4 **)(param_1 + 0x98) = param_2;
  }
  return;
}



undefined4 hb_ft_font_get_load_flags(long param_1)

{
  if (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy) {
    return **(undefined4 **)(param_1 + 0x98);
  }
  return 0;
}



undefined8 hb_ft_font_get_face(long param_1)

{
  if (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy) {
    return *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x30);
  }
  return 0;
}



undefined8 hb_ft_font_lock_face(long param_1)

{
  long lVar1;
  
  if (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy) {
    lVar1 = *(long *)(param_1 + 0x98);
    pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 8));
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



void hb_ft_font_unlock_face(long param_1)

{
  if (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy) {
    pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(param_1 + 0x98) + 8));
    return;
  }
  return;
}



undefined8 hb_ft_face_create(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar1[5] == 0) {
    uVar3 = hb_blob_create(*puVar1,*(undefined4 *)(puVar1 + 1),1,param_1,param_2);
    uVar2 = hb_face_create(uVar3,*(undefined4 *)(param_1 + 8));
    hb_blob_destroy(uVar3);
  }
  else {
    uVar2 = hb_face_create_for_tables(_hb_ft_reference_table,param_1,param_2);
    hb_face_set_get_table_tags_func(uVar2,_hb_ft_get_table_tags,param_1,0);
  }
  hb_face_set_index(uVar2,*(undefined4 *)(param_1 + 8));
  hb_face_set_upem(uVar2,*(undefined2 *)(param_1 + 0x88));
  return uVar2;
}



void hb_ft_face_create_referenced(undefined8 param_1)

{
  FT_Reference_Face();
  hb_ft_face_create(param_1,_hb_ft_face_destroy);
  return;
}



void hb_ft_face_create_cached(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x60);
  if ((*(long *)(param_1 + 0x58) != 0) && (pcVar1 == hb_ft_face_finalize)) {
    hb_face_reference();
    return;
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  uVar2 = hb_ft_face_create(param_1,0);
  *(code **)(param_1 + 0x60) = hb_ft_face_finalize;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  hb_face_reference(uVar2);
  return;
}



hb_font_t * hb_ft_font_create(FT_FaceRec_ *param_1)

{
  undefined8 uVar1;
  hb_font_t *phVar2;
  
  uVar1 = hb_ft_face_create();
  phVar2 = (hb_font_t *)hb_font_create(uVar1);
  hb_face_destroy(uVar1);
  _hb_ft_font_set_funcs(phVar2,param_1,false);
  if (*(code **)(phVar2 + 0xa0) != _hb_ft_font_destroy) {
    return phVar2;
  }
  hb_ft_font_changed_part_0(phVar2);
  return phVar2;
}



void hb_ft_font_changed(long param_1)

{
  if (*(code **)(param_1 + 0xa0) != _hb_ft_font_destroy) {
    return;
  }
  hb_ft_font_changed_part_0();
  return;
}



undefined8 hb_ft_hb_font_changed(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar2 = 0;
  if (*(code **)(param_1 + 0xa0) != _hb_ft_font_destroy) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0x10) != *(int *)(lVar1 + 0x38)) {
    _hb_ft_hb_font_changed
              ((hb_font_t *)(ulong)*(uint *)(param_1 + 0x28),
               (FT_FaceRec_ *)(ulong)*(uint *)(param_1 + 0x2c));
    puVar4 = (undefined8 *)(lVar1 + 0x44U & 0xfffffffffffffff8);
    *(undefined8 *)(lVar1 + 0x3c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x434) = 0xffffffffffffffff;
    uVar3 = (ulong)(((int)lVar1 - (int)puVar4) + 0x43cU >> 3);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0xffffffffffffffff;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x10);
    uVar2 = 1;
  }
  return uVar2;
}



hb_font_t * hb_ft_font_create_referenced(FT_FaceRec_ *param_1)

{
  undefined8 uVar1;
  hb_font_t *phVar2;
  
  FT_Reference_Face();
  uVar1 = hb_ft_face_create(param_1,_hb_ft_face_destroy);
  phVar2 = (hb_font_t *)hb_font_create(uVar1);
  hb_face_destroy(uVar1);
  _hb_ft_font_set_funcs(phVar2,param_1,false);
  if (*(code **)(phVar2 + 0xa0) != _hb_ft_font_destroy) {
    return phVar2;
  }
  hb_ft_font_changed_part_0(phVar2);
  return phVar2;
}



undefined8 hb_ft_face_create_from_file_or_fail(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = reference_ft_library();
  if (lVar3 != 0) {
    iVar2 = FT_New_Face(lVar3,param_1,param_2,&local_28);
    lVar1 = local_28;
    if (iVar2 == 0) {
      FT_Reference_Face(local_28);
      uVar4 = hb_ft_face_create(lVar1,_hb_ft_face_destroy);
      FT_Done_Face(local_28);
      *(long *)(local_28 + 0x58) = lVar3;
      *(code **)(local_28 + 0x60) = finalize_ft_library;
      iVar2 = hb_face_is_immutable(uVar4);
      if (iVar2 == 0) goto LAB_00100a28;
    }
  }
  uVar4 = 0;
LAB_00100a28:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void hb_ft_font_set_funcs(hb_font_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_3c;
  FT_FaceRec_ *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = hb_face_reference_blob(*(undefined8 *)(param_1 + 0x20));
  uVar4 = hb_blob_get_data(uVar3,&local_3c);
  lVar5 = reference_ft_library();
  if (lVar5 != 0) {
    local_38 = (FT_FaceRec_ *)0x0;
    uVar1 = hb_face_get_index(*(undefined8 *)(param_1 + 0x20));
    iVar2 = FT_New_Memory_Face(lVar5,uVar4,local_3c,uVar1,&local_38);
    if (iVar2 == 0) {
      iVar2 = FT_Select_Charmap(local_38,0x73796d62);
      if (iVar2 != 0) {
        FT_Select_Charmap(local_38,0x756e6963);
      }
      *(code **)(local_38 + 0x60) = _release_blob;
      *(undefined8 *)(local_38 + 0x58) = uVar3;
      hb_blob_set_user_data(uVar3,&ft_library_key,lVar5,destroy_ft_library,1);
      _hb_ft_font_set_funcs(param_1,local_38,true);
      if ((*(int *)(param_1 + 4) != 0) && (*(code **)(param_1 + 0xa0) == _hb_ft_font_destroy)) {
        **(undefined4 **)(param_1 + 0x98) = 2;
      }
      _hb_ft_hb_font_changed
                ((hb_font_t *)(ulong)*(uint *)(param_1 + 0x28),
                 (FT_FaceRec_ *)(ulong)*(uint *)(param_1 + 0x2c));
      goto LAB_00100b6e;
    }
  }
  hb_blob_destroy(uVar3);
LAB_00100b6e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_ft_get_glyph_contour_point(hb_font_t*, void*, unsigned int, unsigned int, int*, int*, void*)
    */

undefined8
hb_ft_get_glyph_contour_point
          (hb_font_t *param_1,void *param_2,uint param_3,uint param_4,int *param_5,int *param_6,
          void *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  lVar1 = *(long *)((long)param_2 + 0x30);
                    /* WARNING: Load size is inaccurate */
  iVar2 = FT_Load_Glyph(lVar1,param_3,*param_2);
  if (iVar2 == 0) {
    uVar4 = 0;
    lVar1 = *(long *)(lVar1 + 0x98);
    if ((*(int *)(lVar1 + 0x90) == 0x6f75746c) && (param_4 < (uint)(int)*(short *)(lVar1 + 0xca))) {
      puVar3 = (undefined8 *)((ulong)param_4 * 0x10 + *(long *)(lVar1 + 0xd0));
      uVar4 = 1;
      *param_5 = (int)*puVar3;
      *param_6 = (int)puVar3[1];
    }
  }
  else {
    uVar4 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return uVar4;
}



/* hb_ft_get_glyph_v_origin(hb_font_t*, void*, unsigned int, int*, int*, void*) */

bool hb_ft_get_glyph_v_origin
               (hb_font_t *param_1,void *param_2,uint param_3,int *param_4,int *param_5,
               void *param_6)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  lVar1 = *(long *)((long)param_2 + 0x30);
  fVar4 = _LC1;
  if (*(int *)(param_1 + 0x28) < 0) {
    fVar4 = _LC0;
  }
  fVar3 = _LC1;
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar3 = _LC0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar2 = FT_Load_Glyph(lVar1,param_3,*param_2);
  if (iVar2 == 0) {
    lVar1 = *(long *)(lVar1 + 0x98);
    *param_4 = (int)*(undefined8 *)(lVar1 + 0x40) - *(int *)(lVar1 + 0x58);
    *param_5 = *(int *)(lVar1 + 0x48) + (int)*(undefined8 *)(lVar1 + 0x60);
    *param_4 = (int)((float)*param_4 * fVar4);
    *param_5 = (int)((float)*param_5 * fVar3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return iVar2 == 0;
}



/* hb_ft_get_glyph_name(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */

bool hb_ft_get_glyph_name
               (hb_font_t *param_1,void *param_2,uint param_3,char *param_4,uint param_5,
               void *param_6)

{
  int iVar1;
  bool bVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  iVar1 = FT_Get_Glyph_Name(*(undefined8 *)((long)param_2 + 0x30),param_3,param_4,param_5);
  bVar2 = iVar1 == 0;
  if ((param_5 != 0) && (bVar2)) {
    bVar2 = *param_4 != '\0';
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return bVar2;
}



/* hb_ft_get_glyph_from_name(hb_font_t*, void*, char const*, int, unsigned int*, void*) */

bool hb_ft_get_glyph_from_name
               (hb_font_t *param_1,void *param_2,char *param_3,int param_4,uint *param_5,
               void *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  bool bVar5;
  char acStack_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  uVar1 = *(undefined8 *)((long)param_2 + 0x30);
  if (param_4 < 0) {
    uVar2 = FT_Get_Name_Index(uVar1,param_3);
    *param_5 = uVar2;
  }
  else {
    if (0x7f < param_4) {
      param_4 = 0x7f;
    }
    pcVar4 = strncpy(acStack_c8,param_3,(long)param_4);
    acStack_c8[param_4] = '\0';
    uVar2 = FT_Get_Name_Index(uVar1,pcVar4);
    *param_5 = uVar2;
  }
  if (uVar2 == 0) {
    iVar3 = FT_Get_Glyph_Name(uVar1,0,acStack_c8,0x80);
    if ((iVar3 == 0) && (param_4 < 0)) {
      iVar3 = strcmp(acStack_c8,param_3);
    }
    else {
      iVar3 = strncmp(acStack_c8,param_3,(long)param_4);
    }
    if (iVar3 == 0) {
      bVar5 = true;
      goto LAB_00100e88;
    }
    uVar2 = *param_5;
  }
  bVar5 = uVar2 != 0;
LAB_00100e88:
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* hb_ft_get_glyph_extents(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */

undefined8
hb_ft_get_glyph_extents
          (hb_font_t *param_1,void *param_2,uint param_3,hb_glyph_extents_t *param_4,void *param_5)

{
  hb_font_t hVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  lVar2 = *(long *)((long)param_2 + 0x30);
  fVar13 = *(float *)(param_1 + 0x48);
  fVar9 = _LC1;
  if (*(int *)(param_1 + 0x28) < 0) {
    fVar9 = _LC0;
  }
  fVar11 = _LC1;
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar11 = _LC0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar3 = FT_Load_Glyph(lVar2,param_3,*param_2);
  if (iVar3 == 0) {
    lVar2 = *(long *)(lVar2 + 0x98);
    fVar6 = (float)*(long *)(lVar2 + 0x40) * fVar9;
    fVar12 = (float)*(long *)(lVar2 + 0x48) * fVar11;
    fVar9 = (float)*(long *)(lVar2 + 0x30) * fVar9 + fVar6;
    fVar11 = (float)-*(long *)(lVar2 + 0x38) * fVar11 + fVar12;
    if (fVar13 != 0.0) {
      fVar10 = fVar13 * fVar12;
      fVar13 = fVar13 * fVar11;
      fVar6 = fVar6 + (float)(~-(uint)(fVar10 <= fVar13) & (uint)fVar13 |
                             (uint)fVar10 & -(uint)(fVar10 <= fVar13));
      fVar9 = fVar9 + (float)((uint)fVar10 & -(uint)(fVar13 <= fVar10) |
                             ~-(uint)(fVar13 <= fVar10) & (uint)fVar13);
    }
    if ((float)((uint)fVar6 & _LC5) < _LC3) {
      fVar6 = (float)((uint)((float)(int)fVar6 -
                            (float)(-(uint)(fVar6 < (float)(int)fVar6) & (uint)_LC1)) |
                     ~_LC5 & (uint)fVar6);
    }
    if ((float)((uint)fVar9 & _LC5) < _LC3) {
      fVar9 = (float)((uint)((float)(int)fVar9 +
                            (float)(-(uint)((float)(int)fVar9 < fVar9) & (uint)_LC1)) |
                     ~_LC5 & (uint)fVar9);
    }
    iVar7 = (int)(fVar9 - (float)(int)fVar6);
    iVar8 = (int)(fVar11 - (float)(int)fVar12);
    *(int *)param_4 = (int)fVar6;
    *(int *)(param_4 + 4) = (int)fVar12;
    *(int *)(param_4 + 8) = iVar7;
    *(int *)(param_4 + 0xc) = iVar8;
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar3 != 0 || iVar5 != 0) {
      if (*(int *)(param_1 + 0x2c) < 0) {
        iVar5 = -iVar5;
      }
      *(int *)(param_4 + 0xc) = iVar8 - iVar5;
      iVar8 = *(int *)(param_1 + 0x28);
      *(int *)(param_4 + 4) = (int)fVar12 + iVar5;
      if (iVar8 < 0) {
        iVar3 = -iVar3;
        hVar1 = param_1[0x38];
      }
      else {
        hVar1 = param_1[0x38];
      }
      if (hVar1 != (hb_font_t)0x0) {
        *(int *)param_4 = (int)fVar6 - iVar3 / 2;
      }
      *(int *)(param_4 + 8) = iVar3 + iVar7;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return uVar4;
}



/* hb_ft_get_glyph_h_kerning(hb_font_t*, void*, unsigned int, unsigned int, void*) */

undefined4
hb_ft_get_glyph_h_kerning(hb_font_t *param_1,void *param_2,uint param_3,uint param_4,void *param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  iVar1 = FT_Get_Kerning(*(undefined8 *)((long)param_2 + 0x30),param_3,param_4,
                         *(int *)(param_1 + 0x68) == 0,local_48);
  if (iVar1 != 0) {
    local_48[0] = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_ft_get_glyph_v_advance(hb_font_t*, void*, unsigned int, void*) */

int hb_ft_get_glyph_v_advance(hb_font_t *param_1,void *param_2,uint param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  fVar3 = _LC1;
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar3 = _LC0;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = FT_Get_Advance(*(undefined8 *)((long)param_2 + 0x30),param_3,*param_2 | 0x10,&local_38);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    local_38 = (long)(int)((float)local_38 * fVar3);
    if (*(int *)(param_1 + 0x2c) < 0) {
      iVar2 = -iVar2;
    }
    iVar1 = (int)(0x200 - local_38 >> 10);
    if (param_1[0x38] == (hb_font_t)0x0) {
      iVar1 = iVar2 + iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* hb_ft_get_font_h_extents(hb_font_t*, void*, hb_font_extents_t*, void*) */

undefined8
hb_ft_get_font_h_extents(hb_font_t *param_1,void *param_2,hb_font_extents_t *param_3,void *param_4)

{
  short sVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  lVar2 = *(long *)((long)param_2 + 0x30);
  fVar8 = _LC1;
  if (*(int *)(param_1 + 0x2c) < 0) {
    fVar8 = _LC0;
  }
  lVar3 = *(long *)(lVar2 + 0xa0);
  if (*(short *)(lVar2 + 0x88) == 0) {
    iVar4 = (int)*(undefined8 *)(lVar3 + 0x38);
    iVar7 = (int)*(undefined8 *)(lVar3 + 0x30);
    iVar5 = (iVar4 + *(int *)(lVar3 + 0x40)) - iVar7;
  }
  else {
    uVar6 = FT_MulFix((long)*(short *)(lVar2 + 0x8a),*(undefined8 *)(lVar3 + 0x28));
    sVar1 = *(short *)(lVar2 + 0x8c);
    *(undefined4 *)param_3 = uVar6;
    uVar6 = FT_MulFix((long)sVar1,*(undefined8 *)(*(long *)(lVar2 + 0xa0) + 0x28));
    sVar1 = *(short *)(lVar2 + 0x8e);
    *(undefined4 *)(param_3 + 4) = uVar6;
    iVar5 = FT_MulFix((long)sVar1,*(undefined8 *)(*(long *)(lVar2 + 0xa0) + 0x28));
    iVar7 = *(int *)param_3;
    iVar4 = *(int *)(param_3 + 4);
    iVar5 = iVar5 - (iVar7 - iVar4);
  }
  *(ulong *)param_3 =
       CONCAT44((int)((float)iVar4 * fVar8),(int)((float)(iVar7 + *(int *)(param_1 + 0x40)) * fVar8)
               );
  *(int *)(param_3 + 8) = (int)((float)iVar5 * fVar8);
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return 1;
}



/* hb_ft_get_variation_glyph(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*, void*) */

bool hb_ft_get_variation_glyph
               (hb_font_t *param_1,void *param_2,uint param_3,uint param_4,uint *param_5,
               void *param_6)

{
  uint uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  uVar1 = FT_Face_GetCharVariantIndex(*(undefined8 *)((long)param_2 + 0x30),param_3,param_4);
  if (uVar1 != 0) {
    *param_5 = uVar1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return uVar1 != 0;
}



/* hb_ft_get_nominal_glyphs(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   unsigned int*, unsigned int, void*) */

uint hb_ft_get_nominal_glyphs
               (hb_font_t *param_1,void *param_2,uint param_3,uint *param_4,uint param_5,
               uint *param_6,uint param_7,void *param_8)

{
  uint uVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  uVar2 = param_3;
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      uVar1 = FT_Get_Char_Index(*(undefined8 *)((long)param_2 + 0x30),*param_4);
      *param_6 = uVar1;
      if (uVar1 == 0) break;
      uVar1 = uVar2 + 1;
      param_4 = (uint *)((long)param_4 + (ulong)param_5);
      param_6 = (uint *)((long)param_6 + (ulong)param_7);
      uVar2 = param_3;
    } while (param_3 != uVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_ft_get_glyph_h_advances(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   int*, unsigned int, void*) */

void hb_ft_get_glyph_h_advances
               (hb_font_t *param_1,void *param_2,uint param_3,uint *param_4,uint param_5,
               int *param_6,uint param_7,void *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  float fVar12;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2;
  uVar4 = *(undefined8 *)((long)param_2 + 0x30);
  fVar12 = _LC1;
  if (*(int *)(param_1 + 0x28) < 0) {
    fVar12 = _LC0;
  }
  uVar10 = 0;
  puVar11 = (uint *)param_6;
  if (param_3 != 0) {
    do {
      local_48 = 0;
      uVar2 = *param_4;
      uVar8 = (ulong)uVar2 & 0xff;
      uVar3 = *(uint *)((long)param_2 + uVar8 * 4 + 0x3c);
      if ((uVar3 == 0xffffffff) || (uVar5 = uVar3 & 0xffffff, uVar3 >> 0x18 != uVar2 >> 8)) {
        FT_Get_Advance(uVar4,(ulong)uVar2,uVar1,&local_48);
        lVar7 = -local_48;
        if (0 < local_48) {
          lVar7 = local_48;
        }
        uVar5 = (int)((float)lVar7 * fVar12 + __LC6) >> 10;
        if (uVar2 >> 0x10 == 0 && uVar5 >> 0x18 == 0) {
          *(uint *)((long)param_2 + uVar8 * 4 + 0x3c) = (uVar2 >> 8) << 0x18 | uVar5;
        }
      }
      *puVar11 = uVar5;
      uVar10 = uVar10 + 1;
      param_4 = (uint *)((long)param_4 + (ulong)param_5);
      puVar11 = (uint *)((long)puVar11 + (ulong)param_7);
    } while (param_3 != uVar10);
  }
  iVar9 = *(int *)(param_1 + 0x3c);
  if ((iVar9 != 0) && (param_1[0x38] == (hb_font_t)0x0)) {
    if (*(int *)(param_1 + 0x28) < 0) {
      iVar9 = -iVar9;
    }
    if (param_3 != 0) {
      uVar10 = 0;
      do {
        iVar6 = *param_6;
        if (iVar6 != 0) {
          iVar6 = iVar6 + iVar9;
        }
        uVar10 = uVar10 + 1;
        *param_6 = iVar6;
        param_6 = (int *)((long)param_6 + (ulong)param_7);
      } while (uVar10 != param_3);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return;
}



/* hb_ft_draw_glyph(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */

void hb_ft_draw_glyph(hb_font_t *param_1,void *param_2,uint param_3,hb_draw_funcs_t *param_4,
                     void *param_5,void *param_6)

{
  pthread_mutex_t *__mutex;
  short sVar1;
  long *plVar2;
  hb_draw_funcs_t *phVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long in_FS_OFFSET;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  undefined1 local_84;
  hb_draw_funcs_t *local_80;
  void *local_78;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  __mutex = (pthread_mutex_t *)((long)param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock(__mutex);
  lVar9 = *(long *)((long)param_2 + 0x30);
                    /* WARNING: Load size is inaccurate */
  iVar5 = FT_Load_Glyph(lVar9,param_3,*param_2 | 8);
  if ((iVar5 != 0) || (lVar12 = *(long *)(lVar9 + 0x98), *(int *)(lVar12 + 0x90) != 0x6f75746c)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(__mutex);
      return;
    }
    goto LAB_00101d13;
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = _hb_ft_move_to;
  pcStack_b0 = _hb_ft_line_to;
  local_a8 = _hb_ft_conic_to;
  pcStack_a0 = _hb_ft_cubic_to;
  local_88 = *(float *)(param_1 + 0x48);
  local_84 = local_88 == 0.0;
  _local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_80 = param_4;
  local_78 = param_5;
  if (*(int *)(param_1 + 0x3c) != 0 || *(int *)(param_1 + 0x40) != 0) {
    FT_Outline_EmboldenXY(lVar12 + 200);
    uVar11 = 0;
    if (param_1[0x38] == (hb_font_t)0x0) {
      if (*(int *)(param_1 + 0x28) < 0) {
        uVar6 = -*(int *)(param_1 + 0x3c);
        uVar8 = uVar6;
        if (-1 < *(int *)(param_1 + 0x2c)) goto LAB_00101b8e;
      }
      else {
        uVar8 = 0;
        if (-1 < *(int *)(param_1 + 0x2c)) {
          lVar12 = *(long *)(lVar9 + 0x98);
          goto LAB_00101c09;
        }
      }
      uVar11 = -*(int *)(param_1 + 0x40);
      uVar6 = uVar11 | uVar8;
    }
    else {
      uVar8 = -(*(int *)(param_1 + 0x3c) / 2);
      uVar6 = uVar8;
      if (*(int *)(param_1 + 0x2c) < 0) {
        uVar11 = -*(int *)(param_1 + 0x40);
        uVar6 = uVar8 | uVar11;
      }
    }
LAB_00101b8e:
    lVar12 = *(long *)(lVar9 + 0x98);
    if (uVar6 != 0) {
      plVar2 = *(long **)(lVar12 + 0xd0);
      sVar1 = *(short *)(*(long *)(lVar12 + 0xe0) + -2 + (long)*(short *)(lVar12 + 200) * 2);
      if (plVar2 != plVar2 + (ulong)((int)sVar1 + 1) * 2) {
        uVar10 = 0;
        plVar7 = plVar2;
        do {
          uVar10 = uVar10 + 1;
          *plVar7 = *plVar7 + (long)(int)uVar8;
          plVar7[1] = plVar7[1] + (long)(int)uVar11;
          plVar7 = plVar7 + 2;
        } while (uVar10 < ((ulong)((long)(plVar2 + (ulong)((int)sVar1 + 1) * 2) +
                                  (-0x10 - (long)plVar2)) >> 4) + 1);
      }
    }
  }
LAB_00101c09:
  FT_Outline_Decompose(lVar12 + 200,&local_b8,&local_88);
  pvVar4 = local_78;
  phVar3 = local_80;
  if (local_70._0_4_ != 0) {
    if (((float)local_70._4_4_ != fStack_64) || (fStack_68 != (float)local_60._0_4_)) {
      lVar9 = *(long *)(local_80 + 0x38);
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 8);
      }
      (**(code **)(local_80 + 0x18))(local_80,local_78,local_70,lVar9);
    }
    lVar9 = *(long *)(phVar3 + 0x38);
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    (**(code **)(phVar3 + 0x30))(phVar3,pvVar4,local_70,lVar9);
  }
  pthread_mutex_unlock(__mutex);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_context_t::hb_paint_extents_context_t() */

void __thiscall
hb_paint_extents_context_t::hb_paint_extents_context_t(hb_paint_extents_context_t *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  puVar3 = (undefined8 *)malloc(0xc0);
  uVar6 = _UNK_001062e8;
  uVar5 = __LC1;
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = __hb_NullPool;
    uVar6 = __hb_CrapPool;
    _hb_font_funcs_set_nominal_glyph_func = _hb_font_funcs_create;
    *(undefined4 *)this = 0xffffffff;
    __hb_CrapPool = uVar5;
    _hb_font_funcs_create = uVar6;
  }
  else {
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 *)this = 0x100000008;
    puVar3[2] = 0;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
  }
  puVar4 = (undefined4 *)malloc(0xa0);
  uVar6 = __LC0;
  uVar5 = __LC13;
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = __hb_NullPool;
    uVar6 = __hb_CrapPool;
    *(undefined4 *)(this + 0x10) = 0xffffffff;
    _hb_font_funcs_set_nominal_glyph_func =
         CONCAT44(hb_font_funcs_set_nominal_glyph_func_4,_hb_font_funcs_create);
    __hb_CrapPool = uVar5;
    _hb_font_funcs_create = uVar6;
  }
  else {
    *(undefined4 **)(this + 0x18) = puVar4;
    *(undefined8 *)(this + 0x10) = 0x100000008;
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 1) = uVar5;
    *(undefined8 *)(puVar4 + 3) = uVar6;
  }
  puVar4 = (undefined4 *)malloc(0xa0);
  uVar2 = __hb_CrapPool;
  uVar1 = __hb_NullPool;
  uVar6 = __LC0;
  uVar5 = __LC13;
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 **)(this + 0x28) = puVar4;
    *(undefined8 *)(this + 0x20) = 0x100000008;
    *puVar4 = 2;
    *(undefined8 *)(puVar4 + 1) = uVar5;
    *(undefined8 *)(puVar4 + 3) = uVar6;
    return;
  }
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  _hb_font_funcs_set_nominal_glyph_func =
       CONCAT44(hb_font_funcs_set_nominal_glyph_func_4,_hb_font_funcs_create);
  __hb_CrapPool = uVar1;
  _hb_font_funcs_create = uVar2;
  return;
}



/* hb_ft_font_funcs_lazy_loader_t::create() */

undefined8 hb_ft_font_funcs_lazy_loader_t::create(void)

{
  undefined8 uVar1;
  
  uVar1 = hb_font_funcs_create();
  hb_font_funcs_set_nominal_glyph_func(uVar1,hb_ft_get_nominal_glyph,0,0);
  hb_font_funcs_set_nominal_glyphs_func(uVar1,hb_ft_get_nominal_glyphs,0,0);
  hb_font_funcs_set_variation_glyph_func(uVar1,hb_ft_get_variation_glyph,0,0);
  hb_font_funcs_set_font_h_extents_func(uVar1,hb_ft_get_font_h_extents,0,0);
  hb_font_funcs_set_glyph_h_advances_func(uVar1,hb_ft_get_glyph_h_advances,0,0);
  hb_font_funcs_set_glyph_v_advance_func(uVar1,hb_ft_get_glyph_v_advance,0,0);
  hb_font_funcs_set_glyph_v_origin_func(uVar1,hb_ft_get_glyph_v_origin,0,0);
  hb_font_funcs_set_glyph_h_kerning_func(uVar1,hb_ft_get_glyph_h_kerning,0,0);
  hb_font_funcs_set_glyph_extents_func(uVar1,hb_ft_get_glyph_extents,0,0);
  hb_font_funcs_set_glyph_contour_point_func(uVar1,hb_ft_get_glyph_contour_point,0,0);
  hb_font_funcs_set_glyph_name_func(uVar1,hb_ft_get_glyph_name,0,0);
  hb_font_funcs_set_glyph_from_name_func(uVar1,hb_ft_get_glyph_from_name,0,0);
  hb_font_funcs_set_draw_glyph_func(uVar1,hb_ft_draw_glyph,0,0);
  hb_font_funcs_set_paint_glyph_func(uVar1,hb_ft_paint_glyph,0,0);
  hb_font_funcs_make_immutable(uVar1);
  return uVar1;
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
LAB_00102ab3:
    hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_00102a1d;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar14 = param_1 * 2 + 8;
    uVar9 = (ulong)uVar14;
    if (uVar14 == 0) {
      pvVar4 = malloc(0xc);
      if (pvVar4 == (void *)0x0) goto LAB_00102aaf;
      iVar17 = 0;
      sVar18 = 0;
      iVar7 = 0xc;
      __size = 0xc;
LAB_001027f9:
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
LAB_00102aaf:
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
        goto LAB_00102ab3;
      }
      sVar18 = (short)uVar14 * 2;
      iVar17 = uVar16 - 1;
      iVar7 = 0xc << ((byte)uVar14 & 0x1f);
      if (iVar7 != 0) goto LAB_001027f9;
    }
    uStack_c0 = _UNK_00106308;
    uStack_c8 = __LC14;
    iVar7 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar17;
    __ptr = *(int **)(this + 0x28);
    uVar14 = (iVar7 + 1) - (uint)(iVar7 == 0);
    uStack_b8 = __LC15;
    uStack_b0 = _UNK_00106318;
    uStack_a8 = __LC16;
    uStack_a0 = _UNK_00106328;
    uStack_98 = __LC17;
    uStack_90 = _UNK_00106338;
    uStack_88 = __LC18;
    uStack_80 = _UNK_00106348;
    uStack_78 = __LC19;
    uStack_70 = _UNK_00106358;
    uStack_68 = __LC20;
    uStack_60 = _UNK_00106368;
    uStack_58 = __LC21;
    uStack_50 = _UNK_00106378;
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
            if (cVar3 == '\0') goto LAB_001028c0;
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
                if (uVar12 == 0xffffffff) goto LAB_0010297f;
                goto LAB_00102974;
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
LAB_00102a5a:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00102974:
              lVar5 = (ulong)uVar12 * 0xc;
LAB_0010297f:
              piVar6 = (int *)(lVar2 + lVar5);
              if ((*(byte *)(piVar6 + 1) & 2) == 0) goto LAB_00102a5a;
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
LAB_001028c0:
        piVar15 = piVar15 + 3;
      } while (__ptr + (ulong)uVar14 * 3 != piVar15);
    }
    free(__ptr);
  }
LAB_00102a1d:
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
            goto LAB_00104908;
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
LAB_00104908:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_ft_paint_glyph_colr(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned int,
   unsigned int, void*) [clone .isra.0] */

bool hb_ft_paint_glyph_colr
               (hb_font_t *param_1,void *param_2,uint param_3,hb_paint_funcs_t *param_4,
               void *param_5,uint param_6,uint param_7,void *param_8)

{
  byte bVar1;
  undefined8 uVar2;
  hb_paint_funcs_t *phVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 uVar6;
  hb_paint_extents_context_t *phVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  long local_200;
  undefined1 local_1f8 [16];
  int local_1e8 [2];
  void *local_1e0;
  int local_1d8;
  void *local_1d0;
  int local_1c8;
  int local_1c4;
  void *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  long local_1b0;
  long local_1a0;
  long local_198;
  long local_190;
  long local_180;
  void *local_178;
  hb_font_t *local_170;
  hb_paint_funcs_t *local_168;
  void *local_160;
  long local_158;
  uint local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined1 local_138;
  ushort local_136;
  undefined1 local_134 [8];
  undefined8 uStack_12c;
  long local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined2 local_106;
  undefined1 local_104 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  void *local_d8;
  hb_font_t *local_d0;
  long local_c8;
  hb_paint_extents_context_t *local_c0;
  long local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  ushort local_96;
  undefined1 local_94 [8];
  undefined8 uStack_8c;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  undefined1 local_64 [16];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)((long)param_2 + 0x30);
  iVar10 = FT_Palette_Select(uVar2,param_6 & 0xffff,&local_200);
  if (iVar10 != 0) {
    local_200 = 0;
  }
  local_1f8 = (undefined1  [16])0x0;
  cVar8 = FT_Get_Color_Glyph_Paint(uVar2,param_3,1,local_1f8);
  if (cVar8 == '\0') {
    local_d0 = (hb_font_t *)0x0;
    cVar8 = FT_Get_Color_Glyph_Layer(uVar2,param_3,&local_1b8);
    bVar9 = local_200 != 0 && cVar8 != '\0';
    if (local_200 == 0 || cVar8 == '\0') goto LAB_00104a4e;
    do {
      bVar9 = (int)local_178 != 0xffff;
      uVar18 = param_7;
      if (bVar9) {
        uVar18 = *(uint *)(local_200 + ((ulong)local_178 & 0xffffffff) * 4);
        uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18
        ;
      }
      pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
      lVar11 = *(long *)(param_4 + 0x80);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x18);
      }
      (**(code **)(param_4 + 0x28))(param_4,param_5,local_1b8,param_1,lVar11);
      pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
      lVar11 = *(long *)(param_4 + 0x80);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x30);
      }
      (**(code **)(param_4 + 0x40))(param_4,param_5,!bVar9,uVar18,lVar11);
      lVar11 = *(long *)(param_4 + 0x80);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x28);
      }
      (**(code **)(param_4 + 0x38))(param_4,param_5,lVar11);
      cVar8 = FT_Get_Color_Glyph_Layer(uVar2,param_3,&local_1b8,&local_178,&local_d8);
    } while (cVar8 != '\0');
  }
  else {
    local_158 = local_200;
    local_14c = param_7;
    local_148 = 1;
    local_144 = 1;
    local_140 = 0;
    local_136 = 0;
    _local_134 = (undefined1  [16])0x0;
    local_138 = 1;
    local_120 = 0;
    local_118 = 1;
    local_114 = 1;
    local_110 = 0;
    local_106 = 0;
    local_108 = 1;
    local_f0 = 0;
    local_e8 = _LC25;
    local_104 = (undefined1  [16])0x0;
    local_178 = param_2;
    local_170 = param_1;
    local_168 = param_4;
    local_160 = param_5;
    local_150 = param_6;
    cVar8 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                      ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_148,0);
    uVar18 = _minus_1;
    if (cVar8 != '\0') {
      uVar15 = (ulong)(param_3 * -0x61c8864f & 0x3fffffff) % (ulong)uStack_12c._4_4_;
      lVar11 = uVar15 * 0xc;
      puVar12 = (uint *)(local_120 + lVar11);
      bVar1 = (byte)puVar12[1];
      uVar6 = uStack_12c;
      if ((bVar1 & 2) == 0) {
        *puVar12 = param_3;
        puVar12[2] = uVar18;
        puVar12[1] = param_3 * 0x78dde6c4 + 3;
        local_134._4_4_ = local_134._4_4_ + 1;
        local_134._0_4_ = local_134._0_4_ + 1;
      }
      else {
        uVar5 = (uint)uStack_12c;
        uVar14 = 0;
        uVar17 = 0xffffffff;
        do {
          if (*puVar12 == param_3) {
            if (uVar17 != 0xffffffff) goto LAB_00104c23;
            goto LAB_00104c2e;
          }
          if (((bVar1 & 1) == 0) && (uVar17 == 0xffffffff)) {
            uVar17 = (uint)uVar15;
          }
          uVar14 = uVar14 + 1;
          uVar15 = (ulong)((uint)uVar15 + uVar14 & (uint)uStack_12c);
          lVar11 = uVar15 * 0xc;
          puVar12 = (uint *)(local_120 + lVar11);
          bVar1 = (byte)puVar12[1];
        } while ((bVar1 & 2) != 0);
        if (uVar17 == 0xffffffff) {
LAB_00104fda:
          local_134._4_4_ = local_134._4_4_ + 1;
        }
        else {
LAB_00104c23:
          lVar11 = (ulong)uVar17 * 0xc;
LAB_00104c2e:
          puVar12 = (uint *)(local_120 + lVar11);
          if (((byte)puVar12[1] & 2) == 0) goto LAB_00104fda;
          local_134._0_4_ = local_134._0_4_ - ((byte)puVar12[1] & 1);
        }
        *puVar12 = param_3;
        puVar12[2] = uVar18;
        puVar12[1] = param_3 * 0x78dde6c4 + 3;
        local_134._0_4_ = local_134._0_4_ + 1;
        _local_134 = CONCAT88(uVar6,local_134);
        if ((local_136 < uVar14) && (uVar5 < (uint)(local_134._4_4_ << 3))) {
          hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_148,uVar5 - 8);
        }
      }
    }
    cVar8 = FT_Get_Color_Glyph_ClipBox(uVar2,param_3,&local_1b8);
    if (cVar8 == '\0') {
      lVar11 = hb_paint_extents_get_funcs();
      hb_paint_extents_context_t::hb_paint_extents_context_t
                ((hb_paint_extents_context_t *)local_1e8);
      local_b8 = local_200;
      local_ac = param_7;
      local_a8 = 1;
      local_a4 = 1;
      local_a0 = 0;
      local_96 = 0;
      _local_94 = (undefined1  [16])0x0;
      local_98 = 1;
      local_80 = 0;
      local_78 = 1;
      local_74 = 1;
      local_70 = 0;
      local_68 = 1;
      local_66 = 0;
      local_50 = 0;
      local_64 = (undefined1  [16])0x0;
      local_48 = _LC25;
      local_d8 = param_2;
      local_d0 = param_1;
      local_c8 = lVar11;
      local_c0 = (hb_paint_extents_context_t *)local_1e8;
      local_b0 = param_6;
      cVar8 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_a8,0);
      uVar18 = _minus_1;
      if (cVar8 != '\0') {
        uVar15 = (ulong)(param_3 * -0x61c8864f & 0x3fffffff) % (ulong)uStack_8c._4_4_;
        lVar11 = uVar15 * 0xc;
        puVar12 = (uint *)(local_80 + lVar11);
        bVar1 = (byte)puVar12[1];
        uVar2 = uStack_8c;
        if ((bVar1 & 2) == 0) {
          *puVar12 = param_3;
          puVar12[2] = uVar18;
          puVar12[1] = param_3 * 0x78dde6c4 + 3;
          local_94._4_4_ = local_94._4_4_ + 1;
          local_94._0_4_ = local_94._0_4_ + 1;
        }
        else {
          uVar5 = (uint)uStack_8c;
          uVar14 = 0;
          uVar17 = 0xffffffff;
          do {
            if (*puVar12 == param_3) {
              if (uVar17 != 0xffffffff) goto LAB_00105210;
              goto LAB_0010521b;
            }
            if ((uVar17 == 0xffffffff) && ((bVar1 & 1) == 0)) {
              uVar17 = (uint)uVar15;
            }
            uVar14 = uVar14 + 1;
            uVar15 = (ulong)((uint)uVar15 + uVar14 & (uint)uStack_8c);
            lVar11 = uVar15 * 0xc;
            puVar12 = (uint *)(local_80 + lVar11);
            bVar1 = (byte)puVar12[1];
          } while ((bVar1 & 2) != 0);
          if (uVar17 == 0xffffffff) {
LAB_00105435:
            local_94._4_4_ = local_94._4_4_ + 1;
          }
          else {
LAB_00105210:
            lVar11 = (ulong)uVar17 * 0xc;
LAB_0010521b:
            puVar12 = (uint *)(lVar11 + local_80);
            if (((byte)puVar12[1] & 2) == 0) goto LAB_00105435;
            local_94._0_4_ = local_94._0_4_ - ((byte)puVar12[1] & 1);
          }
          *puVar12 = param_3;
          puVar12[1] = param_3 * 0x78dde6c4 + 3;
          puVar12[2] = uVar18;
          stack0xffffffffffffff70 = CONCAT84(uVar2,local_94._4_4_);
          local_94._0_4_ = local_94._0_4_ + 1;
          if ((local_96 < uVar14) && (uVar5 < (uint)(local_94._4_4_ << 3))) {
            hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                      ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_a8,uVar5 - 8);
          }
        }
      }
      phVar7 = local_c0;
      lVar11 = local_c8;
      uVar18 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
      if (uVar18 == 0) {
        uVar18 = hb_face_t::load_upem();
      }
      plVar16 = *(long **)(lVar11 + 0x80);
      auVar22._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar22._0_4_ = (float)*(int *)(param_1 + 0x28) / (float)uVar18;
      if (plVar16 != (long *)0x0) {
        plVar16 = (long *)*plVar16;
      }
      (**(code **)(lVar11 + 0x10))(auVar22._0_8_,lVar11,phVar7,plVar16);
      if (0 < (int)local_48) {
        if (0 < local_48._4_4_) {
          local_48._0_4_ = (int)_LC22 + (int)local_48;
          local_48._4_4_ = _LC22._4_4_ + local_48._4_4_;
          _hb_ft_paint(&local_d8,local_1f8._0_8_,local_1f8._8_8_);
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 1);
        }
      }
      lVar11 = *(long *)(local_c8 + 0x80);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 8);
      }
      (**(code **)(local_c8 + 0x18))(local_c8,local_c0,lVar11);
      uVar2 = __hb_CrapPool;
      if (local_1c4 == 0) {
        _hb_font_funcs_set_nominal_glyph_func = _hb_font_funcs_create;
        piVar13 = (int *)&_hb_CrapPool;
        __hb_CrapPool = __hb_NullPool;
        _hb_font_funcs_create = uVar2;
      }
      else {
        piVar13 = (int *)((long)local_1c0 + (ulong)(local_1c4 - 1) * 0x14);
      }
      lVar11 = *(long *)(local_168 + 0x80);
      bVar9 = *piVar13 != 0;
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x20);
      }
      (**(code **)(local_168 + 0x30))(local_168,local_160,lVar11);
      hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
                ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_78);
      hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
                ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_a8);
      if (local_1c8 != 0) {
        free(local_1c0);
      }
      if (local_1d8 != 0) {
        free(local_1d0);
      }
      if (local_1e8[0] != 0) {
        free(local_1e0);
      }
    }
    else {
      fVar25 = *(float *)(param_1 + 0x48);
      auVar24._4_12_ = SUB1612((undefined1  [16])0x0,4);
      uVar18 = -(uint)((float)local_190 * fVar25 <= (float)local_180 * fVar25);
      fVar19 = (float)((uint)((float)local_180 * fVar25) & uVar18 |
                      ~uVar18 & (uint)((float)local_190 * fVar25)) + _LC8;
      if ((float)((uint)fVar19 & _LC5) < _LC3) {
        fVar19 = (float)((uint)((float)(int)fVar19 -
                               (float)(-(uint)(fVar19 < (float)(int)fVar19) & _LC1)) |
                        ~_LC5 & (uint)fVar19);
      }
      auVar24._0_4_ = (float)local_198 + fVar19;
      auVar23._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar23._0_4_ = (float)local_1b0;
      auVar20._4_12_ = SUB1612((undefined1  [16])0x0,4);
      uVar18 = -(uint)(fVar25 * auVar23._0_4_ <= (float)local_1a0 * fVar25);
      fVar25 = (float)((uint)(fVar25 * auVar23._0_4_) & uVar18 |
                      ~uVar18 & (uint)((float)local_1a0 * fVar25)) + _LC8;
      if ((float)((uint)fVar25 & _LC5) < _LC3) {
        fVar25 = (float)((uint)((float)(int)fVar25 -
                               (float)(-(uint)(fVar25 < (float)(int)fVar25) & _LC1)) |
                        ~_LC5 & (uint)fVar25);
      }
      lVar11 = *(long *)(local_168 + 0x80);
      auVar20._0_4_ = (float)CONCAT44(uStack_1b4,local_1b8) + fVar25;
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x20);
      }
      (**(code **)(local_168 + 0x30))
                (auVar20._0_8_,auVar23._0_8_,auVar24._0_8_,local_168,local_160,lVar11);
      bVar9 = true;
    }
    pvVar4 = local_160;
    phVar3 = local_168;
    uVar18 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    if (uVar18 == 0) {
      uVar18 = hb_face_t::load_upem();
    }
    plVar16 = *(long **)(phVar3 + 0x80);
    auVar21._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar21._0_4_ = (float)*(int *)(param_1 + 0x28) / (float)uVar18;
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
    }
    (**(code **)(phVar3 + 0x10))(auVar21._0_8_,phVar3,pvVar4,plVar16);
    if (bVar9) {
      if (0 < (int)local_e8) {
        if (0 < local_e8._4_4_) {
          local_e8._0_4_ = (int)_LC22 + (int)local_e8;
          local_e8._4_4_ = _LC22._4_4_ + local_e8._4_4_;
          _hb_ft_paint(&local_178,local_1f8._0_8_,local_1f8._8_8_);
          local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
        }
      }
    }
    lVar11 = *(long *)(local_168 + 0x80);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    (**(code **)(local_168 + 0x18))(local_168,local_160,lVar11);
    lVar11 = *(long *)(local_168 + 0x80);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x28);
    }
    (**(code **)(local_168 + 0x38))(local_168,local_160,lVar11);
    hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_118);
    hb_hashmap_t<unsigned_int,unsigned_int,true>::fini
              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_148);
  }
  bVar9 = true;
LAB_00104a4e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_ft_paint_glyph(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned int,
   unsigned int, void*) */

void hb_ft_paint_glyph(hb_font_t *param_1,void *param_2,uint param_3,hb_paint_funcs_t *param_4,
                      void *param_5,uint param_6,uint param_7,void *param_8)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  void *pvVar5;
  undefined1 local_58 [24];
  long local_40;
  
  __mutex = (pthread_mutex_t *)((long)param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock(__mutex);
  lVar4 = *(long *)((long)param_2 + 0x30);
                    /* WARNING: Load size is inaccurate */
  pvVar5 = (void *)0x105606;
  iVar2 = FT_Load_Glyph(lVar4,param_3,*param_2 | 0x100000);
  if (iVar2 == 0) {
    lVar4 = *(long *)(lVar4 + 0x98);
    if (*(int *)(lVar4 + 0x90) == 0x6f75746c) {
      cVar1 = hb_ft_paint_glyph_colr(param_1,param_2,param_3,param_4,param_5,param_6,param_7,pvVar5)
      ;
      if (cVar1 == '\0') {
        pthread_mutex_unlock(__mutex);
        lVar4 = *(long *)(param_4 + 0x80);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x18);
        }
        (**(code **)(param_4 + 0x28))(param_4,param_5,param_3,param_1,lVar4);
        pthread_mutex_lock(__mutex);
        lVar4 = *(long *)(param_4 + 0x80);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x30);
        }
        (**(code **)(param_4 + 0x40))(param_4,param_5,1,param_7,lVar4);
        lVar4 = *(long *)(param_4 + 0x80);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x28);
        }
        (**(code **)(param_4 + 0x38))(param_4,param_5,lVar4);
      }
    }
    else if (((*(int *)(lVar4 + 0x90) == 0x62697473) && (*(char *)(lVar4 + 0xb2) == '\a')) &&
            (*(int *)(lVar4 + 0xa0) == *(int *)(lVar4 + 0x9c) << 2)) {
      pthread_mutex_unlock(__mutex);
      uVar3 = hb_blob_create(*(undefined8 *)(lVar4 + 0xa8),
                             *(int *)(lVar4 + 0xa0) * *(int *)(lVar4 + 0x98),0,0,0);
      iVar2 = hb_font_get_glyph_extents(param_1,param_3,local_58);
      if (iVar2 != 0) {
        (**(code **)(param_4 + 0x48))
                  (*(undefined4 *)(param_1 + 0x48),param_4,param_5,uVar3,
                   *(undefined4 *)(lVar4 + 0x9c),*(undefined4 *)(lVar4 + 0x98),0x42475241,local_58);
      }
      hb_blob_destroy(uVar3);
      pthread_mutex_lock(__mutex);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_table_lazy_loader_t<OT::OS2, 6u, true>::create(hb_face_t*) */

undefined8 hb_table_lazy_loader_t<OT::OS2,6u,true>::create(hb_face_t *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar2 = hb_face_reference_table(param_1,0x4f532f32);
  lVar3 = hb_blob_reference(uVar2);
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (*(ushort **)(lVar3 + 0x10) == (ushort *)0x0) {
    hb_blob_destroy(lVar3);
    return uVar2;
  }
  if ((0x4d < uVar1) &&
     ((uVar4 = **(ushort **)(lVar3 + 0x10), uVar4 = uVar4 << 8 | uVar4 >> 8, uVar4 == 0 ||
      ((0x55 < uVar1 && ((uVar4 == 1 || ((0x5f < uVar1 && ((uVar4 < 5 || (99 < uVar1)))))))))))) {
    hb_blob_destroy(lVar3);
    hb_blob_make_immutable(uVar2);
    return uVar2;
  }
  hb_blob_destroy(lVar3);
  hb_blob_destroy(uVar2);
  uVar2 = hb_blob_get_empty();
  return uVar2;
}



/* hb_ft_get_nominal_glyph(hb_font_t*, void*, unsigned int, unsigned int*, void*) */

undefined8
hb_ft_get_nominal_glyph(hb_font_t *param_1,void *param_2,uint param_3,uint *param_4,void *param_5)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 8));
  uVar5 = FT_Get_Char_Index(*(undefined8 *)((long)param_2 + 0x30),param_3);
  if (uVar5 == 0) {
    if (*(char *)((long)param_2 + 4) == '\0') {
LAB_001058d6:
      uVar9 = 0;
      goto LAB_001058b2;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    plVar1 = (long *)(lVar2 + 0xa0);
LAB_001058eb:
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      phVar3 = *(hb_face_t **)(lVar2 + 0x70);
      if (phVar3 == (hb_face_t *)0x0) {
        lVar7 = hb_blob_get_empty();
      }
      else {
        lVar7 = hb_table_lazy_loader_t<OT::OS2,6u,true>::create(phVar3);
        if (lVar7 == 0) {
          lVar7 = hb_blob_get_empty();
          LOCK();
          lVar8 = *plVar1;
          if (lVar8 == 0) {
            *plVar1 = lVar7;
          }
          UNLOCK();
          if (lVar8 != 0) goto code_r0x00105b07;
        }
        else {
          LOCK();
          lVar8 = *plVar1;
          if (lVar8 == 0) {
            *plVar1 = lVar7;
          }
          UNLOCK();
          if (lVar8 != 0) goto LAB_00105aa9;
        }
      }
    }
    psVar6 = (short *)&_hb_NullPool;
    if (0x4d < *(uint *)(lVar7 + 0x18)) {
      psVar6 = *(short **)(lVar7 + 0x10);
    }
    if (*psVar6 == 0) {
      sVar4 = psVar6[0x1f] << 8;
      if (sVar4 == -0x4e00) {
        uVar10 = 0;
        if (param_3 < 0xfefd) {
          uVar10 = *(undefined2 *)
                    (_hb_arabic_u16 +
                    (ulong)((param_3 & 7) +
                           (uint)(byte)_hb_arabic_u8
                                       [(((int)(uint)(byte)_hb_arabic_u8
                                                           [(ulong)((((int)(uint)(byte)_hb_arabic_u8
                                                                                       [param_3 >>
                                                                                        0xd] >>
                                                                      ((byte)(param_3 >> 10) & 6) &
                                                                     3U) << 4 | param_3 >> 7 & 0xf)
                                                                   >> 1) + 8] >>
                                          (sbyte)((param_3 >> 7 & 1) << 2) & 0xfU) << 4 |
                                        param_3 >> 3 & 0xf) + 0x28] * 8) * 2);
        }
      }
      else {
        if (sVar4 != -0x4d00) {
          if (sVar4 != 0) goto LAB_001058d6;
          goto LAB_00105930;
        }
        uVar10 = 0;
        if (param_3 < 0xfefd) {
          uVar10 = *(undefined2 *)
                    (_hb_arabic_u16 +
                    (ulong)((param_3 & 3) + 0x140 +
                           (uint)(byte)_hb_arabic_u8
                                       [(((int)(uint)(byte)_hb_arabic_u8
                                                           [(ulong)((((int)(uint)(byte)_hb_arabic_u8
                                                                                       [(ulong)(
                                                  param_3 >> 0xb) + 0x88] >>
                                                  ((byte)(param_3 >> 8) & 4) & 0xfU) << 4 |
                                                  param_3 >> 6 & 0xf) >> 1) + 0xa8] >>
                                          (sbyte)((param_3 >> 6 & 1) << 2) & 0xfU) << 4 |
                                        param_3 >> 2 & 0xf) + 0xd0] * 4) * 2);
        }
      }
      uVar5 = FT_Get_Char_Index(*(undefined8 *)((long)param_2 + 0x30),uVar10);
    }
    else {
LAB_00105930:
      if (0xff < param_3) goto LAB_001058d6;
      uVar5 = FT_Get_Char_Index(*(undefined8 *)((long)param_2 + 0x30),param_3 + 0xf000);
    }
    if (uVar5 == 0) {
      uVar9 = 0;
      goto LAB_001058b2;
    }
  }
  *param_4 = uVar5;
  uVar9 = 1;
LAB_001058b2:
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 8));
  return uVar9;
code_r0x00105b07:
  if (lVar7 != 0) {
LAB_00105aa9:
    lVar8 = hb_blob_get_empty();
    if (lVar7 != lVar8) {
      hb_blob_destroy(lVar7);
    }
  }
  goto LAB_001058eb;
}



/* WARNING: Control flow encountered bad instruction data */
/* hb_paint_extents_context_t::hb_paint_extents_context_t() */

void __thiscall
hb_paint_extents_context_t::hb_paint_extents_context_t(hb_paint_extents_context_t *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


