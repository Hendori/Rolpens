/* OpenXRInteractionProfileEditorBase::_update_interaction_profile() */

void __thiscall
OpenXRInteractionProfileEditorBase::_update_interaction_profile
          (OpenXRInteractionProfileEditorBase *this)

{
  if (this[0xa48] != (OpenXRInteractionProfileEditorBase)0x0) {
    this[0xa48] = (OpenXRInteractionProfileEditorBase)0x0;
  }
  return;
}



/* OpenXRInteractionProfileEditorBase::_on_open_binding_modifiers() */

void __thiscall
OpenXRInteractionProfileEditorBase::_on_open_binding_modifiers
          (OpenXRInteractionProfileEditorBase *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0xa10));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StringName::operator void const*() const [clone .isra.0] */

void * __thiscall StringName::operator_cast_to_void_(StringName *this)

{
  void *pvVar1;
  
  if (this == (StringName *)0x0) {
    return (void *)0x0;
  }
  pvVar1 = (void *)0x1;
  if ((*(long *)(this + 8) == 0) && (pvVar1 = *(void **)(this + 0x10), pvVar1 != (void *)0x0)) {
    return (void *)(ulong)(1 < *(uint *)((long)pvVar1 + -8));
  }
  return pvVar1;
}



/* OpenXRInteractionProfileEditorBase::_theme_changed() */

void __thiscall
OpenXRInteractionProfileEditorBase::_theme_changed(OpenXRInteractionProfileEditorBase *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(this + 0xa20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pRVar1 != (Ref *)0x0) {
    if (_theme_changed()::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_theme_changed()::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_theme_changed()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_theme_changed()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_theme_changed()::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_theme_icon((StringName *)&local_38,(StringName *)this);
    Button::set_button_icon(pRVar1);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::_theme_changed() */

void __thiscall OpenXRInteractionProfileEditor::_theme_changed(OpenXRInteractionProfileEditor *this)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  StringName *pSVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OpenXRInteractionProfileEditorBase::_theme_changed((OpenXRInteractionProfileEditorBase *)this);
  pSVar5 = *(StringName **)(this + 0xa40);
  if (_theme_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_theme_changed()::{lambda()#1}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_theme_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_theme_changed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_theme_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_48,(StringName *)this);
  Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  iVar6 = 0;
  while( true ) {
    iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa68),0));
    if (iVar3 <= iVar6) break;
    lVar4 = Node::get_child((int)*(undefined8 *)(this + 0xa68),SUB41(iVar6,0));
    if (lVar4 != 0) {
      pSVar5 = (StringName *)__dynamic_cast(lVar4,&Object::typeinfo,&Control::typeinfo,0);
      if (pSVar5 != (StringName *)0x0) {
        if (_theme_changed()::{lambda()#2}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_theme_changed()::{lambda()#2}::operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_theme_changed()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_theme_changed()::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_theme_changed()::{lambda()#2}::operator()()::sname);
          }
        }
        Control::get_theme_stylebox((StringName *)&local_48,(StringName *)this);
        Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
        if (local_48 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar1 = local_48;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_48);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))();
              Memory::free_static(pOVar1,false);
            }
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::_notification(int) */

void __thiscall
OpenXRInteractionProfileEditorBase::_notification
          (OpenXRInteractionProfileEditorBase *this,int param_1)

{
  if (param_1 == 10) {
                    /* WARNING: Could not recover jumptable at 0x001004e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x368))();
    return;
  }
  if (param_1 != 0x2d) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001004d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x370))();
  return;
}



/* OpenXRInteractionProfileEditorBase::remove_all_for_action_set(Ref<OpenXRActionSet>) */

void OpenXRInteractionProfileEditorBase::remove_all_for_action_set(void)

{
  return;
}



/* OpenXRInteractionProfileEditorBase::_do_update_interaction_profile() [clone .part.0] */

void __thiscall
OpenXRInteractionProfileEditorBase::_do_update_interaction_profile
          (OpenXRInteractionProfileEditorBase *this)

{
  long in_FS_OFFSET;
  OpenXRInteractionProfileEditorBase aOStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa48] = (OpenXRInteractionProfileEditorBase)0x1;
  create_custom_callable_function_pointer<OpenXRInteractionProfileEditorBase>
            (aOStack_48,(char *)this,
             (_func_void *)"&OpenXRInteractionProfileEditorBase::_update_interaction_profile");
  Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aOStack_48,0);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aOStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::_do_update_interaction_profile() */

void __thiscall
OpenXRInteractionProfileEditorBase::_do_update_interaction_profile
          (OpenXRInteractionProfileEditorBase *this)

{
  if (this[0xa48] != (OpenXRInteractionProfileEditorBase)0x0) {
    return;
  }
  _do_update_interaction_profile(this);
  return;
}



/* OpenXRInteractionProfileEditorBase::OpenXRInteractionProfileEditorBase() */

void __thiscall
OpenXRInteractionProfileEditorBase::OpenXRInteractionProfileEditorBase
          (OpenXRInteractionProfileEditorBase *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  ScrollContainer *this_00;
  OpenXRBindingModifiersDialog *this_01;
  BoxContainer *this_02;
  Button *this_03;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  long local_50;
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa0c] = (OpenXRInteractionProfileEditorBase)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010ebf8;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  this[0xa48] = (OpenXRInteractionProfileEditorBase)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  uVar4 = EditorUndoRedoManager::get_singleton();
  *(undefined8 *)(this + 0xa28) = uVar4;
  Control::set_h_size_flags(this,3);
  Control::set_v_size_flags(this,3);
  this_00 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(ScrollContainer **)(this + 0xa40) = this_00;
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa40),3);
  Node::add_child(this,*(undefined8 *)(this + 0xa40),0,0);
  this_01 = (OpenXRBindingModifiersDialog *)operator_new(0xdf8,"");
  OpenXRBindingModifiersDialog::OpenXRBindingModifiersDialog(this_01);
  postinitialize_handler((Object *)this_01);
  *(OpenXRBindingModifiersDialog **)(this + 0xa10) = this_01;
  Node::add_child(this,this_01,0,0);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0010e880;
  postinitialize_handler((Object *)this_02);
  *(BoxContainer **)(this + 0xa18) = this_02;
  Control::set_v_size_flags(this_02,3);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  this_03 = (Button *)operator_new(0xc10,"");
  local_48[0] = 0;
  Button::Button(this_03,(CowData<char32_t> *)local_48);
  postinitialize_handler((Object *)this_03);
  *(Button **)(this + 0xa20) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  local_48[0] = 0;
  pSVar1 = *(String **)(this + 0xa20);
  String::parse_latin1((String *)local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Edit binding modifiers");
  TTR(aCStack_58,(String *)&local_50);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRInteractionProfileEditorBase>
            ((OpenXRInteractionProfileEditorBase *)local_48,(char *)this,
             (_func_void *)"&OpenXRInteractionProfileEditorBase::_on_open_binding_modifiers");
  StringName::StringName((StringName *)&local_50,"pressed",false);
  (*pcVar3)(plVar2,(String *)&local_50,(CowData<char32_t> *)local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa20),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::OpenXRInteractionProfileEditor() */

void __thiscall
OpenXRInteractionProfileEditor::OpenXRInteractionProfileEditor(OpenXRInteractionProfileEditor *this)

{
  BoxContainer *this_00;
  
  OpenXRInteractionProfileEditorBase::OpenXRInteractionProfileEditorBase
            ((OpenXRInteractionProfileEditorBase *)this);
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ef88;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010e508;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa68) = this_00;
  Node::add_child(*(undefined8 *)(this + 0xa40),this_00,0,0);
  return;
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



/* OpenXRInteractionProfileEditor::_on_action_selected(String) */

void __thiscall
OpenXRInteractionProfileEditor::_on_action_selected
          (OpenXRInteractionProfileEditor *this,CowData *param_2)

{
  Variant *pVVar1;
  CowData *this_00;
  undefined8 uVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
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
  
  uVar2 = *(undefined8 *)(this + 0xa28);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Add binding");
  TTR((CowData<char32_t> *)&local_100,(String *)&local_110);
  EditorUndoRedoManager::create_action(uVar2,(CowData<char32_t> *)&local_100,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  this_00 = (CowData *)(this + 0xa60);
  pOVar3 = *(Object **)(this + 0xa28);
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,this_00);
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,param_2);
  StringName::StringName((StringName *)&local_110,"_add_binding",false);
  Variant::Variant((Variant *)&local_d8,(String *)&local_108);
  Variant::Variant(local_c0,(CowData<char32_t> *)&local_100);
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_d8;
  pVStack_f0 = local_c0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar3,(StringName *)this,(Variant **)&local_110,(int)&local_f8);
  pVVar4 = local_90;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  pOVar3 = *(Object **)(this + 0xa28);
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,this_00);
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,param_2);
  StringName::StringName((StringName *)&local_110,"_remove_binding",false);
  Variant::Variant(local_88,(String *)&local_108);
  Variant::Variant(local_70,(CowData<char32_t> *)&local_100);
  local_50 = (undefined1  [16])0x0;
  pVVar4 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,(StringName *)this,(Variant **)&local_110,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa28),0));
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    String::parse_latin1((String *)this_00,"");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::_on_remove_pressed(String, String) */

