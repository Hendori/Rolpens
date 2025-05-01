
/* EditorPropertyBindingPath::_set_read_only(bool) */

void EditorPropertyBindingPath::_set_read_only(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_disabled(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xb58),0))
  ;
  return;
}



/* OpenXRBindingModifierEditor::_on_remove_binding_modifier() */

void __thiscall
OpenXRBindingModifierEditor::_on_remove_binding_modifier(OpenXRBindingModifierEditor *this)

{
  long in_FS_OFFSET;
  long local_70;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_70,"binding_modifier_removed",false);
  Variant::Variant((Variant *)local_58,(Object *)this);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_70,local_68,1);
  if (Variant::needs_deinit[(int)local_40] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginBindingModifier::can_handle(Object*) */

undefined4 __thiscall
EditorInspectorPluginBindingModifier::can_handle
          (EditorInspectorPluginBindingModifier *this,Object *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((param_1 == (Object *)0x0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(param_1,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::init_ref(), (char)uVar2 == '\0')) {
    return 0;
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



/* EditorPropertyActionSet::update_property() */

void __thiscall EditorPropertyActionSet::update_property(EditorPropertyActionSet *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long lVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_78[0] = 0;
    local_70 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_78,*(bool **)(this + 0xa10));
    if (local_78[0] != 0) {
      pOVar3 = (Object *)Variant::get_validated_object();
      if (((pOVar3 != (Object *)0x0) &&
          (pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&OpenXRActionSet::typeinfo,0),
          pOVar3 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
        pOVar3 = (Object *)0x0;
      }
      for (iVar6 = 0; iVar2 = OptionButton::get_item_count(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
        OptionButton::get_item_metadata((int)local_58);
        lVar4 = Variant::get_validated_object();
        if (((lVar4 == 0) ||
            (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&OpenXRActionSet::typeinfo,0)
            , pOVar5 == (Object *)0x0)) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          pOVar5 = (Object *)0x0;
          cVar1 = Variant::needs_deinit[local_58[0]];
        }
        else {
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          cVar1 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar1 != '\0') {
          Variant::_clear_internal();
        }
        if (pOVar3 == pOVar5) {
          OptionButton::select((int)*(undefined8 *)(this + 0xb58));
          if (((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
             (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          goto LAB_001003ce;
        }
      }
      OptionButton::select((int)*(undefined8 *)(this + 0xb58));
      if (((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      cVar1 = Variant::needs_deinit[local_78[0]];
      goto joined_r0x0010045a;
    }
  }
  OptionButton::select((int)*(undefined8 *)(this + 0xb58));
LAB_001003ce:
  cVar1 = Variant::needs_deinit[local_78[0]];
joined_r0x0010045a:
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyActionSet::_option_selected(int) */

void EditorPropertyActionSet::_option_selected(int param_1)

{
  char cVar1;
  Object *pOVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_item_metadata((int)(Variant *)local_58);
  pOVar2 = (Object *)Variant::get_validated_object();
  if (pOVar2 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_60 = 0;
  Variant::Variant((Variant *)local_58,pOVar2);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)CONCAT44(in_register_0000003c,param_1),(Variant *)&local_68,
             (StringName *)local_58,SUB81(&local_60,0));
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (pOVar2 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar2,false);
          return;
        }
        goto LAB_0010063d;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010063d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyActionSet::set_option_button_clip(bool) */

void EditorPropertyActionSet::set_option_button_clip(bool param_1)

{
  undefined7 in_register_00000039;
  
  Button::set_clip_text(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xb58),0));
  return;
}



/* EditorPropertyBindingPath::set_option_button_clip(bool) */

void EditorPropertyBindingPath::set_option_button_clip(bool param_1)

{
  undefined7 in_register_00000039;
  
  Button::set_clip_text(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xb58),0));
  return;
}



/* OpenXRBindingModifierEditor::_notification(int) */

void __thiscall
OpenXRBindingModifierEditor::_notification(OpenXRBindingModifierEditor *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 10) || (param_1 == 0x2d)) {
    pRVar1 = *(Ref **)(this + 0xa18);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
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



/* EditorPropertyBindingPath::_option_selected(int) */

void EditorPropertyBindingPath::_option_selected(int param_1)

{
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Variant local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_item_metadata((int)(Variant *)local_58);
  Variant::operator_cast_to_String(local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_60 = 0;
  Variant::Variant((Variant *)local_58,(String *)local_70);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)CONCAT44(in_register_0000003c,param_1),(Variant *)&local_68,
             (StringName *)local_58,SUB81(&local_60,0));
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyBindingPath::update_property() */

void __thiscall EditorPropertyBindingPath::update_property(EditorPropertyBindingPath *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant local_88 [8];
  Variant local_80 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_78[0] = 0;
    local_70 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_78,*(bool **)(this + 0xa10));
    if (local_78[0] != 0) {
      Variant::operator_cast_to_String(local_88);
      for (iVar3 = 0; iVar2 = OptionButton::get_item_count(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        OptionButton::get_item_metadata((int)local_58);
        Variant::operator_cast_to_String(local_80);
        cVar1 = String::operator==((String *)local_88,(String *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar1 != '\0') {
          OptionButton::select((int)*(undefined8 *)(this + 0xb58));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          goto LAB_00100a4e;
        }
      }
      OptionButton::select((int)*(undefined8 *)(this + 0xb58));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      cVar1 = Variant::needs_deinit[local_78[0]];
      goto joined_r0x00100aa4;
    }
  }
  OptionButton::select((int)*(undefined8 *)(this + 0xb58));
LAB_00100a4e:
  cVar1 = Variant::needs_deinit[local_78[0]];
joined_r0x00100aa4:
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::initialize_class() [clone .part.0] */

void Container::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if ((code *)PTR__bind_methods_00113010 != Node::_bind_methods) {
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
  local_58 = "Control";
  local_68 = 0;
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
  if ((code *)PTR__bind_methods_00113008 != Control::_bind_methods) {
    Container::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyActionSet::EditorPropertyActionSet() */

void __thiscall EditorPropertyActionSet::EditorPropertyActionSet(EditorPropertyActionSet *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  OptionButton *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010df00;
  this_00 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_00,(String *)local_58);
  postinitialize_handler((Object *)this_00);
  *(OptionButton **)(this + 0xb58) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb58),0));
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xb58),0));
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xb58),2);
  Node::add_child(this,*(undefined8 *)(this + 0xb58),0,0);
  EditorProperty::add_focusable((Control *)this);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC28;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0010ebb0;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _option_selected;
  *(EditorPropertyActionSet **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorPropertyActionSet::_option_selected";
  Callable::Callable((Callable *)local_58,this_01);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyBindingPath::EditorPropertyBindingPath() */

void __thiscall
EditorPropertyBindingPath::EditorPropertyBindingPath(EditorPropertyBindingPath *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  OptionButton *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010e2d0;
  this_00 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_00,(String *)local_58);
  postinitialize_handler((Object *)this_00);
  *(OptionButton **)(this + 0xb58) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb58),0));
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xb58),0));
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xb58),2);
  Node::add_child(this,*(undefined8 *)(this + 0xb58),0,0);
  EditorProperty::add_focusable((Control *)this);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC28;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0010ec40;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _option_selected;
  *(EditorPropertyBindingPath **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorPropertyBindingPath::_option_selected";
  Callable::Callable((Callable *)local_58,this_01);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifierEditor::OpenXRBindingModifierEditor() */

void __thiscall
OpenXRBindingModifierEditor::OpenXRBindingModifierEditor(OpenXRBindingModifierEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  BoxContainer *pBVar5;
  Label *this_00;
  Button *this_01;
  CallableCustom *this_02;
  EditorInspector *this_03;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PanelContainer::PanelContainer((PanelContainer *)this);
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010e830;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  uVar4 = EditorUndoRedoManager::get_singleton();
  *(undefined8 *)(this + 0xa30) = uVar4;
  Control::set_h_size_flags(this,3);
  pBVar5 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar5,true);
  pBVar5[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar5 = &PTR__initialize_classv_0010db88;
  postinitialize_handler((Object *)pBVar5);
  *(BoxContainer **)(this + 0xa28) = pBVar5;
  Control::set_h_size_flags(pBVar5,3);
  Node::add_child(this,*(undefined8 *)(this + 0xa28),0,0);
  pBVar5 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar5,false);
  pBVar5[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar5 = &PTR__initialize_classv_0010d810;
  postinitialize_handler((Object *)pBVar5);
  *(BoxContainer **)(this + 0xa08) = pBVar5;
  Control::set_h_size_flags(pBVar5,3);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa08),0,0);
  this_00 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(Label **)(this + 0xa10) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa10),3);
  Node::add_child(*(undefined8 *)(this + 0xa08),*(undefined8 *)(this + 0xa10),0,0);
  this_01 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xa18) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar1 = *(String **)(this + 0xa18);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_58 = "Remove binding modifier.";
  local_68 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC28;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_0010ecd0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar4;
  *(code **)(this_02 + 0x38) = _on_remove_binding_modifier;
  *(OpenXRBindingModifierEditor **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "OpenXRBindingModifierEditor::_on_remove_binding_modifier";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa18),0));
  Node::add_child(*(undefined8 *)(this + 0xa08),*(undefined8 *)(this + 0xa18),0,0);
  this_03 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_03);
  postinitialize_handler((Object *)this_03);
  *(EditorInspector **)(this + 0xa20) = this_03;
  ScrollContainer::set_horizontal_scroll_mode(this_03,0);
  ScrollContainer::set_vertical_scroll_mode(*(undefined8 *)(this + 0xa20),0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa20),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyActionSet::setup(Ref<OpenXRActionMap> const&) */

