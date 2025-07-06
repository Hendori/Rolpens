/* EditorResourcePicker::is_editable() const */

EditorResourcePicker __thiscall EditorResourcePicker::is_editable(EditorResourcePicker *this)

{
  return this[0xa20];
}



/* EditorScriptPicker::set_script_owner(Node*) */

void __thiscall EditorScriptPicker::set_script_owner(EditorScriptPicker *this,Node *param_1)

{
  *(Node **)(this + 0xb00) = param_1;
  return;
}



/* EditorScriptPicker::get_script_owner() const */

undefined8 __thiscall EditorScriptPicker::get_script_owner(EditorScriptPicker *this)

{
  return *(undefined8 *)(this + 0xb00);
}



/* EditorResourcePicker::set_toggle_mode(bool) */

void EditorResourcePicker::set_toggle_mode(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_toggle_mode
            (SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa88),0));
  return;
}



/* EditorResourcePicker::is_toggle_mode() const */

void EditorResourcePicker::is_toggle_mode(void)

{
  BaseButton::is_toggle_mode();
  return;
}



/* EditorResourcePicker::set_editable(bool) */

void __thiscall EditorResourcePicker::set_editable(EditorResourcePicker *this,bool param_1)

{
  this[0xa20] = (EditorResourcePicker)param_1;
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa88),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa98),0));
  return;
}



/* EditorScriptPicker::handle_menu_selected(int) */

undefined8 __thiscall EditorScriptPicker::handle_menu_selected(EditorScriptPicker *this,int param_1)

{
  if (param_1 == 0x32) {
    if (*(long *)(this + 0xb00) != 0) {
      SceneTreeDock::open_script_dialog(SceneTreeDock::singleton,SUB81(*(long *)(this + 0xb00),0));
    }
  }
  else {
    if (param_1 != 0x33) {
      return 0;
    }
    if (*(long *)(this + 0xb00) != 0) {
      SceneTreeDock::open_script_dialog(SceneTreeDock::singleton,SUB81(*(long *)(this + 0xb00),0));
      return 1;
    }
  }
  return 1;
}



/* EditorResourcePicker::set_toggle_pressed(bool) */

void EditorResourcePicker::set_toggle_pressed(bool param_1)

{
  char cVar1;
  undefined7 in_register_00000039;
  
  cVar1 = BaseButton::is_toggle_mode();
  if (cVar1 == '\0') {
    return;
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa88),0));
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* EditorResourcePicker::_ensure_resource_menu() [clone .part.0] */

