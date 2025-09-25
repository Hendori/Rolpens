/* EditorInspectorPluginControl::parse_category(Object*, String const&) */

void __thiscall
EditorInspectorPluginControl::parse_category
          (EditorInspectorPluginControl *this,Object *param_1,String *param_2)

{
  EditorInspectorPluginControl EVar1;
  
  EVar1 = (EditorInspectorPluginControl)String::operator==(param_2,"Control");
  this[0x218] = EVar1;
  return;
}



/* EditorPropertyAnchorsPreset::_set_read_only(bool) */

void EditorPropertyAnchorsPreset::_set_read_only(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_disabled(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xb58),0))
  ;
  return;
}



/* EditorPropertyAnchorsPreset::_option_selected(int) */

void EditorPropertyAnchorsPreset::_option_selected(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_item_metadata((int)(Variant *)local_48);
  lVar1 = Variant::operator_cast_to_long((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_50 = 0;
  Variant::Variant((Variant *)local_48,lVar1);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)CONCAT44(in_register_0000003c,param_1),(Variant *)&local_58,
             (StringName *)local_48,SUB81(&local_50,0));
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::_preset_selected(int) */

void EditorPropertySizeFlags::_preset_selected(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  StringName *pSVar4;
  uint uVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  pSVar4 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = OptionButton::get_item_id((int)*(undefined8 *)(pSVar4 + 0xb58));
  if (uVar2 == 4) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(pSVar4 + 0xb68),0));
      return;
    }
  }
  else {
    uVar5 = 0;
    CanvasItem::set_visible(SUB81(*(undefined8 *)(pSVar4 + 0xb68),0));
    if (uVar2 < 4) {
      uVar5 = *(uint *)(CSWTCH_1758 + (ulong)uVar2 * 4);
      cVar1 = CanvasItem::is_visible();
    }
    else {
      cVar1 = CanvasItem::is_visible();
    }
    if (cVar1 != '\0') {
      iVar3 = BaseButton::is_pressed();
      uVar5 = uVar5 | -iVar3 & 2U;
    }
    local_50 = 0;
    Variant::Variant((Variant *)local_48,uVar5);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              (pSVar4,(Variant *)&local_58,(StringName *)local_48,SUB81(&local_50,0));
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::_flag_toggled() */

void __thiscall EditorPropertySizeFlags::_flag_toggled(EditorPropertySizeFlags *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0xb78);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    do {
      if (*(long *)(lVar6 + -8) <= lVar9) break;
      cVar3 = BaseButton::is_pressed();
      if (cVar3 != '\0') {
        lVar6 = *(long *)(this + 0xb78);
        if (lVar6 == 0) {
          lVar7 = 0;
LAB_0010052b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar9) goto LAB_0010052b;
        plVar1 = *(long **)(lVar6 + lVar9 * 8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        pcVar2 = *(code **)(*plVar1 + 0xb8);
        StringName::StringName((StringName *)&local_80,"_value",false);
        (*pcVar2)((Variant *)local_58,plVar1,(StringName *)&local_80,&local_78);
        uVar4 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        uVar8 = uVar8 | uVar4;
      }
      lVar6 = *(long *)(this + 0xb78);
      lVar9 = lVar9 + 1;
    } while (lVar6 != 0);
  }
  cVar3 = CanvasItem::is_visible();
  if (cVar3 != '\0') {
    iVar5 = BaseButton::is_pressed();
    uVar8 = uVar8 | -iVar5 & 2U;
  }
  this[0xb81] = (EditorPropertySizeFlags)0x1;
  local_80 = 0;
  Variant::Variant((Variant *)local_58,uVar8);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_88,(StringName *)local_58,SUB81(&local_80,0));
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPopupButton::_popup_visibility_changed(bool) */

void ControlEditorPopupButton::_popup_visibility_changed(bool param_1)

{
  BaseButton::set_pressed(param_1);
  return;
}



/* EditorPropertySizeFlags::update_property() */

void __thiscall EditorPropertySizeFlags::update_property(EditorPropertySizeFlags *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Variant *local_a0;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
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
  }
  local_a0 = (Variant *)local_58;
  uVar5 = Variant::operator_cast_to_unsigned_int(local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar1 = *(long *)(this + 0xb78);
  lVar9 = 0;
  while( true ) {
    while( true ) {
      if ((lVar1 == 0) || (*(long *)(lVar1 + -8) <= lVar9)) {
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xb60),0));
        if (this[0xb81] == (EditorPropertySizeFlags)0x0) {
          iVar7 = OptionButton::get_item_index((int)*(undefined8 *)(this + 0xb58));
          if (-1 < iVar7) {
            OptionButton::select((int)*(undefined8 *)(this + 0xb58));
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb68),0));
            return;
          }
        }
        else {
          this[0xb81] = (EditorPropertySizeFlags)0x0;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      plVar2 = *(long **)(lVar1 + lVar9 * 8);
      lVar1 = lVar9 * 8;
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pcVar3 = *(code **)(*plVar2 + 0xb8);
      StringName::StringName((StringName *)&local_80,"_value",false);
      (*pcVar3)(local_a0,plVar2,(StringName *)&local_80,&local_78);
      uVar6 = Variant::operator_cast_to_int(local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      lVar4 = *(long *)(this + 0xb78);
      if ((uVar5 & uVar6) == 0) break;
      if (lVar4 == 0) goto LAB_001008a0;
      lVar8 = *(long *)(lVar4 + -8);
      if (lVar8 <= lVar9) goto LAB_001008a3;
      lVar9 = lVar9 + 1;
      BaseButton::set_pressed(SUB81(*(undefined8 *)(lVar4 + lVar1),0));
      lVar1 = *(long *)(this + 0xb78);
    }
    if (lVar4 == 0) break;
    lVar8 = *(long *)(lVar4 + -8);
    if (lVar8 <= lVar9) goto LAB_001008a3;
    lVar9 = lVar9 + 1;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(lVar4 + lVar1),0));
    lVar1 = *(long *)(this + 0xb78);
  }
LAB_001008a0:
  lVar8 = 0;
LAB_001008a3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* ControlEditorPopupButton::get_minimum_size() const */

void __thiscall ControlEditorPopupButton::get_minimum_size(ControlEditorPopupButton *this)

{
  EditorScale::get_scale();
  if (*(long **)(this + 0xc10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc10) + 0x1c8))();
    (**(code **)(**(long **)(this + 0xc10) + 0x1d0))();
    return;
  }
  return;
}



/* ControlEditorPopupButton::toggled(bool) */

void __thiscall ControlEditorPopupButton::toggled(ControlEditorPopupButton *this,bool param_1)

{
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    Viewport::get_canvas_transform();
    uVar4 = Transform2D::get_scale();
    uVar5 = Control::get_size();
    pVVar1 = *(Vector2i **)(this + 0xc18);
    fVar7 = (float)uVar5 * (float)uVar4;
    local_48[0] = (ulong)(uint)fVar7;
    local_50 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_48);
    Window::set_size(pVVar1);
    uVar6 = Control::get_screen_position();
    local_50._4_4_ = (float)((ulong)uVar6 >> 0x20);
    local_50._0_4_ = (float)uVar6;
    local_50 = CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar4 >> 0x20) +
                        local_50._4_4_,(float)local_50);
    cVar2 = (**(code **)(*(long *)this + 0x340))(this);
    if (cVar2 != '\0') {
      iVar3 = Window::get_size();
      local_50 = CONCAT44(local_50._4_4_,(fVar7 - (float)iVar3) + (float)local_50);
    }
    pVVar1 = *(Vector2i **)(this + 0xc18);
    local_48[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::set_position(pVVar1);
    local_48[0] = 0;
    local_48[1] = 0;
    (**(code **)(**(long **)(this + 0xc18) + 0x240))(*(long **)(this + 0xc18),(Vector2 *)local_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<CheckBox*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<CheckBox*>::_copy_on_write(CowData<CheckBox*> *this)

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



/* EditorPropertySizeFlags::_set_read_only(bool) */

void EditorPropertySizeFlags::_set_read_only(bool param_1)

{
  undefined8 *puVar1;
  undefined7 in_register_00000039;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = CONCAT71(in_register_00000039,param_1);
  CowData<CheckBox*>::_copy_on_write((CowData<CheckBox*> *)(lVar2 + 0xb78));
  puVar1 = *(undefined8 **)(lVar2 + 0xb78);
  CowData<CheckBox*>::_copy_on_write((CowData<CheckBox*> *)(lVar2 + 0xb78));
  puVar3 = *(undefined8 **)(lVar2 + 0xb78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3 = puVar3 + puVar3[-1];
  }
  for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    BaseButton::set_disabled(SUB81(*puVar1,0));
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar2 + 0xb58),0));
  return;
}



/* HashMap<int, String, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, String> > >::_lookup_pos(int const&, unsigned int&)
   const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
::_lookup_pos(HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
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



/* SizeFlagPresetPicker::_expand_button_pressed() */

void __thiscall SizeFlagPresetPicker::_expand_button_pressed(SizeFlagPresetPicker *this)

{
  bool bVar1;
  long in_FS_OFFSET;
  long local_70;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = (bool)BaseButton::is_pressed();
  StringName::StringName((StringName *)&local_70,"expand_flag_toggled",false);
  Variant::Variant((Variant *)local_58,bVar1);
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



/* SizeFlagPresetPicker::_preset_button_pressed(int) */

void __thiscall SizeFlagPresetPicker::_preset_button_pressed(SizeFlagPresetPicker *this,int param_1)

{
  byte bVar1;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = BaseButton::is_pressed();
  StringName::StringName((StringName *)&local_80,"size_flags_selected",false);
  Variant::Variant((Variant *)local_68,(uint)bVar1 * 2 | param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_80,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginControl::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginControl::can_handle(EditorInspectorPluginControl *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* AnchorPresetPicker::_preset_button_pressed(int) */

void __thiscall AnchorPresetPicker::_preset_button_pressed(AnchorPresetPicker *this,int param_1)

{
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_80,"anchors_preset_selected",false);
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_80,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::_expand_toggled() */

void __thiscall EditorPropertySizeFlags::_expand_toggled(EditorPropertySizeFlags *this)

{
  char cVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_48[0] = 0;
    local_40 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_48,*(bool **)(this + 0xa10));
  }
  uVar2 = Variant::operator_cast_to_unsigned_int((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar1 = CanvasItem::is_visible();
  if (cVar1 != '\0') {
    cVar1 = BaseButton::is_pressed();
    if (cVar1 != '\0') {
      uVar2 = uVar2 | 2;
      goto LAB_00101244;
    }
  }
  uVar2 = uVar2 ^ 2;
LAB_00101244:
  this[0xb81] = (EditorPropertySizeFlags)0x1;
  local_50 = 0;
  Variant::Variant((Variant *)local_48,uVar2);
  EditorProperty::get_edited_property();
  EditorProperty::emit_changed
            ((StringName *)this,(Variant *)&local_58,(StringName *)local_48,SUB81(&local_50,0));
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyAnchorsPreset::update_property() */

void __thiscall EditorPropertyAnchorsPreset::update_property(EditorPropertyAnchorsPreset *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_58 = local_58 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)&local_58,*(bool **)(this + 0xa10));
  }
  lVar3 = Variant::operator_cast_to_long((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  iVar5 = 0;
  do {
    iVar2 = OptionButton::get_item_count();
    if (iVar2 <= iVar5) {
LAB_001014ca:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    OptionButton::get_item_metadata((int)local_78);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    cVar1 = Variant::operator!=((Variant *)local_78,(Variant *)&local_58);
    if (cVar1 == '\0') {
      if (Variant::needs_deinit[(int)local_58] != '\0') goto LAB_00101474;
LAB_00101405:
      cVar1 = Variant::needs_deinit[local_78[0]];
    }
    else {
      lVar4 = Variant::operator_cast_to_long((Variant *)local_78);
      if (lVar4 == lVar3) {
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        OptionButton::select((int)*(undefined8 *)(this + 0xb58));
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001014ca;
      }
      if (Variant::needs_deinit[(int)local_58] == '\0') goto LAB_00101405;
LAB_00101474:
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* CowData<Control::SizeFlags>::_ref(CowData<Control::SizeFlags> const&) [clone .part.0] */

void __thiscall
CowData<Control::SizeFlags>::_ref(CowData<Control::SizeFlags> *this,CowData *param_1)

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



/* ControlEditorToolbar::_notification(int) [clone .part.0] */

void ControlEditorToolbar::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  lVar5 = CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(lVar5 + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa28);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
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
  pRVar1 = *(Ref **)(lVar5 + 0xa20);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPresetPicker::_add_separator(BoxContainer*, Separator*) */

void __thiscall
ControlEditorPresetPicker::_add_separator
          (ControlEditorPresetPicker *this,BoxContainer *param_1,Separator *param_2)

{
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_38,"separation",false);
  Control::add_theme_constant_override((StringName *)param_2,(int)&local_38);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  local_30 = _LC38;
  local_28 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_30);
  Control::set_custom_minimum_size(param_2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(param_1,param_2,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SizeFlagPresetPicker::set_expand_flag(bool) */

void SizeFlagPresetPicker::set_expand_flag(bool param_1)

{
  undefined7 in_register_00000039;
  
  BaseButton::set_pressed(SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xa40),0));
  return;
}



/* ControlEditorToolbar::_position_to_anchor(Control const*, Vector2) */

undefined8 __thiscall
ControlEditorToolbar::_position_to_anchor(undefined8 param_1_00,undefined8 param_2,long *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    _err_print_error("_position_to_anchor","editor/plugins/control_editor_plugin.cpp",0x36d,
                     "Parameter \"p_control\" is null.",0,0);
    uVar5 = 0;
  }
  else {
    auVar7 = Control::get_parent_anchorable_rect();
    cVar1 = (**(code **)(*param_1 + 0x340))(param_1);
    fVar4 = 0.0;
    fVar6 = auVar7._8_4_;
    fVar2 = (float)param_1_00;
    fVar3 = (float)((ulong)param_1_00 >> 0x20);
    if (cVar1 == '\0') {
      if (fVar6 != 0.0) {
        (**(code **)(*param_1 + 0x290))(&local_58,param_1);
        fVar4 = ((fVar2 * local_58 + fVar3 * local_50 + local_48) - auVar7._0_4_) / fVar6;
      }
    }
    else if (fVar6 != 0.0) {
      (**(code **)(*param_1 + 0x290))(&local_58,param_1);
      fVar4 = ((fVar6 - (fVar2 * local_58 + fVar3 * local_50 + local_48)) - auVar7._0_4_) / fVar6;
    }
    fVar6 = 0.0;
    if (auVar7._12_4_ != 0.0) {
      (**(code **)(*param_1 + 0x290))(&local_58,param_1);
      fVar6 = ((fVar2 * local_54 + fVar3 * local_4c + local_44) - auVar7._4_4_) / auVar7._12_4_;
    }
    uVar5 = CONCAT44(fVar6,fVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* ControlEditorToolbar::_is_node_locked(Node const*) */

ulong __thiscall ControlEditorToolbar::_is_node_locked(ControlEditorToolbar *this,Node *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_70;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)param_1 + 0xb8);
  Variant::Variant((Variant *)local_68,false);
  StringName::StringName((StringName *)&local_70,"_edit_lock_",false);
  (*pcVar1)((Variant *)local_48,param_1,(StringName *)&local_70,(Variant *)local_68);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(extraout_var,bVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorToolbar::_get_edited_controls() */

void ControlEditorToolbar::_get_edited_controls(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  ControlEditorToolbar *in_RSI;
  long *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0xa10);
  *in_RDI = 0;
  for (puVar2 = *(undefined8 **)(lVar1 + 400); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((((puVar2[2] != 0) &&
         (pNVar5 = (Node *)__dynamic_cast(puVar2[2],&Object::typeinfo,&Control::typeinfo,0),
         pNVar5 != (Node *)0x0)) && (cVar4 = CanvasItem::is_visible_in_tree(), cVar4 != '\0')) &&
       ((*(long *)(pNVar5 + 600) == *(long *)(EditorNode::singleton + 0xa68) &&
        (cVar4 = _is_node_locked(in_RSI,pNVar5), cVar4 == '\0')))) {
      if (*in_RDI == 0) {
        pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *in_RDI = (long)pauVar7;
        *(undefined4 *)pauVar7[1] = 0;
        *pauVar7 = (undefined1  [16])0x0;
      }
      puVar6 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      plVar3 = (long *)*in_RDI;
      puVar6[1] = 0;
      lVar1 = plVar3[1];
      *puVar6 = pNVar5;
      puVar6[3] = plVar3;
      puVar6[2] = lVar1;
      if (lVar1 != 0) {
        *(undefined8 **)(lVar1 + 8) = puVar6;
      }
      plVar3[1] = (long)puVar6;
      if (*plVar3 == 0) {
        *plVar3 = (long)puVar6;
      }
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    }
  }
  return;
}



/* ControlEditorToolbar::_anchor_mode_toggled(bool) */

void __thiscall ControlEditorToolbar::_anchor_mode_toggled(ControlEditorToolbar *this,bool param_1)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_edited_controls();
  if (local_68 != (long *)0x0) {
    puVar6 = (undefined8 *)*local_68;
joined_r0x00101dde:
    if (puVar6 != (undefined8 *)0x0) {
      do {
        plVar1 = (long *)*puVar6;
        lVar5 = Node::get_parent();
        if ((lVar5 == 0) ||
           (lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&Container::typeinfo,0), lVar5 == 0)) {
          if (param_1) {
            pcVar2 = *(code **)(*plVar1 + 0xa8);
            Variant::Variant((Variant *)local_58,true);
            StringName::StringName((StringName *)&local_60,"_edit_use_anchors_",false);
            (*pcVar2)(plVar1,(StringName *)&local_60,(Variant *)local_58);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') goto code_r0x00101eb9;
          }
          else {
            pcVar2 = *(code **)(*plVar1 + 0xb0);
            StringName::StringName((StringName *)&local_60,"_edit_use_anchors_",false);
            (*pcVar2)(plVar1);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
          }
        }
        puVar6 = (undefined8 *)puVar6[1];
        if (puVar6 == (undefined8 *)0x0) break;
      } while( true );
    }
  }
  this[0xa40] = (ControlEditorToolbar)param_1;
  CanvasItemEditor::update_viewport();
  if (local_68 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    do {
      while( true ) {
        pvVar3 = (void *)*local_68;
        if (pvVar3 == (void *)0x0) {
          if ((int)local_68[2] != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              return;
            }
            goto LAB_00102084;
          }
          goto LAB_00101f49;
        }
        if (local_68 != *(long **)((long)pvVar3 + 0x18)) break;
        lVar5 = *(long *)((long)pvVar3 + 8);
        lVar4 = *(long *)((long)pvVar3 + 0x10);
        *local_68 = lVar5;
        if (pvVar3 == (void *)local_68[1]) {
          local_68[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar5;
          lVar5 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar4;
        }
        Memory::free_static(pvVar3,false);
        plVar1 = local_68 + 2;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) goto LAB_00101f49;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while ((int)local_68[2] != 0);
LAB_00101f49:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_68,false);
      return;
    }
  }
LAB_00102084:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00101eb9:
  Variant::_clear_internal();
  puVar6 = (undefined8 *)puVar6[1];
  goto joined_r0x00101dde;
}



/* ControlEditorToolbar::_notification(int) */

void __thiscall ControlEditorToolbar::_notification(ControlEditorToolbar *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification((int)this);
  return;
}



/* ControlPositioningWarning::ControlPositioningWarning() */

void __thiscall
ControlPositioningWarning::ControlPositioningWarning(ControlPositioningWarning *this)

{
  PanelContainer *this_00;
  GridContainer *this_01;
  TextureRect *pTVar1;
  Label *pLVar2;
  Control *pCVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00120c78;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  Control::set_mouse_filter(this,0);
  this_00 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(PanelContainer **)(this + 0xa18) = this_00;
  Control::set_mouse_filter(this_00,2);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  this_01 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_01);
  postinitialize_handler((Object *)this_01);
  *(GridContainer **)(this + 0xa20) = this_01;
  GridContainer::set_columns((int)this_01);
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa20),0,0);
  pTVar1 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar1);
  postinitialize_handler((Object *)pTVar1);
  *(TextureRect **)(this + 0xa28) = pTVar1;
  TextureRect::set_stretch_mode(pTVar1,3);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa28),0,0);
  pLVar2 = (Label *)operator_new(0xad8,"");
  local_38 = 0;
  Label::Label(pLVar2,(String *)&local_38);
  postinitialize_handler((Object *)pLVar2);
  *(Label **)(this + 0xa38) = pLVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xa38),2);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xa38),1);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa38),0,0);
  pTVar1 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(pTVar1);
  postinitialize_handler((Object *)pTVar1);
  *(TextureRect **)(this + 0xa30) = pTVar1;
  TextureRect::set_stretch_mode(pTVar1,3);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa30),0,0);
  pCVar3 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar3);
  postinitialize_handler((Object *)pCVar3);
  *(Control **)(this + 0xa48) = pCVar3;
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa48),0,0);
  pLVar2 = (Label *)operator_new(0xad8,"");
  local_38 = 0;
  Label::Label(pLVar2,(String *)&local_38);
  postinitialize_handler((Object *)pLVar2);
  *(Label **)(this + 0xa40) = pLVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xa40),2);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa40),3);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xa40),1);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa40),0,0);
  pCVar3 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar3);
  postinitialize_handler((Object *)pCVar3);
  *(Control **)(this + 0xa50) = pCVar3;
  CanvasItem::hide();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa50),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyAnchorsPreset::EditorPropertyAnchorsPreset() */

