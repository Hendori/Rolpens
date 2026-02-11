
/* Path3DGizmoPlugin::get_priority() const */

undefined8 Path3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* Path3DGizmo::_update_transform_gizmo() */

void Path3DGizmo::_update_transform_gizmo(void)

{
  Node3DEditor::update_transform_gizmo();
  return;
}



/* Path3DEditorPlugin::_mode_changed(int) */

void Path3DEditorPlugin::_mode_changed(int param_1)

{
  undefined4 in_register_0000003c;
  long lVar1;
  
  lVar1 = CONCAT44(in_register_0000003c,param_1);
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x678),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x688),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x690),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x680),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar1 + 0x698),0));
  Node3DEditor::clear_subgizmo_selection(Node3DEditor::singleton);
  return;
}



/* Path3DEditorPlugin::_handle_option_pressed(int) */

void __thiscall Path3DEditorPlugin::_handle_option_pressed(Path3DEditorPlugin *this,int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MenuButton::get_popup();
  if (param_1 == 0) {
    bVar1 = PopupMenu::is_item_checked(iVar2);
    this[0x6d9] = (Path3DEditorPlugin)(bVar1 ^ 1);
    PopupMenu::set_item_checked(iVar2,false);
    PopupMenu::set_item_disabled(iVar2,true);
    return;
  }
  if (param_1 != 1) {
    return;
  }
  bVar1 = PopupMenu::is_item_checked(iVar2);
  this[0x6da] = (Path3DEditorPlugin)(bVar1 ^ 1);
  PopupMenu::set_item_checked(iVar2,true);
  return;
}



/* CowData<Path3DGizmo::HandleInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Path3DGizmo::HandleInfo>::_copy_on_write(CowData<Path3DGizmo::HandleInfo> *this)

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



/* HashMap<int, Basis, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Basis> > >::_lookup_pos(int const&, unsigned int&)
   const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
::_lookup_pos(HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* Path3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall Path3DGizmoPlugin::has_gizmo(Path3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Path3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* Path3DGizmoPlugin::get_gizmo_name() const */

Path3DGizmoPlugin * __thiscall Path3DGizmoPlugin::get_gizmo_name(Path3DGizmoPlugin *this)

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



/* Path3DEditorPlugin::_update_toolbar() */

void __thiscall Path3DEditorPlugin::_update_toolbar(Path3DEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6d0) == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Path3D::get_curve();
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_38);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0x670),0));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0x6b8),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_update_theme() */

void __thiscall Path3DEditorPlugin::_update_theme(Path3DEditorPlugin *this)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pRVar1 = *(Ref **)(this + 0x680);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x688);
  if (_update_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x690);
  if (_update_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x678);
  if (_update_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x698);
  if (_update_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x6a0);
  if (_update_theme()::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x6a8);
  if (_update_theme()::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(this + 0x6b8);
  if (_update_theme()::{lambda()#8}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#8}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::get_handle_value(int, bool) const */

Variant * Path3DGizmo::get_handle_value(int param_1,bool param_2)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char in_CL;
  long lVar5;
  int in_EDX;
  undefined7 in_register_00000031;
  long lVar6;
  int iVar7;
  undefined4 in_register_0000003c;
  Variant *this;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 uVar10;
  float in_XMM1_Da;
  Object *local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  long local_30;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  lVar6 = CONCAT71(in_register_00000031,param_2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Path3D::get_curve();
  if (local_58 == (Object *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    goto LAB_00100e48;
  }
  iVar7 = (int)local_58;
  if (in_CL != '\0') {
    lVar5 = (long)in_EDX;
    lVar1 = *(long *)(lVar6 + 0x350);
    if (lVar5 < 0) {
      if (lVar1 != 0) {
        lVar8 = *(long *)(lVar1 + -8);
        goto LAB_00100ef9;
      }
    }
    else if (lVar1 != 0) {
      lVar8 = *(long *)(lVar1 + -8);
      if (lVar8 <= lVar5) goto LAB_00100ef9;
      local_48 = 0.0;
      local_50 = 0;
      iVar4 = (int)((ulong)*(undefined8 *)(lVar1 + lVar5 * 8) >> 0x20);
      if (iVar4 == 1) {
        local_50 = Curve3D::get_point_out(iVar7);
        local_48 = in_XMM1_Da;
      }
      else {
        if (iVar4 == 2) {
          fVar9 = (float)Curve3D::get_point_tilt(iVar7);
          Variant::Variant(this,fVar9);
          goto LAB_00100e36;
        }
        if (iVar4 == 0) {
          local_50 = Curve3D::get_point_in(iVar7);
          local_48 = in_XMM1_Da;
        }
      }
      local_40 = Curve3D::get_point_position(iVar7);
      *(float *)(lVar6 + 0x338) = local_48 + in_XMM1_Da;
      *(ulong *)(lVar6 + 0x330) =
           CONCAT44((float)((ulong)local_50 >> 0x20) + (float)((ulong)local_40 >> 0x20),
                    (float)local_50 + (float)local_40);
      Variant::Variant(this,(Vector3 *)&local_50);
      goto LAB_00100e36;
    }
    lVar8 = 0;
LAB_00100ef9:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar10 = Curve3D::get_point_position(iVar7);
  *(undefined8 *)(lVar6 + 0x330) = uVar10;
  *(float *)(lVar6 + 0x338) = in_XMM1_Da;
  Variant::Variant(this,(Vector3 *)(lVar6 + 0x330));
LAB_00100e36:
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
    }
  }
LAB_00100e48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmoPlugin::subgizmos_intersect_ray(EditorNode3DGizmo const*, Camera3D*, Vector2 const&)
   const */

int Path3DGizmoPlugin::subgizmos_intersect_ray
              (EditorNode3DGizmo *param_1,Camera3D *param_2,Vector2 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float in_XMM1_Da;
  float fVar7;
  Object *local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined8 local_44;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x1f0) != 0) {
    lVar3 = __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,&Path3D::typeinfo,0);
    if (lVar3 != 0) {
      Path3D::get_curve();
      if (local_90 == (Object *)0x0) {
        _err_print_error("subgizmos_intersect_ray","editor/plugins/path_3d_editor_plugin.cpp",0x417,
                         "Condition \"curve.is_null()\" is true. Returning: -1",0,0);
      }
      else {
        cVar1 = BaseButton::is_pressed();
        if (cVar1 != '\0') {
          iVar4 = 0;
          while( true ) {
            iVar2 = Curve3D::get_point_count();
            if (iVar2 <= iVar4) break;
            Node3D::get_global_transform();
            local_78 = Curve3D::get_point_position((int)local_90);
            fVar6 = (float)((ulong)local_78 >> 0x20);
            fVar5 = (float)local_78;
            local_80 = local_50 * fVar5 + local_4c * fVar6 + local_48 * in_XMM1_Da + local_3c;
            fVar7 = (float)local_68 * fVar5 + fVar6 * local_68._4_4_ + (float)local_60 * in_XMM1_Da
                    + (float)local_44;
            local_88 = CONCAT44((float)((ulong)local_60 >> 0x20) * fVar5 + fVar6 * local_58 +
                                fStack_54 * in_XMM1_Da + (float)((ulong)local_44 >> 0x20),fVar7);
            local_70 = in_XMM1_Da;
            local_68 = (**(code **)(*(long *)param_3 + 0x218))(param_3,&local_88);
            fVar5 = (float)Vector2::distance_to((Vector2 *)&local_68);
            if (fVar5 < _LC29) goto LAB_001010f4;
            iVar4 = iVar4 + 1;
            in_XMM1_Da = fVar7;
          }
        }
      }
      iVar4 = -1;
LAB_001010f4:
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
      goto LAB_00101107;
    }
  }
  iVar4 = -1;
  _err_print_error("subgizmos_intersect_ray","editor/plugins/path_3d_editor_plugin.cpp",0x415,
                   "Parameter \"path\" is null.",0,0);
LAB_00101107:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmoPlugin::get_subgizmo_transform(EditorNode3DGizmo const*, int) const */

EditorNode3DGizmo *
Path3DGizmoPlugin::get_subgizmo_transform(EditorNode3DGizmo *param_1,int param_2)

{
  HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
  *this;
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint in_ECX;
  long in_RDX;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined4 extraout_XMM1_Da;
  uint local_b4;
  Object *local_b0;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RDX + 0x1f0) == 0) ||
     (lVar5 = __dynamic_cast(*(long *)(in_RDX + 0x1f0),&Object::typeinfo,&Path3D::typeinfo,0),
     lVar5 == 0)) {
    _err_print_error("get_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x442,
                     "Parameter \"path\" is null.",0,0);
    uVar2 = _LC32;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 (*) [16])param_1 = ZEXT416(uVar2);
    *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416(uVar2);
  }
  else {
    Path3D::get_curve();
    if (local_b0 == (Object *)0x0) {
      _err_print_error("get_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x444,
                       "Condition \"curve.is_null()\" is true. Returning: Transform3D()",0,0);
      uVar2 = _LC32;
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 (*) [16])param_1 = ZEXT416(uVar2);
      *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416(uVar2);
    }
    else if (((int)in_ECX < 0) || (iVar4 = Curve3D::get_point_count(), iVar4 <= (int)in_ECX)) {
      iVar4 = Curve3D::get_point_count();
      _err_print_index_error
                ("get_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x445,
                 (long)(int)in_ECX,(long)iVar4,"p_id","curve->get_point_count()","",false,false);
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      uVar2 = _LC32;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 (*) [16])param_1 = ZEXT416(uVar2);
      *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416(uVar2);
    }
    else {
      this = (HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
              *)(CONCAT44(in_register_00000034,param_2) + 0x458);
      cVar3 = HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
              ::_lookup_pos(this,(int *)(ulong)in_ECX,&local_b4);
      if (cVar3 == '\0') {
        Curve3D::get_point_baked_posture((int)&local_98,SUB81(local_b0,0));
      }
      else {
        local_b4 = 0;
        cVar3 = HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
                ::_lookup_pos(this,(int *)(ulong)in_ECX,&local_b4);
        if (cVar3 == '\0') {
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar5 = *(long *)(*(long *)(CONCAT44(in_register_00000034,param_2) + 0x460) +
                         (ulong)local_b4 * 8);
        local_98 = *(undefined8 *)(lVar5 + 0x14);
        uStack_90 = *(undefined8 *)(lVar5 + 0x1c);
        local_88 = *(undefined8 *)(lVar5 + 0x24);
        uStack_80 = *(undefined8 *)(lVar5 + 0x2c);
        local_78 = *(undefined4 *)(lVar5 + 0x34);
      }
      local_a4 = Curve3D::get_point_position((int)local_b0);
      local_9c = extraout_XMM1_Da;
      Transform3D::Transform3D((Transform3D *)&local_68,(Basis *)&local_98,(Vector3 *)&local_a4);
      *(undefined8 *)param_1 = local_68;
      *(undefined8 *)(param_1 + 8) = uStack_60;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      *(undefined8 *)(param_1 + 0x18) = uStack_50;
      *(undefined8 *)(param_1 + 0x20) = local_48;
      *(undefined8 *)(param_1 + 0x28) = uStack_40;
    }
    if (((local_b0 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_b0), cVar3 != '\0')) {
      (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
      Memory::free_static(local_b0,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Path3DEditorPlugin::_confirm_clear_points() */

void __thiscall Path3DEditorPlugin::_confirm_clear_points(Path3DEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  Object *local_30;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6d0) != 0) {
    Path3D::get_curve();
    if (local_38 != (Object *)0x0) {
      Path3D::get_curve();
      iVar3 = Curve3D::get_point_count();
      if (local_30 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_30);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
      if (local_38 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_38);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
        }
      }
      if (iVar3 != 0) {
        Window::reset_size();
        Window::popup_centered(*(Vector2i **)(this + 0x6c0));
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_clear_curve_points() */

void __thiscall Path3DEditorPlugin::_clear_curve_points(Path3DEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6d0) != 0) {
    Path3D::get_curve();
    if (local_40 != (Object *)0x0) {
      Path3D::get_curve();
      iVar3 = Curve3D::get_point_count();
      if (local_38 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_38);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
        }
      }
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
      if (iVar3 != 0) {
        Path3D::get_curve();
        Curve3D::set_closed(SUB81(local_38,0));
        Curve3D::clear_points();
        if (local_38 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_38);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)local_38 + 0x140))(local_38);
              Memory::free_static(local_38,false);
            }
          }
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::Path3DGizmo(Path3D*, float) */

