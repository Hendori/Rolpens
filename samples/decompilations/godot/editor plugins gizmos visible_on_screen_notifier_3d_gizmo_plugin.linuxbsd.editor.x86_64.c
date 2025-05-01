
/* VisibleOnScreenNotifier3DGizmoPlugin::get_priority() const */

undefined8 VisibleOnScreenNotifier3DGizmoPlugin::get_priority(void)

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



/* VisibleOnScreenNotifier3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::has_gizmo
          (VisibleOnScreenNotifier3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&VisibleOnScreenNotifier3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const
    */

EditorNode3DGizmo *
VisibleOnScreenNotifier3DGizmoPlugin::get_handle_value
          (EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  AABB aAStack_38 [24];
  long local_20;
  
  lVar1 = *(long *)(CONCAT71(in_register_00000011,param_3) + 0x1f0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar3 = (long *)__dynamic_cast(lVar1,&Object::typeinfo,&VisibleOnScreenNotifier3D::typeinfo,0);
  (**(code **)(*plVar3 + 0x1d8))(aAStack_38,plVar3);
  Variant::Variant((Variant *)param_1,aAStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VisibleOnScreenNotifier3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*,
   Vector2 const&) */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::set_handle
          (VisibleOnScreenNotifier3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,
          bool param_3,Camera3D *param_4,Vector2 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  AABB *pAVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_1f4;
  float fStack_1f0;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  float local_100 [3];
  undefined8 local_f4;
  undefined4 local_ec;
  float local_e8 [5];
  float local_d4;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) == 0) {
    Node3D::get_global_transform();
    Transform3D::affine_inverse();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pAVar5 = (AABB *)__dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,
                                  &VisibleOnScreenNotifier3D::typeinfo,0);
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  lVar6 = (long)(param_2 % 3);
  (**(code **)(*(long *)pAVar5 + 0x1d8))(local_e8,pAVar5);
  local_118 = (**(code **)(*(long *)param_4 + 0x208))(param_4,param_5);
  fVar7 = local_118._8_4_;
  uVar2 = local_118._0_4_;
  uVar3 = local_118._4_4_;
  local_10c = (**(code **)(*(long *)param_4 + 0x200))(param_4,param_5);
  fVar10 = local_10c._8_4_;
  local_148 = 0;
  uVar4 = local_10c._0_4_;
  local_140 = 0.0;
  fVar9 = (float)local_10c._4_4_ * (float)_LC7;
  *(undefined4 *)((long)&local_148 + lVar6 * 4) = 0x3f800000;
  local_100[2] = 0.0;
  local_100[0] = 0.0;
  local_100[1] = 0.0;
  fVar9 = fVar9 + (float)uVar3;
  fVar11 = (float)uVar4 * (float)_LC7 + (float)uVar2;
  fVar10 = fVar10 * (float)_LC7 + fVar7;
  fStack_1f4 = (float)uStack_50;
  fStack_1f0 = (float)((ulong)uStack_50 >> 0x20);
  local_c8 = (float)uVar3 * fStack_74 + (float)uVar2 * local_78 + fVar7 * fStack_70 + fStack_54;
  fStack_c4 = (float)uVar3 * local_68 + (float)uVar2 * fStack_6c + fVar7 * fStack_64 + fStack_1f4;
  fStack_c0 = (float)uVar3 * fStack_64 + (float)uVar2 * fStack_60 + fVar7 * local_58 + fStack_1f0;
  fStack_bc = fVar9 * fStack_74 + fVar11 * local_78 + fVar10 * fStack_70 + fStack_54;
  local_b8 = CONCAT44(fVar9 * fStack_5c + fVar11 * fStack_60 + fVar10 * local_58 + fStack_1f0,
                      fVar9 * local_68 + fVar11 * fStack_6c + fVar10 * fStack_64 + fStack_1f4);
  local_150 = _LC8 * local_d4 + local_e8[2];
  fVar7 = (float)local_e8._12_8_ * _LC8 + (float)local_e8._0_8_;
  fVar10 = SUB84(local_e8._12_8_,4) * _UNK_0010498c + SUB84(local_e8._0_8_,4);
  local_158 = CONCAT44(fVar10,fVar7);
  local_f4 = 0;
  local_120 = (float)_LC7 * local_140;
  local_ec = 0;
  fVar9 = (float)((ulong)local_148 >> 0x20);
  if (param_2 < 3) {
    local_120 = local_120 + local_150;
    local_128 = CONCAT44(fVar9 * _LC7._4_4_ + fVar10,(float)local_148 * (float)_LC7 + fVar7);
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_158,(Vector3 *)&local_128,(Vector3 *)&local_c8,
               (Vector3 *)&fStack_bc,(Vector3 *)local_100,(Vector3 *)&local_f4);
    fVar9 = local_100[lVar6] - *(float *)((long)&local_158 + lVar6 * 4);
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar8 = (double)Math::snapped((double)fVar9,(double)fVar7);
      fVar9 = (float)dVar8;
    }
    fVar7 = _LC5;
    dVar8 = _LC6;
    if (_LC14 <= (double)fVar9) {
      fVar7 = fVar9 + fVar9;
      dVar8 = (double)fVar9;
    }
    fVar9 = local_e8[lVar6 + 3];
    local_e8[lVar6 + 3] = fVar7;
    local_e8[lVar6] = (float)(((double)fVar9 * __LC13 + (double)local_e8[lVar6]) - dVar8);
    VisibleOnScreenNotifier3D::set_aabb(pAVar5);
  }
  else {
    fVar11 = (float)local_148 * (float)_LC7;
    fVar9 = fVar9 * _LC7._4_4_;
    local_128 = CONCAT44(fVar9 + fVar10,fVar11 + fVar7);
    local_138 = CONCAT44(fVar10 - fVar9,fVar7 - fVar11);
    local_130 = local_150 - local_120;
    local_120 = local_150 + local_120;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_138,(Vector3 *)&local_128,(Vector3 *)&local_c8,
               (Vector3 *)&fStack_bc,(Vector3 *)local_100,(Vector3 *)&local_f4);
    fVar9 = local_100[lVar6];
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar8 = (double)Math::snapped((double)fVar9,(double)fVar7);
      fVar9 = (float)dVar8;
    }
    local_e8[lVar6] = (float)(((double)fVar9 - __LC12) - (double)local_e8[lVar6 + 3] * __LC13);
    VisibleOnScreenNotifier3D::set_aabb(pAVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::get_gizmo_name() const */

VisibleOnScreenNotifier3DGizmoPlugin * __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::get_gizmo_name(VisibleOnScreenNotifier3DGizmoPlugin *this)

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



/* VisibleOnScreenNotifier3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const
    */

VisibleOnScreenNotifier3DGizmoPlugin * __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::get_handle_name
          (VisibleOnScreenNotifier3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,
          bool param_3)

{
  long lVar1;
  undefined7 in_register_00000009;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (5 < (uint)CONCAT71(in_register_00000009,param_3)) {
    *(undefined8 *)this = 0;
    String::parse_latin1((StrRange *)this);
    goto LAB_001008bf;
  }
  *(undefined8 *)this = 0;
  switch(CONCAT71(in_register_00000009,param_3) & 0xffffffff) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_001008a7;
  case 4:
    goto LAB_001008a7;
  case 5:
LAB_001008a7:
    String::parse_latin1((StrRange *)this);
    goto LAB_001008bf;
  }
  String::parse_latin1((StrRange *)this);
LAB_001008bf:
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



/* VisibleOnScreenNotifier3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant
   const&, bool) */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::commit_handle
          (VisibleOnScreenNotifier3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,
          bool param_3,Variant *param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  AABB *pAVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pAVar4 = *(AABB **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pAVar4 != (AABB *)0x0) {
    pAVar4 = (AABB *)__dynamic_cast(pAVar4,&Object::typeinfo,&VisibleOnScreenNotifier3D::typeinfo,0)
    ;
  }
  if (param_5) {
    Variant::operator_cast_to_AABB((Variant *)local_78);
    VisibleOnScreenNotifier3D::set_aabb(pAVar4);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
    local_e0 = 0;
    local_d8 = "";
    local_d0 = 0;
    String::parse_latin1((StrRange *)&local_e0);
    local_d8 = "Change Notifier AABB";
    local_e8 = 0;
    local_d0 = 0x14;
    String::parse_latin1((StrRange *)&local_e8);
    TTR((String *)&local_d8,(String *)&local_e8);
    EditorUndoRedoManager::create_action(pOVar5,(String *)&local_d8,0,0,0);
    pcVar3 = local_d8;
    if (local_d8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    (**(code **)(*(long *)pAVar4 + 0x1d8))(&local_b8,pAVar4);
    StringName::StringName((StringName *)&local_d8,"set_aabb",false);
    local_88 = local_a8;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    Variant::Variant((Variant *)local_78,(AABB *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar5,(StringName *)pAVar4,(Variant **)&local_d8,(int)local_c8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)&local_98,param_4);
    StringName::StringName((StringName *)&local_d8,"set_aabb",false);
    Variant::Variant((Variant *)local_78,(Variant *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar5,(StringName *)pAVar4,(Variant **)&local_d8,(int)local_c8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisibleOnScreenNotifier3DGizmoPlugin::VisibleOnScreenNotifier3DGizmoPlugin() */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::VisibleOnScreenNotifier3DGizmoPlugin
          (VisibleOnScreenNotifier3DGizmoPlugin *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  undefined4 in_XMM1_Da;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = in_XMM1_Da;
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  local_70 = (Object *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001045d0;
  local_68 = "editors/3d_gizmos/gizmo_colors/visibility_notifier";
  local_60 = 0x32;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_48);
  local_58 = Variant::operator_cast_to_Color((Variant *)local_48);
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
  local_68 = "visibility_notifier_material";
  local_70 = (Object *)0x0;
  local_60 = 0x1c;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_70,SUB81(&local_58,0),false,false);
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
  _local_50 = CONCAT44(0x3dcccccd,local_50);
  local_68 = "visibility_notifier_solid_material";
  local_70 = (Object *)0x0;
  local_60 = 0x22;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_70,SUB81(&local_58,0),false,false);
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
/* VisibleOnScreenNotifier3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::redraw
          (VisibleOnScreenNotifier3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  Object *pOVar1;
  code *pcVar2;
  EditorNode3DGizmo *pEVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  Object *pOVar7;
  uint uVar8;
  int iVar9;
  Vector3 *pVVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  Object *local_138;
  long local_130;
  Object *local_128;
  Object *local_120;
  Ref local_118 [8];
  long local_110;
  Ref local_108 [8];
  long local_100;
  EditorNode3DGizmo *local_f8;
  long local_f0;
  Object *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  float fStack_7c;
  undefined1 local_78 [12];
  uint uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  undefined8 uVar16;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)param_1 + 0x160);
  if (*(long *)(param_1 + 0x1f0) == 0) {
    (*pcVar2)(param_1);
    local_110 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar5 = (long *)__dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,
                                  &VisibleOnScreenNotifier3D::typeinfo,0);
  (*pcVar2)(param_1);
  local_110 = 0;
  (**(code **)(*plVar5 + 0x1d8))(&local_98,plVar5);
  pVVar10 = (Vector3 *)0x0;
  do {
    local_a8 = 0;
    uVar8 = (int)pVVar10 + 1;
    local_a0 = 0.0;
    local_78 = ZEXT812(0);
    AABB::get_edge((int)&local_98,pVVar10,(Vector3 *)&local_a8);
    Vector<Vector3>::push_back(local_a8,local_a0,local_118);
    Vector<Vector3>::push_back(local_78._0_8_,local_78._8_4_,local_118);
    pVVar10 = (Vector3 *)(ulong)uVar8;
  } while (uVar8 != 0xc);
  uVar11 = 1;
  local_100 = 0;
  do {
    iVar9 = (int)uVar11;
    local_78 = ZEXT812(0);
    (&fStack_7c)[uVar11] = (&fStack_9c)[uVar11] + (&local_90)[uVar11];
    lVar6 = (long)(iVar9 + (int)((uVar11 & 0xffffffff) / 3) * -3);
    *(float *)(local_78 + lVar6 * 4) =
         (float)((double)*(float *)((long)&local_8c + lVar6 * 4) * __LC13 +
                (double)*(float *)((long)&local_98 + lVar6 * 4));
    uVar11 = uVar11 + 1;
    lVar6 = (long)(int)((iVar9 + 1U) % 3);
    *(float *)(local_78 + lVar6 * 4) =
         (float)((double)*(float *)((long)&local_8c + lVar6 * 4) * __LC13 +
                (double)*(float *)((long)&local_98 + lVar6 * 4));
    Vector<Vector3>::push_back(local_78._0_8_,local_78._8_4_,local_108);
  } while (uVar11 != 4);
  fVar14 = _LC8 * local_84 + local_90;
  fVar15 = (float)local_8c * _LC8 + (float)local_98;
  fVar17 = (float)((ulong)local_8c >> 0x20) * _UNK_0010498c + (float)((ulong)local_98 >> 0x20);
  uVar16 = CONCAT44(fVar17,fVar15);
  puVar12 = (undefined4 *)local_78;
  do {
    local_78 = ZEXT812(0);
    puVar13 = puVar12 + 1;
    *puVar12 = 0x3f800000;
    fVar19 = fVar14 + (float)local_78._8_4_;
    uVar18 = CONCAT44(SUB164(_local_78,4) + fVar17,SUB164(_local_78,0) + fVar15);
    local_c8 = uVar18;
    local_c0 = fVar19;
    Vector<Vector3>::push_back(uVar18,fVar19,local_108);
    local_d8 = uVar16;
    local_d0 = fVar14;
    Vector<Vector3>::push_back(uVar16,fVar14,local_118);
    local_b8 = uVar18;
    local_b0 = fVar19;
    Vector<Vector3>::push_back(uVar18,fVar19,local_118);
    puVar12 = puVar13;
  } while (puVar13 != (undefined4 *)(local_78 + 0xc));
  local_f8 = param_1;
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_f8 = (EditorNode3DGizmo *)0x0;
  }
  local_120 = (Object *)0x0;
  local_e0 = 0x1c;
  local_e8 = (Object *)0x101ecc;
  String::parse_latin1((StrRange *)&local_120);
  EditorNode3DGizmoPlugin::get_material((String *)&local_e8,(Ref *)this);
  local_138 = (Object *)0x0;
  if (local_e8 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(local_e8,&Object::typeinfo,&Material::typeinfo);
    if (pOVar7 != (Object *)0x0) {
      local_138 = pOVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_138 = (Object *)0x0;
      }
      if (local_e8 == (Object *)0x0) goto LAB_001015e0;
    }
    cVar4 = RefCounted::unreference();
    pOVar7 = local_e8;
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_e8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))();
      Memory::free_static(pOVar7,false);
    }
  }
LAB_001015e0:
  pOVar7 = local_120;
  if (local_120 != (Object *)0x0) {
    LOCK();
    pOVar1 = local_120 + -0x10;
    *(long *)pOVar1 = *(long *)pOVar1 + -1;
    UNLOCK();
    if (*(long *)pOVar1 == 0) {
      local_120 = (Object *)0x0;
      Memory::free_static(pOVar7 + -0x10,false);
    }
  }
  if (((local_f8 != (EditorNode3DGizmo *)0x0) &&
      (cVar4 = RefCounted::unreference(), pEVar3 = local_f8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_f8), cVar4 != '\0')) {
    (**(code **)(*(long *)pEVar3 + 0x140))();
    Memory::free_static(pEVar3,false);
  }
  local_78._4_4_ = _LC10;
  local_78._0_4_ = _LC10;
  local_78._8_4_ = _LC10;
  uStack_6c = _LC10;
  EditorNode3DGizmo::add_lines((Vector *)param_1,local_118,SUB81(&local_138,0),(Color *)0x0);
  EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
  if (param_1[0x17c] == (EditorNode3DGizmo)0x0) goto LAB_00101655;
  local_f8 = param_1;
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_f8 = (EditorNode3DGizmo *)0x0;
  }
  local_120 = (Object *)0x0;
  local_e8 = (Object *)0x1040c0;
  local_e0 = 0x22;
  String::parse_latin1((StrRange *)&local_120);
  EditorNode3DGizmoPlugin::get_material((String *)&local_e8,(Ref *)this);
  local_128 = (Object *)0x0;
  if (local_e8 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(local_e8,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar7 != (Object *)0x0) {
      local_128 = pOVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_128 = (Object *)0x0;
      }
      if (local_e8 == (Object *)0x0) goto LAB_001019b0;
    }
    cVar4 = RefCounted::unreference();
    pOVar7 = local_e8;
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_e8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
LAB_001019b0:
  pOVar7 = local_120;
  if (local_120 != (Object *)0x0) {
    LOCK();
    pOVar1 = local_120 + -0x10;
    *(long *)pOVar1 = *(long *)pOVar1 + -1;
    UNLOCK();
    if (*(long *)pOVar1 == 0) {
      local_120 = (Object *)0x0;
      Memory::free_static(pOVar7 + -0x10,false);
    }
  }
  if (((local_f8 != (EditorNode3DGizmo *)0x0) &&
      (cVar4 = RefCounted::unreference(), pEVar3 = local_f8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_f8), cVar4 != '\0')) {
    (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
    Memory::free_static(pEVar3,false);
  }
  _local_78 = ZEXT416(_LC10);
  local_58 = 0x3f800000;
  local_a0 = _LC8 * local_84 + local_90;
  local_54 = 0;
  local_4c = 0;
  local_a8 = CONCAT44((float)((ulong)local_8c >> 0x20) * _UNK_0010498c +
                      (float)((ulong)local_98 >> 0x20),(float)local_8c * _LC8 + (float)local_98);
  local_68 = _local_78;
  EditorNode3DGizmo::add_solid_box(local_8c,local_84,param_1,&local_128,local_78);
  if (((local_128 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_128, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_128), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_00101655:
  local_f0 = 0;
  local_e8 = (Object *)0x101ee9;
  local_128 = (Object *)0x0;
  local_130 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_130);
  EditorNode3DGizmoPlugin::get_material((String *)&local_120,(Ref *)this);
  local_e8 = (Object *)0x0;
  if (((local_120 != (Object *)0x0) &&
      (pOVar7 = (Object *)__dynamic_cast(local_120,&Object::typeinfo,&Material::typeinfo,0),
      pOVar7 != (Object *)0x0)) &&
     (local_e8 = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_e8 = (Object *)0x0;
  }
  EditorNode3DGizmo::add_handles
            ((Vector *)param_1,local_108,(Vector *)&local_e8,SUB81(&local_f8,0),false);
  if (((local_e8 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_e8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_e8), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  if (((local_120 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_120, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_120), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  lVar6 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar5 = (long *)(local_130 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (((local_128 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_128, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_128), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  lVar6 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar5 = (long *)(local_f0 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (((local_138 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_138, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_138), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  lVar6 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar5 = (long *)(local_100 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar5 = (long *)(local_110 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
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



/* VisibleOnScreenNotifier3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::is_class_ptr
          (VisibleOnScreenNotifier3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1048,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 VisibleOnScreenNotifier3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 VisibleOnScreenNotifier3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void VisibleOnScreenNotifier3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 VisibleOnScreenNotifier3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisibleOnScreenNotifier3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_notificationv(int, bool) */

void VisibleOnScreenNotifier3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin() */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin
          (VisibleOnScreenNotifier3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001045d0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin() */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin
          (VisibleOnScreenNotifier3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001045d0;
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



/* VisibleOnScreenNotifier3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const
   [clone .cold] */

void VisibleOnScreenNotifier3DGizmoPlugin::get_handle_value
               (EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VisibleOnScreenNotifier3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*,
   Vector2 const&) [clone .cold] */

void VisibleOnScreenNotifier3DGizmoPlugin::set_handle
               (EditorNode3DGizmo *param_1,int param_2,bool param_3,Camera3D *param_4,
               Vector2 *param_5)

{
  code *pcVar1;
  
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VisibleOnScreenNotifier3DGizmoPlugin::redraw(EditorNode3DGizmo*) [clone .cold] */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::redraw
          (VisibleOnScreenNotifier3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  code *pcVar1;
  code *unaff_RBP;
  undefined8 uStack0000000000000058;
  
  (*unaff_RBP)(param_1);
  uStack0000000000000058 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VisibleOnScreenNotifier3DGizmoPlugin::_get_class_namev() const */

undefined8 * VisibleOnScreenNotifier3DGizmoPlugin::_get_class_namev(void)

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
LAB_00101fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisibleOnScreenNotifier3DGizmoPlugin");
      goto LAB_0010204e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisibleOnScreenNotifier3DGizmoPlugin");
LAB_0010204e:
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



/* VisibleOnScreenNotifier3DGizmoPlugin::get_class() const */

void VisibleOnScreenNotifier3DGizmoPlugin::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_00102334;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00102334:
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



/* VisibleOnScreenNotifier3DGizmoPlugin::_initialize_classv() */

void VisibleOnScreenNotifier3DGizmoPlugin::_initialize_classv(void)

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
    local_58 = "VisibleOnScreenNotifier3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x24;
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
LAB_00102ae8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102ae8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102b06;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102b06:
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
            if (lVar5 == 0) goto LAB_00102ddf;
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
LAB_00102ddf:
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
    if (cVar6 != '\0') goto LAB_00102e93;
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
              if (lVar5 == 0) goto LAB_00102f6b;
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
LAB_00102f6b:
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
      if (cVar6 != '\0') goto LAB_00102e93;
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
                if (lVar5 == 0) goto LAB_0010304b;
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
LAB_0010304b:
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
        if (cVar6 != '\0') goto LAB_00102e93;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001030f4;
    }
  }
LAB_00102e93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001030f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisibleOnScreenNotifier3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::is_class
          (VisibleOnScreenNotifier3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010316f;
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
LAB_0010316f:
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
    if (cVar6 != '\0') goto LAB_00103223;
  }
  cVar6 = String::operator==(param_1,"VisibleOnScreenNotifier3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_001032e3;
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
LAB_001032e3:
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
      if (cVar6 != '\0') goto LAB_00103223;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010338c;
    }
  }
LAB_00103223:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010338c:
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
LAB_00103518:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103518;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103535;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103535:
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
LAB_00103968:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103968;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103985;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103985:
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



/* VisibleOnScreenNotifier3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::_get_property_listv
          (VisibleOnScreenNotifier3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "VisibleOnScreenNotifier3DGizmoPlugin";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisibleOnScreenNotifier3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x24;
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
LAB_00103db8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103db8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103dd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103dd5:
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
  StringName::StringName((StringName *)&local_78,"VisibleOnScreenNotifier3DGizmoPlugin",false);
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
LAB_00104490:
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
  if (lVar7 == 0) goto LAB_00104490;
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
LAB_001043fc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010438b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001043fc;
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
LAB_0010438b:
  puVar9[-1] = param_1;
  return 0;
}



/* VisibleOnScreenNotifier3DGizmoPlugin::VisibleOnScreenNotifier3DGizmoPlugin() */

void VisibleOnScreenNotifier3DGizmoPlugin::_GLOBAL__sub_I_VisibleOnScreenNotifier3DGizmoPlugin(void)

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
/* VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin() */

void __thiscall
VisibleOnScreenNotifier3DGizmoPlugin::~VisibleOnScreenNotifier3DGizmoPlugin
          (VisibleOnScreenNotifier3DGizmoPlugin *this)

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


