/* EditorPropertyDictionary::is_colored(EditorProperty::ColorationMode) */

bool __thiscall EditorPropertyDictionary::is_colored(undefined8 param_1,int param_2)

{
  return param_2 == 0;
}



/* EditorPropertyDictionary::_change_type(Object*, int) */

void __thiscall
EditorPropertyDictionary::_change_type(EditorPropertyDictionary *this,Object *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Vector2i *pVVar3;
  code *pcVar4;
  bool bVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    __dynamic_cast(param_1,&Object::typeinfo,&Button::typeinfo,0);
  }
  if ((uint)param_2 < *(uint *)(this + 3000)) {
    uVar1 = *(undefined4 *)((ulong)(uint)param_2 * 0x40 + *(long *)(this + 0xbc0) + 0x10);
    fVar6 = (float)Control::get_screen_rect();
    uVar2 = *(undefined8 *)(this + 0xb58);
    bVar5 = (bool)PopupMenu::get_item_index((int)uVar2);
    PopupMenu::set_item_disabled((int)uVar2,bVar5);
    Window::reset_size();
    pVVar3 = *(Vector2i **)(this + 0xb58);
    fVar7 = (float)Window::get_contents_minimum_size();
    local_50 = CONCAT44(extraout_XMM0_Db + (float)((ulong)extraout_XMM1_Qa >> 0x20),
                        (fVar6 + (float)extraout_XMM1_Qa) - fVar7);
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::set_position(pVVar3);
    local_48 = 0;
    local_40 = 0;
    (**(code **)(**(long **)(this + 0xb58) + 0x240))(*(long **)(this + 0xb58),&local_48);
    *(undefined4 *)(this + 0xb78) = uVar1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_2,
             (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* EditorPropertyLocalizableString::_remove_item(Object*, int) */

void EditorPropertyLocalizableString::_remove_item(Object *param_1,int param_2)

{
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)&local_80,(Dictionary *)(*(long *)(param_1 + 0xb68) + 0x1b0))
  ;
  Dictionary::duplicate(SUB81(local_90,0));
  Dictionary::~Dictionary((Dictionary *)&local_80);
  Dictionary::get_key_at_index((int)local_78);
  Dictionary::erase(local_90);
  StringName::StringName((StringName *)&local_80,"",false);
  Variant::Variant((Variant *)local_58,local_90);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)param_1,(Variant *)&local_88,(StringName *)local_58,
             SUB81((Dictionary *)&local_80,0));
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)param_1 + 0x380))(param_1);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_remove_pressed(int) */

void __thiscall
EditorPropertyDictionary::_remove_pressed(EditorPropertyDictionary *this,int param_1)

{
  code *pcVar1;
  long in_FS_OFFSET;
  Dictionary local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)&local_60,(Dictionary *)(*(long *)(this + 0xb68) + 0x1b0));
  Dictionary::duplicate(SUB81(local_70,0));
  Dictionary::~Dictionary((Dictionary *)&local_60);
  if (*(uint *)(this + 3000) <= (uint)param_1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
               (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  Dictionary::get_key_at_index((int)(Variant *)local_58);
  Dictionary::erase(local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_60 = 0;
  Variant::Variant((Variant *)local_58,local_70);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_68,(StringName *)local_58,
             SUB81((Dictionary *)&local_60,0));
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Dictionary::~Dictionary(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::_add_locale_popup() */

void EditorPropertyLocalizableString::_add_locale_popup(void)

{
  EditorLocaleDialog::popup_locale_dialog();
  return;
}



/* EditorPropertyLocalizableString::_page_changed(int) */

void __thiscall
EditorPropertyLocalizableString::_page_changed(EditorPropertyLocalizableString *this,int param_1)

{
  if (this[0xb60] == (EditorPropertyLocalizableString)0x0) {
    *(int *)(this + 0xb74) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00100506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x380))();
    return;
  }
  return;
}



/* EditorPropertyLocalizableString::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyLocalizableString::_object_id_selected
          (EditorPropertyLocalizableString *this,StringName *param_1,undefined8 param_3)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_b8,param_1);
  if (_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  local_b0 = param_3;
  Variant::Variant(local_88,(StringName *)&local_b8);
  Variant::Variant(local_70,(ObjectID *)&local_b0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)local_40;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                   sname,&local_a8,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_button_draw() */

void EditorPropertyArray::_button_draw(void)

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
  if (in_RDI[0xc09] != (StringName)0x0) {
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
    pRVar1 = *(Rect2 **)(in_RDI + 0xb70);
    local_40 = Control::get_size();
    local_48 = 0;
    CanvasItem::draw_rect(pRVar1,(Color *)&local_48,SUB81(local_58,0),_LC7,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_change_type(Object*, int) */

void __thiscall
EditorPropertyArray::_change_type(EditorPropertyArray *this,Object *param_1,int param_2)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    __dynamic_cast(param_1,&Object::typeinfo,&Button::typeinfo,0);
  }
  *(int *)(this + 0xb6c) = param_2;
  fVar2 = (float)Control::get_screen_rect();
  Window::reset_size();
  pVVar1 = *(Vector2i **)(this + 0xb58);
  fVar3 = (float)Window::get_contents_minimum_size();
  local_50 = CONCAT44(extraout_XMM0_Db + (float)((ulong)extraout_XMM1_Qa >> 0x20),
                      (fVar2 + (float)extraout_XMM1_Qa) - fVar3);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::set_position(pVVar1);
  local_48 = 0;
  local_40 = 0;
  (**(code **)(**(long **)(this + 0xb58) + 0x240))(*(long **)(this + 0xb58),&local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyDictionary::_object_id_selected
          (EditorPropertyDictionary *this,StringName *param_1,undefined8 param_3)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_b8,param_1);
  if (_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  local_b0 = param_3;
  Variant::Variant(local_88,(StringName *)&local_b8);
  Variant::Variant(local_70,(ObjectID *)&local_b0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)local_40;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                   sname,&local_a8,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyArray::_object_id_selected
          (EditorPropertyArray *this,StringName *param_1,undefined8 param_3)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_b8,param_1);
  if (_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  local_b0 = param_3;
  Variant::Variant(local_88,(StringName *)&local_b8);
  Variant::Variant(local_70,(ObjectID *)&local_b0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)local_40;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_object_id_selected(StringName_const&,ObjectID)::{lambda()#1}::operator()()::
                   sname,&local_a8,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_reorder_button_down(int) */

void __thiscall EditorPropertyArray::_reorder_button_down(EditorPropertyArray *this,int param_1)

{
  EditorPropertyArray EVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Object *pOVar4;
  Object *pOVar5;
  code *pcVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  cVar8 = EditorProperty::is_read_only();
  if (cVar8 != '\0') {
    return;
  }
  if ((uint)param_1 < *(uint *)(this + 3000)) {
    pOVar4 = *(Object **)(this + 0xbc8);
    puVar10 = (undefined8 *)((ulong)(uint)param_1 * 0x30 + *(long *)(this + 0xbc0));
    pOVar5 = (Object *)*puVar10;
    if (pOVar5 != pOVar4) {
      *(Object **)(this + 0xbc8) = pOVar5;
      if (pOVar5 != (Object *)0x0) {
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *(undefined8 *)(this + 0xbc8) = 0;
        }
      }
      if (pOVar4 != (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        if (cVar8 != '\0') {
          cVar8 = predelete_handler(pOVar4);
          if (cVar8 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    uVar2 = *(undefined4 *)((long)puVar10 + 0x14);
    *(undefined8 *)(this + 0xbd0) = puVar10[1];
    uVar3 = *(undefined4 *)(puVar10 + 2);
    *(undefined4 *)(this + 0xbdc) = uVar2;
    EVar1 = *(EditorPropertyArray *)(puVar10 + 3);
    *(undefined4 *)(this + 0xbd8) = uVar3;
    this[0xbe0] = EVar1;
    uVar9 = puVar10[4];
    uVar7 = puVar10[5];
    *(undefined4 *)(this + 0xbf8) = uVar3;
    *(undefined8 *)(this + 0xbe8) = uVar9;
    *(undefined8 *)(this + 0xbf0) = uVar7;
    uVar9 = Input::get_singleton();
    Input::set_mouse_mode(uVar9,2);
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
             (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* EditorPropertyDictionary::_property_changed(String const&, Variant, String const&, bool) */

void EditorPropertyDictionary::_property_changed
               (StringName *param_1,String *param_2,bool *param_3,String *param_4)

{
  StringName *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  long local_70;
  Dictionary local_68 [8];
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)param_3 == 0x18) && (cVar2 = Variant::is_null(), cVar2 != '\0')) {
    local_50 = (undefined1  [16])0x0;
    if (Variant::needs_deinit[*(int *)param_3] != '\0') {
      Variant::_clear_internal();
    }
    param_3[0] = false;
    param_3[1] = false;
    param_3[2] = false;
    param_3[3] = false;
    *(undefined8 *)(param_3 + 8) = local_50._0_8_;
    *(undefined8 *)(param_3 + 0x10) = local_50._8_8_;
  }
  pSVar1 = *(StringName **)(param_1 + 0xb68);
  StringName::StringName((StringName *)&local_60,param_2,false);
  Object::set(pSVar1,(Variant *)&local_60,param_3);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  cVar2 = String::begins_with((char *)param_2);
  StringName::StringName((StringName *)&local_60,param_4,false);
  Dictionary::Dictionary(local_68,(Dictionary *)(*(long *)(param_1 + 0xb68) + 0x1b0));
  Variant::Variant((Variant *)local_58,local_68);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            (param_1,(Variant *)&local_70,(StringName *)local_58,SUB81((StringName *)&local_60,0));
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_68);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (cVar2 == '\x01') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x380))(param_1);
    return;
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



/* EditorPropertyArrayObject::set_array(Variant const&) */

void __thiscall
EditorPropertyArrayObject::set_array(EditorPropertyArrayObject *this,Variant *param_1)

{
  Variant::operator=((Variant *)(this + 0x180),(Variant *)param_1);
  return;
}



/* EditorPropertyArrayObject::get_array() */

void EditorPropertyArrayObject::get_array(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Variant *)(in_RSI + 0x180));
  return;
}



/* EditorPropertyArrayObject::EditorPropertyArrayObject() */

void __thiscall
EditorPropertyArrayObject::EditorPropertyArrayObject(EditorPropertyArrayObject *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00127128;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  return;
}



/* EditorPropertyDictionaryObject::set_dict(Dictionary const&) */

void __thiscall
EditorPropertyDictionaryObject::set_dict(EditorPropertyDictionaryObject *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x1b0),param_1);
  return;
}



/* EditorPropertyDictionaryObject::get_dict() */

void EditorPropertyDictionaryObject::get_dict(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x1b0));
  return;
}



/* EditorPropertyDictionaryObject::set_new_item_key(Variant const&) */

void __thiscall
EditorPropertyDictionaryObject::set_new_item_key
          (EditorPropertyDictionaryObject *this,Variant *param_1)

{
  Variant::operator=((Variant *)(this + 0x180),(Variant *)param_1);
  return;
}



/* EditorPropertyDictionaryObject::get_new_item_key() */

void EditorPropertyDictionaryObject::get_new_item_key(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Variant *)(in_RSI + 0x180));
  return;
}



/* EditorPropertyDictionaryObject::set_new_item_value(Variant const&) */

void __thiscall
EditorPropertyDictionaryObject::set_new_item_value
          (EditorPropertyDictionaryObject *this,Variant *param_1)

{
  Variant::operator=((Variant *)(this + 0x198),(Variant *)param_1);
  return;
}



/* EditorPropertyDictionaryObject::get_new_item_value() */

void EditorPropertyDictionaryObject::get_new_item_value(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Variant *)(in_RSI + 0x198));
  return;
}



/* EditorPropertyDictionaryObject::EditorPropertyDictionaryObject() */

void __thiscall
EditorPropertyDictionaryObject::EditorPropertyDictionaryObject(EditorPropertyDictionaryObject *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00127288;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0x1b0));
  return;
}



/* EditorPropertyArray::set_preview_value(bool) */

void __thiscall EditorPropertyArray::set_preview_value(EditorPropertyArray *this,bool param_1)

{
  this[0xb60] = (EditorPropertyArray)param_1;
  return;
}



/* EditorPropertyArray::get_base_node() */

void __thiscall EditorPropertyArray::get_base_node(EditorPropertyArray *this)

{
  long lVar1;
  
  lVar1 = EditorInspector::get_edited_object();
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Node::typeinfo,0);
    if (lVar1 != 0) {
      return;
    }
  }
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  SceneTree::get_edited_scene_root();
  return;
}



/* EditorPropertyDictionary::initialize_dictionary(Variant&) */

void __thiscall
EditorPropertyDictionary::initialize_dictionary(EditorPropertyDictionary *this,Variant *param_1)

{
  uint uVar1;
  char cVar2;
  long in_FS_OFFSET;
  bool bVar3;
  Variant *local_a8;
  Dictionary local_98 [8];
  long local_90;
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(this + 0xbc8) == 0) && (*(int *)(this + 0xbd8) == 0)) {
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0x1b;
    Dictionary::Dictionary((Dictionary *)(param_1 + 8));
    *(undefined4 *)param_1 = 0x1b;
  }
  else {
    Dictionary::Dictionary(local_98);
    local_90 = 0;
    if (((*(int *)(this + 0xbc8) == 0x18) && (*(long *)(this + 0xbd0) != 0)) &&
       (1 < *(uint *)(*(long *)(this + 0xbd0) + -8))) {
      StringName::StringName((StringName *)&local_80,(String *)(this + 0xbd0),false);
      cVar2 = ClassDB::class_exists((StringName *)&local_80);
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        StringName::StringName((StringName *)&local_80,(String *)(this + 0xbd0),false);
        if (local_90 == local_80) {
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_90 = local_80;
        }
      }
    }
    local_88 = 0;
    if (((*(int *)(this + 0xbd8) == 0x18) && (*(long *)(this + 0xbe0) != 0)) &&
       (1 < *(uint *)(*(long *)(this + 0xbe0) + -8))) {
      StringName::StringName((StringName *)&local_80,(String *)(this + 0xbe0),false);
      cVar2 = ClassDB::class_exists((StringName *)&local_80);
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (cVar2 != '\0') {
        StringName::StringName((StringName *)&local_80,(String *)(this + 0xbe0),false);
        if (local_88 == local_80) {
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_88 = local_80;
        }
      }
    }
    local_a8 = (Variant *)&local_88;
    Variant::Variant((Variant *)local_78,(Object *)0x0);
    uVar1 = *(uint *)(this + 0xbd8);
    Variant::Variant((Variant *)local_58,(Object *)0x0);
    Dictionary::set_typed
              ((uint)local_98,(StringName *)(ulong)*(uint *)(this + 0xbc8),(Variant *)&local_90,
               (uint)(Variant *)local_58,(StringName *)(ulong)uVar1,local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_98);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar3 = StringName::configured != '\0';
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar3) &&
       (((local_88 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_90 != 0)
        ))) {
      StringName::unref();
    }
    Dictionary::~Dictionary(local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyDictionary::set_preview_value(bool) */

void __thiscall
EditorPropertyDictionary::set_preview_value(EditorPropertyDictionary *this,bool param_1)

{
  this[0xb61] = (EditorPropertyDictionary)param_1;
  return;
}



/* EditorPropertyLocalizableString::_notification(int) */

void __thiscall
EditorPropertyLocalizableString::_notification(EditorPropertyLocalizableString *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == 10) || (param_1 == 0x2d)) &&
     (pRVar1 = *(Ref **)(this + 0xb98), pRVar1 != (Ref *)0x0)) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
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



/* EditorPropertyArrayObject::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorPropertyArrayObject::_set
          (EditorPropertyArrayObject *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar2 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    __s = *(char **)(lVar2 + 8);
    local_70 = 0;
    if (__s != (char *)0x0) {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
      goto LAB_0010183e;
    }
    plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00101951;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar3 == lVar6;
        if (bVar7) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_70 = *(undefined8 *)(lVar2 + 0x10);
      }
      goto LAB_0010183e;
    }
  }
LAB_00101951:
  local_70 = 0;
LAB_0010183e:
  uVar4 = String::begins_with((char *)&local_70);
  if ((char)uVar4 != '\0') {
    String::begins_with((char *)&local_70);
    String::get_slice((char *)&local_68,(int)(CowData<char32_t> *)&local_70);
    iVar5 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Variant::Variant((Variant *)local_58,iVar5);
    Variant::set((Variant *)(this + 0x180),(Variant *)local_58,(bool *)param_2,
                 (VariantSetError *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorPropertyDictionaryObject::_set
          (EditorPropertyDictionaryObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  char cVar2;
  undefined4 uVar3;
  Variant *this_00;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  int local_48 [6];
  long local_30;
  
  lVar1 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_60 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  cVar2 = String::operator==((String *)&local_60,"new_item_key");
  if (cVar2 == '\0') {
    cVar2 = String::operator==((String *)&local_60,"new_item_value");
    if (cVar2 == '\0') {
      uVar3 = String::begins_with((char *)&local_60);
      if ((char)uVar3 == '\0') goto LAB_00101a34;
      Dictionary::duplicate(SUB81((Dictionary *)&local_58,0));
      Dictionary::operator=((Dictionary *)(this + 0x1b0),(Dictionary *)&local_58);
      Dictionary::~Dictionary((Dictionary *)&local_58);
      String::get_slicec((wchar32)(Dictionary *)&local_58,(int)(String *)&local_60);
      String::to_int();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      Dictionary::get_key_at_index((int)local_48);
      this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x1b0));
      Variant::operator=(this_00,(Variant *)param_2);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::operator=((Variant *)(this + 0x198),(Variant *)param_2);
    }
  }
  else {
    Variant::operator=((Variant *)(this + 0x180),(Variant *)param_2);
  }
  uVar3 = 1;
LAB_00101a34:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::get_by_property_name(String const&, Variant&) const */

undefined4 __thiscall
EditorPropertyDictionaryObject::get_by_property_name
          (EditorPropertyDictionaryObject *this,String *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  Variant *pVVar6;
  int iVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101bdc;
      LOCK();
      lVar5 = *plVar1;
      bVar8 = lVar2 == lVar5;
      if (bVar8) {
        *plVar1 = lVar2 + 1;
        lVar5 = lVar2;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_70 = *(undefined8 *)param_1;
    }
  }
LAB_00101bdc:
  cVar3 = String::operator==((String *)&local_70,"new_item_key");
  if (cVar3 == '\0') {
    cVar3 = String::operator==((String *)&local_70,"new_item_value");
    if (cVar3 == '\0') {
      cVar3 = String::operator==((String *)&local_70,"new_item_key_name");
      if (cVar3 == '\0') {
        cVar3 = String::operator==((String *)&local_70,"new_item_value_name");
        if (cVar3 == '\0') {
          cVar3 = String::begins_with((char *)&local_70);
          iVar7 = (int)(String *)&local_70;
          if (cVar3 == '\0') {
            uVar4 = String::begins_with((char *)&local_70);
            if ((char)uVar4 == '\0') goto LAB_00101cd5;
            String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,iVar7);
            String::to_int();
            pVVar6 = (Variant *)local_48;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            Dictionary::get_key_at_index((int)pVVar6);
          }
          else {
            String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,iVar7);
            String::to_int();
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            Dictionary::get_key_at_index((int)local_48);
            pVVar6 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x1b0));
          }
          Variant::operator=((Variant *)param_2,pVVar6);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_00101ccf;
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"New Value:");
        TTR((String *)&local_58,(String *)&local_68);
        Variant::Variant((Variant *)local_48,(String *)&local_58);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
      else {
        local_60 = 0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = "New Key:";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        TTR((String *)&local_58,(String *)&local_68);
        Variant::Variant((Variant *)local_48,(String *)&local_58);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      Variant::operator=((Variant *)param_2,(Variant *)(this + 0x198));
    }
  }
  else {
    Variant::operator=((Variant *)param_2,(Variant *)(this + 0x180));
  }
LAB_00101ccf:
  uVar4 = 1;
LAB_00101cd5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* EditorPropertyDictionaryObject::get_property_name_for_index(int) */

StrRange * EditorPropertyDictionaryObject::get_property_name_for_index(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar1;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  pSVar1 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == -2) {
    *(undefined8 *)pSVar1 = 0;
    local_38 = "new_item_key";
    local_30 = 0xc;
    String::parse_latin1(pSVar1);
  }
  else if (in_EDX == -1) {
    *(undefined8 *)pSVar1 = 0;
    local_38 = "new_item_value";
    local_30 = 0xe;
    String::parse_latin1(pSVar1);
  }
  else {
    itos((long)&local_38);
    operator+((char *)pSVar1,(String *)"indices/");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::get_key_name_for_index(int) */

StrRange * EditorPropertyDictionaryObject::get_key_name_for_index(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar1;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  pSVar1 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == -2) {
    *(undefined8 *)pSVar1 = 0;
    local_38 = "new_item_key_name";
    local_30 = 0x11;
    String::parse_latin1(pSVar1);
  }
  else if (in_EDX == -1) {
    *(undefined8 *)pSVar1 = 0;
    local_38 = "new_item_value_name";
    local_30 = 0x13;
    String::parse_latin1(pSVar1);
  }
  else {
    itos((long)&local_38);
    operator+((char *)pSVar1,(String *)"keys/");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::get_label_for_index(int) */

String * EditorPropertyDictionaryObject::get_label_for_index(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == -2) {
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "New Key:";
    local_50 = 8;
  }
  else {
    if (in_EDX != -1) {
      Dictionary::get_key_at_index((int)local_48);
      Variant::get_construct_string();
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010215f;
    }
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "New Value:";
    local_50 = 10;
  }
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010215f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::_property_changed(String const&, Variant const&, String const&,
   bool) */

void EditorPropertyLocalizableString::_property_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  char cVar1;
  Variant *this;
  long in_FS_OFFSET;
  Variant local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with(param_2);
  if (cVar1 != '\0') {
    String::get_slice((char *)&local_80,(int)param_2);
    String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Dictionary::Dictionary
              ((Dictionary *)&local_80,(Dictionary *)(*(long *)(param_1 + 0xb68) + 0x1b0));
    Dictionary::duplicate(SUB81(local_90,0));
    Dictionary::~Dictionary((Dictionary *)&local_80);
    Dictionary::get_key_at_index((int)local_78);
    this = (Variant *)Dictionary::operator[](local_90);
    Variant::operator=(this,(Variant *)param_3);
    Dictionary::operator=((Dictionary *)(*(long *)(param_1 + 0xb68) + 0x1b0),(Dictionary *)local_90)
    ;
    StringName::StringName((StringName *)&local_88,"",false);
    Variant::Variant((Variant *)local_58,(Dictionary *)local_90);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)param_1,(CowData<char32_t> *)&local_80,(StringName *)local_58,
               SUB81((StringName *)&local_88,0));
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::_add_locale(String const&) */

void __thiscall
EditorPropertyLocalizableString::_add_locale(EditorPropertyLocalizableString *this,String *param_1)

{
  char cVar1;
  long lVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  Variant local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)&local_80,(Dictionary *)(*(long *)(this + 0xb68) + 0x1b0));
  Dictionary::duplicate(SUB81(local_90,0));
  Dictionary::~Dictionary((Dictionary *)&local_80);
  lVar2 = *(long *)(this + 0xb68);
  Variant::Variant((Variant *)local_58,param_1);
  Variant::operator=((Variant *)(lVar2 + 0x180),(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = *(long *)(this + 0xb68);
  local_80 = 0;
  Variant::Variant((Variant *)local_58,(String *)&local_80);
  Variant::operator=((Variant *)(lVar2 + 0x198),(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xb68) + 0x198));
  Variant::Variant((Variant *)local_78,(Variant *)(*(long *)(this + 0xb68) + 0x180));
  pVVar3 = (Variant *)Dictionary::operator[](local_90);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_80,"",false);
  Variant::Variant((Variant *)local_58,(Dictionary *)local_90);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_88,(StringName *)local_58,
             SUB81((Dictionary *)&local_80,0));
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)this + 0x380))(this);
  Dictionary::~Dictionary((Dictionary *)local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyArrayObject::_get(StringName const&, Variant&) const */

uint __thiscall
EditorPropertyArrayObject::_get
          (EditorPropertyArrayObject *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  char *__s;
  uint uVar2;
  int iVar3;
  Object *pOVar4;
  long lVar5;
  long in_FS_OFFSET;
  byte local_91;
  undefined8 local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar5 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == 0) {
    local_90 = 0;
  }
  else {
    __s = *(char **)(lVar5 + 8);
    local_90 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar5 + 0x10));
    }
    else {
      local_80 = strlen(__s);
      local_88 = __s;
      String::parse_latin1((StrRange *)&local_90);
    }
  }
  uVar2 = String::begins_with((char *)&local_90);
  if ((char)uVar2 != '\0') {
    String::begins_with((char *)&local_90);
    String::get_slice((char *)&local_88,(int)(CowData<char32_t> *)&local_90);
    iVar3 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Variant::Variant((Variant *)local_78,iVar3);
    Variant::get((Variant *)local_58,(bool *)(this + 0x180),(VariantGetError *)local_78);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = Variant::needs_deinit[local_78[0]];
    *(int *)param_2 = local_58[0];
    *(undefined8 *)(param_2 + 8) = local_50;
    *(undefined8 *)(param_2 + 0x10) = uStack_48;
    iVar3 = local_58[0];
    if (cVar1 != '\0') {
      Variant::_clear_internal();
      iVar3 = *(int *)param_2;
    }
    if (((iVar3 == 0x18) &&
        (pOVar4 = Variant::operator_cast_to_Object_((Variant *)param_2), pOVar4 != (Object *)0x0))
       && (lVar5 = __dynamic_cast(pOVar4,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0),
          lVar5 != 0)) {
      pOVar4 = Variant::operator_cast_to_Object_((Variant *)param_2);
      if (pOVar4 != (Object *)0x0) {
        __dynamic_cast(pOVar4,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
      }
      local_88 = (char *)EncodedObjectAsID::get_object_id();
      Variant::Variant((Variant *)local_58,(CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
    }
    uVar2 = (uint)local_91;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::_get(StringName const&, Variant&) const */

undefined4 __thiscall
EditorPropertyDictionaryObject::_get
          (EditorPropertyDictionaryObject *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  undefined4 uVar1;
  Object *pOVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  lVar3 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
  uVar1 = get_by_property_name(this,(String *)&local_60,param_2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (((char)uVar1 != '\0') && (*(int *)param_2 == 0x18)) {
    pOVar2 = Variant::operator_cast_to_Object_((Variant *)param_2);
    if (pOVar2 != (Object *)0x0) {
      lVar3 = __dynamic_cast(pOVar2,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
      if (lVar3 != 0) {
        pOVar2 = Variant::operator_cast_to_Object_((Variant *)param_2);
        if (pOVar2 != (Object *)0x0) {
          __dynamic_cast(pOVar2,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
        }
        local_58 = (char *)EncodedObjectAsID::get_object_id();
        Variant::Variant((Variant *)local_48,(ObjectID *)&local_58);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_property_changed(String const&, Variant, String const&, bool) */

void __thiscall
EditorPropertyArray::_property_changed
          (EditorPropertyArray *this,char *param_1,bool *param_3,String *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with(param_1);
  if (cVar1 == '\0') goto LAB_00102c2b;
  if (*(int *)param_3 == 0x18) {
    cVar1 = Variant::is_null();
    if (cVar1 != '\0') {
      local_50 = (undefined1  [16])0x0;
      if (Variant::needs_deinit[*(int *)param_3] != '\0') {
        Variant::_clear_internal();
      }
      param_3[0] = false;
      param_3[1] = false;
      param_3[2] = false;
      param_3[3] = false;
      *(undefined8 *)(param_3 + 8) = local_50._0_8_;
      *(undefined8 *)(param_3 + 0x10) = local_50._8_8_;
    }
  }
  String::get_slice((char *)&local_80,(int)param_1);
  iVar2 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xc00) + 0x180));
  Variant::duplicate(SUB81((Variant *)local_78,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,iVar2);
  Variant::set((Variant *)local_78,(Variant *)local_58,param_3,(VariantSetError *)0x0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_88,param_4,false);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(CowData<char32_t> *)&local_80,(StringName *)local_78,
             SUB81((StringName *)&local_88,0));
  if (StringName::configured != '\0') {
    if (local_80 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102c16;
    }
    if (local_88 != 0) {
      StringName::unref();
    }
  }
LAB_00102c16:
  if (param_5 != '\0') {
    Variant::operator=((Variant *)(*(long *)(this + 0xc00) + 0x180),(Variant *)local_78);
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00102c2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::_edit_pressed() */

void __thiscall
EditorPropertyLocalizableString::_edit_pressed(EditorPropertyLocalizableString *this)

{
  char *__s;
  char cVar1;
  String *pSVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  Dictionary local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_58[0] = 0;
    local_50[0] = (Dictionary)0x0;
    local_50[1] = (Dictionary)0x0;
    local_50[2] = (Dictionary)0x0;
    local_50[3] = (Dictionary)0x0;
    local_50[4] = (Dictionary)0x0;
    local_50[5] = (Dictionary)0x0;
    local_50[6] = (Dictionary)0x0;
    local_50[7] = (Dictionary)0x0;
    local_50[8] = (Dictionary)0x0;
    local_50[9] = (Dictionary)0x0;
    local_50[10] = (Dictionary)0x0;
    local_50[0xb] = (Dictionary)0x0;
    local_50[0xc] = (Dictionary)0x0;
    local_50[0xd] = (Dictionary)0x0;
    local_50[0xe] = (Dictionary)0x0;
    local_50[0xf] = (Dictionary)0x0;
  }
  else {
    Object::get((StringName *)local_58,*(bool **)(this + 0xa10));
    if (local_58[0] != 0) goto LAB_00102d5e;
  }
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_58[0] = 0x1b;
    Dictionary::Dictionary(local_50);
    local_58[0] = 0x1b;
    pSVar3 = (StringName *)EditorProperty::get_edited_object();
    EditorProperty::get_edited_property();
    Object::set(pSVar3,(Variant *)&local_68,(bool *)local_58);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
LAB_00102d5e:
  pSVar2 = (String *)EditorProperty::get_edited_object();
  BaseButton::is_pressed();
  EditorProperty::get_edited_property();
  if (local_78 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(local_78 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar2,SUB81((CowData<char32_t> *)&local_70,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)this + 0x380))(this);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_edit_pressed() */

void __thiscall EditorPropertyDictionary::_edit_pressed(EditorPropertyDictionary *this)

{
  char *__s;
  char cVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_58[0] = 0;
    local_50 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_58,*(bool **)(this + 0xa10));
    if (local_58[0] != 0) goto LAB_00102fd9;
  }
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    initialize_dictionary(this,(StringName *)local_58);
    local_68 = (char *)0x0;
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)this,(Variant *)&local_70,(StringName *)local_58,SUB81(&local_68,0));
    if (StringName::configured != '\0') {
      if (local_70 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00102fd9;
      }
      if (local_68 != (char *)0x0) {
        StringName::unref();
      }
    }
  }
LAB_00102fd9:
  pSVar2 = (String *)EditorProperty::get_edited_object();
  BaseButton::is_pressed();
  EditorProperty::get_edited_property();
  if (local_78 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(local_78 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar2,SUB81((StrRange *)&local_70,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)this + 0x380))(this);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_notification(int) [clone .part.0] */

void EditorPropertyDictionary::_notification(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  Ref *pRVar3;
  StringName *pSVar4;
  long lVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  undefined4 in_register_0000003c;
  StringName *pSVar9;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  Object *local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar9 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::clear(SUB81(*(undefined8 *)(pSVar9 + 0xb58),0));
  uVar2 = *(undefined8 *)(pSVar9 + 0xb58);
  local_60 = 0;
  local_58 = (Object *)&_LC3;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x113ad5;
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  PopupMenu::add_icon_item(uVar2,(StringName *)&local_70,(String *)&local_58,0x27,0);
  if (local_70 != (Object *)0x0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      cVar7 = predelete_handler(local_70);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
    }
  }
  uVar11 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  PopupMenu::add_separator(*(String **)(pSVar9 + 0xb58),(int)(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  do {
    if ((0x6800000UL >> (uVar11 & 0x3f) & 1) == 0) {
      Variant::get_type_name((StrRange *)&local_68,uVar11);
      uVar2 = *(undefined8 *)(pSVar9 + 0xb58);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      Control::get_editor_theme_icon((StringName *)&local_58);
      PopupMenu::add_icon_item(uVar2,(String *)&local_58,(StrRange *)&local_68,uVar11,0);
      if (local_58 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        pOVar6 = local_58;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_58);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar5 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar10;
  } while (uVar10 != 0x27);
  pRVar3 = *(Ref **)(pSVar9 + 0xba8);
  if (pRVar3 != (Ref *)0x0) {
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    Button::set_button_icon(pRVar3);
    if (local_58 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_58;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_58);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    local_60 = 0;
    pSVar4 = *(StringName **)(pSVar9 + 0xb98);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_58,pSVar9);
    Control::add_theme_style_override(pSVar4,(Ref *)(SceneStringNames::singleton + 600));
    if (local_58 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_58;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_58);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_notification(int) */

void __thiscall EditorPropertyDictionary::_notification(EditorPropertyDictionary *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorPropertyArray::EditorPropertyArray() */

void __thiscall EditorPropertyArray::EditorPropertyArray(EditorPropertyArray *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  RefCounted *this_00;
  Button *this_01;
  CallableCustom *pCVar6;
  PopupMenu *this_02;
  Object *pOVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  Button local_98 [16];
  Callable local_88 [16];
  undefined8 local_78 [2];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined ***)this = &PTR__initialize_classv_001273e8;
  *(undefined8 *)(this + 0xbd8) = 0x27ffffffff;
  *(undefined8 *)(this + 0xbf8) = 0xffffffff;
  *(undefined8 *)(this + 0xb58) = 0;
  this[0xb60] = (EditorPropertyArray)0x0;
  *(undefined8 *)(this + 0xb64) = 0x14;
  *(undefined4 *)(this + 0xb6c) = 0xffffffff;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined8 *)(this + 3000) = 0;
  *(undefined8 *)(this + 0xbd0) = 0;
  this[0xbe0] = (EditorPropertyArray)0x0;
  *(undefined8 *)(this + 0xc00) = 0;
  *(undefined2 *)(this + 0xc08) = 0;
  *(undefined1 (*) [16])(this + 0xb70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbe8) = (undefined1  [16])0x0;
  this_00 = (RefCounted *)operator_new(0x198,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00127128;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    pOVar8 = *(Object **)(this + 0xc00);
    if (pOVar8 == (Object *)0x0) goto LAB_0010382f;
    *(undefined8 *)(this + 0xc00) = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 == '\0') goto LAB_0010382f;
    this_00 = (RefCounted *)0x0;
    cVar4 = predelete_handler(pOVar8);
    if (cVar4 == '\0') goto LAB_0010382f;
LAB_00103cf3:
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
    pOVar7 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_0010382f;
  }
  else {
    pOVar8 = *(Object **)(this + 0xc00);
    pOVar7 = pOVar8;
    if (this_00 != (RefCounted *)pOVar8) {
      *(RefCounted **)(this + 0xc00) = this_00;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0xc00) = 0;
      }
      pOVar7 = (Object *)this_00;
      if (((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) goto LAB_00103cf3;
    }
  }
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_0010382f:
  local_78[0] = 0;
  local_68 = "interface/inspector/max_array_dictionary_items_per_page";
  local_60 = 0x37;
  String::parse_latin1((StrRange *)local_78);
  _EDITOR_GET((String *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xb64) = iVar5;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  this_01 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(this_01,(String *)&local_68);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xb70) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb70),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb70),0));
  plVar1 = *(long **)(this + 0xb70);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyArray>
            ((EditorPropertyArray *)&local_68,(char *)this,
             (_func_void *)"&EditorPropertyArray::_edit_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb70),0));
  plVar1 = *(long **)(this + 0xb70);
  pcVar2 = *(code **)(*plVar1 + 0x318);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC3;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_001284c8;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar3;
  *(EditorPropertyArray **)(pCVar6 + 0x28) = this;
  *(undefined8 *)(pCVar6 + 0x38) = 0x419;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorPropertyArray::drop_data_fw";
  Callable::Callable((Callable *)&local_68,pCVar6);
  Callable::bind<Button*>((Button *)local_78);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC3;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_00128438;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar3;
  *(EditorPropertyArray **)(pCVar6 + 0x28) = this;
  *(undefined8 *)(pCVar6 + 0x38) = 0x411;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "EditorPropertyArray::can_drop_data_fw";
  Callable::Callable(local_88,pCVar6);
  Callable::bind<Button*>(local_98);
  local_a8 = 0;
  local_a0 = 0;
  (*pcVar2)(plVar1,(Callable *)&local_a8,local_98,(StrRange *)local_78);
  Callable::~Callable((Callable *)&local_a8);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable(local_88);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  plVar1 = *(long **)(this + 0xb70);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyArray>
            ((EditorPropertyArray *)&local_68,(char *)this,
             (_func_void *)"&EditorPropertyArray::_button_draw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xb70),0,0);
  EditorProperty::add_focusable((Control *)this);
  this_02 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_02);
  postinitialize_handler((Object *)this_02);
  *(PopupMenu **)(this + 0xb58) = this_02;
  Node::add_child(this,this_02,0,0);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyArray,int>
            ((EditorPropertyArray *)&local_68,(char *)this,
             (_func_void_int *)"&EditorPropertyArray::_change_type_menu");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  *(undefined4 *)(this + 0xb6c) = 0xffffffff;
  *(undefined8 *)(this + 0xba4) = 0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)(this + 0xbb0));
  this[0xb50] = (EditorPropertyArray)0x1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyDictionary::EditorPropertyDictionary() */

void __thiscall EditorPropertyDictionary::EditorPropertyDictionary(EditorPropertyDictionary *this)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  Button *this_00;
  PopupMenu *this_01;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00127818;
  *(undefined2 *)(this + 0xb60) = 0;
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined8 *)(this + 0xb70) = 0x14;
  *(undefined4 *)(this + 0xb78) = 0xfffffffd;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined8 *)(this + 3000) = 0;
  *(undefined8 *)(this + 0xbc0) = 0;
  *(undefined8 *)(this + 0xbd0) = 0;
  *(undefined8 *)(this + 0xbe0) = 0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xba0) = (undefined1  [16])0x0;
  Ref<EditorPropertyDictionaryObject>::instantiate<>
            ((Ref<EditorPropertyDictionaryObject> *)(this + 0xb68));
  local_58 = "interface/inspector/max_array_dictionary_items_per_page";
  local_60 = 0;
  local_50 = 0x37;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0xb70) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(Button **)(this + 0xb80) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb80),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb80),0));
  plVar1 = *(long **)(this + 0xb80);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyDictionary>
            ((EditorPropertyDictionary *)&local_58,(char *)this,
             (_func_void *)"&EditorPropertyDictionary::_edit_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb80),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb80),0,0);
  EditorProperty::add_focusable((Control *)this);
  *(undefined8 *)(this + 0xb88) = 0;
  *(undefined1 (*) [16])(this + 0xba8) = (undefined1  [16])0x0;
  this_01 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_01);
  postinitialize_handler((Object *)this_01);
  *(PopupMenu **)(this + 0xb58) = this_01;
  Node::add_child(this,this_01,0,0);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyDictionary,int>
            ((EditorPropertyDictionary *)&local_58,(char *)this,
             (_func_void_int *)"&EditorPropertyDictionary::_change_type_menu");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this[0xb50] = (EditorPropertyDictionary)0x1;
  *(undefined4 *)(this + 0xb78) = 0xfffffffd;
  *(undefined8 *)(this + 0xbc8) = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)(this + 0xbd0));
  *(undefined8 *)(this + 0xbd8) = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)(this + 0xbe0));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::EditorPropertyLocalizableString() */