void __thiscall Path3DGizmo::Path3DGizmo(Path3DGizmo *this,Path3D *param_1,float param_2)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  Path3DGizmo local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmo::EditorNode3DGizmo((EditorNode3DGizmo *)this);
  *(undefined ***)this = &PTR__initialize_classv_00117d08;
  *(Path3D **)(this + 0x328) = param_1;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(float *)(this + 0x344) = param_2;
  EditorNode3DGizmo::set_node_3d((Node3D *)this);
  plVar1 = *(long **)(this + 0x328);
  *(undefined8 *)(this + 0x33c) = 0;
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::_update_transform_gizmo");
  StringName::StringName((StringName *)&local_50,"curve_changed",false);
  (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  plVar1 = *(long **)(Path3DEditorPlugin::singleton + 0x680);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::redraw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,local_48,0);
  Callable::~Callable((Callable *)local_48);
  plVar1 = *(long **)(Path3DEditorPlugin::singleton + 0x688);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::redraw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,local_48,0);
  Callable::~Callable((Callable *)local_48);
  plVar1 = *(long **)(Path3DEditorPlugin::singleton + 0x678);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::redraw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,local_48,0);
  Callable::~Callable((Callable *)local_48);
  plVar1 = *(long **)(Path3DEditorPlugin::singleton + 0x698);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::redraw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,local_48,0);
  Callable::~Callable((Callable *)local_48);
  plVar1 = *(long **)(Path3DEditorPlugin::singleton + 0x6a0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<Path3DGizmo>
            (local_48,(char *)this,(_func_void *)"&Path3DGizmo::redraw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,local_48,0);
  Callable::~Callable((Callable *)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmoPlugin::create_gizmo(Node3D*) */

Node3D * Path3DGizmoPlugin::create_gizmo(Node3D *param_1)

{
  float fVar1;
  char cVar2;
  Path3D *pPVar3;
  Path3DGizmo *this;
  long lVar4;
  long in_RDX;
  long in_RSI;
  Path3DGizmo *pPVar5;
  
  if ((in_RDX == 0) || (pPVar3 = (Path3D *)__dynamic_cast(), pPVar3 == (Path3D *)0x0)) {
LAB_00101af3:
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  fVar1 = *(float *)(in_RSI + 0x450);
  this = (Path3DGizmo *)operator_new(0x358,"");
  Path3DGizmo::Path3DGizmo(this,pPVar3,fVar1);
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') goto LAB_00101af3;
  cVar2 = RefCounted::reference();
  if (cVar2 == '\0') {
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') goto LAB_00101af3;
    cVar2 = predelete_handler((Object *)this);
    pPVar5 = (Path3DGizmo *)0x0;
    if (cVar2 == '\0') goto LAB_00101af3;
  }
  else {
    cVar2 = RefCounted::unreference();
    if ((cVar2 == '\0') || (cVar2 = predelete_handler((Object *)this), pPVar5 = this, cVar2 == '\0')
       ) {
      *(undefined8 *)param_1 = 0;
      goto LAB_00101b77;
    }
  }
  (**(code **)(*(long *)this + 0x140))(this);
  Memory::free_static(this,false);
  *(undefined8 *)param_1 = 0;
  this = pPVar5;
  if (pPVar5 == (Path3DGizmo *)0x0) {
    return param_1;
  }
LAB_00101b77:
  lVar4 = __dynamic_cast(this,&Object::typeinfo,&EditorNode3DGizmo::typeinfo,0);
  if (lVar4 != 0) {
    *(long *)param_1 = lVar4;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return param_1;
  }
  cVar2 = predelete_handler((Object *)this);
  if (cVar2 == '\0') {
    return param_1;
  }
  (**(code **)(*(long *)this + 0x140))(this);
  Memory::free_static(this,false);
  return param_1;
}



/* Path3DEditorPlugin::handles(Object*) const */

undefined4 __thiscall Path3DEditorPlugin::handles(Path3DEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "Path3D";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::get_handle_name(int, bool) const */

String * Path3DGizmo::get_handle_name(int param_1,bool param_2)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char in_CL;
  int in_EDX;
  undefined7 in_register_00000031;
  long lVar5;
  char *pcVar6;
  undefined4 in_register_0000003c;
  String *this;
  long lVar7;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  undefined8 local_48;
  String local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  this = (String *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Path3D::get_curve();
  if (local_58 == (Object *)0x0) {
LAB_00101d39:
    *(undefined8 *)this = 0;
    String::parse_latin1(this,"");
    goto LAB_00101d4f;
  }
  lVar5 = (long)in_EDX;
  if (in_CL != '\0') {
    lVar1 = *(long *)(CONCAT71(in_register_00000031,param_2) + 0x350);
    if (in_EDX < 0) {
      if (lVar1 != 0) {
        lVar7 = *(long *)(lVar1 + -8);
        goto LAB_00101e7d;
      }
    }
    else if (lVar1 != 0) {
      lVar7 = *(long *)(lVar1 + -8);
      if (lVar7 <= lVar5) goto LAB_00101e7d;
      iVar4 = (int)((ulong)*(undefined8 *)(lVar1 + lVar5 * 8) >> 0x20);
      if (iVar4 == 1) {
        itos((long)local_38);
        local_48 = 0;
        String::parse_latin1((String *)&local_48,"");
        pcVar6 = "Handle Out #";
      }
      else if (iVar4 == 2) {
        itos((long)local_38);
        local_48 = 0;
        String::parse_latin1((String *)&local_48,"");
        pcVar6 = "Handle Tilt #";
      }
      else {
        if (iVar4 != 0) goto LAB_00101d39;
        itos((long)local_38);
        local_48 = 0;
        String::parse_latin1((String *)&local_48,"");
        pcVar6 = "Handle In #";
      }
      goto LAB_00101dcf;
    }
    lVar7 = 0;
LAB_00101e7d:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  itos((long)local_38);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  pcVar6 = "Curve Point #";
LAB_00101dcf:
  local_50 = 0;
  String::parse_latin1((String *)&local_50,pcVar6);
  TTR(local_40,(String *)&local_50);
  String::operator+(this,local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_38);
LAB_00101d4f:
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DGizmoPlugin::Path3DGizmoPlugin(float) */

void __thiscall Path3DGizmoPlugin::Path3DGizmoPlugin(Path3DGizmoPlugin *this,float param_1)

{
  long lVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  Object *local_80;
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined4 *)(this + 0x450) = 0x3f4ccccd;
  *(undefined ***)this = &PTR__initialize_classv_00118198;
  *(undefined8 *)(this + 0x480) = 2;
  *(undefined1 (*) [16])(this + 0x460) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
  local_78[0] = SceneTree::get_debug_paths_color();
  local_80 = (Object *)0x0;
  String::parse_latin1((String *)&local_80,"editors/3d_gizmos/gizmo_colors/path_tilt");
  _EDITOR_GET((String *)&local_58);
  local_68[0] = Variant::operator_cast_to_Color((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  *(float *)(this + 0x450) = param_1;
  local_80 = (Object *)0x0;
  String::parse_latin1((String *)&local_80,"path_material");
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(String *)&local_80,SUB81(local_78,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_80 = (Object *)0x0;
  local_58 = __LC65;
  uStack_50 = _UNK_001189e8;
  String::parse_latin1((String *)&local_80,"path_thin_material");
  bVar6 = SUB81((String *)&local_58,0);
  EditorNode3DGizmoPlugin::create_material((String *)this,(String *)&local_80,bVar6,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_80 = (Object *)0x0;
  String::parse_latin1((String *)&local_80,"path_tilt_material");
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(String *)&local_80,SUB81((Color *)local_68,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_58 = Color::operator*((Color *)local_68,_LC68);
  local_80 = (Object *)0x0;
  String::parse_latin1((String *)&local_80,"path_tilt_muted_material");
  EditorNode3DGizmoPlugin::create_material((String *)this,(String *)&local_80,bVar6,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname);
  }
  (*pcVar2)((String *)&local_80,pOVar7,&Path3DGizmoPlugin(float)::{lambda()#1}::operator()()::sname,
            lVar1);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"handles");
  bVar6 = SUB81((String *)&local_88,0);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar6,(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (((local_80 == (Object *)0x0) ||
      (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
     (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
    cVar4 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname);
  }
  (*pcVar2)((String *)&local_80,pOVar7,&Path3DGizmoPlugin(float)::{lambda()#2}::operator()()::sname,
            lVar1);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"first_pt_handle");
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar6,(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (((local_80 == (Object *)0x0) ||
      (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
     (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
    cVar4 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname);
  }
  (*pcVar2)((String *)&local_80,pOVar7,&Path3DGizmoPlugin(float)::{lambda()#3}::operator()()::sname,
            lVar1);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"last_pt_handle");
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar6,(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (((local_80 == (Object *)0x0) ||
      (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
     (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
    cVar4 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname);
  }
  (*pcVar2)((String *)&local_80,pOVar7,&Path3DGizmoPlugin(float)::{lambda()#4}::operator()()::sname,
            lVar1);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"closed_pt_handle");
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar6,(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (((local_80 == (Object *)0x0) ||
      (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
     (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
    cVar4 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 != (Object *)0x0) {
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
    lVar1 = EditorStringNames::singleton + 0x10;
    if ((Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname);
    }
    (*pcVar2)((String *)&local_80,pOVar7,
              &Path3DGizmoPlugin(float)::{lambda()#5}::operator()()::sname,lVar1);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"sec_handles");
    EditorNode3DGizmoPlugin::create_handle_material((String *)this,bVar6,(Ref *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_80 == (Object *)0x0) ||
        (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
       (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Path3DEditorPlugin::Path3DEditorPlugin() */

void __thiscall Path3DEditorPlugin::Path3DEditorPlugin(Path3DEditorPlugin *this)

{
  String *pSVar1;
  code *pcVar2;
  undefined8 uVar3;
  StringName *pSVar4;
  Control *pCVar5;
  char cVar6;
  BoxContainer *pBVar7;
  Button *pBVar8;
  ConfirmationDialog *this_00;
  MenuButton *this_01;
  long *plVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  float fVar11;
  Object *local_1a0;
  String local_120 [8];
  String local_118 [8];
  String local_110 [8];
  String local_108 [8];
  String local_100 [8];
  String local_f8 [8];
  String local_f0 [8];
  String local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78 [2];
  Object *local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = RefCounted::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Path3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  *(undefined ***)this = &PTR__initialize_classv_00117ef0;
  *(undefined2 *)(this + 0x6d8) = 0x100;
  this[0x650] = (Path3DEditorPlugin)0x0;
  *(undefined4 *)(this + 0x6c8) = 0x3f4ccccd;
  *(undefined8 *)(this + 0x6d0) = 0;
  this[0x6da] = (Path3DEditorPlugin)0x1;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x678) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x688) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x698) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6b8) = (undefined1  [16])0x0;
  local_68[0] = (Object *)0x0;
  singleton = this;
  String::parse_latin1((String *)local_68,"editors/3d_gizmos/gizmo_settings/path3d_tilt_disk_size");
  _EDITOR_GET((String *)local_58);
  fVar11 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0x6c8) = fVar11;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_1a0 = (Object *)operator_new(0x488,"");
  Path3DGizmoPlugin::Path3DGizmoPlugin((Path3DGizmoPlugin *)local_1a0,*(float *)(this + 0x6c8));
  postinitialize_handler(local_1a0);
  cVar6 = RefCounted::init_ref();
  pCVar5 = Node3DEditor::singleton;
  local_68[0] = (Object *)0x0;
  if (cVar6 == '\0') {
    local_1a0 = (Object *)0x0;
  }
  else {
    pOVar10 = (Object *)
              __dynamic_cast(local_1a0,&Object::typeinfo,&EditorNode3DGizmoPlugin::typeinfo,0);
    if (pOVar10 != (Object *)0x0) {
      local_68[0] = pOVar10;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_68[0] = (Object *)0x0;
      }
    }
  }
  Node3DEditor::add_gizmo_plugin(pCVar5);
  if (local_68[0] != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar10 = local_68[0];
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68[0]);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
  }
  pOVar10 = *(Object **)(this + 0x660);
  if (pOVar10 != local_1a0) {
    *(Object **)(this + 0x660) = local_1a0;
    if (local_1a0 != (Object *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(this + 0x660) = 0;
      }
    }
    if (pOVar10 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar10);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
  }
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117990;
  pBVar7[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0x668) = pBVar7;
  CanvasItem::hide();
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117990;
  pBVar7[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0x670) = pBVar7;
  Node::add_child(*(undefined8 *)(this + 0x668),pBVar7,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x680) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x680));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x680),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x680),0);
  pSVar1 = *(String **)(this + 0x680);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Right Click: Delete Point");
  TTR(local_80,(String *)local_78);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"\n");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"Click: Add Point");
  TTR(local_a0,(String *)&local_98);
  keycode_get_string(local_a8,0x1000000);
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"\n");
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Shift+Click: Select multiple Points");
  TTR(local_c8,(String *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"\n");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Select Points");
  TTR(local_e8,(String *)&local_e0);
  String::operator+(local_f0,local_e8);
  String::operator+(local_f8,local_f0);
  String::operator+(local_100,local_f8);
  String::operator+(local_108,local_100);
  String::operator+(local_110,local_108);
  String::operator+(local_118,local_110);
  String::operator+(local_120,local_118);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x680),0,0);
  plVar9 = *(long **)(this + 0x680);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_mode_changed");
  Callable::bind<Path3DEditorPlugin::Mode>((String *)local_78,(String *)local_68,1);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x688) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x688));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x688),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x688),0);
  pSVar1 = *(String **)(this + 0x688);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Shift+Click: Drag out Control Points");
  TTR(local_80,(String *)local_78);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"\n");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"Select Control Points");
  TTR(local_a0,(String *)&local_98);
  String::operator+((String *)local_a8,local_a0);
  String::operator+((String *)&local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x688),0,0);
  plVar9 = *(long **)(this + 0x688);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_mode_changed");
  Callable::bind<Path3DEditorPlugin::Mode>((String *)local_78,(String *)local_68,2);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x690) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x690));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x690),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x690),0);
  pSVar1 = *(String **)(this + 0x690);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Select Tilt Handles");
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x690),0,0);
  plVar9 = *(long **)(this + 0x690);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_mode_changed");
  Callable::bind<Path3DEditorPlugin::Mode>((String *)local_78,(String *)local_68,3);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x678) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x678));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x678),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x678),0);
  pSVar1 = *(String **)(this + 0x678);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Split Segment (in curve)");
  TTR(local_80,(String *)local_78);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"\n");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"Add Point (in empty space)");
  TTR(local_a0,(String *)&local_98);
  String::operator+((String *)local_a8,local_a0);
  String::operator+((String *)&local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x678),0,0);
  plVar9 = *(long **)(this + 0x678);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_mode_changed");
  Callable::bind<Path3DEditorPlugin::Mode>((String *)local_78,(String *)local_68,0);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x698) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x698));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x698),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x698),0);
  pSVar1 = *(String **)(this + 0x698);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Delete Point");
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x698),0,0);
  plVar9 = *(long **)(this + 0x698);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_mode_changed");
  Callable::bind<Path3DEditorPlugin::Mode>((String *)local_78,(String *)local_68,4);
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x6a0) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6a0));
  Control::set_focus_mode(*(undefined8 *)(this + 0x6a0),0);
  pSVar1 = *(String **)(this + 0x6a0);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Close Curve");
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x6a0),0,0);
  plVar9 = *(long **)(this + 0x6a0);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void *)"&Path3DEditorPlugin::_toggle_closed_curve");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x6a8) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6a8));
  Control::set_focus_mode(*(undefined8 *)(this + 0x6a8),0);
  pSVar1 = *(String **)(this + 0x6a8);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Clear Points");
  TTR(local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar9 = *(long **)(this + 0x6a8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void *)"&Path3DEditorPlugin::_confirm_clear_points");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_68);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x6a8),0,0);
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(ConfirmationDialog **)(this + 0x6c0) = this_00;
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Please Confirm...");
  TTR(local_80,(String *)local_78);
  Window::set_title((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar3 = *(undefined8 *)(this + 0x6c0);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Remove all curve points?");
  TTR(local_80,(String *)local_78);
  AcceptDialog::set_text(uVar3,local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar9 = *(long **)(this + 0x6c0);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void *)"&Path3DEditorPlugin::_clear_points");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x268,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x6c0),0,0);
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_68[0] = (Object *)0x0;
  MenuButton::MenuButton(this_01,(String *)local_68);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0x6b0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0x6b0),0));
  pSVar4 = *(StringName **)(this + 0x6b0);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar1 = *(String **)(this + 0x6b0);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Options");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0x670),*(undefined8 *)(this + 0x6b0),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0x6b8) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0x6b8);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Create Curve");
  TTR(local_80,(String *)local_78);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0x668),*(undefined8 *)(this + 0x6b8),0,0);
  plVar9 = *(long **)(this + 0x6b8);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void *)"&Path3DEditorPlugin::_create_curve");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  plVar9 = (long *)MenuButton::get_popup();
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Mirror Handle Angles");
  TTR(local_80,(String *)local_78);
  PopupMenu::add_check_item(plVar9,local_80,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  PopupMenu::set_item_checked((int)plVar9,false);
  local_68[0] = (Object *)0x0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Mirror Handle Lengths");
  TTR(local_80,(String *)local_78);
  PopupMenu::add_check_item(plVar9,local_80,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  PopupMenu::set_item_checked((int)plVar9,true);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin,int>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void_int *)"&Path3DEditorPlugin::_handle_option_pressed");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x240,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0x680),0));
  plVar9 = *(long **)(this + 0x668);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<Path3DEditorPlugin>
            ((Path3DEditorPlugin *)local_68,(char *)this,
             (_func_void *)"&Path3DEditorPlugin::_update_theme");
  (*pcVar2)(plVar9,SceneStringNames::singleton + 0x210,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  if (local_1a0 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_1a0);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_1a0 + 0x140))(local_1a0);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_1a0,false);
          return;
        }
        goto LAB_001046d5;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001046d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_bind_methods() */

