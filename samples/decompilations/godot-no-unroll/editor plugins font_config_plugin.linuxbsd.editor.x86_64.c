
/* EditorInspectorPluginFontPreview::parse_property(Object*, Variant::Type, String const&,
   PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined8 EditorInspectorPluginFontPreview::parse_property(void)

{
  return 0;
}



/* EditorPropertyFontMetaOverride::_remove(Object*, String const&) */

void __thiscall
EditorPropertyFontMetaOverride::_remove
          (EditorPropertyFontMetaOverride *this,Object *param_1,String *param_2)

{
  bool bVar1;
  long in_FS_OFFSET;
  Dictionary local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_70,(Dictionary *)(*(long *)(this + 0xb58) + 0x180));
  Variant::Variant((Variant *)local_58,param_2);
  Dictionary::erase((Variant *)local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_60,"",false);
  Variant::Variant((Variant *)local_58,local_70);
  EditorProperty::get_edited_property();
  bVar1 = SUB81((StringName *)&local_60,0);
  EditorProperty::emit_changed((StringName *)this,(Variant *)&local_68,(StringName *)local_58,bVar1)
  ;
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Dictionary::duplicate(bVar1);
  Dictionary::operator=(local_70,(Dictionary *)&local_60);
  Dictionary::~Dictionary((Dictionary *)&local_60);
  Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),local_70);
  (**(code **)(*(long *)this + 0x380))(this);
  Dictionary::~Dictionary(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_remove(Object*, int) */

void __thiscall
EditorPropertyOTFeatures::_remove(EditorPropertyOTFeatures *this,Object *param_1,int param_2)

{
  bool bVar1;
  long in_FS_OFFSET;
  Dictionary local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_70,(Dictionary *)(*(long *)(this + 0xb58) + 0x180));
  Variant::Variant((Variant *)local_58,param_2);
  Dictionary::erase((Variant *)local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_60,"",false);
  Variant::Variant((Variant *)local_58,local_70);
  EditorProperty::get_edited_property();
  bVar1 = SUB81((StringName *)&local_60,0);
  EditorProperty::emit_changed((StringName *)this,(Variant *)&local_68,(StringName *)local_58,bVar1)
  ;
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Dictionary::duplicate(bVar1);
  Dictionary::operator=(local_70,(Dictionary *)&local_60);
  Dictionary::~Dictionary((Dictionary *)&local_60);
  Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),local_70);
  (**(code **)(*(long *)this + 0x380))(this);
  Dictionary::~Dictionary(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_add_menu() */

void __thiscall EditorPropertyOTFeatures::_add_menu(EditorPropertyOTFeatures *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_size();
  pVVar1 = *(Vector2i **)(this + 0xb80);
  (**(code **)(*(long *)this + 0x298))(&local_38,this);
  Transform2D::get_scale();
  uVar2 = Control::get_screen_position();
  local_48 = CONCAT44((float)((ulong)uVar2 >> 0x20) + extraout_XMM0_Db * extraout_XMM0_Db_00,
                      (float)uVar2 + 0.0);
  local_40 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
  Window::set_position(pVVar1);
  Window::reset_size();
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(long **)(this + 0xb80) + 0x240))(*(long **)(this + 0xb80),&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::_add_element() */

void __thiscall EditorPropertyFontNamesArray::_add_element(EditorPropertyFontNamesArray *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_size();
  pVVar1 = *(Vector2i **)(this + 0xc10);
  (**(code **)(*(long *)this + 0x298))(&local_38,this);
  Transform2D::get_scale();
  uVar2 = Control::get_screen_position();
  local_48 = CONCAT44((float)((ulong)uVar2 >> 0x20) + extraout_XMM0_Db * extraout_XMM0_Db_00,
                      (float)uVar2 + 0.0);
  local_40 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
  Window::set_position(pVVar1);
  Window::reset_size();
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(long **)(this + 0xc10) + 0x240))(*(long **)(this + 0xc10),&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginSystemFont::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginSystemFont::can_handle(EditorInspectorPluginSystemFont *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&SystemFont::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FontPreview::get_minimum_size() const */

undefined8 FontPreview::get_minimum_size(void)

{
  float fVar1;
  
  fVar1 = (float)EditorScale::get_scale();
  return CONCAT44(fVar1 * __LC2,fVar1 * __LC2);
}



/* FontPreview::_preview_changed() */

void FontPreview::_preview_changed(void)

{
  CanvasItem::queue_redraw();
  return;
}



/* EditorPropertyFontMetaOverride::_page_changed(int) */

void __thiscall
EditorPropertyFontMetaOverride::_page_changed(EditorPropertyFontMetaOverride *this,int param_1)

{
  if (this[0xba1] == (EditorPropertyFontMetaOverride)0x0) {
    *(int *)(this + 0xba8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001005b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x380))();
    return;
  }
  return;
}



/* EditorPropertyOTVariation::_page_changed(int) */

void __thiscall
EditorPropertyOTVariation::_page_changed(EditorPropertyOTVariation *this,int param_1)

{
  if (this[0xb78] == (EditorPropertyOTVariation)0x0) {
    *(int *)(this + 0xb80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001005e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x380))();
    return;
  }
  return;
}



/* EditorPropertyOTFeatures::_page_changed(int) */

void __thiscall EditorPropertyOTFeatures::_page_changed(EditorPropertyOTFeatures *this,int param_1)

{
  if (this[0xc18] == (EditorPropertyOTFeatures)0x0) {
    *(int *)(this + 0xc20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00100616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x380))();
    return;
  }
  return;
}



/* EditorPropertyFontMetaOverride::_add_menu() */

void __thiscall EditorPropertyFontMetaOverride::_add_menu(EditorPropertyFontMetaOverride *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xba0] == (EditorPropertyFontMetaOverride)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorLocaleDialog::popup_locale_dialog();
      return;
    }
  }
  else {
    Control::get_size();
    pVVar1 = *(Vector2i **)(this + 0xb80);
    (**(code **)(*(long *)this + 0x298))(&local_38,this);
    Transform2D::get_scale();
    uVar2 = Control::get_screen_position();
    local_48 = CONCAT44((float)((ulong)uVar2 >> 0x20) + extraout_XMM0_Db * extraout_XMM0_Db_00,
                        (float)uVar2 + 0.0);
    local_40 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
    Window::set_position(pVVar1);
    Window::reset_size();
    local_38 = 0;
    local_30 = 0;
    (**(code **)(**(long **)(this + 0xb80) + 0x240))(*(long **)(this + 0xb80),&local_38);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaOverride::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyFontMetaOverride::_object_id_selected
          (EditorPropertyFontMetaOverride *this,StringName *param_1,undefined8 param_3)

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



/* EditorInspectorPluginFontPreview::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginFontPreview::can_handle(EditorInspectorPluginFontPreview *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Font::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* EditorInspectorPluginFontVariation::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginFontVariation::can_handle
          (EditorInspectorPluginFontVariation *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 == (Object *)0x0) {
    return false;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&FontVariation::typeinfo,0);
  if (lVar1 != 0) {
    return true;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&DynamicFontImportSettingsData::typeinfo,0);
  return lVar1 != 0;
}



/* EditorPropertyFontMetaOverride::_add_lang(String const&) */

void __thiscall
EditorPropertyFontMetaOverride::_add_lang(EditorPropertyFontMetaOverride *this,String *param_1)

{
  char cVar1;
  Variant *pVVar2;
  bool bVar3;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90,(Dictionary *)(*(long *)(this + 0xb58) + 0x180));
  Variant::Variant((Variant *)local_58,true);
  Variant::Variant((Variant *)local_78,param_1);
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  Variant::Variant((Variant *)local_58,local_90);
  EditorProperty::get_edited_property();
  bVar3 = SUB81((StringName *)&local_80,0);
  EditorProperty::emit_changed((StringName *)this,(Variant *)&local_88,(StringName *)local_58,bVar3)
  ;
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  Dictionary::duplicate(bVar3);
  Dictionary::operator=(local_90,(Dictionary *)&local_80);
  Dictionary::~Dictionary((Dictionary *)&local_80);
  Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),local_90);
  (**(code **)(*(long *)this + 0x380))(this);
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_add_feature(int) */

void __thiscall EditorPropertyOTFeatures::_add_feature(EditorPropertyOTFeatures *this,int param_1)

{
  char cVar1;
  Variant *pVVar2;
  bool bVar3;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90,(Dictionary *)(*(long *)(this + 0xb58) + 0x180));
  Variant::Variant((Variant *)local_58,1);
  Variant::Variant((Variant *)local_78,param_1);
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  Variant::Variant((Variant *)local_58,local_90);
  EditorProperty::get_edited_property();
  bVar3 = SUB81((StringName *)&local_80,0);
  EditorProperty::emit_changed((StringName *)this,(Variant *)&local_88,(StringName *)local_58,bVar3)
  ;
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  Dictionary::duplicate(bVar3);
  Dictionary::operator=(local_90,(Dictionary *)&local_80);
  Dictionary::~Dictionary((Dictionary *)&local_80);
  Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),local_90);
  (**(code **)(*(long *)this + 0x380))(this);
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTVariation::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyOTVariation::_object_id_selected
          (EditorPropertyOTVariation *this,StringName *param_1,undefined8 param_3)

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



/* EditorPropertyOTFeatures::_object_id_selected(StringName const&, ObjectID) */

void __thiscall
EditorPropertyOTFeatures::_object_id_selected
          (EditorPropertyOTFeatures *this,StringName *param_1,undefined8 param_3)

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



/* EditorPropertyFontMetaOverride::_add_script(int) */

void __thiscall
EditorPropertyFontMetaOverride::_add_script(EditorPropertyFontMetaOverride *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  Variant *pVVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90,(Dictionary *)(*(long *)(this + 0xb58) + 0x180));
  Variant::Variant((Variant *)local_58,true);
  lVar5 = (long)param_1;
  lVar1 = *(long *)(this + 0xb98);
  if (lVar5 < 0) {
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      goto LAB_00101349;
    }
  }
  else if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar5 < lVar6) {
      Variant::Variant((Variant *)local_78,(String *)(lVar1 + lVar5 * 8));
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_90);
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
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      StringName::StringName((StringName *)&local_80,"",false);
      Variant::Variant((Variant *)local_58,local_90);
      EditorProperty::get_edited_property();
      bVar4 = SUB81((StringName *)&local_80,0);
      EditorProperty::emit_changed
                ((StringName *)this,(Variant *)&local_88,(StringName *)local_58,bVar4);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      Dictionary::duplicate(bVar4);
      Dictionary::operator=(local_90,(Dictionary *)&local_80);
      Dictionary::~Dictionary((Dictionary *)&local_80);
      Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),local_90);
      (**(code **)(*(long *)this + 0x380))(this);
      Dictionary::~Dictionary(local_90);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_00101349;
  }
  lVar6 = 0;
LAB_00101349:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* EditorPropertyFontMetaObject::set_dict(Dictionary const&) */

void __thiscall
EditorPropertyFontMetaObject::set_dict(EditorPropertyFontMetaObject *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x180),param_1);
  return;
}



/* EditorPropertyFontMetaObject::get_dict() */

void EditorPropertyFontMetaObject::get_dict(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x180));
  return;
}



/* EditorPropertyFontOTObject::set_dict(Dictionary const&) */

void __thiscall
EditorPropertyFontOTObject::set_dict(EditorPropertyFontOTObject *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x180),param_1);
  return;
}



/* EditorPropertyFontOTObject::get_dict() */

void EditorPropertyFontOTObject::get_dict(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x180));
  return;
}



/* EditorPropertyFontOTObject::set_defaults(Dictionary const&) */

void __thiscall
EditorPropertyFontOTObject::set_defaults(EditorPropertyFontOTObject *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x188),param_1);
  return;
}



/* EditorPropertyFontOTObject::get_defaults() */

void EditorPropertyFontOTObject::get_defaults(void)

{
  long in_RSI;
  Dictionary *in_RDI;
  
  Dictionary::Dictionary(in_RDI,(Dictionary *)(in_RSI + 0x188));
  return;
}



/* EditorPropertyFontMetaOverride::_notification(int) */

void __thiscall
EditorPropertyFontMetaOverride::_notification(EditorPropertyFontMetaOverride *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == 10) || (param_1 == 0x2d)) &&
     (pRVar1 = *(Ref **)(this + 0xb70), pRVar1 != (Ref *)0x0)) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,false);
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



/* EditorPropertyOTFeatures::_notification(int) */

void __thiscall EditorPropertyOTFeatures::_notification(EditorPropertyOTFeatures *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == 10) || (param_1 == 0x2d)) &&
     (pRVar1 = *(Ref **)(this + 0xb70), pRVar1 != (Ref *)0x0)) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,false);
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



/* FontPreview::_bind_methods() */

void FontPreview::_bind_methods(void)

{
  return;
}



/* FontPreview::FontPreview() */

void __thiscall FontPreview::FontPreview(FontPreview *this)

{
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00121788;
  return;
}



/* FontEditorPlugin::FontEditorPlugin() */

void __thiscall FontEditorPlugin::FontEditorPlugin(FontEditorPlugin *this)

{
  char cVar1;
  RefCounted *this_00;
  RefCounted *this_01;
  RefCounted *pRVar2;
  Object *pOVar3;
  long lVar4;
  RefCounted *pRVar5;
  long in_FS_OFFSET;
  byte bVar6;
  Object *local_48;
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = RefCounted::RefCounted;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (FontEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (FontEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001207e0;
  *(undefined8 *)(this + 0x658) = 0;
  this_00 = (RefCounted *)operator_new(0x218,"");
  pRVar2 = this_00;
  for (lVar4 = 0x43; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar2 = 0;
    pRVar2 = pRVar2 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined **)this_00 = &EditorPlugin::vtable;
  *(undefined8 *)(this_00 + 0x180) = 0;
  StringName::StringName((StringName *)(this_00 + 0x188),"_can_handle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_parse_begin",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_parse_category",false);
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1d0),"_parse_group",false);
  this_00[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1e8),"_parse_property",false);
  this_00[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1f8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x200),"_parse_end",false);
  this_00[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x210) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_001215f8;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
LAB_00101def:
    local_48 = (Object *)0x0;
    this_00 = (RefCounted *)0x0;
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)this_00);
        pRVar2 = (RefCounted *)0x0;
        if (cVar1 != '\0') goto LAB_00102330;
      }
      goto LAB_00101def;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') &&
       (cVar1 = predelete_handler((Object *)this_00), pRVar2 = this_00, cVar1 != '\0')) {
LAB_00102330:
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
      this_00 = pRVar2;
      if (pRVar2 == (RefCounted *)0x0) goto LAB_00101def;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_48 = (Object *)0x0;
    }
  }
  EditorInspector::add_inspector_plugin((Ref *)&local_48);
  if (((local_48 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar3 = local_48, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_48), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  this_01 = (RefCounted *)operator_new(0x218,"");
  pRVar2 = this_01;
  for (lVar4 = 0x43; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar2 = 0;
    pRVar2 = pRVar2 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_01);
  *(undefined **)this_01 = &EditorPlugin::vtable;
  *(undefined8 *)(this_01 + 0x180) = 0;
  StringName::StringName((StringName *)(this_01 + 0x188),"_can_handle",false);
  this_01[400] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x198) = 0;
  StringName::StringName((StringName *)(this_01 + 0x1a0),"_parse_begin",false);
  this_01[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_01 + 0x1b8),"_parse_category",false);
  this_01[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x1c8) = 0;
  StringName::StringName((StringName *)(this_01 + 0x1d0),"_parse_group",false);
  this_01[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x1e0) = 0;
  StringName::StringName((StringName *)(this_01 + 0x1e8),"_parse_property",false);
  this_01[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x1f8) = 0;
  StringName::StringName((StringName *)(this_01 + 0x200),"_parse_end",false);
  this_01[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this_01 + 0x210) = 0;
  *(undefined ***)this_01 = &PTR__initialize_classv_001220b0;
  postinitialize_handler((Object *)this_01);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
LAB_00101f7b:
    local_48 = (Object *)0x0;
    this_01 = (RefCounted *)0x0;
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)this_01);
        pRVar2 = (RefCounted *)0x0;
        if (cVar1 != '\0') goto LAB_00102380;
      }
      goto LAB_00101f7b;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') &&
       (cVar1 = predelete_handler((Object *)this_01), pRVar2 = this_01, cVar1 != '\0')) {
LAB_00102380:
      (**(code **)(*(long *)this_01 + 0x140))(this_01);
      Memory::free_static(this_01,false);
      this_01 = pRVar2;
      if (pRVar2 == (RefCounted *)0x0) goto LAB_00101f7b;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(this_01,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_48 = (Object *)0x0;
    }
  }
  EditorInspector::add_inspector_plugin((Ref *)&local_48);
  if (((local_48 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar3 = local_48, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_48), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  pRVar2 = (RefCounted *)operator_new(0x218,"");
  pRVar5 = pRVar2;
  for (lVar4 = 0x43; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(pRVar2);
  *(undefined **)pRVar2 = &EditorPlugin::vtable;
  *(undefined8 *)(pRVar2 + 0x180) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x188),"_can_handle",false);
  pRVar2[400] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x198) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1a0),"_parse_begin",false);
  pRVar2[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1b0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1b8),"_parse_category",false);
  pRVar2[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1c8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1d0),"_parse_group",false);
  pRVar2[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1e0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1e8),"_parse_property",false);
  pRVar2[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1f8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x200),"_parse_end",false);
  pRVar2[0x208] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x210) = 0;
  *(undefined ***)pRVar2 = &PTR__initialize_classv_00121af0;
  postinitialize_handler((Object *)pRVar2);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
LAB_001020fc:
    local_48 = (Object *)0x0;
    EditorInspector::add_inspector_plugin((Ref *)&local_48);
    if ((local_48 == (Object *)0x0) ||
       (cVar1 = RefCounted::unreference(), pOVar3 = local_48, cVar1 == '\0')) goto LAB_00102120;
    pRVar2 = (RefCounted *)0x0;
    cVar1 = predelete_handler(local_48);
    if (cVar1 == '\0') goto LAB_00102120;
LAB_001024ee:
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    if (pRVar2 == (RefCounted *)0x0) goto LAB_00102120;
  }
  else {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)pRVar2);
        pRVar5 = (RefCounted *)0x0;
        if (cVar1 != '\0') goto LAB_001023cf;
      }
      goto LAB_001020fc;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') &&
       (cVar1 = predelete_handler((Object *)pRVar2), pRVar5 = pRVar2, cVar1 != '\0')) {
LAB_001023cf:
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
      pRVar2 = pRVar5;
      if (pRVar5 == (RefCounted *)0x0) goto LAB_001020fc;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pRVar2,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_48 = (Object *)0x0;
    }
    EditorInspector::add_inspector_plugin((Ref *)&local_48);
    if (((local_48 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar3 = local_48, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_48), cVar1 != '\0')) goto LAB_001024ee;
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
    Memory::free_static(pRVar2,false);
  }
LAB_00102120:
  if (((this_01 != (RefCounted *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler((Object *)this_01), cVar1 != '\0')) {
    (**(code **)(*(long *)this_01 + 0x140))(this_01);
    Memory::free_static(this_01,false);
  }
  if (((this_00 == (RefCounted *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
     (cVar1 = predelete_handler((Object *)this_00), cVar1 == '\0')) {
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



/* FontPreview::set_data(Ref<Font> const&) */

void __thiscall FontPreview::set_data(FontPreview *this,Ref *param_1)

{
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  FontPreview aFStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 == (Callable *)0x0) {
    if (*(long *)param_1 == 0) goto LAB_00102670;
    *(long *)(this + 0x9c8) = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar4 = (Object *)0x0;
LAB_00102610:
      *(undefined8 *)(this + 0x9c8) = 0;
      goto LAB_0010261b;
    }
LAB_00102630:
    pOVar4 = *(Object **)(this + 0x9c8);
  }
  else {
    create_custom_callable_function_pointer<FontPreview>
              (aFStack_48,(char *)this,(_func_void *)"&FontPreview::_preview_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aFStack_48);
    pOVar2 = *(Object **)param_1;
    pOVar4 = *(Object **)(this + 0x9c8);
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x9c8) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_0010261b:
        if (pOVar4 == (Object *)0x0) goto LAB_00102670;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00102610;
        if (pOVar4 == (Object *)0x0) goto LAB_00102630;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_00102630;
    }
  }
  if (pOVar4 != (Object *)0x0) {
    create_custom_callable_function_pointer<FontPreview>
              (aFStack_48,(char *)this,(_func_void *)"&FontPreview::_preview_changed");
    Resource::connect_changed((Callable *)pOVar4,(uint)aFStack_48);
    Callable::~Callable((Callable *)aFStack_48);
  }
LAB_00102670:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
  return;
}



/* EditorInspectorPluginFontPreview::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginFontPreview::parse_begin
          (EditorInspectorPluginFontPreview *this,Object *param_1)

{
  char cVar1;
  Object *pOVar2;
  Control *this_00;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      this_00 = (Control *)operator_new(0x9d0,"");
      Control::Control(this_00);
      *(undefined8 *)(this_00 + 0x9c8) = 0;
      *(undefined ***)this_00 = &PTR__initialize_classv_00121788;
      postinitialize_handler((Object *)this_00);
      local_28 = pOVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
        FontPreview::set_data((FontPreview *)this_00,(Ref *)&local_28);
      }
      else {
        FontPreview::set_data((FontPreview *)this_00,(Ref *)&local_28);
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorInspectorPlugin::add_custom_control((Control *)this);
        return;
      }
      goto LAB_0010284d;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("parse_begin","editor/plugins/font_config_plugin.cpp",0x3dd,
                     "Parameter \"fd\" is null.",0,0);
    return;
  }
LAB_0010284d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaObject::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorPropertyFontMetaObject::_set
          (EditorPropertyFontMetaObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  undefined4 uVar2;
  Variant *this_00;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar2 = String::begins_with((char *)&local_70);
  if ((char)uVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,(int)(CowData<char32_t> *)&local_70);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x180));
    Variant::operator=(this_00,param_2);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaObject::_get(StringName const&, Variant&) const */

undefined4 __thiscall
EditorPropertyFontMetaObject::_get
          (EditorPropertyFontMetaObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  undefined4 uVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar2 = String::begins_with((char *)&local_70);
  if ((char)uVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,(int)(CowData<char32_t> *)&local_70);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x180));
    Variant::operator=(param_2,pVVar3);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontOTObject::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorPropertyFontOTObject::_set
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  Variant *this_00;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar2 = String::begins_with((char *)&local_70);
  if ((char)uVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,(int)(CowData<char32_t> *)&local_70);
    iVar3 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Variant::Variant((Variant *)local_58,iVar3);
    this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x180));
    Variant::operator=(this_00,param_2);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontOTObject::_get(StringName const&, Variant&) const */

