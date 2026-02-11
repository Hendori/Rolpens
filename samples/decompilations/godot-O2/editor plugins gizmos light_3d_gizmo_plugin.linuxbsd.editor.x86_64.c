
/* Light3DGizmoPlugin::get_priority() const */

undefined8 Light3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* Light3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall Light3DGizmoPlugin::has_gizmo(Light3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Light3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* Light3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */

Light3DGizmoPlugin * __thiscall
Light3DGizmoPlugin::get_handle_value
          (Light3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  int iVar2;
  float fVar3;
  
  lVar1 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Light3D::typeinfo,0);
  }
  iVar2 = (int)CONCAT71(in_register_00000009,param_3);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      return this;
    }
    fVar3 = (float)Light3D::get_param(lVar1,7);
    Variant::Variant((Variant *)this,fVar3);
    return this;
  }
  fVar3 = (float)Light3D::get_param(lVar1,4);
  Variant::Variant((Variant *)this,fVar3);
  return this;
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



/* Light3DGizmoPlugin::get_gizmo_name() const */

Light3DGizmoPlugin * __thiscall Light3DGizmoPlugin::get_gizmo_name(Light3DGizmoPlugin *this)

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



/* Light3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

Light3DGizmoPlugin * __thiscall
Light3DGizmoPlugin::get_handle_name
          (Light3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  undefined3 in_register_00000009;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  if (CONCAT31(in_register_00000009,param_3) == 0) {
    String::parse_latin1((StrRange *)this);
  }
  else {
    String::parse_latin1((StrRange *)this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* Light3DGizmoPlugin::_find_closest_angle_to_half_pi_arc(Vector3 const&, Vector3 const&, float,
   Transform3D const&) */

undefined8
Light3DGizmoPlugin::_find_closest_angle_to_half_pi_arc
          (Vector3 *param_1,Vector3 *param_2,float param_3,Transform3D *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  float local_5c [3];
  undefined8 local_50;
  float local_48;
  long local_40;
  
  iVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = _LC10;
  local_ac = _LC11;
  local_a4 = _LC13;
  local_88 = 0.0;
  local_84 = 0.0;
  fVar5 = _LC9;
  fVar4 = 0.0;
  while( true ) {
    fVar2 = local_a8;
    fVar1 = local_ac;
    local_5c[0] = 0.0;
    local_5c[1] = 0.0;
    local_70 = (float)((uint)fVar4 ^ __LC14) * param_3;
    local_5c[2] = 0.0;
    local_50 = 0;
    local_48 = 0.0;
    local_78 = CONCAT44(param_3 * 0.0,fVar5 * param_3);
    local_68 = CONCAT44(param_3 * 0.0,local_a8 * param_3);
    local_60 = (float)((uint)local_ac ^ __LC14) * param_3;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_78,(Vector3 *)&local_68,param_1,param_2,(Vector3 *)local_5c,
               (Vector3 *)&local_50);
    fVar5 = SQRT(((float)local_50 - local_5c[0]) * ((float)local_50 - local_5c[0]) +
                 (local_50._4_4_ - local_5c[1]) * (local_50._4_4_ - local_5c[1]) +
                 (local_48 - local_5c[2]) * (local_48 - local_5c[2]));
    if (fVar5 < local_a4) {
      local_84 = local_5c[2];
      local_88 = local_5c[0];
      local_a4 = fVar5;
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x41) break;
    sincosf((float)((double)iVar3 * __LC15 * __LC16 * __LC17),&local_7c,&local_80);
    local_a8 = local_80;
    local_ac = local_7c;
    fVar5 = fVar2;
    fVar4 = fVar1;
  }
  local_50 = CONCAT44((uint)local_84 ^ __LC14,local_88);
  fVar5 = (float)Vector2::angle();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44((int)((ulong)(_LC18 - (double)fVar5) >> 0x20),
                    (float)(_LC18 - (double)fVar5) * __LC19);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Light3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2 const&) */

