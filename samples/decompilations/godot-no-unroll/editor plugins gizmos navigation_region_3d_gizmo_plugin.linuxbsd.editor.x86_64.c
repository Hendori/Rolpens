
/* NavigationRegion3DGizmoPlugin::get_priority() const */

undefined8 NavigationRegion3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* NavigationRegion3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
NavigationRegion3DGizmoPlugin::has_gizmo(NavigationRegion3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&NavigationRegion3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* void Ref<Material>::TEMPNAMEPLACEHOLDERVALUE(Ref<StandardMaterial3D> const&) [clone .isra.0] */

void __thiscall Ref<Material>::operator=(Ref<Material> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* NavigationRegion3DGizmoPlugin::get_gizmo_name() const */

NavigationRegion3DGizmoPlugin * __thiscall
NavigationRegion3DGizmoPlugin::get_gizmo_name(NavigationRegion3DGizmoPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0xc;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationRegion3DGizmoPlugin::NavigationRegion3DGizmoPlugin() */

void __thiscall
NavigationRegion3DGizmoPlugin::NavigationRegion3DGizmoPlugin(NavigationRegion3DGizmoPlugin *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00105d08;
  NavigationServer3D::get_singleton();
  local_48 = NavigationServer3D::get_debug_navigation_geometry_face_color();
  local_58 = "face_material";
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  bVar3 = SUB81(&local_48,0);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_60,bVar3,false,false);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  NavigationServer3D::get_singleton();
  local_48 = NavigationServer3D::get_debug_navigation_geometry_face_disabled_color();
  local_58 = "face_material_disabled";
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_60,bVar3,false,false);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  NavigationServer3D::get_singleton();
  local_48 = NavigationServer3D::get_debug_navigation_geometry_edge_color();
  local_58 = "edge_material";
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_60,bVar3,false,false);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  NavigationServer3D::get_singleton();
  local_48 = NavigationServer3D::get_debug_navigation_geometry_edge_disabled_color();
  local_58 = "edge_material_disabled";
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_60,bVar3,false,false);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_58 = "baking_aabb_material";
  local_48 = __LC17;
  uStack_40 = _UNK_00106168;
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_60,bVar3,false,false);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationRegion3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
NavigationRegion3DGizmoPlugin::redraw
          (NavigationRegion3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  Vector *pVVar11;
  int *piVar12;
  EditorNode3DGizmo *pEVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  Object *pOVar21;
  TriangleMesh *this_00;
  ArrayMesh *this_01;
  Variant *pVVar22;
  Object *pOVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  undefined8 *puVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [12];
  RandomPCG *local_230;
  Variant *local_228;
  Object *local_1c8;
  undefined1 (*local_1c0) [16];
  Vector *local_1b8;
  Array local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  Ref *local_188;
  Object *local_180 [2];
  long local_170;
  Vector local_168 [8];
  undefined8 *local_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  Vector local_148 [8];
  undefined8 local_140;
  Object *local_138;
  long local_130;
  Object *local_128;
  int *local_120;
  EditorNode3DGizmo *local_118;
  int *local_110;
  Object *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&NavigationRegion3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  NavigationRegion3D::get_navigation_mesh();
  if (local_1c8 == (Object *)0x0) goto LAB_00100d70;
  NavigationMesh::get_filter_baking_aabb();
  fVar33 = local_84;
  fVar32 = fStack_88;
  fVar31 = local_8c;
  if (((0.0 < local_8c) && (0.0 < fStack_88)) && (0.0 < local_84)) {
    auVar38 = NavigationMesh::get_filter_baking_aabb_offset();
    local_a8 = auVar38._0_8_;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,auVar38._8_4_);
    if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
      local_118 = param_1;
      cVar14 = RefCounted::init_ref();
      if (cVar14 == '\0') {
        local_118 = (EditorNode3DGizmo *)0x0;
      }
      local_f8 = (Object *)0x102701;
      local_128 = (Object *)0x0;
      local_f0._0_8_ = 0x14;
      String::parse_latin1((StrRange *)&local_128);
      EditorNode3DGizmoPlugin::get_material((String *)&local_f8,(Ref *)this);
      local_138 = (Object *)0x0;
      if (local_f8 != (Object *)0x0) {
        pOVar21 = (Object *)__dynamic_cast(local_f8,&Object::typeinfo,&Material::typeinfo,0);
        if (pOVar21 != (Object *)0x0) {
          local_138 = pOVar21;
          cVar14 = RefCounted::reference();
          if (cVar14 == '\0') {
            local_138 = (Object *)0x0;
          }
          if (local_f8 == (Object *)0x0) goto LAB_001011b5;
        }
        cVar14 = RefCounted::unreference();
        pOVar21 = local_f8;
        if ((cVar14 != '\0') && (cVar14 = predelete_handler(local_f8), cVar14 != '\0')) {
          (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
          Memory::free_static(pOVar21,false);
        }
      }
LAB_001011b5:
      pOVar21 = local_128;
      if (local_128 != (Object *)0x0) {
        LOCK();
        pOVar23 = local_128 + -0x10;
        *(long *)pOVar23 = *(long *)pOVar23 + -1;
        UNLOCK();
        if (*(long *)pOVar23 == 0) {
          local_128 = (Object *)0x0;
          Memory::free_static(pOVar21 + -0x10,false);
        }
      }
      if (((local_118 != (EditorNode3DGizmo *)0x0) &&
          (cVar14 = RefCounted::unreference(), pEVar13 = local_118, cVar14 != '\0')) &&
         (cVar14 = predelete_handler((Object *)local_118), cVar14 != '\0')) {
        (**(code **)(*(long *)pEVar13 + 0x140))(pEVar13);
        Memory::free_static(pEVar13,false);
      }
      local_78 = _LC42;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 0.0;
      fStack_68 = _LC42;
      fStack_64 = 0.0;
      uStack_60 = 0;
      local_58 = 0x3f800000;
      local_54 = 0;
      local_c0 = fVar33 * (float)_LC44 + local_90 + (float)uStack_a0;
      local_4c = 0;
      local_c8 = CONCAT44(fVar32 * _LC44._4_4_ + (float)((ulong)local_98 >> 0x20) + local_a8._4_4_,
                          fVar31 * (float)_LC44 + (float)local_98 + local_a8._0_4_);
      EditorNode3DGizmo::add_solid_box
                (CONCAT44(fStack_88,local_8c),local_84,local_c8,local_c0,param_1,&local_138,
                 &local_78);
      if (((local_138 != (Object *)0x0) &&
          (cVar14 = RefCounted::unreference(), pOVar21 = local_138, cVar14 != '\0')) &&
         (cVar14 = predelete_handler(local_138), cVar14 != '\0')) {
        (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
        Memory::free_static(pOVar21,false);
      }
    }
  }
  iVar28 = 0;
  NavigationMesh::get_vertices();
  lVar18 = local_170;
  local_1c0 = (undefined1 (*) [16])0x0;
LAB_00100a8d:
  iVar16 = NavigationMesh::get_polygon_count();
  pauVar10 = local_1c0;
  if (iVar28 < iVar16) {
    NavigationMesh::get_polygon((int)&local_f8);
    lVar24 = 1;
    while ((int *)local_f0._0_8_ != (int *)0x0) {
      lVar26 = *(long *)(local_f0._0_8_ + -8);
      if (lVar26 <= lVar24 + 1) {
        LOCK();
        plVar1 = (long *)(local_f0._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar3 = local_f0._0_8_;
          iVar28 = iVar28 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_f0._8_8_;
          local_f0 = auVar7 << 0x40;
          Memory::free_static((void *)(uVar3 + -0x10),false);
          goto LAB_00100a8d;
        }
        break;
      }
      uStack_60 = 0;
      local_58 = 0;
      puVar17 = (undefined8 *)(lVar18 + (long)*(int *)local_f0._0_8_ * 0xc);
      uVar3 = *puVar17;
      local_78 = (float)uVar3;
      fStack_74 = (float)((ulong)uVar3 >> 0x20);
      fStack_70 = *(float *)(puVar17 + 1);
      if (lVar26 <= lVar24) goto LAB_00100c3b;
      puVar17 = (undefined8 *)(lVar18 + (long)*(int *)(local_f0._0_8_ + lVar24 * 4) * 0xc);
      puVar20 = (undefined8 *)(lVar18 + (long)*(int *)(local_f0._0_8_ + (lVar24 + 1) * 4) * 0xc);
      uVar3 = *puVar17;
      fStack_6c = (float)uVar3;
      fStack_68 = (float)((ulong)uVar3 >> 0x20);
      fStack_64 = *(float *)(puVar17 + 1);
      uStack_60 = *puVar20;
      local_58 = *(undefined4 *)(puVar20 + 1);
      if (local_1c0 == (undefined1 (*) [16])0x0) {
        local_1c0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_1c0[1] = 0;
        *local_1c0 = (undefined1  [16])0x0;
      }
      pauVar10 = local_1c0;
      puVar17 = (undefined8 *)operator_new(0x40,DefaultAllocator::alloc);
      puVar17[5] = 0;
      *puVar17 = CONCAT44(fStack_74,local_78);
      puVar17[1] = CONCAT44(fStack_6c,fStack_70);
      puVar17[2] = CONCAT44(fStack_64,fStack_68);
      puVar17[3] = uStack_60;
      *(undefined4 *)(puVar17 + 4) = local_58;
      lVar26 = *(long *)(*pauVar10 + 8);
      puVar17[6] = lVar26;
      puVar17[7] = pauVar10;
      if (lVar26 != 0) {
        *(undefined8 **)(lVar26 + 0x28) = puVar17;
      }
      lVar26 = *(long *)*pauVar10;
      *(undefined8 **)(*pauVar10 + 8) = puVar17;
      if (lVar26 == 0) {
        *(undefined8 **)*pauVar10 = puVar17;
      }
      *(int *)pauVar10[1] = *(int *)pauVar10[1] + 1;
      lVar24 = lVar24 + 1;
    }
    iVar28 = iVar28 + 1;
    goto LAB_00100a8d;
  }
  if (local_1c0 == (undefined1 (*) [16])0x0) {
LAB_00100d01:
    lVar18 = local_170;
    auVar9._8_8_ = uStack_a0;
    auVar9._0_8_ = local_a8;
    auVar8._8_8_ = local_b8._8_8_;
    auVar8._0_8_ = local_b8._0_8_;
    if (local_170 != 0) {
      LOCK();
      plVar1 = (long *)(local_170 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_b8 = auVar8;
      _local_a8 = auVar9;
      if (*plVar1 == 0) {
        local_170 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
  }
  else {
    if (*(int *)local_1c0[1] == 0) {
      do {
        while( true ) {
          pvVar4 = *(void **)*pauVar10;
          if (pvVar4 == (void *)0x0) {
            if (*(int *)pauVar10[1] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00100d01;
            }
            goto LAB_00100cf7;
          }
          if (pauVar10 != *(undefined1 (**) [16])((long)pvVar4 + 0x38)) break;
          lVar18 = *(long *)((long)pvVar4 + 0x28);
          lVar24 = *(long *)((long)pvVar4 + 0x30);
          *(long *)*pauVar10 = lVar18;
          if (pvVar4 == *(void **)(*pauVar10 + 8)) {
            *(long *)(*pauVar10 + 8) = lVar24;
          }
          if (lVar24 != 0) {
            *(long *)(lVar24 + 0x28) = lVar18;
            lVar18 = *(long *)((long)pvVar4 + 0x28);
          }
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x30) = lVar24;
          }
          Memory::free_static(pvVar4,false);
          pauVar2 = pauVar10 + 1;
          *(int *)*pauVar2 = *(int *)*pauVar2 + -1;
          if (*(int *)*pauVar2 == 0) goto LAB_00100cf7;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar10[1] != 0);
LAB_00100cf7:
      Memory::free_static(pauVar10,false);
      goto LAB_00100d01;
    }
    local_d0 = 2;
    local_f0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_160 = (undefined8 *)0x0;
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_160,(long)(*(int *)local_1c0[1] * 3))
    ;
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_160);
    puVar17 = *(undefined8 **)*pauVar10;
    if (puVar17 == (undefined8 *)0x0) {
      local_150 = 0;
    }
    else {
      puVar20 = local_160;
      do {
        iVar28 = 0;
        puVar27 = puVar20;
        puVar30 = puVar17;
        do {
          fVar31 = _LC48;
          *puVar27 = *puVar30;
          *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar30 + 1);
          auVar38 = Vector3::snappedf(fVar31);
          fStack_70 = auVar38._8_4_;
          iVar28 = iVar28 + 1;
          local_78 = auVar38._0_4_;
          fStack_74 = auVar38._4_4_;
          auVar38 = Vector3::snappedf(_LC48);
          fVar36 = auVar38._8_4_;
          fStack_6c = auVar38._0_4_;
          fVar31 = fStack_6c;
          fStack_68 = auVar38._4_4_;
          fVar32 = fStack_68;
          fVar33 = local_78;
          fVar37 = fStack_6c;
          if ((local_78 == fStack_6c) &&
             (fVar33 = fStack_74, fVar37 = fStack_68, fStack_74 == fStack_68)) {
            bVar6 = fStack_70 < fVar36;
          }
          else {
            bVar6 = fVar33 < fVar37;
          }
          fStack_64 = fVar36;
          if (bVar6) {
            local_a8 = (undefined1  [8])CONCAT44(fStack_74,local_78);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,fStack_70);
            fStack_6c = local_78;
            fStack_68 = fStack_74;
            fStack_64 = fStack_70;
            local_78 = fVar31;
            fStack_74 = fVar32;
            fStack_70 = fVar36;
          }
          local_118 = (EditorNode3DGizmo *)((ulong)local_118 & 0xffffffff00000000);
          cVar14 = HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
                   ::_lookup_pos((HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
                                  *)&local_f8,(_EdgeKey *)&local_78,(uint *)&local_118);
          if (cVar14 == '\0') {
LAB_00100fbf:
            puVar19 = (undefined1 *)
                      HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
                      ::operator[]((HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
                                    *)&local_f8,(_EdgeKey *)&local_78);
            *puVar19 = 1;
          }
          else {
            lVar18 = *(long *)(local_f0._0_8_ + ((ulong)local_118 & 0xffffffff) * 8);
            if (lVar18 == 0) goto LAB_00100fbf;
            *(undefined1 *)(lVar18 + 0x28) = 0;
          }
          puVar30 = (undefined8 *)((long)puVar30 + 0xc);
          puVar27 = (undefined8 *)((long)puVar27 + 0xc);
        } while (iVar28 != 3);
        puVar17 = (undefined8 *)puVar17[5];
        puVar20 = (undefined8 *)((long)puVar20 + 0x24);
      } while (puVar17 != (undefined8 *)0x0);
      local_150 = 0;
      for (puVar17 = (undefined8 *)local_e0._0_8_; puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)*puVar17) {
        if (*(char *)(puVar17 + 5) != '\0') {
          Vector<Vector3>::push_back(puVar17[2],*(undefined4 *)(puVar17 + 3),local_158);
          Vector<Vector3>::push_back
                    (*(undefined8 *)((long)puVar17 + 0x1c),*(undefined4 *)((long)puVar17 + 0x24),
                     local_158);
        }
      }
    }
    local_230 = (RandomPCG *)&local_118;
    this_00 = (TriangleMesh *)operator_new(0x1b8,"");
    TriangleMesh::TriangleMesh(this_00);
    postinitialize_handler((Object *)this_00);
    local_1b8 = (Vector *)this_00;
    cVar14 = RefCounted::init_ref();
    if (cVar14 == '\0') {
      local_1b8 = (Vector *)0x0;
    }
    local_110 = (int *)0x0;
    TriangleMesh::create(local_1b8,local_168);
    piVar12 = local_110;
    if (local_110 != (int *)0x0) {
      LOCK();
      plVar1 = (long *)(local_110 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = (int *)0x0;
        Memory::free_static(piVar12 + -4,false);
      }
    }
    EditorNode3DGizmo::add_collision_triangles((Ref *)param_1);
    EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
    this_01 = (ArrayMesh *)operator_new(0x430,"");
    ArrayMesh::ArrayMesh(this_01);
    postinitialize_handler((Object *)this_01);
    cVar14 = RefCounted::init_ref();
    pOVar21 = (Object *)0x0;
    if (cVar14 != '\0') {
      pOVar21 = (Object *)this_01;
    }
    iVar28 = NavigationMesh::get_polygon_count();
    local_140 = 0;
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_140,(long)(iVar28 * 3));
    if (0 < iVar28) {
      iVar16 = 0;
      do {
        NavigationMesh::get_polygon((int)local_230);
        if (local_110 == (int *)0x0) goto LAB_00101d3e;
        lVar26 = *(long *)(local_110 + -2);
        if (lVar26 < 1) goto LAB_00101d41;
        lVar24 = (long)*local_110;
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),local_148);
        if (local_110 == (int *)0x0) goto LAB_00101d7f;
        lVar26 = *(long *)(local_110 + -2);
        if (lVar26 < 2) goto LAB_00101d82;
        lVar24 = (long)local_110[1];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),local_148);
        if (local_110 == (int *)0x0) goto LAB_00101d5d;
        lVar26 = *(long *)(local_110 + -2);
        if (lVar26 < 3) goto LAB_00101d60;
        lVar24 = (long)local_110[2];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),local_148);
        piVar12 = local_110;
        if (local_110 != (int *)0x0) {
          LOCK();
          plVar1 = (long *)(local_110 + -4);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_110 = (int *)0x0;
            Memory::free_static(piVar12 + -4,false);
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar28 != iVar16);
    }
    Array::Array(local_1b0);
    iVar16 = (int)local_1b0;
    Array::resize(iVar16);
    Variant::Variant((Variant *)&local_78,local_148);
    pVVar22 = (Variant *)Array::operator[](iVar16);
    Variant::operator=(pVVar22,(Variant *)&local_78);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    RandomPCG::RandomPCG(local_230,0xa7323897838d73db,0x14057b7ef767814f);
    NavigationServer3D::get_singleton();
    cVar14 = NavigationServer3D::get_debug_navigation_enable_geometry_face_random_color();
    if (cVar14 != '\0') {
      NavigationServer3D::get_singleton();
      local_b8 = NavigationServer3D::get_debug_navigation_geometry_face_color();
      local_130 = 0;
      _local_a8 = local_b8;
      CowData<Color>::resize<false>((CowData<Color> *)&local_130,(long)(iVar28 * 3));
      if (0 < iVar28) {
        iVar29 = 0;
        do {
          local_228 = (Variant *)&local_128;
          fVar31 = (float)Color::get_v();
          dVar34 = (double)RandomPCG::random(_LC50,_LC49);
          dVar34 = _LC51 * dVar34;
          fVar32 = (float)Color::get_s();
          fVar33 = (float)Color::get_h();
          dVar35 = (double)RandomPCG::random(_LC50,_LC49);
          Color::set_hsv((float)(dVar35 * __LC52 + (double)fVar33),fVar32,
                         (float)(dVar34 + (double)fVar31),_LC43);
          uStack_a0 = CONCAT44(local_b8._12_4_,(float)uStack_a0);
          NavigationMesh::get_polygon((int)local_228);
          Vector<Color>::push_back(local_a8,uStack_a0,&local_138);
          Vector<Color>::push_back(local_a8,uStack_a0,&local_138);
          Vector<Color>::push_back(local_a8,uStack_a0,&local_138);
          piVar12 = local_120;
          if (local_120 != (int *)0x0) {
            LOCK();
            plVar1 = (long *)(local_120 + -4);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_120 = (int *)0x0;
              Memory::free_static(piVar12 + -4,false);
            }
          }
          iVar29 = iVar29 + 1;
        } while (iVar28 != iVar29);
      }
      Variant::Variant((Variant *)&local_78,(Vector *)&local_138);
      pVVar22 = (Variant *)Array::operator[](iVar16);
      Variant::operator=(pVVar22,(Variant *)&local_78);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      lVar18 = local_130;
      if (local_130 != 0) {
        LOCK();
        plVar1 = (long *)(local_130 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
    }
    local_228 = (Variant *)&local_128;
    Dictionary::Dictionary((Dictionary *)&local_138);
    Array::Array((Array *)local_180);
    local_78 = 0.0;
    fStack_74 = 0.0;
    local_128 = (Object *)0x0;
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    Array::set_typed((uint)(Array *)local_180,(StringName *)0x1c,local_228);
    if ((StringName::configured != '\0') && (local_128 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    ArrayMesh::add_surface_from_arrays
              (pOVar21,3,local_1b0,(Array *)local_180,(Dictionary *)&local_138);
    Array::~Array((Array *)local_180);
    Dictionary::~Dictionary((Dictionary *)&local_138);
    local_4c = 0;
    local_128 = (Object *)0x0;
    local_58 = 0x3f800000;
    local_54 = 0;
    local_78 = _LC42;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = _LC42;
    fStack_64 = 0.0;
    uStack_60 = 0;
    cVar14 = NavigationRegion3D::is_enabled();
    if (cVar14 == '\0') {
      local_190 = 0;
      Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_190,param_1);
      local_198 = 0;
      String::parse_latin1((String *)&local_198,"face_material_disabled");
      EditorNode3DGizmoPlugin::get_material((String *)&local_188,(Ref *)this);
    }
    else {
      local_1a0 = 0;
      Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_1a0,param_1);
      local_1a8 = 0;
      String::parse_latin1((String *)&local_1a8,"face_material");
      EditorNode3DGizmoPlugin::get_material((String *)&local_188,(Ref *)this);
    }
    local_138 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_138,local_188);
    local_180[0] = (Object *)0x0;
    pOVar23 = (Object *)__dynamic_cast(pOVar21,&Object::typeinfo,&Mesh::typeinfo,0);
    if (pOVar23 != (Object *)0x0) {
      local_180[0] = pOVar23;
      cVar15 = RefCounted::reference();
      if (cVar15 == '\0') {
        local_180[0] = (Object *)0x0;
      }
    }
    EditorNode3DGizmo::add_mesh
              ((Ref *)param_1,(Ref *)local_180,(Transform3D *)&local_138,(Ref *)&local_78);
    if (local_180[0] != (Object *)0x0) {
      cVar15 = RefCounted::unreference();
      pOVar23 = local_180[0];
      if (cVar15 != '\0') {
        cVar15 = predelete_handler(local_180[0]);
        if (cVar15 != '\0') {
          (**(code **)(*(long *)pOVar23 + 0x140))();
          Memory::free_static(pOVar23,false);
        }
      }
    }
    Ref<Material>::unref((Ref<Material> *)&local_138);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_188);
    if (cVar14 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_190);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
      Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_1a0);
    }
    if (local_128 != (Object *)0x0) {
      cVar14 = RefCounted::unreference();
      pOVar23 = local_128;
      if (cVar14 != '\0') {
        cVar14 = predelete_handler(local_128);
        if (cVar14 != '\0') {
          (**(code **)(*(long *)pOVar23 + 0x140))();
          Memory::free_static(pOVar23,false);
        }
      }
    }
    NavigationServer3D::get_singleton();
    cVar14 = NavigationServer3D::get_debug_navigation_enable_edge_lines();
    if (cVar14 != '\0') {
      local_130 = 0;
      CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_130,(long)(iVar28 * 6));
      for (iVar16 = 0; iVar16 < iVar28; iVar16 = iVar16 + 1) {
        NavigationMesh::get_polygon((int)local_228);
        if (local_120 == (int *)0x0) goto LAB_00101d3e;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 1) goto LAB_00101d41;
        lVar24 = (long)*local_120;
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        if (local_120 == (int *)0x0) goto LAB_00101d7f;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 2) goto LAB_00101d82;
        lVar24 = (long)local_120[1];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        if (local_120 == (int *)0x0) goto LAB_00101d7f;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 2) goto LAB_00101d82;
        lVar24 = (long)local_120[1];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        if (local_120 == (int *)0x0) goto LAB_00101d5d;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 3) goto LAB_00101d60;
        lVar24 = (long)local_120[2];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        if (local_120 == (int *)0x0) goto LAB_00101d5d;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 3) goto LAB_00101d60;
        lVar24 = (long)local_120[2];
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        if (local_120 == (int *)0x0) goto LAB_00101d3e;
        lVar26 = *(long *)(local_120 + -2);
        if (lVar26 < 1) goto LAB_00101d41;
        lVar24 = (long)*local_120;
        if (lVar24 < 0) goto LAB_00101d2d;
        if (local_170 == 0) goto LAB_00101d36;
        if (*(long *)(local_170 + -8) <= lVar24) goto LAB_00101c60;
        puVar17 = (undefined8 *)(local_170 + lVar24 * 0xc);
        Vector<Vector3>::push_back(*puVar17,*(undefined4 *)(puVar17 + 1),(Dictionary *)&local_138);
        piVar12 = local_120;
        if (local_120 != (int *)0x0) {
          LOCK();
          plVar1 = (long *)(local_120 + -4);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_120 = (int *)0x0;
            Memory::free_static(piVar12 + -4,false);
          }
        }
      }
      local_78 = _LC43;
      fStack_74 = _LC43;
      fStack_70 = _LC43;
      fStack_6c = _LC43;
      cVar14 = NavigationRegion3D::is_enabled();
      local_188 = (Ref *)0x0;
      if (cVar14 == '\0') {
        Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_188,param_1);
        pcVar25 = "edge_material_disabled";
      }
      else {
        Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_188,param_1);
        pcVar25 = "edge_material";
      }
      local_190 = 0;
      String::parse_latin1((String *)&local_190,pcVar25);
      EditorNode3DGizmoPlugin::get_material((String *)local_180,(Ref *)this);
      local_128 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)local_228,(Ref *)local_180[0]);
      EditorNode3DGizmo::add_lines
                ((Vector *)param_1,(Ref *)&local_138,SUB81(local_228,0),(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)local_228);
      Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_180);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
      Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_188);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_130);
    }
    Array::~Array(local_1b0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_140);
    cVar14 = RefCounted::unreference();
    if (cVar14 != '\0') {
      cVar14 = predelete_handler(pOVar21);
      if (cVar14 != '\0') {
        (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
        Memory::free_static(pOVar21,false);
      }
    }
    if (local_1b8 != (Vector *)0x0) {
      cVar14 = RefCounted::unreference();
      pVVar11 = local_1b8;
      if (cVar14 != '\0') {
        cVar14 = predelete_handler((Object *)local_1b8);
        if (cVar14 != '\0') {
          (**(code **)(*(long *)pVVar11 + 0x140))(pVVar11);
          Memory::free_static(pVVar11,false);
        }
      }
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_150);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_160);
    HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
    ::~HashMap((HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
                *)&local_f8);
    List<Face3,DefaultAllocator>::~List((List<Face3,DefaultAllocator> *)&local_1c0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_170);
  }
  if (local_1c8 != (Object *)0x0) {
    cVar14 = RefCounted::unreference();
    if (cVar14 != '\0') {
      cVar14 = predelete_handler(local_1c8);
      if (cVar14 != '\0') {
        (**(code **)(*(long *)local_1c8 + 0x140))(local_1c8);
        Memory::free_static(local_1c8,false);
      }
    }
  }