void __thiscall
OpenXRInteractionProfileEditor::_on_remove_pressed
          (OpenXRInteractionProfileEditor *this,CowData *param_2,CowData *param_3)

{
  Variant *pVVar1;
  undefined8 uVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
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
  
  uVar2 = *(undefined8 *)(this + 0xa28);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Remove binding");
  TTR((CowData<char32_t> *)&local_100,(String *)&local_110);
  EditorUndoRedoManager::create_action(uVar2,(CowData<char32_t> *)&local_100,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  pOVar3 = *(Object **)(this + 0xa28);
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,param_3);
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,param_2);
  StringName::StringName((StringName *)&local_110,"_remove_binding",false);
  Variant::Variant((Variant *)&local_d8,(String *)&local_108);
  Variant::Variant(local_c0,(CowData<char32_t> *)&local_100);
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_d8;
  pVStack_f0 = local_c0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar3,(StringName *)this,(Variant **)&local_110,(int)&local_f8);
  pVVar4 = local_90;
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  pOVar3 = *(Object **)(this + 0xa28);
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,param_3);
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,param_2);
  StringName::StringName((StringName *)&local_110,"_add_binding",false);
  Variant::Variant(local_88,(String *)&local_108);
  Variant::Variant(local_70,(CowData<char32_t> *)&local_100);
  local_50 = (undefined1  [16])0x0;
  pVVar4 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,(StringName *)this,(Variant **)&local_110,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa28),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::setup(Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile>) */

