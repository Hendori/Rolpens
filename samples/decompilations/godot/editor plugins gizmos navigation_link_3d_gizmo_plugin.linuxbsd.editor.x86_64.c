
/* NavigationLink3DGizmoPlugin::get_priority() const */

undefined8 NavigationLink3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
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



/* NavigationLink3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
NavigationLink3DGizmoPlugin::has_gizmo(NavigationLink3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&NavigationLink3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* NavigationLink3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */

NavigationLink3DGizmoPlugin * __thiscall
NavigationLink3DGizmoPlugin::get_handle_value
          (NavigationLink3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  lVar1 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&NavigationLink3D::typeinfo,0);
  }
  if ((int)CONCAT71(in_register_00000009,param_3) == 0) {
    local_2c = *(undefined8 *)(lVar1 + 0x554);
    local_24 = *(undefined4 *)(lVar1 + 0x55c);
  }
  else {
    local_2c = *(undefined8 *)(lVar1 + 0x548);
    local_24 = *(undefined4 *)(lVar1 + 0x550);
  }
  local_44 = local_2c;
  local_3c = local_24;
  local_38 = local_2c;
  local_30 = local_24;
  Variant::Variant((Variant *)this,(Vector3 *)&local_44);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationLink3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2
   const&) */

void __thiscall
NavigationLink3DGizmoPlugin::set_handle
          (NavigationLink3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Camera3D *param_4,Vector2 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM1_Da;
  undefined4 extraout_XMM1_Da_00;
  float fVar6;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  Vector3 local_d8 [8];
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_60;
  float local_54;
  float local_48;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&NavigationLink3D::typeinfo,0);
  }
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  Node3D::get_global_transform();
  local_108 = (**(code **)(*(long *)param_4 + 0x208))(param_4,param_5);
  local_100 = extraout_XMM1_Da;
  local_fc = (**(code **)(*(long *)param_4 + 0x200))(param_4,param_5);
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x554);
    fVar5 = *(float *)(lVar3 + 0x55c);
    local_f0._0_4_ = (float)uVar1;
    local_f0._4_4_ = (float)((ulong)uVar1 >> 0x20);
    fVar4 = (float)local_f0;
    fVar6 = local_f0._4_4_;
    local_f0 = uVar1;
    local_e8 = fVar5;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x548);
    fVar5 = *(float *)(lVar3 + 0x550);
    local_e4._0_4_ = (float)uVar1;
    local_e4._4_4_ = (float)((ulong)uVar1 >> 0x20);
    fVar4 = (float)local_e4;
    fVar6 = local_e4._4_4_;
    local_e4 = uVar1;
    local_dc = fVar5;
  }
  uStack_d0 = CONCAT44((fVar4 * local_c8 + fVar6 * local_c4 + fVar5 * local_c0 + local_a4) *
                       local_60 +
                       (local_bc * fVar4 + local_b8 * fVar6 + local_b4 * fVar5 + local_a0) *
                       local_54 +
                       (local_b0 * fVar4 + local_ac * fVar6 + local_a8 * fVar5 + local_9c) *
                       local_48,local_48);
  local_f4 = extraout_XMM1_Da_00;
  cVar2 = Plane::intersects_ray(local_d8,(Vector3 *)&local_108,(Vector3 *)&local_fc);
  if (cVar2 != '\0') {
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar5 = (float)Node3DEditor::get_translate_snap();
      Vector3::snapf(fVar5);
    }
    local_6c = local_78 * 0.0 + local_80 * 0.0 + local_7c * 0.0 + local_6c;
    local_74 = fStack_94 * 0.0 + local_98 * 0.0 + local_90 * 0.0 + local_74;
    if (param_2 == 0) {
      NavigationLink3D::set_start_position(local_74,local_6c,lVar3);
    }
    else if (param_2 == 1) {
      NavigationLink3D::set_end_position(local_74,local_6c,lVar3);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationLink3DGizmoPlugin::get_gizmo_name() const */

NavigationLink3DGizmoPlugin * __thiscall
NavigationLink3DGizmoPlugin::get_gizmo_name(NavigationLink3DGizmoPlugin *this)

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



/* NavigationLink3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

NavigationLink3DGizmoPlugin * __thiscall
NavigationLink3DGizmoPlugin::get_handle_name
          (NavigationLink3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined3 in_register_00000009;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  if (CONCAT31(in_register_00000009,param_3) == 0) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Start Location";
    local_40 = 0xe;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "End Location";
    local_40 = 0xc;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)this,(String *)&local_58);
  lVar3 = local_58;
  lVar2 = local_50;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      lVar2 = local_50;
    }
  }
  local_50 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* NavigationLink3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&,
   bool) */

void __thiscall
NavigationLink3DGizmoPlugin::commit_handle
          (NavigationLink3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Variant *param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  StringName *pSVar3;
  Object *pOVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  Variant *local_108;
  Variant **local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  Variant *local_d8;
  undefined4 local_d0;
  Variant *local_cc;
  undefined4 local_c4;
  Variant *local_c0;
  Variant *local_b4;
  Variant *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [2] [12];
  undefined1 local_78 [2] [12];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar3 = *(StringName **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar3 != (StringName *)0x0) {
    pSVar3 = (StringName *)__dynamic_cast(pSVar3,&Object::typeinfo,&NavigationLink3D::typeinfo,0);
  }
  if (param_5) {
    if (param_2 == 0) {
      local_98[0] = Variant::operator_cast_to_Vector3(param_4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        NavigationLink3D::set_start_position(SUB128(local_98[0],0),SUB124(local_98[0],8),pSVar3);
        return;
      }
    }
    else {
      local_78[0] = Variant::operator_cast_to_Vector3(param_4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        NavigationLink3D::set_end_position(SUB128(local_78[0],0),SUB124(local_78[0],8),pSVar3);
        return;
      }
    }
  }
  else {
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_f0 = 0;
    local_e8 = "";
    local_e0 = 0;
    if (param_2 == 0) {
      String::parse_latin1((StrRange *)&local_f0);
      local_e8 = "Change Start Position";
      local_f8 = 0;
      local_e0 = 0x15;
      String::parse_latin1((StrRange *)&local_f8);
      TTR((String *)&local_e8,(String *)&local_f8);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_e8,0,0,0);
      pcVar5 = local_e8;
      if (local_e8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_f8;
      if (local_f8 != 0) {
        LOCK();
        plVar1 = (long *)(local_f8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_d0 = *(undefined4 *)(pSVar3 + 0x55c);
      local_d8 = *(Variant **)(pSVar3 + 0x554);
      local_c0 = local_d8;
      StringName::StringName((StringName *)&local_e8,"set_start_position",false);
      local_a8 = local_d8;
      local_a0 = local_d0;
      Variant::Variant((Variant *)local_78,(Vector3 *)&local_a8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0]._0_8_ = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar4,pSVar3,(Variant **)&local_e8,(int)(Variant *)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_98,param_4);
      pcVar5 = "set_start_position";
    }
    else {
      String::parse_latin1((StrRange *)&local_f0);
      local_e8 = "Change End Position";
      local_f8 = 0;
      local_e0 = 0x13;
      String::parse_latin1((StrRange *)&local_f8);
      TTR((String *)&local_e8,(String *)&local_f8);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_e8,0,0,0);
      pcVar5 = local_e8;
      if (local_e8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_f8;
      if (local_f8 != 0) {
        LOCK();
        plVar1 = (long *)(local_f8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f8 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar2 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_c4 = *(undefined4 *)(pSVar3 + 0x550);
      local_cc = *(Variant **)(pSVar3 + 0x548);
      local_b4 = local_cc;
      StringName::StringName((StringName *)&local_e8,"set_end_position",false);
      local_a8 = local_cc;
      local_a0 = local_c4;
      Variant::Variant((Variant *)local_78,(Vector3 *)&local_a8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0]._0_8_ = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar3,(Variant **)&local_e8,(int)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      local_108 = (Variant *)local_98;
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
      Variant::Variant(local_108,param_4);
      pcVar5 = "set_end_position";
    }
    local_100 = &local_a8;
    StringName::StringName((StringName *)&local_e8,pcVar5,false);
    Variant::Variant((Variant *)local_78,(Variant *)local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar3,(Variant **)&local_e8,(int)local_100);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98[0]._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationLink3DGizmoPlugin::NavigationLink3DGizmoPlugin() */

void __thiscall
NavigationLink3DGizmoPlugin::NavigationLink3DGizmoPlugin(NavigationLink3DGizmoPlugin *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00105508;
  NavigationServer3D::get_singleton();
  local_48[0] = NavigationServer3D::get_debug_navigation_link_connection_color();
  local_58 = "navigation_link_material";
  local_60 = (Object *)0x0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(Color *)&local_60,SUB81(local_48,0),false,false);
  pOVar3 = local_60;
  if (local_60 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar3 + -0x10),false);
    }
  }
  NavigationServer3D::get_singleton();
  local_48[0] = NavigationServer3D::get_debug_navigation_link_connection_disabled_color();
  local_58 = "navigation_link_material_disabled";
  local_60 = (Object *)0x0;
  local_50 = 0x21;
  String::parse_latin1((StrRange *)&local_60);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(Color *)&local_60,SUB81(local_48,0),false,false);
  pOVar3 = local_60;
  if (local_60 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar3 + -0x10),false);
    }
  }
  local_60 = (Object *)0x0;
  local_58 = "handles";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_68,0),(Ref *)0x0);
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
  if (local_60 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_60;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_60);
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