void EditorPropertyActionSet::setup(Ref *param_1)

{
  String *pSVar1;
  undefined8 uVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Array local_88 [8];
  CowData<char32_t> local_80 [8];
  Variant *local_78;
  Variant *local_70;
  Variant *local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::clear();
  OpenXRActionMap::get_action_sets();
  Array::begin();
  Array::end();
  if (local_78 != local_68) {
    do {
      if (local_70 != (Variant *)0x0) {
        Variant::operator=(local_70,local_78);
      }
      pOVar4 = (Object *)Variant::get_validated_object();
      if (pOVar4 != (Object *)0x0) {
        pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            pOVar4 = (Object *)0x0;
          }
        }
      }
      pSVar1 = *(String **)(param_1 + 0xb58);
      OpenXRActionSet::get_localized_name();
      OptionButton::add_item(pSVar1,(int)local_80);
      CowData<char32_t>::_unref(local_80);
      uVar2 = *(undefined8 *)(param_1 + 0xb58);
      Variant::Variant((Variant *)local_58,pOVar4);
      OptionButton::set_item_metadata((int)uVar2,(Variant *)0xffffffff);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar4);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      local_78 = local_78 + 0x18;
    } while (local_78 != local_68);
  }
  Array::~Array(local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifierEditor::setup(Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier>) */

void __thiscall
OpenXRBindingModifierEditor::setup(OpenXRBindingModifierEditor *this,long *param_2,long *param_3)

{
  Object *pOVar1;
  String *pSVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa10) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x115;
      pcVar4 = "Parameter \"binding_modifier_title\" is null.";
LAB_001019fa:
      _err_print_error("setup","modules/openxr/editor/openxr_binding_modifier_editor.cpp",uVar5,
                       pcVar4,0,0);
      return;
    }
  }
  else if (*(long *)(this + 0xa20) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x116;
      pcVar4 = "Parameter \"editor_inspector\" is null.";
      goto LAB_001019fa;
    }
  }
  else {
    pOVar1 = (Object *)*param_2;
    pOVar6 = *(Object **)(this + 0xa40);
    if (pOVar1 != pOVar6) {
      *(Object **)(this + 0xa40) = pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(this + 0xa40) = 0;
        }
      }
      if (pOVar6 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar6);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
    }
    pOVar1 = (Object *)*param_3;
    pOVar6 = *(Object **)(this + 0xa38);
    if (pOVar1 != pOVar6) {
      *(Object **)(this + 0xa38) = pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(this + 0xa38) = 0;
        }
      }
      if (pOVar6 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar6);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      pOVar6 = (Object *)*param_3;
    }
    if (pOVar6 == (Object *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      pSVar2 = *(String **)(this + 0xa10);
      (**(code **)(*(long *)pOVar6 + 0x1c8))(aCStack_38,pOVar6);
      Label::set_text(pSVar2);
      CowData<char32_t>::_unref(aCStack_38);
      pSVar2 = *(String **)(this + 0xa20);
      (**(code **)(*(long *)*param_3 + 0x48))(aCStack_38);
      EditorInspector::set_object_class(pSVar2);
      CowData<char32_t>::_unref(aCStack_38);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorInspector::edit(*(Object **)(this + 0xa20));
        return;
      }
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



/* OpenXRBindingModifierEditor::_bind_methods() */

void OpenXRBindingModifierEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  MethodBind *pMVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  PropertyInfo local_118 [48];
  long local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  long local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_e8,(char ***)"get_binding_modifier",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<OpenXRBindingModifierEditor,Ref<OpenXRBindingModifier>>
                     (get_binding_modifier);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_d8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_d8._8_8_;
      local_d8 = auVar3 << 0x40;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  auStack_50._0_8_ = &pcStack_70;
  local_78 = "action_map";
  pcStack_70 = "binding_modifier";
  local_68 = 0;
  local_58 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"setup",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<OpenXRBindingModifierEditor,Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>
                     ((_func_void_Ref_Ref *)0x369);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_d8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_d8._8_8_;
      local_d8 = auVar4 << 0x40;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  local_130 = 0;
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"");
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"binding_modifier_editor");
  PropertyInfo::PropertyInfo
            (local_118,0x18,(String *)&local_140,0,(String *)&local_138,6,&local_130);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"binding_modifier_removed");
  local_d8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_128);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_a8,local_118);
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"OpenXRBindingModifierEditor");
  StringName::StringName((StringName *)&local_120,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_120,(MethodInfo *)&local_e8);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar7 = (long *)(local_80 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_98);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  PropertyInfo::~PropertyInfo(local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* EditorPropertyBindingPath::setup(String const&, Vector<OpenXRAction::ActionType>) */

void __thiscall
EditorPropertyBindingPath::setup(EditorPropertyBindingPath *this,CowData *param_1,long param_3)

{
  String *pSVar1;
  undefined8 uVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CowData *pCVar9;
  String *pSVar10;
  String *pSVar11;
  CowData *pCVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  String local_80 [16];
  CowData *local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::clear();
  uVar2 = OpenXRInteractionProfileMetadata::singleton;
  local_68 = (undefined *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_1);
  }
  lVar6 = OpenXRInteractionProfileMetadata::get_profile(uVar2,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pSVar1 = *(String **)(lVar6 + 0x20);
  local_70 = (CowData *)0x0;
  if ((pSVar1 != (String *)0x0) &&
     (lVar14 = *(long *)(pSVar1 + -8), pSVar1 + lVar14 * 0x28 != pSVar1)) {
    pSVar10 = pSVar1 + 8;
LAB_00102304:
    local_68 = (undefined *)0x0;
    if (*(long *)pSVar10 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar10);
    }
    iVar5 = CowData<String>::resize<false>((CowData<String> *)&local_70,1);
    if (iVar5 == 0) goto LAB_0010238e;
    do {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
LAB_001023d0:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pSVar11 = pSVar10 + 0x20;
      pSVar3 = pSVar10;
      pCVar9 = local_70;
      while( true ) {
        local_70 = pCVar9;
        if (pSVar1 + lVar14 * 0x28 == pSVar11) goto LAB_001023e9;
        pSVar10 = pSVar3 + 0x28;
        if (pCVar9 == (CowData *)0x0) goto LAB_00102304;
        lVar8 = *(long *)(pCVar9 + -8);
        if (lVar8 == 0) {
          lVar8 = 0;
          lVar13 = *(long *)pSVar10;
          goto joined_r0x001026a9;
        }
        lVar13 = 0;
        if (lVar8 < 1) break;
        while (cVar4 = String::operator==((String *)(pCVar9 + lVar13 * 8),pSVar10), cVar4 == '\0') {
          lVar13 = lVar13 + 1;
          if (*(long *)(pCVar9 + -8) <= lVar13) {
            local_68 = (undefined *)0x0;
            if (*(long *)pSVar10 == 0) goto LAB_0010237a;
            goto LAB_0010236f;
          }
        }
        pSVar11 = pSVar3 + 0x48;
        pSVar3 = pSVar10;
        pCVar9 = local_70;
      }
      lVar13 = *(long *)pSVar10;
joined_r0x001026a9:
      local_68 = (undefined *)0x0;
      if (lVar13 != 0) {
LAB_0010236f:
        local_68 = (undefined *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pSVar10);
LAB_0010237a:
        lVar8 = *(long *)(pCVar9 + -8);
      }
      iVar5 = CowData<String>::resize<false>((CowData<String> *)&local_70,lVar8 + 1);
    } while (iVar5 != 0);
LAB_0010238e:
    if (local_70 == (CowData *)0x0) {
      lVar13 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(local_70 + -8);
      lVar13 = lVar8 + -1;
      if (-1 < lVar13) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_70);
        if (*(undefined **)(local_70 + lVar13 * 8) != local_68) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_70 + lVar13 * 8),(CowData *)&local_68)
          ;
        }
        goto LAB_001023d0;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar8,"p_index","size()","",false,
               false);
    goto LAB_001023d0;
  }