void __thiscall
Light3DGizmoPlugin::set_handle
          (Light3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Camera3D *param_4,Vector2 *param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fStack_174;
  float fStack_170;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c [8];
  float local_114;
  undefined1 local_110 [12];
  undefined8 local_104;
  uint local_fc;
  undefined8 local_f8;
  ulong uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  Transform3D local_c8 [36];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  float local_54;
  float local_48;
  long local_30;
  
  lVar2 = *(long *)(param_1 + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&Light3D::typeinfo,0);
  }
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  _local_11c = (**(code **)(*(long *)param_4 + 0x208))(param_4,param_5);
  local_110 = (**(code **)(*(long *)param_4 + 0x200))(param_4,param_5);
  fVar8 = (float)local_110._4_4_ * _LC22 + (float)local_11c._4_4_;
  fVar7 = local_110._8_4_ * _LC22 + local_114;
  fVar4 = _LC22 * (float)local_110._0_4_ + (float)local_11c._0_4_;
  fStack_174 = (float)uStack_70;
  fStack_170 = (float)((ulong)uStack_70 >> 0x20);
  local_e8 = local_114 * fStack_90 +
             (float)local_11c._0_4_ * local_98 + (float)local_11c._4_4_ * fStack_94 + fStack_74;
  fStack_e4 = fStack_84 * local_114 +
              (float)local_11c._0_4_ * fStack_8c + (float)local_11c._4_4_ * local_88 + fStack_174;
  fStack_e0 = local_78 * local_114 +
              (float)local_11c._0_4_ * fStack_80 + (float)local_11c._4_4_ * fStack_84 + fStack_170;
  fStack_dc = fStack_90 * fVar7 + fVar4 * local_98 + fVar8 * fStack_94 + fStack_74;
  local_d8 = CONCAT44(fVar4 * fStack_80 + fVar8 * fStack_7c + fVar7 * local_78 + fStack_170,
                      fVar4 * fStack_8c + fVar8 * local_88 + fVar7 * fStack_84 + fStack_174);
  if (param_2 == 0) {
    if (lVar2 != 0) {
      lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&SpotLight3D::typeinfo,0);
      if (lVar3 == 0) {
        lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&OmniLight3D::typeinfo,0);
        if (lVar3 == 0) goto LAB_00100a30;
        Node3D::get_transform();
        fVar4 = local_60;
        local_68 = 0;
        local_60 = 0.0;
        local_f8 = CONCAT44(local_54,fVar4);
        uStack_f0 = CONCAT44(local_a4 * fVar4 + local_a0 * local_54 + local_9c * local_48,local_48);
        cVar1 = Plane::intersects_ray
                          ((Vector3 *)&local_f8,(Vector3 *)local_11c,(Vector3 *)local_110);
        if (cVar1 == '\0') goto LAB_00100a30;
        fVar8 = local_a0 - local_68._4_4_;
        fVar7 = local_a4 - (float)local_68;
        fVar4 = local_9c - local_60;
        if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)
           ) {
          fVar5 = (float)Node3DEditor::get_translate_snap();
          Math::snapped((double)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar4 * fVar4),(double)fVar5);
        }
      }
      else {
        local_104 = 0;
        local_fc = 0;
        local_f8 = 0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        local_128 = 0;
        local_120 = 0xc5800000;
        local_68 = 0;
        local_60 = 0.0;
        Geometry3D::get_closest_points_between_segments
                  ((Vector3 *)&local_68,(Vector3 *)&local_128,(Vector3 *)&local_e8,
                   (Vector3 *)&fStack_dc,(Vector3 *)&local_104,(Vector3 *)&local_f8);
        fVar4 = (float)(local_fc ^ __LC14);
        if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)
           ) {
          fVar7 = (float)Node3DEditor::get_translate_snap();
          dVar6 = (double)Math::snapped((double)fVar4,(double)fVar7);
          fVar4 = (float)dVar6;
        }
        if (fVar4 <= 0.0) {
          Light3D::set_param(lVar2,4);
          goto LAB_00100a30;
        }
      }
      Light3D::set_param(lVar2,4);
    }
  }
  else if (param_2 == 1) {
    fVar4 = (float)Light3D::get_param(lVar2,4);
    _find_closest_angle_to_half_pi_arc((Vector3 *)&local_e8,(Vector3 *)&fStack_dc,fVar4,local_c8);
    Light3D::set_param(lVar2,7);
  }
LAB_00100a30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Light3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&, bool) */