/* NavigationLink3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
NavigationLink3DGizmoPlugin::redraw(NavigationLink3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  EditorNode3DGizmo *pEVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  Object *pOVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  Object *local_d0;
  Object *local_c8;
  Object *local_c0;
  long local_b8;
  undefined8 *local_b0;
  EditorNode3DGizmo *local_a8;
  long local_a0;
  Object *local_98;
  long local_90;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined1 local_70 [12];
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  lVar8 = *(long *)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 != 0) {
    lVar8 = __dynamic_cast(lVar8,&Object::typeinfo,&NavigationLink3D::typeinfo,0);
  }
  Node3D::get_world_3d();
  uVar9 = World3D::get_navigation_map();
  if (((local_98 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    Memory::free_static(local_98,false);
  }
  plVar10 = (long *)NavigationServer3D::get_singleton();
  fVar16 = (float)(**(code **)(*plVar10 + 0x1d8))(plVar10,uVar9);
  plVar10 = (long *)NavigationServer3D::get_singleton();
  local_70 = (**(code **)(*plVar10 + 0x178))(plVar10,uVar9);
  if ((float)local_70._4_4_ <= (float)local_70._0_4_) {
    cVar5 = ((float)local_70._0_4_ < local_70._8_4_) * '\x02';
  }
  else {
    cVar5 = ((float)local_70._4_4_ < local_70._8_4_) + '\x01';
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x554);
  fVar21 = *(float *)(lVar8 + 0x55c);
  local_64._0_4_ = (float)uVar9;
  fVar22 = (float)local_64;
  local_64._4_4_ = (float)((ulong)uVar9 >> 0x20);
  fVar34 = local_64._4_4_;
  local_80 = (float)*(undefined8 *)(lVar8 + 0x548);
  fVar31 = local_80;
  fStack_7c = (float)((ulong)*(undefined8 *)(lVar8 + 0x548) >> 0x20);
  fVar35 = fStack_7c;
  fVar27 = *(float *)(lVar8 + 0x550);
  uVar2 = CONCAT44(fVar27,fStack_7c);
  uVar18 = CONCAT44(local_80,fVar21);
  local_a8 = param_1;
  local_78 = fVar27;
  local_64 = uVar9;
  local_5c = fVar21;
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    local_a8 = (EditorNode3DGizmo *)0x0;
  }
  local_b8 = 0;
  local_98 = (Object *)0x102f18;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_b8);
  EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
  local_d0 = (Object *)0x0;
  if (local_98 != (Object *)0x0) {
    pOVar11 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar11 != (Object *)0x0) {
      local_d0 = pOVar11;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_d0 = (Object *)0x0;
      }
      if (local_98 == (Object *)0x0) goto LAB_00101373;
    }
    cVar6 = RefCounted::unreference();
    pOVar11 = local_98;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
LAB_00101373:
  lVar15 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar10 = (long *)(local_b8 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
      (cVar6 = RefCounted::unreference(), pEVar4 = local_a8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)local_a8), cVar6 != '\0')) {
    (**(code **)(*(long *)pEVar4 + 0x140))(pEVar4);
    Memory::free_static(pEVar4,false);
  }
  local_a8 = param_1;
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    local_a8 = (EditorNode3DGizmo *)0x0;
  }
  local_b8 = 0;
  local_98 = (Object *)0x105038;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
  local_c8 = (Object *)0x0;
  if (local_98 != (Object *)0x0) {
    pOVar11 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar11 != (Object *)0x0) {
      local_c8 = pOVar11;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_c8 = (Object *)0x0;
      }
      if (local_98 == (Object *)0x0) goto LAB_00101479;
    }
    cVar6 = RefCounted::unreference();
    pOVar11 = local_98;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
LAB_00101479:
  lVar15 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar10 = (long *)(local_b8 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
      (cVar6 = RefCounted::unreference(), pEVar4 = local_a8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)local_a8), cVar6 != '\0')) {
    (**(code **)(*(long *)pEVar4 + 0x140))(pEVar4);
    Memory::free_static(pEVar4,false);
  }
  local_a8 = (EditorNode3DGizmo *)0x0;
  local_98 = (Object *)0x102f31;
  local_b8 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_b8);
  EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
  local_c0 = (Object *)0x0;
  if (local_98 != (Object *)0x0) {
    pOVar11 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar11 != (Object *)0x0) {
      local_c0 = pOVar11;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_c0 = (Object *)0x0;
      }
      if (local_98 == (Object *)0x0) goto LAB_00101573;
    }
    cVar6 = RefCounted::unreference();
    pOVar11 = local_98;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
LAB_00101573:
  lVar15 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar10 = (long *)(local_b8 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
      (cVar6 = RefCounted::unreference(), pEVar4 = local_a8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)local_a8), cVar6 != '\0')) {
    (**(code **)(*(long *)pEVar4 + 0x140))(pEVar4);
    Memory::free_static(pEVar4,false);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  local_b0 = (undefined8 *)0x0;
  CowData<Vector3>::resize<false>
            ((CowData<Vector3> *)&local_b0,
             (-(ulong)(*(char *)(lVar8 + 0x540) == '\0') & 0xfffffffffffffffc) + 0x8a);
  CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_b0);
  puVar3 = local_b0;
  local_1ec = 0.0;
  local_b0[2] = uVar2;
  fVar17 = _LC25;
  puVar1 = local_b0 + 0xc3;
  *local_b0 = uVar9;
  local_b0[1] = uVar18;
  puVar13 = local_b0 + 3;
  fVar20 = fVar16;
  fVar26 = 0.0;
  while( true ) {
    local_1ec = _LC27 + local_1ec;
    fVar23 = fVar16 * fVar17;
    fVar19 = fVar16 * fVar16 - fVar23 * fVar23;
    if (fVar19 < 0.0) {
      fVar19 = sqrtf(fVar19);
    }
    else {
      fVar19 = SQRT(fVar19);
    }
    if (cVar5 == '\x01') {
      fVar28 = fVar21 + fVar26;
      fVar43 = fVar34 + 0.0;
      fVar41 = fVar35 + 0.0;
      fVar29 = fVar22 - fVar23;
      fVar32 = fVar31 - fVar19;
      fVar30 = fVar27 + fVar19;
      fVar17 = fVar21 + fVar19;
      fVar33 = fVar21 - fVar19;
      fVar36 = fVar43;
      fVar38 = fVar43;
      fVar39 = fVar43;
      fVar37 = fVar41;
      fVar46 = fVar41;
      fVar24 = fVar43;
      fVar44 = fVar21 - fVar23;
      fVar40 = fVar22 - fVar19;
      fVar25 = fVar41;
      fVar42 = fVar43;
      fVar45 = fVar27 - fVar23;
      local_1e8 = fVar22 + fVar20;
      local_1e4 = fVar43;
      local_1e0 = fVar27 - fVar19;
      local_1dc = fVar43;
      local_1d8 = fVar43;
      local_1d4 = fVar41;
      local_1d0 = fVar41;
      local_1cc = fVar43;
      local_1c8 = fVar41;
      local_1c4 = fVar41;
      local_1c0 = fVar41;
      local_1bc = fVar21 - fVar19;
      local_1b8 = fVar41;
      local_1b4 = fVar41;
      local_1b0 = fVar41;
      local_1ac = fVar43;
      local_1a8 = fVar23 + fVar22;
      local_1a4 = fVar22 - fVar20;
      local_1a0 = fVar21 - fVar26;
      local_19c = fVar31 - fVar26;
      local_198 = fVar31 - fVar23;
      local_194 = fVar31 - fVar20;
      local_190 = fVar23 + fVar27;
      local_18c = fVar27 + fVar20;
      local_188 = fVar27 + fVar26;
      local_184 = fVar23 + fVar21;
      local_180 = fVar21 + fVar20;
      local_17c = fVar43;
      local_178 = fVar43;
      local_174 = fVar31 + fVar19;
      local_170 = fVar31 + fVar26;
      local_16c = fVar31 + fVar23;
      local_168 = fVar31 + fVar20;
      local_164 = fVar22 + fVar19;
      local_160 = fVar22 + fVar26;
      local_15c = fVar27 - fVar20;
      local_158 = fVar27 - fVar19;
      local_154 = fVar27 - fVar26;
      local_150 = fVar21 - fVar20;
      local_14c = fVar22 - fVar26;
      local_148 = fVar41;
      local_144 = fVar41;
      local_140 = fVar43;
    }
    else if (cVar5 == '\x02') {
      fVar28 = fVar21 + 0.0;
      fVar40 = fVar22 - fVar19;
      local_1ac = fVar34 + fVar26;
      fVar38 = fVar34 + fVar19;
      local_1cc = fVar34 - fVar20;
      fVar39 = fVar34 - fVar23;
      fVar43 = fVar34 + fVar20;
      local_1e8 = fVar22 + fVar20;
      local_1a8 = fVar23 + fVar22;
      fVar36 = fVar34 + fVar23;
      local_1a4 = fVar22 - fVar20;
      fVar46 = fVar35 + fVar26;
      fVar29 = fVar22 - fVar23;
      fVar30 = fVar27 + 0.0;
      local_160 = fVar22 + fVar26;
      local_1e4 = fVar34 - fVar26;
      local_164 = fVar22 + fVar19;
      fVar24 = fVar34 - fVar19;
      local_14c = fVar22 - fVar26;
      local_168 = fVar31 + fVar20;
      local_16c = fVar31 + fVar23;
      fVar37 = fVar35 + fVar19;
      local_194 = fVar31 - fVar20;
      local_198 = fVar31 - fVar23;
      fVar41 = fVar35 - fVar19;
      local_1d0 = fVar35 - fVar26;
      local_1b4 = fVar35 + fVar20;
      local_170 = fVar31 + fVar26;
      local_1b8 = fVar35 + fVar23;
      local_174 = fVar31 + fVar19;
      local_19c = fVar31 - fVar26;
      fVar25 = fVar35 - fVar23;
      local_1d4 = fVar35 - fVar20;
      fVar32 = fVar31 - fVar19;
      fVar17 = fVar28;
      fVar33 = fVar28;
      fVar44 = fVar28;
      fVar42 = fVar39;
      fVar45 = fVar30;
      local_1e0 = fVar30;
      local_1dc = fVar43;
      local_1d8 = fVar36;
      local_1c8 = fVar25;
      local_1c4 = local_1d4;
      local_1c0 = local_1d0;
      local_1bc = fVar28;
      local_1b0 = fVar46;
      local_1a0 = fVar28;
      local_190 = fVar30;
      local_18c = fVar30;
      local_188 = fVar30;
      local_184 = fVar28;
      local_180 = fVar28;
      local_17c = local_1cc;
      local_178 = local_1ac;
      local_15c = fVar30;
      local_158 = fVar30;
      local_154 = fVar30;
      local_150 = fVar28;
      local_148 = local_1b4;
      local_144 = local_1b8;
      local_140 = local_1e4;
    }
    else {
      fVar28 = fVar21 + fVar26;
      local_1e4 = fVar34 - fVar20;
      fVar29 = fVar22 + 0.0;
      fVar43 = fVar34 + fVar26;
      local_178 = fVar34 + fVar20;
      fVar36 = fVar34 + fVar19;
      fVar38 = fVar34 + fVar23;
      fVar46 = fVar35 + fVar20;
      fVar30 = fVar27 + fVar19;
      fVar32 = fVar31 + 0.0;
      local_1cc = fVar34 - fVar26;
      fVar41 = fVar35 + fVar23;
      local_1d0 = fVar35 - fVar20;
      local_1c4 = fVar35 + fVar26;
      local_144 = fVar35 + fVar19;
      local_1d4 = fVar35 - fVar26;
      fVar25 = fVar35 - fVar19;
      fVar17 = fVar21 + fVar19;
      fVar33 = fVar21 - fVar19;
      fVar39 = fVar36;
      fVar37 = fVar41;
      fVar24 = fVar38;
      fVar44 = fVar21 - fVar23;
      fVar40 = fVar29;
      fVar42 = fVar34 - fVar19;
      fVar45 = fVar27 - fVar23;
      local_1e8 = fVar29;
      local_1e0 = fVar30;
      local_1dc = local_1cc;
      local_1d8 = fVar34 - fVar19;
      local_1c8 = local_144;
      local_1c0 = fVar46;
      local_1bc = fVar21 + fVar19;
      local_1b8 = fVar25;
      local_1b4 = local_1d4;
      local_1b0 = local_1d0;
      local_1ac = local_1e4;
      local_1a8 = fVar29;
      local_1a4 = fVar29;
      local_1a0 = fVar21 - fVar26;
      local_19c = fVar32;
      local_198 = fVar32;
      local_194 = fVar32;
      local_190 = fVar23 + fVar27;
      local_18c = fVar27 + fVar20;
      local_188 = fVar27 + fVar26;
      local_184 = fVar23 + fVar21;
      local_180 = fVar21 + fVar20;
      local_17c = fVar43;
      local_174 = fVar32;
      local_170 = fVar32;
      local_16c = fVar32;
      local_168 = fVar32;
      local_164 = fVar29;
      local_160 = fVar29;
      local_15c = fVar27 - fVar20;
      local_158 = fVar27 - fVar19;
      local_154 = fVar27 - fVar26;
      local_150 = fVar21 - fVar20;
      local_14c = fVar29;
      local_148 = local_1c4;
      local_140 = local_178;
    }
    *(float *)(puVar13 + 2) = fVar38;
    *(float *)((long)puVar13 + 0x14) = fVar17;
    *puVar13 = CONCAT44(local_178,local_1e8);
    puVar13[1] = CONCAT44(local_1a8,fVar28);
    *(float *)((long)puVar13 + 0x1c) = local_1ac;
    *(float *)(puVar13 + 3) = local_1a4;
    *(float *)(puVar13 + 6) = local_1e8;
    *(float *)((long)puVar13 + 0x34) = local_140;
    *(float *)(puVar13 + 4) = fVar28;
    *(float *)((long)puVar13 + 0x24) = fVar29;
    *(ulong *)((long)puVar13 + 0x3c) = CONCAT44(fVar24,local_1a8);
    *(ulong *)((long)puVar13 + 0x44) = CONCAT44(local_1a4,fVar33);
    *(float *)(puVar13 + 5) = fVar38;
    *(float *)((long)puVar13 + 0x2c) = fVar17;
    *(float *)(puVar13 + 7) = local_1a0;
    *(ulong *)((long)puVar13 + 0x4c) = CONCAT44(local_1a0,local_1e4);
    *(ulong *)((long)puVar13 + 0x54) = CONCAT44(fVar24,fVar29);
    *(ulong *)((long)puVar13 + 0x5c) = CONCAT44(local_160,local_1bc);
    *(ulong *)((long)puVar13 + 100) = CONCAT44(local_180,fVar43);
    *(ulong *)((long)puVar13 + 0x6c) = CONCAT44(fVar36,local_164);
    *(ulong *)((long)puVar13 + 0x74) = CONCAT44(local_14c,local_184);
    *(ulong *)((long)puVar13 + 0x7c) = CONCAT44(local_180,local_1dc);
    *(ulong *)((long)puVar13 + 0x84) = CONCAT44(local_1d8,fVar40);
    *(ulong *)((long)puVar13 + 0x8c) = CONCAT44(local_160,local_184);
    *(ulong *)((long)puVar13 + 0x94) = CONCAT44(local_150,local_17c);
    *(ulong *)((long)puVar13 + 0x9c) = CONCAT44(fVar39,local_164);
    *(ulong *)((long)puVar13 + 0xa4) = CONCAT44(local_14c,fVar44);
    *(ulong *)((long)puVar13 + 0xac) = CONCAT44(local_150,local_1cc);
    *(ulong *)((long)puVar13 + 0xb4) = CONCAT44(fVar42,fVar40);
    *(ulong *)((long)puVar13 + 0xbc) = CONCAT44(local_168,fVar44);
    *(ulong *)((long)puVar13 + 0xc4) = CONCAT44(local_188,fVar46);
    *(ulong *)((long)puVar13 + 0xcc) = CONCAT44(fVar37,local_16c);
    *(ulong *)((long)puVar13 + 0xd4) = CONCAT44(local_194,fVar30);
    *(ulong *)((long)puVar13 + 0xdc) = CONCAT44(local_188,local_1b0);
    *(ulong *)((long)puVar13 + 0xe4) = CONCAT44(fVar37,local_198);
    *(ulong *)((long)puVar13 + 0xec) = CONCAT44(local_168,fVar30);
    *(ulong *)((long)puVar13 + 0xf4) = CONCAT44(local_154,local_1c0);
    *(ulong *)((long)puVar13 + 0xfc) = CONCAT44(fVar41,local_16c);
    *(ulong *)((long)puVar13 + 0x104) = CONCAT44(local_194,local_158);
    *(ulong *)((long)puVar13 + 0x10c) = CONCAT44(local_154,local_1d0);
    *(ulong *)((long)puVar13 + 0x114) = CONCAT44(fVar41,local_198);
    *(float *)((long)puVar13 + 0x17c) = fVar45;
    *(ulong *)((long)puVar13 + 0x11c) = CONCAT44(local_170,local_1e0);
    *(ulong *)((long)puVar13 + 0x124) = CONCAT44(local_18c,local_148);
    *(ulong *)((long)puVar13 + 300) = CONCAT44(local_144,local_174);
    *(ulong *)((long)puVar13 + 0x134) = CONCAT44(local_19c,local_190);
    *(ulong *)((long)puVar13 + 0x13c) = CONCAT44(local_18c,local_1b4);
    *(ulong *)((long)puVar13 + 0x144) = CONCAT44(local_1b8,fVar32);
    *(ulong *)((long)puVar13 + 0x14c) = CONCAT44(local_170,local_190);
    *(ulong *)((long)puVar13 + 0x154) = CONCAT44(local_15c,local_1c4);
    *(ulong *)((long)puVar13 + 0x15c) = CONCAT44(local_1c8,local_174);
    *(ulong *)((long)puVar13 + 0x164) = CONCAT44(local_19c,fVar45);
    *(ulong *)((long)puVar13 + 0x16c) = CONCAT44(local_15c,local_1d4);
    *(ulong *)((long)puVar13 + 0x174) = CONCAT44(fVar25,fVar32);
    if (puVar13 + 0x30 == puVar1) break;
    fVar17 = cosf(_LC27 + local_1ec);
    puVar13 = puVar13 + 0x30;
    fVar20 = fVar23;
    fVar26 = fVar19;
  }
  fVar33 = fVar27 - fVar21;
  fVar26 = fVar35 - fVar34;
  fVar19 = fVar31 - fVar22;
  fVar23 = fVar33 * _LC28 + fVar21;
  fVar20 = fVar26 * _LC28 + fVar34;
  fVar16 = _LC28 * fVar19 + fVar22;
  fVar17 = fVar19 * fVar19 + fVar26 * fVar26 + fVar33 * fVar33;
  if (fVar17 == 0.0) {
    fVar46 = 0.0;
    fVar37 = 0.0;
    fVar39 = fVar37;
    fVar36 = fVar23;
    fVar17 = fVar16;
    fVar38 = fVar20;
  }
  else {
    fVar17 = SQRT(fVar17);
    fVar46 = fVar33 / fVar17;
    fVar44 = fVar26 / fVar17;
    fVar17 = fVar19 / fVar17;
    fVar36 = fVar17 - fVar44 * 0.0;
    fVar24 = fVar44 * 0.0 - fVar46;
    fVar38 = fVar46 * 0.0 - fVar17 * 0.0;
    fVar37 = (fVar36 - fVar46) * _LC30;
    fVar39 = (fVar38 - fVar44) * _LC30;
    fVar36 = ((float)((uint)fVar36 ^ _LC29) - fVar46) * _LC30 + fVar23;
    fVar46 = (fVar24 - fVar17) * _LC30;
    fVar38 = ((float)((uint)fVar38 ^ _LC29) - fVar44) * _LC30 + fVar20;
    fVar17 = ((float)(_LC29 ^ (uint)fVar24) - fVar17) * _LC30 + fVar16;
  }
  puVar3[0xc3] = CONCAT44(fVar20,fVar16);
  puVar3[0xc4] = CONCAT44(fVar46 + fVar16,fVar23);
  puVar3[0xc5] = CONCAT44(fVar37 + fVar23,fVar20 + fVar39);
  puVar3[0xc6] = CONCAT44(fVar20,fVar16);
  puVar3[199] = CONCAT44(fVar17,fVar23);
  puVar3[200] = CONCAT44(fVar36,fVar38);
  if (*(char *)(lVar8 + 0x540) != '\0') {
    fVar20 = fVar33 * _LC31 + fVar21;
    fVar21 = fVar21 - fVar27;
    fVar16 = fVar26 * _LC31 + fVar34;
    fVar34 = fVar34 - fVar35;
    fVar27 = fVar19 * _LC31 + fVar22;
    fVar22 = fVar22 - fVar31;
    fVar31 = fVar22 * fVar22 + fVar34 * fVar34 + fVar21 * fVar21;
    if (fVar31 == 0.0) {
      fVar17 = 0.0;
      fVar31 = 0.0;
      fVar35 = 0.0;
      fVar22 = fVar27;
      fVar21 = fVar20;
      fVar34 = fVar16;
    }
    else {
      fVar31 = SQRT(fVar31);
      fVar21 = fVar21 / fVar31;
      fVar34 = fVar34 / fVar31;
      fVar22 = fVar22 / fVar31;
      fVar17 = fVar22 - fVar34 * 0.0;
      fVar26 = fVar34 * 0.0 - fVar21;
      fVar19 = fVar21 * 0.0 - fVar22 * 0.0;
      fVar35 = (fVar17 - fVar21) * _LC30;
      fVar31 = (fVar19 - fVar34) * _LC30;
      fVar21 = ((float)((uint)fVar17 ^ _LC29) - fVar21) * _LC30 + fVar20;
      fVar17 = (fVar26 - fVar22) * _LC30;
      fVar34 = ((float)((uint)fVar19 ^ _LC29) - fVar34) * _LC30 + fVar16;
      fVar22 = ((float)(_LC29 ^ (uint)fVar26) - fVar22) * _LC30 + fVar27;
    }
    puVar3[0xcd] = CONCAT44(fVar22,fVar20);
    puVar3[0xce] = CONCAT44(fVar21,fVar34);
    puVar3[0xc9] = CONCAT44(fVar16,fVar27);
    puVar3[0xca] = CONCAT44(fVar17 + fVar27,fVar20);
    puVar3[0xcb] = CONCAT44(fVar35 + fVar20,fVar16 + fVar31);
    puVar3[0xcc] = CONCAT44(fVar16,fVar27);
  }
  uVar12 = SUB81(&local_c8,0);
  local_58 = CONCAT44(_LC33,_LC33);
  uStack_50 = CONCAT44(_LC33,_LC33);
  if (*(char *)(lVar8 + 0x528) != '\0') {
    uVar12 = SUB81(&local_d0,0);
  }
  EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_b8,(bool)uVar12,(Color *)0x0);
  EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
  local_90 = 0;
  local_a0 = 0;
  local_58 = uVar9;
  uStack_50 = uVar18;
  local_48 = uVar2;
  iVar7 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_a0,2);
  if (iVar7 == 0) {
    lVar8 = 0;
    lVar15 = 0;
    do {
      if (local_a0 == 0) {
        lVar14 = 0;
LAB_0010286e:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar14,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar14 = *(long *)(local_a0 + -8);
        if (lVar14 <= lVar15) goto LAB_0010286e;
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_a0);
        *(undefined8 *)(local_a0 + lVar8) = *(undefined8 *)((long)&local_58 + lVar8);
        *(undefined4 *)(local_a0 + 8 + lVar8) = *(undefined4 *)((long)&uStack_50 + lVar8);
      }
      lVar8 = lVar8 + 0xc;
      if (lVar15 != 0) break;
      lVar15 = 1;
    } while( true );
  }
  EditorNode3DGizmo::add_handles
            ((Vector *)param_1,(Ref *)&local_a8,(Vector *)&local_c0,SUB81((String *)&local_98,0),
             false);
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar10 = (long *)(local_a0 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  lVar8 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar10 = (long *)(local_90 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  puVar1 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    LOCK();
    plVar10 = local_b0 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_b0 = (undefined8 *)0x0;
      Memory::free_static(puVar1 + -2,false);
    }
  }
  if (((local_c0 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar11 = local_c0, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_c0), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  if (((local_c8 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar11 = local_c8, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
  if (((local_d0 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar11 = local_d0, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    Memory::free_static(pOVar11,false);
  }
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



/* NavigationLink3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
NavigationLink3DGizmoPlugin::is_class_ptr(NavigationLink3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1057,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1057,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationLink3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 NavigationLink3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationLink3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 NavigationLink3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationLink3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void NavigationLink3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationLink3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 NavigationLink3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationLink3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationLink3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationLink3DGizmoPlugin::_notificationv(int, bool) */