LAB_001023e9:
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  pCVar12 = local_70;
  CowData<String>::_copy_on_write((CowData<String> *)&local_70);
  pCVar9 = local_70;
  if (local_70 != (CowData *)0x0) {
    pCVar9 = local_70 + *(long *)(local_70 + -8) * 8;
  }
  uVar2 = OpenXRInteractionProfileMetadata::singleton;
  do {
    OpenXRInteractionProfileMetadata::singleton = uVar2;
    if (pCVar9 == pCVar12) {
      CowData<String>::_unref((CowData<String> *)&local_70);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_68 = (undefined *)0x0;
    if (*(long *)pCVar12 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar12);
    }
    OpenXRInteractionProfileMetadata::get_top_level_name
              (local_90,uVar2,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    lVar14 = *(long *)(lVar6 + 0x20);
    if ((lVar14 != 0) && (lVar8 = lVar14 + *(long *)(lVar14 + -8) * 0x28, lVar8 != lVar14)) {
      do {
        cVar4 = String::operator==((String *)(lVar14 + 8),(String *)pCVar12);
        if (cVar4 != '\0') {
          lVar13 = *(long *)(param_3 + 8);
          if ((lVar13 != 0) && (0 < *(long *)(lVar13 + -8))) {
            lVar7 = 0;
            do {
              if (*(int *)(lVar14 + 0x20) == *(int *)(lVar13 + lVar7 * 4)) {
                local_68 = &_LC65;
                local_88 = 0;
                pSVar1 = *(String **)(this + 0xb58);
                local_60 = 1;
                String::parse_latin1((StrRange *)&local_88);
                String::operator+(local_80,(String *)local_90);
                String::operator+((String *)&local_68,local_80);
                OptionButton::add_item(pSVar1,(int)(CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                uVar2 = *(undefined8 *)(this + 0xb58);
                Variant::Variant((Variant *)local_58,(String *)(lVar14 + 0x10));
                OptionButton::set_item_metadata((int)uVar2,(Variant *)0xffffffff);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                break;
              }
              lVar7 = lVar7 + 1;
            } while (*(long *)(lVar13 + -8) != lVar7);
          }
        }
        lVar14 = lVar14 + 0x28;
      } while (lVar8 != lVar14);
    }
    pCVar12 = pCVar12 + 8;
    CowData<char32_t>::_unref(local_90);
    uVar2 = OpenXRInteractionProfileMetadata::singleton;
  } while( true );
}



/* CowData<OpenXRAction::ActionType>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<OpenXRAction::ActionType>::_copy_on_write(CowData<OpenXRAction::ActionType> *this)

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



/* EditorInspectorPluginBindingModifier::parse_property(Object*, Variant::Type, String const&,
   PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined4
EditorInspectorPluginBindingModifier::parse_property
          (String *param_1,long param_2,int param_3,Control *param_4,int param_5,String *param_6)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Object *pOVar5;
  EditorPropertyBindingPath *this;
  long lVar6;
  long lVar7;
  EditorPropertyActionSet *pEVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [16];
  long local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_00102a28:
    uVar3 = 0;
    goto LAB_001028e0;
  }
  pOVar5 = (Object *)
           __dynamic_cast(param_2,&Object::typeinfo,&OpenXRActionBindingModifier::typeinfo);
  if ((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    pOVar5 = (Object *)__dynamic_cast(param_2,&Object::typeinfo,&OpenXRIPBindingModifier::typeinfo);
    if ((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::init_ref(), cVar2 == '\0'))
    goto LAB_00102a28;
    if (param_3 == 0x18 && param_5 == 0x11) {
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"OpenXRActionSet");
      uVar3 = String::operator==(param_6,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((char)uVar3 != '\0') {
        if (*(long *)(pOVar5 + 0x270) == 0) {
          _err_print_error("parse_property",
                           "modules/openxr/editor/openxr_binding_modifier_editor.cpp",0xbf,
                           "Parameter \"interaction_profile\" is null.",0,0);
        }
        else {
          lVar6 = *(long *)(*(long *)(pOVar5 + 0x270) + 0x260);
          if (lVar6 != 0) {
            pEVar8 = (EditorPropertyActionSet *)operator_new(0xb60,"");
            EditorPropertyActionSet::EditorPropertyActionSet(pEVar8);
            postinitialize_handler((Object *)pEVar8);
            local_58 = lVar6;
            cVar2 = RefCounted::init_ref();
            if (cVar2 == '\0') {
              local_58 = 0;
            }
            EditorPropertyActionSet::setup((Ref *)pEVar8);
            Ref<OpenXRActionMap>::unref((Ref<OpenXRActionMap> *)&local_58);
            local_58 = 0;
            EditorInspectorPlugin::add_property_editor
                      (param_1,param_4,SUB81(pEVar8,0),(String *)0x0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            goto LAB_001028a8;
          }
          _err_print_error("parse_property",
                           "modules/openxr/editor/openxr_binding_modifier_editor.cpp",0xc2,
                           "Parameter \"action_map\" is null.",0,0);
        }
      }
LAB_001028a1:
      uVar3 = 0;
    }
    else {
      if (((param_3 != 4) || (param_5 != 0x17)) ||
         (uVar3 = String::operator==(param_6,"binding_path"), (char)uVar3 == '\0'))
      goto LAB_001028a1;
      this = (EditorPropertyBindingPath *)operator_new(0xb60,"");
      EditorPropertyBindingPath::EditorPropertyBindingPath(this);
      postinitialize_handler((Object *)this);
      if (*(long *)(pOVar5 + 0x270) == 0) {
        uVar3 = 0;
        _err_print_error("parse_property","modules/openxr/editor/openxr_binding_modifier_editor.cpp"
                         ,0xce,"Parameter \"interaction_profile\" is null.",0,0);
      }
      else {
        local_60 = 0;
        iVar4 = CowData<OpenXRAction::ActionType>::resize<false>
                          ((CowData<OpenXRAction::ActionType> *)&local_60,1);
        lVar6 = local_60;
        if (iVar4 == 0) {
          if (local_60 == 0) {
            lVar9 = -1;
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(local_60 + -8);
            lVar9 = lVar7 + -1;
            if (-1 < lVar9) {
              CowData<OpenXRAction::ActionType>::_copy_on_write
                        ((CowData<OpenXRAction::ActionType> *)&local_60);
              *(undefined4 *)(local_60 + lVar9 * 4) = 2;
              lVar6 = local_60;
              goto LAB_00102afe;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar7,"p_index","size()","",false
                     ,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          lVar6 = local_60;
        }
LAB_00102afe:
        local_50[0] = 0;
        plVar1 = (long *)(lVar6 + -0x10);
        if (lVar6 != 0) {
          do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00102b33;
            LOCK();
            lVar7 = *plVar1;
            bVar10 = lVar6 == lVar7;
            if (bVar10) {
              *plVar1 = lVar6 + 1;
              lVar7 = lVar6;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar7 != -1) {
            local_50[0] = local_60;
          }
        }
LAB_00102b33:
        OpenXRInteractionProfile::get_interaction_profile_path();
        EditorPropertyBindingPath::setup(this,local_70,(CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref(local_70);
        CowData<OpenXRAction::ActionType>::_unref((CowData<OpenXRAction::ActionType> *)local_50);
        local_58 = 0;
        EditorInspectorPlugin::add_property_editor(param_1,param_4,SUB81(this,0),(String *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<OpenXRAction::ActionType>::_unref((CowData<OpenXRAction::ActionType> *)&local_60);
      }
    }
LAB_001028a8:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    goto LAB_001028e0;
  }
  if ((param_3 == 0x18) && (param_5 == 0x11)) {
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"OpenXRActionSet");
    uVar3 = String::operator==(param_6,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((char)uVar3 == '\0') goto LAB_00102914;
    if (*(long *)(pOVar5 + 0x270) == 0) {
      _err_print_error("parse_property","modules/openxr/editor/openxr_binding_modifier_editor.cpp",
                       0xad,"Parameter \"ip_binding\" is null.",0,0);
      goto LAB_00102914;
    }
    lVar6 = *(long *)(*(long *)(pOVar5 + 0x270) + 0x260);
    if (lVar6 == 0) {
      _err_print_error("parse_property","modules/openxr/editor/openxr_binding_modifier_editor.cpp",
                       0xb0,"Parameter \"action_map\" is null.",0,0);
      goto LAB_00102914;
    }
    pEVar8 = (EditorPropertyActionSet *)operator_new(0xb60,"");
    EditorPropertyActionSet::EditorPropertyActionSet(pEVar8);
    postinitialize_handler((Object *)pEVar8);
    local_58 = lVar6;
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
      local_58 = 0;
    }
    EditorPropertyActionSet::setup((Ref *)pEVar8);
    Ref<OpenXRActionMap>::unref((Ref<OpenXRActionMap> *)&local_58);
    local_58 = 0;
    EditorInspectorPlugin::add_property_editor(param_1,param_4,SUB81(pEVar8,0),(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else {
LAB_00102914:
    uVar3 = 0;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_001028e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
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
  return (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorProperty::is_colored(EditorProperty::ColorationMode) */

undefined8 EditorProperty::is_colored(void)

{
  return 0;
}



/* EditorInspectorPluginBindingModifier::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginBindingModifier::is_class_ptr
          (EditorInspectorPluginBindingModifier *this,void *param_1)

{
  return (uint)CONCAT71(0x10ee,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginBindingModifier::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginBindingModifier::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBindingModifier::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginBindingModifier::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBindingModifier::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginBindingModifier::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginBindingModifier::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginBindingModifier::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginBindingModifier::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginBindingModifier::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBindingModifier::_notificationv(int, bool) */

void EditorInspectorPluginBindingModifier::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this)

{
  return;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::_gen_argument_type
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x18;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::get_argument_meta(int) const */

undefined8
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<OpenXRBindingModifier>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<OpenXRBindingModifier>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::get_argument_count
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this)

{
  operator_delete(this,0x48);
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



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRBindingModifier>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ed60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRBindingModifier>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ed60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010edc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010edc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010d6b0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010d6b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyActionSet::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyActionSet::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyBindingPath::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyBindingPath::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRBindingModifierEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifierEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyActionSet::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyActionSet::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyBindingPath::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyBindingPath::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* OpenXRBindingModifierEditor::_property_can_revertv(StringName const&) const */

undefined8 OpenXRBindingModifierEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this)

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
      goto LAB_0010368d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010368d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010368d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this)

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
      goto LAB_0010378d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010378d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010378d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::get_object
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this)

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
      goto LAB_0010388d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010388d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010388d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* OpenXRBindingModifierEditor::is_class_ptr(void*) const */

