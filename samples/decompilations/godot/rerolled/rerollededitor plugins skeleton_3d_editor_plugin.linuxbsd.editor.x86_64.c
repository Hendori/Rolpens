/* Skeleton3DEditor::_joint_tree_rmb_select(Vector2 const&, MouseButton) */

void Skeleton3DEditor::_joint_tree_rmb_select(void)

{
  return;
}



/* Skeleton3DGizmoPlugin::get_priority() const */

undefined8 Skeleton3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* LocalVector<Color, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<Color,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall Skeleton3DGizmoPlugin::has_gizmo(Skeleton3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Skeleton3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* Skeleton3DGizmoPlugin::get_subgizmo_transform(EditorNode3DGizmo const*, int) const */

Skeleton3DGizmoPlugin * __thiscall
Skeleton3DGizmoPlugin::get_subgizmo_transform
          (Skeleton3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&Skeleton3D::typeinfo,0);
    if (lVar3 != 0) {
      Skeleton3D::get_bone_global_pose((int)this);
      goto LAB_001000f2;
    }
  }
  _err_print_error("get_subgizmo_transform","editor/plugins/skeleton_3d_editor_plugin.cpp",0x615,
                   "Parameter \"skeleton\" is null.",0,0);
  uVar2 = _LC11;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined1 (*) [16])this = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar2);
LAB_001000f2:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DGizmoPlugin::~Skeleton3DGizmoPlugin() */

void __thiscall Skeleton3DGizmoPlugin::~Skeleton3DGizmoPlugin(Skeleton3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001290f8;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_001137a8 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_001137a8;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_001137a8);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_001137a8 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* Skeleton3DGizmoPlugin::~Skeleton3DGizmoPlugin() */

void __thiscall Skeleton3DGizmoPlugin::~Skeleton3DGizmoPlugin(Skeleton3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001290f8;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_001137a8 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_001137a8;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_001137a8);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_001137a8 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* Skeleton3DGizmoPlugin::set_subgizmo_transform(EditorNode3DGizmo const*, int, Transform3D) */

void Skeleton3DGizmoPlugin::set_subgizmo_transform(undefined8 param_1,long param_2,ulong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_68 [3] [12];
  float local_44;
  float fStack_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x1f0) != 0) {
    lVar5 = __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,&Skeleton3D::typeinfo,0);
    if (lVar5 != 0) {
      local_c8 = ZEXT416(_LC11);
      local_a8 = 0x3f800000;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      iVar6 = (int)lVar5;
      local_b8 = local_c8;
      iVar4 = Skeleton3D::get_bone_parent(iVar6);
      if (-1 < iVar4) {
        Skeleton3D::get_bone_global_pose((int)&local_128);
        local_c8._8_8_ = uStack_120;
        local_c8._0_8_ = local_128;
        local_b8._8_8_ = uStack_110;
        local_b8._0_8_ = local_118;
        local_a8 = (undefined4)local_108;
        uStack_a4 = (undefined4)((ulong)local_108 >> 0x20);
        uStack_a0 = (undefined4)uStack_100;
        uStack_9c = (undefined4)((ulong)uStack_100 >> 0x20);
      }
      Basis::inverse();
      local_6c = 0.0;
      local_74 = 0;
      local_78 = fStack_e0 * fStack0000000000000010 + fStack_dc * fStack000000000000001c +
                 fStack0000000000000028 * local_d8;
      local_98 = fStack0000000000000014 * fStack_f4 + local_f8 * fStack0000000000000008 +
                 fStack0000000000000020 * fStack_f0;
      fStack_94 = fStack0000000000000018 * fStack_f4 + local_f8 * fStack000000000000000c +
                  fStack0000000000000024 * fStack_f0;
      fStack_90 = fStack000000000000001c * fStack_f4 + local_f8 * fStack0000000000000010 +
                  fStack0000000000000028 * fStack_f0;
      fStack_8c = fStack0000000000000014 * local_e8 + fStack_ec * fStack0000000000000008 +
                  fStack0000000000000020 * fStack_e4;
      local_88 = fStack0000000000000018 * local_e8 + fStack_ec * fStack000000000000000c +
                 fStack0000000000000024 * fStack_e4;
      fStack_84 = fStack000000000000001c * local_e8 + fStack_ec * fStack0000000000000010 +
                  fStack0000000000000028 * fStack_e4;
      fStack_80 = fStack0000000000000014 * fStack_dc + fStack_e0 * fStack0000000000000008 +
                  fStack0000000000000020 * local_d8;
      fStack_7c = fStack0000000000000018 * fStack_dc + fStack_e0 * fStack000000000000000c +
                  fStack0000000000000024 * local_d8;
      Skeleton3D::get_bone_pose((int)local_68);
      fVar3 = local_3c;
      fVar2 = fStack_40;
      fVar1 = local_44;
      Skeleton3D::get_bone_global_pose((int)local_68);
      fStack0000000000000030 = fStack0000000000000030 - fStack_40;
      fStack000000000000002c = fStack000000000000002c - local_44;
      fStack0000000000000034 = fStack0000000000000034 - local_3c;
      local_6c = fStack000000000000002c * fStack_e0 + fStack0000000000000030 * fStack_dc +
                 fStack0000000000000034 * local_d8 + fVar3;
      local_74 = CONCAT44(fStack000000000000002c * fStack_ec + fStack0000000000000030 * local_e8 +
                          fStack0000000000000034 * fStack_e4 + fVar2,
                          fStack000000000000002c * local_f8 + fStack0000000000000030 * fStack_f4 +
                          fStack0000000000000034 * fStack_f0 + fVar1);
      Skeleton3D::set_bone_pose_position(iVar6,(Vector3 *)(param_3 & 0xffffffff));
      Basis::get_rotation_quaternion();
      Skeleton3D::set_bone_pose_rotation(iVar6,(Quaternion *)(param_3 & 0xffffffff));
      local_68[0] = Basis::get_scale();
      Skeleton3D::set_bone_pose_scale(iVar6,(Vector3 *)(param_3 & 0xffffffff));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100765;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("set_subgizmo_transform","editor/plugins/skeleton_3d_editor_plugin.cpp",0x61c,
                     "Parameter \"skeleton\" is null.",0,0);
    return;
  }
LAB_00100765:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DGizmoPlugin::get_gizmo_name() const */

Skeleton3DGizmoPlugin * __thiscall
Skeleton3DGizmoPlugin::get_gizmo_name(Skeleton3DGizmoPlugin *this)

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



/* BonePropertiesEditor::_notification(int) [clone .part.0] */

void BonePropertiesEditor::_notification(int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  StringName *pSVar4;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  long local_30;
  
  pSVar4 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  local_48 = Control::get_theme_color
                       (pSVar4,(StringName *)&_notification(int)::{lambda()#1}::operator()()::sname)
  ;
  EditorInspectorSection::set_bg_color(*(Color **)(pSVar4 + 0xa10));
  EditorInspectorSection::set_bg_color(*(Color **)(pSVar4 + 0xa38));
  pRVar1 = *(Ref **)(pSVar4 + 0xa58);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar1);
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::~Skeleton3DEditor() */

void __thiscall Skeleton3DEditor::~Skeleton3DEditor(Skeleton3DEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00128948;
  singleton = 0;
  Node::queue_free();
  Node3DEditor::remove_control_from_menu_panel(Node3DEditor::singleton);
  pOVar1 = *(Object **)(this + 0xa38);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100a9a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100a9a:
  Control::~Control((Control *)this);
  return;
}



/* Skeleton3DEditor::~Skeleton3DEditor() */

void __thiscall Skeleton3DEditor::~Skeleton3DEditor(Skeleton3DEditor *this)

{
  ~Skeleton3DEditor(this);
  operator_delete(this,0xaf8);
  return;
}



/* CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write(CowData<Skeleton3DEditor::BoneInfo> *this)

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
  __n = lVar2 * 0x38;
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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar2 * 8;
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



/* Skeleton3DEditorPlugin::handles(Object*) const */

ulong __thiscall Skeleton3DEditorPlugin::handles(Skeleton3DEditorPlugin *this,Object *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 10;
  pcVar2 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "Skeleton3D";
  String::parse_latin1((StrRange *)&local_40);
  uVar4 = (*pcVar2)(param_1);
  lVar3 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      uVar4 = uVar4 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::_notification(int) */

void __thiscall BonePropertiesEditor::_notification(BonePropertiesEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* BonePropertiesEditor::set_keyable(bool) */

void BonePropertiesEditor::set_keyable(bool param_1)

{
  undefined7 in_register_00000039;
  long lVar1;
  
  lVar1 = CONCAT71(in_register_00000039,param_1);
  EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar1 + 0xa20),0));
  EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar1 + 0xa28),0));
  EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar1 + 0xa30),0));
  return;
}



/* Skeleton3DEditor::set_keyable(bool) */

void __thiscall Skeleton3DEditor::set_keyable(Skeleton3DEditor *this,bool param_1)

{
  this[0xa98] = (Skeleton3DEditor)param_1;
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  return;
}



/* Skeleton3DEditor::set_bone_options_enabled(bool) */

void Skeleton3DEditor::set_bone_options_enabled(bool param_1)

{
  int iVar1;
  
  iVar1 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar1,true);
  iVar1 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar1,true);
  return;
}



/* Skeleton3DEditor::update_bone_original() */

void __thiscall Skeleton3DEditor::update_bone_original(Skeleton3DEditor *this)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [12];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa18) != 0) {
    iVar1 = Skeleton3D::get_bone_count();
    if ((iVar1 != 0) && (*(int *)(this + 0xaf0) != -1)) {
      auVar2 = Skeleton3D::get_bone_pose_position((int)*(undefined8 *)(this + 0xa18));
      *(undefined1 (*) [12])(this + 0xac8) = auVar2;
      Skeleton3D::get_bone_pose_rotation((int)&local_28);
      *(undefined8 *)(this + 0xad4) = local_28;
      *(undefined8 *)(this + 0xadc) = uStack_20;
      auVar2 = Skeleton3D::get_bone_pose_scale((int)*(undefined8 *)(this + 0xa18));
      *(undefined1 (*) [12])(this + 0xae4) = auVar2;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
Skeleton3DEditorPlugin::forward_3d_gui_input
          (Skeleton3DEditorPlugin *this,Camera3D *param_1,Ref *param_2)

{
  Skeleton3DEditor *this_00;
  long lVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  undefined8 uVar5;
  
  lVar1 = Node3DEditor::singleton;
  this_00 = Skeleton3DEditor::singleton;
  if (Skeleton3DEditor::singleton == (Skeleton3DEditor *)0x0) {
    return 0;
  }
  if (Skeleton3DEditor::singleton[0xa50] == (Skeleton3DEditor)0x0) {
    return 0;
  }
  if (((*(long *)param_2 == 0) ||
      (pOVar4 = (Object *)
                __dynamic_cast(*(long *)param_2,&Object::typeinfo,&InputEventMouseButton::typeinfo,0
                              ), pOVar4 == (Object *)0x0)) ||
     (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    return 2;
  }
  iVar3 = InputEventMouseButton::get_button_index();
  if (iVar3 == 1) {
    if (*(int *)(lVar1 + 0xa60) != 0) {
      uVar5 = 1;
      cVar2 = Node3DEditor::is_gizmo_visible();
      if (cVar2 == '\0') goto LAB_001010b2;
    }
    cVar2 = InputEvent::is_pressed();
    if (cVar2 != '\0') {
      Skeleton3DEditor::update_bone_original(this_00);
    }
  }
  uVar5 = 2;
LAB_001010b2:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return uVar5;
  }
  cVar2 = predelete_handler(pOVar4);
  if (cVar2 == '\0') {
    return uVar5;
  }
  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
  Memory::free_static(pOVar4,false);
  return uVar5;
}



/* Skeleton3DEditor::_hide_handles() */

void Skeleton3DEditor::_hide_handles(void)

{
  Node3D::hide();
  return;
}



/* Skeleton3DEditor::_draw_handles() */

void __thiscall Skeleton3DEditor::_draw_handles(Skeleton3DEditor *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  int iVar8;
  long in_FS_OFFSET;
  Object *local_a0;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [36];
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = Skeleton3D::get_bone_count();
  ImmediateMesh::clear_surfaces();
  if (iVar6 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::hide();
      return;
    }
  }
  else {
    Node3D::show();
    local_a0 = (Object *)0x0;
    ImmediateMesh::surface_begin(*(undefined8 *)(this + 0xab0),0,&local_a0);
    if (local_a0 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar7 = local_a0;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_a0);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    uVar4 = _LC33;
    uVar3 = _LC35;
    if (0 < iVar6) {
      iVar8 = 0;
      do {
        local_80 = uVar3;
        local_88 = uVar4;
        if (*(int *)(this + 0xaf0) != iVar8) {
          local_80 = CONCAT44((int)((ulong)uVar3 >> 0x20),0x3f4ccccd);
          local_88 = _LC306;
        }
        iVar8 = iVar8 + 1;
        Skeleton3D::get_bone_global_pose((int)local_78);
        local_94 = local_54;
        local_8c = local_4c;
        ImmediateMesh::surface_set_color(*(Color **)(this + 0xab0));
        ImmediateMesh::surface_add_vertex(*(Vector3 **)(this + 0xab0));
      } while (iVar6 != iVar8);
    }
    ImmediateMesh::surface_end();
    plVar1 = *(long **)(this + 0xab0);
    pcVar2 = *(code **)(*plVar1 + 0x208);
    local_a0 = (Object *)0x0;
    if (*(long *)(this + 0xab8) != 0) {
      pOVar7 = (Object *)
               __dynamic_cast(*(long *)(this + 0xab8),&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar7 != (Object *)0x0) {
        local_a0 = pOVar7;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_a0 = (Object *)0x0;
        }
      }
    }
    (*pcVar2)(plVar1,0,&local_a0);
    if (local_a0 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar7 = local_a0;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_a0);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_draw_gizmo() */

void __thiscall Skeleton3DEditor::_draw_gizmo(Skeleton3DEditor *this)

{
  if (*(long *)(this + 0xa18) == 0) {
    return;
  }
  Skeleton3D::force_update_all_dirty_bones();
  if (this[0xa50] != (Skeleton3DEditor)0x0) {
    _draw_handles(this);
    return;
  }
  Node3D::hide();
  return;
}



/* Skeleton3DEditor::_find(TreeItem*, NodePath const&) */

TreeItem * __thiscall
Skeleton3DEditor::_find(Skeleton3DEditor *this,TreeItem *param_1,NodePath *param_2)

{
  char cVar1;
  TreeItem *pTVar2;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TreeItem *)0x0) {
    param_1 = (TreeItem *)0x0;
  }
  else {
    TreeItem::get_metadata((int)local_48);
    Variant::operator_cast_to_NodePath(local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = NodePath::operator==((NodePath *)local_50,param_2);
    if (cVar1 == '\0') {
      pTVar2 = (TreeItem *)TreeItem::get_first_child();
      while (pTVar2 != (TreeItem *)0x0) {
        param_1 = (TreeItem *)_find(this,pTVar2,param_2);
        if (param_1 != (TreeItem *)0x0) goto LAB_001014b6;
        pTVar2 = (TreeItem *)TreeItem::get_next();
      }
      param_1 = (TreeItem *)0x0;
    }
LAB_001014b6:
    NodePath::~NodePath((NodePath *)local_50);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Skeleton3DEditor::get_selected_bone() const */

undefined4 __thiscall Skeleton3DEditor::get_selected_bone(Skeleton3DEditor *this)

{
  return *(undefined4 *)(this + 0xaf0);
}



/* BonePropertiesEditor::set_target(String const&) */

void __thiscall BonePropertiesEditor::set_target(BonePropertiesEditor *this,String *param_1)

{
  Object *pOVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pOVar1 = *(Object **)(this + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_58 = "enabled";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+(local_60,param_1);
  StringName::StringName((StringName *)&local_58,local_60,false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)(this + 0xab0));
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  (**(code **)(**(long **)(this + 0xa18) + 0x380))();
  local_58 = "position";
  pOVar1 = *(Object **)(this + 0xa20);
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+(local_60,param_1);
  StringName::StringName((StringName *)&local_58,local_60,false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)(this + 0xab0));
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  (**(code **)(**(long **)(this + 0xa20) + 0x380))();
  local_58 = "rotation";
  pOVar1 = *(Object **)(this + 0xa28);
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+(local_60,param_1);
  StringName::StringName((StringName *)&local_58,local_60,false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)(this + 0xab0));
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  (**(code **)(**(long **)(this + 0xa28) + 0x380))();
  local_58 = "scale";
  pOVar1 = *(Object **)(this + 0xa30);
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+(local_60,param_1);
  StringName::StringName((StringName *)&local_58,local_60,false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)(this + 0xab0));
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  (**(code **)(**(long **)(this + 0xa30) + 0x380))();
  local_58 = "rest";
  pOVar1 = *(Object **)(this + 0xa40);
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+(local_60,param_1);
  StringName::StringName((StringName *)&local_58,local_60,false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)(this + 0xab0));
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010188d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xa40) + 0x380))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::_value_changed(String const&, Variant const&, String const&, bool) */

void BonePropertiesEditor::_value_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  bool *pbVar1;
  StringName *pSVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[0xab9] == (String)0x0) && (*(long *)(param_1 + 0xab0) != 0)) {
    pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
    local_78 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "Set Bone Transform";
    local_70 = 0;
    local_60 = 0x12;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_68,(String *)&local_70);
    EditorUndoRedoManager::create_action(pOVar3,(String *)&local_68,1,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pbVar1 = *(bool **)(param_1 + 0xab0);
    StringName::StringName((StringName *)&local_70,(String *)param_2,false);
    Object::get((StringName *)local_58,pbVar1);
    StringName::StringName((StringName *)&local_68,(String *)param_2,false);
    EditorUndoRedoManager::add_undo_property
              (pOVar3,*(StringName **)(param_1 + 0xab0),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,(String *)param_2,false);
    EditorUndoRedoManager::add_do_property
              (pOVar3,*(StringName **)(param_1 + 0xab0),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    pSVar2 = Skeleton3DEditor::singleton;
    if (Skeleton3DEditor::singleton != (StringName *)0x0) {
      StringName::StringName((StringName *)&local_68,"update_joint_tree",false);
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar2,(Variant **)&local_68,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_68,"update_joint_tree",false);
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar2,(Variant **)&local_68,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::reset_pose(bool) */

void __thiscall Skeleton3DEditor::reset_pose(Skeleton3DEditor *this,bool param_1)

{
  Variant *pVVar1;
  undefined4 uVar2;
  StringName *pSVar3;
  int iVar4;
  Object *this_00;
  int iVar5;
  int iVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [12];
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  undefined1 local_16c [12];
  undefined1 local_160 [12];
  undefined1 local_154 [12];
  Variant *local_148;
  Variant *pVStack_140;
  Variant *local_128;
  Variant *pVStack_120;
  Variant local_110 [24];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa18) == 0) || (iVar4 = Skeleton3D::get_bone_count(), iVar4 == 0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010252c;
  }
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  local_180 = 0;
  String::parse_latin1((String *)&local_180,"");
  local_188 = 0;
  String::parse_latin1((String *)&local_188,"Set Bone Transform");
  TTR((String *)&local_178,(String *)&local_188);
  EditorUndoRedoManager::create_action(this_00,(String *)&local_178,1,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (param_1) {
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        auVar8 = Skeleton3D::get_bone_pose_position((int)*(undefined8 *)(this + 0xa18));
        local_16c = auVar8;
        StringName::StringName((StringName *)&local_178,"set_bone_pose_position",false);
        pSVar3 = *(StringName **)(this + 0xa18);
        local_154 = local_16c;
        Variant::Variant((Variant *)&local_128,iVar6);
        Variant::Variant(local_110,local_154);
        local_f8 = 0;
        local_f0 = (undefined1  [16])0x0;
        iVar5 = (int)(Quaternion *)&local_148;
        local_148 = (Variant *)&local_128;
        pVStack_140 = local_110;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar3,(Variant **)&local_178,iVar5);
        pVVar7 = local_e0;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)&local_128);
        if ((StringName::configured != '\0') && (local_178 != 0)) {
          StringName::unref();
        }
        Skeleton3D::get_bone_pose_rotation(iVar5);
        StringName::StringName((StringName *)&local_178,"set_bone_pose_rotation",false);
        pSVar3 = *(StringName **)(this + 0xa18);
        Variant::Variant((Variant *)&local_d8,iVar6);
        Variant::Variant(local_c0,(Quaternion *)&local_148);
        local_a8 = 0;
        local_a0 = (undefined1  [16])0x0;
        local_128 = (Variant *)&local_d8;
        pVStack_120 = local_c0;
        EditorUndoRedoManager::add_undo_methodp
                  (this_00,pSVar3,(Variant **)&local_178,(int)(Variant *)&local_128);
        pVVar7 = local_90;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)&local_d8);
        if ((StringName::configured != '\0') && (local_178 != 0)) {
          StringName::unref();
        }
        auVar8 = Skeleton3D::get_bone_pose_scale((int)*(undefined8 *)(this + 0xa18));
        local_160 = auVar8;
        StringName::StringName((StringName *)&local_178,"set_bone_pose_scale",false);
        pSVar3 = *(StringName **)(this + 0xa18);
        local_128 = (Variant *)local_160._0_8_;
        pVStack_120 = (Variant *)CONCAT44(pVStack_120._4_4_,local_160._8_4_);
        Variant::Variant((Variant *)local_88,iVar6);
        Variant::Variant((Variant *)&local_70,(Variant *)&local_128);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_d8 = (Variant *)local_88;
        pVStack_d0 = (Variant *)&local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (this_00,pSVar3,(Variant **)&local_178,(int)(Variant *)&local_d8);
        pVVar7 = (Variant *)local_40;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_178 != 0)) {
          StringName::unref();
        }
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
    }
    StringName::StringName((StringName *)&local_178,"reset_bone_poses",false);
    EditorUndoRedoManager::add_do_method<>
              ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0xa18),(StringName *)&local_178)
    ;
joined_r0x00102368:
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_178,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_178,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_178,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_178,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
  }
  else if (*(int *)(this + 0xaf0) != -1) {
    auVar8 = Skeleton3D::get_bone_pose_position((int)*(undefined8 *)(this + 0xa18));
    local_148 = auVar8._0_8_;
    uVar2 = *(undefined4 *)(this + 0xaf0);
    pVStack_140 = (Variant *)CONCAT44(pVStack_140._4_4_,auVar8._8_4_);
    StringName::StringName((StringName *)&local_178,"set_bone_pose_position",false);
    EditorUndoRedoManager::add_undo_method<int,Vector3>
              (local_148,(ulong)pVStack_140 & 0xffffffff,this_00,*(undefined8 *)(this + 0xa18),
               (String *)&local_178,uVar2);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    Skeleton3D::get_bone_pose_rotation((int)(Quaternion *)&local_128);
    iVar4 = *(int *)(this + 0xaf0);
    StringName::StringName((StringName *)&local_178,"set_bone_pose_rotation",false);
    pSVar3 = *(StringName **)(this + 0xa18);
    pVVar7 = (Variant *)local_40;
    Variant::Variant((Variant *)local_88,iVar4);
    Variant::Variant((Variant *)&local_70,(Quaternion *)&local_128);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_d8 = (Variant *)local_88;
    pVStack_d0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_undo_methodp(this_00,pSVar3,(Variant **)&local_178,(int)&local_d8);
    do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    auVar8 = Skeleton3D::get_bone_pose_scale((int)*(undefined8 *)(this + 0xa18));
    local_128 = auVar8._0_8_;
    uVar2 = *(undefined4 *)(this + 0xaf0);
    pVStack_120 = (Variant *)CONCAT44(pVStack_120._4_4_,auVar8._8_4_);
    StringName::StringName((StringName *)&local_178,"set_bone_pose_scale",false);
    EditorUndoRedoManager::add_undo_method<int,Vector3>
              (local_128,(ulong)pVStack_120 & 0xffffffff,this_00,*(undefined8 *)(this + 0xa18),
               (String *)&local_178,uVar2);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    iVar4 = *(int *)(this + 0xaf0);
    StringName::StringName((StringName *)&local_178,"reset_bone_pose",false);
    pSVar3 = *(StringName **)(this + 0xa18);
    Variant::Variant((Variant *)local_88,iVar4);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_d8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar3,(Variant **)&local_178,(int)&local_d8);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    goto joined_r0x00102368;
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    return;
  }
LAB_0010252c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::pose_to_rest(bool) */

void __thiscall Skeleton3DEditor::pose_to_rest(Skeleton3DEditor *this,bool param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  int iVar3;
  Object *pOVar4;
  int iVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  Variant *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  Variant *local_168;
  Variant *pVStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  Variant *local_138;
  Variant *pVStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  Variant *local_108;
  Variant *pVStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa18) == 0) || (iVar3 = Skeleton3D::get_bone_count(), iVar3 == 0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00102ce8;
  }
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_1a8 = 0;
  String::parse_latin1((String *)&local_1a8,"");
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"Set Bone Rest");
  TTR((String *)&local_1a0,(String *)&local_1b0);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_1a0,1,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if (param_1) {
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        Skeleton3D::get_bone_pose((int)&local_198);
        StringName::StringName((StringName *)&local_1a0,"set_bone_rest",false);
        pSVar2 = *(StringName **)(this + 0xa18);
        local_108 = local_198;
        pVStack_100 = (Variant *)uStack_190;
        local_f8 = local_188;
        uStack_f0 = uStack_180;
        local_e8 = local_178;
        uStack_e0 = uStack_170;
        Variant::Variant((Variant *)&local_d8,iVar5);
        Variant::Variant((Variant *)&uStack_c0,(Transform3D *)&local_108);
        local_a8 = 0;
        local_a0 = (undefined1  [16])0x0;
        local_138 = (Variant *)&local_d8;
        pVStack_130 = (Variant *)&uStack_c0;
        EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar2,(Variant **)&local_1a0,(int)&local_138);
        pVVar7 = local_90;
        do {
          pVVar6 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)&local_d8);
        if ((StringName::configured != '\0') && (local_1a0 != 0)) {
          StringName::unref();
        }
        Skeleton3D::get_bone_rest((int)&local_168);
        StringName::StringName((StringName *)&local_1a0,"set_bone_rest",false);
        pSVar2 = *(StringName **)(this + 0xa18);
        local_d8 = local_168;
        pVStack_d0 = pVStack_160;
        local_c8 = local_158;
        uStack_c0 = uStack_150;
        local_b8 = local_148;
        uStack_b0 = uStack_140;
        Variant::Variant((Variant *)local_88,iVar5);
        Variant::Variant(local_70,(Variant *)&local_d8);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_108 = (Variant *)local_88;
        pVStack_100 = local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar4,pSVar2,(Variant **)&local_1a0,(int)&local_108);
        pVVar7 = (Variant *)local_40;
        do {
          pVVar6 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_1a0 != 0)) {
          StringName::unref();
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
LAB_00102919:
    StringName::StringName((StringName *)&local_1a0,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_1a0,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1a0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1a0,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_1a0,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1a0 != 0)) {
      StringName::unref();
    }
  }
  else if (*(int *)(this + 0xaf0) != -1) {
    Skeleton3D::get_bone_pose((int)&local_138);
    iVar3 = *(int *)(this + 0xaf0);
    StringName::StringName((StringName *)&local_1a0,"set_bone_rest",false);
    pSVar2 = *(StringName **)(this + 0xa18);
    local_d8 = local_138;
    pVStack_d0 = pVStack_130;
    local_c8 = local_128;
    uStack_c0 = uStack_120;
    local_b8 = local_118;
    uStack_b0 = uStack_110;
    Variant::Variant((Variant *)local_88,iVar3);
    Variant::Variant(local_70,(Transform3D *)&local_d8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_108 = (Variant *)local_88;
    pVStack_100 = local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar2,(Variant **)&local_1a0,(int)&local_108);
    pVVar7 = (Variant *)local_40;
    pVVar6 = pVVar7;
    do {
      pVVar1 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_1a0 != 0)) {
      StringName::unref();
    }
    Skeleton3D::get_bone_rest((int)&local_108);
    iVar3 = *(int *)(this + 0xaf0);
    StringName::StringName((StringName *)&local_1a0,"set_bone_rest",false);
    pSVar2 = *(StringName **)(this + 0xa18);
    local_d8 = local_108;
    pVStack_d0 = pVStack_100;
    local_c8 = local_f8;
    uStack_c0 = uStack_f0;
    local_b8 = local_e8;
    uStack_b0 = uStack_e0;
    Variant::Variant((Variant *)local_88,iVar3);
    Variant::Variant(local_70,(Transform3D *)&local_d8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_168 = (Variant *)local_88;
    pVStack_160 = local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar2,(Variant **)&local_1a0,(int)&local_168);
    do {
      pVVar6 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_1a0 != 0)) {
      StringName::unref();
    }
    goto LAB_00102919;
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    return;
  }