void __thiscall
EditorPropertyAnchorsPreset::EditorPropertyAnchorsPreset(EditorPropertyAnchorsPreset *this)

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
  *(undefined ***)this = &PTR__initialize_classv_00120ff0;
  this_00 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_00,(String *)local_58);
  postinitialize_handler((Object *)this_00);
  *(OptionButton **)(this + 0xb58) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb58),0));
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xb58),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb58),0,0);
  EditorProperty::add_focusable((Control *)this);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_001223a0;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _option_selected;
  *(EditorPropertyAnchorsPreset **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorPropertyAnchorsPreset::_option_selected";
  Callable::Callable((Callable *)local_58,this_01);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::EditorPropertySizeFlags() */

void __thiscall EditorPropertySizeFlags::EditorPropertySizeFlags(EditorPropertySizeFlags *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  BoxContainer *this_00;
  OptionButton *this_01;
  CallableCustom *this_02;
  BoxContainer *this_03;
  CheckBox *this_04;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001213c0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined2 *)(this + 0xb80) = 0;
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  *(undefined ***)this_00 = &PTR__initialize_classv_0011ff60;
  this_00[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (char *)0x0;
  OptionButton::OptionButton(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(OptionButton **)(this + 0xb58) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xb58),0));
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xb58),0));
  Node::add_child(this_00,*(undefined8 *)(this + 0xb58),0,0);
  EditorProperty::add_focusable((Control *)this);
  EditorProperty::set_label_reference((Control *)this);
  plVar1 = *(long **)(this + 0xb58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_001224c0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _preset_selected;
  *(EditorPropertySizeFlags **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorPropertySizeFlags::_preset_selected";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,true);
  *(undefined ***)this_03 = &PTR__initialize_classv_0011ff60;
  this_03[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_03);
  *(BoxContainer **)(this + 0xb68) = this_03;
  CanvasItem::hide();
  Node::add_child(this_00,*(undefined8 *)(this + 0xb68),0,0);
  this_04 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(this_04,(String *)&local_58);
  postinitialize_handler((Object *)this_04);
  *(CheckBox **)(this + 0xb60) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  pSVar4 = *(String **)(this + 0xb60);
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Expand";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,*(undefined8 *)(this + 0xb60),0,0);
  EditorProperty::add_focusable((Control *)this);
  plVar1 = *(long **)(this + 0xb60);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorPropertySizeFlags>
            ((EditorPropertySizeFlags *)&local_58,(char *)this,
             (_func_void *)"&EditorPropertySizeFlags::_expand_toggled");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPopupButton::ControlEditorPopupButton() */

void __thiscall ControlEditorPopupButton::ControlEditorPopupButton(ControlEditorPopupButton *this)

{
  long *plVar1;
  code *pcVar2;
  PopupPanel *this_00;
  BoxContainer *this_01;
  bool bVar3;
  long in_FS_OFFSET;
  long local_70;
  Callable local_68 [16];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0;
  Button::Button((Button *)this,(String *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  *(undefined ***)this = &PTR__initialize_classv_00121920;
  *(undefined8 *)(this + 0xc20) = 0;
  *(undefined1 (*) [16])(this + 0xc10) = (undefined1  [16])0x0;
  Control::set_theme_type_variation((StringName *)this);
  BaseButton::set_toggle_mode(SUB81(this,0));
  Control::set_focus_mode(this,0);
  this_00 = (PopupPanel *)operator_new(0xda0,"");
  PopupPanel::PopupPanel(this_00);
  postinitialize_handler((Object *)this_00);
  *(PopupPanel **)(this + 0xc18) = this_00;
  Node::add_child(this,this_00,0,0);
  plVar1 = *(long **)(this + 0xc18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ControlEditorPopupButton,bool>
            ((ControlEditorPopupButton *)local_58,(char *)this,
             (_func_void_bool *)"&ControlEditorPopupButton::_popup_visibility_changed");
  bVar3 = SUB81(local_68,0);
  Callable::bind<bool>(bVar3);
  StringName::StringName((StringName *)&local_70,"about_to_popup",false);
  (*pcVar2)(plVar1,(StringName *)&local_70,local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_68);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xc18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ControlEditorPopupButton,bool>
            ((ControlEditorPopupButton *)local_58,(char *)this,
             (_func_void_bool *)"&ControlEditorPopupButton::_popup_visibility_changed");
  Callable::bind<bool>(bVar3);
  StringName::StringName((StringName *)&local_70,"popup_hide",false);
  (*pcVar2)(plVar1,(StringName *)&local_70,local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_68);
  Callable::~Callable((Callable *)local_58);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011ff60;
  postinitialize_handler((Object *)this_01);
  *(BoxContainer **)(this + 0xc20) = this_01;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xc18),this_01,0,0);
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



/* ControlEditorPresetPicker::_add_row_button(HBoxContainer*, int, String const&) */

void ControlEditorPresetPicker::_add_row_button(HBoxContainer *param_1,int param_2,String *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  Button *this;
  CallableCustom *this_00;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined4 in_register_00000034;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  float fVar21;
  uint local_bc;
  Callable local_b8 [16];
  undefined8 local_a8 [3];
  undefined8 local_90;
  Variant *local_88 [2];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  uVar14 = (uint)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bc = uVar14;
  if ((*(long *)(param_1 + 0xa18) != 0) && (*(int *)(param_1 + 0xa3c) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xa38) * 8);
    uVar12 = ((uint)((ulong)param_3 >> 0x10) & 0xffff ^ uVar14) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar20 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar20 = 1;
      uVar16 = uVar1;
    }
    else {
      uVar16 = uVar20 * uVar1;
    }
    uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xa38) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar12 = *(uint *)(*(long *)(param_1 + 0xa20) + lVar17 * 4);
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if ((uVar12 == uVar20) &&
           (uVar14 == *(uint *)(*(long *)(*(long *)(param_1 + 0xa18) + lVar17 * 8) + 0x10))) {
          _err_print_error("_add_row_button","editor/plugins/control_editor_plugin.cpp",0x224,
                           "Condition \"preset_buttons.has(p_preset)\" is true.",0,0);
          goto LAB_0010309a;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar15 + 1) * uVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar12 = *(uint *)(*(long *)(param_1 + 0xa20) + lVar17 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar12 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12 * uVar1, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                        (ulong)*(uint *)(param_1 + 0xa38) * 4) + iVar15) -
                             SUB164(auVar6 * auVar10,8)) * uVar1, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  this = (Button *)operator_new(0xc10,"");
  local_a8[0] = 0;
  Button::Button(this,(String *)local_a8);
  postinitialize_handler((Object *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  fVar21 = (float)EditorScale::get_scale();
  local_90 = _LC73;
  local_88[0] = (Variant *)Vector2i::operator*((Vector2i *)&local_90,(int)fVar21);
  local_78[0] = Vector2i::operator_cast_to_Vector2((Vector2i *)local_88);
  Control::set_custom_minimum_size(this);
  Button::set_icon_alignment(this,1);
  Control::set_tooltip_text((String *)this);
  Button::set_flat(SUB81(this,0));
  Node::add_child(CONCAT44(in_register_00000034,param_2),this,0,0);
  pcVar2 = *(code **)(*(long *)this + 0x108);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined ***)this_00 = &PTR_hash_001225e0;
  *(HBoxContainer **)(this_00 + 0x28) = param_1;
  *(undefined8 *)(this_00 + 0x30) = uVar3;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0x369;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "ControlEditorPresetPicker::_preset_button_pressed";
  Callable::Callable(local_b8,this_00);
  Variant::Variant((Variant *)local_78,uVar14);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,(int)local_b8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar2)(this,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable(local_b8);
  puVar13 = (undefined8 *)
            HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
            ::operator[]((HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
                          *)(param_1 + 0xa10),(int *)&local_bc);
  *puVar13 = this;
LAB_0010309a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnchorPresetPicker::AnchorPresetPicker() */

void __thiscall AnchorPresetPicker::AnchorPresetPicker(AnchorPresetPicker *this)

{
  BoxContainer *this_00;
  BoxContainer *pBVar1;
  VSeparator *pVVar2;
  HSeparator *this_01;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  String local_58 [8];
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined8 *)(this + 0xa38) = 2;
  *(undefined ***)this = &PTR__initialize_classv_00121ca0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011ff60;
  postinitialize_handler((Object *)this_00);
  StringName::StringName((StringName *)&local_48,"separation",false);
  iVar3 = (int)(StringName *)&local_48;
  Control::add_theme_constant_override((StringName *)this_00,iVar3);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  Node::add_child(this,this_00,0,0);
  pBVar1 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar1,false);
  pBVar1[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar1 = &PTR__initialize_classv_0011fbe8;
  postinitialize_handler((Object *)pBVar1);
  BoxContainer::set_alignment(pBVar1,1);
  StringName::StringName((StringName *)&local_48,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar1,iVar3);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  Node::add_child(this_00,pBVar1,0,0);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Top Left");
  TTR(local_58,(String *)&local_50);
  iVar4 = (int)pBVar1;
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Center Top");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Top Right");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pVVar2 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar2);
  postinitialize_handler((Object *)pVVar2);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,pBVar1,(Separator *)pVVar2);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Top Wide");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0xa);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pBVar1 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar1,false);
  pBVar1[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar1 = &PTR__initialize_classv_0011fbe8;
  postinitialize_handler((Object *)pBVar1);
  BoxContainer::set_alignment(pBVar1,1);
  StringName::StringName((StringName *)&local_48,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar1,iVar3);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  Node::add_child(this_00,pBVar1,0,0);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Center Left");
  TTR(local_58,(String *)&local_50);
  iVar4 = (int)pBVar1;
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Center");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Center Right");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pVVar2 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar2);
  postinitialize_handler((Object *)pVVar2);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,pBVar1,(Separator *)pVVar2);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"HCenter Wide");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0xe);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pBVar1 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar1,false);
  pBVar1[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar1 = &PTR__initialize_classv_0011fbe8;
  postinitialize_handler((Object *)pBVar1);
  BoxContainer::set_alignment(pBVar1,1);
  StringName::StringName((StringName *)&local_48,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar1,iVar3);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  Node::add_child(this_00,pBVar1,0,0);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Bottom Left");
  TTR(local_58,(String *)&local_50);
  iVar4 = (int)pBVar1;
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Center Bottom");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Bottom Right");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0x3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pVVar2 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar2);
  postinitialize_handler((Object *)pVVar2);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,pBVar1,(Separator *)pVVar2);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Bottom Wide");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar4,(String *)0xc);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  this_01 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_01);
  postinitialize_handler((Object *)this_01);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,this_00,(Separator *)this_01);
  pBVar1 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar1,false);
  pBVar1[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar1 = &PTR__initialize_classv_0011fbe8;
  postinitialize_handler((Object *)pBVar1);
  BoxContainer::set_alignment(pBVar1,1);
  StringName::StringName((StringName *)&local_48,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar1,iVar3);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  Node::add_child(this_00,pBVar1,0,0);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Left Wide");
  TTR(local_58,(String *)&local_50);
  iVar3 = (int)pBVar1;
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar3,(String *)0x9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"VCenter Wide");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar3,(String *)0xd);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Right Wide");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar3,(String *)0xb);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pVVar2 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar2);
  postinitialize_handler((Object *)pVVar2);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,pBVar1,(Separator *)pVVar2);
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"");
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Full Rect");
  TTR(local_58,(String *)&local_50);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar3,(String *)0xf);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SizeFlagPresetPicker::SizeFlagPresetPicker(bool) */

void __thiscall SizeFlagPresetPicker::SizeFlagPresetPicker(SizeFlagPresetPicker *this,bool param_1)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  BoxContainer *this_00;
  BoxContainer *this_01;
  VSeparator *this_02;
  CheckButton *this_03;
  CallableCustom *this_04;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  this[0xa48] = (SizeFlagPresetPicker)param_1;
  *(undefined8 *)(this + 0xa38) = 2;
  *(undefined ***)this = &PTR__initialize_classv_00122020;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011ff60;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,false);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011fbe8;
  postinitialize_handler((Object *)this_01);
  BoxContainer::set_alignment(this_01,1);
  StringName::StringName((StringName *)&local_58,"separation",false);
  Control::add_theme_constant_override((StringName *)this_01,(int)(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this_00,this_01,0,0);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Shrink Begin";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  iVar5 = (int)this_01;
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar5,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Shrink Center";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar5,(String *)0x4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Shrink End";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar5,(String *)0x8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_02 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  ControlEditorPresetPicker::_add_separator
            ((ControlEditorPresetPicker *)this,this_01,(Separator *)this_02);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Fill";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  ControlEditorPresetPicker::_add_row_button((HBoxContainer *)this,iVar5,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_03 = (CheckButton *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckButton::CheckButton(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  *(CheckButton **)(this + 0xa40) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa40),0));
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa40);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Expand";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa40);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Enable to also set the Expand flag.\nDisable to only set Shrink/Fill flags.";
  local_68 = 0;
  local_50 = 0x4a;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_04 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_04);
  *(undefined **)(this_04 + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this_04 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_04 = &PTR_hash_00122670;
  *(undefined8 *)(this_04 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_04 + 0x10) = 0;
  *(undefined8 *)(this_04 + 0x30) = uVar4;
  *(code **)(this_04 + 0x38) = _expand_button_pressed;
  *(SizeFlagPresetPicker **)(this_04 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_04,(int)this_04 + 0x28);
  *(char **)(this_04 + 0x20) = "SizeFlagPresetPicker::_expand_button_pressed";
  Callable::Callable((Callable *)&local_58,this_04);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_00,*(undefined8 *)(this + 0xa40),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorToolbar::ControlEditorToolbar() */

void __thiscall ControlEditorToolbar::ControlEditorToolbar(ControlEditorToolbar *this)

{
  code *pcVar1;
  undefined8 uVar2;
  String *pSVar3;
  long *plVar4;
  Object *pOVar5;
  ControlEditorPopupButton *pCVar6;
  Label *pLVar7;
  AnchorPresetPicker *this_00;
  CallableCustom *pCVar8;
  HSeparator *pHVar9;
  Button *pBVar10;
  SizeFlagPresetPicker *pSVar11;
  bool bVar12;
  long in_FS_OFFSET;
  long local_70;
  long local_68 [2];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa0c] = (ControlEditorToolbar)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00120658;
  this[0xa40] = (ControlEditorToolbar)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  pCVar6 = (ControlEditorPopupButton *)operator_new(0xc28,"");
  ControlEditorPopupButton::ControlEditorPopupButton(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  *(ControlEditorPopupButton **)(this + 0xa18) = pCVar6;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,"Presets for the anchor and offset values of a Control node.");
  TTR((String *)&local_70,(String *)local_68);
  Control::set_tooltip_text((String *)pCVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Anchor preset");
  TTR((String *)&local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa18) + 0xc20),pLVar7,0,0);
  this_00 = (AnchorPresetPicker *)operator_new(0xa40,"");
  AnchorPresetPicker::AnchorPresetPicker(this_00);
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,4);
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa18) + 0xc20),this_00,0,0);
  pcVar1 = *(code **)(*(long *)this_00 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(ControlEditorToolbar **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC4;
  *(undefined ***)pCVar8 = &PTR_hash_00122700;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar2;
  *(code **)(pCVar8 + 0x38) = _anchors_preset_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ControlEditorToolbar::_anchors_preset_selected";
  Callable::Callable((Callable *)local_58,pCVar8);
  StringName::StringName((StringName *)local_68,"anchors_preset_selected",false);
  (*pcVar1)(this_00,(String *)local_68,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  uVar2 = *(undefined8 *)(*(long *)(this + 0xa18) + 0xc20);
  pHVar9 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar9);
  postinitialize_handler((Object *)pHVar9);
  Node::add_child(uVar2,pHVar9,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar10,(String *)local_58);
  postinitialize_handler((Object *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Button::set_text_alignment(pBVar10,0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Set to Current Ratio");
  TTR((String *)&local_70,(String *)local_68);
  Button::set_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,"Adjust anchors and offsets to match the current rect size.");
  TTR((String *)&local_70,(String *)local_68);
  Control::set_tooltip_text((String *)pBVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa18) + 0xc20),pBVar10,0,0);
  pcVar1 = *(code **)(*(long *)pBVar10 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void *)"&ControlEditorToolbar::_anchors_to_current_ratio");
  (*pcVar1)(pBVar10,SceneStringNames::singleton + 0x238,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar10,(String *)local_58);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa28) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa28));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa28),0));
  pSVar3 = *(String **)(this + 0xa28);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "When active, moving Control nodes changes their anchors instead of their offsets.");
  TTR((String *)&local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa28),0,0);
  plVar4 = *(long **)(this + 0xa28);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(ControlEditorToolbar **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC4;
  *(undefined ***)pCVar8 = &PTR_hash_00122820;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar2;
  *(code **)(pCVar8 + 0x38) = _anchor_mode_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ControlEditorToolbar::_anchor_mode_toggled";
  Callable::Callable((Callable *)local_58,pCVar8);
  (*pcVar1)(plVar4,SceneStringNames::singleton + 0x248,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pCVar6 = (ControlEditorPopupButton *)operator_new(0xc28,"");
  ControlEditorPopupButton::ControlEditorPopupButton(pCVar6);
  postinitialize_handler((Object *)pCVar6);
  *(ControlEditorPopupButton **)(this + 0xa20) = pCVar6;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Sizing settings for children of a Container node.");
  TTR((String *)&local_70,(String *)local_68);
  Control::set_tooltip_text((String *)pCVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Horizontal alignment");
  TTR((String *)&local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa20) + 0xc20),pLVar7,0,0);
  pSVar11 = (SizeFlagPresetPicker *)operator_new(0xa50,"");
  SizeFlagPresetPicker::SizeFlagPresetPicker(pSVar11,false);
  postinitialize_handler((Object *)pSVar11);
  *(SizeFlagPresetPicker **)(this + 0xa30) = pSVar11;
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa20) + 0xc20),pSVar11,0,0);
  plVar4 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar,int,bool>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void_int_bool *)"&ControlEditorToolbar::_container_flags_selected");
  bVar12 = SUB81((String *)local_68,0);
  Callable::bind<bool>(bVar12);
  StringName::StringName((StringName *)&local_70,"size_flags_selected",false);
  (*pcVar1)(plVar4,(String *)&local_70,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar4 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar,bool,bool>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void_bool_bool *)"&ControlEditorToolbar::_expand_flag_toggled");
  Callable::bind<bool>(bVar12);
  StringName::StringName((StringName *)&local_70,"expand_flag_toggled",false);
  (*pcVar1)(plVar4,(String *)&local_70,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  uVar2 = *(undefined8 *)(*(long *)(this + 0xa20) + 0xc20);
  pHVar9 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar9);
  postinitialize_handler((Object *)pHVar9);
  Node::add_child(uVar2,pHVar9,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Vertical alignment");
  TTR((String *)&local_70,(String *)local_68);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa20) + 0xc20),pLVar7,0,0);
  pSVar11 = (SizeFlagPresetPicker *)operator_new(0xa50,"");
  SizeFlagPresetPicker::SizeFlagPresetPicker(pSVar11,true);
  postinitialize_handler((Object *)pSVar11);
  *(SizeFlagPresetPicker **)(this + 0xa38) = pSVar11;
  Node::add_child(*(undefined8 *)(*(long *)(this + 0xa20) + 0xc20),pSVar11,0,0);
  plVar4 = *(long **)(this + 0xa38);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar,int,bool>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void_int_bool *)"&ControlEditorToolbar::_container_flags_selected");
  Callable::bind<bool>(bVar12);
  StringName::StringName((StringName *)&local_70,"size_flags_selected",false);
  (*pcVar1)(plVar4,(String *)&local_70,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar4 = *(long **)(this + 0xa38);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar,bool,bool>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void_bool_bool *)"&ControlEditorToolbar::_expand_flag_toggled");
  Callable::bind<bool>(bVar12);
  StringName::StringName((StringName *)&local_70,"expand_flag_toggled",false);
  (*pcVar1)(plVar4,(String *)&local_70,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pOVar5 = *(Object **)(EditorNode::singleton + 0x608);
  *(Object **)(this + 0xa10) = pOVar5;
  EditorSelection::add_editor_plugin(pOVar5);
  plVar4 = *(long **)(this + 0xa10);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<ControlEditorToolbar>
            ((ControlEditorToolbar *)local_58,(char *)this,
             (_func_void *)"&ControlEditorToolbar::_selection_changed");
  StringName::StringName((StringName *)local_68,"selection_changed",false);
  (*pcVar1)(plVar4,(String *)local_68,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  singleton = this;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPlugin::ControlEditorPlugin() */

void __thiscall ControlEditorPlugin::ControlEditorPlugin(ControlEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  ControlEditorToolbar *this_00;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (ControlEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (ControlEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001209d0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (ControlEditorToolbar *)operator_new(0xa48,"");
  ControlEditorToolbar::ControlEditorToolbar(this_00);
  postinitialize_handler((Object *)this_00);
  *(ControlEditorToolbar **)(this + 0x660) = this_00;
  CanvasItem::hide();
  EditorPlugin::add_control_to_container(this,5,*(undefined8 *)(this + 0x660));
  local_30 = (Object *)0x0;
  Ref<EditorInspectorPluginControl>::instantiate<>((Ref<EditorInspectorPluginControl> *)&local_30);
  pOVar1 = local_30;
  local_28 = (Object *)0x0;
  if (local_30 == (Object *)0x0) {
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) goto LAB_001051eb;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_30,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0)
    ;
    if ((pOVar3 != (Object *)0x0) &&
       (local_28 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_28 = (Object *)0x0;
    }
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
LAB_001051eb:
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (pOVar1 == (Object *)0x0) goto LAB_00105206;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_001052b2;
    }
  }
LAB_00105206:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001052b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SizeFlagPresetPicker::set_allowed_flags(Vector<Control::SizeFlags>&) */

void __thiscall SizeFlagPresetPicker::set_allowed_flags(SizeFlagPresetPicker *this,Vector *param_1)

{
  HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
  *this_00;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  this_00 = (HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             *)(this + 0xa10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)((ulong)local_48 & 0xffffffff00000000);
  puVar2 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this_00,(int *)&local_48);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 0) break;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_disabled(SUB81(*puVar2,0));
  local_48._0_4_ = 4;
  puVar2 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this_00,(int *)&local_48);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 4) break;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_disabled(SUB81(*puVar2,0));
  local_48._0_4_ = 8;
  puVar2 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this_00,(int *)&local_48);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 8) break;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_disabled(SUB81(*puVar2,0));
  local_48 = (char *)CONCAT44(local_48._4_4_,1);
  puVar2 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this_00,(int *)&local_48);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 1) break;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_disabled(SUB81(*puVar2,0));
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 2) break;
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa40),0));
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + lVar3 * 4) == 2) {
        pSVar4 = *(String **)(this + 0xa40);
        local_50 = 0;
        local_48 = "";
        local_40 = 0;
        String::parse_latin1((StrRange *)&local_50);
        local_58 = 0;
        local_48 = "Enable to also set the Expand flag.\nDisable to only set Shrink/Fill flags.";
        local_40 = 0x4a;
        String::parse_latin1((StrRange *)&local_58);
        goto LAB_0010550b;
      }
      lVar3 = lVar3 + 1;
    } while (*(long *)(lVar1 + -8) != lVar3);
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa40),0));
  pSVar4 = *(String **)(this + 0xa40);
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"");
  local_58 = 0;
  String::parse_latin1
            ((String *)&local_58,
             "Some parents of the selected nodes do not support the Expand flag.");
