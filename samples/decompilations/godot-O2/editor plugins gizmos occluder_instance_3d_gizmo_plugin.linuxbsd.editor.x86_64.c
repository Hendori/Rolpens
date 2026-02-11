
/* OccluderInstance3DGizmoPlugin::get_priority() const */

undefined8 OccluderInstance3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* OccluderInstance3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
OccluderInstance3DGizmoPlugin::has_gizmo(OccluderInstance3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* OccluderInstance3DGizmoPlugin::get_gizmo_name() const */

OccluderInstance3DGizmoPlugin * __thiscall
OccluderInstance3DGizmoPlugin::get_gizmo_name(OccluderInstance3DGizmoPlugin *this)

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



/* OccluderInstance3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */

EditorNode3DGizmo *
OccluderInstance3DGizmoPlugin::get_handle_value(EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  float fVar4;
  Object *local_48;
  undefined1 local_3c [12];
  long local_30;
  
  lVar1 = *(long *)(CONCAT71(in_register_00000011,param_3) + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    __dynamic_cast(lVar1,&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
  }
  OccluderInstance3D::get_occluder();
  if (local_48 == (Object *)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    goto LAB_00100181;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&SphereOccluder3D::typeinfo,0);
  if (pOVar3 == (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar3 = (Object *)0x0;
      }
      local_3c = BoxOccluder3D::get_size();
      Variant::Variant((Variant *)param_1,(Vector3 *)local_3c);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      goto LAB_00100168;
    }
    pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&QuadOccluder3D::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar3 = (Object *)0x0;
      }
      local_3c._0_8_ = QuadOccluder3D::get_size();
      Variant::Variant((Variant *)param_1,(Vector2 *)local_3c);
      cVar2 = RefCounted::unreference();
      goto joined_r0x001002a3;
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar3 = (Object *)0x0;
    }
    fVar4 = (float)SphereOccluder3D::get_radius();
    Variant::Variant((Variant *)param_1,fVar4);
    cVar2 = RefCounted::unreference();
joined_r0x001002a3:
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
LAB_00100168:
    if (local_48 == (Object *)0x0) goto LAB_00100181;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
LAB_00100181:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* OccluderInstance3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

EditorNode3DGizmo *
OccluderInstance3DGizmoPlugin::get_handle_name(EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  Object *local_40;
  
  lVar3 = *(long *)(CONCAT71(in_register_00000011,param_3) + 0x1f0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    __dynamic_cast(lVar3,&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
  }
  OccluderInstance3D::get_occluder();
  if (local_40 == (Object *)0x0) {
LAB_00100480:
    *(undefined8 *)param_1 = 0;
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    lVar3 = __dynamic_cast(local_40,&Object::typeinfo,&SphereOccluder3D::typeinfo,0);
    if (lVar3 != 0) {
      *(undefined8 *)param_1 = 0;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001003da;
    }
    lVar3 = __dynamic_cast(local_40,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
    if (lVar3 == 0) {
      lVar3 = __dynamic_cast(local_40,&Object::typeinfo,&QuadOccluder3D::typeinfo,0);
      if (lVar3 == 0) goto LAB_00100480;
    }
    *(undefined8 *)param_1 = 0;
    String::parse_latin1((StrRange *)param_1);
  }
LAB_001003da:
  if (local_40 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_40);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OccluderInstance3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2
   const&) */

void __thiscall
OccluderInstance3DGizmoPlugin::set_handle
          (OccluderInstance3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Camera3D *param_4,Vector2 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  Object *pOVar6;
  long lVar7;
  Vector3 *pVVar8;
  long in_FS_OFFSET;
  float fVar9;
  double dVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  float fStack_194;
  float fStack_190;
  Object *local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined1 local_104 [8];
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
  }
  OccluderInstance3D::get_occluder();
  if (local_138 == (Object *)0x0) goto LAB_00100be8;
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  _local_110 = (**(code **)(*(long *)param_4 + 0x208))(param_4,param_5);
  fVar12 = SUB124(_local_110,8);
  uVar2 = local_110._0_4_;
  uVar3 = local_110._4_4_;
  _local_104 = (**(code **)(*(long *)param_4 + 0x200))(param_4,param_5);
  fVar13 = _LC7 * (float)local_104._4_4_ + (float)uVar3;
  fVar9 = _LC7 * (float)local_104._0_4_ + (float)uVar2;
  cVar5 = *(char *)(Node3DEditor::singleton + 0xe00);
  fVar14 = _LC7 * SUB124(_local_104,8) + fVar12;
  cVar1 = *(char *)(Node3DEditor::singleton + 0xe01);
  fStack_194 = (float)uStack_50;
  fStack_190 = (float)((ulong)uStack_50 >> 0x20);
  local_c8 = (float)uVar2 * local_78 + (float)uVar3 * local_74 + fVar12 * local_70 + fStack_54;
  fStack_c4 = local_6c * (float)uVar2 + local_68 * (float)uVar3 + fVar12 * fStack_64 + fStack_194;
  fStack_c0 = (float)uVar2 * local_60 + fStack_5c * (float)uVar3 + fVar12 * local_58 + fStack_190;
  fStack_bc = local_78 * fVar9 + local_74 * fVar13 + fVar14 * local_70 + fStack_54;
  local_b8 = CONCAT44(fVar9 * local_60 + fVar13 * fStack_5c + fVar14 * local_58 + fStack_190,
                      fVar9 * local_6c + fVar13 * local_68 + fVar14 * fStack_64 + fStack_194);
  fVar9 = (float)Node3DEditor::get_translate_snap();
  if (local_138 == (Object *)0x0) goto LAB_00100be8;
  pOVar6 = (Object *)__dynamic_cast(local_138,&Object::typeinfo,&SphereOccluder3D::typeinfo,0);
  if (pOVar6 != (Object *)0x0) {
    cVar4 = RefCounted::reference();
    local_f8 = 0;
    local_f0 = 0;
    if (cVar4 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    local_e8 = 0;
    local_e0 = 0;
    local_120 = 0x45800000;
    local_118 = 0.0;
    local_d8 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_d8,(Vector3 *)&local_120,(Vector3 *)&local_c8,(Vector3 *)&fStack_bc
               ,(Vector3 *)&local_f8,(Vector3 *)&local_e8);
    fVar12 = (float)local_f8;
    if (cVar5 != cVar1) {
      dVar10 = (double)Math::snapped((double)(float)local_f8,(double)fVar9);
      fVar12 = (float)dVar10;
    }
    if ((double)fVar12 < _LC10) {
      fVar12 = _LC6;
    }
    SphereOccluder3D::set_radius(fVar12);
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    if (local_138 == (Object *)0x0) goto LAB_00100be8;
  }
  lVar7 = __dynamic_cast(local_138,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
  if (lVar7 != 0) {
    lVar7 = (long)param_2;
    local_128 = 0.0;
    local_130 = 0;
    *(undefined4 *)((long)&local_130 + lVar7 * 4) = 0x3f800000;
    pVVar8 = (Vector3 *)__dynamic_cast(local_138,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
    if (pVVar8 != (Vector3 *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pVVar8 = (Vector3 *)0x0;
      }
    }
    local_118 = _LC7 * local_128;
    local_120 = CONCAT44((float)((ulong)local_130 >> 0x20) * _UNK_001054ac,(float)local_130 * _LC7);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_d8,(Vector3 *)&local_120,(Vector3 *)&local_c8,(Vector3 *)&fStack_bc
               ,(Vector3 *)&local_f8,(Vector3 *)&local_e8);
    fVar12 = *(float *)((long)&local_f8 + lVar7 * 4);
    fVar12 = fVar12 + fVar12;
    if (cVar5 != cVar1) {
      dVar10 = (double)Math::snapped((double)fVar12,(double)fVar9);
      fVar12 = (float)dVar10;
    }
    if ((double)fVar12 < _LC10) {
      fVar12 = _LC6;
    }
    auVar15 = BoxOccluder3D::get_size();
    local_d8 = auVar15._0_8_;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,auVar15._8_4_);
    *(float *)((long)&local_d8 + lVar7 * 4) = fVar12;
    BoxOccluder3D::set_size(pVVar8);
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)pVVar8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pVVar8 + 0x140))(pVVar8);
        Memory::free_static(pVVar8,false);
      }
    }
    if (local_138 == (Object *)0x0) goto LAB_00100be8;
  }
  pOVar6 = (Object *)__dynamic_cast(local_138,&Object::typeinfo,&QuadOccluder3D::typeinfo,0);
  if (pOVar6 == (Object *)0x0) {
    cVar5 = RefCounted::unreference();
  }
  else {
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_e8 = 0;
      pOVar6 = (Object *)0x0;
      local_e0 = 0;
      local_d8 = __LC13;
      uStack_d0 = __LC11;
      cVar4 = Plane::intersects_segment
                        ((Vector3 *)&local_d8,(Vector3 *)&local_c8,(Vector3 *)&fStack_bc);
      if (cVar4 != '\0') {
LAB_00100b54:
        if (param_2 == 2) {
          local_f8._4_4_ = (float)((ulong)local_e8 >> 0x20);
          local_f8._4_4_ = local_f8._4_4_ + local_f8._4_4_;
          uVar11 = CONCAT44(local_f8._4_4_,(float)local_e8 + (float)local_e8);
          if (cVar5 != cVar1) {
            local_f8 = uVar11;
            uVar11 = Vector2::snappedf(fVar9);
            local_f8._4_4_ = (float)(uVar11 >> 0x20);
            uVar11 = uVar11 & 0xffffffff;
          }
          if (local_f8._4_4_ <= _LC6) {
            local_f8._4_4_ = _LC6;
          }
          fVar9 = (float)uVar11;
          if ((float)uVar11 <= _LC6) {
            fVar9 = _LC6;
          }
          local_f8 = CONCAT44(local_f8._4_4_,fVar9);
          QuadOccluder3D::set_size((Vector2 *)pOVar6);
        }
        else {
          fVar12 = *(float *)((long)&local_e8 + (long)param_2 * 4);
          if (cVar5 != cVar1) {
            dVar10 = (double)Math::snapped((double)fVar12,(double)fVar9);
            fVar12 = (float)dVar10;
          }
          if ((double)fVar12 < _LC10) {
            fVar12 = _LC6;
          }
          local_f8 = QuadOccluder3D::get_size();
          *(float *)((long)&local_f8 + (long)param_2 * 4) = fVar12 + fVar12;
          QuadOccluder3D::set_size((Vector2 *)pOVar6);
        }
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar6);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
    }
    else {
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = __LC13;
      uStack_d0 = __LC11;
      cVar4 = Plane::intersects_segment
                        ((Vector3 *)&local_d8,(Vector3 *)&local_c8,(Vector3 *)&fStack_bc);
      if (cVar4 != '\0') goto LAB_00100b54;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar6);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    if (local_138 == (Object *)0x0) goto LAB_00100be8;
    cVar5 = RefCounted::unreference();
  }
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(local_138);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)local_138 + 0x140))(local_138);
      Memory::free_static(local_138,false);
    }
  }