LAB_00102ce8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined4 Skeleton3DEditor::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  Variant *this;
  Object *pOVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  Variant aVStack_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa20));
  if (lVar3 == 0) goto LAB_00102d7f;
  iVar6 = (int)(Variant *)local_58;
  TreeItem::get_metadata(iVar6);
  Variant::operator_cast_to_String(aVStack_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar1 = String::begins_with((char *)aVStack_68);
  if (cVar1 == '\0') {
LAB_00102d75:
    uVar2 = 0;
  }
  else {
    Variant::operator_cast_to_Dictionary(local_60);
    Variant::Variant((Variant *)local_58,"node");
    this = (Variant *)Dictionary::operator[](local_60);
    pOVar4 = Variant::operator_cast_to_Object_(this);
    if (pOVar4 == (Object *)0x0) {
      if (Variant::needs_deinit[local_58[0]] == '\0') {
        Dictionary::~Dictionary((Dictionary *)local_60);
      }
      else {
        Variant::_clear_internal();
        Dictionary::~Dictionary((Dictionary *)local_60);
      }
    }
    else {
      lVar5 = __dynamic_cast(pOVar4,&Object::typeinfo,&TreeItem::typeinfo,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_60);
      if (lVar3 == lVar5) goto LAB_00102d75;
    }
    TreeItem::get_metadata(iVar6);
    Variant::operator_cast_to_String(local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar2 = String::begins_with((char *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_68);
LAB_00102d7f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::move_skeleton_bone(NodePath, int, int) */

void __thiscall
Skeleton3DEditor::move_skeleton_bone
          (Skeleton3DEditor *this,undefined8 param_2,int param_3,int param_4)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  StringName *pSVar7;
  Object *pOVar8;
  int iVar9;
  int iVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  Variant *local_198;
  Variant *pVStack_190;
  Variant *local_178;
  Variant *pVStack_170;
  Variant local_160 [24];
  undefined8 local_148;
  undefined1 local_140 [16];
  Variant local_130 [8];
  Variant local_128 [24];
  Variant local_110 [24];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = Node::get_node_or_null((NodePath *)this);
  if ((lVar6 == 0) ||
     (pSVar7 = (StringName *)__dynamic_cast(lVar6,&Object::typeinfo,&Skeleton3D::typeinfo,0),
     pSVar7 == (StringName *)0x0)) {
    _err_print_error("move_skeleton_bone","editor/plugins/skeleton_3d_editor_plugin.cpp",0x2e8,
                     "Parameter \"skeleton_node\" is null.",0,0);
  }
  else {
    pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
    local_1a8 = "";
    local_1b0 = 0;
    local_1a0 = 0;
    String::parse_latin1((StrRange *)&local_1b0);
    local_1a8 = "Set Bone Parentage";
    local_1b8 = 0;
    local_1a0 = 0x12;
    String::parse_latin1((StrRange *)&local_1b8);
    TTR((String *)&local_1a8,(String *)&local_1b8);
    EditorUndoRedoManager::create_action(pOVar8,(String *)&local_1a8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
    iVar9 = (int)pSVar7;
    cVar2 = Skeleton3D::is_bone_parent_of(iVar9,param_4);
    if (cVar2 != '\0') {
      iVar3 = Skeleton3D::get_bone_parent(iVar9);
      iVar4 = Skeleton3D::get_bone_count();
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          while (iVar5 = Skeleton3D::get_bone_parent(iVar9), iVar5 == param_3) {
            iVar5 = Skeleton3D::get_bone_parent(iVar9);
            StringName::StringName((StringName *)&local_1a8,"set_bone_parent",false);
            Variant::Variant((Variant *)&local_178,iVar10);
            pVVar11 = local_130;
            Variant::Variant(local_160,iVar5);
            local_148 = 0;
            local_140 = (undefined1  [16])0x0;
            local_198 = (Variant *)&local_178;
            pVStack_190 = local_160;
            EditorUndoRedoManager::add_undo_methodp
                      (pOVar8,pSVar7,(Variant **)&local_1a8,(int)&local_198);
            do {
              pVVar1 = pVVar11 + -0x18;
              pVVar11 = pVVar11 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar11 != (Variant *)&local_178);
            if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
              StringName::unref();
            }
            StringName::StringName((StringName *)&local_1a8,"set_bone_parent",false);
            Variant::Variant(local_128,iVar10);
            Variant::Variant(local_110,iVar3);
            local_f0 = (undefined1  [16])0x0;
            pVVar11 = local_e0;
            local_f8 = 0;
            local_178 = local_128;
            pVStack_170 = local_110;
            EditorUndoRedoManager::add_do_methodp
                      (pOVar8,pSVar7,(Variant **)&local_1a8,(int)(Variant *)&local_178);
            do {
              pVVar1 = pVVar11 + -0x18;
              pVVar11 = pVVar11 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar11 != local_128);
            if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
              StringName::unref();
            }
            iVar5 = iVar10 + 1;
            Skeleton3D::set_bone_parent(iVar9,iVar10);
            iVar10 = iVar5;
            if (iVar4 == iVar5) goto LAB_0010306c;
          }
          iVar10 = iVar10 + 1;
        } while (iVar4 != iVar10);
      }
    }
LAB_0010306c:
    iVar3 = Skeleton3D::get_bone_parent(iVar9);
    StringName::StringName((StringName *)&local_1a8,"set_bone_parent",false);
    Variant::Variant((Variant *)&local_d8,param_3);
    pVVar11 = local_90;
    Variant::Variant(local_c0,iVar3);
    local_a8 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_198 = (Variant *)&local_d8;
    pVStack_190 = local_c0;
    EditorUndoRedoManager::add_undo_methodp(pOVar8,pSVar7,(Variant **)&local_1a8,(int)&local_198);
    do {
      pVVar1 = pVVar11 + -0x18;
      pVVar11 = pVVar11 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar11 != (Variant *)&local_d8);
    if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1a8,"set_bone_parent",false);
    pVVar11 = (Variant *)local_40;
    Variant::Variant((Variant *)local_88,param_3);
    Variant::Variant(local_70,param_4);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_d8 = (Variant *)local_88;
    pVStack_d0 = local_70;
    EditorUndoRedoManager::add_do_methodp
              (pOVar8,pSVar7,(Variant **)&local_1a8,(int)(Variant *)&local_d8);
    do {
      pVVar1 = pVVar11 + -0x18;
      pVVar11 = pVVar11 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar11 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1a8,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar8,(StringName *)this,(Variant **)&local_1a8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_1a8,"update_joint_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar8,(StringName *)this,(Variant **)&local_1a8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
      StringName::unref();
    }
    Skeleton3D::set_bone_parent(iVar9,param_3);
    EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Skeleton3DEditor::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void Skeleton3DEditor::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Variant *this;
  Object *pOVar4;
  int iVar5;
  int iVar6;
  wchar32 wVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_68 [8];
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = can_drop_data_fw(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa20));
    Variant::operator_cast_to_Dictionary(local_60);
    Variant::Variant((Variant *)local_58,"node");
    this = (Variant *)Dictionary::operator[](local_60);
    pOVar4 = Variant::operator_cast_to_Object_(this);
    if (pOVar4 != (Object *)0x0) {
      __dynamic_cast(pOVar4,&Object::typeinfo,&TreeItem::typeinfo,0);
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_60);
    iVar6 = (int)(Variant *)local_58;
    TreeItem::get_metadata(iVar6);
    Variant::operator_cast_to_String(local_60);
    iVar5 = (int)local_60;
    wVar7 = (wchar32)local_68;
    String::get_slicec(wVar7,iVar5);
    uVar2 = String::to_int();
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    TreeItem::get_metadata(iVar6);
    Variant::operator_cast_to_String(local_60);
    String::get_slicec(wVar7,iVar5);
    uVar3 = String::to_int();
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Node::get_path();
    move_skeleton_bone((Skeleton3DEditor *)param_1,local_60,uVar3,uVar2);
    NodePath::~NodePath((NodePath *)local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::insert_keys(bool) */

void Skeleton3DEditor::insert_keys(bool param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char in_SIL;
  undefined7 in_register_00000039;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float in_XMM1_Da;
  float fVar14;
  NodePath local_88 [8];
  long local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  int local_58 [6];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  lVar10 = CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(lVar10 + 0xa18) != 0) {
    cVar5 = BaseButton::is_pressed();
    cVar6 = BaseButton::is_pressed();
    cVar7 = BaseButton::is_pressed();
    iVar9 = Skeleton3D::get_bone_count();
    if (*(long *)(EditorNode::singleton + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar11 = 0;
    Node::get_path_to((Node *)&local_80,
                      SUB81(*(undefined8 *)(*(long *)(EditorNode::singleton + 0x240) + 0x368),0));
    NodePath::operator_cast_to_String(local_88);
    NodePath::~NodePath((NodePath *)&local_80);
    uVar2 = *(undefined8 *)(AnimationPlayerEditor::singleton + 0xb30);
    AnimationTrackEditor::make_insert_queue();
    if (0 < iVar9) {
      do {
        while (Skeleton3D::get_bone_name((int)(Node *)&local_80), lVar4 = local_80, local_80 == 0) {
LAB_00103961:
          iVar11 = iVar11 + 1;
          if (iVar9 == iVar11) goto LAB_00103b32;
        }
        if (*(uint *)(local_80 + -8) < 2) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
          goto LAB_00103961;
        }
        if (cVar5 == '\0') {
LAB_00103a4c:
          if (cVar6 != '\0') {
            if (in_SIL == '\0') goto LAB_00103b9f;
LAB_00103a5c:
            Skeleton3D::get_bone_pose_rotation((int)(Quaternion *)&local_68);
            Variant::Variant((Variant *)local_58,(Quaternion *)&local_68);
            AnimationTrackEditor::insert_transform_key
                      (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,2,(Variant *)local_58
                      );
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (cVar7 != '\0') {
            if (in_SIL == '\0') goto LAB_00103bc9;
LAB_00103ac1:
            local_68 = Skeleton3D::get_bone_pose_scale((int)*(undefined8 *)(lVar10 + 0xa18));
            local_60 = in_XMM1_Da;
            Variant::Variant((Variant *)local_58,(Quaternion *)&local_68);
            AnimationTrackEditor::insert_transform_key
                      (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,3,(Variant *)local_58
                      );
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        else {
          fVar14 = in_XMM1_Da;
          if ((in_SIL != '\0') ||
             (cVar8 = AnimationTrackEditor::has_track
                                (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,1),
             fVar14 = in_XMM1_Da, cVar8 != '\0')) {
            in_XMM1_Da = (float)Skeleton3D::get_motion_scale();
            auVar13._4_4_ = in_XMM1_Da;
            auVar13._0_4_ = in_XMM1_Da;
            auVar12._0_8_ = Skeleton3D::get_bone_pose_position((int)*(undefined8 *)(lVar10 + 0xa18))
            ;
            auVar12._8_8_ = extraout_XMM0_Qb;
            in_XMM1_Da = fVar14 / in_XMM1_Da;
            auVar13._8_4_ = (int)_LC33;
            auVar13._12_4_ = (int)((ulong)_LC33 >> 0x20);
            auVar13 = divps(auVar12,auVar13);
            local_78 = auVar13._0_8_;
            local_70 = in_XMM1_Da;
            local_68 = auVar12._0_8_;
            local_60 = fVar14;
            Variant::Variant((Variant *)local_58,(Vector3 *)&local_78);
            AnimationTrackEditor::insert_transform_key
                      (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,1,(Variant *)local_58
                      );
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            goto LAB_00103a4c;
          }
          if (cVar6 != '\0') {
LAB_00103b9f:
            cVar8 = AnimationTrackEditor::has_track
                              (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,2);
            if (cVar8 != '\0') goto LAB_00103a5c;
          }
          if (cVar7 != '\0') {
LAB_00103bc9:
            cVar8 = AnimationTrackEditor::has_track
                              (uVar2,*(undefined8 *)(lVar10 + 0xa18),(Node *)&local_80,3);
            if (cVar8 != '\0') goto LAB_00103ac1;
          }
        }
        iVar11 = iVar11 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      } while (iVar9 != iVar11);
    }
LAB_00103b32:
    AnimationTrackEditor::commit_insert_queue();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonePropertiesEditor::create_editors() */

void __thiscall BonePropertiesEditor::create_editors(BonePropertiesEditor *this)

{
  code *pcVar1;
  String *pSVar2;
  EditorInspectorSection *pEVar3;
  EditorPropertyCheck *this_00;
  undefined8 uVar4;
  EditorPropertyVector3 *pEVar5;
  EditorPropertyQuaternion *this_01;
  EditorPropertyTransform3D *this_02;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar3 = (EditorInspectorSection *)operator_new(0xa78,"");
  EditorInspectorSection::EditorInspectorSection(pEVar3);
  postinitialize_handler((Object *)pEVar3);
  *(EditorInspectorSection **)(this + 0xa10) = pEVar3;
  local_70 = 0;
  local_68 = "trf_properties";
  local_58 = __LC83;
  uStack_50 = _LC35;
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_70);
  bVar8 = SUB81(&local_58,0);
  EditorInspectorSection::setup
            ((String *)pEVar3,(String *)&local_70,(Object *)(this + 0xac0),(Color *)this,bVar8,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorInspectorSection::unfold();
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  this_00 = (EditorPropertyCheck *)operator_new(0xb60,"");
  EditorPropertyCheck::EditorPropertyCheck(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorPropertyCheck **)(this + 0xa18) = this_00;
  local_70 = 0;
  local_68 = "Pose Enabled";
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar6 = *(long **)(this + 0xa18);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)
             "&BonePropertiesEditor::_value_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa18),0,0);
  pEVar5 = (EditorPropertyVector3 *)operator_new(0xb90,"");
  EditorPropertyVector3::EditorPropertyVector3(pEVar5,false);
  postinitialize_handler((Object *)pEVar5);
  *(EditorPropertyVector3 **)(this + 0xa20) = pEVar5;
  local_68 = (char *)0x0;
  bVar7 = SUB81((BonePropertiesEditor *)&local_68,0);
  EditorPropertyVectorN::setup(_LC90,_LC89,_LC88,SUB81(pEVar5,0),true,(String *)0x0,bVar7,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar2 = *(String **)(this + 0xa20);
  local_70 = 0;
  local_68 = "Position";
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar6 = *(long **)(this + 0xa20);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)
             "&BonePropertiesEditor::_value_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar6 = *(long **)(this + 0xa20);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_bool *)"&BonePropertiesEditor::_property_keyed");
  StringName::StringName((StringName *)&local_70,"property_keyed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa20),0,0);
  this_01 = (EditorPropertyQuaternion *)operator_new(0xbd0,"");
  EditorPropertyQuaternion::EditorPropertyQuaternion(this_01);
  postinitialize_handler((Object *)this_01);
  *(EditorPropertyQuaternion **)(this + 0xa28) = this_01;
  local_68 = (char *)0x0;
  EditorPropertyQuaternion::setup(_LC90,_LC89,_LC88,SUB81(this_01,0),(String *)0x1,bVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar2 = *(String **)(this + 0xa28);
  local_70 = 0;
  local_68 = "Rotation";
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa28),0));
  plVar6 = *(long **)(this + 0xa28);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)
             "&BonePropertiesEditor::_value_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar6 = *(long **)(this + 0xa28);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_bool *)"&BonePropertiesEditor::_property_keyed");
  StringName::StringName((StringName *)&local_70,"property_keyed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa28),0,0);
  pEVar5 = (EditorPropertyVector3 *)operator_new(0xb90,"");
  EditorPropertyVector3::EditorPropertyVector3(pEVar5,false);
  postinitialize_handler((Object *)pEVar5);
  *(EditorPropertyVector3 **)(this + 0xa30) = pEVar5;
  local_68 = (char *)0x0;
  EditorPropertyVectorN::setup(_LC90,_LC89,_LC88,SUB81(pEVar5,0),true,(String *)0x1,bVar7,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar2 = *(String **)(this + 0xa30);
  local_70 = 0;
  local_68 = "Scale";
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa30),0));
  plVar6 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)
             "&BonePropertiesEditor::_value_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar6 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,bool>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void_String_ptr_bool *)"&BonePropertiesEditor::_property_keyed");
  StringName::StringName((StringName *)&local_70,"property_keyed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa30),0,0);
  pEVar3 = (EditorInspectorSection *)operator_new(0xa78,"");
  EditorInspectorSection::EditorInspectorSection(pEVar3);
  postinitialize_handler((Object *)pEVar3);
  *(EditorInspectorSection **)(this + 0xa38) = pEVar3;
  local_70 = 0;
  local_68 = "Rest";
  local_58 = __LC83;
  uStack_50 = _LC35;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "trf_properties_transform";
  local_78 = 0;
  local_60 = 0x18;
  String::parse_latin1((StrRange *)&local_78);
  EditorInspectorSection::setup
            ((String *)pEVar3,(String *)&local_78,(Object *)&local_70,(Color *)this,bVar8,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa38),0,0);
  this_02 = (EditorPropertyTransform3D *)operator_new(3000,"");
  EditorPropertyTransform3D::EditorPropertyTransform3D(this_02);
  postinitialize_handler((Object *)this_02);
  *(EditorPropertyTransform3D **)(this + 0xa40) = this_02;
  local_68 = (char *)0x0;
  EditorPropertyTransform3D::setup(_LC90,_LC89,_LC88,SUB81(this_02,0),(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar2 = *(String **)(this + 0xa40);
  local_70 = 0;
  local_68 = "Transform";
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa40),0));
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa40),0,0);
  pEVar3 = (EditorInspectorSection *)operator_new(0xa78,"");
  EditorInspectorSection::EditorInspectorSection(pEVar3);
  postinitialize_handler((Object *)pEVar3);
  *(EditorInspectorSection **)(this + 0xa48) = pEVar3;
  local_68 = "";
  local_58 = __LC83;
  uStack_50 = _LC35;
  local_80 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = "Bone Metadata";
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  local_68 = "bone_meta";
  local_70 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_70);
  EditorInspectorSection::setup
            ((String *)pEVar3,(String *)&local_70,(Object *)&local_78,(Color *)this,bVar8,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa48),0,0);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Add Bone Metadata";
  local_78 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  uVar4 = EditorInspector::create_inspector_action_button((String *)&local_68);
  *(undefined8 *)(this + 0xa58) = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar6 = *(long **)(this + 0xa58);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void *)"&BonePropertiesEditor::_show_add_meta_dialog");
  (*pcVar1)(plVar6,SceneStringNames::singleton + 0x238,(BonePropertiesEditor *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  uVar4 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar4,*(undefined8 *)(this + 0xa58),0,0);
  plVar6 = (long *)EditorUndoRedoManager::get_singleton();
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void *)"&BonePropertiesEditor::_update_properties");
  StringName::StringName((StringName *)&local_70,"version_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  pcVar1 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BonePropertiesEditor>
            ((BonePropertiesEditor *)&local_68,(char *)this,
             (_func_void *)"&BonePropertiesEditor::_update_properties");
  StringName::StringName((StringName *)&local_70,"history_changed",false);
  (*pcVar1)(plVar6,(StrRange *)&local_70,(BonePropertiesEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::BonePropertiesEditor(Skeleton3D*) */

void __thiscall
BonePropertiesEditor::BonePropertiesEditor(BonePropertiesEditor *this,Skeleton3D *param_1)

{
  BonePropertiesEditor *pBVar1;
  BonePropertiesEditor *pBVar2;
  
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (BonePropertiesEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001285d0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  pBVar1 = this + 0xa60;
  do {
    *(undefined8 *)pBVar1 = 0;
    pBVar2 = pBVar1 + 0x10;
    *(undefined8 *)(pBVar1 + 8) = 0;
    pBVar1 = pBVar2;
  } while (pBVar2 != this + 0xab0);
  *(Skeleton3D **)(this + 0xab0) = param_1;
  *(undefined2 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xaf0) = 2;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  create_editors(this);
  return;
}



/* Skeleton3DGizmoPlugin::commit_subgizmos(EditorNode3DGizmo const*, Vector<int> const&,
   Vector<Transform3D> const&, bool) */

void Skeleton3DGizmoPlugin::commit_subgizmos
               (EditorNode3DGizmo *param_1,Vector *param_2,Vector *param_3,bool param_4)

{
  Variant *pVVar1;
  int iVar2;
  code *pcVar3;
  Object *pOVar4;
  uint uVar5;
  StringName *pSVar6;
  Object *this;
  Variant *pVVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [12];
  Quaternion *local_3a0;
  Variant **local_388;
  undefined8 local_308;
  undefined8 local_300;
  char *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e0 [12];
  Variant *local_2d4;
  undefined4 local_2cc;
  undefined1 local_2c8 [12];
  undefined8 local_2bc;
  undefined4 local_2b4;
  Variant *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  Quaternion local_298 [16];
  Variant *local_288;
  undefined1 auStack_280 [16];
  Variant local_268 [24];
  Variant local_250 [24];
  undefined8 local_238;
  undefined1 local_230 [16];
  Variant local_220 [8];
  Variant local_218 [24];
  Variant local_200 [24];
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  Variant local_1d0 [8];
  Variant local_1c8 [24];
  Variant local_1b0 [24];
  undefined8 local_198;
  undefined1 local_190 [16];
  Variant local_180 [8];
  Variant local_178 [24];
  Variant local_160 [24];
  undefined8 local_148;
  undefined1 local_140 [16];
  Variant local_130 [8];
  Variant *local_128;
  Variant *pVStack_120;
  Variant local_110 [24];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant *local_88;
  Variant *pVStack_80;
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x1f0) == 0) ||
     (pSVar6 = (StringName *)
               __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,&Skeleton3D::typeinfo),
     lVar8 = Node3DEditor::singleton, pOVar4 = Skeleton3DEditor::singleton,
     pSVar6 == (StringName *)0x0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("commit_subgizmos","editor/plugins/skeleton_3d_editor_plugin.cpp",0x639,
                       "Parameter \"skeleton\" is null.",0,0);
      return;
    }
    goto LAB_00105706;
  }
  this = (Object *)EditorUndoRedoManager::get_singleton();
  local_2f8 = "";
  local_300 = 0;
  local_2f0 = 0;
  String::parse_latin1((StrRange *)&local_300);
  local_2f8 = "Set Bone Transform";
  local_308 = 0;
  local_2f0 = 0x12;
  String::parse_latin1((StrRange *)&local_308);
  TTR((String *)&local_2f8,(String *)&local_308);
  EditorUndoRedoManager::create_action(this,(String *)&local_2f8,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_300);
  uVar5 = *(uint *)(lVar8 + 0xa60);
  if (uVar5 < 2) {
    lVar9 = *(long *)(param_3 + 8);
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(lVar9 + -8) <= lVar11) {
          uVar5 = *(uint *)(lVar8 + 0xa60);
          goto LAB_00105360;
        }
        auVar12 = Skeleton3D::get_bone_pose_position((int)pSVar6);
        lVar9 = *(long *)(param_3 + 8);
        local_2e0 = auVar12;
        if (lVar9 == 0) goto LAB_001052c8;
        lVar10 = *(long *)(lVar9 + -8);
        if (lVar10 <= lVar11) goto LAB_001052e9;
        iVar2 = *(int *)(lVar9 + lVar11 * 4);
        StringName::StringName((StringName *)&local_2f8,"set_bone_pose_position",false);
        local_d8 = (Variant *)local_2e0._0_8_;
        pVStack_d0 = (Variant *)CONCAT44(pVStack_d0._4_4_,local_2e0._8_4_);
        Variant::Variant(local_268,iVar2);
        Variant::Variant(local_250,(Vector3 *)&local_d8);
        local_238 = 0;
        local_230 = (undefined1  [16])0x0;
        local_88 = local_268;
        pVStack_80 = local_250;
        EditorUndoRedoManager::add_do_methodp(this,pSVar6,(Variant **)&local_2f8,(int)&local_88);
        pVVar7 = local_220;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != local_268);
        if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
          StringName::unref();
        }
        local_2cc = *(undefined4 *)(pOVar4 + 0xad0);
        local_2d4 = *(Variant **)(pOVar4 + 0xac8);
        lVar9 = *(long *)(param_3 + 8);
        local_2b0 = local_2d4;
        local_2a8 = local_2cc;
        if (lVar9 == 0) goto LAB_001052c8;
        lVar10 = *(long *)(lVar9 + -8);
        if (lVar10 <= lVar11) goto LAB_001052e9;
        iVar2 = *(int *)(lVar9 + lVar11 * 4);
        StringName::StringName((StringName *)&local_2f8,"set_bone_pose_position",false);
        pVVar7 = local_1d0;
        local_d8 = local_2d4;
        pVStack_d0 = (Variant *)CONCAT44(pVStack_d0._4_4_,local_2cc);
        Variant::Variant(local_218,iVar2);
        Variant::Variant(local_200,(Vector3 *)&local_d8);
        local_1e8 = 0;
        local_1e0 = (undefined1  [16])0x0;
        local_88 = local_218;
        pVStack_80 = local_200;
        EditorUndoRedoManager::add_undo_methodp(this,pSVar6,(Variant **)&local_2f8,(int)&local_88);
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != local_218);
        if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
          StringName::unref();
        }
        lVar11 = lVar11 + 1;
        lVar9 = *(long *)(param_3 + 8);
      } while (lVar9 != 0);
      uVar5 = *(uint *)(lVar8 + 0xa60);
      if ((uVar5 & 0xfffffffd) != 0) goto LAB_00104d39;
    }
  }
  else {
LAB_00105360:
    if ((uVar5 & 0xfffffffd) == 0) {
      lVar9 = *(long *)(param_3 + 8);
      if (lVar9 != 0) {
        lVar11 = 0;
        do {
          local_388 = &local_88;
          local_3a0 = (Quaternion *)&local_d8;
          if (*(long *)(lVar9 + -8) <= lVar11) {
            uVar5 = *(uint *)(lVar8 + 0xa60);
            goto LAB_00104d39;
          }
          Skeleton3D::get_bone_pose_rotation((int)local_3a0);
          lVar9 = *(long *)(param_3 + 8);
          if (lVar9 == 0) goto LAB_001052c8;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          iVar2 = *(int *)(lVar9 + lVar11 * 4);
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_rotation",false);
          Variant::Variant(local_1c8,iVar2);
          Variant::Variant(local_1b0,local_3a0);
          local_198 = 0;
          local_190 = (undefined1  [16])0x0;
          local_88 = local_1c8;
          pVStack_80 = local_1b0;
          EditorUndoRedoManager::add_do_methodp(this,pSVar6,(Variant **)&local_2f8,(int)local_388);
          pVVar7 = local_180;
          do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
            local_388 = &local_88;
            local_3a0 = (Quaternion *)&local_d8;
          } while (pVVar7 != local_1c8);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          local_d8 = *(Variant **)(pOVar4 + 0xad4);
          pVStack_d0 = *(Variant **)(pOVar4 + 0xadc);
          lVar9 = *(long *)(param_3 + 8);
          if (lVar9 == 0) goto LAB_001052c8;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          iVar2 = *(int *)(lVar9 + lVar11 * 4);
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_rotation",false);
          pVVar7 = local_130;
          Variant::Variant(local_178,iVar2);
          Variant::Variant(local_160,local_3a0);
          local_148 = 0;
          local_140 = (undefined1  [16])0x0;
          local_88 = local_178;
          pVStack_80 = local_160;
          EditorUndoRedoManager::add_undo_methodp(this,pSVar6,(Variant **)&local_2f8,(int)local_388)
          ;
          do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar7 != local_178);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          lVar9 = *(long *)(param_3 + 8);
        } while (lVar9 != 0);
      }
    }
    else {
LAB_00104d39:
      auVar12._8_4_ = local_2c8._8_4_;
      auVar12._0_8_ = local_2c8._0_8_;
      if ((uVar5 == 3) && (lVar8 = *(long *)(param_3 + 8), local_2c8 = auVar12, lVar8 != 0)) {
        lVar11 = 0;
        do {
          if (*(long *)(lVar8 + -8) <= lVar11) break;
          lVar8 = lVar11 * 4;
          Skeleton3D::get_bone_pose_rotation((int)local_298);
          lVar9 = *(long *)(param_3 + 8);
          if (lVar9 == 0) {
LAB_0010566d:
            lVar10 = 0;
            goto LAB_001052e9;
          }
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          pVVar7 = local_e0;
          iVar2 = *(int *)(lVar9 + lVar8);
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_rotation",false);
          Variant::Variant((Variant *)&local_128,iVar2);
          Variant::Variant(local_110,local_298);
          local_f8 = 0;
          local_f0 = (undefined1  [16])0x0;
          auStack_280._0_8_ = local_110;
          local_288 = (Variant *)&local_128;
          EditorUndoRedoManager::add_do_methodp
                    (this,pSVar6,(Variant **)&local_2f8,(int)(Quaternion *)&local_288);
          do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar7 != (Variant *)&local_128);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          local_288 = *(Variant **)(pOVar4 + 0xad4);
          lVar9 = *(long *)(param_3 + 8);
          auStack_280._0_8_ = *(undefined8 *)(pOVar4 + 0xadc);
          if (lVar9 == 0) goto LAB_0010566d;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          iVar2 = *(int *)(lVar9 + lVar8);
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_rotation",false);
          Variant::Variant((Variant *)&local_d8,iVar2);
          pVVar7 = local_90;
          Variant::Variant(local_c0,(Quaternion *)&local_288);
          local_a8 = 0;
          local_a0 = (undefined1  [16])0x0;
          local_128 = (Variant *)&local_d8;
          pVStack_120 = local_c0;
          EditorUndoRedoManager::add_undo_methodp
                    (this,pSVar6,(Variant **)&local_2f8,(int)(Variant *)&local_128);
          do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar7 != (Variant *)&local_d8);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          if (*(long *)(param_3 + 8) == 0) goto LAB_0010566d;
          lVar10 = *(long *)(*(long *)(param_3 + 8) + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          auVar12 = Skeleton3D::get_bone_pose_scale((int)pSVar6);
          lVar9 = *(long *)(param_3 + 8);
          local_2c8 = auVar12;
          if (lVar9 == 0) goto LAB_0010566d;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          iVar2 = *(int *)(lVar9 + lVar8);
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_scale",false);
          pVVar7 = (Variant *)local_40;
          local_128 = (Variant *)local_2c8._0_8_;
          pVStack_120 = (Variant *)CONCAT44(pVStack_120._4_4_,local_2c8._8_4_);
          Variant::Variant((Variant *)&local_88,iVar2);
          Variant::Variant(local_70,(Variant *)&local_128);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          local_d8 = (Variant *)&local_88;
          pVStack_d0 = local_70;
          EditorUndoRedoManager::add_do_methodp
                    (this,pSVar6,(Variant **)&local_2f8,(int)(Variant *)&local_d8);
          do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar7 != (Variant *)&local_88);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          local_2b4 = *(undefined4 *)(pOVar4 + 0xaec);
          local_2bc = *(undefined8 *)(pOVar4 + 0xae4);
          local_2a4 = local_2bc;
          local_29c = local_2b4;
          if (*(long *)(param_3 + 8) == 0) goto LAB_0010566d;
          lVar10 = *(long *)(*(long *)(param_3 + 8) + -8);
          if (lVar10 <= lVar11) goto LAB_001052e9;
          StringName::StringName((StringName *)&local_2f8,"set_bone_pose_scale",false);
          EditorUndoRedoManager::add_undo_method<int,Vector3>
                    (local_2bc,local_2b4,this,pSVar6,(String *)&local_2f8);
          if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
            StringName::unref();
          }
          lVar11 = lVar11 + 1;
          lVar8 = *(long *)(param_3 + 8);
        } while (lVar8 != 0);
      }
    }
  }
  StringName::StringName((StringName *)&local_2f8,"update_joint_tree",false);
  EditorUndoRedoManager::add_do_method<>
            ((EditorUndoRedoManager *)this,pOVar4,(StringName *)&local_2f8);
  if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2f8,"update_joint_tree",false);
  local_288 = (Variant *)0x0;
  auStack_280 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(this,(StringName *)pOVar4,(Variant **)&local_2f8,0);
  if (Variant::needs_deinit[(int)local_288] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_2f8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(this,0));
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105706:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001052c8:
  lVar10 = 0;
LAB_001052e9:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DEditor::create_physical_bone(int, int, Vector<Skeleton3DEditor::BoneInfo> const&) */