LAB_0010550b:
  TTR((String *)&local_48,(String *)&local_58);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ControlEditorToolbar::_anchors_preset_selected(int) */

void __thiscall
ControlEditorToolbar::_anchors_preset_selected(ControlEditorToolbar *this,int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  Object *pOVar9;
  StringName *pSVar10;
  long lVar11;
  long in_FS_OFFSET;
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
  puVar6 = (undefined8 *)EditorSelection::get_selected_node_list();
  pauVar7 = (undefined1 (*) [16])*puVar6;
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    puVar6 = *(undefined8 **)*pauVar7;
    if (puVar6 == (undefined8 *)0x0) {
      pauVar7 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
      do {
        while( true ) {
          puVar8 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar2 = *puVar6;
          puVar8[1] = 0;
          *puVar8 = uVar2;
          lVar11 = *(long *)(*pauVar7 + 8);
          puVar8[3] = pauVar7;
          puVar8[2] = lVar11;
          if (lVar11 != 0) {
            *(undefined8 **)(lVar11 + 8) = puVar8;
          }
          lVar11 = *(long *)*pauVar7;
          *(undefined8 **)(*pauVar7 + 8) = puVar8;
          if (lVar11 != 0) break;
          puVar6 = (undefined8 *)puVar6[1];
          *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
          *(undefined8 **)*pauVar7 = puVar8;
          if (puVar6 == (undefined8 *)0x0) goto LAB_0010569f;
        }
        puVar6 = (undefined8 *)puVar6[1];
        *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
LAB_0010569f:
  pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
  local_98 = "";
  local_a0 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Change Anchors, Offsets, Grow Direction";
  local_a8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar9,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    for (plVar3 = *(long **)*pauVar7; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      if ((*plVar3 != 0) &&
         (pSVar10 = (StringName *)__dynamic_cast(*plVar3,&Object::typeinfo,&Control::typeinfo,0),
         pSVar10 != (StringName *)0x0)) {
        Variant::Variant((Variant *)local_78,1);
        StringName::StringName((StringName *)&local_98,"layout_mode",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar10,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,param_1);
        StringName::StringName((StringName *)&local_98,"anchors_preset",false);
        EditorUndoRedoManager::add_do_property(pOVar9,pSVar10,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)pSVar10 + 0x1e0))((StrRange *)&local_a0,pSVar10);
        StringName::StringName((StringName *)&local_98,"_edit_set_state",false);
        Variant::Variant((Variant *)local_78,(Dictionary *)&local_a0);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(pOVar9,pSVar10,(Variant **)&local_98,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        Dictionary::~Dictionary((Dictionary *)&local_a0);
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
  this[0xa40] = (ControlEditorToolbar)0x0;
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
  if (pauVar7 == (undefined1 (*) [16])0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    do {
      while( true ) {
        pvVar4 = *(void **)*pauVar7;
        if (pvVar4 == (void *)0x0) {
          if (*(int *)pauVar7[1] != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              return;
            }
            goto LAB_001059af;
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001059d9;
          goto LAB_001059af;
        }
        if (pauVar7 != *(undefined1 (**) [16])((long)pvVar4 + 0x18)) break;
        lVar11 = *(long *)((long)pvVar4 + 8);
        lVar5 = *(long *)((long)pvVar4 + 0x10);
        *(long *)*pauVar7 = lVar11;
        if (pvVar4 == *(void **)(*pauVar7 + 8)) {
          *(long *)(*pauVar7 + 8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = lVar11;
          lVar11 = *(long *)((long)pvVar4 + 8);
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar5;
        }
        Memory::free_static(pvVar4,false);
        pauVar1 = pauVar7 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_00105999;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar7[1] != 0);
LAB_00105999:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001059d9:
      Memory::free_static(pauVar7,false);
      return;
    }
  }
LAB_001059af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorToolbar::_anchors_to_current_ratio() */

void __thiscall ControlEditorToolbar::_anchors_to_current_ratio(ControlEditorToolbar *this)

{
  Variant *pVVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  code *pcVar4;
  void *pvVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  Object *pOVar11;
  StringName *pSVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_320;
  undefined8 local_318;
  long local_310;
  Variant *local_308;
  Variant *pVStack_300;
  Variant *local_2f8;
  Variant *pVStack_2f0;
  Variant local_2d8 [24];
  Variant local_2c0 [24];
  undefined8 local_2a8;
  undefined1 local_2a0 [16];
  Variant local_290 [8];
  Variant local_288 [24];
  Variant local_270 [24];
  undefined8 local_258;
  undefined1 local_250 [16];
  Variant local_240 [8];
  Variant *local_238;
  Variant *pVStack_230;
  Variant *local_228;
  Variant *apVStack_220 [3];
  Variant local_208 [24];
  Variant local_1f0 [24];
  undefined8 local_1d8;
  undefined1 local_1d0 [16];
  Variant local_1c0 [8];
  Variant *local_1b8;
  Variant *pVStack_1b0;
  Variant *local_1a8;
  Variant *apVStack_1a0 [3];
  Variant local_188 [24];
  Variant local_170 [24];
  undefined8 local_158;
  undefined1 local_150 [16];
  Variant local_140 [8];
  Variant *local_138;
  Variant *pVStack_130;
  Variant *local_128;
  Variant *apVStack_120 [3];
  Variant local_108 [24];
  Variant local_f0 [24];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  Variant local_c0 [8];
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = (undefined8 *)EditorSelection::get_selected_node_list();
  pauVar9 = (undefined1 (*) [16])*puVar8;
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    puVar8 = *(undefined8 **)*pauVar9;
    if (puVar8 == (undefined8 *)0x0) {
      pauVar9 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
      do {
        while( true ) {
          puVar10 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar17 = *puVar8;
          puVar10[1] = 0;
          *puVar10 = uVar17;
          lVar13 = *(long *)(*pauVar9 + 8);
          puVar10[3] = pauVar9;
          puVar10[2] = lVar13;
          if (lVar13 != 0) {
            *(undefined8 **)(lVar13 + 8) = puVar10;
          }
          lVar13 = *(long *)*pauVar9;
          *(undefined8 **)(*pauVar9 + 8) = puVar10;
          if (lVar13 != 0) break;
          puVar8 = (undefined8 *)puVar8[1];
          *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
          *(undefined8 **)*pauVar9 = puVar10;
          if (puVar8 == (undefined8 *)0x0) goto LAB_00105daa;
        }
        puVar8 = (undefined8 *)puVar8[1];
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
LAB_00105daa:
  pOVar11 = (Object *)EditorUndoRedoManager::get_singleton();
  local_318 = 0;
  String::parse_latin1((String *)&local_318,"");
  local_320 = 0;
  String::parse_latin1((String *)&local_320,"Change Anchors, Offsets (Keep Ratio)");
  TTR((String *)&local_310,(String *)&local_320);
  EditorUndoRedoManager::create_action(pOVar11,(String *)&local_310,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_310);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    for (plVar3 = *(long **)*pauVar9; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      if ((*plVar3 != 0) &&
         (pSVar12 = (StringName *)__dynamic_cast(*plVar3,&Object::typeinfo,&Control::typeinfo,0),
         pSVar12 != (StringName *)0x0)) {
        uVar17 = _position_to_anchor((ControlEditorToolbar *)0x0,this,pSVar12);
        Control::get_size();
        uVar18 = _position_to_anchor(this,pSVar12);
        StringName::StringName((StringName *)&local_310,"set_anchor",false);
        Variant::Variant((Variant *)&local_238,0);
        Variant::Variant((Variant *)apVStack_220,(float)uVar17);
        Variant::Variant(local_208,false);
        Variant::Variant(local_1f0,true);
        local_1d0 = (undefined1  [16])0x0;
        local_1d8 = 0;
        local_308 = (Variant *)&local_238;
        pVStack_300 = (Variant *)apVStack_220;
        local_2f8 = local_208;
        pVStack_2f0 = local_1f0;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar11,pSVar12,(Variant **)&local_310,(int)&local_308);
        pVVar16 = local_1c0;
        do {
          pVVar1 = pVVar16 + -0x18;
          pVVar16 = pVVar16 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar16 != (Variant *)&local_238);
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_310,"set_anchor",false);
        Variant::Variant((Variant *)&local_1b8,2);
        Variant::Variant((Variant *)apVStack_1a0,(float)uVar18);
        Variant::Variant(local_188,false);
        Variant::Variant(local_170,true);
        local_150 = (undefined1  [16])0x0;
        local_158 = 0;
        local_238 = (Variant *)&local_1b8;
        pVStack_230 = (Variant *)apVStack_1a0;
        local_228 = local_188;
        apVStack_220[0] = local_170;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar11,pSVar12,(Variant **)&local_310,(int)(Variant *)&local_238);
        pVVar16 = local_140;
        do {
          pVVar1 = pVVar16 + -0x18;
          pVVar16 = pVVar16 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar16 != (Variant *)&local_1b8);
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_310,"set_anchor",false);
        Variant::Variant((Variant *)&local_138,1);
        pVVar16 = local_c0;
        Variant::Variant((Variant *)apVStack_120,(float)((ulong)uVar17 >> 0x20));
        Variant::Variant(local_108,false);
        Variant::Variant(local_f0,true);
        local_d0 = (undefined1  [16])0x0;
        local_d8 = 0;
        local_1b8 = (Variant *)&local_138;
        pVStack_1b0 = (Variant *)apVStack_120;
        local_1a8 = local_108;
        apVStack_1a0[0] = local_f0;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar11,pSVar12,(Variant **)&local_310,(int)(Variant *)&local_1b8);
        do {
          pVVar1 = pVVar16 + -0x18;
          pVVar16 = pVVar16 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar16 != (Variant *)&local_138);
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_310,"set_anchor",false);
        pVVar16 = (Variant *)local_40;
        Variant::Variant((Variant *)&local_b8,3);
        Variant::Variant((Variant *)&local_a0,(float)((ulong)uVar18 >> 0x20));
        Variant::Variant(local_88,false);
        Variant::Variant(local_70,true);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        iVar14 = (int)(Variant *)&local_138;
        local_138 = (Variant *)&local_b8;
        pVStack_130 = (Variant *)&local_a0;
        local_128 = local_88;
        apVStack_120[0] = local_70;
        EditorUndoRedoManager::add_do_methodp(pOVar11,pSVar12,(Variant **)&local_310,iVar14);
        do {
          pVVar1 = pVVar16 + -0x18;
          pVVar16 = pVVar16 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar16 != (Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_310,"set_meta",false);
        pVVar16 = local_290;
        Variant::Variant(local_2d8,"_edit_use_anchors_");
        Variant::Variant(local_2c0,true);
        local_2a8 = 0;
        local_2a0 = (undefined1  [16])0x0;
        iVar15 = (int)(Variant *)&local_b8;
        local_b8 = local_2d8;
        pVStack_b0 = local_2c0;
        EditorUndoRedoManager::add_do_methodp(pOVar11,pSVar12,(Variant **)&local_310,iVar15);
        do {
          pVVar1 = pVVar16 + -0x18;
          pVVar16 = pVVar16 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar16 != local_2d8);
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        pcVar4 = *(code **)(*(long *)pSVar12 + 0xb8);
        Variant::Variant((Variant *)&local_138,false);
        StringName::StringName((StringName *)&local_310,"_edit_use_anchors_",false);
        (*pcVar4)((Variant *)&local_b8,pSVar12,(String *)&local_310,(Variant *)&local_138);
        bVar7 = Variant::operator_cast_to_bool((Variant *)&local_b8);
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_138] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)pSVar12 + 0x1e0))((String *)&local_318,pSVar12);
        StringName::StringName((StringName *)&local_310,"_edit_set_state",false);
        Variant::Variant((Variant *)&local_b8,(Dictionary *)&local_318);
        local_a0 = 0;
        local_98 = (undefined1  [16])0x0;
        local_138 = (Variant *)&local_b8;
        EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar12,(Variant **)&local_310,iVar14);
        if (Variant::needs_deinit[(int)local_a0] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        Dictionary::~Dictionary((Dictionary *)&local_318);
        if (bVar7) {
          StringName::StringName((StringName *)&local_310,"set_meta",false);
          Variant::Variant(local_288,"_edit_use_anchors_");
          Variant::Variant(local_270,true);
          local_250 = (undefined1  [16])0x0;
          pVVar16 = local_240;
          local_258 = 0;
          local_b8 = local_288;
          pVStack_b0 = local_270;
          EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar12,(Variant **)&local_310,iVar15);
          do {
            pVVar1 = pVVar16 + -0x18;
            pVVar16 = pVVar16 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar16 != local_288);
        }
        else {
          StringName::StringName((StringName *)&local_310,"remove_meta",false);
          Variant::Variant((Variant *)&local_b8,"_edit_use_anchors_");
          local_a0 = 0;
          local_98 = (undefined1  [16])0x0;
          local_138 = (Variant *)&local_b8;
          EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar12,(Variant **)&local_310,iVar14);
          if (Variant::needs_deinit[(int)local_a0] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        if ((StringName::configured != '\0') && (local_310 != 0)) {
          StringName::unref();
        }
        this[0xa40] = (ControlEditorToolbar)0x1;
        BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar11,0));
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar5 = *(void **)*pauVar9;
        if (pvVar5 == (void *)0x0) {
          if (*(int *)pauVar9[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00106606;
          }
          goto LAB_001065fc;
        }
        if (pauVar9 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
        lVar13 = *(long *)((long)pvVar5 + 8);
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        *(long *)*pauVar9 = lVar13;
        if (pvVar5 == *(void **)(*pauVar9 + 8)) {
          *(long *)(*pauVar9 + 8) = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = lVar13;
          lVar13 = *(long *)((long)pvVar5 + 8);
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x10) = lVar6;
        }
        Memory::free_static(pvVar5,false);
        pauVar2 = pauVar9 + 1;
        *(int *)*pauVar2 = *(int *)*pauVar2 + -1;
        if (*(int *)*pauVar2 == 0) goto LAB_001065fc;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar9[1] != 0);
LAB_001065fc:
    Memory::free_static(pauVar9,false);
  }
LAB_00106606:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorToolbar::_container_flags_selected(int, bool) */