uint OpenXRBindingModifierEditor::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyBindingPath::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyBindingPath::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* OpenXRBindingModifierEditor::_validate_propertyv(PropertyInfo&) const */

void OpenXRBindingModifierEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyActionSet::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyActionSet::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00113030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorPropertyBindingPath::is_class_ptr(void*) const */

uint EditorPropertyBindingPath::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
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
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyActionSet::is_class_ptr(void*) const */

uint EditorPropertyActionSet::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10ef,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ef,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyBindingPath::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyBindingPath::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyActionSet::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyActionSet::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* OpenXRBindingModifierEditor::_setv(StringName const&, Variant const&) */

undefined8 OpenXRBindingModifierEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104058) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001040c8) */
/* EditorPropertyBindingPath::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyBindingPath::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104138) */
/* EditorPropertyActionSet::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyActionSet::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001041a8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104218) */
/* OpenXRBindingModifierEditor::_getv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifierEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* OpenXRBindingModifierEditor::get_binding_modifier() const */

void OpenXRBindingModifierEditor::get_binding_modifier(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xa38) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xa38);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001042c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001042c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104320;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104320:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104380;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104380:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001043f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001043f0:
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



/* OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor() */

void __thiscall
OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor(OpenXRBindingModifierEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e830;
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  *(code **)this = EditorProperty::emit_changed;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104530;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104530:
  Control::~Control((Control *)this);
  return;
}



/* OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor() */

void __thiscall
OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor(OpenXRBindingModifierEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e830;
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  *(code **)this = EditorProperty::emit_changed;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104690;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104690:
  Control::~Control((Control *)this);
  operator_delete(this,0xa48);
  return;
}



/* EditorPropertyActionSet::_notificationv(int, bool) */

void __thiscall
EditorPropertyActionSet::_notificationv(EditorPropertyActionSet *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113048 != Container::_notification) {
      EditorProperty::_notification(iVar1);
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
  if ((code *)PTR__notification_00113048 == Container::_notification) {
    return;
  }
  EditorProperty::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113050 != Container::_notification) {
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
  if ((code *)PTR__notification_00113050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* EditorPropertyBindingPath::_notificationv(int, bool) */

void __thiscall
EditorPropertyBindingPath::_notificationv(EditorPropertyBindingPath *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113048 != Container::_notification) {
      EditorProperty::_notification(iVar1);
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
  if ((code *)PTR__notification_00113048 == Container::_notification) {
    return;
  }
  EditorProperty::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113050 != Container::_notification) {
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
  if ((code *)PTR__notification_00113050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* EditorPropertyBindingPath::_get_class_namev() const */

undefined8 * EditorPropertyBindingPath::_get_class_namev(void)

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
LAB_00104c13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyBindingPath");
      goto LAB_00104c7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyBindingPath");
LAB_00104c7e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyActionSet::_get_class_namev() const */

undefined8 * EditorPropertyActionSet::_get_class_namev(void)

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
LAB_00104d03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104d03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyActionSet");
      goto LAB_00104d6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyActionSet");
LAB_00104d6e:
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
LAB_00104df3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104df3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00104e5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00104e5e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginBindingModifier::_get_class_namev() const */

undefined8 * EditorInspectorPluginBindingModifier::_get_class_namev(void)

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
LAB_00104ef3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ef3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginBindingModifier");
      goto LAB_00104f5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginBindingModifier");
LAB_00104f5e:
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRBindingModifierEditor::_get_class_namev() const */

undefined8 * OpenXRBindingModifierEditor::_get_class_namev(void)

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
LAB_00104fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRBindingModifierEditor"
                );
      goto LAB_0010504e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRBindingModifierEditor");
LAB_0010504e:
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
LAB_001050c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001050c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010512e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010512e:
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
LAB_001051b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001051b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010521e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010521e:
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



/* WARNING: Removing unreachable block (ram,0x00105360) */
/* OpenXRBindingModifierEditor::_notificationv(int, bool) */

void __thiscall
OpenXRBindingModifierEditor::_notificationv
          (OpenXRBindingModifierEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00113058 != Container::_notification) {
      PanelContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00113058 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  PropertyInfo *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (PropertyInfo *)*plVar3;
    if (this_00 == (PropertyInfo *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x40) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x30);
      lVar1 = *(long *)(this_00 + 0x38);
      *plVar3 = lVar2;
      if (this_00 == (PropertyInfo *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = lVar2;
        lVar2 = *(long *)(this_00 + 0x30);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x38) = lVar1;
      }
      PropertyInfo::~PropertyInfo(this_00);
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
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
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113060 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "BoxContainer";
    local_58 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "HBoxContainer";
    local_60 = 0;
    local_40 = 0xd;
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



/* EditorPropertyBindingPath::_initialize_classv() */

void EditorPropertyBindingPath::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorProperty::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorProperty");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113068 != Container::_bind_methods) {
        EditorProperty::_bind_methods();
      }
      EditorProperty::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorProperty";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyBindingPath";
    local_60 = 0;
    local_40 = 0x19;
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



/* EditorInspectorPluginBindingModifier::_initialize_classv() */

void EditorInspectorPluginBindingModifier::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
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
        if ((code *)PTR__bind_methods_00113010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorInspectorPlugin");
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
      if ((code *)PTR__bind_methods_00113070 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00113078 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorInspectorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorInspectorPluginBindingModifier");
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



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = EditorInspector::set_object_class;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105f7d;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_00105f7d:
  pvVar4 = *(void **)(this + 0xaf8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xb1c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb18) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb00) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0xb00) + lVar3) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0xaf8);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00106052;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_00106052:
  if (*(long *)(this + 0xad0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xad0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xad0);
      *(undefined8 *)(this + 0xad0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa00));
  bVar5 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRBindingModifier::typeinfo;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001060f5;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001060f5:
  Control::~Control((Control *)this);
  return;
}



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  ~EditorProperty(this);
  operator_delete(this,0xb58);
  return;
}