void __thiscall EditorResourcePicker::_ensure_resource_menu(EditorResourcePicker *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  PopupMenu *this_00;
  CallableCustom *pCVar7;
  long in_FS_OFFSET;
  long local_b0;
  Callable local_a8 [16];
  long local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_00);
  postinitialize_handler((Object *)this_00);
  *(PopupMenu **)(this + 0xac8) = this_00;
  if ((_ensure_resource_menu()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_ensure_resource_menu()::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_ensure_resource_menu()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_ensure_resource_menu()::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&_ensure_resource_menu()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_constant
            ((StringName *)this,
             (StringName *)&_ensure_resource_menu()::{lambda()#1}::operator()()::sname);
  StringName::StringName((StringName *)local_98,"icon_max_width",false);
  Window::add_theme_constant_override((StringName *)this_00,(int)(StringName *)local_98);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(this,*(undefined8 *)(this + 0xac8),0,0);
  plVar2 = *(long **)(this + 0xac8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_00129f40;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(EditorResourcePicker **)(pCVar7 + 0x28) = this;
  *(undefined8 *)(pCVar7 + 0x30) = uVar4;
  *(code **)(pCVar7 + 0x38) = _edit_menu_cbk;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorResourcePicker::_edit_menu_cbk";
  Callable::Callable((Callable *)local_98,pCVar7);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,(StringName *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar2 = *(long **)(this + 0xac8);
  lVar5 = *(long *)(this + 0xa98);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_00129fd0;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar4 = *(undefined8 *)(lVar5 + 0x60);
  *(long *)(pCVar7 + 0x28) = lVar5;
  *(undefined8 *)(pCVar7 + 0x30) = uVar4;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(code **)(pCVar7 + 0x38) = BaseButton::set_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "BaseButton::set_pressed";
  Callable::Callable(local_a8,pCVar7);
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_98,(int)local_a8);
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
  StringName::StringName((StringName *)&local_b0,"popup_hide",false);
  (*pcVar3)(plVar2,(StringName *)&local_b0,(StringName *)local_98,0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable(local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_button_draw() */

void EditorResourcePicker::_button_draw(void)

{
  Rect2 *pRVar1;
  int iVar2;
  StringName *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDI[0xa21] != (StringName)0x0) {
    if (_button_draw()::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_button_draw()::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_button_draw()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_button_draw()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_button_draw()::{lambda()#1}::operator()()::sname);
      }
    }
    local_58[0] = Control::get_theme_color
                            (in_RDI,(StringName *)&_button_draw()::{lambda()#1}::operator()()::sname
                            );
    pRVar1 = *(Rect2 **)(in_RDI + 0xa88);
    local_40 = Control::get_size();
    local_48 = 0;
    CanvasItem::draw_rect(pRVar1,(Color *)&local_48,SUB81(local_58,0),_LC11,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorShaderPicker::handle_menu_selected(int) */

undefined8 __thiscall EditorShaderPicker::handle_menu_selected(EditorShaderPicker *this,int param_1)

{
  Object *pOVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_28 = *(Object **)(this + 0xb00);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_28 == (Object *)0x0) {
LAB_0010076a:
    local_28 = (Object *)0x0;
    if (param_1 == 0x32) {
LAB_001007e8:
      if (local_28 != (Object *)0x0) {
        uVar3 = 1;
        SceneTreeDock::open_shader_dialog(SceneTreeDock::singleton,(int)&local_28);
        goto LAB_001007a8;
      }
    }
    uVar3 = 0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_0010076a;
    uVar3 = 0;
    if (param_1 == 0x32) goto LAB_001007e8;
LAB_001007a8:
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * EditorResourcePicker::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  Variant *pVVar1;
  long in_FS_OFFSET;
  Ref aRStack_88 [8];
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0xa18) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    EditorNode::drag_resource(aRStack_88,EditorNode::singleton);
    local_80 = *(undefined8 *)(param_2 + 0x60);
    Variant::Variant((Variant *)local_58,(ObjectID *)&local_80);
    Variant::Variant((Variant *)local_78,"source_picker");
    pVVar1 = (Variant *)Dictionary::operator[]((Variant *)aRStack_88);
    if (pVVar1 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar1 = 0;
      *(int *)pVVar1 = local_58[0];
      local_58[0] = 0;
      *(undefined8 *)(pVVar1 + 8) = local_50;
      *(undefined8 *)(pVVar1 + 0x10) = uStack_48;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)param_1,(Dictionary *)aRStack_88);
    Dictionary::~Dictionary((Dictionary *)aRStack_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::get_edited_resource() */

void EditorResourcePicker::get_edited_resource(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xa18) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xa18);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* EditorResourcePicker::get_base_type() const */

void EditorResourcePicker::get_base_type(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa10) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa10));
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
/* EditorAudioStreamPicker::_notification(int) [clone .part.0] */

void EditorAudioStreamPicker::_notification(int param_1)

{
  Object *pOVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 in_register_0000003c;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  float fVar12;
  double dVar13;
  float fVar14;
  Object *local_78;
  Object *local_70;
  float local_68 [10];
  long local_40;
  
  lVar10 = CONCAT44(in_register_0000003c,param_1);
  pOVar1 = *(Object **)(lVar10 + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0'))
  goto LAB_00100d6b;
  local_78 = (Object *)0x0;
  pOVar5 = (Object *)__dynamic_cast(pOVar1,&Object::typeinfo,&AudioStream::typeinfo,0);
  if ((pOVar5 != (Object *)0x0) &&
     (cVar3 = RefCounted::reference(), local_78 = pOVar5, cVar3 == '\0')) {
    local_78 = (Object *)0x0;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (local_78 == (Object *)0x0) goto LAB_00100d6b;
  dVar13 = (double)(**(code **)(*(long *)local_78 + 0x1f8))();
  if ((0.0 < dVar13) &&
     (AudioStreamPreviewGenerator::generate_preview((Ref *)&local_70), local_70 != (Object *)0x0)) {
    if (*(long *)(local_70 + 0x198) != *(long *)(lVar10 + 0xb00)) {
      CanvasItem::queue_redraw();
      *(undefined8 *)(lVar10 + 0xb00) = *(undefined8 *)(local_70 + 0x198);
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
      (**(code **)(*(long *)local_70 + 0x140))(local_70);
      Memory::free_static(local_70,false);
    }
  }
  lVar6 = AudioStream::get_tagged_frame();
  AudioServer::get_singleton();
  lVar7 = AudioServer::get_mixed_frames();
  uVar8 = (lVar7 - lVar6) * 1000;
  if ((long)uVar8 < 0) {
    fVar14 = (float)(uVar8 >> 1) + (float)(uVar8 >> 1);
  }
  else {
    fVar14 = (float)(long)uVar8;
  }
  plVar9 = (long *)AudioServer::get_singleton();
  fVar12 = (float)(**(code **)(*plVar9 + 0x188))(plVar9);
  fVar14 = fVar14 / fVar12;
  if (__LC27 <= fVar14) {
    if (299 < ((long)(fVar14 - __LC27) ^ 0x8000000000000000U)) goto LAB_00100e7b;
LAB_00100f9e:
    uVar4 = AudioStream::get_tagged_frame_count();
    cVar3 = uVar4 != *(uint *)(lVar10 + 0xb30);
    uVar11 = 8;
    if (uVar4 < 9) {
      uVar11 = uVar4;
    }
    if (uVar4 == 0) {
      if (*(uint *)(lVar10 + 0xb30) != 0) {
        *(undefined4 *)(lVar10 + 0xb30) = 0;
      }
    }
    else {
      lVar6 = 0;
      do {
        fVar12 = (float)AudioStream::get_tagged_frame_offset((int)local_78);
        fVar14 = *(float *)(lVar10 + 0xb10 + lVar6 * 4);
        local_68[lVar6] = fVar12;
        if (fVar12 != fVar14) {
          cVar3 = cVar2;
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar11);
      if (cVar3 != '\0') {
        *(uint *)(lVar10 + 0xb30) = uVar4;
        memcpy((void *)(lVar10 + 0xb10),local_68,(ulong)uVar4 << 2);
      }
    }
    CanvasItem::queue_redraw();
  }
  else {
    if ((ulong)(long)fVar14 < 300) goto LAB_00100f9e;
LAB_00100e7b:
    if (*(int *)(lVar10 + 0xb30) != 0) {
      CanvasItem::queue_redraw();
    }
    *(undefined4 *)(lVar10 + 0xb30) = 0;
  }
  if (((local_78 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_78), cVar2 != '\0')) {
    (**(code **)(*(long *)local_78 + 0x140))(local_78);
    Memory::free_static(local_78,false);
  }
LAB_00100d6b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::_resource_changed() */

void __thiscall EditorResourcePicker::_resource_changed(EditorResourcePicker *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  pOVar3 = *(Object **)(this + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
  }
  if (_resource_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_resource_changed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_resource_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_resource_changed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_resource_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  Variant::Variant((Variant *)local_68,pOVar3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_resource_changed()::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x368))(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_is_custom_type_script() const */

undefined4 __thiscall EditorResourcePicker::_is_custom_type_script(EditorResourcePicker *this)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)(this + 0xa18) == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)(this + 0xa18),&Object::typeinfo,&Script::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = 0;
  if (*(long **)(this + 0xac0) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(this + 0xac0) + 0xa0))();
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* EditorResourcePicker::set_assign_button_min_size(Vector2i const&) */

void __thiscall
EditorResourcePicker::set_assign_button_min_size(EditorResourcePicker *this,Vector2i *param_1)

{
  Vector2 *pVVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  pVVar1 = *(Vector2 **)(this + 0xa88);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0xab8) = *(undefined8 *)param_1;
  Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xab8));
  Control::set_custom_minimum_size(pVVar1);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::set_edited_resource_no_check(Ref<Resource>) */

void __thiscall
EditorResourcePicker::set_edited_resource_no_check(EditorResourcePicker *this,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(this + 0xa18);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0xa18) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0xa18) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x368))(this);
  return;
}



/* EditorResourcePicker::is_toggle_pressed() const */

void EditorResourcePicker::is_toggle_pressed(void)

{
  BaseButton::is_pressed();
  return;
}



/* EditorResourcePicker::set_resource_owner(Object*) */

void __thiscall EditorResourcePicker::set_resource_owner(EditorResourcePicker *this,Object *param_1)

{
  *(Object **)(this + 0xac0) = param_1;
  return;
}



/* EditorResourcePicker::_ensure_resource_menu() */

void __thiscall EditorResourcePicker::_ensure_resource_menu(EditorResourcePicker *this)

{
  if (*(long *)(this + 0xac8) != 0) {
    return;
  }
  _ensure_resource_menu(this);
  return;
}



/* EditorShaderPicker::set_edited_material(ShaderMaterial*) */

void __thiscall
EditorShaderPicker::set_edited_material(EditorShaderPicker *this,ShaderMaterial *param_1)

{
  *(ShaderMaterial **)(this + 0xb00) = param_1;
  return;
}



/* EditorShaderPicker::get_edited_material() const */

undefined8 __thiscall EditorShaderPicker::get_edited_material(EditorShaderPicker *this)

{
  return *(undefined8 *)(this + 0xb00);
}



/* EditorShaderPicker::set_preferred_mode(int) */

void __thiscall EditorShaderPicker::set_preferred_mode(EditorShaderPicker *this,int param_1)

{
  *(int *)(this + 0xb08) = param_1;
  return;
}



/* EditorAudioStreamPicker::_notification(int) */

void __thiscall EditorAudioStreamPicker::_notification(EditorAudioStreamPicker *this,int param_1)

{
  if (param_1 == 0x19) {
    _notification((int)this);
    return;
  }
  if ((param_1 & 0xffffffdfU) != 0xd) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001014ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x368))();
  return;
}



/* EditorResourcePicker::_is_type_valid(String const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) const */

undefined8 __thiscall
EditorResourcePicker::_is_type_valid(EditorResourcePicker *this,String *param_1,HashSet *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  char *__s;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  iVar2 = *(int *)(param_2 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar2 == 0) {
LAB_001018d8:
    uVar5 = 0;
  }
  else {
    plVar3 = *(long **)param_2;
    lVar6 = 0;
    lVar7 = *plVar3;
    if (lVar7 == 0) goto LAB_001018a7;
LAB_00101780:
    __s = *(char **)(lVar7 + 8);
    local_68 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0x10));
      }
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_68);
    }
    cVar4 = String::operator==(param_1,(String *)&local_68);
    if (cVar4 == '\0') {
      do {
        StringName::StringName((StringName *)&local_58,(String *)&local_68,false);
        StringName::StringName((StringName *)&local_60,param_1,false);
        cVar4 = ClassDB::is_parent_class((StringName *)&local_60,(StringName *)&local_58);
        if (cVar4 == '\0') {
          cVar4 = EditorData::script_class_is_parent
                            ((String *)(EditorNode::singleton + 0x430),param_1);
          if (StringName::configured != '\0') goto joined_r0x00101911;
        }
        else {
          cVar4 = StringName::configured;
          if (StringName::configured == '\0') break;
joined_r0x00101911:
          if (local_60 != 0) {
            StringName::unref();
          }
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
        }
        lVar7 = local_68;
        if (cVar4 != '\0') break;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        if (iVar2 <= (int)lVar6 + 1) goto LAB_001018d8;
        lVar6 = lVar6 + 1;
        lVar7 = plVar3[lVar6];
        if (lVar7 != 0) goto LAB_00101780;
LAB_001018a7:
        local_68 = 0;
        cVar4 = String::operator==(param_1,(String *)&local_68);
        if (cVar4 != '\0') break;
      } while( true );
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar5 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* EditorResourcePicker::EditorResourcePicker(bool) */

void __thiscall EditorResourcePicker::EditorResourcePicker(EditorResourcePicker *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Button *pBVar4;
  CallableCustom *pCVar5;
  TextureRect *this_00;
  long in_FS_OFFSET;
  Button local_a8 [16];
  Callable local_98 [16];
  Button local_88 [16];
  Callable local_78 [16];
  Button local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined ***)this = &PTR__initialize_classv_00128f50;
  *(undefined2 *)(this + 0xa20) = 1;
  uVar3 = _LC50;
  this[0xa0c] = (EditorResourcePicker)0x1;
  *(undefined8 *)(this + 0xa58) = uVar3;
  *(undefined8 *)(this + 0xa80) = uVar3;
  uVar3 = _LC51;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined8 *)(this + 0xab8) = uVar3;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0xad0),"_set_create_options",false);
  this[0xad8] = (EditorResourcePicker)0x0;
  *(undefined8 *)(this + 0xae0) = 0;
  StringName::StringName((StringName *)(this + 0xae8),"_handle_menu_selected",false);
  this[0xaf0] = (EditorResourcePicker)0x0;
  *(undefined8 *)(this + 0xaf8) = 0;
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar4,(String *)local_58);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xa88) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa88),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa88),3);
  Button::set_expand_icon(SUB81(*(undefined8 *)(this + 0xa88),0));
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa88),0));
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa88),2);
  plVar1 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar1 + 0x318);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0012a180;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar3;
  *(code **)(pCVar5 + 0x38) = drop_data_fw;
  *(EditorResourcePicker **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "EditorResourcePicker::drop_data_fw";
  Callable::Callable((Callable *)local_58,pCVar5);
  Callable::bind<Button*>(local_68);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_0012a0f0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar3;
  *(code **)(pCVar5 + 0x38) = can_drop_data_fw;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(EditorResourcePicker **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "EditorResourcePicker::can_drop_data_fw";
  Callable::Callable(local_78,pCVar5);
  Callable::bind<Button*>(local_88);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_0012a060;
  *(undefined8 *)(pCVar5 + 0x30) = uVar3;
  *(code **)(pCVar5 + 0x38) = get_drag_data_fw;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(EditorResourcePicker **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "EditorResourcePicker::get_drag_data_fw";
  Callable::Callable(local_98,pCVar5);
  Callable::bind<Button*>(local_a8);
  (*pcVar2)(plVar1,local_a8,local_88,local_68);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable(local_98);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable(local_78);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa88),0,0);
  plVar1 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorResourcePicker>
            ((EditorResourcePicker *)local_58,(char *)this,
             (_func_void *)"&EditorResourcePicker::_resource_selected");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorResourcePicker>
            ((EditorResourcePicker *)local_58,(char *)this,
             (_func_void *)"&EditorResourcePicker::_button_draw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorResourcePicker,Ref<InputEvent>const&>
            ((EditorResourcePicker *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&EditorResourcePicker::_button_input");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (!param_1) {
    this_00 = (TextureRect *)operator_new(0x9e0,"");
    TextureRect::TextureRect(this_00);
    postinitialize_handler((Object *)this_00);
    *(TextureRect **)(this + 0xa90) = this_00;
    TextureRect::set_expand_mode(this_00,1);
    Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa90),0xf,0,0);
    Control::set_offset(*(undefined8 *)(this + 0xa90),1);
    Control::set_offset(*(undefined8 *)(this + 0xa90),3);
    Control::set_offset(*(undefined8 *)(this + 0xa90),2);
    (**(code **)(**(long **)(this + 0xa90) + 0x2c8))(*(long **)(this + 0xa90),3);
    Node::add_child(*(undefined8 *)(this + 0xa88),*(undefined8 *)(this + 0xa90),0,0);
  }
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar4,(String *)local_58);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xa98) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa98),0));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa98),0));
  BaseButton::set_action_mode(*(undefined8 *)(this + 0xa98),0);
  plVar1 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorResourcePicker>
            ((EditorResourcePicker *)local_58,(char *)this,
             (_func_void *)"&EditorResourcePicker::_update_menu");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa98),0,0);
  plVar1 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorResourcePicker,Ref<InputEvent>const&>
            ((EditorResourcePicker *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&EditorResourcePicker::_button_input");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  StringName::StringName((StringName *)local_58,"separation",false);
  Control::add_theme_constant_override((StringName *)this,(int)(CowData<char32_t> *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPicker::EditorScriptPicker() */

void __thiscall EditorScriptPicker::EditorScriptPicker(EditorScriptPicker *this)

{
  EditorResourcePicker::EditorResourcePicker((EditorResourcePicker *)this,false);
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001292e0;
  return;
}



/* EditorShaderPicker::EditorShaderPicker() */

void __thiscall EditorShaderPicker::EditorShaderPicker(EditorShaderPicker *this)

{
  EditorResourcePicker::EditorResourcePicker((EditorResourcePicker *)this,false);
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00129670;
  *(undefined4 *)(this + 0xb08) = 0xffffffff;
  return;
}



/* EditorAudioStreamPicker::EditorAudioStreamPicker() */

void __thiscall EditorAudioStreamPicker::EditorAudioStreamPicker(EditorAudioStreamPicker *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Control *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorResourcePicker::EditorResourcePicker((EditorResourcePicker *)this,true);
  *(undefined8 *)(this + 0xb00) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00129a00;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined4 *)(this + 0xb30) = 0;
  this_00 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_00);
  postinitialize_handler((Object *)this_00);
  *(Control **)(this + 0xb08) = this_00;
  Control::set_anchors_and_offsets_preset(this_00,0xf,0,0);
  Control::set_offset(*(undefined8 *)(this + 0xb08),1);
  Control::set_offset(*(undefined8 *)(this + 0xb08),3);
  Control::set_offset(*(undefined8 *)(this + 0xb08),2);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xb08),2);
  plVar1 = *(long **)(this + 0xb08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_01 + 0x40) = 0;
  *(undefined ***)this_01 = &PTR_hash_0012a2a0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _preview_draw;
  *(EditorAudioStreamPicker **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorAudioStreamPicker::_preview_draw";
  Callable::Callable(aCStack_48,this_01);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,aCStack_48,0);
  Callable::~Callable(aCStack_48);
  Node::add_child(*(undefined8 *)(this + 0xa88),*(undefined8 *)(this + 0xb08),0,0);
  Node::move_child(*(Node **)(this + 0xa88),(int)*(undefined8 *)(this + 0xb08));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process_internal(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorShaderPicker::set_create_options(Object*) */

void __thiscall EditorShaderPicker::set_create_options(EditorShaderPicker *this,Object *param_1)

{
  char cVar1;
  int iVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pSVar3 = (String *)__dynamic_cast(param_1,&Object::typeinfo,&PopupMenu::typeinfo,0);
    if (pSVar3 != (String *)0x0) {
      local_60 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "New Shader...";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      if (set_create_options(Object*)::{lambda()#1}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&set_create_options(Object*)::{lambda()#1}::operator()()::sname)
        ;
        if (iVar2 != 0) {
          _scs_create((char *)&set_create_options(Object*)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_create_options(Object*)::{lambda()#1}::operator()()::sname,&__dso_handle
                      );
          __cxa_guard_release(&set_create_options(Object*)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_70);
      PopupMenu::add_icon_item(pSVar3,(StringName *)&local_70,(String *)&local_58,0x32,0);
      if (local_70 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_70);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_70 + 0x140))(local_70);
            Memory::free_static(local_70,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      local_58 = (char *)0x0;
      PopupMenu::add_separator(pSVar3,(int)(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_get_resource_type(Ref<Resource> const&) const */

Ref * EditorResourcePicker::_get_resource_type(Ref *param_1)

{
  char *__s;
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  long *in_RDX;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  CowData<char32_t> local_78 [8];
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((long *)*in_RDX == (long *)0x0) {
    *(undefined8 *)param_1 = 0;
    goto LAB_00102709;
  }
  (**(code **)(*(long *)*in_RDX + 0x48))(&local_88);
  (**(code **)(*(long *)*in_RDX + 0x98))(local_58);
  lVar3 = Variant::get_validated_object();
  if (lVar3 == 0) {
LAB_001026e0:
    cVar2 = Variant::needs_deinit[local_58[0]];
joined_r0x00102750:
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = local_88;
    local_88 = 0;
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
      cVar2 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x00102750;
    }
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_001026e0;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Resource::get_path();
    EditorData::script_class_get_name((String *)&local_70);
    if (local_70 == 0) {
      local_80 = 0;
    }
    else {
      __s = *(char **)(local_70 + 8);
      local_80 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_70 + 0x10));
      }
      else {
        local_60 = strlen(__s);
        local_68 = __s;
        String::parse_latin1((StrRange *)&local_80);
      }
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    CowData<char32_t>::_unref(local_78);
    if ((local_80 != 0) && (1 < *(uint *)(local_80 + -8))) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_80);
    }
    uVar1 = local_88;
    local_88 = 0;
    *(undefined8 *)param_1 = uVar1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00102709:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorResourcePicker::_resource_saved(Object*) */

void __thiscall EditorResourcePicker::_resource_saved(EditorResourcePicker *this,Object *param_1)

{
  Ref *pRVar1;
  int iVar2;
  long in_FS_OFFSET;
  Object *local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  pRVar1 = *(Ref **)(this + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pRVar1 == (Ref *)param_1) && (pRVar1 != (Ref *)0x0)) {
    local_80 = (Object *)0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_80,pRVar1);
    if (_resource_saved(Object*)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_resource_saved(Object*)::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_resource_saved(Object*)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_resource_saved(Object*)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_resource_saved(Object*)::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,local_80);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_resource_saved(Object*)::{lambda()#1}::operator()()::sname,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Resource>::unref((Ref<Resource> *)&local_80);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001028d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x368))(this);
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_duplicate_selected_resources() */

void __thiscall EditorResourcePicker::_duplicate_selected_resources(EditorResourcePicker *this)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Object *pOVar6;
  Variant *pVVar7;
  StringName *pSVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  Variant local_80 [8];
  Object *local_78;
  Object *local_70;
  Variant local_68 [8];
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Tree::get_root();
  if (lVar4 != 0) {
    do {
      cVar2 = TreeItem::is_checked((int)lVar4);
      if (cVar2 != '\0') {
        iVar9 = (int)(Variant *)local_58;
        TreeItem::get_metadata(iVar9);
        Variant::operator_cast_to_Array(local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar10 = (int)local_80;
        Array::operator[](iVar10);
        local_78 = (Object *)0x0;
        lVar5 = Variant::get_validated_object();
        if (lVar5 == 0) {
LAB_00102a49:
          pOVar6 = (Object *)0x0;
        }
        else {
          pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&Resource::typeinfo,0);
          if (pOVar6 == (Object *)0x0) goto LAB_00102a49;
          local_78 = pOVar6;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_78 = (Object *)0x0;
            goto LAB_00102a49;
          }
        }
        (**(code **)(*(long *)pOVar6 + 0x198))((Ref<Resource> *)&local_70,pOVar6,0);
        if (local_70 == (Object *)0x0) {
          _err_print_error("_duplicate_selected_resources","editor/editor_resource_picker.cpp",0x42f
                           ,"Condition \"unique_resource.is_null()\" is true.",0,0);
          Ref<Resource>::unref((Ref<Resource> *)&local_70);
          Ref<Resource>::unref((Ref<Resource> *)&local_78);
          Array::~Array((Array *)local_80);
          break;
        }
        Variant::Variant((Variant *)local_58,local_70);
        pVVar7 = (Variant *)Array::operator[](iVar10);
        if (pVVar7 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar7 = 0;
          *(int *)pVVar7 = local_58[0];
          *(undefined8 *)(pVVar7 + 8) = local_50;
          *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        }
        iVar3 = Array::size();
        if (iVar3 == 1) {
          pOVar1 = *(Object **)(this + 0xa18);
          if (local_70 != pOVar1) {
            *(Object **)(this + 0xa18) = local_70;
            if (local_70 != (Object *)0x0) {
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                *(undefined8 *)(this + 0xa18) = 0;
              }
            }
            if (pOVar1 != (Object *)0x0) {
              cVar2 = RefCounted::unreference();
              if (cVar2 != '\0') {
                cVar2 = predelete_handler(pOVar1);
                if (cVar2 != '\0') {
                  (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                  Memory::free_static(pOVar1,false);
                  _resource_changed(this);
                  goto LAB_00102bda;
                }
              }
            }
          }
          _resource_changed(this);
        }
        else {
          TreeItem::get_parent();
          TreeItem::get_metadata(iVar9);
          Variant::operator_cast_to_Array(local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::operator[]((int)local_68);
          pSVar8 = (StringName *)Variant::get_validated_object();
          if (pSVar8 != (StringName *)0x0) {
            pSVar8 = (StringName *)__dynamic_cast(pSVar8,&Object::typeinfo,&Resource::typeinfo,0);
            if (pSVar8 != (StringName *)0x0) {
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                pSVar8 = (StringName *)0x0;
              }
            }
          }
          Variant::Variant((Variant *)local_58,local_70);
          Array::operator[](iVar10);
          Variant::operator_cast_to_StringName((Variant *)&local_60);
          Object::set(pSVar8,(Variant *)&local_60,(bool *)local_58);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (pSVar8 != (StringName *)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              cVar2 = predelete_handler((Object *)pSVar8);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pSVar8 + 0x140))(pSVar8);
                Memory::free_static(pSVar8,false);
              }
            }
          }
          Array::~Array((Array *)local_68);
        }
LAB_00102bda:
        if (local_70 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar1 = local_70;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_70);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        Array::~Array((Array *)local_80);
      }
      lVar4 = TreeItem::get_next_in_tree(SUB81(lVar4,0));
    } while (lVar4 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_file_selected(String const&) */

void __thiscall EditorResourcePicker::_file_selected(EditorResourcePicker *this,String *param_1)

{
  long *plVar1;
  CowData *pCVar2;
  char *pcVar3;
  String *pSVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  Object *local_e0;
  Ref *local_b8;
  CowData<char32_t> local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  ResourceLoader::load((Ref<Resource> *)&local_b8,param_1,(StrRange *)&local_70,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_b8 == (Ref *)0x0) {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"\'.");
    operator+((char *)&local_78,(String *)"Cannot load resource from path \'");
    String::operator+((String *)&local_68,(String *)&local_78);
    _err_print_error("_file_selected","editor/editor_resource_picker.cpp",0x8e,
                     "Condition \"loaded_resource.is_null()\" is true.",(String *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    if ((*(long *)(this + 0xa10) == 0) || (*(uint *)(*(long *)(this + 0xa10) + -8) < 2)) {
LAB_00102eed:
      Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),local_b8);
      _resource_changed(this);
      if (((local_b8 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_b8), cVar5 != '\0')) {
        (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
        Memory::free_static(local_b8,false);
      }
      goto LAB_00102f18;
    }
    (**(code **)(*(long *)local_b8 + 0x48))(local_b0);
    (**(code **)(*(long *)local_b8 + 0x98))(local_58);
    lVar8 = Variant::get_validated_object();
    if (lVar8 == 0) {
LAB_00103170:
      cVar5 = Variant::needs_deinit[local_58[0]];
joined_r0x001034f3:
      if (cVar5 != '\0') {
        Variant::_clear_internal();
      }
      local_e0 = (Object *)0x0;
      cVar5 = '\0';
    }
    else {
      local_e0 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Script::typeinfo,0);
      if (local_e0 == (Object *)0x0) {
        cVar5 = Variant::needs_deinit[local_58[0]];
        goto joined_r0x001034f3;
      }
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') goto LAB_00103170;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Resource::get_path();
      EditorData::script_class_get_name((String *)&local_68);
      if (local_68 == (char *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = 0;
        if (*(char **)(local_68 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(local_68 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_78,*(char **)(local_68 + 8));
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
        cVar5 = '\0';
      }
      else {
        CowData<char32_t>::_ref(local_b0,(CowData *)&local_78);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    pCVar2 = (CowData *)(this + 0xa10);
    for (iVar9 = 0; iVar7 = String::get_slice_count((char *)pCVar2), pSVar4 = EditorNode::singleton,
        iVar9 < iVar7; iVar9 = iVar9 + 1) {
      String::get_slice((char *)&local_68,(int)pCVar2);
      if (cVar5 == '\0') {
        cVar6 = (**(code **)(*(long *)local_b8 + 0x58))();
        pcVar3 = local_68;
      }
      else {
        cVar6 = EditorData::script_class_is_parent(EditorNode::singleton + 0x430,(String *)local_b0)
        ;
        pcVar3 = local_68;
      }
      local_68 = pcVar3;
      if (cVar6 != '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (((local_e0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_e0), cVar5 != '\0')) {
          (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
          Memory::free_static(local_e0,false);
        }
        CowData<char32_t>::_unref(local_b0);
        goto LAB_00102eed;
      }
      if (pcVar3 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(pcVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Warning!";
    local_78 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    TTR(local_80,(String *)&local_78);
    local_88 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,pCVar2);
    local_90 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)local_b0);
    local_68 = "";
    local_a0 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_68 = "The selected resource (%s) does not match any type expected for this property (%s)."
    ;
    local_a8 = 0;
    local_60 = 0x53;
    String::parse_latin1((StrRange *)&local_a8);
    TTR(local_98,(String *)&local_a8);
    vformat<String,String>
              ((String *)&local_68,local_98,(CowData<char32_t> *)&local_90,
               (CowData<char32_t> *)&local_88);
    EditorNode::show_warning(pSVar4,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (((local_e0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_e0), cVar5 != '\0')) {
      (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
      Memory::free_static(local_e0,false);
    }
    CowData<char32_t>::_unref(local_b0);
  }
  Ref<Resource>::unref((Ref<Resource> *)&local_b8);
LAB_00102f18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_update_resource() */

void __thiscall EditorResourcePicker::_update_resource(EditorResourcePicker *this)

{
  Vector2 *pVVar1;
  undefined8 uVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  Ref *pRVar6;
  long in_FS_OFFSET;
  String *local_f0;
  char *local_b0;
  Ref local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (char *)0x0;
  if (*(long *)(this + 0xa18) != 0) {
    Resource::get_path();
    cVar4 = String::is_resource_file();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar4 != '\0') {
      local_70 = 0;
      local_68 = "\n";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      Resource::get_path();
      String::operator+((String *)&local_68,(String *)&local_78);
      if (local_b0 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
  }
  local_f0 = (String *)&local_b0;
  _get_resource_type(local_a8);
  if (*(Ref **)(this + 0xa90) == (Ref *)0x0) {
    if (*(long **)(this + 0xa18) != (long *)0x0) {
      pSVar3 = *(String **)(this + 0xa88);
      (**(code **)(**(long **)(this + 0xa18) + 0x48))((CowData<char32_t> *)&local_70);
      local_68 = " ";
      local_80 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_80);
      local_68 = "";
      local_98 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_98);
      local_68 = "Type:";
      local_a0 = 0;
      local_60 = 5;
      String::parse_latin1((StrRange *)&local_a0);
      TTR((String *)&local_90,(String *)&local_a0);
      String::operator+(local_88,local_f0);
      String::operator+((String *)&local_78,local_88);
      String::operator+((String *)&local_68,(String *)&local_78);
      Control::set_tooltip_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    goto LAB_00103ba6;
  }
  local_68 = (char *)0x0;
  TextureRect::set_texture(*(Ref **)(this + 0xa90));
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
  pVVar1 = *(Vector2 **)(this + 0xa88);
  local_58[0] = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xab8));
  Control::set_custom_minimum_size(pVVar1);
  pSVar3 = EditorNode::singleton;
  if (*(long *)(this + 0xa18) == 0) {
    local_68 = (char *)0x0;
    Button::set_button_icon(*(Ref **)(this + 0xa88));
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
    pSVar3 = *(String **)(this + 0xa88);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"<empty>");
    TTR((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    pSVar3 = *(String **)(this + 0xa88);
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"");
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    goto LAB_00103ba6;
  }
  pRVar6 = *(Ref **)(this + 0xa88);
  if ((_update_resource()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_resource()::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_update_resource()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_resource()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_resource()::{lambda()#1}::operator()()::sname);
  }
  if (_update_resource()::{lambda()#1}::operator()()::sname == 0) {
    local_70 = 0;
  }
  else {
    local_70 = 0;
    if (*(char **)(_update_resource()::{lambda()#1}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_70,
                 (CowData *)(_update_resource()::{lambda()#1}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_70,
                 *(char **)(_update_resource()::{lambda()#1}::operator()()::sname + 8));
    }
  }
  EditorNode::get_object_icon((Object *)&local_68,pSVar3);
  Button::set_button_icon(pRVar6);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Resource::get_name();
  if ((local_68 == (char *)0x0) || (uVar2 = *(undefined8 *)(local_68 + -8), (int)uVar2 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00103d15:
    Resource::get_path();
    cVar4 = String::is_resource_file();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar4 == '\0') {
      Button::set_text(*(String **)(this + 0xa88));
    }
    else {
      pSVar3 = *(String **)(this + 0xa88);
      Resource::get_path();
      String::get_file();
      Button::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((int)uVar2 == 1) goto LAB_00103d15;
    pSVar3 = *(String **)(this + 0xa88);
    Resource::get_name();
    Button::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  Resource::get_path();
  cVar4 = String::is_resource_file();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (cVar4 != '\0') {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"\n");
    Resource::get_path();
    String::operator+((String *)&local_68,(String *)&local_78);
    if (local_b0 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      local_b0 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  pSVar3 = *(String **)(this + 0xa88);
  local_78 = 0;
  local_68 = " ";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = "";
  local_90 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_68 = "Type:";
  local_98 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_98);
  TTR(local_88,(String *)&local_98);
  String::operator+((String *)&local_80,local_f0);
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_70);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pRVar6 = (Ref *)EditorResourcePreview::get_singleton();
  local_70 = *(undefined8 *)(*(long *)(this + 0xa18) + 0x60);
  Variant::Variant((Variant *)local_58,(CowData<char32_t> *)&local_70);
  StringName::StringName((StringName *)&local_68,"_update_resource_preview",false);
  EditorResourcePreview::queue_edited_resource_preview
            (pRVar6,(Object *)(this + 0xa18),(StringName *)this,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00103ba6:
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa88),0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAudioStreamPicker::_update_resource() */

void __thiscall EditorAudioStreamPicker::_update_resource(EditorAudioStreamPicker *this)

{
  Object *pOVar1;
  Vector2 *pVVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  Object *pOVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  double dVar8;
  Object *local_48;
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorResourcePicker::_update_resource((EditorResourcePicker *)this);
  if ((_update_resource()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_resource()::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_update_resource()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_resource()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_resource()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_48,(StringName *)this);
  if ((_update_resource()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_resource()::{lambda()#2}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_update_resource()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_resource()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_resource()::{lambda()#2}::operator()()::sname);
  }
  uVar4 = Control::get_theme_font_size
                    ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
  pOVar1 = *(Object **)(this + 0xa18);
  if ((pOVar1 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
LAB_0010407d:
    pOVar6 = (Object *)0x0;
LAB_00104080:
    local_3c = (float)(**(code **)(*(long *)local_48 + 0x218))(local_48,uVar4);
    local_3c = local_3c * __LC103;
    local_40 = 0x3f800000;
    uVar7 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
    pVVar2 = *(Vector2 **)(this + 0xa88);
    *(undefined8 *)(this + 0xab8) = uVar7;
    local_38 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xab8));
    Control::set_custom_minimum_size(pVVar2);
    CanvasItem::queue_redraw();
    if (pOVar6 == (Object *)0x0) goto LAB_00104036;
    cVar3 = RefCounted::unreference();
  }
  else {
    pOVar6 = (Object *)__dynamic_cast(pOVar1,&Object::typeinfo,&AudioStream::typeinfo,0);
    if ((pOVar6 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      cVar3 = RefCounted::unreference();
      if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar1), cVar3 == '\0')) goto LAB_0010407d;
      pOVar6 = (Object *)0x0;
LAB_00104202:
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      if (pOVar6 == (Object *)0x0) {
        pOVar6 = (Object *)0x0;
        goto LAB_00104080;
      }
    }
    else {
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) goto LAB_00104202;
    }
    dVar8 = (double)(**(code **)(*(long *)pOVar6 + 0x1f8))(pOVar6);
    if (dVar8 <= 0.0) goto LAB_00104080;
    local_3c = (float)(**(code **)(*(long *)local_48 + 0x218))(local_48,uVar4);
    local_3c = local_3c * __LC102;
    local_40 = 0x3f800000;
    uVar7 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
    pVVar2 = *(Vector2 **)(this + 0xa88);
    *(undefined8 *)(this + 0xab8) = uVar7;
    local_38 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xab8));
    Control::set_custom_minimum_size(pVVar2);
    CanvasItem::queue_redraw();
    cVar3 = RefCounted::unreference();
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00104036:
  if (((local_48 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPicker::set_create_options(Object*) */

void __thiscall EditorScriptPicker::set_create_options(EditorScriptPicker *this,Object *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long lVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (pSVar4 = (String *)__dynamic_cast(param_1,&Object::typeinfo,&PopupMenu::typeinfo,0),
     pSVar4 == (String *)0x0)) goto LAB_00104581;
  plVar1 = *(long **)(this + 0xb00);
  if ((plVar1 == (long *)0x0) ||
     (cVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,SceneStringNames::singleton + 0x230),
     cVar2 == '\0')) {
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "New Script...";
    local_78 = 0;
    local_60 = 0xd;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    if ((set_create_options(Object*)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&set_create_options(Object*)::{lambda()#1}::operator()()::sname)
       , iVar3 != 0)) {
      _scs_create((char *)&set_create_options(Object*)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &set_create_options(Object*)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&set_create_options(Object*)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    PopupMenu::add_icon_item(pSVar4,(StringName *)&local_80,(String *)&local_68,0x32,0);
    if (((local_80 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_80), cVar2 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))();
      Memory::free_static(local_80,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (*(long **)(this + 0xb00) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb00) + 0x98))(local_58);
    lVar5 = Variant::get_validated_object();
    if (lVar5 == 0) {
LAB_001045a8:
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar6 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_70 = 0;
          local_68 = "";
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_70);
          local_68 = "Extend Script...";
          local_78 = 0;
          local_60 = 0x10;
          String::parse_latin1((StrRange *)&local_78);
          TTR((String *)&local_68,(String *)&local_78);
          if ((set_create_options(Object*)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar3 = __cxa_guard_acquire(&set_create_options(Object*)::{lambda()#2}::operator()()::
                                           sname), iVar3 != 0)) {
            _scs_create((char *)&set_create_options(Object*)::{lambda()#2}::operator()()::sname,true
                       );
            __cxa_atexit(StringName::~StringName,
                         &set_create_options(Object*)::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&set_create_options(Object*)::{lambda()#2}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_80);
          PopupMenu::add_icon_item(pSVar4,(StringName *)&local_80,(String *)&local_68,0x33,0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
          goto LAB_00104560;
        }
        goto LAB_001045a8;
      }
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00104560:
  local_68 = (char *)0x0;
  PopupMenu::add_separator(pSVar4,(int)(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00104581:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_update_resource_preview(String const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, ObjectID) */

void __thiscall
EditorResourcePicker::_update_resource_preview
          (EditorResourcePicker *this,undefined8 param_2_00,long *param_2,undefined8 param_4,
          long param_5)

{
  String *pSVar1;
  Vector2 *pVVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined1 auVar10 [16];
  long *local_88;
  Object *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  long local_40;
  
  lVar8 = *(long *)(this + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((lVar8 != 0) && (param_5 == *(long *)(lVar8 + 0x60))) && (*(long *)(this + 0xa90) != 0)) {
    pOVar6 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Script::typeinfo,0);
    if ((pOVar6 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      if (*param_2 != 0) {
        uVar7 = *(undefined8 *)(this + 0xa90);
        Button::get_button_icon();
        iVar4 = (**(code **)(*local_88 + 0x1c8))();
        local_78 = (undefined *)0x0;
        Control::get_theme_stylebox((StringName *)&local_80,*(StringName **)(this + 0xa88));
        fVar9 = (float)StyleBox::get_content_margin(local_80,0);
        if ((_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
             ::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                                         ::{lambda()#2}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                               ::{lambda()#2}::operator()()::sname);
        }
        if ((_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
             ::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                                         ::{lambda()#1}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                               ::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                        ::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                               ::{lambda()#1}::operator()()::sname);
        }
        iVar5 = Control::get_theme_constant
                          ((StringName *)this,
                           (StringName *)
                           &_update_resource_preview(String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID)
                            ::{lambda()#1}::operator()()::sname);
        auVar10._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar10._0_4_ = (float)iVar5 + fVar9 + (float)iVar4;
        Control::set_offset(auVar10._0_8_,uVar7);
        if (((local_80 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
        }
        if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
          StringName::unref();
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
        lVar8 = *(long *)(this + 0xa18);
        if (lVar8 == 0) {
LAB_00104be8:
          TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa90),5);
          local_78 = (undefined *)0x0;
          String::parse_latin1((String *)&local_78,"filesystem/file_dialog/thumbnail_size");
          _EDITOR_GET((String *)&local_58);
          iVar4 = Variant::operator_cast_to_int((Variant *)&local_58);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          fVar9 = (float)EditorScale::get_scale();
          pVVar2 = *(Vector2 **)(this + 0xa88);
          local_58 = CONCAT44((float)(int)((float)iVar4 * fVar9),0x3f800000);
          uVar7 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
          local_5c = (int)((ulong)uVar7 >> 0x20);
          if (local_5c < *(int *)(this + 0xabc)) {
            local_5c = *(int *)(this + 0xabc);
          }
          local_60 = *(int *)(this + 0xab8);
          if (*(int *)(this + 0xab8) < (int)uVar7) {
            local_60 = (int)uVar7;
          }
          local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
          Control::set_custom_minimum_size(pVVar2);
        }
        else {
          pOVar6 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&GradientTexture1D::typeinfo,0);
          if (pOVar6 == (Object *)0x0) {
LAB_001049d2:
            pOVar6 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Gradient::typeinfo,0);
            if ((pOVar6 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0'))
            goto LAB_00104be8;
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              lVar8 = *(long *)(this + 0xa18);
              if (lVar8 == 0) goto LAB_00104be8;
              goto LAB_001049d2;
            }
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa90),0);
          pVVar2 = *(Vector2 **)(this + 0xa88);
          local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xab8));
          Control::set_custom_minimum_size(pVVar2);
        }
        TextureRect::set_texture(*(Ref **)(this + 0xa90));
        pSVar1 = *(String **)(this + 0xa88);
        local_80 = (Object *)0x0;
        local_78 = &_LC4;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_80);
        Button::set_text(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
    }
    else {
      pSVar1 = *(String **)(this + 0xa88);
      Resource::get_path();
      String::get_file();
      Button::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar6,false);
          return;
        }
        goto LAB_00104ce1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104ce1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorResourcePicker::_ensure_allowed_types() const [clone .part.0] */

void __thiscall EditorResourcePicker::_ensure_allowed_types(EditorResourcePicker *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  void *pvVar14;
  long *plVar15;
  long in_FS_OFFSET;
  int local_c0;
  long *local_90;
  long local_88;
  long local_80;
  char local_78 [8];
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (long *)0x0;
  String::split(local_78,(bool)((char)this + '\x10'),0x111bd6);
  if (local_70 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = *(int *)(local_70 + -8);
  }
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  lVar10 = local_70;
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  lVar11 = local_70;
  if (local_70 != 0) {
    lVar11 = local_70 + *(long *)(local_70 + -8) * 8;
  }
  if (lVar10 != lVar11) {
    do {
      while( true ) {
        String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),SUB81(lVar10,0));
        cVar8 = String::begins_with((char *)&local_88);
        if (cVar8 == '\0') break;
        String::right((int)(CowData<char32_t> *)&local_80);
        StringName::StringName((StringName *)local_68,(String *)&local_80,false);
        plVar15 = local_90;
        if (local_90 != (long *)0x0) {
          for (plVar1 = (long *)*local_90; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
            lVar2 = *plVar1;
            if (local_68._0_8_ == lVar2) {
              if (local_90 == (long *)plVar1[3]) {
                lVar9 = plVar1[1];
                if (plVar1 == (long *)*local_90) {
                  *local_90 = lVar9;
                  lVar3 = plVar1[2];
                  plVar4 = (long *)local_90[1];
                }
                else {
                  lVar3 = plVar1[2];
                  plVar4 = (long *)local_90[1];
                }
                if (plVar1 == plVar4) {
                  local_90[1] = lVar3;
                }
                if (lVar3 != 0) {
                  *(long *)(lVar3 + 8) = lVar9;
                  lVar9 = plVar1[1];
                }
                if (lVar9 != 0) {
                  *(long *)(lVar9 + 0x10) = lVar3;
                }
                if ((StringName::configured != '\0') && (lVar2 != 0)) {
                  StringName::unref();
                }
                Memory::free_static(plVar1,false);
                *(int *)(plVar15 + 2) = (int)plVar15[2] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              if ((int)local_90[2] == 0) {
                Memory::free_static(local_90,false);
                local_90 = (long *)0x0;
              }
              break;
            }
          }
        }
        if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
          StringName::unref();
        }
        lVar10 = lVar10 + 8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (lVar11 == lVar10) goto LAB_001050db;
      }
      StringName::StringName((StringName *)local_68,(String *)&local_88,false);
      _add_allowed_type((StringName *)local_68,(List *)&local_90);
      if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
        StringName::unref();
      }
      lVar2 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar15 = (long *)(local_88 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar11 != lVar10);
  }
LAB_001050db:
  if (local_90 != (long *)0x0) {
    for (lVar11 = *local_90; lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_68);
    }
  }
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
            ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
             local_68,(HashSet *)(this + 0xa38));
  pvVar14 = *(void **)(this + 0xa60);
  if (pvVar14 != (void *)0x0) {
    if ((*(int *)(this + 0xa84) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa80) * 4) == 0 ||
        (memset(*(void **)(this + 0xa78),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa80) * 4) * 4),
        *(int *)(this + 0xa84) != 0)))) {
      lVar11 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar14 + lVar11 * 8) != 0)) {
          StringName::unref();
          pvVar14 = *(void **)(this + 0xa60);
        }
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < *(uint *)(this + 0xa84));
      *(undefined4 *)(this + 0xa84) = 0;
      if (pvVar14 == (void *)0x0) goto LAB_00105224;
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0xa70),false);
    Memory::free_static(*(void **)(this + 0xa68),false);
    Memory::free_static(*(void **)(this + 0xa78),false);
    *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  }
LAB_00105224:
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
            ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
             (this + 0xa60),(HashSet *)local_68);
  uVar6 = local_68._0_8_;
  if ((long *)local_68._0_8_ != (long *)0x0) {
    uVar12 = (ulong)local_48._4_4_;
    uVar7 = local_58._8_8_;
    if (local_48._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
        memset((void *)local_58._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) * 4);
      }
      plVar15 = (long *)uVar6;
      do {
        if ((StringName::configured != '\0') && (*plVar15 != 0)) {
          StringName::unref();
        }
        plVar15 = plVar15 + 1;
      } while ((long *)(uVar6 + uVar12 * 8) != plVar15);
    }
    Memory::free_static((void *)uVar6,false);
    Memory::free_static((void *)local_58._0_8_,false);
    Memory::free_static((void *)local_68._8_8_,false);
    Memory::free_static((void *)uVar7,false);
  }
  lVar11 = 0;
  if (0 < local_c0) {
    do {
      if (local_70 == 0) {
        lVar10 = 0;
LAB_001054d3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar10 = *(long *)(local_70 + -8);
      if (lVar10 <= lVar11) goto LAB_001054d3;
      String::strip_edges(SUB81((String *)&local_88,0),(bool)((char)local_70 + (char)lVar11 * '\b'))
      ;
      cVar8 = String::operator==((String *)&local_88,"BaseMaterial3D");
      if (cVar8 == '\0') {
        StringName::StringName((StringName *)local_68,(String *)&local_88,false);
        StringName::StringName((StringName *)&local_80,"ShaderMaterial",false);
        cVar8 = ClassDB::is_parent_class((StringName *)&local_80,(StringName *)local_68);
        if ((StringName::configured != '\0') &&
           (((local_80 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_68._0_8_ != 0)))) {
          StringName::unref();
        }
        pcVar13 = "Shader";
        if (cVar8 == '\0') {
          StringName::StringName((StringName *)local_68,(String *)&local_88,false);
          StringName::StringName((StringName *)&local_80,"ImageTexture",false);
          cVar8 = ClassDB::is_parent_class((StringName *)&local_80,(StringName *)local_68);
          if (((StringName::configured != '\0') &&
              ((local_80 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
             (local_68._0_8_ != 0)) {
            StringName::unref();
          }
          if (cVar8 == '\0') goto LAB_0010532f;
          pcVar13 = "Image";
        }
        StringName::StringName((StringName *)&local_80,pcVar13,false);
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_68);
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::StringName((StringName *)&local_80,"Texture2D",false);
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_68);
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
LAB_0010532f:
      lVar10 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar15 = (long *)(local_88 + -0x10);
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar11 = lVar11 + 1;
    } while (local_c0 != lVar11);
  }
  CowData<String>::_unref((CowData<String> *)&local_70);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::_ensure_allowed_types() const */

void __thiscall EditorResourcePicker::_ensure_allowed_types(EditorResourcePicker *this)

{
  if (*(int *)(this + 0xa5c) != 0) {
    return;
  }
  _ensure_allowed_types(this);
  return;
}



/* EditorResourcePicker::_is_drop_valid(Dictionary const&) const */

undefined1 __thiscall
EditorResourcePicker::_is_drop_valid(EditorResourcePicker *this,Dictionary *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long *plVar6;
  Variant *pVVar7;
  undefined1 uVar8;
  long in_FS_OFFSET;
  Dictionary local_f0 [8];
  long local_e8;
  Ref local_e0 [8];
  long local_d8;
  Ref *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_c8._0_8_;
  local_c8 = auVar2 << 0x40;
  Variant::Variant((Variant *)local_78,
                   (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                   local_c8);
  Variant::Variant((Variant *)local_98,"source_picker");
  Dictionary::get((Variant *)local_58,(Variant *)param_1);
  lVar4 = Variant::operator_cast_to_ObjectID((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    if (Variant::needs_deinit[local_98[0]] == '\0') goto LAB_001056be;
LAB_00105860:
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    if (Variant::needs_deinit[local_98[0]] != '\0') goto LAB_00105860;
LAB_001056be:
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  uVar8 = 0;
  if (lVar4 == *(long *)(this + 0x60)) goto LAB_001056f0;
  uVar8 = 1;
  if ((*(long *)(this + 0xa10) == 0) || (*(uint *)(*(long *)(this + 0xa10) + -8) < 2))
  goto LAB_001056f0;
  Dictionary::Dictionary(local_f0,param_1);
  local_e8 = 0;
  Variant::Variant((Variant *)local_78,"type");
  cVar3 = Dictionary::has((Variant *)local_f0);
  if (cVar3 == '\0') {
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00105778:
    Variant::Variant((Variant *)local_78,"type");
    cVar3 = Dictionary::has((Variant *)local_f0);
    if (cVar3 == '\0') {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_001057b0:
      Variant::Variant((Variant *)local_78,"type");
      cVar3 = Dictionary::has((Variant *)local_f0);
      if (cVar3 == '\0') {
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant *)local_58,"type");
        Dictionary::operator[]((Variant *)local_f0);
        Variant::operator_cast_to_String((Variant *)local_c8);
        cVar3 = String::operator==((String *)local_c8,"files");
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar3 != '\0') {
          Variant::Variant((Variant *)local_58,"files");
          Dictionary::operator[]((Variant *)local_f0);
          Variant::operator_cast_to_Vector((Variant *)local_c8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar4 = local_c8._8_8_;
          if (local_c8._8_8_ != 0) {
            if (*(long *)(local_c8._8_8_ + -8) == 1) {
              local_d8 = 0;
              String::parse_latin1((String *)&local_d8,"");
              if (local_c8._8_8_ == 0) {
                lVar4 = 0;
LAB_00105e89:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,0,lVar4,"p_index","size()","",
                           false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              lVar4 = *(long *)(local_c8._8_8_ + -8);
              if (lVar4 < 1) goto LAB_00105e89;
              ResourceLoader::load
                        ((Ref<Resource> *)&local_d0,local_c8._8_8_,(String *)&local_d8,1,0);
              Ref<Resource>::operator=((Ref<Resource> *)&local_e8,local_d0);
              Ref<Resource>::unref((Ref<Resource> *)&local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              lVar4 = local_e8;
            }
            else {
              lVar4 = 0;
            }
          }
          CowData<String>::_unref((CowData<String> *)(local_c8 + 8));
          goto LAB_001059bf;
        }
      }
      goto LAB_001057f0;
    }
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[]((Variant *)local_f0);
    Variant::operator_cast_to_String((Variant *)local_c8);
    cVar3 = String::operator==((String *)local_c8,"resource");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar3 == '\0') goto LAB_001057b0;
    Variant::Variant((Variant *)local_58,"resource");
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
    Ref<Resource>::operator=((Ref<Resource> *)&local_e8,pVVar7);
    lVar4 = local_e8;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
      lVar4 = local_e8;
    }
LAB_001059bf:
    if (*(int *)(this + 0xa5c) == 0) goto LAB_001059c9;
LAB_001059d1:
    local_a8 = 0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_c8,(HashSet *)(this + 0xa60));
    if (lVar4 == 0) goto LAB_00105829;
    _get_resource_type(local_e0);
    cVar3 = _is_type_valid(this,(String *)local_e0,(HashSet *)local_c8);
    if (cVar3 == '\0') {
      EditorNode::get_object_custom_type_name((Object *)&local_d8);
      if (local_d8 == 0) {
        local_d0 = (Ref *)0x0;
      }
      else {
        local_d0 = (Ref *)0x0;
        if (*(char **)(local_d8 + 8) == (char *)0x0) {
          if (*(long *)(local_d8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(local_d8 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_d0,*(char **)(local_d8 + 8));
        }
      }
      cVar3 = _is_type_valid(this,(String *)&local_d0,(HashSet *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if (cVar3 != '\0') {
        if ((StringName::configured != '\0') && (local_d8 != 0)) {
          StringName::unref();
        }
        goto LAB_00105a25;
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      uVar8 = 0;
    }
    else {
LAB_00105a25:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      uVar8 = 1;
    }
  }
  else {
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[]((Variant *)local_f0);
    Variant::operator_cast_to_String((Variant *)local_c8);
    cVar3 = String::operator==((String *)local_c8,"script_list_element");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar3 == '\0') goto LAB_00105778;
    Variant::Variant((Variant *)local_58,"script_list_element");
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
    pOVar5 = Variant::operator_cast_to_Object_(pVVar7);
    if (pOVar5 != (Object *)0x0) {
      plVar6 = (long *)__dynamic_cast(pOVar5,&Object::typeinfo,&ScriptEditorBase::typeinfo,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (plVar6 == (long *)0x0) goto LAB_001057f0;
      (**(code **)(*plVar6 + 0x380))
                ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                 local_c8);
      Ref<Resource>::operator=((Ref<Resource> *)&local_e8,(Ref *)local_c8._0_8_);
      Ref<Resource>::unref((Ref<Resource> *)local_c8);
      lVar4 = local_e8;
      goto LAB_001059bf;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_001057f0:
    if (*(int *)(this + 0xa5c) == 0) {
      lVar4 = 0;
LAB_001059c9:
      _ensure_allowed_types(this);
      goto LAB_001059d1;
    }
    local_a8 = 0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_c8,(HashSet *)(this + 0xa60));
LAB_00105829:
    uVar8 = 0;
  }
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
            ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
             local_c8);
  Ref<Resource>::unref((Ref<Resource> *)&local_e8);
  Dictionary::~Dictionary(local_f0);
LAB_001056f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

uint EditorResourcePicker::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  Variant aVStack_28 [8];
  long local_20;
  
  uVar1 = (uint)(byte)param_1[0xa20];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xa20] != (Vector2)0x0) {
    Variant::operator_cast_to_Dictionary(aVStack_28);
    uVar1 = _is_drop_valid((EditorResourcePicker *)param_1,(Dictionary *)aVStack_28);
    Dictionary::~Dictionary((Dictionary *)aVStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_notification(int) */

void __thiscall EditorResourcePicker::_notification(EditorResourcePicker *this,int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  code *pcVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_70;
  Object *local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 10:
    (**(code **)(*(long *)this + 0x368))();
  case 0x2d:
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_constant
              ((StringName *)this,
               (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    pSVar1 = *(StringName **)(this + 0xa88);
    StringName::StringName((StringName *)local_68,"icon_max_width",false);
    iVar6 = (int)(StringName *)local_68;
    Control::add_theme_constant_override(pSVar1,iVar6);
    if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
      StringName::unref();
    }
    pSVar1 = *(StringName **)(this + 0xac8);
    if (pSVar1 != (StringName *)0x0) {
      StringName::StringName((StringName *)local_68,"icon_max_width",false);
      Window::add_theme_constant_override(pSVar1,iVar6);
      if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
        StringName::unref();
      }
    }
    pRVar2 = *(Ref **)(this + 0xa98);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_theme_icon((StringName *)local_68,(StringName *)this);
    Button::set_button_icon(pRVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    break;
  case 0xb:
    create_custom_callable_function_pointer<EditorResourcePicker,Object*>
              ((EditorResourcePicker *)local_68,(char *)this,
               (_func_void_Object_ptr *)"&EditorResourcePicker::_resource_saved");
    plVar4 = EditorNode::singleton;
    pcVar3 = *(code **)(*EditorNode::singleton + 0x118);
    StringName::StringName((StringName *)&local_70,"resource_saved",false);
    cVar5 = (*pcVar3)(plVar4,(StringName *)&local_70,(EditorResourcePicker *)local_68);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    plVar4 = EditorNode::singleton;
    if (cVar5 != '\0') {
      pcVar3 = *(code **)(*EditorNode::singleton + 0x110);
      StringName::StringName((StringName *)&local_70,"resource_saved",false);
      (*pcVar3)(plVar4,(StringName *)&local_70,(EditorResourcePicker *)local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    Callable::~Callable((Callable *)local_68);
    break;
  case 0x15:
    if (this[0xa20] != (EditorResourcePicker)0x0) {
      Viewport::gui_get_drag_data();
      Variant::operator_cast_to_Dictionary((Variant *)local_68);
      cVar5 = _is_drop_valid(this,(Dictionary *)local_68);
      Dictionary::~Dictionary((Dictionary *)local_68);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar5 != '\0') {
        this[0xa21] = (EditorResourcePicker)0x1;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001063e0;
        goto LAB_00106220;
      }
    }
    break;
  case 0x16:
    if (this[0xa21] != (EditorResourcePicker)0x0) {
      this[0xa21] = (EditorResourcePicker)0x0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001063e0:
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_00106220;
    }
    break;
  case 0x1e:
    local_50 = Control::get_size();
    local_58 = 0;
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)local_68,(StringName *)this);
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)local_68);
    if (((local_68[0] != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_68[0]), cVar5 != '\0')) {
      (**(code **)(*(long *)local_68[0] + 0x140))(local_68[0]);
      Memory::free_static(local_68[0],false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106220:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::set_base_type(String const&) */

void __thiscall EditorResourcePicker::set_base_type(EditorResourcePicker *this,String *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  long in_FS_OFFSET;
  char *local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)param_1;
  if (*(long *)(this + 0xa10) != lVar5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa10),(CowData *)param_1);
    lVar5 = *(long *)(this + 0xa10);
  }
  if (((lVar5 != 0) && (1 < *(uint *)(lVar5 + -8))) && (*(long *)(this + 0xa18) != 0)) {
    if (*(int *)(this + 0xa5c) == 0) {
      _ensure_allowed_types(this);
    }
    local_68 = 0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_88,(HashSet *)(this + 0xa60));
    local_c0 = (char *)0x0;
    (**(code **)(**(long **)(this + 0xa18) + 0x98))((Variant *)local_58);
    bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar6 = *(long **)(this + 0xa18);
    if (bVar3) {
      (**(code **)(*plVar6 + 0x98))((Variant *)local_58);
      Variant::operator_cast_to_Object_((Variant *)local_58);
      EditorNode::get_object_custom_type_name((Object *)&local_98);
      if (local_c0 == local_98) {
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c0 = local_98;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_c0 == (char *)0x0) {
        local_98 = (char *)0x0;
      }
      else {
        local_98 = (char *)0x0;
        if (*(char **)(local_c0 + 8) == (char *)0x0) {
          if (*(long *)(local_c0 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_c0 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_98,*(char **)(local_c0 + 8));
        }
      }
      cVar4 = _is_type_valid(this,(String *)&local_98,(HashSet *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (cVar4 == '\0') {
        plVar6 = *(long **)(this + 0xa18);
        goto LAB_001066c5;
      }
    }
    else {
LAB_001066c5:
      (**(code **)(*plVar6 + 0x48))((CowData<char32_t> *)&local_98);
      cVar4 = _is_type_valid(this,(String *)&local_98,(HashSet *)local_88);
      this_00 = (CowData<char32_t> *)&local_98;
      if (cVar4 == '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_b0 = 0;
        if (local_c0 == (char *)0x0) {
          (**(code **)(**(long **)(this + 0xa18) + 0x48))(&local_b8);
        }
        else {
          (**(code **)(**(long **)(this + 0xa18) + 0x48))((CowData<char32_t> *)&local_a8);
          StringName::StringName((StringName *)&local_98,(StringName *)&local_c0);
          local_a0 = 0;
          String::parse_latin1((String *)&local_a0,"%s (%s)");
          vformat<StringName,String>
                    (&local_b8,(String *)&local_a0,(CowData<char32_t> *)&local_98,
                     (CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        this_00 = (CowData<char32_t> *)&local_b8;
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        local_a0 = 0;
        if (local_b8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)this_00);
        }
        local_a8 = 0;
        if (*(long *)(this + 0xa10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(this + 0xa10));
        }
        local_b0 = 0;
        local_98 = 
        "Value mismatch between the new base type of this EditorResourcePicker, \'%s\', and the type of the value it already has, \'%s\'."
        ;
        local_90 = 0x7c;
        String::parse_latin1((StrRange *)&local_b0);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_98,(StrRange *)&local_b0,
                   (CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_a0);
        _err_print_error("set_base_type","editor/editor_resource_picker.cpp",0x381,
                         (CowData<char32_t> *)&local_98,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      CowData<char32_t>::_unref(this_00);
    }
    if ((StringName::configured != '\0') && (local_c0 != (char *)0x0)) {
      StringName::unref();
    }
    uVar1 = local_88._0_8_;
    if ((long *)local_88._0_8_ != (long *)0x0) {
      uVar7 = (ulong)local_68._4_4_;
      uVar2 = local_78._8_8_;
      if (local_68._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
          memset((void *)local_78._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) << 2);
        }
        plVar6 = (long *)uVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != (long *)(uVar1 + uVar7 * 8));
      }
      Memory::free_static((void *)uVar1,false);
      Memory::free_static((void *)local_78._0_8_,false);
      Memory::free_static((void *)local_88._8_8_,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar2,false);
        return;
      }
      goto LAB_001069ed;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001069ed:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::set_edited_resource(Ref<Resource>) */

void __thiscall EditorResourcePicker::set_edited_resource(EditorResourcePicker *this,long *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  Ref *pRVar8;
  long in_FS_OFFSET;
  char *local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  pRVar8 = (Ref *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pRVar8 == (Ref *)0x0) {
    Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),(Ref *)0x0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x368))(this);
      return;
    }
    goto LAB_0010700d;
  }
  if ((*(long *)(this + 0xa10) == 0) || (*(uint *)(*(long *)(this + 0xa10) + -8) < 2)) {
LAB_00106a51:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_88._8_8_;
    local_88 = auVar1 << 0x40;
    Ref<Resource>::operator=((Ref<Resource> *)local_88,pRVar8);
    uVar2 = local_88._0_8_;
    Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),(Ref *)local_88._0_8_);
    (**(code **)(*(long *)this + 0x368))(this);
    if ((((Ref *)uVar2 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)uVar2), cVar5 != '\0')) {
      (**(code **)(*(long *)uVar2 + 0x140))(uVar2);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar2,false);
        return;
      }
      goto LAB_0010700d;
    }
  }
  else {
    if (*(int *)(this + 0xa5c) == 0) {
      _ensure_allowed_types(this);
    }
    local_68 = 0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_88,(HashSet *)(this + 0xa60));
    local_c0 = (char *)0x0;
    (**(code **)(*(long *)*param_2 + 0x98))((Variant *)local_58);
    bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar7 = (long *)*param_2;
    if (bVar6) {
      (**(code **)(*plVar7 + 0x98))((Variant *)local_58);
      Variant::operator_cast_to_Object_((Variant *)local_58);
      EditorNode::get_object_custom_type_name((Object *)&local_98);
      if (local_c0 == local_98) {
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c0 = local_98;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_c0 == (char *)0x0) {
        local_98 = (char *)0x0;
      }
      else {
        local_98 = (char *)0x0;
        if (*(char **)(local_c0 + 8) == (char *)0x0) {
          if (*(long *)(local_c0 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_c0 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_98,*(char **)(local_c0 + 8));
        }
      }
      cVar5 = _is_type_valid(this,(String *)&local_98,(HashSet *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (cVar5 == '\0') {
        plVar7 = (long *)*param_2;
        goto LAB_00106c15;
      }
LAB_00106c3c:
      if ((StringName::configured != '\0') && (local_c0 != (char *)0x0)) {
        StringName::unref();
      }
      uVar2 = local_88._0_8_;
      if ((long *)local_88._0_8_ != (long *)0x0) {
        uVar3 = local_78._8_8_;
        uVar4 = local_68._4_4_;
        if (local_68._4_4_ != 0) {
          if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
            memset((void *)local_78._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) << 2);
          }
          plVar7 = (long *)uVar2;
          do {
            if ((StringName::configured != '\0') && (*plVar7 != 0)) {
              StringName::unref();
            }
            plVar7 = plVar7 + 1;
          } while (plVar7 != (long *)(uVar2 + (ulong)uVar4 * 8));
        }
        Memory::free_static((void *)uVar2,false);
        Memory::free_static((void *)local_78._0_8_,false);
        Memory::free_static((void *)local_88._8_8_,false);
        Memory::free_static((void *)uVar3,false);
      }
      pRVar8 = (Ref *)*param_2;
      goto LAB_00106a51;
    }
LAB_00106c15:
    (**(code **)(*plVar7 + 0x48))((CowData<char32_t> *)&local_98);
    cVar5 = _is_type_valid(this,(String *)&local_98,(HashSet *)local_88);
    if (cVar5 != '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      goto LAB_00106c3c;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    local_b0 = 0;
    if (local_c0 == (char *)0x0) {
      (**(code **)(*(long *)*param_2 + 0x48))(&local_b8);
    }
    else {
      (**(code **)(*(long *)*param_2 + 0x48))((CowData<char32_t> *)&local_a8);
      StringName::StringName((StringName *)&local_98,(StringName *)&local_c0);
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"%s (%s)");
      vformat<StringName,String>
                (&local_b8,(String *)&local_a0,(CowData<char32_t> *)&local_98,
                 (CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    local_a0 = 0;
    if (*(long *)(this + 0xa10) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(this + 0xa10));
    }
    local_a8 = 0;
    if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_b8);
    }
    local_b0 = 0;
    local_98 = 
    "Failed to set a resource of the type \'%s\' because this EditorResourcePicker only accepts \'%s\' and its derivatives."
    ;
    local_90 = 0x72;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              ((CowData<char32_t> *)&local_98,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (CowData<char32_t> *)&local_a0);
    _err_print_error("set_edited_resource","editor/editor_resource_picker.cpp",0x3af,
                     "Method/function failed.",(CowData<char32_t> *)&local_98,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_c0 != (char *)0x0)) {
      StringName::unref();
    }
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010700d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorScriptPicker::_bind_methods() */

void EditorScriptPicker::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "owner_node";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_script_owner",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<EditorScriptPicker,Node*>(set_script_owner);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_script_owner",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<EditorScriptPicker,Node*>(get_script_owner);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_98 = "Node";
  local_c8 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "script_owner";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x18);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = 0;
  local_80 = 0x11;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 0;
    if (local_80 != 0x11) {
      StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
      goto LAB_001073da;
    }
  }
  local_e8 = (CowData<char32_t> *)&local_78;
  local_70 = 0;
  StringName::StringName((StringName *)&local_a8,(String *)local_e8,false);
  if ((char *)local_88 == local_a8) {
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_88 = (long)local_a8;
  }
LAB_001073da:
  local_e8 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "EditorScriptPicker";
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::get_allowed_types() const */

long EditorResourcePicker::get_allowed_types(void)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  char *__s;
  long lVar4;
  void *__s_00;
  StringName *pSVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  EditorResourcePicker *in_RSI;
  long in_RDI;
  long *plVar14;
  StringName *pSVar15;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  uVar12 = *(uint *)(in_RSI + 0xa5c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar12 == 0) {
    _ensure_allowed_types(in_RSI);
    uVar12 = *(uint *)(in_RSI + 0xa5c);
    uVar3 = *(uint *)(in_RSI + 0xa58);
    if (uVar12 == 0) {
      *(undefined8 *)(in_RDI + 8) = 0;
      CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),0);
      CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
      goto LAB_00107816;
    }
  }
  else {
    uVar3 = *(uint *)(in_RSI + 0xa58);
  }
  lVar13 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar3 * 4);
  uVar11 = (ulong)uVar3;
  uVar2 = uVar11 * 4;
  __s_00 = (void *)Memory::alloc_static(uVar2,false);
  pSVar5 = (StringName *)Memory::alloc_static(uVar11 * 8,false);
  pvVar6 = (void *)Memory::alloc_static(uVar2,false);
  pvVar7 = (void *)Memory::alloc_static(uVar2,false);
  uVar10 = (ulong)uVar12;
  pSVar15 = pSVar5;
  do {
    StringName::StringName(pSVar15,(StringName *)(*(long *)(in_RSI + 0xa38) + lVar13 * 2));
    *(undefined4 *)((long)pvVar6 + lVar13) = *(undefined4 *)(*(long *)(in_RSI + 0xa48) + lVar13);
    lVar13 = lVar13 + 4;
    pSVar15 = pSVar15 + 8;
  } while (uVar10 << 2 != lVar13);
  if (uVar3 != 0) {
    lVar13 = *(long *)(in_RSI + 0xa50);
    lVar9 = *(long *)(in_RSI + 0xa40);
    uVar8 = 0;
    do {
      *(undefined4 *)((long)__s_00 + uVar8) = *(undefined4 *)(lVar13 + uVar8);
      *(undefined4 *)((long)pvVar7 + uVar8) = *(undefined4 *)(lVar9 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar8 != uVar2);
  }
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),uVar10);
  CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
  plVar14 = *(long **)(in_RDI + 8);
  lVar13 = 0;
  do {
    lVar9 = *(long *)(pSVar5 + lVar13 * 8);
    if (lVar9 == 0) {
LAB_00107889:
      local_60 = 0;
      lVar9 = *plVar14;
      if (lVar9 != 0) {
LAB_00107896:
        LOCK();
        plVar1 = (long *)(lVar9 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = *plVar14;
          *plVar14 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
        else {
          *plVar14 = 0;
        }
        goto LAB_0010778e;
      }
    }
    else {
      __s = *(char **)(lVar9 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00107889;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar9 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
      lVar4 = local_60;
      lVar9 = *plVar14;
      if (lVar9 == local_60) {
        if (lVar9 != 0) {
          LOCK();
          plVar1 = (long *)(lVar9 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
      }
      else {
        if (lVar9 != 0) goto LAB_00107896;
LAB_0010778e:
        *plVar14 = local_60;
      }
    }
    lVar13 = lVar13 + 1;
    plVar14 = plVar14 + 1;
  } while ((int)lVar13 < (int)uVar12);
  if (uVar3 != 0) {
    memset(__s_00,0,uVar11 << 2);
  }
  pSVar15 = pSVar5;
  do {
    if ((StringName::configured != '\0') && (*(long *)pSVar15 != 0)) {
      StringName::unref();
    }
    pSVar15 = pSVar15 + 8;
  } while (pSVar15 != pSVar5 + uVar10 * 8);
  Memory::free_static(pSVar5,false);
  Memory::free_static(pvVar6,false);
  Memory::free_static(pvVar7,false);
  Memory::free_static(__s_00,false);
LAB_00107816:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* EditorResourcePicker::_gather_resources_to_duplicate(Ref<Resource>, TreeItem*, String const&)
   const */

void __thiscall
EditorResourcePicker::_gather_resources_to_duplicate
          (EditorResourcePicker *this,long *param_2,undefined8 param_3,CowData *param_4)

{
  String *pSVar1;
  int *piVar2;
  bool *pbVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Ref *pRVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  CowData<char32_t> *pCVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  StrRange *local_d0;
  List<PropertyInfo,DefaultAllocator> *local_c8;
  long local_98;
  Array local_90 [8];
  undefined8 *local_88;
  Ref *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::set_cell_mode(param_3,0,1);
  Resource::get_name();
  if (local_98 == 0) {
    plVar11 = (long *)*param_2;
    if ((plVar11[0x31] != 0) && (1 < *(uint *)(plVar11[0x31] + -8))) {
LAB_00108030:
      iVar7 = String::find((char *)(plVar11 + 0x31),0x111d65);
      if ((iVar7 == -1) && (cVar5 = String::begins_with((char *)(plVar11 + 0x31)), cVar5 == '\0')) {
        Resource::get_path();
        String::get_file();
        if ((Object *)local_98 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          local_98 = (long)local_78;
          local_78 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      if (local_98 != 0) {
LAB_001079ed:
        if (1 < *(uint *)(local_98 + -8)) goto LAB_00107f2f;
      }
      plVar11 = (long *)*param_2;
    }
  }
  else {
    if (1 < *(uint *)(local_98 + -8)) {
LAB_00107f2f:
      local_d0 = (StrRange *)&local_80;
      local_80 = (Ref *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_d0,(CowData *)&local_98);
      (**(code **)(*(long *)*param_2 + 0x48))((CowData<char32_t> *)local_90);
      local_88 = (undefined8 *)0x0;
      String::parse_latin1((String *)&local_88,"%s (%s)");
      vformat<String,String>
                ((CowData<char32_t> *)&local_78,(String *)&local_88,(CowData<char32_t> *)local_90,
                 local_d0);
      TreeItem::set_text(param_3,0,(CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      goto LAB_00107a28;
    }
    plVar11 = (long *)*param_2;
    if (plVar11[0x31] != 0) {
      if (1 < *(uint *)(plVar11[0x31] + -8)) goto LAB_00108030;
      goto LAB_001079ed;
    }
  }
  (**(code **)(*plVar11 + 0x48))((CowData<char32_t> *)&local_78);
  TreeItem::set_text(param_3,0,(CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00107a28:
  pSVar1 = EditorNode::singleton;
  local_c8 = (List<PropertyInfo,DefaultAllocator> *)&local_88;
  local_d0 = (StrRange *)&local_80;
  local_78 = (Object *)0x115448;
  local_80 = (Ref *)0x0;
  local_70 = 6;
  String::parse_latin1(local_d0);
  EditorNode::get_object_icon((Object *)&local_78,pSVar1);
  iVar7 = (int)param_3;
  TreeItem::set_icon(iVar7,(Ref *)0x0);
  if (((local_78 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_78, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_78), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  TreeItem::set_editable(iVar7,false);
  Array::Array(local_90);
  Variant::Variant((Variant *)&local_68,(Object *)*param_2);
  Array::push_back((Variant *)local_90);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_68,local_90);
  TreeItem::set_metadata(iVar7,(Variant *)0x0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  if ((*(long *)param_4 != 0) && (1 < *(uint *)(*(long *)param_4 + -8))) {
    local_78 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,param_4);
    TreeItem::set_text(param_3,1,(Object *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if ((_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::unique_exceptions ==
       '\0') &&
     (iVar6 = __cxa_guard_acquire(&_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)
                                   ::unique_exceptions), iVar6 != 0)) {
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Image");
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Shader");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Mesh");
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"FontFile");
    _gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::unique_exceptions._8_8_ =
         0;
    iVar6 = CowData<String>::resize<false>
                      ((CowData<String> *)
                       (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                        unique_exceptions + 8),4);
    if (iVar6 == 0) {
      lVar8 = 0;
      pVVar14 = (Variant *)&local_68;
      do {
        if (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::unique_exceptions
            ._8_8_ == 0) {
          lVar12 = 0;
LAB_00108158:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar12,"p_index","size()","",
                     false,false);
        }
        else {
          lVar12 = *(long *)(_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                             unique_exceptions._8_8_ + -8);
          if (lVar12 <= lVar8) goto LAB_00108158;
          CowData<String>::_copy_on_write
                    ((CowData<String> *)
                     (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                      unique_exceptions + 8));
          pCVar13 = (CowData<char32_t> *)
                    (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                     unique_exceptions._8_8_ + lVar8 * 8);
          if (*(long *)pCVar13 != *(long *)pVVar14) {
            CowData<char32_t>::_ref(pCVar13,(CowData *)pVVar14);
          }
        }
        lVar8 = lVar8 + 1;
        pVVar14 = (Variant *)((CowData *)pVVar14 + 8);
      } while (lVar8 != 4);
    }
    __cxa_atexit(Vector<String>::~Vector,
                 _gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                 unique_exceptions,&__dso_handle);
    pCVar13 = local_48;
    __cxa_guard_release(&_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                         unique_exceptions);
    do {
      pCVar13 = pCVar13 + -8;
      CowData<char32_t>::_unref(pCVar13);
    } while (pCVar13 != (CowData<char32_t> *)&local_68);
  }
  (**(code **)(*(long *)*param_2 + 0x48))((Object *)&local_78);
  if ((_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::unique_exceptions.
       _8_8_ != 0) &&
     (lVar8 = *(long *)(_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                        unique_exceptions._8_8_ + -8), lVar8 != 0)) {
    lVar12 = 0;
    while (lVar12 < lVar8) {
      cVar5 = String::operator==((String *)
                                 (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)
                                  ::unique_exceptions._8_8_ + lVar12 * 8),(String *)&local_78);
      if (cVar5 != '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        goto LAB_00107bcc;
      }
      lVar12 = lVar12 + 1;
      if (_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::unique_exceptions.
          _8_8_ == 0) break;
      lVar8 = *(long *)(_gather_resources_to_duplicate(Ref<Resource>,TreeItem*,String_const&)::
                        unique_exceptions._8_8_ + -8);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  TreeItem::set_checked(iVar7,false);
LAB_00107bcc:
  local_88 = (undefined8 *)0x0;
  Object::get_property_list((List *)*param_2,SUB81(local_c8,0));
  if (local_88 != (undefined8 *)0x0) {
    for (piVar2 = (int *)*local_88; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0xc)) {
      if ((((*(byte *)(piVar2 + 10) & 2) != 0) && (*piVar2 == 0x18)) && (piVar2[6] == 0x11)) {
        pbVar3 = (bool *)*param_2;
        pSVar1 = (String *)(piVar2 + 2);
        StringName::StringName((StringName *)&local_78,pSVar1,false);
        Object::get((StringName *)&local_68,pbVar3);
        local_80 = (Ref *)0x0;
        lVar8 = Variant::get_validated_object();
        if ((lVar8 == 0) ||
           (pRVar9 = (Ref *)__dynamic_cast(lVar8,&Object::typeinfo,&Resource::typeinfo,0),
           pRVar9 == (Ref *)0x0)) {
LAB_00107ce6:
          if (Variant::needs_deinit[(int)local_68] == '\0') {
            if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            pRVar9 = (Ref *)0x0;
            Variant::_clear_internal();
            if (StringName::configured != '\0') goto LAB_001081a9;
          }
        }
        else {
          local_80 = pRVar9;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_80 = (Ref *)0x0;
            goto LAB_00107ce6;
          }
          if (Variant::needs_deinit[(int)local_68] == '\0') {
            if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            Variant::_clear_internal();
            if (StringName::configured == '\0') goto LAB_00107d57;
LAB_001081a9:
            if (local_78 != (Object *)0x0) {
              StringName::unref();
            }
            if (pRVar9 == (Ref *)0x0) goto LAB_00107e14;
          }
LAB_00107d57:
          uVar10 = TreeItem::create_child(iVar7);
          local_78 = (Object *)0x0;
          Ref<Resource>::operator=((Ref<Resource> *)&local_78,pRVar9);
          _gather_resources_to_duplicate(this,(Object *)&local_78,uVar10,pSVar1);
          Ref<Resource>::unref((Ref<Resource> *)&local_78);
          TreeItem::get_metadata((int)(Variant *)&local_68);
          Variant::operator_cast_to_Array((Variant *)&local_78);
          Array::operator=(local_90,(Array *)&local_78);
          Array::~Array((Array *)&local_78);
          if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_68,pSVar1);
          Array::push_back((Variant *)local_90);
          if (Variant::needs_deinit[(int)local_68] != '\0') {
            Variant::_clear_internal();
          }
          if ((*(byte *)((long)piVar2 + 0x2a) & 0x10) != 0) {
            TreeItem::set_checked((int)uVar10,false);
            TreeItem::set_editable((int)uVar10,false);
          }
        }
LAB_00107e14:
        Ref<Resource>::unref((Ref<Resource> *)local_d0);
      }
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List(local_c8);
  Array::~Array(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* EditorResourcePicker::_bind_methods() */

void EditorResourcePicker::_bind_methods(void)

{
  long *plVar1;
  StringName *this;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int *piVar9;
  MethodBind *pMVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168 [6];
  char *local_138;
  undefined8 local_130;
  StringName local_128 [8];
  undefined4 local_120;
  CowData local_118 [8];
  undefined4 local_110;
  char *local_108;
  undefined1 local_100 [16];
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  ulong local_80;
  Vector<int> local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_100._8_8_ = local_100._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_d8,(char ***)"_update_resource_preview",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>
                      (_update_resource_preview);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "base_type";
  local_60 = 0;
  uVar11 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_base_type",uVar11);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,String_const&>(set_base_type);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_base_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,String>(get_base_type);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_allowed_types",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,Vector<String>>(get_allowed_types);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "resource";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_edited_resource",uVar11);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,Ref<Resource>>(set_edited_resource);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_edited_resource",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,Ref<Resource>>(get_edited_resource);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "enable";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_toggle_mode",uVar11);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,bool>(set_toggle_mode);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"is_toggle_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,bool>(is_toggle_mode);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "pressed";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_toggle_pressed",uVar11);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,bool>(set_toggle_pressed);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "enable";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_editable",uVar11);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,bool>(set_editable);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"is_editable",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar10 = create_method_bind<EditorResourcePicker,bool>(is_editable);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_130 = 0;
  local_108 = (char *)0x0;
  local_d8 = "menu_node";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)0x0;
  if (local_108 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_138,(CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_c8 = (undefined1  [16])0x0;
  local_108 = "_set_create_options";
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_108 = "Object";
  local_170 = 0;
  local_100._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)local_168,(String *)&local_170,false);
  this = (StringName *)(local_100 + 8);
  local_108 = (char *)CONCAT44(local_108._4_4_,0x18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_100._8_8_;
  local_100 = auVar7 << 0x40;
  StringName::StringName(this,(StringName *)local_168);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 6;
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,0);
  local_108 = "EditorResourcePicker";
  local_168[0] = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_108,(String *)local_168,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_108,(MethodInfo *)&local_d8,true,(Vector<String> *)&local_138,
             false);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
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
  piVar9 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar13 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar9;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar9 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_130);
  local_130 = 0;
  local_108 = (char *)0x0;
  local_d8 = "id";
  local_d0 = 2;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)0x0;
  if (local_108 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_138,(CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_108 = "_handle_menu_selected";
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_108 = "";
  local_180 = 0;
  local_178 = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_100._8_8_;
  local_100 = auVar8 << 0x40;
  String::parse_latin1((StrRange *)&local_178);
  local_170 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_178);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)local_168,(String *)&local_e8,false);
      if (local_100._8_8_ == local_168[0]) {
        if ((StringName::configured != '\0') && (local_168[0] != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_100._8_8_ = local_168[0];
      }
      goto LAB_001091bd;
    }
  }
  local_e0 = 6;
  StringName::operator=(this,(StringName *)&local_180);
LAB_001091bd:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  local_d0 = CONCAT44(local_d0._4_4_,local_108._0_4_);
  if (local_c8._0_8_ != local_100._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    local_c8._0_8_ = local_100._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_100._8_8_;
    local_100 = auVar4 << 0x40;
  }
  if (local_c8._8_8_ != local_100._8_8_) {
    StringName::unref();
    local_c8._8_8_ = local_100._8_8_;
    local_100._8_8_ = 0;
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  if (local_b0 != local_e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = local_e8;
    local_e8 = 0;
  }
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  local_80 = local_80 & 0xffffffff00000000;
  local_178 = 0;
  local_170 = 0;
  local_108 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_100._8_8_;
  local_100 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_170);
  local_168[0] = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,2,(StringName *)local_168,0,(StrRange *)&local_170,6,
             (StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,3);
  local_108 = "EditorResourcePicker";
  local_168[0] = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)local_168);
  StringName::StringName((StringName *)&local_108,(String *)local_168,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_108,(MethodInfo *)&local_d8,true,(Vector<String> *)&local_138,
             false);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
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
  piVar9 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar13 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar9;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar9 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_130);
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_170 = 0;
  local_178 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_d8 = "base_type";
  local_180 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,4,(StrRange *)&local_180,0,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_108 = "EditorResourcePicker";
  local_188 = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_108,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_168[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_d8 = "Resource";
  local_170 = 0;
  local_178 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_178);
  local_d8 = "edited_resource";
  local_180 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_180,0x11,(StrRange *)&local_178,0,
             (StrRange *)&local_170);
  local_108 = "EditorResourcePicker";
  local_188 = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_108,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if (((StringName::configured != '\0') &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_168[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_170 = 0;
  local_178 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_d8 = "editable";
  local_180 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_180,0,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_108 = "EditorResourcePicker";
  local_188 = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_108,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((((StringName::configured != '\0') &&
       ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_168[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_138,true);
  _scs_create((char *)local_168,true);
  local_170 = 0;
  local_178 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_d8 = "toggle_mode";
  local_180 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_180,0,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_108 = "EditorResourcePicker";
  local_188 = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_108,(String *)&local_188,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)local_168,
             (StringName *)&local_138,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if (((StringName::configured != '\0') &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_168[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_138 != (char *)0x0)))) {
    StringName::unref();
  }
  local_178 = 0;
  local_180 = 0;
  local_d8 = "";
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_180);
  local_d8 = "inspect";
  local_188 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_138,1,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StrRange *)&local_178);
  local_d8 = "Resource";
  local_190 = 0;
  local_198 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_d8 = "resource";
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_1a0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_168,0x18,(StrRange *)&local_1a0,0x11,(StrRange *)&local_198,6,
             &local_190);
  local_d8 = "resource_selected";
  local_170 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_170);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_170);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_100._8_8_;
  local_100 = auVar6 << 0x40;
  local_108 = (char *)CONCAT44(local_108._4_4_,local_138._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)local_100,(CowData *)&local_130);
  StringName::StringName(this,local_128);
  local_e8 = 0;
  local_f0 = local_120;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,local_118);
  local_e0 = local_110;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  local_108 = "EditorResourcePicker";
  local_1a8 = 0;
  local_100._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_108,(String *)&local_1a8,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
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
  piVar9 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar13 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar9;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar9 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  local_170 = 0;
  local_d8 = "Resource";
  local_178 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_178);
  local_d8 = "resource";
  local_180 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_108,0x18,(StrRange *)&local_180,0x11,(StrRange *)&local_178,6,
             (StrRange *)&local_170);
  local_d8 = "resource_changed";
  local_168[0] = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)local_168);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_168);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  local_138 = "EditorResourcePicker";
  local_188 = 0;
  local_130 = 0x14;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_138,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_138,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
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
  piVar9 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar13 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar9;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar9 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::initialize_class() [clone .part.0] */

void EditorResourcePicker::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (HBoxContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00132010 != Node::_bind_methods) {
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
            if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
      if ((code *)PTR__bind_methods_00132008 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    local_58 = "BoxContainer";
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
    HBoxContainer::initialize_class()::initialized = '\x01';
  }
  local_58 = "HBoxContainer";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "EditorResourcePicker";
  local_70 = 0;
  local_50 = 0x14;
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::set_create_options(Object*) */

void __thiscall EditorResourcePicker::set_create_options(EditorResourcePicker *this,Object *param_1)

{
  uint uVar1;
  char *__s;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  String *pSVar13;
  Object *pOVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  code *pcVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long in_FS_OFFSET;
  long local_190;
  int local_178;
  long local_158;
  Object *local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  char *local_128;
  size_t local_120;
  StringName local_118 [8];
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  undefined1 *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xac8) == 0) {
    _ensure_resource_menu(this);
  }
  plVar21 = *(long **)(this + 0x98);
  if (plVar21 != (long *)0x0) {
    local_f8._0_12_ = ZEXT412(0);
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar21 + 0x60))(local_58,plVar21,this + 0xad0,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8._0_4_ == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010adec;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0xad8] == (EditorResourcePicker)0x0)) {
    local_e8 = (undefined1  [16])0x0;
    local_f8 = ZEXT816(0);
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)local_f8,"_set_create_options");
    local_128 = "Object";
    local_c0 = CONCAT44(local_c0._4_4_,8);
    local_138 = 0;
    local_120 = 6;
    String::parse_latin1((StrRange *)&local_138);
    StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
    local_128 = (char *)CONCAT44(local_128._4_4_,0x18);
    local_120 = 0;
    StringName::StringName(local_118,(StringName *)&local_130);
    local_110 = 0;
    local_108 = 0;
    local_100 = 6;
    if ((StringName::configured != '\0') && (local_130 != 0)) {
      StringName::unref();
    }
    lVar19 = local_138;
    if (local_138 != 0) {
      LOCK();
      plVar21 = (long *)(local_138 + -0x10);
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        local_138 = 0;
        Memory::free_static((void *)(lVar19 + -0x10),false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar18 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0xae0) = 0;
    lVar19 = *(long *)(this + 8);
    pcVar22 = *(code **)(lVar19 + 0xd8);
    if (((pcVar22 == (code *)0x0) || (*(long *)(lVar19 + 0xe0) == 0)) &&
       (pcVar22 = *(code **)(lVar19 + 0xd0), pcVar22 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"EditorResourcePicker");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar19 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_0010b71e;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010b74f:
        lVar19 = *(long *)(this + 8);
        pcVar22 = *(code **)(lVar19 + 200);
        if (((pcVar22 == (code *)0x0) || (*(long *)(lVar19 + 0xe0) == 0)) &&
           (pcVar22 = *(code **)(lVar19 + 0xc0), pcVar22 == (code *)0x0)) goto LAB_0010b624;
        uVar20 = (*pcVar22)(*(undefined8 *)(lVar19 + 0xa0),this + 0xad0);
        *(undefined8 *)(this + 0xae0) = uVar20;
      }
      else {
        lVar19 = *(long *)(local_120 - 8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_0010b71e:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar19 == 0) goto LAB_0010b74f;
      }
      lVar19 = *(long *)(this + 8);
    }
    else {
      uVar20 = (*pcVar22)(*(undefined8 *)(lVar19 + 0xa0),this + 0xad0,uVar18);
      *(undefined8 *)(this + 0xae0) = uVar20;
      lVar19 = *(long *)(this + 8);
    }
LAB_0010b624:
    if (*(char *)(lVar19 + 0x29) != '\0') {
      plVar21 = (long *)operator_new(0x18,"");
      *plVar21 = (long)(this + 0xae0);
      plVar21[1] = (long)(this + 0xad8);
      plVar21[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar21;
    }
    this[0xad8] = (EditorResourcePicker)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar22 = *(code **)(this + 0xae0);
  if (pcVar22 == (code *)0x0) {
    if ((*(long *)(this + 0xa10) != 0) && (1 < *(uint *)(*(long *)(this + 0xa10) + -8))) {
      if (*(int *)(this + 0xa5c) == 0) {
        _ensure_allowed_types(this);
      }
      local_d8 = 0;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
                ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                 local_f8,(HashSet *)(this + 0xa38));
      iVar17 = local_d8._4_4_;
      if (local_d8._4_4_ != 0) {
        uVar20 = local_f8._0_8_;
        local_178 = 0;
        local_190 = 0;
        do {
          lVar19 = *(long *)(uVar20 + local_190 * 8);
          if (lVar19 == 0) {
            local_158 = 0;
          }
          else {
            __s = *(char **)(lVar19 + 8);
            local_158 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar19 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(lVar19 + 0x10));
              }
            }
            else {
              local_120 = strlen(__s);
              local_128 = __s;
              String::parse_latin1((StrRange *)&local_158);
            }
          }
          StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
          cVar15 = ClassDB::can_instantiate((StringName *)&local_128);
          if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
            StringName::unref();
          }
          if (cVar15 != '\0') {
            local_128 = (char *)0x0;
            if (local_158 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_158);
            }
            Vector<String>::push_back((Vector<String> *)(this + 0xa28),(StringName *)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
            pSVar13 = EditorNode::singleton;
            local_128 = "Object";
            local_130 = 0;
            local_120 = 6;
            String::parse_latin1((StrRange *)&local_130);
            EditorNode::get_class_icon((String *)&local_150,pSVar13);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
            local_130 = 0;
            uVar2 = *(undefined8 *)(this + 0xac8);
            if (local_158 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_158);
            }
            local_140 = 0;
            local_128 = "";
            local_120 = 0;
            String::parse_latin1((StrRange *)&local_140);
            local_128 = "New %s";
            local_148 = 0;
            local_120 = 6;
            String::parse_latin1((StrRange *)&local_148);
            TTR((String *)&local_138,(String *)&local_148);
            vformat<String>((StringName *)&local_128,(String *)&local_138,(StrRange *)&local_130);
            PopupMenu::add_icon_item
                      (uVar2,(String *)&local_150,(StringName *)&local_128,local_178 + 100,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
            lVar19 = EditorHelp::get_doc_data();
            if ((*(long *)(lVar19 + 0x10) != 0) && (*(int *)(lVar19 + 0x34) != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x30) * 4);
              lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar19 + 0x30) * 8);
              uVar16 = String::hash();
              uVar12 = CONCAT44(0,uVar1);
              uVar23 = 1;
              if (uVar16 != 0) {
                uVar23 = uVar16;
              }
              lVar26 = *(long *)(lVar19 + 0x18);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)uVar23 * lVar3;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar12;
              lVar25 = SUB168(auVar4 * auVar8,8);
              uVar16 = *(uint *)(lVar26 + lVar25 * 4);
              uVar24 = SUB164(auVar4 * auVar8,8);
              if (uVar16 != 0) {
                uVar27 = 0;
                do {
                  if (uVar16 == uVar23) {
                    cVar15 = String::operator==((String *)
                                                (*(long *)(*(long *)(lVar19 + 0x10) + lVar25 * 8) +
                                                0x10),(String *)&local_158);
                    if (cVar15 != '\0') {
                      lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (ulong)uVar24 * 8);
                      if (lVar19 != 0) {
                        local_130 = 0;
                        local_120 = 0;
                        uVar2 = *(undefined8 *)(this + 0xac8);
                        local_128 = "";
                        String::parse_latin1((StrRange *)&local_130);
                        DTR((String *)&local_128,(String *)(lVar19 + 0x28));
                        PopupMenu::set_item_tooltip((int)uVar2,(String *)0xffffffff);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                      }
                      break;
                    }
                    lVar26 = *(long *)(lVar19 + 0x18);
                  }
                  uVar27 = uVar27 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)(uVar24 + 1) * lVar3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar12;
                  lVar25 = SUB168(auVar5 * auVar9,8);
                  uVar16 = *(uint *)(lVar26 + lVar25 * 4);
                  uVar24 = SUB164(auVar5 * auVar9,8);
                  if ((uVar16 == 0) ||
                     (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
                     auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                     auVar7._0_8_ = (ulong)((uVar1 + uVar24) - SUB164(auVar6 * auVar10,8)) * lVar3,
                     auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, SUB164(auVar7 * auVar11,8) < uVar27)
                     ) break;
                } while( true );
              }
            }
            local_178 = local_178 + 1;
            if ((local_150 != (Object *)0x0) &&
               ((cVar15 = RefCounted::unreference(), pOVar14 = local_150, cVar15 != '\0' &&
                (cVar15 = predelete_handler(local_150), cVar15 != '\0')))) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
          if (iVar17 <= (int)local_190 + 1) break;
          local_190 = local_190 + 1;
        } while( true );
      }
      iVar17 = PopupMenu::get_item_count();
      if (iVar17 != 0) {
        local_128 = (char *)0x0;
        PopupMenu::add_separator(*(String **)(this + 0xac8),(int)(CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      }
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
                ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                 local_f8);
    }
  }
  else {
    local_58[0] = local_f8;
    local_f8._0_8_ = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar22)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0xad0,pcVar22,local_58,0);
    }
  }