void __thiscall
EditorPropertyLocalizableString::EditorPropertyLocalizableString
          (EditorPropertyLocalizableString *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  Button *this_00;
  EditorLocaleDialog *this_01;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined8 *)(this + 0xb58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00127be8;
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined8 *)(this + 0xb70) = 0x14;
  *(undefined1 (*) [16])(this + 0xb78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb98) = (undefined1  [16])0x0;
  Ref<EditorPropertyDictionaryObject>::instantiate<>
            ((Ref<EditorPropertyDictionaryObject> *)(this + 0xb68));
  local_68 = "interface/inspector/max_array_dictionary_items_per_page";
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xb70) = iVar5;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  this_00 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(this_00,(String *)&local_68);
  postinitialize_handler((Object *)this_00);
  *(Button **)(this + 0xb78) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb78),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb78),0));
  plVar1 = *(long **)(this + 0xb78);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyLocalizableString>
            ((EditorPropertyLocalizableString *)&local_68,(char *)this,
             (_func_void *)"&EditorPropertyLocalizableString::_edit_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb78),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb78),0,0);
  EditorProperty::add_focusable((Control *)this);
  this[0xb60] = (EditorPropertyLocalizableString)0x0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined1 (*) [16])(this + 0xb98) = (undefined1  [16])0x0;
  this_01 = (EditorLocaleDialog *)operator_new(0xe20,"");
  EditorLocaleDialog::EditorLocaleDialog(this_01);
  postinitialize_handler((Object *)this_01);
  lVar3 = *(long *)this_01;
  *(EditorLocaleDialog **)(this + 0xb58) = this_01;
  pcVar2 = *(code **)(lVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00128af8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar4;
  *(code **)(this_02 + 0x38) = _add_locale;
  *(EditorPropertyLocalizableString **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorPropertyLocalizableString::_add_locale";
  Callable::Callable((Callable *)&local_68,this_02);
  StringName::StringName((StringName *)&local_70,"locale_selected",false);
  (*pcVar2)(this_01,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xb58),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProperty::initialize_class() [clone .part.0] */

void EditorProperty::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (Container::initialize_class()::initialized == '\0') {
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0012f010 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_58 = "Node";
        local_68 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
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
  local_58 = "EditorProperty";
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
  if ((code *)PTR__bind_methods_0012f008 != Container::_bind_methods) {
    EditorProperty::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyArray::setup(Variant::Type, String const&) */

void __thiscall
EditorPropertyArray::setup(EditorPropertyArray *this,undefined4 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  wchar32 wVar4;
  wchar32 wVar5;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_3;
  *(undefined4 *)(this + 0xba0) = param_2;
  if ((lVar1 != 0) && (1 < *(uint *)(lVar1 + -8))) {
    wVar4 = (wchar32)param_3;
    iVar2 = String::find_char(wVar4,0x3a);
    if (-1 < iVar2) {
      wVar5 = (wchar32)(CowData<char32_t> *)&local_50;
      String::substr(wVar5,wVar4);
      iVar2 = String::find_char(wVar5,0x2f);
      if (-1 < iVar2) {
        iVar2 = (int)(CowData<char32_t> *)&local_48;
        String::substr(iVar2,wVar5);
        uVar3 = String::to_int();
        *(undefined4 *)(this + 0xba8) = uVar3;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        String::substr(iVar2,wVar5);
        if (local_50 != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          local_50 = local_48;
          local_48 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      String::substr((int)(CowData<char32_t> *)&local_48,wVar4);
      if (*(long *)(this + 0xbb0) != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbb0));
        lVar1 = local_48;
        local_48 = 0;
        *(long *)(this + 0xbb0) = lVar1;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      uVar3 = String::to_int();
      *(undefined4 *)(this + 0xba4) = uVar3;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_page_changed(int) [clone .part.0] */

void __thiscall EditorPropertyArray::_page_changed(EditorPropertyArray *this,int param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  String *pSVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  iVar6 = *(int *)(this + 0xbd8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = *(undefined8 **)(this + 0xbc0);
  *(int *)(this + 0xb68) = param_1;
  iVar7 = param_1 * *(int *)(this + 0xb64);
  puVar2 = puVar8 + (ulong)*(uint *)(this + 3000) * 6;
  if (iVar6 < 0) {
    for (; puVar8 != puVar2; puVar8 = puVar8 + 6) {
      itos((long)&local_48);
      operator+((char *)&local_50,(String *)"indices/");
      lVar5 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      pOVar3 = (Object *)puVar8[4];
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      EditorProperty::set_object_and_property(pOVar3,(StringName *)*puVar8);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      pSVar4 = (String *)puVar8[4];
      itos((long)&local_48);
      EditorProperty::set_label(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      *(int *)(puVar8 + 2) = iVar7;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      iVar7 = iVar7 + 1;
    }
  }
  else {
    iVar7 = iVar7 + (uint)(iVar6 / *(int *)(this + 0xb64) < param_1);
    if ((ulong)*(uint *)(this + 3000) * 3 != 0) {
      while( true ) {
        if (*(int *)(puVar8 + 2) == iVar6) {
          iVar7 = iVar7 + (uint)(iVar7 == iVar6);
        }
        else {
          itos((long)&local_48);
          operator+((char *)&local_50,(String *)"indices/");
          lVar5 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          pOVar3 = (Object *)puVar8[4];
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          EditorProperty::set_object_and_property(pOVar3,(StringName *)*puVar8);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          pSVar4 = (String *)puVar8[4];
          itos((long)&local_48);
          EditorProperty::set_label(pSVar4);
          lVar5 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_50;
          *(int *)(puVar8 + 2) = iVar7;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          iVar7 = iVar7 + 1;
        }
        if (puVar2 == puVar8 + 6) break;
        puVar8 = puVar8 + 6;
        iVar6 = *(int *)(this + 0xbd8);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00104ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x380))(this);
  return;
}



/* EditorPropertyArray::_page_changed(int) */

void __thiscall EditorPropertyArray::_page_changed(EditorPropertyArray *this,int param_1)

{
  if (this[0xc08] == (EditorPropertyArray)0x0) {
    _page_changed(this,param_1);
    return;
  }
  return;
}



/* EditorPropertyArray::_reorder_button_up() */

void __thiscall EditorPropertyArray::_reorder_button_up(EditorPropertyArray *this)

{
  Variant *pVVar1;
  int iVar2;
  Vector2 *pVVar3;
  Object *pOVar4;
  char *__s;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  size_t sVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  StringName *local_190;
  int *local_188;
  long local_158;
  long local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  Variant *local_c8;
  undefined1 local_c0 [16];
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_88 [3];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = EditorProperty::is_read_only();
  if (cVar6 == '\0') {
    if (*(int *)(this + 0xbd8) != *(int *)(this + 0xbf8)) {
      Variant::Variant((Variant *)local_88,(Variant *)(*(long *)(this + 0xc00) + 0x180));
      Variant::duplicate(SUB81((StringName *)local_128,0));
      if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      Node::move_child(*(Node **)(this + 0xb80),(int)*(undefined8 *)(this + 0xbd0));
      Variant::Variant((Variant *)local_88,*(int *)(this + 0xbd8));
      Variant::get((Variant *)local_108,(bool *)local_128,(VariantGetError *)local_88);
      if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar2 = *(int *)(this + 0xbd8);
      StringName::StringName((StringName *)&local_158,"remove_at",false);
      Variant::Variant((Variant *)local_88,iVar2);
      local_70[0] = 0;
      local_70[1] = 0;
      local_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      local_a8 = (Variant *)((ulong)local_a8._4_4_ << 0x20);
      local_68 = (undefined1  [16])0x0;
      auStack_a0 = (undefined1  [16])0x0;
      local_c8 = (Variant *)local_88;
      Variant::callp((StringName *)local_128,(Variant **)&local_158,(int)(CallError *)&local_c8,
                     (Variant *)0x1,(CallError *)&local_a8);
      if (local_148 != 0) {
        if (local_158 == 0) {
          local_150 = 0;
        }
        else {
          __s = *(char **)(local_158 + 8);
          local_150 = 0;
          if (__s == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)(local_158 + 0x10));
          }
          else {
            sVar8 = strlen(__s);
            uStack_130 = (undefined4)sVar8;
            uStack_12c = (undefined4)(sVar8 >> 0x20);
            local_138 = (int)__s;
            uStack_134 = (undefined4)((ulong)__s >> 0x20);
            String::parse_latin1((StrRange *)&local_150);
          }
        }
        local_190 = (StringName *)&local_150;
        Variant::_variant_call_error((String *)local_128,(CallError *)local_190);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
      }
      local_188 = &local_138;
      local_190 = (StringName *)&local_150;
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_158 != 0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_e8,(Variant *)local_108);
      iVar2 = *(int *)(this + 0xbf8);
      StringName::StringName(local_190,"insert",false);
      Variant::Variant((Variant *)local_88,iVar2);
      Variant::Variant((Variant *)local_70,(Variant *)local_e8);
      local_58 = 0;
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      local_c8 = (Variant *)((ulong)local_c8 & 0xffffffff00000000);
      local_50 = (undefined1  [16])0x0;
      auStack_a0._0_8_ = (Variant *)local_70;
      local_c0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      Variant::callp((StringName *)local_128,(Variant **)local_190,(int)(CallError *)&local_a8,
                     (Variant *)0x2,(CallError *)&local_c8);
      if (local_138 != 0) {
        if (local_150 == 0) {
          local_148 = 0;
          uStack_144 = 0;
        }
        else {
          local_148 = 0;
          uStack_144 = 0;
          if (*(char **)(local_150 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(local_150 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_148,*(char **)(local_150 + 8));
          }
        }
        Variant::_variant_call_error((String *)local_128,(CallError *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      }
      pVVar9 = (Variant *)local_40;
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)local_88);
      if (Variant::needs_deinit[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_150 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (*(uint *)(this + 3000) <=
          (uint)((long)*(int *)(this + 0xbf8) % (long)*(int *)(this + 0xb64))) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,
                   (long)*(int *)(this + 0xbf8) % (long)*(int *)(this + 0xb64) & 0xffffffff,
                   (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      Control::grab_focus();
      local_138 = 0;
      uStack_134 = 0;
      EditorProperty::get_edited_property();
      EditorProperty::emit_changed
                ((StringName *)this,(String *)&local_148,(StringName *)local_128,SUB81(local_188,0))
      ;
      if ((StringName::configured != '\0') &&
         (((CONCAT44(uStack_144,local_148) == 0 ||
           (StringName::unref(), StringName::configured != '\0')) &&
          (CONCAT44(uStack_134,local_138) != 0)))) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_108[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_128[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    uVar7 = Input::get_singleton();
    Input::set_mouse_mode(uVar7,0);
    pVVar3 = *(Vector2 **)(this + 0xbf0);
    if (pVVar3 == (Vector2 *)0x0) {
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_reorder_button_up","editor/editor_properties_array_dict.cpp",0x37a,
                         "Parameter \"reorder_slot.reorder_button\" is null.",0,0);
        return;
      }
      goto LAB_001055bc;
    }
    uVar7 = Control::get_size();
    local_88[0] = CONCAT44(_LC90._4_4_ * (float)((ulong)uVar7 >> 0x20),(float)_LC90 * (float)uVar7);
    Control::warp_mouse(pVVar3);
    pOVar4 = *(Object **)(this + 0xbc8);
    *(undefined8 *)(this + 0xbf8) = 0xffffffff;
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)(this + 0xbc8) = 0;
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    *(undefined8 *)(this + 0xbd0) = 0;
    *(undefined8 *)(this + 0xbd8) = 0x27ffffffff;
    this[0xbe0] = (EditorPropertyArray)0x0;
    *(undefined1 (*) [16])(this + 0xbe8) = (undefined1  [16])0x0;
    if (this[0xc08] == (EditorPropertyArray)0x0) {
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        _page_changed(this,*(int *)(this + 0xb68));
        return;
      }
      goto LAB_001055bc;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001055bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_page_changed(int) */

void __thiscall EditorPropertyDictionary::_page_changed(EditorPropertyDictionary *this,int param_1)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  String *pSVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  puVar6 = *(undefined8 **)(this + 0xbc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = param_1 * *(int *)(this + 0xb70);
  *(int *)(this + 0xb74) = param_1;
  puVar9 = puVar6 + (ulong)*(uint *)(this + 3000) * 8;
  for (; puVar9 != puVar6; puVar6 = puVar6 + 8) {
    while (*(int *)(puVar6 + 2) < 0) {
      puVar6 = puVar6 + 8;
      if (puVar9 == puVar6) goto LAB_00105768;
    }
    *(int *)(puVar6 + 2) = iVar8;
    iVar7 = (int)&local_48;
    EditorPropertyDictionaryObject::get_property_name_for_index(iVar7);
    lVar5 = local_48;
    lVar2 = puVar6[6];
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = puVar6[6];
          puVar6[6] = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      puVar6[6] = local_48;
    }
    EditorPropertyDictionaryObject::get_key_name_for_index(iVar7);
    lVar5 = local_48;
    lVar2 = puVar6[7];
    if (lVar2 == local_48) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = puVar6[7];
          puVar6[7] = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      puVar6[7] = local_48;
    }
    pOVar3 = (Object *)puVar6[4];
    StringName::StringName((StringName *)&local_48,(String *)(puVar6 + 6),false);
    EditorProperty::set_object_and_property(pOVar3,(StringName *)*puVar6);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pOVar3 = (Object *)puVar6[5];
    if (pOVar3 == (Object *)0x0) {
      pSVar4 = (String *)puVar6[4];
      EditorPropertyDictionaryObject::get_label_for_index(iVar7);
      EditorProperty::set_label(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
    else {
      StringName::StringName((StringName *)&local_48,(String *)(puVar6 + 7),false);
      EditorProperty::set_object_and_property(pOVar3,(StringName *)*puVar6);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    iVar8 = iVar8 + 1;
  }
LAB_00105768:
  if (this[0xb60] == (EditorPropertyDictionary)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001057a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x380))(this);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_length_changed(double) [clone .part.0] */

void __thiscall EditorPropertyArray::_length_changed(EditorPropertyArray *this,double param_1)

{
  char cVar1;
  char *__s;
  long in_FS_OFFSET;
  CallError *local_108;
  long local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  char *local_d8;
  size_t local_d0;
  Variant *local_c8 [2];
  int local_b8 [8];
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,(Variant *)(*(long *)(this + 0xc00) + 0x180));
  Variant::duplicate(SUB81((StringName *)local_b8,0));
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_f8,"resize",false);
  Variant::Variant((Variant *)local_78,(int)param_1);
  local_60 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_98[0] = 0;
  local_58 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_c8[0] = (Variant *)local_78;
  Variant::callp((StringName *)local_b8,(Variant **)&local_f8,(int)local_c8,(Variant *)0x1,
                 (CallError *)local_98);
  if (local_e8 != 0) {
    if (local_f8 == 0) {
      local_f0 = 0;
    }
    else {
      __s = *(char **)(local_f8 + 8);
      local_f0 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(local_f8 + 0x10));
      }
      else {
        local_d0 = strlen(__s);
        local_d8 = __s;
        String::parse_latin1((StrRange *)&local_f0);
      }
    }
    local_108 = (CallError *)&local_f0;
    Variant::_variant_call_error((String *)local_b8,local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  }
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_e8,(StringName *)local_b8,SUB81(&local_d8,0));
  if ((StringName::configured != '\0') &&
     (((CONCAT44(uStack_e4,local_e8) == 0 || (StringName::unref(), StringName::configured != '\0'))
      && (local_d8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_length_changed(double) */

void __thiscall EditorPropertyArray::_length_changed(EditorPropertyArray *this,double param_1)

{
  if (this[0xc08] != (EditorPropertyArray)0x0) {
    return;
  }
  _length_changed(this,param_1);
  return;
}



/* EditorPropertyArray::_add_element() */

void __thiscall EditorPropertyArray::_add_element(EditorPropertyArray *this)

{
  char cVar1;
  code *pcVar2;
  char *__s;
  long in_FS_OFFSET;
  double dVar3;
  long local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  char *local_a8;
  size_t local_a0;
  int local_98 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)this + 0x3c8);
  Variant::Variant((Variant *)local_98,(Variant *)(*(long *)(this + 0xc00) + 0x180));
  StringName::StringName((StringName *)&local_c8,"size",false);
  local_58 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_78[0] = 0;
  local_50 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  Variant::callp((StringName *)local_98,(Variant **)&local_c8,0,(Variant *)0x0,(CallError *)local_78
                );
  if (local_b8 != 0) {
    if (local_c8 == 0) {
      local_c0 = 0;
    }
    else {
      __s = *(char **)(local_c8 + 8);
      local_c0 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_c8 + 0x10));
      }
      else {
        local_a0 = strlen(__s);
        local_a8 = __s;
        String::parse_latin1((StrRange *)&local_c0);
      }
    }
    Variant::_variant_call_error((String *)local_98,(CallError *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  dVar3 = Variant::operator_cast_to_double((Variant *)local_78);
  if (pcVar2 == _length_changed) {
    if (this[0xc08] == (EditorPropertyArray)0x0) {
      _length_changed(this,dVar3 + _LC93);
      cVar1 = Variant::needs_deinit[local_78[0]];
      goto joined_r0x00105da3;
    }
  }
  else {
    (*pcVar2)(this);
  }
  cVar1 = Variant::needs_deinit[local_78[0]];
joined_r0x00105da3:
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyArray::_remove_pressed(int) */

void __thiscall EditorPropertyArray::_remove_pressed(EditorPropertyArray *this,int param_1)

{
  uint uVar1;
  int iVar2;
  char *__s;
  code *pcVar3;
  long in_FS_OFFSET;
  CallError *local_108;
  long local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  char *local_d8;
  size_t local_d0;
  Variant *local_c8 [2];
  int local_b8 [8];
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,(Variant *)(*(long *)(this + 0xc00) + 0x180));
  Variant::duplicate(SUB81((StringName *)local_b8,0));
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    uVar1 = *(uint *)(this + 3000);
  }
  else {
    Variant::_clear_internal();
    uVar1 = *(uint *)(this + 3000);
  }
  if (uVar1 <= (uint)param_1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,(ulong)uVar1
               ,"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar2 = *(int *)((ulong)(uint)param_1 * 0x30 + *(long *)(this + 0xbc0) + 0x10);
  StringName::StringName((StringName *)&local_f8,"remove_at",false);
  Variant::Variant((Variant *)local_78,iVar2);
  local_60 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_98[0] = 0;
  local_58 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_c8[0] = (Variant *)local_78;
  Variant::callp((StringName *)local_b8,(Variant **)&local_f8,(int)local_c8,(Variant *)0x1,
                 (CallError *)local_98);
  if (local_e8 != 0) {
    if (local_f8 == 0) {
      local_f0 = 0;
    }
    else {
      __s = *(char **)(local_f8 + 8);
      local_f0 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(local_f8 + 0x10));
      }
      else {
        local_d0 = strlen(__s);
        local_d8 = __s;
        String::parse_latin1((StrRange *)&local_f0);
      }
    }
    local_108 = (CallError *)&local_f0;
    Variant::_variant_call_error((String *)local_b8,local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  }
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_e8,(StringName *)local_b8,SUB81(&local_d8,0));
  if ((StringName::configured != '\0') &&
     (((CONCAT44(uStack_e4,local_e8) == 0 || (StringName::unref(), StringName::configured != '\0'))
      && (local_d8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyArray::_reorder_button_gui_input(Ref<InputEvent> const&) */

void __thiscall
EditorPropertyArray::_reorder_button_gui_input(EditorPropertyArray *this,Ref *param_1)

{
  char *__s;
  char cVar1;
  int iVar2;
  Object *pOVar3;
  int iVar4;
  Node *pNVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  long local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  char *local_a8;
  size_t local_a0;
  int local_98 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((-1 < *(int *)(this + 0xbd8)) && (cVar1 = EditorProperty::is_read_only(), cVar1 == '\0')) &&
      (*(long *)param_1 != 0)) &&
     ((pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseMotion::typeinfo),
      pOVar3 != (Object *)0x0 && (cVar1 = RefCounted::reference(), cVar1 != '\0')))) {
    Variant::Variant((Variant *)local_98,(Variant *)(*(long *)(this + 0xc00) + 0x180));
    StringName::StringName((StringName *)&local_c8,"size",false);
    local_58 = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_78[0] = 0;
    local_50 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    Variant::callp((StringName *)local_98,(Variant **)&local_c8,0,(Variant *)0x0,
                   (CallError *)local_78);
    if (local_b8 != 0) {
      if (local_c8 == 0) {
        local_c0 = 0;
      }
      else {
        __s = *(char **)(local_c8 + 8);
        local_c0 = 0;
        if (__s == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_c8 + 0x10));
        }
        else {
          local_a0 = strlen(__s);
          local_a8 = __s;
          String::parse_latin1((StrRange *)&local_c0);
        }
      }
      Variant::_variant_call_error((String *)local_98,(CallError *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    iVar2 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    InputEventMouseMotion::get_relative();
    fVar6 = extraout_XMM0_Db + *(float *)(this + 0xbfc);
    *(float *)(this + 0xbfc) = fVar6;
    if (((*(int *)(this + 0xbf8) == 0) && (fVar6 < 0.0)) ||
       ((*(int *)(this + 0xbf8) == iVar2 + -1 && (0.0 < fVar6)))) {
      *(undefined4 *)(this + 0xbfc) = 0;
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    else {
      fVar7 = (float)EditorScale::get_scale();
      fVar6 = *(float *)(this + 0xbfc);
      fVar7 = fVar7 * __LC95;
      if (fVar6 < 0.0) {
        if (fVar7 < (float)((uint)fVar6 ^ __LC96)) {
          iVar2 = *(int *)(this + 0xbf8);
          iVar4 = (int)*(undefined8 *)(this + 0xbd0);
          pNVar5 = *(Node **)(this + 0xb80);
LAB_00106557:
          *(int *)(this + 0xbf8) = iVar2 + -1;
          *(float *)(this + 0xbfc) = fVar6 + fVar7;
          Node::move_child(pNVar5,iVar4);
          if (*(int *)(this + 0xbf8) % *(int *)(this + 0xb64) == *(int *)(this + 0xb64) + -1) {
            iVar2 = -1;
LAB_00106470:
            if (this[0xc08] == (EditorPropertyArray)0x0) {
              _page_changed(this,*(int *)(this + 0xb68) + iVar2);
            }
          }
          goto LAB_0010648a;
        }
      }
      else if (fVar7 < fVar6) {
        iVar4 = (int)*(undefined8 *)(this + 0xbd0);
        pNVar5 = *(Node **)(this + 0xb80);
        iVar2 = *(int *)(this + 0xbf8);
        if (fVar6 <= 0.0) goto LAB_00106557;
        *(int *)(this + 0xbf8) = iVar2 + 1;
        *(float *)(this + 0xbfc) = fVar6 - fVar7;
        Node::move_child(pNVar5,iVar4);
        if (*(int *)(this + 0xbf8) % *(int *)(this + 0xb64) == 0) {
          iVar2 = 1;
          goto LAB_00106470;
        }
LAB_0010648a:
        ScrollContainer::ensure_control_visible(*(Control **)(InspectorDock::singleton + 0xa18));
      }
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar3,false);
        return;
      }
      goto LAB_001065fa;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001065fa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::update_property() */

void __thiscall
EditorPropertyLocalizableString::update_property(EditorPropertyLocalizableString *this)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  String *pSVar11;
  EditorPropertyText *this_00;
  CallableCustom *pCVar12;
  BoxContainer *pBVar13;
  Ref *pRVar14;
  MarginContainer *this_01;
  BoxContainer *this_02;
  EditorPaginator *this_03;
  undefined8 uVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_150;
  Variant local_f0 [8];
  Object *local_e8;
  undefined8 local_e0;
  long local_d8 [2];
  Object *local_c8;
  undefined8 local_c0;
  int local_b8 [2];
  undefined1 local_b0 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_b8,*(bool **)(this + 0xa10));
    if (local_b8[0] != 0) {
      Variant::operator_cast_to_Dictionary(local_f0);
      Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb68) + 0x1b0),(Dictionary *)local_f0);
      pSVar11 = *(String **)(this + 0xb78);
      Dictionary::size();
      local_c8 = (Object *)&_LC3;
      local_e0 = 0;
      local_c0 = 0;
      String::parse_latin1((StrRange *)&local_e0);
      local_e8 = (Object *)0x0;
      local_c8 = (Object *)0x113b53;
      local_c0 = 0x1c;
      String::parse_latin1((StrRange *)&local_e8);
      TTR((String *)local_d8,(String *)&local_e8);
      iVar10 = (int)(String *)local_d8;
      vformat<int>((String *)&local_c8,iVar10);
      Button::set_text(pSVar11);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      pSVar11 = (String *)EditorProperty::get_edited_object();
      EditorProperty::get_edited_property();
      if (local_d8[0] == 0) {
        local_c8 = (Object *)0x0;
      }
      else {
        local_c8 = (Object *)0x0;
        if (*(char **)(local_d8[0] + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(local_d8[0] + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_c8,*(char **)(local_d8[0] + 8));
        }
      }
      cVar6 = Object::editor_is_section_unfolded(pSVar11);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
        StringName::unref();
      }
      cVar7 = BaseButton::is_pressed();
      if (cVar7 != cVar6) {
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb78),0));
      }
      if (cVar6 == '\0') {
        if (*(long *)(this + 0xb80) != 0) {
          EditorProperty::set_bottom_editor((Control *)this);
          pOVar4 = *(Object **)(this + 0xb80);
          cVar6 = predelete_handler(pOVar4);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          *(undefined8 *)(this + 0xb98) = 0;
          *(undefined8 *)(this + 0xb80) = 0;
        }
      }
      else {
        this[0xb60] = (EditorPropertyLocalizableString)0x1;
        if (*(long *)(this + 0xb80) == 0) {
          this_01 = (MarginContainer *)operator_new(0xa10,"");
          MarginContainer::MarginContainer(this_01);
          postinitialize_handler((Object *)this_01);
          *(MarginContainer **)(this + 0xb80) = this_01;
          StringName::StringName((StringName *)&local_c8,"MarginContainer4px",false);
          Control::set_theme_type_variation((StringName *)this_01);
          if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
            StringName::unref();
          }
          Node::add_child(this,*(undefined8 *)(this + 0xb80),0,0);
          EditorProperty::set_bottom_editor((Control *)this);
          pBVar13 = (BoxContainer *)operator_new(0xa10,"");
          BoxContainer::BoxContainer(pBVar13,true);
          pBVar13[0xa0c] = (BoxContainer)0x1;
          *(undefined ***)pBVar13 = &PTR__initialize_classv_00126db0;
          postinitialize_handler((Object *)pBVar13);
          Node::add_child(*(undefined8 *)(this + 0xb80),pBVar13,0,0);
          this_02 = (BoxContainer *)operator_new(0xa10,"");
          BoxContainer::BoxContainer(this_02,true);
          this_02[0xa0c] = (BoxContainer)0x1;
          *(undefined ***)this_02 = &PTR__initialize_classv_00126db0;
          postinitialize_handler((Object *)this_02);
          *(BoxContainer **)(this + 0xb88) = this_02;
          Control::set_h_size_flags(this_02,3);
          Node::add_child(pBVar13,*(undefined8 *)(this + 0xb88),0,0);
          this_03 = (EditorPaginator *)operator_new(0xa48,"");
          EditorPaginator::EditorPaginator(this_03);
          postinitialize_handler((Object *)this_03);
          lVar1 = *(long *)this_03;
          *(EditorPaginator **)(this + 0xba0) = this_03;
          pcVar3 = *(code **)(lVar1 + 0x108);
          pCVar12 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar12);
          *(undefined **)(pCVar12 + 0x20) = &_LC3;
          *(EditorPropertyLocalizableString **)(pCVar12 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
          *(undefined ***)pCVar12 = &PTR_hash_00128828;
          *(undefined8 *)(pCVar12 + 0x40) = 0;
          uVar15 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar12 + 0x10) = 0;
          *(undefined8 *)(pCVar12 + 0x30) = uVar15;
          *(code **)(pCVar12 + 0x38) = _page_changed;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
          *(char **)(pCVar12 + 0x20) = "EditorPropertyLocalizableString::_page_changed";
          Callable::Callable((Callable *)&local_c8,pCVar12);
          StringName::StringName((StringName *)local_d8,"page_changed",false);
          (*pcVar3)(this_03,(String *)local_d8,(String *)&local_c8,0);
          if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)&local_c8);
          Node::add_child(pBVar13,*(undefined8 *)(this + 0xba0),0,0);
        }
        else {
          iVar8 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb88),0));
          iVar8 = iVar8 + -1;
          if (-1 < iVar8) {
            do {
              Node::get_child((int)*(undefined8 *)(this + 0xb88),SUB41(iVar8,0));
              Node::queue_free();
              bVar17 = iVar8 != 0;
              iVar8 = iVar8 + -1;
            } while (bVar17);
          }
        }
        iVar8 = Dictionary::size();
        iVar9 = iVar8 + -1;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        iVar9 = iVar9 / *(int *)(this + 0xb70);
        iVar16 = *(int *)(this + 0xb74);
        if (iVar9 <= *(int *)(this + 0xb74)) {
          iVar16 = iVar9;
        }
        *(int *)(this + 0xb74) = iVar16;
        EditorPaginator::update((int)*(undefined8 *)(this + 0xba0),iVar16);
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xba0),0));
        iVar16 = *(int *)(this + 0xb74);
        iVar2 = *(int *)(this + 0xb70);
        iVar8 = iVar8 - iVar16 * iVar2;
        if (iVar2 < iVar8) {
          iVar8 = iVar2;
        }
        if (0 < iVar8) {
          local_150 = (long)(iVar16 * iVar2);
          lVar1 = iVar8 + local_150;
          do {
            local_e8 = (Object *)0x0;
            local_90 = (undefined1  [16])0x0;
            local_70 = (undefined1  [16])0x0;
            local_98 = 0;
            local_78 = 0;
            itos((long)local_d8);
            operator+((char *)&local_c8,(String *)"indices/");
            if (local_e8 != local_c8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              local_e8 = local_c8;
              local_c8 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            Dictionary::get_key_at_index((int)local_58);
            if (Variant::needs_deinit[(int)local_98] != '\0') {
              Variant::_clear_internal();
            }
            local_98 = CONCAT44(local_98._4_4_,local_58[0]);
            Dictionary::get_value_at_index((int)local_58);
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            local_78 = CONCAT44(local_78._4_4_,local_58[0]);
            this_00 = (EditorPropertyText *)operator_new(0xb68,"");
            EditorPropertyText::EditorPropertyText(this_00);
            postinitialize_handler((Object *)this_00);
            StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
            EditorProperty::set_object_and_property
                      ((Object *)this_00,*(StringName **)(this + 0xb68));
            if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
              StringName::unref();
            }
            Variant::get_construct_string();
            EditorProperty::set_label((String *)this_00);
            Control::set_tooltip_text((String *)this_00);
            EditorProperty::set_selectable(SUB81(this_00,0));
            pcVar3 = *(code **)(*(long *)this_00 + 0x108);
            pCVar12 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar12);
            *(undefined **)(pCVar12 + 0x20) = &_LC3;
            *(EditorPropertyLocalizableString **)(pCVar12 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
            *(undefined ***)pCVar12 = &PTR_hash_001288b8;
            *(undefined8 *)(pCVar12 + 0x40) = 0;
            uVar15 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar12 + 0x10) = 0;
            *(undefined8 *)(pCVar12 + 0x30) = uVar15;
            *(code **)(pCVar12 + 0x38) = _property_changed;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
            *(char **)(pCVar12 + 0x20) = "EditorPropertyLocalizableString::_property_changed";
            Callable::Callable((Callable *)&local_c8,pCVar12);
            StringName::StringName((StringName *)local_d8,"property_changed",false);
            (*pcVar3)(this_00,(String *)local_d8,(String *)&local_c8,0);
            if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_c8);
            pcVar3 = *(code **)(*(long *)this_00 + 0x108);
            pCVar12 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar12);
            *(undefined **)(pCVar12 + 0x20) = &_LC3;
            *(EditorPropertyLocalizableString **)(pCVar12 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
            *(undefined ***)pCVar12 = &PTR_hash_00128948;
            *(undefined8 *)(pCVar12 + 0x40) = 0;
            uVar15 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar12 + 0x10) = 0;
            *(undefined8 *)(pCVar12 + 0x30) = uVar15;
            *(code **)(pCVar12 + 0x38) = _object_id_selected;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
            *(char **)(pCVar12 + 0x20) = "EditorPropertyLocalizableString::_object_id_selected";
            Callable::Callable((Callable *)&local_c8,pCVar12);
            StringName::StringName((StringName *)local_d8,"object_id_selected",false);
            (*pcVar3)(this_00,(String *)local_d8,(String *)&local_c8,0);
            if ((StringName::configured != '\0') && (local_d8[0] != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_c8);
            pBVar13 = (BoxContainer *)operator_new(0xa10,"");
            BoxContainer::BoxContainer(pBVar13,false);
            pBVar13[0xa0c] = (BoxContainer)0x1;
            *(undefined ***)pBVar13 = &PTR__initialize_classv_00126a38;
            postinitialize_handler((Object *)pBVar13);
            Node::add_child(*(undefined8 *)(this + 0xb88),pBVar13,0,0);
            Node::add_child(pBVar13,this_00,0,0);
            Control::set_h_size_flags(this_00,3);
            pRVar14 = (Ref *)operator_new(0xc10,"");
            local_c8 = (Object *)0x0;
            Button::Button((Button *)pRVar14,(String *)&local_c8);
            postinitialize_handler((Object *)pRVar14);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            if ((update_property()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar8 = __cxa_guard_acquire(&update_property()::{lambda()#1}::operator()()::sname),
               iVar8 != 0)) {
              _scs_create((char *)&update_property()::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &update_property()::{lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&update_property()::{lambda()#1}::operator()()::sname);
            }
            Control::get_editor_theme_icon((StringName *)&local_c8);
            Button::set_button_icon(pRVar14);
            if (((local_c8 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar4 = local_c8, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_c8), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))();
              Memory::free_static(pOVar4,false);
            }
            Node::add_child(pBVar13,pRVar14,0,0);
            pcVar3 = *(code **)(*(long *)pRVar14 + 0x108);
            pCVar12 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar12);
            *(undefined **)(pCVar12 + 0x20) = &_LC3;
            *(EditorPropertyLocalizableString **)(pCVar12 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
            *(undefined ***)pCVar12 = &PTR_hash_001289d8;
            *(undefined8 *)(pCVar12 + 0x40) = 0;
            uVar15 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar12 + 0x10) = 0;
            *(undefined8 *)(pCVar12 + 0x30) = uVar15;
            *(code **)(pCVar12 + 0x38) = _remove_item;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
            *(char **)(pCVar12 + 0x20) = "EditorPropertyLocalizableString::_remove_item";
            Callable::Callable((Callable *)local_d8,pCVar12);
            Callable::bind<Button*,int>((Button *)&local_c8,iVar10);
            (*pcVar3)(pRVar14,SceneStringNames::singleton + 0x238,(String *)&local_c8,0);
            Callable::~Callable((Callable *)&local_c8);
            Callable::~Callable((Callable *)local_d8);
            (**(code **)(*(long *)this_00 + 0x380))(this_00);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_98] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            local_150 = local_150 + 1;
          } while (lVar1 != local_150);
          iVar16 = *(int *)(this + 0xb74);
        }
        if (iVar9 == iVar16) {
          local_d8[0] = 0;
          String::parse_latin1((String *)local_d8,"");
          local_e0 = 0;
          String::parse_latin1((String *)&local_e0,"Add Translation");
          TTR((String *)&local_c8,(String *)&local_e0);
          uVar15 = EditorInspector::create_inspector_action_button((String *)&local_c8);
          *(undefined8 *)(this + 0xb98) = uVar15;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          pRVar14 = *(Ref **)(this + 0xb98);
          if ((update_property()::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&update_property()::{lambda()#2}::operator()()::sname),
             iVar10 != 0)) {
            _scs_create((char *)&update_property()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_property()::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_property()::{lambda()#2}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_c8);
          Button::set_button_icon(pRVar14);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
          plVar5 = *(long **)(this + 0xb98);
          pcVar3 = *(code **)(*plVar5 + 0x108);
          create_custom_callable_function_pointer<EditorPropertyLocalizableString>
                    ((EditorPropertyLocalizableString *)&local_c8,(char *)this,
                     (_func_void *)"&EditorPropertyLocalizableString::_add_locale_popup");
          (*pcVar3)(plVar5,SceneStringNames::singleton + 0x238,(String *)&local_c8,0);
          Callable::~Callable((Callable *)&local_c8);
          Node::add_child(*(undefined8 *)(this + 0xb88),*(undefined8 *)(this + 0xb98),0,0);
        }
        this[0xb60] = (EditorPropertyLocalizableString)0x0;
      }
      Dictionary::~Dictionary((Dictionary *)local_f0);
      cVar6 = Variant::needs_deinit[local_b8[0]];
      goto joined_r0x001070cc;
    }
  }
  pSVar11 = *(String **)(this + 0xb78);
  local_d8[0] = 0;
  String::parse_latin1((String *)local_d8,"");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Localizable String (Nil)");
  TTR((String *)&local_c8,(String *)&local_e0);
  Button::set_text(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb78),0));
  if (*(long *)(this + 0xb80) != 0) {
    EditorProperty::set_bottom_editor((Control *)this);
    pOVar4 = *(Object **)(this + 0xb80);
    cVar6 = predelete_handler(pOVar4);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    *(undefined8 *)(this + 0xb98) = 0;
    *(undefined8 *)(this + 0xb80) = 0;
  }
  cVar6 = Variant::needs_deinit[local_b8[0]];
joined_r0x001070cc:
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_create_new_property_slot() */

void __thiscall EditorPropertyArray::_create_new_property_slot(EditorPropertyArray *this)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  BoxContainer *this_00;
  Button *this_01;
  CallableCustom *pCVar8;
  EditorPropertyNil *this_02;
  Button *pBVar9;
  ulong uVar10;
  void *pvVar11;
  int iVar12;
  Object *pOVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  EditorPropertyArray local_78 [16];
  Object *local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar12 = *(int *)(this + 3000);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00126a38;
  postinitialize_handler((Object *)this_00);
  this_01 = (Button *)operator_new(0xc10,"");
  local_68[0] = (Object *)0x0;
  Button::Button(this_01,(String *)local_68);
  postinitialize_handler((Object *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  if (_create_new_property_slot()::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_create_new_property_slot()::{lambda()#1}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_create_new_property_slot()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_new_property_slot()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_new_property_slot()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)local_68);
  Button::set_button_icon((Ref *)this_01);
  if (local_68[0] != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar13 = local_68[0];
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68[0]);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
  }
  Control::set_default_cursor_shape(this_01,0xd);
  EditorProperty::is_read_only();
  BaseButton::set_disabled(SUB81(this_01,0));
  pcVar3 = *(code **)(*(long *)this_01 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC3;
  *(EditorPropertyArray **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00127fb8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = _reorder_button_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "EditorPropertyArray::_reorder_button_gui_input";
  Callable::Callable((Callable *)local_68,pCVar8);
  (*pcVar3)(this_01,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pcVar3 = *(code **)(*(long *)this_01 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyArray>
            ((EditorPropertyArray *)local_68,(char *)this,
             (_func_void *)"&EditorPropertyArray::_reorder_button_up");
  if (_create_new_property_slot()::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_create_new_property_slot()::{lambda()#2}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_create_new_property_slot()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_new_property_slot()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_new_property_slot()::{lambda()#2}::operator()()::sname);
    }
  }
  (*pcVar3)(this_01,&_create_new_property_slot()::{lambda()#2}::operator()()::sname,
            (CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pcVar3 = *(code **)(*(long *)this_01 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyArray,int>
            (local_78,(char *)this,(_func_void_int *)"&EditorPropertyArray::_reorder_button_down");
  iVar7 = (int)(CowData<char32_t> *)local_68;
  Callable::bind<int>(iVar7);
  if (_create_new_property_slot()::{lambda()#3}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_create_new_property_slot()::{lambda()#3}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_create_new_property_slot()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_new_property_slot()::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_new_property_slot()::{lambda()#3}::operator()()::sname);
    }
  }
  (*pcVar3)(this_01,&_create_new_property_slot()::{lambda()#3}::operator()()::sname,
            (CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  Node::add_child(this_00,this_01,0,0);
  this_02 = (EditorPropertyNil *)operator_new(0xb60,"");
  EditorPropertyNil::EditorPropertyNil(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(this_00,this_02,0,0);
  Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xc00) + 0x180));
  if (local_58[0] == 0x1c) {
    if (*(int *)(this + 0xba4) != 0) goto LAB_00107f30;
    Variant::_clear_internal();
    pBVar9 = (Button *)operator_new(0xc10,"");
    local_68[0] = (Object *)0x0;
    Button::Button(pBVar9,(String *)local_68);
    postinitialize_handler((Object *)pBVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    if (_create_new_property_slot()::{lambda()#4}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_create_new_property_slot()::{lambda()#4}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_create_new_property_slot()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_new_property_slot()::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_new_property_slot()::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon((Ref *)pBVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    EditorProperty::is_read_only();
    BaseButton::set_disabled(SUB81(pBVar9,0));
    pcVar3 = *(code **)(*(long *)pBVar9 + 0x108);
    pCVar8 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar8);
    *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar8 + 0x40) = 0;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined **)(pCVar8 + 0x20) = &_LC3;
    *(undefined ***)pCVar8 = &PTR_hash_00128168;
    *(EditorPropertyArray **)(pCVar8 + 0x28) = this;
    *(undefined8 *)(pCVar8 + 0x30) = uVar4;
    *(undefined8 *)(pCVar8 + 0x10) = 0;
    *(undefined8 *)(pCVar8 + 0x38) = 0x3e1;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
    *(char **)(pCVar8 + 0x20) = "EditorPropertyArray::_change_type";
    Callable::Callable((Callable *)local_78,pCVar8);
    Callable::bind<Button*,int>((Button *)local_68,(int)local_78);
    (*pcVar3)(pBVar9,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
    Callable::~Callable((Callable *)local_68);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(this_00,pBVar9,0,0);
  }
  else {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
LAB_00107f30:
      Variant::_clear_internal();
    }
    pBVar9 = (Button *)operator_new(0xc10,"");
    local_68[0] = (Object *)0x0;
    Button::Button(pBVar9,(String *)local_68);
    postinitialize_handler((Object *)pBVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    if (_create_new_property_slot()::{lambda()#5}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_create_new_property_slot()::{lambda()#5}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_create_new_property_slot()::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_new_property_slot()::{lambda()#5}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_new_property_slot()::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_68);
    Button::set_button_icon((Ref *)pBVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_68);
    EditorProperty::is_read_only();
    BaseButton::set_disabled(SUB81(pBVar9,0));
    pcVar3 = *(code **)(*(long *)pBVar9 + 0x108);
    create_custom_callable_function_pointer<EditorPropertyArray,int>
              (local_78,(char *)this,(_func_void_int *)"&EditorPropertyArray::_remove_pressed");
    Callable::bind<int>(iVar7);
    (*pcVar3)(pBVar9,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
    Callable::~Callable((Callable *)local_68);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(this_00,pBVar9,0,0);
  }
  Node::add_child(*(undefined8 *)(this + 0xb80),this_00,0,0);
  pOVar13 = *(Object **)(this + 0xc00);
  if (pOVar13 != (Object *)0x0) {
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      pOVar13 = (Object *)0x0;
    }
  }
  iVar12 = iVar12 + *(int *)(this + 0xb68) * *(int *)(this + 0xb64);
  itos((long)local_68);
  operator+((char *)local_78,(String *)"indices/");
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  StringName::StringName((StringName *)local_68,(String *)local_78,false);
  EditorProperty::set_object_and_property((Object *)this_02,(StringName *)pOVar13);
  if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
    StringName::unref();
  }
  itos((long)local_68);
  EditorProperty::set_label((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (pOVar13 == (Object *)0x0) {
    pOVar14 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::reference();
    pOVar14 = (Object *)0x0;
    if (cVar5 != '\0') {
      pOVar14 = pOVar13;
    }
  }
  uVar2 = *(uint *)(this + 3000);
  pvVar11 = *(void **)(this + 0xbc0);
  if (uVar2 == *(uint *)(this + 0xbbc)) {
    uVar10 = (ulong)(uVar2 * 2);
    if (uVar2 * 2 == 0) {
      uVar10 = 1;
    }
    *(int *)(this + 0xbbc) = (int)uVar10;
    pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar10 * 0x30,false);
    *(void **)(this + 0xbc0) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(uint *)(this + 3000);
  }
  *(uint *)(this + 3000) = uVar2 + 1;
  puVar1 = (undefined8 *)((long)pvVar11 + (ulong)uVar2 * 0x30);
  *puVar1 = 0;
  if (pOVar14 == (Object *)0x0) {
    puVar1[1] = this_00;
    *(undefined4 *)((long)puVar1 + 0x14) = 0x27;
    *(int *)(puVar1 + 2) = iVar12;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = this_02;
    puVar1[5] = this_01;
  }
  else {
    *puVar1 = pOVar14;
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') {
      *puVar1 = 0;
    }
    puVar1[1] = this_00;
    *(undefined4 *)((long)puVar1 + 0x14) = 0x27;
    *(int *)(puVar1 + 2) = iVar12;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = this_02;
    puVar1[5] = this_01;
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(pOVar14);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
    }
  }
  if (pOVar13 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(pOVar13);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar13,false);
          return;
        }
        goto LAB_001080ee;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001080ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_create_new_property_slot(int) */

void __thiscall
EditorPropertyDictionary::_create_new_property_slot(EditorPropertyDictionary *this,int param_1)

{
  Variant *pVVar1;
  code *pcVar2;
  StringName *pSVar3;
  EditorPropertyNil *pEVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  BoxContainer *this_00;
  EditorPropertyNil *pEVar9;
  undefined8 uVar10;
  CallableCustom *this_01;
  Variant *pVVar11;
  long lVar12;
  long *plVar13;
  long in_FS_OFFSET;
  Button *local_158;
  EditorPropertyNil *local_150;
  Callable *local_148;
  code *local_140;
  StringName *local_128;
  BoxContainer *pBStack_120;
  int local_118;
  undefined8 local_114;
  undefined2 local_10c;
  EditorPropertyNil *local_108;
  EditorPropertyNil *pEStack_100;
  long local_f8;
  long lStack_f0;
  Object *local_e8;
  long local_e0;
  int local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  String *local_c8;
  Object *pOStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00126a38;
  postinitialize_handler((Object *)this_00);
  if (param_1 + 2U < 2) {
    pEVar9 = (EditorPropertyNil *)operator_new(0xb60,"");
    EditorPropertyNil::EditorPropertyNil(pEVar9);
    postinitialize_handler((Object *)pEVar9);
    Control::set_h_size_flags(pEVar9,3);
    Node::add_child(this_00,pEVar9,0,0);
    if (param_1 == -2) {
      iVar7 = *(int *)(this + 0xbc8);
    }
    else {
      iVar7 = *(int *)(this + 0xbd8);
    }
    local_150 = (EditorPropertyNil *)0x0;
    if (iVar7 == 0) {
LAB_00108798:
      local_158 = (Button *)operator_new(0xc10,"");
      local_e8 = (Object *)0x0;
      Button::Button(local_158,(String *)&local_e8);
      postinitialize_handler((Object *)local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      if ((_create_new_property_slot(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_create_new_property_slot(int)::{lambda()#1}::operator()()::
                                       sname), iVar7 != 0)) {
        _scs_create((char *)&_create_new_property_slot(int)::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_create_new_property_slot(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_create_new_property_slot(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_e8);
      Button::set_button_icon((Ref *)local_158);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
      EditorProperty::is_read_only();
      BaseButton::set_disabled(SUB81(local_158,0));
      local_140 = *(code **)(*(long *)local_158 + 0x108);
      this_01 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_01);
      *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
      *(undefined8 *)(this_01 + 0x40) = 0;
      uVar10 = *(undefined8 *)(this + 0x60);
      *(undefined ***)this_01 = &PTR_hash_00128558;
      *(undefined **)(this_01 + 0x20) = &_LC3;
      *(undefined8 *)(this_01 + 0x30) = uVar10;
      *(code **)(this_01 + 0x38) = _change_type;
      *(undefined8 *)(this_01 + 0x10) = 0;
      *(EditorPropertyDictionary **)(this_01 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
      *(char **)(this_01 + 0x20) = "EditorPropertyDictionary::_change_type";
      Callable::Callable((Callable *)&local_128,this_01);
      uVar8 = *(uint *)(this + 3000);
      Variant::Variant((Variant *)local_88,(Object *)local_158);
      Variant::Variant((Variant *)local_70,uVar8);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      Callable::bindp((Variant **)&local_e8,(int)(Callable *)&local_128);
      pVVar11 = (Variant *)local_40;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar11 != (Variant *)local_88);
      goto LAB_00108434;
    }
LAB_001081da:
    lVar12 = *(long *)(this + 0xb98);
    if (lVar12 == 0) goto LAB_00108486;
LAB_001081ea:
    uVar10 = Node::get_child((int)lVar12,false);
    Node::add_child(uVar10,this_00,0,0);
  }
  else {
    local_150 = (EditorPropertyNil *)operator_new(0xb60,"");
    EditorPropertyNil::EditorPropertyNil(local_150);
    postinitialize_handler((Object *)local_150);
    Node::add_child(this_00,local_150,0,0);
    pEVar9 = (EditorPropertyNil *)operator_new(0xb60,"");
    EditorPropertyNil::EditorPropertyNil(pEVar9);
    postinitialize_handler((Object *)pEVar9);
    Control::set_h_size_flags(pEVar9,3);
    EditorProperty::set_draw_label(SUB81(pEVar9,0));
    Node::add_child(this_00,pEVar9,0,0);
    if (*(int *)(this + 0xbd8) == 0) goto LAB_00108798;
    if (param_1 < 0) goto LAB_001081da;
    local_158 = (Button *)operator_new(0xc10,"");
    local_e8 = (Object *)0x0;
    Button::Button(local_158,(String *)&local_e8);
    postinitialize_handler((Object *)local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if ((_create_new_property_slot(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_create_new_property_slot(int)::{lambda()#2}::operator()()::
                                     sname), iVar7 != 0)) {
      _scs_create((char *)&_create_new_property_slot(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_new_property_slot(int)::{lambda()#2}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&_create_new_property_slot(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_e8);
    Button::set_button_icon((Ref *)local_158);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e8);
    EditorProperty::is_read_only();
    BaseButton::set_disabled(SUB81(local_158,0));
    local_140 = *(code **)(*(long *)local_158 + 0x108);
    create_custom_callable_function_pointer<EditorPropertyDictionary,int>
              ((EditorPropertyDictionary *)&local_128,(char *)this,
               (_func_void_int *)"&EditorPropertyDictionary::_remove_pressed");
    Variant::Variant((Variant *)local_88,*(uint *)(this + 3000));
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    Callable::bindp((Variant **)&local_e8,(int)(EditorPropertyDictionary *)&local_128);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00108434:
    local_148 = (Callable *)&local_128;
    (*local_140)(local_158,SceneStringNames::singleton + 0x238,(Callable *)&local_e8,0);
    Callable::~Callable((Callable *)&local_e8);
    Callable::~Callable(local_148);
    Node::add_child(this_00,local_158,0,0);
    lVar12 = *(long *)(this + 0xb98);
    if (lVar12 != 0) goto LAB_001081ea;
LAB_00108486:
    Node::add_child(*(undefined8 *)(this + 0xb90),this_00,0,0);
  }
  local_128 = *(StringName **)(this + 0xb68);
  local_118 = 0xffffffff;
  local_114 = _LC122;
  local_10c = 0;
  pEStack_100 = local_150;
  local_f8 = 0;
  lStack_f0 = 0;
  local_108 = pEVar9;
  if (local_128 != (StringName *)0x0) {
    pBStack_120 = (BoxContainer *)0x0;
    cVar6 = RefCounted::reference();
    if (cVar6 != '\0') goto LAB_001084a5;
  }
  local_128 = (StringName *)0x0;
LAB_001084a5:
  pBStack_120 = this_00;
  if (-1 < param_1) {
    param_1 = param_1 + *(int *)(this + 0xb74) * *(int *)(this + 0xb70);
  }
  iVar7 = (int)(CowData<char32_t> *)&local_e8;
  local_118 = param_1;
  EditorPropertyDictionaryObject::get_property_name_for_index(iVar7);
  if ((Object *)local_f8 != local_e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    local_f8 = (long)local_e8;
    local_e8 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  EditorPropertyDictionaryObject::get_key_name_for_index(iVar7);
  if ((Object *)lStack_f0 != local_e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_f0);
    lStack_f0 = (long)local_e8;
    local_e8 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  pEVar9 = local_108;
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  EditorProperty::set_object_and_property((Object *)pEVar9,local_128);
  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
    StringName::unref();
  }
  pEVar4 = pEStack_100;
  pEVar9 = local_108;
  if (pEStack_100 == (EditorPropertyNil *)0x0) {
    EditorPropertyDictionaryObject::get_label_for_index(iVar7);
    EditorProperty::set_label((String *)pEVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  else {
    StringName::StringName((StringName *)&local_e8,(String *)&lStack_f0,false);
    EditorProperty::set_object_and_property((Object *)pEVar4,local_128);
    if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  local_e8 = (Object *)0x0;
  if (local_128 != (StringName *)0x0) {
    local_e8 = (Object *)local_128;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      local_e8 = (Object *)0x0;
    }
  }
  local_b8 = 0;
  local_e0 = (long)pBStack_120;
  local_c8 = (String *)local_108;
  pOStack_c0 = (Object *)pEStack_100;
  local_d8 = local_118;
  local_d4 = local_114;
  local_cc = local_10c;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_b0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&lStack_f0);
  uVar8 = *(uint *)(this + 3000);
  if (uVar8 == *(uint *)(this + 0xbbc)) {
    uVar8 = uVar8 * 2;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    *(uint *)(this + 0xbbc) = uVar8;
    lVar12 = Memory::realloc_static(*(void **)(this + 0xbc0),(ulong)uVar8 << 6,false);
    *(long *)(this + 0xbc0) = lVar12;
    if (lVar12 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar8 = *(uint *)(this + 3000);
  }
  else {
    lVar12 = *(long *)(this + 0xbc0);
  }
  plVar13 = (long *)(lVar12 + (ulong)uVar8 * 0x40);
  *(uint *)(this + 3000) = uVar8 + 1;
  *plVar13 = 0;
  if (local_e8 != (Object *)0x0) {
    *plVar13 = (long)local_e8;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      *plVar13 = 0;
    }
  }
  plVar13[1] = local_e0;
  *(int *)(plVar13 + 2) = local_d8;
  *(undefined8 *)((long)plVar13 + 0x14) = local_d4;
  plVar13[6] = 0;
  *(undefined2 *)((long)plVar13 + 0x1c) = local_cc;
  plVar13[4] = (long)local_c8;
  plVar13[5] = (long)pOStack_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(plVar13 + 6),(CowData *)&local_b8);
  plVar13[7] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(plVar13 + 7),(CowData *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  pOVar5 = local_e8;
  if (((local_e8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((local_128 != (StringName *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
    pSVar3 = local_128;
    cVar6 = predelete_handler((Object *)local_128);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::update_property() */

void __thiscall EditorPropertyArray::update_property(EditorPropertyArray *this)

{
  Slot *pSVar1;
  Slot *pSVar2;
  undefined4 uVar3;
  Ref *pRVar4;
  code *pcVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  String *pSVar12;
  Object *pOVar13;
  long lVar14;
  EditorPropertyObjectID *this_00;
  CallableCustom *pCVar15;
  PanelContainer *this_01;
  BoxContainer *this_02;
  BoxContainer *pBVar16;
  Label *this_03;
  EditorSpinSlider *this_04;
  undefined8 uVar17;
  EditorPaginator *this_05;
  ulong uVar18;
  ulong extraout_RDX;
  long lVar19;
  bool bVar20;
  Slot *this_06;
  long in_FS_OFFSET;
  Slot SVar21;
  CowData<char32_t> *local_130;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8 [2];
  int local_b8 [2];
  undefined1 local_b0 [16];
  StringName *local_98 [4];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_b8,*(bool **)(this + 0xa10));
  }
  Variant::get_type_name((CowData *)&local_108,*(undefined4 *)(this + 0xba0));
  local_100 = 0;
  if ((*(int *)(this + 0xba0) == 0x1c) && (*(int *)(this + 0xba4) != 0)) {
    local_e8 = 0;
    if ((*(int *)(this + 0xba4) == 0x18) &&
       ((*(int *)(this + 0xba8) == 0x11 || (*(int *)(this + 0xba8) == 0x22)))) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(this + 0xbb0));
    }
    else {
      Variant::get_type_name((CowData<char32_t> *)local_c8);
      if (local_c8[0] != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_c8[0];
        local_c8[0] = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    }
    local_d0 = 0;
    if (this[0xb60] == (EditorPropertyArray)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_e8);
      local_d8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"%s[%s]");
      vformat<String,String>
                ((CowData<char32_t> *)local_c8,(String *)&local_e0,(CowData<char32_t> *)&local_d8,
                 (CowData<char32_t> *)&local_d0);
      lVar14 = local_c8[0];
      if (local_108 != local_c8[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        local_c8[0] = 0;
        local_108 = lVar14;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_e8);
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"[%s] ");
      vformat<String>((CowData<char32_t> *)local_c8,(String *)&local_d8,
                      (CowData<char32_t> *)&local_d0);
      lVar14 = local_c8[0];
      if (local_c8[0] != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        local_100 = lVar14;
        local_c8[0] = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  local_130 = (CowData<char32_t> *)&local_100;
  if (local_b8[0] < 0x1c) {
    if (this[0xb60] == (EditorPropertyArray)0x0) {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb70),1);
      local_c8[0] = 0;
      Button::set_button_icon(*(Ref **)(this + 0xb70));
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
      pSVar12 = *(String **)(this + 0xb70);
      local_d0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_108);
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"");
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"(Nil) %s");
      TTR((String *)&local_d8,(String *)&local_e8);
      vformat<String>((Ref<Texture2D> *)local_c8,(String *)&local_d8,(CowData<char32_t> *)&local_d0)
      ;
      Button::set_text(pSVar12);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    else {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb70),0);
      pRVar4 = *(Ref **)(this + 0xb70);
      if ((update_property()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&update_property()::{lambda()#1}::operator()()::sname),
         iVar11 != 0)) {
        _scs_create((char *)&update_property()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&update_property()::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_c8);
      Button::set_button_icon(pRVar4);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
      Button::set_text(*(String **)(this + 0xb70));
    }
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb70),0));
    if (*(long *)(this + 0xb78) != 0) {
      EditorProperty::set_bottom_editor((Control *)this);
      pOVar13 = *(Object **)(this + 0xb78);
      cVar7 = predelete_handler(pOVar13);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
      *(undefined8 *)(this + 0xb90) = 0;
      *(undefined8 *)(this + 0xb78) = 0;
      LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false>::resize
                ((LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false> *)(this + 3000),0)
      ;
    }
    CowData<char32_t>::_unref(local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    cVar7 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    Variant::operator=((Variant *)(*(long *)(this + 0xc00) + 0x180),(Variant *)local_b8);
    StringName::StringName((StringName *)local_c8,"size",false);
    Variant::call<>((StringName *)local_78);
    iVar11 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
      StringName::unref();
    }
    iVar9 = iVar11 + -1;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    iVar10 = iVar9 / *(int *)(this + 0xb64);
    uVar18 = (ulong)(uint)(iVar9 % *(int *)(this + 0xb64));
    if ((iVar10 < *(int *)(this + 0xb68)) && (this[0xc08] == (EditorPropertyArray)0x0)) {
      _page_changed(this,iVar10);
      uVar18 = extraout_RDX;
    }
    if (this[0xb60] == (EditorPropertyArray)0x0) {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb70),1,uVar18);
      local_c8[0] = 0;
      Button::set_button_icon(*(Ref **)(this + 0xb70));
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
      pSVar12 = *(String **)(this + 0xb70);
      local_d0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_108);
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"");
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"%s (size %d)");
      TTR((String *)&local_d8,(String *)&local_e8);
      vformat<String,int>((Ref<Texture2D> *)local_c8,(String *)&local_d8,
                          (CowData<char32_t> *)&local_d0,iVar11);
      Button::set_text(pSVar12);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    }
    else {
      Variant::get_construct_string();
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"(");
      String::operator+((String *)&local_d8,(String *)&local_108);
      String::trim_prefix((String *)&local_d0);
      String::trim_suffix((char *)local_c8);
      String::replace((char *)&local_f8,(char *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      if (((*(int *)(this + 0xba0) == 0x1c) && (*(int *)(this + 0xba4) != 0)) &&
         (iVar9 = String::find((char *)&local_f8,0x113c0e), 0 < iVar9)) {
        String::substr((int)(Ref<Texture2D> *)local_c8,(int)(CowData *)&local_f8);
        lVar14 = local_f8;
        if (local_f8 != local_c8[0]) {
          lVar19 = local_c8[0];
          if (local_f8 != 0) {
            LOCK();
            plVar6 = (long *)(local_f8 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_f8 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
              lVar19 = local_c8[0];
            }
          }
          local_c8[0] = 0;
          local_f8 = lVar19;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      }
      Button::set_text_overrun_behavior(*(undefined8 *)(this + 0xb70),3);
      Button::set_text_alignment(*(undefined8 *)(this + 0xb70),0);
      pRVar4 = *(Ref **)(this + 0xb70);
      StringName::StringName((StringName *)&local_d0,(String *)&local_108,false);
      Control::get_editor_theme_icon((StringName *)local_c8);
      Button::set_button_icon(pRVar4);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      pSVar12 = *(String **)(this + 0xb70);
      local_d0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
      local_d8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_130);
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"%s%s");
      vformat<String,String>
                ((Ref<Texture2D> *)local_c8,(String *)&local_e0,(String *)&local_d8,
                 (String *)&local_d0);
      Button::set_text(pSVar12);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      pSVar12 = *(String **)(this + 0xb70);
      local_d0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_130);
      local_d8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = 0;
      String::parse_latin1((String *)&local_f0,"%s%s (size %d)");
      TTR((String *)&local_e0,(String *)&local_f0);
      vformat<String,String,int>
                ((Ref<Texture2D> *)local_c8,(String *)&local_e0,(String *)&local_d8,
                 (String *)&local_d0,iVar11);
      Control::set_tooltip_text(pSVar12);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    pSVar12 = (String *)EditorProperty::get_edited_object();
    EditorProperty::get_edited_property();
    if (local_d0 == 0) {
      local_c8[0] = 0;
    }
    else {
      local_c8[0] = 0;
      if (*(char **)(local_d0 + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_c8,(CowData *)(local_d0 + 0x10));
      }
      else {
        String::parse_latin1((String *)local_c8,*(char **)(local_d0 + 8));
      }
    }
    cVar7 = Object::editor_is_section_unfolded(pSVar12);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    cVar8 = BaseButton::is_pressed();
    if (cVar8 != cVar7) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb70),0));
    }
    if (cVar7 == '\0') {
      if (*(long *)(this + 0xb78) != 0) {
        EditorProperty::set_bottom_editor((Control *)this);
        pOVar13 = *(Object **)(this + 0xb78);
        cVar7 = predelete_handler(pOVar13);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        *(undefined8 *)(this + 0xb90) = 0;
        *(undefined8 *)(this + 0xb78) = 0;
        LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false>::resize
                  ((LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false> *)(this + 3000),
                   0);
      }
    }
    else {
      this[0xc08] = (EditorPropertyArray)0x1;
      if (*(long *)(this + 0xb78) == 0) {
        this_01 = (PanelContainer *)operator_new(0xa08,"");
        PanelContainer::PanelContainer(this_01);
        postinitialize_handler((Object *)this_01);
        *(PanelContainer **)(this + 0xb78) = this_01;
        Node::add_child(this,this_01,0,0);
        EditorProperty::set_bottom_editor((Control *)this);
        this_02 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(this_02,true);
        this_02[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)this_02 = &PTR__initialize_classv_00126db0;
        postinitialize_handler((Object *)this_02);
        Node::add_child(*(undefined8 *)(this + 0xb78),this_02,0,0);
        pBVar16 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar16,false);
        pBVar16[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar16 = &PTR__initialize_classv_00126a38;
        postinitialize_handler((Object *)pBVar16);
        Node::add_child(this_02,pBVar16,0,0);
        this_03 = (Label *)operator_new(0xad8,"");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Size:");
        TTR((String *)local_c8,(String *)&local_d8);
        Label::Label(this_03,(String *)local_c8);
        postinitialize_handler((Object *)this_03);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        Control::set_h_size_flags(this_03,3);
        Node::add_child(pBVar16,this_03,0,0);
        this_04 = (EditorSpinSlider *)operator_new(0xa70,"");
        EditorSpinSlider::EditorSpinSlider(this_04);
        postinitialize_handler((Object *)this_04);
        *(EditorSpinSlider **)(this + 0xb88) = this_04;
        Range::set_step(_LC93);
        Range::set_max(_LC135);
        EditorSpinSlider::set_editing_integer(SUB81(*(undefined8 *)(this + 0xb88),0));
        Control::set_h_size_flags(*(undefined8 *)(this + 0xb88),3);
        uVar17 = *(undefined8 *)(this + 0xb88);
        EditorProperty::is_read_only();
        EditorSpinSlider::set_read_only(SUB81(uVar17,0));
        plVar6 = *(long **)(this + 0xb88);
        pcVar5 = *(code **)(*plVar6 + 0x108);
        pCVar15 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar15);
        *(undefined8 *)(pCVar15 + 0x40) = 0;
        *(undefined1 (*) [16])(pCVar15 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar15 + 0x20) = &_LC3;
        uVar17 = *(undefined8 *)(this + 0x60);
        *(undefined ***)pCVar15 = &PTR_hash_001281f8;
        *(undefined8 *)(pCVar15 + 0x30) = uVar17;
        *(undefined8 *)(pCVar15 + 0x10) = 0;
        *(EditorPropertyArray **)(pCVar15 + 0x28) = this;
        *(undefined8 *)(pCVar15 + 0x38) = 0x3c9;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar15,(int)pCVar15 + 0x28);
        *(char **)(pCVar15 + 0x20) = "EditorPropertyArray::_length_changed";
        Callable::Callable((Callable *)local_c8,pCVar15);
        (*pcVar5)(plVar6,SceneStringNames::singleton + 0x280,(Ref<Texture2D> *)local_c8,0);
        Callable::~Callable((Callable *)local_c8);
        Node::add_child(pBVar16,*(undefined8 *)(this + 0xb88),0,0);
        pBVar16 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar16,true);
        pBVar16[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar16 = &PTR__initialize_classv_00126db0;
        postinitialize_handler((Object *)pBVar16);
        *(BoxContainer **)(this + 0xb80) = pBVar16;
        Control::set_h_size_flags(pBVar16,3);
        Node::add_child(this_02,*(undefined8 *)(this + 0xb80),0,0);
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Add Element");
        TTR((String *)local_c8,(String *)&local_d8);
        uVar17 = EditorInspector::create_inspector_action_button((String *)local_c8);
        *(undefined8 *)(this + 0xb90) = uVar17;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        pRVar4 = *(Ref **)(this + 0xb90);
        if ((update_property()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&update_property()::{lambda()#2}::operator()()::sname),
           iVar9 != 0)) {
          _scs_create((char *)&update_property()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#2}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&update_property()::{lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)local_c8);
        Button::set_button_icon(pRVar4);
        Ref<Texture2D>::unref((Ref<Texture2D> *)local_c8);
        plVar6 = *(long **)(this + 0xb90);
        pcVar5 = *(code **)(*plVar6 + 0x108);
        create_custom_callable_function_pointer<EditorPropertyArray>
                  ((EditorPropertyArray *)local_c8,(char *)this,
                   (_func_void *)"&EditorPropertyArray::_add_element");
        (*pcVar5)(plVar6,SceneStringNames::singleton + 0x238,(Ref<Texture2D> *)local_c8,0);
        Callable::~Callable((Callable *)local_c8);
        uVar17 = *(undefined8 *)(this + 0xb90);
        EditorProperty::is_read_only();
        BaseButton::set_disabled(SUB81(uVar17,0));
        Node::add_child(this_02,*(undefined8 *)(this + 0xb90),0,0);
        this_05 = (EditorPaginator *)operator_new(0xa48,"");
        EditorPaginator::EditorPaginator(this_05);
        postinitialize_handler((Object *)this_05);
        lVar14 = *(long *)this_05;
        *(EditorPaginator **)(this + 0xb98) = this_05;
        pcVar5 = *(code **)(lVar14 + 0x108);
        create_custom_callable_function_pointer<EditorPropertyArray,int>
                  ((EditorPropertyArray *)local_c8,(char *)this,
                   (_func_void_int *)"&EditorPropertyArray::_page_changed");
        StringName::StringName((StringName *)&local_d0,"page_changed",false);
        (*pcVar5)(this_05,(String *)&local_d0,(Ref<Texture2D> *)local_c8,0);
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)local_c8);
        Node::add_child(this_02,*(undefined8 *)(this + 0xb98),0,0);
        if (0 < *(int *)(this + 0xb64)) {
          iVar9 = 0;
          do {
            iVar9 = iVar9 + 1;
            _create_new_property_slot(this);
          } while (iVar9 < *(int *)(this + 0xb64));
        }
      }
      Range::set_value((double)iVar11);
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb80),0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb90),0));
      EditorPaginator::update((int)*(undefined8 *)(this + 0xb98),*(int *)(this + 0xb68));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb98),0));
      this_06 = *(Slot **)(this + 0xbc0);
      pSVar2 = this_06 + (ulong)*(uint *)(this + 3000) * 0x30;
      for (; pSVar2 != this_06; this_06 = this_06 + 0x30) {
        while ((pSVar1 = this_06 + 8, this_06 == (Slot *)(this + 0xbc8) ||
               (iVar11 <= *(int *)(this_06 + 0x10)))) {
          this_06 = this_06 + 0x30;
          CanvasItem::set_visible(SUB81(*(undefined8 *)pSVar1,0));
          if (pSVar2 == this_06) goto LAB_00109718;
        }
        CanvasItem::set_visible(SUB81(*(undefined8 *)pSVar1,0));
        iVar9 = *(int *)(this_06 + 0x10);
        iVar10 = *(int *)(this + 0xba4);
        if (iVar10 == 0) {
          Variant::Variant((Variant *)local_98,iVar9);
          Variant::get((Variant *)local_78,(bool *)local_b8,(VariantGetError *)local_98);
          iVar10 = local_78[0];
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        Variant::Variant((Variant *)local_98,iVar9);
        Variant::get((Variant *)local_78,(bool *)local_b8,(VariantGetError *)local_98);
        pOVar13 = Variant::operator_cast_to_Object_((Variant *)local_78);
        if (pOVar13 == (Object *)0x0) {
          SVar21 = (Slot)0x0;
        }
        else {
          lVar14 = __dynamic_cast(pOVar13,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
          SVar21 = (Slot)(lVar14 != 0);
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((*(int *)(this_06 + 0x14) != iVar10) || ((iVar10 == 0x18 && (this_06[0x18] != SVar21))))
        {
          this_06[0x18] = SVar21;
          *(int *)(this_06 + 0x14) = iVar10;
          if ((iVar10 == 0x18) && (SVar21 != (Slot)0x0)) {
            this_00 = (EditorPropertyObjectID *)operator_new(0xb68,"");
            EditorPropertyObjectID::EditorPropertyObjectID(this_00);
            postinitialize_handler((Object *)this_00);
            local_c8[0] = 0;
            String::parse_latin1((String *)local_c8,"Object");
            EditorPropertyObjectID::setup((String *)this_00);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
          }
          else {
            local_c8[0] = 0;
            uVar3 = *(undefined4 *)(this + 0xba8);
            String::parse_latin1((String *)local_c8,"");
            this_00 = (EditorPropertyObjectID *)
                      EditorInspector::instantiate_property_editor
                                (this,iVar10,(Ref<Texture2D> *)local_c8,uVar3,this + 0xbb0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
          }
          bVar20 = SUB81(this_00,0);
          EditorProperty::set_selectable(bVar20);
          EditorProperty::is_using_folding();
          EditorProperty::set_use_folding(bVar20);
          pcVar5 = *(code **)(*(long *)this_00 + 0x108);
          pCVar15 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar15);
          *(EditorPropertyArray **)(pCVar15 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar15 + 0x30) = (undefined1  [16])0x0;
          *(undefined8 *)(pCVar15 + 0x40) = 0;
          *(undefined **)(pCVar15 + 0x20) = &_LC3;
          *(undefined ***)pCVar15 = &PTR_hash_00128288;
          uVar17 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar15 + 0x10) = 0;
          *(undefined8 *)(pCVar15 + 0x30) = uVar17;
          *(undefined8 *)(pCVar15 + 0x38) = 0x3d9;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar15,(int)pCVar15 + 0x28);
          *(char **)(pCVar15 + 0x20) = "EditorPropertyArray::_property_changed";
          Callable::Callable((Callable *)local_c8,pCVar15);
          if ((update_property()::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&update_property()::{lambda()#3}::operator()()::sname),
             iVar10 != 0)) {
            _scs_create((char *)&update_property()::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_property()::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_property()::{lambda()#3}::operator()()::sname);
          }
          (*pcVar5)(this_00,&update_property()::{lambda()#3}::operator()()::sname,
                    (Ref<Texture2D> *)local_c8);
          Callable::~Callable((Callable *)local_c8);
          pcVar5 = *(code **)(*(long *)this_00 + 0x108);
          pCVar15 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar15);
          *(EditorPropertyArray **)(pCVar15 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar15 + 0x30) = (undefined1  [16])0x0;
          *(undefined8 *)(pCVar15 + 0x40) = 0;
          *(undefined **)(pCVar15 + 0x20) = &_LC3;
          *(undefined ***)pCVar15 = &PTR_hash_00128318;
          uVar17 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar15 + 0x10) = 0;
          *(undefined8 *)(pCVar15 + 0x30) = uVar17;
          *(undefined8 *)(pCVar15 + 0x38) = 0x3f1;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar15,(int)pCVar15 + 0x28);
          *(char **)(pCVar15 + 0x20) = "EditorPropertyArray::_object_id_selected";
          Callable::Callable((Callable *)local_c8,pCVar15);
          if ((update_property()::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&update_property()::{lambda()#4}::operator()()::sname),
             iVar10 != 0)) {
            _scs_create((char *)&update_property()::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_property()::{lambda()#4}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_property()::{lambda()#4}::operator()()::sname);
          }
          (*pcVar5)(this_00,&update_property()::{lambda()#4}::operator()()::sname,
                    (Ref<Texture2D> *)local_c8);
          Callable::~Callable((Callable *)local_c8);
          Control::set_h_size_flags(this_00,3);
          EditorProperty::is_read_only();
          EditorProperty::set_read_only(bVar20);
          Node::add_sibling(*(Node **)(this_06 + 0x20),bVar20);
          Node::queue_free();
          *(EditorPropertyObjectID **)(this_06 + 0x20) = this_00;
          Slot::set_index(this_06,iVar9);
        }
        if (*(int *)(this_06 + 0x10) == *(int *)(this + 0xb6c)) {
          create_custom_callable_function_pointer<EditorProperty,int>
                    ((EditorProperty *)local_c8,*(char **)(this_06 + 0x20),
                     (_func_void_int *)"&EditorProperty::grab_focus");
          Variant::Variant((Variant *)local_78,0);
          Variant::Variant((Variant *)local_60,0);
          local_98[0] = (StringName *)local_78;
          Callable::call_deferredp((Variant **)local_c8,(int)(Variant *)local_98);
          if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Callable::~Callable((Callable *)local_c8);
          *(undefined4 *)(this + 0xb6c) = 0xffffffff;
        }
        (**(code **)(**(long **)(this_06 + 0x20) + 0x380))();
      }
LAB_00109718:
      this[0xc08] = (EditorPropertyArray)0x0;
    }
    CowData<char32_t>::_unref(local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    cVar7 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar7 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyDictionary::update_property() */

void __thiscall EditorPropertyDictionary::update_property(EditorPropertyDictionary *this)

{
  Slot *pSVar1;
  code *pcVar2;
  Ref *pRVar3;
  StringName *pSVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  String *pSVar13;
  CallableCustom *pCVar14;
  Object *pOVar15;
  long lVar16;
  EditorPropertyObjectID *pEVar17;
  PanelContainer *pPVar18;
  BoxContainer *pBVar19;
  BoxContainer *this_00;
  EditorPaginator *this_01;
  undefined8 uVar20;
  EditorPropertyDictionary *pEVar21;
  bool bVar22;
  Slot *this_02;
  long in_FS_OFFSET;
  Slot SVar23;
  CowData<char32_t> *local_168;
  undefined8 local_120;
  Object *local_118;
  Variant local_110 [8];
  Object *local_108;
  Object *local_100;
  Object *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  Object *local_d8;
  undefined8 local_d0;
  Variant *local_c8 [2];
  int local_b8 [2];
  undefined1 local_b0 [16];
  ulong local_98;
  undefined1 local_90 [16];
  ulong local_78;
  undefined1 local_70 [16];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_b8,*(bool **)(this + 0xa10));
  }
  local_120 = 0;
  local_d8 = (Object *)0x113c60;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = (Object *)0x0;
  if ((*(int *)(this + 0xbc8) == 0) && (*(int *)(this + 0xbd8) == 0)) goto joined_r0x0010a94d;
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Variant");
  if (*(int *)(this + 0xbc8) == 0x18) {
    if ((*(int *)(this + 0xbcc) != 0x11) && (*(int *)(this + 0xbcc) != 0x22)) goto LAB_0010b210;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)(this + 0xbd0));
  }
  else if (*(int *)(this + 0xbc8) != 0) {
LAB_0010b210:
    Variant::get_type_name((Ref<Texture2D> *)&local_d8);
    if (local_100 != local_d8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      local_100 = local_d8;
      local_d8 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  local_f8 = (Object *)0x0;
  local_d8 = (Object *)0x113c6b;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_f8);
  if (*(int *)(this + 0xbd8) == 0x18) {
    if ((*(int *)(this + 0xbdc) != 0x11) && (*(int *)(this + 0xbdc) != 0x22)) goto LAB_0010b310;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(this + 0xbe0));
  }
  else if (*(int *)(this + 0xbd8) != 0) {
LAB_0010b310:
    Variant::get_type_name((Ref<Texture2D> *)&local_d8);
    if (local_f8 != local_d8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      local_f8 = local_d8;
      local_d8 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  local_e0 = 0;
  if (this[0xb61] == (EditorPropertyDictionary)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f8);
    local_e8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
    local_f0 = 0;
    String::parse_latin1((String *)&local_f0,"[%s, %s]");
    vformat<String,String>
              ((Ref<Texture2D> *)&local_d8,(String *)&local_f0,(CowData<char32_t> *)&local_e8,
               (CowData<char32_t> *)&local_e0);
    String::operator+=((String *)&local_120,(String *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f8);
    local_e8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
    local_f0 = 0;
    String::parse_latin1((String *)&local_f0,"[%s, %s] ");
    vformat<String,String>
              ((Ref<Texture2D> *)&local_d8,(String *)&local_f0,(CowData<char32_t> *)&local_e8,
               (CowData<char32_t> *)&local_e0);
    pOVar15 = local_d8;
    if (local_d8 != (Object *)0x0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      local_d8 = (Object *)0x0;
      local_118 = pOVar15;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
joined_r0x0010a94d:
  if (local_b8[0] == 0x1b) {
    local_168 = (CowData<char32_t> *)&local_118;
    Variant::operator_cast_to_Dictionary(local_110);
    lVar16 = *(long *)(this + 0xb68);
    Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
    Dictionary::operator=((Dictionary *)(lVar16 + 0x1b0),(Dictionary *)&local_d8);
    Dictionary::~Dictionary((Dictionary *)&local_d8);
    if (this[0xb61] == (EditorPropertyDictionary)0x0) {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb80),1);
      local_d8 = (Object *)0x0;
      Button::set_button_icon(*(Ref **)(this + 0xb80));
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
      pSVar13 = *(String **)(this + 0xb80);
      uVar9 = Dictionary::size();
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_120);
      local_f0 = 0;
      String::parse_latin1((String *)&local_f0,"");
      local_f8 = (Object *)0x0;
      String::parse_latin1((String *)&local_f8,"%s (size %d)");
      TTR((String *)&local_e8,(String *)&local_f8);
      vformat<String,int>((Ref<Texture2D> *)&local_d8,(String *)&local_e8,
                          (CowData<char32_t> *)&local_e0,uVar9);
      Button::set_text(pSVar13);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    }
    else {
      Variant::get_construct_string();
      String::replace((char *)&local_108,(char *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if ((*(int *)(this + 0xbc8) != 0) || (*(int *)(this + 0xbd8) != 0)) {
        iVar12 = String::find((char *)&local_108,0x113c0e);
        if (0 < iVar12) {
          String::substr((int)(CowData<char32_t> *)&local_e0,(int)(CowData<char32_t> *)&local_108);
          String::trim_suffix((char *)&local_d8);
          if (local_108 != local_d8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            local_108 = local_d8;
            local_d8 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        }
      }
      Button::set_text_overrun_behavior(*(undefined8 *)(this + 0xb80),3);
      Button::set_text_alignment(*(undefined8 *)(this + 0xb80),0);
      pRVar3 = *(Ref **)(this + 0xb80);
      StringName::StringName((StringName *)&local_e0,(String *)&local_120,false);
      Control::get_editor_theme_icon((StringName *)&local_d8);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      pSVar13 = *(String **)(this + 0xb80);
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
      local_e8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_168);
      local_f0 = 0;
      String::parse_latin1((String *)&local_f0,"%s%s");
      vformat<String,String>
                ((Ref<Texture2D> *)&local_d8,(String *)&local_f0,(CowData<char32_t> *)&local_e8,
                 (StringName *)&local_e0);
      Button::set_text(pSVar13);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      pSVar13 = *(String **)(this + 0xb80);
      uVar9 = Dictionary::size();
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)local_168);
      local_e8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_120);
      local_f8 = (Object *)0x0;
      String::parse_latin1((String *)&local_f8,"");
      local_100 = (Object *)0x0;
      String::parse_latin1((String *)&local_100,"%s%s (size %d)");
      TTR((String *)&local_f0,(String *)&local_100);
      vformat<String,String,int>
                ((Ref<Texture2D> *)&local_d8,(String *)&local_f0,(CowData<char32_t> *)&local_e8,
                 (StringName *)&local_e0,uVar9);
      Control::set_tooltip_text(pSVar13);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    }
    pSVar13 = (String *)EditorProperty::get_edited_object();
    EditorProperty::get_edited_property();
    if (local_e0 == 0) {
      local_d8 = (Object *)0x0;
    }
    else {
      local_d8 = (Object *)0x0;
      if (*(char **)(local_e0 + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(local_e0 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_d8,*(char **)(local_e0 + 8));
      }
    }
    cVar7 = Object::editor_is_section_unfolded(pSVar13);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    cVar8 = BaseButton::is_pressed();
    if (cVar8 != cVar7) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb80),0));
    }
    if (cVar7 == '\0') {
      if (*(long *)(this + 0xb88) != 0) {
        EditorProperty::set_bottom_editor((Control *)this);
        pOVar15 = *(Object **)(this + 0xb88);
        cVar7 = predelete_handler(pOVar15);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        *(undefined8 *)(this + 0xba8) = 0;
        *(undefined8 *)(this + 0xb88) = 0;
        *(undefined8 *)(this + 0xb98) = 0;
        LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false>::resize
                  ((LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false> *)
                   (this + 3000),0);
      }
    }
    else {
      this[0xb60] = (EditorPropertyDictionary)0x1;
      if (*(long *)(this + 0xb88) == 0) {
        pPVar18 = (PanelContainer *)operator_new(0xa08,"");
        PanelContainer::PanelContainer(pPVar18);
        postinitialize_handler((Object *)pPVar18);
        *(PanelContainer **)(this + 0xb88) = pPVar18;
        Node::add_child(this,pPVar18,0,0);
        EditorProperty::set_bottom_editor((Control *)this);
        pBVar19 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar19,true);
        pBVar19[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar19 = &PTR__initialize_classv_00126db0;
        postinitialize_handler((Object *)pBVar19);
        Node::add_child(*(undefined8 *)(this + 0xb88),pBVar19,0,0);
        this_00 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(this_00,true);
        this_00[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)this_00 = &PTR__initialize_classv_00126db0;
        postinitialize_handler((Object *)this_00);
        *(BoxContainer **)(this + 0xb90) = this_00;
        Control::set_h_size_flags(this_00,3);
        Node::add_child(pBVar19,*(undefined8 *)(this + 0xb90),0,0);
        this_01 = (EditorPaginator *)operator_new(0xa48,"");
        EditorPaginator::EditorPaginator(this_01);
        postinitialize_handler((Object *)this_01);
        lVar16 = *(long *)this_01;
        *(EditorPaginator **)(this + 0xbb0) = this_01;
        pcVar2 = *(code **)(lVar16 + 0x108);
        create_custom_callable_function_pointer<EditorPropertyDictionary,int>
                  ((EditorPropertyDictionary *)&local_d8,(char *)this,
                   (_func_void_int *)"&EditorPropertyDictionary::_page_changed");
        StringName::StringName((StringName *)&local_e0,"page_changed",false);
        (*pcVar2)(this_01,(StringName *)&local_e0,(Ref<Texture2D> *)&local_d8,0);
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)&local_d8);
        iVar12 = 0;
        Node::add_child(pBVar19,*(undefined8 *)(this + 0xbb0),0,0);
        if (0 < *(int *)(this + 0xb70)) {
          do {
            iVar12 = iVar12 + 1;
            _create_new_property_slot(this,*(int *)(this + 3000));
          } while (iVar12 < *(int *)(this + 0xb70));
        }
        pPVar18 = (PanelContainer *)operator_new(0xa08,"");
        PanelContainer::PanelContainer(pPVar18);
        postinitialize_handler((Object *)pPVar18);
        *(PanelContainer **)(this + 0xb98) = pPVar18;
        Node::add_child(*(undefined8 *)(this + 0xb90),pPVar18,0,0);
        pSVar4 = *(StringName **)(this + 0xb98);
        local_e0 = 0;
        if ((update_property()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#2}::operator()()::sname),
           iVar12 != 0)) {
          _scs_create((char *)&update_property()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#2}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&update_property()::{lambda()#2}::operator()()::sname);
        }
        Control::get_theme_stylebox((StringName *)&local_d8,(StringName *)this);
        Control::add_theme_style_override(pSVar4,(Ref *)(SceneStringNames::singleton + 600));
        if (((local_d8 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar15 = local_d8, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_d8), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
          StringName::unref();
        }
        pBVar19 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar19,true);
        pBVar19[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar19 = &PTR__initialize_classv_00126db0;
        postinitialize_handler((Object *)pBVar19);
        Node::add_child(*(undefined8 *)(this + 0xb98),pBVar19,0,0);
        _create_new_property_slot(this,-2);
        _create_new_property_slot(this,-1);
        local_e0 = 0;
        String::parse_latin1((String *)&local_e0,"");
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"Add Key/Value Pair");
        TTR((String *)&local_d8,(String *)&local_e8);
        uVar20 = EditorInspector::create_inspector_action_button((String *)&local_d8);
        *(undefined8 *)(this + 0xba8) = uVar20;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        pRVar3 = *(Ref **)(this + 0xba8);
        if ((update_property()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#3}::operator()()::sname),
           iVar12 != 0)) {
          _scs_create((char *)&update_property()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#3}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&update_property()::{lambda()#3}::operator()()::sname);
        }
        Control::get_theme_icon((StringName *)&local_d8,(StringName *)this);
        Button::set_button_icon(pRVar3);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
        uVar20 = *(undefined8 *)(this + 0xba8);
        EditorProperty::is_read_only();
        BaseButton::set_disabled(SUB81(uVar20,0));
        plVar5 = *(long **)(this + 0xba8);
        pcVar2 = *(code **)(*plVar5 + 0x108);
        create_custom_callable_function_pointer<EditorPropertyDictionary>
                  ((EditorPropertyDictionary *)&local_d8,(char *)this,
                   (_func_void *)"&EditorPropertyDictionary::_add_key_value");
        (*pcVar2)(plVar5,SceneStringNames::singleton + 0x238,(Ref<Texture2D> *)&local_d8,0);
        Callable::~Callable((Callable *)&local_d8);
        Node::add_child(pBVar19,*(undefined8 *)(this + 0xba8),0,0);
      }
      iVar10 = Dictionary::size();
      iVar12 = *(int *)(this + 0xb74);
      iVar11 = iVar10 + -1;
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      if (iVar11 / *(int *)(this + 0xb70) < iVar12) {
        _page_changed(this,iVar11 / *(int *)(this + 0xb70));
        iVar12 = *(int *)(this + 0xb74);
      }
      EditorPaginator::update((int)*(undefined8 *)(this + 0xbb0),iVar12);
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xbb0),0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb98),0));
      this_02 = *(Slot **)(this + 0xbc0);
      pSVar1 = this_02 + (ulong)*(uint *)(this + 3000) * 0x40;
      for (; pSVar1 != this_02; this_02 = this_02 + 0x40) {
        iVar12 = *(int *)(this_02 + 0x10);
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this_02 + 8),0));
        if (iVar12 < iVar10) {
          if (*(long *)(this_02 + 0x28) != 0) {
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            EditorPropertyDictionaryObject::get_by_property_name
                      (*(EditorPropertyDictionaryObject **)(this + 0xb68),(String *)(this_02 + 0x38)
                       ,(Variant *)&local_78);
            uVar6 = local_78;
            iVar12 = (int)local_78;
            pOVar15 = Variant::operator_cast_to_Object_((Variant *)&local_78);
            if (pOVar15 == (Object *)0x0) {
              SVar23 = (Slot)0x0;
              if (*(int *)(this_02 + 0x18) == iVar12) goto LAB_0010b978;
              this_02[0x1d] = (Slot)0x0;
              *(int *)(this_02 + 0x18) = iVar12;
LAB_0010b844:
              uVar9 = *(undefined4 *)(this + 0xbcc);
              local_d8 = (Object *)0x0;
              String::parse_latin1((String *)&local_d8,"");
              pEVar17 = (EditorPropertyObjectID *)
                        EditorInspector::instantiate_property_editor
                                  (this,uVar6 & 0xffffffff,(Ref<Texture2D> *)&local_d8,uVar9,
                                   this + 0xbd0,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_0010afd3:
              bVar22 = SUB81(pEVar17,0);
              EditorProperty::set_read_only(bVar22);
              EditorProperty::set_selectable(bVar22);
              Control::set_focus_mode(pEVar17,0);
              EditorProperty::set_draw_background(bVar22);
              EditorProperty::is_using_folding();
              EditorProperty::set_use_folding(bVar22);
              Control::set_h_size_flags(pEVar17,3);
              EditorProperty::set_draw_label(bVar22);
              lVar16 = __dynamic_cast(pEVar17,&Object::typeinfo,&EditorPropertyArray::typeinfo,0);
              if (lVar16 != 0) {
                *(undefined1 *)(lVar16 + 0xb60) = 1;
              }
              lVar16 = __dynamic_cast(pEVar17,&Object::typeinfo,&typeinfo,0);
              if (lVar16 != 0) {
                *(undefined1 *)(lVar16 + 0xb61) = 1;
              }
              if (*(Node **)(this_02 + 0x28) != (Node *)0x0) {
                Node::add_sibling(*(Node **)(this_02 + 0x28),bVar22);
                Node::queue_free();
                *(EditorPropertyObjectID **)(this_02 + 0x28) = pEVar17;
                Slot::update_prop_or_index(this_02);
              }
            }
            else {
              lVar16 = __dynamic_cast(pOVar15,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
              SVar23 = (Slot)(lVar16 != 0);
              if (*(int *)(this_02 + 0x18) != iVar12) {
LAB_0010af6a:
                this_02[0x1d] = SVar23;
                *(int *)(this_02 + 0x18) = iVar12;
                if ((iVar12 != 0x18) || (SVar23 == (Slot)0x0)) goto LAB_0010b844;
                pEVar17 = (EditorPropertyObjectID *)operator_new(0xb68,"");
                EditorPropertyObjectID::EditorPropertyObjectID(pEVar17);
                postinitialize_handler((Object *)pEVar17);
                local_d8 = (Object *)0x0;
                String::parse_latin1((String *)&local_d8,"Object");
                EditorPropertyObjectID::setup((String *)pEVar17);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                goto LAB_0010afd3;
              }
LAB_0010b978:
              if ((iVar12 == 0x18) && (this_02[0x1d] != SVar23)) goto LAB_0010af6a;
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
          }
          local_90 = (undefined1  [16])0x0;
          local_98 = 0;
          EditorPropertyDictionaryObject::get_by_property_name
                    (*(EditorPropertyDictionaryObject **)(this + 0xb68),(String *)(this_02 + 0x30),
                     (Variant *)&local_98);
          uVar6 = local_98;
          iVar12 = (int)local_98;
          pOVar15 = Variant::operator_cast_to_Object_((Variant *)&local_98);
          if (pOVar15 == (Object *)0x0) {
            SVar23 = (Slot)0x0;
            if (*(int *)(this_02 + 0x14) == iVar12) goto LAB_0010b123;
            this_02[0x1c] = (Slot)0x0;
            *(int *)(this_02 + 0x14) = iVar12;
LAB_0010b648:
            if (*(int *)(this_02 + 0x10) == -2) {
              uVar9 = *(undefined4 *)(this + 0xbcc);
              pEVar21 = this + 0xbd0;
            }
            else {
              uVar9 = *(undefined4 *)(this + 0xbdc);
              pEVar21 = this + 0xbe0;
            }
            local_d8 = (Object *)0x0;
            String::parse_latin1((String *)&local_d8,"");
            pEVar17 = (EditorPropertyObjectID *)
                      EditorInspector::instantiate_property_editor
                                (this,uVar6 & 0xffffffff,(Ref<Texture2D> *)&local_d8,uVar9,pEVar21,0
                                 ,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_0010ac89:
            bVar22 = SUB81(pEVar17,0);
            EditorProperty::set_selectable(bVar22);
            EditorProperty::is_using_folding();
            EditorProperty::set_use_folding(bVar22);
            pcVar2 = *(code **)(*(long *)pEVar17 + 0x108);
            pCVar14 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar14);
            *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar14 + 0x20) = &_LC3;
            *(undefined ***)pCVar14 = &PTR_hash_00128708;
            *(undefined8 *)(pCVar14 + 0x40) = 0;
            uVar20 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar14 + 0x10) = 0;
            *(undefined8 *)(pCVar14 + 0x30) = uVar20;
            *(code **)(pCVar14 + 0x38) = _property_changed;
            *(EditorPropertyDictionary **)(pCVar14 + 0x28) = this;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
            *(char **)(pCVar14 + 0x20) = "EditorPropertyDictionary::_property_changed";
            Callable::Callable((Callable *)&local_d8,pCVar14);
            if ((update_property()::{lambda()#4}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#4}::operator()()::sname),
               iVar12 != 0)) {
              _scs_create((char *)&update_property()::{lambda()#4}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &update_property()::{lambda()#4}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&update_property()::{lambda()#4}::operator()()::sname);
            }
            (*pcVar2)(pEVar17,&update_property()::{lambda()#4}::operator()()::sname,
                      (Ref<Texture2D> *)&local_d8,0);
            Callable::~Callable((Callable *)&local_d8);
            pcVar2 = *(code **)(*(long *)pEVar17 + 0x108);
            pCVar14 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar14);
            *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar14 + 0x20) = &_LC3;
            *(undefined ***)pCVar14 = &PTR_hash_00128798;
            *(undefined8 *)(pCVar14 + 0x40) = 0;
            uVar20 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar14 + 0x10) = 0;
            *(undefined8 *)(pCVar14 + 0x30) = uVar20;
            *(code **)(pCVar14 + 0x38) = _object_id_selected;
            *(EditorPropertyDictionary **)(pCVar14 + 0x28) = this;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
            *(char **)(pCVar14 + 0x20) = "EditorPropertyDictionary::_object_id_selected";
            Callable::Callable((Callable *)&local_d8,pCVar14);
            if ((update_property()::{lambda()#5}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#5}::operator()()::sname),
               iVar12 != 0)) {
              _scs_create((char *)&update_property()::{lambda()#5}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &update_property()::{lambda()#5}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&update_property()::{lambda()#5}::operator()()::sname);
            }
            (*pcVar2)(pEVar17,&update_property()::{lambda()#5}::operator()()::sname,
                      (Ref<Texture2D> *)&local_d8,0);
            Callable::~Callable((Callable *)&local_d8);
            Control::set_h_size_flags(pEVar17,3);
            if (1 < *(int *)(this_02 + 0x10) + 2U) {
              EditorProperty::set_draw_label(bVar22);
            }
            EditorProperty::is_read_only();
            EditorProperty::set_read_only(bVar22);
            Node::add_sibling(*(Node **)(this_02 + 0x20),bVar22);
            Node::queue_free();
            *(EditorPropertyObjectID **)(this_02 + 0x20) = pEVar17;
            Slot::update_prop_or_index(this_02);
            iVar12 = *(int *)(this_02 + 0x10);
          }
          else {
            lVar16 = __dynamic_cast(pOVar15,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
            SVar23 = (Slot)(lVar16 != 0);
            if (*(int *)(this_02 + 0x14) != iVar12) {
LAB_0010ac20:
              this_02[0x1c] = SVar23;
              *(int *)(this_02 + 0x14) = iVar12;
              if ((iVar12 != 0x18) || (SVar23 == (Slot)0x0)) goto LAB_0010b648;
              pEVar17 = (EditorPropertyObjectID *)operator_new(0xb68,"");
              EditorPropertyObjectID::EditorPropertyObjectID(pEVar17);
              postinitialize_handler((Object *)pEVar17);
              local_d8 = (Object *)0x0;
              String::parse_latin1((String *)&local_d8,"Object");
              EditorPropertyObjectID::setup((String *)pEVar17);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              goto LAB_0010ac89;
            }
LAB_0010b123:
            if ((iVar12 == 0x18) && (this_02[0x1c] != SVar23)) goto LAB_0010ac20;
            iVar12 = *(int *)(this_02 + 0x10);
            if (1 < iVar12 + 2U) {
              Dictionary::get_key_at_index((int)&local_78);
              Variant::get_construct_string();
              Control::set_tooltip_text(*(String **)(this_02 + 0x20));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              if (Variant::needs_deinit[(int)local_78] != '\0') {
                Variant::_clear_internal();
              }
              iVar12 = *(int *)(this_02 + 0x10);
            }
          }
          if (*(int *)(this + 0xb78) == iVar12) {
            create_custom_callable_function_pointer<EditorProperty,int>
                      ((EditorProperty *)&local_d8,*(char **)(this_02 + 0x20),
                       (_func_void_int *)"&EditorProperty::grab_focus");
            Variant::Variant((Variant *)&local_78,0);
            Variant::Variant((Variant *)local_60,0);
            local_c8[0] = (Variant *)&local_78;
            Callable::call_deferredp((Variant **)&local_d8,(int)local_c8);
            if (Variant::needs_deinit[local_60[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)&local_d8);
            *(undefined4 *)(this + 0xb78) = 0xfffffffd;
          }
          (**(code **)(**(long **)(this_02 + 0x20) + 0x380))();
          if (*(long **)(this_02 + 0x28) != (long *)0x0) {
            (**(code **)(**(long **)(this_02 + 0x28) + 0x380))();
          }
          if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      this[0xb60] = (EditorPropertyDictionary)0x0;
    }
    Dictionary::~Dictionary((Dictionary *)local_110);
    CowData<char32_t>::_unref(local_168);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    cVar7 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    local_168 = (CowData<char32_t> *)&local_118;
    if (this[0xb61] == (EditorPropertyDictionary)0x0) {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb80),1);
      local_d8 = (Object *)0x0;
      Button::set_button_icon(*(Ref **)(this + 0xb80));
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
      pSVar13 = *(String **)(this + 0xb80);
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_120);
      local_f0 = 0;
      String::parse_latin1((String *)&local_f0,"");
      local_f8 = (Object *)0x0;
      String::parse_latin1((String *)&local_f8,"(Nil) %s");
      TTR((String *)&local_e8,(String *)&local_f8);
      vformat<String>((Ref<Texture2D> *)&local_d8,(String *)&local_e8,(CowData<char32_t> *)&local_e0
                     );
      Button::set_text(pSVar13);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    }
    else {
      Button::set_text_alignment(*(undefined8 *)(this + 0xb80),0);
      pRVar3 = *(Ref **)(this + 0xb80);
      if ((update_property()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#1}::operator()()::sname),
         iVar12 != 0)) {
        _scs_create((char *)&update_property()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&update_property()::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_d8);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
      Button::set_text(*(String **)(this + 0xb80));
    }
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb80),0));
    if (*(long *)(this + 0xb88) != 0) {
      EditorProperty::set_bottom_editor((Control *)this);
      pOVar15 = *(Object **)(this + 0xb88);
      cVar7 = predelete_handler(pOVar15);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
      *(undefined8 *)(this + 0xba8) = 0;
      *(undefined8 *)(this + 0xb88) = 0;
      *(undefined8 *)(this + 0xb98) = 0;
      LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false>::resize
                ((LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false> *)
                 (this + 3000),0);
    }
    CowData<char32_t>::_unref(local_168);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    cVar7 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar7 != '\0') {
    Variant::_clear_internal();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyArray::_change_type_menu(int) */

void __thiscall EditorPropertyArray::_change_type_menu(EditorPropertyArray *this,int param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  BucketLarge *this_00;
  BucketMedium *pBVar7;
  BucketSmall *pBVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined1 auVar10 [16];
  long local_b0;
  long local_a8;
  long local_a0;
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x27) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x3f8))
                (this,*(int *)(this + 0xb6c),*(code **)(*(long *)this + 0x3f8));
      return;
    }
  }
  else {
    if (*(int *)(this + 0xb6c) == -1) {
      _err_print_error("_change_type_menu","editor/editor_properties_array_dict.cpp",0x123,
                       "Condition \"changing_type_index == EditorPropertyArrayObject::NOT_CHANGING_TYPE\" is true."
                       ,"Tried to change type of an array item, but no item was selected.",0,0);
    }
    else {
      local_90 = (undefined1  [16])0x0;
      local_98[0] = param_1;
      switch(param_1) {
      case 4:
        local_90 = ZEXT816(0) << 0x40;
        local_98[0] = 4;
        break;
      case 0xb:
        pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                            &Variant::Pools::_bucket_small);
        local_90._0_8_ = pBVar8;
        *(undefined8 *)(pBVar8 + 0x10) = 0;
        *(undefined8 *)pBVar8 = 0x3f800000;
        *(undefined8 *)(pBVar8 + 8) = 0x3f80000000000000;
        local_98[0] = 0xb;
        break;
      case 0x10:
        pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                            &Variant::Pools::_bucket_small);
        local_90._0_8_ = pBVar8;
        *(undefined4 *)(pBVar8 + 0x14) = 0;
        *(undefined8 *)pBVar8 = 0;
        *(undefined4 *)(pBVar8 + 8) = 0;
        *(undefined8 *)(pBVar8 + 0xc) = 0;
        local_98[0] = 0x10;
        break;
      case 0x11:
        pBVar7 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                            &Variant::Pools::_bucket_medium);
        auVar10 = ZEXT416(_LC159);
        local_90._0_8_ = pBVar7;
        *(undefined4 *)(pBVar7 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar7 = auVar10;
        *(undefined1 (*) [16])(pBVar7 + 0x10) = auVar10;
        local_98[0] = 0x11;
        break;
      case 0x12:
        pBVar7 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                            &Variant::Pools::_bucket_medium);
        auVar10 = ZEXT416(_LC159);
        local_90._0_8_ = pBVar7;
        *(undefined4 *)(pBVar7 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar7 = auVar10;
        *(undefined8 *)(pBVar7 + 0x24) = 0;
        *(undefined4 *)(pBVar7 + 0x2c) = 0;
        local_98[0] = 0x12;
        *(undefined1 (*) [16])(pBVar7 + 0x10) = auVar10;
        break;
      case 0x13:
        this_00 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                             &Variant::Pools::_bucket_large);
        local_90._0_8_ = this_00;
        Projection::Projection((Projection *)this_00);
        local_98[0] = 0x13;
        break;
      case 0x14:
        local_98[0] = 0x14;
        local_90._8_8_ = _UNK_00129158;
        local_90._0_8_ = __LC161;
        break;
      case 0x15:
        local_90 = ZEXT816(0) << 0x40;
        local_98[0] = 0x15;
        break;
      case 0x16:
        local_90 = ZEXT816(0) << 0x40;
        local_98[0] = 0x16;
        break;
      case 0x19:
        local_90 = ZEXT816(0);
        local_98[0] = 0x19;
        break;
      case 0x1a:
        local_90 = ZEXT816(0);
        local_98[0] = 0x1a;
        break;
      case 0x1b:
        Dictionary::Dictionary((Dictionary *)local_90);
        local_98[0] = 0x1b;
        break;
      case 0x1c:
        Array::Array((Array *)local_90);
        local_98[0] = 0x1c;
        break;
      case 0x1d:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        lVar3 = local_a0;
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5[3] = 0;
        *puVar5 = &PTR__PackedArrayRef_00126798;
        if (local_a0 != 0) {
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(puVar5 + 3));
          plVar1 = (long *)(lVar3 + -0x10);
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c2cc;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c2cc:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_a0);
        local_98[0] = 0x1d;
        break;
      case 0x1e:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_001267b8;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010ca68;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010ca68:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<int>::_unref((CowData<int> *)&local_a0);
        local_98[0] = 0x1e;
        break;
      case 0x1f:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_001267d8;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c9d0;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c9d0:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<long>::_unref((CowData<long> *)&local_a0);
        local_98[0] = 0x1f;
        break;
      case 0x20:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_001267f8;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c938;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c938:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<float>::_unref((CowData<float> *)&local_a0);
        local_98[0] = 0x20;
        break;
      case 0x21:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_00126818;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c8a0;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c8a0:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<double>::_unref((CowData<double> *)&local_a0);
        local_98[0] = 0x21;
        break;
      case 0x22:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        lVar3 = local_a0;
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5[3] = 0;
        *puVar5 = &PTR__PackedArrayRef_00126838;
        if (local_a0 != 0) {
          CowData<String>::_unref((CowData<String> *)(puVar5 + 3));
          plVar1 = (long *)(lVar3 + -0x10);
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c80c;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c80c:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<String>::_unref((CowData<String> *)&local_a0);
        local_98[0] = 0x22;
        break;
      case 0x23:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_00126858;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c768;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c768:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
        local_98[0] = 0x23;
        break;
      case 0x24:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_00126878;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c6d0;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c6d0:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
        local_98[0] = 0x24;
        break;
      case 0x25:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_00126898;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c638;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c638:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<Color>::_unref((CowData<Color> *)&local_a0);
        local_98[0] = 0x25;
        break;
      case 0x26:
        local_a0 = 0;
        puVar5 = (undefined8 *)operator_new(0x20,"");
        *puVar5 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = &PTR__PackedArrayRef_001268b8;
        puVar5[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c5a0;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar3 == lVar6;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar6 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != -1) {
            puVar5[3] = local_a0;
          }
        }
LAB_0010c5a0:
        *(undefined4 *)(puVar5 + 1) = 1;
        local_90._0_8_ = puVar5;
        CowData<Vector4>::_unref((CowData<Vector4> *)&local_a0);
        local_98[0] = 0x26;
      }
      Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xc00) + 0x180));
      Variant::duplicate(SUB81((Variant *)local_78,0));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar2 = *(uint *)(this + 0xb6c);
      if (*(uint *)(this + 3000) <= uVar2) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar2,
                   (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      Variant::Variant((Variant *)local_58,
                       *(int *)((ulong)uVar2 * 0x30 + *(long *)(this + 0xbc0) + 0x10));
      Variant::set((Variant *)local_78,(Variant *)local_58,(bool *)local_98,(VariantSetError *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_a8 = 0;
      EditorProperty::get_edited_property();
      EditorProperty::emit_changed
                ((StringName *)this,(Variant *)&local_b0,(StringName *)local_78,SUB81(&local_a8,0));
      if ((StringName::configured != '\0') &&
         (((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_a8 != 0)))) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyDictionary::_add_key_value() [clone .part.0] */

void __thiscall EditorPropertyDictionary::_add_key_value(EditorPropertyDictionary *this)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  Variant *this_00;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Variant local_b8 [8];
  long local_b0;
  long local_a8;
  long local_a0;
  int local_98 [2];
  BucketLarge *local_90;
  undefined8 uStack_88;
  int local_78 [2];
  BucketLarge *local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)&local_a8,(Dictionary *)(*(long *)(this + 0xb68) + 0x1b0));
  Dictionary::duplicate(SUB81(local_b8,0));
  Dictionary::~Dictionary((Dictionary *)&local_a8);
  Variant::Variant((Variant *)local_98,(Variant *)(*(long *)(this + 0xb68) + 0x180));
  Variant::Variant((Variant *)local_78,(Variant *)(*(long *)(this + 0xb68) + 0x198));
  this_00 = (Variant *)Dictionary::operator[](local_b8);
  Variant::operator=(this_00,(Variant *)local_78);
  iVar6 = local_98[0];
  Variant::zero();
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_98[0] = iVar6;
  switch(iVar6) {
  case 4:
    local_90 = (BucketLarge *)0x0;
    local_98[0] = 4;
    break;
  case 0xb:
    local_90 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                          &Variant::Pools::_bucket_small);
    *(undefined8 *)((BucketSmall *)local_90 + 0x10) = 0;
    *(undefined8 *)local_90 = 0x3f800000;
    *(undefined8 *)((BucketSmall *)local_90 + 8) = 0x3f80000000000000;
    local_98[0] = 0xb;
    break;
  case 0x10:
    local_90 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                          &Variant::Pools::_bucket_small);
    *(undefined4 *)((BucketSmall *)local_90 + 0x14) = 0;
    *(undefined8 *)local_90 = 0;
    *(undefined4 *)((BucketSmall *)local_90 + 8) = 0;
    *(undefined8 *)((BucketSmall *)local_90 + 0xc) = 0;
    local_98[0] = 0x10;
    break;
  case 0x11:
    local_90 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                          &Variant::Pools::_bucket_medium);
    uVar5 = _LC159;
    *(undefined4 *)((BucketMedium *)local_90 + 0x20) = 0x3f800000;
    *(undefined1 (*) [16])local_90 = ZEXT416(uVar5);
    *(undefined1 (*) [16])((BucketMedium *)local_90 + 0x10) = ZEXT416(uVar5);
    local_98[0] = 0x11;
    break;
  case 0x12:
    local_90 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                          &Variant::Pools::_bucket_medium);
    uVar5 = _LC159;
    *(undefined4 *)((BucketMedium *)local_90 + 0x20) = 0x3f800000;
    *(undefined1 (*) [16])local_90 = ZEXT416(uVar5);
    *(undefined8 *)((BucketMedium *)local_90 + 0x24) = 0;
    *(undefined4 *)((BucketMedium *)local_90 + 0x2c) = 0;
    local_98[0] = 0x12;
    *(undefined1 (*) [16])((BucketMedium *)local_90 + 0x10) = ZEXT416(uVar5);
    break;
  case 0x13:
    local_90 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                          &Variant::Pools::_bucket_large);
    Projection::Projection((Projection *)local_90);
    local_98[0] = 0x13;
    break;
  case 0x14:
    local_90 = __LC161;
    uStack_88 = _UNK_00129158;
    local_98[0] = 0x14;
    break;
  case 0x15:
    local_90 = (BucketLarge *)0x0;
    local_98[0] = 0x15;
    break;
  case 0x16:
    local_90 = (BucketLarge *)0x0;
    local_98[0] = 0x16;
    break;
  case 0x18:
    local_90 = (BucketLarge *)0x0;
    uStack_88 = 0;
    local_98[0] = 0x18;
    break;
  case 0x19:
    local_90 = (BucketLarge *)0x0;
    uStack_88 = 0;
    local_98[0] = 0x19;
    break;
  case 0x1a:
    local_90 = (BucketLarge *)0x0;
    uStack_88 = 0;
    local_98[0] = 0x1a;
    break;
  case 0x1b:
    Dictionary::Dictionary((Dictionary *)&local_90);
    local_98[0] = 0x1b;
    break;
  case 0x1c:
    Array::Array((Array *)&local_90);
    local_98[0] = 0x1c;
    break;
  case 0x1d:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126798;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010de10;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010de10:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_a0);
    local_98[0] = 0x1d;
    break;
  case 0x1e:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_001267b8;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010dd78;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010dd78:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<int>::_unref((CowData<int> *)&local_a0);
    local_98[0] = 0x1e;
    break;
  case 0x1f:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_001267d8;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010dce0;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010dce0:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<long>::_unref((CowData<long> *)&local_a0);
    local_98[0] = 0x1f;
    break;
  case 0x20:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_001267f8;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010dc48;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010dc48:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<float>::_unref((CowData<float> *)&local_a0);
    local_98[0] = 0x20;
    break;
  case 0x21:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126818;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010dbb0;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010dbb0:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<double>::_unref((CowData<double> *)&local_a0);
    local_98[0] = 0x21;
    break;
  case 0x22:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    lVar2 = local_a0;
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126838;
    *(undefined8 *)(local_90 + 0x18) = 0;
    if (local_a0 != 0) {
      CowData<String>::_unref((CowData<String> *)(local_90 + 0x18));
      plVar1 = (long *)(lVar2 + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010ce3b;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010ce3b:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<String>::_unref((CowData<String> *)&local_a0);
    local_98[0] = 0x22;
    break;
  case 0x23:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126858;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010db18;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010db18:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    local_98[0] = 0x23;
    break;
  case 0x24:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126878;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010da80;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010da80:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
    local_98[0] = 0x24;
    break;
  case 0x25:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_00126898;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d9e8;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010d9e8:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<Color>::_unref((CowData<Color> *)&local_a0);
    local_98[0] = 0x25;
    break;
  case 0x26:
    local_a0 = 0;
    local_90 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_90 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_90 + 8) = 0;
    *(undefined ***)local_90 = &PTR__PackedArrayRef_001268b8;
    *(undefined8 *)(local_90 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d950;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_90 + 0x18) = local_a0;
      }
    }