void NavigationLink3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin() */

void __thiscall
NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin(NavigationLink3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105508;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin() */

void __thiscall
NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin(NavigationLink3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00105508;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
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



/* NavigationLink3DGizmoPlugin::_get_class_namev() const */

undefined8 * NavigationLink3DGizmoPlugin::_get_class_namev(void)

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
LAB_00102fb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102fb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationLink3DGizmoPlugin"
                );
      goto LAB_0010301e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationLink3DGizmoPlugin");
LAB_0010301e:
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



/* NavigationLink3DGizmoPlugin::get_class() const */

void NavigationLink3DGizmoPlugin::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_001032e4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001032e4:
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



/* NavigationLink3DGizmoPlugin::_initialize_classv() */

void NavigationLink3DGizmoPlugin::_initialize_classv(void)

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
    local_58 = "NavigationLink3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x1b;
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
LAB_00103a98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103a98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103ab6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103ab6:
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
            if (lVar5 == 0) goto LAB_00103d8f;
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
LAB_00103d8f:
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
    if (cVar6 != '\0') goto LAB_00103e43;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_00103f1b;
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
LAB_00103f1b:
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
      if (cVar6 != '\0') goto LAB_00103e43;
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
                if (lVar5 == 0) goto LAB_00103ffb;
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
LAB_00103ffb:
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
        if (cVar6 != '\0') goto LAB_00103e43;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001040a4;
    }
  }