PhysicalBone3D * Skeleton3DEditor::create_physical_bone(int param_1,int param_2,Vector *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  CapsuleShape3D *pCVar3;
  CollisionShape3D *this;
  PhysicalBone3D *this_00;
  long in_FS_OFFSET;
  float fVar4;
  double dVar5;
  float fVar6;
  Vector3 local_168 [32];
  float local_148;
  undefined8 local_130;
  CapsuleShape3D *local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined1 local_108 [36];
  float local_e4;
  float local_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  float fStack_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Skeleton3D::get_bone_rest((int)local_108);
  fVar4 = SQRT(local_e4 * local_e4 + local_e0 * local_e0 + fStack_dc * fStack_dc) * _LC111;
  dVar5 = (double)fVar4 * __LC112;
  pCVar3 = (CapsuleShape3D *)operator_new(0x280,"");
  CapsuleShape3D::CapsuleShape3D(pCVar3);
  postinitialize_handler((Object *)pCVar3);
  CapsuleShape3D::set_height(fVar4 + fVar4);
  CapsuleShape3D::set_radius((float)dVar5);
  this = (CollisionShape3D *)operator_new(0x558,"");
  CollisionShape3D::CollisionShape3D(this);
  postinitialize_handler((Object *)this);
  local_128 = pCVar3;
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    local_128 = (CapsuleShape3D *)0x0;
  }
  CollisionShape3D::set_shape((Ref *)this);
  if (local_128 != (CapsuleShape3D *)0x0) {
    cVar2 = RefCounted::unreference();
    pCVar3 = local_128;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)local_128);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
        Memory::free_static(pCVar3,false);
      }
    }
  }
  local_130 = 0;
  local_128 = (CapsuleShape3D *)0x11467c;
  local_120 = 0x10;
  String::parse_latin1((StrRange *)&local_130);
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  local_d8 = ZEXT416(_LC11);
  local_c8 = __LC114;
  uStack_c0 = _UNK_0012a108;
  local_b4 = 0;
  local_ac = 0;
  local_b8 = 0;
  Node3D::set_transform(this);
  local_110 = 0;
  local_118 = _LC35;
  local_78._8_4_ = local_e0 * 0.0 - local_e4;
  auVar1 = local_78;
  local_78._4_4_ = local_e4 * 0.0 - fStack_dc * 0.0;
  local_78._0_4_ = fStack_dc - local_e0 * 0.0;
  local_78._8_8_ = auVar1._8_8_;
  cVar2 = Vector3::is_zero_approx();
  if (cVar2 != '\0') {
    local_118 = 0;
    local_110 = _LC11;
  }
  local_a8 = ZEXT416(_LC11);
  _local_98 = ZEXT416(_LC11);
  local_88 = (float)_LC11;
  local_84 = 0;
  local_7c = 0.0;
  Basis::looking_at(local_168,(Vector3 *)&local_e4,SUB81(&local_118,0));
  local_88 = local_148;
  local_98._8_4_ = (undefined4)local_168._24_8_;
  fVar6 = (float)((uint)fVar4 ^ __LC116);
  local_98._0_4_ = (undefined4)local_168._16_8_;
  local_78 = ZEXT416(_LC11);
  fStack_8c = SUB84(local_168._24_8_,4);
  local_68 = ZEXT416(_LC11);
  local_58 = 0x3f800000;
  local_50 = 0;
  local_7c = local_148 * fVar6 + (float)local_98._8_4_ * 0.0 + fStack_8c * 0.0;
  local_a8._4_4_ = SUB84(local_168._0_8_,4);
  local_84 = CONCAT44((float)local_98._0_4_ * 0.0 + SUB84(local_168._8_8_,4) * 0.0 +
                      SUB84(local_168._16_8_,4) * fVar6,
                      (float)local_a8._4_4_ * 0.0 + (float)local_168._0_8_ * 0.0 +
                      (float)local_168._8_8_ * fVar6);
  local_4c = fVar4;
  this_00 = (PhysicalBone3D *)operator_new(0x738,"");
  PhysicalBone3D::PhysicalBone3D(this_00);
  postinitialize_handler((Object *)this_00);
  Node::add_child(this_00,this,0,0);
  Skeleton3D::get_bone_name((int)(StrRange *)&local_130);
  operator+((char *)&local_128,(String *)"Physical Bone ");
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  PhysicalBone3D::set_body_offset(this_00);
  PhysicalBone3D::set_joint_offset(this_00);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * Skeleton3DEditor::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  BoxContainer *this;
  BoxContainer *this_00;
  TextureRect *this_01;
  Object *pOVar4;
  Label *this_02;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_80;
  int local_78 [8];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar2 = (Object *)Tree::get_selected();
  if (pOVar2 == (Object *)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    goto LAB_00105f80;
  }
  iVar6 = (int)(CowData<char32_t> *)&local_80;
  TreeItem::get_icon(iVar6);
  if (local_80 == (Object *)0x0) {
    pOVar3 = (Object *)0x0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_80,&Object::typeinfo,&Texture::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar3 = (Object *)0x0;
      }
      if (local_80 == (Object *)0x0) goto LAB_00105c72;
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_80);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
    }
  }
LAB_00105c72:
  this = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this,true);
  this[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00128258;
  postinitialize_handler((Object *)this);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00127ee0;
  postinitialize_handler((Object *)this_00);
  this_01 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_01);
  postinitialize_handler((Object *)this_01);
  local_80 = (Object *)0x0;
  if (pOVar3 != (Object *)0x0) {
    pOVar4 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      local_80 = pOVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_80 = (Object *)0x0;
      }
    }
  }
  TextureRect::set_texture((Ref *)this_01);
  if (local_80 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar4 = local_80;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_80);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))();
        Memory::free_static(pOVar4,false);
      }
    }
  }
  TextureRect::set_stretch_mode(this_01,3);
  Node::add_child(this_00,this_01,0,0);
  this_02 = (Label *)operator_new(0xad8,"");
  TreeItem::get_text(iVar6);
  Label::Label(this_02,(String *)&local_80);
  postinitialize_handler((Object *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  Node::set_auto_translate_mode(this_02,2);
  Node::add_child(this_00,this_02,0,0);
  Node::add_child(this,this_00,0,0);
  local_58 = _LC11;
  iStack_54 = _LC11;
  iStack_50 = _LC11;
  iStack_4c = _LC11;
  CanvasItem::set_modulate((Color *)this_00);
  Control::set_drag_preview(param_2);
  Dictionary::Dictionary((Dictionary *)&local_80);
  Variant::Variant((Variant *)&local_58,"nodes");
  Variant::Variant((Variant *)local_78,"type");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)&local_80);
  if (pVVar5 != (Variant *)&local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58;
    *(ulong *)(pVVar5 + 8) = CONCAT44(iStack_4c,iStack_50);
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58 = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_58,pOVar2);
  Variant::Variant((Variant *)local_78,"node");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)&local_80);
  if (pVVar5 != (Variant *)&local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58;
    *(ulong *)(pVVar5 + 8) = CONCAT44(iStack_4c,iStack_50);
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58 = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)param_1,(Dictionary *)&local_80);
  Dictionary::~Dictionary((Dictionary *)&local_80);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00105f80:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* BonePropertiesEditor::_meta_deleted(String const&) */

void __thiscall BonePropertiesEditor::_meta_deleted(BonePropertiesEditor *this,String *param_1)

{
  undefined8 uVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  wchar32 wVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  CowData<char32_t> local_a0 [8];
  long local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xab0) != 0) {
    iVar6 = (int)param_1;
    wVar8 = (wchar32)(String *)&local_90;
    String::get_slicec(wVar8,iVar6);
    cVar3 = String::operator!=((String *)&local_90,"bone_meta");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar3 == '\0') {
      String::get_slicec(wVar8,iVar6);
      iVar4 = String::to_int();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      iVar5 = Skeleton3D::get_bone_count();
      if (iVar4 < iVar5) {
        String::get_slicec((wchar32)local_c0,iVar6);
        uVar1 = *(undefined8 *)(this + 0xab0);
        StringName::StringName((StringName *)&local_90,(String *)local_c0,false);
        cVar3 = Skeleton3D::has_bone_meta((int)uVar1,(StringName *)0x1);
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
          Skeleton3D::get_bone_name((int)local_a0);
          local_98 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_c0);
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"Remove metadata \'%s\' from bone \'%s\'");
          TTR(local_a8,(String *)&local_b8);
          vformat<String,String>
                    ((String *)&local_90,local_a8,(CowData<char32_t> *)&local_98,local_a0);
          EditorUndoRedoManager::create_action(pOVar7,(String *)&local_90,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref(local_a0);
          local_70 = (undefined1  [16])0x0;
          local_78[0] = 0;
          local_78[1] = 0;
          StringName::StringName((StringName *)&local_90,param_1,false);
          EditorUndoRedoManager::add_do_property
                    (pOVar7,*(StringName **)(this + 0xab0),(Variant *)&local_90);
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          pSVar2 = *(StringName **)(this + 0xab0);
          StringName::StringName((StringName *)&local_98,(String *)local_c0,false);
          Skeleton3D::get_bone_meta((int)(Variant *)local_78,pSVar2);
          StringName::StringName((StringName *)&local_90,param_1,false);
          EditorUndoRedoManager::add_undo_property
                    (pOVar7,*(StringName **)(this + 0xab0),(Variant *)&local_90);
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
          local_90 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)param_1);
          if (_meta_deleted(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
            iVar6 = __cxa_guard_acquire(&_meta_deleted(String_const&)::{lambda()#1}::operator()()::
                                         sname);
            if (iVar6 != 0) {
              _scs_create((char *)&_meta_deleted(String_const&)::{lambda()#1}::operator()()::sname,
                          true);
              __cxa_atexit(StringName::~StringName,
                           &_meta_deleted(String_const&)::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_meta_deleted(String_const&)::{lambda()#1}::operator()()::sname);
            }
          }
          Variant::Variant((Variant *)local_78,(String *)&local_90);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&_meta_deleted(String_const&)::{lambda()#1}::operator()()::sname,local_88,
                     1);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        }
        CowData<char32_t>::_unref(local_c0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_joint_tree_button_clicked(Object*, int, int, MouseButton) */

void Skeleton3DEditor::_joint_tree_button_clicked(StringName *param_1,long param_2)

{
  bool *pbVar1;
  char cVar2;
  long lVar3;
  EditorUndoRedoManager *this;
  long in_FS_OFFSET;
  Variant local_1b0 [8];
  String local_1a8 [8];
  String local_1a0 [8];
  String local_198 [8];
  String local_190 [8];
  String local_188 [8];
  String local_180 [8];
  String local_178 [8];
  ulong local_170;
  long local_168;
  long local_160;
  int local_158 [8];
  int local_138 [8];
  int local_118 [8];
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xa18) != 0) && (param_2 != 0)) {
    lVar3 = __dynamic_cast(param_2,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar3 != 0) {
      TreeItem::get_metadata((int)(Variant *)local_58);
      Variant::operator_cast_to_String(local_1b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/enabled");
      String::operator+(local_1a8,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/parent");
      String::operator+(local_1a0,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/name");
      String::operator+(local_198,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/position");
      String::operator+(local_190,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/rotation");
      String::operator+(local_188,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/scale");
      String::operator+(local_180,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"/rest");
      String::operator+(local_178,(String *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_1a8,false);
      Object::get((StringName *)local_158,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_1a0,false);
      Object::get((StringName *)local_138,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_198,false);
      Object::get((StringName *)local_118,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_190,false);
      Object::get((StringName *)local_f8,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_188,false);
      Object::get((StringName *)local_d8,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_180,false);
      Object::get((StringName *)local_b8,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      pbVar1 = *(bool **)(param_1 + 0xa18);
      StringName::StringName((StringName *)&local_160,local_178,false);
      Object::get((StringName *)local_98,pbVar1);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      this = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
      local_168 = 0;
      String::parse_latin1((String *)&local_168,"");
      local_170 = 0;
      String::parse_latin1((String *)&local_170,"Revert Bone");
      TTR((String *)&local_160,(String *)&local_170);
      EditorUndoRedoManager::create_action(this,(String *)&local_160,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      StringName::StringName((StringName *)&local_160,local_1a8,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_158
                        );
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_1a8,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_158);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_1a8);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_1a8);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_1a0,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_138
                        );
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_1a0,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_138);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_1a0);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_1a0);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_198,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_118
                        );
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_198,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_118);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_198);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_198);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_190,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_f8)
      ;
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_190,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_f8);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_190);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_190);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_188,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_d8)
      ;
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_188,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_d8);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_188);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_188);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_180,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_b8)
      ;
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_180,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_b8);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_180);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_180);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,local_178,false);
      cVar2 = EditorPropertyRevert::can_property_revert
                        (*(Object **)(param_1 + 0xa18),(StringName *)&local_160,(Variant *)local_98)
      ;
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        local_170 = local_170 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_160,local_178,false);
        EditorPropertyRevert::get_property_revert_value
                  ((Object *)local_78,*(StringName **)(param_1 + 0xa18),(bool *)&local_160);
        if ((StringName::configured != '\0') && (local_160 != 0)) {
          StringName::unref();
        }
        if (local_170._0_1_ != (String)0x0) {
          Variant::Variant((Variant *)local_58,(Variant *)local_98);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_178);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_undo_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,(Variant *)local_78);
          local_160 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)local_178);
          StringName::StringName((StringName *)&local_168,"set",false);
          EditorUndoRedoManager::add_do_method<String,Variant>
                    (this,*(undefined8 *)(param_1 + 0xa18),(String *)&local_168,(String *)&local_160
                     ,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_168 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_160,"update_all",false);
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,(Variant **)&local_160,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_160,"update_all",false);
      EditorUndoRedoManager::add_do_method<>(this,(Object *)param_1,(StringName *)&local_160);
      if ((StringName::configured != '\0') && (local_160 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this,0));
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_f8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_118[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_138[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_158[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* BonePropertiesEditor::_add_meta_confirm() */

void __thiscall BonePropertiesEditor::_add_meta_confirm(BonePropertiesEditor *this)

{
  Variant *pVVar1;
  int iVar2;
  char *__s;
  StringName *pSVar3;
  Object *pOVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  CowData *local_1d8;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  String local_170 [8];
  CowData<char32_t> local_168 [8];
  long local_160;
  char *local_158;
  size_t local_150;
  int local_148 [8];
  Variant *local_128;
  undefined1 auStack_120 [24];
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant local_f0 [24];
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(Skeleton3DEditor::singleton + 0xaf0);
  AddMetadataDialog::get_meta_name();
  if (local_160 == 0) {
    local_188 = 0;
  }
  else {
    __s = *(char **)(local_160 + 8);
    local_188 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)(local_160 + 0x10));
    }
    else {
      local_150 = strlen(__s);
      local_158 = __s;
      String::parse_latin1((StrRange *)&local_188);
    }
    if ((StringName::configured != '\0') && (local_160 != 0)) {
      StringName::unref();
    }
  }
  local_1d8 = (CowData *)&local_188;
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  Skeleton3D::get_bone_name((int)local_168);
  local_160 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,local_1d8);
  local_158 = "";
  local_178 = 0;
  local_150 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_158 = "Add metadata \'%s\' to bone \'%s\'";
  local_180 = 0;
  local_150 = 0x1e;
  String::parse_latin1((StrRange *)&local_180);
  TTR(local_170,(String *)&local_180);
  vformat<String,String>
            ((CowData<char32_t> *)&local_158,local_170,(CowData<char32_t> *)&local_160,local_168);
  EditorUndoRedoManager::create_action(pOVar4,(CowData<char32_t> *)&local_158,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref(local_168);
  AddMetadataDialog::get_meta_defval();
  local_158 = (char *)0x0;
  if (local_188 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,local_1d8);
  }
  StringName::StringName((StringName *)&local_160,"set_bone_meta",false);
  pSVar3 = *(StringName **)(this + 0xab0);
  Variant::Variant((Variant *)&local_108,iVar2);
  Variant::Variant(local_f0,(String *)&local_158);
  Variant::Variant(local_d8,(Variant *)local_148);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  auStack_120._8_8_ = local_d8;
  auStack_120._0_8_ = local_f0;
  local_128 = (Variant *)&local_108;
  EditorUndoRedoManager::add_do_methodp
            (pOVar4,pSVar3,(Variant **)&local_160,(int)(Variant *)&local_128);
  pVVar5 = local_a8;
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != (Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (Variant::needs_deinit[local_148[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_128 = (Variant *)0x0;
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_158 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,local_1d8);
  StringName::StringName((StringName *)&local_160,"set_bone_meta",false);
  pSVar3 = *(StringName **)(this + 0xab0);
  Variant::Variant(local_a8,iVar2);
  Variant::Variant(local_90,(String *)&local_158);
  Variant::Variant(local_78,(Variant *)&local_128);
  local_58 = (undefined1  [16])0x0;
  pVVar5 = local_48;
  local_60 = 0;
  local_108 = local_a8;
  pVStack_100 = local_90;
  local_f8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,pSVar3,(Variant **)&local_160,(int)(Variant *)&local_108);
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_a8);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::_show_add_meta_dialog() */

void __thiscall BonePropertiesEditor::_show_add_meta_dialog(BonePropertiesEditor *this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  AddMetadataDialog *this_00;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa50) == 0) {
    this_00 = (AddMetadataDialog *)operator_new(0xdd8,"");
    AddMetadataDialog::AddMetadataDialog(this_00);
    postinitialize_handler((Object *)this_00);
    lVar3 = *(long *)this_00;
    *(AddMetadataDialog **)(this + 0xa50) = this_00;
    pcVar4 = *(code **)(lVar3 + 0x108);
    create_custom_callable_function_pointer<BonePropertiesEditor>
              ((BonePropertiesEditor *)local_48,(char *)this,
               (_func_void *)"&BonePropertiesEditor::_add_meta_confirm");
    (*pcVar4)(this_00,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_48,0);
    Callable::~Callable((Callable *)local_48);
    Node::add_child(this,*(undefined8 *)(this + 0xa50),0,0);
  }
  uVar1 = *(uint *)(Skeleton3DEditor::singleton + 0xaf0);
  Skeleton3D::get_bone_name((int)(CowData<char32_t> *)local_48);
  StringName::StringName((StringName *)&local_58,(String *)local_48,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  local_50 = 0;
  Skeleton3D::get_bone_meta_list((int)*(undefined8 *)(this + 0xab0),(List *)(ulong)uVar1);
  uVar2 = *(undefined8 *)(this + 0xa50);
  StringName::StringName((StringName *)local_48,(StringName *)&local_58);
  AddMetadataDialog::open
            (uVar2,(CowData<char32_t> *)local_48,(List<StringName,DefaultAllocator> *)&local_50);
  if ((StringName::configured != '\0') && (local_48[0] != 0)) {
    StringName::unref();
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DGizmoPlugin::Skeleton3DGizmoPlugin() */

void __thiscall Skeleton3DGizmoPlugin::Skeleton3DGizmoPlugin(Skeleton3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  BaseMaterial3D *this_00;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_001290f8;
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_00127ce0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  pOVar1 = selection_materials;
  if (cVar2 == '\0') {
    if (selection_materials == (Object *)0x0) goto LAB_00108471;
    selection_materials = (Object *)0x0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') goto LAB_00108471;
    this_00 = (BaseMaterial3D *)0x0;
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 == '\0') goto LAB_00108471;
LAB_00108683:
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    pOVar3 = (Object *)this_00;
    if (this_00 == (BaseMaterial3D *)0x0) goto LAB_00108471;
  }
  else {
    pOVar3 = selection_materials;
    if (this_00 != (BaseMaterial3D *)selection_materials) {
      selection_materials = (Object *)this_00;
      cVar2 = RefCounted::reference();
      pOVar3 = (Object *)this_00;
      if (cVar2 == '\0') {
        selection_materials = (Object *)0x0;
        if (pOVar1 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
joined_r0x00108637:
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0'))
          goto LAB_00108683;
        }
      }
      else if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x00108637;
      }
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00108471:
  BaseMaterial3D::set_shading_mode(selection_materials,0);
  BaseMaterial3D::set_transparency(selection_materials,1);
  BaseMaterial3D::set_flag(selection_materials,1,1);
  BaseMaterial3D::set_flag(selection_materials,2,1);
  BaseMaterial3D::set_flag(selection_materials,0x15,1);
  Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&DAT_001137a8);
  local_58 = (Object *)operator_new(0x2e8,"");
  Shader::Shader((Shader *)local_58);
  postinitialize_handler(local_58);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    local_58 = (Object *)0x0;
  }
  local_50 = 0;
  local_48 = 
  "\n// Skeleton 3D gizmo bones shader.\n\nshader_type spatial;\nrender_mode unshaded, shadows_disabled;\nvoid vertex() {\n\tif (!OUTPUT_IS_SRGB) {\n\t\tCOLOR.rgb = mix( pow((COLOR.rgb + vec3(0.055)) * (1.0 / (1.0 + 0.055)), vec3(2.4)), COLOR.rgb* (1.0 / 12.92), lessThan(COLOR.rgb,vec3(0.04045)) );\n\t}\n\tVERTEX = VERTEX;\n\tPOSITION = PROJECTION_MATRIX * VIEW_MATRIX * MODEL_MATRIX * vec4(VERTEX.xyz, 1.0);\n\tPOSITION.z = mix(POSITION.z, POSITION.w, 0.998);\n}\nvoid fragment() {\n\tALBEDO = COLOR.rgb;\n\tALPHA = COLOR.a;\n}\n"
  ;
  local_40 = 0x1f7;
  String::parse_latin1((StrRange *)&local_50);
  Shader::set_code((String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  ShaderMaterial::set_shader(DAT_001137a8);
  if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditorPlugin::Skeleton3DEditorPlugin() */

void __thiscall Skeleton3DEditorPlugin::Skeleton3DEditorPlugin(Skeleton3DEditorPlugin *this)

{
  undefined8 uVar1;
  char cVar2;
  RefCounted *pRVar3;
  Object *this_00;
  Object *pOVar4;
  long in_FS_OFFSET;
  RefCounted *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Array::Array;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Skeleton3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (Skeleton3DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00128e50;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  pRVar3 = (RefCounted *)operator_new(0x220,"");
  RefCounted::RefCounted(pRVar3);
  *(undefined8 *)(pRVar3 + 0x180) = 0;
  *(code **)pRVar3 = Node3DEditor::add_gizmo_plugin;
  StringName::StringName((StringName *)(pRVar3 + 0x188),"_can_handle",false);
  pRVar3[400] = (RefCounted)0x0;
  *(undefined8 *)(pRVar3 + 0x198) = 0;
  StringName::StringName((StringName *)(pRVar3 + 0x1a0),"_parse_begin",false);
  pRVar3[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar3 + 0x1b0) = 0;
  StringName::StringName((StringName *)(pRVar3 + 0x1b8),"_parse_category",false);
  pRVar3[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar3 + 0x1c8) = 0;
  StringName::StringName((StringName *)(pRVar3 + 0x1d0),"_parse_group",false);
  pRVar3[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar3 + 0x1e0) = 0;
  StringName::StringName((StringName *)(pRVar3 + 0x1e8),"_parse_property",false);
  pRVar3[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar3 + 0x1f8) = 0;
  StringName::StringName((StringName *)(pRVar3 + 0x200),"_parse_end",false);
  pRVar3[0x208] = (RefCounted)0x0;
  *(undefined ***)pRVar3 = &PTR__initialize_classv_00128cc0;
  *(undefined1 (*) [16])(pRVar3 + 0x210) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar3);
  *(RefCounted **)(this + 0x660) = pRVar3;
  local_28 = pRVar3;
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    local_28 = (RefCounted *)0x0;
  }
  EditorInspector::add_inspector_plugin((Ref *)&local_28);
  if (((local_28 != (RefCounted *)0x0) &&
      (cVar2 = RefCounted::unreference(), pRVar3 = local_28, cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)local_28), cVar2 != '\0')) {
    (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
    Memory::free_static(pRVar3,false);
  }
  this_00 = (Object *)operator_new(0x450,"");
  Skeleton3DGizmoPlugin::Skeleton3DGizmoPlugin((Skeleton3DGizmoPlugin *)this_00);
  postinitialize_handler(this_00);
  cVar2 = RefCounted::init_ref();
  uVar1 = Node3DEditor::singleton;
  if (cVar2 == '\0') {
    local_28 = (RefCounted *)0x0;
    Node3DEditor::add_gizmo_plugin(Node3DEditor::singleton);
    if ((local_28 != (RefCounted *)0x0) &&
       (cVar2 = RefCounted::unreference(), pRVar3 = local_28, cVar2 != '\0')) {
      this_00 = (Object *)0x0;
      cVar2 = predelete_handler((Object *)local_28);
      if (cVar2 != '\0') goto LAB_00108db6;
    }
  }
  else {
    local_28 = (RefCounted *)0x0;
    pOVar4 = (Object *)
             __dynamic_cast(this_00,&Object::typeinfo,&EditorNode3DGizmoPlugin::typeinfo,0);
    if ((pOVar4 != (Object *)0x0) &&
       (local_28 = (RefCounted *)pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_28 = (RefCounted *)0x0;
    }
    Node3DEditor::add_gizmo_plugin(uVar1);
    if (((local_28 == (RefCounted *)0x0) ||
        (cVar2 = RefCounted::unreference(), pRVar3 = local_28, cVar2 == '\0')) ||
       (cVar2 = predelete_handler((Object *)local_28), cVar2 == '\0')) {
      cVar2 = RefCounted::unreference();
    }
    else {
LAB_00108db6:
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      Memory::free_static(pRVar3,false);
      if (this_00 == (Object *)0x0) goto LAB_00108c8f;
      cVar2 = RefCounted::unreference();
    }
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(this_00), cVar2 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this_00,false);
        return;
      }
      goto LAB_00108e05;
    }
  }
LAB_00108c8f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108e05:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::export_skeleton_profile() */

void __thiscall Skeleton3DEditor::export_skeleton_profile(Skeleton3DEditor *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  String local_70 [8];
  long *local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = Skeleton3D::get_bone_count();
  pSVar2 = EditorNode::singleton;
  if (iVar6 == 0) {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Warning!";
    local_68 = (long *)0x0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(String *)&local_68);
    local_58 = "";
    local_80 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_58 = "Cannot export a SkeletonProfile for a Skeleton3D node with no bones.";
    local_88 = 0;
    local_50 = 0x44;
    String::parse_latin1((StrRange *)&local_88);
    TTR(local_78,(String *)&local_88);
    vformat<>((String *)&local_58);
    EditorNode::show_warning(pSVar2,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa90),4);
    local_58 = "";
    local_60 = 0;
    pSVar2 = *(String **)(this + 0xa90);
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_68 = (long *)0x0;
    local_58 = "Export Skeleton Profile As...";
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Window::set_title(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = "SkeletonProfile";
    local_68 = (long *)0x0;
    local_60 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_60,(List *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    EditorFileDialog::clear_filters();
    if (local_68 != (long *)0x0) {
      for (lVar3 = *local_68; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        pSVar2 = *(String **)(this + 0xa90);
        local_60 = 0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_60);
        operator+((char *)&local_58,(String *)&_LC176);
        EditorFileDialog::add_filter(pSVar2,(String *)&local_58);
        pcVar5 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
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
      }
    }
    EditorFileDialog::popup_file_dialog();
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_00132008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::initialize_class() [clone .part.0] */

void VBoxContainer::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (BoxContainer::initialize_class()::initialized == '\0') {
    if (Container::initialize_class()::initialized == '\0') {
      if (Control::initialize_class()::initialized == '\0') {
        if (CanvasItem::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Node");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((code *)PTR__bind_methods_00132008 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"CanvasItem");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CanvasItem::_bind_methods();
          if ((code *)PTR__bind_compatibility_methods_00132010 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"CanvasItem");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Control");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Control::_bind_methods();
        Control::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Control";
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Container";
      local_70 = 0;
      local_50 = 9;
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
      Container::_bind_methods();
      Container::initialize_class()::initialized = '\x01';
    }
    local_58 = "Container";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BoxContainer";
    local_70 = 0;
    local_50 = 0xc;
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
    if ((code *)PTR__bind_methods_00132018 != Container::_bind_methods) {
      BoxContainer::_bind_methods();
    }
    BoxContainer::initialize_class()::initialized = '\x01';
  }
  local_58 = "BoxContainer";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "VBoxContainer";
  local_70 = 0;
  local_50 = 0xd;
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BonePropertiesEditor::_meta_changed(String const&, Variant const&, String const&, bool) */

void BonePropertiesEditor::_meta_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  undefined8 uVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  undefined8 *puVar7;
  int iVar8;
  wchar32 wVar9;
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0xab0) == 0) goto LAB_00109e2c;
  iVar8 = (int)param_2;
  wVar9 = (wchar32)(String *)&local_60;
  String::get_slicec(wVar9,iVar8);
  cVar3 = String::operator!=((String *)&local_60,"bone_meta");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (cVar3 != '\0') goto LAB_00109e2c;
  String::get_slicec(wVar9,iVar8);
  iVar4 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar5 = Skeleton3D::get_bone_count();
  if (iVar5 <= iVar4) goto LAB_00109e2c;
  String::get_slicec((wchar32)(String *)&local_90,iVar8);
  uVar1 = *(undefined8 *)(param_1 + 0xab0);
  StringName::StringName((StringName *)&local_60,(String *)&local_90,false);
  cVar3 = Skeleton3D::has_bone_meta((int)uVar1,(StringName *)0x1);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (cVar3 != '\0') {
    pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
    Skeleton3D::get_bone_name((int)local_70);
    local_68 = 0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
    }
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Modify metadata \'%s\' for bone \'%s\'");
    TTR(local_78,(String *)&local_88);
    vformat<String,String>((String *)&local_60,local_78,(CowData<char32_t> *)&local_68,local_70);
    EditorUndoRedoManager::create_action(pOVar6,(String *)&local_60,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    StringName::StringName((StringName *)&local_60,(String *)param_2,false);
    EditorUndoRedoManager::add_do_property
              (pOVar6,*(StringName **)(param_1 + 0xab0),(Variant *)&local_60);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_60,"update_property",false);
    StringName::StringName((StringName *)&local_68,(String *)param_2,false);
    puVar7 = (undefined8 *)
             HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
             ::operator[]((HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                           *)(param_1 + 0xac8),(StringName *)&local_68);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)*puVar7,(Variant **)&local_60,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00109ced;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
LAB_00109ced:
    pSVar2 = *(StringName **)(param_1 + 0xab0);
    StringName::StringName((StringName *)&local_68,(String *)&local_90,false);
    Skeleton3D::get_bone_meta((int)&local_58,pSVar2);
    StringName::StringName((StringName *)&local_60,(String *)param_2,false);
    EditorUndoRedoManager::add_undo_property
              (pOVar6,*(StringName **)(param_1 + 0xab0),(Variant *)&local_60);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_60,"update_property",false);
    StringName::StringName((StringName *)&local_68,(String *)param_2,false);
    puVar7 = (undefined8 *)
             HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
             ::operator[]((HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                           *)(param_1 + 0xac8),(StringName *)&local_68);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)*puVar7,(Variant **)&local_60,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00109e14;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
LAB_00109e14:
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00109e2c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_bind_methods() */

void Skeleton3DEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"update_all",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Skeleton3DEditor>(update_all);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"update_joint_tree",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Skeleton3DEditor>(update_joint_tree);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DEditor::_file_selected(String const&) */