LAB_0010adec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePicker::handle_menu_selected(int) */

bool __thiscall EditorResourcePicker::handle_menu_selected(EditorResourcePicker *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_138;
  long local_130;
  undefined4 local_128 [2];
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8 = 0;
    iStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0xae8,&local_80,1,&local_f8);
    if (local_f8 == 0) {
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b976;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0xaf0] == (EditorResourcePicker)0x0)) {
    local_f8 = 0;
    iStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_handle_menu_selected");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)local_128);
    uStack_f0 = local_128[0];
    if (local_e8._0_8_ != local_120) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      lVar3 = local_120;
      local_120 = 0;
      local_e8._0_8_ = lVar3;
    }
    if (local_e8._8_8_ != local_118) {
      StringName::unref();
      lVar3 = local_118;
      local_118 = 0;
      local_e8._8_8_ = lVar3;
    }
    lVar3 = local_d0;
    local_d8 = CONCAT44(local_d8._4_4_,local_110);
    if (local_d0 != local_108) {
      lVar6 = local_108;
      if (local_d0 != 0) {
        LOCK();
        plVar4 = (long *)(local_d0 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
          lVar6 = local_108;
        }
      }
      local_108 = 0;
      local_d0 = lVar6;
    }
    local_c8 = CONCAT44(local_c8._4_4_,local_100);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,3);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0xaf8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"EditorResourcePicker");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_0010bcd4;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010bcf1:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010bbfe;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0xae8);
        *(undefined8 *)(this + 0xaf8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_0010bcd4:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010bcf1;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0xae8,uVar1);
      *(undefined8 *)(this + 0xaf8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010bbfe:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0xaf8);
      plVar4[1] = (long)(this + 0xaf0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0xaf0] = (EditorResourcePicker)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0xaf8);
  bVar7 = false;
  if (pcVar5 != (code *)0x0) {
    local_58[0] = &local_f8;
    iStack_f4 = param_1 >> 0x1f;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,local_128);
      bVar7 = local_128[0]._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0xae8,pcVar5,local_58,local_128);
      bVar7 = local_128[0]._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
  }