void __thiscall
Light3DGizmoPlugin::commit_handle
          (Light3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Variant *param_4,bool param_5)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Variant *pVVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  float fVar5;
  Variant *local_108;
  Object *local_100;
  Variant **local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  int local_c8 [8];
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pSVar2 = *(StringName **)(param_1 + 0x1f0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar2 != (StringName *)0x0) {
    pSVar2 = (StringName *)__dynamic_cast(pSVar2,&Object::typeinfo,&Light3D::typeinfo,0);
  }
  if (param_5) {
    Variant::operator_cast_to_float(param_4);
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      Light3D::set_param(pSVar2,(-(uint)(param_2 == 0) & 0xfffffffd) + 7);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      local_100 = (Object *)EditorUndoRedoManager::get_singleton();
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = "";
      String::parse_latin1((StrRange *)&local_e0);
      local_d8 = "Change Light Radius";
      local_e8 = 0;
      local_d0 = 0x13;
      String::parse_latin1((StrRange *)&local_e8);
      TTR((String *)&local_d8,(String *)&local_e8);
      EditorUndoRedoManager::create_action(local_100,(String *)&local_d8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pVVar3 = (Variant *)local_40;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      fVar5 = (float)Light3D::get_param(pSVar2,4);
      StringName::StringName((StringName *)&local_d8,"set_param",false);
      Variant::Variant(local_88,4);
      Variant::Variant(local_70,fVar5);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = local_88;
      pVStack_a0 = local_70;
      EditorUndoRedoManager::add_do_methodp(local_100,pSVar2,(Variant **)&local_d8,(int)&local_a8);
      pVVar4 = pVVar3;
      do {
        pVVar1 = pVVar4 + -0x18;
        pVVar4 = pVVar4 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar4 != local_88);
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_c8,param_4);
      StringName::StringName((StringName *)&local_d8,"set_param",false);
      Variant::Variant(local_88,4);
      Variant::Variant(local_70,(Variant *)local_c8);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = local_88;
      pVStack_a0 = local_70;
      EditorUndoRedoManager::add_undo_methodp(local_100,pSVar2,(Variant **)&local_d8,(int)&local_a8)
      ;
      do {
        pVVar4 = pVVar3 + -0x18;
        pVVar3 = pVVar3 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar3 != local_88);
    }
    else {
      if (param_2 != 1) {
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010127d;
      }
      local_100 = (Object *)EditorUndoRedoManager::get_singleton();
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = "";
      String::parse_latin1((StrRange *)&local_e0);
      local_d8 = "Change Light Radius";
      local_e8 = 0;
      local_d0 = 0x13;
      String::parse_latin1((StrRange *)&local_e8);
      TTR((String *)&local_d8,(String *)&local_e8);
      EditorUndoRedoManager::create_action(local_100,(String *)&local_d8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pVVar3 = (Variant *)local_40;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      fVar5 = (float)Light3D::get_param(pSVar2,7);
      StringName::StringName((StringName *)&local_d8,"set_param",false);
      Variant::Variant(local_88,7);
      Variant::Variant(local_70,fVar5);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = local_88;
      pVStack_a0 = local_70;
      EditorUndoRedoManager::add_do_methodp(local_100,pSVar2,(Variant **)&local_d8,(int)&local_a8);
      pVVar4 = pVVar3;
      do {
        pVVar1 = pVVar4 + -0x18;
        pVVar4 = pVVar4 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
        local_f8 = &local_a8;
        local_108 = local_70;
      } while (pVVar4 != local_88);
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_c8,param_4);
      StringName::StringName((StringName *)&local_d8,"set_param",false);
      Variant::Variant(local_88,7);
      Variant::Variant(local_108,(Variant *)local_c8);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVStack_a0 = local_108;
      local_a8 = local_88;
      EditorUndoRedoManager::add_undo_methodp(local_100,pSVar2,(Variant **)&local_d8,(int)local_f8);
      do {
        pVVar4 = pVVar3 + -0x18;
        pVVar3 = pVVar3 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar3 != local_88);
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(local_100,0));
      return;
    }
  }
LAB_0010127d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Light3DGizmoPlugin::Light3DGizmoPlugin() */