void __thiscall Skeleton3DEditor::_file_selected(Skeleton3DEditor *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  ulong uVar5;
  String *pSVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  SkeletonProfile *this_00;
  Object *pOVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float local_f8;
  float local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  String local_a0 [8];
  undefined8 local_98;
  Object *local_90 [2];
  long local_80;
  undefined8 local_78 [4];
  undefined8 local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (SkeletonProfile *)operator_new(0x278,"");
  SkeletonProfile::SkeletonProfile(this_00);
  postinitialize_handler((Object *)this_00);
  cVar7 = RefCounted::init_ref();
  if (cVar7 == '\0') {
    this_00 = (SkeletonProfile *)0x0;
  }
  iVar11 = (int)this_00;
  SkeletonProfile::set_group_size(iVar11);
  local_80 = 0;
  uVar8 = Skeleton3D::get_bone_count();
  SkeletonProfile::set_bone_size(iVar11);
  lVar16 = local_80;
  if (0 < (int)uVar8) {
    uVar14 = 0;
    local_f8 = 0.0;
    local_d8 = 0.0;
    lVar16 = 0;
    fVar4 = 0.0;
    fVar22 = 0.0;
LAB_0010a2eb:
    do {
      iVar9 = (int)(CowData<char32_t> *)&local_98;
      Skeleton3D::get_bone_name(iVar9);
      StringName::StringName((StringName *)local_90,(String *)&local_98,false);
      SkeletonProfile::set_bone_name(iVar11,(StringName *)(ulong)uVar14);
      if ((StringName::configured != '\0') && (local_90[0] != (Object *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      iVar10 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa18));
      if (-1 < iVar10) {
        Skeleton3D::get_bone_name(iVar9);
        StringName::StringName((StringName *)local_90,(String *)&local_98,false);
        SkeletonProfile::set_bone_parent(iVar11,(StringName *)(ulong)uVar14);
        if ((StringName::configured != '\0') && (local_90[0] != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      Skeleton3D::get_bone_rest((int)local_78);
      SkeletonProfile::set_reference_pose(iVar11,(Transform3D *)(ulong)uVar14);
      Skeleton3D::get_bone_global_rest((int)local_78);
      uVar2 = local_54;
      fVar21 = (float)local_54;
      fVar17 = (float)((ulong)local_54 >> 0x20);
      if (lVar16 == 0) {
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar16 + -8) + 1;
      }
      iVar9 = CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_80,lVar16);
      if (iVar9 == 0) {
        if (local_80 == 0) {
          lVar13 = -1;
          lVar16 = 0;
        }
        else {
          lVar16 = *(long *)(local_80 + -8);
          lVar13 = lVar16 + -1;
          if (-1 < lVar13) {
            CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
            *(undefined8 *)(local_80 + lVar13 * 8) = uVar2;
            goto LAB_0010a28a;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar16,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010a28a:
      lVar16 = local_80;
      if (uVar14 != 0) {
        uVar14 = uVar14 + 1;
        if (fVar4 <= fVar17) {
          fVar4 = fVar17;
        }
        if (local_f8 <= fVar21) {
          local_f8 = fVar21;
        }
        if (fVar17 <= fVar22) {
          fVar22 = fVar17;
        }
        if (fVar21 <= local_d8) {
          local_d8 = fVar21;
        }
        fVar17 = fVar4;
        if (uVar8 == uVar14) break;
        goto LAB_0010a2eb;
      }
      uVar14 = 1;
      local_f8 = fVar21;
      local_d8 = fVar21;
      fVar4 = fVar17;
      fVar22 = fVar17;
    } while (uVar8 != 1);
    fVar4 = local_f8 - local_d8;
    if (local_f8 - local_d8 <= fVar17 - fVar22) {
      fVar4 = fVar17 - fVar22;
    }
    if (0.0 < fVar4) {
      if (local_80 == 0) {
        lVar15 = 0;
        lVar13 = 0;
      }
      else {
        lVar15 = 0;
        uVar23 = (undefined4)_LC33;
        uVar5 = (ulong)_LC33 >> 0x20;
        uVar14 = 0;
        fVar21 = (local_f8 + local_d8) * _LC111;
        fVar22 = (fVar22 + fVar17) * _UNK_0012a1bc;
        while (lVar13 = *(long *)(lVar16 + -8), lVar15 < lVar13) {
          uVar2 = *(undefined8 *)(lVar16 + lVar15 * 8);
          auVar18._0_4_ = (float)uVar2 - fVar21;
          auVar18._4_4_ = (float)((ulong)uVar2 >> 0x20) - fVar22;
          auVar18._8_8_ = 0;
          auVar19._4_4_ = fVar4;
          auVar19._0_4_ = fVar4;
          auVar19._8_4_ = uVar23;
          auVar19._12_4_ = (int)uVar5;
          auVar19 = divps(auVar18,auVar19);
          fVar17 = auVar19._0_4_ * (float)_LC212;
          fVar20 = auVar19._4_4_ * _LC212._4_4_;
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_80);
          lVar16 = local_80;
          *(ulong *)(local_80 + lVar15 * 8) = CONCAT44(fVar20,fVar17);
          if (local_80 == 0) {
            lVar13 = 0;
            break;
          }
          lVar13 = *(long *)(local_80 + -8);
          if (lVar13 <= lVar15) break;
          lVar15 = lVar15 + 1;
          local_78[0] = CONCAT44(_LC111 - fVar20,_LC111 + fVar17);
          SkeletonProfile::set_handle_offset(iVar11,(Vector2 *)(ulong)uVar14);
          if (lVar15 == (int)uVar8) goto LAB_0010a63f;
          uVar14 = (uint)lVar15;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
LAB_0010a63f:
  local_90[0] = (Object *)0x0;
  pOVar12 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_90[0] = pOVar12, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
    local_90[0] = (Object *)0x0;
  }
  iVar11 = ResourceSaver::save((Ref *)local_90,param_1,0);
  if (((local_90[0] != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar12 = local_90[0], cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_90[0]), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar6 = EditorNode::singleton;
  if (iVar11 != 0) {
    local_90[0] = (Object *)0x0;
    String::parse_latin1((String *)local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Warning!");
    TTR(local_a0,(String *)&local_98);
    local_b0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_1);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"Error saving file: %s");
    TTR(local_b8,(String *)&local_c8);
    vformat<String>(local_a8,local_b8,(CowData<char32_t> *)&local_b0);
    EditorNode::show_warning(pSVar6,(String *)local_a8);
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  if (lVar16 != 0) {
    LOCK();
    plVar1 = (long *)(lVar16 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_80 + -0x10),false);
      cVar7 = RefCounted::unreference();
      goto joined_r0x0010a725;
    }
  }
  cVar7 = RefCounted::unreference();
joined_r0x0010a725:
  if ((cVar7 == '\0') || (cVar7 = predelete_handler((Object *)this_00), cVar7 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(this_00,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* BonePropertiesEditor::_property_keyed(String const&, bool) */

void BonePropertiesEditor::_property_keyed(String *param_1,bool param_2)

{
  bool *pbVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined7 in_register_00000031;
  String *pSVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float in_XMM1_Da;
  CowData<char32_t> local_b8 [8];
  long local_b0;
  char local_a8 [8];
  String *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  float local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  pSVar5 = (String *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(AnimationPlayerEditor::singleton + 0xb30);
  if (lVar4 == 0) goto LAB_0010aa8b;
  cVar3 = AnimationTrackEditor::has_keying();
  if (cVar3 == '\0') goto LAB_0010aa8b;
  AnimationTrackEditor::_clear_selection(SUB81(lVar4,0));
  String::split(local_a8,param_2,0x11491f);
  if ((local_a0 != (String *)0x0) && (*(long *)(local_a0 + -8) == 3)) {
    cVar3 = String::operator==(local_a0,"bones");
    if (cVar3 != '\0') {
      if (local_a0 == (String *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(local_a0 + -8);
        if (1 < lVar6) {
          String::to_int();
          if (local_a0 == (String *)0x0) {
LAB_0010adb8:
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(local_a0 + -8);
            if (2 < lVar6) {
              cVar3 = String::operator==(local_a0 + 0x10,"position");
              if (cVar3 != '\0') {
                fVar7 = (float)Skeleton3D::get_motion_scale();
                pbVar1 = *(bool **)(param_1 + 0xab0);
                auVar9._4_4_ = fVar7;
                auVar9._0_4_ = fVar7;
                StringName::StringName((StringName *)&local_b0,pSVar5,false);
                Object::get((StringName *)local_78,pbVar1);
                auVar8._0_8_ = Variant::operator_cast_to_Vector3((Variant *)local_78);
                auVar8._8_8_ = extraout_XMM0_Qb;
                local_80 = in_XMM1_Da / fVar7;
                auVar9._8_4_ = (int)_LC33;
                auVar9._12_4_ = (int)((ulong)_LC33 >> 0x20);
                auVar9 = divps(auVar8,auVar9);
                local_88 = auVar9._0_8_;
                local_98 = auVar8._0_8_;
                Variant::Variant((Variant *)local_58,(Vector3 *)&local_88);
                Skeleton3D::get_bone_name((int)local_b8);
                AnimationTrackEditor::insert_transform_key
                          (lVar4,*(undefined8 *)(param_1 + 0xab0),local_b8,1);
                CowData<char32_t>::_unref(local_b8);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
              }
              if (local_a0 == (String *)0x0) goto LAB_0010adb8;
              lVar6 = *(long *)(local_a0 + -8);
              if (2 < lVar6) {
                cVar3 = String::operator==(local_a0 + 0x10,"rotation");
                if (cVar3 != '\0') {
                  pbVar1 = *(bool **)(param_1 + 0xab0);
                  StringName::StringName((StringName *)&local_b0,pSVar5,false);
                  Object::get((StringName *)local_58,pbVar1);
                  Skeleton3D::get_bone_name((int)local_b8);
                  AnimationTrackEditor::insert_transform_key
                            (lVar4,*(undefined8 *)(param_1 + 0xab0),local_b8,2);
                  CowData<char32_t>::_unref(local_b8);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((StringName::configured != '\0') && (local_b0 != 0)) {
                    StringName::unref();
                  }
                }
                if (local_a0 == (String *)0x0) goto LAB_0010adb8;
                lVar6 = *(long *)(local_a0 + -8);
                if (2 < lVar6) {
                  cVar3 = String::operator==(local_a0 + 0x10,"scale");
                  if (cVar3 != '\0') {
                    pbVar1 = *(bool **)(param_1 + 0xab0);
                    StringName::StringName((StringName *)&local_b0,pSVar5,false);
                    Object::get((StringName *)local_58,pbVar1);
                    Skeleton3D::get_bone_name((int)local_b8);
                    AnimationTrackEditor::insert_transform_key
                              (lVar4,*(undefined8 *)(param_1 + 0xab0),local_b8,3,
                               (StringName *)local_58);
                    CowData<char32_t>::_unref(local_b8);
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_b0 != 0)) {
                      StringName::unref();
                    }
                  }
                  goto LAB_0010aaef;
                }
              }
            }
          }
          lVar4 = 2;
          goto LAB_0010addb;
        }
      }
      lVar4 = 1;
LAB_0010addb:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
LAB_0010aaef:
  CowData<String>::_unref((CowData<String> *)&local_a0);
LAB_0010aa8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::_update_properties() */

void __thiscall BonePropertiesEditor::_update_properties(BonePropertiesEditor *this)

{
  String *pSVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  char cVar38;
  uint uVar39;
  long lVar40;
  String *pSVar41;
  CallableCustom *pCVar42;
  undefined8 uVar43;
  undefined8 *puVar44;
  uint uVar45;
  int iVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  long *plVar50;
  long *plVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  uint uVar56;
  uint *puVar57;
  undefined4 *puVar58;
  long in_FS_OFFSET;
  bool bVar59;
  long *local_138;
  StringName *local_130;
  undefined8 *local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  long local_d8;
  String *local_d0;
  ulong local_c8 [2];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(List **)(this + 0xab0) != (List *)0x0) {
    local_b8 = (undefined1  [16])0x0;
    iVar46 = *(int *)(Skeleton3DEditor::singleton + 0xaf0);
    local_a8 = (undefined1  [16])0x0;
    local_e8 = (undefined8 *)0x0;
    local_98 = 2;
    Object::get_property_list
              (*(List **)(this + 0xab0),SUB81((List<PropertyInfo,DefaultAllocator> *)&local_e8,0));
    if ((local_e8 == (undefined8 *)0x0) ||
       (puVar58 = (undefined4 *)*local_e8, puVar58 == (undefined4 *)0x0)) {
      local_138 = (long *)0x0;
      puVar44 = *(undefined8 **)(this + 0xae0);
      if (puVar44 != (undefined8 *)0x0) goto LAB_0010baa0;
    }
    else {
      do {
        pSVar1 = (String *)(puVar58 + 2);
        String::split((char *)&local_d8,SUB81(pSVar1,0),0x11491f);
        if (((local_d0 == (String *)0x0) || (*(long *)(local_d0 + -8) < 3)) ||
           (cVar38 = String::operator==(local_d0,"bones"), cVar38 == '\0')) goto LAB_0010afd8;
        if (local_d0 == (String *)0x0) {
          lVar40 = 0;
LAB_0010bc2b:
          lVar49 = 1;
LAB_0010ba4b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar49,lVar40,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 2) goto LAB_0010bc2b;
        lVar40 = String::to_int();
        if (lVar40 != iVar46) goto LAB_0010afd8;
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"enabled");
        if (cVar38 != '\0') {
          EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa18),0));
          (**(code **)(**(long **)(this + 0xa18) + 0x380))();
          EditorProperty::update_editor_property_status();
          CanvasItem::queue_redraw();
          if (local_d0 != (String *)0x0) goto LAB_0010b099;
LAB_0010ba28:
          lVar40 = 0;
LAB_0010ba2b:
          lVar49 = 2;
          goto LAB_0010ba4b;
        }
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
LAB_0010b099:
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"position");
        if (cVar38 != '\0') {
          EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa20),0));
          (**(code **)(**(long **)(this + 0xa20) + 0x380))();
          EditorProperty::update_editor_property_status();
          CanvasItem::queue_redraw();
        }
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"rotation");
        if (cVar38 != '\0') {
          EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa28),0));
          (**(code **)(**(long **)(this + 0xa28) + 0x380))();
          EditorProperty::update_editor_property_status();
          CanvasItem::queue_redraw();
        }
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"scale");
        if (cVar38 != '\0') {
          EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa30),0));
          (**(code **)(**(long **)(this + 0xa30) + 0x380))();
          EditorProperty::update_editor_property_status();
          CanvasItem::queue_redraw();
        }
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"rest");
        if (cVar38 != '\0') {
          EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa40),0));
          (**(code **)(**(long **)(this + 0xa40) + 0x380))();
          EditorProperty::update_editor_property_status();
          CanvasItem::queue_redraw();
        }
        if (local_d0 == (String *)0x0) goto LAB_0010ba28;
        lVar40 = *(long *)(local_d0 + -8);
        if (lVar40 < 3) goto LAB_0010ba2b;
        cVar38 = String::operator==(local_d0 + 0x10,"bone_meta");
        if (cVar38 != '\0') {
          StringName::StringName((StringName *)&local_e0,pSVar1,false);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_c8);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_dc,local_e0) != 0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)local_c8,pSVar1,false);
          local_e0 = 0;
          cVar38 = HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                   ::_lookup_pos((HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                                  *)(this + 0xac8),(StringName *)local_c8,&local_e0);
          if (cVar38 == '\0') {
            if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
              StringName::unref();
            }
          }
          else {
            lVar40 = *(long *)(*(long *)(this + 0xad0) + (ulong)local_e0 * 8);
            if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
              StringName::unref();
            }
            if (lVar40 != 0) goto LAB_0010afd8;
          }
          uVar5 = puVar58[10];
          local_c8[0] = 0;
          String::parse_latin1((String *)local_c8,"");
          pSVar41 = (String *)
                    EditorInspectorDefaultPlugin::get_editor_for_property
                              (*(undefined8 *)(this + 0xab0),*puVar58,pSVar1,0,
                               (StringName *)local_c8,uVar5,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
          if (local_d0 == (String *)0x0) {
            lVar40 = 0;
          }
          else {
            lVar40 = *(long *)(local_d0 + -8);
            if (3 < lVar40) {
              EditorProperty::set_label(pSVar41);
              StringName::StringName((StringName *)local_c8,pSVar1,false);
              EditorProperty::set_object_and_property
                        ((Object *)pSVar41,*(StringName **)(this + 0xab0));
              if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
                StringName::unref();
              }
              EditorProperty::set_deletable(SUB81(pSVar41,0));
              EditorProperty::set_selectable(SUB81(pSVar41,0));
              pcVar7 = *(code **)(*(long *)pSVar41 + 0x108);
              create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
                        ((BonePropertiesEditor *)local_c8,(char *)this,
                         (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)
                         "&BonePropertiesEditor::_meta_changed");
              StringName::StringName((StringName *)&local_e0,"property_changed",false);
              (*pcVar7)(pSVar41,(StringName *)&local_e0,(StringName *)local_c8,0);
              if ((StringName::configured != '\0') && (CONCAT44(uStack_dc,local_e0) != 0)) {
                StringName::unref();
              }
              Callable::~Callable((Callable *)local_c8);
              pcVar7 = *(code **)(*(long *)pSVar41 + 0x108);
              pCVar42 = (CallableCustom *)operator_new(0x48,"");
              CallableCustom::CallableCustom(pCVar42);
              *(undefined1 (*) [16])(pCVar42 + 0x30) = (undefined1  [16])0x0;
              *(undefined **)(pCVar42 + 0x20) = &_LC42;
              *(undefined8 *)(pCVar42 + 0x40) = 0;
              uVar43 = *(undefined8 *)(this + 0x60);
              *(undefined ***)pCVar42 = &PTR_hash_00129510;
              *(undefined8 *)(pCVar42 + 0x30) = uVar43;
              *(code **)(pCVar42 + 0x38) = _meta_deleted;
              *(undefined8 *)(pCVar42 + 0x10) = 0;
              *(BonePropertiesEditor **)(pCVar42 + 0x28) = this;
              CallableCustomMethodPointerBase::_setup((uint *)pCVar42,(int)pCVar42 + 0x28);
              *(char **)(pCVar42 + 0x20) = "BonePropertiesEditor::_meta_deleted";
              Callable::Callable((Callable *)local_c8,pCVar42);
              StringName::StringName((StringName *)&local_e0,"property_deleted",false);
              (*pcVar7)(pSVar41,(StringName *)&local_e0,(StringName *)local_c8,0);
              if ((StringName::configured != '\0') && (CONCAT44(uStack_dc,local_e0) != 0)) {
                StringName::unref();
              }
              Callable::~Callable((Callable *)local_c8);
              uVar43 = EditorInspectorSection::get_vbox();
              Node::add_child(uVar43,pSVar41,0,0);
              (**(code **)(*(long *)pSVar41 + 0x380))(pSVar41);
              EditorProperty::update_editor_property_status();
              CanvasItem::queue_redraw();
              StringName::StringName((StringName *)local_c8,pSVar1,false);
              puVar44 = (undefined8 *)
                        HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                        ::operator[]((HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                                      *)(this + 0xac8),(StringName *)local_c8);
              bVar59 = StringName::configured != '\0';
              *puVar44 = pSVar41;
              if ((bVar59) && (local_c8[0] != 0)) {
                StringName::unref();
              }
              goto LAB_0010afd8;
            }
          }
          lVar49 = 3;
          goto LAB_0010ba4b;
        }
LAB_0010afd8:
        CowData<String>::_unref((CowData<String> *)&local_d0);
        puVar58 = *(undefined4 **)(puVar58 + 0xc);
      } while (puVar58 != (undefined4 *)0x0);
      local_138 = (long *)local_b8._0_8_;
      uVar54 = local_98;
      for (puVar44 = *(undefined8 **)(this + 0xae0); local_98 = uVar54, puVar44 != (undefined8 *)0x0
          ; puVar44 = (undefined8 *)*puVar44) {
LAB_0010baa0:
        local_130 = (StringName *)&local_d8;
        StringName::StringName(local_130,(StringName *)(puVar44 + 2));
        local_d0 = (String *)puVar44[3];
        if ((local_138 != (long *)0x0) && (local_98._4_4_ != 0)) {
          uVar6 = *(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4);
          lVar40 = *(long *)(hash_table_size_primes_inv + (local_98 & 0xffffffff) * 8);
          if (local_d8 == 0) {
            uVar39 = StringName::get_empty_hash();
          }
          else {
            uVar39 = *(uint *)(local_d8 + 0x20);
          }
          uVar54 = CONCAT44(0,uVar6);
          if (uVar39 == 0) {
            uVar39 = 1;
          }
          auVar20._8_8_ = 0;
          auVar20._0_8_ = (ulong)uVar39 * lVar40;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar54;
          lVar49 = SUB168(auVar20 * auVar34,8);
          uVar56 = *(uint *)(local_a8._8_8_ + lVar49 * 4);
          uVar53 = (ulong)uVar56;
          iVar46 = SUB164(auVar20 * auVar34,8);
          if (uVar56 != 0) {
            uVar56 = 0;
            do {
              if ((uVar39 == (uint)uVar53) &&
                 (local_138[*(uint *)(local_b8._8_8_ + lVar49 * 4)] == local_d8)) goto LAB_0010b91f;
              uVar56 = uVar56 + 1;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = (ulong)(iVar46 + 1) * lVar40;
              auVar35._8_8_ = 0;
              auVar35._0_8_ = uVar54;
              lVar49 = SUB168(auVar21 * auVar35,8);
              uVar45 = *(uint *)(local_a8._8_8_ + lVar49 * 4);
              uVar53 = (ulong)uVar45;
              iVar46 = SUB164(auVar21 * auVar35,8);
            } while ((uVar45 != 0) &&
                    (auVar22._8_8_ = 0, auVar22._0_8_ = uVar53 * lVar40, auVar36._8_8_ = 0,
                    auVar36._0_8_ = uVar54, auVar23._8_8_ = 0,
                    auVar23._0_8_ = (ulong)((uVar6 + iVar46) - SUB164(auVar22 * auVar36,8)) * lVar40
                    , auVar37._8_8_ = 0, auVar37._0_8_ = uVar54,
                    uVar56 <= SUB164(auVar23 * auVar37,8)));
          }
        }
        lVar40 = EditorInspectorSection::get_vbox();
        pCVar42 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar42);
        *(long *)(pCVar42 + 0x28) = lVar40;
        *(undefined1 (*) [16])(pCVar42 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar42 + 0x20) = &_LC42;
        *(undefined ***)pCVar42 = &PTR_hash_001295a0;
        *(undefined8 *)(pCVar42 + 0x40) = 0;
        uVar43 = *(undefined8 *)(lVar40 + 0x60);
        *(undefined8 *)(pCVar42 + 0x10) = 0;
        *(undefined8 *)(pCVar42 + 0x30) = uVar43;
        *(code **)(pCVar42 + 0x38) = Node::remove_child;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar42,(int)pCVar42 + 0x28);
        *(char **)(pCVar42 + 0x20) = "Node::remove_child";
        Callable::Callable((Callable *)local_c8,pCVar42);
        Variant::Variant((Variant *)local_78,(Object *)local_d0);
        Variant::Variant((Variant *)local_60,0);
        local_88[0] = (Variant *)local_78;
        Callable::call_deferredp((Variant **)local_c8,(int)local_88);
        if (Variant::needs_deinit[local_60[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)local_c8);
        local_c8[0] = local_c8[0] & 0xffffffff00000000;
        cVar38 = HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                 ::_lookup_pos((HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
                                *)(this + 0xac8),local_130,(uint *)local_c8);
        if (cVar38 != '\0') {
          lVar40 = *(long *)(*(long *)(this + 0xad0) + (local_c8[0] & 0xffffffff) * 8);
          if (((lVar40 != 0) && (*(long *)(this + 0xad0) != 0)) && (*(int *)(this + 0xaf4) != 0)) {
            uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf0) * 4);
            uVar54 = CONCAT44(0,uVar6);
            lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaf0) * 8);
            if (*(long *)(lVar40 + 0x10) == 0) {
              uVar39 = StringName::get_empty_hash();
            }
            else {
              uVar39 = *(uint *)(*(long *)(lVar40 + 0x10) + 0x20);
            }
            uVar56 = 1;
            if (uVar39 != 0) {
              uVar56 = uVar39;
            }
            lVar8 = *(long *)(this + 0xad8);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar56 * lVar49;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar54;
            lVar47 = SUB168(auVar10 * auVar24,8);
            uVar39 = *(uint *)(lVar8 + lVar47 * 4);
            uVar45 = SUB164(auVar10 * auVar24,8);
            if (uVar39 != 0) {
              uVar55 = 0;
LAB_0010b781:
              uVar53 = (ulong)uVar45;
              if ((uVar56 != uVar39) ||
                 (lVar9 = *(long *)(this + 0xad0),
                 *(long *)(*(long *)(lVar9 + lVar47 * 8) + 0x10) != *(long *)(lVar40 + 0x10)))
              goto LAB_0010b738;
              lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaf0) * 8);
              uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf0) * 4);
              uVar52 = CONCAT44(0,uVar6);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)(uVar45 + 1) * lVar40;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar52;
              uVar48 = SUB168(auVar14 * auVar28,8);
              puVar57 = (uint *)(lVar8 + uVar48 * 4);
              uVar56 = SUB164(auVar14 * auVar28,8);
              uVar54 = (ulong)uVar56;
              uVar39 = *puVar57;
              if ((uVar39 != 0) &&
                 (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar40, auVar29._8_8_ = 0,
                 auVar29._0_8_ = uVar52, auVar16._8_8_ = 0,
                 auVar16._0_8_ = (ulong)((uVar6 + uVar56) - SUB164(auVar15 * auVar29,8)) * lVar40,
                 auVar30._8_8_ = 0, auVar30._0_8_ = uVar52, SUB164(auVar16 * auVar30,8) != 0)) {
                while( true ) {
                  puVar2 = (uint *)(lVar8 + uVar53 * 4);
                  *puVar57 = *puVar2;
                  puVar3 = (undefined8 *)(lVar9 + uVar48 * 8);
                  *puVar2 = uVar39;
                  puVar4 = (undefined8 *)(lVar9 + uVar53 * 8);
                  uVar43 = *puVar3;
                  *puVar3 = *puVar4;
                  *puVar4 = uVar43;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = (ulong)((int)uVar54 + 1) * lVar40;
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uVar52;
                  uVar48 = SUB168(auVar19 * auVar33,8);
                  puVar57 = (uint *)(lVar8 + uVar48 * 4);
                  uVar39 = *puVar57;
                  uVar53 = uVar54;
                  if ((uVar39 == 0) ||
                     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar39 * lVar40, auVar31._8_8_ = 0,
                     auVar31._0_8_ = uVar52, auVar18._8_8_ = 0,
                     auVar18._0_8_ =
                          (ulong)((SUB164(auVar19 * auVar33,8) + uVar6) -
                                 SUB164(auVar17 * auVar31,8)) * lVar40, auVar32._8_8_ = 0,
                     auVar32._0_8_ = uVar52, SUB164(auVar18 * auVar32,8) == 0)) break;
                  uVar54 = uVar48 & 0xffffffff;
                }
              }
              plVar51 = (long *)(lVar9 + uVar53 * 8);
              *(undefined4 *)(lVar8 + uVar53 * 4) = 0;
              plVar50 = (long *)*plVar51;
              if (*(long **)(this + 0xae0) == plVar50) {
                *(long *)(this + 0xae0) = *plVar50;
                plVar50 = (long *)*plVar51;
              }
              if (*(long **)(this + 0xae8) == plVar50) {
                *(long *)(this + 0xae8) = plVar50[1];
                plVar50 = (long *)*plVar51;
              }
              if ((long *)plVar50[1] != (long *)0x0) {
                *(long *)plVar50[1] = *plVar50;
                plVar50 = (long *)*plVar51;
              }
              if (*plVar50 != 0) {
                *(long *)(*plVar50 + 8) = plVar50[1];
                plVar50 = (long *)*plVar51;
              }
              if ((StringName::configured != '\0') && (plVar50[2] != 0)) {
                StringName::unref();
              }
              Memory::free_static(plVar50,false);
              *(undefined8 *)(*(long *)(this + 0xad0) + uVar53 * 8) = 0;
              *(int *)(this + 0xaf4) = *(int *)(this + 0xaf4) + -1;
            }
          }
        }
LAB_0010b91f:
        if ((StringName::configured != '\0') && (local_d8 != 0)) {
          StringName::unref();
        }
        uVar54 = local_98;
      }
      if (local_138 != (long *)0x0) {
        local_98._4_4_ = (uint)(uVar54 >> 0x20);
        uVar53 = (ulong)local_98._4_4_;
        uVar43 = local_a8._8_8_;
        bVar59 = local_98._4_4_ != 0;
        if (bVar59) {
          if (*(uint *)(hash_table_size_primes + (uVar54 & 0xffffffff) * 4) != 0) {
            memset((void *)local_a8._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (uVar54 & 0xffffffff) * 4) * 4);
          }
          plVar51 = local_138;
          do {
            if ((StringName::configured != '\0') && (*plVar51 != 0)) {
              StringName::unref();
            }
            plVar51 = plVar51 + 1;
          } while (plVar51 != local_138 + uVar53);
        }
        Memory::free_static(local_138,false);
        Memory::free_static((void *)local_a8._0_8_,false);
        Memory::free_static((void *)local_b8._8_8_,false);
        Memory::free_static((void *)uVar43,false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_e8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010b738:
  uVar55 = uVar55 + 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (ulong)(uVar45 + 1) * lVar49;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar54;
  lVar47 = SUB168(auVar11 * auVar25,8);
  uVar39 = *(uint *)(lVar8 + lVar47 * 4);
  uVar45 = SUB164(auVar11 * auVar25,8);
  if ((uVar39 == 0) ||
     (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar39 * lVar49, auVar26._8_8_ = 0,
     auVar26._0_8_ = uVar54, auVar13._8_8_ = 0,
     auVar13._0_8_ = (ulong)((uVar6 + uVar45) - SUB164(auVar12 * auVar26,8)) * lVar49,
     auVar27._8_8_ = 0, auVar27._0_8_ = uVar54, SUB164(auVar13 * auVar27,8) < uVar55))
  goto LAB_0010b91f;
  goto LAB_0010b781;
}



/* Skeleton3DEditor::_update_properties() */

void __thiscall Skeleton3DEditor::_update_properties(Skeleton3DEditor *this)

{
  if (*(BonePropertiesEditor **)(this + 0xa30) != (BonePropertiesEditor *)0x0) {
    BonePropertiesEditor::_update_properties(*(BonePropertiesEditor **)(this + 0xa30));
    Node3DEditor::update_transform_gizmo();
    return;
  }
  Node3DEditor::update_transform_gizmo();
  return;
}



/* Skeleton3DEditor::_node_removed(Node*) */

void __thiscall Skeleton3DEditor::_node_removed(Skeleton3DEditor *this,Node *param_1)