LAB_0010b976:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* EditorResourcePicker::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void EditorResourcePicker::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  long lVar8;
  Object *pOVar9;
  Image *pIVar10;
  Ref *pRVar11;
  Ref *pRVar12;
  Ref *pRVar13;
  long lVar14;
  long in_FS_OFFSET;
  Ref<Resource> *local_108;
  Variant local_e8 [8];
  Ref *local_e0;
  Ref local_d8 [8];
  undefined8 local_d0;
  Object *local_c8;
  Ref *local_c0;
  Ref *local_b8;
  size_t local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary((Variant *)local_a8);
  cVar5 = _is_drop_valid((EditorResourcePicker *)param_1,(Dictionary *)local_a8);
  Dictionary::~Dictionary((Dictionary *)local_a8);
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("drop_data_fw","editor/editor_resource_picker.cpp",0x2de,
                       "Condition \"!_is_drop_valid(p_data)\" is true.",0,0);
      return;
    }
    goto LAB_0010cc0c;
  }
  Variant::operator_cast_to_Dictionary(local_e8);
  local_e0 = (Ref *)0x0;
  Variant::Variant((Variant *)local_78,"type");
  cVar5 = Dictionary::has(local_e8);
  if (cVar5 == '\0') {
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_0010be76:
    Variant::Variant((Variant *)local_78,"type");
    cVar5 = Dictionary::has(local_e8);
    if (cVar5 == '\0') {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010bea4;
    }
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[](local_e8);
    Variant::operator_cast_to_String((Variant *)local_a8);
    cVar5 = String::operator==((String *)local_a8,"resource");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 == '\0') goto LAB_0010bea4;
    Variant::Variant((Variant *)local_58,"resource");
    pVVar6 = (Variant *)Dictionary::operator[](local_e8);
    Ref<Resource>::operator=((Ref<Resource> *)&local_e0,pVVar6);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_0010c1e2:
    if (local_e0 == (Ref *)0x0) goto LAB_0010bea4;