void Path3DEditorPlugin::_bind_methods(void)

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
  D_METHODP((char *)local_78,(char ***)"_update_toolbar",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path3DEditorPlugin>(_update_toolbar);
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
  D_METHODP((char *)local_78,(char ***)"_clear_curve_points",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path3DEditorPlugin>(_clear_curve_points);
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
  D_METHODP((char *)local_78,(char ***)"_restore_curve_points",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Path3DEditorPlugin,Vector<Vector3>const&>(_restore_curve_points);
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



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* Path3DEditorPlugin::_clear_points() */

void __thiscall Path3DEditorPlugin::_clear_points(Path3DEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  CowData<Vector3> *local_d0;
  CowData *local_c8;
  undefined8 local_b8;
  Object *local_b0 [2];
  long local_a0;
  char *local_98;
  long local_90;
  Variant *local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  Path3D::get_curve();
  Curve3D::get_points();
  local_a0 = 0;
  if (local_90 != 0) {
    CowData<Vector3>::_ref((CowData<Vector3> *)&local_a0,(CowData *)&local_90);
  }
  lVar1 = local_a0;
  local_c8 = (CowData *)&local_a0;
  local_d0 = (CowData<Vector3> *)&local_90;
  CowData<Vector3>::_unref(local_d0);
  if (((local_b0[0] != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_b0[0]), cVar2 != '\0')) {
    (**(code **)(*(long *)local_b0[0] + 0x140))(local_b0[0]);
    Memory::free_static(local_b0[0],false);
  }
  local_98 = "";
  local_b0[0] = (Object *)0x0;
  local_90 = 0;
  String::parse_latin1((StrRange *)local_b0);
  local_98 = "Clear Curve Points";
  local_b8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  TTR((String *)&local_98,(String *)&local_b8);
  EditorUndoRedoManager::create_action(pOVar3,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  StringName::StringName((StringName *)&local_98,"_clear_curve_points",false);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_90 = 0;
  if (lVar1 != 0) {
    CowData<Vector3>::_ref(local_d0,local_c8);
  }
  StringName::StringName((StringName *)local_b0,"_restore_curve_points",false);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,(StringName *)this,(Variant **)local_b0,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0[0] != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<Vector3>::_unref(local_d0);
  EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
  CowData<Vector3>::_unref((CowData<Vector3> *)local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
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
  __n = lVar1 * 0xc;
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



/* Path3DGizmoPlugin::subgizmos_intersect_frustum(EditorNode3DGizmo const*, Camera3D const*,
   Vector<Plane> const&) const */

EditorNode3DGizmo *
Path3DGizmoPlugin::subgizmos_intersect_frustum
          (EditorNode3DGizmo *param_1,Camera3D *param_2,Vector *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  long lVar5;
  float *pfVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  long in_R8;
  long in_FS_OFFSET;
  float fVar12;
  float fVar14;
  float in_XMM1_Da;
  float fVar15;
  float fVar16;
  Object *local_80;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 uVar13;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if ((*(long *)(param_3 + 0x1f0) == 0) ||
     (lVar9 = __dynamic_cast(*(long *)(param_3 + 0x1f0),&Object::typeinfo,&Path3D::typeinfo),
     lVar9 == 0)) {
    _err_print_error("subgizmos_intersect_frustum","editor/plugins/path_3d_editor_plugin.cpp",0x428,
                     "Parameter \"path\" is null.",0,0);
  }
  else {
    Path3D::get_curve();
    if (local_80 == (Object *)0x0) {
      _err_print_error("subgizmos_intersect_frustum","editor/plugins/path_3d_editor_plugin.cpp",
                       0x42a,"Condition \"curve.is_null()\" is true. Returning: contained_points",0,
                       0);
    }
    else {
      cVar7 = BaseButton::is_pressed();
      if (cVar7 != '\0') {
        iVar11 = 0;
        iVar8 = Curve3D::get_point_count();
        if (0 < iVar8) {
          do {
            Node3D::get_global_transform();
            uVar13 = Curve3D::get_point_position((int)local_80);
            fVar14 = (float)((ulong)uVar13 >> 0x20);
            fVar12 = (float)uVar13;
            pfVar6 = *(float **)(in_R8 + 8);
            fVar15 = local_48 * in_XMM1_Da;
            fVar16 = local_54 * in_XMM1_Da;
            in_XMM1_Da = in_XMM1_Da * local_60 + fVar12 * local_68 + fVar14 * local_64 + local_44;
            if (pfVar6 == (float *)0x0) {
LAB_001053c8:
              Vector<int>::push_back((Vector<int> *)param_1,iVar11);
            }
            else {
              lVar9 = 0;
              pfVar10 = pfVar6;
              do {
                if (*(long *)(pfVar6 + -2) <= lVar9) goto LAB_001053c8;
                lVar9 = lVar9 + 1;
                fVar4 = *pfVar10;
                pfVar1 = pfVar10 + 1;
                pfVar2 = pfVar10 + 2;
                pfVar3 = pfVar10 + 3;
                pfVar10 = pfVar10 + 4;
              } while ((fVar4 * in_XMM1_Da +
                        *pfVar1 * (local_5c * fVar12 + local_58 * fVar14 + fVar16 + local_40) +
                       *pfVar2 * (local_4c * fVar14 + local_50 * fVar12 + fVar15 + local_3c)) -
                       *pfVar3 <= 0.0);
            }
            iVar11 = iVar11 + 1;
            iVar8 = Curve3D::get_point_count();
          } while (iVar11 < iVar8);
        }
      }
    }
    if (((local_80 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_80), cVar7 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
      Memory::free_static(local_80,false);
    }
  }
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Path3DEditorPlugin::make_visible(bool) */

void __thiscall Path3DEditorPlugin::make_visible(Path3DEditorPlugin *this,bool param_1)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::show();
      return;
    }
  }
  else {
    CanvasItem::hide();
    lVar1 = *(long *)(this + 0x6d0);
    *(undefined8 *)(this + 0x6d0) = 0;
    if (lVar1 != 0) {
      Path3D::get_curve();
      if (local_40 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_40;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_40);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        Path3D::get_curve();
        local_38 = 0;
        local_30 = (undefined1  [16])0x0;
        (**(code **)(*(long *)local_40 + 0xd0))(local_40,CoreStringNames::singleton + 8,0,0);
        if (Variant::needs_deinit[(int)local_38] != '\0') {
          Variant::_clear_internal();
        }
        Ref<Curve3D>::unref((Ref<Curve3D> *)&local_40);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_toggle_closed_curve() */

void Path3DEditorPlugin::_toggle_closed_curve(void)

{
  StringName *pSVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  StringName *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Path3D::get_curve();
  if (local_b0 != (StringName *)0x0) {
    iVar5 = Curve3D::get_point_count();
    if (iVar5 < 2) {
      if (local_b0 != (StringName *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler((Object *)local_b0);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
            Memory::free_static(local_b0,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
      local_a0 = 0;
      local_90 = 0;
      local_98 = "";
      String::parse_latin1((StrRange *)&local_a0);
      local_98 = "Toggle Open/Closed Curve";
      local_a8 = 0;
      local_90 = 0x18;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((String *)&local_98,(String *)&local_a8);
      EditorUndoRedoManager::create_action(pOVar6,(String *)&local_98,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      bVar2 = Curve3D::is_closed();
      StringName::StringName((StringName *)&local_98,"set_closed",false);
      pSVar1 = local_b0;
      Variant::Variant((Variant *)local_78,(bool)(bVar2 ^ 1));
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar1,(Variant **)&local_98,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      bVar3 = (bool)Curve3D::is_closed();
      StringName::StringName((StringName *)&local_98,"set_closed",false);
      Variant::Variant((Variant *)local_78,bVar3);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp(pOVar6,local_b0,(Variant **)&local_98,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
      Ref<Curve3D>::unref((Ref<Curve3D> *)&local_b0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::edit(Object*) */

void __thiscall Path3DEditorPlugin::edit(Path3DEditorPlugin *this,Object *param_1)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    lVar3 = *(long *)(this + 0x6d0);
    *(undefined8 *)(this + 0x6d0) = 0;
    if (lVar3 != 0) {
      Path3D::get_curve();
      local_38 = 0;
      local_30 = (undefined1  [16])0x0;
      (**(code **)(*(long *)local_40 + 0xd0))(local_40,CoreStringNames::singleton + 8,0,0);
      if (Variant::needs_deinit[(int)local_38] != '\0') {
        Variant::_clear_internal();
      }
      Ref<Curve3D>::unref((Ref<Curve3D> *)&local_40);
    }
  }
  else {
    lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&Path3D::typeinfo,0);
    *(long *)(this + 0x6d0) = lVar3;
    if (lVar3 != 0) {
      Path3D::get_curve();
      if (local_40 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar1 = local_40;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_40);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        Path3D::get_curve();
        local_38 = 0;
        local_30 = (undefined1  [16])0x0;
        (**(code **)(*(long *)local_40 + 0xd0))(local_40,CoreStringNames::singleton + 8,0,0);
        if (Variant::needs_deinit[(int)local_38] != '\0') {
          Variant::_clear_internal();
        }
        Ref<Curve3D>::unref((Ref<Curve3D> *)&local_40);
      }
      _update_toolbar(this);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorPlugin::update_overlays();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmoPlugin::commit_subgizmos(EditorNode3DGizmo const*, Vector<int> const&,
   Vector<Transform3D> const&, bool) */

void __thiscall
Path3DGizmoPlugin::commit_subgizmos
          (Path3DGizmoPlugin *this,EditorNode3DGizmo *param_1,Vector *param_2,Vector *param_3,
          bool param_4)

{
  Variant *pVVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  StringName *pSVar6;
  long lVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [12];
  StringName *local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x1f0) == 0) ||
     (lVar7 = __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&Path3D::typeinfo,0),
     lVar7 == 0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("commit_subgizmos","editor/plugins/path_3d_editor_plugin.cpp",0x45d,
                       "Parameter \"path\" is null.",0,0);
      return;
    }
    goto LAB_001060a9;
  }
  Path3D::get_curve();
  if (local_130 == (StringName *)0x0) {
    _err_print_error("commit_subgizmos","editor/plugins/path_3d_editor_plugin.cpp",0x45f,
                     "Condition \"curve.is_null()\" is true.",0,0);
LAB_00105c95:
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_130);
  }
  else {
    if ((*(long *)(this + 0x460) != 0) && (*(int *)(this + 0x484) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x480) * 4);
      if (uVar2 != 0) {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x468) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x468) + lVar7) = 0;
            Memory::free_static(*(void **)(*(long *)(this + 0x460) + lVar7 * 2),false);
            *(undefined8 *)(*(long *)(this + 0x460) + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
      }
      *(undefined4 *)(this + 0x484) = 0;
      *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
    }
    if (param_4) {
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        lVar9 = 0;
        do {
          auVar5._8_4_ = local_104._8_4_;
          auVar5._0_8_ = local_104._0_8_;
          auVar12._8_4_ = local_110._8_4_;
          auVar12._0_8_ = local_110._0_8_;
          if (*(long *)(lVar7 + -8) <= lVar9) break;
          if (*(long *)(param_3 + 8) == 0) {
            lVar10 = 0;
            local_110 = auVar12;
            local_104 = auVar5;
            goto LAB_00105c45;
          }
          lVar10 = *(long *)(*(long *)(param_3 + 8) + -8);
          if (lVar10 <= lVar9) goto LAB_00105c45;
          lVar10 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          Curve3D::set_point_position((int)local_130,(Vector3 *)(ulong)*(uint *)(lVar7 + lVar10));
          lVar7 = *(long *)(param_2 + 8);
        } while (lVar7 != 0);
      }
      goto LAB_00105c95;
    }
    pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
    local_120 = 0;
    String::parse_latin1((String *)&local_120,"");
    local_128 = 0;
    String::parse_latin1((String *)&local_128,"Set Curve Point Position");
    TTR((String *)&local_118,(String *)&local_128);
    EditorUndoRedoManager::create_action(pOVar8,(String *)&local_118,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    lVar7 = *(long *)(param_2 + 8);
    if (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(lVar7 + -8) <= lVar9) break;
        iVar3 = *(int *)(lVar7 + lVar9 * 4);
        auVar12 = Curve3D::get_point_position((int)local_130);
        local_110 = auVar12;
        StringName::StringName((StringName *)&local_118,"set_point_position",false);
        pSVar6 = local_130;
        local_104 = local_110;
        Variant::Variant((Variant *)&local_d8,iVar3);
        Variant::Variant(local_c0,local_104);
        local_a0 = (undefined1  [16])0x0;
        pVVar11 = local_90;
        local_a8 = 0;
        local_f8 = (Variant *)&local_d8;
        pVStack_f0 = local_c0;
        EditorUndoRedoManager::add_do_methodp(pOVar8,pSVar6,(Variant **)&local_118,(int)&local_f8);
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)&local_d8);
        if ((StringName::configured != '\0') && (local_118 != 0)) {
          StringName::unref();
        }
        lVar7 = *(long *)(param_3 + 8);
        if (lVar7 == 0) {
          lVar10 = 0;
LAB_00105c45:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar10 = *(long *)(lVar7 + -8);
        if (lVar10 <= lVar9) goto LAB_00105c45;
        lVar7 = lVar7 + lVar9 * 0x30;
        StringName::StringName((StringName *)&local_118,"set_point_position",false);
        pSVar6 = local_130;
        local_f8 = *(Variant **)(lVar7 + 0x24);
        pVVar11 = (Variant *)local_40;
        pVStack_f0 = (Variant *)CONCAT44(pVStack_f0._4_4_,*(undefined4 *)(lVar7 + 0x2c));
        Variant::Variant(local_88,iVar3);
        Variant::Variant(local_70,(Vector3 *)&local_f8);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_d8 = local_88;
        pVStack_d0 = local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar8,pSVar6,(Variant **)&local_118,(int)(Variant *)&local_d8);
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != local_88);
        if ((StringName::configured != '\0') && (local_118 != 0)) {
          StringName::unref();
        }
        lVar9 = lVar9 + 1;
        lVar7 = *(long *)(param_2 + 8);
      } while (lVar7 != 0);
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_130);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001060a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall Path3DGizmoPlugin::redraw(Path3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  EditorNode3DGizmo *pEVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  Ref *pRVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined4 local_c8;
  undefined4 uStack_bc;
  Ref<Curve3D> local_b8 [8];
  Ref *local_b0;
  Ref *local_a8;
  Ref *local_a0;
  Ref *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  EditorNode3DGizmo *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x1f0) == 0) ||
     (lVar6 = __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&Path3D::typeinfo,0),
     lVar6 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("redraw","editor/plugins/path_3d_editor_plugin.cpp",0x3d8,
                       "Parameter \"path\" is null.",0,0);
      return;
    }
  }
  else {
    Path3D::get_curve();
    local_78 = param_1;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      local_78 = (EditorNode3DGizmo *)0x0;
    }
    local_88 = 0;
    local_68 = "handles";
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_88);
    EditorNode3DGizmoPlugin::get_material((String *)&local_b0,(Ref *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_78 != (EditorNode3DGizmo *)0x0) &&
        (cVar4 = RefCounted::unreference(), pEVar3 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_78 = param_1;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      local_78 = (EditorNode3DGizmo *)0x0;
    }
    local_88 = 0;
    local_68 = "first_pt_handle";
    local_60 = 0xf;
    String::parse_latin1((StrRange *)&local_88);
    EditorNode3DGizmoPlugin::get_material((String *)&local_a8,(Ref *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_78 != (EditorNode3DGizmo *)0x0) &&
        (cVar4 = RefCounted::unreference(), pEVar3 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_78 = param_1;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      local_78 = (EditorNode3DGizmo *)0x0;
    }
    local_88 = 0;
    local_68 = "last_pt_handle";
    local_60 = 0xe;
    String::parse_latin1((StrRange *)&local_88);
    EditorNode3DGizmoPlugin::get_material((String *)&local_a0,(Ref *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_78 != (EditorNode3DGizmo *)0x0) &&
        (cVar4 = RefCounted::unreference(), pEVar3 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_78 = param_1;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      local_78 = (EditorNode3DGizmo *)0x0;
    }
    local_88 = 0;
    local_68 = "closed_pt_handle";
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_88);
    EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_78 != (EditorNode3DGizmo *)0x0) &&
        (cVar4 = RefCounted::unreference(), pEVar3 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pEVar3 + 0x140))(pEVar3);
      Memory::free_static(pEVar3,false);
    }
    local_58 = __LC165;
    uStack_50 = _UNK_001189f8;
    BaseMaterial3D::set_albedo(local_a8);
    local_58 = __LC166;
    uStack_50 = _UNK_00118a08;
    BaseMaterial3D::set_albedo(local_a0);
    local_58 = __LC167;
    uStack_50 = _UNK_00118a18;
    BaseMaterial3D::set_albedo(local_98);
    local_80 = (undefined8 *)0x0;
    cVar4 = BaseButton::is_pressed();
    if (cVar4 != '\0') {
      for (iVar8 = 0; iVar5 = Curve3D::get_point_count(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
        auVar10 = Curve3D::get_point_position(local_b8._0_4_);
        local_58 = auVar10._0_8_;
        uStack_50 = CONCAT44(uStack_50._4_4_,auVar10._8_4_);
        Vector<Vector3>::push_back(local_58,auVar10._8_8_ & 0xffffffff,(StrRange *)&local_88);
      }
    }
    if ((local_80 != (undefined8 *)0x0) && (lVar6 = local_80[-1], lVar6 != 0)) {
      local_70 = 0;
      if (lVar6 < 1) {
        lVar7 = 0;
        goto LAB_00106830;
      }
      Vector<Vector3>::push_back(*local_80,*(undefined4 *)(local_80 + 1),&local_78);
      if ((int)lVar6 < 2) {
        uStack_bc = _LC32;
      }
      else {
        local_60 = 0;
        if (local_80 == (undefined8 *)0x0) {
          lVar6 = 0;
          lVar7 = -1;
LAB_00106830:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar6 = local_80[-1];
        lVar7 = lVar6 + -1;
        if (lVar7 < 0) goto LAB_00106830;
        puVar1 = (undefined8 *)((long)local_80 + lVar7 * 0xc);
        Vector<Vector3>::push_back(*puVar1,*(undefined4 *)(puVar1 + 1),(Ref<Material> *)&local_68);
        if (local_80 == (undefined8 *)0x0) {
          lVar6 = -1;
        }
        else {
          lVar6 = local_80[-1] + -1;
        }
        Vector<Vector3>::remove_at((Vector<Vector3> *)&local_88,lVar6);
        cVar4 = Curve3D::is_closed();
        pRVar9 = local_b0;
        if (cVar4 == '\0') {
          pRVar9 = local_a0;
        }
        uStack_50 = CONCAT44(_LC32,_LC32);
        local_58 = CONCAT44(_LC32,_LC32);
        local_c8 = _LC32;
        local_90 = 0;
        Ref<Material>::operator=((Ref<Material> *)&local_90,pRVar9);
        EditorNode3DGizmo::add_vertices
                  (param_1,(Ref<Material> *)&local_68,(Ref<Material> *)&local_90,0,0,&local_58);
        Ref<Material>::unref((Ref<Material> *)&local_90);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_60);
        uStack_bc = local_c8;
      }
      Vector<Vector3>::remove_at((Vector<Vector3> *)&local_88,0);
      cVar4 = Curve3D::is_closed();
      if (cVar4 != '\0') {
        local_a8 = local_98;
      }
      uStack_50 = CONCAT44(uStack_bc,uStack_bc);
      local_58 = CONCAT44(uStack_bc,uStack_bc);
      local_68 = (char *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_68,local_a8);
      EditorNode3DGizmo::add_vertices(param_1,&local_78,(Ref<Material> *)&local_68,0,0,&local_58);
      Ref<Material>::unref((Ref<Material> *)&local_68);
      if (local_80 != (undefined8 *)0x0) {
        local_58 = CONCAT44(uStack_bc,uStack_bc);
        uStack_50 = CONCAT44(uStack_bc,uStack_bc);
        local_68 = (char *)0x0;
        Ref<Material>::operator=((Ref<Material> *)&local_68,local_b0);
        EditorNode3DGizmo::add_vertices
                  (param_1,(StrRange *)&local_88,(Ref<Material> *)&local_68,0,0,&local_58);
        Ref<Material>::unref((Ref<Material> *)&local_68);
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_70);
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_98);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_a0);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_a8);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_b0);
    Ref<Curve3D>::unref(local_b8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DGizmo::set_handle(int, bool, Camera3D*, Vector2 const&) */

void Path3DGizmo::set_handle(int param_1,bool param_2,Camera3D *param_3,Vector2 *param_4)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  undefined7 in_register_00000031;
  undefined4 in_register_0000003c;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar14 [16];
  undefined8 uVar13;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  long local_158;
  undefined8 local_150;
  undefined8 local_144;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float local_f8;
  uint local_f4;
  float local_ec;
  uint local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  long local_40;
  
  lVar8 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Path3D::get_curve();
  if (local_158 == 0) {
LAB_00106b10:
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_158);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  local_150 = (**(code **)(*(long *)param_4 + 0x208))(param_4);
  local_144 = (**(code **)(*(long *)param_4 + 0x200))(param_4);
  fVar17 = *(float *)(lVar8 + 0x330);
  fVar26 = *(float *)(lVar8 + 0x334);
  fVar1 = *(float *)(lVar8 + 0x338);
  fVar19 = local_bc * fVar26 + local_c0 * fVar17 + local_b8 * fVar1 + local_ac;
  fVar10 = local_c4 * fVar1 + local_cc * fVar17 + local_c8 * fVar26 + local_b0;
  fVar17 = fVar17 * local_d8 + fVar26 * local_d4 + fVar1 * local_d0 + local_b4;
  Node3D::get_transform();
  fStack_10c = fVar10 * local_64 + fVar17 * fStack_70 + fVar19 * local_58;
  local_118 = fStack_70;
  fStack_114 = local_64;
  fStack_110 = local_58;
  if ((char)param_3 == '\0') {
    local_108 = 0;
    local_100 = 0.0;
    cVar5 = Plane::intersects_ray((Vector3 *)&local_118,(Vector3 *)&local_150,(Vector3 *)&local_144)
    ;
    if (cVar5 != '\0') {
      if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01))
      {
        fVar17 = (float)Node3DEditor::get_translate_snap();
        Vector3::snapf(fVar17);
      }
      fVar17 = (float)local_108;
      fVar26 = (float)(local_108 >> 0x20);
      fStack_70 = local_90 * fVar17 + local_8c * fVar26 + local_88 * local_100 + local_7c;
      local_78 = CONCAT44(local_98 * fVar26 + fVar17 * fStack_9c + fStack_94 * local_100 + fStack_80
                          ,fStack_a4 * fVar26 + fVar17 * local_a8 + local_a0 * local_100 + local_84)
      ;
      Curve3D::set_point_position
                ((int)local_158,(Vector3 *)(CONCAT71(in_register_00000031,param_2) & 0xffffffff));
    }
    goto LAB_00106b10;
  }
  lVar6 = (long)(int)CONCAT71(in_register_00000031,param_2);
  lVar2 = *(long *)(lVar8 + 0x350);
  if (lVar6 < 0) {
    if (lVar2 != 0) {
      lVar9 = *(long *)(lVar2 + -8);
      goto LAB_0010723d;
    }
  }
  else if (lVar2 != 0) {
    lVar9 = *(long *)(lVar2 + -8);
    if (lVar6 < lVar9) {
      uVar3 = *(ulong *)(lVar2 + lVar6 * 8);
      uVar7 = (uint)(uVar3 >> 0x20);
      if (uVar7 < 2) {
        fVar17 = fStack_70;
        local_138 = Curve3D::get_point_position((int)local_158);
        local_128 = 0;
        local_120 = 0.0;
        local_130 = fVar17;
        cVar5 = Plane::intersects_ray
                          ((Vector3 *)&local_118,(Vector3 *)&local_150,(Vector3 *)&local_144);
        if (cVar5 != '\0') {
          if (*(char *)(Path3DEditorPlugin::singleton + 0x6d8) == '\0') {
            uVar13 = Curve3D::get_point_in((int)local_158);
            local_78._0_4_ = (float)uVar13;
            local_78._4_4_ = (float)((ulong)uVar13 >> 0x20);
            fVar17 = fVar17 * fVar17;
            *(float *)(lVar8 + 0x33c) =
                 SQRT((float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_ + fVar17);
            local_78 = uVar13;
            uVar13 = Curve3D::get_point_out((int)local_158);
            lVar2 = Path3DEditorPlugin::singleton;
            local_78._0_4_ = (float)uVar13;
            local_78._4_4_ = (float)((ulong)uVar13 >> 0x20);
            *(float *)(lVar8 + 0x340) =
                 SQRT((float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_ +
                      fVar17 * fVar17);
            *(undefined1 *)(lVar2 + 0x6d8) = 1;
            local_78 = uVar13;
            fStack_70 = fVar17;
          }
          fVar17 = (float)local_128;
          fVar26 = (float)((ulong)local_128 >> 0x20);
          local_100 = (local_90 * fVar17 + local_8c * fVar26 + local_88 * local_120 + local_7c) -
                      local_130;
          local_108 = CONCAT44((local_98 * fVar26 + fVar17 * fStack_9c + fStack_94 * local_120 +
                               fStack_80) - (float)((ulong)local_138 >> 0x20),
                               (fStack_a4 * fVar26 + fVar17 * local_a8 + local_a0 * local_120 +
                               local_84) - (float)local_138);
          if (*(char *)(Node3DEditor::singleton + 0xe00) !=
              *(char *)(Node3DEditor::singleton + 0xe01)) {
            fVar17 = (float)Node3DEditor::get_translate_snap();
            Vector3::snapf(fVar17);
          }
          if (uVar7 == 0) {
            Curve3D::set_point_in((int)local_158,(Vector3 *)(uVar3 & 0xffffffff));
            if (*(char *)(Path3DEditorPlugin::singleton + 0x6d9) != '\0') {
              auVar14._8_8_ = 0;
              auVar14._0_8_ = local_108;
              fVar26 = (float)local_108;
              fVar17 = (float)(local_108 >> 0x20);
              if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
                fVar1 = *(float *)(lVar8 + 0x340);
                fVar10 = fVar26 * fVar26 + fVar17 * fVar17 + local_100 * local_100;
                fStack_70 = _LC170;
                fVar17 = (float)_LC169;
                fVar26 = _LC169._4_4_;
                if (fVar10 != 0.0) {
                  fVar10 = SQRT(fVar10);
                  auVar23._4_4_ = fVar10;
                  auVar23._0_4_ = fVar10;
                  auVar23._8_8_ = _LC172;
                  auVar15 = divps(auVar14,auVar23);
                  fStack_70 = (float)((uint)(local_100 / fVar10) ^ (uint)_LC170);
                  fVar17 = (float)(auVar15._0_4_ ^ (uint)(float)_LC169);
                  fVar26 = (float)(auVar15._4_4_ ^ (uint)_LC169._4_4_);
                }
                local_78 = CONCAT44(fVar26 * fVar1,fVar17 * fVar1);
                fStack_70 = fStack_70 * fVar1;
              }
              else {
                fStack_70 = (float)((uint)local_100 ^ (uint)_LC170);
                local_78 = CONCAT44((uint)fVar17 ^ (uint)_LC169._4_4_,
                                    (uint)fVar26 ^ (uint)(float)_LC169);
              }
              Curve3D::set_point_out((int)local_158,(Vector3 *)(uVar3 & 0xffffffff));
            }
          }
          else {
            Curve3D::set_point_out((int)local_158,(Vector3 *)(uVar3 & 0xffffffff));
            if (*(char *)(Path3DEditorPlugin::singleton + 0x6d9) != '\0') {
              auVar15._8_8_ = 0;
              auVar15._0_8_ = local_108;
              fVar26 = (float)local_108;
              fVar17 = (float)(local_108 >> 0x20);
              if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
                fVar1 = *(float *)(lVar8 + 0x33c);
                fVar10 = fVar26 * fVar26 + fVar17 * fVar17 + local_100 * local_100;
                fStack_70 = _LC170;
                fVar17 = (float)_LC169;
                fVar26 = _LC169._4_4_;
                if (fVar10 != 0.0) {
                  fVar10 = SQRT(fVar10);
                  auVar22._4_4_ = fVar10;
                  auVar22._0_4_ = fVar10;
                  auVar22._8_8_ = _LC172;
                  auVar15 = divps(auVar15,auVar22);
                  fStack_70 = (float)((uint)(local_100 / fVar10) ^ (uint)_LC170);
                  fVar17 = (float)(auVar15._0_4_ ^ (uint)(float)_LC169);
                  fVar26 = (float)(auVar15._4_4_ ^ (uint)_LC169._4_4_);
                }
                local_78 = CONCAT44(fVar26 * fVar1,fVar17 * fVar1);
                fStack_70 = fStack_70 * fVar1;
              }
              else {
                fStack_70 = (float)((uint)local_100 ^ (uint)_LC170);
                local_78 = CONCAT44((uint)fVar17 ^ (uint)_LC169._4_4_,
                                    (uint)fVar26 ^ (uint)(float)_LC169);
              }
              Curve3D::set_point_in((int)local_158,(Vector3 *)(uVar3 & 0xffffffff));
            }
          }
        }
      }
      else if (uVar7 == 2) {
        fVar17 = fStack_70;
        local_138 = Curve3D::get_point_position((int)local_158);
        local_130 = fVar17;
        Curve3D::get_point_baked_posture((int)&local_108,SUB41((int)local_158,0));
        fVar26 = local_138._4_4_;
        fVar18 = (float)((uint)local_100 ^ (uint)_LC170);
        fVar21 = (float)(local_f4 ^ (uint)_LC170);
        fVar20 = (float)(local_e8 ^ (uint)_LC170);
        fVar1 = local_108._4_4_;
        fVar17 = (float)local_138;
        fVar19 = (float)local_138 * fVar18 + local_138._4_4_ * fVar21 + local_130 * fVar20;
        Basis::inverse();
        Basis::transpose();
        fVar24 = fVar19 * fVar21;
        fVar11 = fVar19 * fVar18;
        fVar19 = fVar19 * fVar20;
        fVar25 = local_60 * fVar18 + local_5c * fVar21 + local_58 * fVar20;
        fVar10 = fStack_6c * fVar18 + local_68 * fVar21 + local_64 * fVar20;
        fVar16 = (float)local_78 * fVar18 + local_78._4_4_ * fVar21 + fStack_70 * fVar20;
        fStack_70 = fVar16 * fVar16 + fVar10 * fVar10 + fVar25 * fVar25;
        if (fStack_70 == 0.0) {
          fStack_70 = 0.0;
          fVar16 = 0.0;
          fVar10 = fVar16;
        }
        else {
          fStack_70 = SQRT(fStack_70);
          fVar16 = fVar16 / fStack_70;
          fVar10 = fVar10 / fStack_70;
          fStack_70 = fVar25 / fStack_70;
        }
        local_128 = 0;
        local_120 = 0.0;
        fStack_6c = (fVar11 * local_d8 + fVar24 * local_d4 + fVar19 * local_d0 + local_b4) * fVar16
                    + (local_cc * fVar11 + local_c8 * fVar24 + local_c4 * fVar19 + local_b0) *
                      fVar10 +
                    (local_c0 * fVar11 + local_bc * fVar24 + local_b8 * fVar19 + local_ac) *
                    fStack_70;
        local_78 = CONCAT44(fVar10,fVar16);
        cVar5 = Plane::intersects_ray
                          ((Vector3 *)&local_78,(Vector3 *)&local_150,(Vector3 *)&local_144);
        if (cVar5 != '\0') {
          local_130 = (local_90 * (float)local_128 + local_8c * local_128._4_4_ +
                       local_88 * local_120 + local_7c) - local_130;
          fVar26 = (fStack_9c * (float)local_128 + local_98 * local_128._4_4_ +
                    fStack_94 * local_120 + fStack_80) - fVar26;
          fVar17 = (local_120 * local_a0 + (float)local_128 * local_a8 + local_128._4_4_ * fStack_a4
                   + local_84) - fVar17;
          fVar10 = fVar1 * fVar26 - local_f8 * fVar17;
          fVar19 = local_ec * fVar17 - fVar1 * local_130;
          fVar11 = local_f8 * local_130 - local_ec * fVar26;
          fVar17 = atan2f(SQRT(fVar11 * fVar11 + fVar19 * fVar19 + fVar10 * fVar10),
                          fVar1 * fVar17 + local_f8 * fVar26 + local_ec * local_130);
          if (fVar18 * fVar11 + fVar21 * fVar19 + fVar20 * fVar10 < 0.0) {
            fVar17 = (float)((uint)fVar17 ^ (uint)_LC170);
          }
          if (*(char *)(Node3DEditor::singleton + 0xe00) !=
              *(char *)(Node3DEditor::singleton + 0xe01)) {
            fVar26 = (float)Node3DEditor::get_rotate_snap();
            dVar12 = (double)Math::snapped((double)(fVar17 * __LC173),(double)fVar26);
            fVar17 = (float)(dVar12 * __LC174);
          }
          Curve3D::set_point_tilt((int)local_158,fVar17);
        }
      }
      goto LAB_00106b10;
    }
    goto LAB_0010723d;
  }
  lVar9 = 0;