void __thiscall
OpenXRInteractionProfileEditorBase::setup
          (OpenXRInteractionProfileEditorBase *this,long *param_2,long *param_3)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  lVar1 = *(long *)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("setup","modules/openxr/editor/openxr_interaction_profile_editor.cpp",0xbd,
                       "Parameter \"binding_modifiers_dialog\" is null.",0,0);
      return;
    }
  }
  else {
    local_48 = (Object *)0x0;
    local_50 = (Object *)0x0;
    if (((Object *)*param_3 != (Object *)0x0) &&
       (local_50 = (Object *)*param_3, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_50 = (Object *)0x0;
    }
    local_58 = (Object *)0x0;
    if (((Object *)*param_2 != (Object *)0x0) &&
       (local_58 = (Object *)*param_2, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_58 = (Object *)0x0;
    }
    OpenXRBindingModifiersDialog::setup
              (lVar1,(CowData<char32_t> *)&local_58,(CowData<char32_t> *)&local_50,
               (CowData<char32_t> *)&local_48);
    if (((local_58 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar2 = local_58, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar2 = local_50, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    if (((local_48 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar2 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    pOVar2 = (Object *)*param_2;
    pOVar3 = *(Object **)(this + 0xa38);
    if (pOVar2 != pOVar3) {
      *(Object **)(this + 0xa38) = pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *(undefined8 *)(this + 0xa38) = 0;
      }
      if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    pOVar2 = (Object *)*param_3;
    pOVar3 = *(Object **)(this + 0xa30);
    if (pOVar2 != pOVar3) {
      *(Object **)(this + 0xa30) = pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *(undefined8 *)(this + 0xa30) = 0;
      }
      if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    OpenXRInteractionProfile::get_interaction_profile_path();
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_78);
    uVar5 = OpenXRInteractionProfileMetadata::singleton;
    local_48 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)local_78);
    uVar5 = OpenXRInteractionProfileMetadata::get_profile(uVar5,(CowData<char32_t> *)&local_48);
    *(undefined8 *)(this + 0xa50) = uVar5;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (*(CowData **)(this + 0xa50) != (CowData *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,*(CowData **)(this + 0xa50));
      if ((*(long *)(*(long *)(this + 0xa50) + 0x10) != 0) &&
         (1 < *(uint *)(*(long *)(*(long *)(this + 0xa50) + 0x10) + -8))) {
        String::operator+=((String *)&local_70,"*");
        local_50 = (Object *)0x0;
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_50,(CowData *)(*(long *)(this + 0xa50) + 0x10));
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "Note: This interaction profile requires extension %s support.");
        TTR((CowData<char32_t> *)&local_58,(String *)&local_68);
        vformat<String>((CowData<char32_t> *)&local_48,(CowData<char32_t> *)&local_58,
                        (CowData<char32_t> *)&local_50);
        pOVar2 = local_48;
        if ((Object *)*(long *)(this + 0xa58) != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
          local_48 = (Object *)0x0;
          *(Object **)(this + 0xa58) = pOVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
    }
    Node::set_name(this);
    this[0xa48] = (OpenXRInteractionProfileEditorBase)0x1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_78);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::setup(Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile>) */

void __thiscall
OpenXRInteractionProfileEditor::setup
          (OpenXRInteractionProfileEditor *this,long *param_2,long *param_3)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_60;
  Object *local_58 [3];
  long local_40;
  
  pOVar4 = (Object *)*param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar4 == (Object *)0x0) ||
     (local_58[0] = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_58[0] = (Object *)0x0;
    pOVar4 = (Object *)0x0;
  }
  pOVar1 = (Object *)*param_2;
  if ((pOVar1 == (Object *)0x0) ||
     (local_60 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_60 = (Object *)0x0;
    OpenXRInteractionProfileEditorBase::setup
              ((OpenXRInteractionProfileEditorBase *)this,&local_60,local_58);
  }
  else {
    OpenXRInteractionProfileEditorBase::setup
              ((OpenXRInteractionProfileEditorBase *)this,&local_60,local_58);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (((pOVar4 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  pOVar4 = (Object *)operator_new(0xde0,"");
  local_58[0] = (Object *)0x0;
  if (((Object *)*param_2 != (Object *)0x0) &&
     (local_58[0] = (Object *)*param_2, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_58[0] = (Object *)0x0;
  }
  OpenXRSelectActionDialog::OpenXRSelectActionDialog((OpenXRSelectActionDialog *)pOVar4);
  postinitialize_handler(pOVar4);
  *(Object **)(this + 0xa70) = pOVar4;
  if (local_58[0] != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar4 = local_58[0];
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_58[0]), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    pOVar4 = *(Object **)(this + 0xa70);
  }
  pcVar2 = *(code **)(*(long *)pOVar4 + 0x108);
  create_custom_callable_function_pointer<OpenXRInteractionProfileEditor,String>
            ((OpenXRInteractionProfileEditor *)local_58,(char *)this,
             (_func_void_String *)"&OpenXRInteractionProfileEditor::_on_action_selected");
  StringName::StringName((StringName *)&local_60,"action_selected",false);
  (*pcVar2)(pOVar4,(StringName *)&local_60,(OpenXRInteractionProfileEditor *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node::add_child(this,*(undefined8 *)(this + 0xa70),0,0);
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* OpenXRInteractionProfileEditor::select_action_for(String) */

void __thiscall
OpenXRInteractionProfileEditor::select_action_for
          (OpenXRInteractionProfileEditor *this,CowData *param_2)

{
  if (*(long *)(this + 0xa60) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa60),param_2);
  }
  OpenXRSelectActionDialog::open();
  return;
}



/* OpenXRInteractionProfileEditorBase::_bind_methods() */

void OpenXRInteractionProfileEditorBase::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_d8 [2];
  long *local_c8;
  char *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  char *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_58 = &local_78;
  local_78 = "action_map";
  pcStack_70 = "interaction_profile";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  uVar5 = (uint)&local_58;
  D_METHODP((char *)local_d8,(char ***)"setup",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRInteractionProfileEditorBase,Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>
                     ((_func_void_Ref_Ref *)0x379);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar6 = local_c8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      local_c8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = "action";
  puStack_90 = &_LC50;
  auStack_50._0_8_ = &puStack_90;
  local_58 = &local_98;
  D_METHODP((char *)local_d8,(char ***)"_add_binding",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRInteractionProfileEditorBase,String,String>(_add_binding);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar6 = local_c8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      local_c8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = "action";
  puStack_b0 = &_LC50;
  auStack_50._0_8_ = &puStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)local_d8,(char ***)"_remove_binding",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRInteractionProfileEditorBase,String,String>(_remove_binding);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar6 = local_c8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      local_c8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::_add_io_path(VBoxContainer*,
   OpenXRInteractionProfileMetadata::IOPath const*) */

void __thiscall
OpenXRInteractionProfileEditor::_add_io_path
          (OpenXRInteractionProfileEditor *this,VBoxContainer *param_1,IOPath *param_2)

{
  CowData *pCVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  BoxContainer *pBVar9;
  Label *pLVar10;
  Button *pBVar11;
  Object *pOVar12;
  Control *this_00;
  OpenXRBindingModifiersDialog *this_01;
  CallableCustom *pCVar13;
  char *pcVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  undefined8 local_148;
  Array local_140 [8];
  Ref<OpenXRAction> local_138 [8];
  CowData<char32_t> local_130 [8];
  undefined8 local_128;
  long local_120;
  Variant *local_118;
  Variant *local_110;
  Variant *local_108 [2];
  Object *local_f8 [2];
  Object *local_e8 [3];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010e508;
  postinitialize_handler((Object *)pBVar9);
  Control::set_h_size_flags(pBVar9,3);
  Node::add_child(param_1,pBVar9,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_e8[0] = (Object *)0x0;
  Label::Label(pLVar10,(String *)local_e8);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  if ((*(long *)(param_2 + 0x18) == 0) || (*(uint *)(*(long *)(param_2 + 0x18) + -8) < 2)) {
    Label::set_text((String *)pLVar10);
  }
  else {
    local_f8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_f8,"*");
    String::operator+((String *)local_e8,param_2);
    Label::set_text((String *)pLVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    local_f8[0] = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_f8,(CowData *)(param_2 + 0x18));
    local_118 = (Variant *)0x0;
    String::parse_latin1((String *)&local_118,"");
    local_120 = 0;
    String::parse_latin1
              ((String *)&local_120,"Note: This binding path requires extension %s support.");
    TTR((CowData<char32_t> *)local_108,(String *)&local_120);
    vformat<String>((CowData<char32_t> *)local_e8,(CowData<char32_t> *)local_108,(String *)local_f8)
    ;
    Control::set_tooltip_text(param_1);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  }
  Control::set_h_size_flags(pLVar10,3);
  Node::add_child(pBVar9,pLVar10,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_e8[0] = (Object *)0x0;
  Label::Label(pLVar10,(String *)local_e8);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_f8[0] = (Object *)0x0;
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 0:
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Boolean";
    break;
  case 1:
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Float";
    break;
  case 2:
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Vector2";
    break;
  case 3:
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Pose";
    break;
  case 4:
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Haptic";
    break;
  default:
    local_f8[0] = (Object *)0x0;
    String::parse_latin1((String *)local_f8,"");
    pcVar14 = "Unknown";
  }
  local_108[0] = (Variant *)0x0;
  String::parse_latin1((String *)local_108,pcVar14);
  TTR((CowData<char32_t> *)local_e8,(String *)local_108);
  Label::set_text((String *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  local_88[0] = 0x42480000;
  Control::set_custom_minimum_size((Vector2 *)pLVar10);
  Node::add_child(pBVar9,pLVar10,0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_e8[0] = (Object *)0x0;
  Button::Button(pBVar11,(CowData<char32_t> *)local_e8);
  postinitialize_handler((Object *)pBVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  if ((_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)::{lambda()#1}::
       operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                   ::{lambda()#1}::operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)::
                  {lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                         ::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)local_e8,(StringName *)this);
  Button::set_button_icon(pBVar11);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_e8);
  Button::set_flat(SUB81(pBVar11,0));
  pcVar3 = *(code **)(*(long *)pBVar11 + 0x108);
  create_custom_callable_function_pointer<OpenXRInteractionProfileEditor,String>
            ((OpenXRInteractionProfileEditor *)local_f8,(char *)this,
             (_func_void_String *)"&OpenXRInteractionProfileEditor::select_action_for");
  pCVar1 = (CowData *)(param_2 + 0x10);
  local_108[0] = (Variant *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_108,pCVar1);
  Variant::Variant((Variant *)local_88,(String *)local_108);
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  iVar8 = (int)(String *)local_f8;
  local_b8 = (Variant *)local_88;
  Callable::bindp((Variant **)local_e8,iVar8);
  if (Variant::needs_deinit[(int)local_70] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar3)(pBVar11,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_e8,0);
  Callable::~Callable((Callable *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  Callable::~Callable((Callable *)local_f8);
  Node::add_child(pBVar9,pBVar11,0,0);
  if (*(long *)(this + 0xa30) != 0) {
    local_148 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,pCVar1);
    OpenXRInteractionProfile::get_bindings();
    Array::begin();
    Array::end();
    if (local_118 != local_108[0]) {
      do {
        if (local_110 != (Variant *)0x0) {
          Variant::operator=(local_110,local_118);
        }
        pOVar12 = (Object *)Variant::get_validated_object();
        if (((pOVar12 != (Object *)0x0) &&
            (pOVar12 = (Object *)
                       __dynamic_cast(pOVar12,&Object::typeinfo,&OpenXRIPBinding::typeinfo,0),
            pOVar12 != (Object *)0x0)) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          pOVar12 = (Object *)0x0;
        }
        OpenXRIPBinding::get_binding_path();
        cVar6 = String::operator==((String *)local_e8,(String *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
        if (cVar6 == '\0') {
          cVar6 = RefCounted::unreference();
        }
        else {
          OpenXRIPBinding::get_action();
          pBVar9 = (BoxContainer *)operator_new(0xa10,"");
          BoxContainer::BoxContainer(pBVar9,false);
          pBVar9[0xa0c] = (BoxContainer)0x1;
          *(undefined ***)pBVar9 = &PTR__initialize_classv_0010e508;
          postinitialize_handler((Object *)pBVar9);
          Control::set_h_size_flags(pBVar9,3);
          Node::add_child(param_1,pBVar9,0,0);
          this_00 = (Control *)operator_new(0x9c8,"");
          Control::Control(this_00);
          postinitialize_handler((Object *)this_00);
          local_b8 = (Variant *)_LC64;
          Control::set_custom_minimum_size((Vector2 *)this_00);
          Node::add_child(pBVar9,this_00,0,0);
          pLVar10 = (Label *)operator_new(0xad8,"");
          local_e8[0] = (Object *)0x0;
          Label::Label(pLVar10,(String *)local_e8);
          postinitialize_handler((Object *)pLVar10);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          OpenXRAction::get_localized_name();
          local_128 = 0;
          String::parse_latin1((String *)&local_128,": ");
          OpenXRAction::get_name_with_set();
          String::operator+((String *)&local_120,local_130);
          String::operator+((String *)local_e8,(String *)&local_120);
          Label::set_text((String *)pLVar10);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
          CowData<char32_t>::_unref(local_130);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
          Control::set_h_size_flags(pLVar10,3);
          Node::add_child(pBVar9,pLVar10,0,0);
          this_01 = (OpenXRBindingModifiersDialog *)operator_new(0xdf8,"");
          OpenXRBindingModifiersDialog::OpenXRBindingModifiersDialog(this_01);
          postinitialize_handler((Object *)this_01);
          local_e8[0] = (Object *)0x0;
          local_f8[0] = pOVar12;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_f8[0] = (Object *)0x0;
          }
          Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)local_e8);
          local_e8[0] = (Object *)0x0;
          if ((*(Object **)(this + 0xa30) != (Object *)0x0) &&
             (local_e8[0] = *(Object **)(this + 0xa30), cVar6 = RefCounted::reference(),
             cVar6 == '\0')) {
            local_e8[0] = (Object *)0x0;
          }
          local_120 = 0;
          if ((*(long *)(this + 0xa38) != 0) &&
             (local_120 = *(long *)(this + 0xa38), cVar6 = RefCounted::reference(), cVar6 == '\0'))
          {
            local_120 = 0;
          }
          OpenXRBindingModifiersDialog::setup
                    (this_01,(String *)&local_120,(CowData<char32_t> *)local_e8,(String *)local_f8);
          Ref<OpenXRActionMap>::unref((Ref<OpenXRActionMap> *)&local_120);
          if (((local_e8[0] != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar5 = local_e8[0], cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_e8[0]), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)local_f8);
          Node::add_child(pBVar9,this_01,0,0);
          pBVar11 = (Button *)operator_new(0xc10,"");
          local_e8[0] = (Object *)0x0;
          Button::Button(pBVar11,(CowData<char32_t> *)local_e8);
          postinitialize_handler((Object *)pBVar11);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          Button::set_flat(SUB81(pBVar11,0));
          if ((_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)::
               {lambda()#2}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                           ::{lambda()#2}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                 ::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                          ::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                 ::{lambda()#2}::operator()()::sname);
          }
          Control::get_theme_icon((StringName *)local_e8,(StringName *)this);
          Button::set_button_icon(pBVar11);
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_e8);
          pcVar3 = *(code **)(*(long *)pBVar11 + 0x108);
          pCVar13 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar13);
          *(OpenXRBindingModifiersDialog **)(pCVar13 + 0x28) = this_01;
          *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
          *(undefined8 *)(pCVar13 + 0x40) = 0;
          uVar4 = *(undefined8 *)(this_01 + 0x60);
          *(undefined **)(pCVar13 + 0x20) = &_LC11;
          *(undefined8 *)(pCVar13 + 0x30) = uVar4;
          *(undefined ***)pCVar13 = &PTR_hash_0010f438;
          *(code **)(pCVar13 + 0x38) = Window::popup_centered;
          *(undefined8 *)(pCVar13 + 0x10) = 0;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
          *(char **)(pCVar13 + 0x20) = "Window::popup_centered";
          Callable::Callable((Callable *)local_f8,pCVar13);
          local_d0 = _LC0;
          Variant::Variant((Variant *)&local_b8,(Vector2i *)&local_d0);
          local_a0 = 0;
          local_98 = (undefined1  [16])0x0;
          local_c8 = (Variant *)&local_b8;
          Callable::bindp((Variant **)local_e8,iVar8);
          if (Variant::needs_deinit[(int)local_a0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_b8] != '\0') {
            Variant::_clear_internal();
          }
          (*pcVar3)(pBVar11,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_e8,0);
          Callable::~Callable((Callable *)local_e8);
          Callable::~Callable((Callable *)local_f8);
          Node::add_child(pBVar9,pBVar11,0,0);
          pBVar11 = (Button *)operator_new(0xc10,"");
          local_e8[0] = (Object *)0x0;
          Button::Button(pBVar11,(CowData<char32_t> *)local_e8);
          postinitialize_handler((Object *)pBVar11);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          Button::set_flat(SUB81(pBVar11,0));
          if ((_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)::
               {lambda()#3}::operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                           ::{lambda()#3}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                 ::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                          ::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_add_io_path(VBoxContainer*,OpenXRInteractionProfileMetadata::IOPath_const*)
                                 ::{lambda()#3}::operator()()::sname);
          }
          Control::get_theme_icon((StringName *)local_e8,(StringName *)this);
          Button::set_button_icon(pBVar11);
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_e8);
          pcVar3 = *(code **)(*(long *)pBVar11 + 0x108);
          pCVar13 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar13);
          *(undefined1 (*) [16])(pCVar13 + 0x30) = (undefined1  [16])0x0;
          *(undefined8 *)(pCVar13 + 0x40) = 0;
          *(OpenXRInteractionProfileEditor **)(pCVar13 + 0x28) = this;
          uVar4 = *(undefined8 *)(this + 0x60);
          *(undefined **)(pCVar13 + 0x20) = &_LC11;
          *(undefined8 *)(pCVar13 + 0x30) = uVar4;
          *(undefined ***)pCVar13 = &PTR_hash_0010f4c8;
          *(code **)(pCVar13 + 0x38) = _on_remove_pressed;
          *(undefined8 *)(pCVar13 + 0x10) = 0;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar13,(int)pCVar13 + 0x28);
          *(char **)(pCVar13 + 0x20) = "OpenXRInteractionProfileEditor::_on_remove_pressed";
          Callable::Callable((Callable *)local_f8,pCVar13);
          local_120 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,pCVar1);
          OpenXRAction::get_name_with_set();
          pVVar15 = (Variant *)local_40;
          Variant::Variant((Variant *)local_88,(String *)&local_128);
          Variant::Variant((Variant *)&local_70,(String *)&local_120);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          local_b8 = (Variant *)local_88;
          pVStack_b0 = (Variant *)&local_70;
          Callable::bindp((Variant **)local_e8,iVar8);
          do {
            pVVar2 = pVVar15 + -0x18;
            pVVar15 = pVVar15 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar15 != (Variant *)local_88);
          (*pcVar3)(pBVar11,SceneStringNames::singleton + 0x238);
          Callable::~Callable((Callable *)local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
          Callable::~Callable((Callable *)local_f8);
          Node::add_child(pBVar9,pBVar11,0);
          Ref<OpenXRAction>::unref(local_138);
          cVar6 = RefCounted::unreference();
        }
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
        local_118 = local_118 + 0x18;
      } while (local_118 != local_108[0]);
    }
    Array::~Array(local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::_add_binding(String, String) */

void OpenXRInteractionProfileEditorBase::_add_binding
               (OpenXRInteractionProfileEditorBase *param_1,CowData *param_2)

{
  Object *pOVar1;
  char cVar2;
  Resource *this;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  Resource *pRVar6;
  long in_FS_OFFSET;
  byte bVar7;
  Object *local_70;
  Resource *local_68;
  Object *local_60;
  Resource *local_58;
  CowData<String> local_50 [16];
  long local_40;
  
  bVar7 = 0;
  lVar3 = *(long *)(param_1 + 0xa38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x41;
      pcVar4 = "Condition \"action_map.is_null()\" is true.";
LAB_00103156:
      _err_print_error("_add_binding","modules/openxr/editor/openxr_interaction_profile_editor.cpp",
                       uVar5,pcVar4,0,0);
      return;
    }
    goto LAB_00103226;
  }
  if (*(long *)(param_1 + 0xa30) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x42;
      pcVar4 = "Condition \"interaction_profile.is_null()\" is true.";
      goto LAB_00103156;
    }
    goto LAB_00103226;
  }
  local_58 = (Resource *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_2);
  }
  OpenXRActionMap::get_action((Ref<OpenXRAction> *)&local_70,lVar3,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_70 == (Object *)0x0) {
    _err_print_error("_add_binding","modules/openxr/editor/openxr_interaction_profile_editor.cpp",
                     0x45,"Condition \"action.is_null()\" is true.",0,0);
    Ref<OpenXRAction>::unref((Ref<OpenXRAction> *)&local_70);
  }
  else {
    OpenXRInteractionProfile::find_binding((Ref *)&local_68,*(String **)(param_1 + 0xa30));
    if (local_68 == (Resource *)0x0) {
      this = (Resource *)operator_new(0x268,"");
      pRVar6 = this;
      for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined8 *)pRVar6 = 0;
        pRVar6 = pRVar6 + (ulong)bVar7 * -0x10 + 8;
      }
      Resource::Resource(this);
      *(code **)this = OpenXRIPBinding::set_action;
      *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      postinitialize_handler((Object *)this);
      local_58 = (Resource *)0x0;
      local_60 = (Object *)this;
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        local_60 = (Object *)0x0;
        Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)&local_58);
        if (local_68 != (Resource *)0x0) {
          local_58 = local_68;
          local_68 = (Resource *)0x0;
LAB_001030c6:
          Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)&local_58);
        }
      }
      else {
        Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)&local_58);
        if (this != local_68) {
          local_58 = local_68;
          local_68 = this;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_68 = (Resource *)0x0;
          }
          goto LAB_001030c6;
        }
      }
      Ref<OpenXRIPBinding>::unref((Ref<OpenXRIPBinding> *)&local_60);
      OpenXRIPBinding::set_action(local_68);
      OpenXRIPBinding::set_binding_path((String *)local_68);
      OpenXRInteractionProfile::add_binding(*(Ref **)(param_1 + 0xa30));
      Object::set_edited(SUB81(*(undefined8 *)(param_1 + 0xa30),0));
      Object::set_edited(SUB81(local_68,0));
    }
    pOVar1 = local_70;
    uVar5 = *(undefined8 *)(param_1 + 0xa38);
    if (local_70 == (Object *)0x0) {
LAB_00102ee6:
      local_60 = (Object *)0x0;
    }
    else {
      local_60 = local_70;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') goto LAB_00102ee6;
    }
    OpenXRActionMap::get_top_level_paths((CowData<char32_t> *)&local_58,uVar5,&local_60);
    OpenXRAction::set_toplevel_paths(pOVar1);
    CowData<String>::_unref(local_50);
    if (((local_60 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_60, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_60), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    if (param_1[0xa48] == (OpenXRInteractionProfileEditorBase)0x0) {
      _do_update_interaction_profile(param_1);
    }
    if (((local_68 != (Resource *)0x0) &&
        (cVar2 = RefCounted::unreference(), pRVar6 = local_68, cVar2 != '\0')) &&
       (cVar2 = predelete_handler((Object *)local_68), cVar2 != '\0')) {
      (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
      Memory::free_static(pRVar6,false);
    }
    if (((local_70 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_70), cVar2 != '\0')) {
      (**(code **)(*(long *)local_70 + 0x140))(local_70);
      Memory::free_static(local_70,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103226:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::_remove_binding(String, String) */

void OpenXRInteractionProfileEditorBase::_remove_binding
               (OpenXRInteractionProfileEditorBase *param_1,CowData *param_2)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_60;
  Object *local_58;
  Object *local_50;
  undefined8 local_48;
  CowData<String> local_40 [16];
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0xa38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x5c;
      pcVar4 = "Condition \"action_map.is_null()\" is true.";
LAB_001034ae:
      _err_print_error("_remove_binding",
                       "modules/openxr/editor/openxr_interaction_profile_editor.cpp",uVar5,pcVar4,0,
                       0);
      return;
    }
  }
  else if (*(long *)(param_1 + 0xa30) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x5d;
      pcVar4 = "Condition \"interaction_profile.is_null()\" is true.";
      goto LAB_001034ae;
    }
  }
  else {
    local_48 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_2);
    }
    OpenXRActionMap::get_action((Ref<OpenXRAction> *)&local_60,lVar1,(CowData<char32_t> *)&local_48)
    ;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (local_60 == (Object *)0x0) {
      _err_print_error("_remove_binding",
                       "modules/openxr/editor/openxr_interaction_profile_editor.cpp",0x60,
                       "Condition \"action.is_null()\" is true.",0,0);
      Ref<OpenXRAction>::unref((Ref<OpenXRAction> *)&local_60);
    }
    else {
      OpenXRInteractionProfile::find_binding((Ref *)&local_58,*(String **)(param_1 + 0xa30));
      if (local_58 != (Object *)0x0) {
        OpenXRInteractionProfile::remove_binding(*(Ref **)(param_1 + 0xa30));
        Object::set_edited(SUB81(*(undefined8 *)(param_1 + 0xa30),0));
        pOVar2 = local_60;
        local_50 = (Object *)0x0;
        uVar5 = *(undefined8 *)(param_1 + 0xa38);
        if (local_60 != (Object *)0x0) {
          local_50 = local_60;
          local_48 = 0;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_50 = (Object *)0x0;
          }
          Ref<OpenXRAction>::unref((Ref<OpenXRAction> *)&local_48);
        }
        OpenXRActionMap::get_top_level_paths((CowData<char32_t> *)&local_48,uVar5,&local_50);
        OpenXRAction::set_toplevel_paths(pOVar2);
        CowData<String>::_unref(local_40);
        if (local_50 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
          pOVar2 = local_50;
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_50);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        if (param_1[0xa48] == (OpenXRInteractionProfileEditorBase)0x0) {
          _do_update_interaction_profile(param_1);
        }
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
      }
      if (local_60 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_60);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_60 + 0x140))(local_60);
            Memory::free_static(local_60,false);
          }
        }
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<Ref<OpenXRIPBinding> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<OpenXRIPBinding>>::_copy_on_write(CowData<Ref<OpenXRIPBinding>> *this)

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



/* OpenXRInteractionProfileEditorBase::remove_all_for_action(Ref<OpenXRAction>) */

void __thiscall
OpenXRInteractionProfileEditorBase::remove_all_for_action
          (OpenXRInteractionProfileEditorBase *this,long *param_2)

{
  Variant *pVVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  CowData<Ref<OpenXRIPBinding>> *local_150;
  long local_130;
  undefined8 local_128;
  long local_120;
  Ref local_118 [8];
  long local_110;
  undefined8 local_108;
  CowData<String> local_100 [8];
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
  OpenXRInteractionProfile::get_bindings_for_action(local_118);
  if ((local_110 != 0) && (0 < *(long *)(local_110 + -8))) {
    OpenXRAction::get_name_with_set();
    uVar2 = *(undefined8 *)(this + 0xa28);
    local_120 = 0;
    String::parse_latin1((String *)&local_120,"");
    local_128 = 0;
    String::parse_latin1((String *)&local_128,"Remove action from interaction profile");
    TTR((CowData<char32_t> *)&local_108,(String *)&local_128);
    EditorUndoRedoManager::create_action(uVar2,(CowData<char32_t> *)&local_108,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>> *)&local_110);
    lVar6 = local_110;
    CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>> *)&local_110);
    lVar5 = local_110;
    if (local_110 != 0) {
      lVar5 = local_110 + *(long *)(local_110 + -8) * 8;
    }
    if (lVar6 != lVar5) {
      do {
        pOVar3 = *(Object **)(this + 0xa28);
        OpenXRIPBinding::get_binding_path();
        local_108 = 0;
        if (local_130 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_130);
        }
        StringName::StringName((StringName *)&local_120,"_remove_binding",false);
        Variant::Variant((Variant *)&local_d8,(CowData<char32_t> *)&local_108);
        Variant::Variant(local_c0,(String *)&local_128);
        local_a8 = 0;
        local_a0 = (undefined1  [16])0x0;
        local_f8 = (Variant *)&local_d8;
        pVStack_f0 = local_c0;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_120,(int)&local_f8);
        pVVar7 = local_90;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)&local_d8);
        if ((StringName::configured != '\0') && (local_120 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        pOVar3 = *(Object **)(this + 0xa28);
        OpenXRIPBinding::get_binding_path();
        local_108 = 0;
        if (local_130 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_130);
        }
        StringName::StringName((StringName *)&local_120,"_add_binding",false);
        Variant::Variant(local_88,(CowData<char32_t> *)&local_108);
        Variant::Variant(local_70,(String *)&local_128);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_d8 = local_88;
        pVStack_d0 = local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_120,(int)(Variant *)&local_d8);
        pVVar7 = (Variant *)local_40;
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != local_88);
        if ((StringName::configured != '\0') && (local_120 != 0)) {
          StringName::unref();
        }
        lVar6 = lVar6 + 8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      } while (lVar5 != lVar6);
    }
    EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa28),0));
    CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>> *)&local_110);
    lVar5 = local_110;
    CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>> *)&local_110);
    if (local_110 != 0) {
      local_110 = local_110 + *(long *)(local_110 + -8) * 8;
    }
    for (; lVar5 != local_110; lVar5 = lVar5 + 8) {
      OpenXRInteractionProfile::remove_binding(*(Ref **)(this + 0xa30));
    }
    Object::set_edited(SUB81(*(undefined8 *)(this + 0xa30),0));
    lVar5 = *param_2;
    uVar2 = *(undefined8 *)(this + 0xa38);
    local_120 = 0;
    if (lVar5 != 0) {
      local_108 = 0;
      local_120 = lVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_120 = 0;
      }
      Ref<OpenXRAction>::unref((Ref<OpenXRAction> *)&local_108);
    }
    OpenXRActionMap::get_top_level_paths((CowData<char32_t> *)&local_108,uVar2,(String *)&local_120)
    ;
    OpenXRAction::set_toplevel_paths(lVar5,(CowData<char32_t> *)&local_108);
    CowData<String>::_unref(local_100);
    Ref<OpenXRAction>::unref((Ref<OpenXRAction> *)&local_120);
    if (this[0xa48] == (OpenXRInteractionProfileEditorBase)0x0) {
      _do_update_interaction_profile(this);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  }
  local_150 = (CowData<Ref<OpenXRIPBinding>> *)&local_110;
  CowData<Ref<OpenXRIPBinding>>::_unref(local_150);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRInteractionProfileEditor::_update_interaction_profile() */