{
  if ((*(Node **)(this + 0xa18) == param_1) && (*(Node **)(this + 0xa18) != (Node *)0x0)) {
    *(undefined8 *)(this + 0xa18) = 0;
    CanvasItem::hide();
  }
  if (*(BonePropertiesEditor **)(this + 0xa30) != (BonePropertiesEditor *)0x0) {
    BonePropertiesEditor::_update_properties(*(BonePropertiesEditor **)(this + 0xa30));
  }
  Node3DEditor::update_transform_gizmo();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DEditor::create_editors() */

void __thiscall Skeleton3DEditor::create_editors(Skeleton3DEditor *this)

{
  long lVar1;
  code *pcVar2;
  StringName *pSVar3;
  String *pSVar4;
  long *plVar5;
  NodePath *pNVar6;
  Color *pCVar7;
  Control *pCVar8;
  Object *pOVar9;
  char cVar10;
  Skeleton3DEditor SVar11;
  int iVar12;
  EditorFileDialog *this_00;
  CallableCustom *pCVar13;
  BoxContainer *pBVar14;
  MenuButton *this_01;
  Ref *pRVar15;
  undefined8 *puVar16;
  Button *pBVar17;
  VSeparator *this_02;
  EditorInspectorSection *this_03;
  ScrollContainer *this_04;
  undefined8 uVar18;
  Tree *this_05;
  BonePropertiesEditor *this_06;
  bool bVar19;
  long in_FS_OFFSET;
  float fVar20;
  undefined8 *local_c0;
  Callable local_b8 [16];
  Tree local_a8 [16];
  Callable local_98 [16];
  undefined8 local_88 [2];
  long local_78 [2];
  Object *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::set_h_size_flags(this,3);
  Control::set_focus_mode(this,2);
  pCVar8 = Node3DEditor::singleton;
  this_00 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(EditorFileDialog **)(this + 0xa90) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x108);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(undefined **)(pCVar13 + 0x20) = &_LC42;
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar13 = &PTR_hash_00129630;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined8 *)(pCVar13 + 0x30) = uVar18;
  *(code **)(pCVar13 + 0x38) = _file_selected;
  *(Skeleton3DEditor **)(pCVar13 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "Skeleton3DEditor::_file_selected";
  Callable::Callable((Callable *)local_68,pCVar13);
  StringName::StringName((StringName *)local_78,"file_selected",false);
  (*pcVar2)(this_00,(StringName *)local_78,(Callable *)local_68);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa90),0);
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00127ee0;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xa38) = pBVar14;
  Node3DEditor::add_control_to_menu_panel(pCVar8);
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_68[0] = (Object *)0x0;
  MenuButton::MenuButton(this_01,(String *)local_68);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0xa40) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa40),0));
  pSVar3 = *(StringName **)(this + 0xa40);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa40),0);
  pSVar4 = *(String **)(this + 0xa40);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Skeleton3D");
  TTR((String *)local_68,(String *)local_88);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Reset All Bone Poses");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/reset_all_poses");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0,0);
  iVar12 = (int)(Callable *)local_68;
  PopupMenu::add_shortcut(pRVar15,iVar12,false,false);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))();
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Reset Selected Poses");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/reset_selected_poses");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar12,true,false);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))();
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Apply All Poses to Rests");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/all_poses_to_rests");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar12,true,false);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))();
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Apply Selected Poses to Rests");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/selected_poses_to_rests");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar12,true,false);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))();
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Create Physical Skeleton");
  TTR((String *)local_68,(String *)local_88);
  PopupMenu::add_item(pRVar15,(Callable *)local_68,4,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Export Skeleton Profile");
  TTR((String *)local_68,(String *)local_88);
  PopupMenu::add_item(pRVar15,(Callable *)local_68,5,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pcVar2 = *(code **)(*(long *)pRVar15 + 0x108);
  create_custom_callable_function_pointer<Skeleton3DEditor,int>
            ((Skeleton3DEditor *)local_68,(char *)this,
             (_func_void_int *)"&Skeleton3DEditor::_on_click_skeleton_option");
  (*pcVar2)(pRVar15,SceneStringNames::singleton + 0x240,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  iVar12 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar12,true);
  iVar12 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar12,true);
  local_c0 = (undefined8 *)0x0;
  puVar16 = (undefined8 *)Memory::alloc_static(0x30,false);
  if (puVar16 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  else {
    local_c0 = puVar16 + 2;
    *puVar16 = 1;
    *(undefined4 *)(puVar16 + 2) = 0;
    puVar16[1] = 1;
    *(undefined1 (*) [16])(puVar16 + 3) = (undefined1  [16])0x0;
  }
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa48) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa48),0,0);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa48));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa48),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa48),0);
  pSVar4 = *(String **)(this + 0xa48);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Edit Mode\nShow buttons on joints.");
  TTR((String *)local_68,(String *)local_88);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar5 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar5 + 0x108);
  create_custom_callable_function_pointer<Skeleton3DEditor,bool>
            ((Skeleton3DEditor *)local_68,(char *)this,
             (_func_void_bool *)"&Skeleton3DEditor::edit_mode_toggled");
  (*pcVar2)(plVar5,SceneStringNames::singleton + 0x248,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  this[0xa50] = (Skeleton3DEditor)0x0;
  if (*(long *)(this + 0xa18) != 0) {
    Node::add_child(*(long *)(this + 0xa18),*(undefined8 *)(this + 0xaa8),0,0);
    pNVar6 = *(NodePath **)(this + 0xaa8);
    local_78[0] = 0;
    String::parse_latin1((String *)local_78,"");
    NodePath::NodePath((NodePath *)local_68,(String *)local_78);
    MeshInstance3D::set_skeleton_path(pNVar6);
    NodePath::~NodePath((NodePath *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  }
  pBVar14 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar14,false);
  pBVar14[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar14 = &PTR__initialize_classv_00127ee0;
  postinitialize_handler((Object *)pBVar14);
  *(BoxContainer **)(this + 0xa58) = pBVar14;
  Node::add_child(*(undefined8 *)(this + 0xa38),pBVar14,0,0);
  uVar18 = *(undefined8 *)(this + 0xa58);
  this_02 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(uVar18,this_02,0,0);
  CanvasItem::hide();
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa60) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa60),0);
  pSVar4 = *(String **)(this + 0xa60);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Translation mask for inserting keys.");
  TTR((String *)local_68,(String *)local_88);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa60),0,0);
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa68) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa68));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa68),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa68),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa68),0);
  pSVar4 = *(String **)(this + 0xa68);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Rotation mask for inserting keys.");
  TTR((String *)local_68,(String *)local_88);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa68),0,0);
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa70) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa70));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa70),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa70),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa70),0);
  pSVar4 = *(String **)(this + 0xa70);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Scale mask for inserting keys.");
  TTR((String *)local_68,(String *)local_88);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa70),0,0);
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa78) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa78));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa78),0);
  plVar5 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar5 + 0x108);
  create_custom_callable_function_pointer<Skeleton3DEditor,bool>
            ((Skeleton3DEditor *)local_78,(char *)this,
             (_func_void_bool *)"&Skeleton3DEditor::insert_keys");
  bVar19 = SUB81((Callable *)local_68,0);
  Callable::bind<bool>(bVar19);
  (*pcVar2)(plVar5,SceneStringNames::singleton + 0x238,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  pSVar4 = *(String **)(this + 0xa78);
  local_68[0] = (Object *)0x0;
  String::parse_latin1
            ((String *)local_68,"Insert key (based on mask) for bones with an existing track.");
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pRVar15 = *(Ref **)(this + 0xa78);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Insert Key (Existing Tracks)");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/insert_key_to_existing_tracks");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0x400007,0);
  BaseButton::set_shortcut(pRVar15);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa78),0,0);
  pBVar17 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar17,(String *)local_68);
  postinitialize_handler((Object *)pBVar17);
  *(Button **)(this + 0xa80) = pBVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa80));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa80),0);
  plVar5 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar5 + 0x108);
  create_custom_callable_function_pointer<Skeleton3DEditor,bool>
            ((Skeleton3DEditor *)local_78,(char *)this,
             (_func_void_bool *)"&Skeleton3DEditor::insert_keys");
  Callable::bind<bool>(bVar19);
  (*pcVar2)(plVar5,SceneStringNames::singleton + 0x238,(Callable *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  pSVar4 = *(String **)(this + 0xa80);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"Insert key (based on mask) for all bones.");
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pRVar15 = *(Ref **)(this + 0xa80);
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Insert Key (All Bones)");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"skeleton_3d_editor/insert_key_of_all_bones");
  ED_SHORTCUT((Callable *)local_68,(String *)local_88,(StringName *)local_78,0x1400007,0);
  BaseButton::set_shortcut(pRVar15);
  if (local_68[0] != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar9 = local_68[0];
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68[0]);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa80),0,0);
  this_03 = (EditorInspectorSection *)operator_new(0xa78,"");
  EditorInspectorSection::EditorInspectorSection(this_03);
  postinitialize_handler((Object *)this_03);
  *(EditorInspectorSection **)(this + 0xa88) = this_03;
  pCVar7 = *(Color **)(this + 0xa18);
  local_68[0] = (Object *)0x0;
  local_58 = __LC83;
  uStack_50 = _LC35;
  String::parse_latin1((String *)local_68,"Bones");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"bones");
  EditorInspectorSection::setup
            ((String *)this_03,(String *)local_78,(Object *)local_68,pCVar7,SUB81(&local_58,0),1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa88),0,0);
  EditorInspectorSection::unfold();
  this_04 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_04);
  postinitialize_handler((Object *)this_04);
  Control::set_h_size_flags(this_04,3);
  fVar20 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(_LC248 * fVar20,fVar20);
  Control::set_custom_minimum_size((Vector2 *)this_04);
  uVar18 = EditorInspectorSection::get_vbox();
  Node::add_child(uVar18,this_04,0,0);
  this_05 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_05);
  postinitialize_handler((Object *)this_05);
  *(Tree **)(this + 0xa20) = this_05;
  Node::set_auto_translate_mode(this_05,2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xa20));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa20),0);
  Tree::set_select_mode(*(undefined8 *)(this + 0xa20),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa20),0));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa20),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xa20),0));
  pSVar3 = *(StringName **)(this + 0xa20);
  StringName::StringName((StringName *)local_68,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
    StringName::unref();
  }
  plVar5 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar5 + 0x318);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar13 = &PTR_hash_00129900;
  *(undefined8 *)(pCVar13 + 0x30) = uVar18;
  *(code **)(pCVar13 + 0x38) = drop_data_fw;
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined **)(pCVar13 + 0x20) = &_LC42;
  *(Skeleton3DEditor **)(pCVar13 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "Skeleton3DEditor::drop_data_fw";
  Callable::Callable((Callable *)local_78,pCVar13);
  Callable::bind<Tree*>((Tree *)local_68);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar13 = &PTR_hash_00129870;
  *(undefined8 *)(pCVar13 + 0x30) = uVar18;
  *(code **)(pCVar13 + 0x38) = can_drop_data_fw;
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined **)(pCVar13 + 0x20) = &_LC42;
  *(Skeleton3DEditor **)(pCVar13 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "Skeleton3DEditor::can_drop_data_fw";
  Callable::Callable(local_98,pCVar13);
  Callable::bind<Tree*>((Tree *)local_88);
  pCVar13 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar13);
  *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar13 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar13 = &PTR_hash_001297e0;
  *(undefined8 *)(pCVar13 + 0x30) = uVar18;
  *(code **)(pCVar13 + 0x38) = get_drag_data_fw;
  *(undefined8 *)(pCVar13 + 0x10) = 0;
  *(undefined **)(pCVar13 + 0x20) = &_LC42;
  *(Skeleton3DEditor **)(pCVar13 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
  *(char **)(pCVar13 + 0x20) = "Skeleton3DEditor::get_drag_data_fw";
  Callable::Callable(local_b8,pCVar13);
  Callable::bind<Tree*>(local_a8);
  (*pcVar2)(plVar5,local_a8,(String *)local_88,(Callable *)local_68);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable(local_b8);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable(local_98);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa20),0,0);
  this_06 = (BonePropertiesEditor *)operator_new(0xaf8,"");
  BonePropertiesEditor::BonePropertiesEditor(this_06,*(Skeleton3D **)(this + 0xa18));
  postinitialize_handler((Object *)this_06);
  *(BonePropertiesEditor **)(this + 0xa30) = this_06;
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Bone Transform");
  TTR((String *)local_68,(String *)local_88);
  CowData<char32_t>::_ref((CowData<char32_t> *)(this_06 + 0xac0),(CowData *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa30),0));
  Node::add_child(this,*(undefined8 *)(this + 0xa30),0,0);
  SVar11 = (Skeleton3DEditor)AnimationTrackEditor::has_keying();
  this[0xa98] = SVar11;
  if (SVar11 == (Skeleton3DEditor)0x0) {
    CanvasItem::hide();
  }
  else {
    CanvasItem::show();
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DEditor::Skeleton3DEditor(EditorInspectorPluginSkeleton*, Skeleton3D*) */

void __thiscall
Skeleton3DEditor::Skeleton3DEditor
          (Skeleton3DEditor *this,EditorInspectorPluginSkeleton *param_1,Skeleton3D *param_2)

{
  code *pcVar1;
  StringName *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Shader *this_00;
  MeshInstance3D *this_01;
  ImmediateMesh *this_02;
  long lVar7;
  Ref *pRVar8;
  Object *pOVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(Skeleton3D **)(this + 0xa18) = param_2;
  *(undefined ***)this = &PTR__initialize_classv_00128948;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  uVar4 = _LC35;
  uVar3 = __LC83;
  this[0xa0c] = (Skeleton3DEditor)0x1;
  *(EditorInspectorPluginSkeleton **)(this + 0xa10) = param_1;
  this[0xa50] = (Skeleton3DEditor)0x0;
  this[0xa98] = (Skeleton3DEditor)0x0;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xac8) = 0;
  *(undefined4 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xae4) = 0;
  *(undefined4 *)(this + 0xaec) = 0;
  *(undefined4 *)(this + 0xaf0) = 0xffffffff;
  *(undefined8 *)(this + 0xad4) = uVar3;
  *(undefined8 *)(this + 0xadc) = uVar4;
  singleton = this;
  Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)(this + 0xab8));
  this_00 = (Shader *)operator_new(0x2e8,"");
  Shader::Shader(this_00);
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar10 = *(Object **)(this + 0xac0);
    if (pOVar10 != (Object *)0x0) {
      *(undefined8 *)(this + 0xac0) = 0;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        this_00 = (Shader *)0x0;
        cVar5 = predelete_handler(pOVar10);
        if (cVar5 != '\0') {
LAB_0010dc1b:
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
          pOVar9 = (Object *)this_00;
          if (this_00 != (Shader *)0x0) goto LAB_0010d9e6;
        }
      }
      goto LAB_0010d6ca;
    }
  }
  else {
    pOVar10 = *(Object **)(this + 0xac0);
    pOVar9 = pOVar10;
    if (this_00 != (Shader *)pOVar10) {
      *(Shader **)(this + 0xac0) = this_00;
      cVar5 = RefCounted::reference();
      pOVar9 = (Object *)this_00;
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xac0) = 0;
        if (pOVar10 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x0010db8b:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0'))
          goto LAB_0010dc1b;
        }
      }
      else if (pOVar10 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x0010db8b;
      }
    }