LAB_00103e43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001040a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationLink3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
NavigationLink3DGizmoPlugin::is_class(NavigationLink3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010411f;
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
LAB_0010411f:
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
    if (cVar6 != '\0') goto LAB_001041d3;
  }
  cVar6 = String::operator==(param_1,"NavigationLink3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_00104293;
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
LAB_00104293:
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
      if (cVar6 != '\0') goto LAB_001041d3;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010433c;
    }
  }
LAB_001041d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010433c:
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
LAB_001044c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001044c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001044e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001044e5:
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
LAB_00104918:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104918;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104935;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104935:
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



/* NavigationLink3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationLink3DGizmoPlugin::_get_property_listv
          (NavigationLink3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "NavigationLink3DGizmoPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationLink3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
LAB_00104d68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104d68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104d85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104d85:
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
  StringName::StringName((StringName *)&local_78,"NavigationLink3DGizmoPlugin",false);
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
LAB_001053e0:
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
  if (lVar7 == 0) goto LAB_001053e0;
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
LAB_0010534c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001052db;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010534c;
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
LAB_001052db:
  puVar9[-1] = param_1;
  return 0;
}



/* NavigationLink3DGizmoPlugin::NavigationLink3DGizmoPlugin() */

void NavigationLink3DGizmoPlugin::_GLOBAL__sub_I_NavigationLink3DGizmoPlugin(void)

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
/* NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin() */

void __thiscall
NavigationLink3DGizmoPlugin::~NavigationLink3DGizmoPlugin(NavigationLink3DGizmoPlugin *this)

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