undefined4 __thiscall
EditorPropertyFontOTObject::_get
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar2 = String::begins_with((char *)&local_70);
  if ((char)uVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,(int)(CowData<char32_t> *)&local_70);
    iVar3 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Variant::Variant((Variant *)local_58,iVar3);
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x180));
    Variant::operator=(param_2,pVVar4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontOTObject::_property_can_revert(StringName const&) const */

undefined4 __thiscall
EditorPropertyFontOTObject::_property_can_revert
          (EditorPropertyFontOTObject *this,StringName *param_1)

{
  long lVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_90 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_90 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_80 = strlen(__s);
      local_88 = __s;
      String::parse_latin1((StrRange *)&local_90);
    }
  }
  uVar2 = String::begins_with((char *)&local_90);
  if ((char)uVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_88,(int)(CowData<char32_t> *)&local_90);
    iVar3 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Variant::Variant((Variant *)local_78,iVar3);
    uVar2 = Dictionary::has((Variant *)(this + 0x188));
    if ((char)uVar2 != '\0') {
      Variant::Variant((Variant *)local_58,iVar3);
      uVar2 = Dictionary::has((Variant *)(this + 0x180));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontOTObject::_property_get_revert(StringName const&, Variant&) const */

undefined4 __thiscall
EditorPropertyFontOTObject::_property_get_revert
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Variant *this_00;
  int extraout_EDX;
  long in_FS_OFFSET;
  undefined8 local_80;
  char *local_78;
  size_t local_70;
  int local_5c;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_80 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_80 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_70 = strlen(__s);
      local_78 = __s;
      String::parse_latin1((StrRange *)&local_80);
    }
  }
  cVar2 = String::begins_with((char *)&local_80);
  if (cVar2 != '\0') {
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_78,(int)(CowData<char32_t> *)&local_80);
    iVar3 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    Variant::Variant((Variant *)local_58,iVar3);
    uVar4 = Dictionary::has((Variant *)(this + 0x188));
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar4 != '\0') {
      Variant::Variant((Variant *)local_58,iVar3);
      this_00 = (Variant *)Dictionary::operator[]((Variant *)(this + 0x188));
      Variant::operator_cast_to_Vector3i(this_00);
      local_5c = extraout_EDX;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_5c);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      goto LAB_00103010;
    }
  }
  uVar4 = 0;
LAB_00103010:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaOverride::_edit_pressed() */

void __thiscall EditorPropertyFontMetaOverride::_edit_pressed(EditorPropertyFontMetaOverride *this)

{
  char *__s;
  String *pSVar1;
  size_t sVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
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
    if (local_58[0] != 0) goto LAB_001031dc;
  }
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  Variant::construct(0x1b,local_58,0,0,&local_68);
  pSVar3 = (StringName *)EditorProperty::get_edited_object();
  EditorProperty::get_edited_property();
  Object::set(pSVar3,(Variant *)&local_70,(bool *)local_58);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001031dc:
  pSVar1 = (String *)EditorProperty::get_edited_object();
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
      sVar2 = strlen(__s);
      local_60 = (undefined4)sVar2;
      uStack_5c = (undefined4)(sVar2 >> 0x20);
      local_68 = SUB84(__s,0);
      uStack_64 = (undefined4)((ulong)__s >> 0x20);
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar1,SUB81((StrRange *)&local_70,0));
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



/* EditorPropertyOTVariation::_edit_pressed() */

void __thiscall EditorPropertyOTVariation::_edit_pressed(EditorPropertyOTVariation *this)

{
  char *__s;
  String *pSVar1;
  size_t sVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
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
    if (local_58[0] != 0) goto LAB_0010342c;
  }
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  Variant::construct(0x1b,local_58,0,0,&local_68);
  pSVar3 = (StringName *)EditorProperty::get_edited_object();
  EditorProperty::get_edited_property();
  Object::set(pSVar3,(Variant *)&local_70,(bool *)local_58);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010342c:
  pSVar1 = (String *)EditorProperty::get_edited_object();
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
      sVar2 = strlen(__s);
      local_60 = (undefined4)sVar2;
      uStack_5c = (undefined4)(sVar2 >> 0x20);
      local_68 = SUB84(__s,0);
      uStack_64 = (undefined4)((ulong)__s >> 0x20);
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar1,SUB81((StrRange *)&local_70,0));
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



/* EditorPropertyOTFeatures::_edit_pressed() */

void __thiscall EditorPropertyOTFeatures::_edit_pressed(EditorPropertyOTFeatures *this)

{
  char *__s;
  String *pSVar1;
  size_t sVar2;
  StringName *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
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
    if (local_58[0] != 0) goto LAB_0010367c;
  }
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  Variant::construct(0x1b,local_58,0,0,&local_68);
  pSVar3 = (StringName *)EditorProperty::get_edited_object();
  EditorProperty::get_edited_property();
  Object::set(pSVar3,(Variant *)&local_70,(bool *)local_58);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010367c:
  pSVar1 = (String *)EditorProperty::get_edited_object();
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
      sVar2 = strlen(__s);
      local_60 = (undefined4)sVar2;
      uStack_5c = (undefined4)(sVar2 >> 0x20);
      local_68 = SUB84(__s,0);
      uStack_64 = (undefined4)((ulong)__s >> 0x20);
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  Object::editor_set_section_unfold(pSVar1,SUB81((StrRange *)&local_70,0));
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



/* EditorPropertyFontMetaOverride::_property_changed(String const&, Variant const&, String const&,
   bool) */

void EditorPropertyFontMetaOverride::_property_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  char cVar1;
  bool bVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  Dictionary local_98 [8];
  String local_90 [8];
  long local_88;
  long local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with((char *)param_2);
  if (cVar1 != '\0') {
    Dictionary::Dictionary(local_98,(Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180));
    String::get_slice((char *)local_90,(int)param_2);
    bVar2 = Variant::operator_cast_to_bool((Variant *)param_3);
    Variant::Variant((Variant *)local_78,bVar2);
    Variant::Variant((Variant *)local_58,local_90);
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar3 != (Variant *)local_78) {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_78[0];
      local_78[0] = 0;
      *(undefined8 *)(pVVar3 + 8) = local_70;
      *(undefined8 *)(pVVar3 + 0x10) = uStack_68;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_88,"",false);
    Variant::Variant((Variant *)local_58,local_98);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)param_1,(Variant *)&local_80,(StringName *)local_58,
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
    Dictionary::duplicate(SUB81((Dictionary *)&local_80,0));
    Dictionary::operator=(local_98,(Dictionary *)&local_80);
    Dictionary::~Dictionary((Dictionary *)&local_80);
    Dictionary::operator=((Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180),local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    Dictionary::~Dictionary(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTVariation::_property_changed(String const&, Variant const&, String const&, bool)
    */

void EditorPropertyOTVariation::_property_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with((char *)param_2);
  if (cVar1 != '\0') {
    Dictionary::Dictionary(local_90,(Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180));
    String::get_slice((char *)&local_80,(int)param_2);
    iVar2 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    iVar3 = Variant::operator_cast_to_int((Variant *)param_3);
    Variant::Variant((Variant *)local_78,iVar3);
    Variant::Variant((Variant *)local_58,iVar2);
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_90);
    if (pVVar4 != (Variant *)local_78) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_78[0];
      local_78[0] = 0;
      *(undefined8 *)(pVVar4 + 8) = local_70;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_68;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_88,"",false);
    Variant::Variant((Variant *)local_58,local_90);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)param_1,(Variant *)&local_80,(StringName *)local_58,
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
    Dictionary::duplicate(SUB81((CowData<char32_t> *)&local_80,0));
    Dictionary::operator=(local_90,(Dictionary *)&local_80);
    Dictionary::~Dictionary((Dictionary *)&local_80);
    Dictionary::operator=((Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180),local_90);
    Dictionary::~Dictionary(local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_property_changed(String const&, Variant const&, String const&, bool)
    */

void EditorPropertyOTFeatures::_property_changed
               (String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  long local_88;
  long local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with((char *)param_2);
  if (cVar1 != '\0') {
    Dictionary::Dictionary(local_90,(Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180));
    String::get_slice((char *)&local_80,(int)param_2);
    iVar2 = String::to_int();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    iVar3 = Variant::operator_cast_to_int((Variant *)param_3);
    Variant::Variant((Variant *)local_78,iVar3);
    Variant::Variant((Variant *)local_58,iVar2);
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_90);
    if (pVVar4 != (Variant *)local_78) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_78[0];
      local_78[0] = 0;
      *(undefined8 *)(pVVar4 + 8) = local_70;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_68;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_88,"",false);
    Variant::Variant((Variant *)local_58,local_90);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)param_1,(Variant *)&local_80,(StringName *)local_58,
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
    Dictionary::duplicate(SUB81((CowData<char32_t> *)&local_80,0));
    Dictionary::operator=(local_90,(Dictionary *)&local_80);
    Dictionary::~Dictionary((Dictionary *)&local_80);
    Dictionary::operator=((Dictionary *)(*(long *)(param_1 + 0xb58) + 0x180),local_90);
    Dictionary::~Dictionary(local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::_add_font(int) [clone .part.0] */

void EditorPropertyFontNamesArray::_add_font(int param_1)

{
  char cVar1;
  char *__s;
  int iVar2;
  size_t sVar3;
  undefined4 in_register_0000003c;
  StringName *pSVar4;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  Variant *local_c8 [2];
  int local_b8 [8];
  int local_98 [2];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar4 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPropertyArrayObject::get_array();
  StringName::StringName((StringName *)&local_f0,"size",false);
  local_d8 = 0;
  local_78 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_98[0] = 0;
  local_70 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  Variant::callp((StringName *)local_b8,(Variant **)&local_f0,0,(Variant *)0x0,(CallError *)local_98
                );
  if (local_d8 != 0) {
    if (local_f0 == 0) {
      local_e8 = 0;
      uStack_e4 = 0;
    }
    else {
      local_e8 = 0;
      uStack_e4 = 0;
      if (*(char **)(local_f0 + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(local_f0 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_e8,*(char **)(local_f0 + 8));
      }
    }
    Variant::_variant_call_error((String *)local_b8,(CallError *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  iVar2 = Variant::operator_cast_to_int((Variant *)local_98);
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_f8,"resize",false);
  Variant::Variant((Variant *)&local_78,iVar2 + 1);
  local_60 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_98[0] = 0;
  local_58 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_c8[0] = (Variant *)&local_78;
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
        sVar3 = strlen(__s);
        uStack_d0 = (undefined4)sVar3;
        uStack_cc = (undefined4)(sVar3 >> 0x20);
        local_d8 = (int)__s;
        uStack_d4 = (undefined4)((ulong)__s >> 0x20);
        String::parse_latin1((StrRange *)&local_f0);
      }
    }
    Variant::_variant_call_error((String *)local_b8,(CallError *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  }
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 == '\0') {
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
  PopupMenu::get_item_text((int)(CowData<char32_t> *)&local_d8);
  Variant::Variant((Variant *)&local_78,(String *)&local_d8);
  Variant::Variant((Variant *)local_98,iVar2);
  Variant::set((Variant *)local_b8,(Variant *)local_98,(bool *)&local_78,(VariantSetError *)0x0);
  if (Variant::needs_deinit[local_98[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  StringName::StringName((StringName *)&local_d8,"",false);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            (pSVar4,(Variant *)&local_e8,(StringName *)local_b8,
             SUB81((CowData<char32_t> *)&local_d8,0));
  if ((StringName::configured != '\0') &&
     (((CONCAT44(uStack_e4,local_e8) == 0 || (StringName::unref(), StringName::configured != '\0'))
      && (CONCAT44(uStack_d4,local_d8) != 0)))) {
    StringName::unref();
  }
  EditorPropertyArrayObject::set_array(*(Variant **)(pSVar4 + 0xc00));
  (**(code **)(*(long *)pSVar4 + 0x380))(pSVar4);
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::_add_font(int) */

void EditorPropertyFontNamesArray::_add_font(int param_1)

{
  undefined4 in_register_0000003c;
  
  if (*(char *)(CONCAT44(in_register_0000003c,param_1) + 0xc08) != '\0') {
    return;
  }
  _add_font(param_1);
  return;
}



/* EditorPropertyFontMetaOverride::update_property() */

void __thiscall
EditorPropertyFontMetaOverride::update_property(EditorPropertyFontMetaOverride *this)

{
  Variant *pVVar1;
  code *pcVar2;
  long *plVar3;
  Object *pOVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  String *pSVar11;
  EditorPropertyCheck *this_00;
  CallableCustom *pCVar12;
  BoxContainer *pBVar13;
  Button *this_01;
  undefined8 uVar14;
  MarginContainer *this_02;
  BoxContainer *this_03;
  EditorPaginator *this_04;
  int iVar15;
  char *pcVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  bool bVar18;
  Variant local_100 [8];
  long local_f8;
  undefined8 local_f0;
  long local_e8 [2];
  Object *local_d8;
  undefined8 local_d0;
  int local_c8 [2];
  undefined1 local_c0 [16];
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_c8[0] = 0;
    local_c0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_c8,*(bool **)(this + 0xa10));
  }
  Variant::operator_cast_to_Dictionary(local_100);
  pSVar11 = *(String **)(this + 0xb78);
  Dictionary::size();
  local_f0 = 0;
  local_d0 = 0;
  local_d8 = (Object *)&_LC0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = (Object *)0x10c60f;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_f8);
  TTR((String *)local_e8,(String *)&local_f8);
  iVar15 = (int)(String *)local_e8;
  vformat<int>((String *)&local_d8,iVar15);
  Button::set_text(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  pSVar11 = (String *)EditorProperty::get_edited_object();
  EditorProperty::get_edited_property();
  if (local_e8[0] == 0) {
    local_d8 = (Object *)0x0;
  }
  else {
    local_d8 = (Object *)0x0;
    if (*(char **)(local_e8[0] + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(local_e8[0] + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_d8,*(char **)(local_e8[0] + 8));
    }
  }
  cVar6 = Object::editor_is_section_unfolded(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  cVar7 = BaseButton::is_pressed();
  if (cVar7 != cVar6) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb78),0));
  }
  if (cVar6 == '\0') {
    if (*(long *)(this + 0xb60) != 0) {
      EditorProperty::set_bottom_editor((Control *)this);
      pOVar4 = *(Object **)(this + 0xb60);
      cVar6 = predelete_handler(pOVar4);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      *(undefined8 *)(this + 0xb70) = 0;
      *(undefined8 *)(this + 0xb60) = 0;
    }
  }
  else {
    this[0xba1] = (EditorPropertyFontMetaOverride)0x1;
    if (*(long *)(this + 0xb60) == 0) {
      this_02 = (MarginContainer *)operator_new(0xa10,"");
      MarginContainer::MarginContainer(this_02);
      postinitialize_handler((Object *)this_02);
      *(MarginContainer **)(this + 0xb60) = this_02;
      StringName::StringName((StringName *)&local_d8,"MarginContainer4px",false);
      Control::set_theme_type_variation((StringName *)this_02);
      if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
        StringName::unref();
      }
      Node::add_child(this,*(undefined8 *)(this + 0xb60),0,0);
      EditorProperty::set_bottom_editor((Control *)this);
      pBVar13 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(pBVar13,true);
      pBVar13[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)pBVar13 = &PTR__initialize_classv_001201a8;
      postinitialize_handler((Object *)pBVar13);
      Control::set_v_size_flags(pBVar13,3);
      Node::add_child(*(undefined8 *)(this + 0xb60),pBVar13,0,0);
      this_03 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this_03,true);
      this_03[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)this_03 = &PTR__initialize_classv_001201a8;
      postinitialize_handler((Object *)this_03);
      *(BoxContainer **)(this + 0xb68) = this_03;
      Control::set_h_size_flags(this_03,3);
      Node::add_child(pBVar13,*(undefined8 *)(this + 0xb68),0,0);
      this_04 = (EditorPaginator *)operator_new(0xa48,"");
      EditorPaginator::EditorPaginator(this_04);
      postinitialize_handler((Object *)this_04);
      lVar5 = *(long *)this_04;
      *(EditorPaginator **)(this + 0xbb0) = this_04;
      pcVar2 = *(code **)(lVar5 + 0x108);
      create_custom_callable_function_pointer<EditorPropertyFontMetaOverride,int>
                ((EditorPropertyFontMetaOverride *)&local_d8,(char *)this,
                 (_func_void_int *)"&EditorPropertyFontMetaOverride::_page_changed");
      StringName::StringName((StringName *)local_e8,"page_changed",false);
      (*pcVar2)(this_04,(String *)local_e8,(String *)&local_d8,0);
      if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)&local_d8);
      Node::add_child(pBVar13,*(undefined8 *)(this + 0xbb0),0,0);
    }
    else {
      iVar8 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb68),0));
      iVar8 = iVar8 + -1;
      if (-1 < iVar8) {
        do {
          Node::get_child((int)*(undefined8 *)(this + 0xb68),SUB41(iVar8,0));
          Node::queue_free();
          bVar18 = iVar8 != 0;
          iVar8 = iVar8 + -1;
        } while (bVar18);
      }
      *(undefined8 *)(this + 0xb70) = 0;
    }
    iVar8 = Dictionary::size();
    iVar9 = iVar8 + -1;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    iVar10 = *(int *)(this + 0xba8);
    if (iVar9 / *(int *)(this + 0xba4) <= *(int *)(this + 0xba8)) {
      iVar10 = iVar9 / *(int *)(this + 0xba4);
    }
    *(int *)(this + 0xba8) = iVar10;
    EditorPaginator::update((int)*(undefined8 *)(this + 0xbb0),iVar10);
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xbb0),0));
    iVar9 = *(int *)(this + 0xba4);
    iVar8 = iVar8 - *(int *)(this + 0xba8) * iVar9;
    if (iVar8 <= iVar9) {
      iVar9 = iVar8;
    }
    Dictionary::duplicate(SUB81((String *)&local_d8,0));
    Dictionary::operator=((Dictionary *)local_100,(Dictionary *)&local_d8);
    Dictionary::~Dictionary((Dictionary *)&local_d8);
    Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),(Dictionary *)local_100);
    if (0 < iVar9) {
      iVar8 = 0;
      do {
        Dictionary::get_key_at_index((int)&local_a8);
        Variant::operator_cast_to_String((Variant *)&local_f8);
        if (Variant::needs_deinit[(int)local_a8] != '\0') {
          Variant::_clear_internal();
        }
        this_00 = (EditorPropertyCheck *)operator_new(0xb60,"");
        EditorPropertyCheck::EditorPropertyCheck(this_00);
        postinitialize_handler((Object *)this_00);
        operator+((char *)local_e8,(String *)"keys/");
        StringName::StringName((StringName *)&local_d8,(String *)local_e8,false);
        EditorProperty::set_object_and_property((Object *)this_00,*(StringName **)(this + 0xb58));
        if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
        if (this[0xba0] == (EditorPropertyFontMetaOverride)0x0) {
          TranslationServer::get_locale_name((String *)&local_d8);
        }
        else {
          TranslationServer::get_script_name((String *)&local_d8);
        }
        EditorProperty::set_label((String *)this_00);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        Control::set_tooltip_text((String *)this_00);
        EditorProperty::set_selectable(SUB81(this_00,0));
        pcVar2 = *(code **)(*(long *)this_00 + 0x108);
        pCVar12 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar12);
        *(EditorPropertyFontMetaOverride **)(pCVar12 + 0x28) = this;
        *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar12 + 0x20) = &_LC0;
        *(undefined ***)pCVar12 = &PTR_hash_001222d0;
        *(undefined8 *)(pCVar12 + 0x40) = 0;
        uVar14 = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(pCVar12 + 0x10) = 0;
        *(undefined8 *)(pCVar12 + 0x30) = uVar14;
        *(code **)(pCVar12 + 0x38) = _property_changed;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
        *(char **)(pCVar12 + 0x20) = "EditorPropertyFontMetaOverride::_property_changed";
        Callable::Callable((Callable *)&local_d8,pCVar12);
        StringName::StringName((StringName *)local_e8,"property_changed",false);
        (*pcVar2)(this_00,(String *)local_e8,(String *)&local_d8,0);
        if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)&local_d8);
        pcVar2 = *(code **)(*(long *)this_00 + 0x108);
        pCVar12 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar12);
        *(EditorPropertyFontMetaOverride **)(pCVar12 + 0x28) = this;
        *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar12 + 0x20) = &_LC0;
        *(undefined ***)pCVar12 = &PTR_hash_00122360;
        *(undefined8 *)(pCVar12 + 0x40) = 0;
        uVar14 = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(pCVar12 + 0x10) = 0;
        *(undefined8 *)(pCVar12 + 0x30) = uVar14;
        *(code **)(pCVar12 + 0x38) = _object_id_selected;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
        *(char **)(pCVar12 + 0x20) = "EditorPropertyFontMetaOverride::_object_id_selected";
        Callable::Callable((Callable *)&local_d8,pCVar12);
        StringName::StringName((StringName *)local_e8,"object_id_selected",false);
        (*pcVar2)(this_00,(String *)local_e8,(String *)&local_d8,0);
        if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)&local_d8);
        pBVar13 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar13,false);
        pBVar13[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar13 = &PTR__initialize_classv_0011fe30;
        postinitialize_handler((Object *)pBVar13);
        Node::add_child(*(undefined8 *)(this + 0xb68),pBVar13,0,0);
        Node::add_child(pBVar13,this_00,0,0);
        Control::set_h_size_flags(this_00,3);
        this_01 = (Button *)operator_new(0xc10,"");
        local_d8 = (Object *)0x0;
        Button::Button(this_01,(String *)&local_d8);
        postinitialize_handler((Object *)this_01);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        if ((update_property()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar10 = __cxa_guard_acquire(&update_property()::{lambda()#1}::operator()()::sname),
           iVar10 != 0)) {
          _scs_create((char *)&update_property()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#1}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&update_property()::{lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_d8);
        Button::set_button_icon((Ref *)this_01);
        if (((local_d8 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar4 = local_d8, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
        Node::add_child(pBVar13,this_01,0,0);
        pcVar2 = *(code **)(*(long *)this_01 + 0x108);
        pCVar12 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar12);
        *(EditorPropertyFontMetaOverride **)(pCVar12 + 0x28) = this;
        *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar12 + 0x20) = &_LC0;
        *(undefined8 *)(pCVar12 + 0x40) = 0;
        uVar14 = *(undefined8 *)(this + 0x60);
        *(undefined ***)pCVar12 = &PTR_hash_001223f0;
        *(undefined8 *)(pCVar12 + 0x30) = uVar14;
        *(code **)(pCVar12 + 0x38) = _remove;
        *(undefined8 *)(pCVar12 + 0x10) = 0;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
        *(char **)(pCVar12 + 0x20) = "EditorPropertyFontMetaOverride::_remove";
        Callable::Callable((Callable *)local_e8,pCVar12);
        local_f0 = 0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_f8);
        }
        Variant::Variant(local_88,(Object *)this_01);
        Variant::Variant(local_70,(String *)&local_f0);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        Callable::bindp((Variant **)&local_d8,iVar15);
        pVVar17 = (Variant *)local_40;
        do {
          pVVar1 = pVVar17 + -0x18;
          pVVar17 = pVVar17 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar17 != local_88);
        (*pcVar2)(this_01,SceneStringNames::singleton + 0x238,(String *)&local_d8,0);
        Callable::~Callable((Callable *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        Callable::~Callable((Callable *)local_e8);
        (**(code **)(*(long *)this_00 + 0x380))(this_00);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar9);
    }
    if (this[0xba0] == (EditorPropertyFontMetaOverride)0x0) {
      local_e8[0] = 0;
      String::parse_latin1((String *)local_e8,"");
      pcVar16 = "Add Locale";
    }
    else {
      local_e8[0] = 0;
      String::parse_latin1((String *)local_e8,"Locale");
      pcVar16 = "Add Script";
    }
    local_f0 = 0;
    String::parse_latin1((String *)&local_f0,pcVar16);
    TTR((String *)&local_d8,(String *)&local_f0);
    uVar14 = EditorInspector::create_inspector_action_button((String *)&local_d8);
    *(undefined8 *)(this + 0xb70) = uVar14;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    plVar3 = *(long **)(this + 0xb70);
    pcVar2 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<EditorPropertyFontMetaOverride>
              ((EditorPropertyFontMetaOverride *)&local_d8,(char *)this,
               (_func_void *)"&EditorPropertyFontMetaOverride::_add_menu");
    (*pcVar2)(plVar3,SceneStringNames::singleton + 0x238,(String *)&local_d8,0);
    Callable::~Callable((Callable *)&local_d8);
    Node::add_child(*(undefined8 *)(this + 0xb68),*(undefined8 *)(this + 0xb70),0,0);
    this[0xba1] = (EditorPropertyFontMetaOverride)0x0;
  }
  Dictionary::~Dictionary((Dictionary *)local_100);
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyOTVariation::EditorPropertyOTVariation() */

void __thiscall
EditorPropertyOTVariation::EditorPropertyOTVariation(EditorPropertyOTVariation *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  Button *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  this[0xb78] = (EditorPropertyOTVariation)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00120e58;
  *(undefined8 *)(this + 0xb7c) = 0x14;
  *(undefined8 *)(this + 0xb88) = 0;
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb68) = (undefined1  [16])0x0;
  Ref<EditorPropertyFontOTObject>::instantiate<>((Ref<EditorPropertyFontOTObject> *)(this + 0xb58));
  local_68 = "interface/inspector/max_array_dictionary_items_per_page";
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xb7c) = iVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  this_00 = (Button *)operator_new(0xc10,"");
  local_68 = (char *)0x0;
  Button::Button(this_00,(String *)&local_68);
  postinitialize_handler((Object *)this_00);
  *(Button **)(this + 0xb70) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb70),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb70),0));
  plVar1 = *(long **)(this + 0xb70);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_00122750;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _edit_pressed;
  *(EditorPropertyOTVariation **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorPropertyOTVariation::_edit_pressed";
  Callable::Callable((Callable *)&local_68,this_01);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb70),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb70),0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorProperty::add_focusable((Control *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::EditorPropertyOTFeatures() */

void __thiscall EditorPropertyOTFeatures::EditorPropertyOTFeatures(EditorPropertyOTFeatures *this)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  Button *this_00;
  PopupMenu *pPVar4;
  StrRange *pSVar5;
  StrRange *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbd0) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00121228;
  *(undefined1 (*) [16])(this + 0xbe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc00) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xc10) = 0;
  this[0xc18] = (EditorPropertyOTFeatures)0x0;
  *(undefined8 *)(this + 0xc1c) = 0x14;
  *(undefined8 *)(this + 0xc28) = 0;
  Ref<EditorPropertyFontOTObject>::instantiate<>((Ref<EditorPropertyFontOTObject> *)(this + 0xb58));
  local_68 = "interface/inspector/max_array_dictionary_items_per_page";
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xc1c) = iVar3;
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
  create_custom_callable_function_pointer<EditorPropertyOTFeatures>
            ((EditorPropertyOTFeatures *)&local_68,(char *)this,
             (_func_void *)"&EditorPropertyOTFeatures::_edit_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb78),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb78),0,0);
  EditorProperty::add_focusable((Control *)this);
  pPVar4 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar4);
  postinitialize_handler((Object *)pPVar4);
  *(PopupMenu **)(this + 0xb80) = pPVar4;
  Node::add_child(this,pPVar4,0,0);
  plVar1 = *(long **)(this + 0xb80);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyOTFeatures,int>
            ((EditorPropertyOTFeatures *)&local_68,(char *)this,
             (_func_void_int *)"&EditorPropertyOTFeatures::_add_feature");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  pSVar5 = (StrRange *)(this + 0xb88);
  do {
    pSVar6 = pSVar5 + 8;
    pPVar4 = (PopupMenu *)operator_new(0xfe0,"");
    PopupMenu::PopupMenu(pPVar4);
    postinitialize_handler((Object *)pPVar4);
    *(PopupMenu **)pSVar5 = pPVar4;
    Node::add_child(*(undefined8 *)(this + 0xb80),pPVar4,0,0);
    plVar1 = *(long **)pSVar5;
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorPropertyOTFeatures,int>
              ((EditorPropertyOTFeatures *)&local_68,(char *)this,
               (_func_void_int *)"&EditorPropertyOTFeatures::_add_feature");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_68);
    Callable::~Callable((Callable *)&local_68);
    pSVar5 = pSVar6;
  } while (pSVar6 != (StrRange *)(this + 0xbd0));
  local_60 = 0xe;
  local_68 = "Stylistic Sets";
  String::parse_latin1(pSVar6);
  local_68 = "Character Variants";
  local_60 = 0x12;
  String::parse_latin1((StrRange *)(this + 0xbd8));
  local_68 = "Capitals";
  local_60 = 8;
  String::parse_latin1((StrRange *)(this + 0xbe0));
  local_68 = "Ligatures";
  local_60 = 9;
  String::parse_latin1((StrRange *)(this + 0xbe8));
  local_68 = "Alternates";
  local_60 = 10;
  String::parse_latin1((StrRange *)(this + 0xbf0));
  local_68 = "East Asian Language";
  local_60 = 0x13;
  String::parse_latin1((StrRange *)(this + 0xbf8));
  local_68 = "East Asian Widths";
  local_60 = 0x11;
  String::parse_latin1((StrRange *)(this + 0xc00));
  local_68 = "Numeral Alignment";
  local_60 = 0x11;
  String::parse_latin1((StrRange *)(this + 0xc08));
  local_68 = "Custom";
  local_60 = 6;
  String::parse_latin1((StrRange *)(this + 0xc10));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001060f4) */