void __thiscall
OpenXRInteractionProfileEditor::_update_interaction_profile(OpenXRInteractionProfileEditor *this)

{
  CowData *pCVar1;
  IOPath *pIVar2;
  CowData<char32_t> *this_00;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  long lVar8;
  PanelContainer *this_01;
  BoxContainer *this_02;
  Label *this_03;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  Object *local_70 [2];
  CowData<String> local_60 [16];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa50) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_interaction_profile",
                       "modules/openxr/editor/openxr_interaction_profile_editor.cpp",0x145,
                       "Parameter \"profile_def\" is null.",0,0);
      return;
    }
  }
  else {
    if (this[0xa48] != (OpenXRInteractionProfileEditor)0x0) {
      OpenXRAPI::get_all_requested_extensions();
      while (iVar6 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa68),0)), 0 < iVar6) {
        pOVar7 = (Object *)Node::get_child((int)*(undefined8 *)(this + 0xa68),false);
        cVar5 = predelete_handler(pOVar7);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      lVar11 = 0;
      lVar9 = 0;
      local_50[0] = 0;
      lVar10 = *(long *)(*(long *)(this + 0xa50) + 0x20);
      if (lVar10 != 0) {
        do {
          if (*(long *)(lVar10 + -8) <= lVar11) break;
          lVar10 = lVar10 + lVar11 * 0x28;
          pCVar1 = (CowData *)(lVar10 + 8);
          lVar8 = CowData<String>::find((CowData<String> *)local_50,pCVar1,0);
          if (lVar8 == -1) {
            local_70[0] = (Object *)0x0;
            if (*(long *)(lVar10 + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_70,pCVar1);
            }
            if (lVar9 == 0) {
              lVar10 = 1;
            }
            else {
              lVar10 = *(long *)(lVar9 + -8) + 1;
            }
            iVar6 = CowData<String>::resize<false>((CowData<String> *)local_50,lVar10);
            lVar9 = local_50[0];
            if (iVar6 == 0) {
              if (local_50[0] == 0) {
                lVar10 = 0;
                lVar8 = -1;
              }
              else {
                lVar10 = *(long *)(local_50[0] + -8);
                lVar8 = lVar10 + -1;
                if (-1 < lVar8) {
                  CowData<String>::_copy_on_write((CowData<String> *)local_50);
                  lVar9 = local_50[0];
                  this_00 = (CowData<char32_t> *)(local_50[0] + lVar8 * 8);
                  if (*(Object **)this_00 != local_70[0]) {
                    CowData<char32_t>::_ref(this_00,(CowData *)local_70);
                  }
                  goto LAB_00103f05;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar10,"p_index","size()","",
                         false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
              lVar9 = local_50[0];
            }
LAB_00103f05:
            CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          }
          lVar11 = lVar11 + 1;
          lVar10 = *(long *)(*(long *)(this + 0xa50) + 0x20);
        } while (lVar10 != 0);
        if (lVar9 != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(lVar9 + -8) <= lVar10) break;
            this_01 = (PanelContainer *)operator_new(0xa08,"");
            PanelContainer::PanelContainer(this_01);
            postinitialize_handler((Object *)this_01);
            Control::set_v_size_flags(this_01,3);
            Node::add_child(*(undefined8 *)(this + 0xa68),this_01,0,0);
            if ((_update_interaction_profile()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar6 = __cxa_guard_acquire(&_update_interaction_profile()::{lambda()#1}::
                                             operator()()::sname), iVar6 != 0)) {
              _scs_create((char *)&_update_interaction_profile()::{lambda()#1}::operator()()::sname,
                          true);
              __cxa_atexit(StringName::~StringName,
                           &_update_interaction_profile()::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_update_interaction_profile()::{lambda()#1}::operator()()::sname)
              ;
            }
            Control::get_theme_stylebox((StringName *)local_70,(StringName *)this);
            Control::add_theme_style_override
                      ((StringName *)this_01,(Ref *)(SceneStringNames::singleton + 600));
            if (((local_70[0] != (Object *)0x0) &&
                (cVar5 = RefCounted::unreference(), pOVar7 = local_70[0], cVar5 != '\0')) &&
               (cVar5 = predelete_handler(local_70[0]), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
            this_02 = (BoxContainer *)operator_new(0xa10,"");
            BoxContainer::BoxContainer(this_02,true);
            this_02[0xa0c] = (BoxContainer)0x1;
            *(undefined ***)this_02 = &PTR__initialize_classv_0010e880;
            postinitialize_handler((Object *)this_02);
            Node::add_child(this_01,this_02,0,0);
            this_03 = (Label *)operator_new(0xad8,"");
            local_70[0] = (Object *)0x0;
            Label::Label(this_03,(String *)local_70);
            postinitialize_handler((Object *)this_03);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
            uVar4 = OpenXRInteractionProfileMetadata::singleton;
            lVar11 = *(long *)(lVar9 + -8);
            if (lVar11 <= lVar10) {
LAB_001041a0:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            local_70[0] = (Object *)0x0;
            pCVar1 = (CowData *)(lVar9 + lVar10 * 8);
            if (*(long *)pCVar1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_70,pCVar1);
            }
            OpenXRInteractionProfileMetadata::get_top_level_name(local_78,uVar4,(String *)local_70);
            Label::set_text((String *)this_03);
            CowData<char32_t>::_unref(local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
            Node::add_child(this_02,this_03,0,0);
            lVar8 = *(long *)(*(long *)(this + 0xa50) + 0x20);
            for (lVar12 = 0; (lVar8 != 0 && (lVar12 < *(long *)(lVar8 + -8))); lVar12 = lVar12 + 1)
            {
              lVar11 = *(long *)(lVar9 + -8);
              pIVar2 = (IOPath *)(lVar8 + lVar12 * 0x28);
              if (lVar11 <= lVar10) goto LAB_001041a0;
              cVar5 = String::operator==((String *)(pIVar2 + 8),(String *)pCVar1);
              if ((cVar5 != '\0') &&
                 (((*(long *)(pIVar2 + 0x18) == 0 || (*(uint *)(*(long *)(pIVar2 + 0x18) + -8) < 2))
                  || (lVar11 = CowData<String>::find(local_60,pIVar2 + 0x18,0), lVar11 != -1)))) {
                _add_io_path(this,(VBoxContainer *)this_02,pIVar2);
              }
              lVar8 = *(long *)(*(long *)(this + 0xa50) + 0x20);
            }
            lVar10 = lVar10 + 1;
            lVar9 = local_50[0];
          } while (local_50[0] != 0);
        }
      }
      if (this[0xa48] != (OpenXRInteractionProfileEditor)0x0) {
        this[0xa48] = (OpenXRInteractionProfileEditor)0x0;
      }
      CowData<String>::_unref((CowData<String> *)local_50);
      CowData<String>::_unref(local_60);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this)

{
  return;
}



/* MethodBindT<String, String>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String,String>::_gen_argument_type(MethodBindT<String,String> *this,int param_1)

{
  return (ulong)((uint)param_1 < 2) << 2;
}



/* MethodBindT<String, String>::get_argument_meta(int) const */

undefined8 MethodBindT<String,String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::_gen_argument_type(int) const
    */

byte __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::_gen_argument_type
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x18;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::get_argument_meta(int) const
    */

undefined8
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::get_argument_count
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_argument_count
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::get_argument_count
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::get_argument_count
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f558;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f558;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String, String>::~MethodBindT() */

void __thiscall MethodBindT<String,String>::~MethodBindT(MethodBindT<String,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String, String>::~MethodBindT() */

void __thiscall MethodBindT<String,String>::~MethodBindT(MethodBindT<String,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
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



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRInteractionProfileEditorBase::_property_get_revertv(StringName const&, Variant&) const */

undefined8
OpenXRInteractionProfileEditorBase::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRInteractionProfileEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8
OpenXRInteractionProfileEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* OpenXRInteractionProfileEditorBase::_property_can_revertv(StringName const&) const */

undefined8 OpenXRInteractionProfileEditorBase::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* OpenXRInteractionProfileEditor::_property_can_revertv(StringName const&) const */

undefined8 OpenXRInteractionProfileEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

{
  int iVar1;
  void *pvVar2;
  
  if (_get_class_namev()::_class_name_static == '\0') {
    iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static);
    if (iVar1 != 0) {
      _get_class_namev()::_class_name_static = (StringName *)0x0;
      __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
      __cxa_guard_release(&_get_class_namev()::_class_name_static);
    }
  }
  pvVar2 = StringName::operator_cast_to_void_(_get_class_namev()::_class_name_static);
  if (pvVar2 != (void *)0x0) {
    return &_get_class_namev()::_class_name_static;
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRInteractionProfileEditorBase::_get_class_namev() const */

undefined8 * OpenXRInteractionProfileEditorBase::_get_class_namev(void)

{
  int iVar1;
  void *pvVar2;
  
  if (_get_class_namev()::_class_name_static == '\0') {
    iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static);
    if (iVar1 != 0) {
      _get_class_namev()::_class_name_static = (StringName *)0x0;
      __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
      __cxa_guard_release(&_get_class_namev()::_class_name_static);
    }
  }
  pvVar2 = StringName::operator_cast_to_void_(_get_class_namev()::_class_name_static);
  if (pvVar2 != (void *)0x0) {
    return &_get_class_namev()::_class_name_static;
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "OpenXRInteractionProfileEditorBase");
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRInteractionProfileEditor::_get_class_namev() const */

undefined8 * OpenXRInteractionProfileEditor::_get_class_namev(void)

{
  int iVar1;
  void *pvVar2;
  
  if (_get_class_namev()::_class_name_static == '\0') {
    iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static);
    if (iVar1 != 0) {
      _get_class_namev()::_class_name_static = (StringName *)0x0;
      __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
      __cxa_guard_release(&_get_class_namev()::_class_name_static);
    }
  }
  pvVar2 = StringName::operator_cast_to_void_(_get_class_namev()::_class_name_static);
  if (pvVar2 != (void *)0x0) {
    return &_get_class_namev()::_class_name_static;
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRInteractionProfileEditor")
  ;
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

{
  int iVar1;
  void *pvVar2;
  
  if (_get_class_namev()::_class_name_static == '\0') {
    iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static);
    if (iVar1 != 0) {
      _get_class_namev()::_class_name_static = (StringName *)0x0;
      __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
      __cxa_guard_release(&_get_class_namev()::_class_name_static);
    }
  }
  pvVar2 = StringName::operator_cast_to_void_(_get_class_namev()::_class_name_static);
  if (pvVar2 != (void *)0x0) {
    return &_get_class_namev()::_class_name_static;
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String, String>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::get_object
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this)

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
      goto LAB_00104c6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104c6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104c6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::get_object
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this)

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
      goto LAB_00104d6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104d6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104d6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::get_object
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

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
      goto LAB_00104e6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104e6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104e6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::get_object
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this)

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
      goto LAB_00104f6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104f6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104f6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* OpenXRInteractionProfileEditorBase::_validate_propertyv(PropertyInfo&) const */

void OpenXRInteractionProfileEditorBase::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* OpenXRInteractionProfileEditor::_validate_propertyv(PropertyInfo&) const */

void OpenXRInteractionProfileEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00114010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10f9,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10f9,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f9,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* OpenXRInteractionProfileEditorBase::is_class_ptr(void*) const */

ulong OpenXRInteractionProfileEditorBase::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f9,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f9,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f9,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f9,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f9,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f9,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* OpenXRInteractionProfileEditor::is_class_ptr(void*) const */

uint OpenXRInteractionProfileEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x10f6,in_RSI == &OpenXRInteractionProfileEditorBase::
                                           get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x10f6,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x10f9,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f9,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f9,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f9,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f9,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRInteractionProfileEditorBase::_setv(StringName const&, Variant const&) */

undefined8 OpenXRInteractionProfileEditorBase::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* OpenXRInteractionProfileEditor::_setv(StringName const&, Variant const&) */

undefined8 OpenXRInteractionProfileEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105648) */
/* OpenXRInteractionProfileEditorBase::_getv(StringName const&, Variant&) const */

undefined8 OpenXRInteractionProfileEditorBase::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001056b8) */
/* OpenXRInteractionProfileEditor::_getv(StringName const&, Variant&) const */

undefined8 OpenXRInteractionProfileEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105728) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105798) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001059a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001059a0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105a00:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105a60:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105ad0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105ad0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114028 != Container::_notification) {
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
  if ((code *)PTR__notification_00114028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114028 != Container::_notification) {
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
  if ((code *)PTR__notification_00114028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
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



/* WARNING: Removing unreachable block (ram,0x00105ee0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114028 != Container::_notification) {
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
  if ((code *)PTR__notification_00114028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* OpenXRInteractionProfileEditorBase::_notificationv(int, bool) */

void __thiscall
OpenXRInteractionProfileEditorBase::_notificationv
          (OpenXRInteractionProfileEditorBase *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 10) {
      (**(code **)(*(long *)this + 0x368))(this);
    }
    else if (param_1 == 0x2d) {
      (**(code **)(*(long *)this + 0x370))(this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 10) {
    if (param_1 == 0x2d) {
                    /* WARNING: Could not recover jumptable at 0x00105f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x370))(this);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00105fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x368))(this);
  return;
}



/* OpenXRInteractionProfileEditor::_notificationv(int, bool) */

void __thiscall
OpenXRInteractionProfileEditor::_notificationv
          (OpenXRInteractionProfileEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 10) {
      (**(code **)(*(long *)this + 0x368))();
    }
    else if (param_1 == 0x2d) {
      (**(code **)(*(long *)this + 0x370))();
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 10) {
    if (param_1 == 0x2d) {
                    /* WARNING: Could not recover jumptable at 0x0010602d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x370))(this);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00106074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x368))(this);
  return;
}



/* Callable
   create_custom_callable_function_pointer<OpenXRInteractionProfileEditorBase>(OpenXRInteractionProfileEditorBase*,
   char const*, void (OpenXRInteractionProfileEditorBase::*)()) */

OpenXRInteractionProfileEditorBase *
create_custom_callable_function_pointer<OpenXRInteractionProfileEditorBase>
          (OpenXRInteractionProfileEditorBase *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f318;
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



/* Callable create_custom_callable_function_pointer<OpenXRInteractionProfileEditor,
   String>(OpenXRInteractionProfileEditor*, char const*, void
   (OpenXRInteractionProfileEditor::*)(String)) */

OpenXRInteractionProfileEditor *
create_custom_callable_function_pointer<OpenXRInteractionProfileEditor,String>
          (OpenXRInteractionProfileEditor *param_1,char *param_2,_func_void_String *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f3a8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String **)(this + 0x20) = param_3 + 1;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106738) */
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



/* OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase() */

void __thiscall
OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase
          (OpenXRInteractionProfileEditorBase *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ebf8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010695d;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010695d:
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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_38,(CowData<char32_t> *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_38) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_38;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

{
  long lVar1;
  char *pcVar2;
  long in_RSI;
  String *in_RDI;
  
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"VBoxContainer");
    return;
  }
  lVar1 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
  if (lVar1 != 0) {
    pcVar2 = *(char **)(lVar1 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      String::parse_latin1(in_RDI,pcVar2);
      return;
    }
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar1 + 0x10));
    return;
  }
  *(undefined8 *)in_RDI = 0;
  return;
}



/* OpenXRInteractionProfileEditor::get_class() const */

void OpenXRInteractionProfileEditor::get_class(void)

{
  long lVar1;
  char *pcVar2;
  long in_RSI;
  String *in_RDI;
  
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"OpenXRInteractionProfileEditor");
    return;
  }
  lVar1 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
  if (lVar1 != 0) {
    pcVar2 = *(char **)(lVar1 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      String::parse_latin1(in_RDI,pcVar2);
      return;
    }
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar1 + 0x10));
    return;
  }
  *(undefined8 *)in_RDI = 0;
  return;
}



/* OpenXRInteractionProfileEditorBase::get_class() const */

void OpenXRInteractionProfileEditorBase::get_class(void)

{
  long lVar1;
  char *pcVar2;
  long in_RSI;
  String *in_RDI;
  
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"OpenXRInteractionProfileEditorBase");
    return;
  }
  lVar1 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
  if (lVar1 != 0) {
    pcVar2 = *(char **)(lVar1 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      String::parse_latin1(in_RDI,pcVar2);
      return;
    }
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar1 + 0x10));
    return;
  }
  *(undefined8 *)in_RDI = 0;
  return;
}



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

{
  long lVar1;
  char *pcVar2;
  long in_RSI;
  String *in_RDI;
  
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HBoxContainer");
    return;
  }
  lVar1 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
  if (lVar1 != 0) {
    pcVar2 = *(char **)(lVar1 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      String::parse_latin1(in_RDI,pcVar2);
      return;
    }
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar1 + 0x10));
    return;
  }
  *(undefined8 *)in_RDI = 0;
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC33;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC33;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114030 != Object::_get_property_list) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114038 != CanvasItem::_get_property_list) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Container";
  local_90 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BoxContainer";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* OpenXRInteractionProfileEditorBase::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