LAB_0010723d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* Path3DGizmo::commit_handle(int, bool, Variant const&, bool) */

void __thiscall
Path3DGizmo::commit_handle(Path3DGizmo *this,int param_1,bool param_2,Variant *param_3,bool param_4)

{
  Variant *pVVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  StringName *pSVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  Variant *pVVar9;
  long lVar10;
  Vector3 *pVVar11;
  int iVar12;
  long lVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_02;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [12];
  StringName *local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [12];
  undefined1 local_b8 [12];
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined1 local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_01;
  
  pVVar11 = (Vector3 *)(ulong)(uint)param_1;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Path3D::get_curve();
  if (local_118 == (StringName *)0x0) goto LAB_00107b84;
  pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
  if ((!param_2) && (cVar6 = BaseButton::is_pressed(), cVar6 == '\0')) {
    if (param_4) {
      local_88._0_12_ = Variant::operator_cast_to_Vector3(param_3);
      Curve3D::set_point_position((int)local_118,pVVar11);
      goto LAB_00107b84;
    }
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"");
    local_110 = 0;
    String::parse_latin1((String *)&local_110,"Set Curve Point Position");
    TTR((String *)&local_100,(String *)&local_110);
    EditorUndoRedoManager::create_action(pOVar8,(String *)&local_100,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    local_c8 = Curve3D::get_point_position((int)local_118);
    StringName::StringName((StringName *)&local_100,"set_point_position",false);
    EditorUndoRedoManager::add_do_method<int,Vector3>
              (local_c8._0_8_,local_c8._8_4_,pOVar8,local_118,(String *)&local_100,pVVar11);
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)local_88,param_3);
    StringName::StringName((StringName *)&local_100,"set_point_position",false);
    EditorUndoRedoManager::add_undo_method<int,Variant>
              ((EditorUndoRedoManager *)pOVar8,local_118,(String *)&local_100,pVVar11,
               (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    cVar6 = Variant::needs_deinit[(int)local_88._0_4_];
joined_r0x0010806d:
    if (cVar6 != '\0') {
      Variant::_clear_internal();
    }
LAB_00107b77:
    EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
LAB_00107b84:
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_118);
    if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar10 = (long)param_1;
  lVar2 = *(long *)(this + 0x350);
  if (lVar10 < 0) {
    if (lVar2 != 0) {
      lVar13 = *(long *)(lVar2 + -8);
      goto LAB_00107eed;
    }
  }
  else if (lVar2 != 0) {
    lVar13 = *(long *)(lVar2 + -8);
    if (lVar13 <= lVar10) goto LAB_00107eed;
    uVar3 = *(ulong *)(lVar2 + lVar10 * 8);
    pVVar11 = (Vector3 *)(uVar3 & 0xffffffff);
    iVar7 = (int)(uVar3 >> 0x20);
    iVar12 = (int)local_118;
    if (iVar7 == 1) {
      if (param_4) {
        local_88._0_12_ = Variant::operator_cast_to_Vector3(param_3);
        Curve3D::set_point_out(iVar12,pVVar11);
        goto LAB_00107b84;
      }
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"");
      local_110 = 0;
      String::parse_latin1((String *)&local_110,"Set Curve Out Position");
      TTR((String *)&local_100,(String *)&local_110);
      EditorUndoRedoManager::create_action(pOVar8,(String *)&local_100,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      local_b8 = Curve3D::get_point_out((int)local_118);
      StringName::StringName((StringName *)&local_100,"set_point_out",false);
      EditorUndoRedoManager::add_do_method<int,Vector3>
                (local_b8._0_8_,local_b8._8_4_,pOVar8,local_118,(String *)&local_100,pVVar11);
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_88,param_3);
      StringName::StringName((StringName *)&local_100,"set_point_out",false);
      EditorUndoRedoManager::add_undo_method<int,Variant>
                ((EditorUndoRedoManager *)pOVar8,local_118,(String *)&local_100,pVVar11,
                 (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if (*(char *)(Path3DEditorPlugin::singleton + 0x6d9) != '\0') {
        if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
          fVar14 = *(float *)(this + 0x33c);
          local_88._0_12_ = Curve3D::get_point_out((int)local_118);
          fVar15 = SUB124(local_88._0_12_,8);
          auVar23._0_8_ = SUB128(local_88._0_12_,0);
          auVar23._8_8_ = extraout_XMM0_Qb_02;
          fVar19 = SUB124(local_88._0_12_,0) * SUB124(local_88._0_12_,0) +
                   SUB124(local_88._0_12_,4) * SUB124(local_88._0_12_,4) + fVar15 * fVar15;
          uVar16 = _LC169;
          local_f0 = _LC170;
          if (fVar19 != 0.0) {
            fVar19 = SQRT(fVar19);
            auVar25._4_4_ = fVar19;
            auVar25._0_4_ = fVar19;
            auVar25._8_8_ = _LC172;
            auVar23 = divps(auVar23,auVar25);
            uVar16 = CONCAT44(auVar23._4_4_ ^ (uint)((ulong)_LC169 >> 0x20),
                              auVar23._0_4_ ^ (uint)_LC169);
            local_f0 = (float)((uint)(fVar15 / fVar19) ^ (uint)_LC170);
          }
          local_f0 = fVar14 * local_f0;
          local_f8 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar14,(float)uVar16 * fVar14);
        }
        else {
          auVar27 = Curve3D::get_point_out((int)local_118);
          local_a8 = auVar27._0_8_;
          pVStack_a0 = (Variant *)CONCAT44(pVStack_a0._4_4_,auVar27._8_4_);
          local_f0 = (float)(auVar27._8_4_ ^ (uint)_LC170);
          local_f8 = CONCAT44(auVar27._4_4_ ^ (uint)((ulong)_LC169 >> 0x20),
                              auVar27._0_4_ ^ (uint)_LC169);
        }
        uVar16 = _LC169;
        StringName::StringName((StringName *)&local_100,"set_point_in",false);
        EditorUndoRedoManager::add_do_method<int,Vector3>
                  (local_f8,local_f0,pOVar8,local_118,(String *)&local_100,pVVar11);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        uVar26 = (uint)((ulong)uVar16 >> 0x20);
        if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
          fVar14 = *(float *)(this + 0x33c);
          auVar27 = Variant::operator_cast_to_Vector3(param_3);
          fVar15 = auVar27._8_4_;
          auVar18._0_8_ = auVar27._0_8_;
          auVar18._8_8_ = extraout_XMM0_Qb_01;
          fVar19 = auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_ + fVar15 * fVar15;
          local_e0 = _LC170;
          if (fVar19 != 0.0) {
            fVar19 = SQRT(fVar19);
            auVar22._4_4_ = fVar19;
            auVar22._0_4_ = fVar19;
            auVar22._8_8_ = _LC172;
            auVar23 = divps(auVar18,auVar22);
            uVar16 = CONCAT44(auVar23._4_4_ ^ uVar26,auVar23._0_4_ ^ (uint)uVar16);
            local_e0 = (float)((uint)(fVar15 / fVar19) ^ (uint)_LC170);
          }
          local_e0 = fVar14 * local_e0;
          local_e8 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar14,(float)uVar16 * fVar14);
        }
        else {
          auVar27 = Variant::operator_cast_to_Vector3(param_3);
          local_a8 = auVar27._0_8_;
          pVStack_a0 = (Variant *)CONCAT44(pVStack_a0._4_4_,auVar27._8_4_);
          local_e0 = (float)(auVar27._8_4_ ^ (uint)_LC170);
          local_e8 = CONCAT44(auVar27._4_4_ ^ uVar26,auVar27._0_4_ ^ (uint)uVar16);
          auVar27 = local_88._0_12_;
        }
        local_88._0_12_ = auVar27;
        StringName::StringName((StringName *)&local_100,"set_point_in",false);
        uVar16 = local_e8;
        fVar14 = local_e0;
LAB_00107ea7:
        EditorUndoRedoManager::add_undo_method<int,Vector3>
                  (uVar16,fVar14,pOVar8,local_118,&local_100,pVVar11);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
    }
    else {
      if (iVar7 == 2) {
        if (param_4) {
          fVar14 = Variant::operator_cast_to_float(param_3);
          Curve3D::set_point_tilt(iVar12,fVar14);
          goto LAB_00107b84;
        }
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"");
        local_110 = 0;
        String::parse_latin1((String *)&local_110,"Set Curve Point Tilt");
        TTR((String *)&local_100,(String *)&local_110);
        EditorUndoRedoManager::create_action(pOVar8,(String *)&local_100,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        fVar14 = (float)Curve3D::get_point_tilt((int)local_118);
        StringName::StringName((StringName *)&local_100,"set_point_tilt",false);
        pSVar5 = local_118;
        Variant::Variant((Variant *)local_88,(int)uVar3);
        Variant::Variant(local_70,fVar14);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = local_70;
        EditorUndoRedoManager::add_do_methodp(pOVar8,pSVar5,(Variant **)&local_100,(int)&local_a8);
        pVVar9 = (Variant *)local_40;
        do {
          pVVar1 = pVVar9 + -0x18;
          pVVar9 = pVVar9 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar9 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_88,param_3);
        StringName::StringName((StringName *)&local_100,"set_point_tilt",false);
        EditorUndoRedoManager::add_undo_method<int,Variant>
                  ((EditorUndoRedoManager *)pOVar8,local_118,(String *)&local_100,pVVar11,
                   (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        cVar6 = Variant::needs_deinit[(int)local_88._0_4_];
        goto joined_r0x0010806d;
      }
      if (iVar7 != 0) goto LAB_00107b84;
      if (param_4) {
        local_88._0_12_ = Variant::operator_cast_to_Vector3(param_3);
        Curve3D::set_point_in(iVar12,pVVar11);
        goto LAB_00107b84;
      }
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"");
      local_110 = 0;
      String::parse_latin1((String *)&local_110,"Set Curve In Position");
      TTR((String *)&local_100,(String *)&local_110);
      EditorUndoRedoManager::create_action(pOVar8,(String *)&local_100,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      auVar27 = Curve3D::get_point_in((int)local_118);
      local_a8 = auVar27._0_8_;
      pVStack_a0 = (Variant *)CONCAT44(pVStack_a0._4_4_,auVar27._8_4_);
      StringName::StringName((StringName *)&local_100,"set_point_in",false);
      EditorUndoRedoManager::add_do_method<int,Vector3>
                (local_a8,(ulong)pVStack_a0 & 0xffffffff,pOVar8,local_118,(String *)&local_100,
                 pVVar11);
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_88,param_3);
      StringName::StringName((StringName *)&local_100,"set_point_in",false);
      EditorUndoRedoManager::add_undo_method<int,Variant>
                ((EditorUndoRedoManager *)pOVar8,local_118,(String *)&local_100,pVVar11,
                 (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if (*(char *)(Path3DEditorPlugin::singleton + 0x6d9) != '\0') {
        if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
          fVar14 = *(float *)(this + 0x340);
          local_88._0_12_ = Curve3D::get_point_in((int)local_118);
          fVar15 = SUB124(local_88._0_12_,8);
          auVar17._0_8_ = SUB128(local_88._0_12_,0);
          auVar17._8_8_ = extraout_XMM0_Qb;
          fVar19 = SUB124(local_88._0_12_,0) * SUB124(local_88._0_12_,0) +
                   SUB124(local_88._0_12_,4) * SUB124(local_88._0_12_,4) + fVar15 * fVar15;
          uVar16 = _LC169;
          local_d0 = _LC170;
          if (fVar19 != 0.0) {
            fVar19 = SQRT(fVar19);
            auVar24._4_4_ = fVar19;
            auVar24._0_4_ = fVar19;
            auVar24._8_8_ = _LC172;
            auVar23 = divps(auVar17,auVar24);
            uVar16 = CONCAT44(auVar23._4_4_ ^ (uint)((ulong)_LC169 >> 0x20),
                              auVar23._0_4_ ^ (uint)_LC169);
            local_d0 = (float)((uint)(fVar15 / fVar19) ^ (uint)_LC170);
          }
          local_d0 = fVar14 * local_d0;
          local_d8 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar14,(float)uVar16 * fVar14);
        }
        else {
          local_b8 = Curve3D::get_point_in((int)local_118);
          local_d0 = (float)(local_b8._8_4_ ^ (uint)_LC170);
          local_d8 = CONCAT44(local_b8._4_4_ ^ (uint)((ulong)_LC169 >> 0x20),
                              local_b8._0_4_ ^ (uint)_LC169);
        }
        uVar16 = _LC169;
        StringName::StringName((StringName *)&local_100,"set_point_out",false);
        EditorUndoRedoManager::add_do_method<int,Vector3>
                  (local_d8,local_d0,pOVar8,local_118,(String *)&local_100,pVVar11);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        uVar26 = (uint)((ulong)uVar16 >> 0x20);
        if (*(char *)(Path3DEditorPlugin::singleton + 0x6da) == '\0') {
          fVar14 = *(float *)(this + 0x340);
          auVar27 = Variant::operator_cast_to_Vector3(param_3);
          fVar19 = auVar27._8_4_;
          auVar21._8_4_ = (int)extraout_XMM0_Qb_00;
          auVar21._0_8_ = auVar27._0_8_;
          auVar21._12_4_ = (int)((ulong)extraout_XMM0_Qb_00 >> 0x20);
          fVar15 = auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_ + fVar19 * fVar19;
          local_88._8_4_ = _LC170;
          if (fVar15 != 0.0) {
            fVar15 = SQRT(fVar15);
            auVar20._4_4_ = fVar15;
            auVar20._0_4_ = fVar15;
            auVar20._8_8_ = _LC172;
            auVar23 = divps(auVar21,auVar20);
            uVar16 = CONCAT44(auVar23._4_4_ ^ uVar26,auVar23._0_4_ ^ (uint)uVar16);
            local_88._8_4_ = (uint)(fVar19 / fVar15) ^ (uint)_LC170;
          }
          local_88._8_4_ = (float)local_88._8_4_ * fVar14;
          local_88._0_8_ = CONCAT44(fVar14 * (float)((ulong)uVar16 >> 0x20),fVar14 * (float)uVar16);
        }
        else {
          local_c8 = Variant::operator_cast_to_Vector3(param_3);
          local_88._8_4_ = local_c8._8_4_ ^ (uint)_LC170;
          local_88._0_8_ = CONCAT44(local_c8._4_4_ ^ uVar26,local_c8._0_4_ ^ (uint)uVar16);
          auVar27 = local_b8;
        }
        local_b8 = auVar27;
        StringName::StringName((StringName *)&local_100,"set_point_out",false);
        uVar16 = local_88._0_8_;
        fVar14 = (float)local_88._8_4_;
        goto LAB_00107ea7;
      }
    }
    goto LAB_00107b77;
  }
  lVar13 = 0;
LAB_00107eed:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar13,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
Path3DEditorPlugin::forward_3d_gui_input(Path3DEditorPlugin *this,Camera3D *param_1,Ref *param_2)

{
  Variant *pVVar1;
  Vector2 *pVVar2;
  undefined1 auVar3 [12];
  Object *pOVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Object *pOVar10;
  undefined8 *puVar11;
  EditorUndoRedoManager *this_00;
  Object *pOVar12;
  Variant *pVVar13;
  undefined8 uVar14;
  Variant *pVVar15;
  float *pfVar16;
  long in_FS_OFFSET;
  undefined4 uVar17;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  undefined8 local_270;
  int local_25c;
  float local_234;
  int local_20c;
  Object *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0 [2];
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined1 local_1a8 [8];
  float local_1a0;
  float local_198;
  float fStack_194;
  float local_190;
  undefined1 local_188 [8];
  float local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  float local_150;
  undefined1 local_148 [8];
  Variant *pVStack_140;
  Variant *local_138;
  Variant *pVStack_130;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined1 local_b8 [8];
  float local_b0;
  float local_a8;
  float local_a4;
  int local_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  uVar14 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6d0) == 0) goto LAB_001086ae;
  Path3D::get_curve();
  if (local_1f8 != (Object *)0x0) {
    Node3D::get_global_transform();
    Transform3D::affine_inverse();
    if (((*(long *)param_2 != 0) &&
        (pOVar10 = (Object *)
                   __dynamic_cast(*(long *)param_2,&Object::typeinfo,
                                  &InputEventMouseButton::typeinfo,0), pOVar10 != (Object *)0x0)) &&
       (cVar6 = RefCounted::reference(), cVar6 != '\0')) {
      InputEventMouse::get_position();
      uVar17 = InputEventMouse::get_position();
      local_1c0 = CONCAT44(extraout_XMM0_Db,uVar17);
      puVar11 = (undefined8 *)(Node3DEditor::singleton + 0xa20);
      do {
        pVVar2 = (Vector2 *)*puVar11;
        if (param_1 == *(Camera3D **)(pVVar2 + 0xbf0)) {
          cVar6 = InputEvent::is_pressed();
          if (cVar6 == '\0') {
            this[0x6d8] = (Path3DEditorPlugin)0x0;
          }
          cVar6 = InputEvent::is_pressed();
          if (((cVar6 != '\0') && (iVar7 = InputEventMouseButton::get_button_index(), iVar7 == 1))
             && ((cVar6 = BaseButton::is_pressed(), cVar6 != '\0' ||
                 ((cVar6 = BaseButton::is_pressed(), cVar6 != '\0' &&
                  (cVar6 = InputEventWithModifiers::is_command_or_control_pressed(), cVar6 != '\0'))
                 )))) {
            fVar19 = (float)((ulong)local_e0 >> 0x20);
            Curve3D::tessellate((int)&local_1d8,_LC183);
            fVar18 = (float)((ulong)local_c4 >> 0x20);
            if (local_1d0[0] != 0) {
              local_1a8 = (undefined1  [8])0x0;
              local_1a0 = 0.0;
              iVar7 = (int)*(undefined8 *)(local_1d0[0] + -8);
              if (1 < iVar7) {
                auVar27 = Curve3D::get_point_position((int)local_1f8);
                fVar22 = auVar27._8_4_;
                local_148 = auVar27._0_8_;
                fVar20 = auVar27._0_4_;
                fVar21 = auVar27._4_4_;
                pVStack_140 = (Variant *)CONCAT44(pVStack_140._4_4_,fVar22);
                local_b0 = local_fc * fVar21 + local_100 * fVar20 + local_f8 * fVar22 + local_ec;
                local_b8 = (undefined1  [8])
                           CONCAT44(local_108 * fVar21 + fVar20 * fStack_10c + fStack_104 * fVar22 +
                                    fStack_f0,
                                    fStack_114 * fVar21 + fVar20 * local_118 + local_110 * fVar22 +
                                    local_f4);
                local_158 = (undefined1  [8])Node3DEditorViewport::point_to_screen(pVVar2);
                fVar20 = (float)Vector2::distance_to((Vector2 *)local_158);
                if (fVar20 < _LC184) goto LAB_001099ba;
                iVar8 = 0;
                local_25c = 0;
                local_20c = -1;
                local_234 = _LC182;
                goto LAB_00109025;
              }
            }
            this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
            goto LAB_0010987d;
          }
          cVar6 = InputEvent::is_pressed();
          if (cVar6 == '\0') goto LAB_00108690;
          iVar7 = InputEventMouseButton::get_button_index();
          if ((iVar7 != 1) || (cVar6 = BaseButton::is_pressed(), cVar6 == '\0')) {
            iVar7 = InputEventMouseButton::get_button_index();
            if (iVar7 != 2) goto LAB_00108690;
            cVar6 = BaseButton::is_pressed();
            if (cVar6 == '\0') goto LAB_00108690;
          }
          iVar7 = 0;
          goto LAB_00108d50;
        }
        puVar11 = puVar11 + 1;
      } while ((undefined8 *)(Node3DEditor::singleton + 0xa40) != puVar11);
      _err_print_error("forward_3d_gui_input","editor/plugins/path_3d_editor_plugin.cpp",0x223,
                       "Parameter \"viewport\" is null.",0,0);
      goto LAB_00108690;
    }
    uVar14 = 0;
  }
  goto LAB_001086a4;
LAB_001099ba:
  uVar14 = 0;
LAB_00109571:
  CowData<Vector3>::_unref((CowData<Vector3> *)local_1d0);
  goto LAB_00108692;