/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  String *pSVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  String *pSVar8;
  CowData *pCVar9;
  String *pSVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_68;
  long local_60;
  long local_48;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_80 = param_2;
    if (param_4 != 0) {
      pSVar4 = param_3 + param_1 * 8;
      local_68 = param_2;
      local_60 = param_4;
LAB_00105c8e:
      local_60 = local_60 + -1;
      pSVar8 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar8);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar10 = pSVar4;
        if (cVar3 != '\0') goto LAB_00105cec;
        cVar3 = String::operator<(pSVar8,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar8,pSVar5);
        pSVar10 = pSVar8;
        if (cVar3 != '\0') goto LAB_00105cec;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
      }
      pSVar10 = pSVar8;
      if (cVar3 != '\0') {
        pSVar10 = pSVar5;
      }
LAB_00105cec:
      local_48 = 0;
      plVar1 = (long *)(*(long *)pSVar10 + -0x10);
      if (*(long *)pSVar10 != 0) {
        do {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_00105d24;
          LOCK();
          lVar11 = *plVar1;
          bVar13 = lVar12 == lVar11;
          if (bVar13) {
            *plVar1 = lVar12 + 1;
            lVar11 = lVar12;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar11 != -1) {
          local_48 = *(long *)pSVar10;
        }
      }
LAB_00105d24:
      pSVar8 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar8,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_00105d67:
          lVar12 = lVar12 + -1;
          pSVar5 = param_3 + lVar12 * 8;
          while (cVar3 = String::operator<((String *)&local_48,pSVar5), cVar3 != '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pSVar5 = pSVar5 + -8;
          }
          if (lVar12 <= local_80) goto LAB_00105e00;
          lVar11 = *(long *)pSVar8;
          *(undefined8 *)pSVar8 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar8 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00105d67;
        }
        pSVar8 = pSVar8 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_00105eca:
    lVar11 = lVar12 + -2 >> 1;
    pCVar9 = (CowData *)(param_3 + param_1 * 8);
    do {
      local_48 = 0;
      plVar1 = (long *)(*(long *)(pCVar9 + lVar11 * 8) + -0x10);
      if (*(long *)(pCVar9 + lVar11 * 8) == 0) {
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
      }
      else {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_00105f0e;
          LOCK();
          lVar7 = *plVar1;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 != -1) {
          local_48 = *(long *)(pCVar9 + lVar11 * 8);
        }
LAB_00105f0e:
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar1 = (long *)(lVar6 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) goto LAB_00105f7b;
      lVar11 = lVar11 + -1;
    } while( true );
  }
  goto LAB_00105e9f;
LAB_00105e00:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_00105e9f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_00105eca;
  goto LAB_00105c8e;
LAB_00105f7b:
  pSVar4 = param_3 + local_80 * 8 + -8;
  lVar12 = (local_80 + -1) - param_1;
  do {
    plVar1 = (long *)(*(long *)pSVar4 + -0x10);
    if (*(long *)pSVar4 == 0) {
LAB_00106088:
      if (*(long *)pCVar9 != *(long *)pSVar4) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
LAB_001060a8:
      local_48 = 0;
      adjust_heap(param_1,0,lVar12,&local_48,param_3);
    }
    else {
      do {
        lVar11 = *plVar1;
        if (lVar11 == 0) goto LAB_00106088;
        LOCK();
        lVar6 = *plVar1;
        bVar13 = lVar11 == lVar6;
        if (bVar13) {
          *plVar1 = lVar11 + 1;
          lVar6 = lVar11;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar6 == -1) goto LAB_00106088;
      lVar11 = *(long *)pSVar4;
      if (lVar11 != *(long *)pCVar9) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
      local_48 = 0;
      if (lVar11 == 0) goto LAB_001060a8;
      plVar1 = (long *)(lVar11 + -0x10);
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_001060cd;
        LOCK();
        lVar7 = *plVar1;
        bVar13 = lVar6 == lVar7;
        if (bVar13) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar7 == -1) {
LAB_001060cd:
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
      }
      else {
        local_48 = lVar11;
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
        LOCK();
        plVar2 = (long *)(lVar11 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
    bVar13 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar13);
LAB_00105e9f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyOTVariation::update_property() */

void __thiscall EditorPropertyOTVariation::update_property(EditorPropertyOTVariation *this)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar32 wVar10;
  long lVar11;
  Object *pOVar12;
  int *piVar13;
  Variant *pVVar14;
  String *pSVar15;
  EditorPropertyInteger *this_00;
  CallableCustom *pCVar16;
  undefined8 *puVar17;
  Object *pOVar18;
  MarginContainer *this_01;
  BoxContainer *this_02;
  BoxContainer *this_03;
  EditorPaginator *this_04;
  size_t __n;
  ulong uVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [12];
  Dictionary *local_168;
  Object *local_130;
  Variant local_100 [8];
  Dictionary local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  Object *local_d8;
  undefined8 local_d0;
  undefined1 local_c4 [12];
  int local_b8 [2];
  undefined1 local_b0 [16];
  int local_98 [8];
  undefined1 local_78 [2] [12];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0);
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_b8,*(bool **)(this + 0xa10));
  }
  Variant::operator_cast_to_Dictionary(local_100);
  lVar11 = EditorProperty::get_edited_object();
  if (lVar11 == 0) {
    lVar11 = EditorProperty::get_edited_object();
joined_r0x0010734b:
    if ((lVar11 == 0) ||
       (lVar11 = __dynamic_cast(lVar11,&Object::typeinfo,&DynamicFontImportSettingsData::typeinfo,0)
       , lVar11 == 0)) goto LAB_0010625c;
    pOVar12 = (Object *)EditorProperty::get_edited_object();
    if ((pOVar12 != (Object *)0x0) &&
       ((pOVar12 = (Object *)
                   __dynamic_cast(pOVar12,&Object::typeinfo,&DynamicFontImportSettingsData::typeinfo
                                  ,0), pOVar12 != (Object *)0x0 &&
        (cVar3 = RefCounted::init_ref(), cVar3 == '\0')))) {
      pOVar12 = (Object *)0x0;
    }
    DynamicFontImportSettingsData::get_font();
    if (local_d8 == (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar12);
        local_130 = (Object *)0x0;
        if (cVar3 != '\0') goto LAB_00107420;
      }
    }
    else {
      pOVar18 = (Object *)__dynamic_cast(local_d8,&Object::typeinfo,&Font::typeinfo,0);
      local_130 = pOVar18;
      if (pOVar18 == (Object *)0x0) {
LAB_0010707f:
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_d8), cVar3 != '\0')) {
          (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
          Memory::free_static(local_d8,false);
        }
      }
      else {
        cVar3 = RefCounted::reference();
        local_130 = (Object *)0x0;
        if (cVar3 != '\0') {
          local_130 = pOVar18;
        }
        if (local_d8 != (Object *)0x0) goto LAB_0010707f;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar12), cVar3 != '\0')) {
LAB_00107420:
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      if (local_130 != (Object *)0x0) goto LAB_00106e13;
    }