LAB_00100be8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* OccluderInstance3DGizmoPlugin::OccluderInstance3DGizmoPlugin() */

void __thiscall
OccluderInstance3DGizmoPlugin::OccluderInstance3DGizmoPlugin(OccluderInstance3DGizmoPlugin *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  local_70 = (Object *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00105108;
  local_68 = "editors/3d_gizmos/gizmo_colors/occluder";
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_48);
  local_58[0] = Variant::operator_cast_to_Color((Variant *)local_48);
  local_68 = "line_material";
  local_78 = 0;
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(Color *)&local_78,SUB81(local_58,0),false,false);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  pOVar3 = local_70;
  if (local_70 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar3 + -0x10),false);
    }
  }
  local_70 = (Object *)0x0;
  local_68 = "handles";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_78,0),(Ref *)0x0);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OccluderInstance3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&,
   bool) */

void __thiscall
OccluderInstance3DGizmoPlugin::commit_handle
          (OccluderInstance3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Variant *param_4,bool param_5)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 uVar5;
  Object *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  Variant *local_98 [4];
  undefined1 local_78 [2] [12];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
  }
  OccluderInstance3D::get_occluder();
  if (local_e0 == (Object *)0x0) goto LAB_00101afb;
  pOVar2 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&SphereOccluder3D::typeinfo,0);
  if (pOVar2 == (Object *)0x0) {
LAB_001015d7:
    pOVar2 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
      }
      if (param_5) {
        local_78[0] = Variant::operator_cast_to_Vector3(param_4);
        BoxOccluder3D::set_size((Vector3 *)pOVar2);
        cVar1 = RefCounted::unreference();
        goto joined_r0x00101ba3;
      }
      pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d0 = 0;
      local_c0 = 0;
      local_c8 = "";
      String::parse_latin1((StrRange *)&local_d0);
      local_c8 = "Change Box Shape Size";
      local_d8 = 0;
      local_c0 = 0x15;
      String::parse_latin1((StrRange *)&local_d8);
      TTR((String *)&local_c8,(String *)&local_d8);
      EditorUndoRedoManager::create_action(pOVar3,(String *)&local_c8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_b4 = BoxOccluder3D::get_size();
      StringName::StringName((StringName *)&local_c8,"set_size",false);
      local_a8 = local_b4;
      Variant::Variant((Variant *)local_78,(Vector3 *)local_a8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)(Variant *)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_98,param_4);
      StringName::StringName((StringName *)&local_c8,"set_size",false);
      Variant::Variant((Variant *)local_78,(Variant *)local_98);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_a8._0_8_ = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)(Vector3 *)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
      else {
        Variant::_clear_internal();
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      if (local_e0 == (Object *)0x0) goto LAB_00101afb;
    }
    pOVar2 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&QuadOccluder3D::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
      }
      if (param_5) {
        local_78[0]._0_8_ = Variant::operator_cast_to_Vector2(param_4);
        QuadOccluder3D::set_size((Vector2 *)pOVar2);
        cVar1 = RefCounted::unreference();
      }
      else {
        pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
        local_d0 = 0;
        local_c0 = 0;
        local_c8 = "";
        String::parse_latin1((StrRange *)&local_d0);
        local_c8 = "Change Box Shape Size";
        local_d8 = 0;
        local_c0 = 0x15;
        String::parse_latin1((StrRange *)&local_d8);
        TTR((String *)&local_c8,(String *)&local_d8);
        EditorUndoRedoManager::create_action(pOVar3,(String *)&local_c8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        uVar5 = QuadOccluder3D::get_size();
        StringName::StringName((StringName *)&local_c8,"set_size",false);
        local_a8._0_8_ = uVar5;
        Variant::Variant((Variant *)local_78,(Vector2 *)local_a8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)(Variant *)local_98);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_98,param_4);
        StringName::StringName((StringName *)&local_c8,"set_size",false);
        Variant::Variant((Variant *)local_78,(Variant *)local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_a8._0_8_ = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)(Vector2 *)local_a8);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
          EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
        }
        else {
          Variant::_clear_internal();
          EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
        }
        cVar1 = RefCounted::unreference();
      }
      goto joined_r0x00101ba3;
    }
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar2 = (Object *)0x0;
    }
    if (!param_5) {
      pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d0 = 0;
      local_c0 = 0;
      local_c8 = "";
      String::parse_latin1((StrRange *)&local_d0);
      local_c8 = "Change Sphere Shape Radius";
      local_d8 = 0;
      local_c0 = 0x1a;
      String::parse_latin1((StrRange *)&local_d8);
      TTR((String *)&local_c8,(String *)&local_d8);
      EditorUndoRedoManager::create_action(pOVar3,(String *)&local_c8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      fVar4 = (float)SphereOccluder3D::get_radius();
      StringName::StringName((StringName *)&local_c8,"set_radius",false);
      Variant::Variant((Variant *)local_78,fVar4);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)(Variant *)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_98,param_4);
      StringName::StringName((StringName *)&local_c8,"set_radius",false);
      Variant::Variant((Variant *)local_78,(Variant *)local_98);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_a8._0_8_ = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar3,(StringName *)pOVar2,(Variant **)&local_c8,(int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
      else {
        Variant::_clear_internal();
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      if (local_e0 == (Object *)0x0) goto LAB_00101afb;
      goto LAB_001015d7;
    }
    fVar4 = Variant::operator_cast_to_float(param_4);
    SphereOccluder3D::set_radius(fVar4);
    cVar1 = RefCounted::unreference();
joined_r0x00101ba3:
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    if (local_e0 == (Object *)0x0) goto LAB_00101afb;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_e0);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
      Memory::free_static(local_e0,false);
    }
  }