LAB_0010d9e6:
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar9), cVar5 == '\0')) {
LAB_0010d6ca:
      pOVar10 = *(Object **)(this + 0xac0);
    }
    else {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
      pOVar10 = *(Object **)(this + 0xac0);
    }
  }
  local_70 = (Object *)0x0;
  local_60 = 0x367;
  local_68 = (Object *)0x115480;
  String::parse_latin1((StrRange *)&local_70);
  Shader::set_code((String *)pOVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  ShaderMaterial::set_shader(*(Ref **)(this + 0xab8));
  pOVar10 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar10 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar10 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar10 + 0x1c8);
  lVar7 = EditorStringNames::singleton + 0x10;
  if ((Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}::operator()()::
       sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::
                                   {lambda()#1}::operator()()::sname), iVar6 != 0)) {
    _scs_create((char *)&Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}
                         ::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}
                         ::operator()()::sname);
    (*pcVar1)((StrRange *)&local_70,pOVar10,
              &Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}::
               operator()()::sname,lVar7);
    cVar5 = RefCounted::unreference();
  }
  else {
    (*pcVar1)((StrRange *)&local_70,pOVar10,
              &Skeleton3DEditor(EditorInspectorPluginSkeleton*,Skeleton3D*)::{lambda()#1}::
               operator()()::sname,lVar7);
    cVar5 = RefCounted::unreference();
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
  }
  pSVar2 = *(StringName **)(this + 0xab8);
  iVar6 = (**(code **)(*(long *)local_70 + 0x1c8))();
  Variant::Variant((Variant *)local_58,iVar6);
  StringName::StringName((StringName *)&local_68,"point_size",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar2 = *(StringName **)(this + 0xab8);
  Variant::Variant((Variant *)local_58,local_70);
  StringName::StringName((StringName *)&local_68,"texture_albedo",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  this_01 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(this_01);
  postinitialize_handler((Object *)this_01);
  *(MeshInstance3D **)(this + 0xaa8) = this_01;
  GeometryInstance3D::set_cast_shadows_setting(this_01,0);
  this_02 = (ImmediateMesh *)operator_new(0x4f0,"");
  ImmediateMesh::ImmediateMesh(this_02);
  postinitialize_handler((Object *)this_02);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar10 = *(Object **)(this + 0xab0);
    if (pOVar10 == (Object *)0x0) {
      local_68 = (Object *)0x0;
      pRVar8 = *(Ref **)(this + 0xaa8);
      goto LAB_0010d93a;
    }
    *(undefined8 *)(this + 0xab0) = 0;
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar10), cVar5 == '\0')) goto LAB_0010d8ef;
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
    lVar7 = *(long *)(this + 0xab0);
  }
  else {
    pOVar10 = *(Object **)(this + 0xab0);
    pOVar9 = pOVar10;
    if (this_02 != (ImmediateMesh *)pOVar10) {
      *(ImmediateMesh **)(this + 0xab0) = this_02;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xab0) = 0;
      }
      pOVar9 = (Object *)this_02;
      if (((pOVar10 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
LAB_0010d8ef:
    lVar7 = *(long *)(this + 0xab0);
  }
  local_68 = (Object *)0x0;
  pRVar8 = *(Ref **)(this + 0xaa8);
  if (((lVar7 != 0) &&
      (pOVar10 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Mesh::typeinfo,0),
      pOVar10 != (Object *)0x0)) &&
     (local_68 = pOVar10, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_68 = (Object *)0x0;
  }
LAB_0010d93a:
  MeshInstance3D::set_mesh(pRVar8);
  if (((local_68 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar10 = local_68, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
  }
  create_editors(this);
  if (((local_70 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar10 = local_70, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPluginSkeleton::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginSkeleton::parse_begin(EditorInspectorPluginSkeleton *this,Object *param_1)

{
  Skeleton3D *pSVar1;
  Skeleton3DEditor *this_00;
  
  if (param_1 != (Object *)0x0) {
    pSVar1 = (Skeleton3D *)__dynamic_cast(param_1,&Object::typeinfo,&Skeleton3D::typeinfo,0);
    if (pSVar1 != (Skeleton3D *)0x0) {
      this_00 = (Skeleton3DEditor *)operator_new(0xaf8,"");
      Skeleton3DEditor::Skeleton3DEditor(this_00,this,pSVar1);
      postinitialize_handler((Object *)this_00);
      *(Skeleton3DEditor **)(this + 0x218) = this_00;
      EditorInspectorPlugin::add_custom_control((Control *)this);
      return;
    }
  }
  _err_print_error("parse_begin","editor/plugins/skeleton_3d_editor_plugin.cpp",0x571,
                   "Parameter \"skeleton\" is null.",0,0);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Skeleton3DEditor::update_joint_tree() [clone .part.0] */

void __thiscall Skeleton3DEditor::update_joint_tree(Skeleton3DEditor *this)

{
  int *piVar1;
  bool *pbVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined8 uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  Object *pOVar24;
  undefined8 uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  int *piVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int iVar34;
  ulong uVar35;
  uint uVar36;
  long in_FS_OFFSET;
  bool bVar37;
  Object *local_238;
  CowData<int> *local_230;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  String local_1b8 [8];
  String local_1b0 [8];
  String local_1a8 [8];
  String local_1a0 [8];
  String local_198 [8];
  String local_190 [8];
  String local_188 [8];
  Object *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168 [2];
  int *local_160;
  Object *local_158;
  long local_150;
  TreeItem *local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  int local_118 [8];
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c8 = Tree::create_item(*(TreeItem **)(this + 0xa20),0);
  local_120 = 2;
  local_168[0] = 0xffffffff;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
  ::insert((int *)&local_158,&local_148,SUB81((Vector<int> *)local_168,0));
  if ((update_joint_tree()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar23 = __cxa_guard_acquire(&update_joint_tree()::{lambda()#1}::operator()()::sname),
     iVar23 != 0)) {
    _scs_create((char *)&update_joint_tree()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&update_joint_tree()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&update_joint_tree()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_158);
  if (local_158 == (Object *)0x0) {
    Skeleton3D::get_parentless_bones();
    if (local_160 == (int *)0x0) {
      CowData<int>::_unref((CowData<int> *)&local_160);
      goto LAB_0010edc8;
    }
    local_238 = (Object *)0x0;
LAB_0010dff9:
    do {
      if (*(long *)(local_160 + -2) < 1) break;
      iVar23 = *local_160;
      local_1cc = iVar23;
      CowData<int>::_copy_on_write((CowData<int> *)&local_160);
      if (local_160 == (int *)0x0) {
        lVar29 = -1;
      }
      else {
        lVar29 = *(long *)(local_160 + -2) + -1;
        if (0 < lVar29) {
          memmove(local_160,local_160 + 1,lVar29 * 4);
        }
      }
      CowData<int>::resize<false>((CowData<int> *)&local_160,lVar29);
      uVar20 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa18));
      if ((local_140._0_8_ == 0) || (local_120._4_4_ == 0)) {
LAB_0010f148:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (local_120 & 0xffffffff) * 8);
      uVar21 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar30 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar30 = 1;
        uVar28 = uVar32;
      }
      else {
        uVar28 = uVar30 * uVar32;
      }
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar35;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar28;
      lVar29 = SUB168(auVar3 * auVar7,8);
      uVar21 = *(uint *)(local_140._8_8_ + lVar29 * 4);
      uVar26 = SUB164(auVar3 * auVar7,8);
      if (uVar21 == 0) goto LAB_0010f148;
      uVar36 = 0;
      while ((uVar21 != uVar30 ||
             (uVar20 != *(uint *)(*(long *)(local_140._0_8_ + lVar29 * 8) + 0x10)))) {
        uVar36 = uVar36 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar26 + 1) * uVar32;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar35;
        lVar29 = SUB168(auVar4 * auVar8,8);
        uVar21 = *(uint *)(local_140._8_8_ + lVar29 * 4);
        uVar26 = SUB164(auVar4 * auVar8,8);
        if ((uVar21 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = uVar21 * uVar32, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar35, auVar6._8_8_ = 0,
           auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4) +
                           uVar26) - SUB164(auVar5 * auVar9,8)) * uVar32, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar35, SUB164(auVar6 * auVar10,8) < uVar36)) goto LAB_0010f148;
      }
      uVar25 = Tree::create_item(*(TreeItem **)(this + 0xa20),
                                 (int)*(undefined8 *)
                                       (*(long *)(local_140._0_8_ + (ulong)uVar26 * 8) + 0x18));
      local_1c0 = uVar25;
      HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
      ::insert((int *)&local_158,&local_148,SUB81(&local_1cc,0));
      iVar27 = (int)(StringName *)&local_158;
      Skeleton3D::get_bone_name(iVar27);
      TreeItem::set_text(uVar25,0,(StringName *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      local_158 = (Object *)0x0;
      if (((local_238 != (Object *)0x0) &&
          (pOVar24 = (Object *)__dynamic_cast(local_238,&Object::typeinfo,&Texture2D::typeinfo,0),
          pOVar24 != (Object *)0x0)) &&
         (local_158 = pOVar24, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
        local_158 = (Object *)0x0;
      }
      iVar34 = (int)uVar25;
      TreeItem::set_icon(iVar34,(Ref *)0x0);
      if (((local_158 != (Object *)0x0) &&
          (cVar13 = RefCounted::unreference(), pOVar24 = local_158, cVar13 != '\0')) &&
         (cVar13 = predelete_handler(local_158), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
        Memory::free_static(pOVar24,false);
      }
      TreeItem::set_selectable(iVar34,false);
      itos((long)&local_170);
      operator+((char *)&local_158,(String *)"bones/");
      Variant::Variant((Variant *)local_58,(String *)&local_158);
      TreeItem::set_metadata(iVar34,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146b8;
      local_170 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_1b8,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146c1;
      local_170 = 0;
      local_150 = 7;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_1b0,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146c9;
      local_170 = 0;
      local_150 = 5;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_1a8,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146cf;
      local_170 = 0;
      local_150 = 9;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_1a0,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146d9;
      local_170 = 0;
      local_150 = 9;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_198,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146e3;
      local_170 = 0;
      local_150 = 6;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_190,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      local_158 = (Object *)0x1146ea;
      local_170 = 0;
      local_150 = 5;
      String::parse_latin1((StrRange *)&local_170);
      itos((long)&local_178);
      operator+((char *)&local_158,(String *)"bones/");
      String::operator+(local_188,(String *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_1b8,false);
      Object::get((StringName *)local_118,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_1b0,false);
      Object::get((StringName *)local_f8,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_1a8,false);
      Object::get((StringName *)local_d8,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_1a0,false);
      Object::get((StringName *)local_b8,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_198,false);
      Object::get((StringName *)local_98,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_190,false);
      Object::get((StringName *)local_78,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      pbVar2 = *(bool **)(this + 0xa18);
      StringName::StringName((StringName *)&local_158,local_188,false);
      Object::get((StringName *)local_58,pbVar2);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_1b8,false);
      cVar13 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_118);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_1b0,false);
      cVar14 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_f8);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_1a8,false);
      cVar15 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_d8);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_1a0,false);
      cVar16 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_b8);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_198,false);
      cVar17 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_98);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_190,false);
      cVar18 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_78);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_158,local_188,false);
      cVar19 = EditorPropertyRevert::can_property_revert
                         (*(Object **)(this + 0xa18),(StringName *)&local_158,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)) {
        StringName::unref();
      }
      if (((((cVar13 != '\0') || (cVar14 != '\0')) || (cVar15 != '\0')) ||
          ((cVar16 != '\0' || (cVar17 != '\0' || cVar18 != '\0')))) || (cVar19 != '\0')) {
        local_170 = 0;
        local_158 = (Object *)&_LC42;
        local_150 = 0;
        String::parse_latin1((StrRange *)&local_170);
        local_158 = (Object *)0x114a7d;
        local_178 = 0;
        local_150 = 6;
        String::parse_latin1((StrRange *)&local_178);
        TTR((String *)&local_158,(String *)&local_178);
        if ((update_joint_tree()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar22 = __cxa_guard_acquire(&update_joint_tree()::{lambda()#2}::operator()()::sname),
           iVar22 != 0)) {
          _scs_create((char *)&update_joint_tree()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_joint_tree()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&update_joint_tree()::{lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_180);
        TreeItem::add_button(iVar34,(Ref *)0x0,(int)(StringName *)&local_180,false,(String *)0x0);
        if (((local_180 != (Object *)0x0) &&
            (cVar13 = RefCounted::unreference(), pOVar24 = local_180, cVar13 != '\0')) &&
           (cVar13 = predelete_handler(local_180), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
          Memory::free_static(pOVar24,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      }
      Skeleton3D::get_bone_children(iVar27);
      if ((local_150 != 0) && (iVar27 = (int)*(undefined8 *)(local_150 + -8), 0 < iVar27)) {
        uVar32 = 0;
        do {
          if (local_150 == 0) {
            lVar29 = 0;
LAB_0010ec38:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar32,lVar29,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          lVar29 = *(long *)(local_150 + -8);
          if (lVar29 <= (long)uVar32) goto LAB_0010ec38;
          Vector<int>::push_back((Vector<int> *)local_168,*(int *)(local_150 + uVar32 * 4));
          bVar37 = uVar32 != iVar27 - 1;
          uVar32 = uVar32 + 1;
        } while (bVar37);
      }
      if (iVar23 == *(int *)(this + 0xaf0)) {
        TreeItem::select(iVar34);
      }
      CowData<int>::_unref((CowData<int> *)&local_150);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_f8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_118[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
    } while (local_160 != (int *)0x0);
  }
  else {
    pOVar24 = (Object *)__dynamic_cast(local_158,&Object::typeinfo,&Texture::typeinfo,0);
    local_238 = pOVar24;
    if (pOVar24 == (Object *)0x0) {
LAB_0010dfc7:
      cVar13 = RefCounted::unreference();
      pOVar24 = local_158;
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_158), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
        Memory::free_static(pOVar24,false);
      }
    }
    else {
      cVar13 = RefCounted::reference();
      local_238 = (Object *)0x0;
      if (cVar13 != '\0') {
        local_238 = pOVar24;
      }
      if (local_158 != (Object *)0x0) goto LAB_0010dfc7;
    }
    Skeleton3D::get_parentless_bones();
    if (local_160 != (int *)0x0) goto LAB_0010dff9;
  }
  local_230 = (CowData<int> *)&local_160;
  CowData<int>::_unref(local_230);
  if (((local_238 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
     (cVar13 = predelete_handler(local_238), cVar13 != '\0')) {
    (**(code **)(*(long *)local_238 + 0x140))(local_238);
    Memory::free_static(local_238,false);
  }
LAB_0010edc8:
  uVar25 = local_140._0_8_;
  if ((undefined8 *)local_140._0_8_ == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar12 = local_140._8_8_;
    if ((local_120._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_140._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4) * 4);
      piVar31 = (int *)local_140._8_8_;
      puVar33 = (undefined8 *)local_140._0_8_;
      do {
        if (*piVar31 != 0) {
          *piVar31 = 0;
          Memory::free_static((void *)*puVar33,false);
          *puVar33 = 0;
        }
        piVar31 = piVar31 + 1;
        puVar33 = puVar33 + 1;
      } while (piVar1 != piVar31);
    }
    Memory::free_static((void *)uVar25,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar12,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::update_joint_tree() */

void __thiscall Skeleton3DEditor::update_joint_tree(Skeleton3DEditor *this)

{
  Tree::clear();
  if (*(long *)(this + 0xa18) != 0) {
    update_joint_tree(this);
    return;
  }
  return;
}



/* Skeleton3DEditor::update_all() */

void __thiscall Skeleton3DEditor::update_all(Skeleton3DEditor *this)

{
  if (*(BonePropertiesEditor **)(this + 0xa30) != (BonePropertiesEditor *)0x0) {
    BonePropertiesEditor::_update_properties(*(BonePropertiesEditor **)(this + 0xa30));
  }
  Node3DEditor::update_transform_gizmo();
  Tree::clear();
  if (*(long *)(this + 0xa18) != 0) {
    update_joint_tree(this);
    return;
  }
  return;
}



/* Skeleton3DEditor::create_physical_skeleton() */

void __thiscall Skeleton3DEditor::create_physical_skeleton(Skeleton3DEditor *this)

{
  long *plVar1;
  Variant **ppVVar2;
  StringName *pSVar3;
  code *pcVar4;
  uint uVar5;
  String *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Object *this_00;
  Object *pOVar10;
  undefined8 *puVar11;
  PhysicalBoneSimulator3D *this_01;
  Object *pOVar12;
  long lVar13;
  Object *pOVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  undefined8 local_128;
  undefined8 local_120;
  String local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  Variant *local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Variant *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("create_physical_skeleton","editor/plugins/skeleton_3d_editor_plugin.cpp",
                       0x1f6,"Parameter \"get_tree()\" is null.",0,0);
      return;
    }
  }
  else {
    pOVar10 = (Object *)SceneTree::get_edited_scene_root();
    iVar7 = Skeleton3D::get_bone_count();
    pSVar6 = EditorNode::singleton;
    if (iVar7 == 0) {
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8,"");
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"Warning!");
      TTR((String *)&local_108,(String *)&local_100);
      local_120 = 0;
      String::parse_latin1((String *)&local_120,"");
      local_128 = 0;
      String::parse_latin1
                ((String *)&local_128,
                 "Cannot create a physical skeleton for a Skeleton3D node with no bones.");
      TTR(local_118,(String *)&local_128);
      vformat<>((String *)&local_110);
      EditorNode::show_warning(pSVar6,(String *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    else {
      local_f0 = (undefined8 *)0x0;
      if (iVar7 < 0) {
        puVar11 = (undefined8 *)0x0;
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      }
      else {
        lVar20 = (long)iVar7;
        CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write
                  ((CowData<Skeleton3DEditor::BoneInfo> *)&local_f0);
        uVar18 = lVar20 * 0x38 - 1;
        uVar18 = uVar18 | uVar18 >> 1;
        uVar18 = uVar18 | uVar18 >> 2;
        uVar18 = uVar18 | uVar18 >> 4;
        uVar18 = uVar18 | uVar18 >> 8;
        uVar18 = uVar18 | uVar18 >> 0x10;
        puVar11 = (undefined8 *)Memory::alloc_static((uVar18 | uVar18 >> 0x20) + 0x11,false);
        if (puVar11 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          puVar11 = local_f0;
        }
        else {
          local_f0 = puVar11 + 2;
          *puVar11 = 1;
          uVar5 = _LC11;
          auVar21 = ZEXT416(_LC11);
          puVar16 = local_f0;
          do {
            *puVar16 = 0;
            puVar17 = puVar16 + 7;
            *(undefined1 (*) [16])(puVar16 + 1) = auVar21;
            *(undefined1 (*) [16])(puVar16 + 3) = auVar21;
            *(uint *)(puVar16 + 5) = uVar5;
            *(undefined8 *)((long)puVar16 + 0x2c) = 0;
            *(undefined4 *)((long)puVar16 + 0x34) = 0;
            puVar16 = puVar17;
          } while (puVar11 + lVar20 * 7 + 2 != puVar17);
          puVar11[1] = lVar20;
          puVar11 = local_f0;
        }
      }
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"");
      local_110 = 0;
      String::parse_latin1((String *)&local_110,"Create physical bones");
      TTR((String *)&local_100,(String *)&local_110);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_100,2,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      this_01 = (PhysicalBoneSimulator3D *)operator_new(0x570,"");
      PhysicalBoneSimulator3D::PhysicalBoneSimulator3D(this_01);
      postinitialize_handler((Object *)this_01);
      StringName::StringName((StringName *)&local_100,"add_child",false);
      pSVar3 = *(StringName **)(this + 0xa18);
      Variant::Variant((Variant *)local_78,(Object *)this_01);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      iVar8 = (int)(Transform3D *)&local_a8;
      local_a8 = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar3,(Variant **)&local_100,iVar8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_100,"set_owner",false);
      Variant::Variant((Variant *)local_78,pOVar10);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (this_00,(StringName *)this_01,(Variant **)&local_100,iVar8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_100,"set_name",false);
      Variant::Variant((Variant *)local_78,"PhysicalBoneSimulator3D");
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (this_00,(StringName *)this_01,(Variant **)&local_100,iVar8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      if (0 < iVar7) {
        uVar18 = 0;
        lVar20 = 0;
        do {
          iVar8 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa18));
          uVar15 = uVar18;
          if (-1 < iVar8) {
            iVar9 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa18));
            Skeleton3D::get_bone_rest((int)(Variant *)local_78);
            uVar19 = (ulong)iVar8;
            if (puVar11 != (undefined8 *)0x0) {
              lVar13 = puVar11[-1];
              if (lVar13 <= (long)uVar19) goto LAB_0010fa4b;
              Transform3D::operator*
                        ((Transform3D *)&local_a8,(Transform3D *)(puVar11 + uVar19 * 7 + 1));
              lVar13 = puVar11[-1];
              if (lVar13 <= (long)uVar18) goto LAB_0010fff3;
              CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write
                        ((CowData<Skeleton3DEditor::BoneInfo> *)&local_f0);
              puVar11 = local_f0;
              puVar16 = (undefined8 *)((long)local_f0 + lVar20 + 8);
              *puVar16 = local_a8;
              puVar16[1] = uStack_a0;
              puVar16 = (undefined8 *)((long)local_f0 + lVar20 + 0x18);
              *puVar16 = local_98;
              puVar16[1] = uStack_90;
              puVar16 = (undefined8 *)((long)local_f0 + lVar20 + 0x28);
              *puVar16 = local_88;
              puVar16[1] = uStack_80;
              if (local_f0 != (undefined8 *)0x0) {
                lVar13 = local_f0[-1];
                if (lVar13 <= (long)uVar19) goto LAB_0010fa4b;
                if ((local_f0[uVar19 * 7] == 0) &&
                   (pOVar12 = (Object *)
                              create_physical_bone((int)this,iVar8,(Vector *)(uVar18 & 0xffffffff)),
                   pOVar12 != (Object *)0x0)) {
                  lVar13 = Node::get_child((int)pOVar12,false);
                  if ((lVar13 != 0) &&
                     ((lVar13 = Node::get_child((int)pOVar12,false), lVar13 != 0 &&
                      (pOVar14 = (Object *)
                                 __dynamic_cast(lVar13,&Object::typeinfo,&CollisionShape3D::typeinfo
                                                ,0), pOVar14 != (Object *)0x0)))) {
                    lVar13 = puVar11[-1];
                    uVar15 = uVar19;
                    if (lVar13 <= (long)uVar19) goto LAB_0010fff3;
                    CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write
                              ((CowData<Skeleton3DEditor::BoneInfo> *)&local_f0);
                    puVar11 = local_f0;
                    local_f0[uVar19 * 7] = pOVar12;
                    StringName::StringName((StringName *)&local_100,"add_child",false);
                    Variant::Variant((Variant *)local_78,pOVar12);
                    local_58 = (undefined1  [16])0x0;
                    local_60 = 0;
                    iVar8 = (int)local_e8;
                    local_e8[0] = (Variant *)local_78;
                    EditorUndoRedoManager::add_do_methodp
                              (this_00,(StringName *)this_01,(Variant **)&local_100,iVar8);
                    if (Variant::needs_deinit[(int)local_60] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_100 != 0)) {
                      StringName::unref();
                    }
                    StringName::StringName((StringName *)&local_100,"set_owner",false);
                    EditorUndoRedoManager::add_do_method<Node*>
                              ((EditorUndoRedoManager *)this_00,pOVar12,(StringName *)&local_100,
                               (Node *)pOVar10);
                    if ((StringName::configured != '\0') && (local_100 != 0)) {
                      StringName::unref();
                    }
                    StringName::StringName((StringName *)&local_100,"set_owner",false);
                    EditorUndoRedoManager::add_do_method<Node*>
                              ((EditorUndoRedoManager *)this_00,pOVar14,(StringName *)&local_100,
                               (Node *)pOVar10);
                    if ((StringName::configured != '\0') && (local_100 != 0)) {
                      StringName::unref();
                    }
                    Skeleton3D::get_bone_name((int)(String *)&local_108);
                    Variant::Variant((Variant *)local_78,(String *)&local_108);
                    StringName::StringName((StringName *)&local_100,"bone_name",false);
                    EditorUndoRedoManager::add_do_property
                              (this_00,(StringName *)pOVar12,(Variant *)&local_100);
                    if ((StringName::configured != '\0') && (local_100 != 0)) {
                      StringName::unref();
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                    if (iVar9 != -1) {
                      StringName::StringName((StringName *)&local_100,"set_joint_type",false);
                      Variant::Variant((Variant *)local_78,1);
                      local_60 = 0;
                      local_58 = (undefined1  [16])0x0;
                      local_e8[0] = (Variant *)local_78;
                      EditorUndoRedoManager::add_do_methodp
                                (this_00,(StringName *)pOVar12,(Variant **)&local_100,iVar8);
                      if (Variant::needs_deinit[(int)local_60] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      if ((StringName::configured != '\0') && (local_100 != 0)) {
                        StringName::unref();
                      }
                    }
                    pSVar3 = Node3DEditor::singleton;
                    ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
                    Variant::Variant((Variant *)local_78,pOVar12);
                    local_60 = 0;
                    local_58 = (undefined1  [16])0x0;
                    local_e8[0] = (Variant *)local_78;
                    EditorUndoRedoManager::add_do_methodp(this_00,pSVar3,ppVVar2,iVar8);
                    if (Variant::needs_deinit[(int)local_60] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    pSVar3 = Node3DEditor::singleton;
                    ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
                    Variant::Variant((Variant *)local_78,pOVar14);
                    local_60 = 0;
                    local_58 = (undefined1  [16])0x0;
                    local_e8[0] = (Variant *)local_78;
                    EditorUndoRedoManager::add_do_methodp(this_00,pSVar3,ppVVar2,iVar8);
                    if (Variant::needs_deinit[(int)local_60] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    EditorUndoRedoManager::add_do_reference(this_00);
                    StringName::StringName((StringName *)&local_100,"remove_child",false);
                    Variant::Variant((Variant *)local_78,pOVar12);
                    local_60 = 0;
                    local_58 = (undefined1  [16])0x0;
                    local_e8[0] = (Variant *)local_78;
                    EditorUndoRedoManager::add_undo_methodp
                              (this_00,(StringName *)this_01,(Variant **)&local_100,iVar8);
                    if (Variant::needs_deinit[(int)local_60] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_100 != 0)) {
                      StringName::unref();
                    }
                  }
                }
                goto LAB_0010f74f;
              }
            }
            lVar13 = 0;
LAB_0010fa4b:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar19,lVar13,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          Skeleton3D::get_bone_rest((int)&local_d8);
          if (puVar11 == (undefined8 *)0x0) {
            lVar13 = 0;
LAB_0010fff3:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar15,lVar13,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar13 = puVar11[-1];
          if (lVar13 <= (long)uVar18) goto LAB_0010fff3;
          CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write
                    ((CowData<Skeleton3DEditor::BoneInfo> *)&local_f0);
          puVar11 = (undefined8 *)((long)local_f0 + lVar20 + 8);
          *puVar11 = local_d8;
          puVar11[1] = uStack_d0;
          puVar11 = (undefined8 *)((long)local_f0 + lVar20 + 0x18);
          *puVar11 = local_c8;
          puVar11[1] = uStack_c0;
          puVar11 = (undefined8 *)((long)local_f0 + lVar20 + 0x28);
          *puVar11 = local_b8;
          puVar11[1] = uStack_b0;
          puVar11 = local_f0;
LAB_0010f74f:
          uVar18 = uVar18 + 1;
          lVar20 = lVar20 + 0x38;
        } while (uVar18 != (long)iVar7);
      }
      StringName::StringName((StringName *)&local_100,"remove_child",false);
      pSVar3 = *(StringName **)(this + 0xa18);
      Variant::Variant((Variant *)local_78,(Object *)this_01);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_e8[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp(this_00,pSVar3,(Variant **)&local_100,(int)local_e8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = puVar11 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(local_f0 + -2,false);
            return;
          }
          goto LAB_0011028b;
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0011028b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_on_click_skeleton_option(int) */

void __thiscall Skeleton3DEditor::_on_click_skeleton_option(Skeleton3DEditor *this,int param_1)

{
  if (*(long *)(this + 0xa18) != 0) {
    switch(param_1) {
    case 0:
      reset_pose(this,true);
      return;
    case 1:
      reset_pose(this,false);
      return;
    case 2:
      pose_to_rest(this,true);
      return;
    case 3:
      pose_to_rest(this,false);
      return;
    case 4:
      create_physical_skeleton(this);
      return;
    case 5:
      export_skeleton_profile(this);
      return;
    }
  }
  return;
}



/* Skeleton3DEditor::_subgizmo_selection_change() */

void __thiscall Skeleton3DEditor::_subgizmo_selection_change(Skeleton3DEditor *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_90 [2];
  long local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa18) != 0) {
    if (((this[0xa50] == (Skeleton3DEditor)0x0) || (singleton == 0)) ||
       (iVar1 = *(int *)(singleton + 0xaf0), iVar1 < 0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Node3D::clear_subgizmo_selection();
        return;
      }
      goto LAB_0011066c;
    }
    Node3D::get_gizmos();
    if (local_80 != 0) {
      lVar9 = 0;
      lVar8 = local_80;
      while (lVar9 < *(long *)(lVar8 + -8)) {
        lVar2 = *(long *)(lVar8 + lVar9 * 8);
        if (((lVar2 != 0) &&
            (pOVar5 = (Object *)
                      __dynamic_cast(lVar2,&Object::typeinfo,&EditorNode3DGizmo::typeinfo,0),
            pOVar5 != (Object *)0x0)) &&
           (cVar4 = RefCounted::reference(), lVar8 = local_80, cVar4 != '\0')) {
          pOVar7 = *(Object **)(pOVar5 + 0x200);
          if ((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::init_ref(), cVar4 != '\0')) {
            pOVar6 = (Object *)
                     __dynamic_cast(pOVar7,&Object::typeinfo,&Skeleton3DGizmoPlugin::typeinfo,0);
            if (pOVar6 != (Object *)0x0) {
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                cVar4 = RefCounted::unreference();
                goto joined_r0x001105da;
              }
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0'))
              goto LAB_001105eb;
LAB_00110490:
              uVar3 = *(undefined8 *)(this + 0xa18);
              Skeleton3D::get_bone_global_pose((int)local_78);
              local_90[0] = (Object *)0x0;
              pOVar7 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node3DGizmo::typeinfo,0);
              if ((pOVar7 != (Object *)0x0) &&
                 (local_90[0] = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
                local_90[0] = (Object *)0x0;
              }
              Node3D::set_subgizmo_selection(uVar3,local_90,iVar1);
              if (((local_90[0] != (Object *)0x0) &&
                  (cVar4 = RefCounted::unreference(), pOVar7 = local_90[0], cVar4 != '\0')) &&
                 (cVar4 = predelete_handler(local_90[0]), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
              cVar4 = RefCounted::unreference();
              if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
              break;
            }
            cVar4 = RefCounted::unreference();
joined_r0x001105da:
            if (cVar4 != '\0') {
              pOVar6 = (Object *)0x0;
              cVar4 = predelete_handler(pOVar7);
              if (cVar4 != '\0') {
LAB_001105eb:
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
                if (pOVar6 != (Object *)0x0) goto LAB_00110490;
              }
            }
          }
          cVar4 = RefCounted::unreference();
          lVar8 = local_80;
          if ((cVar4 != '\0') &&
             (cVar4 = predelete_handler(pOVar5), lVar8 = local_80, cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
            lVar8 = local_80;
          }
        }
        lVar9 = lVar9 + 1;
        if (lVar8 == 0) break;
      }
    }
    CowData<Ref<Node3DGizmo>>::_unref((CowData<Ref<Node3DGizmo>> *)&local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011066c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_update_gizmo_visible() */

void __thiscall Skeleton3DEditor::_update_gizmo_visible(Skeleton3DEditor *this)

{
  Skeleton3DEditor SVar1;
  char cVar2;
  long *plVar3;
  
  _subgizmo_selection_change(this);
  if (this[0xa50] == (Skeleton3DEditor)0x0) {
LAB_00110718:
    plVar3 = *(long **)(this + 0xa18);
    if (*(code **)(*plVar3 + 0x1c8) != Node3D::set_transform_gizmo_visible) {
      (**(code **)(*plVar3 + 0x1c8))(plVar3,1);
      goto LAB_0011076f;
    }
    *(byte *)(plVar3 + 0xa3) = *(byte *)(plVar3 + 0xa3) | 4;
  }
  else {
    plVar3 = *(long **)(this + 0xa18);
    if (*(int *)(this + 0xaf0) != -1) {
      cVar2 = Skeleton3D::is_bone_enabled((int)plVar3);
      if ((cVar2 != '\0') && (cVar2 = Skeleton3D::is_show_rest_only(), cVar2 == '\0'))
      goto LAB_00110718;
      plVar3 = *(long **)(this + 0xa18);
    }
    if (*(code **)(*plVar3 + 0x1c8) == Node3D::set_transform_gizmo_visible) {
      *(byte *)(plVar3 + 0xa3) = *(byte *)(plVar3 + 0xa3) & 0xfb;
      Skeleton3D::force_update_all_dirty_bones();
      SVar1 = this[0xa50];
      goto joined_r0x00110748;
    }
    (**(code **)(*plVar3 + 0x1c8))(plVar3,0);
LAB_0011076f:
    if (*(long *)(this + 0xa18) == 0) {
      return;
    }
  }
  Skeleton3D::force_update_all_dirty_bones();
  SVar1 = this[0xa50];
joined_r0x00110748:
  if (SVar1 == (Skeleton3DEditor)0x0) {
    Node3D::hide();
    return;
  }
  _draw_handles(this);
  return;
}



/* Skeleton3DEditor::edit_mode_toggled(bool) */

void __thiscall Skeleton3DEditor::edit_mode_toggled(Skeleton3DEditor *this,bool param_1)

{
  this[0xa50] = (Skeleton3DEditor)param_1;
  _update_gizmo_visible(this);
  return;
}



/* Skeleton3DEditor::_bone_enabled_changed(int) */

void Skeleton3DEditor::_bone_enabled_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_gizmo_visible((Skeleton3DEditor *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* Skeleton3DEditor::_joint_tree_selection_changed() */

void __thiscall Skeleton3DEditor::_joint_tree_selection_changed(Skeleton3DEditor *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant local_88 [8];
  String local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Tree::get_selected();
  if (lVar4 != 0) {
    TreeItem::get_metadata((int)local_58);
    Variant::operator_cast_to_String(local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = String::begins_with((char *)local_88);
    if (cVar1 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110a5d;
    }
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,(int)local_88);
    uVar2 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    *(undefined4 *)(this + 0xaf0) = uVar2;
    if (*(long *)(this + 0xa30) != 0) {
      local_70 = 0;
      local_68 = &_LC215;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      itos((long)local_78);
      operator+((char *)&local_68,(String *)"bones/");
      String::operator+(local_80,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      BonePropertiesEditor::set_target(*(BonePropertiesEditor **)(this + 0xa30),local_80);
      lVar4 = *(long *)(this + 0xa30);
      EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar4 + 0xa20),0));
      EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar4 + 0xa28),0));
      EditorProperty::set_keying(SUB81(*(undefined8 *)(lVar4 + 0xa30),0));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  }
  lVar4 = *(long *)(this + 0xa30);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x2fa) & 0x40) != 0)) {
    CanvasItem::set_visible(SUB81(lVar4,0));
  }
  iVar3 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar3,true);
  iVar3 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar3,true);
  if (*(BonePropertiesEditor **)(this + 0xa30) != (BonePropertiesEditor *)0x0) {
    BonePropertiesEditor::_update_properties(*(BonePropertiesEditor **)(this + 0xa30));
  }
  Node3DEditor::update_transform_gizmo();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_gizmo_visible(this);
    return;
  }
LAB_00110a5d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::select_bone(int) */

void __thiscall Skeleton3DEditor::select_bone(Skeleton3DEditor *this,int param_1)

{
  TreeItem *pTVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  NodePath aNStack_48 [8];
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    *(undefined4 *)(this + 0xaf0) = 0xffffffff;
    Tree::deselect_all();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _joint_tree_selection_changed(this);
      return;
    }
  }
  else {
    itos((long)local_38);
    operator+((char *)local_40,(String *)"bones/");
    NodePath::NodePath(aNStack_48,(String *)local_40);
    pTVar1 = (TreeItem *)Tree::get_root();
    lVar2 = _find(this,pTVar1,aNStack_48);
    NodePath::~NodePath(aNStack_48);
    CowData<char32_t>::_unref(local_40);
    CowData<char32_t>::_unref(local_38);
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      lVar3 = TreeItem::get_parent();
      while ((lVar3 != 0 && (lVar4 = Tree::get_root(), lVar3 != lVar4))) {
        TreeItem::set_collapsed(SUB81(lVar3,0));
        lVar3 = TreeItem::get_parent();
      }
      TreeItem::select((int)lVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Tree::scroll_to_item(*(TreeItem **)(this + 0xa20),SUB81(lVar2,0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DGizmoPlugin::subgizmos_intersect_ray(EditorNode3DGizmo const*, Camera3D*, Vector2
   const&) const */

int __thiscall
Skeleton3DGizmoPlugin::subgizmos_intersect_ray
          (Skeleton3DGizmoPlugin *this,EditorNode3DGizmo *param_1,Camera3D *param_2,Vector2 *param_3
          )

{
  Skeleton3DEditor *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_f8;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78 [4];
  float local_54;
  float fStack_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x1f0) == 0) ||
     (lVar7 = __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&Skeleton3D::typeinfo,0),
     this_00 = Skeleton3DEditor::singleton, lVar7 == 0)) {
    iVar9 = -1;
    _err_print_error("subgizmos_intersect_ray","editor/plugins/skeleton_3d_editor_plugin.cpp",0x5ec,
                     "Parameter \"skeleton\" is null.",0,0);
  }
  else {
    if (((Skeleton3DEditor::singleton != (Skeleton3DEditor *)0x0) &&
        (Skeleton3DEditor::singleton[0xa50] != (Skeleton3DEditor)0x0)) &&
       (*(int *)(Node3DEditor::singleton + 0xa60) == 0)) {
      fVar10 = (float)EditorScale::get_scale();
      fVar10 = fVar10 * __LC278;
      Node3D::get_global_transform();
      fVar5 = local_4c;
      fVar4 = fStack_50;
      fVar3 = local_54;
      Node3D::get_global_transform();
      iVar6 = Skeleton3D::get_bone_count();
      if (0 < iVar6) {
        iVar9 = -1;
        iVar8 = 0;
        local_f8 = _LC276;
        do {
          Skeleton3D::get_bone_global_pose((int)local_78);
          local_b8 = CONCAT44(local_54 * (float)((ulong)local_a0 >> 0x20) + fStack_50 * local_98 +
                              local_4c * fStack_94 + (float)((ulong)local_84 >> 0x20),
                              local_54 * local_a8 + fStack_50 * fStack_a4 +
                              local_4c * (float)local_a0 + (float)local_84);
          local_b0 = local_90 * local_54 + fStack_50 * local_8c + local_4c * local_88 + local_7c;
          local_78[0] = (**(code **)(*(long *)param_2 + 0x218))(param_2,&local_b8);
          fVar2 = local_b0;
          fVar1 = local_b8._4_4_;
          fVar12 = (float)local_b8;
          fVar11 = (float)Vector2::distance_to(param_3);
          if ((fVar11 < fVar10) &&
             (fVar12 = SQRT((fVar2 - fVar5) * (fVar2 - fVar5) +
                            (fVar12 - fVar3) * (fVar12 - fVar3) + (fVar1 - fVar4) * (fVar1 - fVar4))
             , fVar12 < local_f8)) {
            local_f8 = fVar12;
            iVar9 = iVar8;
          }
          iVar8 = iVar8 + 1;
        } while (iVar6 != iVar8);
        if (-1 < iVar9) {
          Skeleton3DEditor::select_bone(this_00,iVar9);
          goto LAB_00110f23;
        }
      }
      *(undefined4 *)(this_00 + 0xaf0) = 0xffffffff;
      Tree::deselect_all();
      Skeleton3DEditor::_joint_tree_selection_changed(this_00);
    }
    iVar9 = -1;
  }
LAB_00110f23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_notification(int) */

void Skeleton3DEditor::_notification(int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Ref *pRVar4;
  Color *pCVar5;
  int iVar6;
  CallableCustom *pCVar7;
  long lVar8;
  Node *pNVar9;
  int in_ESI;
  undefined4 in_register_0000003c;
  Skeleton3DEditor *this;
  long in_FS_OFFSET;
  long local_70;
  long local_68 [2];
  undefined8 local_58;
  long local_40;
  
  this = (Skeleton3DEditor *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 0xd) {
    StringName::StringName((StringName *)local_68,"separation",false);
    Control::add_theme_constant_override((StringName *)this,(int)(StringName *)local_68);
    if ((StringName::configured != '\0') && (local_68[0] != 0)) {
      StringName::unref();
    }
  }
  else if (in_ESI < 0xe) {
    if (in_ESI == 1) {
      if (*(long *)(this + 0xa18) != 0) {
        *(undefined4 *)(this + 0xaf0) = 0xffffffff;
        Tree::deselect_all();
        _joint_tree_selection_changed(this);
        plVar1 = *(long **)(this + 0xa18);
        pcVar2 = *(code **)(*plVar1 + 0x110);
        create_custom_callable_function_pointer<Skeleton3DEditor>
                  ((Skeleton3DEditor *)local_68,(char *)this,
                   (_func_void *)"&Skeleton3DEditor::_update_gizmo_visible");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x138,(Skeleton3DEditor *)local_68);
        Callable::~Callable((Callable *)local_68);
        plVar1 = *(long **)(this + 0xa18);
        pcVar2 = *(code **)(*plVar1 + 0x110);
        create_custom_callable_function_pointer<Skeleton3DEditor,int>
                  ((Skeleton3DEditor *)local_68,(char *)this,
                   (_func_void_int *)"&Skeleton3DEditor::_bone_enabled_changed");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x130,(Skeleton3DEditor *)local_68);
        Callable::~Callable((Callable *)local_68);
        plVar1 = *(long **)(this + 0xa18);
        pcVar2 = *(code **)(*plVar1 + 0x110);
        create_custom_callable_function_pointer<Skeleton3DEditor>
                  ((Skeleton3DEditor *)local_68,(char *)this,
                   (_func_void *)"&Skeleton3DEditor::_draw_gizmo");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x120,(Skeleton3DEditor *)local_68);
        Callable::~Callable((Callable *)local_68);
        plVar1 = *(long **)(this + 0xa18);
        pcVar2 = *(code **)(*plVar1 + 0x110);
        create_custom_callable_function_pointer<Skeleton3DEditor>
                  ((Skeleton3DEditor *)local_68,(char *)this,
                   (_func_void *)"&Skeleton3DEditor::_update_properties");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x120,(Skeleton3DEditor *)local_68);
        Callable::~Callable((Callable *)local_68);
        plVar1 = *(long **)(this + 0xa18);
        if (*(code **)(*plVar1 + 0x1c8) == Node3D::set_transform_gizmo_visible) {
          *(byte *)(plVar1 + 0xa3) = *(byte *)(plVar1 + 0xa3) | 4;
        }
        else {
          (**(code **)(*plVar1 + 0x1c8))(plVar1,1);
        }
        lVar8 = Node::get_parent();
        if (lVar8 != 0) {
          pNVar9 = (Node *)Node::get_parent();
          Node::remove_child(pNVar9);
        }
      }
      this[0xa50] = (Skeleton3DEditor)0x0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_gizmo_visible(this);
        return;
      }
      goto LAB_00111be5;
    }
    if (in_ESI == 10) {
      Tree::clear();
      if (*(long *)(this + 0xa18) != 0) {
        update_joint_tree(this);
      }
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Skeleton3DEditor>
                ((Skeleton3DEditor *)local_68,(char *)this,
                 (_func_void *)"&Skeleton3DEditor::_joint_tree_selection_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(Skeleton3DEditor *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar7 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar7);
      *(undefined **)(pCVar7 + 0x20) = &_LC42;
      *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar7 = &PTR_hash_00129a20;
      *(undefined8 *)(pCVar7 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar7 + 0x10) = 0;
      *(undefined8 *)(pCVar7 + 0x30) = uVar3;
      *(undefined8 *)(pCVar7 + 0x38) = 0x100000;
      *(Skeleton3DEditor **)(pCVar7 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
      *(char **)(pCVar7 + 0x20) = "Skeleton3DEditor::_joint_tree_rmb_select";
      Callable::Callable((Callable *)local_68,pCVar7);
      StringName::StringName((StringName *)&local_70,"item_mouse_selected",false);
      (*pcVar2)(plVar1,(StringName *)&local_70,(Skeleton3DEditor *)local_68,0);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar7 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar7);
      *(undefined **)(pCVar7 + 0x20) = &_LC42;
      *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar7 = &PTR_hash_00129ab0;
      *(undefined8 *)(pCVar7 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar7 + 0x10) = 0;
      *(undefined8 *)(pCVar7 + 0x30) = uVar3;
      *(code **)(pCVar7 + 0x38) = _joint_tree_button_clicked;
      *(Skeleton3DEditor **)(pCVar7 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
      *(char **)(pCVar7 + 0x20) = "Skeleton3DEditor::_joint_tree_button_clicked";
      Callable::Callable((Callable *)local_68,pCVar7);
      StringName::StringName((StringName *)&local_70,"button_clicked",false);
      (*pcVar2)(plVar1,(StringName *)&local_70,(Skeleton3DEditor *)local_68,0);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa18);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Skeleton3DEditor>
                ((Skeleton3DEditor *)local_68,(char *)this,
                 (_func_void *)"&Skeleton3DEditor::_draw_gizmo");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x120,(Skeleton3DEditor *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa18);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Skeleton3DEditor>
                ((Skeleton3DEditor *)local_68,(char *)this,
                 (_func_void *)"&Skeleton3DEditor::_update_properties");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x120,(Skeleton3DEditor *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa18);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Skeleton3DEditor,int>
                ((Skeleton3DEditor *)local_68,(char *)this,
                 (_func_void_int *)"&Skeleton3DEditor::_bone_enabled_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x130,(Skeleton3DEditor *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa18);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<Skeleton3DEditor>
                ((Skeleton3DEditor *)local_68,(char *)this,
                 (_func_void *)"&Skeleton3DEditor::_update_gizmo_visible");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x138,(Skeleton3DEditor *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar7 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar7);
      *(undefined **)(pCVar7 + 0x20) = &_LC42;
      *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar7 = &PTR_hash_00129b40;
      *(undefined8 *)(pCVar7 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar7 + 0x10) = 0;
      *(undefined8 *)(pCVar7 + 0x30) = uVar3;
      *(code **)(pCVar7 + 0x38) = _node_removed;
      *(Skeleton3DEditor **)(pCVar7 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
      *(char **)(pCVar7 + 0x20) = "Skeleton3DEditor::_node_removed";
      Callable::Callable((Callable *)local_68,pCVar7);
      StringName::StringName((StringName *)&local_70,"node_removed",false);
      (*pcVar2)(plVar1,(StringName *)&local_70,(Skeleton3DEditor *)local_68,4);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
    }
  }
  else if (in_ESI == 0x2d) {
    pRVar4 = *(Ref **)(this + 0xa40);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa48);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa60);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa68);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa70);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa78);
    if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pRVar4 = *(Ref **)(this + 0xa80);
    if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    pCVar5 = *(Color **)(this + 0xa88);
    if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
    }
    local_58 = Control::get_theme_color
                         ((StringName *)this,
                          (StringName *)&_notification(int)::{lambda()#8}::operator()()::sname);
    EditorInspectorSection::set_bg_color(pCVar5);
    Tree::clear();
    if (*(long *)(this + 0xa18) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_joint_tree(this);
        return;
      }
      goto LAB_00111be5;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00111be5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton3DGizmoPlugin::get_bones_mesh(Skeleton3D*, int, bool) */

Skeleton3DGizmoPlugin * __thiscall
Skeleton3DGizmoPlugin::get_bones_mesh
          (Skeleton3DGizmoPlugin *this,Skeleton3D *param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  Color *pCVar7;
  StringName *pSVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  void *pvVar13;
  undefined8 *puVar14;
  SurfaceTool *this_00;
  Object *pOVar15;
  Object *pOVar16;
  long lVar17;
  undefined7 in_register_00000009;
  ulong *puVar18;
  String *pSVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong *local_2c0;
  float local_2b0;
  long local_268;
  undefined8 local_248;
  undefined8 local_240;
  float local_230;
  float local_228;
  float local_224;
  float local_214;
  String *local_210;
  float local_200;
  float local_1e8;
  float *local_1d8;
  undefined1 local_1a8 [48];
  undefined4 local_178;
  undefined4 local_174;
  undefined1 (*local_170) [16];
  undefined4 local_168;
  undefined4 local_164;
  Object *local_160;
  Vector<int> local_158 [8];
  long local_150 [2];
  long local_140;
  Object *local_138;
  long local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  float local_e0;
  ulong local_c4;
  float local_b8 [12];
  int local_88 [3];
  ulong uStack_7c;
  float fStack_74;
  ulong uStack_70;
  float local_68;
  undefined8 uStack_64;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pOVar16 = (Object *)(CONCAT71(in_register_00000009,param_3) & 0xffffffff);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (Object *)0x0;
  String::parse_latin1((String *)&local_138,"editors/3d_gizmos/gizmo_colors/skeleton");
  _EDITOR_GET((String *)local_88);
  local_f8 = Variant::operator_cast_to_Color((Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  local_138 = (Object *)0x0;
  String::parse_latin1((String *)&local_138,"editors/3d_gizmos/gizmo_colors/selected_bone");
  _EDITOR_GET((String *)local_88);
  auVar37 = Variant::operator_cast_to_Color((Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  local_138 = (Object *)0x0;
  String::parse_latin1((String *)&local_138,"editors/3d_gizmos/gizmo_settings/bone_axis_length");
  _EDITOR_GET((String *)local_88);
  fVar27 = Variant::operator_cast_to_float((Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  local_138 = (Object *)0x0;
  String::parse_latin1((String *)&local_138,"editors/3d_gizmos/gizmo_settings/bone_shape");
  _EDITOR_GET((String *)local_88);
  iVar10 = Variant::operator_cast_to_int((Variant *)local_88);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  pSVar8 = Node3DEditor::singleton;
  if (get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::sname == '\0') {
    iVar11 = __cxa_guard_acquire(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::
                                  sname);
    if (iVar11 != 0) {
      _scs_create((char *)&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::sname);
    }
  }
  auVar38 = Control::get_theme_color
                      (pSVar8,(StringName *)
                              &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#1}::operator()()::
                               sname);
  pauVar12 = (undefined1 (*) [16])Memory::realloc_static((void *)0x0,0x10,false);
  if (pauVar12 == (undefined1 (*) [16])0x0) {
LAB_001128d8:
    _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *pauVar12 = auVar38;
  pSVar8 = Node3DEditor::singleton;
  if (get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::sname == '\0') {
    iVar11 = __cxa_guard_acquire(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::
                                  sname);
    if (iVar11 != 0) {
      _scs_create((char *)&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::sname);
    }
  }
  auVar38 = Control::get_theme_color
                      (pSVar8,(StringName *)
                              &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#2}::operator()()::
                               sname);
  pvVar13 = (void *)Memory::realloc_static(pauVar12,0x20,false);
  if (pvVar13 == (void *)0x0) goto LAB_001128d8;
  *(undefined1 (*) [16])((long)pvVar13 + 0x10) = auVar38;
  pSVar8 = Node3DEditor::singleton;
  if (get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::sname == '\0') {
    iVar11 = __cxa_guard_acquire(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::
                                  sname);
    if (iVar11 != 0) {
      _scs_create((char *)&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::sname);
    }
  }
  auVar38 = Control::get_theme_color
                      (pSVar8,(StringName *)
                              &get_bones_mesh(Skeleton3D*,int,bool)::{lambda()#3}::operator()()::
                               sname);
  puVar14 = (undefined8 *)Memory::realloc_static(pvVar13,0x40,false);
  if (puVar14 == (undefined8 *)0x0) goto LAB_001128d8;
  *(undefined1 (*) [16])(puVar14 + 4) = auVar38;
  this_00 = (SurfaceTool *)operator_new(0x270,"");
  SurfaceTool::SurfaceTool(this_00);
  postinitialize_handler((Object *)this_00);
  cVar9 = RefCounted::init_ref();
  if (cVar9 == '\0') {
    this_00 = (SurfaceTool *)0x0;
  }
  SurfaceTool::begin(this_00,1);
  pCVar7 = DAT_001137a8;
  if ((char)pOVar16 == '\0') {
    BaseMaterial3D::set_albedo(selection_materials);
    pCVar7 = selection_materials;
  }
  local_138 = (Object *)0x0;
  if (pCVar7 != (Color *)0x0) {
    local_138 = (Object *)0x0;
    pOVar15 = (Object *)__dynamic_cast(pCVar7,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar15 != (Object *)0x0) {
      local_138 = pOVar15;
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
        local_138 = (Object *)0x0;
      }
    }
  }
  SurfaceTool::set_material((Ref *)this_00);
  if (local_138 != (Object *)0x0) {
    cVar9 = RefCounted::unreference();
    pOVar15 = local_138;
    if (cVar9 != '\0') {
      cVar9 = predelete_handler(local_138);
      pOVar16 = pOVar15;
      if (cVar9 != '\0') {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
  }
  uVar23 = 0;
  local_174 = 4;
  pauVar12 = (undefined1 (*) [16])Memory::realloc_static((void *)0x0,0x10,false);
  local_170 = pauVar12;
  if (pauVar12 == (undefined1 (*) [16])0x0) {
    LocalVector<Color,unsigned_int,false,false>::resize(uVar23);
LAB_00113448:
    LocalVector<Color,unsigned_int,false,false>::resize(uVar23);
  }
  else {
    uVar23 = 0;
    local_178 = 4;
    local_164 = 4;
    pOVar16 = (Object *)Memory::realloc_static((void *)0x0,0x10,false);
    local_160 = pOVar16;
    if (pOVar16 == (Object *)0x0) goto LAB_00113448;
    local_168 = 4;
    if (pOVar16 + (0xf - (long)pauVar12) < (Object *)0x1f) {
      lVar17 = 0;
      do {
        *(undefined4 *)(*pauVar12 + lVar17) = 0;
        *(undefined4 *)(pOVar16 + lVar17) = 0;
        lVar17 = lVar17 + 4;
      } while (lVar17 != 0x10);
    }
    else {
      *pauVar12 = (undefined1  [16])0x0;
      *(undefined8 *)(pOVar16 + 4) = 0;
      *(undefined4 *)(pOVar16 + 0xc) = 0;
    }
    *(undefined4 *)pOVar16 = 0x3f800000;
    Skeleton3D::get_parentless_bones();
    if (local_150[0] != 0) {
      local_268 = 0;
      do {
        if (*(long *)(local_150[0] + -8) <= local_268) break;
        iVar11 = *(int *)(local_150[0] + local_268 * 4);
        auVar38 = auVar37;
        if (iVar11 != param_2) {
          auVar38 = local_f8;
        }
        local_240 = auVar38._8_8_;
        local_248 = auVar38._0_8_;
        local_140 = 0;
        Skeleton3D::get_bone_children((int)(String *)&local_138);
        if (local_130 == 0) {
          CowData<int>::_unref((CowData<int> *)&local_130);
        }
        else {
          CowData<int>::_unref((CowData<int> *)&local_140);
          lVar17 = local_130;
          local_130 = 0;
          local_140 = lVar17;
          CowData<int>::_unref((CowData<int> *)&local_130);
          if (lVar17 != 0) {
            lVar25 = *(long *)(lVar17 + -8);
            iVar24 = (int)lVar25;
            if (0 < iVar24) {
              uVar26 = 0;
              do {
                if (lVar25 <= (long)uVar26) {
LAB_00112ed9:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,uVar26,lVar25,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                iVar3 = *(int *)(lVar17 + uVar26 * 4);
                if (-1 < iVar3) {
                  iVar21 = (int)(String *)local_88;
                  Skeleton3D::get_bone_global_rest(iVar21);
                  local_128 = uStack_64;
                  local_120 = fStack_5c;
                  Skeleton3D::get_bone_global_rest(iVar21);
                  local_118 = uStack_64;
                  uVar1 = local_118;
                  local_118._4_4_ = (float)((ulong)uStack_64 >> 0x20);
                  local_118._0_4_ = (float)uStack_64;
                  local_118._4_4_ = local_118._4_4_ - local_128._4_4_;
                  local_110 = fStack_5c;
                  local_118._0_4_ = (float)local_118 - (float)local_128;
                  local_224 = fStack_5c - local_120;
                  local_2b0 = (float)local_118 * (float)local_118 +
                              local_118._4_4_ * local_118._4_4_ + local_224 * local_224;
                  if (local_2b0 == 0.0) {
                    local_224 = 0.0;
                    local_230 = 0.0;
                    local_228 = 0.0;
                  }
                  else {
                    fVar28 = SQRT(local_2b0);
                    local_228 = (float)local_118 / fVar28;
                    local_230 = local_118._4_4_ / fVar28;
                    local_224 = local_224 / fVar28;
                  }
                  local_2b0 = SQRT(local_2b0);
                  iVar22 = (int)local_1a8;
                  local_118 = uVar1;
                  Skeleton3D::get_bone_global_rest(iVar22);
                  Skeleton3D::get_bone_global_rest(iVar22);
                  Skeleton3D::get_bone_global_rest(iVar22);
                  if (iVar10 == 0) {
                    SurfaceTool::set_color(local_248,local_240,this_00);
                    *(int *)*pauVar12 = iVar11;
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_bones((Vector *)this_00);
                    CowData<int>::_unref((CowData<int> *)&local_130);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_weights((Vector *)this_00);
                    CowData<float>::_unref((CowData<float> *)&local_130);
                    SurfaceTool::add_vertex(this_00);
                    *(int *)*pauVar12 = iVar3;
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_bones((Vector *)this_00);
                    CowData<int>::_unref((CowData<int> *)&local_130);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_weights((Vector *)this_00);
                    CowData<float>::_unref((CowData<float> *)&local_130);
                    SurfaceTool::add_vertex(this_00);
                  }
                  else if (iVar10 == 1) {
                    local_48 = 0;
                    fStack_5c = 0.0;
                    uStack_64 = 0;
                    local_68 = 0.0;
                    local_58 = (undefined1  [16])0x0;
                    local_214 = 0.0;
                    iVar22 = 0;
                    local_1e8 = 0.0;
                    local_200 = 0.0;
                    local_210 = (String *)local_88;
                    local_1d8 = local_b8;
                    do {
                      if ((local_200 == 0.0 && local_214 == 0.0) && (local_1e8 == 0.0)) {
                        Skeleton3D::get_bone_global_rest((int)local_b8);
                        fVar32 = local_228 * local_1d8[1] - local_230 * *local_1d8;
                        fVar29 = *local_1d8 * local_224 - local_228 * local_1d8[2];
                        fVar28 = local_1d8[2] * local_230 - local_1d8[1] * local_224;
                        local_1e8 = local_228 * fVar29 - local_230 * fVar28;
                        local_200 = fVar28 * local_224 - local_228 * fVar32;
                        local_214 = fVar32 * local_230 - fVar29 * local_224;
                        fVar28 = local_214 * local_214 + local_200 * local_200 +
                                 local_1e8 * local_1e8;
                        if (fVar28 == 0.0) {
                          local_1e8 = 0.0;
                          local_200 = 0.0;
                          local_214 = 0.0;
                          fVar33 = local_214;
                          fVar32 = local_200;
                          fVar28 = local_1e8;
                        }
                        else {
                          fVar28 = SQRT(fVar28);
                          local_214 = local_214 / fVar28;
                          local_200 = local_200 / fVar28;
                          local_1e8 = local_1e8 / fVar28;
                          fVar33 = local_214;
                          fVar32 = local_200;
                          fVar28 = local_1e8;
                        }
                      }
                      else {
                        fVar29 = local_228 * local_200 - local_230 * local_214;
                        fVar32 = local_214 * local_224 - local_228 * local_1e8;
                        fVar33 = local_230 * local_1e8 - local_200 * local_224;
                        fVar28 = fVar33 * fVar33 + fVar32 * fVar32 + fVar29 * fVar29;
                        if (fVar28 == 0.0) {
                          fVar33 = 0.0;
                          fVar32 = 0.0;
                          fVar28 = 0.0;
                        }
                        else {
                          fVar28 = SQRT(fVar28);
                          fVar33 = fVar33 / fVar28;
                          fVar32 = fVar32 / fVar28;
                          fVar28 = fVar29 / fVar28;
                        }
                      }
                      SurfaceTool::set_color(local_248,local_240,this_00);
                      bVar6 = false;
                      fVar29 = _LC305 * local_224 * local_2b0;
                      fVar36 = _LC305 * local_230 * local_2b0;
                      fVar35 = _LC305 * local_228 * local_2b0;
                      pSVar19 = local_210;
                      while( true ) {
                        local_e8 = CONCAT44(fVar32 * local_2b0 * (float)_LC306 +
                                            fVar36 + local_128._4_4_,
                                            fVar33 * local_2b0 * (float)_LC306 +
                                            fVar35 + (float)local_128);
                        local_e0 = fVar28 * local_2b0 * (float)_LC306 + fVar29 + local_120;
                        *(int *)*pauVar12 = iVar11;
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_bones((Vector *)this_00);
                        CowData<int>::_unref((CowData<int> *)&local_130);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_weights((Vector *)this_00);
                        CowData<float>::_unref((CowData<float> *)&local_130);
                        SurfaceTool::add_vertex(this_00);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_bones((Vector *)this_00);
                        CowData<int>::_unref((CowData<int> *)&local_130);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_weights((Vector *)this_00);
                        CowData<float>::_unref((CowData<float> *)&local_130);
                        SurfaceTool::add_vertex(this_00);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_bones((Vector *)this_00);
                        CowData<int>::_unref((CowData<int> *)&local_130);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_weights((Vector *)this_00);
                        CowData<float>::_unref((CowData<float> *)&local_130);
                        SurfaceTool::add_vertex(this_00);
                        *(int *)*pauVar12 = iVar3;
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_bones((Vector *)this_00);
                        CowData<int>::_unref((CowData<int> *)&local_130);
                        LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                        SurfaceTool::set_weights((Vector *)this_00);
                        CowData<float>::_unref((CowData<float> *)&local_130);
                        SurfaceTool::add_vertex(this_00);
                        *(ulong *)pSVar19 = local_e8;
                        *(float *)(pSVar19 + 8) = local_e0;
                        if (bVar6) break;
                        fVar28 = (float)((uint)fVar28 ^ __LC116);
                        bVar6 = true;
                        pSVar19 = pSVar19 + 0xc;
                        fVar32 = (float)((uint)fVar32 ^ __LC116);
                        fVar33 = (float)((uint)fVar33 ^ __LC116);
                      }
                      iVar22 = iVar22 + 2;
                      local_210 = local_210 + 0x18;
                      local_1d8 = local_1d8 + 3;
                    } while (iVar22 != 6);
                    SurfaceTool::set_color(local_248,local_240,this_00);
                    fVar28 = local_68;
                    local_e0 = fStack_74;
                    uVar5 = uStack_70;
                    local_68 = fStack_74;
                    local_e8 = uStack_7c;
                    fStack_74 = fVar28;
                    uStack_70 = uStack_7c;
                    iVar22 = 0;
                    *(int *)*pauVar12 = iVar11;
                    uStack_7c = uVar5;
                    do {
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_bones((Vector *)this_00);
                      CowData<int>::_unref((CowData<int> *)&local_130);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_weights((Vector *)this_00);
                      CowData<float>::_unref((CowData<float> *)&local_130);
                      SurfaceTool::add_vertex(this_00);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_bones((Vector *)this_00);
                      CowData<int>::_unref((CowData<int> *)&local_130);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_weights((Vector *)this_00);
                      CowData<float>::_unref((CowData<float> *)&local_130);
                      iVar22 = iVar22 + 1;
                      SurfaceTool::add_vertex(this_00);
                    } while (iVar22 != 6);
                  }
                  local_2c0 = &local_e8;
                  puVar18 = local_2c0;
                  puVar20 = puVar14;
                  do {
                    uVar1 = *puVar20;
                    uVar2 = puVar20[1];
                    *(int *)*pauVar12 = iVar11;
                    SurfaceTool::set_color(uVar1,uVar2,this_00);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_bones((Vector *)this_00);
                    CowData<int>::_unref((CowData<int> *)&local_130);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_weights((Vector *)this_00);
                    CowData<float>::_unref((CowData<float> *)&local_130);
                    SurfaceTool::add_vertex(this_00);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_bones((Vector *)this_00);
                    CowData<int>::_unref((CowData<int> *)&local_130);
                    LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                    SurfaceTool::set_weights((Vector *)this_00);
                    CowData<float>::_unref((CowData<float> *)&local_130);
                    Skeleton3D::get_bone_global_rest(iVar21);
                    Basis::inverse();
                    uVar5 = *puVar18;
                    auVar38._8_8_ = 0;
                    auVar38._0_8_ = uVar5;
                    fVar28 = *(float *)(puVar18 + 1);
                    fVar29 = (float)(uVar5 >> 0x20);
                    fVar29 = (float)uVar5 * (float)uVar5 + fVar29 * fVar29 + fVar28 * fVar28;
                    fVar33 = 0.0;
                    fVar35 = 0.0;
                    fVar32 = 0.0;
                    if (fVar29 != 0.0) {
                      fVar29 = SQRT(fVar29);
                      fVar32 = fVar28 / fVar29;
                      auVar30._4_4_ = fVar29;
                      auVar30._0_4_ = fVar29;
                      auVar30._8_8_ = _LC33;
                      auVar38 = divps(auVar38,auVar30);
                      fVar33 = auVar38._0_4_;
                      fVar35 = auVar38._4_4_;
                    }
                    puVar18 = (ulong *)((long)puVar18 + 0xc);
                    puVar20 = puVar20 + 2;
                    local_100 = fVar32 * local_2b0 * fVar27 + local_120;
                    local_108 = CONCAT44(fVar35 * local_2b0 * fVar27 +
                                         (float)((ulong)local_128 >> 0x20),
                                         fVar33 * local_2b0 * fVar27 + (float)local_128);
                    SurfaceTool::add_vertex(this_00);
                  } while (puVar18 != &local_c4);
                  puVar20 = puVar14;
                  if (iVar24 + -1 == (int)uVar26) {
                    do {
                      uVar1 = *puVar20;
                      uVar2 = puVar20[1];
                      *(int *)*pauVar12 = iVar3;
                      SurfaceTool::set_color(uVar1,uVar2,this_00);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_bones((Vector *)this_00);
                      CowData<int>::_unref((CowData<int> *)&local_130);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_weights((Vector *)this_00);
                      CowData<float>::_unref((CowData<float> *)&local_130);
                      SurfaceTool::add_vertex(this_00);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_bones((Vector *)this_00);
                      CowData<int>::_unref((CowData<int> *)&local_130);
                      LocalVector::operator_cast_to_Vector((LocalVector *)&local_138);
                      SurfaceTool::set_weights((Vector *)this_00);
                      CowData<float>::_unref((CowData<float> *)&local_130);
                      Skeleton3D::get_bone_global_rest(iVar21);
                      Basis::inverse();
                      uVar5 = *local_2c0;
                      auVar34._8_8_ = 0;
                      auVar34._0_8_ = uVar5;
                      fVar28 = *(float *)(local_2c0 + 1);
                      fVar29 = (float)(uVar5 >> 0x20);
                      fVar29 = (float)uVar5 * (float)uVar5 + fVar29 * fVar29 + fVar28 * fVar28;
                      fVar33 = 0.0;
                      fVar35 = 0.0;
                      fVar32 = 0.0;
                      if (fVar29 != 0.0) {
                        fVar29 = SQRT(fVar29);
                        fVar32 = fVar28 / fVar29;
                        auVar31._4_4_ = fVar29;
                        auVar31._0_4_ = fVar29;
                        auVar31._8_8_ = _LC33;
                        auVar38 = divps(auVar34,auVar31);
                        fVar33 = auVar38._0_4_;
                        fVar35 = auVar38._4_4_;
                      }
                      local_2c0 = (ulong *)((long)local_2c0 + 0xc);
                      local_100 = fVar32 * local_2b0 * fVar27 + local_110;
                      local_108 = CONCAT44(fVar35 * local_2b0 * fVar27 +
                                           (float)((ulong)local_118 >> 0x20),
                                           fVar33 * local_2b0 * fVar27 + (float)local_118);
                      SurfaceTool::add_vertex(this_00);
                      puVar20 = puVar20 + 2;
                    } while (&local_c4 != local_2c0);
                  }
                  lVar25 = *(long *)(lVar17 + -8);
                  if (lVar25 <= (long)uVar26) goto LAB_00112ed9;
                  Vector<int>::push_back(local_158,*(int *)(lVar17 + uVar26 * 4));
                }
                if (uVar26 == iVar24 - 1) break;
                lVar25 = *(long *)(lVar17 + -8);
                uVar26 = uVar26 + 1;
              } while( true );
            }
          }
        }
        CowData<int>::_unref((CowData<int> *)&local_140);
        local_268 = local_268 + 1;
      } while (local_150[0] != 0);
    }
    local_138 = (Object *)0x0;
    SurfaceTool::commit((Ref *)this,(ulong)this_00);
    if (local_138 == (Object *)0x0) goto LAB_00113010;
    cVar9 = RefCounted::unreference();
    if (cVar9 == '\0') goto LAB_00113010;
  }
  pOVar15 = local_138;
  cVar9 = predelete_handler(local_138);
  if (cVar9 != '\0') {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
LAB_00113010:
  CowData<int>::_unref((CowData<int> *)local_150);
  Memory::free_static(pOVar16,false);
  Memory::free_static(pauVar12,false);
  cVar9 = RefCounted::unreference();
  if (cVar9 != '\0') {
    cVar9 = predelete_handler((Object *)this_00);
    if (cVar9 != '\0') {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
  Memory::free_static(puVar14,false);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
Skeleton3DGizmoPlugin::redraw(Skeleton3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  char cVar1;
  int iVar2;
  Skeleton3D *pSVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_90;
  Object *local_88;
  Object *local_80;
  Object *local_78;
  Object *local_70;
  Ref local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_30;
  
  pSVar3 = *(Skeleton3D **)(param_1 + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar3 != (Skeleton3D *)0x0) {
    pSVar3 = (Skeleton3D *)__dynamic_cast(pSVar3,&Object::typeinfo,&Skeleton3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  iVar2 = Skeleton3D::get_bone_count();
  if (iVar2 != 0) {
    iVar2 = -1;
    if (Skeleton3DEditor::singleton != 0) {
      iVar2 = *(int *)(Skeleton3DEditor::singleton + 0xaf0);
    }
    get_bones_mesh((Skeleton3DGizmoPlugin *)&local_90,pSVar3,iVar2,(bool)param_1[0x17c]);
    Skeleton3D::create_skin_from_rest_transforms();
    Skeleton3D::register_skin((Ref *)&local_78);
    local_48 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_88 = (Object *)0x0;
    local_70 = (Object *)0x0;
    local_68 = (Ref  [16])ZEXT416(_LC11);
    local_58 = ZEXT416(_LC11);
    if (local_90 != (Object *)0x0) {
      pOVar4 = (Object *)__dynamic_cast(local_90,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar4 != (Object *)0x0) {
        local_70 = pOVar4;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_70 = (Object *)0x0;
        }
      }
    }
    EditorNode3DGizmo::add_mesh((Ref *)param_1,(Ref *)&local_70,(Transform3D *)&local_88,local_68);
    if (local_70 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar4 = local_70;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_70);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (local_88 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar4 = local_88;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_88);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (local_78 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_78);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_78 + 0x140))(local_78);
          Memory::free_static(local_78,false);
        }
      }
    }
    if (local_80 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_80);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
        }
      }
    }
    if (local_90 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_90);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_90 + 0x140))(local_90);
          Memory::free_static(local_90,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x129f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
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



/* BaseMaterial3D::_can_do_next_pass() const */

undefined8 BaseMaterial3D::_can_do_next_pass(void)

{
  return 1;
}



/* BaseMaterial3D::_can_use_render_priority() const */

undefined8 BaseMaterial3D::_can_use_render_priority(void)

{
  return 1;
}



/* StandardMaterial3D::is_class_ptr(void*) const */

uint StandardMaterial3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x129e,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3D::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_notificationv(int, bool) */

void StandardMaterial3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* EditorInspectorPluginSkeleton::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginSkeleton::is_class_ptr(EditorInspectorPluginSkeleton *this,void *param_1)

{
  return (uint)CONCAT71(0x129d,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginSkeleton::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginSkeleton::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSkeleton::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginSkeleton::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSkeleton::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginSkeleton::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginSkeleton::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginSkeleton::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginSkeleton::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginSkeleton::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSkeleton::_notificationv(int, bool) */

void EditorInspectorPluginSkeleton::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Skeleton3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Skeleton3DEditorPlugin::is_class_ptr(Skeleton3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x129d,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Skeleton3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Skeleton3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Skeleton3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Skeleton3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Skeleton3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Skeleton3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DEditorPlugin::has_main_screen() const */

undefined8 Skeleton3DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* Skeleton3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall Skeleton3DGizmoPlugin::is_class_ptr(Skeleton3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x129d,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x129f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Skeleton3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 Skeleton3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 Skeleton3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void Skeleton3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Skeleton3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 Skeleton3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Skeleton3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Skeleton3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton3DGizmoPlugin::_notificationv(int, bool) */

void Skeleton3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<Node,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::get_argument_count
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::get_argument_count
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BonePropertiesEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BonePropertiesEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Skeleton3DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Skeleton3DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BonePropertiesEditor::_property_can_revertv(StringName const&) const */

undefined8 BonePropertiesEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Skeleton3DEditor::_property_can_revertv(StringName const&) const */

undefined8 Skeleton3DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Skeleton3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Skeleton3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00132030 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129bd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127b80;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127b80;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127ce0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127ce0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00132038 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132040 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* Skeleton3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Skeleton3DEditorPlugin::_notificationv(Skeleton3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00132048 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00132048 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, bool>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::get_object
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115c4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115c4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115c4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
             *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115d4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115d4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115d4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_object
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115e4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115e4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115e4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00115f4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115f4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115f4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011604d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011604d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011604d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011614d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011614d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011614d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011624d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011624d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011624d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011634d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011634d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011634d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011644d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011644d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011644d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::get_object
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011654d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011654d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011654d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011664d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011664d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011664d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011674d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011674d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011674d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011684d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011684d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011684d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011694d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011694d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011694d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&, Control*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00116a4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00116a4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00116a4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Skeleton3DEditor::_validate_propertyv(PropertyInfo&) const */

void Skeleton3DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* BonePropertiesEditor::_validate_propertyv(PropertyInfo&) const */

void BonePropertiesEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* BonePropertiesEditor::_setv(StringName const&, Variant const&) */

undefined8 BonePropertiesEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Skeleton3DEditor::_setv(StringName const&, Variant const&) */

undefined8 Skeleton3DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116f18) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116f88) */
/* BonePropertiesEditor::_getv(StringName const&, Variant&) const */

undefined8 BonePropertiesEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116ff8) */
/* Skeleton3DEditor::_getv(StringName const&, Variant&) const */

undefined8 Skeleton3DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00117068) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x129e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x129e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x129e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Skeleton3DEditor::is_class_ptr(void*) const */

ulong Skeleton3DEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x129e,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x129e,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* BonePropertiesEditor::is_class_ptr(void*) const */

ulong BonePropertiesEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x129e,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x129e,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x129e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* Skeleton3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
Skeleton3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117370;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00117370:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001173d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001173d0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117430;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00117430:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001174a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001174a0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

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



/* Skeleton3DEditorPlugin::get_plugin_name() const */

Skeleton3DEditorPlugin * __thiscall
Skeleton3DEditorPlugin::get_plugin_name(Skeleton3DEditorPlugin *this)

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



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

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



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditorPlugin::_get_class_namev() const */

undefined8 * Skeleton3DEditorPlugin::_get_class_namev(void)

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
LAB_00117713:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117713;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DEditorPlugin");
      goto LAB_0011777e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DEditorPlugin");
LAB_0011777e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginSkeleton::_get_class_namev() const */

undefined8 * EditorInspectorPluginSkeleton::_get_class_namev(void)

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
LAB_00117813:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117813;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginSkeleton");
      goto LAB_0011787e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginSkeleton");
LAB_0011787e:
  return &_get_class_namev()::_class_name_static;
}



/* BonePropertiesEditor::_get_class_namev() const */

undefined8 * BonePropertiesEditor::_get_class_namev(void)

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
LAB_00117903:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117903;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BonePropertiesEditor");
      goto LAB_0011796e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BonePropertiesEditor");
LAB_0011796e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_get_class_namev() const */

undefined8 * StandardMaterial3D::_get_class_namev(void)

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
LAB_001179f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001179f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00117a5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00117a5e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_00117ae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117ae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00117b4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00117b4e:
  return &_get_class_namev()::_class_name_static;
}



/* Skeleton3DGizmoPlugin::_get_class_namev() const */

undefined8 * Skeleton3DGizmoPlugin::_get_class_namev(void)

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
LAB_00117bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DGizmoPlugin");
      goto LAB_00117c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DGizmoPlugin");
LAB_00117c3e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00117cc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117cc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00117d2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00117d2e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00117da3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117da3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00117e0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00117e0e:
  return &_get_class_namev()::_class_name_static;
}



/* Skeleton3DEditor::_get_class_namev() const */

undefined8 * Skeleton3DEditor::_get_class_namev(void)

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
LAB_00117e93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117e93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DEditor");
      goto LAB_00117efe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton3DEditor");
LAB_00117efe:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Skeleton3DEditor::BoneInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton3DEditor::insert_keys(bool) [clone .cold] */

void Skeleton3DEditor::insert_keys(bool param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton3DEditor::_bind_methods() [clone .cold] */

void Skeleton3DEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton3DEditor::Skeleton3DEditor(EditorInspectorPluginSkeleton*, Skeleton3D*) [clone .cold] */

void __thiscall
Skeleton3DEditor::Skeleton3DEditor
          (Skeleton3DEditor *this,EditorInspectorPluginSkeleton *param_1,Skeleton3D *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton3DEditor::_notification(int) [clone .cold] */

void Skeleton3DEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* WARNING: Removing unreachable block (ram,0x00118140) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00132068 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00132068 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* BonePropertiesEditor::_notificationv(int, bool) */

void __thiscall
BonePropertiesEditor::_notificationv(BonePropertiesEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification((int)this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Callable create_custom_callable_function_pointer<BonePropertiesEditor, String const&, Variant
   const&, String const&, bool>(BonePropertiesEditor*, char const*, void
   (BonePropertiesEditor::*)(String const&, Variant const&, String const&, bool)) */

BonePropertiesEditor *
create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,Variant_const&,String_const&,bool>
          (BonePropertiesEditor *param_1,char *param_2,
          _func_void_String_ptr_Variant_ptr_String_ptr_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129360;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_Variant_ptr_String_ptr_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<BonePropertiesEditor, String const&,
   bool>(BonePropertiesEditor*, char const*, void (BonePropertiesEditor::*)(String const&, bool)) */

BonePropertiesEditor *
create_custom_callable_function_pointer<BonePropertiesEditor,String_const&,bool>
          (BonePropertiesEditor *param_1,char *param_2,_func_void_String_ptr_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001293f0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<BonePropertiesEditor>(BonePropertiesEditor*,
   char const*, void (BonePropertiesEditor::*)()) */

BonePropertiesEditor *
create_custom_callable_function_pointer<BonePropertiesEditor>
          (BonePropertiesEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129480;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0011876c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0011876c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00118bb8;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC43) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00118a95;
LAB_00118bf6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00118bb8;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_00118bf6;
LAB_00118a95:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00118bb8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* void EditorUndoRedoManager::add_undo_method<int, Vector3>(Object*, StringName const&, int,
   Vector3) */

void EditorUndoRedoManager::add_undo_method<int,Vector3>
               (undefined8 param_1_00,undefined4 param_2_00,Object *param_1,StringName *param_2,
               Variant **param_5,int param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined4 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_1_00;
  local_a0 = param_2_00;
  Variant::Variant(local_78,param_6);
  Variant::Variant(local_60,(Vector3 *)&local_a8);
  local_48 = 0;
  pVVar2 = (Variant *)&local_30;
  local_40 = (undefined1  [16])0x0;
  local_98 = local_78;
  pVStack_90 = local_60;
  EditorUndoRedoManager::add_undo_methodp(param_1,param_2,param_5,(int)&local_98);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_do_method<Node*>(Object*, StringName const&, Node*) */

void __thiscall
EditorUndoRedoManager::add_do_method<Node*>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,Node *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,(Object *)param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<String, Variant>(Object*, StringName const&, String,
   Variant) */

void __thiscall
EditorUndoRedoManager::add_undo_method<String,Variant>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4,
          Variant *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_4);
  Variant::Variant(local_70,param_5);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_do_method<String, Variant>(Object*, StringName const&, String,
   Variant) */

void __thiscall
EditorUndoRedoManager::add_do_method<String,Variant>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4,
          Variant *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_4);
  Variant::Variant(local_70,param_5);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, TreeItem*> > >::insert(int const&, TreeItem* const&,
   bool) */

void HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
     ::insert(int *param_1,TreeItem **param_2,bool param_3)

{
  TreeItem *pTVar1;
  TreeItem *pTVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  TreeItem *pTVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  TreeItem *pTVar33;
  TreeItem *pTVar34;
  undefined8 *in_RCX;
  int iVar35;
  undefined7 in_register_00000011;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  TreeItem *pTVar45;
  TreeItem *local_78;
  
  puVar36 = (uint *)CONCAT71(in_register_00000011,param_3);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_78 = param_2[1];
  if (local_78 == (TreeItem *)0x0) {
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pTVar34 = (TreeItem *)Memory::alloc_static(uVar32,false);
    param_2[2] = pTVar34;
    local_78 = (TreeItem *)Memory::alloc_static(uVar37,false);
    param_2[1] = local_78;
    if (uVar30 != 0) {
      pTVar34 = param_2[2];
      if ((pTVar34 < local_78 + uVar37) && (local_78 < pTVar34 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pTVar34 + uVar32 * 4) = 0;
          *(undefined8 *)(local_78 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
        goto LAB_0011918b;
      }
      memset(pTVar34,0,uVar32);
      memset(local_78,0,uVar37);
      uVar31 = *puVar36;
      iVar35 = *(int *)((long)param_2 + 0x2c);
      goto LAB_0011919b;
    }
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
    if (local_78 != (TreeItem *)0x0) goto LAB_0011919b;
  }
  else {
LAB_0011918b:
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
LAB_0011919b:
    if (iVar35 != 0) {
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar44 = 1;
        uVar37 = uVar32;
      }
      else {
        uVar37 = uVar44 * uVar32;
      }
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar43 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar40;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar37;
      lVar38 = SUB168(auVar4 * auVar16,8);
      uVar42 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
      if (uVar29 != 0) {
        do {
          if ((uVar44 == uVar29) && (*(uint *)(*(long *)(local_78 + lVar38 * 8) + 0x10) == uVar31))
          {
            pTVar34 = *(TreeItem **)(local_78 + (ulong)uVar42 * 8);
            *(undefined8 *)(pTVar34 + 0x18) = *in_RCX;
            goto LAB_00119618;
          }
          uVar43 = uVar43 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar42 + 1) * uVar32;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar40;
          lVar38 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
          uVar42 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar32, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar42) -
                               SUB164(auVar6 * auVar18,8)) * uVar32, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar40, uVar43 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar30 * __LC43 < (float)(iVar35 + 1)) {
    uVar30 = *(uint *)(param_2 + 5);
    if (uVar30 == 0x1c) {
      pTVar34 = (TreeItem *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00119618;
    }
    uVar32 = (ulong)(uVar30 + 1);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 5) = (int)uVar32;
    pTVar34 = param_2[2];
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pTVar33 = (TreeItem *)Memory::alloc_static(uVar32,false);
    param_2[2] = pTVar33;
    pTVar33 = (TreeItem *)Memory::alloc_static(uVar37,false);
    param_2[1] = pTVar33;
    if (uVar30 != 0) {
      pTVar1 = param_2[2];
      if ((pTVar1 < pTVar33 + uVar37) && (pTVar33 < pTVar1 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pTVar1 + uVar32 * 4) = 0;
          *(undefined8 *)(pTVar33 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar40);
      }
      else {
        memset(pTVar1,0,uVar32);
        memset(pTVar33,0,uVar37);
      }
    }
    uVar32 = 0;
    if (uVar31 != 0) {
      do {
        uVar30 = *(uint *)(pTVar34 + uVar32 * 4);
        if (uVar30 != 0) {
          uVar42 = 0;
          pTVar2 = param_2[2];
          uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar37 = CONCAT44(0,uVar29);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar30 * lVar38;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar37;
          lVar39 = SUB168(auVar8 * auVar20,8);
          pTVar1 = pTVar2 + lVar39 * 4;
          iVar35 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pTVar1;
          uVar3 = *(undefined8 *)(local_78 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar38;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar37;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar9 * auVar21,8)) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar37;
            uVar43 = SUB164(auVar10 * auVar22,8);
            uVar41 = uVar3;
            if (uVar43 < uVar42) {
              *(uint *)pTVar1 = uVar30;
              uVar41 = *(undefined8 *)(pTVar33 + lVar39 * 8);
              *(undefined8 *)(pTVar33 + lVar39 * 8) = uVar3;
              uVar30 = uVar44;
              uVar42 = uVar43;
            }
            uVar42 = uVar42 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar39 = SUB168(auVar11 * auVar23,8);
            pTVar1 = pTVar2 + lVar39 * 4;
            iVar35 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar41;
            uVar44 = *(uint *)pTVar1;
          }
          *(undefined8 *)(pTVar33 + lVar39 * 8) = uVar3;
          *(uint *)pTVar1 = uVar30;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar31 != uVar32);
      Memory::free_static(local_78,false);
      Memory::free_static(pTVar34,false);
    }
  }
  uVar30 = *puVar36;
  uVar3 = *in_RCX;
  pTVar34 = (TreeItem *)operator_new(0x20,"");
  *(uint *)(pTVar34 + 0x10) = uVar30;
  *(undefined8 *)(pTVar34 + 0x18) = uVar3;
  *(undefined1 (*) [16])pTVar34 = (undefined1  [16])0x0;
  pTVar33 = param_2[4];
  if (pTVar33 == (TreeItem *)0x0) {
    param_2[3] = pTVar34;
    param_2[4] = pTVar34;
  }
  else if (in_R8B == '\0') {
    *(TreeItem **)pTVar33 = pTVar34;
    *(TreeItem **)(pTVar34 + 8) = pTVar33;
    param_2[4] = pTVar34;
  }
  else {
    pTVar33 = param_2[3];
    *(TreeItem **)(pTVar33 + 8) = pTVar34;
    *(TreeItem **)pTVar34 = pTVar33;
    param_2[3] = pTVar34;
  }
  uVar30 = (*puVar36 >> 0x10 ^ *puVar36) * -0x7a143595;
  uVar31 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar32 = 1;
    uVar30 = 1;
  }
  else {
    uVar32 = (ulong)uVar30;
  }
  uVar44 = 0;
  pTVar1 = param_2[2];
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar37 = CONCAT44(0,uVar31);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar32 * lVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar37;
  lVar39 = SUB168(auVar12 * auVar24,8);
  pTVar2 = param_2[1];
  pTVar33 = pTVar1 + lVar39 * 4;
  iVar35 = SUB164(auVar12 * auVar24,8);
  uVar29 = *(uint *)pTVar33;
  pTVar28 = pTVar34;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar37;
    uVar42 = SUB164(auVar14 * auVar26,8);
    pTVar45 = pTVar28;
    if (uVar42 < uVar44) {
      *(uint *)pTVar33 = uVar30;
      pTVar33 = pTVar2 + lVar39 * 8;
      pTVar45 = *(TreeItem **)pTVar33;
      *(TreeItem **)pTVar33 = pTVar28;
      uVar30 = uVar29;
      uVar44 = uVar42;
    }
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar35 + 1) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar37;
    lVar39 = SUB168(auVar15 * auVar27,8);
    pTVar33 = pTVar1 + lVar39 * 4;
    iVar35 = SUB164(auVar15 * auVar27,8);
    pTVar28 = pTVar45;
    uVar29 = *(uint *)pTVar33;
  }
  *(TreeItem **)(pTVar2 + lVar39 * 8) = pTVar28;
  *(uint *)pTVar33 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00119618:
  *(TreeItem **)param_1 = pTVar34;
  return;
}



/* Callable create_custom_callable_function_pointer<Skeleton3DEditor, int>(Skeleton3DEditor*, char
   const*, void (Skeleton3DEditor::*)(int)) */

Skeleton3DEditor *
create_custom_callable_function_pointer<Skeleton3DEditor,int>
          (Skeleton3DEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001296c0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Skeleton3DEditor, bool>(Skeleton3DEditor*, char
   const*, void (Skeleton3DEditor::*)(bool)) */

Skeleton3DEditor *
create_custom_callable_function_pointer<Skeleton3DEditor,bool>
          (Skeleton3DEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129750;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Variant **)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<Skeleton3DEditor>(Skeleton3DEditor*, char
   const*, void (Skeleton3DEditor::*)()) */

Skeleton3DEditor *
create_custom_callable_function_pointer<Skeleton3DEditor>
          (Skeleton3DEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC42;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129990;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void Ref<ShaderMaterial>::instantiate<>() */

void __thiscall Ref<ShaderMaterial>::instantiate<>(Ref<ShaderMaterial> *this)

{
  char cVar1;
  ShaderMaterial *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ShaderMaterial *)operator_new(0x348,"");
  ShaderMaterial::ShaderMaterial(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ShaderMaterial *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ShaderMaterial *)pOVar3) goto LAB_00119c55;
    *(ShaderMaterial **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00119c55;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ShaderMaterial *)0x0) {
    return;
  }
LAB_00119c55:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Array::Array;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a18a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0011a18a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin() */

void __thiscall Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin(Skeleton3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128e50;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin() */

void __thiscall Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin(Skeleton3DEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128e50;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011a3b8) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorInspectorPluginSkeleton::_initialize_classv() */

void EditorInspectorPluginSkeleton::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00132008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorInspectorPlugin";
      local_70 = 0;
      local_50 = 0x15;
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
      if ((code *)PTR__bind_methods_00132070 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00132078 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginSkeleton";
    local_70 = 0;
    local_50 = 0x1d;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011aa00) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011ac40) */
/* String vformat<>(String const&) */

String * vformat<>(String *param_1)

{
  bool *in_RSI;
  long in_FS_OFFSET;
  Array local_a8 [8];
  undefined8 local_a0 [9];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  Array::Array(local_a8);
  Array::resize((int)local_a8);
  String::sprintf((Array *)local_a0,in_RSI);
  *(undefined8 *)param_1 = local_a0[0];
  local_a0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  Array::~Array(local_a8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* BonePropertiesEditor::~BonePropertiesEditor() */

void __thiscall BonePropertiesEditor::~BonePropertiesEditor(BonePropertiesEditor *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001285d0;
  pvVar3 = *(void **)(this + 0xad0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xaf4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xaf4) = 0;
        *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xad8) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xad8) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xad0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xaf4) = 0;
        *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011ae89;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xad8),false);
  }
LAB_0011ae89:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xac0));
  bVar4 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011aede;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011aede:
  Control::~Control((Control *)this);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Skeleton3DEditorPlugin::get_class() const */

void Skeleton3DEditorPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Skeleton3DEditor::get_class() const */

void Skeleton3DEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* BonePropertiesEditor::get_class() const */

void BonePropertiesEditor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorInspectorPluginSkeleton::get_class() const */

void EditorInspectorPluginSkeleton::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Skeleton3DGizmoPlugin::get_class() const */

void Skeleton3DGizmoPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* StandardMaterial3D::get_class() const */

void StandardMaterial3D::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_0011b7d7:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_0011b7d7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011b8db;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011b8db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011ba3b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011ba3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::is_class(String const&) const */

undefined8 __thiscall Material::is_class(Material *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011bb8b;
  }
  cVar4 = String::operator==(param_1,"Material");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011bb8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorInspectorPlugin::is_class(EditorInspectorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011bcdb;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011bcdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginSkeleton::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginSkeleton::is_class(EditorInspectorPluginSkeleton *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011be2b;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorPluginSkeleton");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorInspectorPlugin::is_class((EditorInspectorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011be2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011bf8b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011bf8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorPlugin::is_class(EditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011c0eb;
  }
  cVar4 = String::operator==(param_1,"EditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Node::is_class((Node *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011c0eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall Skeleton3DEditorPlugin::is_class(Skeleton3DEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011c23b;
  }
  cVar4 = String::operator==(param_1,"Skeleton3DEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011c23b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c56f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c56f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c620;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c56f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011c620:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::call
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c77f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c77f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c830;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c77f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011c830:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::call
          (CallableCustomMethodPointer<Node,void,Node*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011ca75;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0011ca75;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0011c980:
          uVar3 = _LC182;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0011c980;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0011cb26;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011ca75:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011cb26:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011cd65;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0011cd65;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0011cc70:
          uVar3 = _LC182;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0011cc70;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ccd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0011ce16;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011cd65:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011ce16:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011cfd8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011cfd8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC183;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cf87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0011d089;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011cfd8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011d089:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011d2f0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0011d2f0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC184;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC185;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC186;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0011d278:
          uVar3 = _LC182;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0011d278;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011d2c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0011d3da;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011d2f0:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011d3da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC186;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC187;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),&local_38,uVar5 & 0xffffffff);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0011d4a5;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"\', can\'t call method.");
  uitos((ulong)aCStack_58);
  operator+((char *)local_50,(String *)"Invalid Object id \'");
  String::operator+(local_40,(String *)local_50);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011d4a5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011d735;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011d735;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0011d7bf:
          uVar3 = _LC188;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011d7bf;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC187;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0011d735;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011d735:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_88[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011daa4;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011daa4;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0011db2c:
          uVar3 = _LC188;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011db2c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC187;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar11 = (bool)(*pcVar10)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar5);
        Variant::Variant((Variant *)local_78,bVar11);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0011daa4;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"\', can\'t call method.");
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+(local_88,(String *)local_98);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0011daa4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011de3c;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011de3c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_0011debc:
          uVar3 = _LC190;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011debc;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC187;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar5);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_0011de3c;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011de3c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011e269;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0011e269;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC191;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011e218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0011e31a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011e269:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011e31a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar3 = _LC192;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = Variant::operator_cast_to_bool(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC193;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC194;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_60);
            (*pcVar7)((long *)(lVar1 + lVar2),local_60,(Variant *)local_58,(Variant *)&local_68,
                      bVar8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 4;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
        }
        goto LAB_0011e3ec;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\', can\'t call method.");
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0011e3ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, bool>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::call
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
            uVar3 = _LC195;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC194;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar7)((long *)(lVar1 + lVar2),local_48,bVar8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0011e715;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)local_48,(String *)local_58);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011e715:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::call
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC194;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011e9be;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011e9be:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Skeleton3DEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::call
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC194;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011ec1e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC181,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011ec1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011eebb;
  }
  cVar5 = String::operator==(param_1,"Control");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011eebb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011efbe;
    }
  }
