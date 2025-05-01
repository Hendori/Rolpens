
/* OpenXRBindingModifiersDialog::_on_add_binding_modifier() */

void __thiscall
OpenXRBindingModifiersDialog::_on_add_binding_modifier(OpenXRBindingModifiersDialog *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar1 = *(undefined8 *)(this + 0xdd0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &_LC5;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = &_LC5;
  local_58 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  CreateDialog::popup_create(SUB81(uVar1,0),false,(String *)0x0,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_on_remove_binding_modifier(Object*) */

void __thiscall
OpenXRBindingModifiersDialog::_on_remove_binding_modifier
          (OpenXRBindingModifiersDialog *this,Object *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar3 = *(long *)(this + 0xdf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar3 == 0) && (lVar3 = *(long *)(this + 0xde8), lVar3 == 0)) {
    _err_print_error("_on_remove_binding_modifier",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x6e,
                     "Method/function failed.","No binding nor interaction profile specified.",0,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010045d;
  }
  Object::set_edited(SUB81(lVar3,0));
  if (param_1 != (Object *)0x0) {
    pOVar2 = (Object *)
             __dynamic_cast(param_1,&Object::typeinfo,&OpenXRBindingModifierEditor::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      lVar3 = Node::get_parent();
      if (*(long *)(this + 0xdb8) != lVar3) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010045d;
        uVar5 = 0x73;
        pcVar4 = 
        "Condition \"binding_modifier_editor->get_parent() != binding_modifiers_vb\" is true.";
        goto LAB_001003c6;
      }
      uVar5 = *(undefined8 *)(this + 0xdd8);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"Remove binding modifier");
      TTR((String *)&local_90,(String *)&local_a0);
      EditorUndoRedoManager::create_action(uVar5,(String *)&local_90,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      pOVar1 = *(Object **)(this + 0xdd8);
      StringName::StringName((StringName *)&local_90,"_do_remove_binding_modifier_editor",false);
      Variant::Variant((Variant *)local_78,pOVar2);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar1,(StringName *)this,(Variant **)&local_90,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      pOVar1 = *(Object **)(this + 0xdd8);
      StringName::StringName((StringName *)&local_90,"_do_add_binding_modifier_editor",false);
      Variant::Variant((Variant *)local_78,pOVar2);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar1,(StringName *)this,(Variant **)&local_90,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xdd8),0));
        return;
      }
      goto LAB_0010045d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar5 = 0x72;
    pcVar4 = "Parameter \"binding_modifier_editor\" is null.";
LAB_001003c6:
    _err_print_error("_on_remove_binding_modifier",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",uVar5,pcVar4,0,0);
    return;
  }
LAB_0010045d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::OpenXRBindingModifiersDialog() */

void __thiscall
OpenXRBindingModifiersDialog::OpenXRBindingModifiersDialog(OpenXRBindingModifiersDialog *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  ScrollContainer *this_00;
  BoxContainer *this_01;
  Label *this_02;
  Button *this_03;
  CreateDialog *this_04;
  long in_FS_OFFSET;
  String aSStack_68 [8];
  long local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdd0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00109210;
  *(undefined8 *)(this + 0xdf0) = 0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  uVar4 = EditorUndoRedoManager::get_singleton();
  *(undefined8 *)(this + 0xdd8) = uVar4;
  Window::set_transient(SUB81(this,0));
  this_00 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(ScrollContainer **)(this + 0xdb0) = this_00;
  local_48 = 0x43af0000;
  Control::set_custom_minimum_size((Vector2 *)this_00);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb0),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdb0),3);
  ScrollContainer::set_horizontal_scroll_mode(*(undefined8 *)(this + 0xdb0),0);
  Node::add_child(this,*(undefined8 *)(this + 0xdb0),0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00108e98;
  postinitialize_handler((Object *)this_01);
  *(BoxContainer **)(this + 0xdb8) = this_01;
  Control::set_h_size_flags(this_01,3);
  Node::add_child(*(undefined8 *)(this + 0xdb0),*(undefined8 *)(this + 0xdb8),0,0);
  this_02 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(Label **)(this + 0xdc0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xdc0),2);
  pSVar1 = *(String **)(this + 0xdc0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String *)&local_60,
             "Note: modifiers will only be applied if supported on the host system.");
  TTR(aSStack_68,(String *)&local_60);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdb8),*(undefined8 *)(this + 0xdc0),0,0);
  this_03 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(this_03,(String *)local_58);
  postinitialize_handler((Object *)this_03);
  *(Button **)(this + 0xdc8) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar1 = *(String **)(this + 0xdc8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Add binding modifier");
  TTR(aSStack_68,(String *)&local_60);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xdc8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRBindingModifiersDialog>
            ((OpenXRBindingModifiersDialog *)local_58,(char *)this,
             (_func_void *)"&OpenXRBindingModifiersDialog::_on_add_binding_modifier");
  StringName::StringName((StringName *)&local_60,"pressed",false);
  (*pcVar3)(plVar2,(String *)&local_60,(CowData<char32_t> *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdb8),*(undefined8 *)(this + 0xdc8),0,0);
  this_04 = (CreateDialog *)operator_new(0xf00,"");
  CreateDialog::CreateDialog(this_04);
  postinitialize_handler((Object *)this_04);
  *(CreateDialog **)(this + 0xdd0) = this_04;
  Window::set_transient(SUB81(this_04,0));
  plVar2 = *(long **)(this + 0xdd0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRBindingModifiersDialog>
            ((OpenXRBindingModifiersDialog *)local_58,(char *)this,
             (_func_void *)"&OpenXRBindingModifiersDialog::_on_dialog_created");
  StringName::StringName((StringName *)&local_60,"create",false);
  (*pcVar3)(plVar2,(String *)&local_60,(CowData<char32_t> *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xdd0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_add_binding_modifier_editor(Ref<OpenXRBindingModifier>) */

StringName * __thiscall
OpenXRBindingModifiersDialog::_add_binding_modifier_editor
          (OpenXRBindingModifiersDialog *this,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  StringName *pSVar8;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  Object *local_60;
  Object *local_58 [3];
  long local_40;
  
  plVar1 = (long *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("_add_binding_modifier_editor",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x37,
                     "Condition \"p_binding_modifier.is_null()\" is true. Returning: nullptr",0,0);
    pSVar8 = (StringName *)0x0;
    goto LAB_00100bb5;
  }
  (**(code **)(*plVar1 + 0x48))((CowData<char32_t> *)&local_70,plVar1);
  if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
    pSVar8 = (StringName *)0x0;
    _err_print_error("_add_binding_modifier_editor",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x3a,
                     "Condition \"class_name.is_empty()\" is true. Returning: nullptr",0,0);
  }
  else {
    OpenXRActionMapEditor::get_binding_modifier_editor_class((String *)&local_68);
    if ((local_68 == 0) || (*(uint *)(local_68 + -8) < 2)) {
      pSVar8 = (StringName *)0x0;
      _err_print_error("_add_binding_modifier_editor",
                       "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x3c,
                       "Condition \"editor_class.is_empty()\" is true. Returning: nullptr",0,0);
    }
    else {
      StringName::StringName((StringName *)local_58,(String *)&local_68,false);
      pvVar7 = (void *)ClassDB::instantiate((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_58[0] != (Object *)0x0)) {
        StringName::unref();
      }
      if (pvVar7 != (void *)0x0) {
        pSVar8 = (StringName *)
                 __dynamic_cast(pvVar7,&Object::typeinfo,&OpenXRBindingModifierEditor::typeinfo,0);
        if (pSVar8 != (StringName *)0x0) {
          pcVar2 = *(code **)(*(long *)pSVar8 + 0x368);
          local_58[0] = (Object *)0x0;
          if ((Object *)*param_2 != (Object *)0x0) {
            local_58[0] = (Object *)*param_2;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_58[0] = (Object *)0x0;
            }
          }
          local_60 = (Object *)0x0;
          if (*(Object **)(this + 0xde0) != (Object *)0x0) {
            local_60 = *(Object **)(this + 0xde0);
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_60 = (Object *)0x0;
            }
          }
          (*pcVar2)(pSVar8,(StringName *)&local_60,(StringName *)local_58);
          if (local_60 != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
            pOVar4 = local_60;
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(local_60);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          if (local_58[0] != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
            pOVar4 = local_58[0];
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(local_58[0]);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          pcVar2 = *(code **)(*(long *)pSVar8 + 0x108);
          this_00 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(this_00);
          *(OpenXRBindingModifiersDialog **)(this_00 + 0x28) = this;
          *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
          *(undefined **)(this_00 + 0x20) = &_LC5;
          *(undefined8 *)(this_00 + 0x40) = 0;
          uVar3 = *(undefined8 *)(this + 0x60);
          *(undefined ***)this_00 = &PTR_hash_00109488;
          *(undefined8 *)(this_00 + 0x30) = uVar3;
          *(code **)(this_00 + 0x38) = _on_remove_binding_modifier;
          *(undefined8 *)(this_00 + 0x10) = 0;
          CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
          *(char **)(this_00 + 0x20) = "OpenXRBindingModifiersDialog::_on_remove_binding_modifier";
          Callable::Callable((Callable *)local_58,this_00);
          StringName::StringName((StringName *)&local_60,"binding_modifier_removed",false);
          (*pcVar2)(pSVar8,(StringName *)&local_60,(StringName *)local_58,0);
          if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)local_58);
          Node::add_child(*(undefined8 *)(this + 0xdb8),pSVar8,0,0);
          if (_add_binding_modifier_editor(Ref<OpenXRBindingModifier>)::{lambda()#1}::operator()()::
              sname == '\0') {
            iVar6 = __cxa_guard_acquire(&_add_binding_modifier_editor(Ref<OpenXRBindingModifier>)::
                                         {lambda()#1}::operator()()::sname);
            if (iVar6 != 0) {
              _scs_create((char *)&_add_binding_modifier_editor(Ref<OpenXRBindingModifier>)::
                                   {lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_add_binding_modifier_editor(Ref<OpenXRBindingModifier>)::{lambda()#1}::
                            operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_add_binding_modifier_editor(Ref<OpenXRBindingModifier>)::
                                   {lambda()#1}::operator()()::sname);
            }
          }
          Window::get_theme_stylebox((StringName *)local_58,(StringName *)this);
          Control::add_theme_style_override(pSVar8,(Ref *)(SceneStringNames::singleton + 600));
          if (local_58[0] != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
            pOVar4 = local_58[0];
            if (cVar5 != '\0') {
              cVar5 = predelete_handler(local_58[0]);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          goto LAB_00100ba5;
        }
        Memory::free_static(pvVar7,false);
      }
      pSVar8 = (StringName *)0x0;
      _err_print_error("_add_binding_modifier_editor",
                       "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x48,
                       "Parameter \"new_editor\" is null.",0,0);
    }
LAB_00100ba5:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00100bb5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_create_binding_modifiers() */

void __thiscall
OpenXRBindingModifiersDialog::_create_binding_modifiers(OpenXRBindingModifiersDialog *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  int iVar5;
  long in_FS_OFFSET;
  Array local_50 [8];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_50);
  if (*(long *)(this + 0xdf0) == 0) {
    if (*(long *)(this + 0xde8) == 0) {
      _err_print_error("_create_binding_modifiers",
                       "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x5b,
                       "Method/function failed.","No binding nor interaction profile specified.",0,0
                      );
      Array::~Array(local_50);
      goto LAB_00100f48;
    }
    OpenXRInteractionProfile::get_binding_modifiers();
  }
  else {
    OpenXRIPBinding::get_binding_modifiers();
  }
  iVar5 = 0;
  Array::operator=(local_50,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
  while( true ) {
    iVar2 = Array::size();
    if (iVar2 <= iVar5) break;
    Array::operator[]((int)local_50);
    lVar3 = Variant::get_validated_object();
    if (lVar3 == 0) {
LAB_00100e30:
      local_48 = (Object *)0x0;
      _add_binding_modifier_editor(this,(Array *)&local_48);
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0);
      if (pOVar4 == (Object *)0x0) goto LAB_00100e30;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') goto LAB_00100e30;
      local_48 = pOVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_48 = (Object *)0x0;
        _add_binding_modifier_editor(this);
      }
      else {
        _add_binding_modifier_editor(this);
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar4);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
  Array::~Array(local_50);
LAB_00100f48:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_notification(int) */

void OpenXRBindingModifiersDialog::_notification(int param_1)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  OpenXRBindingModifiersDialog *this;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  this = (OpenXRBindingModifiersDialog *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)in_RSI == 0xd) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _create_binding_modifiers(this);
      return;
    }
  }
  else {
    if (((int)in_RSI == 0x20) &&
       (pSVar1 = *(StringName **)(this + 0xdb0), pSVar1 != (StringName *)0x0)) {
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                    in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Window::get_theme_stylebox((StringName *)&local_28,(StringName *)this);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (local_28 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_28);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_28 + 0x140))(local_28);
            Memory::free_static(local_28,false);
          }
        }
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* OpenXRBindingModifiersDialog::setup(Ref<OpenXRActionMap>, Ref<OpenXRInteractionProfile>,
   Ref<OpenXRIPBinding>) */

void __thiscall
OpenXRBindingModifiersDialog::setup
          (OpenXRBindingModifiersDialog *this,long *param_2,long *param_3,long *param_4)

{
  Object *pOVar1;
  Object *pOVar2;
  String *pSVar3;
  undefined8 uVar4;
  char cVar5;
  CowData *pCVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_a8 [8];
  long local_a0;
  undefined8 local_98;
  Object *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  undefined8 local_58;
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  uVar4 = OpenXRInteractionProfileMetadata::singleton;
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(this + 0xde0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0xde0) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xde0) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar2);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  pOVar1 = (Object *)*param_3;
  pOVar2 = *(Object **)(this + 0xde8);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0xde8) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xde8) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar2);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  pOVar1 = (Object *)*param_4;
  pOVar2 = *(Object **)(this + 0xdf0);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0xdf0) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xdf0) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar2);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  OpenXRInteractionProfile::get_interaction_profile_path();
  if (*(long *)(this + 0xdf0) == 0) {
    if (*(long *)(this + 0xde8) != 0) {
      local_78 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_a8);
      local_48 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)local_a8);
      pCVar6 = (CowData *)
               OpenXRInteractionProfileMetadata::get_profile(uVar4,(CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (pCVar6 != (CowData *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar6);
      }
      pSVar3 = *(String **)(this + 0xdd0);
      local_48 = 0;
      String::parse_latin1((String *)&local_48,"OpenXRIPBindingModifier");
      CreateDialog::set_base_type(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      local_58 = 0;
      String::parse_latin1((String *)&local_58," ");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Binding modifiers for:");
      TTR(local_60,(String *)&local_70);
      String::operator+((String *)local_50,local_60);
      String::operator+((String *)&local_48,(String *)local_50);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
  }
  else {
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"unset");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"unset");
    OpenXRIPBinding::get_action();
    if (local_90 != (Object *)0x0) {
      OpenXRAction::get_name_with_set();
      if (local_a0 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_a0 = local_48;
        local_48 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    OpenXRIPBinding::get_binding_path();
    local_48 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)local_a8);
    pCVar6 = (CowData *)
             OpenXRInteractionProfileMetadata::get_io_path
                       (uVar4,(CowData<char32_t> *)&local_48,local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    if (pCVar6 != (CowData *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar6);
    }
    pSVar3 = *(String **)(this + 0xdd0);
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"OpenXRActionBindingModifier");
    CreateDialog::set_base_type(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    local_58 = 0;
    String::parse_latin1((String *)&local_58,": ");
    local_70 = 0;
    String::parse_latin1((String *)&local_70," ");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Binding modifiers for:");
    TTR((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    String::operator+(local_60,(String *)&local_68);
    String::operator+((String *)local_50,local_60);
    String::operator+((String *)&local_48,(String *)local_50);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (local_90 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_90);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)local_90 + 0x140))(local_90);
          Memory::free_static(local_90,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  CowData<char32_t>::_unref(local_a8);
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



/* OpenXRBindingModifiersDialog::_do_add_binding_modifier_editor(OpenXRBindingModifierEditor*) */

void __thiscall
OpenXRBindingModifiersDialog::_do_add_binding_modifier_editor
          (OpenXRBindingModifiersDialog *this,OpenXRBindingModifierEditor *param_1)

{
  Object *pOVar1;
  Ref *pRVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  pOVar1 = *(Object **)(param_1 + 0xa38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_40 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_40 = (Object *)0x0;
    _err_print_error("_do_add_binding_modifier_editor",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x9c,
                     "Condition \"binding_modifier.is_null()\" is true.",0,0);
LAB_001019b8:
    Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_40);
  }
  else {
    pRVar2 = *(Ref **)(this + 0xdf0);
    if (pRVar2 == (Ref *)0x0) {
      pRVar2 = *(Ref **)(this + 0xde8);
      if (pRVar2 == (Ref *)0x0) {
        _err_print_error("_do_add_binding_modifier_editor",
                         "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0xa5,
                         "Method/function failed.","No binding nor interaction profile specified.",0
                         ,0);
        goto LAB_001019b8;
      }
      local_38 = (Object *)0x0;
      pOVar4 = (Object *)
               __dynamic_cast(pOVar1,&Object::typeinfo,&OpenXRIPBindingModifier::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) &&
         (local_38 = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_38 = (Object *)0x0;
      }
      OpenXRInteractionProfile::add_binding_modifier(pRVar2);
      if (local_38 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar4 = local_38;
        goto joined_r0x00101b32;
      }
    }
    else {
      local_38 = (Object *)0x0;
      pOVar4 = (Object *)
               __dynamic_cast(pOVar1,&Object::typeinfo,&OpenXRActionBindingModifier::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) &&
         (local_38 = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_38 = (Object *)0x0;
      }
      OpenXRIPBinding::add_binding_modifier(pRVar2);
      if (local_38 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar4 = local_38;
joined_r0x00101b32:
        local_38 = pOVar4;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    Node::add_child(*(undefined8 *)(this + 0xdb8),param_1,0,0);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00101bb6;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101bb6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_do_remove_binding_modifier_editor(OpenXRBindingModifierEditor*) */

void __thiscall
OpenXRBindingModifiersDialog::_do_remove_binding_modifier_editor
          (OpenXRBindingModifiersDialog *this,OpenXRBindingModifierEditor *param_1)

{
  Object *pOVar1;
  Ref *pRVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  pOVar1 = *(Object **)(param_1 + 0xa38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_40 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_40 = (Object *)0x0;
    _err_print_error("_do_remove_binding_modifier_editor",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0xad,
                     "Condition \"binding_modifier.is_null()\" is true.",0,0);
LAB_00101c38:
    Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_40);
  }
  else {
    pRVar2 = *(Ref **)(this + 0xdf0);
    if (pRVar2 == (Ref *)0x0) {
      pRVar2 = *(Ref **)(this + 0xde8);
      if (pRVar2 == (Ref *)0x0) {
        _err_print_error("_do_remove_binding_modifier_editor",
                         "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0xb6,
                         "Method/function failed.","No binding nor interaction profile specified.",0
                         ,0);
        goto LAB_00101c38;
      }
      local_38 = (Object *)0x0;
      pOVar4 = (Object *)
               __dynamic_cast(pOVar1,&Object::typeinfo,&OpenXRIPBindingModifier::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) &&
         (local_38 = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_38 = (Object *)0x0;
      }
      OpenXRInteractionProfile::remove_binding_modifier(pRVar2);
      if (local_38 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar4 = local_38;
        goto joined_r0x00101db2;
      }
    }
    else {
      local_38 = (Object *)0x0;
      pOVar4 = (Object *)
               __dynamic_cast(pOVar1,&Object::typeinfo,&OpenXRActionBindingModifier::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) &&
         (local_38 = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_38 = (Object *)0x0;
      }
      OpenXRIPBinding::remove_binding_modifier(pRVar2);
      if (local_38 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar4 = local_38;
joined_r0x00101db2:
        local_38 = pOVar4;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    Node::remove_child(*(Node **)(this + 0xdb8));
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00101e36;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101e36:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_on_dialog_created() */

void __thiscall OpenXRBindingModifiersDialog::_on_dialog_created(OpenXRBindingModifiersDialog *this)

{
  Ref *pRVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  Object *local_b0;
  Variant *local_a8 [2];
  int local_98;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CreateDialog::instantiate_selected();
  if (local_98 == 0x18) {
    local_c8 = 0;
    lVar5 = Variant::get_validated_object();
    if ((lVar5 == 0) ||
       (lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0),
       lVar5 == 0)) {
LAB_00101ef0:
      _err_print_error("_on_dialog_created",
                       "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x81,
                       "Condition \"new_binding_modifier.is_null()\" is true.",0,0);
    }
    else {
      local_b0 = (Object *)0x0;
      local_c8 = lVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_c8 = 0;
        Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_b0);
        goto LAB_00101ef0;
      }
      Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_b0);
      pRVar1 = *(Ref **)(this + 0xdf0);
      if (pRVar1 == (Ref *)0x0) {
        pRVar1 = *(Ref **)(this + 0xde8);
        if (pRVar1 != (Ref *)0x0) {
          local_b0 = (Object *)0x0;
          pOVar6 = (Object *)
                   __dynamic_cast(lVar5,&Object::typeinfo,&OpenXRIPBindingModifier::typeinfo,0);
          if ((pOVar6 != (Object *)0x0) &&
             (local_b0 = pOVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            local_b0 = (Object *)0x0;
          }
          OpenXRInteractionProfile::add_binding_modifier(pRVar1);
          if (((local_b0 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar6 = local_b0, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_b0), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
          Object::set_edited(SUB81(*(undefined8 *)(this + 0xde8),0));
          goto LAB_00101fcf;
        }
        _err_print_error("_on_dialog_created",
                         "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x8c,
                         "Method/function failed.","No binding nor interaction profile specified.",0
                         ,0);
      }
      else {
        local_b0 = (Object *)0x0;
        pOVar6 = (Object *)
                 __dynamic_cast(lVar5,&Object::typeinfo,&OpenXRActionBindingModifier::typeinfo,0);
        if ((pOVar6 != (Object *)0x0) &&
           (local_b0 = pOVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_b0 = (Object *)0x0;
        }
        OpenXRIPBinding::add_binding_modifier(pRVar1);
        if (((local_b0 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar6 = local_b0, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_b0), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        Object::set_edited(SUB81(*(undefined8 *)(this + 0xdf0),0));
LAB_00101fcf:
        local_b0 = (Object *)lVar5;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_b0 = (Object *)0x0;
        }
        pOVar6 = (Object *)
                 _add_binding_modifier_editor(this,(Ref<OpenXRBindingModifier> *)&local_b0);
        Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_b0);
        if (pOVar6 != (Object *)0x0) {
          uVar2 = *(undefined8 *)(this + 0xdd8);
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"Add binding modifier");
          TTR((String *)&local_b0,(String *)&local_c0);
          EditorUndoRedoManager::create_action(uVar2,(Ref<OpenXRBindingModifier> *)&local_b0,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          pOVar3 = *(Object **)(this + 0xdd8);
          StringName::StringName((StringName *)&local_b0,"_do_add_binding_modifier_editor",false);
          Variant::Variant((Variant *)local_78,pOVar6);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_a8[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_a8);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          pOVar3 = *(Object **)(this + 0xdd8);
          StringName::StringName((StringName *)&local_b0,"_do_remove_binding_modifier_editor",false)
          ;
          Variant::Variant((Variant *)local_78,pOVar6);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_a8[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_a8);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xdd8),0));
          Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_c8);
          cVar4 = Variant::needs_deinit[local_98];
          goto joined_r0x001021e4;
        }
        _err_print_error("_on_dialog_created",
                         "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x91,
                         "Parameter \"binding_modifier_editor\" is null.",0,0);
      }
    }
    Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_c8);
  }
  else {
    _err_print_error("_on_dialog_created",
                     "modules/openxr/editor/openxr_binding_modifiers_dialog.cpp",0x7e,
                     "Condition \"obj.get_type() != Variant::OBJECT\" is true.",0,0);
  }
  cVar4 = Variant::needs_deinit[local_98];
joined_r0x001021e4:
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRBindingModifiersDialog::_bind_methods() */

void OpenXRBindingModifiersDialog::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "binding_modifier_editor";
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"_do_add_binding_modifier_editor",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRBindingModifiersDialog,OpenXRBindingModifierEditor*>
                     (_do_add_binding_modifier_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "binding_modifier_editor";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"_do_remove_binding_modifier_editor",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRBindingModifiersDialog,OpenXRBindingModifierEditor*>
                     (_do_remove_binding_modifier_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* OpenXRBindingModifiersDialog::is_class_ptr(void*) const */

uint OpenXRBindingModifiersDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1099,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1096,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1099,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRBindingModifiersDialog::_property_can_revertv(StringName const&) const */

undefined8 OpenXRBindingModifiersDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRBindingModifiersDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifiersDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this)

{
  return;
}



/* MethodBindT<OpenXRBindingModifierEditor*>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<OpenXRBindingModifierEditor*>::_gen_argument_type
          (MethodBindT<OpenXRBindingModifierEditor*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<OpenXRBindingModifierEditor*>::get_argument_meta(int) const */

undefined8 MethodBindT<OpenXRBindingModifierEditor*>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::get_argument_count
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void,
   Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT
          (MethodBindT<OpenXRBindingModifierEditor*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT
          (MethodBindT<OpenXRBindingModifierEditor*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095a8;
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



/* OpenXRBindingModifiersDialog::_getv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifiersDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRBindingModifiersDialog::_setv(StringName const&, Variant const&) */

undefined8 OpenXRBindingModifiersDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010d008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0010d010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010d018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::get_object
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this)

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
      goto LAB_00102b5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102b5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102b5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::get_object
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this)

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
      goto LAB_00102c5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102c5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102c5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* OpenXRBindingModifiersDialog::_validate_propertyv(PropertyInfo&) const */

void OpenXRBindingModifiersDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010d020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010d028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010d030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00102ea8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010d038 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1099,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1099,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1099,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1099,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1099,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010d040 != Container::_notification) {
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
  if ((code *)PTR__notification_0010d040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog() */

void __thiscall
OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog(OpenXRBindingModifiersDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00109210;
  if (*(long *)(this + 0xdf0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdf0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xde8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xde0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        AcceptDialog::~AcceptDialog((AcceptDialog *)this);
        return;
      }
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog() */

void __thiscall
OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog(OpenXRBindingModifiersDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00109210;
  if (*(long *)(this + 0xdf0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdf0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xde8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xde0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdf8);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001032e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001032e0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103340;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103340:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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



/* OpenXRBindingModifiersDialog::_get_class_namev() const */

undefined8 * OpenXRBindingModifiersDialog::_get_class_namev(void)

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
LAB_00103423:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103423;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "OpenXRBindingModifiersDialog");
      goto LAB_0010348e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRBindingModifiersDialog");
LAB_0010348e:
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
LAB_00103513:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103513;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010357e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010357e:
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



/* Callable
   create_custom_callable_function_pointer<OpenXRBindingModifiersDialog>(OpenXRBindingModifiersDialog*,
   char const*, void (OpenXRBindingModifiersDialog::*)()) */

OpenXRBindingModifiersDialog *
create_custom_callable_function_pointer<OpenXRBindingModifiersDialog>
          (OpenXRBindingModifiersDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00109518;
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
              if ((code *)PTR__bind_methods_0010d058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010d048 !=
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
      if ((code *)PTR__bind_methods_0010d050 != Container::_bind_methods) {
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



/* WARNING: Removing unreachable block (ram,0x001042c0) */
/* OpenXRBindingModifiersDialog::_notificationv(int, bool) */

void __thiscall
OpenXRBindingModifiersDialog::_notificationv
          (OpenXRBindingModifiersDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(iVar1);
    if ((code *)PTR__notification_0010d060 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_0010d060 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  _notification(iVar1);
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



/* OpenXRBindingModifiersDialog::get_class() const */

void OpenXRBindingModifiersDialog::get_class(void)

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



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::call
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this,Variant **param_1,
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
      goto LAB_001046ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001046ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001046c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001047a0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001046ef:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001047a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void, Object*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::call
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00104999;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00104999;
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
LAB_001048f0:
          uVar3 = _LC49;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_001048f0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00104a4a;
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
LAB_00104999:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00104a4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRBindingModifierEditor*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<OpenXRBindingModifierEditor*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
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
    String::parse_latin1((String *)&local_78,"OpenXRBindingModifierEditor");
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = 0x18;
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar2 = local_68;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
        if (pvVar3 == (void *)0x0) goto LAB_00104d1f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104d1f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00104e53;
  }
  cVar4 = String::operator==(param_1,"Node");
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
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00104e53;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00104e53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00105033;
  }
  cVar4 = String::operator==(param_1,"Control");
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
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00105033;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010513e;
    }
  }
LAB_00105033:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010513e:
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
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00105223;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
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
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00105223;
    }
    cVar4 = String::operator==(param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_0010532e;
    }
  }
LAB_00105223:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010532e:
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
    if (cVar4 != '\0') goto LAB_0010543b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010543b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00105583;
  }
  cVar3 = String::operator==(param_1,"AcceptDialog");
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
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_00105583;
    }
    cVar3 = String::operator==(param_1,"Window");
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
        cVar3 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 != '\0') goto LAB_00105583;
      }
      cVar3 = String::operator==(param_1,"Viewport");
      if (cVar3 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = Node::is_class((Node *)this,param_1);
          return uVar4;
        }
        goto LAB_0010570e;
      }
    }
  }
LAB_00105583:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010570e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::is_class(String const&) const */

undefined8 __thiscall
OpenXRBindingModifiersDialog::is_class(OpenXRBindingModifiersDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010581b;
  }
  cVar4 = String::operator==(param_1,"OpenXRBindingModifiersDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010581b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = &_LC7;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC7;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Viewport",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010d068 != Object::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if ((code *)PTR__get_property_list_0010d070 != CanvasItem::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010d078 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifiersDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OpenXRBindingModifiersDialog::_get_property_listv
          (OpenXRBindingModifiersDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRBindingModifiersDialog";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRBindingModifiersDialog";
  local_98 = 0;
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"OpenXRBindingModifiersDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<OpenXRBindingModifier>::unref() */

void __thiscall Ref<OpenXRBindingModifier>::unref(Ref<OpenXRBindingModifier> *this)

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



/* MethodBind* create_method_bind<OpenXRBindingModifiersDialog, OpenXRBindingModifierEditor*>(void
   (OpenXRBindingModifiersDialog::*)(OpenXRBindingModifierEditor*)) */

MethodBind *
create_method_bind<OpenXRBindingModifiersDialog,OpenXRBindingModifierEditor*>
          (_func_void_OpenXRBindingModifierEditor_ptr *param_1)

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
  *(_func_void_OpenXRBindingModifierEditor_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001095a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRBindingModifiersDialog";
  local_30 = 0x1c;
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



/* OpenXRBindingModifiersDialog::_bind_methods() [clone .cold] */

void OpenXRBindingModifiersDialog::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRBindingModifiersDialog::_initialize_classv() */

void OpenXRBindingModifiersDialog::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0010d058 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Node");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Viewport");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Window");
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Window");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AcceptDialog");
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
      if ((code *)PTR__bind_methods_0010d080 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010d088 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"AcceptDialog");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRBindingModifiersDialog");
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



/* WARNING: Removing unreachable block (ram,0x00107a08) */
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



/* MethodBindT<OpenXRBindingModifierEditor*>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<OpenXRBindingModifierEditor*>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00107e30;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00107ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_00107e30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRBindingModifierEditor*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<OpenXRBindingModifierEditor*>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108008;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00107ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_00108008:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRBindingModifierEditor*>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<OpenXRBindingModifierEditor*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == *plVar7) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_50 = 0;
      String::parse_latin1
                ((String *)&local_50,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_48,(String *)&local_50,&local_58);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001081f0;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_001081e5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_001081f0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00108240;
LAB_00108230:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_00108240:
      uVar5 = 4;
      goto LAB_001081e5;
    }
    if (in_R8D == 1) goto LAB_00108230;
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
LAB_00108196:
    uVar3 = _LC49;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&OpenXRBindingModifierEditor::typeinfo,0),
        lVar9 == 0)) && (pOVar6 != (Object *)0x0)) goto LAB_00108196;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)
             __dynamic_cast(pOVar6,&Object::typeinfo,&OpenXRBindingModifierEditor::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_001081f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
                if (pvVar5 == (void *)0x0) goto LAB_00108729;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00108729:
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



/* OpenXRBindingModifiersDialog::_bind_methods() */

void OpenXRBindingModifiersDialog::_GLOBAL__sub_I__bind_methods(void)

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
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle,
               uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog() */

void __thiscall
OpenXRBindingModifiersDialog::~OpenXRBindingModifiersDialog(OpenXRBindingModifiersDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRBindingModifierEditor*>::~MethodBindT
          (MethodBindT<OpenXRBindingModifierEditor*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRBindingModifiersDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifiersDialog,void> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