void __thiscall
ControlEditorToolbar::_container_flags_selected(ControlEditorToolbar *this,int param_1,bool param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  Object *pOVar9;
  StringName *pSVar10;
  long lVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  int local_b4;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined8 *)EditorSelection::get_selected_node_list();
  pauVar7 = (undefined1 (*) [16])*puVar6;
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    puVar6 = *(undefined8 **)*pauVar7;
    if (puVar6 == (undefined8 *)0x0) {
      pauVar7 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
      do {
        while( true ) {
          puVar8 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar2 = *puVar6;
          puVar8[1] = 0;
          *puVar8 = uVar2;
          lVar11 = *(long *)(*pauVar7 + 8);
          puVar8[3] = pauVar7;
          puVar8[2] = lVar11;
          if (lVar11 != 0) {
            *(undefined8 **)(lVar11 + 8) = puVar8;
          }
          lVar11 = *(long *)*pauVar7;
          *(undefined8 **)(*pauVar7 + 8) = puVar8;
          if (lVar11 != 0) break;
          puVar6 = (undefined8 *)puVar6[1];
          *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
          *(undefined8 **)*pauVar7 = puVar8;
          if (puVar6 == (undefined8 *)0x0) goto LAB_0010691e;
        }
        puVar6 = (undefined8 *)puVar6[1];
        *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
LAB_0010691e:
  pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
  local_98 = 0;
  if (param_2) {
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Change Vertical Size Flags");
    TTR((String *)&local_90,(String *)&local_a0);
  }
  else {
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Change Horizontal Size Flags");
    TTR((String *)&local_90,(String *)&local_a0);
  }
  EditorUndoRedoManager::create_action(pOVar9,(CowData<char32_t> *)&local_90,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    for (plVar3 = *(long **)*pauVar7; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      if ((*plVar3 != 0) &&
         (pSVar10 = (StringName *)__dynamic_cast(*plVar3,&Object::typeinfo,&Control::typeinfo,0),
         pSVar10 != (StringName *)0x0)) {
        if (param_2) {
          local_b4 = Control::get_v_size_flags();
          StringName::StringName((StringName *)&local_90,"set_v_size_flags",false);
          Variant::Variant((Variant *)local_78,param_1);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_do_methodp(pOVar9,pSVar10,(Variant **)&local_90,(int)local_88);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          pcVar12 = "set_v_size_flags";
        }
        else {
          local_b4 = Control::get_h_size_flags();
          StringName::StringName((StringName *)&local_90,"set_h_size_flags",false);
          Variant::Variant((Variant *)local_78,param_1);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_do_methodp(pOVar9,pSVar10,(Variant **)&local_90,(int)local_88);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          pcVar12 = "set_h_size_flags";
        }
        StringName::StringName((StringName *)&local_90,pcVar12,false);
        Variant::Variant((Variant *)local_78,local_b4);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(pOVar9,pSVar10,(Variant **)&local_90,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
  if (pauVar7 == (undefined1 (*) [16])0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    do {
      while( true ) {
        pvVar4 = *(void **)*pauVar7;
        if (pvVar4 == (void *)0x0) {
          if (*(int *)pauVar7[1] != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              return;
            }
            goto LAB_00106dce;
          }
          goto LAB_00106c41;
        }
        if (pauVar7 != *(undefined1 (**) [16])((long)pvVar4 + 0x18)) break;
        lVar11 = *(long *)((long)pvVar4 + 8);
        lVar5 = *(long *)((long)pvVar4 + 0x10);
        *(long *)*pauVar7 = lVar11;
        if (pvVar4 == *(void **)(*pauVar7 + 8)) {
          *(long *)(*pauVar7 + 8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = lVar11;
          lVar11 = *(long *)((long)pvVar4 + 8);
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar5;
        }
        Memory::free_static(pvVar4,false);
        pauVar1 = pauVar7 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_00106c41;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar7[1] != 0);
LAB_00106c41:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pauVar7,false);
      return;
    }
  }
LAB_00106dce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorToolbar::_expand_flag_toggled(bool, bool) */

void __thiscall
ControlEditorToolbar::_expand_flag_toggled(ControlEditorToolbar *this,bool param_1,bool param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  Object *pOVar10;
  StringName *pSVar11;
  long lVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  uint local_b4;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined8 *)EditorSelection::get_selected_node_list();
  pauVar8 = (undefined1 (*) [16])*puVar7;
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    puVar7 = *(undefined8 **)*pauVar8;
    if (puVar7 == (undefined8 *)0x0) {
      pauVar8 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar8[1] = 0;
      *pauVar8 = (undefined1  [16])0x0;
      do {
        while( true ) {
          puVar9 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar2 = *puVar7;
          puVar9[1] = 0;
          *puVar9 = uVar2;
          lVar12 = *(long *)(*pauVar8 + 8);
          puVar9[3] = pauVar8;
          puVar9[2] = lVar12;
          if (lVar12 != 0) {
            *(undefined8 **)(lVar12 + 8) = puVar9;
          }
          lVar12 = *(long *)*pauVar8;
          *(undefined8 **)(*pauVar8 + 8) = puVar9;
          if (lVar12 != 0) break;
          puVar7 = (undefined8 *)puVar7[1];
          *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
          *(undefined8 **)*pauVar8 = puVar9;
          if (puVar7 == (undefined8 *)0x0) goto LAB_00106ede;
        }
        puVar7 = (undefined8 *)puVar7[1];
        *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
      } while (puVar7 != (undefined8 *)0x0);
    }
  }
LAB_00106ede:
  pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
  local_98 = 0;
  if (param_2) {
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Change Vertical Expand Flag");
    TTR((String *)&local_90,(String *)&local_a0);
  }
  else {
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Change Horizontal Expand Flag");
    TTR((String *)&local_90,(String *)&local_a0);
  }
  EditorUndoRedoManager::create_action(pOVar10,(CowData<char32_t> *)&local_90,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    for (plVar3 = *(long **)*pauVar8; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      if ((*plVar3 != 0) &&
         (pSVar11 = (StringName *)__dynamic_cast(*plVar3,&Object::typeinfo,&Control::typeinfo,0),
         pSVar11 != (StringName *)0x0)) {
        if (param_2) {
          local_b4 = Control::get_v_size_flags();
          uVar6 = local_b4 | 2;
          if (!param_1) {
            uVar6 = local_b4 & 0xfffffffd;
          }
          StringName::StringName((StringName *)&local_90,"set_v_size_flags",false);
          Variant::Variant((Variant *)local_78,uVar6);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar11,(Variant **)&local_90,(int)local_88)
          ;
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          pcVar13 = "set_v_size_flags";
        }
        else {
          local_b4 = Control::get_h_size_flags();
          uVar6 = local_b4 & 0xfffffffd;
          if (param_1) {
            uVar6 = local_b4 | 2;
          }
          StringName::StringName((StringName *)&local_90,"set_h_size_flags",false);
          Variant::Variant((Variant *)local_78,uVar6);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar11,(Variant **)&local_90,(int)local_88)
          ;
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_90 != 0)) {
            StringName::unref();
          }
          pcVar13 = "set_h_size_flags";
        }
        StringName::StringName((StringName *)&local_90,pcVar13,false);
        Variant::Variant((Variant *)local_78,local_b4);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(pOVar10,pSVar11,(Variant **)&local_90,(int)local_88)
        ;
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
  if (pauVar8 == (undefined1 (*) [16])0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    do {
      while( true ) {
        pvVar4 = *(void **)*pauVar8;
        if (pvVar4 == (void *)0x0) {
          if (*(int *)pauVar8[1] != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              return;
            }
            goto LAB_001073be;
          }
          goto LAB_0010722a;
        }
        if (pauVar8 != *(undefined1 (**) [16])((long)pvVar4 + 0x18)) break;
        lVar12 = *(long *)((long)pvVar4 + 8);
        lVar5 = *(long *)((long)pvVar4 + 0x10);
        *(long *)*pauVar8 = lVar12;
        if (pvVar4 == *(void **)(*pauVar8 + 8)) {
          *(long *)(*pauVar8 + 8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = lVar12;
          lVar12 = *(long *)((long)pvVar4 + 8);
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x10) = lVar5;
        }
        Memory::free_static(pvVar4,false);
        pauVar1 = pauVar8 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_0010722a;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar8[1] != 0);
LAB_0010722a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pauVar8,false);
      return;
    }
  }
LAB_001073be:
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
        if ((code *)PTR__bind_methods_0012a010 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"CanvasItem");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CanvasItem::_bind_methods();
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
        CanvasItem::_bind_compatibility_methods();
      }
      CanvasItem::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    local_58 = "CanvasItem";
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
  if ((code *)PTR__bind_methods_0012a008 != Control::_bind_methods) {
    Container::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SizeFlagPresetPicker::_bind_methods() */

void SizeFlagPresetPicker::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  PropertyInfo local_e8 [48];
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "size_flags";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,2,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "size_flags_selected";
  local_100 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "SizeFlagPresetPicker";
  local_120 = 0;
  local_f0 = 0x14;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = "expand_flag";
  local_118 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,1,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "expand_flag_toggled";
  local_100 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "SizeFlagPresetPicker";
  local_120 = 0;
  local_f0 = 0x14;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnchorPresetPicker::_bind_methods() */

void AnchorPresetPicker::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  PropertyInfo local_e8 [8];
  CowData<char32_t> local_e0 [8];
  long local_d8;
  CowData<char32_t> local_c8 [16];
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "preset";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,2,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_100 = 0;
  local_b8 = "anchors_preset_selected";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "AnchorPresetPicker";
  local_120 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::_update_warning() */

void __thiscall ControlPositioningWarning::_update_warning(ControlPositioningWarning *this)

{
  Ref *pRVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  String *pSVar8;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa10) == 0) {
    local_48 = (Object *)0x0;
    TextureRect::set_texture(*(Ref **)(this + 0xa28));
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    pSVar8 = *(String **)(this + 0xa38);
    local_48 = (Object *)0x0;
    String::parse_latin1((String *)&local_48,"");
    Label::set_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pSVar8 = *(String **)(this + 0xa40);
    local_48 = (Object *)0x0;
    String::parse_latin1((String *)&local_48,"");
    Label::set_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    lVar6 = Control::get_parent_control();
    if (lVar6 == 0) {
      pRVar1 = *(Ref **)(this + 0xa28);
      if (_update_warning()::{lambda()#1}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_update_warning()::{lambda()#1}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_update_warning()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_update_warning()::{lambda()#1}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&_update_warning()::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_48);
      TextureRect::set_texture(pRVar1);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      pSVar8 = *(String **)(this + 0xa38);
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"This node doesn\'t have a control parent.");
      TTR((String *)&local_48,(String *)&local_58);
      Label::set_text(pSVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = 0;
      pSVar8 = *(String **)(this + 0xa40);
      String::parse_latin1((String *)&local_50,"");
      pcVar7 = "Use the appropriate layout properties depending on where you are going to put it.";
    }
    else {
      lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&Container::typeinfo,0);
      pRVar1 = *(Ref **)(this + 0xa28);
      if (lVar6 == 0) {
        if (_update_warning()::{lambda()#3}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_update_warning()::{lambda()#3}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_update_warning()::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_warning()::{lambda()#3}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_update_warning()::{lambda()#3}::operator()()::sname);
          }
        }
        Control::get_editor_theme_icon((StringName *)&local_48);
        TextureRect::set_texture(pRVar1);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
        pSVar8 = *(String **)(this + 0xa38);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"This node is a child of a regular control.");
        TTR((String *)&local_48,(String *)&local_58);
        Label::set_text(pSVar8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        local_50 = 0;
        pSVar8 = *(String **)(this + 0xa40);
        String::parse_latin1((String *)&local_50,"");
        pcVar7 = "Use anchors and the rectangle for positioning.";
      }
      else {
        if (_update_warning()::{lambda()#2}::operator()()::sname == '\0') {
          iVar5 = __cxa_guard_acquire(&_update_warning()::{lambda()#2}::operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&_update_warning()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_warning()::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_update_warning()::{lambda()#2}::operator()()::sname);
          }
        }
        Control::get_editor_theme_icon((StringName *)&local_48);
        TextureRect::set_texture(pRVar1);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
        pSVar8 = *(String **)(this + 0xa38);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"This node is a child of a container.");
        TTR((String *)&local_48,(String *)&local_58);
        Label::set_text(pSVar8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        local_50 = 0;
        pSVar8 = *(String **)(this + 0xa40);
        String::parse_latin1((String *)&local_50,"");
        pcVar7 = "Use container properties for positioning.";
      }
    }
    local_58 = 0;
    String::parse_latin1((String *)&local_58,pcVar7);
    TTR((String *)&local_48,(String *)&local_58);
    Label::set_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    pSVar2 = *(StringName **)(this + 0xa18);
    if (_update_warning()::{lambda()#5}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_update_warning()::{lambda()#5}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_update_warning()::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_warning()::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_warning()::{lambda()#5}::operator()()::sname);
      }
    }
    if (_update_warning()::{lambda()#4}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_update_warning()::{lambda()#4}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_update_warning()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_warning()::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_warning()::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_48,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
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
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::set_control(Control*) */

void __thiscall
ControlPositioningWarning::set_control(ControlPositioningWarning *this,Control *param_1)

{
  *(Control **)(this + 0xa10) = param_1;
  _update_warning(this);
  return;
}



/* EditorInspectorPluginControl::parse_group(Object*, String const&) */

void __thiscall
EditorInspectorPluginControl::parse_group
          (EditorInspectorPluginControl *this,Object *param_1,String *param_2)

{
  char cVar1;
  long lVar2;
  ControlPositioningWarning *this_00;
  
  if ((this[0x218] != (EditorInspectorPluginControl)0x0) && (param_1 != (Object *)0x0)) {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    if (lVar2 != 0) {
      cVar1 = String::operator!=(param_2,"Layout");
      if (cVar1 == '\0') {
        this_00 = (ControlPositioningWarning *)operator_new(0xa58,"");
        ControlPositioningWarning::ControlPositioningWarning(this_00);
        postinitialize_handler((Object *)this_00);
        *(long *)(this_00 + 0xa10) = lVar2;
        ControlPositioningWarning::_update_warning(this_00);
        EditorInspectorPlugin::add_custom_control((Control *)this);
        return;
      }
    }
  }
  return;
}



/* AnchorPresetPicker::_notification(int) [clone .part.0] */

void AnchorPresetPicker::_notification(int param_1)

{
  HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
  *this;
  Ref *pRVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_4c;
  StringName local_48 [8];
  long local_40;
  
  this = (HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
          *)(CONCAT44(in_register_0000003c,param_1) + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 5;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 1;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 4;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 8;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 6;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 2;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 7;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 3;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 10;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 0xe;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 0xc;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#12}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 9;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#13}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 0xd;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#14}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 0xb;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#15}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  local_4c = 0xf;
  puVar3 = (undefined8 *)
           HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
           ::operator[](this,&local_4c);
  pRVar1 = (Ref *)*puVar3;
  if (_notification(int)::{lambda()#16}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnchorPresetPicker::_notification(int) */

void __thiscall AnchorPresetPicker::_notification(AnchorPresetPicker *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification((int)this);
  return;
}



/* SizeFlagPresetPicker::_notification(int) [clone .part.0] */

void SizeFlagPresetPicker::_notification(int param_1)

{
  HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
  *this;
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 in_register_0000003c;
  char *pcVar4;
  Ref *pRVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  int local_4c;
  StringName local_48 [8];
  long local_40;
  
  this = (HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
          *)(CONCAT44(in_register_0000003c,param_1) + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  if (*(char *)(CONCAT44(in_register_0000003c,param_1) + 0xa48) == '\0') {
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 4;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 8;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 1;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if (_notification(int)::{lambda()#8}::operator()()::sname != '\0') goto LAB_00109722;
    puVar6 = &_notification(int)::{lambda()#8}::operator()()::sname;
    pcVar4 = (char *)&_notification(int)::{lambda()#8}::operator()()::sname;
    iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
    if (iVar1 == 0) goto LAB_00109722;
    uVar3 = 2;
  }
  else {
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 4;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 8;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar1 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_48);
    Button::set_button_icon(pRVar5);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
    local_4c = 1;
    puVar2 = (undefined8 *)
             HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             ::operator[](this,&local_4c);
    pRVar5 = (Ref *)*puVar2;
    if (_notification(int)::{lambda()#4}::operator()()::sname != '\0') goto LAB_00109722;
    puVar6 = &_notification(int)::{lambda()#4}::operator()()::sname;
    pcVar4 = (char *)&_notification(int)::{lambda()#4}::operator()()::sname;
    iVar1 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    uVar3 = 0x46;
    if (iVar1 == 0) goto LAB_00109722;
  }
  _scs_create(pcVar4,(bool)uVar3);
  __cxa_atexit(StringName::~StringName,pcVar4,&__dso_handle);
  __cxa_guard_release(puVar6);
LAB_00109722:
  Control::get_editor_theme_icon(local_48);
  Button::set_button_icon(pRVar5);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SizeFlagPresetPicker::_notification(int) */

void __thiscall SizeFlagPresetPicker::_notification(SizeFlagPresetPicker *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification((int)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControlEditorPopupButton::_notification(int) */

void __thiscall ControlEditorPopupButton::_notification(ControlEditorPopupButton *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  float extraout_XMM0_Db;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 10:
  case 0x2d:
    StringName::StringName((StringName *)&local_68,"Tree",false);
    StringName::StringName((StringName *)&local_70,"select_arrow",false);
    Control::get_theme_icon((StringName *)&local_60,(StringName *)this);
    lVar1 = *(long *)(this + 0xc10);
    if (local_60 != lVar1) {
      *(long *)(this + 0xc10) = local_60;
      local_58 = lVar1;
      if ((local_60 != 0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        *(undefined8 *)(this + 0xc10) = 0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_58);
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    if ((StringName::configured != '\0') &&
       (((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_68 != 0)
        ))) {
      StringName::unref();
    }
    break;
  case 0x1e:
    if (*(long *)(this + 0xc10) != 0) {
      fStack_4c = (float)EditorScale::get_scale();
      local_50 = fStack_4c * (float)_LC10;
      fStack_4c = fStack_4c * (float)((ulong)_LC10 >> 0x20);
      cVar3 = (**(code **)(*(long *)this + 0x340))(this);
      if (cVar3 != '\0') {
        fVar6 = (float)Control::get_size();
        fVar6 = fVar6 - local_50;
        iVar5 = (**(code **)(**(long **)(this + 0xc10) + 0x1c8))();
        local_50 = fVar6 - (float)iVar5;
      }
      Control::get_size();
      fVar6 = extraout_XMM0_Db * __LC202;
      iVar5 = (**(code **)(**(long **)(this + 0xc10) + 0x1d0))();
      _local_50 = CONCAT44(fVar6 - (float)(iVar5 / 2),local_50);
      local_48 = _LC204;
      uStack_44 = _LC204;
      uStack_40 = _LC204;
      uStack_3c = _LC204;
      CanvasItem::draw_texture((Ref *)this,this + 0xc10,(Color *)&local_50);
    }
    break;
  case 0x1f:
    cVar3 = CanvasItem::is_visible_in_tree();
    if (cVar3 == '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Window::hide();
        return;
      }
      goto LAB_00109dd6;
    }
    break;
  case 0x31:
    uVar2 = *(undefined8 *)(this + 0xc18);
    uVar4 = Control::get_layout_direction();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::set_layout_direction(uVar2,uVar4);
      return;
    }
    goto LAB_00109dd6;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109dd6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::_update_toggler() */

void __thiscall ControlPositioningWarning::_update_toggler(ControlPositioningWarning *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (char *)0x0;
  cVar1 = CanvasItem::is_visible();
  if (cVar1 != '\0') {
    if (_update_toggler()::{lambda()#2}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#2}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_update_toggler()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_toggler()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_toggler()::{lambda()#2}::operator()()::sname);
      }
    }
    if (_update_toggler()::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_update_toggler()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_toggler()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_toggler()::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_theme_icon((StringName *)&local_50,(StringName *)this);
    if (local_50 != local_60) {
      local_48 = local_60;
      local_60 = local_50;
      if (local_50 != (char *)0x0) {
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_60 = (char *)0x0;
        }
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    local_50 = (char *)0x0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Collapse positioning hint.");
    goto LAB_00109f60;
  }
  cVar1 = (**(code **)(*(long *)this + 0x340))(this);
  if (cVar1 == '\0') {
    if (_update_toggler()::{lambda()#6}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#6}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_update_toggler()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_toggler()::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_toggler()::{lambda()#6}::operator()()::sname);
      }
    }
    if (_update_toggler()::{lambda()#5}::operator()()::sname == '\0') {
      puVar5 = &_update_toggler()::{lambda()#5}::operator()()::sname;
      pcVar3 = (char *)&_update_toggler()::{lambda()#5}::operator()()::sname;
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#5}::operator()()::sname);
      if (iVar2 != 0) {
        uVar4 = 0xcc;
LAB_0010a026:
        _scs_create(pcVar3,(bool)uVar4);
        __cxa_atexit(StringName::~StringName,pcVar3,&__dso_handle);
        __cxa_guard_release(puVar5);
      }
    }
  }
  else {
    if (_update_toggler()::{lambda()#4}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#4}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_update_toggler()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_toggler()::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_toggler()::{lambda()#4}::operator()()::sname);
      }
    }
    if (_update_toggler()::{lambda()#3}::operator()()::sname == '\0') {
      puVar5 = &_update_toggler()::{lambda()#3}::operator()()::sname;
      pcVar3 = (char *)&_update_toggler()::{lambda()#3}::operator()()::sname;
      iVar2 = __cxa_guard_acquire(&_update_toggler()::{lambda()#3}::operator()()::sname);
      uVar4 = 0xbc;
      if (iVar2 != 0) goto LAB_0010a026;
    }
  }
  Control::get_theme_icon((StringName *)&local_50,(StringName *)this);
  if (local_50 != local_60) {
    local_48 = local_60;
    local_60 = local_50;
    if (local_50 != (char *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_60 = (char *)0x0;
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  local_48 = "";
  local_50 = (char *)0x0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_58 = 0;
  local_48 = "Expand positioning hint.";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
LAB_00109f60:
  TTR((String *)&local_48,(String *)&local_58);
  Control::set_tooltip_text((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  TextureRect::set_texture(*(Ref **)(this + 0xa30));
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::_notification(int) */

void __thiscall
ControlPositioningWarning::_notification(ControlPositioningWarning *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _update_warning(this);
  _update_toggler(this);
  return;
}



/* ControlPositioningWarning::gui_input(Ref<InputEvent> const&) */

void __thiscall ControlPositioningWarning::gui_input(ControlPositioningWarning *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  
  if (*(long *)param_1 != 0) {
    pOVar3 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = InputEvent::is_pressed();
        if (cVar1 != '\0') {
          iVar2 = InputEventMouseButton::get_button_index();
          if (iVar2 == 1) {
            CanvasItem::is_visible();
            CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa48),0));
            CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa40),0));
            CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa50),0));
            _update_toggler(this);
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            return;
          }
        }
      }
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



/* EditorPropertyAnchorsPreset::setup(Vector<String> const&) */

void __thiscall
EditorPropertyAnchorsPreset::setup(EditorPropertyAnchorsPreset *this,Vector *param_1)

{
  Ref *pRVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  Object *pOVar10;
  long lVar11;
  long in_FS_OFFSET;
  CowData<char32_t> local_a8 [8];
  CowData<char32_t> local_a0 [8];
  String local_98 [8];
  long local_90;
  Vector<String> local_88 [8];
  long local_80;
  long local_78;
  String *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::clear();
  local_80 = 0;
  local_68 = (Object *)0x10da26;
  local_78 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
  }
  Vector<String>::push_back(local_88,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_78 = 0;
  local_68 = (Object *)0x10da2d;
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
  }
  Vector<String>::push_back(local_88,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_78 = 0;
  local_68 = (Object *)0x10da3c;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
  }
  Vector<String>::push_back(local_88,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_78 = 0;
  local_68 = (Object *)0x10da4d;
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
  }
  lVar11 = 0;
  Vector<String>::push_back(local_88,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      String::split((char *)&local_78,(bool)((char)lVar7 + (char)lVar11 * '\b'),0x10da5a);
      if (local_70 == (String *)0x0) {
        lVar7 = 0;
LAB_0010ab93:
        lVar11 = 1;
LAB_0010abb3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar7 = *(long *)(local_70 + -8);
      if (lVar7 < 2) goto LAB_0010ab93;
      lVar8 = String::to_int();
      pSVar4 = local_70;
      if (local_70 == (String *)0x0) {
        lVar7 = 0;
LAB_0010abe3:
        lVar11 = 0;
        goto LAB_0010abb3;
      }
      lVar7 = *(long *)(local_70 + -8);
      if (lVar7 < 1) goto LAB_0010abe3;
      cVar6 = String::begins_with((char *)local_70);
      if (cVar6 == '\0') {
        OptionButton::add_item(*(String **)(this + 0xb58),(int)pSVar4);
      }
      else {
        String::trim_prefix((char *)local_a8);
        String::capitalize();
        operator+((char *)local_98,(String *)"ControlAlign");
        pRVar1 = *(Ref **)(this + 0xb58);
        pOVar10 = *(Object **)(EditorNode::singleton + 0x838);
        if (pOVar10 == (Object *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          pOVar10 = (Object *)0x0;
        }
        lVar7 = EditorStringNames::singleton + 0x10;
        pcVar2 = *(code **)(*(long *)pOVar10 + 0x1c8);
        StringName::StringName((StringName *)&local_90,local_98,false);
        (*pcVar2)((CowData<char32_t> *)&local_68,pOVar10,(StringName *)&local_90,lVar7);
        OptionButton::add_icon_item(pRVar1,(String *)&local_68,(int)local_a0);
        if (local_68 != (Object *)0x0) {
          cVar6 = RefCounted::unreference();
          pOVar5 = local_68;
          if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_68);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))();
              Memory::free_static(pOVar5,false);
            }
          }
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar10);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref(local_a8);
      }
      uVar3 = *(undefined8 *)(this + 0xb58);
      Variant::Variant((Variant *)local_58,lVar8);
      OptionButton::set_item_metadata((int)uVar3,(Variant *)(ulong)uVar9);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar7 = local_80;
      if ((local_80 != 0) && (0 < *(long *)(local_80 + -8))) {
        lVar8 = 0;
        do {
          cVar6 = String::operator==((String *)(lVar7 + lVar8 * 8),pSVar4);
          if (cVar6 != '\0') {
            uVar9 = uVar9 + 1;
            pSVar4 = *(String **)(this + 0xb58);
            local_90 = 0;
            local_68 = (Object *)&_LC4;
            local_60 = 0;
            String::parse_latin1((StrRange *)&local_90);
            OptionButton::add_separator(pSVar4);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            break;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(long *)(lVar7 + -8));
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      CowData<String>::_unref((CowData<String> *)&local_70);
      lVar7 = *(long *)(param_1 + 8);
    } while (lVar7 != 0);
  }
  CowData<String>::_unref((CowData<String> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Control::SizeFlags>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Control::SizeFlags>::_copy_on_write(CowData<Control::SizeFlags> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControlEditorToolbar::_selection_changed() */

void __thiscall ControlEditorToolbar::_selection_changed(ControlEditorToolbar *this)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ControlEditorToolbar CVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  ControlEditorToolbar CVar22;
  List<Node*,DefaultAllocator> *local_108;
  Vector local_d8 [8];
  long local_d0;
  Vector local_c8 [8];
  long local_c0;
  undefined1 local_b8 [8];
  long local_b0;
  long local_a0;
  undefined1 (*local_98) [16];
  long local_90;
  undefined1 (*local_88) [16];
  long local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  lVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 2;
  local_d0 = 0;
  local_58 = __LC228;
  uStack_50 = _UNK_00122e18;
  iVar7 = CowData<Control::SizeFlags>::resize<false>((CowData<Control::SizeFlags> *)&local_d0,5);
  if (iVar7 == 0) {
    do {
      if (local_d0 == 0) {
        lVar20 = 0;
LAB_0010b467:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar20,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar20 = *(long *)(local_d0 + -8);
        if (lVar20 <= lVar15) goto LAB_0010b467;
        CowData<Control::SizeFlags>::_copy_on_write((CowData<Control::SizeFlags> *)&local_d0);
        *(undefined4 *)(local_d0 + lVar15 * 4) = *(undefined4 *)((long)&local_58 + lVar15 * 4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 5);
  }
  lVar15 = 0;
  local_48 = 2;
  local_c0 = 0;
  local_58 = __LC228;
  uStack_50 = _UNK_00122e18;
  iVar7 = CowData<Control::SizeFlags>::resize<false>((CowData<Control::SizeFlags> *)&local_c0,5);
  if (iVar7 == 0) {
    do {
      if (local_c0 == 0) {
        lVar20 = 0;
LAB_0010b4a9:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar20,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar20 = *(long *)(local_c0 + -8);
        if (lVar20 <= lVar15) goto LAB_0010b4a9;
        CowData<Control::SizeFlags>::_copy_on_write((CowData<Control::SizeFlags> *)&local_c0);
        *(undefined4 *)(local_c0 + lVar15 * 4) = *(undefined4 *)((long)&local_58 + lVar15 * 4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 5);
  }
  bVar5 = false;
  plVar11 = *(long **)(*(long *)(this + 0xa10) + 400);
  if (plVar11 == (long *)0x0) {
    CanvasItem::set_visible(SUB81(this,0));
LAB_0010b9a9:
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa18),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa28),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
    uVar16 = (undefined1)*(undefined8 *)(this + 0xa20);
  }
  else {
    CVar6 = (ControlEditorToolbar)0x0;
    bVar21 = false;
LAB_0010aefc:
    do {
      bVar4 = bVar21;
      CVar22 = CVar6;
      if ((plVar11[2] != 0) &&
         (lVar15 = __dynamic_cast(plVar11[2],&Object::typeinfo,&Control::typeinfo), lVar15 != 0)) {
        lVar15 = Node::get_parent();
        if ((lVar15 != 0) &&
           (lVar15 = __dynamic_cast(lVar15,&Object::typeinfo,&Control::typeinfo), lVar15 != 0)) {
          bVar5 = true;
        }
        lVar15 = Node::get_parent();
        if (lVar15 == 0) {
          CVar22 = (ControlEditorToolbar)0x1;
        }
        else {
          CVar22 = (ControlEditorToolbar)0x1;
          lVar15 = __dynamic_cast(lVar15,&Object::typeinfo,&Container::typeinfo);
          if (lVar15 != 0) {
            lVar15 = Node::get_parent();
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            plVar8 = (long *)__dynamic_cast(lVar15,&Object::typeinfo,&Container::typeinfo,0);
            (**(code **)(*plVar8 + 0x358))(local_b8,plVar8);
            lVar15 = local_d0;
            local_a0 = 0;
            plVar14 = (long *)(local_d0 + -0x10);
            if (local_d0 == 0) {
              (**(code **)(*plVar8 + 0x360))(&local_98);
              if (local_c0 != 0) goto LAB_0010b0e1;
LAB_0010b956:
              local_80 = 0;
              CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_80);
            }
            else {
              do {
                lVar20 = *plVar14;
                if (lVar20 == 0) goto LAB_0010b4eb;
                LOCK();
                lVar9 = *plVar14;
                bVar21 = lVar20 == lVar9;
                if (bVar21) {
                  *plVar14 = lVar20 + 1;
                  lVar9 = lVar20;
                }
                UNLOCK();
              } while (!bVar21);
              if (lVar9 == -1) {
LAB_0010b4eb:
                lVar20 = local_a0;
                if ((local_d0 != 0) && (lVar9 = *(long *)(local_d0 + -8), 0 < lVar9))
                goto LAB_0010b026;
LAB_0010b08d:
                if (lVar20 != lVar15) {
                  CowData<Control::SizeFlags>::_ref
                            ((CowData<Control::SizeFlags> *)&local_d0,(CowData *)&local_a0);
                }
              }
              else {
                local_a0 = local_d0;
                lVar20 = local_d0;
                if ((local_d0 != 0) && (lVar9 = *(long *)(local_d0 + -8), 0 < lVar9)) {
LAB_0010b026:
                  lVar17 = 0;
                  lVar20 = local_a0;
LAB_0010b040:
                  do {
                    iVar7 = *(int *)(lVar15 + lVar17 * 4);
                    if ((local_b0 != 0) && (0 < *(long *)(local_b0 + -8))) {
                      lVar10 = 0;
                      do {
                        if (iVar7 == *(int *)(local_b0 + lVar10 * 4)) goto LAB_0010b07a;
                        lVar10 = lVar10 + 1;
                      } while (*(long *)(local_b0 + -8) != lVar10);
                    }
                    if ((lVar20 != 0) && (lVar10 = *(long *)(lVar20 + -8), 0 < lVar10)) {
                      lVar19 = 0;
                      do {
                        if (iVar7 == *(int *)(lVar20 + lVar19 * 4)) {
                          if (lVar10 <= lVar19) {
                            lVar17 = lVar17 + 1;
                            _err_print_index_error
                                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar19,lVar10,
                                       "p_index","size()","",false,false);
                            lVar9 = *(long *)(lVar15 + -8);
                            if (lVar17 < lVar9) goto LAB_0010b040;
                            goto LAB_0010b08d;
                          }
                          CowData<Control::SizeFlags>::_copy_on_write
                                    ((CowData<Control::SizeFlags> *)&local_a0);
                          if (local_a0 == 0) {
                            lVar20 = -1;
                          }
                          else {
                            lVar20 = *(long *)(local_a0 + -8) + -1;
                            if (lVar19 < lVar20) {
                              memmove((void *)(local_a0 + lVar19 * 4),
                                      (void *)(local_a0 + 4 + lVar19 * 4),(lVar20 - lVar19) * 4);
                            }
                          }
                          lVar17 = lVar17 + 1;
                          CowData<Control::SizeFlags>::resize<false>
                                    ((CowData<Control::SizeFlags> *)&local_a0,lVar20);
                          lVar9 = *(long *)(lVar15 + -8);
                          lVar20 = local_a0;
                          if (lVar17 < lVar9) goto LAB_0010b040;
                          goto LAB_0010b08d;
                        }
                        lVar19 = lVar19 + 1;
                      } while (lVar10 != lVar19);
                    }
LAB_0010b07a:
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < lVar9);
                  goto LAB_0010b08d;
                }
              }
              (**(code **)(*plVar8 + 0x360))(&local_98);
              lVar15 = local_c0;
              local_80 = 0;
              if (local_c0 == 0) {
                if (lVar20 == 0) goto LAB_0010b956;
                lVar20 = 0;
                CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_a0);
                local_a0 = 0;
                local_80 = 0;
                CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_80);
              }
              else {
LAB_0010b0e1:
                lVar20 = local_c0;
                local_80 = 0;
                plVar14 = (long *)(local_c0 + -0x10);
                do {
                  lVar15 = *plVar14;
                  if (lVar15 == 0) goto LAB_0010b11b;
                  LOCK();
                  lVar9 = *plVar14;
                  bVar21 = lVar15 == lVar9;
                  if (bVar21) {
                    *plVar14 = lVar15 + 1;
                    lVar9 = lVar15;
                  }
                  UNLOCK();
                } while (!bVar21);
                if (lVar9 != -1) {
                  local_80 = local_c0;
                }
LAB_0010b11b:
                lVar15 = local_80;
                if (local_a0 != local_80) {
                  CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_a0);
                  local_80 = 0;
                  local_a0 = lVar15;
                }
                CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_80);
                if ((lVar20 != 0) && (lVar9 = *(long *)(lVar20 + -8), 0 < lVar9)) {
                  lVar17 = 0;
LAB_0010b160:
                  do {
                    iVar7 = *(int *)(lVar20 + lVar17 * 4);
                    if ((local_90 != 0) && (0 < *(long *)(local_90 + -8))) {
                      lVar10 = 0;
                      do {
                        if (iVar7 == *(int *)(local_90 + lVar10 * 4)) goto LAB_0010b1a2;
                        lVar10 = lVar10 + 1;
                      } while (*(long *)(local_90 + -8) != lVar10);
                    }
                    if ((lVar15 != 0) && (lVar10 = *(long *)(lVar15 + -8), 0 < lVar10)) {
                      lVar19 = 0;
                      do {
                        if (iVar7 == *(int *)(lVar15 + lVar19 * 4)) {
                          if (lVar10 <= lVar19) {
                            lVar17 = lVar17 + 1;
                            _err_print_index_error
                                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar19,lVar10,
                                       "p_index","size()","",false,false);
                            lVar9 = *(long *)(lVar20 + -8);
                            if (lVar17 < lVar9) goto LAB_0010b160;
                            goto LAB_0010b1ae;
                          }
                          CowData<Control::SizeFlags>::_copy_on_write
                                    ((CowData<Control::SizeFlags> *)&local_a0);
                          if (local_a0 == 0) {
                            lVar15 = -1;
                          }
                          else {
                            lVar15 = *(long *)(local_a0 + -8) + -1;
                            if (lVar19 < lVar15) {
                              memmove((void *)(local_a0 + lVar19 * 4),
                                      (void *)(local_a0 + 4 + lVar19 * 4),(lVar15 - lVar19) * 4);
                            }
                          }
                          lVar17 = lVar17 + 1;
                          CowData<Control::SizeFlags>::resize<false>
                                    ((CowData<Control::SizeFlags> *)&local_a0,lVar15);
                          lVar9 = *(long *)(lVar20 + -8);
                          lVar15 = local_a0;
                          if (lVar17 < lVar9) goto LAB_0010b160;
                          goto LAB_0010b1ae;
                        }
                        lVar19 = lVar19 + 1;
                      } while (lVar10 != lVar19);
                    }
LAB_0010b1a2:
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < lVar9);
                }
              }
LAB_0010b1ae:
              if (lVar15 != lVar20) {
                CowData<Control::SizeFlags>::_ref
                          ((CowData<Control::SizeFlags> *)&local_c0,(CowData *)&local_a0);
              }
            }
            lVar15 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar14 = (long *)(local_90 + -0x10);
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (*plVar14 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar15 + -0x10),false);
              }
            }
            CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_a0);
            lVar15 = local_b0;
            if (local_b0 != 0) {
              LOCK();
              plVar14 = (long *)(local_b0 + -0x10);
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (*plVar14 == 0) {
                local_b0 = 0;
                Memory::free_static((void *)(lVar15 + -0x10),false);
              }
            }
            plVar11 = (long *)*plVar11;
            bVar4 = true;
            CVar22 = (ControlEditorToolbar)0x1;
            CVar6 = (ControlEditorToolbar)0x1;
            bVar21 = true;
            if (plVar11 == (long *)0x0) break;
            goto LAB_0010aefc;
          }
        }
      }
      plVar11 = (long *)*plVar11;
      CVar6 = CVar22;
      bVar21 = bVar4;
    } while (plVar11 != (long *)0x0);
    CanvasItem::set_visible(SUB81(this,0));
    if (CVar22 == (ControlEditorToolbar)0x0) goto LAB_0010b9a9;
    if ((bVar5) && (bVar4)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa18),0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa28),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa20),0));
LAB_0010b2ac:
      SizeFlagPresetPicker::set_allowed_flags(*(SizeFlagPresetPicker **)(this + 0xa30),local_d8);
      SizeFlagPresetPicker::set_allowed_flags(*(SizeFlagPresetPicker **)(this + 0xa38),local_c8);
LAB_0010b2db:
      local_108 = (List<Node*,DefaultAllocator> *)&local_88;
      plVar11 = (long *)EditorSelection::get_selected_node_list();
      local_88 = (undefined1 (*) [16])0x0;
      if (((long *)*plVar11 != (long *)0x0) &&
         (puVar18 = *(undefined8 **)*plVar11, puVar18 != (undefined8 *)0x0)) {
        pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar12[1] = 0;
        *pauVar12 = (undefined1  [16])0x0;
        local_88 = pauVar12;
        do {
          while( true ) {
            puVar13 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            uVar2 = *puVar18;
            puVar13[1] = 0;
            *puVar13 = uVar2;
            lVar15 = *(long *)(*pauVar12 + 8);
            puVar13[3] = pauVar12;
            puVar13[2] = lVar15;
            if (lVar15 != 0) {
              *(undefined8 **)(lVar15 + 8) = puVar13;
            }
            lVar15 = *(long *)*pauVar12;
            *(undefined8 **)(*pauVar12 + 8) = puVar13;
            if (lVar15 != 0) break;
            puVar18 = (undefined8 *)puVar18[1];
            *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
            *(undefined8 **)*pauVar12 = puVar13;
            if (puVar18 == (undefined8 *)0x0) goto LAB_0010b39f;
          }
          puVar18 = (undefined8 *)puVar18[1];
          *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
        } while (puVar18 != (undefined8 *)0x0);
LAB_0010b39f:
        for (plVar11 = *(long **)*pauVar12; plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
          if ((*plVar11 != 0) &&
             (lVar15 = __dynamic_cast(*plVar11,&Object::typeinfo,&Control::typeinfo,0), lVar15 != 0)
             ) {
            Control::get_h_size_flags();
            Control::get_v_size_flags();
          }
        }
      }
      BaseButton::set_pressed(SUB81(*(undefined8 *)(*(long *)(this + 0xa30) + 0xa40),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(*(long *)(this + 0xa38) + 0xa40),0));
      List<Node*,DefaultAllocator>::~List(local_108);
      goto LAB_0010b9e1;
    }
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa18),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa28),0));
    plVar11 = (long *)EditorSelection::get_selected_node_list();
    local_98 = (undefined1 (*) [16])0x0;
    if (((long *)*plVar11 != (long *)0x0) &&
       (puVar18 = *(undefined8 **)*plVar11, puVar18 != (undefined8 *)0x0)) {
      pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar12[1] = 0;
      *pauVar12 = (undefined1  [16])0x0;
      local_98 = pauVar12;
      do {
        while( true ) {
          puVar13 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
          uVar2 = *puVar18;
          puVar13[1] = 0;
          *puVar13 = uVar2;
          lVar15 = *(long *)(*pauVar12 + 8);
          puVar13[3] = pauVar12;
          puVar13[2] = lVar15;
          if (lVar15 != 0) {
            *(undefined8 **)(lVar15 + 8) = puVar13;
          }
          lVar15 = *(long *)*pauVar12;
          *(undefined8 **)(*pauVar12 + 8) = puVar13;
          if (lVar15 != 0) break;
          puVar18 = (undefined8 *)puVar18[1];
          *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
          *(undefined8 **)*pauVar12 = puVar13;
          if (puVar18 == (undefined8 *)0x0) goto LAB_0010b5ec;
        }
        puVar18 = (undefined8 *)puVar18[1];
        *(int *)pauVar12[1] = *(int *)pauVar12[1] + 1;
      } while (puVar18 != (undefined8 *)0x0);
LAB_0010b5ec:
      plVar11 = *(long **)*pauVar12;
      if (plVar11 != (long *)0x0) {
        iVar1 = 0;
        iVar7 = 0;
        do {
          if (((*plVar11 != 0) &&
              (plVar14 = (long *)__dynamic_cast(*plVar11,&Object::typeinfo,&Control::typeinfo,0),
              plVar14 != (long *)0x0)) &&
             ((lVar15 = Node::get_parent(), lVar15 == 0 ||
              (lVar15 = __dynamic_cast(lVar15,&Object::typeinfo,&Container::typeinfo,0), lVar15 == 0
              )))) {
            iVar1 = iVar1 + 1;
            pcVar3 = *(code **)(*plVar14 + 0xb8);
            Variant::Variant((Variant *)local_78,false);
            StringName::StringName((StringName *)&local_88,"_edit_use_anchors_",false);
            (*pcVar3)((Variant *)&local_58,plVar14,(StringName *)&local_88);
            bVar21 = Variant::operator_cast_to_bool((Variant *)&local_58);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_88 != (undefined1 (*) [16])0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            iVar7 = (iVar7 + 1) - (uint)!bVar21;
          }
          plVar11 = (long *)plVar11[1];
        } while (plVar11 != (long *)0x0);
        CVar22 = (ControlEditorToolbar)(iVar1 == iVar7);
      }
    }
    this[0xa40] = CVar22;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
    List<Node*,DefaultAllocator>::~List((List<Node*,DefaultAllocator> *)&local_98);
    uVar16 = (undefined1)*(undefined8 *)(this + 0xa20);
    if ((!bVar5) || (bVar4)) {
      CanvasItem::set_visible((bool)uVar16);
      if (bVar4) goto LAB_0010b2ac;
      lVar15 = 0;
      local_48 = 2;
      local_80 = 0;
      local_58 = __LC228;
      uStack_50 = _UNK_00122e18;
      iVar7 = CowData<Control::SizeFlags>::resize<false>((CowData<Control::SizeFlags> *)&local_80,5)
      ;
      if (iVar7 == 0) {
        do {
          if (local_80 == 0) {
            lVar20 = 0;
LAB_0010bbf6:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar20,"p_index","size()","",
                       false,false);
          }
          else {
            lVar20 = *(long *)(local_80 + -8);
            if (lVar20 <= lVar15) goto LAB_0010bbf6;
            CowData<Control::SizeFlags>::_copy_on_write((CowData<Control::SizeFlags> *)&local_80);
            *(undefined4 *)(local_80 + lVar15 * 4) = *(undefined4 *)((long)&local_58 + lVar15 * 4);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 5);
      }
      SizeFlagPresetPicker::set_allowed_flags
                (*(SizeFlagPresetPicker **)(this + 0xa30),(Vector *)&local_88);
      SizeFlagPresetPicker::set_allowed_flags
                (*(SizeFlagPresetPicker **)(this + 0xa38),(Vector *)&local_88);
      CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_80);
      goto LAB_0010b2db;
    }
  }
  CanvasItem::set_visible((bool)uVar16);
LAB_0010b9e1:
  CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_c0);
  CowData<Control::SizeFlags>::_unref((CowData<Control::SizeFlags> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::setup(Vector<String> const&, bool) */

void __thiscall
EditorPropertySizeFlags::setup(EditorPropertySizeFlags *this,Vector *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  Ref *pRVar3;
  String *pSVar4;
  undefined8 uVar5;
  void *pvVar6;
  CowData *pCVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  CowData<char32_t> *this_00;
  CheckBox *this_01;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
  *local_f0;
  long local_d0;
  long local_c8;
  long local_c0;
  StringName local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  CowData *local_a0;
  long local_98 [2];
  HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
  local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = *(long *)(param_1 + 8);
  this[0xb80] = (EditorPropertySizeFlags)param_2;
  if ((lVar15 == 0) || (*(long *)(lVar15 + -8) == 0)) {
    OptionButton::clear();
    pSVar4 = *(String **)(this + 0xb58);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"Container Default");
    TTR((String *)local_88,(String *)&local_a8);
    OptionButton::add_item(pSVar4,(int)(String *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xb58),0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb60),0));
      return;
    }
  }
  else {
    lVar16 = 0;
    local_60 = 2;
    local_80 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    if (0 < *(long *)(lVar15 + -8)) {
      do {
        String::split((char *)&local_a8,(bool)((char)lVar15 + (char)lVar16 * '\b'),0x10da5a);
        if (local_a0 == (CowData *)0x0) {
          lVar15 = 0;
LAB_0010c3cb:
          lVar16 = 1;
LAB_0010c3a0:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar15 = *(long *)(local_a0 + -8);
        if (lVar15 < 2) goto LAB_0010c3cb;
        lVar12 = String::to_int();
        pCVar7 = local_a0;
        if (local_a0 == (CowData *)0x0) {
LAB_0010c380:
          lVar15 = 0;
LAB_0010c383:
          lVar16 = 0;
          goto LAB_0010c3a0;
        }
        lVar15 = *(long *)(local_a0 + -8);
        if (lVar15 < 1) goto LAB_0010c383;
        local_98[0] = CONCAT44(local_98[0]._4_4_,(int)lVar12);
        this_00 = (CowData<char32_t> *)
                  HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
                  ::operator[](local_88,(int *)local_98);
        if (*(long *)this_00 != *(long *)pCVar7) {
          CowData<char32_t>::_ref(this_00,pCVar7);
        }
        if (lVar12 == 2) goto LAB_0010bf07;
        this_01 = (CheckBox *)operator_new(0xc60,"");
        local_98[0] = 0;
        CheckBox::CheckBox(this_01,(String *)local_98);
        postinitialize_handler((Object *)this_01);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        if (local_a0 == (CowData *)0x0) goto LAB_0010c380;
        lVar15 = *(long *)(local_a0 + -8);
        if (lVar15 < 1) goto LAB_0010c383;
        Button::set_text((String *)this_01);
        Button::set_clip_text(SUB81(this_01,0));
        pcVar2 = *(code **)(*(long *)this_01 + 0xa8);
        Variant::Variant((Variant *)local_58,lVar12);
        StringName::StringName((StringName *)local_98,"_value",false);
        (*pcVar2)(this_01,(CowData<char32_t> *)local_98,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_98[0] != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*(long *)this_01 + 0x108);
        create_custom_callable_function_pointer<EditorPropertySizeFlags>
                  ((EditorPropertySizeFlags *)local_98,(char *)this,
                   (_func_void *)"&EditorPropertySizeFlags::_flag_toggled");
        (*pcVar2)(this_01,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
        Callable::~Callable((Callable *)local_98);
        EditorProperty::add_focusable((Control *)this);
        Node::add_child(*(undefined8 *)(this + 0xb68),this_01,0,0);
        if (*(long *)(this + 0xb78) == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(*(long *)(this + 0xb78) + -8) + 1;
        }
        iVar10 = CowData<CheckBox*>::resize<false>((CowData<CheckBox*> *)(this + 0xb78),lVar15);
        if (iVar10 == 0) {
          if (*(long *)(this + 0xb78) == 0) {
            lVar12 = -1;
            lVar15 = 0;
          }
          else {
            lVar15 = *(long *)(*(long *)(this + 0xb78) + -8);
            lVar12 = lVar15 + -1;
            if (-1 < lVar12) {
              CowData<CheckBox*>::_copy_on_write((CowData<CheckBox*> *)(this + 0xb78));
              *(CheckBox **)(*(long *)(this + 0xb78) + lVar12 * 8) = this_01;
              goto LAB_0010bf07;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar15,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_0010bf07:
        lVar16 = lVar16 + 1;
        CowData<String>::_unref((CowData<String> *)&local_a0);
        lVar15 = *(long *)(param_1 + 8);
      } while ((lVar15 != 0) && (lVar16 < *(long *)(lVar15 + -8)));
    }
    local_f0 = local_88;
    if ((setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::
                                      sname), iVar10 != 0)) {
      _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::sname,true)
      ;
      __cxa_atexit(StringName::~StringName,
                   &setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::sname);
    }
    StringName::StringName
              ((StringName *)&local_d0,
               (StringName *)&setup(Vector<String>const&,bool)::{lambda()#1}::operator()()::sname);
    if ((setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::
                                      sname), iVar10 != 0)) {
      _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::sname,true)
      ;
      __cxa_atexit(StringName::~StringName,
                   &setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::sname);
    }
    StringName::StringName
              ((StringName *)&local_c8,
               (StringName *)&setup(Vector<String>const&,bool)::{lambda()#2}::operator()()::sname);
    if ((setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::
                                      sname), iVar10 != 0)) {
      _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::sname,true)
      ;
      __cxa_atexit(StringName::~StringName,
                   &setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::sname);
    }
    StringName::StringName
              ((StringName *)&local_c0,
               (StringName *)&setup(Vector<String>const&,bool)::{lambda()#3}::operator()()::sname);
    if (this[0xb80] != (EditorPropertySizeFlags)0x0) {
      if ((setup(Vector<String>const&,bool)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#4}::operator()()
                                        ::sname), iVar10 != 0)) {
        _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#4}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &setup(Vector<String>const&,bool)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#4}::operator()()::sname);
      }
      StringName::operator=
                ((StringName *)&local_d0,
                 (StringName *)&setup(Vector<String>const&,bool)::{lambda()#4}::operator()()::sname)
      ;
      if ((setup(Vector<String>const&,bool)::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#5}::operator()()
                                        ::sname), iVar10 != 0)) {
        _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#5}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &setup(Vector<String>const&,bool)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#5}::operator()()::sname);
      }
      StringName::operator=
                ((StringName *)&local_c8,
                 (StringName *)&setup(Vector<String>const&,bool)::{lambda()#5}::operator()()::sname)
      ;
      if ((setup(Vector<String>const&,bool)::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar10 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#6}::operator()()
                                        ::sname), iVar10 != 0)) {
        _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#6}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &setup(Vector<String>const&,bool)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#6}::operator()()::sname);
      }
      StringName::operator=
                ((StringName *)&local_c0,
                 (StringName *)&setup(Vector<String>const&,bool)::{lambda()#6}::operator()()::sname)
      ;
    }
    OptionButton::clear();
    cVar9 = HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
            ::_lookup_pos(local_f0,(int *)0x1,(uint *)local_98);
    iVar10 = (int)(String *)local_98;
    if (cVar9 != '\0') {
      pRVar3 = *(Ref **)(this + 0xb58);
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"Fill");
      TTR((String *)local_98,(String *)&local_b0);
      Control::get_editor_theme_icon(local_b8);
      OptionButton::add_icon_item(pRVar3,(String *)local_b8,iVar10);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    pRVar3 = *(Ref **)(this + 0xb58);
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Shrink Begin");
    TTR((String *)local_98,(String *)&local_b0);
    Control::get_editor_theme_icon(local_b8);
    OptionButton::add_icon_item(pRVar3,(String *)local_b8,iVar10);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    cVar9 = HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
            ::_lookup_pos(local_f0,(int *)0x4,(uint *)local_98);
    if (cVar9 != '\0') {
      local_a8 = 0;
      pRVar3 = *(Ref **)(this + 0xb58);
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"Shrink Center");
      TTR((String *)local_98,(String *)&local_b0);
      if ((setup(Vector<String>const&,bool)::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&setup(Vector<String>const&,bool)::{lambda()#7}::operator()()
                                        ::sname), iVar11 != 0)) {
        _scs_create((char *)&setup(Vector<String>const&,bool)::{lambda()#7}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &setup(Vector<String>const&,bool)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&setup(Vector<String>const&,bool)::{lambda()#7}::operator()()::sname);
      }
      Control::get_editor_theme_icon(local_b8);
      OptionButton::add_icon_item(pRVar3,(String *)local_b8,iVar10);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    cVar9 = HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
            ::_lookup_pos(local_f0,(int *)0x8,(uint *)local_98);
    if (cVar9 != '\0') {
      pRVar3 = *(Ref **)(this + 0xb58);
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,"Shrink End");
      TTR((String *)local_98,(String *)&local_b0);
      Control::get_editor_theme_icon(local_b8);
      OptionButton::add_icon_item(pRVar3,(String *)local_b8,iVar10);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    pSVar4 = *(String **)(this + 0xb58);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    OptionButton::add_separator(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    pSVar4 = *(String **)(this + 0xb58);
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Custom");
    TTR((String *)local_98,(String *)&local_b0);
    OptionButton::add_item(pSVar4,iVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    uVar5 = *(undefined8 *)(this + 0xb60);
    HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
    ::_lookup_pos(local_f0,(int *)0x2,(uint *)local_98);
    CanvasItem::set_visible(SUB81(uVar5,0));
    if ((((StringName::configured != '\0') &&
         ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
        ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_d0 != 0)) {
      StringName::unref();
    }
    uVar5 = local_80._0_8_;
    if ((undefined8 *)local_80._0_8_ == (undefined8 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      uVar8 = local_80._8_8_;
      if ((local_60._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_80._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
        piVar13 = (int *)local_80._8_8_;
        puVar14 = (undefined8 *)local_80._0_8_;
        do {
          if (*piVar13 != 0) {
            pvVar6 = (void *)*puVar14;
            *piVar13 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x18));
            Memory::free_static(pvVar6,false);
            *puVar14 = 0;
          }
          piVar13 = piVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (piVar13 != piVar1);
      }
      Memory::free_static((void *)uVar5,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar8,false);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginControl::parse_property(Object*, Variant::Type, String const&, PropertyHint,
   String const&, BitField<PropertyUsageFlags>, bool) */

undefined8
EditorInspectorPluginControl::parse_property
          (String *param_1,long param_2,undefined8 param_3,String *param_4,undefined8 param_5,
          long *param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  EditorPropertyAnchorsPreset *this;
  undefined8 uVar4;
  EditorPropertySizeFlags *this_00;
  long in_FS_OFFSET;
  CowData<String> *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) ||
     (lVar3 = __dynamic_cast(param_2,&Object::typeinfo,&Control::typeinfo), lVar3 == 0)) {
LAB_0010c9e1:
    uVar4 = 0;
  }
  else {
    cVar1 = String::operator==(param_4,"anchors_preset");
    if (cVar1 == '\0') {
      cVar1 = String::operator==(param_4,"size_flags_horizontal");
      if ((cVar1 == '\0') &&
         (cVar1 = String::operator==(param_4,"size_flags_vertical"), cVar1 == '\0'))
      goto LAB_0010c9e1;
      this_00 = (EditorPropertySizeFlags *)operator_new(0xb88,"");
      EditorPropertySizeFlags::EditorPropertySizeFlags(this_00);
      postinitialize_handler((Object *)this_00);
      local_60 = 0;
      if ((*param_6 != 0) && (1 < *(uint *)(*param_6 + -8))) {
        String::split((char *)&local_58,SUB81(param_6,0),0x10da8c);
        if (local_50[0] != 0) {
          CowData<String>::_unref((CowData<String> *)&local_60);
          local_60 = local_50[0];
          local_50[0] = 0;
        }
        CowData<String>::_unref((CowData<String> *)local_50);
      }
      local_70 = (CowData<String> *)&local_60;
      bVar2 = (bool)String::operator==(param_4,"size_flags_vertical");
      EditorPropertySizeFlags::setup(this_00,(Vector *)&local_68,bVar2);
      local_58 = 0;
      EditorInspectorPlugin::add_property_editor
                (param_1,(Control *)param_4,SUB81(this_00,0),(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<String>::_unref(local_70);
    }
    else {
      this = (EditorPropertyAnchorsPreset *)operator_new(0xb60,"");
      EditorPropertyAnchorsPreset::EditorPropertyAnchorsPreset(this);
      postinitialize_handler((Object *)this);
      String::split((char *)&local_58,SUB81(param_6,0),0x10da8c);
      EditorPropertyAnchorsPreset::setup(this,(Vector *)&local_58);
      local_68 = 0;
      EditorInspectorPlugin::add_property_editor
                (param_1,(Control *)param_4,SUB81(this,0),(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<String>::_unref((CowData<String> *)local_50);
    }
    uVar4 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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
  return (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorInspectorPluginControl::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginControl::is_class_ptr(EditorInspectorPluginControl *this,void *param_1)

{
  return (uint)CONCAT71(0x122a,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginControl::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginControl::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginControl::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginControl::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginControl::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginControl::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginControl::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginControl::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginControl::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginControl::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginControl::_notificationv(int, bool) */

void EditorInspectorPluginControl::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ControlEditorPresetPicker::_preset_button_pressed(int) */

void ControlEditorPresetPicker::_preset_button_pressed(int param_1)

{
  return;
}



/* ControlEditorPlugin::is_class_ptr(void*) const */

uint __thiscall ControlEditorPlugin::is_class_ptr(ControlEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x122a,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1229,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ControlEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 ControlEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ControlEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 ControlEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ControlEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 ControlEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ControlEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ControlEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::get_argument_count
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ControlPositioningWarning::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ControlPositioningWarning::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyAnchorsPreset::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyAnchorsPreset::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertySizeFlags::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertySizeFlags::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ControlEditorPopupButton::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ControlEditorPopupButton::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ControlEditorPresetPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ControlEditorPresetPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnchorPresetPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnchorPresetPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SizeFlagPresetPicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SizeFlagPresetPicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ControlEditorToolbar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ControlEditorToolbar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012a018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ControlPositioningWarning::_property_can_revertv(StringName const&) const */

undefined8 ControlPositioningWarning::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyAnchorsPreset::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyAnchorsPreset::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertySizeFlags::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertySizeFlags::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ControlEditorPopupButton::_property_can_revertv(StringName const&) const */

undefined8 ControlEditorPopupButton::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ControlEditorPresetPicker::_property_can_revertv(StringName const&) const */

undefined8 ControlEditorPresetPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnchorPresetPicker::_property_can_revertv(StringName const&) const */

undefined8 AnchorPresetPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* SizeFlagPresetPicker::_property_can_revertv(StringName const&) const */

undefined8 SizeFlagPresetPicker::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ControlEditorToolbar::_property_can_revertv(StringName const&) const */

undefined8 ControlEditorToolbar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012a020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ControlEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void ControlEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0012a028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fa88;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011fa88;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<CheckBox*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<CheckBox*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SizeFlagPresetPicker::_bind_methods() [clone .cold] */

void SizeFlagPresetPicker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnchorPresetPicker::_bind_methods() [clone .cold] */

void AnchorPresetPicker::_bind_methods(void)

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



/* EditorPropertyAnchorsPreset::setup(Vector<String> const&) [clone .cold] */

void EditorPropertyAnchorsPreset::setup(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Control::SizeFlags>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Control::SizeFlags>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ControlEditorToolbar::_selection_changed() [clone .cold] */

void ControlEditorToolbar::_selection_changed(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorInspectorPluginControl::_get_class_namev() const */

undefined8 * EditorInspectorPluginControl::_get_class_namev(void)

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
LAB_0010e073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginControl");
      goto LAB_0010e0de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginControl");
LAB_0010e0de:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::get_object
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this)

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
      goto LAB_0010e20d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e20d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e20d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::get_object
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this)

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
      goto LAB_0010e30d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e30d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e30d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::get_object
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this)

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
      goto LAB_0010e40d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e40d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e40d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::get_object
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this)

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
      goto LAB_0010e50d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e50d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e50d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this)

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
      goto LAB_0010e60d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e60d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e60d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::get_object
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this)

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
      goto LAB_0010e70d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e70d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e70d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::get_object
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this)

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
      goto LAB_0010e80d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e80d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e80d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::get_object
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this)

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
      goto LAB_0010e90d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010e90d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010e90d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::get_object
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this)

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
      goto LAB_0010ea0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ea0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ea0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::get_object
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this)

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
      goto LAB_0010eb0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010eb0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010eb0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::get_object
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this)

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
      goto LAB_0010ec0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ec0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ec0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ControlEditorPopupButton::is_class_ptr(void*) const */

uint ControlEditorPopupButton::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &BaseButton::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Button::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ControlEditorPlugin::_notificationv(int, bool) */

void __thiscall
ControlEditorPlugin::_notificationv(ControlEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012a030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0012a030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* EditorPropertySizeFlags::is_class_ptr(void*) const */

uint EditorPropertySizeFlags::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122a,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyAnchorsPreset::is_class_ptr(void*) const */

uint EditorPropertyAnchorsPreset::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122a,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyAnchorsPreset::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyAnchorsPreset::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertySizeFlags::_validate_propertyv(PropertyInfo&) const */

void EditorPropertySizeFlags::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* SizeFlagPresetPicker::_validate_propertyv(PropertyInfo&) const */

void SizeFlagPresetPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* AnchorPresetPicker::_validate_propertyv(PropertyInfo&) const */

void AnchorPresetPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ControlEditorPresetPicker::_validate_propertyv(PropertyInfo&) const */

void ControlEditorPresetPicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ControlPositioningWarning::_validate_propertyv(PropertyInfo&) const */

void ControlPositioningWarning::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* ControlEditorPopupButton::_validate_propertyv(PropertyInfo&) const */

void ControlEditorPopupButton::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a038 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_0012a040 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012a040 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ControlEditorToolbar::_validate_propertyv(PropertyInfo&) const */

void ControlEditorToolbar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012a040 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ControlEditorToolbar::is_class_ptr(void*) const */

ulong ControlEditorToolbar::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x122b,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* ControlPositioningWarning::is_class_ptr(void*) const */

uint ControlPositioningWarning::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122a,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ControlEditorPresetPicker::is_class_ptr(void*) const */

uint ControlEditorPresetPicker::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122a,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AnchorPresetPicker::is_class_ptr(void*) const */

ulong AnchorPresetPicker::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &ControlEditorPresetPicker::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x122a,in_RSI == &ControlEditorPresetPicker::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122a,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* SizeFlagPresetPicker::is_class_ptr(void*) const */

ulong SizeFlagPresetPicker::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &ControlEditorPresetPicker::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x122a,in_RSI == &ControlEditorPresetPicker::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x122b,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122a,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x122b,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyAnchorsPreset::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyAnchorsPreset::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* AnchorPresetPicker::_setv(StringName const&, Variant const&) */

undefined8 AnchorPresetPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ControlEditorPopupButton::_setv(StringName const&, Variant const&) */

undefined8 ControlEditorPopupButton::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ControlEditorToolbar::_setv(StringName const&, Variant const&) */

undefined8 ControlEditorToolbar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* SizeFlagPresetPicker::_setv(StringName const&, Variant const&) */

undefined8 SizeFlagPresetPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ControlEditorPresetPicker::_setv(StringName const&, Variant const&) */

undefined8 ControlEditorPresetPicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ControlPositioningWarning::_setv(StringName const&, Variant const&) */

undefined8 ControlPositioningWarning::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertySizeFlags::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertySizeFlags::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012a048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fb98) */
/* ControlEditorPresetPicker::_getv(StringName const&, Variant&) const */

undefined8 ControlEditorPresetPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fc08) */
/* EditorPropertyAnchorsPreset::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyAnchorsPreset::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fc78) */
/* AnchorPresetPicker::_getv(StringName const&, Variant&) const */

undefined8 AnchorPresetPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fce8) */
/* EditorPropertySizeFlags::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertySizeFlags::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fd58) */
/* ControlEditorToolbar::_getv(StringName const&, Variant&) const */

undefined8 ControlEditorToolbar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fdc8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fe38) */
/* ControlEditorPopupButton::_getv(StringName const&, Variant&) const */

undefined8 ControlEditorPopupButton::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010fea8) */
/* ControlPositioningWarning::_getv(StringName const&, Variant&) const */

undefined8 ControlPositioningWarning::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ff18) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010ff88) */
/* SizeFlagPresetPicker::_getv(StringName const&, Variant&) const */

undefined8 SizeFlagPresetPicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012a050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* ControlEditorPlugin::get_plugin_name() const */

ControlEditorPlugin * __thiscall ControlEditorPlugin::get_plugin_name(ControlEditorPlugin *this)

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



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001100c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001100c0:
  Control::~Control((Control *)this);
  return;
}



/* ControlPositioningWarning::~ControlPositioningWarning() */

void __thiscall
ControlPositioningWarning::~ControlPositioningWarning(ControlPositioningWarning *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110120;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110120:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110180;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110180:
  Control::~Control((Control *)this);
  return;
}



/* ControlEditorToolbar::~ControlEditorToolbar() */

void __thiscall ControlEditorToolbar::~ControlEditorToolbar(ControlEditorToolbar *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001101e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001101e0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110240;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110240:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ControlEditorToolbar::~ControlEditorToolbar() */

void __thiscall ControlEditorToolbar::~ControlEditorToolbar(ControlEditorToolbar *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001102b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001102b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa48);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110320;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110320:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ControlPositioningWarning::~ControlPositioningWarning() */

void __thiscall
ControlPositioningWarning::~ControlPositioningWarning(ControlPositioningWarning *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00110390;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110390:
  Control::~Control((Control *)this);
  operator_delete(this,0xa58);
  return;
}



/* ControlEditorPopupButton::~ControlEditorPopupButton() */

void __thiscall ControlEditorPopupButton::~ControlEditorPopupButton(ControlEditorPopupButton *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00121920;
  if (*(long *)(this + 0xc10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xc10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Button::~Button((Button *)this);
        return;
      }
    }
  }
  Button::~Button((Button *)this);
  return;
}



/* ControlEditorPlugin::_get_class_namev() const */

undefined8 * ControlEditorPlugin::_get_class_namev(void)

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
LAB_00110473:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110473;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPlugin");
      goto LAB_001104de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPlugin");
LAB_001104de:
  return &_get_class_namev()::_class_name_static;
}



/* ControlEditorPresetPicker::_get_class_namev() const */

undefined8 * ControlEditorPresetPicker::_get_class_namev(void)

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
LAB_00110563:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110563;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPresetPicker");
      goto LAB_001105ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPresetPicker");
LAB_001105ce:
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
LAB_00110643:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110643;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001106ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001106ae:
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
LAB_00110733:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110733;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011079e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011079e:
  return &_get_class_namev()::_class_name_static;
}



/* SizeFlagPresetPicker::_get_class_namev() const */

undefined8 * SizeFlagPresetPicker::_get_class_namev(void)

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
LAB_00110823:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110823;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SizeFlagPresetPicker");
      goto LAB_0011088e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SizeFlagPresetPicker");
LAB_0011088e:
  return &_get_class_namev()::_class_name_static;
}



/* AnchorPresetPicker::_get_class_namev() const */

undefined8 * AnchorPresetPicker::_get_class_namev(void)

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
LAB_00110913:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110913;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnchorPresetPicker");
      goto LAB_0011097e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnchorPresetPicker");
LAB_0011097e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyAnchorsPreset::_get_class_namev() const */

undefined8 * EditorPropertyAnchorsPreset::_get_class_namev(void)

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
LAB_00110a03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110a03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyAnchorsPreset"
                );
      goto LAB_00110a6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyAnchorsPreset");
LAB_00110a6e:
  return &_get_class_namev()::_class_name_static;
}



/* ControlEditorPopupButton::_get_class_namev() const */

undefined8 * ControlEditorPopupButton::_get_class_namev(void)

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
LAB_00110af3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110af3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPopupButton");
      goto LAB_00110b5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorPopupButton");
LAB_00110b5e:
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
LAB_00110be3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110be3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00110c4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00110c4e:
  return &_get_class_namev()::_class_name_static;
}



/* ControlPositioningWarning::_get_class_namev() const */

undefined8 * ControlPositioningWarning::_get_class_namev(void)

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
LAB_00110cd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110cd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ControlPositioningWarning");
      goto LAB_00110d3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ControlPositioningWarning");
LAB_00110d3e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertySizeFlags::_get_class_namev() const */

undefined8 * EditorPropertySizeFlags::_get_class_namev(void)

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
LAB_00110dc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110dc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertySizeFlags");
      goto LAB_00110e2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertySizeFlags");
LAB_00110e2e:
  return &_get_class_namev()::_class_name_static;
}



/* ControlEditorToolbar::_get_class_namev() const */

undefined8 * ControlEditorToolbar::_get_class_namev(void)

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
LAB_00110eb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110eb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorToolbar");
      goto LAB_00110f1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ControlEditorToolbar");
LAB_00110f1e:
  return &_get_class_namev()::_class_name_static;
}



/* ControlEditorPopupButton::~ControlEditorPopupButton() */

void __thiscall ControlEditorPopupButton::~ControlEditorPopupButton(ControlEditorPopupButton *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00121920;
  if (*(long *)(this + 0xc10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xc10);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Button::~Button((Button *)this);
  operator_delete(this,0xc28);
  return;
}



/* ControlEditorPresetPicker::~ControlEditorPresetPicker() */

void __thiscall
ControlEditorPresetPicker::~ControlEditorPresetPicker(ControlEditorPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011108b;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_0011108b:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001110d4;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001110d4:
  Control::~Control((Control *)this);
  return;
}



/* AnchorPresetPicker::~AnchorPresetPicker() */

void __thiscall AnchorPresetPicker::~AnchorPresetPicker(AnchorPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001111cb;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_001111cb:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111214;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00111214:
  Control::~Control((Control *)this);
  return;
}



/* SizeFlagPresetPicker::~SizeFlagPresetPicker() */

void __thiscall SizeFlagPresetPicker::~SizeFlagPresetPicker(SizeFlagPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011130b;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_0011130b:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111354;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00111354:
  Control::~Control((Control *)this);
  return;
}



/* ControlEditorPresetPicker::~ControlEditorPresetPicker() */

void __thiscall
ControlEditorPresetPicker::~ControlEditorPresetPicker(ControlEditorPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011144b;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_0011144b:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111494;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00111494:
  Control::~Control((Control *)this);
  operator_delete(this,0xa40);
  return;
}



/* SizeFlagPresetPicker::~SizeFlagPresetPicker() */

void __thiscall SizeFlagPresetPicker::~SizeFlagPresetPicker(SizeFlagPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011159b;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_0011159b:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001115e4;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001115e4:
  Control::~Control((Control *)this);
  operator_delete(this,0xa50);
  return;
}



/* AnchorPresetPicker::~AnchorPresetPicker() */

void __thiscall AnchorPresetPicker::~AnchorPresetPicker(AnchorPresetPicker *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001202d8;
  pvVar3 = *(void **)(this + 0xa18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0xa20) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001116eb;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_001116eb:
  bVar4 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111734;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00111734:
  Control::~Control((Control *)this);
  operator_delete(this,0xa40);
  return;
}



/* ControlEditorPresetPicker::_notificationv(int, bool) */

void __thiscall
ControlEditorPresetPicker::_notificationv(ControlEditorPresetPicker *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012a058 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012a058 == Container::_notification) {
    return;
  }
  MarginContainer::_notification(iVar1);
  return;
}



/* EditorPropertyAnchorsPreset::_notificationv(int, bool) */

void __thiscall
EditorPropertyAnchorsPreset::_notificationv
          (EditorPropertyAnchorsPreset *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012a060 != Container::_notification) {
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
  if ((code *)PTR__notification_0012a060 == Container::_notification) {
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
    if ((code *)PTR__notification_0012a068 != Container::_notification) {
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
  if ((code *)PTR__notification_0012a068 == Container::_notification) {
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
    if ((code *)PTR__notification_0012a068 != Container::_notification) {
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
  if ((code *)PTR__notification_0012a068 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* EditorPropertySizeFlags::_notificationv(int, bool) */

void __thiscall
EditorPropertySizeFlags::_notificationv(EditorPropertySizeFlags *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012a060 != Container::_notification) {
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
  if ((code *)PTR__notification_0012a060 == Container::_notification) {
    return;
  }
  EditorProperty::_notification(iVar1);
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



/* WARNING: Removing unreachable block (ram,0x00111e4a) */
/* Container::_notificationv(int, bool) */

void __thiscall Container::_notificationv(Container *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012a070 != Control::_notification) {
      Container::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0012a070 == Control::_notification) {
    return;
  }
  Container::_notification(iVar1);
  return;
}



/* ControlEditorToolbar::_notificationv(int, bool) */

void __thiscall
ControlEditorToolbar::_notificationv(ControlEditorToolbar *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0012a068 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notificationv((Container *)this,param_1,true);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0012a068 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification(iVar1);
  return;
}



/* Callable
   create_custom_callable_function_pointer<EditorPropertySizeFlags>(EditorPropertySizeFlags*, char
   const*, void (EditorPropertySizeFlags::*)()) */

EditorPropertySizeFlags *
create_custom_callable_function_pointer<EditorPropertySizeFlags>
          (EditorPropertySizeFlags *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00122430;
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



/* Callable create_custom_callable_function_pointer<ControlEditorPopupButton,
   bool>(ControlEditorPopupButton*, char const*, void (ControlEditorPopupButton::*)(bool)) */

ControlEditorPopupButton *
create_custom_callable_function_pointer<ControlEditorPopupButton,bool>
          (ControlEditorPopupButton *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_00122550;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Button*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Button*> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
::operator[](HashMap<int,Button*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Button*>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x113003;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00112b63;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x11304c;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00112ee3;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00112ee3:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar47;
            goto LAB_00112ec4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00112b63:
  if ((float)uVar51 * __LC49 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112ec4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00112ec4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 8;
  return auVar57;
}



/* List<Node*, DefaultAllocator>::~List() */

undefined8 __thiscall List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 8);
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* Callable create_custom_callable_function_pointer<ControlEditorToolbar>(ControlEditorToolbar*,
   char const*, void (ControlEditorToolbar::*)()) */

ControlEditorToolbar *
create_custom_callable_function_pointer<ControlEditorToolbar>
          (ControlEditorToolbar *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00122790;
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



/* Callable create_custom_callable_function_pointer<ControlEditorToolbar, int,
   bool>(ControlEditorToolbar*, char const*, void (ControlEditorToolbar::*)(int, bool)) */

ControlEditorToolbar *
create_custom_callable_function_pointer<ControlEditorToolbar,int,bool>
          (ControlEditorToolbar *param_1,char *param_2,_func_void_int_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_001228b0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ControlEditorToolbar, bool,
   bool>(ControlEditorToolbar*, char const*, void (ControlEditorToolbar::*)(bool, bool)) */

ControlEditorToolbar *
create_custom_callable_function_pointer<ControlEditorToolbar,bool,bool>
          (ControlEditorToolbar *param_1,char *param_2,_func_void_bool_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_00122940;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void Ref<EditorInspectorPluginControl>::instantiate<>() */

void __thiscall
Ref<EditorInspectorPluginControl>::instantiate<>(Ref<EditorInspectorPluginControl> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x220,"");
  pRVar3 = this_00;
  for (lVar2 = 0x44; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(code **)this_00 = RefCounted::init_ref;
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
  *(undefined ***)this_00 = &PTR__initialize_classv_00121790;
  this_00[0x218] = (RefCounted)0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_001136c5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_001136c5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_001136c5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b1a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00113b1a:
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



/* ControlEditorPlugin::~ControlEditorPlugin() */

void __thiscall ControlEditorPlugin::~ControlEditorPlugin(ControlEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001209d0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* ControlEditorPlugin::~ControlEditorPlugin() */

void __thiscall ControlEditorPlugin::~ControlEditorPlugin(ControlEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001209d0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* ControlEditorPopupButton::_initialize_classv() */

void ControlEditorPopupButton::_initialize_classv(void)

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
    if (Button::initialize_class()::initialized == '\0') {
      if (BaseButton::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012a010 != Node::_bind_methods) {
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
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BaseButton");
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
        BaseButton::_bind_methods();
        BaseButton::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BaseButton");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Button");
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
      if ((code *)PTR__bind_methods_0012a078 != BaseButton::_bind_methods) {
        Button::_bind_methods();
      }
      Button::initialize_class()::initialized = '\x01';
    }
    local_58 = "Button";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ControlEditorPopupButton";
    local_70 = 0;
    local_50 = 0x18;
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



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = Button::Button;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011420d;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_0011420d:
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
        if (pvVar4 == (void *)0x0) goto LAB_001142e2;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_001142e2:
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
  *(code **)this = RefCounted::unreference;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114385;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00114385:
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



/* EditorPropertySizeFlags::~EditorPropertySizeFlags() */

void __thiscall EditorPropertySizeFlags::~EditorPropertySizeFlags(EditorPropertySizeFlags *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001213c0;
  if (*(long *)(this + 0xb78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb78);
      *(undefined8 *)(this + 0xb78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset() */

void __thiscall
EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset(EditorPropertyAnchorsPreset *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120ff0;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset() */

void __thiscall
EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset(EditorPropertyAnchorsPreset *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00120ff0;
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb60);
  return;
}



/* EditorPropertySizeFlags::~EditorPropertySizeFlags() */

void __thiscall EditorPropertySizeFlags::~EditorPropertySizeFlags(EditorPropertySizeFlags *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001213c0;
  if (*(long *)(this + 0xb78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb78);
      *(undefined8 *)(this + 0xb78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb88);
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



/* ControlEditorPlugin::get_class() const */

void ControlEditorPlugin::get_class(void)

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



/* ControlEditorPopupButton::get_class() const */

void ControlEditorPopupButton::get_class(void)

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



/* EditorPropertySizeFlags::get_class() const */

void EditorPropertySizeFlags::get_class(void)

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



/* EditorPropertyAnchorsPreset::get_class() const */

void EditorPropertyAnchorsPreset::get_class(void)

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



/* ControlPositioningWarning::get_class() const */

void ControlPositioningWarning::get_class(void)

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



/* SizeFlagPresetPicker::get_class() const */

void SizeFlagPresetPicker::get_class(void)

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



/* AnchorPresetPicker::get_class() const */

void AnchorPresetPicker::get_class(void)

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



/* ControlEditorPresetPicker::get_class() const */

void ControlEditorPresetPicker::get_class(void)

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



/* ControlEditorToolbar::get_class() const */

void ControlEditorToolbar::get_class(void)

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



/* EditorInspectorPluginControl::get_class() const */

void EditorInspectorPluginControl::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, String, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, String> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
::operator[](HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
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
  undefined1 auVar22 [16];
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  uint local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar26 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_78);
  if (cVar24 != '\0') {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_78 * 8);
    goto LAB_00115552;
  }
  local_70 = 0;
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar35 = (ulong)uVar27;
    uVar28 = uVar35 * 4;
    uVar39 = uVar35 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(this + 0x10) = uVar29;
    pvVar31 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = pvVar31;
    if (uVar27 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) && (pvVar31 < (void *)((long)pvVar4 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar35 != uVar28);
      }
      else {
        memset(pvVar4,0,uVar28);
        memset(pvVar31,0,uVar39);
      }
    }
    uVar26 = *param_1;
  }
  local_74 = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_74);
  if (cVar24 == '\0') {
    if ((float)uVar27 * __LC49 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar26 = *(uint *)(this + 0x28);
      if (uVar26 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar30 = (undefined1 (*) [16])0x0;
        goto LAB_00115546;
      }
      uVar28 = (ulong)(uVar26 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
      if (uVar26 + 1 < 2) {
        uVar28 = 2;
      }
      uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
      uVar35 = (ulong)uVar26;
      *(int *)(this + 0x28) = (int)uVar28;
      pvVar31 = *(void **)(this + 8);
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      __s_00 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = __s_00;
      if (uVar26 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)__s + uVar28 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(__s,0,uVar28);
          memset(__s_00,0,uVar39);
        }
      }
      if (uVar27 == 0) {
        uVar26 = *param_1;
      }
      else {
        uVar28 = 0;
        do {
          uVar26 = *(uint *)((long)pvVar4 + uVar28 * 4);
          if (uVar26 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar37 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar39 = CONCAT44(0,uVar3);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar26 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar39;
            lVar33 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar33 * 4);
            iVar32 = SUB164(auVar7 * auVar15,8);
            uVar38 = *puVar1;
            uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
            while (uVar38 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar38 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar39;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar39;
              uVar25 = SUB164(auVar9 * auVar17,8);
              uVar36 = uVar29;
              if (uVar25 < uVar37) {
                *puVar1 = uVar26;
                puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                uVar36 = *puVar2;
                *puVar2 = uVar29;
                uVar26 = uVar38;
                uVar37 = uVar25;
              }
              uVar37 = uVar37 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar32 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar39;
              lVar33 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar32 = SUB164(auVar10 * auVar18,8);
              uVar29 = uVar36;
              uVar38 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
            *puVar1 = uVar26;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar28 = uVar28 + 1;
        } while (uVar27 != uVar28);
        Memory::free_static(pvVar31,false);
        Memory::free_static(pvVar4,false);
        uVar26 = *param_1;
      }
    }
    local_68 = (undefined1  [16])0x0;
    local_50[0] = 0;
    local_58 = uVar26;
    pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
    *(uint *)pauVar30[1] = uVar26;
    *(undefined8 *)(pauVar30[1] + 8) = 0;
    *pauVar30 = (undefined1  [16])0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar30;
    }
    else {
      *puVar2 = pauVar30;
      *(undefined8 **)(*pauVar30 + 8) = puVar2;
    }
    uVar26 = *param_1;
    *(undefined1 (**) [16])(this + 0x20) = pauVar30;
    uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
    uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
    uVar26 = uVar27 ^ uVar27 >> 0x10;
    if (uVar27 == uVar27 >> 0x10) {
      uVar28 = 1;
      uVar26 = 1;
    }
    else {
      uVar28 = (ulong)uVar26;
    }
    lVar5 = *(long *)(this + 0x10);
    uVar38 = 0;
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar27);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar39;
    lVar34 = SUB168(auVar11 * auVar19,8);
    lVar33 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar34 * 4);
    iVar32 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    pauVar23 = pauVar30;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar12 * auVar20,8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar39;
      uVar37 = SUB164(auVar13 * auVar21,8);
      pauVar40 = pauVar23;
      if (uVar37 < uVar38) {
        *puVar1 = uVar26;
        puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
        pauVar40 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar23;
        uVar26 = uVar3;
        uVar38 = uVar37;
      }
      uVar38 = uVar38 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar39;
      lVar34 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar32 = SUB164(auVar14 * auVar22,8);
      pauVar23 = pauVar40;
      uVar3 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar28 = (ulong)local_74;
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar28 * 8);
    if (*(long *)(pauVar30[1] + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar30[1] + 8),(CowData *)&local_70);
      pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar28 * 8);
    }
  }
LAB_00115546:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00115552:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::call
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this,Variant **param_1,
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
      goto LAB_001158ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001158ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001158c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001159a0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001158ef:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001159a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::call
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this,Variant **param_1,
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
      goto LAB_00115aff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00115aff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00115bb0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115aff:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00115bb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::call
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this,Variant **param_1,
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
      goto LAB_00115d0f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00115d0f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00115dc0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115d0f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00115dc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::call
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this,Variant **param_1,
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
      goto LAB_00115f89;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00115f89;
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
        uVar3 = _LC161;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0011603a;
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
LAB_00115f89:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011603a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::call
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this,Variant **param_1,
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
      goto LAB_001161f9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001161f9;
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
        uVar3 = _LC161;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001161a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_001162aa;
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
LAB_001161f9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001162aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::call
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
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
      goto LAB_0011649f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011649f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC38;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC161;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar5 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar5,bVar8);
          return;
        }
        goto LAB_00116550;
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
LAB_0011649f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116550:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::call
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00116718;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00116718;
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
        uVar3 = _LC162;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001166c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_001167c9;
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
LAB_00116718:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001167c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::call
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this,Variant **param_1,
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
      goto LAB_00116988;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00116988;
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
        uVar3 = _LC162;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00116a39;
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
LAB_00116988:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116a39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::call
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this,Variant **param_1,
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
      goto LAB_00116bf8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00116bf8;
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
        uVar3 = _LC162;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00116ca9;
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
LAB_00116bf8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116ca9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::call
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this,Variant **param_1,
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
      goto LAB_00116e68;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00116e68;
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
        uVar3 = _LC162;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00116f19;
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
LAB_00116e68:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116f19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ControlEditorToolbar, void, int, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::call
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this,Variant **param_1,
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
      goto LAB_0011710e;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011710e;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC38;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC162;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001170e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5,bVar8);
          return;
        }
        goto LAB_001171bf;
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
LAB_0011710e:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC160,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001171bf:
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
    if ((code *)PTR__bind_methods_0012a080 != Object::_bind_methods) {
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



/* ControlEditorPlugin::_initialize_classv() */

void ControlEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0012a010 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012a088 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012a090 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ControlEditorPlugin";
    local_70 = 0;
    local_50 = 0x13;
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



/* EditorInspectorPluginControl::_initialize_classv() */

void EditorInspectorPluginControl::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0012a010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012a098 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012a0a0 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginControl";
    local_70 = 0;
    local_50 = 0x1c;
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



/* ControlEditorToolbar::_initialize_classv() */

void ControlEditorToolbar::_initialize_classv(void)

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
    if (HBoxContainer::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0012a0a8 != Container::_bind_methods) {
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "HBoxContainer";
    local_58 = 0;
    local_40 = 0xd;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ControlEditorToolbar";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertySizeFlags::_initialize_classv() */

void EditorPropertySizeFlags::_initialize_classv(void)

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
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "EditorProperty";
      local_60 = 0;
      local_40 = 0xe;
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
      if ((code *)PTR__bind_methods_0012a0b0 != Container::_bind_methods) {
        EditorProperty::_bind_methods();
      }
      EditorProperty::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorProperty";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertySizeFlags";
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



/* ControlPositioningWarning::_initialize_classv() */

void ControlPositioningWarning::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "MarginContainer";
      local_60 = 0;
      local_40 = 0xf;
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
      if ((code *)PTR__bind_methods_0012a0b8 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "MarginContainer";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ControlPositioningWarning";
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "BoxContainer";
      local_60 = 0;
      local_40 = 0xc;
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
      if ((code *)PTR__bind_methods_0012a0a8 != Container::_bind_methods) {
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



/* EditorPropertyAnchorsPreset::_initialize_classv() */

void EditorPropertyAnchorsPreset::_initialize_classv(void)

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
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "EditorProperty";
      local_60 = 0;
      local_40 = 0xe;
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
      if ((code *)PTR__bind_methods_0012a0b0 != Container::_bind_methods) {
        EditorProperty::_bind_methods();
      }
      EditorProperty::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorProperty";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyAnchorsPreset";
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
  undefined8 local_60;
  undefined8 local_58;
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
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "BoxContainer";
      local_60 = 0;
      local_40 = 0xc;
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
      if ((code *)PTR__bind_methods_0012a0a8 != Container::_bind_methods) {
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



/* ControlEditorPresetPicker::_initialize_classv() */

void ControlEditorPresetPicker::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "MarginContainer";
      local_60 = 0;
      local_40 = 0xf;
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
      if ((code *)PTR__bind_methods_0012a0b8 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "MarginContainer";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ControlEditorPresetPicker";
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
    if (cVar5 != '\0') goto LAB_00118b4b;
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
      if (cVar5 != '\0') goto LAB_00118b4b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00118b4b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginControl::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginControl::is_class(EditorInspectorPluginControl *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00118d4b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginControl");
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
      if (cVar5 != '\0') goto LAB_00118d4b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00118e4e;
    }
  }
LAB_00118d4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00118e4e:
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
    if (cVar5 != '\0') goto LAB_00118f5b;
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
      if (cVar5 != '\0') goto LAB_00118f5b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00118f5b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPlugin::is_class(String const&) const */

undefined8 __thiscall ControlEditorPlugin::is_class(ControlEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011915b;
  }
  cVar5 = String::operator==(param_1,"ControlEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0011915b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011925e;
    }
  }
LAB_0011915b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011925e:
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
    if (cVar5 != '\0') goto LAB_0011936b;
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
      if (cVar5 != '\0') goto LAB_0011936b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011946e;
    }
  }
LAB_0011936b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011946e:
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
    if (cVar4 != '\0') goto LAB_0011957b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011957b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001196cb;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001196cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPopupButton::is_class(String const&) const */

undefined8 __thiscall
ControlEditorPopupButton::is_class(ControlEditorPopupButton *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011981b;
  }
  cVar5 = String::operator==(param_1,"ControlEditorPopupButton");
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
      if (cVar5 != '\0') goto LAB_0011981b;
    }
    cVar5 = String::operator==(param_1,"Button");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0011981b;
      }
      cVar5 = String::operator==(param_1,"BaseButton");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_001199be;
      }
    }
  }
LAB_0011981b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001199be:
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
        if (pvVar3 == (void *)0x0) goto LAB_00119abf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00119abf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ControlEditorToolbar::is_class(String const&) const */

undefined8 __thiscall ControlEditorToolbar::is_class(ControlEditorToolbar *this,String *param_1)

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
  cVar5 = String::operator==(param_1,"ControlEditorToolbar");
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
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_00119d1e;
    }
  }
LAB_00119c1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119d1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertySizeFlags::is_class(String const&) const */

undefined8 __thiscall
EditorPropertySizeFlags::is_class(EditorPropertySizeFlags *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00119e2b;
  }
  cVar5 = String::operator==(param_1,"EditorPropertySizeFlags");
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
      if (cVar5 != '\0') goto LAB_00119e2b;
    }
    cVar5 = String::operator==(param_1,"EditorProperty");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00119f2e;
    }
  }
LAB_00119e2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119f2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyAnchorsPreset::is_class(String const&) const */

undefined8 __thiscall
EditorPropertyAnchorsPreset::is_class(EditorPropertyAnchorsPreset *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a03b;
  }
  cVar5 = String::operator==(param_1,"EditorPropertyAnchorsPreset");
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
      if (cVar5 != '\0') goto LAB_0011a03b;
    }
    cVar5 = String::operator==(param_1,"EditorProperty");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a13e;
    }
  }
LAB_0011a03b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a13e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPresetPicker::is_class(String const&) const */

undefined8 __thiscall
ControlEditorPresetPicker::is_class(ControlEditorPresetPicker *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a24b;
  }
  cVar5 = String::operator==(param_1,"ControlEditorPresetPicker");
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
      if (cVar5 != '\0') goto LAB_0011a24b;
    }
    cVar5 = String::operator==(param_1,"MarginContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a34e;
    }
  }
LAB_0011a24b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a34e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SizeFlagPresetPicker::is_class(String const&) const */

undefined8 __thiscall SizeFlagPresetPicker::is_class(SizeFlagPresetPicker *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011a45b;
  }
  cVar4 = String::operator==(param_1,"SizeFlagPresetPicker");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ControlEditorPresetPicker::is_class((ControlEditorPresetPicker *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011a45b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnchorPresetPicker::is_class(String const&) const */

undefined8 __thiscall AnchorPresetPicker::is_class(AnchorPresetPicker *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011a5ab;
  }
  cVar4 = String::operator==(param_1,"AnchorPresetPicker");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ControlEditorPresetPicker::is_class((ControlEditorPresetPicker *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011a5ab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0011a6fb;
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
      if (cVar5 != '\0') goto LAB_0011a6fb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a7fe;
    }
  }
LAB_0011a6fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a7fe:
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
    if (cVar5 != '\0') goto LAB_0011a90b;
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
      if (cVar5 != '\0') goto LAB_0011a90b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011aa0e;
    }
  }
LAB_0011a90b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011aa0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::is_class(String const&) const */

undefined8 __thiscall
ControlPositioningWarning::is_class(ControlPositioningWarning *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011ab1b;
  }
  cVar5 = String::operator==(param_1,"ControlPositioningWarning");
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
      if (cVar5 != '\0') goto LAB_0011ab1b;
    }
    cVar5 = String::operator==(param_1,"MarginContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011ac1e;
    }
  }