LAB_00108d50:
  iVar8 = Curve3D::get_point_count();
  if (iVar8 <= iVar7) goto LAB_00108690;
  auVar27 = Curve3D::get_point_position((int)local_1f8);
  fVar20 = auVar27._8_4_;
  fVar19 = auVar27._0_4_;
  fVar18 = auVar27._4_4_;
  local_b0 = local_100 * fVar19 + local_fc * fVar18 + local_f8 * fVar20 + local_ec;
  local_b8 = (undefined1  [8])
             CONCAT44(local_108 * fVar18 + fVar19 * fStack_10c + fStack_104 * fVar20 + fStack_f0,
                      fStack_114 * fVar18 + fVar19 * local_118 + local_110 * fVar20 + local_f4);
  _local_148 = auVar27;
  local_158 = (undefined1  [8])Node3DEditorViewport::point_to_screen(pVVar2);
  fVar18 = (float)Vector2::distance_to((Vector2 *)local_158);
  _local_b8 = Curve3D::get_point_out((int)local_1f8);
  auVar27 = Curve3D::get_point_position((int)local_1f8);
  local_148._0_4_ = auVar27._0_4_;
  fVar21 = (float)local_148._0_4_ + (float)local_b8._0_4_;
  local_148._4_4_ = auVar27._4_4_;
  fVar20 = (float)local_148._4_4_ + (float)local_b8._4_4_;
  fVar19 = auVar27._8_4_ + local_b0;
  local_150 = local_f8 * fVar19 + local_100 * fVar21 + local_fc * fVar20 + local_ec;
  local_158 = (undefined1  [8])
              CONCAT44(fStack_10c * fVar21 + fVar20 * local_108 + fStack_104 * fVar19 + fStack_f0,
                       local_118 * fVar21 + fVar20 * fStack_114 + local_110 * fVar19 + local_f4);
  _local_148 = auVar27;
  local_168._0_8_ = Node3DEditorViewport::point_to_screen(pVVar2);
  fVar20 = (float)Vector2::distance_to((Vector2 *)local_168);
  auVar27 = Curve3D::get_point_in((int)local_1f8);
  _local_b8 = auVar27;
  auVar27 = Curve3D::get_point_position((int)local_1f8);
  local_148._0_4_ = auVar27._0_4_;
  fVar22 = (float)local_148._0_4_ + (float)local_b8._0_4_;
  local_148._4_4_ = auVar27._4_4_;
  fVar21 = (float)local_148._4_4_ + (float)local_b8._4_4_;
  fVar19 = auVar27._8_4_ + local_b0;
  local_150 = local_f8 * fVar19 + local_100 * fVar22 + local_fc * fVar21 + local_ec;
  local_158 = (undefined1  [8])
              CONCAT44(fStack_10c * fVar22 + fVar21 * local_108 + fStack_104 * fVar19 + fStack_f0,
                       local_118 * fVar22 + fVar21 * fStack_114 + local_110 * fVar19 + local_f4);
  _local_148 = auVar27;
  local_168._0_8_ = Node3DEditorViewport::point_to_screen(pVVar2);
  fVar21 = (float)Vector2::distance_to((Vector2 *)local_168);
  fVar19 = *(float *)(this + 0x6c8);
  Curve3D::get_point_baked_posture((int)(Variant *)local_b8,SUB81(local_1f8,0));
  fVar22 = fStack_9c * fVar19;
  fVar23 = local_a8 * fVar19;
  fVar19 = fVar19 * (float)local_b8._4_4_;
  auVar27 = Curve3D::get_point_position((int)local_1f8);
  local_148._0_4_ = auVar27._0_4_;
  fVar19 = fVar19 + (float)local_148._0_4_;
  pVStack_140 = (Variant *)CONCAT44(pVStack_140._4_4_,auVar27._8_4_);
  local_148._4_4_ = auVar27._4_4_;
  fVar23 = fVar23 + (float)local_148._4_4_;
  fVar22 = fVar22 + auVar27._8_4_;
  local_150 = local_f8 * fVar22 + local_100 * fVar19 + local_fc * fVar23 + local_ec;
  local_158 = (undefined1  [8])
              CONCAT44(fVar19 * fStack_10c + local_108 * fVar23 + fStack_104 * fVar22 + fStack_f0,
                       fVar19 * local_118 + fStack_114 * fVar23 + local_110 * fVar22 + local_f4);
  local_148 = (undefined1  [8])auVar27._0_8_;
  local_168._0_8_ = Node3DEditorViewport::point_to_screen(pVVar2);
  fVar19 = (float)Vector2::distance_to((Vector2 *)local_168);
  if (fVar18 < _LC184) {
    pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
    local_1e0 = 0;
    String::parse_latin1((String *)&local_1e0,"");
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"Remove Path Point");
    TTR((String *)&local_1d8,(String *)&local_1e8);
    EditorUndoRedoManager::create_action(pOVar12,(String *)&local_1d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    StringName::StringName((StringName *)&local_1d8,"remove_point",false);
    pOVar4 = local_1f8;
    Variant::Variant((Variant *)local_b8,iVar7);
    _local_a0 = 0;
    _local_98 = (undefined1  [16])0x0;
    local_148 = (undefined1  [8])local_b8;
    EditorUndoRedoManager::add_do_methodp
              (pOVar12,(StringName *)pOVar4,(Variant **)&local_1d8,(int)local_148);
    if (Variant::needs_deinit[local_a0] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_b8._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    _local_1a8 = Curve3D::get_point_out((int)local_1f8);
    auVar27 = Curve3D::get_point_in((int)local_1f8);
    local_190 = auVar27._8_4_;
    local_198 = auVar27._0_4_;
    fStack_194 = auVar27._4_4_;
    _local_188 = Curve3D::get_point_position((int)local_1f8);
    StringName::StringName((StringName *)&local_1d8,"add_point",false);
    local_168._0_8_ = CONCAT44(fStack_194,local_198);
    local_168._8_4_ = local_190;
    _local_158 = _local_1a8;
    local_178._0_12_ = _local_188;
    Variant::Variant((Variant *)local_b8,local_178);
    Variant::Variant((Variant *)&local_a0,(Vector2 *)local_168);
    Variant::Variant((Variant *)&local_88,(Vector2 *)local_158);
    pVVar15 = (Variant *)local_40;
    Variant::Variant(local_70,iVar7);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_148 = (undefined1  [8])local_b8;
    pVStack_140 = (Variant *)&local_a0;
    local_138 = (Variant *)&local_88;
    pVStack_130 = local_70;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar12,(StringName *)local_1f8,(Variant **)&local_1d8,(int)local_148);
    do {
      pVVar13 = pVVar15 + -0x18;
      pVVar15 = pVVar15 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar15 != (Variant *)local_b8);
LAB_00109e41:
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
LAB_00109b3b:
    uVar14 = 1;
    goto LAB_00108692;
  }
  if (fVar20 < _LC184) {
    uVar14 = EditorUndoRedoManager::get_singleton();
    local_1e0 = 0;
    String::parse_latin1((String *)&local_1e0,"");
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"Reset Out-Control Point");
    TTR((String *)&local_1d8,(String *)&local_1e8);
    EditorUndoRedoManager::create_action(uVar14,(String *)&local_1d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    local_b8 = (undefined1  [8])0x0;
    local_b0 = 0.0;
    StringName::StringName((StringName *)&local_1d8,"set_point_out",false);
    EditorUndoRedoManager::add_do_method<int,Vector3>
              (local_b8,local_b0,uVar14,local_1f8,(String *)&local_1d8,iVar7);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    auVar27 = Curve3D::get_point_out((int)local_1f8);
    local_148 = auVar27._0_8_;
    pVStack_140 = (Variant *)CONCAT44(pVStack_140._4_4_,auVar27._8_4_);
    StringName::StringName((StringName *)&local_1d8,"set_point_out",false);
    auVar3._8_4_ = pVStack_140._0_4_;
    auVar3._0_8_ = local_148;
LAB_00109afd:
    EditorUndoRedoManager::add_undo_method<int,Vector3>
              (auVar3._0_8_,auVar3._8_4_,uVar14,local_1f8,&local_1d8,iVar7);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(uVar14,0));
    goto LAB_00109b3b;
  }
  if (fVar21 < _LC184) {
    uVar14 = EditorUndoRedoManager::get_singleton();
    local_1e0 = 0;
    String::parse_latin1((String *)&local_1e0,"");
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"Reset In-Control Point");
    TTR((String *)&local_1d8,(String *)&local_1e8);
    EditorUndoRedoManager::create_action(uVar14,(String *)&local_1d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    local_b8 = (undefined1  [8])0x0;
    local_b0 = 0.0;
    StringName::StringName((StringName *)&local_1d8,"set_point_in",false);
    EditorUndoRedoManager::add_do_method<int,Vector3>
              (local_b8,local_b0,uVar14,local_1f8,(String *)&local_1d8,iVar7);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    _local_b8 = Curve3D::get_point_in((int)local_1f8);
    StringName::StringName((StringName *)&local_1d8,"set_point_in",false);
    auVar3 = _local_b8;
    goto LAB_00109afd;
  }
  if (fVar19 < _LC184) {
    pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
    local_1e0 = 0;
    String::parse_latin1((String *)&local_1e0,"");
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"Reset Point Tilt");
    TTR((String *)&local_1d8,(String *)&local_1e8);
    EditorUndoRedoManager::create_action(pOVar12,(String *)&local_1d8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    StringName::StringName((StringName *)&local_1d8,"set_point_tilt",false);
    pOVar4 = local_1f8;
    Variant::Variant((Variant *)local_b8,iVar7);
    Variant::Variant((Variant *)&local_a0,0.0);
    local_80 = (undefined1  [16])0x0;
    pVVar15 = local_70;
    local_88 = 0;
    local_148 = (undefined1  [8])local_b8;
    pVStack_140 = (Variant *)&local_a0;
    EditorUndoRedoManager::add_do_methodp
              (pOVar12,(StringName *)pOVar4,(Variant **)&local_1d8,(int)local_148);
    pVVar13 = pVVar15;
    do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar13 != (Variant *)local_b8);
    if ((StringName::configured != '\0') && (local_1d8 != 0)) {
      StringName::unref();
    }
    fVar19 = (float)Curve3D::get_point_tilt((int)local_1f8);
    StringName::StringName((StringName *)&local_1d8,"set_point_tilt",false);
    Variant::Variant((Variant *)local_b8,iVar7);
    Variant::Variant((Variant *)&local_a0,fVar19);
    local_80 = (undefined1  [16])0x0;
    local_88 = 0;
    local_148 = (undefined1  [8])local_b8;
    pVStack_140 = (Variant *)&local_a0;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar12,(StringName *)local_1f8,(Variant **)&local_1d8,(int)local_148);
    do {
      pVVar13 = pVVar15 + -0x18;
      pVVar15 = pVVar15 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar13] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar15 != (Variant *)local_b8);
    goto LAB_00109e41;
  }
  iVar7 = iVar7 + 1;
  goto LAB_00108d50;
LAB_00109025:
  do {
    iVar9 = Curve3D::get_point_count();
    if (iVar9 + -1 <= local_25c) break;
    auVar27 = Curve3D::get_point_position((int)local_1f8);
    fVar22 = auVar27._8_4_;
    local_148 = auVar27._0_8_;
    pVStack_140 = (Variant *)CONCAT44(pVStack_140._4_4_,fVar22);
    fVar20 = auVar27._0_4_;
    fVar21 = auVar27._4_4_;
    local_b0 = local_fc * fVar21 + local_100 * fVar20 + local_f8 * fVar22 + local_ec;
    local_b8 = (undefined1  [8])
               CONCAT44(fStack_10c * fVar20 + fVar21 * local_108 + fStack_104 * fVar22 + fStack_f0,
                        local_118 * fVar20 + fVar21 * fStack_114 + local_110 * fVar22 + local_f4);
    local_158 = (undefined1  [8])Node3DEditorViewport::point_to_screen(pVVar2);
    fVar20 = (float)Vector2::distance_to((Vector2 *)local_158);
    if (fVar20 < _LC184) goto LAB_001099ba;
    auVar27 = _local_b8;
    if (iVar8 < iVar7) {
      pfVar16 = (float *)(local_1d0[0] + (long)iVar8 * 0xc);
      iVar9 = iVar8;
      while( true ) {
        auVar27 = Curve3D::get_point_position((int)local_1f8);
        fVar20 = *pfVar16;
        local_b8._0_4_ = auVar27._0_4_;
        _local_b8 = auVar27;
        if (((fVar20 == (float)local_b8._0_4_) &&
            (local_b8._4_4_ = auVar27._4_4_, (float)local_b8._4_4_ == pfVar16[1])) &&
           (auVar27._8_4_ == pfVar16[2])) break;
        fStack_194 = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20);
        fVar21 = pfVar16[2];
        fVar22 = pfVar16[5];
        fVar25 = (float)*(undefined8 *)(pfVar16 + 3);
        fVar26 = (float)((ulong)*(undefined8 *)(pfVar16 + 3) >> 0x20);
        fVar24 = fVar26 - fStack_194;
        fVar23 = fStack_194 * local_fc;
        local_198 = fVar20 * local_118 + fStack_194 * fStack_114 + fVar21 * local_110 + local_f4;
        fStack_194 = fVar20 * fStack_10c + fStack_194 * local_108 + fVar21 * fStack_104 + fStack_f0;
        local_188 = (undefined1  [8])
                    CONCAT44(fStack_10c * fVar25 + local_108 * fVar26 + fStack_104 * fVar22 +
                             fStack_f0,
                             local_118 * fVar25 + fStack_114 * fVar26 + local_110 * fVar22 +
                             local_f4);
        local_190 = fVar20 * local_100 + fVar23 + fVar21 * local_f8 + local_ec;
        local_180 = local_100 * fVar25 + local_fc * fVar26 + local_f8 * fVar22 + local_ec;
        if (0.0 < SQRT((fVar25 - fVar20) * (fVar25 - fVar20) + fVar24 * fVar24 +
                       (fVar22 - fVar21) * (fVar22 - fVar21))) {
          local_270 = Node3DEditorViewport::point_to_screen(pVVar2);
          uVar14 = Node3DEditorViewport::point_to_screen(pVVar2);
          fVar21 = (float)local_270;
          fVar22 = (float)((ulong)local_270 >> 0x20);
          local_148 = (undefined1  [8])
                      CONCAT44((float)((ulong)local_1c0 >> 0x20) - fVar22,(float)local_1c0 - fVar21)
          ;
          local_b8 = (undefined1  [8])
                     CONCAT44((float)((ulong)uVar14 >> 0x20) - fVar22,(float)uVar14 - fVar21);
          fVar20 = (float)Vector2::length_squared();
          if (_LC187 <= fVar20) {
            fVar23 = (float)Vector2::dot((Vector2 *)local_b8);
            fVar23 = fVar23 / fVar20;
            if ((0.0 < fVar23) && (local_270 = uVar14, fVar23 < _LC32)) {
              local_270 = CONCAT44(fVar22 + fVar23 * local_b8._4_4_,fVar21 + fVar23 * local_b8._0_4_
                                  );
            }
          }
          local_1b8 = local_270;
          fVar20 = (float)Vector2::distance_to((Vector2 *)&local_1b8);
          auVar27._8_4_ = local_b0;
          auVar27._0_8_ = local_b8;
          if ((fVar20 < _LC184) && (_local_b8 = auVar27, fVar20 < local_234)) {
            auVar27 = Node3DEditorViewport::get_ray_pos(pVVar2);
            local_178._0_12_ = auVar27;
            auVar27 = Node3DEditorViewport::get_ray(pVVar2);
            local_b8 = (undefined1  [8])0x0;
            local_b0 = 0.0;
            local_158 = (undefined1  [8])0x0;
            local_150 = 0.0;
            pVStack_140 = (Variant *)
                          CONCAT44(pVStack_140._4_4_,_LC185 * auVar27._8_4_ + (float)local_178._8_4_
                                  );
            local_148 = (undefined1  [8])
                        CONCAT44(auVar27._4_4_ * _UNK_00118a5c + SUB124(local_178._0_12_,4),
                                 auVar27._0_4_ * _LC185 + SUB124(local_178._0_12_,0));
            local_168._0_12_ = auVar27;
            Geometry3D::get_closest_points_between_segments
                      (local_178,local_148,(Vector3 *)&local_198,local_188,(Vector2 *)local_b8,
                       (Vector2 *)local_158);
            local_20c = local_25c;
            fVar21 = local_158._0_4_;
            fVar22 = local_158._4_4_;
            local_1a8 = (undefined1  [8])
                        CONCAT44(fVar21 * fVar19 + fVar22 * local_d8 + local_150 * fStack_d4 +
                                 fVar18,fVar21 * local_e8 + fVar22 * fStack_e4 +
                                        local_150 * (float)local_e0 + (float)local_c4);
            local_1a0 = local_d0 * fVar21 + fVar22 * local_cc + local_150 * local_c8 + local_bc;
            local_234 = fVar20;
          }
        }
        iVar9 = iVar9 + 1;
        pfVar16 = pfVar16 + 3;
        if (iVar7 == iVar9) goto LAB_001093be;
      }
      iVar5 = iVar9;
      if (iVar8 == iVar9) goto LAB_0010984f;
    }
    else {
LAB_0010984f:
      iVar5 = iVar8 + 1;
      iVar9 = iVar8;
      _local_b8 = auVar27;
    }
    iVar8 = iVar5;
    local_25c = local_25c + 1;
  } while (iVar7 != iVar9);
LAB_001093be:
  this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
  if (local_20c != -1) {
    local_20c = local_20c + 1;
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"");
    local_1f0 = 0;
    String::parse_latin1((String *)&local_1f0,"Split Path");
    TTR((String *)&local_1e0,(String *)&local_1f0);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_1e0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    local_b8 = (undefined1  [8])0x0;
    local_b0 = 0.0;
    local_148 = (undefined1  [8])0x0;
    pVStack_140 = (Variant *)((ulong)pVStack_140 & 0xffffffff00000000);
    StringName::StringName((StringName *)&local_1e0,"add_point",false);
    EditorUndoRedoManager::add_do_method<Vector3,Vector3,Vector3,int>
              (local_1a8,local_1a0,local_148,(ulong)pVStack_140 & 0xffffffff,local_b8,local_b0,
               this_00,local_1f8,(String *)&local_1e0,local_20c);
    if ((StringName::configured != '\0') && (local_1e0 != 0)) {
      StringName::unref();
    }
LAB_0010951c:
    StringName::StringName((StringName *)&local_1e0,"remove_point",false);
    EditorUndoRedoManager::add_undo_method<int>
              (this_00,local_1f8,(StringName *)&local_1e0,local_20c);
    if ((StringName::configured != '\0') && (local_1e0 != 0)) {
      StringName::unref();
    }
    uVar14 = 1;
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    goto LAB_00109571;
  }
LAB_0010987d:
  iVar7 = Curve3D::get_point_count();
  pOVar4 = local_1f8;
  if (iVar7 == 0) {
    Node3D::get_transform();
    fVar21 = fStack_8c;
    fVar22 = (float)local_98._4_4_;
    fVar20 = fStack_90;
    auVar27 = _local_b8;
  }
  else {
    Curve3D::get_point_count();
    auVar27 = Curve3D::get_point_position((int)pOVar4);
    fVar22 = auVar27._8_4_;
    local_b8._4_4_ = auVar27._4_4_;
    local_b8._0_4_ = auVar27._0_4_;
    fVar21 = local_100 * (float)local_b8._0_4_ + local_fc * (float)local_b8._4_4_ +
             local_f8 * fVar22 + local_ec;
    fVar20 = fStack_10c * (float)local_b8._0_4_ + local_108 * (float)local_b8._4_4_ +
             fStack_104 * fVar22 + fStack_f0;
    fVar22 = (float)local_b8._4_4_ * fStack_114 + (float)local_b8._0_4_ * local_118 +
             fVar22 * local_110 + local_f4;
  }
  _local_b8 = auVar27;
  Node3D::get_transform();
  local_148 = (undefined1  [8])CONCAT44(local_a4,local_b0);
  pVStack_140 = (Variant *)
                CONCAT44(fVar22 * local_b0 + fVar20 * local_a4 + fVar21 * (float)local_98._0_4_,
                         local_98._0_4_);
  auVar27 = Node3DEditorViewport::get_ray_pos(pVVar2);
  local_178._0_12_ = auVar27;
  auVar27 = Node3DEditorViewport::get_ray(pVVar2);
  local_188 = (undefined1  [8])0x0;
  local_180 = 0.0;
  local_168._0_12_ = auVar27;
  cVar6 = Plane::intersects_ray(local_148,local_178,local_168);
  if (cVar6 != '\0') {
    local_1e8 = 0;
    String::parse_latin1((String *)&local_1e8,"");
    local_1f0 = 0;
    String::parse_latin1((String *)&local_1f0,"Add Point to Curve");
    TTR((String *)&local_1e0,(String *)&local_1f0);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_1e0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
    local_b8 = (undefined1  [8])0x0;
    local_b0 = 0.0;
    fVar20 = local_188._0_4_;
    fVar21 = local_188._4_4_;
    local_158 = (undefined1  [8])0x0;
    local_150 = 0.0;
    local_1b8 = CONCAT44(fVar20 * fVar19 + fVar21 * local_d8 + local_180 * fStack_d4 + fVar18,
                         fVar20 * local_e8 + fVar21 * fStack_e4 + local_180 * (float)local_e0 +
                         (float)local_c4);
    local_1b0 = local_d0 * fVar20 + fVar21 * local_cc + local_180 * local_c8 + local_bc;
    StringName::StringName((StringName *)&local_1e0,"add_point",false);
    EditorUndoRedoManager::add_do_method<Vector3,Vector3,Vector3,int>
              (local_1b8,local_1b0,local_158,local_150,local_b8,local_b0,this_00,local_1f8,
               (String *)&local_1e0,0xffffffff);
    if ((StringName::configured != '\0') && (local_1e0 != 0)) {
      StringName::unref();
    }
    local_20c = Curve3D::get_point_count();
    goto LAB_0010951c;
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)local_1d0);
LAB_00108690:
  uVar14 = 0;