LAB_00100d70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101d7f:
  lVar26 = 0;
LAB_00101d82:
  lVar24 = 1;
  goto LAB_00100c3b;
LAB_00101d5d:
  lVar26 = 0;
LAB_00101d60:
  lVar24 = 2;
  goto LAB_00100c3b;
LAB_00101d2d:
  if (local_170 == 0) {
LAB_00101d36:
    lVar26 = 0;
  }
  else {
LAB_00101c60:
    lVar26 = *(long *)(local_170 + -8);
  }
  goto LAB_00100c3b;
LAB_00101d3e:
  lVar26 = 0;
LAB_00101d41:
  lVar24 = 0;
LAB_00100c3b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar26,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* NavigationRegion3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
NavigationRegion3DGizmoPlugin::is_class_ptr(NavigationRegion3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x105f,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationRegion3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 NavigationRegion3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationRegion3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 NavigationRegion3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationRegion3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void NavigationRegion3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationRegion3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 NavigationRegion3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationRegion3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationRegion3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationRegion3DGizmoPlugin::_notificationv(int, bool) */

void NavigationRegion3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin() */

void __thiscall
NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin(NavigationRegion3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105d08;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin() */

void __thiscall
NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin(NavigationRegion3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105d08;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* NavigationRegion3DGizmoPlugin::_get_class_namev() const */

undefined8 * NavigationRegion3DGizmoPlugin::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102553:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102553;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationRegion3DGizmoPlugin");
      goto LAB_001025be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationRegion3DGizmoPlugin");
LAB_001025be:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationRegion3DGizmoPlugin::get_class() const */

void NavigationRegion3DGizmoPlugin::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3DGizmoPlugin::_initialize_classv() */

void NavigationRegion3DGizmoPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          lVar2 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorNode3DGizmoPlugin";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationRegion3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00102f2f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00102f2f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00102fe3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00103093;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00103093:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00102fe3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102fe3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001032b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001032b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001032d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001032d6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001035af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001035af:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00103663;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103663:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
NavigationRegion3DGizmoPlugin::is_class(NavigationRegion3DGizmoPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010372f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010372f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001037e3;
  }
  cVar6 = String::operator==(param_1,"NavigationRegion3DGizmoPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001038a3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001038a3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001037e3;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010394c;
    }
  }
LAB_001037e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010394c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00103ad8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ad8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103af5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103af5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorNode3DGizmoPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNode3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00103f28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103f28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103f45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103f45:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorNode3DGizmoPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationRegion3DGizmoPlugin::_get_property_listv
          (NavigationRegion3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationRegion3DGizmoPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationRegion3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104378:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104378;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104395;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104395:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationRegion3DGizmoPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3DGizmoPlugin::_EdgeKey::hash(NavigationRegion3DGizmoPlugin::_EdgeKey const&) */

uint NavigationRegion3DGizmoPlugin::_EdgeKey::hash(_EdgeKey *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  fVar1 = *(float *)param_1;
  uVar2 = 0x3413905a;
  if ((fVar1 != 0.0) && (uVar2 = 0x22afa5cc, !NAN(fVar1))) {
    uVar2 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            0x7f07c65;
    uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  }
  fVar1 = *(float *)(param_1 + 4);
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  fVar1 = *(float *)(param_1 + 8);
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  fVar1 = *(float *)(param_1 + 0xc);
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar3 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = 0x3413905a;
  if ((fVar1 != 0.0) && (uVar2 = 0x22afa5cc, !NAN(fVar1))) {
    uVar2 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            0x7f07c65;
    uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  }
  fVar1 = *(float *)(param_1 + 0x10);
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  fVar1 = *(float *)(param_1 + 0x14);
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  if (fVar1 != 0.0) {
    if (NAN(fVar1)) {
      uVar2 = uVar2 ^ 0x2db3efa0;
    }
    else {
      uVar2 = uVar2 ^ ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) *
                      0x1b873593;
    }
  }
  uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  return uVar3 ^ uVar3 >> 0x10 ^ uVar2 ^ uVar2 >> 0x10;
}



/* List<Face3, DefaultAllocator>::~List() */

undefined8 __thiscall List<Face3,DefaultAllocator>::~List(List<Face3,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x38) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey, bool, NavigationRegion3DGizmoPlugin::_EdgeKey,
   HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,
   DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey, bool> >
   >::~HashMap() */

void __thiscall
HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
::~HashMap(HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<EditorNode3DGizmo>::unref() */

void __thiscall Ref<EditorNode3DGizmo>::unref(Ref<EditorNode3DGizmo> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<EditorNode3DGizmo>::TEMPNAMEPLACEHOLDERVALUE(EditorNode3DGizmo*) */

void __thiscall
Ref<EditorNode3DGizmo>::operator=(Ref<EditorNode3DGizmo> *this,EditorNode3DGizmo *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (EditorNode3DGizmo *)pOVar1) {
    *(EditorNode3DGizmo **)this = param_1;
    if (param_1 != (EditorNode3DGizmo *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<StandardMaterial3D>::unref() */

void __thiscall Ref<StandardMaterial3D>::unref(Ref<StandardMaterial3D> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey, bool, NavigationRegion3DGizmoPlugin::_EdgeKey,
   HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,
   DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey, bool> >
   >::_lookup_pos(NavigationRegion3DGizmoPlugin::_EdgeKey const&, unsigned int&) const */

undefined8 __thiscall
HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
::_lookup_pos(HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
              *this,_EdgeKey *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    if (*(int *)(this + 0x2c) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar12 = NavigationRegion3DGizmoPlugin::_EdgeKey::hash(param_1);
    uVar16 = CONCAT44(0,uVar1);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar12 == 0) {
      return 0;
    }
    uVar17 = 0;
    do {
      if (uVar13 == uVar12) {
        lVar15 = *(long *)(lVar2 + lVar15 * 8);
        if ((*(float *)(lVar15 + 0x10) == *(float *)param_1) ||
           ((NAN(*(float *)param_1) && (NAN(*(float *)(lVar15 + 0x10)))))) {
          if ((*(float *)(lVar15 + 0x14) == *(float *)(param_1 + 4)) ||
             ((NAN(*(float *)(lVar15 + 0x14)) && (NAN(*(float *)(param_1 + 4)))))) {
            if ((*(float *)(lVar15 + 0x18) == *(float *)(param_1 + 8)) ||
               ((NAN(*(float *)(param_1 + 8)) && (NAN(*(float *)(lVar15 + 0x18)))))) {
              if ((*(float *)(lVar15 + 0x1c) == *(float *)(param_1 + 0xc)) ||
                 ((NAN(*(float *)(lVar15 + 0x1c)) && (NAN(*(float *)(param_1 + 0xc)))))) {
                if ((*(float *)(lVar15 + 0x20) == *(float *)(param_1 + 0x10)) ||
                   ((NAN(*(float *)(param_1 + 0x10)) && (NAN(*(float *)(lVar15 + 0x20)))))) {
                  if ((*(float *)(lVar15 + 0x24) == *(float *)(param_1 + 0x14)) ||
                     ((NAN(*(float *)(param_1 + 0x14)) && (NAN(*(float *)(lVar15 + 0x24)))))) {
                    *param_2 = uVar14;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar16;
      lVar15 = SUB168(auVar5 * auVar9,8);
      uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
      uVar14 = SUB164(auVar5 * auVar9,8);
    } while ((uVar12 != 0) &&
            (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar12 * lVar3, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar16, auVar7._8_8_ = 0,
            auVar7._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
            auVar11._8_8_ = 0, auVar11._0_8_ = uVar16, uVar17 <= SUB164(auVar7 * auVar11,8)));
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey, bool, NavigationRegion3DGizmoPlugin::_EdgeKey,
   HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,
   DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey, bool> >
   >::operator[](NavigationRegion3DGizmoPlugin::_EdgeKey const&) */

undefined1 * __thiscall
HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
::operator[](HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
             *this,_EdgeKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined1 (*pauVar29) [16];
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_80;
  uint local_7c [5];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_80);
  if (cVar24 == '\0') {
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar35 = (ulong)uVar34;
      uVar27 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      pvVar30 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar30;
      if (uVar34 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar30 + uVar39)) &&
           (pvVar30 < (void *)((long)pvVar4 + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar27 * 4) = 0;
            *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar35 != uVar27);
        }
        else {
          memset(pvVar4,0,uVar27);
          memset(pvVar30,0,uVar39);
        }
      }
    }
    local_7c[0] = 0;
    cVar24 = _lookup_pos(this,param_1,local_7c);
    if (cVar24 == '\0') {
      if ((float)uVar34 * __LC24 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar34 = *(uint *)(this + 0x28);
        if (uVar34 == 0x1c) {
          pauVar29 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001053d4;
        }
        uVar27 = (ulong)(uVar34 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar26 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
        if (uVar34 + 1 < 2) {
          uVar27 = 2;
        }
        uVar34 = *(uint *)(hash_table_size_primes + uVar27 * 4);
        uVar35 = (ulong)uVar34;
        *(int *)(this + 0x28) = (int)uVar27;
        pvVar30 = *(void **)(this + 8);
        uVar27 = uVar35 * 4;
        uVar39 = uVar35 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar28 = Memory::alloc_static(uVar27,false);
        *(undefined8 *)(this + 0x10) = uVar28;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar34 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar27))) {
            uVar27 = 0;
            do {
              *(undefined4 *)((long)__s + uVar27 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
              uVar27 = uVar27 + 1;
            } while (uVar35 != uVar27);
          }
          else {
            memset(__s,0,uVar27);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar26 != 0) {
          uVar27 = 0;
          do {
            uVar34 = *(uint *)((long)pvVar4 + uVar27 * 4);
            if (uVar34 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar34 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar32 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar32 * 4);
              iVar31 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                uVar25 = SUB164(auVar9 * auVar17,8);
                uVar36 = uVar28;
                if (uVar25 < uVar37) {
                  *puVar1 = uVar34;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                  uVar36 = *puVar2;
                  *puVar2 = uVar28;
                  uVar34 = uVar38;
                  uVar37 = uVar25;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar31 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar32 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar32 * 4);
                iVar31 = SUB164(auVar10 * auVar18,8);
                uVar28 = uVar36;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
              *puVar1 = uVar34;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar27 = uVar27 + 1;
          } while (uVar26 != uVar27);
          Memory::free_static(pvVar30,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_68 = *(undefined8 *)param_1;
      uStack_60 = *(undefined8 *)(param_1 + 8);
      local_58 = *(undefined8 *)(param_1 + 0x10);
      pauVar29 = (undefined1 (*) [16])operator_new(0x30,"");
      *pauVar29 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar29[1] = local_68;
      *(undefined8 *)(pauVar29[1] + 8) = uStack_60;
      pauVar29[2][8] = 0;
      *(undefined8 *)pauVar29[2] = local_58;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar29;
      }
      else {
        *puVar2 = pauVar29;
        *(undefined8 **)(*pauVar29 + 8) = puVar2;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar29;
      uVar26 = NavigationRegion3DGizmoPlugin::_EdgeKey::hash(param_1);
      lVar5 = *(long *)(this + 0x10);
      uVar34 = 1;
      if (uVar26 != 0) {
        uVar34 = uVar26;
      }
      uVar38 = 0;
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar27 = CONCAT44(0,uVar26);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar34 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar27;
      lVar33 = SUB168(auVar11 * auVar19,8);
      lVar32 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar33 * 4);
      iVar31 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar29;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar27;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar26 + iVar31) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar27;
        uVar37 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (uVar37 < uVar38) {
          *puVar1 = uVar34;
          puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar38 = uVar37;
          uVar34 = uVar3;
        }
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar31 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar27;
        lVar33 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar33 * 4);
        iVar31 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar32 + lVar33 * 8) = pauVar23;
      *puVar1 = uVar34;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_7c[0] * 8);
      pauVar29[2][8] = 0;
    }
  }
  else {
    pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_80 * 8);
  }
LAB_001053d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar29[2] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_001058f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_001058f0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0010585c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001057eb;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010585c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_001057eb:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00105c50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_00105c50;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar11 == lVar4) {
LAB_00105bbc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_00105b54;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00105bbc;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _UNK_00106178;
  uVar7 = __LC41;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_00105b54:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey, bool, NavigationRegion3DGizmoPlugin::_EdgeKey,
   HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,
   DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey, bool> >
   >::~HashMap() */

void __thiscall
HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
::~HashMap(HashMap<NavigationRegion3DGizmoPlugin::_EdgeKey,bool,NavigationRegion3DGizmoPlugin::_EdgeKey,HashMapComparatorDefault<NavigationRegion3DGizmoPlugin::_EdgeKey>,DefaultTypedAllocator<HashMapElement<NavigationRegion3DGizmoPlugin::_EdgeKey,bool>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Face3, DefaultAllocator>::~List() */

void __thiscall List<Face3,DefaultAllocator>::~List(List<Face3,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin() */

void __thiscall
NavigationRegion3DGizmoPlugin::~NavigationRegion3DGizmoPlugin(NavigationRegion3DGizmoPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