LAB_0011ab1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ac1e:
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
  local_78 = &_LC62;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC62;
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



/* EditorInspectorPluginControl::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginControl::_get_property_listv
          (EditorInspectorPluginControl *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginControl";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPluginControl";
  local_90 = 0;
  local_70 = 0x1c;
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginControl",false);
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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPlugin";
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



/* ControlEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ControlEditorPlugin::_get_property_listv(ControlEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ControlEditorPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ControlEditorPlugin";
  local_90 = 0;
  local_70 = 0x13;
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
  StringName::StringName((StringName *)&local_78,"ControlEditorPlugin",false);
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
  if ((code *)PTR__get_property_list_0012a0c0 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0012a0c8 != CanvasItem::_get_property_list) {
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



/* ControlEditorToolbar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ControlEditorToolbar::_get_property_listv(ControlEditorToolbar *this,List *param_1,bool param_2)

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
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ControlEditorToolbar";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ControlEditorToolbar";
  local_90 = 0;
  local_70 = 0x14;
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
  StringName::StringName((StringName *)&local_78,"ControlEditorToolbar",false);
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

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
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MarginContainer";
  local_90 = 0;
  local_70 = 0xf;
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
  StringName::StringName((StringName *)&local_78,"MarginContainer",false);
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



/* ControlEditorPresetPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ControlEditorPresetPicker::_get_property_listv
          (ControlEditorPresetPicker *this,List *param_1,bool param_2)

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
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ControlEditorPresetPicker";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ControlEditorPresetPicker";
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
  StringName::StringName((StringName *)&local_78,"ControlEditorPresetPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SizeFlagPresetPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SizeFlagPresetPicker::_get_property_listv(SizeFlagPresetPicker *this,List *param_1,bool param_2)

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
    ControlEditorPresetPicker::_get_property_listv((ControlEditorPresetPicker *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "SizeFlagPresetPicker";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "SizeFlagPresetPicker";
  local_90 = 0;
  local_70 = 0x14;
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
  StringName::StringName((StringName *)&local_78,"SizeFlagPresetPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ControlEditorPresetPicker::_get_property_listv((ControlEditorPresetPicker *)this,param_1,true)
      ;
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnchorPresetPicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnchorPresetPicker::_get_property_listv(AnchorPresetPicker *this,List *param_1,bool param_2)

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
    ControlEditorPresetPicker::_get_property_listv((ControlEditorPresetPicker *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnchorPresetPicker";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnchorPresetPicker";
  local_90 = 0;
  local_70 = 0x12;
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
  StringName::StringName((StringName *)&local_78,"AnchorPresetPicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ControlEditorPresetPicker::_get_property_listv((ControlEditorPresetPicker *)this,param_1,true)
      ;
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlPositioningWarning::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ControlPositioningWarning::_get_property_listv
          (ControlPositioningWarning *this,List *param_1,bool param_2)

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
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ControlPositioningWarning";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ControlPositioningWarning";
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
  StringName::StringName((StringName *)&local_78,"ControlPositioningWarning",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
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



/* EditorPropertySizeFlags::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPropertySizeFlags::_get_property_listv
          (EditorPropertySizeFlags *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertySizeFlags";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPropertySizeFlags";
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
  StringName::StringName((StringName *)&local_78,"EditorPropertySizeFlags",false);
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



/* EditorPropertyAnchorsPreset::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPropertyAnchorsPreset::_get_property_listv
          (EditorPropertyAnchorsPreset *this,List *param_1,bool param_2)

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
  local_78 = "EditorPropertyAnchorsPreset";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPropertyAnchorsPreset";
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyAnchorsPreset",false);
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



/* BaseButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseButton::_get_property_listv(BaseButton *this,List *param_1,bool param_2)

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
  local_78 = "BaseButton";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BaseButton";
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
  StringName::StringName((StringName *)&local_78,"BaseButton",false);
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



/* Button::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Button::_get_property_listv(Button *this,List *param_1,bool param_2)

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
    BaseButton::_get_property_listv((BaseButton *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Button";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Button";
  local_90 = 0;
  local_70 = 6;
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
  StringName::StringName((StringName *)&local_78,"Button",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::_get_property_listv((BaseButton *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ControlEditorPopupButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ControlEditorPopupButton::_get_property_listv
          (ControlEditorPopupButton *this,List *param_1,bool param_2)

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
    Button::_get_property_listv((Button *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ControlEditorPopupButton";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ControlEditorPopupButton";
  local_90 = 0;
  local_70 = 0x18;
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
  StringName::StringName((StringName *)&local_78,"ControlEditorPopupButton",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Button::_get_property_listv((Button *)this,param_1,true);
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



/* SizeFlagPresetPicker::_initialize_classv() */