LAB_0010c1f0:
    pRVar2 = local_e0;
    if (*(int *)(param_1 + 0xa5c) == 0) {
      _ensure_allowed_types((EditorResourcePicker *)param_1);
    }
    local_88 = 0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_a8,(HashSet *)(param_1 + 0xa38));
    _get_resource_type(local_d8);
    cVar5 = _is_type_valid((EditorResourcePicker *)param_1,(String *)local_d8,(HashSet *)local_a8);
    pRVar12 = local_e0;
    if ((cVar5 == '\0') && (iVar4 = local_88._4_4_, local_88._4_4_ != 0)) {
      uVar3 = local_a8._0_8_;
      lVar14 = 0;
      lVar8 = *(long *)local_a8._0_8_;
      if (lVar8 == 0) goto LAB_0010c33d;
LAB_0010c2a0:
      pRVar12 = *(Ref **)(lVar8 + 8);
      local_d0 = 0;
      if (pRVar12 == (Ref *)0x0) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(lVar8 + 0x10));
        }
      }
      else {
        local_b0 = strlen((char *)pRVar12);
        local_b8 = pRVar12;
        String::parse_latin1((StrRange *)&local_d0);
      }
      do {
        cVar5 = String::operator==((String *)&local_d0,"BaseMaterial3D");
        if (cVar5 != '\0') {
          local_c0 = (Ref *)0x0;
          lVar8 = __dynamic_cast(pRVar2,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (lVar8 == 0) {
LAB_0010c3ea:
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
            goto LAB_0010c2ec;
          }
          local_b8 = (Ref *)0x0;
          local_c0 = (Ref *)lVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_c0 = (Ref *)0x0;
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
            goto LAB_0010c3ea;
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
          local_c8 = (Object *)0x0;
          if ((*(long *)(param_1 + 0xa18) == 0) ||
             (pOVar9 = (Object *)
                       __dynamic_cast(*(long *)(param_1 + 0xa18),&Object::typeinfo,
                                      &StandardMaterial3D::typeinfo,0), pOVar9 == (Object *)0x0)) {
LAB_0010c7d0:
            Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)&local_c8);
            pOVar9 = local_c8;
            local_c0 = (Ref *)0x0;
            pRVar12 = (Ref *)__dynamic_cast(pRVar2,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (pRVar12 != (Ref *)0x0) {
LAB_0010c808:
              local_b8 = (Ref *)0x0;
              local_c0 = pRVar12;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_c0 = (Ref *)0x0;
              }
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
            }
            BaseMaterial3D::set_texture(pOVar9,0,(Ref<Texture2D> *)&local_c0);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
            if (pOVar9 != (Object *)0x0) goto LAB_0010c84e;
            local_b8 = pRVar2;
            local_e0 = (Ref *)0x0;
            Ref<Resource>::unref((Ref<Resource> *)&local_b8);
            pRVar12 = (Ref *)0x0;
          }
          else {
            local_c8 = pOVar9;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_c8 = (Object *)0x0;
              goto LAB_0010c7d0;
            }
            local_c0 = (Ref *)0x0;
            pRVar12 = (Ref *)__dynamic_cast(pRVar2,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (pRVar12 != (Ref *)0x0) goto LAB_0010c808;
            BaseMaterial3D::set_texture(pOVar9,0,(Ref<Texture2D> *)&local_c0);
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
LAB_0010c84e:
            pRVar12 = (Ref *)__dynamic_cast(pOVar9,&Object::typeinfo,&Resource::typeinfo,0);
            if (pRVar12 != pRVar2) {
              local_b8 = pRVar2;
              local_e0 = pRVar12;
              if ((pRVar12 != (Ref *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_e0 = (Ref *)0x0;
              }
              Ref<Resource>::unref((Ref<Resource> *)&local_b8);
            }
            cVar5 = RefCounted::unreference();
            pRVar12 = local_e0;
            if ((cVar5 != '\0') &&
               (cVar5 = predelete_handler(pOVar9), pRVar12 = local_e0, cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
LAB_0010c8b0:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          break;
        }
LAB_0010c2ec:
        cVar5 = String::operator==((String *)&local_d0,"ShaderMaterial");
        if (((cVar5 != '\0') &&
            (pOVar9 = (Object *)__dynamic_cast(pRVar2,&Object::typeinfo,&Shader::typeinfo,0),
            pOVar9 != (Object *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
          local_c0 = (Ref *)0x0;
          if ((*(long *)(param_1 + 0xa18) == 0) ||
             (pRVar12 = (Ref *)__dynamic_cast(*(long *)(param_1 + 0xa18),&Object::typeinfo,
                                              &ShaderMaterial::typeinfo,0), pRVar12 == (Ref *)0x0))
          {
LAB_0010c4c0:
            Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_c0);
            pRVar12 = local_c0;
          }
          else {
            local_b8 = (Ref *)0x0;
            local_c0 = pRVar12;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_c0 = (Ref *)0x0;
              Ref<ShaderMaterial>::unref((Ref<ShaderMaterial> *)&local_b8);
              goto LAB_0010c4c0;
            }
            Ref<ShaderMaterial>::unref((Ref<ShaderMaterial> *)&local_b8);
          }
          local_b8 = (Ref *)0x0;
          pRVar11 = (Ref *)__dynamic_cast(pRVar2,&Object::typeinfo,&Shader::typeinfo,0);
          if ((pRVar11 != (Ref *)0x0) &&
             (local_b8 = pRVar11, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_b8 = (Ref *)0x0;
          }
          ShaderMaterial::set_shader(pRVar12);
          if (((local_b8 != (Ref *)0x0) &&
              (cVar5 = RefCounted::unreference(), pRVar11 = local_b8, cVar5 != '\0')) &&
             (cVar5 = predelete_handler((Object *)local_b8), cVar5 != '\0')) {
            (**(code **)(*(long *)pRVar11 + 0x140))();
            Memory::free_static(pRVar11,false);
          }
          pRVar11 = (Ref *)__dynamic_cast(pRVar12,&Object::typeinfo,&Resource::typeinfo,0);
          pRVar12 = local_e0;
          if (pRVar11 != pRVar2) {
            local_b8 = pRVar2;
            local_e0 = pRVar11;
            if ((pRVar11 != (Ref *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_e0 = (Ref *)0x0;
              pRVar11 = (Ref *)0x0;
            }
            Ref<Resource>::unref((Ref<Resource> *)&local_b8);
            pRVar12 = pRVar11;
          }
          Ref<ShaderMaterial>::unref((Ref<ShaderMaterial> *)&local_c0);
          goto LAB_0010c8b0;
        }
        cVar5 = String::operator==((String *)&local_d0,"ImageTexture");
        if (((cVar5 != '\0') &&
            (pIVar10 = (Image *)__dynamic_cast(pRVar2,&Object::typeinfo,&Image::typeinfo,0),
            pIVar10 != (Image *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
          cVar5 = RefCounted::unreference();
          if (cVar5 != '\0') {
            memdelete<Image>(pIVar10);
          }
          local_c0 = (Ref *)0x0;
          if ((*(long *)(param_1 + 0xa18) == 0) ||
             (pRVar11 = (Ref *)__dynamic_cast(*(long *)(param_1 + 0xa18),&Object::typeinfo,
                                              &ImageTexture::typeinfo,0), pRVar11 == (Ref *)0x0)) {
LAB_0010c638:
            Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)&local_c0);
            pRVar11 = local_c0;
          }
          else {
            local_c0 = pRVar11;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_c0 = (Ref *)0x0;
              goto LAB_0010c638;
            }
          }
          local_b8 = (Ref *)0x0;
          pRVar12 = (Ref *)__dynamic_cast(pRVar2,&Object::typeinfo,&Image::typeinfo,0);
          if ((pRVar12 != (Ref *)0x0) &&
             (local_b8 = pRVar12, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_b8 = (Ref *)0x0;
          }
          ImageTexture::set_image(pRVar11);
          if ((local_b8 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
            memdelete<Image>((Image *)local_b8);
          }
          pRVar13 = (Ref *)__dynamic_cast(pRVar11,&Object::typeinfo,&Resource::typeinfo,0);
          pRVar12 = local_e0;
          if (pRVar13 != pRVar2) {
            local_b8 = pRVar2;
            local_e0 = pRVar13;
            if ((pRVar13 != (Ref *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_e0 = (Ref *)0x0;
              pRVar13 = (Ref *)0x0;
            }
            Ref<Resource>::unref((Ref<Resource> *)&local_b8);
            pRVar12 = pRVar13;
          }
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)pRVar11), cVar5 != '\0')) {
            (**(code **)(*(long *)pRVar11 + 0x140))(pRVar11);
            Memory::free_static(pRVar11,false);
          }
          goto LAB_0010c8b0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        pRVar12 = local_e0;
        if (iVar4 <= (int)lVar14 + 1) break;
        lVar14 = lVar14 + 1;
        lVar8 = *(long *)(uVar3 + lVar14 * 8);
        if (lVar8 != 0) goto LAB_0010c2a0;
LAB_0010c33d:
        local_d0 = 0;
      } while( true );
    }
    Ref<Resource>::operator=((Ref<Resource> *)(param_1 + 0xa18),pRVar12);
    _resource_changed((EditorResourcePicker *)param_1);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_a8);
  }
  else {
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[](local_e8);
    Variant::operator_cast_to_String((Variant *)local_a8);
    cVar5 = String::operator==((String *)local_a8,"script_list_element");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar5 == '\0') goto LAB_0010be76;
    Variant::Variant((Variant *)local_58,"script_list_element");
    pVVar6 = (Variant *)Dictionary::operator[](local_e8);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar6);
    if (pOVar9 != (Object *)0x0) {
      plVar7 = (long *)__dynamic_cast(pOVar9,&Object::typeinfo,&ScriptEditorBase::typeinfo,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (plVar7 == (long *)0x0) goto LAB_0010bea4;
      (**(code **)(*plVar7 + 0x380))((Variant *)local_a8);
      Ref<Resource>::operator=((Ref<Resource> *)&local_e0,(Ref *)local_a8._0_8_);
      Ref<Resource>::unref((Ref<Resource> *)local_a8);
      goto LAB_0010c1e2;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_0010bea4:
    Variant::Variant((Variant *)local_78,"type");
    cVar5 = Dictionary::has(local_e8);
    if (cVar5 == '\0') {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::Variant((Variant *)local_58,"type");
      Dictionary::operator[](local_e8);
      Variant::operator_cast_to_String((Variant *)local_a8);
      cVar5 = String::operator==((String *)local_a8,"files");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar5 != '\0') {
        Variant::Variant((Variant *)local_58,"files");
        Dictionary::operator[](local_e8);
        Variant::operator_cast_to_Vector((Variant *)local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((local_a8._8_8_ != 0) && (*(long *)(local_a8._8_8_ + -8) == 1)) {
          local_c0 = (Ref *)0x0;
          String::parse_latin1((String *)&local_c0,"");
          if (local_a8._8_8_ == 0) {
            lVar8 = 0;
LAB_0010cbb8:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar8 = *(long *)(local_a8._8_8_ + -8);
          if (lVar8 < 1) goto LAB_0010cbb8;
          ResourceLoader::load((Ref<Resource> *)&local_b8,local_a8._8_8_,(String *)&local_c0,1,0);
          Ref<Resource>::operator=((Ref<Resource> *)&local_e0,local_b8);
          Ref<Resource>::unref((Ref<Resource> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        CowData<String>::_unref((CowData<String> *)(local_a8 + 8));
        if (local_e0 != (Ref *)0x0) goto LAB_0010c1f0;
      }
    }
  }
  local_108 = (Ref<Resource> *)&local_e0;
  Ref<Resource>::unref(local_108);
  Dictionary::~Dictionary((Dictionary *)local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cc0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_edit_menu_cbk(int) */

void __thiscall EditorResourcePicker::_edit_menu_cbk(EditorResourcePicker *this,int param_1)

{
  Variant *pVVar1;
  char *pcVar2;
  CowData *pCVar3;
  Vector *pVVar4;
  Vector2i *pVVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  Object *pOVar20;
  Ref *pRVar21;
  EditorFileDialog *this_00;
  ConfirmationDialog *this_01;
  BoxContainer *this_02;
  Label *this_03;
  Tree *this_04;
  long lVar22;
  long lVar23;
  String *pSVar24;
  void *pvVar25;
  Variant *pVVar26;
  long lVar27;
  long in_FS_OFFSET;
  float fVar28;
  ulong local_128;
  CowData<char32_t> *local_118;
  CowData<char32_t> *local_110;
  long *local_100;
  long local_f8;
  String *local_f0;
  Ref *local_e8;
  long local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulong local_b8;
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_88 [3];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pSVar24 = FileSystemDock::singleton;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    local_100 = (long *)0x0;
    for (iVar18 = param_1; iVar17 = String::get_slice_count((char *)(this + 0xa10)), iVar18 < iVar17
        ; iVar18 = iVar18 + 1) {
      String::get_slice((char *)&local_f8,(int)(this + 0xa10));
      ResourceLoader::get_recognized_extensions_for_type((String *)&local_f8,(List *)&local_100);
      StringName::StringName((StringName *)local_d8,(String *)&local_f8,false);
      cVar15 = ScriptServer::is_global_class((StringName *)local_d8);
      if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
        StringName::unref();
      }
      if (cVar15 != '\0') {
        ScriptServer::get_global_class_native_base((String *)&local_e8);
        if (local_e8 == (Ref *)0x0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_d8._8_8_;
          local_d8 = auVar11 << 0x40;
        }
        else {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_d8._8_8_;
          local_d8 = auVar8 << 0x40;
          if (*(char **)(local_e8 + 8) == (char *)0x0) {
            if (*(long *)(local_e8 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)(local_e8 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)local_d8,*(char **)(local_e8 + 8));
          }
        }
        ResourceLoader::get_recognized_extensions_for_type((String *)local_d8,(List *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    local_b8 = 2;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    if (local_100 == (long *)0x0) {
LAB_0010df20:
      if (*(long *)(this + 0xaa0) == 0) {
        local_128 = 0;
        local_110 = (CowData<char32_t> *)0x0;
LAB_0010d970:
        this_00 = (EditorFileDialog *)operator_new(0x1108,"");
        EditorFileDialog::EditorFileDialog(this_00);
        postinitialize_handler((Object *)this_00);
        *(EditorFileDialog **)(this + 0xaa0) = this_00;
        EditorFileDialog::set_file_mode(this_00,0);
        Node::add_child(this,*(undefined8 *)(this + 0xaa0),0,0);
        plVar6 = *(long **)(this + 0xaa0);
        pcVar7 = *(code **)(*plVar6 + 0x108);
        create_custom_callable_function_pointer<EditorResourcePicker,String_const&>
                  ((EditorResourcePicker *)&local_e8,(char *)this,
                   (_func_void_String_ptr *)"&EditorResourcePicker::_file_selected");
        StringName::StringName((StringName *)&local_f8,"file_selected",false);
        (*pcVar7)(plVar6,(StringName *)&local_f8,(EditorResourcePicker *)&local_e8,0);
        if ((StringName::configured != '\0') && (local_f8 != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)&local_e8);
        goto LAB_0010d478;
      }
      EditorFileDialog::clear_filters();
      EditorFileDialog::popup_file_dialog();
    }
    else {
      lVar23 = *local_100;
      if (lVar23 == 0) goto LAB_0010df20;
      do {
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)&local_e8);
        lVar23 = *(long *)(lVar23 + 8);
      } while (lVar23 != 0);
      local_128 = local_b8 >> 0x20;
      local_110 = (CowData<char32_t> *)local_d8._0_8_;
      if (*(long *)(this + 0xaa0) == 0) goto LAB_0010d970;
LAB_0010d478:
      EditorFileDialog::clear_filters();
      if ((int)local_128 == 0) {
        EditorFileDialog::popup_file_dialog();
        pvVar25 = (void *)local_c8._8_8_;
        if (local_110 != (CowData<char32_t> *)0x0) goto LAB_0010d55e;
      }
      else {
        local_118 = local_110;
        do {
          pSVar24 = *(String **)(this + 0xaa0);
          param_1 = param_1 + 1;
          String::to_upper();
          operator+((char *)&local_f8,(String *)&_LC175);
          EditorFileDialog::add_filter(pSVar24,(String *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        } while (param_1 < (int)local_128);
        EditorFileDialog::popup_file_dialog();
        if (local_110 != (CowData<char32_t> *)0x0) {
          pvVar25 = (void *)local_c8._8_8_;
          if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
            memset((void *)local_c8._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) << 2);
          }
          do {
            CowData<char32_t>::_unref(local_118);
            local_118 = local_118 + 8;
          } while (local_118 != local_110 + local_128 * 8);
LAB_0010d55e:
          Memory::free_static(local_110,false);
          Memory::free_static((void *)local_c8._0_8_,false);
          Memory::free_static((void *)local_d8._8_8_,false);
          Memory::free_static(pvVar25,false);
        }
      }
    }
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_100);
    break;
  case 1:
    String::split((char *)&local_f8,(bool)((char)this + '\x10'),0x111bd6);
    local_e0 = 0;
    if (local_f0 != (String *)0x0) {
      lVar23 = *(long *)(local_f0 + -8);
      for (pSVar24 = local_f0; local_f0 + lVar23 * 8 != pSVar24; pSVar24 = pSVar24 + 8) {
        StringName::StringName((StringName *)local_d8,pSVar24,false);
        if (local_e0 == 0) {
          lVar22 = 1;
        }
        else {
          lVar22 = *(long *)(local_e0 + -8) + 1;
        }
        iVar18 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_e0,lVar22);
        if (iVar18 == 0) {
          if (local_e0 == 0) {
            lVar27 = -1;
            lVar22 = 0;
          }
          else {
            lVar22 = *(long *)(local_e0 + -8);
            lVar27 = lVar22 + -1;
            if (-1 < lVar27) {
              CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_e0);
              StringName::operator=((StringName *)(local_e0 + lVar27 * 8),(StringName *)local_d8);
              goto LAB_0010d00b;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar27,lVar22,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_0010d00b:
        if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
          StringName::unref();
        }
      }
    }
    pVVar4 = *(Vector **)(EditorNode::singleton + 0x5c0);
    create_custom_callable_function_pointer<EditorResourcePicker,String_const&>
              ((EditorResourcePicker *)local_d8,(char *)this,
               (_func_void_String_ptr *)"&EditorResourcePicker::_file_selected");
    EditorQuickOpenDialog::popup_dialog(pVVar4,(Callable *)&local_e8);
    Callable::~Callable((Callable *)local_d8);
    CowData<StringName>::_unref((CowData<StringName> *)&local_e0);
    CowData<String>::_unref((CowData<String> *)&local_f0);
    break;
  case 2:
    if (*(Ref **)(this + 0xa18) != (Ref *)0x0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_d8._8_8_;
      local_d8 = auVar9 << 0x40;
      Ref<Resource>::operator=((Ref<Resource> *)local_d8,*(Ref **)(this + 0xa18));
      if ((_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar18 = __cxa_guard_acquire(&_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname),
         iVar18 != 0)) {
        _scs_create((char *)&_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_88,(Object *)local_d8._0_8_);
      Variant::Variant(local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar26 = (Variant *)local_40;
      auStack_a0._0_8_ = local_70;
      local_a8 = (Variant *)local_88;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_edit_menu_cbk(int)::{lambda()#1}::operator()()::sname,&local_a8,2);
      do {
        pVVar1 = pVVar26 + -0x18;
        pVVar26 = pVVar26 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar26 != (Variant *)local_88);
      Ref<Resource>::unref((Ref<Resource> *)local_d8);
    }
    break;
  case 3:
    Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),(Ref *)0x0);
    if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010db27;
    goto LAB_0010d295;
  case 4:
switchD_0010cc66_caseD_4:
    plVar6 = *(long **)(this + 0xa18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x198))((Ref<Resource> *)local_d8,plVar6,0);
      if ((Ref *)local_d8._0_8_ == (Ref *)0x0) {
        _err_print_error("_edit_menu_cbk","editor/editor_resource_picker.cpp",0x173,
                         "Condition \"unique_resource.is_null()\" is true.",0,0);
        Ref<Resource>::unref((Ref<Resource> *)local_d8);
      }
      else {
        Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),(Ref *)local_d8._0_8_);
        _resource_changed(this);
        Ref<Resource>::unref((Ref<Resource> *)local_d8);
      }
    }
    break;
  case 5:
    if (*(long *)(this + 0xa18) != 0) {
      if (*(long *)(this + 0xaa8) == 0) {
        this_01 = (ConfirmationDialog *)operator_new(0xdb8,"");
        ConfirmationDialog::ConfirmationDialog(this_01);
        postinitialize_handler((Object *)this_01);
        *(ConfirmationDialog **)(this + 0xaa8) = this_01;
        Node::add_child(this,this_01,0,0);
        pSVar24 = *(String **)(this + 0xaa8);
        local_e8 = (Ref *)0x0;
        String::parse_latin1((String *)&local_e8,"");
        local_f8 = 0;
        String::parse_latin1((String *)&local_f8,"Make Unique (Recursive)");
        TTR((String *)local_d8,(String *)&local_f8);
        Window::set_title(pSVar24);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        plVar6 = *(long **)(this + 0xaa8);
        pcVar7 = *(code **)(*plVar6 + 0x108);
        create_custom_callable_function_pointer<EditorResourcePicker>
                  ((EditorResourcePicker *)local_d8,(char *)this,
                   (_func_void *)"&EditorResourcePicker::_duplicate_selected_resources");
        (*pcVar7)(plVar6,SceneStringNames::singleton + 0x268,(String *)local_d8,0);
        Callable::~Callable((Callable *)local_d8);
        this_02 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(this_02,true);
        this_02[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)this_02 = &PTR__initialize_classv_00128bd8;
        postinitialize_handler((Object *)this_02);
        Node::add_child(*(undefined8 *)(this + 0xaa8),this_02,0,0);
        this_03 = (Label *)operator_new(0xad8,"");
        local_e8 = (Ref *)0x0;
        String::parse_latin1((String *)&local_e8,"");
        local_f8 = 0;
        String::parse_latin1((String *)&local_f8,"Select resources to make unique:");
        TTR((String *)local_d8,(String *)&local_f8);
        Label::Label(this_03,(String *)local_d8);
        postinitialize_handler((Object *)this_03);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        Node::add_child(this_02,this_03,0,0);
        this_04 = (Tree *)operator_new(0xdc8,"");
        Tree::Tree(this_04);
        postinitialize_handler((Object *)this_04);
        *(Tree **)(this + 0xab0) = this_04;
        Node::set_auto_translate_mode(this_04,2);
        Node::add_child(this_02,*(undefined8 *)(this + 0xab0),0,0);
        Tree::set_columns((int)*(undefined8 *)(this + 0xab0));
        Control::set_v_size_flags(*(undefined8 *)(this + 0xab0));
      }
      Tree::clear();
      uVar19 = Tree::create_item(*(TreeItem **)(this + 0xab0),0);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_d8._8_8_;
      local_d8 = auVar14 << 0x40;
      String::parse_latin1((String *)local_d8,"");
      local_e8 = (Ref *)0x0;
      Ref<Resource>::operator=((Ref<Resource> *)&local_e8,*(Ref **)(this + 0xa18));
      _gather_resources_to_duplicate(this,(Ref<Resource> *)&local_e8,uVar19,(String *)local_d8);
      Ref<Resource>::unref((Ref<Resource> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      Window::reset_size();
      pVVar5 = *(Vector2i **)(this + 0xaa8);
      fVar28 = (float)EditorScale::get_scale();
      local_a8 = (Variant *)CONCAT44(fVar28 * _LC180._4_4_,fVar28 * (float)_LC180);
      local_88[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
      Window::popup_centered(pVVar5);
    }
    break;
  case 6:
    if (*(long *)(this + 0xa18) != 0) {
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorNode::save_resource(EditorNode::singleton);
        return;
      }
      goto LAB_0010db27;
    }
    break;
  case 7:
    if (*(long *)(this + 0xa18) != 0) {
      create_custom_callable_function_pointer<EditorResourcePicker,Object*>
                ((EditorResourcePicker *)local_d8,(char *)this,
                 (_func_void_Object_ptr *)"&EditorResourcePicker::_resource_saved");
      pRVar21 = EditorNode::singleton;
      pcVar7 = *(code **)(*(long *)EditorNode::singleton + 0x118);
      StringName::StringName((StringName *)&local_e8,"resource_saved",false);
      cVar15 = (*pcVar7)(pRVar21,(StringName *)&local_e8,(EditorResourcePicker *)local_d8);
      if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
        StringName::unref();
      }
      pRVar21 = EditorNode::singleton;
      if (cVar15 == '\0') {
        pcVar7 = *(code **)(*(long *)EditorNode::singleton + 0x108);
        StringName::StringName((StringName *)&local_e8,"resource_saved",false);
        (*pcVar7)(pRVar21,(StringName *)&local_e8,(EditorResourcePicker *)local_d8,0);
        if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
          StringName::unref();
        }
      }
      local_e8 = (Ref *)0x0;
      EditorNode::save_resource_as(EditorNode::singleton,(String *)(this + 0xa18));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      Callable::~Callable((Callable *)local_d8);
    }
    break;
  case 8:
    lVar23 = EditorSettings::get_singleton();
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      Ref<Resource>::operator=((Ref<Resource> *)(lVar23 + 0x300),*(Ref **)(this + 0xa18));
      return;
    }
    goto LAB_0010db27;
  case 9:
    lVar23 = EditorSettings::get_singleton();
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_d8._8_8_;
    local_d8 = auVar13 << 0x40;
    Ref<Resource>::operator=((Ref<Resource> *)local_d8,*(Ref **)(lVar23 + 0x300));
    Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),(Ref *)local_d8._0_8_);
    Ref<Resource>::unref((Ref<Resource> *)local_d8);
    lVar23 = *(long *)(*(long *)(this + 0xa18) + 0x188);
    if ((lVar23 == 0) || (*(uint *)(lVar23 + -8) < 2)) {
LAB_0010ccc8:
      lVar23 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      if (lVar23 != 0) {
        EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
        Node::get_scene_file_path();
        Resource::get_path();
        String::get_slice((char *)&local_e8,(int)(CowData<char32_t> *)&local_f8);
        cVar15 = String::operator!=((String *)&local_e8,(String *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        if (cVar15 != '\0') goto switchD_0010cc66_caseD_4;
      }
    }
    else {
      pcVar2 = (char *)(*(long *)(this + 0xa18) + 0x188);
      iVar18 = String::find(pcVar2,0x111d65);
      if ((iVar18 != -1) || (cVar15 = String::begins_with(pcVar2), cVar15 != '\0'))
      goto LAB_0010ccc8;
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010d295:
      _resource_changed(this);
      return;
    }
    goto LAB_0010db27;
  case 10:
    Resource::get_path();
    FileSystemDock::navigate_to_path(pSVar24);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    break;
  default:
    cVar15 = (**(code **)(*(long *)this + 0x378))();
    if (cVar15 == '\0') {
      if (param_1 < 1000) {
        lVar23 = *(long *)(this + 0xa30);
        if (lVar23 == 0) {
          if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
            _err_print_error("_edit_menu_cbk","editor/editor_resource_picker.cpp",0x1ce,
                             "Condition \"inheritors_array.is_empty()\" is true.",0,0);
            return;
          }
          goto LAB_0010db27;
        }
        lVar22 = (long)(param_1 + -100);
        if ((param_1 + -100 < 0) || (*(long *)(lVar23 + -8) <= lVar22)) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar22,*(long *)(lVar23 + -8),"p_index"
                     ,"size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        local_100 = (long *)0x0;
        pCVar3 = (CowData *)(lVar23 + lVar22 * 8);
        if (*(long *)pCVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,pCVar3);
        }
        auStack_a0 = (undefined1  [16])0x0;
        local_a8 = (Variant *)0x0;
        StringName::StringName((StringName *)local_d8,(String *)&local_100,false);
        cVar15 = ScriptServer::is_global_class((StringName *)local_d8);
        if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
          StringName::unref();
        }
        if (cVar15 == '\0') {
          StringName::StringName((StringName *)local_d8,(String *)&local_100,false);
          pOVar20 = (Object *)ClassDB::instantiate((StringName *)local_d8);
          Variant::Variant((Variant *)local_88,pOVar20);
          Variant::operator=((Variant *)&local_a8,(Variant *)local_88);
          if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_d8._0_8_ != 0)) {
            StringName::unref();
          }
        }
        else {
          EditorData::script_class_instance((String *)local_88);
          Variant::operator=((Variant *)&local_a8,(Variant *)local_88);
          if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        bVar16 = Variant::operator_cast_to_bool((Variant *)&local_a8);
        if (!bVar16) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_d8._8_8_;
          local_d8 = auVar12 << 0x40;
          pSVar24 = (String *)(EditorNode::singleton + 0x430);
          String::parse_latin1((String *)local_d8,"Resource");
          EditorData::instantiate_custom_type((String *)local_88,pSVar24);
          Variant::operator=((Variant *)&local_a8,(Variant *)local_88);
          if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        }
        pOVar20 = Variant::operator_cast_to_Object_((Variant *)&local_a8);
        if ((pOVar20 == (Object *)0x0) ||
           (pRVar21 = (Ref *)__dynamic_cast(pOVar20,&Object::typeinfo,&Resource::typeinfo,0),
           pRVar21 == (Ref *)0x0)) {
          _err_print_error("_edit_menu_cbk","editor/editor_resource_picker.cpp",0x1de,
                           "Condition \"!resp\" is true. Breaking.",0,0);
          cVar15 = Variant::needs_deinit[(int)local_a8];
        }
        else {
          pOVar20 = (Object *)(EditorNode::singleton + 0x430);
          Variant::operator_cast_to_Object_((Variant *)&local_a8);
          EditorData::instantiate_object_properties(pOVar20);
          local_f8 = 0;
          Ref<Resource>::operator=((Ref<Resource> *)&local_f8,*(Ref **)(this + 0xa18));
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_d8._8_8_;
          local_d8 = auVar10 << 0x40;
          local_e8 = pRVar21;
          cVar15 = RefCounted::init_ref();
          if (cVar15 == '\0') {
            local_e8 = (Ref *)0x0;
            pRVar21 = (Ref *)0x0;
          }
          Ref<Resource>::unref((Ref<Resource> *)local_d8);
          Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),pRVar21);
          Ref<Resource>::unref((Ref<Resource> *)&local_e8);
          _resource_changed(this);
          Ref<Resource>::unref((Ref<Resource> *)&local_f8);
          cVar15 = Variant::needs_deinit[(int)local_a8];
        }
        if (cVar15 != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      }
      else {
        EditorNode::find_resource_conversion_plugin_for_resource((Ref *)local_d8);
        lVar23 = (long)(param_1 + -1000);
        if (local_d8._8_8_ == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *(long *)(local_d8._8_8_ + -8);
          if (lVar23 < lVar22) {
            plVar6 = *(long **)(local_d8._8_8_ + lVar23 * 8);
            (**(code **)(*plVar6 + 0x160))
                      ((Ref<Resource> *)&local_e8,plVar6,(Ref<Resource> *)(this + 0xa18));
            Ref<Resource>::operator=((Ref<Resource> *)(this + 0xa18),local_e8);
            Ref<Resource>::unref((Ref<Resource> *)&local_e8);
            _resource_changed(this);
            CowData<Ref<EditorResourceConversionPlugin>>::_unref
                      ((CowData<Ref<EditorResourceConversionPlugin>> *)(local_d8 + 8));
            break;
          }
        }
        _err_print_index_error
                  ("_edit_menu_cbk","editor/editor_resource_picker.cpp",0x1c7,lVar23,lVar22,
                   "to_type","conversions.size()","",false,false);
        CowData<Ref<EditorResourceConversionPlugin>>::_unref
                  ((CowData<Ref<EditorResourceConversionPlugin>> *)(local_d8 + 8));
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010db27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<EditorResourceConversionPlugin> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<EditorResourceConversionPlugin>>::_copy_on_write
          (CowData<Ref<EditorResourceConversionPlugin>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* EditorResourcePicker::_update_menu_items() */

void __thiscall EditorResourcePicker::_update_menu_items(EditorResourcePicker *this)

{
  int *piVar1;
  bool *pbVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Object *pOVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  EditorResourcePicker EVar9;
  undefined8 uVar10;
  int iVar11;
  long in_FS_OFFSET;
  CowData<char32_t> *local_f8;
  long local_b0;
  long local_a8;
  Object *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  long local_88;
  Object *local_80;
  long local_78;
  undefined8 *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar5 = *(long *)(this + 0xac8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == 0) {
    _ensure_resource_menu(this);
    lVar5 = *(long *)(this + 0xac8);
  }
  PopupMenu::clear(SUB81(lVar5,0));
  if (this[0xa20] != (EditorResourcePicker)0x0) {
    (**(code **)(*(long *)this + 0x370))(this,*(undefined8 *)(this + 0xac8));
    uVar10 = *(undefined8 *)(this + 0xac8);
    local_68 = (Object *)&_LC4;
    local_78 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x111ef2;
    local_80 = (Object *)0x0;
    local_60 = 0xd;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_68,(String *)&local_80);
    if ((_update_menu_items()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#1}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_menu_items()::{lambda()#1}::operator()()::sname,false);
      __cxa_atexit(StringName::~StringName,&_update_menu_items()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_menu_items()::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_88);
    PopupMenu::add_icon_item(uVar10,(StringName *)&local_88,(String *)&local_68,1,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    uVar10 = *(undefined8 *)(this + 0xac8);
    local_78 = 0;
    local_68 = (Object *)&_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = (Object *)0x0;
    String::parse_latin1
              ((String *)&local_80,
               "Opens a quick menu to select from a list of allowed Resource files.");
    TTR((String *)&local_68,(String *)&local_80);
    PopupMenu::set_item_tooltip((int)uVar10,(String *)0xffffffff);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = 0;
    local_68 = (Object *)&_LC4;
    uVar10 = *(undefined8 *)(this + 0xac8);
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"Load...");
    TTR((String *)&local_68,(String *)&local_80);
    if ((_update_menu_items()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#2}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_menu_items()::{lambda()#2}::operator()()::sname,false);
      __cxa_atexit(StringName::~StringName,&_update_menu_items()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_menu_items()::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_88);
    PopupMenu::add_icon_item(uVar10,(StringName *)&local_88,(String *)&local_68,0,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  lVar5 = EditorNode::singleton;
  if (*(Ref **)(this + 0xa18) != (Ref *)0x0) {
    local_68 = (Object *)0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_68,*(Ref **)(this + 0xa18));
    cVar3 = EditorNode::is_resource_read_only(lVar5,(Ref<Resource> *)&local_68,1);
    Ref<Resource>::unref((Ref<Resource> *)&local_68);
    if (cVar3 == '\0') {
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)&local_78,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Edit");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#4}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#4}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
    }
    else {
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)&local_78,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Inspect");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#3}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#3}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#3}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
    }
    local_f8 = (CowData<char32_t> *)&local_78;
    PopupMenu::add_icon_item(uVar10,&local_88,(Ref<Resource> *)&local_68,2,0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_f8);
    if (this[0xa20] != (EditorResourcePicker)0x0) {
      cVar3 = _is_custom_type_script(this);
      if (cVar3 == '\0') {
        local_78 = 0;
        uVar10 = *(undefined8 *)(this + 0xac8);
        String::parse_latin1((String *)local_f8,"");
        local_80 = (Object *)0x0;
        String::parse_latin1((String *)&local_80,"Clear");
        TTR((String *)&local_68,(String *)&local_80);
        if ((_update_menu_items()::{lambda()#5}::operator()()::sname == '\0') &&
           (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#5}::operator()()::sname),
           iVar11 != 0)) {
          _scs_create((char *)&_update_menu_items()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_menu_items()::{lambda()#5}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_menu_items()::{lambda()#5}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_88);
        PopupMenu::add_icon_item(uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,3,0);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_f8);
      }
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)local_f8,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Make Unique");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#6}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#6}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#6}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      PopupMenu::add_icon_item(uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,4,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_f8);
      local_90 = (undefined8 *)0x0;
      Object::get_property_list
                (*(List **)(this + 0xa18),SUB81((List<PropertyInfo,DefaultAllocator> *)&local_90,0))
      ;
      if (local_90 != (undefined8 *)0x0) {
        for (piVar1 = (int *)*local_90; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 0xc)) {
          if ((*piVar1 == 0x18) && (piVar1[6] == 0x11)) {
            cVar3 = String::operator!=((String *)(piVar1 + 2),"script");
            if (cVar3 != '\0') {
              pbVar2 = *(bool **)(this + 0xa18);
              StringName::StringName((StringName *)&local_68,(String *)(piVar1 + 2),false);
              Object::get((StringName *)local_58,pbVar2);
              pOVar6 = Variant::operator_cast_to_Object_((Variant *)local_58);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
                StringName::unref();
              }
              if (pOVar6 != (Object *)0x0) {
                local_78 = 0;
                uVar10 = *(undefined8 *)(this + 0xac8);
                String::parse_latin1((String *)local_f8,"");
                local_80 = (Object *)0x0;
                String::parse_latin1((String *)&local_80,"Make Unique (Recursive)");
                TTR((String *)&local_68,(String *)&local_80);
                if ((_update_menu_items()::{lambda()#7}::operator()()::sname == '\0') &&
                   (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#7}::operator()()::
                                                  sname), iVar11 != 0)) {
                  _scs_create((char *)&_update_menu_items()::{lambda()#7}::operator()()::sname,true)
                  ;
                  __cxa_atexit(StringName::~StringName,
                               &_update_menu_items()::{lambda()#7}::operator()()::sname,
                               &__dso_handle);
                  __cxa_guard_release(&_update_menu_items()::{lambda()#7}::operator()()::sname);
                }
                Control::get_editor_theme_icon((StringName *)&local_88);
                PopupMenu::add_icon_item
                          (uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,5,0);
                Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref(local_f8);
                break;
              }
            }
          }
        }
      }
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)local_f8,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Save");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#8}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#8}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#8}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#8}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      PopupMenu::add_icon_item(uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,6,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_f8);
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)local_f8,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Save As...");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#9}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#9}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#9}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      PopupMenu::add_icon_item(uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,7,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_f8);
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_90);
    }
    Resource::get_path();
    cVar3 = String::is_resource_file();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar3 != '\0') {
      local_68 = (Object *)0x0;
      PopupMenu::add_separator(*(String **)(this + 0xac8),(int)(Ref<Resource> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_78 = 0;
      uVar10 = *(undefined8 *)(this + 0xac8);
      String::parse_latin1((String *)local_f8,"");
      local_80 = (Object *)0x0;
      String::parse_latin1((String *)&local_80,"Show in FileSystem");
      TTR((String *)&local_68,(String *)&local_80);
      if ((_update_menu_items()::{lambda()#10}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#10}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_update_menu_items()::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_menu_items()::{lambda()#10}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_menu_items()::{lambda()#10}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_88);
      PopupMenu::add_icon_item(uVar10,(Ref<Texture2D> *)&local_88,(Ref<Resource> *)&local_68,10,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_f8);
    }
  }
  lVar5 = EditorSettings::get_singleton();
  local_b0 = 0;
  Ref<Resource>::operator=((Ref<Resource> *)&local_b0,*(Ref **)(lVar5 + 0x300));
  EVar9 = this[0xa20];
  if ((EVar9 == (EditorResourcePicker)0x0) || (local_b0 == 0)) {
    lVar5 = *(long *)(this + 0xa18);
joined_r0x0010ead0:
    if (lVar5 == 0) goto LAB_0010eaf5;
    EVar9 = (EditorResourcePicker)0x0;
  }
  else if ((*(long *)(this + 0xa10) != 0) && (1 < *(uint *)(*(long *)(this + 0xa10) + -8))) {
    _get_resource_type((Ref *)&local_88);
    for (iVar11 = 0; iVar4 = String::get_slice_count((char *)(this + 0xa10)), iVar11 < iVar4;
        iVar11 = iVar11 + 1) {
      String::get_slice((char *)&local_80,(int)(this + 0xa10));
      StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
      StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
      cVar3 = ClassDB::is_parent_class((StringName *)&local_78,(StringName *)&local_68);
      if ((cVar3 != '\0') ||
         (cVar3 = EditorData::script_class_is_parent
                            ((String *)(EditorNode::singleton + 0x430),(String *)&local_88),
         cVar3 != '\0')) {
        if ((StringName::configured != '\0') &&
           (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_68 != (Object *)0x0)))) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        goto LAB_0010e674;
      }
      if (((StringName::configured != '\0') &&
          ((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    lVar5 = *(long *)(this + 0xa18);
    goto joined_r0x0010ead0;
  }
LAB_0010e674:
  local_68 = (Object *)0x0;
  iVar11 = (int)(CowData<char32_t> *)&local_68;
  PopupMenu::add_separator(*(String **)(this + 0xac8),iVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (*(long *)(this + 0xa18) != 0) {
    uVar10 = *(undefined8 *)(this + 0xac8);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"Copy");
    TTR((String *)&local_68,(String *)&local_80);
    PopupMenu::add_item(uVar10,(CowData<char32_t> *)&local_68,8,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (EVar9 != (EditorResourcePicker)0x0) {
    uVar10 = *(undefined8 *)(this + 0xac8);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"Paste");
    TTR((String *)&local_68,(String *)&local_80);
    PopupMenu::add_item(uVar10,(CowData<char32_t> *)&local_68,9,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if ((this[0xa20] != (EditorResourcePicker)0x0) && (*(long *)(this + 0xa18) != 0)) {
    EditorNode::find_resource_conversion_plugin_for_resource((Ref *)&local_78);
    if (local_70 != (undefined8 *)0x0) {
      local_68 = (Object *)0x0;
      PopupMenu::add_separator(*(String **)(this + 0xac8),iVar11);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    CowData<Ref<EditorResourceConversionPlugin>>::_copy_on_write
              ((CowData<Ref<EditorResourceConversionPlugin>> *)&local_70);
    puVar8 = local_70;
    CowData<Ref<EditorResourceConversionPlugin>>::_copy_on_write
              ((CowData<Ref<EditorResourceConversionPlugin>> *)&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      puVar7 = local_70 + local_70[-1];
    }
    if (puVar7 != puVar8) {
      iVar11 = 1000;
      do {
        (**(code **)(*(long *)*puVar8 + 0x150))((CowData<char32_t> *)&local_a8);
        local_a0 = (Object *)0x0;
        StringName::StringName((StringName *)&local_68,(String *)&local_a8,false);
        cVar3 = Control::has_theme_icon((StringName *)this,(StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 == '\0') {
          if ((_update_menu_items()::{lambda()#11}::operator()()::sname == '\0') &&
             (iVar4 = __cxa_guard_acquire(&_update_menu_items()::{lambda()#11}::operator()()::sname)
             , iVar4 != 0)) {
            _scs_create((char *)&_update_menu_items()::{lambda()#11}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_menu_items()::{lambda()#11}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_update_menu_items()::{lambda()#11}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_80);
          if (local_80 != local_a0) {
            local_68 = local_a0;
            local_a0 = local_80;
            if ((local_80 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              local_a0 = (Object *)0x0;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
        }
        else {
          StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
          Control::get_editor_theme_icon((StringName *)&local_80);
          if (local_80 != local_a0) {
            local_68 = local_a0;
            local_a0 = local_80;
            if ((local_80 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              local_a0 = (Object *)0x0;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
        }
        local_80 = (Object *)0x0;
        uVar10 = *(undefined8 *)(this + 0xac8);
        if (local_a8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
        }
        local_90 = (undefined8 *)0x0;
        local_60 = 0;
        local_68 = (Object *)&_LC4;
        String::parse_latin1((StrRange *)&local_90);
        local_68 = (Object *)0x111f83;
        local_98 = 0;
        local_60 = 0xd;
        String::parse_latin1((StrRange *)&local_98);
        TTR((String *)&local_88,(String *)&local_98);
        vformat<String>((CowData<char32_t> *)&local_68,(StringName *)&local_88,
                        (StringName *)&local_80);
        PopupMenu::add_icon_item(uVar10,&local_a0,(CowData<char32_t> *)&local_68,iVar11,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (((local_a0 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar6 = local_a0, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_a0), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        puVar8 = puVar8 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        iVar11 = iVar11 + 1;
      } while (puVar7 != puVar8);
    }
    CowData<Ref<EditorResourceConversionPlugin>>::_unref
              ((CowData<Ref<EditorResourceConversionPlugin>> *)&local_70);
  }
LAB_0010eaf5:
  Ref<Resource>::unref((Ref<Resource> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_update_menu() */

void __thiscall EditorResourcePicker::_update_menu(EditorResourcePicker *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined1 auVar3 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _update_menu_items(this);
  auVar3 = Control::get_screen_rect();
  Window::reset_size();
  fVar2 = (float)Window::get_contents_minimum_size();
  pVVar1 = *(Vector2i **)(this + 0xac8);
  local_40 = CONCAT44(auVar3._4_4_ + auVar3._12_4_,(auVar3._0_4_ + auVar3._8_4_) - (float)(int)fVar2
                     );
  local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
  Window::set_position(pVVar1);
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(long **)(this + 0xac8) + 0x240))(*(long **)(this + 0xac8),&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_resource_selected() */

void __thiscall EditorResourcePicker::_resource_selected(EditorResourcePicker *this)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pOVar5 = *(Object **)(this + 0xa18);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar5 == (Object *)0x0) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa98),0));
    _update_menu(this);
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    if (_resource_selected()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_resource_selected()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_resource_selected()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_resource_selected()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_resource_selected()::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant(local_88,pOVar5);
    Variant::Variant(local_70,false);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    pVVar4 = (Variant *)local_40;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_resource_selected()::{lambda()#1}::operator()()::sname,&local_a8,2);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != local_88);
    if (pOVar5 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar5);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar5,false);
            return;
          }
          goto LAB_0010fa0e;
        }
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fa0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::_button_input(Ref<InputEvent> const&) */

void __thiscall EditorResourcePicker::_button_input(EditorResourcePicker *this,Ref *param_1)

{
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pOVar4 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0
                              ), pOVar4 != (Object *)0x0)) &&
     (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
    cVar2 = InputEvent::is_pressed();
    if (((cVar2 != '\0') && (iVar3 = InputEventMouseButton::get_button_index(), iVar3 == 2)) &&
       ((*(long *)(this + 0xa18) != 0 || (this[0xa20] != (EditorResourcePicker)0x0)))) {
      _update_menu_items(this);
      uVar5 = InputEventMouse::get_position();
      uVar6 = Control::get_screen_position();
      local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                          (float)uVar6 + (float)uVar5);
      Window::reset_size();
      pVVar1 = *(Vector2i **)(this + 0xac8);
      local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
      Window::set_position(pVVar1);
      local_48 = 0;
      local_40 = 0;
      (**(code **)(**(long **)(this + 0xac8) + 0x240))();
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_0010fbb2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010fbb2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAudioStreamPicker::_preview_draw() */

void __thiscall EditorAudioStreamPicker::_preview_draw(EditorAudioStreamPicker *this)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  String *pSVar3;
  Ref *pRVar4;
  Rect2 *pRVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  Object *pOVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long *plVar17;
  long lVar18;
  size_t __n;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Db;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float local_110;
  String *local_108;
  Object *local_c8;
  Object *local_c0;
  long *local_b8;
  Object *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  long *local_98;
  undefined1 (*local_90) [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (long *)0x0;
  Ref<Resource>::operator=((Ref<Resource> *)&local_98,*(Ref **)(this + 0xa18));
  local_c8 = (Object *)0x0;
  if (((local_98 == (long *)0x0) ||
      (pOVar13 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&AudioStream::typeinfo,0),
      pOVar13 == (Object *)0x0)) ||
     (cVar9 = RefCounted::reference(), local_c8 = pOVar13, cVar9 != '\0')) {
    Ref<Resource>::unref((Ref<Resource> *)&local_98);
    if (local_c8 != (Object *)0x0) {
      if ((_preview_draw()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_preview_draw()::{lambda()#1}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_preview_draw()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_preview_draw()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_preview_draw()::{lambda()#1}::operator()()::sname);
      }
      uVar10 = Control::get_theme_font_size
                         ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
      pSVar3 = *(String **)(this + 0xa88);
      local_98 = (long *)&_LC4;
      local_a8 = (long *)0x0;
      local_90 = (undefined1 (*) [16])0x0;
      String::parse_latin1((StrRange *)&local_a8);
      Button::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      local_58._0_8_ = Control::get_size();
      local_80 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_58);
      if ((_preview_draw()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_preview_draw()::{lambda()#2}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&_preview_draw()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_preview_draw()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_preview_draw()::{lambda()#2}::operator()()::sname);
      }
      Control::get_theme_font((StringName *)&local_c0,(StringName *)this);
      Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
      dVar27 = (double)(**(code **)(*(long *)local_c8 + 0x1f8))();
      fVar24 = _LC206;
      auVar7._8_8_ = local_58._8_8_;
      auVar7._0_8_ = local_58._0_8_;
      auVar33._8_8_ = local_78._8_8_;
      auVar33._0_8_ = local_78._0_8_;
      fVar30 = extraout_XMM0_Db;
      if (dVar27 <= 0.0) {
        local_110 = 0.0;
      }
      else if ((int)local_80 < 1) {
        local_110 = 0.0;
        local_78 = auVar33;
        local_58 = auVar7;
      }
      else {
        fVar30 = extraout_XMM0_Db * _LC206;
        AudioStreamPreviewGenerator::generate_preview((Ref *)&local_b0);
        fVar23 = (float)AudioStreamPreview::get_length();
        local_a0 = (undefined8 *)0x0;
        lVar21 = (long)((int)local_80 * 2);
        if (lVar21 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
LAB_0011052e:
          if (0 < (int)local_80) {
            lVar21 = 0;
            iVar11 = 0;
            lVar22 = 1;
            fVar25 = 0.0;
            do {
              iVar11 = iVar11 + 1;
              fVar26 = (float)iVar11;
              fVar31 = (fVar25 * fVar23) / (float)(int)local_80;
              fVar32 = (fVar26 * fVar23) / (float)(int)local_80;
              fVar25 = (float)AudioStreamPreview::get_max(fVar31,fVar32);
              dVar27 = (double)fVar25 * __LC207 + __LC207;
              fVar25 = (float)AudioStreamPreview::get_min(fVar31,fVar32);
              dVar29 = (double)fVar25 * __LC207 + __LC207;
              lVar18 = lVar21;
              if (local_a0 == (undefined8 *)0x0) {
                lVar20 = 0;
LAB_001106dc:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar18,lVar20,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lVar20 = local_a0[-1];
              if (lVar20 <= lVar21) goto LAB_001106dc;
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
              local_a0[lVar21] = CONCAT44((float)dVar29 * fVar30 + 0.0,fVar26);
              lVar18 = lVar22;
              if (local_a0 == (undefined8 *)0x0) {
                lVar20 = 0;
                goto LAB_001106dc;
              }
              lVar20 = local_a0[-1];
              if (lVar20 <= lVar22) goto LAB_001106dc;
              lVar21 = lVar21 + 2;
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
              local_a0[lVar22] = CONCAT44((float)dVar27 * fVar30 + 0.0,fVar26);
              lVar22 = lVar22 + 2;
              fVar25 = fVar26;
            } while (iVar11 < (int)local_80);
          }
        }
        else if (lVar21 != 0) {
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
          uVar14 = lVar21 * 8 - 1;
          uVar14 = uVar14 | uVar14 >> 1;
          uVar14 = uVar14 | uVar14 >> 2;
          uVar14 = uVar14 | uVar14 >> 4;
          uVar14 = uVar14 | uVar14 >> 8;
          uVar14 = uVar14 | uVar14 >> 0x10;
          puVar15 = (undefined8 *)Memory::alloc_static((uVar14 | uVar14 >> 0x20) + 0x11,false);
          if (puVar15 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            local_a0 = puVar15 + 2;
            *puVar15 = 1;
            memset(local_a0,0,lVar21 * 8);
            puVar15[1] = lVar21;
          }
          goto LAB_0011052e;
        }
        if ((_preview_draw()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar11 = __cxa_guard_acquire(&_preview_draw()::{lambda()#3}::operator()()::sname),
           iVar11 != 0)) {
          _scs_create((char *)&_preview_draw()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_preview_draw()::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_preview_draw()::{lambda()#3}::operator()()::sname);
        }
        auVar33 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_preview_draw()::{lambda()#3}::operator()()::sname);
        local_90 = (undefined1 (*) [16])0x0;
        puVar16 = (ulong *)Memory::alloc_static(0x20,false);
        if (puVar16 == (ulong *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_90 = (undefined1 (*) [16])(puVar16 + 2);
          *puVar16 = 1;
          puVar16[1] = 1;
          uVar14 = CONCAT44(_LC60,_UNK_0012ae68);
          puVar16[2] = __LC211;
          puVar16[3] = uVar14;
          if (1 < *puVar16) {
            if (local_90 == (undefined1 (*) [16])0x0) {
              _preview_draw();
              return;
            }
            uVar14 = puVar16[1];
            lVar21 = 0;
            __n = uVar14 * 0x10;
            if (__n != 0) {
              uVar19 = __n - 1 >> 1 | __n - 1;
              uVar19 = uVar19 >> 2 | uVar19;
              uVar19 = uVar19 | uVar19 >> 4;
              uVar19 = uVar19 | uVar19 >> 8;
              uVar19 = uVar19 | uVar19 >> 0x10;
              lVar21 = (uVar19 | uVar19 >> 0x20) + 1;
            }
            puVar15 = (undefined8 *)Memory::alloc_static(lVar21 + 0x10,false);
            pauVar2 = local_90;
            if (puVar15 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              pauVar1 = (undefined1 (*) [16])(puVar15 + 2);
              *puVar15 = 1;
              puVar15[1] = uVar14;
              memcpy(pauVar1,local_90,__n);
              pauVar8 = local_90;
              LOCK();
              pauVar2 = pauVar2 + -1;
              *(ulong *)*pauVar2 = *(ulong *)*pauVar2 - 1;
              UNLOCK();
              local_90 = pauVar1;
              if (*(ulong *)*pauVar2 == 0) {
                local_90 = (undefined1 (*) [16])0x0;
                Memory::free_static(pauVar8 + -1,false);
                local_90 = pauVar1;
              }
            }
          }
          *local_90 = auVar33;
        }
        plVar17 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar17 + 0xf08))
                  (plVar17,*(undefined8 *)(*(long *)(this + 0xb08) + 0x428),(StrRange *)&local_a8,
                   (Ref<Resource> *)&local_98,0);
        if (*(int *)(this + 0xb30) != 0) {
          if ((_preview_draw()::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar11 = __cxa_guard_acquire(&_preview_draw()::{lambda()#4}::operator()()::sname),
             iVar11 != 0)) {
            _scs_create((char *)&_preview_draw()::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_preview_draw()::{lambda()#4}::operator()()::sname
                         ,&__dso_handle);
            __cxa_guard_release(&_preview_draw()::{lambda()#4}::operator()()::sname);
          }
          lVar21 = 0;
          local_78 = Control::get_theme_color
                               ((StringName *)this,
                                (StringName *)&_preview_draw()::{lambda()#4}::operator()()::sname);
          if (*(int *)(this + 0xb30) != 0) {
            do {
              fVar25 = (float)(int)local_80;
              fVar26 = (*(float *)(this + lVar21 * 4 + 0xb10) * fVar25) / fVar23;
              if (0.0 <= fVar26) {
                if (fVar26 <= fVar25) {
                  fVar25 = fVar26;
                }
                if ((float)(int)fVar25 != 0.0) {
                  fStack_5c = (float)(int)fVar30;
                  pRVar5 = *(Rect2 **)(this + 0xb08);
                  fStack_64 = 0.0;
                  fStack_60 = 2.8026e-45;
                  local_68 = (float)(int)fVar25;
                  auVar33 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
                  local_58 = auVar33;
                  CanvasItem::draw_rect(pRVar5,(Color *)local_58,SUB81(local_78,0),_LC11,true);
                }
              }
              lVar21 = lVar21 + 1;
            } while ((uint)lVar21 < *(uint *)(this + 0xb30));
          }
        }
        pauVar2 = local_90;
        local_110 = fVar30 + 0.0;
        if (local_90 != (undefined1 (*) [16])0x0) {
          LOCK();
          pauVar1 = local_90 + -1;
          *(ulong *)*pauVar1 = *(ulong *)*pauVar1 - 1;
          UNLOCK();
          if (*(ulong *)*pauVar1 == 0) {
            local_90 = (undefined1 (*) [16])0x0;
            Memory::free_static(pauVar2 + -1,false);
          }
        }
        puVar15 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          LOCK();
          plVar17 = local_a0 + -2;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_a0 = (undefined8 *)0x0;
            Memory::free_static(puVar15 + -2,false);
          }
        }
        if (local_b0 != (Object *)0x0) {
          cVar9 = RefCounted::unreference();
          if (cVar9 != '\0') {
            cVar9 = predelete_handler(local_b0);
            if (cVar9 != '\0') {
              (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
              Memory::free_static(local_b0,false);
            }
          }
        }
      }
      pSVar3 = EditorNode::singleton;
      local_108 = (String *)&local_b0;
      local_b8 = (long *)0x0;
      local_68 = _LC60;
      fStack_64 = _LC60;
      fStack_60 = _LC60;
      fStack_5c = _LC60;
      if (*(int *)(this + 0xb30) == 0) {
        local_b0 = (Object *)0x0;
        String::parse_latin1(local_108,"Object");
        EditorNode::get_object_icon((Object *)&local_a8,pSVar3);
        if (local_a8 != local_b8) {
          local_98 = local_b8;
          local_b8 = local_a8;
          if (local_a8 != (long *)0x0) {
            cVar9 = RefCounted::reference();
            if (cVar9 == '\0') {
              local_b8 = (long *)0x0;
            }
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      }
      else {
        if (_preview_draw()::{lambda()#5}::operator()()::sname == '\0') {
          iVar11 = __cxa_guard_acquire(&_preview_draw()::{lambda()#5}::operator()()::sname);
          if (iVar11 != 0) {
            _scs_create((char *)&_preview_draw()::{lambda()#5}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_preview_draw()::{lambda()#5}::operator()()::sname
                         ,&__dso_handle);
            __cxa_guard_release(&_preview_draw()::{lambda()#5}::operator()()::sname);
          }
        }
        Control::get_editor_theme_icon((StringName *)&local_a8);
        if (local_a8 != local_b8) {
          local_98 = local_b8;
          local_b8 = local_a8;
          if (local_a8 != (long *)0x0) {
            cVar9 = RefCounted::reference();
            if (cVar9 == '\0') {
              local_b8 = (long *)0x0;
            }
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
        OS::get_singleton();
        uVar14 = OS::get_ticks_msec();
        if (0xfa < uVar14 % 500) {
          local_68 = __LC214;
          fStack_64 = _LC206;
          fStack_60 = (float)_UNK_0012ae78;
          fStack_5c = (float)((ulong)_UNK_0012ae78 >> 0x20);
        }
      }
      local_b0 = (Object *)0x0;
      Resource::get_name();
      if ((local_98 == (long *)0x0) || (lVar21 = local_98[-1], (int)lVar21 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_0011025d:
        Resource::get_path();
        cVar9 = String::is_resource_file();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (cVar9 == '\0') {
          (**(code **)(*(long *)local_c8 + 0x48))((StrRange *)&local_a8);
          String::replace_first((char *)&local_98,(char *)&local_a8);
          if (local_b0 != (Object *)local_98) {
LAB_001102bc:
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            local_b0 = (Object *)local_98;
            local_98 = (long *)0x0;
          }
        }
        else {
          Resource::get_path();
          String::get_file();
          if (local_b0 != (Object *)local_98) goto LAB_001102bc;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if ((int)lVar21 == 1) goto LAB_0011025d;
        Resource::get_name();
        if (local_b0 != (Object *)local_98) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          local_b0 = (Object *)local_98;
          local_98 = (long *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      pRVar4 = *(Ref **)(this + 0xb08);
      iVar11 = (**(code **)(*local_b8 + 0x1d0))();
      fVar23 = (float)EditorScale::get_scale();
      local_78._0_8_ =
           CONCAT44((int)(local_110 + (fVar30 - (float)iVar11) * fVar24),
                    (int)(fVar23 * (float)_LC216));
      uVar28 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
      local_58._0_8_ = uVar28;
      CanvasItem::draw_texture(pRVar4,(Vector2 *)&local_b8,(Color *)local_58);
      uVar28 = *(undefined8 *)(this + 0xb08);
      local_58 = Control::get_theme_color
                           ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
      fVar32 = (float)(int)local_80;
      fVar24 = (float)EditorScale::get_scale();
      fVar24 = fVar24 * (float)_LC216;
      iVar11 = (**(code **)(*local_b8 + 0x1c8))();
      fVar23 = (float)(**(code **)(*(long *)local_c0 + 0x220))(local_c0,uVar10);
      fVar25 = (float)(**(code **)(*(long *)local_c0 + 0x218))(local_c0,uVar10);
      fVar26 = (float)EditorScale::get_scale();
      fVar26 = (float)_LC216 * fVar26;
      fVar30 = _LC216._4_4_ * (fVar30 - fVar25);
      iVar12 = (**(code **)(*local_b8 + 0x1c8))();
      local_88 = CONCAT44((int)(local_110 + fVar23 + fVar30),(int)((float)iVar12 + fVar26));
      local_78._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
      CanvasItem::draw_string
                ((fVar32 - fVar24) - (float)iVar11,uVar28,(StringName *)&local_c0,
                 (Vector2i *)local_78,local_108,1,uVar10,(Vector2 *)local_58,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
      if (local_c0 != (Object *)0x0) {
        cVar9 = RefCounted::unreference();
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(local_c0);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
            Memory::free_static(local_c0,false);
          }
        }
      }
      goto joined_r0x0011013d;
    }
  }
  else {
    local_c8 = (Object *)0x0;
    Ref<Resource>::unref((Ref<Resource> *)&local_98);
  }
  pSVar3 = *(String **)(this + 0xa88);
  local_a8 = (long *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b0 = (Object *)0x0;
  String::parse_latin1((String *)&local_b0,"<empty>");
  TTR((String *)&local_98,(String *)&local_b0);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
joined_r0x0011013d:
  if (local_c8 != (Object *)0x0) {
    cVar9 = RefCounted::unreference();
    if (cVar9 != '\0') {
      cVar9 = predelete_handler(local_c8);
      if (cVar9 != '\0') {
        (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
        Memory::free_static(local_c8,false);
      }
    }
  }
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
  
  return (uint)CONCAT71(0x12ab,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ac,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ac,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
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



/* Vector<String>::~Vector() */

void __thiscall Vector<String>::~Vector(Vector<String> *this)

{
  CowData<String>::_unref((CowData<String> *)(this + 8));
  return;
}



/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this)

{
  return;
}



/* MethodBindTRC<Node*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Node*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Node*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Node*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Resource>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Resource>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Resource>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Resource>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Resource> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Resource>>::_gen_argument_type(MethodBindT<Ref<Resource>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Resource> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Resource>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::get_argument_meta(int) const */

long __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::get_argument_meta
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID> *this,
          int param_1)

{
  return (ulong)(param_1 == 3) << 3;
}



/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_argument_count
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::get_argument_count
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001289d8;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001289d8;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00132018 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
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



/* EditorResourcePicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorResourcePicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorScriptPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorScriptPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorShaderPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorShaderPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAudioStreamPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAudioStreamPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00132020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
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



/* EditorResourcePicker::_property_can_revertv(StringName const&) const */

undefined8 EditorResourcePicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorScriptPicker::_property_can_revertv(StringName const&) const */

undefined8 EditorScriptPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorShaderPicker::_property_can_revertv(StringName const&) const */

undefined8 EditorShaderPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAudioStreamPicker::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioStreamPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00132028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a330;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a330;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a390;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a390;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a3f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a3f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a450;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a450;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Resource> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a4b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Resource> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a4b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Resource>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Resource>>::~MethodBindTR(MethodBindTR<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a510;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Resource>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Resource>>::~MethodBindTR(MethodBindTR<Ref<Resource>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a510;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a570;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a570;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a5d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a5d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a630;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a630;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::_gen_argument_type
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID> *this,
          int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 4) && (uVar1 = 4, param_1 != 0)) && (uVar1 = 2, param_1 != 3)) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorResourcePicker::_bind_methods() [clone .cold] */

void EditorResourcePicker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<EditorResourceConversionPlugin> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<EditorResourceConversionPlugin>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioStreamPicker::_preview_draw() [clone .cold] */

void EditorAudioStreamPicker::_preview_draw(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<EditorResourcePicker, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this)

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
      goto LAB_0011269d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011269d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011269d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132030 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this)

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
      goto LAB_001127ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001127ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001127ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::get_object
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this)

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
      goto LAB_001128ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001128ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001128ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001129ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001129ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001129ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_object
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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
      goto LAB_00112aed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112aed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112aed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this)

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
      goto LAB_00112bed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112bed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112bed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00112ced;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112ced;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112ced:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_00112ded;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112ded;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112ded:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this)

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
      goto LAB_00112eed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112eed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112eed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_00112fed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112fed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112fed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12ab,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ab,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ab,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ab,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ab,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorResourcePicker::is_class_ptr(void*) const */

ulong EditorResourcePicker::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x12ab,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x12ab,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ab,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ab,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ab,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ab,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorScriptPicker::_validate_propertyv(PropertyInfo&) const */

void EditorScriptPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorShaderPicker::_validate_propertyv(PropertyInfo&) const */

void EditorShaderPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorAudioStreamPicker::_validate_propertyv(PropertyInfo&) const */

void EditorAudioStreamPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorResourcePicker::_validate_propertyv(PropertyInfo&) const */

void EditorResourcePicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00132038 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00132038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorScriptPicker::is_class_ptr(void*) const */

uint EditorScriptPicker::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x12ab,in_RSI == &EditorResourcePicker::get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x12ab,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x12ab,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorAudioStreamPicker::is_class_ptr(void*) const */

uint EditorAudioStreamPicker::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x12ab,in_RSI == &EditorResourcePicker::get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x12ab,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x12ab,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorShaderPicker::is_class_ptr(void*) const */

uint EditorShaderPicker::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x12ab,in_RSI == &EditorResourcePicker::get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x12ab,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x12ab,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ab,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorShaderPicker::_setv(StringName const&, Variant const&) */

undefined8 EditorShaderPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00132040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorScriptPicker::_setv(StringName const&, Variant const&) */

undefined8 EditorScriptPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorResourcePicker::_setv(StringName const&, Variant const&) */

undefined8 EditorResourcePicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAudioStreamPicker::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioStreamPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00132040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113898) */
/* EditorShaderPicker::_getv(StringName const&, Variant&) const */

undefined8 EditorShaderPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113908) */
/* EditorResourcePicker::_getv(StringName const&, Variant&) const */

undefined8 EditorResourcePicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113978) */
/* EditorAudioStreamPicker::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioStreamPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001139e8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113a58) */
/* EditorScriptPicker::_getv(StringName const&, Variant&) const */

undefined8 EditorScriptPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00132048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &Container::vtable;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113b20:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b80;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113b80:
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



/* EditorScriptPicker::_get_class_namev() const */

undefined8 * EditorScriptPicker::_get_class_namev(void)

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
LAB_00113d23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113d23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorScriptPicker");
      goto LAB_00113d8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorScriptPicker");
LAB_00113d8e:
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
LAB_00113e13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113e13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00113e7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00113e7e:
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
LAB_00113f03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113f03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00113f6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00113f6e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorResourcePicker::_get_class_namev() const */

undefined8 * EditorResourcePicker::_get_class_namev(void)

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
LAB_00113ff3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113ff3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorResourcePicker");
      goto LAB_0011405e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorResourcePicker");
LAB_0011405e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioStreamPicker::_get_class_namev() const */

undefined8 * EditorAudioStreamPicker::_get_class_namev(void)

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
LAB_001140e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001140e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioStreamPicker");
      goto LAB_0011414e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioStreamPicker");
LAB_0011414e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorShaderPicker::_get_class_namev() const */

undefined8 * EditorShaderPicker::_get_class_namev(void)

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
LAB_001141d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001141d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorShaderPicker");
      goto LAB_0011423e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorShaderPicker");
LAB_0011423e:
  return &_get_class_namev()::_class_name_static;
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



/* MethodBindTRC<Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Node*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 4;
  local_38 = &_LC25;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* EditorResourcePicker::get_class() const */

void EditorResourcePicker::get_class(void)

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



/* EditorAudioStreamPicker::get_class() const */

void EditorAudioStreamPicker::get_class(void)

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



/* EditorShaderPicker::get_class() const */

void EditorShaderPicker::get_class(void)

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



/* EditorScriptPicker::get_class() const */

void EditorScriptPicker::get_class(void)

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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001149dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001149dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Resource>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<Resource>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Resource";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00114ae0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00114ae0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x22;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00114cfc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00114cfc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00114e7c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00114e7c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011527c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011527c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001153fc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001153fc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011554b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
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
      if (cVar5 != '\0') goto LAB_0011554b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011554b:
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
            if (lVar4 == 0) goto LAB_001156ef;
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
LAB_001156ef:
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
    if (cVar5 != '\0') goto LAB_001157a3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001157a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &Container::vtable;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011596b;
  }
  cVar5 = String::operator==(param_1,"BaseMaterial3D");
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
      if (cVar5 != '\0') goto LAB_0011596b;
    }
    cVar5 = String::operator==(param_1,"Material");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_00115aa8;
    }
  }
LAB_0011596b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00115aa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00115b1f;
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
LAB_00115b1f:
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
    if (cVar5 != '\0') goto LAB_00115bd3;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115bd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00115d10) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00132050 != Container::_notification) {
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
  if ((code *)PTR__notification_00132050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar1 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
        StringName::unref();
        pvVar2 = *(void **)this;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar2,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_001160dc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_001160dc:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0011643b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC38 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0011643b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0011643b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorResourcePicker, String
   const&>(EditorResourcePicker*, char const*, void (EditorResourcePicker::*)(String const&)) */

EditorResourcePicker *
create_custom_callable_function_pointer<EditorResourcePicker,String_const&>
          (EditorResourcePicker *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129d90;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorResourcePicker>(EditorResourcePicker*,
   char const*, void (EditorResourcePicker::*)()) */

EditorResourcePicker *
create_custom_callable_function_pointer<EditorResourcePicker>
          (EditorResourcePicker *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129e20;
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



/* Callable create_custom_callable_function_pointer<EditorResourcePicker,
   Object*>(EditorResourcePicker*, char const*, void (EditorResourcePicker::*)(Object*)) */

EditorResourcePicker *
create_custom_callable_function_pointer<EditorResourcePicker,Object*>
          (EditorResourcePicker *param_1,char *param_2,_func_void_Object_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129eb0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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
    if (*in_RSI != 0) goto LAB_0011695c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0011695c:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00116da8;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC38) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00116c85;
LAB_00116de6:
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
      goto LAB_00116da8;
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
    if (lVar30 == 0) goto LAB_00116de6;
LAB_00116c85:
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
LAB_00116da8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar1 == pOVar3) {
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



/* void Ref<StandardMaterial3D>::instantiate<>() */

void __thiscall Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this)

{
  char cVar1;
  BaseMaterial3D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_001289d8;
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
    this_00 = (BaseMaterial3D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BaseMaterial3D *)pOVar3) goto LAB_00117085;
    *(BaseMaterial3D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00117085;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BaseMaterial3D *)0x0) {
    return;
  }
LAB_00117085:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
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
    if (this_00 == (ShaderMaterial *)pOVar3) goto LAB_001171b5;
    *(ShaderMaterial **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001171b5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ShaderMaterial *)0x0) {
    return;
  }
LAB_001171b5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ImageTexture>::instantiate<>() */

void __thiscall Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
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
    this_00 = (ImageTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_001172e5;
    *(ImageTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001172e5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_001172e5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable Callable::bind<Button*>(Button*) const */

Button * Callable::bind<Button*>(Button *param_1)

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



/* Callable create_custom_callable_function_pointer<EditorResourcePicker, Ref<InputEvent>
   const&>(EditorResourcePicker*, char const*, void (EditorResourcePicker::*)(Ref<InputEvent>
   const&)) */

EditorResourcePicker *
create_custom_callable_function_pointer<EditorResourcePicker,Ref<InputEvent>const&>
          (EditorResourcePicker *param_1,char *param_2,_func_void_Ref_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a210;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* WARNING: Removing unreachable block (ram,0x001176e8) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
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



/* WARNING: Removing unreachable block (ram,0x00117a20) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
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
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
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



/* WARNING: Removing unreachable block (ram,0x00117d10) */
/* String vformat<StringName, String>(String const&, StringName const, String const) */

undefined8 *
vformat<StringName,String>(undefined8 *param_1,bool *param_2,StringName *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
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
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
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
        if (pvVar5 == (void *)0x0) goto LAB_00117ff4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00117ff4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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



/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::call
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this,Variant **param_1,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011832f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011832f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001183f1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011832f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001183f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorResourcePicker, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this,Variant **param_1,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011854f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011854f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00118611;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011854f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00118611:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::call
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001187d9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001187d9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC73;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0011889b;
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
LAB_001187d9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011889b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
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
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011896e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011896e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC74;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_00118a3d:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_00118a3d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0011896e;
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
  local_48 = (Object *)0x11813f;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011896e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00118ce5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00118ce5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_00118d6f:
          uVar4 = _LC75;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00118d6f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC77;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00118ce5;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00118ce5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_98 >> 8;
      local_98 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_98 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00119064;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00119064;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_001190ec:
          uVar4 = _LC75;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_001190ec;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC77;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar12 = (bool)(*pcVar11)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar6);
        Variant::Variant((Variant *)local_78,bVar12);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00119064;
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
  local_a0 = 0;
  local_98 = "\', can\'t call method.";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  uitos((ulong)local_b0);
  operator+((char *)local_a8,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_98,(String *)local_a8);
  _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00119064:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011940c;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0011940c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_0011948c:
          uVar4 = _LC78;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011948c;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC77;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar6);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_0011940c;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_0011940c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00119848;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00119848;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC79;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001197f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011990a;
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
LAB_00119848:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011990a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00119af9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00119af9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00119a50:
          uVar4 = _LC74;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00119a50;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_00119bbb;
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
LAB_00119af9:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00119bbb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorResourcePicker, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::call
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC80;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00119c8e;
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
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC72,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00119c8e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00119f3b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
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
      if (cVar5 != '\0') goto LAB_00119f3b;
    }
    cVar5 = String::operator==(param_1,"Node");
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
        if (cVar5 != '\0') goto LAB_00119f3b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0011a118;
    }
  }
LAB_00119f3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a118:
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
            if ((code *)PTR__bind_methods_00132010 != RefCounted::_bind_methods) {
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
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Resource";
        local_50 = 8;
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
        Material::_bind_methods();
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
      if ((code *)PTR__bind_methods_00132058 != Material::_bind_methods) {
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



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a78b;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011a78b;
    }
    cVar5 = String::operator==(param_1,"Container");
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
        if (cVar5 != '\0') goto LAB_0011a78b;
      }
      cVar5 = String::operator==(param_1,"Control");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar6;
        }
        goto LAB_0011a94e;
      }
    }
  }
LAB_0011a78b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a94e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011a9cf;
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
LAB_0011a9cf:
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
    if (cVar5 != '\0') goto LAB_0011aa83;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011aa83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePicker::is_class(String const&) const */

undefined8 __thiscall EditorResourcePicker::is_class(EditorResourcePicker *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011abeb;
  }
  cVar5 = String::operator==(param_1,"EditorResourcePicker");
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
      if (cVar5 != '\0') goto LAB_0011abeb;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0011ad28;
    }
  }
LAB_0011abeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ad28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPicker::is_class(String const&) const */

undefined8 __thiscall
EditorAudioStreamPicker::is_class(EditorAudioStreamPicker *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011ad9f;
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
LAB_0011ad9f:
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
    if (cVar5 != '\0') goto LAB_0011ae53;
  }
  cVar5 = String::operator==(param_1,"EditorAudioStreamPicker");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePicker::is_class((EditorResourcePicker *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011ae53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorShaderPicker::is_class(String const&) const */

undefined8 __thiscall EditorShaderPicker::is_class(EditorShaderPicker *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011af1f;
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
LAB_0011af1f:
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
    if (cVar5 != '\0') goto LAB_0011afd3;
  }
  cVar5 = String::operator==(param_1,"EditorShaderPicker");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePicker::is_class((EditorResourcePicker *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011afd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPicker::is_class(String const&) const */

undefined8 __thiscall EditorScriptPicker::is_class(EditorScriptPicker *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011b09f;
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
LAB_0011b09f:
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
    if (cVar5 != '\0') goto LAB_0011b153;
  }
  cVar5 = String::operator==(param_1,"EditorScriptPicker");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePicker::is_class((EditorResourcePicker *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011b153:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
              if ((code *)PTR__bind_methods_00132010 != Node::_bind_methods) {
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
            if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
      if ((code *)PTR__bind_methods_00132008 != Container::_bind_methods) {
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



/* MethodBindT<Node*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Node*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC25;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Resource> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Resource>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Resource";
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_68 = &_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_70 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_70,0,(StrRange *)&local_78,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
LAB_0011be8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011be8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011beaf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011beaf:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
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
LAB_0011c20d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c20d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c22f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c22f:
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
  if (local_90 == 0) {
LAB_0011c5ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c5ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c60f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c60f:
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
  if (local_90 == 0) {
LAB_0011c9cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c9cd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c9ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c9ef:
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
  if (local_90 == 0) {
LAB_0011cdad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011cdad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011cdcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011cdcf:
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_a8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_a8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d39f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d39f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00132060 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_0011d8dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011d8dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011d8ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011d8ff:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00132068 != CanvasItem::_get_property_list) {
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
  if (local_90 == 0) {
LAB_0011dccd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011dccd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011dcef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011dcef:
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
  if (local_90 == 0) {
LAB_0011e0ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e0ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e0cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e0cf:
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
  if (local_90 == 0) {
LAB_0011e48d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e48d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e4af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e4af:
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_0011e86d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011e86d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011e88f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011e88f:
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



/* EditorResourcePicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorResourcePicker::_get_property_listv(EditorResourcePicker *this,List *param_1,bool param_2)

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
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorResourcePicker";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorResourcePicker";
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
  if (local_90 == 0) {
LAB_0011ec4d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011ec4d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011ec6f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011ec6f:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorResourcePicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorAudioStreamPicker::_get_property_listv
          (EditorAudioStreamPicker *this,List *param_1,bool param_2)

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
    EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAudioStreamPicker";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioStreamPicker";
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
LAB_0011f02d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011f02d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011f04f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011f04f:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorAudioStreamPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorShaderPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorShaderPicker::_get_property_listv(EditorShaderPicker *this,List *param_1,bool param_2)

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
    EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorShaderPicker";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorShaderPicker";
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
LAB_0011f40d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011f40d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011f42f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011f42f:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorShaderPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorScriptPicker::_get_property_listv(EditorScriptPicker *this,List *param_1,bool param_2)

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
    EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorScriptPicker";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorScriptPicker";
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
LAB_0011f7ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011f7ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011f80f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011f80f:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorScriptPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePicker::_get_property_listv((EditorResourcePicker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_init_from(HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >
   const&) */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_init_from
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          HashSet *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) = uVar1;
  if ((int)(uVar1 >> 0x20) == 0) {
    return;
  }
  uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
  uVar1 = (ulong)uVar2 * 4;
  uVar6 = Memory::alloc_static(uVar1,false);
  *(undefined8 *)(this + 0x18) = uVar6;
  uVar6 = Memory::alloc_static((ulong)uVar2 * 8,false);
  *(undefined8 *)this = uVar6;
  uVar6 = Memory::alloc_static(uVar1,false);
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar6 = Memory::alloc_static(uVar1,false);
  *(undefined8 *)(this + 8) = uVar6;
  if (*(int *)(this + 0x24) != 0) {
    lVar8 = 0;
    do {
      StringName::StringName
                ((StringName *)(lVar8 * 8 + *(long *)this),
                 (StringName *)(*(long *)param_1 + lVar8 * 8));
      *(undefined4 *)(*(long *)(this + 0x10) + lVar8 * 4) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(this + 0x24));
  }
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(this + 0x18);
    lVar7 = 0;
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(this + 8);
    do {
      *(undefined4 *)(lVar3 + lVar7) = *(undefined4 *)(lVar8 + lVar7);
      *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
      lVar7 = lVar7 + 4;
    } while (uVar1 - lVar7 != 0);
  }
  return;
}



/* Ref<ShaderMaterial>::unref() */

void __thiscall Ref<ShaderMaterial>::unref(Ref<ShaderMaterial> *this)

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



/* MethodBind* create_method_bind<EditorResourcePicker, String const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, ObjectID>(void (EditorResourcePicker::*)(String const&, Ref<Texture2D>
   const&, Ref<Texture2D> const&, ObjectID)) */

MethodBind *
create_method_bind<EditorResourcePicker,String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>
          (_func_void_String_ptr_Ref_ptr_Ref_ptr_ObjectID *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_Ref_ptr_Ref_ptr_ObjectID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a330;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, String const&>(void
   (EditorResourcePicker::*)(String const&)) */

MethodBind * create_method_bind<EditorResourcePicker,String_const&>(_func_void_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a390;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, String>(String (EditorResourcePicker::*)()
   const) */

MethodBind * create_method_bind<EditorResourcePicker,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a3f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, Vector<String>>(Vector<String>
   (EditorResourcePicker::*)() const) */

MethodBind * create_method_bind<EditorResourcePicker,Vector<String>>(_func_Vector *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a450;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, Ref<Resource> >(void
   (EditorResourcePicker::*)(Ref<Resource>)) */

MethodBind * create_method_bind<EditorResourcePicker,Ref<Resource>>(_func_void_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a4b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, Ref<Resource>>(Ref<Resource>
   (EditorResourcePicker::*)()) */

MethodBind * create_method_bind<EditorResourcePicker,Ref<Resource>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a510;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, bool>(void (EditorResourcePicker::*)(bool))
    */

MethodBind * create_method_bind<EditorResourcePicker,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a570;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorResourcePicker, bool>(bool (EditorResourcePicker::*)()
   const) */

MethodBind * create_method_bind<EditorResourcePicker,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a5d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorResourcePicker";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorScriptPicker, Node*>(void (EditorScriptPicker::*)(Node*)) */

MethodBind * create_method_bind<EditorScriptPicker,Node*>(_func_void_Node_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a630;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorScriptPicker";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorScriptPicker, Node*>(Node* (EditorScriptPicker::*)() const)
    */

MethodBind * create_method_bind<EditorScriptPicker,Node*>(_func_Node_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorScriptPicker";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* EditorResourcePicker::~EditorResourcePicker() */

void __thiscall EditorResourcePicker::~EditorResourcePicker(EditorResourcePicker *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00128f50;
  if (bVar5) {
    if (*(long *)(this + 0xae8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00120993;
    }
    if (*(long *)(this + 0xad0) != 0) {
      StringName::unref();
    }
  }
LAB_00120993:
  pvVar4 = *(void **)(this + 0xa60);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xa84) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa80) * 4) != 0) {
        memset(*(void **)(this + 0xa78),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa80) * 4) << 2);
        if (*(int *)(this + 0xa84) == 0) goto LAB_00120b50;
      }
      lVar3 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar3 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0xa60);
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0xa84));
      *(undefined4 *)(this + 0xa84) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00120a2e;
    }
LAB_00120b50:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xa70),false);
    Memory::free_static(*(void **)(this + 0xa68),false);
    Memory::free_static(*(void **)(this + 0xa78),false);
  }
LAB_00120a2e:
  pvVar4 = *(void **)(this + 0xa38);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xa5c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa58) * 4) != 0) {
        memset(*(void **)(this + 0xa50),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa58) * 4) << 2);
        if (*(int *)(this + 0xa5c) == 0) goto LAB_00120b90;
      }
      lVar3 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar3 * 8) != 0)) {
          StringName::unref();
          pvVar4 = *(void **)(this + 0xa38);
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0xa5c));
      *(undefined4 *)(this + 0xa5c) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00120ac6;
    }
LAB_00120b90:
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xa48),false);
    Memory::free_static(*(void **)(this + 0xa40),false);
    Memory::free_static(*(void **)(this + 0xa50),false);
  }
LAB_00120ac6:
  CowData<String>::_unref((CowData<String> *)(this + 0xa30));
  if (*(long *)(this + 0xa18) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa18);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa10));
  bVar5 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00120b3f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00120b3f:
  Control::~Control((Control *)this);
  return;
}



/* EditorResourcePicker::~EditorResourcePicker() */

void __thiscall EditorResourcePicker::~EditorResourcePicker(EditorResourcePicker *this)

{
  ~EditorResourcePicker(this);
  operator_delete(this,0xb00);
  return;
}



/* EditorAudioStreamPicker::~EditorAudioStreamPicker() */

void __thiscall EditorAudioStreamPicker::~EditorAudioStreamPicker(EditorAudioStreamPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129a00;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  return;
}



/* EditorAudioStreamPicker::~EditorAudioStreamPicker() */

void __thiscall EditorAudioStreamPicker::~EditorAudioStreamPicker(EditorAudioStreamPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129a00;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  operator_delete(this,0xb38);
  return;
}



/* EditorShaderPicker::~EditorShaderPicker() */

void __thiscall EditorShaderPicker::~EditorShaderPicker(EditorShaderPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129670;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  return;
}



/* EditorShaderPicker::~EditorShaderPicker() */

void __thiscall EditorShaderPicker::~EditorShaderPicker(EditorShaderPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129670;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  operator_delete(this,0xb10);
  return;
}



/* EditorScriptPicker::~EditorScriptPicker() */

void __thiscall EditorScriptPicker::~EditorScriptPicker(EditorScriptPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001292e0;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  return;
}



/* EditorScriptPicker::~EditorScriptPicker() */

void __thiscall EditorScriptPicker::~EditorScriptPicker(EditorScriptPicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001292e0;
  EditorResourcePicker::~EditorResourcePicker((EditorResourcePicker *)this);
  operator_delete(this,0xb08);
  return;
}



/* EditorResourcePicker::_notificationv(int, bool) */

void __thiscall
EditorResourcePicker::_notificationv(EditorResourcePicker *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* EditorShaderPicker::_notificationv(int, bool) */

void __thiscall
EditorShaderPicker::_notificationv(EditorShaderPicker *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
  return;
}



/* EditorScriptPicker::_notificationv(int, bool) */

void __thiscall
EditorScriptPicker::_notificationv(EditorScriptPicker *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
  return;
}



/* EditorAudioStreamPicker::_notificationv(int, bool) */

void __thiscall
EditorAudioStreamPicker::_notificationv(EditorAudioStreamPicker *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x19) {
      _notification((int)this);
    }
    else if ((param_1 & 0xffffffdfU) == 0xd) {
      (**(code **)(*(long *)this + 0x368))();
    }
    EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  EditorResourcePicker::_notification((EditorResourcePicker *)this,param_1);
  if (param_1 != 0x19) {
    if ((param_1 & 0xffffffdfU) != 0xd) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00120f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x368))(this);
    return;
  }
  _notification((int)this);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001213c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_001213c0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0012129a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0012129a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00121267;
  }
  if (lVar8 == lVar5) {
LAB_0012133b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00121267:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0012131b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0012133b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0012131b:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001216e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_001216e0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00121736;
  }
  if (lVar9 == lVar5) {
LAB_0012165b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00121736:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001215cf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0012165b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_001215cf:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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
LAB_00121a00:
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
  if (lVar8 == 0) goto LAB_00121a00;
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
        goto LAB_00121911;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00121911:
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



/* EditorScriptPicker::_initialize_classv() */

void EditorScriptPicker::_initialize_classv(void)

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
    if (EditorResourcePicker::initialize_class()::initialized == '\0') {
      EditorResourcePicker::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x14;
    local_48 = "EditorResourcePicker";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorScriptPicker";
    local_60 = 0;
    local_40 = 0x12;
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



/* EditorResourcePicker::_initialize_classv() */

void EditorResourcePicker::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* EditorAudioStreamPicker::_initialize_classv() */

void EditorAudioStreamPicker::_initialize_classv(void)

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
    if (EditorResourcePicker::initialize_class()::initialized == '\0') {
      EditorResourcePicker::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x14;
    local_48 = "EditorResourcePicker";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAudioStreamPicker";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorShaderPicker::_initialize_classv() */

void EditorShaderPicker::_initialize_classv(void)

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
    if (EditorResourcePicker::initialize_class()::initialized == '\0') {
      EditorResourcePicker::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x14;
    local_48 = "EditorResourcePicker";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorShaderPicker";
    local_60 = 0;
    local_40 = 0x12;
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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(undefined **)param_1 = &Container::vtable;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<Ref<EditorResourceConversionPlugin> >::_unref() */

void __thiscall
CowData<Ref<EditorResourceConversionPlugin>>::_unref
          (CowData<Ref<EditorResourceConversionPlugin>> *this)

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
LAB_00121f1d:
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
            goto LAB_00121f1d;
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



/* WARNING: Removing unreachable block (ram,0x00122138) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  Array::~Array(local_c8);
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



/* MethodBindTRC<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Node*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001224b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001224b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122740;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00122740:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001229e2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_001229e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122ba1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00122ba1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00122ee1;
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
                    /* WARNING: Could not recover jumptable at 0x00122d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00122ee1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001230c9;
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
                    /* WARNING: Could not recover jumptable at 0x00122f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001230c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Resource>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Resource>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x122308;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001231a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar2)((Ref<Resource> *)&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<Resource>::unref((Ref<Resource> *)&local_58);
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
LAB_001231a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123440;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_00123440:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x122308;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123687;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00123687:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x122308;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123863;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00123863:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123a90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00123a90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x122308;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123ccc;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00123ccc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x122308;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123e9d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00123e9d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001241d1;
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
                    /* WARNING: Could not recover jumptable at 0x0012405d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001241d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001243b1;
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
                    /* WARNING: Could not recover jumptable at 0x00124239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001243b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Node*>::validated_call
          (MethodBindTRC<Node*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_0012457f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_0012457f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Node*>::ptrcall
          (MethodBindTRC<Node*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001245d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_001245d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Node*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00124911;
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
                    /* WARNING: Could not recover jumptable at 0x0012479d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_00124911:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00124af9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00124981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_00124af9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Resource>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Resource>>::ptrcall
          (MethodBindTR<Ref<Resource>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x122308;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124bb6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00124bb6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00124bf9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00124bf9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00124bf9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00124bb6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00124bb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Resource> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Resource>>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x122308;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00124eb8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00124e76:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Resource::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00124e76;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00124eb8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Resource> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Resource>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x122308;
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
      goto LAB_0012517c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00125158:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00125158;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
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
LAB_0012517c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == *(Object **)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x122308;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((Ref<Texture2D> *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Ref<Texture2D> *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001254f7;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_70 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_70;
  if (pOVar5 != local_70) {
    if (pOVar5 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
        local_68 = pOVar3;
        goto LAB_00125406;
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar3;
        local_70 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
LAB_00125406:
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00125495:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00125495;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,(Ref<Texture2D> *)&local_68,
            &local_70,uVar2);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
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
LAB_001254f7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x122308;
      local_50 = (Object *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Ref<Texture2D> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Ref<Texture2D> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125865;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = **(undefined8 **)((long)param_3 + 0x18);
  if (*(long **)((long)param_3 + 0x10) == (long *)0x0) {
    local_50 = (Object *)0x0;
  }
  else {
    pOVar3 = (Object *)**(long **)((long)param_3 + 0x10);
    local_50 = (Object *)0x0;
    if (pOVar3 != (Object *)0x0) {
      local_48 = (Object *)0x0;
      local_50 = pOVar3;
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') {
        local_50 = (Object *)0x0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    }
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_00125890:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00125890;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar6)((long *)((long)param_2 + lVar1),*param_3,(Ref<Texture2D> *)&local_48,&local_50,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00125865:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Node*>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125c20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_00125c15:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_00125c20;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00125c70;
LAB_00125c60:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_00125c70:
      uVar5 = 4;
      goto LAB_00125c15;
    }
    if (in_R8D == 1) goto LAB_00125c60;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_00125bc6:
    uVar3 = _LC74;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_00125bc6;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_00125c20:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Resource> >::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Resource>>::call
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
  undefined8 local_40;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125fc0;
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
      if (in_R8D != 1) goto LAB_00126010;
LAB_00126000:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00126010:
        uVar6 = 4;
        goto LAB_00125fb5;
      }
      if (in_R8D == 1) goto LAB_00126000;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x18);
    uVar4 = _LC74;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48 = (char *)0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_48,pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Ref<Resource> *)&local_48);
    Ref<Resource>::unref((Ref<Resource> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00125fb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00125fc0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
  undefined8 local_40;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001262f0;
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
      if (in_R8D != 1) goto LAB_00126340;
LAB_00126330:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00126340:
        uVar6 = 4;
        goto LAB_001262e5;
      }
      if (in_R8D == 1) goto LAB_00126330;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC80;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_001262e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001262f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, ObjectID>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  int iVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar11 = (long *)plVar14[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar11 = (long *)(plVar14[1] + 0x20);
    }
    if (local_78 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = (Object *)0x0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00126812;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar13 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar16;
    }
    if ((int)(4 - in_R8D) <= iVar13) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar12 = iVar13 + -4 + (int)lVar8;
          if (lVar16 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar8] = pVVar15;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC226;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar9 = Variant::operator_cast_to_ObjectID(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2]);
      uVar4 = _LC75;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_88;
      if (pOVar10 != local_88) {
        if (pOVar10 == (Object *)0x0) {
          if (local_88 != (Object *)0x0) {
            local_88 = (Object *)0x0;
LAB_0012667e:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_88 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_88 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0012667e;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1]);
      uVar4 = _LC78;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_80 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_80;
      if (pOVar10 != local_80) {
        if (pOVar10 == (Object *)0x0) {
          if (local_80 != (Object *)0x0) {
            local_80 = (Object *)0x0;
LAB_00126718:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_80 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_80 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00126718;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC80;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_78);
      (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),(Variant *)&local_78,&local_80,
                         &local_88,uVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (local_80 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_80;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_80);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_88 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_88;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_88);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00126812;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_00126812:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Resource>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Resource>>::validated_call
          (MethodBindTR<Ref<Resource>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x122308;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126b96;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00126b96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00126e3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126ea0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126ea0:
      uVar6 = 4;
LAB_00126e3d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00126dbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00126dbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC73;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00126e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC72,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00126f06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126f06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00127109;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00127208:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00127208;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00127109:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Texture2D> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Texture2D>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 != param_1) goto LAB_001273b9;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture2D";
  local_70._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
  local_60 = 0x11;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0012755d:
    local_50 = 6;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 == 0x11) goto LAB_0012755d;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar2 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar2;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar2 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar3 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar4 = *param_2;
LAB_001273b9:
  *param_2 = iVar4 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>
               (int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_84,param_2);
  if (param_1 == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0x1d,(StrRange *)&local_78
               ,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::
_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
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
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
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



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00127af9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00127af9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* EditorResourcePicker::_update_resource() */

void EditorResourcePicker::_GLOBAL__sub_I__update_resource(void)

{
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
  }
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper = '\x01';
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
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
  if (Animation::PARAMETERS_BASE_PATH != '\0') {
    return;
  }
  Animation::PARAMETERS_BASE_PATH = 1;
  Animation::PARAMETERS_BASE_PATH = 0;
  String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
  __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorScriptPicker::~EditorScriptPicker() */

void __thiscall EditorScriptPicker::~EditorScriptPicker(EditorScriptPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorShaderPicker::~EditorShaderPicker() */

void __thiscall EditorShaderPicker::~EditorShaderPicker(EditorShaderPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAudioStreamPicker::~EditorAudioStreamPicker() */

void __thiscall EditorAudioStreamPicker::~EditorAudioStreamPicker(EditorAudioStreamPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorResourcePicker::~EditorResourcePicker() */

void __thiscall EditorResourcePicker::~EditorResourcePicker(EditorResourcePicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Node*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Node*>::~MethodBindT() */

void __thiscall MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Resource>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Resource>>::~MethodBindTR(MethodBindTR<Ref<Resource>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Resource> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Resource>>::~MethodBindT(MethodBindT<Ref<Resource>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   ObjectID>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,ObjectID> *this)

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
/* CallableCustomMethodPointer<EditorResourcePicker, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<EditorResourcePicker, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorResourcePicker,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorResourcePicker, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorResourcePicker,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioStreamPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioStreamPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioStreamPicker,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<String>::~Vector() */

void __thiscall Vector<String>::~Vector(Vector<String> *this)

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