LAB_00108692:
  cVar6 = RefCounted::unreference();
  if (cVar6 != '\0') {
    cVar6 = predelete_handler(pOVar10);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
LAB_001086a4:
  Ref<Curve3D>::unref((Ref<Curve3D> *)&local_1f8);
LAB_001086ae:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* Path3DGizmoPlugin::set_subgizmo_transform(EditorNode3DGizmo const*, int, Transform3D) */

void Path3DGizmoPlugin::set_subgizmo_transform(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  uint local_5c [2];
  uint local_54;
  Object *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c[0] = param_3;
  if ((*(long *)(param_2 + 0x1f0) == 0) ||
     (lVar4 = __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,&Path3D::typeinfo,0),
     lVar4 == 0)) {
    _err_print_error("set_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x450,
                     "Parameter \"path\" is null.",0,0);
  }
  else {
    Path3D::get_curve();
    uVar1 = local_5c[0];
    if (local_50 == (Object *)0x0) {
      _err_print_error("set_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x452,
                       "Condition \"curve.is_null()\" is true.",0,0);
    }
    else {
      if ((-1 < (int)local_5c[0]) && (iVar3 = Curve3D::get_point_count(), (int)uVar1 < iVar3)) {
        cVar2 = HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
                ::_lookup_pos((HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
                               *)(param_1 + 0x458),(int *)(ulong)uVar1,&local_54);
        if (cVar2 == '\0') {
          Curve3D::get_point_baked_posture((int)&local_48,SUB81(local_50,0));
          puVar5 = (undefined8 *)
                   HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
                   ::operator[]((HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
                                 *)(param_1 + 0x458),(int *)local_5c);
          *puVar5 = local_48;
          puVar5[1] = uStack_40;
          *(undefined4 *)(puVar5 + 4) = local_28;
          puVar5[2] = local_38;
          puVar5[3] = uStack_30;
        }
        Curve3D::set_point_position((int)local_50,(Vector3 *)(ulong)uVar1);
        if (((local_50 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_50), cVar2 != '\0')) {
          (**(code **)(*(long *)local_50 + 0x140))(local_50);
          Memory::free_static(local_50,false);
        }
        goto LAB_0010a5d9;
      }
      iVar3 = Curve3D::get_point_count();
      _err_print_index_error
                ("set_subgizmo_transform","editor/plugins/path_3d_editor_plugin.cpp",0x453,
                 (long)(int)uVar1,(long)iVar3,"p_id","curve->get_point_count()","",false,false);
    }
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_50);
  }
LAB_0010a5d9:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Path3DEditorPlugin::_restore_curve_points(Vector<Vector3> const&) */

void __thiscall Path3DEditorPlugin::_restore_curve_points(Path3DEditorPlugin *this,Vector *param_1)

{
  Vector3 *pVVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Vector3 *pVVar11;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x6d0) != 0) && (Path3D::get_curve(), local_38 != (Object *)0x0)) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_38;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    Path3D::get_curve();
    iVar7 = Curve3D::get_point_count();
    if (0 < iVar7) {
      Curve3D::clear_points();
    }
    lVar2 = *(long *)(param_1 + 8);
    lVar10 = 0x18;
    for (lVar9 = 2; (lVar2 != 0 && (lVar3 = *(long *)(lVar2 + -8), lVar9 + -2 < lVar3));
        lVar9 = lVar9 + 3) {
      lVar8 = lVar9 + -1;
      if (lVar3 <= lVar9 + -1) {
LAB_0010a85b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar7 = (int)lVar10;
      pVVar1 = (Vector3 *)(lVar2 + -0x18 + lVar10);
      lVar8 = lVar9;
      if (lVar3 <= lVar9) goto LAB_0010a85b;
      pVVar11 = (Vector3 *)(lVar2 + lVar10);
      lVar10 = lVar10 + 0x24;
      Curve3D::add_point(local_38,pVVar11,pVVar1,(int)lVar2 + -0xc + iVar7);
      lVar2 = *(long *)(param_1 + 8);
    }
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_create_curve() */

void __thiscall Path3DEditorPlugin::_create_curve(Path3DEditorPlugin *this)

{
  char cVar1;
  Curve3D *this_00;
  Object *pOVar2;
  Curve3D *pCVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x6d0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_create_curve","editor/plugins/path_3d_editor_plugin.cpp",0x30b,
                       "Parameter \"path\" is null.",0,0);
      return;
    }
  }
  else {
    this_00 = (Curve3D *)operator_new(0x2c8,"");
    Curve3D::Curve3D(this_00);
    postinitialize_handler((Object *)this_00);
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      pCVar3 = (Curve3D *)0x0;
    }
    else {
      local_68 = (char *)0x0;
      cVar1 = RefCounted::reference();
      pCVar3 = (Curve3D *)0x0;
      if (cVar1 != '\0') {
        pCVar3 = this_00;
      }
      Ref<Curve3D>::unref((Ref<Curve3D> *)&local_68);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)this_00);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
    }
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    local_68 = "";
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Create Curve in Path3D";
    local_78 = 0;
    local_60 = 0x16;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    EditorUndoRedoManager::create_action(pOVar2,(String *)&local_68,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Variant::Variant((Variant *)local_58,(Object *)pCVar3);
    StringName::StringName((StringName *)&local_68,"curve",false);
    EditorUndoRedoManager::add_do_property
              (pOVar2,*(StringName **)(this + 0x6d0),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Object *)0x0);
    StringName::StringName((StringName *)&local_68,"curve",false);
    EditorUndoRedoManager::add_undo_property
              (pOVar2,*(StringName **)(this + 0x6d0),(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_68,"_update_toolbar",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar2,(StringName *)this,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,"_update_toolbar",false);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,(StringName *)this,(Variant **)&local_68,0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
    if (pCVar3 != (Curve3D *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)pCVar3);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pCVar3,false);
            return;
          }
          goto LAB_0010aced;
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010aced:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DGizmo::redraw() */

void __thiscall Path3DGizmo::redraw(Path3DGizmo *this)