LAB_0010625c:
    Dictionary::Dictionary(local_f8);
    local_130 = (Object *)0x0;
  }
  else {
    lVar11 = __dynamic_cast(lVar11,&Object::typeinfo,&Font::typeinfo,0);
    if (lVar11 == 0) {
      lVar11 = EditorProperty::get_edited_object();
      goto joined_r0x0010734b;
    }
    pOVar12 = (Object *)EditorProperty::get_edited_object();
    Variant::Variant((Variant *)local_58,pOVar12);
    lVar11 = Variant::get_validated_object();
    if ((lVar11 == 0) ||
       (local_130 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Font::typeinfo,0),
       local_130 == (Object *)0x0)) {
      lVar11 = (long)local_58[0];
LAB_00106251:
      if (Variant::needs_deinit[lVar11] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010625c;
    }
    cVar3 = RefCounted::reference();
    lVar11 = (long)local_58[0];
    if (cVar3 == '\0') goto LAB_00106251;
    if (Variant::needs_deinit[lVar11] != '\0') {
      Variant::_clear_internal();
    }
LAB_00106e13:
    (**(code **)(*(long *)local_130 + 0x2f8))();
  }
  local_168 = local_f8;
  iVar20 = 0;
  do {
    iVar6 = Dictionary::size();
    if (iVar6 <= iVar20) {
      pSVar15 = *(String **)(this + 0xb70);
      Dictionary::size();
      local_e8 = 0;
      local_d0 = 0;
      local_d8 = (Object *)&_LC0;
      String::parse_latin1((StrRange *)&local_e8);
      local_f0 = 0;
      local_d8 = (Object *)0x10c722;
      local_d0 = 0x1a;
      String::parse_latin1((StrRange *)&local_f0);
      TTR((String *)&local_e0,(String *)&local_f0);
      iVar20 = (int)(String *)&local_e0;
      vformat<int>((String *)&local_d8,iVar20);
      Button::set_text(pSVar15);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      pSVar15 = (String *)EditorProperty::get_edited_object();
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
      cVar3 = Object::editor_is_section_unfolded(pSVar15);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      cVar5 = BaseButton::is_pressed();
      if (cVar5 != cVar3) {
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb70),0));
      }
      if (cVar3 == '\0') {
        if (*(long *)(this + 0xb60) != 0) {
          EditorProperty::set_bottom_editor((Control *)this);
          pOVar12 = *(Object **)(this + 0xb60);
          cVar3 = predelete_handler(pOVar12);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
          *(undefined8 *)(this + 0xb60) = 0;
        }
      }
      else {
        this[0xb78] = (EditorPropertyOTVariation)0x1;
        if (*(long *)(this + 0xb60) == 0) {
          this_01 = (MarginContainer *)operator_new(0xa10,"");
          MarginContainer::MarginContainer(this_01);
          postinitialize_handler((Object *)this_01);
          *(MarginContainer **)(this + 0xb60) = this_01;
          StringName::StringName((StringName *)&local_d8,"MarginContainer4px",false);
          Control::set_theme_type_variation((StringName *)this_01);
          if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
            StringName::unref();
          }
          Node::add_child(this,*(undefined8 *)(this + 0xb60),0);
          EditorProperty::set_bottom_editor((Control *)this);
          this_02 = (BoxContainer *)operator_new(0xa10,"");
          BoxContainer::BoxContainer(this_02,true);
          this_02[0xa0c] = (BoxContainer)0x1;
          *(undefined ***)this_02 = &PTR__initialize_classv_001201a8;
          postinitialize_handler((Object *)this_02);
          Control::set_v_size_flags(this_02,3);
          Node::add_child(*(undefined8 *)(this + 0xb60),this_02,0);
          this_03 = (BoxContainer *)operator_new(0xa10,"");
          BoxContainer::BoxContainer(this_03,true);
          this_03[0xa0c] = (BoxContainer)0x1;
          *(undefined ***)this_03 = &PTR__initialize_classv_001201a8;
          postinitialize_handler((Object *)this_03);
          *(BoxContainer **)(this + 0xb68) = this_03;
          Control::set_h_size_flags(this_03,3);
          Node::add_child(this_02,*(undefined8 *)(this + 0xb68),0);
          this_04 = (EditorPaginator *)operator_new(0xa48,"");
          EditorPaginator::EditorPaginator(this_04);
          postinitialize_handler((Object *)this_04);
          lVar11 = *(long *)this_04;
          *(EditorPaginator **)(this + 0xb88) = this_04;
          pcVar2 = *(code **)(lVar11 + 0x108);
          pCVar16 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar16);
          *(EditorPropertyOTVariation **)(pCVar16 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
          *(undefined **)(pCVar16 + 0x20) = &_LC0;
          *(undefined ***)pCVar16 = &PTR_hash_001225a0;
          *(undefined8 *)(pCVar16 + 0x40) = 0;
          uVar1 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar16 + 0x10) = 0;
          *(undefined8 *)(pCVar16 + 0x30) = uVar1;
          *(code **)(pCVar16 + 0x38) = _page_changed;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
          *(char **)(pCVar16 + 0x20) = "EditorPropertyOTVariation::_page_changed";
          Callable::Callable((Callable *)&local_d8,pCVar16);
          StringName::StringName((StringName *)&local_e0,"page_changed",false);
          (*pcVar2)(this_04,(String *)&local_e0,(String *)&local_d8);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
            StringName::unref();
          }
          Callable::~Callable((Callable *)&local_d8);
          Node::add_child(this_02,*(undefined8 *)(this + 0xb88),0);
        }
        else {
          iVar6 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb68),0));
          iVar6 = iVar6 + -1;
          if (-1 < iVar6) {
            do {
              Node::get_child((int)*(undefined8 *)(this + 0xb68),SUB41(iVar6,0));
              Node::queue_free();
              bVar21 = iVar6 != 0;
              iVar6 = iVar6 + -1;
            } while (bVar21);
          }
        }
        iVar6 = Dictionary::size();
        iVar7 = iVar6 + -1;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        iVar8 = *(int *)(this + 0xb80);
        if (iVar7 / *(int *)(this + 0xb7c) <= *(int *)(this + 0xb80)) {
          iVar8 = iVar7 / *(int *)(this + 0xb7c);
        }
        *(int *)(this + 0xb80) = iVar8;
        EditorPaginator::update((int)*(undefined8 *)(this + 0xb88),iVar8);
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb88),0));
        iVar7 = *(int *)(this + 0xb7c);
        iVar6 = iVar6 - *(int *)(this + 0xb80) * iVar7;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
        bVar21 = SUB81((String *)&local_d8,0);
        Dictionary::duplicate(bVar21);
        Dictionary::operator=((Dictionary *)local_100,(Dictionary *)&local_d8);
        Dictionary::~Dictionary((Dictionary *)&local_d8);
        Dictionary::operator=
                  ((Dictionary *)(*(long *)(this + 0xb58) + 0x180),(Dictionary *)local_100);
        Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x188),local_168);
        if (0 < iVar7) {
          iVar6 = 0;
          do {
            iVar9 = (int)(Variant *)local_58;
            Dictionary::get_key_at_index(iVar9);
            iVar8 = Variant::operator_cast_to_int((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::get_value_at_index(iVar9);
            auVar22 = Variant::operator_cast_to_Vector3i((Variant *)local_58);
            local_78[0] = auVar22;
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            this_00 = (EditorPropertyInteger *)operator_new(0xb60,"");
            EditorPropertyInteger::EditorPropertyInteger(this_00);
            postinitialize_handler((Object *)this_00);
            local_d8 = (Object *)0x0;
            EditorPropertyInteger::setup
                      ((long)this_00,(long)(int)local_78[0]._0_4_,(long)(int)local_78[0]._4_4_,false
                       ,true,false,(String *)0x0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            itos((long)&local_e8);
            operator+((char *)&local_e0,(String *)"keys/");
            StringName::StringName((StringName *)&local_d8,(String *)&local_e0,false);
            EditorProperty::set_object_and_property
                      ((Object *)this_00,*(StringName **)(this + 0xb58));
            if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar12 == (Object *)0x0) {
EditorPropertyOTVariation_update_property:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              pOVar12 = (Object *)0x0;
            }
            (**(code **)(*(long *)pOVar12 + 0x1b0))((StrRange *)&local_f0,pOVar12,(long)iVar8);
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              cVar3 = predelete_handler(pOVar12);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                Memory::free_static(pOVar12,false);
              }
            }
            iVar8 = 0;
            local_e8 = 0;
            String::replace((char *)&local_d8,(char *)&local_f0);
            String::strip_edges(SUB81((String *)&local_e0,0),bVar21);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            while( true ) {
              iVar9 = String::get_slice_count((char *)&local_e0);
              if (iVar9 <= iVar8) break;
              String::get_slicec((wchar32)(String *)&local_d8,iVar20);
              if ((local_d8 != (Object *)0x0) &&
                 (lVar11 = *(long *)((long)local_d8 + -8), 1 < (int)lVar11)) {
                if (lVar11 < 1) {
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",
                             false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                wVar10 = String::char_uppercase(*(wchar32 *)local_d8);
                if (local_d8 == (Object *)0x0) {
                  lVar11 = 0;
LAB_00106dc3:
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,0,lVar11,"p_index","size()","",
                             false,false);
                }
                else {
                  lVar11 = *(long *)((long)local_d8 + -8);
                  if (lVar11 < 1) goto LAB_00106dc3;
                  if (1 < *(ulong *)((long)local_d8 + -0x10)) {
                    if (local_d8 == (Object *)0x0) goto EditorPropertyOTVariation_update_property;
                    lVar11 = *(long *)((long)local_d8 + -8);
                    uVar19 = 0x10;
                    __n = lVar11 * 4;
                    if (__n != 0) {
                      uVar19 = __n - 1 | __n - 1 >> 1;
                      uVar19 = uVar19 | uVar19 >> 2;
                      uVar19 = uVar19 | uVar19 >> 4;
                      uVar19 = uVar19 | uVar19 >> 8;
                      uVar19 = uVar19 | uVar19 >> 0x10;
                      uVar19 = (uVar19 | uVar19 >> 0x20) + 0x11;
                    }
                    puVar17 = (undefined8 *)Memory::alloc_static(uVar19,false);
                    if (puVar17 == (undefined8 *)0x0) {
                      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                       "Parameter \"mem_new\" is null.",0);
                    }
                    else {
                      *puVar17 = 1;
                      puVar17[1] = lVar11;
                      memcpy(puVar17 + 2,local_d8,__n);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                      local_d8 = (Object *)(puVar17 + 2);
                    }
                  }
                  *(wchar32 *)local_d8 = wVar10;
                }
                if (iVar6 != 0) {
                  String::operator+=((String *)&local_e8," ");
                }
                String::operator+=((String *)&local_e8,(String *)&local_d8);
              }
              iVar8 = iVar8 + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            EditorProperty::set_label((String *)this_00);
            Control::set_tooltip_text((String *)this_00);
            EditorProperty::set_selectable(SUB81(this_00,0));
            pcVar2 = *(code **)(*(long *)this_00 + 0x108);
            pCVar16 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar16);
            *(EditorPropertyOTVariation **)(pCVar16 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar16 + 0x20) = &_LC0;
            *(undefined ***)pCVar16 = &PTR_hash_00122630;
            *(undefined8 *)(pCVar16 + 0x40) = 0;
            uVar1 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar16 + 0x10) = 0;
            *(undefined8 *)(pCVar16 + 0x30) = uVar1;
            *(code **)(pCVar16 + 0x38) = _property_changed;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
            *(char **)(pCVar16 + 0x20) = "EditorPropertyOTVariation::_property_changed";
            Callable::Callable((Callable *)&local_d8,pCVar16);
            StringName::StringName((StringName *)&local_e0,"property_changed",false);
            (*pcVar2)(this_00,(String *)&local_e0,(String *)&local_d8,0);
            if ((StringName::configured != '\0') && (local_e0 != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_d8);
            pcVar2 = *(code **)(*(long *)this_00 + 0x108);
            pCVar16 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar16);
            *(EditorPropertyOTVariation **)(pCVar16 + 0x28) = this;
            *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar16 + 0x20) = &_LC0;
            *(undefined ***)pCVar16 = &PTR_hash_001226c0;
            *(undefined8 *)(pCVar16 + 0x40) = 0;
            uVar1 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar16 + 0x10) = 0;
            *(undefined8 *)(pCVar16 + 0x30) = uVar1;
            *(code **)(pCVar16 + 0x38) = _object_id_selected;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
            *(char **)(pCVar16 + 0x20) = "EditorPropertyOTVariation::_object_id_selected";
            Callable::Callable((Callable *)&local_d8,pCVar16);
            StringName::StringName((StringName *)&local_e0,"object_id_selected",false);
            (*pcVar2)(this_00,(String *)&local_e0,(String *)&local_d8,0);
            if ((StringName::configured != '\0') && (local_e0 != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_d8);
            Node::add_child(*(undefined8 *)(this + 0xb68),this_00,0,0);
            (**(code **)(*(long *)this_00 + 0x380))(this_00);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            iVar6 = iVar6 + 1;
          } while (iVar6 != iVar7);
        }
        this[0xb78] = (EditorPropertyOTVariation)0x0;
      }
      Dictionary::~Dictionary(local_168);
      if (local_130 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_130);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_130 + 0x140))(local_130);
            Memory::free_static(local_130,false);
          }
        }
      }
      Dictionary::~Dictionary((Dictionary *)local_100);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar7 = (int)(Variant *)local_58;
    Dictionary::get_key_at_index(iVar7);
    iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::get_value_at_index(iVar7);
    auVar22 = Variant::operator_cast_to_Vector3i((Variant *)local_58);
    local_c4 = auVar22;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,iVar6);
    bVar4 = Dictionary::has(local_100);
    if (bVar4 == 0) {
      Variant::Variant((Variant *)local_58,iVar6);
      bVar4 = Dictionary::has(local_100);
      bVar4 = bVar4 ^ 1;
      if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010630c;
      Variant::_clear_internal();
      cVar3 = Variant::needs_deinit[local_98[0]];
    }
    else {
      Variant::Variant((Variant *)local_78,iVar6);
      piVar13 = (int *)Dictionary::operator[](local_100);
      if (*piVar13 != 0) {
        Variant::Variant((Variant *)local_58,iVar6);
        bVar4 = Dictionary::has(local_100);
        bVar4 = bVar4 ^ 1;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
LAB_0010630c:
      cVar3 = Variant::needs_deinit[local_98[0]];
    }
    if (cVar3 != '\0') {
      Variant::_clear_internal();
    }
    if (bVar4 != 0) {
      Variant::Variant((Variant *)local_58,local_c4._8_4_);
      Variant::Variant((Variant *)local_78,iVar6);
      pVVar14 = (Variant *)Dictionary::operator[](local_100);
      if (pVVar14 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(int *)pVVar14 = local_58[0];
        *(undefined8 *)(pVVar14 + 8) = local_50;
        *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    iVar20 = iVar20 + 1;
  } while( true );
}



/* EditorInspectorPlugin::initialize_class() [clone .part.0] */

void EditorInspectorPlugin::initialize_class(void)

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
    if ((code *)PTR__bind_methods_00129010 != RefCounted::_bind_methods) {
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    EditorInspectorPlugin::_bind_methods();
  }
  if ((code *)PTR__bind_compatibility_methods_00129008 != Object::_bind_compatibility_methods) {
    EditorInspectorPlugin::_bind_compatibility_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyOTFeatures::update_property() */

void __thiscall EditorPropertyOTFeatures::update_property(EditorPropertyOTFeatures *this)

{
  String *pSVar1;
  Ref *pRVar2;
  long *plVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  Object *pOVar14;
  Object *pOVar15;
  String *pSVar16;
  Variant *pVVar17;
  undefined8 uVar18;
  CallableCustom *pCVar19;
  BoxContainer *pBVar20;
  Button *this_00;
  MarginContainer *this_01;
  BoxContainer *this_02;
  EditorPaginator *this_03;
  char *pcVar21;
  long lVar22;
  String *pSVar23;
  int iVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  Variant *local_1e8;
  String *local_1e0;
  char acStack_1c7 [47];
  Object *local_198;
  Variant local_130 [8];
  Dictionary local_128 [8];
  Variant local_120 [8];
  CowData<char32_t> local_118 [8];
  Object *local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8 [2];
  Object *local_e8 [2];
  char local_d1 [9];
  int local_c8 [2];
  undefined1 local_c0 [16];
  String *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.");
    local_c8[0] = 0;
    local_c0 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_c8,*(bool **)(this + 0xa10));
  }
  Variant::operator_cast_to_Dictionary(local_130);
  lVar13 = EditorProperty::get_edited_object();
  if ((lVar13 == 0) ||
     (lVar13 = __dynamic_cast(lVar13,&Object::typeinfo,&FontVariation::typeinfo,0), lVar13 == 0)) {
    lVar13 = EditorProperty::get_edited_object();
    if ((lVar13 == 0) ||
       (lVar13 = __dynamic_cast(lVar13,&Object::typeinfo,&DynamicFontImportSettingsData::typeinfo,0)
       , lVar13 == 0)) {
      Dictionary::Dictionary(local_128);
    }
    else {
      pOVar14 = (Object *)EditorProperty::get_edited_object();
      if (((pOVar14 != (Object *)0x0) &&
          (pOVar14 = (Object *)
                     __dynamic_cast(pOVar14,&Object::typeinfo,
                                    &DynamicFontImportSettingsData::typeinfo,0),
          pOVar14 != (Object *)0x0)) && (cVar6 = RefCounted::init_ref(), cVar6 == '\0')) {
        pOVar14 = (Object *)0x0;
      }
      DynamicFontImportSettingsData::get_font();
      if (local_e8[0] == (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 == '\0') {
LAB_001094ee:
          Dictionary::Dictionary(local_128);
          goto LAB_001078c8;
        }
        pOVar15 = (Object *)0x0;
        cVar6 = predelete_handler(pOVar14);
        if (cVar6 == '\0') goto LAB_001094ee;
LAB_00109463:
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      else {
        pOVar15 = (Object *)__dynamic_cast(local_e8[0],&Object::typeinfo,&Font::typeinfo,0);
        if (pOVar15 == (Object *)0x0) {
LAB_00108ca8:
          cVar6 = RefCounted::unreference();
          pOVar5 = local_e8[0];
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_e8[0]), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
        else {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar15 = (Object *)0x0;
          }
          if (local_e8[0] != (Object *)0x0) goto LAB_00108ca8;
        }
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar14), cVar6 != '\0'))
        goto LAB_00109463;
      }
      Dictionary::Dictionary(local_128);
      if (pOVar15 != (Object *)0x0) goto LAB_00107f7b;
    }
LAB_001078c8:
    pOVar15 = (Object *)0x0;
    cVar6 = Dictionary::is_empty();
    if (cVar6 == '\0') goto LAB_001078d9;
LAB_00107fb4:
    local_1e0 = (String *)local_e8;
    pSVar16 = *(String **)(this + 0xb78);
    local_100 = 0;
    String::parse_latin1((String *)&local_100,"");
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"No supported features");
    TTR((String *)local_f8,(String *)&local_108);
    vformat<>(local_1e0);
    Button::set_text(pSVar16);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    lVar13 = *(long *)(this + 0xb60);
  }
  else {
    pOVar14 = (Object *)EditorProperty::get_edited_object();
    Variant::Variant((Variant *)local_88,pOVar14);
    lVar13 = Variant::get_validated_object();
    if ((lVar13 == 0) ||
       (pOVar15 = (Object *)__dynamic_cast(lVar13,&Object::typeinfo,&Font::typeinfo,0),
       pOVar15 == (Object *)0x0)) {
      cVar6 = Variant::needs_deinit[local_88[0]];
joined_r0x00108dfb:
      if (cVar6 != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary(local_128);
      goto LAB_001078c8;
    }
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      cVar6 = Variant::needs_deinit[local_88[0]];
      goto joined_r0x00108dfb;
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::Dictionary(local_128);
LAB_00107f7b:
    local_1e0 = (String *)local_e8;
    local_1e8 = (Variant *)local_128;
    (**(code **)(*(long *)pOVar15 + 0x2f0))(local_1e0,pOVar15);
    Dictionary::operator=((Dictionary *)local_1e8,(Dictionary *)local_1e0);
    Dictionary::~Dictionary((Dictionary *)local_1e0);
    cVar6 = Dictionary::is_empty();
    if (cVar6 != '\0') goto LAB_00107fb4;
LAB_001078d9:
    local_1e0 = (String *)local_e8;
    local_1e8 = (Variant *)local_128;
    pSVar16 = *(String **)(this + 0xb78);
    Dictionary::size();
    iVar10 = Dictionary::size();
    local_100 = 0;
    String::parse_latin1((String *)&local_100,"");
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"Features (%d of %d set)");
    TTR((String *)local_f8,(String *)&local_108);
    iVar24 = (int)(String *)local_f8;
    vformat<int,int>(local_1e0,iVar24,iVar10);
    Button::set_text(pSVar16);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    pSVar16 = (String *)EditorProperty::get_edited_object();
    EditorProperty::get_edited_property();
    if (local_f8[0] == 0) {
      local_e8[0] = (Object *)0x0;
    }
    else {
      local_e8[0] = (Object *)0x0;
      if (*(char **)(local_f8[0] + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_1e0,(CowData *)(local_f8[0] + 0x10));
      }
      else {
        String::parse_latin1(local_1e0,*(char **)(local_f8[0] + 8));
      }
    }
    cVar6 = Object::editor_is_section_unfolded(pSVar16);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
    if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
      StringName::unref();
    }
    cVar7 = BaseButton::is_pressed();
    if (cVar7 != cVar6) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb78),0));
    }
    lVar13 = *(long *)(this + 0xb60);
    if (cVar6 != '\0') {
      this[0xc18] = (EditorPropertyOTFeatures)0x1;
      if (lVar13 == 0) {
        this_01 = (MarginContainer *)operator_new(0xa10,"");
        MarginContainer::MarginContainer(this_01);
        postinitialize_handler((Object *)this_01);
        *(MarginContainer **)(this + 0xb60) = this_01;
        StringName::StringName((StringName *)local_1e0,"MarginContainer4px",false);
        Control::set_theme_type_variation((StringName *)this_01);
        if ((StringName::configured != '\0') && (local_e8[0] != (Object *)0x0)) {
          StringName::unref();
        }
        Node::add_child(this,*(undefined8 *)(this + 0xb60),0,0);
        EditorProperty::set_bottom_editor((Control *)this);
        pBVar20 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar20,true);
        *(undefined ***)pBVar20 = &PTR__initialize_classv_001201a8;
        pBVar20[0xa0c] = (BoxContainer)0x1;
        postinitialize_handler((Object *)pBVar20);
        Control::set_v_size_flags(pBVar20,3);
        Node::add_child(*(undefined8 *)(this + 0xb60),pBVar20,0,0);
        this_02 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(this_02,true);
        *(undefined ***)this_02 = &PTR__initialize_classv_001201a8;
        this_02[0xa0c] = (BoxContainer)0x1;
        postinitialize_handler((Object *)this_02);
        *(BoxContainer **)(this + 0xb68) = this_02;
        Control::set_h_size_flags(this_02,3);
        Node::add_child(pBVar20,*(undefined8 *)(this + 0xb68),0,0);
        this_03 = (EditorPaginator *)operator_new(0xa48,"");
        EditorPaginator::EditorPaginator(this_03);
        postinitialize_handler((Object *)this_03);
        lVar13 = *(long *)this_03;
        *(EditorPaginator **)(this + 0xc28) = this_03;
        pcVar4 = *(code **)(lVar13 + 0x108);
        create_custom_callable_function_pointer<EditorPropertyOTFeatures,int>
                  ((EditorPropertyOTFeatures *)local_1e0,(char *)this,
                   (_func_void_int *)"&EditorPropertyOTFeatures::_page_changed");
        StringName::StringName((StringName *)local_f8,"page_changed",false);
        (*pcVar4)(this_03,(String *)local_f8,local_1e0,0);
        if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)local_1e0);
        Node::add_child(pBVar20,*(undefined8 *)(this + 0xc28),0,0);
      }
      else {
        iVar10 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb68),0));
        iVar10 = iVar10 + -1;
        if (-1 < iVar10) {
          do {
            Node::get_child((int)*(undefined8 *)(this + 0xb68),SUB41(iVar10,0));
            Node::queue_free();
            bVar26 = iVar10 != 0;
            iVar10 = iVar10 + -1;
          } while (bVar26);
        }
        *(undefined8 *)(this + 0xb70) = 0;
      }
      pcVar21 = local_d1;
      PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xb80),0));
      lVar13 = 0;
      do {
        lVar22 = lVar13 + 1;
        PopupMenu::clear(SUB81(*(undefined8 *)(this + lVar13 * 8 + 0xb88),0));
        pcVar21[lVar13] = '\0';
        lVar13 = lVar22;
      } while (lVar22 != 9);
      local_e8[0] = (Object *)0x0;
      String::parse_latin1(local_1e0,"interface/inspector/show_low_level_opentype_features");
      _EDITOR_GET((String *)local_88);
      bVar26 = Variant::operator_cast_to_bool((Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
      for (iVar10 = 0; iVar11 = Dictionary::size(), iVar10 < iVar11; iVar10 = iVar10 + 1) {
        iVar25 = (int)(String *)local_88;
        Dictionary::get_key_at_index(iVar25);
        iVar11 = Variant::operator_cast_to_int((Variant *)local_88);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::get_value_at_index(iVar25);
        Variant::operator_cast_to_Dictionary(local_120);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_88,"hidden");
        pVVar17 = (Variant *)Dictionary::operator[](local_120);
        bVar8 = Variant::operator_cast_to_bool(pVVar17);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        pOVar14 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar14 == (Object *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          pOVar14 = (Object *)0x0;
        }
        (**(code **)(*(long *)pOVar14 + 0x1b0))(local_118,pOVar14,(long)iVar11);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar14), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
        if ((bVar26) || (!bVar8)) {
          iVar25 = 0;
          cVar6 = String::begins_with((char *)local_118);
          if (cVar6 == '\0') {
            iVar25 = 1;
            cVar6 = String::begins_with((char *)local_118);
            if (cVar6 == '\0') {
              iVar25 = 2;
              cVar6 = String::ends_with((char *)local_118);
              if (cVar6 == '\0') {
                iVar25 = 3;
                cVar6 = String::ends_with((char *)local_118);
                if (cVar6 == '\0') {
                  iVar25 = 4;
                  cVar6 = String::ends_with((char *)local_118);
                  if (cVar6 == '\0') {
                    cVar6 = String::ends_with((char *)local_118);
                    if ((((cVar6 == '\0') &&
                         (cVar6 = String::begins_with((char *)local_118), cVar6 == '\0')) &&
                        (cVar6 = String::operator==((String *)local_118,"simplified_forms"),
                        cVar6 == '\0')) &&
                       ((cVar6 = String::operator==((String *)local_118,"traditional_name_forms"),
                        cVar6 == '\0' &&
                        (cVar6 = String::operator==((String *)local_118,"traditional_forms"),
                        cVar6 == '\0')))) {
                      iVar25 = 6;
                      cVar6 = String::ends_with((char *)local_118);
                      if (cVar6 == '\0') {
                        cVar6 = String::operator==((String *)local_118,"tabular_figures");
                        if ((cVar6 == '\0') &&
                           (cVar6 = String::operator==((String *)local_118,"proportional_figures"),
                           cVar6 == '\0')) {
                          bVar9 = String::begins_with((char *)local_118);
                          iVar25 = 9 - (uint)bVar9;
                        }
                        else {
                          iVar25 = 7;
                        }
                      }
                    }
                    else {
                      iVar25 = 5;
                    }
                  }
                }
              }
            }
          }
          String::capitalize();
          Variant::Variant((Variant *)local_88,"label");
          cVar6 = Dictionary::has(local_120);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar6 != '\0') {
            Variant::Variant((Variant *)local_88,"label");
            Dictionary::operator[](local_120);
            Variant::operator_cast_to_String((Variant *)&local_108);
            local_f8[0] = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)local_f8,(CowData *)&local_110);
            local_100 = 0;
            String::parse_latin1((String *)&local_100,"%s (%s)");
            vformat<String,String>
                      (local_1e0,(String *)&local_100,(String *)local_f8,(String *)&local_108);
            pOVar14 = local_e8[0];
            if (local_110 != local_e8[0]) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
              local_e8[0] = (Object *)0x0;
              local_110 = pOVar14;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (iVar25 == 9) {
            PopupMenu::add_item(*(undefined8 *)(this + 0xb80),(CowData<char32_t> *)&local_110,iVar11
                                ,0);
          }
          else {
            PopupMenu::add_item(*(undefined8 *)(this + (long)iVar25 * 8 + 0xb88),
                                (CowData<char32_t> *)&local_110,iVar11,0);
            local_d1[iVar25] = '\x01';
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        }
        CowData<char32_t>::_unref(local_118);
        Dictionary::~Dictionary((Dictionary *)local_120);
      }
      pSVar16 = (String *)(this + 0xbd0);
      do {
        while (*pcVar21 != '\0') {
          uVar18 = *(undefined8 *)(pSVar16 + -0x48);
          pcVar21 = pcVar21 + 1;
          pSVar1 = *(String **)(this + 0xb80);
          local_f8[0] = 0;
          String::parse_latin1((String *)local_f8,"");
          pSVar23 = pSVar16 + 8;
          TTR(local_1e0,pSVar16);
          PopupMenu::add_submenu_node_item(pSVar1,(PopupMenu *)local_1e0,(int)uVar18);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
          pSVar16 = pSVar23;
          if ((String *)(this + 0xc18) == pSVar23) goto LAB_001081d3;
        }
        pSVar16 = pSVar16 + 8;
        pcVar21 = pcVar21 + 1;
      } while ((String *)(this + 0xc18) != pSVar16);