OpenXRInteractionProfileEditorBase::_get_property_listv
          (OpenXRInteractionProfileEditorBase *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "OpenXRInteractionProfileEditorBase";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "OpenXRInteractionProfileEditorBase";
  local_90 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OpenXRInteractionProfileEditorBase",false);
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



/* OpenXRInteractionProfileEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OpenXRInteractionProfileEditor::_get_property_listv
          (OpenXRInteractionProfileEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    OpenXRInteractionProfileEditorBase::_get_property_listv
              ((OpenXRInteractionProfileEditorBase *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "OpenXRInteractionProfileEditor";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "OpenXRInteractionProfileEditor";
  local_90 = 0;
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OpenXRInteractionProfileEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      OpenXRInteractionProfileEditorBase::_get_property_listv
                ((OpenXRInteractionProfileEditorBase *)this,param_1,true);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "VBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::call
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00107e2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107e2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107ee0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107e2f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,local_48);
    _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107ee0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Window, void, Vector2i const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::call
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this,Variant **param_1,
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
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,6);
            uVar3 = _LC43;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2i(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00107fbe;
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
  String::operator+(local_40,local_50);
  _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00107fbe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::call
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this,
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
            uVar3 = _LC44;
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
        goto LAB_0010821e;
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
  String::operator+((String *)local_38,local_48);
  _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010821e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String, String>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::call
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this,
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar3 = _LC45;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC44;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar7)((long *)(lVar1 + lVar2),local_48,(Variant *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        goto LAB_00108475;
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
  String::operator+((String *)local_48,local_58);
  _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00108475:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar1 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = String::operator==((String *)param_1,"Object");
        return uVar4;
      }
LAB_0010876f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar3 = String::operator==((String *)param_1,(String *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((char)uVar3 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar3;
      }
      goto LAB_0010876f;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}



/* OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor() */

void __thiscall
OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor
          (OpenXRInteractionProfileEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ef88;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa60));
  *(undefined ***)this = &PTR__initialize_classv_0010ebf8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108833;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108833:
  Control::~Control((Control *)this);
  return;
}



/* OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase() */

void __thiscall
OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase
          (OpenXRInteractionProfileEditorBase *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ebf8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010895d;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010895d:
  Control::~Control((Control *)this);
  operator_delete(this,0xa60);
  return;
}



/* OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor() */

void __thiscall
OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor
          (OpenXRInteractionProfileEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ef88;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa60));
  *(undefined ***)this = &PTR__initialize_classv_0010ebf8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa58));
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108aa3;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108aa3:
  Control::~Control((Control *)this);
  operator_delete(this,0xa78);
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00108c03;
  }
  cVar3 = String::operator==((String *)param_1,"Control");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==((String *)param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_00108c03;
    }
    cVar3 = String::operator==((String *)param_1,"CanvasItem");
    if (cVar3 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar2 = *(long *)(lVar1 + 0x20);
        if (lVar2 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
          }
        }
        cVar3 = String::operator==((String *)param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 != '\0') goto LAB_00108c03;
      }
      cVar3 = String::operator==((String *)param_1,"Node");
      if (cVar3 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = Object::is_class((Object *)this,param_1);
          return uVar4;
        }
        goto LAB_00108d8e;
      }
    }
  }
LAB_00108c03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108d8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00108e73;
  }
  cVar3 = String::operator==((String *)param_1,"Container");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Control::is_class((Control *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00108e73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::_gen_argument_type_info
          (int param_1)

{
  long lVar1;
  int in_EDX;
  char *pcVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    pcVar2 = "OpenXRActionMap";
  }
  else {
    if (in_EDX != 1) goto LAB_00108f5a;
    pcVar2 = "OpenXRInteractionProfile";
  }
  local_80 = 0;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,pcVar2);
  local_90 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_78,0x18,(CowData<char32_t> *)&local_90,0x11,(String *)&local_88,6
             ,&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  *puVar3 = local_78[0];
  if (*(long *)(puVar3 + 2) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(puVar3 + 2) = lVar1;
  }
  if (*(long *)(puVar3 + 4) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(puVar3 + 4) = lVar1;
  }
  puVar3[6] = local_60;
  if (*(long *)(puVar3 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(puVar3 + 8) = lVar1;
  }
  puVar3[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
LAB_00108f5a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00114040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00114040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        if (pvVar3 == (void *)0x0) goto LAB_00109d3f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00109d3f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00109e73;
  }
  cVar4 = String::operator==((String *)param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00109e73;
    }
    cVar4 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00109f7e;
    }
  }