LAB_0010d950:
    *(undefined4 *)(local_90 + 8) = 1;
    CowData<Vector4>::_unref((CowData<Vector4> *)&local_a0);
    local_98[0] = 0x26;
  }
  Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x180),(Variant *)local_98);
  iVar6 = local_78[0];
  Variant::zero();
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_78[0] = iVar6;
  switch(iVar6) {
  case 4:
    local_70 = (BucketLarge *)0x0;
    local_78[0] = 4;
    break;
  case 0xb:
    local_70 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                          &Variant::Pools::_bucket_small);
    *(undefined8 *)((BucketSmall *)local_70 + 0x10) = 0;
    *(undefined8 *)local_70 = 0x3f800000;
    *(undefined8 *)((BucketSmall *)local_70 + 8) = 0x3f80000000000000;
    local_78[0] = 0xb;
    break;
  case 0x10:
    local_70 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                          &Variant::Pools::_bucket_small);
    *(undefined4 *)((BucketSmall *)local_70 + 0x14) = 0;
    *(undefined8 *)local_70 = 0;
    *(undefined4 *)((BucketSmall *)local_70 + 8) = 0;
    *(undefined8 *)((BucketSmall *)local_70 + 0xc) = 0;
    local_78[0] = 0x10;
    break;
  case 0x11:
    local_70 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                          &Variant::Pools::_bucket_medium);
    uVar5 = _LC159;
    *(undefined4 *)((BucketMedium *)local_70 + 0x20) = 0x3f800000;
    *(undefined1 (*) [16])local_70 = ZEXT416(uVar5);
    *(undefined1 (*) [16])((BucketMedium *)local_70 + 0x10) = ZEXT416(uVar5);
    local_78[0] = 0x11;
    break;
  case 0x12:
    local_70 = (BucketLarge *)
               PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                          &Variant::Pools::_bucket_medium);
    uVar5 = _LC159;
    *(undefined4 *)((BucketMedium *)local_70 + 0x20) = 0x3f800000;
    *(undefined1 (*) [16])local_70 = ZEXT416(uVar5);
    *(undefined8 *)((BucketMedium *)local_70 + 0x24) = 0;
    *(undefined4 *)((BucketMedium *)local_70 + 0x2c) = 0;
    local_78[0] = 0x12;
    *(undefined1 (*) [16])((BucketMedium *)local_70 + 0x10) = ZEXT416(uVar5);
    break;
  case 0x13:
    local_70 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                         ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                          &Variant::Pools::_bucket_large);
    Projection::Projection((Projection *)local_70);
    local_78[0] = 0x13;
    break;
  case 0x14:
    local_70 = __LC161;
    uStack_68 = _UNK_00129158;
    local_78[0] = 0x14;
    break;
  case 0x15:
    local_70 = (BucketLarge *)0x0;
    local_78[0] = 0x15;
    break;
  case 0x16:
    local_70 = (BucketLarge *)0x0;
    local_78[0] = 0x16;
    break;
  case 0x18:
    local_70 = (BucketLarge *)0x0;
    uStack_68 = 0;
    local_78[0] = 0x18;
    break;
  case 0x19:
    local_70 = (BucketLarge *)0x0;
    uStack_68 = 0;
    local_78[0] = 0x19;
    break;
  case 0x1a:
    local_70 = (BucketLarge *)0x0;
    uStack_68 = 0;
    local_78[0] = 0x1a;
    break;
  case 0x1b:
    Dictionary::Dictionary((Dictionary *)&local_70);
    local_78[0] = 0x1b;
    break;
  case 0x1c:
    Array::Array((Array *)&local_70);
    local_78[0] = 0x1c;
    break;
  case 0x1d:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126798;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d670;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d670:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_a0);
    local_78[0] = 0x1d;
    break;
  case 0x1e:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_001267b8;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d5d8;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d5d8:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<int>::_unref((CowData<int> *)&local_a0);
    local_78[0] = 0x1e;
    break;
  case 0x1f:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_001267d8;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d540;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d540:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<long>::_unref((CowData<long> *)&local_a0);
    local_78[0] = 0x1f;
    break;
  case 0x20:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_001267f8;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d4a8;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d4a8:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<float>::_unref((CowData<float> *)&local_a0);
    local_78[0] = 0x20;
    break;
  case 0x21:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126818;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d410;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d410:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<double>::_unref((CowData<double> *)&local_a0);
    local_78[0] = 0x21;
    break;
  case 0x22:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    lVar2 = local_a0;
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126838;
    *(undefined8 *)(local_70 + 0x18) = 0;
    if (local_a0 != 0) {
      CowData<String>::_unref((CowData<String> *)(local_70 + 0x18));
      plVar1 = (long *)(lVar2 + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010cf4b;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010cf4b:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<String>::_unref((CowData<String> *)&local_a0);
    local_78[0] = 0x22;
    break;
  case 0x23:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126858;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d378;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d378:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    local_78[0] = 0x23;
    break;
  case 0x24:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126878;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d2e0;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d2e0:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
    local_78[0] = 0x24;
    break;
  case 0x25:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_00126898;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d248;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d248:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<Color>::_unref((CowData<Color> *)&local_a0);
    local_78[0] = 0x25;
    break;
  case 0x26:
    local_a0 = 0;
    local_70 = (BucketLarge *)operator_new(0x20,"");
    *(undefined ***)local_70 = &PTR__PackedArrayRefBase_00126778;
    *(undefined4 *)(local_70 + 8) = 0;
    *(undefined ***)local_70 = &PTR__PackedArrayRef_001268b8;
    *(undefined8 *)(local_70 + 0x18) = 0;
    plVar1 = (long *)(local_a0 + -0x10);
    if (local_a0 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010d1b0;
        LOCK();
        lVar7 = *plVar1;
        bVar8 = lVar2 == lVar7;
        if (bVar8) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar7 != -1) {
        *(long *)(local_70 + 0x18) = local_a0;
      }
    }
LAB_0010d1b0:
    *(undefined4 *)(local_70 + 8) = 1;
    CowData<Vector4>::_unref((CowData<Vector4> *)&local_a0);
    local_78[0] = 0x26;
  }
  Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x198),(Variant *)local_78);
  Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb68) + 0x1b0),(Dictionary *)local_b8);
  iVar6 = Dictionary::size();
  uVar3 = (long)(iVar6 + -1) % (long)*(int *)(this + 0xb70);
  if (*(uint *)(this + 3000) <= (uint)uVar3) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar3 & 0xffffffff,
               (ulong)*(uint *)(this + 3000),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  Slot::update_prop_or_index((Slot *)((uVar3 & 0xffffffff) * 0x40 + *(long *)(this + 0xbc0)));
  local_a8 = 0;
  Variant::Variant((Variant *)local_58,(Dictionary *)local_b8);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_b0,(StringName *)local_58,
             SUB81((Dictionary *)&local_a8,0));
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::_add_key_value() */