LAB_001081d3:
      iVar10 = Dictionary::size();
      iVar11 = iVar10 + -1;
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      iVar25 = *(int *)(this + 0xc20);
      if (iVar11 / *(int *)(this + 0xc1c) <= *(int *)(this + 0xc20)) {
        iVar25 = iVar11 / *(int *)(this + 0xc1c);
      }
      *(int *)(this + 0xc20) = iVar25;
      EditorPaginator::update((int)*(undefined8 *)(this + 0xc28),iVar25);
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xc28),0));
      iVar11 = *(int *)(this + 0xc1c);
      iVar10 = iVar10 - *(int *)(this + 0xc20) * iVar11;
      if (iVar10 <= iVar11) {
        iVar11 = iVar10;
      }
      Dictionary::duplicate(SUB81(local_1e0,0));
      Dictionary::operator=((Dictionary *)local_130,(Dictionary *)local_1e0);
      Dictionary::~Dictionary((Dictionary *)local_1e0);
      Dictionary::operator=((Dictionary *)(*(long *)(this + 0xb58) + 0x180),(Dictionary *)local_130)
      ;
      if (0 < iVar11) {
        iVar10 = 0;
        do {
          while( true ) {
            Dictionary::get_key_at_index((int)(Variant *)&local_a8);
            iVar25 = Variant::operator_cast_to_int((Variant *)&local_a8);
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)&local_a8,iVar25);
            cVar6 = Dictionary::has(local_1e8);
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar6 != '\0') break;
LAB_001082e0:
            iVar10 = iVar10 + 1;
            if (iVar10 == iVar11) goto LAB_0010843d;
          }
          Variant::Variant((Variant *)&local_a8,iVar25);
          Dictionary::operator[](local_1e8);
          Variant::operator_cast_to_Dictionary(local_120);
          if (Variant::needs_deinit[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_a8,"type");
          pVVar17 = (Variant *)Dictionary::operator[](local_120);
          iVar12 = Variant::operator_cast_to_int(pVVar17);
          if (Variant::needs_deinit[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_a8,"hidden");
          pVVar17 = (Variant *)Dictionary::operator[](local_120);
          bVar8 = Variant::operator_cast_to_bool(pVVar17);
          if (Variant::needs_deinit[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          if ((bVar26) || (!bVar8)) {
            if (iVar12 == 1) {
              local_198 = (Object *)operator_new(0xb60,"");
              EditorPropertyCheck::EditorPropertyCheck((EditorPropertyCheck *)local_198);
              postinitialize_handler(local_198);
            }
            else if (iVar12 == 2) {
              local_198 = (Object *)operator_new(0xb60,"");
              EditorPropertyInteger::EditorPropertyInteger((EditorPropertyInteger *)local_198);
              postinitialize_handler(local_198);
              local_e8[0] = (Object *)0x0;
              EditorPropertyInteger::setup((long)local_198,0,0xff,true,false,false,(String *)0x0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
            }
            else {
              if (iVar12 != 0) {
                Variant::get_type_name((String *)&local_100,iVar12);
                local_f8[0] = 0;
                String::parse_latin1((String *)local_f8,"Unsupported OT feature data type %s");
                vformat<String>(local_1e0,(String *)local_f8,(String *)&local_100);
                _err_print_error("update_property","editor/plugins/font_config_plugin.cpp",0x302,
                                 "Condition \"true\" is true. Continuing.",local_1e0,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                goto LAB_00108417;
              }
              local_198 = (Object *)operator_new(0xb60,"");
              EditorPropertyNil::EditorPropertyNil((EditorPropertyNil *)local_198);
              postinitialize_handler(local_198);
            }
            itos((long)&local_100);
            operator+((char *)local_f8,(String *)"keys/");
            StringName::StringName((StringName *)local_1e0,(String *)local_f8,false);
            EditorProperty::set_object_and_property(local_198,*(StringName **)(this + 0xb58));
            if ((StringName::configured != '\0') && (local_e8[0] != (Object *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            pOVar14 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar14 == (Object *)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              pOVar14 = (Object *)0x0;
            }
            (**(code **)(*(long *)pOVar14 + 0x1b0))(local_118,pOVar14,(long)iVar25);
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar14), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
            String::capitalize();
            Variant::Variant((Variant *)&local_a8,"label");
            cVar6 = Dictionary::has(local_120);
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar6 != '\0') {
              Variant::Variant((Variant *)&local_a8,"label");
              Dictionary::operator[](local_120);
              Variant::operator_cast_to_String((Variant *)&local_108);
              local_f8[0] = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_f8,(CowData *)&local_110);
              local_100 = 0;
              String::parse_latin1((String *)&local_100,"%s (%s)");
              vformat<String,String>
                        (local_1e0,(String *)&local_100,(String *)local_f8,(String *)&local_108);
              pOVar14 = local_e8[0];
              if (local_110 != local_e8[0]) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                local_110 = pOVar14;
                local_e8[0] = (Object *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
              if (Variant::needs_deinit[(int)local_a8] != '\0') {
                Variant::_clear_internal();
              }
            }
            EditorProperty::set_label((String *)local_198);
            Control::set_tooltip_text((String *)local_198);
            EditorProperty::set_selectable(SUB81(local_198,0));
            pcVar4 = *(code **)(*(long *)local_198 + 0x108);
            pCVar19 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar19);
            *(undefined1 (*) [16])(pCVar19 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar19 + 0x20) = &_LC0;
            *(undefined ***)pCVar19 = &PTR_hash_00122870;
            *(undefined8 *)(pCVar19 + 0x40) = 0;
            *(EditorPropertyOTFeatures **)(pCVar19 + 0x28) = this;
            uVar18 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar19 + 0x10) = 0;
            *(undefined8 *)(pCVar19 + 0x30) = uVar18;
            *(code **)(pCVar19 + 0x38) = _property_changed;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar19,(int)pCVar19 + 0x28);
            *(char **)(pCVar19 + 0x20) = "EditorPropertyOTFeatures::_property_changed";
            Callable::Callable((Callable *)local_1e0,pCVar19);
            StringName::StringName((StringName *)local_f8,"property_changed",false);
            (*pcVar4)(local_198,(String *)local_f8,local_1e0,0);
            if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)local_1e0);
            pcVar4 = *(code **)(*(long *)local_198 + 0x108);
            pCVar19 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar19);
            *(undefined1 (*) [16])(pCVar19 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar19 + 0x20) = &_LC0;
            *(undefined ***)pCVar19 = &PTR_hash_00122900;
            *(undefined8 *)(pCVar19 + 0x40) = 0;
            uVar18 = *(undefined8 *)(this + 0x60);
            *(EditorPropertyOTFeatures **)(pCVar19 + 0x28) = this;
            *(code **)(pCVar19 + 0x38) = _object_id_selected;
            *(undefined8 *)(pCVar19 + 0x30) = uVar18;
            *(undefined8 *)(pCVar19 + 0x10) = 0;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar19,(int)pCVar19 + 0x28);
            *(char **)(pCVar19 + 0x20) = "EditorPropertyOTFeatures::_object_id_selected";
            Callable::Callable((Callable *)local_1e0,pCVar19);
            StringName::StringName((StringName *)local_f8,"object_id_selected",false);
            (*pcVar4)(local_198,(String *)local_f8,local_1e0,0);
            if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)local_1e0);
            pBVar20 = (BoxContainer *)operator_new(0xa10,"");
            BoxContainer::BoxContainer(pBVar20,false);
            pBVar20[0xa0c] = (BoxContainer)0x1;
            *(undefined ***)pBVar20 = &PTR__initialize_classv_0011fe30;
            postinitialize_handler((Object *)pBVar20);
            Node::add_child(*(undefined8 *)(this + 0xb68),pBVar20,0,0);
            Node::add_child(pBVar20,local_198,0,0);
            Control::set_h_size_flags(local_198,3);
            this_00 = (Button *)operator_new(0xc10,"");
            local_e8[0] = (Object *)0x0;
            Button::Button(this_00,local_1e0);
            postinitialize_handler((Object *)this_00);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
            if ((update_property()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar12 = __cxa_guard_acquire(&update_property()::{lambda()#1}::operator()()::sname),
               iVar12 != 0)) {
              _scs_create((char *)&update_property()::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &update_property()::{lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&update_property()::{lambda()#1}::operator()()::sname);
            }
            Control::get_editor_theme_icon((StringName *)local_1e0);
            Button::set_button_icon((Ref *)this_00);
            if (((local_e8[0] != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar14 = local_e8[0], cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_e8[0]), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
              Memory::free_static(pOVar14,false);
            }
            Node::add_child(pBVar20,this_00,0,0);
            pcVar4 = *(code **)(*(long *)this_00 + 0x108);
            pCVar19 = (CallableCustom *)operator_new(0x48,"");
            CallableCustom::CallableCustom(pCVar19);
            *(undefined1 (*) [16])(pCVar19 + 0x30) = (undefined1  [16])0x0;
            *(undefined **)(pCVar19 + 0x20) = &_LC0;
            *(undefined ***)pCVar19 = &PTR_hash_00122990;
            *(undefined8 *)(pCVar19 + 0x40) = 0;
            *(EditorPropertyOTFeatures **)(pCVar19 + 0x28) = this;
            uVar18 = *(undefined8 *)(this + 0x60);
            *(undefined8 *)(pCVar19 + 0x10) = 0;
            *(undefined8 *)(pCVar19 + 0x30) = uVar18;
            *(code **)(pCVar19 + 0x38) = _remove;
            CallableCustomMethodPointerBase::_setup((uint *)pCVar19,(int)pCVar19 + 0x28);
            *(char **)(pCVar19 + 0x20) = "EditorPropertyOTFeatures::_remove";
            Callable::Callable((Callable *)local_f8,pCVar19);
            Variant::Variant((Variant *)local_88,(Object *)this_00);
            Variant::Variant(local_70,iVar25);
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            pSVar16 = (String *)local_40;
            local_a8 = (String *)local_88;
            pVStack_a0 = local_70;
            Callable::bindp((Variant **)local_1e0,iVar24);
            do {
              pSVar1 = pSVar16 + -0x18;
              pSVar16 = pSVar16 + -0x18;
              if (Variant::needs_deinit[*(int *)pSVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pSVar16 != (String *)local_88);
            (*pcVar4)(this_00,SceneStringNames::singleton + 0x238,local_1e0);
            Callable::~Callable((Callable *)local_1e0);
            Callable::~Callable((Callable *)local_f8);
            (**(code **)(*(long *)local_198 + 0x380))();
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
            CowData<char32_t>::_unref(local_118);
            Dictionary::~Dictionary((Dictionary *)local_120);
            goto LAB_001082e0;
          }
LAB_00108417:
          iVar10 = iVar10 + 1;
          Dictionary::~Dictionary((Dictionary *)local_120);
        } while (iVar10 != iVar11);
      }
LAB_0010843d:
      local_f8[0] = 0;
      String::parse_latin1((String *)local_f8,"");
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"Add Feature");
      TTR(local_1e0,(String *)&local_100);
      uVar18 = EditorInspector::create_inspector_action_button(local_1e0);
      *(undefined8 *)(this + 0xb70) = uVar18;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      pRVar2 = *(Ref **)(this + 0xb70);
      if ((update_property()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&update_property()::{lambda()#2}::operator()()::sname),
         iVar10 != 0)) {
        _scs_create((char *)&update_property()::{lambda()#2}::operator()()::sname,false);
        __cxa_atexit(StringName::~StringName,&update_property()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&update_property()::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_1e0);
      Button::set_button_icon(pRVar2);
      if (((local_e8[0] != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar14 = local_e8[0], cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_e8[0]), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      plVar3 = *(long **)(this + 0xb70);
      pcVar4 = *(code **)(*plVar3 + 0x108);
      create_custom_callable_function_pointer<EditorPropertyOTFeatures>
                ((EditorPropertyOTFeatures *)local_1e0,(char *)this,
                 (_func_void *)"&EditorPropertyOTFeatures::_add_menu");
      (*pcVar4)(plVar3,SceneStringNames::singleton + 0x238,local_1e0,0);
      Callable::~Callable((Callable *)local_1e0);
      Node::add_child(*(undefined8 *)(this + 0xb68),*(undefined8 *)(this + 0xb70),0,0);
      this[0xc18] = (EditorPropertyOTFeatures)0x0;
      goto LAB_001080a6;
    }
  }
  if (lVar13 != 0) {
    EditorProperty::set_bottom_editor((Control *)this);
    pOVar14 = *(Object **)(this + 0xb60);
    cVar6 = predelete_handler(pOVar14);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
      Memory::free_static(pOVar14,false);
    }
    *(undefined8 *)(this + 0xb70) = 0;
    *(undefined8 *)(this + 0xb60) = 0;
  }
LAB_001080a6:
  local_1e8 = (Variant *)local_128;
  Dictionary::~Dictionary((Dictionary *)local_1e8);
  if (((pOVar15 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(pOVar15), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  Dictionary::~Dictionary((Dictionary *)local_130);
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FontPreview::_notification(int) [clone .part.0] */

void FontPreview::_notification(int param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  char *pcVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  wchar32 *pwVar14;
  undefined8 in_RDX;
  undefined8 in_RSI;
  ulong uVar15;
  undefined4 in_register_0000003c;
  StringName *pSVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 in_XMM1_Qa;
  String *local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  Object *local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  undefined4 uVar16;
  
  pSVar17 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                   in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname),
     iVar11 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_a0,pSVar17);
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar11 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
  }
  uVar10 = Control::get_theme_font_size(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa8));
  uVar15 = (ulong)uVar10;
  if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
     iVar11 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  local_58 = Control::get_theme_color(pSVar17,(StringName *)(SceneStringNames::singleton + 0xb0));
  local_50 = in_XMM1_Qa;
  if (*(long **)(pSVar17 + 0x9c8) == (long *)0x0) goto joined_r0x00109b58;
  (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x240))((CowData<char32_t> *)&local_78);
  if ((local_78 == (char *)0x0) || (uVar1 = *(undefined8 *)(local_78 + -8), (int)uVar1 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((int)uVar1 != 1) {
      local_98 = (char *)0x0;
      (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x248))((CowData<char32_t> *)&local_78);
      if ((local_78 == (char *)0x0) || (uVar1 = *(undefined8 *)(local_78 + -8), (int)uVar1 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00109e5d:
        (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x240))((CowData<char32_t> *)&local_78);
        if (local_98 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          local_98 = local_78;
          local_78 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if ((int)uVar1 == 1) goto LAB_00109e5d;
        (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x248))((CowData<char32_t> *)&local_80);
        (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x240))((CowData<char32_t> *)&local_88);
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"%s (%s)");
        vformat<String,String>
                  ((CowData<char32_t> *)&local_78,(String *)&local_90,(CowData<char32_t> *)&local_88
                   ,(CowData<char32_t> *)&local_80);
        pcVar7 = local_78;
        if (local_98 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          local_78 = (char *)0x0;
          local_98 = pcVar7;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      local_d8 = (String *)&local_98;
      plVar2 = *(long **)(pSVar17 + 0x9c8);
      pcVar3 = *(code **)(*plVar2 + 0x58);
      local_80 = 0;
      local_78 = "FontVariation";
      local_70 = 0xd;
      String::parse_latin1((StrRange *)&local_80);
      cVar9 = (*pcVar3)(plVar2,(StrRange *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (cVar9 != '\0') {
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"Variation");
        TTR((String *)&local_80,(String *)&local_90);
        operator+((char *)&local_78,(String *)&_LC174);
        String::operator+=(local_d8,(String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      pOVar6 = local_a0;
      pcVar3 = *(code **)(*(long *)local_a0 + 0x298);
      uVar21 = Control::get_size();
      fVar22 = (float)(**(code **)(*(long *)local_a0 + 0x218))(local_a0,uVar15);
      fVar23 = (float)EditorScale::get_scale();
      uVar19 = (ulong)uVar10;
      local_60 = 0;
      local_5c = fVar23 + fVar23 + fVar22;
      (*pcVar3)(uVar21,pOVar6,*(undefined8 *)(pSVar17 + 0x428),&local_60,local_d8,1,uVar19,&local_58
                ,3,0,0);
      local_88 = (char *)0x0;
      if ((_notification(int)::sample_base == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_notification(int)::sample_base), iVar11 != 0)) {
        _notification(int)::sample_base = 0;
        puVar8 = &_LC170;
        do {
          puVar13 = puVar8;
          puVar8 = puVar13 + 4;
        } while (*(int *)(puVar13 + 4) != 0);
        local_78 = "1";
        local_70 = (long)(puVar13 + -0x11883c) >> 2;
        String::parse_utf32((StrRange *)&_notification(int)::sample_base);
        __cxa_atexit(String::~String,&_notification(int)::sample_base,&__dso_handle);
        __cxa_guard_release(&_notification(int)::sample_base);
      }
      local_c8 = &local_58;
      local_d0 = &local_60;
      uVar21 = (undefined4)(uVar19 >> 0x20);
      if (_notification(int)::sample_base != 0) {
        lVar20 = 0;
        do {
          uVar21 = (undefined4)(uVar19 >> 0x20);
          lVar18 = *(long *)(_notification(int)::sample_base + -8);
          if (((int)lVar18 == 0) || ((int)lVar18 + -1 <= (int)lVar20)) break;
          if (lVar18 == lVar20) {
            puVar12 = &String::_null;
          }
          else {
            if (lVar18 <= lVar20) goto LAB_00109cec;
            puVar12 = (undefined8 *)(_notification(int)::sample_base + lVar20 * 4);
          }
          cVar9 = (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x2d0))
                            (*(long **)(pSVar17 + 0x9c8),*(undefined4 *)puVar12);
          if (cVar9 != '\0') {
            if (_notification(int)::sample_base == 0) {
              if (lVar20 != 0) {
                lVar18 = 0;
LAB_00109cec:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar18,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
LAB_0010a008:
              pwVar14 = (wchar32 *)&String::_null;
            }
            else {
              lVar18 = *(long *)(_notification(int)::sample_base + -8);
              if (lVar18 == lVar20) goto LAB_0010a008;
              if (lVar18 <= lVar20) goto LAB_00109cec;
              pwVar14 = (wchar32 *)(_notification(int)::sample_base + lVar20 * 4);
            }
            String::operator+=((String *)&local_88,*pwVar14);
          }
          uVar21 = (undefined4)(uVar19 >> 0x20);
          lVar20 = lVar20 + 1;
        } while (_notification(int)::sample_base != 0);
      }
      if ((local_88 == (char *)0x0) || (uVar10 = (uint)*(undefined8 *)(local_88 + -8), uVar10 < 2))
      {
        (**(code **)(**(long **)(pSVar17 + 0x9c8) + 0x2d8))((StrRange *)&local_80);
        String::substr((int)(CowData<char32_t> *)&local_78,(int)(StrRange *)&local_80);
        if (local_88 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_78;
          local_78 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (local_88 != (char *)0x0) {
          uVar10 = *(uint *)(local_88 + -8);
          goto LAB_00109a62;
        }
      }
      else {
LAB_00109a62:
        if (1 < uVar10) {
          plVar2 = *(long **)(pSVar17 + 0x9c8);
          pcVar3 = *(code **)(*plVar2 + 0x298);
          fVar22 = (float)EditorScale::get_scale();
          uVar24 = Control::get_size();
          fVar23 = (float)(**(code **)(*(long *)local_a0 + 0x218))(local_a0,uVar15);
          uVar16 = (undefined4)(uVar15 >> 0x20);
          plVar4 = *(long **)(pSVar17 + 0x9c8);
          pcVar5 = *(code **)(*plVar4 + 0x218);
          fVar25 = (float)EditorScale::get_scale();
          local_5c = (float)(*pcVar5)(plVar4,CONCAT44(uVar16,(int)(fVar25 * _LC175)));
          local_5c = local_5c + fVar23;
          local_60 = 0;
          (*pcVar3)(uVar24,plVar2,*(undefined8 *)(pSVar17 + 0x428),local_d0,
                    (CowData<char32_t> *)&local_88,1,CONCAT44(uVar21,(int)(_LC175 * fVar22)),
                    local_c8,3,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          goto joined_r0x00109b58;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    }
  }
  pOVar6 = local_a0;
  local_c8 = &local_58;
  local_d0 = &local_60;
  pcVar3 = *(code **)(*(long *)local_a0 + 0x298);
  local_50 = CONCAT44(_LC176 * local_50._4_4_,(undefined4)local_50);
  uVar21 = Control::get_size();
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = (char *)0x0;
  String::parse_latin1((String *)&local_88,"Unable to preview font");
  TTR((String *)&local_78,(String *)&local_88);
  fVar22 = (float)(**(code **)(*(long *)local_a0 + 0x218))(local_a0,uVar15);
  fVar23 = (float)EditorScale::get_scale();
  local_5c = fVar23 + fVar23 + fVar22;
  local_60 = 0;
  (*pcVar3)(uVar21,pOVar6,*(undefined8 *)(pSVar17 + 0x428),local_d0,(CowData<char32_t> *)&local_78,1
            ,uVar15,local_c8,3,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
joined_r0x00109b58:
  if (((local_a0 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_a0), cVar9 != '\0')) {
    (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
    Memory::free_static(local_a0,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FontPreview::_notification(int) */

void __thiscall FontPreview::_notification(FontPreview *this,int param_1)

{
  Callable *pCVar1;
  long in_FS_OFFSET;
  FontPreview aFStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xb) {
    pCVar1 = *(Callable **)(this + 0x9c8);
    if (pCVar1 != (Callable *)0x0) {
      create_custom_callable_function_pointer<FontPreview>
                (aFStack_38,(char *)this,(_func_void *)"&FontPreview::_preview_changed");
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable *)aFStack_38);
    }
  }
  else if (param_1 == 0x1e) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _notification((int)this);
      return;
    }
    goto LAB_0010a0e0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a0e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProperty::initialize_class() [clone .part.0] */

void EditorProperty::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
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
          if ((code *)PTR__bind_methods_00129010 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00129018 != Object::_bind_compatibility_methods)
        {
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
  if ((code *)PTR__bind_methods_00129020 != Container::_bind_methods) {
    EditorProperty::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyFontMetaOverride::EditorPropertyFontMetaOverride(bool) */

void __thiscall
EditorPropertyFontMetaOverride::EditorPropertyFontMetaOverride
          (EditorPropertyFontMetaOverride *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  RefCounted *this_00;
  Button *this_01;
  EditorLocaleDialog *this_02;
  CallableCustom *this_03;
  Object *pOVar7;
  long lVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  PopupMenu *local_a8;
  String local_90 [8];
  String local_88 [8];
  String local_80 [8];
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  this[0xba0] = (EditorPropertyFontMetaOverride)param_1;
  *(undefined ***)this = &PTR__initialize_classv_00120a88;
  *(undefined8 *)(this + 0xb88) = 0;
  *(undefined8 *)(this + 0xb98) = 0;
  this[0xba1] = (EditorPropertyFontMetaOverride)0x0;
  *(undefined8 *)(this + 0xba4) = 0x14;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb78) = (undefined1  [16])0x0;
  this_00 = (RefCounted *)operator_new(0x188,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00120520;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x180));
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar9 = *(Object **)(this + 0xb58);
    if (pOVar9 == (Object *)0x0) goto LAB_0010a741;
    *(undefined8 *)(this + 0xb58) = 0;
    cVar5 = RefCounted::unreference();
    if (cVar5 == '\0') goto LAB_0010a741;
    this_00 = (RefCounted *)0x0;
    cVar5 = predelete_handler(pOVar9);
    if (cVar5 == '\0') goto LAB_0010a741;
LAB_0010ad1a:
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
    pOVar7 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_0010a741;
  }
  else {
    pOVar9 = *(Object **)(this + 0xb58);
    pOVar7 = pOVar9;
    if (this_00 != (RefCounted *)pOVar9) {
      *(RefCounted **)(this + 0xb58) = this_00;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xb58) = 0;
      }
      pOVar7 = (Object *)this_00;
      if (((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) goto LAB_0010ad1a;
    }
  }
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_0010a741:
  local_70 = 0;
  local_68 = "interface/inspector/max_array_dictionary_items_per_page";
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xba4) = iVar6;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  this_01 = (Button *)operator_new(0xc10,"");
  local_68 = (undefined *)0x0;
  Button::Button(this_01,(String *)&local_68);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xb78) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb78),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb78),0));
  plVar1 = *(long **)(this + 0xb78);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyFontMetaOverride>
            ((EditorPropertyFontMetaOverride *)&local_68,(char *)this,
             (_func_void *)"&EditorPropertyFontMetaOverride::_edit_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xb78),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb78),0,0);
  EditorProperty::add_focusable((Control *)this);
  local_a8 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(local_a8);
  postinitialize_handler((Object *)local_a8);
  *(PopupMenu **)(this + 0xb80) = local_a8;
  if (this[0xba0] != (EditorPropertyFontMetaOverride)0x0) {
    TranslationServer::get_all_scripts();
    if (*(long *)(this + 0xb98) != local_60) {
      CowData<String>::_unref((CowData<String> *)(this + 0xb98));
      lVar8 = local_60;
      local_60 = 0;
      *(long *)(this + 0xb98) = lVar8;
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    lVar8 = *(long *)(this + 0xb98);
    uVar4 = 0;
    while (lVar8 != 0) {
      local_a8 = *(PopupMenu **)(this + 0xb80);
      if (*(long *)(lVar8 + -8) <= (long)uVar4) goto LAB_0010aaa5;
      local_70 = 0;
      local_68 = ")";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      if (*(long *)(this + 0xb98) == 0) {
LAB_0010acc0:
        lVar8 = 0;
LAB_0010acc3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar4,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = *(long *)(*(long *)(this + 0xb98) + -8);
      if (lVar8 <= (long)uVar4) goto LAB_0010acc3;
      local_68 = " (";
      local_78 = 0;
      local_60 = 2;
      String::parse_latin1((StrRange *)&local_78);
      if (*(long *)(this + 0xb98) == 0) goto LAB_0010acc0;
      lVar8 = *(long *)(*(long *)(this + 0xb98) + -8);
      if (lVar8 <= (long)uVar4) goto LAB_0010acc3;
      TranslationServer::get_script_name((String *)&local_68);
      String::operator+(local_80,(String *)&local_68);
      String::operator+(local_88,local_80);
      String::operator+(local_90,local_88);
      PopupMenu::add_item(local_a8,local_90,uVar4 & 0xffffffff,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      uVar4 = uVar4 + 1;
      lVar8 = *(long *)(this + 0xb98);
    }
    local_a8 = *(PopupMenu **)(this + 0xb80);
  }
LAB_0010aaa5:
  Node::add_child(this,local_a8,0,0);
  plVar1 = *(long **)(this + 0xb80);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyFontMetaOverride,int>
            ((EditorPropertyFontMetaOverride *)&local_68,(char *)this,
             (_func_void_int *)"&EditorPropertyFontMetaOverride::_add_script");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  this_02 = (EditorLocaleDialog *)operator_new(0xe20,"");
  EditorLocaleDialog::EditorLocaleDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(EditorLocaleDialog **)(this + 0xb88) = this_02;
  pcVar2 = *(code **)(*(long *)this_02 + 0x108);
  this_03 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_03);
  *(EditorPropertyFontMetaOverride **)(this_03 + 0x28) = this;
  *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_03 + 0x20) = &_LC0;
  *(undefined ***)this_03 = &PTR_hash_00122510;
  *(undefined8 *)(this_03 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_03 + 0x10) = 0;
  *(undefined8 *)(this_03 + 0x30) = uVar3;
  *(code **)(this_03 + 0x38) = _add_lang;
  CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
  *(char **)(this_03 + 0x20) = "EditorPropertyFontMetaOverride::_add_lang";
  Callable::Callable((Callable *)&local_68,this_03);
  StringName::StringName((StringName *)&local_70,"locale_selected",false);
  (*pcVar2)(this_02,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xb88),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginFontVariation::parse_property(Object*, Variant::Type, String const&,
   PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined8
EditorInspectorPluginFontVariation::parse_property
          (String *param_1,undefined8 param_2,undefined8 param_3,String *param_4)

{
  char cVar1;
  undefined8 uVar2;
  EditorPropertyFontMetaOverride *this;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::operator==(param_4,"variation_opentype");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_4,"opentype_features");
    if (cVar1 == '\0') {
      cVar1 = String::operator==(param_4,"language_support");
      if (cVar1 == '\0') {
        uVar2 = String::operator==(param_4,"script_support");
        if ((char)uVar2 == '\0') goto LAB_0010adec;
        local_38 = 0;
        this = (EditorPropertyFontMetaOverride *)operator_new(3000,"");
        EditorPropertyFontMetaOverride::EditorPropertyFontMetaOverride(this,true);
      }
      else {
        local_38 = 0;
        this = (EditorPropertyFontMetaOverride *)operator_new(3000,"");
        EditorPropertyFontMetaOverride::EditorPropertyFontMetaOverride(this,false);
      }
    }
    else {
      local_38 = 0;
      this = (EditorPropertyFontMetaOverride *)operator_new(0xc30,"");
      EditorPropertyOTFeatures::EditorPropertyOTFeatures((EditorPropertyOTFeatures *)this);
    }
  }
  else {
    local_38 = 0;
    this = (EditorPropertyFontMetaOverride *)operator_new(0xb90,"");
    EditorPropertyOTVariation::EditorPropertyOTVariation((EditorPropertyOTVariation *)this);
  }
  postinitialize_handler((Object *)this);
  EditorInspectorPlugin::add_property_editor(param_1,(Control *)param_4,SUB81(this,0),(String *)0x0)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  uVar2 = 1;
LAB_0010adec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::EditorPropertyFontNamesArray() */

void __thiscall
EditorPropertyFontNamesArray::EditorPropertyFontNamesArray(EditorPropertyFontNamesArray *this)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  String *this_00;
  char cVar4;
  PopupMenu *this_01;
  long lVar5;
  long *plVar6;
  CallableCustom *this_02;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  CowData<char32_t> *pCVar11;
  CowData *pCVar12;
  ulong uVar13;
  CowData<char32_t> *pCVar14;
  CowData<char32_t> *pCVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_98;
  CowData<String> *local_90;
  long local_68;
  long local_60;
  char *local_58;
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPropertyArray::EditorPropertyArray((EditorPropertyArray *)this);
  *(undefined8 *)(this + 0xc10) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00121c80;
  this_01 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_01);
  postinitialize_handler((Object *)this_01);
  *(PopupMenu **)(this + 0xc10) = this_01;
  local_60 = 0;
  local_58 = "Sans-Serif";
  local_50[0] = (String *)0xa;
  String::parse_latin1((StrRange *)&local_60);
  PopupMenu::add_item(this_01,(StrRange *)&local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar1 = *(undefined8 *)(this + 0xc10);
  local_60 = 0;
  local_58 = "Serif";
  local_50[0] = (String *)0x5;
  String::parse_latin1((StrRange *)&local_60);
  PopupMenu::add_item(uVar1,(StrRange *)&local_60,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar1 = *(undefined8 *)(this + 0xc10);
  local_60 = 0;
  local_58 = "Monospace";
  local_50[0] = (String *)0x9;
  String::parse_latin1((StrRange *)&local_60);
  PopupMenu::add_item(uVar1,(StrRange *)&local_60,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar1 = *(undefined8 *)(this + 0xc10);
  local_60 = 0;
  local_58 = "Fantasy";
  local_50[0] = (String *)0x7;
  String::parse_latin1((StrRange *)&local_60);
  PopupMenu::add_item(uVar1,(StrRange *)&local_60,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar1 = *(undefined8 *)(this + 0xc10);
  local_60 = 0;
  local_58 = "Cursive";
  local_50[0] = (String *)&DAT_00000007;
  String::parse_latin1((StrRange *)&local_60);
  PopupMenu::add_item(uVar1,(StrRange *)&local_60,4,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (char *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0xc10),(int)(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  lVar5 = OS::get_singleton();
  if (lVar5 != 0) {
    plVar6 = (long *)OS::get_singleton();
    if (*(code **)(*plVar6 + 0xe8) == OS::get_system_fonts) {
      local_50[0] = (String *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0xe8))();
      if ((local_50[0] != (String *)0x0) && (lVar5 = *(long *)(local_50[0] + -8), lVar5 != 0)) {
        if (1 < *(ulong *)(local_50[0] + -0x10)) {
          if (local_50[0] == (String *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar16 = *(long *)(local_50[0] + -8);
          uVar13 = 0x10;
          if (lVar16 * 8 != 0) {
            uVar13 = lVar16 * 8 - 1;
            uVar13 = uVar13 | uVar13 >> 1;
            uVar13 = uVar13 | uVar13 >> 2;
            uVar13 = uVar13 | uVar13 >> 4;
            uVar13 = uVar13 | uVar13 >> 8;
            uVar13 = uVar13 | uVar13 >> 0x10;
            uVar13 = (uVar13 | uVar13 >> 0x20) + 0x11;
          }
          puVar9 = (undefined8 *)Memory::alloc_static(uVar13,false);
          if (puVar9 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            lVar10 = 0;
            *puVar9 = 1;
            puVar9[1] = lVar16;
            pCVar15 = (CowData<char32_t> *)(puVar9 + 2);
            if (lVar16 != 0) {
              do {
                *(undefined8 *)pCVar15 = 0;
                if (*(long *)(local_50[0] + lVar10 * 8) != 0) {
                  CowData<char32_t>::_ref(pCVar15,(CowData *)(local_50[0] + lVar10 * 8));
                }
                lVar10 = lVar10 + 1;
                pCVar15 = pCVar15 + 8;
              } while (lVar16 != lVar10);
            }
            CowData<String>::_unref((CowData<String> *)local_50);
            local_50[0] = (String *)(puVar9 + 2);
          }
        }
        this_00 = local_50[0];
        if (lVar5 == 1) {
          SortArray<String,_DefaultComparator<String>,true>::introsort(0,1,local_50[0],0);
        }
        else {
          lVar10 = 0;
          lVar16 = lVar5;
          do {
            lVar16 = lVar16 >> 1;
            lVar10 = lVar10 + 1;
          } while (lVar16 != 1);
          SortArray<String,_DefaultComparator<String>,true>::introsort
                    (0,lVar5,local_50[0],lVar10 * 2);
          pCVar15 = (CowData<char32_t> *)(this_00 + 8);
          if (lVar5 < 0x11) {
            lVar16 = 1;
            pCVar14 = pCVar15;
            do {
              local_60 = 0;
              plVar6 = (long *)(*(long *)pCVar14 + -0x10);
              if (*(long *)pCVar14 != 0) {
                do {
                  lVar10 = *plVar6;
                  if (lVar10 == 0) goto LAB_0010b688;
                  LOCK();
                  lVar8 = *plVar6;
                  bVar17 = lVar10 == lVar8;
                  if (bVar17) {
                    *plVar6 = lVar10 + 1;
                    lVar8 = lVar10;
                  }
                  UNLOCK();
                } while (!bVar17);
                if (lVar8 != -1) {
                  local_60 = *(long *)pCVar14;
                }
              }
LAB_0010b688:
              cVar4 = String::operator<((String *)&local_60,this_00);
              pCVar12 = (CowData *)pCVar14;
              lVar10 = lVar16;
              if (cVar4 == '\0') {
                local_68 = 0;
                if (local_60 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_60);
                }
                while( true ) {
                  pCVar11 = (CowData<char32_t> *)pCVar12;
                  pCVar12 = (CowData *)(pCVar11 + -8);
                  cVar4 = String::operator<((String *)&local_68,(String *)pCVar12);
                  if (cVar4 == '\0') break;
                  if (pCVar11 == pCVar15) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    break;
                  }
                  if (*(long *)pCVar11 != *(long *)(pCVar11 + -8)) {
                    CowData<char32_t>::_ref(pCVar11,pCVar12);
                  }
                }
                if (*(long *)pCVar11 != local_68) {
                  CowData<char32_t>::_ref(pCVar11,(CowData *)&local_68);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              }
              else {
                do {
                  if (*(long *)pCVar12 != *(long *)((CowData<char32_t> *)pCVar12 + -8)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar12,
                               (CowData *)((CowData<char32_t> *)pCVar12 + -8));
                  }
                  lVar10 = lVar10 + -1;
                  pCVar12 = (CowData *)((CowData<char32_t> *)pCVar12 + -8);
                } while (lVar10 != 0);
                if (*(long *)this_00 != local_60) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)&local_60);
                }
              }
              lVar10 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar6 = (long *)(local_60 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              lVar16 = lVar16 + 1;
              pCVar14 = pCVar14 + 8;
            } while (lVar5 != lVar16);
          }
          else {
            local_98 = 1;
            pCVar14 = pCVar15;
            do {
              local_60 = 0;
              plVar6 = (long *)(*(long *)pCVar14 + -0x10);
              if (*(long *)pCVar14 != 0) {
                do {
                  lVar16 = *plVar6;
                  if (lVar16 == 0) goto LAB_0010b326;
                  LOCK();
                  lVar10 = *plVar6;
                  bVar17 = lVar16 == lVar10;
                  if (bVar17) {
                    *plVar6 = lVar16 + 1;
                    lVar10 = lVar16;
                  }
                  UNLOCK();
                } while (!bVar17);
                if (lVar10 != -1) {
                  local_60 = *(long *)pCVar14;
                }
              }
LAB_0010b326:
              cVar4 = String::operator<((String *)&local_60,this_00);
              pCVar11 = pCVar14;
              if (cVar4 == '\0') {
                local_68 = 0;
                pCVar12 = (CowData *)pCVar14;
                if (local_60 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_60);
                }
                while( true ) {
                  pCVar11 = (CowData<char32_t> *)pCVar12;
                  pCVar12 = (CowData *)(pCVar11 + -8);
                  cVar4 = String::operator<((String *)&local_68,(String *)pCVar12);
                  if (cVar4 == '\0') break;
                  if (pCVar11 == pCVar15) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    break;
                  }
                  if (*(long *)pCVar11 != *(long *)(pCVar11 + -8)) {
                    CowData<char32_t>::_ref(pCVar11,pCVar12);
                  }
                }
                if (*(long *)pCVar11 != local_68) {
                  CowData<char32_t>::_ref(pCVar11,(CowData *)&local_68);
                }
                lVar16 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar6 = (long *)(local_68 + -0x10);
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
              }
              else {
                do {
                  pCVar12 = (CowData *)(pCVar11 + -8);
                  if (*(long *)pCVar11 != *(long *)(pCVar11 + -8)) {
                    CowData<char32_t>::_ref(pCVar11,pCVar12);
                  }
                  pCVar11 = (CowData<char32_t> *)pCVar12;
                } while (pCVar12 != (CowData *)this_00);
                if (*(long *)this_00 != local_60) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)&local_60);
                }
              }
              lVar16 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar6 = (long *)(local_60 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
                }
              }
              local_98 = local_98 + 1;
              pCVar14 = pCVar14 + 8;
            } while (local_98 != 0x10);
            pCVar15 = (CowData<char32_t> *)(this_00 + 0x80);
            lVar16 = 0x10;
            do {
              local_60 = 0;
              plVar6 = (long *)(*(long *)pCVar15 + -0x10);
              pCVar12 = (CowData *)pCVar15;
              lVar10 = lVar16;
              if (*(long *)pCVar15 != 0) {
                do {
                  lVar8 = *plVar6;
                  if (lVar8 == 0) goto LAB_0010b51c;
                  LOCK();
                  lVar7 = *plVar6;
                  bVar17 = lVar8 == lVar7;
                  if (bVar17) {
                    *plVar6 = lVar8 + 1;
                    lVar7 = lVar8;
                  }
                  UNLOCK();
                } while (!bVar17);
                if (lVar7 != -1) {
                  local_60 = *(long *)pCVar15;
                }
              }
LAB_0010b51c:
              pCVar14 = (CowData<char32_t> *)pCVar12;
              lVar10 = lVar10 + -1;
              pCVar12 = (CowData *)(pCVar14 + -8);
              cVar4 = String::operator<((String *)&local_60,(String *)pCVar12);
              if (cVar4 != '\0') {
                if (lVar10 == 0) {
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  goto LAB_0010b563;
                }
                if (*(long *)pCVar14 != *(long *)(pCVar14 + -8)) {
                  CowData<char32_t>::_ref(pCVar14,pCVar12);
                }
                goto LAB_0010b51c;
              }
LAB_0010b563:
              if (*(long *)pCVar14 != local_60) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_60);
              }
              lVar10 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar6 = (long *)(local_60 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              lVar16 = lVar16 + 1;
              pCVar15 = pCVar15 + 8;
            } while (lVar5 != lVar16);
          }
        }
        if (local_50[0] != (String *)0x0) {
          lVar5 = 0;
          do {
            if (*(long *)(local_50[0] + -8) <= lVar5) break;
            lVar16 = lVar5 * 8;
            iVar3 = (int)lVar5;
            lVar5 = lVar5 + 1;
            PopupMenu::add_item(*(undefined8 *)(this + 0xc10),local_50[0] + lVar16,iVar3 + 6,0);
          } while (local_50[0] != (String *)0x0);
        }
      }
    }
    local_90 = (CowData<String> *)local_50;
    CowData<String>::_unref(local_90);
  }
  Node::add_child(this,*(undefined8 *)(this + 0xc10),0,0);
  plVar6 = *(long **)(this + 0xc10);
  pcVar2 = *(code **)(*plVar6 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(EditorPropertyFontNamesArray **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC0;
  *(undefined ***)this_02 = &PTR_hash_00122b40;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar1;
  *(code **)(this_02 + 0x38) = _add_font;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorPropertyFontNamesArray::_add_font";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar2)(plVar6,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPluginSystemFont::parse_property(Object*, Variant::Type, String const&,
   PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

undefined4
EditorInspectorPluginSystemFont::parse_property
          (String *param_1,undefined8 param_2,undefined4 param_3,String *param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  EditorPropertyFontNamesArray *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = String::operator==(param_4,"font_names");
  if ((char)uVar1 != '\0') {
    this = (EditorPropertyFontNamesArray *)operator_new(0xc18,"");
    EditorPropertyFontNamesArray::EditorPropertyFontNamesArray(this);
    postinitialize_handler((Object *)this);
    EditorPropertyArray::setup(this,param_3,param_6);
    local_48 = 0;
    EditorInspectorPlugin::add_property_editor
              (param_1,(Control *)param_4,SUB81(this,0),(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* OS::get_system_fonts() const */

OS * __thiscall OS::get_system_fonts(OS *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
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



/* EditorPropertyFontMetaObject::is_class_ptr(void*) const */

uint __thiscall
EditorPropertyFontMetaObject::is_class_ptr(EditorPropertyFontMetaObject *this,void *param_1)

{
  return (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPropertyFontMetaObject::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyFontMetaObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPropertyFontMetaObject::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyFontMetaObject::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPropertyFontMetaObject::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyFontMetaObject::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPropertyFontMetaObject::_notificationv(int, bool) */

void EditorPropertyFontMetaObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorPropertyFontOTObject::is_class_ptr(void*) const */

uint __thiscall
EditorPropertyFontOTObject::is_class_ptr(EditorPropertyFontOTObject *this,void *param_1)

{
  return (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPropertyFontOTObject::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyFontOTObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPropertyFontOTObject::_notificationv(int, bool) */

void EditorPropertyFontOTObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorInspectorPluginFontVariation::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginFontVariation::is_class_ptr
          (EditorInspectorPluginFontVariation *this,void *param_1)

{
  return (uint)CONCAT71(0x122d,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginFontVariation::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginFontVariation::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontVariation::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginFontVariation::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontVariation::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginFontVariation::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginFontVariation::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginFontVariation::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginFontVariation::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginFontVariation::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontVariation::_notificationv(int, bool) */

void EditorInspectorPluginFontVariation::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FontPreview::is_class_ptr(void*) const */

uint __thiscall FontPreview::is_class_ptr(FontPreview *this,void *param_1)

{
  return (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginFontPreview::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginFontPreview::is_class_ptr(EditorInspectorPluginFontPreview *this,void *param_1)

{
  return (uint)CONCAT71(0x122d,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginFontPreview::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginFontPreview::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontPreview::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginFontPreview::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontPreview::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginFontPreview::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginFontPreview::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginFontPreview::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginFontPreview::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginFontPreview::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginFontPreview::_notificationv(int, bool) */

void EditorInspectorPluginFontPreview::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorInspectorPluginSystemFont::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginSystemFont::is_class_ptr(EditorInspectorPluginSystemFont *this,void *param_1)

{
  return (uint)CONCAT71(0x122d,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginSystemFont::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginSystemFont::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSystemFont::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginSystemFont::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSystemFont::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginSystemFont::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginSystemFont::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginSystemFont::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginSystemFont::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginSystemFont::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginSystemFont::_notificationv(int, bool) */

void EditorInspectorPluginSystemFont::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FontEditorPlugin::is_class_ptr(void*) const */

uint __thiscall FontEditorPlugin::is_class_ptr(FontEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x122d,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FontEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 FontEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FontEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 FontEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FontEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 FontEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FontEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FontEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<FontPreview, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FontPreview,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FontPreview,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<FontPreview, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FontPreview,void>::get_argument_count
          (CallableCustomMethodPointer<FontPreview,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::
get_argument_count(CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FontPreview, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FontPreview,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FontPreview,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyFontMetaOverride::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorPropertyFontMetaOverride::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyOTVariation::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyOTVariation::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyOTFeatures::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyOTFeatures::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* FontPreview::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FontPreview::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyFontNamesArray::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyFontNamesArray::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00129028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyFontMetaOverride::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyFontMetaOverride::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyOTVariation::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyOTVariation::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyOTFeatures::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyOTFeatures::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* FontPreview::_property_can_revertv(StringName const&) const */

undefined8 FontPreview::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyFontNamesArray::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyFontNamesArray::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* FontEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void FontEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00129038 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject() */

void __thiscall
EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject(EditorPropertyFontMetaObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120520;
  Dictionary::~Dictionary((Dictionary *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* EditorPropertyFontOTObject::~EditorPropertyFontOTObject() */

void __thiscall
EditorPropertyFontOTObject::~EditorPropertyFontOTObject(EditorPropertyFontOTObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120680;
  Dictionary::~Dictionary((Dictionary *)(this + 0x188));
  Dictionary::~Dictionary((Dictionary *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* EditorPropertyFontNamesArray::_get_class_namev() const */

undefined8 * EditorPropertyFontNamesArray::_get_class_namev(void)

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
LAB_0010cd83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cd83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPropertyFontNamesArray");
      goto LAB_0010cdee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyFontNamesArray");
LAB_0010cdee:
  return &_get_class_namev()::_class_name_static;
}



/* FontEditorPlugin::_notificationv(int, bool) */

void __thiscall FontEditorPlugin::_notificationv(FontEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00129040 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00129040 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this)

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
      goto LAB_0010cf8d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cf8d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cf8d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject() */

void __thiscall
EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject(EditorPropertyFontMetaObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120520;
  Dictionary::~Dictionary((Dictionary *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x188);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
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
      goto LAB_0010d0dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d0dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d0dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this)

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
      goto LAB_0010d1dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d1dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d1dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this)

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
      goto LAB_0010d2dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d2dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d2dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
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
      goto LAB_0010d3dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d3dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d3dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
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
      goto LAB_0010d4dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d4dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d4dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this)

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
      goto LAB_0010d5dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d5dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d5dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::
get_object(CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
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
      goto LAB_0010d6dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d6dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d6dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::get_object
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
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
      goto LAB_0010d7dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d7dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d7dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this)

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
      goto LAB_0010d8dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d8dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d8dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
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
      goto LAB_0010d9dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d9dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d9dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
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
      goto LAB_0010dadd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dadd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dadd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this)

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
      goto LAB_0010dbdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dbdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dbdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<FontPreview, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FontPreview,void>::get_object
          (CallableCustomMethodPointer<FontPreview,void> *this)

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
      goto LAB_0010dcdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dcdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dcdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this)

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
      goto LAB_0010dddd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dddd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dddd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this)

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
      goto LAB_0010dedd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dedd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dedd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this)

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
      goto LAB_0010dfdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010dfdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010dfdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorPropertyFontOTObject::~EditorPropertyFontOTObject() */

void __thiscall
EditorPropertyFontOTObject::~EditorPropertyFontOTObject(EditorPropertyFontOTObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120680;
  Dictionary::~Dictionary((Dictionary *)(this + 0x188));
  Dictionary::~Dictionary((Dictionary *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,400);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* FontPreview::_validate_propertyv(PropertyInfo&) const */

void FontPreview::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyOTFeatures::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyOTFeatures::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyFontMetaOverride::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyFontMetaOverride::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyFontNamesArray::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyFontNamesArray::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyOTVariation::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyOTVariation::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129050 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00129050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorPropertyFontMetaOverride::is_class_ptr(void*) const */

uint EditorPropertyFontMetaOverride::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122d,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyOTFeatures::is_class_ptr(void*) const */

uint EditorPropertyOTFeatures::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122d,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyOTVariation::is_class_ptr(void*) const */

uint EditorPropertyOTVariation::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122d,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyFontNamesArray::is_class_ptr(void*) const */

ulong EditorPropertyFontNamesArray::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyArray::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x122d,in_RSI == &EditorPropertyArray::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x122e,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122d,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122e,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyOTFeatures::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyOTFeatures::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyFontMetaOverride::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyFontMetaOverride::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyFontNamesArray::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyFontNamesArray::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyOTVariation::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyOTVariation::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FontPreview::_setv(StringName const&, Variant const&) */

undefined8 FontPreview::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ea68) */
/* EditorPropertyFontNamesArray::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyFontNamesArray::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ead8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010eb48) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ebb8) */
/* FontPreview::_getv(StringName const&, Variant&) const */

undefined8 FontPreview::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ec28) */
/* EditorPropertyFontMetaOverride::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyFontMetaOverride::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ec98) */
/* EditorPropertyOTFeatures::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyOTFeatures::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ed08) */
/* EditorPropertyOTVariation::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyOTVariation::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* FontPreview::~FontPreview() */

void __thiscall FontPreview::~FontPreview(FontPreview *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00121788;
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* FontPreview::~FontPreview() */

void __thiscall FontPreview::~FontPreview(FontPreview *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00121788;
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0x9d0);
  return;
}



/* FontEditorPlugin::get_plugin_name() const */

FontEditorPlugin * __thiscall FontEditorPlugin::get_plugin_name(FontEditorPlugin *this)

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



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BoxContainer::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010eee0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010eee0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BoxContainer::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ef40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ef40:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BoxContainer::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efa0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010efa0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BoxContainer::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f010;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010f010:
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
    if ((code *)PTR__notification_00129068 != Container::_notification) {
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
  if ((code *)PTR__notification_00129068 == Container::_notification) {
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
    if ((code *)PTR__notification_00129068 != Container::_notification) {
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
  if ((code *)PTR__notification_00129068 == Container::_notification) {
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



/* EditorPropertyFontMetaOverride::_get_class_namev() const */

undefined8 * EditorPropertyFontMetaOverride::_get_class_namev(void)

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
LAB_0010f333:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f333;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPropertyFontMetaOverride");
      goto LAB_0010f39e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyFontMetaOverride")
  ;
LAB_0010f39e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginFontPreview::_get_class_namev() const */

undefined8 * EditorInspectorPluginFontPreview::_get_class_namev(void)

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
LAB_0010f433:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f433;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginFontPreview");
      goto LAB_0010f49e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginFontPreview");
LAB_0010f49e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyFontMetaObject::_get_class_namev() const */

undefined8 * EditorPropertyFontMetaObject::_get_class_namev(void)

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
LAB_0010f533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPropertyFontMetaObject");
      goto LAB_0010f59e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyFontMetaObject");
LAB_0010f59e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyFontOTObject::_get_class_namev() const */

undefined8 * EditorPropertyFontOTObject::_get_class_namev(void)

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
LAB_0010f623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyFontOTObject")
      ;
      goto LAB_0010f68e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyFontOTObject");
LAB_0010f68e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginFontVariation::_get_class_namev() const */

undefined8 * EditorInspectorPluginFontVariation::_get_class_namev(void)

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
LAB_0010f723:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f723;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginFontVariation");
      goto LAB_0010f78e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginFontVariation");
LAB_0010f78e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginSystemFont::_get_class_namev() const */

undefined8 * EditorInspectorPluginSystemFont::_get_class_namev(void)

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
LAB_0010f823:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f823;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginSystemFont");
      goto LAB_0010f88e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginSystemFont"
            );
LAB_0010f88e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyOTFeatures::_get_class_namev() const */

undefined8 * EditorPropertyOTFeatures::_get_class_namev(void)

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
LAB_0010f913:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f913;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyOTFeatures");
      goto LAB_0010f97e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyOTFeatures");
LAB_0010f97e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyOTVariation::_get_class_namev() const */

undefined8 * EditorPropertyOTVariation::_get_class_namev(void)

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
LAB_0010fa03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fa03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyOTVariation");
      goto LAB_0010fa6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyOTVariation");
LAB_0010fa6e:
  return &_get_class_namev()::_class_name_static;
}



/* FontPreview::_get_class_namev() const */

undefined8 * FontPreview::_get_class_namev(void)

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
LAB_0010fae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FontPreview");
      goto LAB_0010fb4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FontPreview");
LAB_0010fb4e:
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
LAB_0010fbd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fbd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010fc3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010fc3e:
  return &_get_class_namev()::_class_name_static;
}



/* FontEditorPlugin::_get_class_namev() const */

undefined8 * FontEditorPlugin::_get_class_namev(void)

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
LAB_0010fcc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fcc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FontEditorPlugin");
      goto LAB_0010fd2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FontEditorPlugin");
LAB_0010fd2e:
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
LAB_0010fda3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fda3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010fe0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010fe0e:
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
LAB_0010fe93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fe93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010fefe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010fefe:
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



/* EditorPropertyOTVariation::get_class() const */

void EditorPropertyOTVariation::get_class(void)

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



/* EditorPropertyOTFeatures::get_class() const */

void EditorPropertyOTFeatures::get_class(void)

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



/* FontEditorPlugin::get_class() const */

void FontEditorPlugin::get_class(void)

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



/* EditorInspectorPluginFontVariation::get_class() const */

void EditorInspectorPluginFontVariation::get_class(void)

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



/* EditorPropertyFontOTObject::get_class() const */

void EditorPropertyFontOTObject::get_class(void)

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



/* EditorPropertyFontMetaObject::get_class() const */

void EditorPropertyFontMetaObject::get_class(void)

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



/* FontPreview::get_class() const */

void FontPreview::get_class(void)

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



/* EditorPropertyFontMetaOverride::get_class() const */

void EditorPropertyFontMetaOverride::get_class(void)

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



/* EditorPropertyFontNamesArray::get_class() const */

void EditorPropertyFontNamesArray::get_class(void)

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



/* EditorInspectorPluginSystemFont::get_class() const */

void EditorInspectorPluginSystemFont::get_class(void)

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



/* EditorInspectorPluginFontPreview::get_class() const */

void EditorInspectorPluginFontPreview::get_class(void)

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
    if (cVar5 != '\0') goto LAB_00110bdb;
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
      if (cVar5 != '\0') goto LAB_00110bdb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00110bdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontOTObject::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyFontOTObject::is_class(EditorPropertyFontOTObject *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00110e0b;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyFontOTObject");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110e0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginSystemFont::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginSystemFont::is_class(EditorInspectorPluginSystemFont *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00110f7b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginSystemFont");
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
      if (cVar5 != '\0') goto LAB_00110f7b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_001110b8;
    }
  }
LAB_00110f7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001110b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginFontVariation::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginFontVariation::is_class
          (EditorInspectorPluginFontVariation *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001111bb;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginFontVariation");
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
      if (cVar5 != '\0') goto LAB_001111bb;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_001112f8;
    }
  }
LAB_001111bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001112f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginFontPreview::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginFontPreview::is_class(EditorInspectorPluginFontPreview *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001113fb;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginFontPreview");
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
      if (cVar5 != '\0') goto LAB_001113fb;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00111538;
    }
  }
LAB_001113fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaObject::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyFontMetaObject::is_class(EditorPropertyFontMetaObject *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001115af;
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
LAB_001115af:
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
    if (cVar5 != '\0') goto LAB_00111663;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyFontMetaObject");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111663:
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011182b;
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
      if (cVar5 != '\0') goto LAB_0011182b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011182b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00111a40) */
/* EditorProperty::_notificationv(int, bool) */

void __thiscall EditorProperty::_notificationv(EditorProperty *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00129070 != Container::_notification) {
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
  if ((code *)PTR__notification_00129070 == Container::_notification) {
    return;
  }
  EditorProperty::_notification(iVar1);
  return;
}



/* EditorPropertyOTVariation::_notificationv(int, bool) */

void __thiscall
EditorPropertyOTVariation::_notificationv(EditorPropertyOTVariation *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorProperty::_notificationv((EditorProperty *)this,param_1,true);
    return;
  }
  EditorProperty::_notificationv((EditorProperty *)this,param_1,false);
  return;
}



/* EditorPropertyFontNamesArray::_notificationv(int, bool) */

void __thiscall
EditorPropertyFontNamesArray::_notificationv
          (EditorPropertyFontNamesArray *this,int param_1,bool param_2)

{
  if (param_2) {
    if ((code *)PTR__notification_00129078 != EditorProperty::_notification) {
      EditorPropertyArray::_notification((int)this);
    }
    EditorProperty::_notificationv((EditorProperty *)this,param_1,true);
    return;
  }
  EditorProperty::_notificationv((EditorProperty *)this,param_1,false);
  if ((code *)PTR__notification_00129078 != EditorProperty::_notification) {
    EditorPropertyArray::_notification((int)this);
    return;
  }
  return;
}



/* EditorPropertyFontMetaOverride::_notificationv(int, bool) */

void __thiscall
EditorPropertyFontMetaOverride::_notificationv
          (EditorPropertyFontMetaOverride *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    EditorProperty::_notificationv((EditorProperty *)this,param_1,true);
    return;
  }
  EditorProperty::_notificationv((EditorProperty *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* EditorPropertyOTFeatures::_notificationv(int, bool) */

void __thiscall
EditorPropertyOTFeatures::_notificationv(EditorPropertyOTFeatures *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    EditorProperty::_notificationv((EditorProperty *)this,param_1,true);
    return;
  }
  EditorProperty::_notificationv((EditorProperty *)this,param_1,false);
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



/* Callable create_custom_callable_function_pointer<EditorPropertyFontMetaOverride,
   int>(EditorPropertyFontMetaOverride*, char const*, void (EditorPropertyFontMetaOverride::*)(int))
    */

EditorPropertyFontMetaOverride *
create_custom_callable_function_pointer<EditorPropertyFontMetaOverride,int>
          (EditorPropertyFontMetaOverride *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00122240;
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
   create_custom_callable_function_pointer<EditorPropertyFontMetaOverride>(EditorPropertyFontMetaOverride*,
   char const*, void (EditorPropertyFontMetaOverride::*)()) */

EditorPropertyFontMetaOverride *
create_custom_callable_function_pointer<EditorPropertyFontMetaOverride>
          (EditorPropertyFontMetaOverride *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00122480;
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



/* void Ref<EditorPropertyFontOTObject>::instantiate<>() */

void __thiscall
Ref<EditorPropertyFontOTObject>::instantiate<>(Ref<EditorPropertyFontOTObject> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(400,"");
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00120680;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x180));
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x188));
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
    if (this_00 == (RefCounted *)pOVar3) goto LAB_001123b5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001123b5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_001123b5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorPropertyOTFeatures,
   int>(EditorPropertyOTFeatures*, char const*, void (EditorPropertyOTFeatures::*)(int)) */

EditorPropertyOTFeatures *
create_custom_callable_function_pointer<EditorPropertyOTFeatures,int>
          (EditorPropertyOTFeatures *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001227e0;
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
   create_custom_callable_function_pointer<EditorPropertyOTFeatures>(EditorPropertyOTFeatures*, char
   const*, void (EditorPropertyOTFeatures::*)()) */

EditorPropertyOTFeatures *
create_custom_callable_function_pointer<EditorPropertyOTFeatures>
          (EditorPropertyOTFeatures *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00122a20;
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



/* Callable create_custom_callable_function_pointer<FontPreview>(FontPreview*, char const*, void
   (FontPreview::*)()) */

FontPreview *
create_custom_callable_function_pointer<FontPreview>
          (FontPreview *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00122ab0;
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



/* EditorPropertyFontMetaObject::_setv(StringName const&, Variant const&) */

void __thiscall
EditorPropertyFontMetaObject::_setv
          (EditorPropertyFontMetaObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* EditorPropertyFontMetaObject::_getv(StringName const&, Variant&) const */

void __thiscall
EditorPropertyFontMetaObject::_getv
          (EditorPropertyFontMetaObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* EditorPropertyFontOTObject::_setv(StringName const&, Variant const&) */

void __thiscall
EditorPropertyFontOTObject::_setv
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* EditorPropertyFontOTObject::_getv(StringName const&, Variant&) const */

void __thiscall
EditorPropertyFontOTObject::_getv
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* EditorPropertyFontOTObject::_property_can_revertv(StringName const&) const */

void __thiscall
EditorPropertyFontOTObject::_property_can_revertv
          (EditorPropertyFontOTObject *this,StringName *param_1)

{
  _property_can_revert(this,param_1);
  return;
}



/* EditorPropertyFontOTObject::_property_get_revertv(StringName const&, Variant&) const */

void __thiscall
EditorPropertyFontOTObject::_property_get_revertv
          (EditorPropertyFontOTObject *this,StringName *param_1,Variant *param_2)

{
  _property_get_revert(this,param_1,param_2);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::RefCounted;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112a6a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00112a6a:
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



/* FontEditorPlugin::~FontEditorPlugin() */

void __thiscall FontEditorPlugin::~FontEditorPlugin(FontEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001207e0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* FontEditorPlugin::~FontEditorPlugin() */

void __thiscall FontEditorPlugin::~FontEditorPlugin(FontEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001207e0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* EditorPropertyFontOTObject::_initialize_classv() */

void EditorPropertyFontOTObject::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00129080 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyFontOTObject";
    local_60 = 0;
    local_40 = 0x1a;
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



/* WARNING: Removing unreachable block (ram,0x00112ec8) */
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



/* WARNING: Removing unreachable block (ram,0x00113190) */
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



/* WARNING: Removing unreachable block (ram,0x00113480) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
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



/* WARNING: Removing unreachable block (ram,0x00113770) */
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



/* WARNING: Removing unreachable block (ram,0x00113a28) */
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
        if (pvVar5 == (void *)0x0) goto LAB_00113d54;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00113d54:
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
  *(code **)this = EditorProperty::EditorProperty;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113e0d;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_00113e0d:
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
        if (pvVar4 == (void *)0x0) goto LAB_00113ee2;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_00113ee2:
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
  *(code **)this = BoxContainer::_notification;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113f85;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113f85:
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



/* EditorPropertyOTFeatures::~EditorPropertyOTFeatures() */

void __thiscall EditorPropertyOTFeatures::~EditorPropertyOTFeatures(EditorPropertyOTFeatures *this)

{
  EditorPropertyOTFeatures *pEVar1;
  long *plVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  EditorPropertyOTFeatures *pEVar6;
  
  pEVar6 = this + 0xc18;
  *(undefined ***)this = &PTR__initialize_classv_00121228;
  do {
    pEVar1 = pEVar6 + -8;
    pEVar6 = pEVar6 + -8;
    if (*(long *)pEVar1 != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)pEVar1 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *(long *)pEVar6;
        *(long *)pEVar6 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  } while (pEVar6 != this + 0xbd0);
  if (*(long *)(this + 0xb58) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0xb58);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        EditorProperty::~EditorProperty((EditorProperty *)this);
        return;
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyOTVariation::~EditorPropertyOTVariation() */

void __thiscall
EditorPropertyOTVariation::~EditorPropertyOTVariation(EditorPropertyOTVariation *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120e58;
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
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



/* EditorPropertyOTVariation::~EditorPropertyOTVariation() */

void __thiscall
EditorPropertyOTVariation::~EditorPropertyOTVariation(EditorPropertyOTVariation *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120e58;
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyOTFeatures::~EditorPropertyOTFeatures() */

void __thiscall EditorPropertyOTFeatures::~EditorPropertyOTFeatures(EditorPropertyOTFeatures *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  EditorPropertyOTFeatures *pEVar5;
  
  pEVar5 = this + 0xc10;
  *(undefined ***)this = &PTR__initialize_classv_00121228;
  do {
    if (*(long *)pEVar5 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pEVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)pEVar5;
        *(long *)pEVar5 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pEVar5 = pEVar5 + -8;
  } while (pEVar5 != this + 0xbc8);
  if (*(long *)(this + 0xb58) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb58);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xc30);
  return;
}



/* EditorPropertyArray::~EditorPropertyArray() */

void __thiscall EditorPropertyArray::~EditorPropertyArray(EditorPropertyArray *this)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  *(code **)this = _EDITOR_GET;
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
  pvVar4 = *(void **)(this + 0xbc0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 3000) != 0) {
      lVar5 = 0;
      do {
        plVar3 = (long *)(lVar5 * 0x30 + (long)pvVar4);
        if (*plVar3 != 0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            pOVar1 = (Object *)*plVar3;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          pvVar4 = *(void **)(this + 0xbc0);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 3000));
      *(undefined4 *)(this + 3000) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_00114397;
    }
    Memory::free_static(pvVar4,false);
  }
LAB_00114397:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xbb0));
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyArray::~EditorPropertyArray() */

void __thiscall EditorPropertyArray::~EditorPropertyArray(EditorPropertyArray *this)

{
  ~EditorPropertyArray(this);
  operator_delete(this,0xc10);
  return;
}



/* EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray() */

void __thiscall
EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray(EditorPropertyFontNamesArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121c80;
  EditorPropertyArray::~EditorPropertyArray((EditorPropertyArray *)this);
  return;
}



/* EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray() */

void __thiscall
EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray(EditorPropertyFontNamesArray *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121c80;
  EditorPropertyArray::~EditorPropertyArray((EditorPropertyArray *)this);
  operator_delete(this,0xc18);
  return;
}



/* CallableCustomMethodPointer<FontPreview, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FontPreview,void>::call
          (CallableCustomMethodPointer<FontPreview,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011467f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011467f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114741;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011467f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00114741:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::call
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this,Variant **param_1,
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
      goto LAB_0011489f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011489f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114961;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011489f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00114961:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::call
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this,Variant **param_1,
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
      goto LAB_00114abf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00114abf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114b81;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114abf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00114b81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::call
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this,Variant **param_1,
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
      goto LAB_00114cdf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00114cdf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00114da1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00114cdf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00114da1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this,
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
      goto LAB_00114f68;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00114f68;
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
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011502a;
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
LAB_00114f68:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011502a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this,Variant **param_1,
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
      goto LAB_001151e8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001151e8;
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
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_001152aa;
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
LAB_001151e8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001152aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this,Variant **param_1,
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
      goto LAB_00115468;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00115468;
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
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011552a;
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
LAB_00115468:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011552a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this,
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
      goto LAB_001156e8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001156e8;
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
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_001157aa;
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
LAB_001156e8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001157aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::call
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this,
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
      goto LAB_001159a4;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_001159a4;
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
        uVar4 = _LC113;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00115933:
          uVar4 = _LC114;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar8 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_00115933;
        }
        pOVar7 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011597d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar7,iVar6);
          return;
        }
        goto LAB_00115a98;
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
LAB_001159a4:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00115a98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
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
            uVar4 = _LC113;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC115;
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
        goto LAB_00115b65;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00115b65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
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
            uVar4 = _LC113;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC115;
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
        goto LAB_00115e25;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00115e25:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::call
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
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
            uVar4 = _LC113;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar6 = Variant::operator_cast_to_ObjectID(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC115;
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
        goto LAB_001160e5;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001160e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
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
            uVar4 = _LC116;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC117;
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
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC119;
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
        goto LAB_001163ac;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001163ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::call
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
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
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
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
          goto LAB_001166e5;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001166e5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
        uVar4 = _LC120;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_String((Variant *)&local_58);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_001167a3:
          uVar4 = _LC114;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_001167a3;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),pOVar6,(Variant *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        goto LAB_001166e5;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001166e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::call
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this,
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
            uVar4 = _LC119;
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
        goto LAB_001169ce;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001169ce:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
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
            uVar4 = _LC116;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC117;
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
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC119;
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
        goto LAB_00116c3c;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00116c3c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
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
            uVar4 = _LC116;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC117;
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
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC119;
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
        goto LAB_00116f7c;
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
  _err_print_error(&_LC111,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00116f7c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyOTVariation::update_property() [clone .cold] */

void EditorPropertyOTVariation::update_property(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorPropertyOTFeatures::update_property() [clone .cold] */

void EditorPropertyOTFeatures::update_property(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorPropertyFontNamesArray::EditorPropertyFontNamesArray() [clone .cold] */

void __thiscall
EditorPropertyFontNamesArray::EditorPropertyFontNamesArray(EditorPropertyFontNamesArray *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FontEditorPlugin::is_class(String const&) const */

undefined8 __thiscall FontEditorPlugin::is_class(FontEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011732b;
  }
  cVar5 = String::operator==(param_1,"FontEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0011732b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00117435;
    }
  }
LAB_0011732b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117435:
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
    if (cVar5 != '\0') goto LAB_0011754b;
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
      if (cVar5 != '\0') goto LAB_0011754b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00117655;
    }
  }
LAB_0011754b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117655:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FontPreview::is_class(String const&) const */

undefined8 __thiscall FontPreview::is_class(FontPreview *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011775b;
  }
  cVar4 = String::operator==(param_1,"FontPreview");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011775b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
    if ((code *)PTR__bind_methods_00129080 != Object::_bind_methods) {
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



/* EditorInspectorPluginFontVariation::_initialize_classv() */

void EditorInspectorPluginFontVariation::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      EditorInspectorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorInspectorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorInspectorPluginFontVariation";
    local_60 = 0;
    local_40 = 0x22;
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



/* EditorInspectorPluginFontPreview::_initialize_classv() */

void EditorInspectorPluginFontPreview::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      EditorInspectorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorInspectorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorInspectorPluginFontPreview";
    local_60 = 0;
    local_40 = 0x20;
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



/* EditorInspectorPluginSystemFont::_initialize_classv() */

void EditorInspectorPluginSystemFont::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      EditorInspectorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorInspectorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorInspectorPluginSystemFont";
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



/* EditorPropertyFontMetaObject::_initialize_classv() */

void EditorPropertyFontMetaObject::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00129080 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyFontMetaObject";
    local_60 = 0;
    local_40 = 0x1c;
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



/* FontEditorPlugin::_initialize_classv() */

void FontEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00129010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00129088 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00129090 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FontEditorPlugin";
    local_70 = 0;
    local_50 = 0x10;
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
              if ((code *)PTR__bind_methods_00129010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129018 !=
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
      if ((code *)PTR__bind_methods_00129098 != Container::_bind_methods) {
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



/* FontPreview::_notificationv(int, bool) */

void __thiscall FontPreview::_notificationv(FontPreview *this,int param_1,bool param_2)

{
  int iVar1;
  Callable *pCVar2;
  long in_FS_OFFSET;
  FontPreview aFStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xb) {
      pCVar2 = *(Callable **)(this + 0x9c8);
      if (pCVar2 != (Callable *)0x0) {
LAB_001189e5:
        create_custom_callable_function_pointer<FontPreview>
                  (aFStack_48,(char *)this,(_func_void *)"&FontPreview::_preview_changed");
        Resource::disconnect_changed(pCVar2);
        Callable::~Callable((Callable *)aFStack_48);
        if (!param_2) goto LAB_00118a20;
      }
    }
    else if (param_1 == 0x1e) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_001290a0 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_notification(iVar1);
      return;
    }
  }
  else {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    if ((code *)PTR__notification_001290a0 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    if (param_1 == 0xb) {
      pCVar2 = *(Callable **)(this + 0x9c8);
      if (pCVar2 != (Callable *)0x0) goto LAB_001189e5;
    }
    else if (param_1 == 0x1e) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _notification(iVar1);
        return;
      }
      goto LAB_00118ad6;
    }
LAB_00118a20:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00118ad6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FontPreview::_initialize_classv() */

void FontPreview::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00129010 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
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
        if ((code *)PTR__bind_compatibility_methods_00129018 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_001290a8 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FontPreview";
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::_initialize_classv() */

void EditorPropertyFontNamesArray::_initialize_classv(void)

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
    if (EditorPropertyArray::initialize_class()::initialized == '\0') {
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
      EditorPropertyArray::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorPropertyArray";
    local_58 = 0;
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyFontNamesArray";
    local_60 = 0;
    local_40 = 0x1c;
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



/* EditorPropertyFontMetaOverride::_initialize_classv() */

void EditorPropertyFontMetaOverride::_initialize_classv(void)

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
    local_48 = "EditorPropertyFontMetaOverride";
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTVariation::_initialize_classv() */

void EditorPropertyOTVariation::_initialize_classv(void)

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
    local_48 = "EditorPropertyOTVariation";
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_initialize_classv() */

void EditorPropertyOTFeatures::_initialize_classv(void)

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
    local_48 = "EditorPropertyOTFeatures";
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
              if ((code *)PTR__bind_methods_00129010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129018 !=
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
      if ((code *)PTR__bind_methods_00129098 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_00119c1b;
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
      if (cVar5 != '\0') goto LAB_00119c1b;
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
        if (cVar5 != '\0') goto LAB_00119c1b;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_00119e08;
      }
    }
  }
LAB_00119c1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119e08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_00119f0b;
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
      if (cVar5 != '\0') goto LAB_00119f0b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a015;
    }
  }
LAB_00119f0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a015:
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
    if (cVar4 != '\0') goto LAB_0011a11b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011a11b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorProperty::is_class(String const&) const */

undefined8 __thiscall EditorProperty::is_class(EditorProperty *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a26b;
  }
  cVar5 = String::operator==(param_1,"EditorProperty");
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
      if (cVar5 != '\0') goto LAB_0011a26b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a375;
    }
  }
LAB_0011a26b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a375:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyOTFeatures::is_class(EditorPropertyOTFeatures *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011a3ef;
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
LAB_0011a3ef:
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
    if (cVar5 != '\0') goto LAB_0011a4a3;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyOTFeatures");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorProperty::is_class((EditorProperty *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011a4a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTVariation::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyOTVariation::is_class(EditorPropertyOTVariation *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011a5fb;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyOTVariation");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorProperty::is_class((EditorProperty *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011a5fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontMetaOverride::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyFontMetaOverride::is_class(EditorPropertyFontMetaOverride *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011a6bf;
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
LAB_0011a6bf:
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
    if (cVar5 != '\0') goto LAB_0011a773;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyFontMetaOverride");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorProperty::is_class((EditorProperty *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011a773:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyFontNamesArray::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyFontNamesArray::is_class(EditorPropertyFontNamesArray *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a8cb;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyFontNamesArray");
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
      if (cVar5 != '\0') goto LAB_0011a8cb;
    }
    cVar5 = String::operator==(param_1,"EditorPropertyArray");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = EditorProperty::is_class((EditorProperty *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a9d5;
    }
  }
LAB_0011a8cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a9d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC28;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC28;
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
      goto LAB_0011ab3c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ab3c:
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
      goto LAB_0011ad8c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ad8c:
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



/* EditorPropertyFontMetaObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyFontMetaObject::_get_property_listv
          (EditorPropertyFontMetaObject *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyFontMetaObject";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyFontMetaObject";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_0011aff1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011aff1:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyFontMetaObject",false);
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
      goto LAB_0011b2a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b2a1:
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



/* EditorInspectorPluginFontPreview::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
EditorInspectorPluginFontPreview::_get_property_listv
          (EditorInspectorPluginFontPreview *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginFontPreview";
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginFontPreview";
  local_98 = 0;
  local_70 = 0x20;
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
      goto LAB_0011b551;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b551:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginFontPreview",false);
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



/* EditorInspectorPluginFontVariation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
EditorInspectorPluginFontVariation::_get_property_listv
          (EditorInspectorPluginFontVariation *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginFontVariation";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginFontVariation";
  local_98 = 0;
  local_70 = 0x22;
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
      goto LAB_0011b801;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b801:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginFontVariation",false);
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
      goto LAB_0011bab1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bab1:
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



/* FontEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
FontEditorPlugin::_get_property_listv(FontEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "FontEditorPlugin";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FontEditorPlugin";
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
      goto LAB_0011bd61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bd61:
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
  StringName::StringName((StringName *)&local_78,"FontEditorPlugin",false);
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



/* EditorPropertyFontOTObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyFontOTObject::_get_property_listv
          (EditorPropertyFontOTObject *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyFontOTObject";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyFontOTObject";
  local_98 = 0;
  local_70 = 0x1a;
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
      goto LAB_0011c011;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c011:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyFontOTObject",false);
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



/* EditorInspectorPluginSystemFont::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginSystemFont::_get_property_listv
          (EditorInspectorPluginSystemFont *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginSystemFont";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginSystemFont";
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
      goto LAB_0011c2c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c2c1:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginSystemFont",false);
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
      goto LAB_0011c571;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c571:
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
  if ((code *)PTR__get_property_list_001290b0 != Object::_get_property_list) {
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
      goto LAB_0011c841;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c841:
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
  if ((code *)PTR__get_property_list_001290b8 != CanvasItem::_get_property_list) {
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
      goto LAB_0011cb11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cb11:
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
      goto LAB_0011cdc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cdc1:
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
      goto LAB_0011d071;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d071:
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
      goto LAB_0011d321;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d321:
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
      goto LAB_0011d5d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d5d1:
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
      goto LAB_0011d881;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d881:
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



/* EditorPropertyFontNamesArray::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyFontNamesArray::_get_property_listv
          (EditorPropertyFontNamesArray *this,List *param_1,bool param_2)

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
    EditorPropertyArray::_get_property_listv((EditorPropertyArray *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyFontNamesArray";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyFontNamesArray";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_0011db31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011db31:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyFontNamesArray",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyArray::_get_property_listv((EditorPropertyArray *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyOTFeatures::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyOTFeatures::_get_property_listv
          (EditorPropertyOTFeatures *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyOTFeatures";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyOTFeatures";
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
      goto LAB_0011dde1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011dde1:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyOTFeatures",false);
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



/* EditorPropertyOTVariation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertyOTVariation::_get_property_listv
          (EditorPropertyOTVariation *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyOTVariation";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyOTVariation";
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
      goto LAB_0011e091;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e091:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyOTVariation",false);
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



/* EditorPropertyFontMetaOverride::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyFontMetaOverride::_get_property_listv
          (EditorPropertyFontMetaOverride *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyFontMetaOverride";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyFontMetaOverride";
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
      goto LAB_0011e341;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e341:
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyFontMetaOverride",false);
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



/* FontPreview::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FontPreview::_get_property_listv(FontPreview *this,List *param_1,bool param_2)

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
  local_78 = "FontPreview";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FontPreview";
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
      goto LAB_0011e5f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e5f1:
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
  StringName::StringName((StringName *)&local_78,"FontPreview",false);
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



/* EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride() */

void __thiscall
EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride
          (EditorPropertyFontMetaOverride *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120a88;
  CowData<String>::_unref((CowData<String> *)(this + 0xb98));
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
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



/* EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation() */

void __thiscall
EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation
          (EditorInspectorPluginFontVariation *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eac4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eac4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eac4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eac4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eac4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011eac4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont() */

void __thiscall
EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont
          (EditorInspectorPluginSystemFont *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ebc4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ebc4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ebc4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ebc4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ebc4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011ebc4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview() */

void __thiscall
EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview
          (EditorInspectorPluginFontPreview *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ecc4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ecc4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ecc4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ecc4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ecc4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011ecc4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview() */

void __thiscall
EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview
          (EditorInspectorPluginFontPreview *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011edc4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011edc4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011edc4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011edc4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011edc4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011edc4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont() */

void __thiscall
EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont
          (EditorInspectorPluginSystemFont *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eec4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eec4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eec4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eec4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011eec4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011eec4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation() */

void __thiscall
EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation
          (EditorInspectorPluginFontVariation *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011efc4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011efc4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011efc4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011efc4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011efc4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011efc4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fcd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride() */

void __thiscall
EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride
          (EditorPropertyFontMetaOverride *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120a88;
  CowData<String>::_unref((CowData<String> *)(this + 0xb98));
  if (*(long *)(this + 0xb58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb58);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,3000);
  return;
}



/* EditorPropertyFontMetaObject::_set(StringName const&, Variant const&) */

void EditorPropertyFontMetaObject::_GLOBAL__sub_I__set(void)

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
/* EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview() */

void __thiscall
EditorInspectorPluginFontPreview::~EditorInspectorPluginFontPreview
          (EditorInspectorPluginFontPreview *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont() */

void __thiscall
EditorInspectorPluginSystemFont::~EditorInspectorPluginSystemFont
          (EditorInspectorPluginSystemFont *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation() */

void __thiscall
EditorInspectorPluginFontVariation::~EditorInspectorPluginFontVariation
          (EditorInspectorPluginFontVariation *this)

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
/* EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride() */

void __thiscall
EditorPropertyFontMetaOverride::~EditorPropertyFontMetaOverride
          (EditorPropertyFontMetaOverride *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray() */

void __thiscall
EditorPropertyFontNamesArray::~EditorPropertyFontNamesArray(EditorPropertyFontNamesArray *this)

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
/* EditorPropertyOTVariation::~EditorPropertyOTVariation() */

void __thiscall
EditorPropertyOTVariation::~EditorPropertyOTVariation(EditorPropertyOTVariation *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyOTFeatures::~EditorPropertyOTFeatures() */

void __thiscall EditorPropertyOTFeatures::~EditorPropertyOTFeatures(EditorPropertyOTFeatures *this)

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
/* FontEditorPlugin::~FontEditorPlugin() */

void __thiscall FontEditorPlugin::~FontEditorPlugin(FontEditorPlugin *this)

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
/* FontPreview::~FontPreview() */

void __thiscall FontPreview::~FontPreview(FontPreview *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyFontOTObject::~EditorPropertyFontOTObject() */

void __thiscall
EditorPropertyFontOTObject::~EditorPropertyFontOTObject(EditorPropertyFontOTObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject() */

void __thiscall
EditorPropertyFontMetaObject::~EditorPropertyFontMetaObject(EditorPropertyFontMetaObject *this)

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
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,StringName_const&,ObjectID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, Object*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,Object*,String_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontMetaOverride, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontMetaOverride,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, String const&, Variant const&,
   String const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTVariation, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void,StringName_const&,ObjectID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTVariation, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTVariation,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTVariation,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, StringName const&,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,StringName_const&,ObjectID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void,Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyOTFeatures, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyOTFeatures,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyOTFeatures,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FontPreview, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FontPreview,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FontPreview,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyFontNamesArray, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyFontNamesArray,void,int> *this)

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