void SizeFlagPresetPicker::_initialize_classv(void)

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
    if (ControlEditorPresetPicker::initialize_class()::initialized == '\0') {
      if (MarginContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"MarginContainer");
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
        if ((code *)PTR__bind_methods_0012a0b8 != Container::_bind_methods) {
          MarginContainer::_bind_methods();
        }
        MarginContainer::initialize_class()::initialized = '\x01';
      }
      local_48 = "MarginContainer";
      local_58 = 0;
      local_40 = 0xf;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "ControlEditorPresetPicker";
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
      ControlEditorPresetPicker::initialize_class()::initialized = '\x01';
    }
    local_48 = "ControlEditorPresetPicker";
    local_58 = 0;
    local_40 = 0x19;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SizeFlagPresetPicker";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnchorPresetPicker::_initialize_classv() */

void AnchorPresetPicker::_initialize_classv(void)

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
    if (ControlEditorPresetPicker::initialize_class()::initialized == '\0') {
      if (MarginContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"MarginContainer");
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
        if ((code *)PTR__bind_methods_0012a0b8 != Container::_bind_methods) {
          MarginContainer::_bind_methods();
        }
        MarginContainer::initialize_class()::initialized = '\x01';
      }
      local_48 = "MarginContainer";
      local_58 = 0;
      local_40 = 0xf;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "ControlEditorPresetPicker";
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
      ControlEditorPresetPicker::initialize_class()::initialized = '\x01';
    }
    local_48 = "ControlEditorPresetPicker";
    local_58 = 0;
    local_40 = 0x19;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnchorPresetPicker";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* AnchorPresetPicker::_notificationv(int, bool) */