LAB_0011eebb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011efbe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011f0cb;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011f0cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall Skeleton3DGizmoPlugin::is_class(Skeleton3DGizmoPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011f23b;
  }
  cVar5 = String::operator==(param_1,"Skeleton3DGizmoPlugin");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011f23b;
    }
    cVar5 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_0011f33e;
    }
  }
LAB_0011f23b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f33e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::~BonePropertiesEditor() */

void __thiscall BonePropertiesEditor::~BonePropertiesEditor(BonePropertiesEditor *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001285d0;
  pvVar3 = *(void **)(this + 0xad0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xaf4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xaf4) = 0;
        *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xad8) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xad8) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xad0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xaf4) = 0;
        *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011f429;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xad8),false);
  }
LAB_0011f429:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xac0));
  bVar4 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f47e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011f47e:
  Control::~Control((Control *)this);
  operator_delete(this,0xaf8);
  return;
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00132080 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
        local_70 = 0;
        local_50 = 8;
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Material::_bind_methods) {
          Material::_bind_methods();
        }
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
      local_70 = 0;
      local_50 = 0xe;
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
      if ((code *)PTR__bind_methods_00132088 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
    local_70 = 0;
    local_50 = 0x12;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Skeleton3DGizmoPlugin::_initialize_classv() */

void Skeleton3DGizmoPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "EditorNode3DGizmoPlugin";
      local_60 = 0;
      local_40 = 0x17;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00132090 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorNode3DGizmoPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Skeleton3DGizmoPlugin";
    local_60 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00132008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00132010 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00132018 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Skeleton3DEditorPlugin::_initialize_classv() */

void Skeleton3DEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00132008 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00132098 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_001320a0 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Skeleton3DEditorPlugin";
    local_70 = 0;
    local_50 = 0x16;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BonePropertiesEditor::_initialize_classv() */

void BonePropertiesEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "BonePropertiesEditor";
    local_60 = 0;
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00132008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00132010 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00132018 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00120d3f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00120d3f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00120e9b;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00120e9b;
    }
    cVar5 = String::operator==(param_1,"BaseMaterial3D");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Material::is_class((Material *)this,param_1);
        return uVar6;
      }
      goto LAB_00120f9e;
    }
  }