LAB_00109e73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109f7e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditor::is_class(String const&) const */

undefined8 __thiscall
OpenXRInteractionProfileEditor::is_class(OpenXRInteractionProfileEditor *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010a063;
  }
  cVar4 = String::operator==((String *)param_1,"OpenXRInteractionProfileEditor");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010a063;
    }
    cVar4 = String::operator==((String *)param_1,"OpenXRInteractionProfileEditorBase");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = HBoxContainer::is_class((HBoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_0010a16e;
    }
  }
LAB_0010a063:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a16e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010a253;
  }
  cVar4 = String::operator==((String *)param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010a253;
    }
    cVar4 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010a35e;
    }
  }
LAB_0010a253:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a35e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010a443;
  }
  cVar4 = String::operator==((String *)param_1,"BoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010a443;
    }
    cVar4 = String::operator==((String *)param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_0010a54e;
    }
  }
LAB_0010a443:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a54e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInteractionProfileEditorBase::is_class(String const&) const */

undefined8 __thiscall
OpenXRInteractionProfileEditorBase::is_class
          (OpenXRInteractionProfileEditorBase *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010a633;
  }
  cVar4 = String::operator==((String *)param_1,"OpenXRInteractionProfileEditorBase");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010a633;
    }
    cVar4 = String::operator==((String *)param_1,"HBoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_0010a73e;
    }
  }