{
  uint uVar1;
  long *plVar2;
  CowData<Path3DGizmo::HandleInfo> *this_00;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  Ref *pRVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ulong *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  String *pSVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  size_t __n;
  long in_FS_OFFSET;
  bool bVar30;
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
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  undefined1 (*local_258) [16];
  uint local_22c;
  float local_1c0;
  float local_1bc;
  ulong local_1b8;
  ulong uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  Ref *local_180;
  Ref *local_178;
  Ref *local_170;
  String local_168 [8];
  Ref *local_160;
  Color *local_158;
  Color *local_150;
  Color *local_148;
  Ref *local_140;
  long local_138;
  undefined8 local_130;
  Ref local_128 [8];
  long local_120;
  Ref local_118 [8];
  long local_110;
  Vector<Vector3> local_108 [8];
  undefined8 *local_100;
  Ref local_f8 [8];
  long local_f0;
  Vector<int> local_e8 [8];
  undefined8 local_e0;
  Vector<int> local_d8 [8];
  int *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  Path3DGizmo *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x160))();
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = this;
  cVar12 = RefCounted::init_ref();
  if (cVar12 == '\0') {
    local_98 = (Path3DGizmo *)0x0;
  }
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"path_material");
  EditorNode3DGizmoPlugin::get_material((String *)&local_180,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = this;
  cVar12 = RefCounted::init_ref();
  if (cVar12 == '\0') {
    local_98 = (Path3DGizmo *)0x0;
  }
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"path_thin_material");
  EditorNode3DGizmoPlugin::get_material((String *)&local_178,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = this;
  cVar12 = RefCounted::init_ref();
  if (cVar12 == '\0') {
    local_98 = (Path3DGizmo *)0x0;
  }
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"path_tilt_material");
  EditorNode3DGizmoPlugin::get_material((String *)&local_170,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = this;
  cVar12 = RefCounted::init_ref();
  if (cVar12 == '\0') {
    local_98 = (Path3DGizmo *)0x0;
  }
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"path_tilt_muted_material");
  EditorNode3DGizmoPlugin::get_material(local_168,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = (Path3DGizmo *)0x0;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"handles");
  EditorNode3DGizmoPlugin::get_material((String *)&local_160,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = (Path3DGizmo *)0x0;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"first_pt_handle");
  EditorNode3DGizmoPlugin::get_material((String *)&local_158,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = (Path3DGizmo *)0x0;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"last_pt_handle");
  EditorNode3DGizmoPlugin::get_material((String *)&local_150,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = (Path3DGizmo *)0x0;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"closed_pt_handle");
  EditorNode3DGizmoPlugin::get_material((String *)&local_148,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  pRVar8 = *(Ref **)(this + 0x200);
  local_98 = (Path3DGizmo *)0x0;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"sec_handles");
  EditorNode3DGizmoPlugin::get_material((String *)&local_140,pRVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  local_68 = (float)__LC165;
  fStack_64 = (float)((ulong)__LC165 >> 0x20);
  fStack_60 = (float)_UNK_001189f8;
  fStack_5c = (float)((ulong)_UNK_001189f8 >> 0x20);
  BaseMaterial3D::set_albedo(local_158);
  local_68 = (float)__LC166;
  fStack_64 = (float)((ulong)__LC166 >> 0x20);
  fStack_60 = (float)_UNK_00118a08;
  fStack_5c = (float)((ulong)_UNK_00118a08 >> 0x20);
  BaseMaterial3D::set_albedo(local_150);
  local_68 = (float)__LC167;
  fStack_64 = (float)((ulong)__LC167 >> 0x20);
  fStack_60 = (float)_UNK_00118a18;
  fStack_5c = (float)((ulong)_UNK_00118a18 >> 0x20);
  BaseMaterial3D::set_albedo(local_148);
  Path3D::get_curve();
  if (local_138 == 0) goto LAB_0010b1a3;
  fVar31 = (float)Curve3D::get_baked_length();
  if (__LC202 < (double)fVar31) {
    uVar1 = (int)(fVar31 / __LC203) + 2;
    uVar28 = (int)(fVar31 / __LC203) + 1;
    if ((int)uVar1 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      local_258 = (undefined1 (*) [16])0x0;
    }
    else {
      local_258 = (undefined1 (*) [16])0x0;
      if (uVar1 != 0) {
        uVar18 = (long)(int)uVar1 * 0x30 - 1;
        uVar18 = uVar18 | uVar18 >> 1;
        uVar18 = uVar18 | uVar18 >> 2;
        uVar18 = uVar18 | uVar18 >> 4;
        uVar18 = uVar18 | uVar18 >> 8;
        uVar18 = uVar18 | uVar18 >> 0x10;
        puVar15 = (ulong *)Memory::alloc_static((uVar18 | uVar18 >> 0x20) + 0x11,false);
        if (puVar15 == (ulong *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_258 = (undefined1 (*) [16])(puVar15 + 2);
          *puVar15 = 1;
          fVar32 = _LC32;
          auVar43 = ZEXT416((uint)_LC32);
          pauVar17 = local_258;
          do {
            *(undefined8 *)((long)pauVar17[2] + 4) = 0;
            pauVar16 = pauVar17 + 3;
            *pauVar17 = auVar43;
            pauVar17[1] = auVar43;
            *(float *)pauVar17[2] = fVar32;
            *(undefined4 *)((long)pauVar17[2] + 0xc) = 0;
            pauVar17 = pauVar16;
          } while ((undefined1 (*) [16])(puVar15 + (long)(int)uVar1 * 6 + 2) != pauVar16);
          puVar15[1] = (long)(int)uVar1;
          if (1 < *puVar15) {
            uVar19 = puVar15[1];
            uVar18 = 0x10;
            __n = uVar19 * 0x30;
            if (__n != 0) {
              uVar18 = __n - 1 | __n - 1 >> 1;
              uVar18 = uVar18 | uVar18 >> 2;
              uVar18 = uVar18 | uVar18 >> 4;
              uVar18 = uVar18 | uVar18 >> 8;
              uVar18 = uVar18 | uVar18 >> 0x10;
              uVar18 = (uVar18 | uVar18 >> 0x20) + 0x11;
            }
            puVar21 = (undefined8 *)Memory::alloc_static(uVar18,false);
            if (puVar21 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              pauVar17 = (undefined1 (*) [16])(puVar21 + 2);
              *puVar21 = 1;
              puVar21[1] = uVar19;
              memcpy(pauVar17,local_258,__n);
              LOCK();
              *puVar15 = *puVar15 - 1;
              UNLOCK();
              local_258 = pauVar17;
              if (*puVar15 == 0) {
                Memory::free_static(puVar15,false);
              }
            }
          }
        }
        uVar29 = 0;
        pauVar17 = local_258;
        do {
          fVar32 = (float)(int)uVar29;
          uVar29 = uVar29 + 1;
          Curve3D::sample_baked_with_rotation
                    (fVar32 * (fVar31 / (float)(int)uVar28),SUB81(&local_1b8,0),SUB81(local_138,0));
          *(ulong *)*pauVar17 = local_1b8;
          *(ulong *)((long)*pauVar17 + 8) = uStack_1b0;
          pauVar17[1] = local_1a8;
          pauVar17[2] = local_198;
          pauVar17 = pauVar17 + 3;
        } while (uVar1 != uVar29);
      }
    }
    local_b0 = 0;
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_b0,(long)(int)(uVar28 * 2));
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_b0);
    lVar24 = local_b0;
    local_a0 = 0;
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_a0,(long)(int)(uVar1 * 4));
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_a0);
    lVar25 = local_a0;
    local_90 = (undefined8 *)0x0;
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_90,(long)(int)uVar1);
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_90);
    fVar11 = _UNK_00118a74;
    fVar33 = _LC207;
    fVar32 = _UNK_00118a6c;
    fVar31 = _LC205;
    uVar29 = 0;
    pauVar17 = local_258;
    puVar21 = local_90;
    if (0 < (int)uVar1) {
      do {
        uVar6 = *(undefined8 *)((long)pauVar17[2] + 4);
        fVar4 = *(float *)((long)pauVar17[2] + 0xc);
        fVar5 = *(float *)((long)pauVar17[1] + 8);
        uVar18 = *(ulong *)*pauVar17;
        uVar19 = *(ulong *)((long)*pauVar17 + 8);
        fVar40 = *(float *)((long)pauVar17[1] + 0xc);
        fVar35 = *(float *)pauVar17[1];
        fVar34 = *(float *)((long)*pauVar17 + 4);
        fVar36 = *(float *)pauVar17[2];
        uVar7 = *(ulong *)pauVar17[1];
        if (uVar28 != uVar29) {
          uVar9 = *(undefined8 *)((long)pauVar17[5] + 4);
          local_68 = (float)uVar9;
          fStack_64 = (float)((ulong)uVar9 >> 0x20);
          fStack_60 = *(float *)((long)pauVar17[5] + 0xc);
          lVar27 = (long)(int)(uVar29 * 2) * 0xc;
          *(undefined8 *)(lVar24 + lVar27) = uVar6;
          *(float *)((undefined8 *)(lVar24 + lVar27) + 1) = fVar4;
          *(undefined8 *)(lVar24 + 0xc + lVar27) = uVar9;
          *(float *)(lVar24 + 0x14 + lVar27) = fStack_60;
        }
        *puVar21 = uVar6;
        *(float *)(puVar21 + 1) = fVar4;
        if ((uVar29 & 3) == 0) {
          fVar39 = (float)(uVar19 >> 0x20);
          fVar37 = (float)(uVar7 >> 0x20);
          fVar38 = (float)uVar19;
          fVar34 = fVar34 * fVar31;
          fVar35 = fVar35 * fVar32;
          fVar41 = (float)uVar18;
          fVar40 = fVar40 * fVar31;
          lVar27 = (long)(int)(uVar29 * 4) * 0xc;
          fStack_64 = (float)((ulong)uVar6 >> 0x20);
          local_78 = (undefined1  [8])
                     CONCAT44(((fVar39 + fVar37) - fVar35) * fVar11 + fStack_64,
                              ((fVar41 + fVar38) - fVar34) * fVar33 + (float)uVar6);
          local_68 = ((fVar38 - fVar41) - fVar34) * fVar33 + (float)uVar6;
          fStack_64 = ((fVar37 - fVar39) - fVar35) * fVar11 + fStack_64;
          fStack_70 = ((fVar5 + fVar36) - fVar40) * fVar33 + fVar4;
          fStack_60 = ((fVar36 - fVar5) - fVar40) * fVar33 + fVar4;
          *(undefined8 *)(lVar25 + lVar27) = uVar6;
          *(float *)((undefined8 *)(lVar25 + lVar27) + 1) = fVar4;
          *(undefined1 (*) [8])(lVar25 + 0xc + lVar27) = local_78;
          *(float *)(lVar25 + 0x14 + lVar27) = fStack_70;
          puVar23 = (undefined8 *)(lVar25 + 0x18 + lVar27);
          *puVar23 = uVar6;
          *(float *)(puVar23 + 1) = fVar4;
          *(ulong *)(lVar25 + 0x24 + lVar27) = CONCAT44(fStack_64,local_68);
          *(float *)(lVar25 + 0x2c + lVar27) = fStack_60;
        }
        uVar29 = uVar29 + 1;
        pauVar17 = pauVar17 + 3;
        puVar21 = (undefined8 *)((long)puVar21 + 0xc);
      } while (uVar1 != uVar29);
    }
    EditorNode3DGizmo::add_collision_segments((Vector *)this);
    local_c8 = 0;
    local_68 = _LC32;
    fStack_64 = _LC32;
    fStack_60 = _LC32;
    fStack_5c = _LC32;
    Ref<Material>::operator=((Ref<Material> *)&local_c8,local_180);
    EditorNode3DGizmo::add_lines
              ((Vector *)this,(Ref *)&local_a8,SUB81((Ref<Material> *)&local_c8,0),(Color *)0x0);
    Ref<Material>::unref((Ref<Material> *)&local_c8);
    local_c8 = 0;
    local_68 = (float)_LC172;
    fStack_64 = (float)((ulong)_LC172 >> 0x20);
    fStack_60 = (float)_UNK_00118a28;
    fStack_5c = (float)((ulong)_UNK_00118a28 >> 0x20);
    Ref<Material>::operator=((Ref<Material> *)&local_c8,local_180);
    EditorNode3DGizmo::add_vertices
              (this,(Ref<EditorNode3DGizmo> *)&local_98,(Ref<Material> *)&local_c8,2,0,&local_68);
    Ref<Material>::unref((Ref<Material> *)&local_c8);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
    if (local_258 != (undefined1 (*) [16])0x0) {
      local_258 = local_258 + -1;
      LOCK();
      *(ulong *)*local_258 = *(ulong *)*local_258 - 1;
      UNLOCK();
      if (*(ulong *)*local_258 == 0) {
        Memory::free_static(local_258,false);
      }
    }
  }
  if (*(long *)(this + 0x328) != *(long *)(Path3DEditorPlugin::singleton + 0x6d0))
  goto LAB_0010b1a3;
  local_120 = 0;
  local_110 = 0;
  local_100 = (undefined8 *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  iVar13 = Curve3D::get_point_count();
  this_00 = (CowData<Path3DGizmo::HandleInfo> *)(this + 0x350);
  lVar24 = (long)(iVar13 * 3);
  if (lVar24 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else {
    lVar25 = *(long *)(this + 0x350);
    if (lVar25 == 0) {
      if (lVar24 != 0) {
        lVar27 = 0;
        CowData<Path3DGizmo::HandleInfo>::_copy_on_write(this_00);
LAB_0010c4ca:
        uVar18 = lVar24 * 8 - 1;
        uVar18 = uVar18 >> 1 | uVar18;
        uVar18 = uVar18 >> 2 | uVar18;
        uVar18 = uVar18 >> 4 | uVar18;
        uVar18 = uVar18 >> 8 | uVar18;
        uVar18 = uVar18 >> 0x10 | uVar18;
        lVar25 = (uVar18 | uVar18 >> 0x20) + 1;
        if (lVar27 < lVar24) {
LAB_0010c530:
          if (lVar27 == 0) {
            puVar21 = (undefined8 *)Memory::alloc_static(lVar25 + 0x10,false);
            if (puVar21 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar23 = puVar21 + 2;
              *puVar21 = 1;
              puVar21[1] = 0;
              *(undefined8 **)(this + 0x350) = puVar23;
LAB_0010c3d8:
              puVar23[-1] = lVar24;
            }
          }
          else {
            iVar13 = CowData<Path3DGizmo::HandleInfo>::_realloc(this_00,lVar25);
            if (iVar13 == 0) {
LAB_0010c3c8:
              puVar23 = *(undefined8 **)(this + 0x350);
              if (puVar23 == (undefined8 *)0x0) {
                _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                pcVar10 = (code *)invalidInstructionException();
                (*pcVar10)();
              }
              goto LAB_0010c3d8;
            }
          }
        }
        else {
LAB_0010c516:
          iVar13 = CowData<Path3DGizmo::HandleInfo>::_realloc(this_00,lVar25);
          if (iVar13 == 0) goto LAB_0010b8bf;
        }
      }
    }
    else {
      lVar27 = *(long *)(lVar25 + -8);
      if (lVar24 != lVar27) {
        if (lVar24 == 0) {
          LOCK();
          plVar2 = (long *)(lVar25 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar24 = *(long *)(this + 0x350);
            *(undefined8 *)(this + 0x350) = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
          else {
            *(undefined8 *)(this + 0x350) = 0;
          }
        }
        else {
          CowData<Path3DGizmo::HandleInfo>::_copy_on_write(this_00);
          uVar18 = lVar24 * 8 - 1;
          uVar18 = uVar18 >> 1 | uVar18;
          uVar18 = uVar18 >> 2 | uVar18;
          uVar18 = uVar18 >> 4 | uVar18;
          uVar18 = uVar18 >> 8 | uVar18;
          uVar18 = uVar18 >> 0x10 | uVar18;
          uVar18 = uVar18 >> 0x20 | uVar18;
          lVar25 = uVar18 + 1;
          if (lVar27 * 8 == 0) goto LAB_0010c4ca;
          uVar19 = lVar27 * 8 - 1;
          uVar19 = uVar19 | uVar19 >> 1;
          uVar19 = uVar19 | uVar19 >> 2;
          uVar19 = uVar19 | uVar19 >> 4;
          uVar19 = uVar19 | uVar19 >> 8;
          uVar19 = uVar19 | uVar19 >> 0x10;
          uVar19 = uVar19 | uVar19 >> 0x20;
          if (lVar27 < lVar24) {
            if (uVar18 != uVar19) goto LAB_0010c530;
            goto LAB_0010c3c8;
          }
          if (uVar18 != uVar19) goto LAB_0010c516;
LAB_0010b8bf:
          if (*(long *)(this + 0x350) == 0) {
            redraw();
            return;
          }
          *(long *)(*(long *)(this + 0x350) + -8) = lVar24;
        }
      }
    }
  }
  local_22c = 2;
  iVar13 = 0;
  while( true ) {
    iVar14 = Curve3D::get_point_count();
    if (iVar14 <= iVar13) break;
    auVar43 = Curve3D::get_point_position((int)local_138);
    local_88 = auVar43._0_8_;
    local_80 = auVar43._8_4_;
    Vector<Vector3>::push_back(local_88,auVar43._8_8_ & 0xffffffff,local_108);
    cVar12 = Curve3D::is_closed();
    if ((iVar13 != 0) || (cVar12 != '\0')) {
      cVar12 = BaseButton::is_pressed();
      if (cVar12 == '\0') goto LAB_0010b99d;
      auVar42 = Curve3D::get_point_in((int)local_138);
      uVar1 = local_22c - 2;
      _local_78 = auVar42;
      Vector<int>::push_back(local_e8,uVar1);
      lVar24 = (long)(int)uVar1;
      if (*(long *)(this + 0x350) != 0) {
        lVar25 = *(long *)(*(long *)(this + 0x350) + -8);
        if (lVar25 <= lVar24) goto LAB_0010bfc6;
        CowData<Path3DGizmo::HandleInfo>::_copy_on_write(this_00);
        fVar33 = local_80 + fStack_70;
        piVar3 = (int *)(*(long *)(this + 0x350) + (ulong)uVar1 * 8);
        fVar31 = (float)local_88 + SUB124(_local_78,0);
        fVar32 = (float)((ulong)local_88 >> 0x20) + SUB124(_local_78,4);
        *piVar3 = iVar13;
        piVar3[1] = 0;
        local_68 = fVar31;
        fStack_64 = fVar32;
        fStack_60 = fVar33;
        Vector<Vector3>::push_back(CONCAT44(fVar32,fVar31),fVar33,local_f8);
        Vector<Vector3>::push_back(local_88,local_80,local_128);
        local_68 = fVar31;
        fStack_64 = fVar32;
        fStack_60 = fVar33;
        Vector<Vector3>::push_back(CONCAT44(fVar32,fVar31),fVar33,local_128);
        goto LAB_0010b99d;
      }
LAB_0010bfc3:
      lVar25 = 0;
LAB_0010bfc6:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar24,lVar25,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
LAB_0010b99d:
    cVar12 = Curve3D::is_closed();
    if (cVar12 == '\0') {
      iVar14 = Curve3D::get_point_count();
      iVar14 = iVar14 + -1;
    }
    else {
      iVar14 = Curve3D::get_point_count();
    }
    if (iVar13 < iVar14) {
      cVar12 = BaseButton::is_pressed();
      if (cVar12 != '\0') {
        auVar42 = Curve3D::get_point_out((int)local_138);
        uVar1 = local_22c - 1;
        _local_78 = auVar42;
        Vector<int>::push_back(local_e8,uVar1);
        lVar24 = (long)(int)uVar1;
        if (*(long *)(this + 0x350) == 0) goto LAB_0010bfc3;
        lVar25 = *(long *)(*(long *)(this + 0x350) + -8);
        if (lVar25 <= lVar24) goto LAB_0010bfc6;
        CowData<Path3DGizmo::HandleInfo>::_copy_on_write(this_00);
        fVar33 = local_80 + fStack_70;
        piVar3 = (int *)(*(long *)(this + 0x350) + (ulong)uVar1 * 8);
        fVar31 = SUB124(_local_78,0) + (float)local_88;
        fVar32 = SUB124(_local_78,4) + (float)((ulong)local_88 >> 0x20);
        *piVar3 = iVar13;
        piVar3[1] = 1;
        local_68 = fVar31;
        fStack_64 = fVar32;
        fStack_60 = fVar33;
        Vector<Vector3>::push_back(CONCAT44(fVar32,fVar31),fVar33,local_f8);
        Vector<Vector3>::push_back(local_88,local_80,local_128);
        local_68 = fVar31;
        fStack_64 = fVar32;
        fStack_60 = fVar33;
        Vector<Vector3>::push_back(CONCAT44(fVar32,fVar31),fVar33,local_128);
      }
    }
    cVar12 = BaseButton::is_pressed();
    if (cVar12 != '\0') {
      Vector<int>::push_back(local_e8,local_22c);
      lVar24 = (long)(int)local_22c;
      if (*(long *)(this + 0x350) == 0) goto LAB_0010bfc3;
      lVar25 = *(long *)(*(long *)(this + 0x350) + -8);
      if (lVar25 <= lVar24) goto LAB_0010bfc6;
      CowData<Path3DGizmo::HandleInfo>::_copy_on_write(this_00);
      piVar3 = (int *)(*(long *)(this + 0x350) + (ulong)local_22c * 8);
      *piVar3 = iVar13;
      piVar3[1] = 2;
      iVar26 = (int)&local_68;
      Curve3D::get_point_baked_posture(iVar26,SUB81(local_138,0));
      fVar4 = local_4c;
      fVar11 = fStack_58;
      fVar33 = fStack_64;
      fVar32 = local_80;
      fVar31 = *(float *)(this + 0x344);
      fStack_70 = fVar31 * local_4c + local_80;
      fVar36 = (float)local_88;
      fVar37 = (float)((ulong)local_88 >> 0x20);
      local_78 = (undefined1  [8])CONCAT44(fVar31 * fStack_58 + fVar37,fVar31 * fStack_64 + fVar36);
      Vector<Vector3>::push_back(local_78,fStack_70,local_f8);
      Vector<Vector3>::push_back(local_88,local_80,local_118);
      fVar31 = *(float *)(this + 0x344);
      iVar14 = 0;
      fStack_70 = fVar31 * fVar4 + fVar32;
      local_78 = (undefined1  [8])CONCAT44(fVar31 * fVar11 + fVar37,fVar31 * fVar33 + fVar36);
      Vector<Vector3>::push_back(local_78,fStack_70,local_118);
      Curve3D::get_point_baked_posture(iVar26,SUB81(local_138,0));
      fVar35 = local_4c;
      fVar40 = local_50;
      fVar5 = fStack_58;
      fVar4 = fStack_5c;
      fVar11 = fStack_64;
      fVar33 = local_68;
      local_90 = (undefined8 *)0x0;
      Vector<Vector3>::push_back(local_88,local_80,(Ref<EditorNode3DGizmo> *)&local_98);
      fVar31 = _LC32;
      fVar34 = 0.0;
      while( true ) {
        fVar38 = *(float *)(this + 0x344);
        iVar14 = iVar14 + 1;
        fStack_70 = (fVar34 * fVar40 + fVar31 * fVar35) * fVar38 + fVar32;
        local_78 = (undefined1  [8])
                   CONCAT44((fVar34 * fVar4 + fVar31 * fVar5) * fVar38 + fVar37,
                            (fVar34 * fVar33 + fVar31 * fVar11) * fVar38 + fVar36);
        Vector<Vector3>::push_back(local_78,fStack_70,(Ref<EditorNode3DGizmo> *)&local_98);
        if (iVar14 == 0x25) break;
        sincosf((float)(((double)iVar14 * __LC209) / __LC210),&local_1bc,&local_1c0);
        fVar31 = local_1c0;
        fVar34 = local_1bc;
      }
      local_a8 = 0;
      local_78._4_4_ = _LC32;
      local_78._0_4_ = _LC32;
      fStack_70 = _LC32;
      fStack_6c = _LC32;
      Ref<Material>::operator=((Ref<Material> *)&local_a8,local_170);
      EditorNode3DGizmo::add_vertices
                (this,(Ref<EditorNode3DGizmo> *)&local_98,(String *)&local_a8,2,0,local_78);
      Ref<Material>::unref((Ref<Material> *)&local_a8);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    }
    local_22c = local_22c + 3;
    iVar13 = iVar13 + 1;
  }
  bVar22 = SUB81((Ref<EditorNode3DGizmo> *)&local_98,0);
  if ((local_120 != 0) && (1 < *(long *)(local_120 + -8))) {
    local_98 = (Path3DGizmo *)0x0;
    local_68 = _LC32;
    fStack_64 = _LC32;
    fStack_60 = _LC32;
    fStack_5c = _LC32;
    Ref<Material>::operator=((Ref<Material> *)&local_98,local_178);
    EditorNode3DGizmo::add_lines((Vector *)this,local_128,bVar22,(Color *)0x0);
    Ref<Material>::unref((Ref<Material> *)&local_98);
  }
  if ((local_110 != 0) && (1 < *(long *)(local_110 + -8))) {
    local_98 = (Path3DGizmo *)0x0;
    local_68 = _LC32;
    fStack_64 = _LC32;
    fStack_60 = _LC32;
    fStack_5c = _LC32;
    Ref<Material>::operator=((Ref<Material> *)&local_98,local_170);
    EditorNode3DGizmo::add_lines((Vector *)this,local_118,bVar22,(Color *)0x0);
    Ref<Material>::unref((Ref<Material> *)&local_98);
  }
  cVar12 = BaseButton::is_pressed();
  if (((cVar12 != '\0') || (local_100 == (undefined8 *)0x0)) || (local_100[-1] == 0)) {
LAB_0010c34e:
    if ((local_f0 != 0) && (*(long *)(local_f0 + -8) != 0)) {
      local_98 = (Path3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_98,local_140);
      EditorNode3DGizmo::add_handles
                ((Vector *)this,local_f8,(Vector *)&local_98,SUB81(local_e8,0),false);
      Ref<Material>::unref((Ref<Material> *)&local_98);
    }
    (**(code **)(**(long **)(this + 0x200) + 0x1f8))(*(long **)(this + 0x200),this);
    CowData<int>::_unref((CowData<int> *)&local_e0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_f0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_100);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_110);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_120);
LAB_0010b1a3:
    Ref<Curve3D>::unref((Ref<Curve3D> *)&local_138);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_140);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_148);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_150);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_158);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_160);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_168);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_170);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_178);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_180);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar13 = (int)local_100[-1];
  local_d0 = (int *)0x0;
  CowData<int>::resize<false>((CowData<int> *)&local_d0,(long)iVar13);
  CowData<int>::_copy_on_write((CowData<int> *)&local_d0);
  uVar18 = 0;
  if (0 < iVar13) {
    do {
      local_d0[uVar18] = (int)uVar18;
      bVar30 = uVar18 != iVar13 - 1;
      uVar18 = uVar18 + 1;
    } while (bVar30);
  }
  local_c0 = 0;
  local_b0 = 0;
  if (local_100 == (undefined8 *)0x0) {
LAB_0010c735:
    lVar24 = 0;
  }
  else {
    lVar24 = local_100[-1];
    if (0 < lVar24) {
      Vector<Vector3>::push_back(*local_100,*(undefined4 *)(local_100 + 1),(Ref *)&local_c8);
      if (local_d0 == (int *)0x0) goto LAB_0010c735;
      lVar24 = *(long *)(local_d0 + -2);
      if (0 < lVar24) {
        Vector<int>::push_back(local_b8,*local_d0);
        if (1 < iVar13) {
          local_a0 = 0;
          local_90 = (undefined8 *)0x0;
          lVar25 = (long)(iVar13 + -1);
          if (local_100 != (undefined8 *)0x0) {
            lVar24 = local_100[-1];
            if (lVar24 <= lVar25) goto LAB_0010c755;
            puVar21 = (undefined8 *)((long)local_100 + lVar25 * 0xc);
            Vector<Vector3>::push_back(*puVar21,*(undefined4 *)(puVar21 + 1),(String *)&local_a8);
            if (local_d0 != (int *)0x0) {
              lVar24 = *(long *)(local_d0 + -2);
              if (lVar24 <= lVar25) goto LAB_0010c755;
              Vector<int>::push_back((Vector<int> *)&local_98,local_d0[lVar25]);
              Vector<Vector3>::remove_at(local_108,lVar25);
              Vector<int>::remove_at(local_d8,lVar25);
              cVar12 = Curve3D::is_closed();
              local_130 = 0;
              pSVar20 = (String *)&local_160;
              if (cVar12 == '\0') {
                pSVar20 = (String *)&local_150;
              }
              Ref<Material>::operator=((Ref<Material> *)&local_130,*(Ref **)pSVar20);
              EditorNode3DGizmo::add_handles
                        ((Vector *)this,(Ref *)&local_a8,(Vector *)&local_130,bVar22,false);
              Ref<Material>::unref((Ref<Material> *)&local_130);
              CowData<int>::_unref((CowData<int> *)&local_90);
              CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
              goto LAB_0010c27c;
            }
          }
          lVar24 = 0;
          goto LAB_0010c755;
        }
LAB_0010c27c:
        Vector<Vector3>::remove_at(local_108,0);
        Vector<int>::remove_at(local_d8,0);
        cVar12 = Curve3D::is_closed();
        local_98 = (Path3DGizmo *)0x0;
        pSVar20 = (String *)&local_148;
        if (cVar12 == '\0') {
          pSVar20 = (String *)&local_158;
        }
        Ref<Material>::operator=((Ref<Material> *)&local_98,*(Ref **)pSVar20);
        EditorNode3DGizmo::add_handles
                  ((Vector *)this,(Ref *)&local_c8,(Vector *)&local_98,SUB81(local_b8,0),false);
        Ref<Material>::unref((Ref<Material> *)&local_98);
        if (local_100 != (undefined8 *)0x0) {
          local_98 = (Path3DGizmo *)0x0;
          Ref<Material>::operator=((Ref<Material> *)&local_98,local_160);
          EditorNode3DGizmo::add_handles
                    ((Vector *)this,(Ref *)local_108,(Vector *)&local_98,SUB81(local_d8,0),false);
          Ref<Material>::unref((Ref<Material> *)&local_98);
        }
        CowData<int>::_unref((CowData<int> *)&local_b0);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_c0);
        CowData<int>::_unref((CowData<int> *)&local_d0);
        goto LAB_0010c34e;
      }
    }
  }
  lVar25 = 0;
LAB_0010c755:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar25,lVar24,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
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



/* Path3DGizmo::is_class_ptr(void*) const */

uint __thiscall Path3DGizmo::is_class_ptr(Path3DGizmo *this,void *param_1)

{
  return (uint)CONCAT71(0x1187,(undefined4 *)param_1 ==
                               &EditorNode3DGizmo::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Node3DGizmo::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Path3DGizmo::_getv(StringName const&, Variant&) const */

undefined8 Path3DGizmo::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmo::_setv(StringName const&, Variant const&) */

undefined8 Path3DGizmo::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmo::_validate_propertyv(PropertyInfo&) const */

void Path3DGizmo::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Path3DGizmo::_property_can_revertv(StringName const&) const */

undefined8 Path3DGizmo::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Path3DGizmo::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path3DGizmo::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmo::_notificationv(int, bool) */

void Path3DGizmo::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Path3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall Path3DGizmoPlugin::is_class_ptr(Path3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1187,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Path3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 Path3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 Path3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void Path3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Path3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 Path3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Path3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DGizmoPlugin::_notificationv(int, bool) */

void Path3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Path3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall Path3DEditorPlugin::is_class_ptr(Path3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1187,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Path3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 Path3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 Path3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 Path3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Path3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Path3DEditorPlugin::has_main_screen() const */

undefined8 Path3DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Path3DGizmo, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DGizmo,void> *this)

{
  return;
}



/* MethodBindT<Vector<Vector3> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<Vector3>const&>::_gen_argument_type
          (MethodBindT<Vector<Vector3>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x24;
}



/* MethodBindT<Vector<Vector3> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector3>const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::get_argument_count
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Path3DGizmo, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::get_argument_count
          (CallableCustomMethodPointer<Path3DGizmo,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<Path3DGizmo, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DGizmo,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001185b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001185b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector3> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&>::~MethodBindT(MethodBindT<Vector<Vector3>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118610;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector3> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&>::~MethodBindT(MethodBindT<Vector<Vector3>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118610;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Path3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void Path3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011d010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CowData<Path3DGizmo::HandleInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Path3DGizmo::HandleInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Path3DGizmoPlugin::Path3DGizmoPlugin(float) [clone .cold] */

void __thiscall Path3DGizmoPlugin::Path3DGizmoPlugin(Path3DGizmoPlugin *this,float param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Path3DEditorPlugin::_bind_methods() [clone .cold] */

void Path3DEditorPlugin::_bind_methods(void)

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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path3DGizmo::redraw() [clone .cold] */

void Path3DGizmo::redraw(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<Path3DGizmo, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::get_object
          (CallableCustomMethodPointer<Path3DGizmo,void> *this)

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
      goto LAB_0010d72d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d72d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d72d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::get_object
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this)

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
      goto LAB_0010d82d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d82d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d82d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this)

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
      goto LAB_0010d92d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d92d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d92d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d018 == Control::_validate_property) {
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
    if ((code *)PTR__set_0011d020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010daf8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x1187,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1187,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1187,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1187,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1187,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Path3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
Path3DEditorPlugin::_notificationv(Path3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011d030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* Path3DGizmoPlugin::~Path3DGizmoPlugin() */

void __thiscall Path3DGizmoPlugin::~Path3DGizmoPlugin(Path3DGizmoPlugin *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00118198;
  pvVar3 = *(void **)(this + 0x460);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x484) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x480) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x484) = 0;
        *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x468) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x468) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x460);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x484) = 0;
        *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010dc93;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x468),false);
    EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
    return;
  }
LAB_0010dc93:
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* Path3DGizmoPlugin::~Path3DGizmoPlugin() */

void __thiscall Path3DGizmoPlugin::~Path3DGizmoPlugin(Path3DGizmoPlugin *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00118198;
  pvVar3 = *(void **)(this + 0x460);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x484) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x480) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x484) = 0;
        *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x468) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x468) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x460);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x484) = 0;
        *(undefined1 (*) [16])(this + 0x470) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010dd83;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x468),false);
  }
LAB_0010dd83:
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x488);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d038 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d038 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorNode3DGizmo::~EditorNode3DGizmo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010df40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010df40:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorNode3DGizmo::~EditorNode3DGizmo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010dfa0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010dfa0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Path3DGizmo::~Path3DGizmo() */

void __thiscall Path3DGizmo::~Path3DGizmo(Path3DGizmo *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117d08;
  if (*(long *)(this + 0x350) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x350) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x350);
      *(undefined8 *)(this + 0x350) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorNode3DGizmo::~EditorNode3DGizmo((EditorNode3DGizmo *)this);
      return;
    }
  }
  EditorNode3DGizmo::~EditorNode3DGizmo((EditorNode3DGizmo *)this);
  return;
}



/* Path3DGizmo::~Path3DGizmo() */

void __thiscall Path3DGizmo::~Path3DGizmo(Path3DGizmo *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117d08;
  if (*(long *)(this + 0x350) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x350) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x350);
      *(undefined8 *)(this + 0x350) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorNode3DGizmo::~EditorNode3DGizmo((EditorNode3DGizmo *)this);
  operator_delete(this,0x358);
  return;
}



/* Path3DEditorPlugin::get_plugin_name() const */

Path3DEditorPlugin * __thiscall Path3DEditorPlugin::get_plugin_name(Path3DEditorPlugin *this)

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



/* Path3DGizmo::_get_class_namev() const */

undefined8 * Path3DGizmo::_get_class_namev(void)

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
LAB_0010e203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path3DGizmo");
      goto LAB_0010e26e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path3DGizmo");
LAB_0010e26e:
  return &_get_class_namev()::_class_name_static;
}



/* Path3DEditorPlugin::_get_class_namev() const */