LAB_00120e9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00120f9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001210ab;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001210ab;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001211ae;
    }
  }
LAB_001210ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001211ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001212bb;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001212bb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001213be;
    }
  }
LAB_001212bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001213be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::is_class(String const&) const */

undefined8 __thiscall BonePropertiesEditor::is_class(BonePropertiesEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001214cb;
  }
  cVar4 = String::operator==(param_1,"BonePropertiesEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001214cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::is_class(String const&) const */

undefined8 __thiscall Skeleton3DEditor::is_class(Skeleton3DEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0012161b;
  }
  cVar4 = String::operator==(param_1,"Skeleton3DEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0012161b:
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
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001217cc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001217cc:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC136;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC136;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121a1c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121a1c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121c81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121c81:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Skeleton3DEditorPlugin::_get_property_listv(Skeleton3DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Skeleton3DEditorPlugin";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Skeleton3DEditorPlugin";
  local_98 = 0;
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00121f31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121f31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Skeleton3DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
  local_98 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001221e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001221e1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* EditorInspectorPluginSkeleton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginSkeleton::_get_property_listv
          (EditorInspectorPluginSkeleton *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPluginSkeleton";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginSkeleton";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122491;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122491:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginSkeleton",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122741;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122741:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001229f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001229f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Material",false);
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



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122ca1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122ca1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00122f51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122f51:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
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
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123201;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123201:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* Skeleton3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Skeleton3DGizmoPlugin::_get_property_listv(Skeleton3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Skeleton3DGizmoPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Skeleton3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001234b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001234b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Skeleton3DGizmoPlugin",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123761:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001320a8 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123a31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123a31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001320b0 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123d01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123d01:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00123fb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123fb1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124261;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124261:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
BonePropertiesEditor::_get_property_listv(BonePropertiesEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BonePropertiesEditor";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BonePropertiesEditor";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124511;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124511:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BonePropertiesEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Skeleton3DEditor::_get_property_listv(Skeleton3DEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Skeleton3DEditor";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Skeleton3DEditor";
  local_98 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001247c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001247c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Skeleton3DEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00124a71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124a71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* HashMap<StringName, EditorProperty*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorProperty*> > >::_lookup_pos(StringName
   const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
::_lookup_pos(HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorProperty*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorProperty*> > >::operator[](StringName
   const&) */

undefined8 * __thiscall
HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
::operator[](HashMap<StringName,EditorProperty*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorProperty*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char cVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  void *__s_00;
  undefined8 *puVar36;
  long lVar37;
  void *pvVar38;
  ulong uVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 *puVar48;
  long in_FS_OFFSET;
  bool bVar49;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar37 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar33);
  if (lVar37 == 0) {
LAB_001252f0:
    uVar33 = (uint)uVar34;
    uVar39 = uVar34 * 4;
    uVar43 = uVar34 * 8;
    uVar35 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    pvVar38 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = pvVar38;
    if (uVar33 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar38 + uVar43)) && (pvVar38 < (void *)((long)pvVar4 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar38 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar34 != uVar39);
      }
      else {
        memset(pvVar4,0,uVar39);
        memset(pvVar38,0,uVar43);
      }
    }
  }
  else if (*(int *)(this + 0x2c) != 0) {
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar32 = StringName::get_empty_hash();
      lVar37 = *(long *)(this + 8);
    }
    else {
      uVar32 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar32 == 0) {
      uVar32 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar32 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    lVar41 = SUB168(auVar6 * auVar18,8);
    uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar41 * 4);
    uVar46 = SUB164(auVar6 * auVar18,8);
    if (uVar45 != 0) {
      uVar47 = 0;
      do {
        if ((uVar32 == uVar45) &&
           (*(long *)(*(long *)(lVar37 + lVar41 * 8) + 0x10) == *(long *)param_1)) {
          puVar36 = *(undefined8 **)(lVar37 + (ulong)uVar46 * 8);
          goto LAB_00125268;
        }
        uVar47 = uVar47 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar46 + 1) * lVar3;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar34;
        lVar41 = SUB168(auVar7 * auVar19,8);
        uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar41 * 4);
        uVar46 = SUB164(auVar7 * auVar19,8);
      } while ((uVar45 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar45 * lVar3, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar34, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((uVar46 + uVar33) - SUB164(auVar8 * auVar20,8)) * lVar3,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar34, uVar47 <= SUB164(auVar9 * auVar21,8)));
    }
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar34 = (ulong)uVar33;
    if (lVar37 == 0) goto LAB_001252f0;
  }
  local_6c = 0;
  cVar30 = _lookup_pos(this,param_1,&local_6c);
  if (cVar30 != '\0') {
    puVar36 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    puVar36[3] = 0;
    goto LAB_00125268;
  }
  if ((float)uVar33 * __LC43 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar33 = *(uint *)(this + 0x28);
    if (uVar33 == 0x1c) {
      puVar36 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00125268;
    }
    uVar34 = (ulong)(uVar33 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
    if (uVar33 + 1 < 2) {
      uVar34 = 2;
    }
    uVar33 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    uVar43 = (ulong)uVar33;
    *(int *)(this + 0x28) = (int)uVar34;
    pvVar38 = *(void **)(this + 8);
    uVar34 = uVar43 * 4;
    uVar39 = uVar43 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar35 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar33 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar43);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,uVar39);
      }
    }
    if (uVar32 != 0) {
      uVar34 = 0;
      do {
        uVar33 = *(uint *)((long)pvVar4 + uVar34 * 4);
        if (uVar33 != 0) {
          lVar37 = *(long *)(this + 0x10);
          uVar47 = 0;
          uVar45 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar45);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar33 * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar39;
          lVar41 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar37 + lVar41 * 4);
          iVar40 = SUB164(auVar10 * auVar22,8);
          uVar46 = *puVar1;
          uVar35 = *(undefined8 *)((long)pvVar38 + uVar34 * 8);
          while (uVar46 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar46 * lVar3;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar39;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar45 + iVar40) - SUB164(auVar11 * auVar23,8)) * lVar3;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar39;
            uVar31 = SUB164(auVar12 * auVar24,8);
            uVar44 = uVar35;
            if (uVar31 < uVar47) {
              *puVar1 = uVar33;
              puVar36 = (undefined8 *)((long)__s_00 + lVar41 * 8);
              uVar44 = *puVar36;
              *puVar36 = uVar35;
              uVar33 = uVar46;
              uVar47 = uVar31;
            }
            uVar47 = uVar47 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar40 + 1) * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            lVar41 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar37 + lVar41 * 4);
            iVar40 = SUB164(auVar13 * auVar25,8);
            uVar35 = uVar44;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar41 * 8) = uVar35;
          *puVar1 = uVar33;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
      Memory::free_static(pvVar38,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar36 = (undefined8 *)operator_new(0x20,"");
  *puVar36 = local_68._0_8_;
  puVar36[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar36 + 2),(StringName *)&local_58);
  bVar49 = StringName::configured != '\0';
  puVar36[3] = local_50;
  if ((bVar49) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    lVar37 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar36;
    *(undefined8 **)(this + 0x20) = puVar36;
    if (lVar37 == 0) goto LAB_001252c5;
LAB_00125157:
    uVar33 = *(uint *)(lVar37 + 0x20);
  }
  else {
    *puVar5 = puVar36;
    puVar36[1] = puVar5;
    lVar37 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar36;
    if (lVar37 != 0) goto LAB_00125157;
LAB_001252c5:
    uVar33 = StringName::get_empty_hash();
  }
  if (uVar33 == 0) {
    uVar33 = 1;
  }
  uVar34 = (ulong)uVar33;
  lVar37 = *(long *)(this + 0x10);
  uVar46 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar32);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar34 * lVar3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar39;
  lVar42 = SUB168(auVar14 * auVar26,8);
  lVar41 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar37 + lVar42 * 4);
  iVar40 = SUB164(auVar14 * auVar26,8);
  uVar45 = *puVar1;
  puVar5 = puVar36;
  while (uVar45 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar45 * lVar3;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar39;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar32 + iVar40) - SUB164(auVar15 * auVar27,8)) * lVar3;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar39;
    uVar33 = SUB164(auVar16 * auVar28,8);
    puVar48 = puVar5;
    if (uVar33 < uVar46) {
      *puVar1 = (uint)uVar34;
      uVar34 = (ulong)uVar45;
      puVar2 = (undefined8 *)(lVar41 + lVar42 * 8);
      puVar48 = (undefined8 *)*puVar2;
      *puVar2 = puVar5;
      uVar46 = uVar33;
    }
    uVar33 = (uint)uVar34;
    uVar46 = uVar46 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar40 + 1) * lVar3;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar39;
    lVar42 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar37 + lVar42 * 4);
    iVar40 = SUB164(auVar17 * auVar29,8);
    puVar5 = puVar48;
    uVar45 = *puVar1;
  }
  *(undefined8 **)(lVar41 + lVar42 * 8) = puVar5;
  *puVar1 = uVar33;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00125268:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar36 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Skeleton3DEditor>(void (Skeleton3DEditor::*)()) */

MethodBind * create_method_bind<Skeleton3DEditor>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00129bd0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Skeleton3DEditor";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton3DEditor::_initialize_classv() */

void Skeleton3DEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Skeleton3DEditor";
    local_60 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00125970:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00125970;
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
LAB_001258dc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00125871;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001258dc;
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
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00125871:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<String>::_unref((CowData<String> *)((long)pvVar1 + 0x10));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton() */

void __thiscall
EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton(EditorInspectorPluginSkeleton *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node3DEditor::add_gizmo_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125e84;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125e84;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125e84;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125e84;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125e84;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00125e84:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00127b80;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton() */

void __thiscall
EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton(EditorInspectorPluginSkeleton *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node3DEditor::add_gizmo_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125f84;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125f84;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125f84;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125f84;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00125f84;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00125f84:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00127b80;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
  return;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00126280:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_00126280;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_001261b1;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_001261b1:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* LocalVector<int, unsigned int, false, false>::operator Vector<int>() const */

LocalVector * __thiscall LocalVector::operator_cast_to_Vector(LocalVector *this)

{
  uint uVar1;
  uint *in_RSI;
  
  uVar1 = *in_RSI;
  *(undefined8 *)(this + 8) = 0;
  CowData<int>::resize<false>((CowData<int> *)(this + 8),(ulong)uVar1);
  CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
  if (*(void **)(this + 8) != (void *)0x0) {
    memcpy(*(void **)(this + 8),*(void **)(in_RSI + 2),(ulong)*in_RSI << 2);
  }
  return this;
}



/* CowData<Skeleton3DEditor::BoneInfo>::_realloc(long) */

undefined8 __thiscall
CowData<Skeleton3DEditor::BoneInfo>::_realloc
          (CowData<Skeleton3DEditor::BoneInfo> *this,long param_1)

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



/* CowData<Ref<Node3DGizmo> >::_unref() */

void __thiscall CowData<Ref<Node3DGizmo>>::_unref(CowData<Ref<Node3DGizmo>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0012640d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0012640d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* Skeleton3DEditor::_notificationv(int, bool) */

void __thiscall Skeleton3DEditor::_notificationv(Skeleton3DEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification((int)this);
  return;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* LocalVector<float, unsigned int, false, false>::operator Vector<float>() const */

LocalVector * __thiscall LocalVector::operator_cast_to_Vector(LocalVector *this)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *in_RSI;
  ulong uVar3;
  
  uVar1 = *in_RSI;
  *(undefined8 *)(this + 8) = 0;
  if (uVar1 != 0) {
    CowData<float>::_copy_on_write((CowData<float> *)(this + 8));
    uVar3 = (ulong)uVar1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    puVar2 = (undefined8 *)Memory::alloc_static((uVar3 | uVar3 >> 0x20) + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      *puVar2 = 1;
      *(undefined8 **)(this + 8) = puVar2 + 2;
      puVar2[1] = (ulong)uVar1;
    }
  }
  CowData<float>::_copy_on_write((CowData<float> *)(this + 8));
  if (*(void **)(this + 8) != (void *)0x0) {
    memcpy(*(void **)(this + 8),*(void **)(in_RSI + 2),(ulong)*in_RSI << 2);
  }
  return this;
}



/* WARNING: Removing unreachable block (ram,0x00126768) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC181,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126a50;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00126a50:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00126e5f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00126d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00126e5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0012701f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00126ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012701f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePropertiesEditor::create_editors() */

void BonePropertiesEditor::_GLOBAL__sub_I_create_editors(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
  }
  __cxa_atexit(Skeleton3DGizmoPlugin::SelectionMaterials::~SelectionMaterials,
               &Skeleton3DGizmoPlugin::selection_materials,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton() */

void __thiscall
EditorInspectorPluginSkeleton::~EditorInspectorPluginSkeleton(EditorInspectorPluginSkeleton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BonePropertiesEditor::~BonePropertiesEditor() */

void __thiscall BonePropertiesEditor::~BonePropertiesEditor(BonePropertiesEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin() */

void __thiscall Skeleton3DEditorPlugin::~Skeleton3DEditorPlugin(Skeleton3DEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Skeleton3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
Skeleton3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BonePropertiesEditor, void, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BonePropertiesEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BonePropertiesEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePropertiesEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<Skeleton3DEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<Skeleton3DEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Vector2_const&,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton3DEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton3DEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton3DEditor,void,Node*> *this)

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