void __thiscall Light3DGizmoPlugin::Light3DGizmoPlugin(Light3DGizmoPlugin *this)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  uStack_50 = _UNK_00106838;
  local_58 = __LC9;
  local_70 = (Object *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00106410;
  local_68 = "lines_primary";
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_70);
  bVar5 = SUB81(&local_58,0);
  EditorNode3DGizmoPlugin::create_material((String *)this,(Color *)&local_70,bVar5,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_70 = (Object *)0x0;
  local_58 = __LC31;
  uStack_50 = _UNK_00106848;
  local_68 = "lines_secondary";
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(Color *)&local_70,bVar5,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_70 = (Object *)0x0;
  local_68 = "lines_billboard";
  local_58 = __LC9;
  uStack_50 = _UNK_00106838;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(Color *)&local_70,bVar5,true,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  local_58 = __LC9;
  uStack_50 = _UNK_00106838;
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar6 + 0x1c8);
  if ((Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)((StrRange *)&local_70,pOVar6,&Light3DGizmoPlugin()::{lambda()#1}::operator()()::sname);
  local_68 = "light_directional_icon";
  local_78 = 0;
  local_60 = 0x16;
  String::parse_latin1((StrRange *)&local_78);
  bVar5 = SUB81((StrRange *)&local_70,0);
  EditorNode3DGizmoPlugin::create_icon_material((String *)this,(Ref *)&local_78,bVar5,(Color *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 == (Object *)0x0) ||
      (cVar3 = RefCounted::unreference(), pOVar2 = local_70, cVar3 == '\0')) ||
     (cVar3 = predelete_handler(local_70), cVar3 == '\0')) {
    cVar3 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar2 + 0x140))();
    Memory::free_static(pOVar2,false);
    cVar3 = RefCounted::unreference();
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  local_58 = __LC9;
  uStack_50 = _UNK_00106838;
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar6 + 0x1c8);
  if ((Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname);
  }
  (*pcVar1)((StrRange *)&local_70,pOVar6,&Light3DGizmoPlugin()::{lambda()#2}::operator()()::sname);
  local_68 = "light_omni_icon";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_icon_material((String *)this,(Ref *)&local_78,bVar5,(Color *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 == (Object *)0x0) ||
      (cVar3 = RefCounted::unreference(), pOVar2 = local_70, cVar3 == '\0')) ||
     (cVar3 = predelete_handler(local_70), cVar3 == '\0')) {
    cVar3 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar2 + 0x140))();
    Memory::free_static(pOVar2,false);
    cVar3 = RefCounted::unreference();
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  local_58 = __LC9;
  uStack_50 = _UNK_00106838;
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar6 + 0x1c8);
  if ((Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname),
     iVar4 != 0)) {
    _scs_create((char *)&Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname);
  }
  (*pcVar1)((StrRange *)&local_70,pOVar6,&Light3DGizmoPlugin()::{lambda()#3}::operator()()::sname);
  local_68 = "light_spot_icon";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_icon_material((String *)this,(Ref *)&local_78,bVar5,(Color *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 == (Object *)0x0) ||
      (cVar3 = RefCounted::unreference(), pOVar2 = local_70, cVar3 == '\0')) ||
     (cVar3 = predelete_handler(local_70), cVar3 == '\0')) {
    cVar3 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    cVar3 = RefCounted::unreference();
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  local_70 = (Object *)0x0;
  local_68 = "handles";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  bVar5 = SUB81((StrRange *)&local_78,0);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar5,(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar6 = local_70, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  local_70 = (Object *)0x0;
  local_68 = "handles_billboard";
  local_78 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar5,(Ref *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar6 = local_70, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Light3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall Light3DGizmoPlugin::redraw(Light3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  long *plVar1;
  Ref *pRVar2;
  EditorNode3DGizmo *pEVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  uint uVar10;
  bool bVar11;
  Color *pCVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float extraout_XMM1_Db;
  undefined4 extraout_XMM1_Db_00;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 local_208;
  undefined8 local_1f8;
  float local_190;
  float local_18c [3];
  Object *local_180;
  Object *local_178;
  undefined8 local_170;
  Object *local_168;
  Ref *local_160;
  Object *local_158;
  undefined8 local_150;
  Object *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  EditorNode3DGizmo *local_128;
  long local_120;
  Ref *local_118;
  long local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined1 local_b8 [12];
  float fStack_ac;
  float local_a8;
  float local_98;
  float fStack_94;
  float afStack_90 [2];
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  lVar7 = *(long *)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 != 0) {
    lVar7 = __dynamic_cast(lVar7,&Object::typeinfo,&Light3D::typeinfo,0);
  }
  uVar18 = Light3D::get_correlated_color();
  if (_LC59 <= extraout_XMM1_Da) {
    fVar20 = powf((float)(((double)extraout_XMM1_Da + __LC61) * __LC62),_LC63);
  }
  else {
    fVar20 = extraout_XMM1_Da * _LC60;
  }
  fVar23 = (float)uVar18;
  fStack_94 = (float)((ulong)uVar18 >> 0x20);
  if (_LC59 <= fStack_94) {
    fStack_94 = powf((float)(((double)fStack_94 + __LC61) * __LC62),_LC63);
  }
  else {
    fStack_94 = _LC60 * fStack_94;
  }
  if (_LC59 <= fVar23) {
    local_98 = powf((float)(((double)fVar23 + __LC61) * __LC62),_LC63);
  }
  else {
    local_98 = fVar23 * _LC60;
  }
  afStack_90[0] = fVar20;
  afStack_90[1] = extraout_XMM1_Db;
  uVar18 = Light3D::get_color();
  if (_LC59 <= extraout_XMM1_Da_00) {
    fVar20 = powf((float)(((double)extraout_XMM1_Da_00 + __LC61) * __LC62),_LC63);
  }
  else {
    fVar20 = extraout_XMM1_Da_00 * _LC60;
  }
  fVar23 = (float)uVar18;
  local_c8._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
  if (_LC59 <= (float)local_c8._4_4_) {
    local_c8._4_4_ = powf((float)(((double)(float)local_c8._4_4_ + __LC61) * __LC62),_LC63);
  }
  else {
    local_c8._4_4_ = _LC60 * (float)local_c8._4_4_;
  }
  if (_LC59 <= fVar23) {
    local_c8._0_4_ = powf((float)(((double)fVar23 + __LC61) * __LC62),_LC63);
  }
  else {
    local_c8._0_4_ = fVar23 * _LC60;
  }
  uStack_c0._4_4_ = extraout_XMM1_Db_00;
  uStack_c0._0_4_ = fVar20;
  _local_d8 = Color::operator*((Color *)local_c8,(Color *)&local_98);
  uVar4 = uStack_d0._4_4_;
  if (_LC64 <= (float)uStack_d0) {
    fVar20 = powf((float)uStack_d0,_LC66);
    fVar20 = (float)((double)fVar20 * __LC67 - __LC61);
  }
  else {
    fVar20 = (float)uStack_d0 * __LC65;
  }
  if (_LC64 <= (float)local_d8._4_4_) {
    fVar23 = powf((float)local_d8._4_4_,_LC66);
    fVar23 = (float)((double)fVar23 * __LC67 - __LC61);
  }
  else {
    fVar23 = (float)local_d8._4_4_ * __LC65;
  }
  if (_LC64 <= (float)local_d8._0_4_) {
    fVar15 = powf((float)local_d8._0_4_,_LC66);
    fVar15 = (float)((double)fVar15 * __LC67 - __LC61);
  }
  else {
    fVar15 = (float)local_d8._0_4_ * __LC65;
  }
  uStack_d0 = CONCAT44(uVar4,fVar20);
  local_d8 = (undefined1  [8])CONCAT44(fVar23,fVar15);
  fVar20 = (float)Color::get_s();
  fVar23 = (float)Color::get_h();
  Color::set_hsv(fVar23,fVar20,_LC9,_LC9);
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  lVar8 = __dynamic_cast(lVar7,&Object::typeinfo,&DirectionalLight3D::typeinfo,0);
  if (lVar8 != 0) {
    if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
      local_128 = param_1;
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
        local_128 = (EditorNode3DGizmo *)0x0;
      }
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"lines_primary");
      EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
      local_148 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_148,local_118);
      if (((local_118 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
        (**(code **)(*(long *)local_118 + 0x140))(local_118);
        Memory::free_static(local_118,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if (((local_128 != (EditorNode3DGizmo *)0x0) &&
          (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
        (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
        Memory::free_static(pEVar3,false);
      }
      bVar11 = false;
      auVar24 = ZEXT416(_LC73);
      local_98 = (float)__LC68;
      fStack_94 = (float)((ulong)__LC68 >> 0x20);
      afStack_90[0] = (float)_UNK_00106858;
      afStack_90[1] = (float)((ulong)_UNK_00106858 >> 0x20);
      local_48 = 0;
      local_88 = __LC69;
      uStack_80 = _UNK_00106868;
      uStack_70 = CONCAT44(__LC74,_UNK_00106878);
      local_110 = 0;
      local_78 = __LC70;
      local_68 = __LC71;
      uStack_60 = _UNK_00106888;
      local_58 = __LC72;
      uStack_50 = _UNK_00106898;
      while( true ) {
        uVar10 = 0;
        dVar19 = (double)bVar11 * __LC15 * __LC16;
        pCVar12 = (Color *)&local_98;
        do {
          local_108 = 0;
          local_100 = 0x3f800000;
          local_a8 = 1.0;
          _local_c8 = auVar24;
          _local_b8 = auVar24;
          Basis::set_axis_angle((Vector3 *)local_c8,(float)dVar19);
          uVar10 = uVar10 + 1;
          fVar21 = *(float *)(pCVar12 + 8) - __LC74;
          fVar20 = (float)*(undefined8 *)pCVar12;
          uVar18 = *(undefined8 *)((Color *)&local_98 + (long)(int)(uVar10 % 7) * 0xc);
          fVar16 = afStack_90[(long)(int)(uVar10 % 7) * 3] - __LC74;
          fVar15 = (float)uVar18;
          fVar22 = (float)((ulong)uVar18 >> 0x20);
          fVar23 = (float)((ulong)*(undefined8 *)pCVar12 >> 0x20);
          local_f0 = (float)local_b8._8_4_ * fVar20 + fStack_ac * fVar23 + local_a8 * fVar21;
          fVar17 = SUB164(_local_c8,0) * fVar20 + (float)local_c8._4_4_ * fVar23 +
                   SUB164(_local_c8,8) * fVar21;
          fVar20 = SUB164(_local_c8,0xc) * fVar20 + (float)local_b8._0_4_ * fVar23 +
                   SUB164(_local_b8,4) * fVar21;
          local_f8 = CONCAT44(fVar20,fVar17);
          Vector<Vector3>::push_back(CONCAT44(fVar20,fVar17),local_f0,(String *)&local_118);
          local_e0 = (float)local_b8._8_4_ * fVar15 + fVar22 * fStack_ac + fVar16 * local_a8;
          local_e8 = CONCAT44(SUB164(_local_c8,0xc) * fVar15 + (float)local_b8._0_4_ * fVar22 +
                              SUB164(_local_b8,4) * fVar16,
                              SUB164(_local_c8,0) * fVar15 + (float)local_c8._4_4_ * fVar22 +
                              SUB164(_local_c8,8) * fVar16);
          Vector<Vector3>::push_back(local_e8,local_e0,(String *)&local_118);
          auVar24 = ZEXT416(_LC73);
          pCVar12 = pCVar12 + 0xc;
        } while (uVar10 != 7);
        if (bVar11) break;
        bVar11 = true;
      }
      EditorNode3DGizmo::add_lines
                ((Vector *)param_1,(Ref *)&local_118,SUB81((Ref<Material> *)&local_148,0),
                 (Color *)0x0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_110);
      if (((local_148 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_148, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    local_128 = param_1;
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      local_128 = (EditorNode3DGizmo *)0x0;
    }
    local_138 = 0;
    local_118 = (Ref *)0x103ff6;
    local_110 = 0x16;
    String::parse_latin1((StrRange *)&local_138);
    EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
    local_148 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_148,local_118);
    if (((local_118 != (Ref *)0x0) &&
        (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    if (((local_128 != (EditorNode3DGizmo *)0x0) &&
        (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    EditorNode3DGizmo::add_unscaled_billboard((Ref *)param_1,_LC75,(Color *)&local_148);
    if (((local_148 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_148, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  lVar8 = __dynamic_cast(lVar7,&Object::typeinfo,&OmniLight3D::typeinfo,0);
  if (lVar8 != 0) {
    if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
      local_128 = param_1;
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
        local_128 = (EditorNode3DGizmo *)0x0;
      }
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"lines_secondary");
      EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
      local_180 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_180,local_118);
      if (((local_118 != (Ref *)0x0) &&
          (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if (((local_128 != (EditorNode3DGizmo *)0x0) &&
          (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
        (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
        Memory::free_static(pEVar3,false);
      }
      local_128 = param_1;
      cVar5 = RefCounted::init_ref();
      if (cVar5 == '\0') {
        local_128 = (EditorNode3DGizmo *)0x0;
      }
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"lines_billboard");
      EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
      local_178 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_178,local_118);
      if (((local_118 != (Ref *)0x0) &&
          (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if (((local_128 != (EditorNode3DGizmo *)0x0) &&
          (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
        (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
        Memory::free_static(pEVar3,false);
      }
      uVar18 = __dynamic_cast(lVar7,&Object::typeinfo,&OmniLight3D::typeinfo,0);
      iVar6 = 6;
      fVar15 = (float)Light3D::get_param(uVar18,4);
      local_150 = 0;
      local_1f8 = _LC58;
      local_140 = 0;
      fVar23 = (float)_LC57;
      fVar20 = _LC57._4_4_;
      while( true ) {
        fStack_94 = 0.0;
        fVar17 = fVar23 * fVar15;
        fVar16 = fVar20 * fVar15;
        fVar23 = (float)local_1f8;
        fVar20 = (float)((ulong)local_1f8 >> 0x20);
        fVar21 = fVar23 * fVar15;
        fVar22 = fVar20 * fVar15;
        local_98 = fVar17;
        afStack_90[0] = fVar16;
        Vector<Vector3>::push_back(fVar17,fVar16,(Ref *)&local_158);
        fStack_94 = 0.0;
        local_98 = fVar21;
        afStack_90[0] = fVar22;
        Vector<Vector3>::push_back(fVar21,fVar22,(Ref *)&local_158);
        local_98 = 0.0;
        fStack_94 = fVar17;
        afStack_90[0] = fVar16;
        Vector<Vector3>::push_back((ulong)(uint)fVar17 << 0x20,fVar16,(Ref *)&local_158);
        local_98 = 0.0;
        fStack_94 = fVar21;
        afStack_90[0] = fVar22;
        Vector<Vector3>::push_back((ulong)(uint)fVar21 << 0x20,fVar22,(Ref *)&local_158);
        afStack_90[0] = 0.0;
        local_98 = fVar17;
        fStack_94 = fVar16;
        Vector<Vector3>::push_back(CONCAT44(fVar16,fVar17),0,(Ref *)&local_158);
        afStack_90[0] = 0.0;
        local_98 = fVar21;
        fStack_94 = fVar22;
        Vector<Vector3>::push_back(CONCAT44(fVar22,fVar21),0,(Ref *)&local_158);
        afStack_90[0] = 0.0;
        local_98 = fVar17;
        fStack_94 = fVar16;
        Vector<Vector3>::push_back(CONCAT44(fVar16,fVar17),0,(Ref *)&local_148);
        afStack_90[0] = 0.0;
        local_98 = fVar21;
        fStack_94 = fVar22;
        Vector<Vector3>::push_back(CONCAT44(fVar22,fVar21),0,(Ref *)&local_148);
        if (iVar6 == 0x16b) break;
        fVar17 = (float)iVar6;
        iVar6 = iVar6 + 3;
        sincosf(fVar17 * __LC76,local_18c,&local_190);
        local_1f8 = CONCAT44(local_190,local_18c[0]);
      }
      EditorNode3DGizmo::add_lines
                ((Vector *)param_1,(Ref *)&local_158,SUB81((Ref<Material> *)&local_180,0),
                 (Color *)0x1);
      EditorNode3DGizmo::add_lines
                ((Vector *)param_1,(Ref *)&local_148,SUB81((Ref<Material> *)&local_178,0),
                 (Color *)0x1);
      fStack_94 = 0.0;
      afStack_90[0] = 0.0;
      local_130 = 0;
      local_98 = fVar15;
      Vector<Vector3>::push_back(fVar15,0,(String *)&local_138);
      local_118 = (Ref *)0x10404f;
      local_120 = 0;
      local_168 = (Object *)0x0;
      local_170 = 0;
      local_110 = 0x11;
      String::parse_latin1((StrRange *)&local_170);
      EditorNode3DGizmoPlugin::get_material((String *)&local_160,(Ref *)this);
      local_118 = (Ref *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_118,local_160);
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_138,(Vector *)&local_118,SUB81(&local_128,0),true);
      if (((local_118 != (Ref *)0x0) &&
          (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
      if (((local_160 != (Ref *)0x0) &&
          (cVar5 = RefCounted::unreference(), pRVar2 = local_160, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_160), cVar5 != '\0')) {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      if (((local_168 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_168, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_168), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      lVar8 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_130);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_140);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_150);
      if (((local_178 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_178, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_178), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      if (((local_180 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_180, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_180), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    local_128 = param_1;
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      local_128 = (EditorNode3DGizmo *)0x0;
    }
    local_138 = 0;
    local_118 = (Ref *)0x104018;
    local_110 = 0xf;
    String::parse_latin1((StrRange *)&local_138);
    EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
    local_148 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_148,local_118);
    if (((local_118 != (Ref *)0x0) &&
        (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    if (((local_128 != (EditorNode3DGizmo *)0x0) &&
        (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    EditorNode3DGizmo::add_unscaled_billboard((Ref *)param_1,_LC75,(Color *)&local_148);
    if (((local_148 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_148, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  lVar8 = __dynamic_cast(lVar7,&Object::typeinfo,&SpotLight3D::typeinfo,0);
  if (lVar8 == 0) goto LAB_0010225c;
  if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
    local_128 = param_1;
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      local_128 = (EditorNode3DGizmo *)0x0;
    }
    local_138 = 0;
    String::parse_latin1((String *)&local_138,"lines_primary");
    EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
    local_180 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_180,local_118);
    if (((local_118 != (Ref *)0x0) &&
        (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    if (((local_128 != (EditorNode3DGizmo *)0x0) &&
        (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_128 = param_1;
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      local_128 = (EditorNode3DGizmo *)0x0;
    }
    local_138 = 0;
    String::parse_latin1((String *)&local_138,"lines_secondary");
    EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
    local_178 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_178,local_118);
    if (((local_118 != (Ref *)0x0) &&
        (cVar5 = RefCounted::unreference(), pRVar2 = local_118, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    if (((local_128 != (EditorNode3DGizmo *)0x0) &&
        (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_130 = 0;
    local_140 = 0;
    uVar18 = __dynamic_cast(lVar7,&Object::typeinfo,&SpotLight3D::typeinfo);
    fVar16 = (float)Light3D::get_param(uVar18,4);
    fVar20 = (float)Light3D::get_param(uVar18,7);
    fVar15 = sinf(fVar20 * __LC76);
    fVar15 = fVar16 * fVar15;
    fVar20 = (float)Light3D::get_param(uVar18,7);
    fVar20 = cosf(fVar20 * __LC76);
    fVar17 = (float)((uint)(fVar20 * fVar16) ^ __LC14);
    iVar14 = 6;
    local_208 = _LC58;
    iVar6 = 0;
    fVar23 = (float)_LC57;
    fVar20 = _LC57._4_4_;
    while( true ) {
      fVar21 = fVar23 * fVar15;
      fVar22 = fVar20 * fVar15;
      local_98 = fVar21;
      fStack_94 = fVar22;
      afStack_90[0] = fVar17;
      Vector<Vector3>::push_back(CONCAT44(fVar22,fVar21),fVar17,(Ref *)&local_148);
      fVar23 = (float)local_208;
      fVar20 = (float)((ulong)local_208 >> 0x20);
      local_98 = fVar23 * fVar15;
      fStack_94 = fVar20 * fVar15;
      afStack_90[0] = fVar17;
      Vector<Vector3>::push_back((Ref *)&local_148);
      if ((uint)(iVar6 * -0x11111111) < 0x11111112) {
        local_98 = fVar21;
        fStack_94 = fVar22;
        afStack_90[0] = fVar17;
        Vector<Vector3>::push_back(CONCAT44(fVar22,fVar21),fVar17,(String *)&local_138);
        local_98 = 0.0;
        fStack_94 = 0.0;
        afStack_90[0] = 0.0;
        Vector<Vector3>::push_back(0,0,(String *)&local_138);
      }
      if (iVar6 + 1 == 0x78) break;
      fVar21 = (float)iVar14;
      iVar14 = iVar14 + 3;
      sincosf(fVar21 * __LC76,local_18c,&local_190);
      local_208 = CONCAT44(local_190,local_18c[0]);
      iVar6 = iVar6 + 1;
    }
    fVar16 = (float)((uint)fVar16 ^ __LC14);
    local_98 = 0.0;
    fStack_94 = 0.0;
    afStack_90[0] = fVar16;
    Vector<Vector3>::push_back(0,fVar16,(Ref *)&local_148);
    local_98 = 0.0;
    fStack_94 = 0.0;
    afStack_90[0] = 0.0;
    Vector<Vector3>::push_back(0,0,(Ref *)&local_148);
    EditorNode3DGizmo::add_lines
              ((Vector *)param_1,(Ref *)&local_148,SUB81((Ref<Material> *)&local_180,0),(Color *)0x0
              );
    EditorNode3DGizmo::add_lines
              ((Vector *)param_1,(Ref *)&local_138,SUB81((Ref<Material> *)&local_178,0),(Color *)0x0
              );
    local_98 = 0.0;
    fStack_94 = 0.0;
    local_120 = 0;
    local_88 = (ulong)(uint)fVar17 << 0x20;
    afStack_90[0] = fVar16;
    afStack_90[1] = fVar15;
    iVar6 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_120,2);
    if (iVar6 == 0) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        if (local_120 == 0) {
          lVar13 = 0;
LAB_0010387a:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar13,"p_index","size()","",
                     false,false);
        }
        else {
          lVar13 = *(long *)(local_120 + -8);
          if (lVar13 <= lVar8) goto LAB_0010387a;
          CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_120);
          *(undefined8 *)(local_120 + lVar7) = *(undefined8 *)((Color *)&local_98 + lVar7);
          *(undefined4 *)(local_120 + 8 + lVar7) = *(undefined4 *)((long)afStack_90 + lVar7);
        }
        lVar7 = lVar7 + 0xc;
        if (lVar8 != 0) break;
        lVar8 = 1;
      } while( true );
    }
    local_110 = 0;
    local_168 = (Object *)0x0;
    local_170 = 0;
    String::parse_latin1((String *)&local_170,"handles");
    EditorNode3DGizmoPlugin::get_material((String *)&local_160,(Ref *)this);
    local_158 = (Object *)0x0;
    Ref<Material>::operator=((Ref<Material> *)&local_158,local_160);
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,(Ref *)&local_128,(Vector *)&local_158,
               SUB81((String *)&local_118,0),false);
    if (((local_158 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_158, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_158), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))();
      Memory::free_static(pOVar9,false);
    }
    if (((local_160 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_160), cVar5 != '\0')) {
      (**(code **)(*(long *)local_160 + 0x140))();
      Memory::free_static(local_160,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
    if (((local_168 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_168, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_168), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    lVar7 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_120);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_130);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_140);
    if (((local_178 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_178, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_178), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    if (((local_180 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar9 = local_180, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_180), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  local_128 = param_1;
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    local_128 = (EditorNode3DGizmo *)0x0;
  }
  local_138 = 0;
  local_118 = (Ref *)0x104037;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_138);
  EditorNode3DGizmoPlugin::get_material((String *)&local_118,(Ref *)this);
  local_148 = (Object *)0x0;
  if (local_118 != (Ref *)0x0) {
    pOVar9 = (Object *)__dynamic_cast(local_118,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar9 != (Object *)0x0) {
      local_148 = pOVar9;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_148 = (Object *)0x0;
      }
      if (local_118 == (Ref *)0x0) goto LAB_00102206;
    }
    cVar5 = RefCounted::unreference();
    pRVar2 = local_118;
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)local_118), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
  }
LAB_00102206:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (((local_128 != (EditorNode3DGizmo *)0x0) &&
      (cVar5 = RefCounted::unreference(), pEVar3 = local_128, cVar5 != '\0')) &&
     (cVar5 = predelete_handler((Object *)local_128), cVar5 != '\0')) {
    (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
    Memory::free_static(pEVar3,false);
  }
  EditorNode3DGizmo::add_unscaled_billboard((Ref *)param_1,_LC75,(Color *)&local_148);
  if (((local_148 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar9 = local_148, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
LAB_0010225c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Light3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall Light3DGizmoPlugin::is_class_ptr(Light3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1066,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1067,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Light3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 Light3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Light3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 Light3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Light3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void Light3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Light3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 Light3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Light3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Light3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Light3DGizmoPlugin::_notificationv(int, bool) */

void Light3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Light3DGizmoPlugin::~Light3DGizmoPlugin() */

void __thiscall Light3DGizmoPlugin::~Light3DGizmoPlugin(Light3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106410;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* Light3DGizmoPlugin::~Light3DGizmoPlugin() */

void __thiscall Light3DGizmoPlugin::~Light3DGizmoPlugin(Light3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106410;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* Light3DGizmoPlugin::_get_class_namev() const */

undefined8 * Light3DGizmoPlugin::_get_class_namev(void)

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
LAB_00103e93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103e93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Light3DGizmoPlugin");
      goto LAB_00103efe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Light3DGizmoPlugin");
LAB_00103efe:
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



/* Light3DGizmoPlugin::get_class() const */

void Light3DGizmoPlugin::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_00104324;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104324:
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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Light3DGizmoPlugin::Light3DGizmoPlugin() [clone .cold] */

void __thiscall Light3DGizmoPlugin::Light3DGizmoPlugin(Light3DGizmoPlugin *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
            if (lVar3 == 0) goto LAB_0010450f;
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
LAB_0010450f:
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
    if (cVar6 != '\0') goto LAB_001045c3;
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
              if (lVar3 == 0) goto LAB_0010469b;
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
LAB_0010469b:
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
      if (cVar6 != '\0') goto LAB_001045c3;
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
        if (cVar6 != '\0') goto LAB_001045c3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001047d5;
    }
  }
LAB_001045c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001047d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Light3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall Light3DGizmoPlugin::is_class(Light3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010486f;
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
LAB_0010486f:
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
    if (cVar6 != '\0') goto LAB_00104923;
  }
  cVar6 = String::operator==(param_1,"Light3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_001049e3;
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
LAB_001049e3:
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
      if (cVar6 != '\0') goto LAB_00104923;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00104a8c;
    }
  }
LAB_00104923:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104a8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Light3DGizmoPlugin::_initialize_classv() */

void Light3DGizmoPlugin::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
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
    local_58 = "Light3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x12;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_001050cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001050cd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001050ee;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001050ee:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
LAB_00105498:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105498;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001054ba;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001054ba:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
LAB_00105885:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105885;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001058a7;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001058a7:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
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



/* Light3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Light3DGizmoPlugin::_get_property_listv(Light3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "Light3DGizmoPlugin";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Light3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00105c75:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105c75;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105c97;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105c97:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
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
  StringName::StringName((StringName *)&local_78,"Light3DGizmoPlugin",false);
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
LAB_00106290:
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
  if (lVar7 == 0) goto LAB_00106290;
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
LAB_001061fc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010618b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001061fc;
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
LAB_0010618b:
  puVar9[-1] = param_1;
  return 0;
}



/* Light3DGizmoPlugin::Light3DGizmoPlugin() */

void Light3DGizmoPlugin::_GLOBAL__sub_I_Light3DGizmoPlugin(void)

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
/* Light3DGizmoPlugin::~Light3DGizmoPlugin() */

void __thiscall Light3DGizmoPlugin::~Light3DGizmoPlugin(Light3DGizmoPlugin *this)

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