LAB_0010a633:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a73e:
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



/* Ref<OpenXRIPBinding>::unref() */

void __thiscall Ref<OpenXRIPBinding>::unref(Ref<OpenXRIPBinding> *this)

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



/* MethodBind* create_method_bind<OpenXRInteractionProfileEditorBase, Ref<OpenXRActionMap>,
   Ref<OpenXRInteractionProfile> >(void
   (OpenXRInteractionProfileEditorBase::*)(Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile>)) */

MethodBind *
create_method_bind<OpenXRInteractionProfileEditorBase,Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>
          (_func_void_Ref_Ref *param_1)

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
  *(_func_void_Ref_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f558;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInteractionProfileEditorBase";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<OpenXRInteractionProfileEditorBase, String, String>(void
   (OpenXRInteractionProfileEditorBase::*)(String, String)) */

MethodBind *
create_method_bind<OpenXRInteractionProfileEditorBase,String,String>
          (_func_void_String_String *param_1)

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
  *(_func_void_String_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f5b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInteractionProfileEditorBase";
  local_30 = 0x22;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* OpenXRInteractionProfileEditorBase::_bind_methods() [clone .cold] */

void OpenXRInteractionProfileEditorBase::_bind_methods(void)

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



/* CowData<Ref<OpenXRIPBinding> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<OpenXRIPBinding>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRInteractionProfileEditor::_initialize_classv() */

void OpenXRInteractionProfileEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (OpenXRInteractionProfileEditorBase::initialize_class()::initialized == '\0') {
      if (HBoxContainer::initialize_class()::initialized == '\0') {
        if (BoxContainer::initialize_class()::initialized == '\0') {
          if (Container::initialize_class()::initialized == '\0') {
            if (Control::initialize_class()::initialized == '\0') {
              if (CanvasItem::initialize_class()::initialized == '\0') {
                if (Node::initialize_class()::initialized == '\0') {
                  Object::initialize_class();
                  local_50 = 0;
                  String::parse_latin1((String *)&local_50,"Object");
                  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                  local_60 = 0;
                  String::parse_latin1((String *)&local_60,"Node");
                  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                  if ((StringName::configured != '\0') && (local_58 != 0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                  if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                    Node::_bind_methods();
                  }
                  Node::initialize_class()::initialized = '\x01';
                }
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Node");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"CanvasItem");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                CanvasItem::_bind_methods();
                if ((code *)PTR__bind_compatibility_methods_00114040 !=
                    Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
                }
                CanvasItem::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"CanvasItem");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Control");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              Control::_bind_methods();
              Control::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Control");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Container");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Container");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"BoxContainer");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
          }
          BoxContainer::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"BoxContainer");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"HBoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        HBoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"HBoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"OpenXRInteractionProfileEditorBase");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      OpenXRInteractionProfileEditorBase::_bind_methods();
      OpenXRInteractionProfileEditorBase::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"OpenXRInteractionProfileEditorBase");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRInteractionProfileEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRInteractionProfileEditorBase::_initialize_classv() */

void OpenXRInteractionProfileEditorBase::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_00114050 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00114040 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00114048 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRInteractionProfileEditorBase");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<OpenXRAction>::unref() */

void __thiscall Ref<OpenXRAction>::unref(Ref<OpenXRAction> *this)

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



/* Ref<OpenXRActionMap>::unref() */

void __thiscall Ref<OpenXRActionMap>::unref(Ref<OpenXRActionMap> *this)

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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
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
LAB_0010bd50:
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
  if (lVar9 == 0) goto LAB_0010bd50;
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
    goto LAB_0010bda6;
  }
  if (lVar9 == lVar5) {
LAB_0010bccb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010bda6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010bc3f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010bccb;
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
LAB_0010bc3f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Ref<OpenXRIPBinding> >::_unref() */

void __thiscall CowData<Ref<OpenXRIPBinding>>::_unref(CowData<Ref<OpenXRIPBinding>> *this)

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
LAB_0010be0d:
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
            goto LAB_0010be0d;
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



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),(String *)param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}



/* WARNING: Removing unreachable block (ram,0x0010c038) */
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



/* MethodBindT<String, String>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String,String>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar2) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((CowData<char32_t> *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c34f;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_40 = 0;
  if (*(long *)(*(long *)(param_3 + 8) + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(*(long *)(param_3 + 8) + 8));
  }
  local_38 = 0;
  if (*(long *)(*(long *)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)(*(long *)param_3 + 8));
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_38,
            (CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010c34f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String,String>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar2) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((CowData<char32_t> *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c545;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_40 = 0;
  if (*(long *)*(CowData **)((long)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,*(CowData **)((long)param_3 + 8));
  }
  local_38 = 0;
                    /* WARNING: Load size is inaccurate */
  if (*(long *)*param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,*param_3);
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_38,
            (CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010c545:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  Object *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_60 == *(Object **)pVVar5) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c851;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010c762:
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
      pOVar4 = (Object *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010c762;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_60 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar4 != local_60) {
    if (pOVar4 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_0010c7f9:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRActionMap::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_60 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010c7f9;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_60,&local_68);
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010c851:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  Object *local_48;
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar4) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010cbe3;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0010cb65:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010cb65;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_3 == (long *)0x0) {
    local_40 = (Object *)0x0;
  }
  else {
    pOVar2 = (Object *)**param_3;
    local_40 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      local_38 = 0;
      local_40 = pOVar2;
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        local_40 = (Object *)0x0;
      }
      Ref<OpenXRActionMap>::unref((Ref<OpenXRActionMap> *)&local_38);
    }
  }
  (*pcVar5)((long *)((long)param_2 + lVar1),&local_40,&local_48);
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
  }
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
LAB_0010cbe3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_50 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_50,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_48,(String *)&local_50,&local_58);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d0b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0010d0a5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0010d0b0;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0010d0e8;
    pVVar13 = *(Variant **)param_4;
LAB_0010d0fd:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_0010d0e8:
      uVar8 = 4;
      goto LAB_0010d0a5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_0010d2c0;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010d0fd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0010d2c0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar16 = pVVar16 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar16);
  uVar4 = _LC99;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_50 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_50;
  if (pOVar9 != local_50) {
    if (pOVar9 == (Object *)0x0) {
      if (local_50 != (Object *)0x0) {
        local_50 = (Object *)0x0;
LAB_0010cf99:
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
      pOVar9 = (Object *)
               __dynamic_cast(pOVar9,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_50 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_50 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010cf99;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13);
  uVar4 = _LC100;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar9 != local_48) {
    if (pOVar9 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0010d02c:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&OpenXRActionMap::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_48 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010d02c;
      }
    }
  }
  (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),&local_48,&local_50);
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (local_50 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_50;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_50);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0010d0b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String, String>(__UnexistingClass*, void
   (__UnexistingClass::*)(String, String), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String,String>
               (__UnexistingClass *param_1,_func_void_String_String *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0010d538;
      puVar10 = (undefined4 *)*plVar8;
LAB_0010d58d:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010d538:
        uVar7 = 4;
        goto LAB_0010d53d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0010d5a8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0010d58d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010d5a8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_String **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,4);
    uVar4 = _LC45;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC44;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_48);
    (*param_2)((char)(param_1 + (long)param_3),(char)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_0010d53d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String,String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_2 + 3));
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
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010d646;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String,String>
            (p_Var2,(_func_void_String_String *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010d646:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_78,4,(CowData<char32_t> *)&local_90,0,(String *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78[0];
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String,String>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x58);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
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
                if (pvVar5 == (void *)0x0) goto LAB_0010dcc9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0010dcc9:
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



/* OpenXRInteractionProfileEditorBase::_bind_methods() */

void OpenXRInteractionProfileEditorBase::_GLOBAL__sub_I__bind_methods(void)

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
  if (ItemList::base_property_helper != '\0') {
    return;
  }
  ItemList::base_property_helper = 1;
  ItemList::base_property_helper._64_8_ = 0;
  ItemList::base_property_helper._56_8_ = 2;
  ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,&__dso_handle,
               uStack_8);
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
/* OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor() */

void __thiscall
OpenXRInteractionProfileEditor::~OpenXRInteractionProfileEditor
          (OpenXRInteractionProfileEditor *this)

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
/* OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase() */

void __thiscall
OpenXRInteractionProfileEditorBase::~OpenXRInteractionProfileEditorBase
          (OpenXRInteractionProfileEditorBase *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

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
/* MethodBindT<String, String>::~MethodBindT() */

void __thiscall MethodBindT<String,String>::~MethodBindT(MethodBindT<String,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRInteractionProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditorBase,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Window, void, Vector2i const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Window,void,Vector2i_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Window,void,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRInteractionProfileEditor, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRInteractionProfileEditor,void,String,String> *this)

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