/* EditorPropertyBindingPath::~EditorPropertyBindingPath() */

void __thiscall
EditorPropertyBindingPath::~EditorPropertyBindingPath(EditorPropertyBindingPath *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e2d0;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyBindingPath::~EditorPropertyBindingPath() */

void __thiscall
EditorPropertyBindingPath::~EditorPropertyBindingPath(EditorPropertyBindingPath *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e2d0;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb60);
  return;
}



/* EditorPropertyActionSet::~EditorPropertyActionSet() */

void __thiscall EditorPropertyActionSet::~EditorPropertyActionSet(EditorPropertyActionSet *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010df00;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyActionSet::~EditorPropertyActionSet() */

void __thiscall EditorPropertyActionSet::~EditorPropertyActionSet(EditorPropertyActionSet *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010df00;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb60);
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



/* EditorPropertyBindingPath::get_class() const */

void EditorPropertyBindingPath::get_class(void)

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



/* EditorPropertyActionSet::get_class() const */

void EditorPropertyActionSet::get_class(void)

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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HBoxContainer");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifierEditor::get_class() const */

void OpenXRBindingModifierEditor::get_class(void)

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



/* EditorInspectorPluginBindingModifier::get_class() const */

void EditorInspectorPluginBindingModifier::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorInspectorPluginBindingModifier");
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
        String::parse_latin1((StrRange *)in_RDI);
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
    StringName::StringName((StringName *)&local_38,(String *)(this + 0x20),false);
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
LAB_00106a37:
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
      goto LAB_00106a37;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::call
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this,Variant **param_1,
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
      goto LAB_00106c2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00106c2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00106ce0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00106c2f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC41,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106ce0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this,Variant **param_1,
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
      goto LAB_00106ea8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00106ea8;
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
        uVar3 = _LC42;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00106f59;
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
LAB_00106ea8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC41,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106f59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this,Variant **param_1,
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
      goto LAB_00107118;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00107118;
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
        uVar3 = _LC42;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001070c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_001071c9;
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
LAB_00107118:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC41,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001071c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::_gen_argument_type_info(int param_1)

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
    if (in_EDX != 1) goto LAB_0010725a;
    pcVar2 = "OpenXRBindingModifier";
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
LAB_0010725a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_00113080 != Object::_bind_methods) {
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
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
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113060 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "BoxContainer";
    local_58 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VBoxContainer";
    local_60 = 0;
    local_40 = 0xd;
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



/* EditorPropertyActionSet::_initialize_classv() */

void EditorPropertyActionSet::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorProperty::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorProperty");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113068 != Container::_bind_methods) {
        EditorProperty::_bind_methods();
      }
      EditorProperty::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorProperty";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyActionSet";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<OpenXRBindingModifier>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "OpenXRBindingModifier";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x18;
  *(undefined8 *)(puVar1 + 2) = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)&local_60);
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
  puVar1[10] = 6;
  if (puVar1[6] == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
    if (*(char **)(puVar1 + 4) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar1 + 4) = local_48;
    }
  }
  else {
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00107ba3;
  }
  cVar3 = String::operator==(param_1,"Control");
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
      if (cVar3 != '\0') goto LAB_00107ba3;
    }
    cVar3 = String::operator==(param_1,"CanvasItem");
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
        if (cVar3 != '\0') goto LAB_00107ba3;
      }
      cVar3 = String::operator==(param_1,"Node");
      if (cVar3 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = Object::is_class((Object *)this,param_1);
          return uVar4;
        }
        goto LAB_00107d2e;
      }
    }
  }