LAB_00101afb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OccluderInstance3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
OccluderInstance3DGizmoPlugin::redraw
          (OccluderInstance3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  long *plVar1;
  EditorNode3DGizmo *pEVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined4 uVar11;
  undefined8 uVar12;
  Ref *local_e0;
  Object *local_c0;
  Object *local_b8;
  undefined8 local_b0;
  Ref local_a8 [8];
  long local_a0;
  EditorNode3DGizmo *local_98;
  undefined4 *local_90;
  Object *local_88;
  long local_80;
  ulong local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&OccluderInstance3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  OccluderInstance3D::get_occluder();
  if (local_c0 == (Object *)0x0) goto LAB_00102549;
  Occluder3D::get_debug_lines();
  if (local_a0 != 0) {
    local_98 = param_1;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      local_98 = (EditorNode3DGizmo *)0x0;
    }
    local_b0 = 0;
    local_80 = 0xd;
    local_88 = (Object *)0x102cc4;
    String::parse_latin1((StrRange *)&local_b0);
    EditorNode3DGizmoPlugin::get_material((String *)&local_88,(Ref *)this);
    local_b8 = (Object *)0x0;
    if (local_88 != (Object *)0x0) {
      pOVar6 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Material::typeinfo);
      if (pOVar6 != (Object *)0x0) {
        local_b8 = pOVar6;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_b8 = (Object *)0x0;
        }
        if (local_88 == (Object *)0x0) goto LAB_00101f3c;
      }
      cVar4 = RefCounted::unreference();
      pOVar6 = local_88;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