void __thiscall
AnchorPresetPicker::_notificationv(AnchorPresetPicker *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0012a058 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012a058 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification(iVar1);
  return;
}



/* SizeFlagPresetPicker::_notificationv(int, bool) */

void __thiscall
SizeFlagPresetPicker::_notificationv(SizeFlagPresetPicker *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0012a058 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012a058 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011e340) */
/* ControlEditorPopupButton::_notificationv(int, bool) */

void __thiscall
ControlEditorPopupButton::_notificationv(ControlEditorPopupButton *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012a0d0 != BaseButton::_notification) {
      Button::_notification(iVar1);
    }
    BaseButton::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  BaseButton::_notification(iVar1);
  if ((code *)PTR__notification_0012a0d0 != BaseButton::_notification) {
    Button::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* ControlPositioningWarning::_notificationv(int, bool) */

void __thiscall
ControlPositioningWarning::_notificationv(ControlPositioningWarning *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _update_warning(this);
      _update_toggler(this);
    }
    if ((code *)PTR__notification_0012a058 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012a058 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _update_warning(this);
  _update_toggler(this);
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



/* EditorInspectorPluginControl::~EditorInspectorPluginControl() */

void __thiscall
EditorInspectorPluginControl::~EditorInspectorPluginControl(EditorInspectorPluginControl *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e7c4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e7c4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e7c4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e7c4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e7c4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011e7c4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fa88;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginControl::~EditorInspectorPluginControl() */

void __thiscall
EditorInspectorPluginControl::~EditorInspectorPluginControl(EditorInspectorPluginControl *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e8c4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e8c4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e8c4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e8c4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e8c4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011e8c4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0011fa88;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
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
LAB_0011ec70:
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
  if (lVar9 == 0) goto LAB_0011ec70;
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
    goto LAB_0011ecc6;
  }
  if (lVar9 == lVar5) {
LAB_0011ebeb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011ecc6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011eb5f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011ebeb;
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
LAB_0011eb5f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Control::SizeFlags>::_unref() */

void __thiscall CowData<Control::SizeFlags>::_unref(CowData<Control::SizeFlags> *this)

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



/* CowData<Control::SizeFlags>::_realloc(long) */

undefined8 __thiscall
CowData<Control::SizeFlags>::_realloc(CowData<Control::SizeFlags> *this,long param_1)

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
/* Error CowData<Control::SizeFlags>::resize<false>(long) */

undefined8 __thiscall
CowData<Control::SizeFlags>::resize<false>(CowData<Control::SizeFlags> *this,long param_1)

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
LAB_0011ef70:
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
  if (lVar7 == 0) goto LAB_0011ef70;
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
        goto LAB_0011eea1;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0011eea1:
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



/* CowData<CheckBox*>::_realloc(long) */

undefined8 __thiscall CowData<CheckBox*>::_realloc(CowData<CheckBox*> *this,long param_1)

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
/* Error CowData<CheckBox*>::resize<false>(long) */

undefined8 __thiscall CowData<CheckBox*>::resize<false>(CowData<CheckBox*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_0011f250:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0011f250;
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
        goto LAB_0011f161;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0011f161:
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



/* ControlPositioningWarning::_update_warning() */

void ControlPositioningWarning::_GLOBAL__sub_I__update_warning(void)

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
/* EditorInspectorPluginControl::~EditorInspectorPluginControl() */

void __thiscall
EditorInspectorPluginControl::~EditorInspectorPluginControl(EditorInspectorPluginControl *this)

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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset() */

void __thiscall
EditorPropertyAnchorsPreset::~EditorPropertyAnchorsPreset(EditorPropertyAnchorsPreset *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertySizeFlags::~EditorPropertySizeFlags() */

void __thiscall EditorPropertySizeFlags::~EditorPropertySizeFlags(EditorPropertySizeFlags *this)

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
/* ControlEditorPlugin::~ControlEditorPlugin() */

void __thiscall ControlEditorPlugin::~ControlEditorPlugin(ControlEditorPlugin *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Node*, DefaultAllocator>::~List() */

void __thiscall List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SizeFlagPresetPicker::~SizeFlagPresetPicker() */

void __thiscall SizeFlagPresetPicker::~SizeFlagPresetPicker(SizeFlagPresetPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnchorPresetPicker::~AnchorPresetPicker() */

void __thiscall AnchorPresetPicker::~AnchorPresetPicker(AnchorPresetPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ControlEditorPresetPicker::~ControlEditorPresetPicker() */

void __thiscall
ControlEditorPresetPicker::~ControlEditorPresetPicker(ControlEditorPresetPicker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ControlEditorPopupButton::~ControlEditorPopupButton() */

void __thiscall ControlEditorPopupButton::~ControlEditorPopupButton(ControlEditorPopupButton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ControlEditorToolbar::~ControlEditorToolbar() */

void __thiscall ControlEditorToolbar::~ControlEditorToolbar(ControlEditorToolbar *this)

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
/* ControlPositioningWarning::~ControlPositioningWarning() */

void __thiscall
ControlPositioningWarning::~ControlPositioningWarning(ControlPositioningWarning *this)

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
/* CallableCustomMethodPointer<EditorPropertyAnchorsPreset, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyAnchorsPreset,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertySizeFlags, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertySizeFlags, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorPropertySizeFlags,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertySizeFlags,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorPopupButton, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPopupButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPopupButton,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorPresetPicker, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ControlEditorPresetPicker,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorPresetPicker,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SizeFlagPresetPicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SizeFlagPresetPicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SizeFlagPresetPicker,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorToolbar, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorToolbar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorToolbar, void, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ControlEditorToolbar, void, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ControlEditorToolbar,void,bool,bool> *this)

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