LAB_00107ba3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d2e:
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
    if (cVar4 != '\0') goto LAB_00107e3b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00107e3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifierEditor::is_class(String const&) const */

undefined8 __thiscall
OpenXRBindingModifierEditor::is_class(OpenXRBindingModifierEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00107f73;
  }
  cVar4 = String::operator==(param_1,"OpenXRBindingModifierEditor");
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
      if (cVar4 != '\0') goto LAB_00107f73;
    }
    cVar4 = String::operator==(param_1,"PanelContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010807e;
    }
  }
LAB_00107f73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010807e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108163;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
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
      if (cVar4 != '\0') goto LAB_00108163;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00108163:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginBindingModifier::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginBindingModifier::is_class
          (EditorInspectorPluginBindingModifier *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108343;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorPluginBindingModifier");
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
      if (cVar4 != '\0') goto LAB_00108343;
    }
    cVar4 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_0010844e;
    }
  }
LAB_00108343:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010844e:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010854f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010854f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00108683;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00108683;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010878e;
    }
  }
LAB_00108683:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010878e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyActionSet::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyActionSet::is_class(EditorPropertyActionSet *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108873;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyActionSet");
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
      if (cVar4 != '\0') goto LAB_00108873;
    }
    cVar4 = String::operator==(param_1,"EditorProperty");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010897e;
    }
  }
LAB_00108873:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010897e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00108a63;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00108a63;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00108b6e;
    }
  }
LAB_00108a63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108b6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyBindingPath::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyBindingPath::is_class(EditorPropertyBindingPath *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108c53;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyBindingPath");
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
      if (cVar4 != '\0') goto LAB_00108c53;
    }
    cVar4 = String::operator==(param_1,"EditorProperty");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00108d5e;
    }
  }
LAB_00108c53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108d5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC21;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC21;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_80 = 0;
  local_88 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "RefCounted";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPlugin";
  local_90 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* EditorInspectorPluginBindingModifier::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