LAB_00101f3c:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (((local_98 != (EditorNode3DGizmo *)0x0) &&
        (cVar4 = RefCounted::unreference(), pEVar2 = local_98, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_98), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
      Memory::free_static(pEVar2,false);
    }
    local_68 = CONCAT44(_LC11,_LC11);
    uStack_60 = CONCAT44(_LC11,_LC11);
    EditorNode3DGizmo::add_lines((Vector *)param_1,local_a8,SUB81(&local_b8,0),(Color *)0x0);
    EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
    if (((local_b8 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar6 = local_b8, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_b8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  local_e0 = (Ref *)&local_98;
  local_98 = (EditorNode3DGizmo *)0x0;
  local_88 = (Object *)0x102cd2;
  local_b0 = 0;
  local_80 = 7;
  String::parse_latin1((StrRange *)&local_b0);
  EditorNode3DGizmoPlugin::get_material((String *)&local_88,(Ref *)this);
  local_b8 = (Object *)0x0;
  if (local_88 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Material::typeinfo);
    if (pOVar6 != (Object *)0x0) {
      local_b8 = pOVar6;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_b8 = (Object *)0x0;
      }
      if (local_88 == (Object *)0x0) goto LAB_00102095;
    }
    cVar4 = RefCounted::unreference();
    pOVar6 = local_88;
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00102095:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (((local_98 != (EditorNode3DGizmo *)0x0) &&
      (cVar4 = RefCounted::unreference(), pEVar2 = local_98, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_98), cVar4 != '\0')) {
    (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
    Memory::free_static(pEVar2,false);
  }
  if (local_c0 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(local_c0,&Object::typeinfo,&SphereOccluder3D::typeinfo);
    bVar7 = SUB81((String *)&local_88,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      uVar11 = SphereOccluder3D::get_radius();
      local_90 = (undefined4 *)0x0;
      iVar5 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_90,1);
      if (iVar5 == 0) {
        if (local_90 == (undefined4 *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(local_90 + -2);
          if (0 < lVar8) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_90);
            *local_90 = uVar11;
            *(undefined8 *)(local_90 + 1) = 0;
            goto LAB_00102158;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar8,"p_index","size()","",false,false
                  );
      }
LAB_00102158:
      local_80 = 0;
      EditorNode3DGizmo::add_handles((Vector *)param_1,local_e0,(Vector *)&local_b8,bVar7,false);
      lVar8 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      puVar3 = local_90;
      if (local_90 == (undefined4 *)0x0) {
LAB_001021a8:
        cVar4 = RefCounted::unreference();
      }
      else {
        LOCK();
        plVar1 = (long *)(local_90 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001021a8;
        local_90 = (undefined4 *)0x0;
        Memory::free_static(puVar3 + -4,false);
        cVar4 = RefCounted::unreference();
      }
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      if (local_c0 == (Object *)0x0) goto LAB_001024f0;
    }
    pOVar6 = (Object *)__dynamic_cast(local_c0,&Object::typeinfo,&BoxOccluder3D::typeinfo,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      local_90 = (undefined4 *)0x0;
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      lVar8 = 0;
      do {
        local_6c = 0;
        local_74 = 0;
        BoxOccluder3D::get_size();
        *(float *)((long)&local_74 + lVar8) = _LC37 * *(float *)((long)&local_68 + lVar8);
        local_68 = local_74;
        uStack_60 = CONCAT44((int)((ulong)uStack_60 >> 0x20),local_6c);
        if (local_90 == (undefined4 *)0x0) {
          lVar9 = 1;
        }
        else {
          lVar9 = *(long *)(local_90 + -2) + 1;
        }
        iVar5 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_90,lVar9);
        if (iVar5 == 0) {
          if (local_90 == (undefined4 *)0x0) {
            lVar10 = -1;
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)(local_90 + -2);
            lVar10 = lVar9 + -1;
            if (-1 < lVar10) {
              CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_90);
              *(ulong *)(local_90 + lVar10 * 3) = local_68;
              *(undefined4 *)((long)(local_90 + lVar10 * 3) + 8) = (undefined4)uStack_60;
              goto LAB_001022f2;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar9,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_001022f2:
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      local_80 = 0;
      EditorNode3DGizmo::add_handles((Vector *)param_1,local_e0,(Vector *)&local_b8,bVar7,false);
      lVar8 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      puVar3 = local_90;
      if (local_90 == (undefined4 *)0x0) {
LAB_00102350:
        cVar4 = RefCounted::unreference();
      }
      else {
        LOCK();
        plVar1 = (long *)(local_90 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00102350;
        local_90 = (undefined4 *)0x0;
        Memory::free_static(puVar3 + -4,false);
        cVar4 = RefCounted::unreference();
      }
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      if (local_c0 == (Object *)0x0) goto LAB_001024f0;
    }
    pOVar6 = (Object *)__dynamic_cast(local_c0,&Object::typeinfo,&QuadOccluder3D::typeinfo,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      uVar12 = QuadOccluder3D::get_size();
      uStack_60 = 0;
      local_54 = 0;
      local_58 = (float)((ulong)uVar12 >> 0x20) * _LC37;
      local_48 = 0;
      local_50 = (float)uVar12 * _LC37;
      local_90 = (undefined4 *)0x0;
      local_68 = (ulong)(uint)local_50;
      local_4c = local_58;
      iVar5 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_90,3);
      if (iVar5 == 0) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          if (local_90 == (undefined4 *)0x0) {
            lVar10 = 0;
LAB_001027a3:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar10,"p_index","size()","",
                       false,false);
          }
          else {
            lVar10 = *(long *)(local_90 + -2);
            if (lVar10 <= lVar9) goto LAB_001027a3;
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_90);
            *(undefined8 *)((long)local_90 + lVar8) = *(undefined8 *)((long)&local_68 + lVar8);
            *(undefined4 *)((long)local_90 + lVar8 + 8) = *(undefined4 *)((long)&uStack_60 + lVar8);
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0xc;
        } while (lVar9 != 3);
      }
      local_80 = 0;
      EditorNode3DGizmo::add_handles((Vector *)param_1,local_e0,(Vector *)&local_b8,bVar7,false);
      lVar8 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      puVar3 = local_90;
      if (local_90 == (undefined4 *)0x0) {
LAB_001024dd:
        cVar4 = RefCounted::unreference();
      }
      else {
        LOCK();
        plVar1 = (long *)(local_90 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001024dd;
        local_90 = (undefined4 *)0x0;
        Memory::free_static(puVar3 + -4,false);
        cVar4 = RefCounted::unreference();
      }
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_001024f0:
  if (((local_b8 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar6 = local_b8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_b8), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (((local_c0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_c0), cVar4 != '\0')) {
    (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
    Memory::free_static(local_c0,false);
  }
LAB_00102549:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* OccluderInstance3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
OccluderInstance3DGizmoPlugin::is_class_ptr(OccluderInstance3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1053,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1053,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1053,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1053,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1053,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OccluderInstance3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 OccluderInstance3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OccluderInstance3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 OccluderInstance3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OccluderInstance3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void OccluderInstance3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OccluderInstance3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 OccluderInstance3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OccluderInstance3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
OccluderInstance3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OccluderInstance3DGizmoPlugin::_notificationv(int, bool) */

void OccluderInstance3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin() */

void __thiscall
OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin(OccluderInstance3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105108;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin() */

void __thiscall
OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin(OccluderInstance3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105108;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* OccluderInstance3DGizmoPlugin::_get_class_namev() const */

undefined8 * OccluderInstance3DGizmoPlugin::_get_class_namev(void)

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
LAB_00102b53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102b53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "OccluderInstance3DGizmoPlugin");
      goto LAB_00102bbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OccluderInstance3DGizmoPlugin");
LAB_00102bbe:
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



/* OccluderInstance3DGizmoPlugin::get_class() const */

void OccluderInstance3DGizmoPlugin::get_class(void)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00102f94;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00102f94:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
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
LAB_00103198:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103198;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001031b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001031b6:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010352f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010352f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001035e3;
  }
  cVar6 = String::operator==(param_1,"Resource");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_001036bb;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001036bb:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001035e3;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_001035e3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001037f5;
    }
  }
LAB_001035e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001037f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OccluderInstance3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
OccluderInstance3DGizmoPlugin::is_class(OccluderInstance3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010388f;
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
LAB_0010388f:
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
    if (cVar6 != '\0') goto LAB_00103943;
  }
  cVar6 = String::operator==(param_1,"OccluderInstance3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_00103a03;
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
LAB_00103a03:
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
      if (cVar6 != '\0') goto LAB_00103943;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00103aac;
    }
  }
LAB_00103943:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103aac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OccluderInstance3DGizmoPlugin::_initialize_classv() */

void OccluderInstance3DGizmoPlugin::_initialize_classv(void)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    local_58 = "OccluderInstance3DGizmoPlugin";
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
LAB_00104115:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104115;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104137;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104137:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00104538:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104538;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104555;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104555:
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



/* OccluderInstance3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OccluderInstance3DGizmoPlugin::_get_property_listv
          (OccluderInstance3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "OccluderInstance3DGizmoPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OccluderInstance3DGizmoPlugin";
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
LAB_00104988:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104988;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001049a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001049a5:
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
  StringName::StringName((StringName *)&local_78,"OccluderInstance3DGizmoPlugin",false);
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
LAB_00104fd0:
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
  if (lVar7 == 0) goto LAB_00104fd0;
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
LAB_00104f3c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00104ecb;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00104f3c;
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
LAB_00104ecb:
  puVar9[-1] = param_1;
  return 0;
}



/* OccluderInstance3DGizmoPlugin::OccluderInstance3DGizmoPlugin() */

void OccluderInstance3DGizmoPlugin::_GLOBAL__sub_I_OccluderInstance3DGizmoPlugin(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin() */

void __thiscall
OccluderInstance3DGizmoPlugin::~OccluderInstance3DGizmoPlugin(OccluderInstance3DGizmoPlugin *this)

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