void __thiscall EditorPropertyDictionary::_add_key_value(EditorPropertyDictionary *this)

{
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,(Variant *)(*(long *)(this + 0xb68) + 0x180));
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_38[0] == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _add_key_value(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyDictionary::_change_type_menu(int) */

void __thiscall
EditorPropertyDictionary::_change_type_menu(EditorPropertyDictionary *this,int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  Variant *this_00;
  undefined8 *puVar7;
  BucketSmall *pBVar8;
  BucketMedium *pBVar9;
  BucketLarge *pBVar10;
  Slot *this_01;
  Slot *pSVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auVar13 [16];
  Variant local_b8 [8];
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(uint *)(this + 0xb78);
  if (uVar5 == 0xfffffffd) {
    _err_print_error("_change_type_menu","editor/editor_properties_array_dict.cpp",0x419,
                     "Condition \"changing_type_index == EditorPropertyDictionaryObject::NOT_CHANGING_TYPE\" is true."
                     ,"Tried to change the type of a dict key or value, but nothing was selected.",0
                     ,0);
  }
  else {
    local_98 = 0;
    local_90 = (undefined1  [16])0x0;
    if (uVar5 < 0xfffffffe) {
      Dictionary::Dictionary
                ((Dictionary *)&local_a8,(Dictionary *)(*(long *)(this + 0xb68) + 0x1b0));
      Dictionary::duplicate(SUB81(local_b8,0));
      Dictionary::~Dictionary((Dictionary *)&local_a8);
      Dictionary::get_key_at_index((int)local_78);
      if (param_1 < 0x27) {
        if (Variant::needs_deinit[(int)local_98] != '\0') {
          Variant::_clear_internal();
        }
        local_98 = CONCAT44(local_98._4_4_,param_1);
        switch(param_1) {
        case 4:
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_90._8_8_;
          local_90 = auVar3 << 0x40;
          local_98 = CONCAT44(local_98._4_4_,4);
          break;
        case 0xb:
          pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                             ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                              &Variant::Pools::_bucket_small);
          local_90._0_8_ = pBVar8;
          *(undefined8 *)(pBVar8 + 0x10) = 0;
          *(undefined8 *)pBVar8 = 0x3f800000;
          *(undefined8 *)(pBVar8 + 8) = 0x3f80000000000000;
          local_98 = CONCAT44(local_98._4_4_,0xb);
          break;
        case 0x10:
          pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                             ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                              &Variant::Pools::_bucket_small);
          local_90._0_8_ = pBVar8;
          *(undefined4 *)(pBVar8 + 0x14) = 0;
          *(undefined8 *)pBVar8 = 0;
          *(undefined4 *)(pBVar8 + 8) = 0;
          *(undefined8 *)(pBVar8 + 0xc) = 0;
          local_98 = CONCAT44(local_98._4_4_,0x10);
          break;
        case 0x11:
          pBVar9 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                             ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                              &Variant::Pools::_bucket_medium);
          auVar13 = ZEXT416(_LC159);
          local_90._0_8_ = pBVar9;
          *(undefined4 *)(pBVar9 + 0x20) = 0x3f800000;
          *(undefined1 (*) [16])pBVar9 = auVar13;
          *(undefined1 (*) [16])(pBVar9 + 0x10) = auVar13;
          local_98 = CONCAT44(local_98._4_4_,0x11);
          break;
        case 0x12:
          pBVar9 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                             ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                              &Variant::Pools::_bucket_medium);
          auVar13 = ZEXT416(_LC159);
          local_90._0_8_ = pBVar9;
          *(undefined4 *)(pBVar9 + 0x20) = 0x3f800000;
          *(undefined1 (*) [16])pBVar9 = auVar13;
          *(undefined8 *)(pBVar9 + 0x24) = 0;
          *(undefined4 *)(pBVar9 + 0x2c) = 0;
          local_98 = CONCAT44(local_98._4_4_,0x12);
          *(undefined1 (*) [16])(pBVar9 + 0x10) = auVar13;
          break;
        case 0x13:
          pBVar10 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                              ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                               &Variant::Pools::_bucket_large);
          local_90._0_8_ = pBVar10;
          Projection::Projection((Projection *)pBVar10);
          local_98 = CONCAT44(local_98._4_4_,0x13);
          break;
        case 0x14:
          local_98 = CONCAT44(local_98._4_4_,0x14);
          local_90._8_8_ = _UNK_00129158;
          local_90._0_8_ = __LC161;
          break;
        case 0x15:
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_90._8_8_;
          local_90 = auVar4 << 0x40;
          local_98 = CONCAT44(local_98._4_4_,0x15);
          break;
        case 0x16:
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_90._8_8_;
          local_90 = auVar13 << 0x40;
          local_98 = CONCAT44(local_98._4_4_,0x16);
          break;
        case 0x18:
          local_90 = ZEXT816(0);
          local_98 = CONCAT44(local_98._4_4_,0x18);
          break;
        case 0x19:
          local_90 = ZEXT816(0);
          local_98 = CONCAT44(local_98._4_4_,0x19);
          break;
        case 0x1a:
          local_90 = ZEXT816(0);
          local_98 = CONCAT44(local_98._4_4_,0x1a);
          break;
        case 0x1b:
          Dictionary::Dictionary((Dictionary *)local_90);
          local_98 = CONCAT44(local_98._4_4_,0x1b);
          break;
        case 0x1c:
          Array::Array((Array *)local_90);
          local_98 = CONCAT44(local_98._4_4_,0x1c);
          break;
        case 0x1d:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126798;
          puVar7[3] = 0;
          Vector<unsigned_char>::operator=
                    ((Vector<unsigned_char> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x1d);
          break;
        case 0x1e:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_001267b8;
          puVar7[3] = 0;
          Vector<int>::operator=((Vector<int> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<int>::_unref((CowData<int> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x1e);
          break;
        case 0x1f:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_001267d8;
          puVar7[3] = 0;
          Vector<long>::operator=((Vector<long> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<long>::_unref((CowData<long> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x1f);
          break;
        case 0x20:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_001267f8;
          puVar7[3] = 0;
          Vector<float>::operator=((Vector<float> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<float>::_unref((CowData<float> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x20);
          break;
        case 0x21:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126818;
          puVar7[3] = 0;
          Vector<double>::operator=((Vector<double> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<double>::_unref((CowData<double> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x21);
          break;
        case 0x22:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          lVar2 = local_a0;
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126838;
          puVar7[3] = 0;
          if (local_a0 != 0) {
            CowData<String>::_unref((CowData<String> *)(puVar7 + 3));
            plVar1 = (long *)(lVar2 + -0x10);
            do {
              lVar2 = *plVar1;
              if (lVar2 == 0) goto LAB_0010e3cd;
              LOCK();
              lVar6 = *plVar1;
              bVar12 = lVar2 == lVar6;
              if (bVar12) {
                *plVar1 = lVar2 + 1;
                lVar6 = lVar2;
              }
              UNLOCK();
            } while (!bVar12);
            if (lVar6 != -1) {
              puVar7[3] = local_a0;
            }
          }
LAB_0010e3cd:
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<String>::_unref((CowData<String> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x22);
          break;
        case 0x23:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126858;
          puVar7[3] = 0;
          Vector<Vector2>::operator=((Vector<Vector2> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x23);
          break;
        case 0x24:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126878;
          puVar7[3] = 0;
          Vector<Vector3>::operator=((Vector<Vector3> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x24);
          break;
        case 0x25:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_00126898;
          puVar7[3] = 0;
          Vector<Color>::operator=((Vector<Color> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<Color>::_unref((CowData<Color> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x25);
          break;
        case 0x26:
          local_a0 = 0;
          puVar7 = (undefined8 *)operator_new(0x20,"");
          *puVar7 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR__PackedArrayRef_001268b8;
          puVar7[3] = 0;
          Vector<Vector4>::operator=((Vector<Vector4> *)(puVar7 + 2),(Vector *)&local_a8);
          *(undefined4 *)(puVar7 + 1) = 1;
          local_90._0_8_ = puVar7;
          CowData<Vector4>::_unref((CowData<Vector4> *)&local_a0);
          local_98 = CONCAT44(local_98._4_4_,0x26);
        }
        this_00 = (Variant *)Dictionary::operator[](local_b8);
        Variant::operator=(this_00,(Variant *)&local_98);
      }
      else {
        Dictionary::erase(local_b8);
        Dictionary::operator=
                  ((Dictionary *)(*(long *)(this + 0xb68) + 0x1b0),(Dictionary *)local_b8);
        this_01 = *(Slot **)(this + 0xbc0);
        pSVar11 = this_01 + (ulong)*(uint *)(this + 3000) * 0x40;
        for (; pSVar11 != this_01; this_01 = this_01 + 0x40) {
          Slot::update_prop_or_index(this_01);
        }
      }
      local_a8 = 0;
      Variant::Variant((Variant *)local_58,(Dictionary *)local_b8);
      EditorProperty::get_edited_property();
      EditorProperty::emit_changed
                ((StringName *)this,(Variant *)&local_b0,(StringName *)local_58,
                 SUB81((Dictionary *)&local_a8,0));
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_b8);
    }
    else {
      local_98 = (ulong)(uint)param_1;
      switch(param_1) {
      case 4:
        local_90 = ZEXT816(0) << 0x40;
        local_98 = 4;
        break;
      case 0xb:
        pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                            &Variant::Pools::_bucket_small);
        local_90._0_8_ = pBVar8;
        *(undefined8 *)(pBVar8 + 0x10) = 0;
        *(undefined8 *)pBVar8 = 0x3f800000;
        *(undefined8 *)(pBVar8 + 8) = 0x3f80000000000000;
        uVar5 = *(uint *)(this + 0xb78);
        local_98 = CONCAT44(local_98._4_4_,0xb);
        break;
      case 0x10:
        pBVar8 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                            &Variant::Pools::_bucket_small);
        local_90._0_8_ = pBVar8;
        *(undefined4 *)(pBVar8 + 0x14) = 0;
        *(undefined8 *)pBVar8 = 0;
        *(undefined4 *)(pBVar8 + 8) = 0;
        *(undefined8 *)(pBVar8 + 0xc) = 0;
        uVar5 = *(uint *)(this + 0xb78);
        local_98 = CONCAT44(local_98._4_4_,0x10);
        break;
      case 0x11:
        pBVar9 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                            &Variant::Pools::_bucket_medium);
        auVar13 = ZEXT416(_LC159);
        local_90._0_8_ = pBVar9;
        *(undefined4 *)(pBVar9 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar9 = auVar13;
        *(undefined1 (*) [16])(pBVar9 + 0x10) = auVar13;
        uVar5 = *(uint *)(this + 0xb78);
        local_98 = CONCAT44(local_98._4_4_,0x11);
        break;
      case 0x12:
        pBVar9 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                           ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                            &Variant::Pools::_bucket_medium);
        auVar13 = ZEXT416(_LC159);
        local_90._0_8_ = pBVar9;
        *(undefined4 *)(pBVar9 + 0x20) = 0x3f800000;
        *(undefined1 (*) [16])pBVar9 = auVar13;
        *(undefined8 *)(pBVar9 + 0x24) = 0;
        *(undefined4 *)(pBVar9 + 0x2c) = 0;
        *(undefined1 (*) [16])(pBVar9 + 0x10) = auVar13;
        uVar5 = *(uint *)(this + 0xb78);
        local_98 = CONCAT44(local_98._4_4_,0x12);
        break;
      case 0x13:
        pBVar10 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                            ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                             &Variant::Pools::_bucket_large);
        local_90._0_8_ = pBVar10;
        Projection::Projection((Projection *)pBVar10);
        local_98 = CONCAT44(local_98._4_4_,0x13);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x14:
        local_98 = 0x14;
        local_90._8_8_ = _UNK_00129158;
        local_90._0_8_ = __LC161;
        break;
      case 0x15:
        local_90 = ZEXT816(0) << 0x40;
        local_98 = 0x15;
        break;
      case 0x16:
        local_90 = ZEXT816(0) << 0x40;
        local_98 = 0x16;
        break;
      case 0x19:
        local_90 = ZEXT816(0);
        local_98 = 0x19;
        break;
      case 0x1a:
        local_90 = ZEXT816(0);
        local_98 = 0x1a;
        break;
      case 0x1b:
        Dictionary::Dictionary((Dictionary *)local_90);
        local_98 = CONCAT44(local_98._4_4_,0x1b);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x1c:
        Array::Array((Array *)local_90);
        local_98 = CONCAT44(local_98._4_4_,0x1c);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x1d:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_00126798;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010e8d0;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010e8d0:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x1d);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x1e:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_001267b8;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010e970;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010e970:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<int>::_unref((CowData<int> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x1e);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x1f:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_001267d8;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010ea10;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010ea10:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<long>::_unref((CowData<long> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x1f);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x20:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_001267f8;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010eab0;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010eab0:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<float>::_unref((CowData<float> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x20);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x21:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_00126818;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010eb50;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010eb50:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<double>::_unref((CowData<double> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x21);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x22:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        lVar2 = local_a0;
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        puVar7[3] = 0;
        *puVar7 = &PTR__PackedArrayRef_00126838;
        if (local_a0 != 0) {
          CowData<String>::_unref((CowData<String> *)(puVar7 + 3));
          plVar1 = (long *)(lVar2 + -0x10);
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010e21c;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010e21c:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<String>::_unref((CowData<String> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x22);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x23:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_00126858;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010ebf0;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010ebf0:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x23);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x24:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_00126878;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010ec90;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010ec90:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x24);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x25:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_00126898;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010ed30;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010ed30:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<Color>::_unref((CowData<Color> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x25);
        uVar5 = *(uint *)(this + 0xb78);
        break;
      case 0x26:
        local_a0 = 0;
        puVar7 = (undefined8 *)operator_new(0x20,"");
        *puVar7 = &PTR__PackedArrayRefBase_00126778;
        *(undefined4 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__PackedArrayRef_001268b8;
        puVar7[3] = 0;
        plVar1 = (long *)(local_a0 + -0x10);
        if (local_a0 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010e5e0;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar2 == lVar6;
            if (bVar12) {
              *plVar1 = lVar2 + 1;
              lVar6 = lVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            puVar7[3] = local_a0;
          }
        }
LAB_0010e5e0:
        *(undefined4 *)(puVar7 + 1) = 1;
        local_90._0_8_ = puVar7;
        CowData<Vector4>::_unref((CowData<Vector4> *)&local_a0);
        local_98 = CONCAT44(local_98._4_4_,0x26);
        uVar5 = *(uint *)(this + 0xb78);
      }
      if (uVar5 == 0xfffffffe) {
        Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x180),(Variant *)&local_98);
      }
      else {
        Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x198),(Variant *)&local_98);
      }
      (**(code **)(*(long *)this + 0x380))(this);
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyDictionary::setup(PropertyHint, String const&) */

void __thiscall
EditorPropertyDictionary::setup(EditorPropertyDictionary *this,undefined8 param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BucketLarge *pBVar4;
  long lVar5;
  wchar32 wVar6;
  wchar32 wVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  char local_78 [8];
  CowData *local_70;
  long local_68;
  undefined8 local_60;
  int local_58 [2];
  BucketLarge *local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_78,param_3,0x113cf2);
  if ((local_70 != (CowData *)0x0) && (lVar5 = *(long *)(local_70 + -8), 0 < lVar5)) {
    if ((*(long *)local_70 != 0) && (1 < *(uint *)(*(long *)local_70 + -8))) {
      local_88 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,local_70);
      wVar6 = (wchar32)(CowData<char32_t> *)&local_88;
      iVar2 = String::find_char(wVar6,0x3a);
      if (-1 < iVar2) {
        wVar7 = (wchar32)(CowData<char32_t> *)&local_80;
        String::substr(wVar7,wVar6);
        iVar2 = String::find_char(wVar7,0x2f);
        if (-1 < iVar2) {
          iVar2 = (int)(CowData<char32_t> *)&local_68;
          String::substr(iVar2,wVar7);
          uVar3 = String::to_int();
          *(undefined4 *)(this + 0xbcc) = uVar3;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          String::substr(iVar2,wVar7);
          if (local_80 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            local_80 = local_68;
            local_68 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        String::substr((int)(CowData<char32_t> *)&local_68,wVar6);
        if (*(long *)(this + 0xbd0) != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbd0));
          lVar5 = local_68;
          local_68 = 0;
          *(long *)(this + 0xbd0) = lVar5;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        uVar3 = String::to_int();
        *(undefined4 *)(this + 0xbc8) = uVar3;
        Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xb68) + 0x180));
        lVar5 = (long)local_58[0];
        local_58[0] = *(int *)(this + 0xbc8);
        if (Variant::needs_deinit[lVar5] != '\0') {
          Variant::_clear_internal();
        }
        switch(local_58[0]) {
        case 4:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 4;
          break;
        case 0xb:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                                &Variant::Pools::_bucket_small);
          *(undefined8 *)local_50 = 0x3f800000;
          *(undefined8 *)((BucketSmall *)local_50 + 8) = 0x3f80000000000000;
          *(undefined8 *)((BucketSmall *)local_50 + 0x10) = 0;
          local_58[0] = 0xb;
          break;
        case 0x10:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                                &Variant::Pools::_bucket_small);
          *(undefined8 *)local_50 = 0;
          *(undefined4 *)((BucketSmall *)local_50 + 8) = 0;
          *(undefined8 *)((BucketSmall *)local_50 + 0xc) = 0;
          *(undefined4 *)((BucketSmall *)local_50 + 0x14) = 0;
          local_58[0] = 0x10;
          break;
        case 0x11:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                                &Variant::Pools::_bucket_medium);
          uVar1 = _LC159;
          *(undefined4 *)((BucketMedium *)local_50 + 0x20) = 0x3f800000;
          *(undefined1 (*) [16])local_50 = ZEXT416(uVar1);
          *(undefined1 (*) [16])((BucketMedium *)local_50 + 0x10) = ZEXT416(uVar1);
          local_58[0] = 0x11;
          break;
        case 0x12:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                                &Variant::Pools::_bucket_medium);
          uVar1 = _LC159;
          *(undefined4 *)((BucketMedium *)local_50 + 0x20) = 0x3f800000;
          *(undefined8 *)((BucketMedium *)local_50 + 0x24) = 0;
          *(undefined4 *)((BucketMedium *)local_50 + 0x2c) = 0;
          *(undefined1 (*) [16])local_50 = ZEXT416(uVar1);
          *(undefined1 (*) [16])((BucketMedium *)local_50 + 0x10) = ZEXT416(uVar1);
          local_58[0] = 0x12;
          break;
        case 0x13:
          local_50 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                                &Variant::Pools::_bucket_large);
          Projection::Projection((Projection *)local_50);
          local_58[0] = 0x13;
          break;
        case 0x14:
          local_50 = __LC161;
          uStack_48 = _UNK_00129158;
          local_58[0] = 0x14;
          break;
        case 0x15:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 0x15;
          break;
        case 0x16:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 0x16;
          break;
        case 0x18:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x18;
          break;
        case 0x19:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x19;
          break;
        case 0x1a:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x1a;
          break;
        case 0x1b:
          Dictionary::Dictionary((Dictionary *)&local_50);
          local_58[0] = 0x1b;
          break;
        case 0x1c:
          Array::Array((Array *)&local_50);
          local_58[0] = 0x1c;
          break;
        case 0x1d:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126798;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<unsigned_char>::operator=
                    ((Vector<unsigned_char> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
          local_58[0] = 0x1d;
          break;
        case 0x1e:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267b8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<int>::operator=((Vector<int> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<int>::_unref((CowData<int> *)&local_60);
          local_58[0] = 0x1e;
          break;
        case 0x1f:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267d8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<long>::operator=((Vector<long> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<long>::_unref((CowData<long> *)&local_60);
          local_58[0] = 0x1f;
          break;
        case 0x20:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267f8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<float>::operator=((Vector<float> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<float>::_unref((CowData<float> *)&local_60);
          local_58[0] = 0x20;
          break;
        case 0x21:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126818;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<double>::operator=((Vector<double> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<double>::_unref((CowData<double> *)&local_60);
          local_58[0] = 0x21;
          break;
        case 0x22:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126838;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<String>::operator=((Vector<String> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<String>::_unref((CowData<String> *)&local_60);
          local_58[0] = 0x22;
          break;
        case 0x23:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126858;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector2>::operator=((Vector<Vector2> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
          local_58[0] = 0x23;
          break;
        case 0x24:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126878;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector3>::operator=((Vector<Vector3> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_60);
          local_58[0] = 0x24;
          break;
        case 0x25:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126898;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Color>::operator=((Vector<Color> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Color>::_unref((CowData<Color> *)&local_60);
          local_58[0] = 0x25;
          break;
        case 0x26:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001268b8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector4>::operator=((Vector<Vector4> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector4>::_unref((CowData<Vector4> *)&local_60);
          local_58[0] = 0x26;
        }
        Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x180),(Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (local_70 == (CowData *)0x0) goto LAB_0010f44d;
      lVar5 = *(long *)(local_70 + -8);
    }
    if (((1 < lVar5) && (*(long *)(local_70 + 8) != 0)) &&
       (1 < *(uint *)(*(long *)(local_70 + 8) + -8))) {
      local_88 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,local_70 + 8);
      wVar6 = (wchar32)(CowData<char32_t> *)&local_88;
      iVar2 = String::find_char(wVar6,0x3a);
      if (-1 < iVar2) {
        wVar7 = (wchar32)(CowData<char32_t> *)&local_80;
        String::substr(wVar7,wVar6);
        iVar2 = String::find_char(wVar7,0x2f);
        if (-1 < iVar2) {
          iVar2 = (int)(CowData<char32_t> *)&local_68;
          String::substr(iVar2,wVar7);
          uVar3 = String::to_int();
          *(undefined4 *)(this + 0xbdc) = uVar3;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          String::substr(iVar2,wVar7);
          if (local_80 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            local_80 = local_68;
            local_68 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        String::substr((int)(CowData<char32_t> *)&local_68,wVar6);
        if (*(long *)(this + 0xbe0) != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbe0));
          lVar5 = local_68;
          local_68 = 0;
          *(long *)(this + 0xbe0) = lVar5;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        uVar3 = String::to_int();
        *(undefined4 *)(this + 0xbd8) = uVar3;
        Variant::Variant((Variant *)local_58,(Variant *)(*(long *)(this + 0xb68) + 0x198));
        iVar2 = *(int *)(this + 0xbd8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_58[0] = iVar2;
        switch(iVar2) {
        case 4:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 4;
          break;
        case 0xb:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                                &Variant::Pools::_bucket_small);
          *(undefined8 *)local_50 = 0x3f800000;
          *(undefined8 *)((BucketSmall *)local_50 + 8) = 0x3f80000000000000;
          *(undefined8 *)((BucketSmall *)local_50 + 0x10) = 0;
          local_58[0] = 0xb;
          break;
        case 0x10:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                                &Variant::Pools::_bucket_small);
          *(undefined8 *)local_50 = 0;
          *(undefined4 *)((BucketSmall *)local_50 + 8) = 0;
          *(undefined8 *)((BucketSmall *)local_50 + 0xc) = 0;
          *(undefined4 *)((BucketSmall *)local_50 + 0x14) = 0;
          local_58[0] = 0x10;
          break;
        case 0x11:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                                &Variant::Pools::_bucket_medium);
          uVar1 = _LC159;
          *(undefined4 *)((BucketMedium *)local_50 + 0x20) = 0x3f800000;
          *(undefined1 (*) [16])local_50 = ZEXT416(uVar1);
          *(undefined1 (*) [16])((BucketMedium *)local_50 + 0x10) = ZEXT416(uVar1);
          local_58[0] = 0x11;
          break;
        case 0x12:
          local_50 = (BucketLarge *)
                     PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                                &Variant::Pools::_bucket_medium);
          uVar1 = _LC159;
          *(undefined4 *)((BucketMedium *)local_50 + 0x20) = 0x3f800000;
          *(undefined8 *)((BucketMedium *)local_50 + 0x24) = 0;
          *(undefined4 *)((BucketMedium *)local_50 + 0x2c) = 0;
          *(undefined1 (*) [16])local_50 = ZEXT416(uVar1);
          *(undefined1 (*) [16])((BucketMedium *)local_50 + 0x10) = ZEXT416(uVar1);
          local_58[0] = 0x12;
          break;
        case 0x13:
          local_50 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                               ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                                &Variant::Pools::_bucket_large);
          Projection::Projection((Projection *)local_50);
          local_58[0] = 0x13;
          break;
        case 0x14:
          local_50 = __LC161;
          uStack_48 = _UNK_00129158;
          local_58[0] = 0x14;
          break;
        case 0x15:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 0x15;
          break;
        case 0x16:
          local_50 = (BucketLarge *)0x0;
          local_58[0] = 0x16;
          break;
        case 0x18:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x18;
          break;
        case 0x19:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x19;
          break;
        case 0x1a:
          local_50 = (BucketLarge *)0x0;
          uStack_48 = 0;
          local_58[0] = 0x1a;
          break;
        case 0x1b:
          Dictionary::Dictionary((Dictionary *)&local_50);
          local_58[0] = 0x1b;
          break;
        case 0x1c:
          Array::Array((Array *)&local_50);
          local_58[0] = 0x1c;
          break;
        case 0x1d:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126798;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<unsigned_char>::operator=
                    ((Vector<unsigned_char> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
          local_58[0] = 0x1d;
          break;
        case 0x1e:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267b8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<int>::operator=((Vector<int> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<int>::_unref((CowData<int> *)&local_60);
          local_58[0] = 0x1e;
          break;
        case 0x1f:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267d8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<long>::operator=((Vector<long> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<long>::_unref((CowData<long> *)&local_60);
          local_58[0] = 0x1f;
          break;
        case 0x20:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001267f8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<float>::operator=((Vector<float> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<float>::_unref((CowData<float> *)&local_60);
          local_58[0] = 0x20;
          break;
        case 0x21:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126818;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<double>::operator=((Vector<double> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<double>::_unref((CowData<double> *)&local_60);
          local_58[0] = 0x21;
          break;
        case 0x22:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126838;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<String>::operator=((Vector<String> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<String>::_unref((CowData<String> *)&local_60);
          local_58[0] = 0x22;
          break;
        case 0x23:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126858;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector2>::operator=((Vector<Vector2> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
          local_58[0] = 0x23;
          break;
        case 0x24:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126878;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector3>::operator=((Vector<Vector3> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_60);
          local_58[0] = 0x24;
          break;
        case 0x25:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_00126898;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Color>::operator=((Vector<Color> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Color>::_unref((CowData<Color> *)&local_60);
          local_58[0] = 0x25;
          break;
        case 0x26:
          local_60 = 0;
          pBVar4 = (BucketLarge *)operator_new(0x20,"");
          *(undefined ***)pBVar4 = &PTR__PackedArrayRefBase_00126778;
          *(undefined4 *)(pBVar4 + 8) = 0;
          *(undefined ***)pBVar4 = &PTR__PackedArrayRef_001268b8;
          *(undefined8 *)(pBVar4 + 0x18) = 0;
          Vector<Vector4>::operator=((Vector<Vector4> *)(pBVar4 + 0x10),(Vector *)&local_68);
          *(undefined4 *)(pBVar4 + 8) = 1;
          local_50 = pBVar4;
          CowData<Vector4>::_unref((CowData<Vector4> *)&local_60);
          local_58[0] = 0x26;
        }
        Variant::operator=((Variant *)(*(long *)(this + 0xb68) + 0x198),(Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
  }
LAB_0010f44d:
  CowData<String>::_unref((CowData<String> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyArray::initialize_array(Variant&) */

void __thiscall EditorPropertyArray::initialize_array(EditorPropertyArray *this,Variant *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
  BucketLarge *this_00;
  BucketMedium *pBVar10;
  BucketSmall *pBVar11;
  long in_FS_OFFSET;
  bool bVar12;
  Array local_78 [8];
  long local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar2 = *(int *)(this + 0xba0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar2 == 0x1c) {
    if (*(int *)(this + 0xba4) == 0) {
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = 0x1c;
      Array::Array((Array *)(param_1 + 8));
      *(undefined4 *)param_1 = 0x1c;
    }
    else {
      Array::Array(local_78);
      local_70 = 0;
      if (((*(int *)(this + 0xba4) == 0x18) && (*(long *)(this + 0xbb0) != 0)) &&
         (1 < *(uint *)(*(long *)(this + 0xbb0) + -8))) {
        StringName::StringName((StringName *)&local_68,(String *)(this + 0xbb0),false);
        cVar7 = ClassDB::class_exists((StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        if (cVar7 != '\0') {
          StringName::StringName((StringName *)&local_68,(String *)(this + 0xbb0),false);
          if (local_70 == local_68) {
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_70 = local_68;
          }
        }
      }
      Variant::Variant((Variant *)local_58,(Object *)0x0);
      Array::set_typed((uint)local_78,(StringName *)(ulong)*(uint *)(this + 0xba4),
                       (Variant *)&local_70);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_78);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar12 = StringName::configured != '\0';
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if ((bVar12) && (local_70 != 0)) {
        StringName::unref();
      }
      Array::~Array(local_78);
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_1 = iVar2;
    uVar6 = _UNK_00129158;
    uVar5 = __LC161;
    switch(iVar2) {
    case 4:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)param_1 = 4;
      break;
    case 0xb:
      pBVar11 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(param_1 + 8) = pBVar11;
      *(undefined8 *)pBVar11 = 0x3f800000;
      *(undefined8 *)(pBVar11 + 8) = 0x3f80000000000000;
      *(undefined8 *)(pBVar11 + 0x10) = 0;
      *(undefined4 *)param_1 = 0xb;
      break;
    case 0x10:
      pBVar11 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                           &Variant::Pools::_bucket_small);
      *(BucketSmall **)(param_1 + 8) = pBVar11;
      *(undefined8 *)pBVar11 = 0;
      *(undefined4 *)(pBVar11 + 8) = 0;
      *(undefined8 *)(pBVar11 + 0xc) = 0;
      *(undefined4 *)(pBVar11 + 0x14) = 0;
      *(undefined4 *)param_1 = 0x10;
      break;
    case 0x11:
      pBVar10 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      uVar4 = _LC159;
      *(BucketMedium **)(param_1 + 8) = pBVar10;
      *(undefined4 *)(pBVar10 + 0x20) = 0x3f800000;
      *(undefined1 (*) [16])pBVar10 = ZEXT416(uVar4);
      *(undefined1 (*) [16])(pBVar10 + 0x10) = ZEXT416(uVar4);
      *(undefined4 *)param_1 = 0x11;
      break;
    case 0x12:
      pBVar10 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                           &Variant::Pools::_bucket_medium);
      uVar4 = _LC159;
      *(BucketMedium **)(param_1 + 8) = pBVar10;
      *(undefined4 *)(pBVar10 + 0x20) = 0x3f800000;
      *(undefined8 *)(pBVar10 + 0x24) = 0;
      *(undefined4 *)(pBVar10 + 0x2c) = 0;
      *(undefined1 (*) [16])pBVar10 = ZEXT416(uVar4);
      *(undefined1 (*) [16])(pBVar10 + 0x10) = ZEXT416(uVar4);
      *(undefined4 *)param_1 = 0x12;
      break;
    case 0x13:
      this_00 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                          ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                           &Variant::Pools::_bucket_large);
      *(BucketLarge **)(param_1 + 8) = this_00;
      Projection::Projection((Projection *)this_00);
      *(undefined4 *)param_1 = 0x13;
      break;
    case 0x14:
      *(undefined4 *)param_1 = 0x14;
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      break;
    case 0x15:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)param_1 = 0x15;
      break;
    case 0x16:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)param_1 = 0x16;
      break;
    case 0x18:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)param_1 = 0x18;
      break;
    case 0x19:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)param_1 = 0x19;
      break;
    case 0x1a:
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)param_1 = 0x1a;
      break;
    case 0x1b:
      Dictionary::Dictionary((Dictionary *)(param_1 + 8));
      *(undefined4 *)param_1 = 0x1b;
      break;
    case 0x1d:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_00126798;
      if (local_60 != 0) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110d1c;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110d1c:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
      *(undefined4 *)param_1 = 0x1d;
      break;
    case 0x1e:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &PTR__PackedArrayRef_001267b8;
      puVar8[3] = 0;
      plVar1 = (long *)(local_60 + -0x10);
      if (local_60 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110c80;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110c80:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<int>::_unref((CowData<int> *)&local_60);
      *(undefined4 *)param_1 = 0x1e;
      break;
    case 0x1f:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_001267d8;
      if (local_60 != 0) {
        CowData<long>::_unref((CowData<long> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110bec;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110bec:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<long>::_unref((CowData<long> *)&local_60);
      *(undefined4 *)param_1 = 0x1f;
      break;
    case 0x20:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_001267f8;
      if (local_60 != 0) {
        CowData<float>::_unref((CowData<float> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110b4c;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110b4c:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<float>::_unref((CowData<float> *)&local_60);
      *(undefined4 *)param_1 = 0x20;
      break;
    case 0x21:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &PTR__PackedArrayRef_00126818;
      puVar8[3] = 0;
      plVar1 = (long *)(local_60 + -0x10);
      if (local_60 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110ab0;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110ab0:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<double>::_unref((CowData<double> *)&local_60);
      *(undefined4 *)param_1 = 0x21;
      break;
    case 0x22:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_00126838;
      if (local_60 != 0) {
        CowData<String>::_unref((CowData<String> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110a1c;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110a1c:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<String>::_unref((CowData<String> *)&local_60);
      *(undefined4 *)param_1 = 0x22;
      break;
    case 0x23:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &PTR__PackedArrayRef_00126858;
      puVar8[3] = 0;
      plVar1 = (long *)(local_60 + -0x10);
      if (local_60 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00110980;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_00110980:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
      *(undefined4 *)param_1 = 0x23;
      break;
    case 0x24:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_00126878;
      if (local_60 != 0) {
        CowData<Vector3>::_unref((CowData<Vector3> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_001108ec;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_001108ec:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_60);
      *(undefined4 *)param_1 = 0x24;
      break;
    case 0x25:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      lVar3 = local_60;
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8[3] = 0;
      *puVar8 = &PTR__PackedArrayRef_00126898;
      if (local_60 != 0) {
        CowData<Color>::_unref((CowData<Color> *)(puVar8 + 3));
        plVar1 = (long *)(lVar3 + -0x10);
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_0011084c;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_0011084c:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<Color>::_unref((CowData<Color> *)&local_60);
      *(undefined4 *)param_1 = 0x25;
      break;
    case 0x26:
      local_60 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,"");
      *puVar8 = &PTR__PackedArrayRefBase_00126778;
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &PTR__PackedArrayRef_001268b8;
      puVar8[3] = 0;
      plVar1 = (long *)(local_60 + -0x10);
      if (local_60 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_001107a8;
          LOCK();
          lVar9 = *plVar1;
          bVar12 = lVar3 == lVar9;
          if (bVar12) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar9 != -1) {
          puVar8[3] = local_60;
        }
      }
LAB_001107a8:
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined8 **)(param_1 + 8) = puVar8;
      CowData<Vector4>::_unref((CowData<Vector4> *)&local_60);
      *(undefined4 *)param_1 = 0x26;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_edit_pressed() */

void __thiscall EditorPropertyArray::_edit_pressed(EditorPropertyArray *this)

{
  char *__s;
  char cVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_58[0] = 0;
    local_50 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_58,*(bool **)(this + 0xa10));
    if (0x1b < local_58[0]) goto LAB_00111098;
  }
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    initialize_array(this,(StringName *)local_58);
    local_68 = (char *)0x0;
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)this,(Variant *)&local_70,(StringName *)local_58,SUB81(&local_68,0));
    if (StringName::configured != '\0') {
      if (local_70 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00111098;
      }
      if (local_68 != (char *)0x0) {
        StringName::unref();
      }
    }
  }
LAB_00111098:
  pSVar2 = (String *)EditorProperty::get_edited_object();
  BaseButton::is_pressed();
  EditorProperty::get_edited_property();
  if (local_78 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(local_78 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar2,SUB81((StrRange *)&local_70,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)this + 0x380))(this);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_is_drop_valid(Dictionary const&) const [clone .part.0] */

char __thiscall EditorPropertyArray::_is_drop_valid(EditorPropertyArray *this,Dictionary *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  String *pSVar5;
  int iVar6;
  StringName *pSVar7;
  String *pSVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_110;
  char local_f9;
  CowData<String> *local_f8;
  CowData<char32_t> local_e0 [8];
  Dictionary local_d8 [8];
  Variant local_d0 [8];
  String local_c8 [8];
  long local_c0;
  long local_b8;
  long local_b0;
  Variant local_a8 [8];
  String *local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::get_type_name(local_e0,*(undefined4 *)(this + 0xba4));
  if (((*(int *)(this + 0xba4) == 0x18) && (*(long *)(this + 0xbb0) != 0)) &&
     (1 < *(uint *)(*(long *)(this + 0xbb0) + -8))) {
    CowData<char32_t>::_ref(local_e0,(CowData *)(this + 0xbb0));
  }
  Dictionary::Dictionary(local_d8,param_1);
  Variant::Variant((Variant *)local_78,"");
  Variant::Variant((Variant *)local_98,"type");
  Dictionary::get((Variant *)local_58,(Variant *)local_d8);
  Variant::operator_cast_to_String(local_d0);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    if (Variant::needs_deinit[local_98[0]] == '\0') goto LAB_0011138f;
LAB_00111930:
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    if (Variant::needs_deinit[local_98[0]] != '\0') goto LAB_00111930;
LAB_0011138f:
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_f9 = String::operator==((String *)local_d0,"files");
  if (local_f9 != '\0') {
    Variant::Variant((Variant *)local_58,"files");
    Dictionary::operator[]((Variant *)local_d8);
    Variant::operator_cast_to_Vector(local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_a0 != (String *)0x0) {
      local_110 = 0;
      while (local_110 < *(long *)(local_a0 + -8)) {
        EditorFileSystem::get_file_type(local_c8);
        for (iVar6 = 0; iVar2 = String::get_slice_count((char *)local_e0), iVar6 < iVar2;
            iVar6 = iVar6 + 1) {
          String::get_slice((char *)&local_b0,(int)local_e0);
          String::strip_edges(SUB81((CowData<char32_t> *)&local_c0,0),
                              SUB81((StringName *)&local_b0,0));
          lVar10 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar3 = (long *)(local_b0 + -0x10);
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          StringName::StringName((StringName *)&local_b0,(String *)&local_c0,false);
          StringName::StringName((StringName *)&local_b8,local_c8,false);
          cVar1 = ClassDB::is_parent_class((StringName *)&local_b8,(StringName *)&local_b0);
          if (((StringName::configured != '\0') &&
              ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
             (local_b0 != 0)) {
            StringName::unref();
          }
          lVar10 = local_c0;
          if (cVar1 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
            local_f9 = '\0';
            goto LAB_0011162a;
          }
          if (local_c0 != 0) {
            LOCK();
            plVar3 = (long *)(local_c0 + -0x10);
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        local_110 = local_110 + 1;
        if (local_a0 == (String *)0x0) break;
      }
    }
LAB_0011162a:
    CowData<String>::_unref((CowData<String> *)&local_a0);
    goto LAB_001115c0;
  }
  local_f9 = String::operator==((String *)local_d0,"nodes");
  if (local_f9 == '\0') goto LAB_001115c0;
  Variant::Variant((Variant *)local_58,"nodes");
  Dictionary::operator[]((Variant *)local_d8);
  Variant::operator_cast_to_Array((Variant *)&local_c0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_a0 = (String *)0x0;
  cVar1 = String::operator==((String *)local_e0,"NodePath");
  if (cVar1 == '\0') {
LAB_001116ea:
    local_f8 = (CowData<String> *)&local_a0;
    for (iVar6 = 0; iVar2 = Array::size(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
      Array::operator[]((int)(Variant *)&local_c0);
      Variant::operator_cast_to_NodePath((Variant *)&local_b0);
      plVar3 = (long *)Node::get_node_or_null(this);
      NodePath::~NodePath((NodePath *)&local_b0);
      if (plVar3 == (long *)0x0) {
        _err_print_error("_is_drop_valid","editor/editor_properties_array_dict.cpp",0x260,
                         "Parameter \"dropped_node\" is null.",
                         "Could not get the dropped node by its path.",0,0);
LAB_001118ee:
        local_f9 = '\0';
        break;
      }
      cVar1 = String::operator!=((String *)local_e0,"NodePath");
      if (cVar1 != '\0') {
        StringName::StringName((StringName *)&local_b0,(String *)local_e0,false);
        if (plVar3[1] == 0) {
          pSVar7 = (StringName *)plVar3[0x23];
          if (pSVar7 == (StringName *)0x0) {
            pSVar7 = (StringName *)(**(code **)(*plVar3 + 0x40))(plVar3);
          }
        }
        else {
          pSVar7 = (StringName *)(plVar3[1] + 0x20);
        }
        cVar1 = ClassDB::is_parent_class(pSVar7,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        if (cVar1 == '\0') goto LAB_001118ee;
      }
      cVar1 = String::operator==((String *)local_e0,"NodePath");
      if ((cVar1 != '\0') &&
         (cVar1 = String::operator!=((String *)(this + 0xbb0),"NodePath"), cVar1 != '\0')) {
        if (plVar3[1] == 0) {
          plVar4 = (long *)plVar3[0x23];
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
          }
        }
        else {
          plVar4 = (long *)(plVar3[1] + 0x20);
        }
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          local_b0 = 0;
        }
        else {
          local_b0 = 0;
          if (*(char **)(lVar10 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar10 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_b0,*(char **)(lVar10 + 8));
          }
        }
        pSVar5 = local_a0;
        if ((local_a0 != (String *)0x0) && (0 < *(long *)(local_a0 + -8))) {
          lVar10 = 0;
          do {
            cVar1 = String::operator==(pSVar5 + lVar10 * 8,(String *)&local_b0);
            if (cVar1 != '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              goto LAB_00111700;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(long *)(pSVar5 + -8));
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<String>::_copy_on_write(local_f8);
        pSVar8 = local_a0;
        CowData<String>::_copy_on_write(local_f8);
        pSVar5 = local_a0;
        if (local_a0 != (String *)0x0) {
          pSVar5 = local_a0 + *(long *)(local_a0 + -8) * 8;
        }
        if (pSVar8 != pSVar5) {
          while( true ) {
            StringName::StringName((StringName *)&local_b0,pSVar8,false);
            if (plVar3[1] == 0) {
              pSVar7 = (StringName *)plVar3[0x23];
              if (pSVar7 == (StringName *)0x0) {
                pSVar7 = (StringName *)(**(code **)(*plVar3 + 0x40))(plVar3);
              }
            }
            else {
              pSVar7 = (StringName *)(plVar3[1] + 0x20);
            }
            cVar1 = ClassDB::is_parent_class(pSVar7,(StringName *)&local_b0);
            if ((StringName::configured != '\0') && (local_b0 != 0)) {
              StringName::unref();
            }
            if (cVar1 != '\0') break;
            pSVar8 = pSVar8 + 8;
            if (pSVar5 == pSVar8) goto LAB_001118ee;
          }
        }
      }
LAB_00111700:
    }
  }
  else {
    iVar6 = 0;
    pSVar5 = (String *)(this + 0xbb0);
    cVar1 = String::operator==(pSVar5,"NodePath");
    if (cVar1 == '\0') {
      while( true ) {
        local_f8 = (CowData<String> *)&local_a0;
        iVar2 = String::get_slice_count((char *)pSVar5);
        if (iVar2 <= iVar6) break;
        String::get_slice((char *)&local_b0,(int)pSVar5);
        String::strip_edges(SUB81((CowData<char32_t> *)&local_b8,0),
                            SUB81((CowData<char32_t> *)&local_b0,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_b8);
        if (local_a0 == (String *)0x0) {
          lVar10 = 1;
        }
        else {
          lVar10 = *(long *)(local_a0 + -8) + 1;
        }
        iVar2 = CowData<String>::resize<false>(local_f8,lVar10);
        if (iVar2 == 0) {
          if (local_a0 == (String *)0x0) {
            lVar9 = -1;
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(local_a0 + -8);
            lVar9 = lVar10 + -1;
            if (-1 < lVar9) {
              CowData<String>::_copy_on_write(local_f8);
              if (*(long *)(local_a0 + lVar9 * 8) != local_b0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(local_a0 + lVar9 * 8),(CowData *)&local_b0);
              }
              goto LAB_00111a8b;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar10,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00111a8b:
        iVar6 = iVar6 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      goto LAB_001116ea;
    }
  }
  local_f8 = (CowData<String> *)&local_a0;
  CowData<String>::_unref(local_f8);
  Array::~Array((Array *)&local_c0);
LAB_001115c0:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  Dictionary::~Dictionary(local_d8);
  CowData<char32_t>::_unref(local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_f9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_is_drop_valid(Dictionary const&) const */

undefined8 __thiscall
EditorPropertyArray::_is_drop_valid(EditorPropertyArray *this,Dictionary *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = EditorProperty::is_read_only();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = _is_drop_valid(this,param_1);
  return uVar2;
}



/* EditorPropertyArray::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined4 EditorPropertyArray::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  Variant aVStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)param_1 + 0x408);
  Variant::operator_cast_to_Dictionary(aVStack_28);
  if (pcVar1 == _is_drop_valid) {
    uVar3 = 0;
    cVar2 = EditorProperty::is_read_only();
    if (cVar2 == '\0') {
      uVar3 = _is_drop_valid((EditorPropertyArray *)param_1,(Dictionary *)aVStack_28);
    }
  }
  else {
    uVar3 = (*pcVar1)(param_1,aVStack_28);
  }
  Dictionary::~Dictionary((Dictionary *)aVStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void EditorPropertyArray::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  Variant local_120 [8];
  Variant local_118 [8];
  Variant local_110 [8];
  NodePath local_108 [8];
  Object *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  Variant *local_c8 [2];
  int local_b8 [8];
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)param_1 + 0x408);
  Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
  if (pcVar2 == _is_drop_valid) {
    cVar3 = EditorProperty::is_read_only();
    if (cVar3 == '\0') {
      cVar3 = _is_drop_valid((EditorPropertyArray *)param_1,(Dictionary *)&local_d8);
      goto LAB_00111e29;
    }
    Dictionary::~Dictionary((Dictionary *)&local_d8);
  }
  else {
    cVar3 = (*pcVar2)(param_1,(Variant *)&local_d8);
LAB_00111e29:
    Dictionary::~Dictionary((Dictionary *)&local_d8);
    if (cVar3 != '\0') {
      Variant::operator_cast_to_Dictionary(local_120);
      Variant::Variant((Variant *)local_98,"");
      Variant::Variant((Variant *)local_b8,"type");
      Dictionary::get((Variant *)local_78,local_120);
      Variant::operator_cast_to_String(local_118);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_b8,(Variant *)(*(long *)(param_1 + 0xc00) + 0x180));
      if (local_b8[0] < 0x1c) {
        initialize_array((EditorPropertyArray *)param_1,(Variant *)local_b8);
      }
      else {
        Variant::duplicate(SUB81((Variant *)local_78,0));
        if (Variant::needs_deinit[local_b8[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_b8[0] = local_78[0];
      }
      cVar3 = String::operator==((String *)local_118,"files");
      bVar6 = SUB81((Variant *)&local_d8,0);
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_78,"files");
        Dictionary::operator[](local_120);
        Variant::operator_cast_to_Vector((Variant *)&local_e8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        for (lVar8 = 0; (local_e0 != 0 && (lVar8 < *(long *)(local_e0 + -8))); lVar8 = lVar8 + 1) {
          lVar1 = local_e0 + lVar8 * 8;
          local_d8 = 0x1139c6;
          uStack_d4 = 0;
          local_f0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          String::parse_latin1((StrRange *)&local_f0);
          ResourceLoader::load(&local_100,lVar1,(StrRange *)&local_f0,1,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          pOVar5 = local_100;
          if (local_100 != (Object *)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              pOVar5 = (Object *)0x0;
            }
            StringName::StringName((StringName *)&local_f8,"push_back",false);
            Variant::Variant((Variant *)local_78,pOVar5);
            local_60 = 0;
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            local_98[0] = 0;
            local_58 = (undefined1  [16])0x0;
            local_90 = (undefined1  [16])0x0;
            local_c8[0] = (Variant *)local_78;
            Variant::callp((StringName *)local_b8,(Variant **)&local_f8,(int)local_c8,(Variant *)0x1
                           ,(CallError *)local_98);
            if (local_d8 != 0) {
              if (local_f8 == 0) {
                local_f0 = 0;
              }
              else {
                local_f0 = 0;
                if (*(char **)(local_f8 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_f0,(CowData *)(local_f8 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_f0,*(char **)(local_f8 + 8));
                }
              }
              Variant::_variant_call_error((String *)local_b8,(CallError *)&local_f0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            }
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_f8 != 0)) {
              StringName::unref();
            }
            if (((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
               (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            if (((local_100 != (Object *)0x0) &&
                (cVar3 = RefCounted::unreference(), pOVar5 = local_100, cVar3 != '\0')) &&
               (cVar3 = predelete_handler(local_100), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
        local_d8 = 0;
        uStack_d4 = 0;
        EditorProperty::get_edited_property();
        EditorProperty::emit_changed
                  ((StringName *)param_1,(StrRange *)&local_f0,(StringName *)local_b8,bVar6);
        if (((StringName::configured != '\0') &&
            ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
           (CONCAT44(uStack_d4,local_d8) != 0)) {
          StringName::unref();
        }
        CowData<String>::_unref((CowData<String> *)&local_e0);
      }
      cVar3 = String::operator==((String *)local_118,"nodes");
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_78,"nodes");
        Dictionary::operator[](local_120);
        Variant::operator_cast_to_Array(local_110);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        get_base_node((EditorPropertyArray *)param_1);
        for (iVar7 = 0; iVar4 = Array::size(), iVar7 < iVar4; iVar7 = iVar7 + 1) {
          Array::operator[]((int)local_110);
          Variant::operator_cast_to_NodePath((Variant *)local_108);
          if (*(int *)(param_1 + 0xba4) == 0x18) {
            pOVar5 = (Object *)Node::get_node(param_1);
            StringName::StringName((StringName *)&local_f0,"push_back",false);
            Variant::Variant((Variant *)local_78,pOVar5);
            local_60 = 0;
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            local_98[0] = 0;
            local_58 = (undefined1  [16])0x0;
            local_90 = (undefined1  [16])0x0;
            local_c8[0] = (Variant *)local_78;
            Variant::callp((StringName *)local_b8,(Variant **)&local_f0,(int)local_c8,(Variant *)0x1
                           ,(CallError *)local_98);
            if (local_d8 != 0) {
              if (local_f0 == 0) {
                local_e8 = 0;
              }
              else {
                local_e8 = 0;
                if (*(char **)(local_f0 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_e8,(CowData *)(local_f0 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_e8,*(char **)(local_f0 + 8));
                }
              }
              Variant::_variant_call_error((String *)local_b8,(CallError *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            }
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_f0 != 0)) {
              StringName::unref();
            }
          }
          else if (*(int *)(param_1 + 0xba4) == 0x16) {
            Node::get_path();
            NodePath::rel_path_to((NodePath *)&local_f8);
            StringName::StringName((StringName *)&local_f0,"push_back",false);
            Variant::Variant((Variant *)local_78,(NodePath *)&local_f8);
            local_60 = 0;
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            local_98[0] = 0;
            local_58 = (undefined1  [16])0x0;
            local_90 = (undefined1  [16])0x0;
            local_c8[0] = (Variant *)local_78;
            Variant::callp((StringName *)local_b8,(Variant **)&local_f0,(int)local_c8,(Variant *)0x1
                           ,(CallError *)local_98);
            if (local_d8 != 0) {
              if (local_f0 == 0) {
                local_e8 = 0;
              }
              else {
                local_e8 = 0;
                if (*(char **)(local_f0 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_e8,(CowData *)(local_f0 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_e8,*(char **)(local_f0 + 8));
                }
              }
              Variant::_variant_call_error((String *)local_b8,(CallError *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            }
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_f0 != 0)) {
              StringName::unref();
            }
            NodePath::~NodePath((NodePath *)&local_f8);
            NodePath::~NodePath((NodePath *)&local_100);
          }
          NodePath::~NodePath(local_108);
        }
        local_d8 = 0;
        uStack_d4 = 0;
        EditorProperty::get_edited_property();
        EditorProperty::emit_changed
                  ((StringName *)param_1,(String *)&local_e8,(StringName *)local_b8,bVar6);
        if ((StringName::configured != '\0') &&
           (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (CONCAT44(uStack_d4,local_d8) != 0)))) {
          StringName::unref();
        }
        Array::~Array((Array *)local_110);
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      Dictionary::~Dictionary((Dictionary *)local_120);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011293c;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("drop_data_fw","editor/editor_properties_array_dict.cpp",0x287,
                     "Condition \"!_is_drop_valid(p_data)\" is true.",0,0);
    return;
  }
LAB_0011293c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::_notification(int) */

void __thiscall EditorPropertyArray::_notification(EditorPropertyArray *this,int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  Ref *pRVar3;
  code *pcVar4;
  long lVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  StringName local_80 [8];
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x16) {
    if (this[0xc09] != (EditorPropertyArray)0x0) {
      this[0xc09] = (EditorPropertyArray)0x0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00112c60;
      goto LAB_00112d95;
    }
  }
  else if (param_1 < 0x17) {
    if (param_1 == 10) {
LAB_001129cd:
      PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xb58),0));
      uVar2 = *(undefined8 *)(this + 0xb58);
      local_70 = 0;
      local_68 = (Object *)&_LC3;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = (Object *)0x113ad5;
      local_78 = 0;
      local_60 = 0xb;
      String::parse_latin1((StrRange *)&local_78);
      TTR((String *)&local_68,(String *)&local_78);
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar8 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      uVar10 = 0;
      Control::get_editor_theme_icon(local_80);
      PopupMenu::add_icon_item(uVar2,local_80,(String *)&local_68,0x27,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      local_68 = (Object *)0x0;
      PopupMenu::add_separator(*(String **)(this + 0xb58),(int)(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      do {
        if ((0x6800000UL >> (uVar10 & 0x3f) & 1) == 0) {
          Variant::get_type_name((StrRange *)&local_78,uVar10);
          uVar2 = *(undefined8 *)(this + 0xb58);
          StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
          Control::get_editor_theme_icon((StringName *)&local_68);
          PopupMenu::add_icon_item(uVar2,(String *)&local_68,(StrRange *)&local_78,uVar10,0);
          if (((local_68 != (Object *)0x0) &&
              (cVar7 = RefCounted::unreference(), pOVar6 = local_68, cVar7 != '\0')) &&
             (cVar7 = predelete_handler(local_68), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
          if ((StringName::configured != '\0') && (local_70 != 0)) {
            StringName::unref();
          }
          lVar5 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar9;
      } while (uVar9 != 0x27);
      pRVar3 = *(Ref **)(this + 0xb90);
      if (pRVar3 != (Ref *)0x0) {
        if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_68);
        Button::set_button_icon(pRVar3);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
      }
    }
    else if ((param_1 == 0x15) && (cVar7 = CanvasItem::is_visible_in_tree(), cVar7 != '\0')) {
      pcVar4 = *(code **)(*(long *)this + 0x408);
      Viewport::gui_get_drag_data();
      Variant::operator_cast_to_Dictionary((Variant *)&local_68);
      if (pcVar4 == _is_drop_valid) {
        cVar7 = EditorProperty::is_read_only();
        if (cVar7 != '\0') {
          Dictionary::~Dictionary((Dictionary *)&local_68);
          if (Variant::needs_deinit[local_58] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_001129a0;
        }
        cVar7 = _is_drop_valid(this,(Dictionary *)&local_68);
      }
      else {
        cVar7 = (*pcVar4)(this,(Variant *)&local_68);
      }
      Dictionary::~Dictionary((Dictionary *)&local_68);
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar7 != '\0') {
        this[0xc09] = (EditorPropertyArray)0x1;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00112c60:
          CanvasItem::queue_redraw();
          return;
        }
        goto LAB_00112d95;
      }
    }
  }
  else if (param_1 == 0x2d) goto LAB_001129cd;
LAB_001129a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112d95:
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



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  return;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  operator_delete(this,0x10);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorPropertyArrayObject::is_class_ptr(void*) const */

uint __thiscall
EditorPropertyArrayObject::is_class_ptr(EditorPropertyArrayObject *this,void *param_1)

{
  return (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x128e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPropertyArrayObject::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyArrayObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPropertyArrayObject::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyArrayObject::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPropertyArrayObject::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyArrayObject::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyArrayObject::_notificationv(int, bool) */

void EditorPropertyArrayObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorPropertyDictionaryObject::is_class_ptr(void*) const */

uint __thiscall
EditorPropertyDictionaryObject::is_class_ptr(EditorPropertyDictionaryObject *this,void *param_1)

{
  return (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x128e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x128f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPropertyDictionaryObject::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyDictionaryObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPropertyDictionaryObject::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyDictionaryObject::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPropertyDictionaryObject::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorPropertyDictionaryObject::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyDictionaryObject::_notificationv(int, bool) */

void EditorPropertyDictionaryObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorProperty, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProperty,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorProperty, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorProperty,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorProperty, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProperty,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorPropertyArrayObject::~EditorPropertyArrayObject() */

void __thiscall
EditorPropertyArrayObject::~EditorPropertyArrayObject(EditorPropertyArrayObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127128;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
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



/* EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject() */

void __thiscall
EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject
          (EditorPropertyDictionaryObject *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00127288;
  Dictionary::~Dictionary((Dictionary *)(this + 0x1b0));
  if (Variant::needs_deinit[*(int *)(this + 0x198)] == '\0') {
    cVar1 = Variant::needs_deinit[*(int *)(this + 0x180)];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[*(int *)(this + 0x180)];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012f018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,(Variant *)param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012f018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,(Variant *)param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012f018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,(Variant *)param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyDictionary::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyDictionary::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012f018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,(Variant *)param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyLocalizableString::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorPropertyLocalizableString::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012f018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,(Variant *)param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012f020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012f020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyArray::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyArray::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012f020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyDictionary::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyDictionary::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012f020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyLocalizableString::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyLocalizableString::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012f020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&, ObjectID>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this)

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
      goto LAB_001146ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001146ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001146ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this)

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
      goto LAB_001147ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001147ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001147ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this)

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
      goto LAB_001148ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001148ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001148ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::get_object
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
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
      goto LAB_001149ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001149ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001149ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::
get_object(CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
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
      goto LAB_00114aad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114aad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114aad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
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
      goto LAB_00114bad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114bad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114bad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::get_object(CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
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
      goto LAB_00114cad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114cad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114cad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*, int>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this)

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
      goto LAB_00114dad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114dad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114dad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this)

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
      goto LAB_00114ead;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114ead;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114ead:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::
get_object(CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
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
      goto LAB_00114fad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00114fad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00114fad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001150ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001150ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001150ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this)

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
      goto LAB_001151ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001151ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001151ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this)

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
      goto LAB_001152ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001152ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001152ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001153ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001153ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001153ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this)

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
      goto LAB_001154ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001154ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001154ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorProperty, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::get_object
          (CallableCustomMethodPointer<EditorProperty,void,int> *this)

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
      goto LAB_001155ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001155ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001155ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this)

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
      goto LAB_001156ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001156ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001156ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this)

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
      goto LAB_001157ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001157ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001157ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this)

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
      goto LAB_001158ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001158ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001158ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this)

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
      goto LAB_001159ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001159ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001159ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this)

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
      goto LAB_00115aad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115aad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115aad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorPropertyDictionary::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyDictionary::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012f028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyLocalizableString::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyLocalizableString::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012f028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyArray::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyArray::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012f028 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_0012f030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012f030 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x128f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x128f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyArrayObject::~EditorPropertyArrayObject() */

void __thiscall
EditorPropertyArrayObject::~EditorPropertyArrayObject(EditorPropertyArrayObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00127128;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* EditorPropertyLocalizableString::is_class_ptr(void*) const */

uint EditorPropertyLocalizableString::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x128f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128e,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyArray::is_class_ptr(void*) const */

uint EditorPropertyArray::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x128f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128e,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyDictionary::is_class_ptr(void*) const */

uint EditorPropertyDictionary::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x128f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128e,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x128f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyDictionary::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyDictionary::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,(Variant *)param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,(Variant *)param_2);
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
  
  uVar1 = CanvasItem::_set(param_1,(Variant *)param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,(Variant *)param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyArray::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyArray::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,(Variant *)param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,(Variant *)param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyLocalizableString::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyLocalizableString::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,(Variant *)param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,(Variant *)param_2);
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
  
  uVar1 = CanvasItem::_set(param_1,(Variant *)param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,(Variant *)param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject() */

void __thiscall
EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject
          (EditorPropertyDictionaryObject *this)

{
  char cVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00127288;
  Dictionary::~Dictionary((Dictionary *)(this + 0x1b0));
  if (Variant::needs_deinit[*(int *)(this + 0x198)] == '\0') {
    cVar1 = Variant::needs_deinit[*(int *)(this + 0x180)];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[*(int *)(this + 0x180)];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001268d8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00116378) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,(Variant *)param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,(Variant *)param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001163e8) */
/* EditorPropertyArray::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyArray::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,(Variant *)param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,(Variant *)param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116458) */
/* EditorPropertyLocalizableString::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyLocalizableString::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,(Variant *)param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,(Variant *)param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001164c8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,(Variant *)param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,(Variant *)param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116538) */
/* EditorPropertyDictionary::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyDictionary::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,(Variant *)param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,(Variant *)param_2);
  return uVar1;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012f048 != Container::_notification) {
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
  if ((code *)PTR__notification_0012f048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012f048 != Container::_notification) {
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
  if ((code *)PTR__notification_0012f048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorProperty::is_read_only;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001167e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorProperty::is_read_only;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116840;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00116840:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorProperty::is_read_only;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001168a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001168a0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorProperty::is_read_only;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116910;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00116910:
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
LAB_001169e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001169e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00116a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00116a4e:
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
LAB_00116ad3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116ad3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00116b3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00116b3e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyLocalizableString::_get_class_namev() const */

undefined8 * EditorPropertyLocalizableString::_get_class_namev(void)

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
LAB_00116bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPropertyLocalizableString");
      goto LAB_00116c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyLocalizableString"
            );
LAB_00116c3e:
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
LAB_00116cc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116cc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00116d2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00116d2e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyDictionary::_get_class_namev() const */

undefined8 * EditorPropertyDictionary::_get_class_namev(void)

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
LAB_00116db3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116db3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyDictionary");
      goto LAB_00116e1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyDictionary");
LAB_00116e1e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyDictionaryObject::_get_class_namev() const */

undefined8 * EditorPropertyDictionaryObject::_get_class_namev(void)

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
LAB_00116eb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116eb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPropertyDictionaryObject");
      goto LAB_00116f1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyDictionaryObject")
  ;
LAB_00116f1e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyArray::_get_class_namev() const */

undefined8 * EditorPropertyArray::_get_class_namev(void)

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
LAB_00116fa3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00116fa3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyArray");
      goto LAB_0011700e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyArray");
LAB_0011700e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyArrayObject::_get_class_namev() const */

undefined8 * EditorPropertyArrayObject::_get_class_namev(void)

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
LAB_00117093:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117093;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyArrayObject");
      goto LAB_001170fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyArrayObject");
LAB_001170fe:
  return &_get_class_namev()::_class_name_static;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126858;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267f8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001268b8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126898;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267d8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126818;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267b8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126878;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126858;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267d8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126878;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267f8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126898;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001268b8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126818;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_001267b8;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126798;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_00126798;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
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



/* EditorPropertyArrayObject::get_class() const */

void EditorPropertyArrayObject::get_class(void)

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



/* EditorPropertyArray::get_class() const */

void EditorPropertyArray::get_class(void)

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



/* EditorPropertyDictionaryObject::get_class() const */

void EditorPropertyDictionaryObject::get_class(void)

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



/* EditorPropertyLocalizableString::get_class() const */

void EditorPropertyLocalizableString::get_class(void)

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



/* EditorPropertyDictionary::get_class() const */

void EditorPropertyDictionary::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00117ddf;
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
LAB_00117ddf:
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
    if (cVar6 != '\0') goto LAB_00117e93;
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
              if (lVar5 == 0) goto LAB_00117f43;
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
LAB_00117f43:
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
      if (cVar6 != '\0') goto LAB_00117e93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00117e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArrayObject::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyArrayObject::is_class(EditorPropertyArrayObject *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011806f;
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
LAB_0011806f:
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
    if (cVar5 != '\0') goto LAB_00118123;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyArrayObject");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00118123:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionaryObject::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyDictionaryObject::is_class(EditorPropertyDictionaryObject *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001181ef;
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
LAB_001181ef:
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
    if (cVar5 != '\0') goto LAB_001182a3;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyDictionaryObject");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001182a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* EditorPropertyArray::Slot::set_index(int) */

void __thiscall EditorPropertyArray::Slot::set_index(Slot *this,int param_1)

{
  long *plVar1;
  Object *pOVar2;
  String *pSVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  itos((long)&local_48);
  operator+((char *)&local_50,(String *)"indices/");
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pOVar2 = *(Object **)(this + 0x20);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  EditorProperty::set_object_and_property(pOVar2,*(StringName **)this);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pSVar3 = *(String **)(this + 0x20);
  itos((long)&local_48);
  EditorProperty::set_label(pSVar3);
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_50;
  *(int *)(this + 0x10) = param_1;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00118590) */
/* EditorPropertyLocalizableString::_notificationv(int, bool) */

void __thiscall
EditorPropertyLocalizableString::_notificationv
          (EditorPropertyLocalizableString *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012f050 != Container::_notification) {
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
  if ((code *)PTR__notification_0012f050 != Container::_notification) {
    EditorProperty::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* Vector<unsigned char>::TEMPNAMEPLACEHOLDERVALUE(Vector<unsigned char> const&) */

void __thiscall Vector<unsigned_char>::operator=(Vector<unsigned_char> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<int>::TEMPNAMEPLACEHOLDERVALUE(Vector<int> const&) */

void __thiscall Vector<int>::operator=(Vector<int> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<long>::TEMPNAMEPLACEHOLDERVALUE(Vector<long> const&) */

void __thiscall Vector<long>::operator=(Vector<long> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<float>::TEMPNAMEPLACEHOLDERVALUE(Vector<float> const&) */

void __thiscall Vector<float>::operator=(Vector<float> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<double>::TEMPNAMEPLACEHOLDERVALUE(Vector<double> const&) */

void __thiscall Vector<double>::operator=(Vector<double> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<Vector2>::TEMPNAMEPLACEHOLDERVALUE(Vector<Vector2> const&) */

void __thiscall Vector<Vector2>::operator=(Vector<Vector2> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<Vector3>::TEMPNAMEPLACEHOLDERVALUE(Vector<Vector3> const&) */

void __thiscall Vector<Vector3>::operator=(Vector<Vector3> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<Color>::TEMPNAMEPLACEHOLDERVALUE(Vector<Color> const&) */

void __thiscall Vector<Color>::operator=(Vector<Color> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Vector<Vector4>::TEMPNAMEPLACEHOLDERVALUE(Vector<Vector4> const&) */

void __thiscall Vector<Vector4>::operator=(Vector<Vector4> *this,Vector *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      *(undefined8 *)(this + 8) = 0;
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* Variant::Pools::BucketSmall* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::alloc<>()
    */

BucketSmall * __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar2;
  long lVar3;
  BucketSmall *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x18,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x18;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketSmall **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */

BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
  long lVar3;
  BucketMedium *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x30;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketMedium **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketLarge* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::alloc<>()
    */

BucketLarge * __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar2;
  long lVar3;
  BucketLarge *pBVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) << 6,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      uVar10 = 0;
      lVar6 = *plVar12;
      do {
        *(ulong *)(lVar6 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar5 + lVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketLarge **)
            (plVar12[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Callable create_custom_callable_function_pointer<EditorPropertyArray>(EditorPropertyArray*, char
   const*, void (EditorPropertyArray::*)()) */

EditorPropertyArray *
create_custom_callable_function_pointer<EditorPropertyArray>
          (EditorPropertyArray *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00128048;
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



/* Callable create_custom_callable_function_pointer<EditorPropertyArray, int>(EditorPropertyArray*,
   char const*, void (EditorPropertyArray::*)(int)) */

EditorPropertyArray *
create_custom_callable_function_pointer<EditorPropertyArray,int>
          (EditorPropertyArray *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001280d8;
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



/* Callable Callable::bind<int>(int) const */

Variant ** Callable::bind<int>(int param_1)

{
  char cVar1;
  int in_EDX;
  int in_ESI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_EDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT44(in_register_0000003c,param_1),in_ESI);
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
  return (Variant **)CONCAT44(in_register_0000003c,param_1);
}



/* Callable Callable::bind<Button*, int>(Button*, int) const */

Button * Callable::bind<Button*,int>(Button *param_1,int param_2)

{
  Variant *pVVar1;
  int in_ECX;
  Object *in_RDX;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_78,in_RDX);
  Variant::Variant(local_60,in_ECX);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pVVar2 = (Variant *)&local_30;
  Callable::bindp((Variant **)param_1,param_2);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorProperty, int>(EditorProperty*, char
   const*, void (EditorProperty::*)(int)) */

EditorProperty *
create_custom_callable_function_pointer<EditorProperty,int>
          (EditorProperty *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001283a8;
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



/* Callable create_custom_callable_function_pointer<EditorPropertyDictionary,
   int>(EditorPropertyDictionary*, char const*, void (EditorPropertyDictionary::*)(int)) */

EditorPropertyDictionary *
create_custom_callable_function_pointer<EditorPropertyDictionary,int>
          (EditorPropertyDictionary *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001285e8;
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



/* Callable
   create_custom_callable_function_pointer<EditorPropertyDictionary>(EditorPropertyDictionary*, char
   const*, void (EditorPropertyDictionary::*)()) */

EditorPropertyDictionary *
create_custom_callable_function_pointer<EditorPropertyDictionary>
          (EditorPropertyDictionary *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00128678;
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



/* void Ref<EditorPropertyDictionaryObject>::instantiate<>() */

void __thiscall
Ref<EditorPropertyDictionaryObject>::instantiate<>(Ref<EditorPropertyDictionaryObject> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x1b8,"");
  RefCounted::RefCounted(this_00);
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00127288;
  *(undefined4 *)(this_00 + 0x198) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1a0) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x1b0));
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
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_00119705;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00119705;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00119705:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable
   create_custom_callable_function_pointer<EditorPropertyLocalizableString>(EditorPropertyLocalizableString*,
   char const*, void (EditorPropertyLocalizableString::*)()) */

EditorPropertyLocalizableString *
create_custom_callable_function_pointer<EditorPropertyLocalizableString>
          (EditorPropertyLocalizableString *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00128a68;
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



/* EditorPropertyArrayObject::_setv(StringName const&, Variant const&) */

void __thiscall
EditorPropertyArrayObject::_setv
          (EditorPropertyArrayObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* EditorPropertyDictionaryObject::_setv(StringName const&, Variant const&) */

void __thiscall
EditorPropertyDictionaryObject::_setv
          (EditorPropertyDictionaryObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* EditorPropertyDictionaryObject::_initialize_classv() */

void EditorPropertyDictionaryObject::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0012f058 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyDictionaryObject";
    local_60 = 0;
    local_40 = 0x1e;
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



/* EditorPropertyDictionary::Slot::update_prop_or_index() */

void __thiscall EditorPropertyDictionary::Slot::update_prop_or_index(Slot *this)

{
  Object *pOVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  pOVar1 = *(Object **)(this + 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,(String *)(this + 0x30),false);
  EditorProperty::set_object_and_property(pOVar1,*(StringName **)this);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  pOVar1 = *(Object **)(this + 0x28);
  if (pOVar1 == (Object *)0x0) {
    pSVar2 = *(String **)(this + 0x20);
    EditorPropertyDictionaryObject::get_label_for_index((int)&local_28);
    EditorProperty::set_label(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  }
  else {
    StringName::StringName((StringName *)&local_28,(String *)(this + 0x38),false);
    EditorProperty::set_object_and_property(pOVar1,*(StringName **)this);
    if ((StringName::configured != '\0') && (local_28 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00119d58) */
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



/* EditorPropertyArrayObject::_getv(StringName const&, Variant&) const */

void __thiscall
EditorPropertyArrayObject::_getv
          (EditorPropertyArrayObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* EditorPropertyDictionaryObject::_getv(StringName const&, Variant&) const */

void __thiscall
EditorPropertyDictionaryObject::_getv
          (EditorPropertyDictionaryObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011a0b0) */
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



/* Variant Variant::call<>(StringName const&) */

StringName * Variant::call<>(StringName *param_1)

{
  Variant *pVVar1;
  char *__s;
  Variant **in_RDX;
  StringName *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  char *local_58;
  size_t local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  local_48 = 0;
  local_68 = 0;
  local_64 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::callp(in_RSI,in_RDX,0,(Variant *)0x0,(CallError *)param_1);
  if (local_68 != 0) {
    pVVar1 = *in_RDX;
    if (pVVar1 == (Variant *)0x0) {
      local_70 = 0;
    }
    else {
      __s = *(char **)(pVVar1 + 8);
      local_70 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(pVVar1 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    Variant::_variant_call_error((String *)in_RSI,(CallError *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011a4f0) */
/* String vformat<String, String, int>(String const&, String const, String const, int const) */

undefined8 *
vformat<String,String,int>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011a7e0) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

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



/* WARNING: Removing unreachable block (ram,0x0011aa98) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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
        if (pvVar5 == (void *)0x0) goto LAB_0011adc4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011adc4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
  *(code **)this = PopupMenu::add_icon_item;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ae7d;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_0011ae7d:
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
        if (pvVar4 == (void *)0x0) goto LAB_0011af52;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_0011af52:
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
  *(code **)this = EditorProperty::is_read_only;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011aff5;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011aff5:
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



/* EditorPropertyLocalizableString::~EditorPropertyLocalizableString() */

void __thiscall
EditorPropertyLocalizableString::~EditorPropertyLocalizableString
          (EditorPropertyLocalizableString *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00127be8;
  if (*(long *)(this + 0xb68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorProperty::~EditorProperty((EditorProperty *)this);
        return;
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyLocalizableString::~EditorPropertyLocalizableString() */

void __thiscall
EditorPropertyLocalizableString::~EditorPropertyLocalizableString
          (EditorPropertyLocalizableString *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00127be8;
  if (*(long *)(this + 0xb68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xba8);
  return;
}



/* EditorPropertyDictionary::_notificationv(int, bool) */

void __thiscall
EditorPropertyDictionary::_notificationv(EditorPropertyDictionary *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0012f050 != Container::_notification) {
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
  if ((code *)PTR__notification_0012f050 != Container::_notification) {
    EditorProperty::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification(iVar1);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::call
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011b4df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011b4df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011b5a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011b4df:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b5a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::call
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this,Variant **param_1,
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
      goto LAB_0011b6ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011b6ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011b7c1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011b6ff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b7c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyArray, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0011b91f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011b91f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011b9e1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011b91f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011b9e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011bbe4;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0011bbe4;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC68;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0011bb73:
          uVar4 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = (Variant *)*param_1;
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar8 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_0011bb73;
        }
        pOVar7 = Variant::operator_cast_to_Object_((Variant *)*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011bbbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar7,iVar6);
          return;
        }
        goto LAB_0011bcd8;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011bbe4:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011bcd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this,Variant **param_1,
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
      goto LAB_0011be98;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011be98;
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
        uVar4 = _LC70;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011be47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011bf5a;
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
LAB_0011be98:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011bf5a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorProperty, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::call
          (CallableCustomMethodPointer<EditorProperty,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0011c118;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011c118;
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
        uVar4 = _LC70;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011c1da;
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
LAB_0011c118:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c1da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::call
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011c3d4;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0011c3d4;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC68;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0011c363:
          uVar4 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = (Variant *)*param_1;
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar8 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_0011c363;
        }
        pOVar7 = Variant::operator_cast_to_Object_((Variant *)*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar7,iVar6);
          return;
        }
        goto LAB_0011c4c8;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c3d4:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c4c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this,Variant **param_1,
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
      goto LAB_0011c688;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011c688;
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
        uVar4 = _LC70;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011c74a;
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
LAB_0011c688:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c74a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011c908;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011c908;
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
        uVar4 = _LC70;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011c9ca;
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
LAB_0011c908:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c9ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::call
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011cbc4;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0011cbc4;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC68;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int((Variant *)param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0011cb53:
          uVar4 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = (Variant *)*param_1;
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar8 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_0011cb53;
        }
        pOVar7 = Variant::operator_cast_to_Object_((Variant *)*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cb9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar7,iVar6);
          return;
        }
        goto LAB_0011ccb8;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011cbc4:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011ccb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&, ObjectID>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC68;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID((Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC71;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_58);
            (*pcVar9)((long *)(lVar1 + lVar2),(Variant *)&local_58,uVar6);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
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
        goto LAB_0011cd85;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011cd85:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC68;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID((Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC71;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_58);
            (*pcVar9)((long *)(lVar1 + lVar2),(Variant *)&local_58,uVar6);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
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
        goto LAB_0011d045;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011d045:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC68;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID((Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC71;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_58);
            (*pcVar9)((long *)(lVar1 + lVar2),(Variant *)&local_58,uVar6);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
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
        goto LAB_0011d305;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011d305:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_0011d5c5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011d5c5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0011d64f:
          uVar4 = _LC72;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = (Variant *)param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011d64f;
        }
        pOVar6 = Variant::operator_cast_to_Object_((Variant *)param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,(Variant *)param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC74;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2((Variant *)*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0011d5c5;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_0011d5c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_0011d944;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0011d944;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0011d9cc:
          uVar4 = _LC72;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = (Variant *)param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011d9cc;
        }
        pOVar6 = Variant::operator_cast_to_Object_((Variant *)param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,(Variant *)param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC74;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2((Variant *)*param_1);
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
        goto LAB_0011d944;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_0011d944:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0011ddd6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011ddd6;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar4 = _LC75;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_double((Variant *)*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011dd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0011de98;
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
LAB_0011ddd6:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011de98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0011df6e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011df6e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC69;
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
LAB_0011e03d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011e03d;
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
        goto LAB_0011df6e;
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
  local_48 = (Object *)0x11b2f1;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011df6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::call
          (CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC76;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool((Variant *)param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_70);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,(Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC78;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
        goto LAB_0011e2ec;
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
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011e2ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::call(CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC76;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool((Variant *)param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_70);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,(Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC78;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
        goto LAB_0011e62c;
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
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011e62c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC76;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool((Variant *)param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_70);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,(Variant *)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC78;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
        goto LAB_0011e96c;
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
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011e96c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::call
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this,
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
            uVar4 = _LC78;
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
        goto LAB_0011ecae;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011ecae:
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
            if (lVar5 == 0) goto LAB_0011eecf;
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
LAB_0011eecf:
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
    if (cVar6 != '\0') goto LAB_0011ef83;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011ef83;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_0011f0e3;
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
LAB_0011f0e3:
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
        if (cVar6 != '\0') goto LAB_0011ef83;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0011f18c;
    }
  }
LAB_0011ef83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f18c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011f21f;
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
LAB_0011f21f:
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
    if (cVar6 != '\0') goto LAB_0011f2d3;
  }
  cVar6 = String::operator==(param_1,"Container");
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
              if (lVar5 == 0) goto LAB_0011f38f;
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
LAB_0011f38f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011f2d3;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar7;
      }
      goto LAB_0011f401;
    }
  }
LAB_0011f2d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f401:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyLocalizableString::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyLocalizableString::is_class(EditorPropertyLocalizableString *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011f48f;
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
LAB_0011f48f:
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
    if (cVar6 != '\0') goto LAB_0011f543;
  }
  cVar6 = String::operator==(param_1,"EditorPropertyLocalizableString");
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
              if (lVar5 == 0) goto LAB_0011f603;
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
LAB_0011f603:
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
      if (cVar6 != '\0') goto LAB_0011f543;
    }
    cVar6 = String::operator==(param_1,"EditorProperty");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Container::is_class((Container *)this,param_1);
        return uVar7;
      }
      goto LAB_0011f6ac;
    }
  }
LAB_0011f543:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f6ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyDictionary::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyDictionary::is_class(EditorPropertyDictionary *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011f72f;
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
LAB_0011f72f:
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
    if (cVar6 != '\0') goto LAB_0011f7e3;
  }
  cVar6 = String::operator==(param_1,"EditorPropertyDictionary");
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
              if (lVar5 == 0) goto LAB_0011f8a3;
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
LAB_0011f8a3:
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
      if (cVar6 != '\0') goto LAB_0011f7e3;
    }
    cVar6 = String::operator==(param_1,"EditorProperty");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Container::is_class((Container *)this,param_1);
        return uVar7;
      }
      goto LAB_0011f94c;
    }
  }
LAB_0011f7e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011f94c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyArray::is_class(String const&) const */

undefined8 __thiscall EditorPropertyArray::is_class(EditorPropertyArray *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011f9cf;
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
LAB_0011f9cf:
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
    if (cVar6 != '\0') goto LAB_0011fa83;
  }
  cVar6 = String::operator==(param_1,"EditorPropertyArray");
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
              if (lVar5 == 0) goto LAB_0011fb43;
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
LAB_0011fb43:
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
      if (cVar6 != '\0') goto LAB_0011fa83;
    }
    cVar6 = String::operator==(param_1,"EditorProperty");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Container::is_class((Container *)this,param_1);
        return uVar7;
      }
      goto LAB_0011fbec;
    }
  }
LAB_0011fa83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011fbec:
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
    if ((code *)PTR__bind_methods_0012f058 != Object::_bind_methods) {
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



/* EditorPropertyArrayObject::_initialize_classv() */

void EditorPropertyArrayObject::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0012f058 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyArrayObject";
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



/* EditorPropertyArray::_initialize_classv() */

void EditorPropertyArray::_initialize_classv(void)

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
    if (EditorProperty::initialize_class()::initialized == '\0') {
      EditorProperty::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xe;
    local_48 = "EditorProperty";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyArray";
    local_60 = 0;
    local_40 = 0x13;
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



/* EditorPropertyDictionary::_initialize_classv() */

void EditorPropertyDictionary::_initialize_classv(void)

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
    if (EditorProperty::initialize_class()::initialized == '\0') {
      EditorProperty::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xe;
    local_48 = "EditorProperty";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyDictionary";
    local_60 = 0;
    local_40 = 0x18;
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



/* EditorPropertyLocalizableString::_initialize_classv() */

void EditorPropertyLocalizableString::_initialize_classv(void)

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
    if (EditorProperty::initialize_class()::initialized == '\0') {
      EditorProperty::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xe;
    local_48 = "EditorProperty";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyLocalizableString";
    local_60 = 0;
    local_40 = 0x1f;
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
              if ((code *)PTR__bind_methods_0012f010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012f060 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0012f010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012f060 != Container::_bind_methods) {
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



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0012100f;
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
LAB_0012100f:
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
    if (cVar6 != '\0') goto LAB_001210c3;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
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
              if (lVar5 == 0) goto LAB_0012117f;
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
LAB_0012117f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001210c3;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Container::is_class((Container *)this,param_1);
        return uVar7;
      }
      goto LAB_001211f1;
    }
  }
LAB_001210c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001211f1:
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
            if (lVar5 == 0) goto LAB_0012126f;
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
LAB_0012126f:
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
    if (cVar6 != '\0') goto LAB_00121323;
  }
  cVar6 = String::operator==(param_1,"VBoxContainer");
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
              if (lVar5 == 0) goto LAB_001213df;
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
LAB_001213df:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00121323;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Container::is_class((Container *)this,param_1);
        return uVar7;
      }
      goto LAB_00121451;
    }
  }
LAB_00121323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00121451:
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
LAB_001215ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001215ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0012160f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0012160f:
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC80;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC80;
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
  if (local_90 == 0) {
LAB_0012195d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0012195d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0012197f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0012197f:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
      goto LAB_00121cb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121cb1:
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
  if ((code *)PTR__get_property_list_0012f068 != Object::_get_property_list) {
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



/* EditorPropertyDictionaryObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyDictionaryObject::_get_property_listv
          (EditorPropertyDictionaryObject *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyDictionaryObject";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyDictionaryObject";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_00121f81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121f81:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyDictionaryObject",false);
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



/* EditorPropertyArrayObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyArrayObject::_get_property_listv
          (EditorPropertyArrayObject *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyArrayObject";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyArrayObject";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_00122231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122231:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyArrayObject",false);
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
      goto LAB_001224e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001224e1:
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
  if ((code *)PTR__get_property_list_0012f070 != CanvasItem::_get_property_list) {
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
      goto LAB_001227b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001227b1:
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
      goto LAB_00122a61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122a61:
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
      goto LAB_00122d11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122d11:
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
      goto LAB_00122fc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122fc1:
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



/* EditorProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorProperty::_get_property_listv(EditorProperty *this,List *param_1,bool param_2)

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
  local_78 = "EditorProperty";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorProperty";
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
      goto LAB_00123271;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123271:
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



/* EditorPropertyLocalizableString::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyLocalizableString::_get_property_listv
          (EditorPropertyLocalizableString *this,List *param_1,bool param_2)

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
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyLocalizableString";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyLocalizableString";
  local_98 = 0;
  local_70 = 0x1f;
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
      goto LAB_00123521;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123521:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyLocalizableString",false);
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



/* EditorPropertyDictionary::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyDictionary::_get_property_listv
          (EditorPropertyDictionary *this,List *param_1,bool param_2)

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
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyDictionary";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyDictionary";
  local_98 = 0;
  local_70 = 0x18;
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
      goto LAB_001237d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001237d1:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyDictionary",false);
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



/* EditorPropertyArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyArray::_get_property_listv(EditorPropertyArray *this,List *param_1,bool param_2)

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
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyArray";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyArray";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_00123a81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123a81:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyArray",false);
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



/* LocalVector<EditorPropertyArray::Slot, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false>::resize
          (LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false> *this,uint param_1)

{
  long lVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  uVar9 = *(uint *)this;
  if (param_1 < uVar9) {
    lVar8 = (ulong)param_1 * 0x30;
    uVar9 = param_1;
LAB_00123c6e:
    do {
      lVar1 = *(long *)(this + 8);
      if ((*(long *)(lVar1 + lVar8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar2 = *(Object **)(lVar1 + lVar8);
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x30;
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          if (*(uint *)this <= uVar9) break;
          goto LAB_00123c6e;
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar9 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar9) {
      return;
    }
    uVar7 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar9 = uVar7 >> 1 | uVar7;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar9;
      lVar8 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar9 * 0x30,false);
      *(long *)(this + 8) = lVar8;
      if (lVar8 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = *(uint *)this;
      if (param_1 <= uVar9) goto LAB_00123cc0;
    }
    lVar8 = *(long *)(this + 8);
    pauVar5 = (undefined1 (*) [16])((ulong)uVar9 * 0x30 + lVar8);
    do {
      *(undefined4 *)pauVar5[1] = 0xffffffff;
      pauVar6 = pauVar5 + 3;
      *pauVar5 = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar5[1] + 4) = 0x27;
      pauVar5[1][8] = 0;
      pauVar5[2] = (undefined1  [16])0x0;
      pauVar5 = pauVar6;
    } while (pauVar6 !=
             (undefined1 (*) [16])(lVar8 + 0x30 + ((ulong)(uVar7 - uVar9) + (ulong)uVar9) * 0x30));
  }
LAB_00123cc0:
  *(uint *)this = param_1;
  return;
}



/* EditorPropertyArray::~EditorPropertyArray() */

void __thiscall EditorPropertyArray::~EditorPropertyArray(EditorPropertyArray *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001273e8;
  if (*(long *)(this + 0xc00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xc00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xbc8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xbc8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xbc0) != 0) {
    LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false>::resize
              ((LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false> *)(this + 3000),0);
    if (*(void **)(this + 0xbc0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xbc0),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbb0));
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyArray::~EditorPropertyArray() */

void __thiscall EditorPropertyArray::~EditorPropertyArray(EditorPropertyArray *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001273e8;
  if (*(long *)(this + 0xc00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xc00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xbc8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xbc8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xbc0) != 0) {
    LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false>::resize
              ((LocalVector<EditorPropertyArray::Slot,unsigned_int,false,false> *)(this + 3000),0);
    if (*(void **)(this + 0xbc0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xbc0),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbb0));
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xc10);
  return;
}



/* LocalVector<EditorPropertyDictionary::Slot, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false>::resize
          (LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false> *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  uint uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  
  uVar12 = *(uint *)this;
  if (param_1 < uVar12) {
    lVar11 = (ulong)param_1 << 6;
    uVar12 = param_1;
    do {
      while( true ) {
        plVar10 = (long *)(*(long *)(this + 8) + lVar11);
        if (plVar10[7] != 0) {
          LOCK();
          plVar1 = (long *)(plVar10[7] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = plVar10[7];
            plVar10[7] = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if (plVar10[6] != 0) {
          LOCK();
          plVar1 = (long *)(plVar10[6] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = plVar10[6];
            plVar10[6] = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((*plVar10 != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) break;
LAB_00124000:
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x40;
        if (*(uint *)this <= uVar12) goto LAB_001240b8;
      }
      pOVar3 = (Object *)*plVar10;
      cVar6 = predelete_handler(pOVar3);
      if (cVar6 == '\0') goto LAB_00124000;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x40;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    } while (uVar12 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar12) {
      return;
    }
    uVar9 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar12 = uVar9 >> 1 | uVar9;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = (uVar12 | uVar12 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar12;
      lVar11 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar12 << 6,false);
      *(long *)(this + 8) = lVar11;
      if (lVar11 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = *(uint *)this;
      if (param_1 <= uVar12) goto LAB_001240b8;
    }
    uVar5 = _LC122;
    lVar11 = *(long *)(this + 8);
    pauVar7 = (undefined1 (*) [16])((ulong)uVar12 * 0x40 + lVar11);
    do {
      *(undefined4 *)pauVar7[1] = 0xffffffff;
      pauVar8 = pauVar7 + 4;
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar7[1] + 4) = uVar5;
      *(undefined2 *)(pauVar7[1] + 0xc) = 0;
      pauVar7[2] = (undefined1  [16])0x0;
      pauVar7[3] = (undefined1  [16])0x0;
      pauVar7 = pauVar8;
    } while ((undefined1 (*) [16])(lVar11 + 0x40 + ((ulong)(uVar9 - uVar12) + (ulong)uVar12) * 0x40)
             != pauVar8);
  }
LAB_001240b8:
  *(uint *)this = param_1;
  return;
}



/* EditorPropertyDictionary::~EditorPropertyDictionary() */

void __thiscall EditorPropertyDictionary::~EditorPropertyDictionary(EditorPropertyDictionary *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00127818;
  if (*(long *)(this + 0xbe0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xbe0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xbe0);
      *(undefined8 *)(this + 0xbe0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xbd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xbd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xbd0);
      *(undefined8 *)(this + 0xbd0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xbc0) != 0) {
    LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false>::resize
              ((LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false> *)(this + 3000)
               ,0);
    if (*(void **)(this + 0xbc0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xbc0),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        EditorProperty::~EditorProperty((EditorProperty *)this);
        return;
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyDictionary::~EditorPropertyDictionary() */

void __thiscall EditorPropertyDictionary::~EditorPropertyDictionary(EditorPropertyDictionary *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00127818;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbe0));
  if (*(long *)(this + 0xbd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xbd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xbd0);
      *(undefined8 *)(this + 0xbd0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xbc0) != 0) {
    LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false>::resize
              ((LocalVector<EditorPropertyDictionary::Slot,unsigned_int,false,false> *)(this + 3000)
               ,0);
    if (*(void **)(this + 0xbc0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xbc0),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xbe8);
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<long>::_unref() */

void __thiscall CowData<long>::_unref(CowData<long> *this)

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



/* CowData<double>::_unref() */

void __thiscall CowData<double>::_unref(CowData<double> *this)

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



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_00126838;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_00126838;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  operator_delete(this,0x20);
  return;
}



/* Vector<String>::TEMPNAMEPLACEHOLDERVALUE(Vector<String> const&) */

void __thiscall Vector<String>::operator=(Vector<String> *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)(this + 8) == *(long *)(param_1 + 8)) {
    return;
  }
  CowData<String>::_unref((CowData<String> *)(this + 8));
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
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
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<Vector4>::_unref() */

void __thiscall CowData<Vector4>::_unref(CowData<Vector4> *this)

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
LAB_00124f60:
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
  if (lVar9 == 0) goto LAB_00124f60;
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
    goto LAB_00124fb6;
  }
  if (lVar9 == lVar5) {
LAB_00124edb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00124fb6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00124e4f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00124edb;
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
LAB_00124e4f:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00125060) */
/* EditorPropertyArray::_notificationv(int, bool) */

void __thiscall
EditorPropertyArray::_notificationv(EditorPropertyArray *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012f050 != Container::_notification) {
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
  if ((code *)PTR__notification_0012f050 != Container::_notification) {
    EditorProperty::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
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
                if (pvVar5 == (void *)0x0) goto LAB_00125429;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00125429:
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



/* EditorPropertyArrayObject::_set(StringName const&, Variant const&) */

void EditorPropertyArrayObject::_GLOBAL__sub_I__set(void)

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
/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyDictionary::~EditorPropertyDictionary() */

void __thiscall EditorPropertyDictionary::~EditorPropertyDictionary(EditorPropertyDictionary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyArray::~EditorPropertyArray() */

void __thiscall EditorPropertyArray::~EditorPropertyArray(EditorPropertyArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyLocalizableString::~EditorPropertyLocalizableString() */

void __thiscall
EditorPropertyLocalizableString::~EditorPropertyLocalizableString
          (EditorPropertyLocalizableString *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

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
/* EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject() */

void __thiscall
EditorPropertyDictionaryObject::~EditorPropertyDictionaryObject
          (EditorPropertyDictionaryObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyArrayObject::~EditorPropertyArrayObject() */

void __thiscall
EditorPropertyArrayObject::~EditorPropertyArrayObject(EditorPropertyArrayObject *this)

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
/* CallableCustomMethodPointer<EditorPropertyArray, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,double>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, String const&, Variant, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,String_const&,Variant,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,StringName_const&,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorProperty, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorProperty,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorProperty,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<EditorPropertyArray, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorPropertyArray,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyArray, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyArray,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyDictionary, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyDictionary, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyDictionary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyDictionary, void, String const&, Variant, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,String_const&,Variant,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyDictionary, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyDictionary,void,StringName_const&,ObjectID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,StringName_const&,ObjectID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyLocalizableString, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyLocalizableString,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

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