EditorInspectorPluginBindingModifier::_get_property_listv
          (EditorInspectorPluginBindingModifier *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorInspectorPluginBindingModifier";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPluginBindingModifier";
  local_90 = 0;
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginBindingModifier",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  if ((code *)PTR__get_property_list_00113088 != Object::_get_property_list) {
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
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  if ((code *)PTR__get_property_list_00113090 != CanvasItem::_get_property_list) {
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
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
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
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* PanelContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PanelContainer::_get_property_listv(PanelContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "PanelContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "PanelContainer";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PanelContainer",false);
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



/* OpenXRBindingModifierEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OpenXRBindingModifierEditor::_get_property_listv
          (OpenXRBindingModifierEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    PanelContainer::_get_property_listv((PanelContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "OpenXRBindingModifierEditor";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "OpenXRBindingModifierEditor";
  local_90 = 0;
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OpenXRBindingModifierEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PanelContainer::_get_property_listv((PanelContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorProperty::_get_property_listv(EditorProperty *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorProperty";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorProperty";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorProperty",false);
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



/* EditorPropertyBindingPath::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyBindingPath::_get_property_listv
          (EditorPropertyBindingPath *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorPropertyBindingPath";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPropertyBindingPath";
  local_90 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPropertyBindingPath",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorProperty::_get_property_listv((EditorProperty *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyActionSet::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyActionSet::_get_property_listv
          (EditorPropertyActionSet *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorPropertyActionSet";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPropertyActionSet";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPropertyActionSet",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorProperty::_get_property_listv((EditorProperty *)this,param_1,true);
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



/* MethodBind* create_method_bind<OpenXRBindingModifierEditor,
   Ref<OpenXRBindingModifier>>(Ref<OpenXRBindingModifier> (OpenXRBindingModifierEditor::*)() const)
    */

MethodBind *
create_method_bind<OpenXRBindingModifierEditor,Ref<OpenXRBindingModifier>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ed60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRBindingModifierEditor";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<OpenXRBindingModifierEditor, Ref<OpenXRActionMap>,
   Ref<OpenXRBindingModifier> >(void (OpenXRBindingModifierEditor::*)(Ref<OpenXRActionMap>,
   Ref<OpenXRBindingModifier>)) */

MethodBind *
create_method_bind<OpenXRBindingModifierEditor,Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>
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
  *(undefined ***)this = &PTR__gen_argument_type_0010edc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRBindingModifierEditor";
  local_30 = 0x1b;
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



/* OpenXRBindingModifierEditor::_bind_methods() [clone .cold] */

void OpenXRBindingModifierEditor::_bind_methods(void)

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



/* CowData<OpenXRAction::ActionType>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<OpenXRAction::ActionType>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRBindingModifierEditor::_initialize_classv() */

void OpenXRBindingModifierEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"PanelContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113098 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "PanelContainer";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRBindingModifierEditor";
    local_60 = 0;
    local_40 = 0x1b;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_0010b220:
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
  if (lVar9 == 0) goto LAB_0010b220;
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
    goto LAB_0010b276;
  }
  if (lVar9 == lVar5) {
LAB_0010b19b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010b276:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010b10f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010b19b;
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
LAB_0010b10f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<OpenXRAction::ActionType>::_unref() */

void __thiscall CowData<OpenXRAction::ActionType>::_unref(CowData<OpenXRAction::ActionType> *this)

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



/* CowData<OpenXRAction::ActionType>::_realloc(long) */

undefined8 __thiscall
CowData<OpenXRAction::ActionType>::_realloc(CowData<OpenXRAction::ActionType> *this,long param_1)

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
/* Error CowData<OpenXRAction::ActionType>::resize<false>(long) */

undefined8 __thiscall
CowData<OpenXRAction::ActionType>::resize<false>
          (CowData<OpenXRAction::ActionType> *this,long param_1)

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
LAB_0010b520:
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
  if (lVar7 == 0) goto LAB_0010b520;
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
        goto LAB_0010b451;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0010b451:
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



/* EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier() */

void __thiscall
EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier
          (EditorInspectorPluginBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Array::Array;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b754;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b754;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b754;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b754;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b754;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0010b754:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0010d6b0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier() */

void __thiscall
EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier
          (EditorInspectorPluginBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Array::Array;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b854;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b854;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b854;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b854;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b854;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0010b854:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0010d6b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010ba28) */
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



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::validated_call
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
      goto LAB_0010be41;
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
LAB_0010bd52:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0)
      ;
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010bd52;
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
LAB_0010bde9:
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
        if (pOVar2 != (Object *)0x0) goto LAB_0010bde9;
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
LAB_0010be41:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_48;
  Object *local_40;
  Object *local_38;
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
    if (local_38 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((Ref<OpenXRBindingModifier> *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Ref<OpenXRBindingModifier> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c1d6;
    }
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if (*(long **)((long)param_3 + 8) == (long *)0x0) {
    local_40 = (Object *)0x0;
  }
  else {
    pOVar2 = (Object *)**(long **)((long)param_3 + 8);
    local_40 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      local_38 = (Object *)0x0;
      local_40 = pOVar2;
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        local_40 = (Object *)0x0;
      }
      Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_38);
    }
  }
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_38 = (Object *)**param_3, local_38 == (Object *)0x0)) {
LAB_0010c200:
    local_38 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010c200;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1),(Ref<OpenXRBindingModifier> *)&local_38,&local_40);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_38;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
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
LAB_0010c1d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<OpenXRBindingModifier>>::call
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
  long local_60;
  undefined8 local_58;
  Object *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_50,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_50 == (Object *)*plVar3) {
      if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = 0;
      String::parse_latin1
                ((String *)&local_58,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_50,(String *)&local_58,&local_60);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_50,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c520;
    }
    if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
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
      (*(code *)pVVar2)((Ref<OpenXRBindingModifier> *)&local_50);
      Variant::Variant((Variant *)local_48,local_50);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<OpenXRBindingModifier>::unref((Ref<OpenXRBindingModifier> *)&local_50);
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
LAB_0010c520:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRBindingModifier>>::ptrcall
          (MethodBindTRC<Ref<OpenXRBindingModifier>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c796;
    }
    param_2 = (void **)local_38;
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_38,param_1 + *(long *)(this + 0x60),param_2);
  if (local_38 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010c796;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010c7d9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_38,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010c7d9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010c7d9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_38 == (Object *)0x0) goto LAB_0010c796;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_38);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
  }
LAB_0010c796:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::call
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
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cc80;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0010cc75:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0010cc80;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0010ccb8;
    pVVar13 = *(Variant **)param_4;
LAB_0010cccd:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_0010ccb8:
      uVar8 = 4;
      goto LAB_0010cc75;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_0010ce90;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010cccd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0010ce90:
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
  uVar4 = _LC87;
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
LAB_0010cb69:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0)
      ;
      if (pOVar5 != pOVar9) {
        local_50 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_50 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010cb69;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13);
  uVar4 = _LC88;
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
LAB_0010cbfc:
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
        if (pOVar5 != (Object *)0x0) goto LAB_0010cbfc;
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
LAB_0010cc80:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRBindingModifier>>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Ref<OpenXRBindingModifier>>::validated_call
          (MethodBindTRC<Ref<OpenXRBindingModifier>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_50 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_50,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_48,(String *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d036;
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
LAB_0010d036:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyActionSet::_set_read_only(bool) */

void EditorPropertyActionSet::_GLOBAL__sub_I__set_read_only(void)

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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier() */

void __thiscall
EditorInspectorPluginBindingModifier::~EditorInspectorPluginBindingModifier
          (EditorInspectorPluginBindingModifier *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyActionSet::~EditorPropertyActionSet() */

void __thiscall EditorPropertyActionSet::~EditorPropertyActionSet(EditorPropertyActionSet *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyBindingPath::~EditorPropertyBindingPath() */

void __thiscall
EditorPropertyBindingPath::~EditorPropertyBindingPath(EditorPropertyBindingPath *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor() */

void __thiscall
OpenXRBindingModifierEditor::~OpenXRBindingModifierEditor(OpenXRBindingModifierEditor *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<OpenXRActionMap>, Ref<OpenXRBindingModifier> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>>::~MethodBindT
          (MethodBindT<Ref<OpenXRActionMap>,Ref<OpenXRBindingModifier>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRBindingModifier>>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRBindingModifier>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyActionSet, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyActionSet,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyActionSet,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyBindingPath, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyBindingPath,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyBindingPath,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRBindingModifierEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRBindingModifierEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRBindingModifierEditor,void> *this)

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