undefined8 * Path3DEditorPlugin::_get_class_namev(void)

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
LAB_0010e2f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e2f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path3DEditorPlugin");
      goto LAB_0010e35e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path3DEditorPlugin");
LAB_0010e35e:
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
LAB_0010e3e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e3e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010e44e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010e44e:
  return &_get_class_namev()::_class_name_static;
}



/* Path3DGizmoPlugin::_get_class_namev() const */

undefined8 * Path3DGizmoPlugin::_get_class_namev(void)

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
LAB_0010e4d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e4d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path3DGizmoPlugin");
      goto LAB_0010e53e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path3DGizmoPlugin");
LAB_0010e53e:
  return &_get_class_namev()::_class_name_static;
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



/* void EditorUndoRedoManager::add_do_method<int, Vector3>(Object*, StringName const&, int, Vector3)
    */

void EditorUndoRedoManager::add_do_method<int,Vector3>
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
  EditorUndoRedoManager::add_do_methodp(param_1,param_2,param_5,(int)&local_98);
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



/* void EditorUndoRedoManager::add_undo_method<int, Variant>(Object*, StringName const&, int,
   Variant) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int,Variant>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,int param_3,
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
  Variant::Variant(local_88,param_3);
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



/* Callable create_custom_callable_function_pointer<Path3DGizmo>(Path3DGizmo*, char const*, void
   (Path3DGizmo::*)()) */

Path3DGizmo *
create_custom_callable_function_pointer<Path3DGizmo>
          (Path3DGizmo *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118400;
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



/* void EditorUndoRedoManager::add_do_method<Vector3, Vector3, Vector3, int>(Object*, StringName
   const&, Vector3, Vector3, Vector3, int) */

void EditorUndoRedoManager::add_do_method<Vector3,Vector3,Vector3,int>
               (undefined8 param_1_00,undefined4 param_2_00,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,Object *param_1,StringName *param_2,
               Variant **param_9,int param_10)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = param_5;
  local_110 = param_6;
  local_108 = param_3;
  local_100 = param_4;
  local_f8 = param_1_00;
  local_f0 = param_2_00;
  Variant::Variant(local_b8,(Vector3 *)&local_f8);
  Variant::Variant(local_a0,(Vector3 *)&local_108);
  Variant::Variant(local_88,(Vector3 *)&local_118);
  Variant::Variant(local_70,param_10);
  local_50 = (undefined1  [16])0x0;
  pVVar2 = (Variant *)local_40;
  local_58 = 0;
  local_e8 = local_b8;
  pVStack_e0 = local_a0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_do_methodp(param_1,param_2,param_9,(int)&local_e8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
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



/* Callable create_custom_callable_function_pointer<Path3DEditorPlugin, int>(Path3DEditorPlugin*,
   char const*, void (Path3DEditorPlugin::*)(int)) */

Path3DEditorPlugin *
create_custom_callable_function_pointer<Path3DEditorPlugin,int>
          (Path3DEditorPlugin *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118490;
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



/* Callable Callable::bind<Path3DEditorPlugin::Mode>(Path3DEditorPlugin::Mode) const */

Variant ** Callable::bind<Path3DEditorPlugin::Mode>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Path3DEditorPlugin>(Path3DEditorPlugin*, char
   const*, void (Path3DEditorPlugin::*)()) */

Path3DEditorPlugin *
create_custom_callable_function_pointer<Path3DEditorPlugin>
          (Path3DEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118520;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Basis, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Basis> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
::operator[](HashMap<int,Basis,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Basis>>>
             *this,int *param_1)

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
  undefined1 (*pauVar22) [16];
  char cVar23;
  uint uVar24;
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
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  long in_FS_OFFSET;
  undefined1 auVar40 [16];
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar25 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar23 = _lookup_pos(this,(int *)(ulong)uVar25,&local_48);
  if (cVar23 == '\0') {
    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar34 = (ulong)uVar26;
      uVar27 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      pvVar30 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar30;
      if (uVar26 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar30 + uVar38)) &&
           (pvVar30 < (void *)((long)pvVar4 + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar27 * 4) = 0;
            *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar34 != uVar27);
        }
        else {
          memset(pvVar4,0,uVar27);
          memset(pvVar30,0,uVar38);
        }
      }
      uVar25 = *param_1;
    }
    local_44 = 0;
    cVar23 = _lookup_pos(this,(int *)(ulong)uVar25,&local_44);
    if (cVar23 == '\0') {
      if ((float)uVar26 * __LC42 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar25 = *(uint *)(this + 0x28);
        if (uVar25 == 0x1c) {
          pauVar29 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010f737;
        }
        uVar27 = (ulong)(uVar25 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar26 = *(uint *)(hash_table_size_primes + (ulong)uVar25 * 4);
        if (uVar25 + 1 < 2) {
          uVar27 = 2;
        }
        uVar25 = *(uint *)(hash_table_size_primes + uVar27 * 4);
        uVar34 = (ulong)uVar25;
        *(int *)(this + 0x28) = (int)uVar27;
        pvVar30 = *(void **)(this + 8);
        uVar27 = uVar34 * 4;
        uVar38 = uVar34 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar28 = Memory::alloc_static(uVar27,false);
        *(undefined8 *)(this + 0x10) = uVar28;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar25 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar27))) {
            uVar27 = 0;
            do {
              *(undefined4 *)((long)__s + uVar27 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
              uVar27 = uVar27 + 1;
            } while (uVar34 != uVar27);
          }
          else {
            memset(__s,0,uVar27);
            memset(__s_00,0,uVar38);
          }
        }
        if (uVar26 == 0) {
          uVar25 = *param_1;
        }
        else {
          uVar27 = 0;
          do {
            uVar25 = *(uint *)((long)pvVar4 + uVar27 * 4);
            if (uVar25 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar38 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar40._8_8_ = 0;
              auVar40._0_8_ = (ulong)uVar25 * lVar6;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar38;
              lVar32 = SUB168(auVar40 * auVar14,8);
              puVar1 = (uint *)(lVar5 + lVar32 * 4);
              iVar31 = SUB164(auVar40 * auVar14,8);
              uVar37 = *puVar1;
              uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
              while (uVar37 != 0) {
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)uVar37 * lVar6;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar38;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar7 * auVar15,8)) * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar38;
                uVar24 = SUB164(auVar8 * auVar16,8);
                uVar35 = uVar28;
                if (uVar24 < uVar36) {
                  *puVar1 = uVar25;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar28;
                  uVar25 = uVar37;
                  uVar36 = uVar24;
                }
                uVar36 = uVar36 + 1;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)(iVar31 + 1) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar38;
                lVar32 = SUB168(auVar9 * auVar17,8);
                puVar1 = (uint *)(lVar5 + lVar32 * 4);
                iVar31 = SUB164(auVar9 * auVar17,8);
                uVar28 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
              *puVar1 = uVar25;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar27 = uVar27 + 1;
          } while (uVar26 != uVar27);
          Memory::free_static(pvVar30,false);
          Memory::free_static(pvVar4,false);
          uVar25 = *param_1;
        }
      }
      pauVar29 = (undefined1 (*) [16])operator_new(0x38,"");
      *pauVar29 = (undefined1  [16])0x0;
      auVar40 = ZEXT416(_LC32);
      *(uint *)pauVar29[1] = uVar25;
      *(undefined4 *)(pauVar29[3] + 4) = 0x3f800000;
      *(undefined1 (*) [16])(pauVar29[1] + 4) = auVar40;
      *(undefined1 (*) [16])(pauVar29[2] + 4) = auVar40;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar29;
      }
      else {
        *puVar2 = pauVar29;
        *(undefined8 **)(*pauVar29 + 8) = puVar2;
      }
      uVar25 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar29;
      uVar25 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
      uVar26 = (uVar25 ^ uVar25 >> 0xd) * -0x3d4d51cb;
      uVar25 = uVar26 ^ uVar26 >> 0x10;
      if (uVar26 == uVar26 >> 0x10) {
        uVar27 = 1;
        uVar25 = 1;
      }
      else {
        uVar27 = (ulong)uVar25;
      }
      uVar37 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar38 = CONCAT44(0,uVar26);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar27 * lVar6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar33 = SUB168(auVar10 * auVar18,8);
      lVar32 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar33 * 4);
      iVar31 = SUB164(auVar10 * auVar18,8);
      uVar3 = *puVar1;
      pauVar22 = pauVar29;
      while (uVar3 != 0) {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar3 * lVar6;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)((uVar26 + iVar31) - SUB164(auVar11 * auVar19,8)) * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        uVar36 = SUB164(auVar12 * auVar20,8);
        pauVar39 = pauVar22;
        if (uVar36 < uVar37) {
          *puVar1 = uVar25;
          puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
          pauVar39 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar22;
          uVar25 = uVar3;
          uVar37 = uVar36;
        }
        uVar37 = uVar37 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(iVar31 + 1) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar38;
        lVar33 = SUB168(auVar13 * auVar21,8);
        puVar1 = (uint *)(lVar5 + lVar33 * 4);
        iVar31 = SUB164(auVar13 * auVar21,8);
        pauVar22 = pauVar39;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar32 + lVar33 * 8) = pauVar22;
      *puVar1 = uVar25;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      auVar40 = ZEXT416(_LC32);
      pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined4 *)(pauVar29[3] + 4) = 0x3f800000;
      *(undefined1 (*) [16])(pauVar29[1] + 4) = auVar40;
      *(undefined1 (*) [16])(pauVar29[2] + 4) = auVar40;
    }
  }
  else {
    pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_0010f737:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar29[1] + 4;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fc2a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010fc2a:
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



/* Path3DEditorPlugin::~Path3DEditorPlugin() */

void __thiscall Path3DEditorPlugin::~Path3DEditorPlugin(Path3DEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117ef0;
  if (*(long *)(this + 0x660) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x660);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorPlugin::~EditorPlugin((EditorPlugin *)this);
        return;
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* Path3DEditorPlugin::~Path3DEditorPlugin() */

void __thiscall Path3DEditorPlugin::~Path3DEditorPlugin(Path3DEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117ef0;
  if (*(long *)(this + 0x660) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x660);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x6e0);
  return;
}



/* Path3DGizmo::_initialize_classv() */

void Path3DGizmo::_initialize_classv(void)

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
    if (EditorNode3DGizmo::initialize_class()::initialized == '\0') {
      if (Node3DGizmo::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
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
          if ((code *)PTR__bind_methods_0011d048 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Node3DGizmo");
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
        Node3DGizmo::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3DGizmo";
      local_68 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorNode3DGizmo";
      local_70 = 0;
      local_50 = 0x11;
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
      if ((code *)PTR__bind_methods_0011d040 != RefCounted::_bind_methods) {
        EditorNode3DGizmo::_bind_methods();
      }
      EditorNode3DGizmo::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmo";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Path3DGizmo";
    local_70 = 0;
    local_50 = 0xb;
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
              if ((code *)PTR__bind_methods_0011d048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d050 !=
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
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
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
      if ((code *)PTR__bind_methods_0011d058 != Container::_bind_methods) {
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Path3DEditorPlugin::get_class() const */

void Path3DEditorPlugin::get_class(void)

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



/* Path3DGizmo::get_class() const */

void Path3DGizmo::get_class(void)

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



/* Path3DGizmoPlugin::get_class() const */

void Path3DGizmoPlugin::get_class(void)

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
LAB_00110c37:
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
      goto LAB_00110c37;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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
    if (cVar4 != '\0') goto LAB_00110d3b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110d3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar4 != '\0') goto LAB_00110e8b;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110e8b:
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
    if (cVar4 != '\0') goto LAB_00110feb;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110feb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::call
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011122f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011122f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001112e0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011122f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC135,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001112e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path3DGizmo, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::call
          (CallableCustomMethodPointer<Path3DGizmo,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011143f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011143f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001114f0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011143f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC135,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001114f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::call
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this,Variant **param_1,
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
      goto LAB_001116b8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001116b8;
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
        uVar3 = _LC136;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00111769;
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
LAB_001116b8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC135,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111769:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<Vector3>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001117b9;
  local_78 = 0;
  local_68 = &_LC23;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x24);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001118b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001118b5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001117b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Path3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall Path3DGizmoPlugin::is_class(Path3DGizmoPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00111aeb;
  }
  cVar5 = String::operator==(param_1,"Path3DGizmoPlugin");
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
      if (cVar5 != '\0') goto LAB_00111aeb;
    }
    cVar5 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_00111bee;
    }
  }
LAB_00111aeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111bee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_00111cfb;
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
      if (cVar5 != '\0') goto LAB_00111cfb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00111dfe;
    }
  }
LAB_00111cfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111dfe:
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
    if (cVar4 != '\0') goto LAB_00111f0b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00111f0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNode3DGizmo::is_class(String const&) const */

undefined8 __thiscall EditorNode3DGizmo::is_class(EditorNode3DGizmo *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011205b;
  }
  cVar5 = String::operator==(param_1,"EditorNode3DGizmo");
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
      if (cVar5 != '\0') goto LAB_0011205b;
    }
    cVar5 = String::operator==(param_1,"Node3DGizmo");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0011215e;
    }
  }
LAB_0011205b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011215e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::is_class(String const&) const */

undefined8 __thiscall Path3DGizmo::is_class(Path3DGizmo *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011226b;
  }
  cVar4 = String::operator==(param_1,"Path3DGizmo");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorNode3DGizmo::is_class((EditorNode3DGizmo *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011226b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmoPlugin::_initialize_classv() */

void Path3DGizmoPlugin::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0011d048 != RefCounted::_bind_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
      if ((code *)PTR__bind_methods_0011d060 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Path3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x11;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_001127ef;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001127ef:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Path3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall Path3DEditorPlugin::is_class(Path3DEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011295b;
  }
  cVar5 = String::operator==(param_1,"Path3DEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0011295b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00112a5e;
    }
  }
LAB_0011295b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112a5e:
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
    if (cVar5 != '\0') goto LAB_00112b6b;
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
      if (cVar5 != '\0') goto LAB_00112b6b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00112c6e;
    }
  }
LAB_00112b6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112c6e:
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
      goto LAB_00112ddc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112ddc:
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
  local_78 = &_LC51;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC51;
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
      goto LAB_0011302c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011302c:
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



/* Node3DGizmo::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3DGizmo::_get_property_listv(Node3DGizmo *this,List *param_1,bool param_2)

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
  local_78 = "Node3DGizmo";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3DGizmo";
  local_98 = 0;
  local_70 = 0xb;
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
      goto LAB_00113291;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113291:
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
  StringName::StringName((StringName *)&local_78,"Node3DGizmo",false);
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
      goto LAB_00113541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113541:
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
      goto LAB_001137f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001137f1:
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



/* EditorNode3DGizmo::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorNode3DGizmo::_get_property_listv(EditorNode3DGizmo *this,List *param_1,bool param_2)

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
    Node3DGizmo::_get_property_listv((Node3DGizmo *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorNode3DGizmo";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNode3DGizmo";
  local_98 = 0;
  local_70 = 0x11;
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
      goto LAB_00113aa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113aa1:
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
  StringName::StringName((StringName *)&local_78,"EditorNode3DGizmo",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3DGizmo::_get_property_listv((Node3DGizmo *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Path3DGizmo::_get_property_listv(Path3DGizmo *this,List *param_1,bool param_2)

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
    EditorNode3DGizmo::_get_property_listv((EditorNode3DGizmo *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Path3DGizmo";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path3DGizmo";
  local_98 = 0;
  local_70 = 0xb;
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
      goto LAB_00113d51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113d51:
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
  StringName::StringName((StringName *)&local_78,"Path3DGizmo",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorNode3DGizmo::_get_property_listv((EditorNode3DGizmo *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Path3DEditorPlugin::_get_property_listv(Path3DEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "Path3DEditorPlugin";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path3DEditorPlugin";
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
      goto LAB_00114001;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114001:
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
  StringName::StringName((StringName *)&local_78,"Path3DEditorPlugin",false);
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
      goto LAB_001142b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001142b1:
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



/* Path3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Path3DGizmoPlugin::_get_property_listv(Path3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "Path3DGizmoPlugin";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x11;
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
      goto LAB_00114561;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114561:
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
  StringName::StringName((StringName *)&local_78,"Path3DGizmoPlugin",false);
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
      goto LAB_00114811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114811:
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
  if ((code *)PTR__get_property_list_0011d068 != Object::_get_property_list) {
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
      goto LAB_00114ae1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114ae1:
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
  if ((code *)PTR__get_property_list_0011d070 != CanvasItem::_get_property_list) {
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
      goto LAB_00114db1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114db1:
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
      goto LAB_00115061;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115061:
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
      goto LAB_00115311;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115311:
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



/* MethodBind* create_method_bind<Path3DEditorPlugin>(void (Path3DEditorPlugin::*)()) */

MethodBind * create_method_bind<Path3DEditorPlugin>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001185b0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Path3DEditorPlugin";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<Path3DEditorPlugin, Vector<Vector3> const&>(void
   (Path3DEditorPlugin::*)(Vector<Vector3> const&)) */

MethodBind *
create_method_bind<Path3DEditorPlugin,Vector<Vector3>const&>(_func_void_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00118610;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Path3DEditorPlugin";
  local_30 = 0x12;
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



/* Path3DEditorPlugin::_initialize_classv() */

void Path3DEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011d048 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0011d078 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011d080 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Path3DEditorPlugin";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00115e50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_00115e50;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_00115ddc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00115d7f;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00115ddc;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_00115d7f:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Vector3>::remove_at(long) */

void __thiscall Vector<Vector3>::remove_at(Vector<Vector3> *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00115f61;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(this + 8));
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        lVar1 = -1;
      }
      else {
        lVar1 = *(long *)(lVar2 + -8) + -1;
        if (param_1 < lVar1) {
          memmove((void *)(lVar2 + param_1 * 0xc),(void *)(lVar2 + 0xc + param_1 * 0xc),
                  (*(long *)(lVar2 + -8) - param_1) * 0xc - 0xc);
        }
      }
      CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 8),lVar1);
      return;
    }
    goto LAB_00115f61;
  }
  lVar2 = 0;
LAB_00115f61:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
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
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00116270:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00116270;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00116181;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00116181:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* Vector<int>::remove_at(long) */

void __thiscall Vector<int>::remove_at(Vector<int> *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00116361;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        lVar1 = -1;
      }
      else {
        lVar1 = *(long *)(lVar2 + -8) + -1;
        if (param_1 < lVar1) {
          memmove((void *)(lVar2 + param_1 * 4),(void *)(lVar2 + 4 + param_1 * 4),
                  (*(long *)(lVar2 + -8) - param_1) * 4 - 4);
        }
      }
      CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar1);
      return;
    }
    goto LAB_00116361;
  }
  lVar2 = 0;
LAB_00116361:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
  return;
}



/* void memdelete<Curve3D>(Curve3D*) */

void memdelete<Curve3D>(Curve3D *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
  return;
}



/* Ref<Curve3D>::unref() */

void __thiscall Ref<Curve3D>::unref(Ref<Curve3D> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Curve3D>(*(Curve3D **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Transform3D>::_realloc(long) */

undefined8 __thiscall CowData<Transform3D>::_realloc(CowData<Transform3D> *this,long param_1)

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



/* CowData<Path3DGizmo::HandleInfo>::_realloc(long) */

undefined8 __thiscall
CowData<Path3DGizmo::HandleInfo>::_realloc(CowData<Path3DGizmo::HandleInfo> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x001166a8) */
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



/* MethodBindT<Vector<Vector3> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<Vector3>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116ae9;
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
                    /* WARNING: Could not recover jumptable at 0x00116971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_00116ae9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<Vector3>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116cd1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00116cd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC135,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116df0;
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
LAB_00116df0:
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
      goto LAB_0011716f;
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
                    /* WARNING: Could not recover jumptable at 0x00117016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011716f:
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
      goto LAB_0011732f;
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
                    /* WARNING: Could not recover jumptable at 0x001171d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011732f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<Vector3>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC135,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117450;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001174a0;
LAB_00117490:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001174a0:
        uVar6 = 4;
        goto LAB_00117445;
      }
      if (in_R8D == 1) goto LAB_00117490;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x24);
    uVar4 = _LC224;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<Vector3>::_unref((CowData<Vector3> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_00117445:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00117450:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path3DGizmo::get_handle_name(int, bool) const */

void Path3DGizmo::_GLOBAL__sub_I_get_handle_name(void)

{
  undefined8 uStack_8;
  
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
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_8);
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
/* Path3DEditorPlugin::~Path3DEditorPlugin() */

void __thiscall Path3DEditorPlugin::~Path3DEditorPlugin(Path3DEditorPlugin *this)

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
/* Path3DGizmo::~Path3DGizmo() */

void __thiscall Path3DGizmo::~Path3DGizmo(Path3DGizmo *this)

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
/* Path3DGizmoPlugin::~Path3DGizmoPlugin() */

void __thiscall Path3DGizmoPlugin::~Path3DGizmoPlugin(Path3DGizmoPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector3> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&>::~MethodBindT(MethodBindT<Vector<Vector3>const&> *this)

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
/* CallableCustomMethodPointer<Path3DGizmo, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DGizmo,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DGizmo,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Path3DEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Path3DEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path3DEditorPlugin,void> *this)

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


