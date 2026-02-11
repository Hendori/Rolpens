
/* ProjectExportDialog::get_current_preset() const */

ProjectExportDialog * __thiscall ProjectExportDialog::get_current_preset(ProjectExportDialog *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_tree_popup_edited(bool) */

void ProjectExportDialog::_tree_popup_edited(bool param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _local_48 = Tree::get_custom_popup_rect();
  Viewport::get_global_canvas_transform();
  local_48._0_4_ = SUB164(_local_48,0) + (float)local_28;
  local_48._4_4_ = (float)local_48._4_4_ + (float)((ulong)local_28 >> 0x20);
  Viewport::get_global_canvas_transform();
  uVar4 = Transform2D::get_scale();
  local_40 = CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)local_40 >> 0x20),
                      (float)uVar4 * (float)local_40);
  cVar3 = Viewport::is_embedding_subwindows();
  if (cVar3 == '\0') {
    local_38._0_8_ = Window::get_position();
    uVar4 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_38);
    local_48._0_4_ = (float)uVar4 + (float)local_48._0_4_;
    local_48._4_4_ = (float)((ulong)uVar4 >> 0x20) + (float)local_48._4_4_;
  }
  plVar1 = *(long **)(CONCAT71(in_register_00000039,param_1) + 0xe58);
  pcVar2 = *(code **)(*plVar1 + 0x240);
  local_38 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_48);
  (*pcVar2)(plVar1,(Vector2i *)local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_open_export_template_manager() */

void ProjectExportDialog::_open_export_template_manager(void)

{
  Window::hide();
  EditorNode::open_export_template_manager();
  return;
}



/* ProjectExportDialog::_export_all_dialog() */

void __thiscall ProjectExportDialog::_export_all_dialog(ProjectExportDialog *this)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Window::show();
  pVVar1 = *(Vector2i **)(this + 0xe80);
  local_20 = _LC189;
  local_18 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_20);
  Window::popup_centered(pVVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportTextureFormatError::_on_fix_texture_format_pressed() */

void __thiscall
ProjectExportTextureFormatError::_on_fix_texture_format_pressed
          (ProjectExportTextureFormatError *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (String *)ProjectSettings::get_singleton();
  Variant::Variant((Variant *)local_48,true);
  ProjectSettings::set_setting(pSVar1,(Variant *)(this + 0xa20));
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  ProjectSettings::get_singleton();
  ProjectSettings::save();
  EditorFileSystem::scan_changes();
  StringName::StringName((StringName *)&local_50,"texture_format_enabled",false);
  local_40 = (undefined1  [16])0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_50,0,0);
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



/* ProjectExportTextureFormatError::_notification(int) [clone .part.0] */

void ProjectExportTextureFormatError::_notification(int param_1)

{
  StringName *pSVar1;
  long lVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  pSVar1 = *(StringName **)((StringName *)CONCAT44(in_register_0000003c,param_1) + 0xa10);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_color
            ((StringName *)CONCAT44(in_register_0000003c,param_1),
             (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::get_export_path() */

ProjectExportDialog * __thiscall ProjectExportDialog::get_export_path(ProjectExportDialog *this)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_40);
  if (local_40 == (Object *)0x0) {
    _err_print_error("get_export_path","editor/export/project_export.cpp",0x21c,
                     "Condition \"current.is_null()\" is true. Returning: String(\"\")",0,0);
    *(undefined8 *)this = 0;
    local_30 = 0;
    local_38 = &_LC15;
    String::parse_latin1((StrRange *)this);
  }
  else {
    EditorExportPreset::get_export_path();
  }
  if (local_40 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_40);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ProjectExportTextureFormatError::_notification(int) */

void __thiscall
ProjectExportTextureFormatError::_notification(ProjectExportTextureFormatError *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* ProjectExportDialog::_validate_script_encryption_key(String const&) */

undefined8 __thiscall
ProjectExportDialog::_validate_script_encryption_key(ProjectExportDialog *this,String *param_1)

{
  long lVar1;
  char cVar2;
  
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    return 0;
  }
  cVar2 = String::is_valid_hex_number(SUB81(param_1,0));
  if ((cVar2 != '\0') && (lVar1 = *(long *)param_1, lVar1 != 0)) {
    return CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + -8) == 0x41);
  }
  return 0;
}



/* ProjectExportDialog::_setup_item_for_file_mode(TreeItem*, EditorExportPreset::FileExportMode) */

void ProjectExportDialog::_setup_item_for_file_mode
               (undefined8 param_1_00,undefined8 param_2,StringName *param_1,undefined8 param_4,
               int param_5)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (int)param_4;
  if (param_5 == 0) {
    TreeItem::set_checked(iVar2,false);
    TreeItem::set_cell_mode(param_4,1,0);
    TreeItem::set_editable(iVar2,true);
    TreeItem::set_selectable(iVar2,true);
    if (_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)::{lambda()#1}::
        operator()()::sname == '\0') {
      iVar1 = __cxa_guard_acquire(&_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar1 != 0) {
        _scs_create((char *)&_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)::
                      {lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    local_58 = Window::get_theme_color
                         (param_1,(StringName *)
                                  &_setup_item_for_file_mode(TreeItem*,EditorExportPreset::FileExportMode)
                                   ::{lambda()#1}::operator()()::sname);
    local_50 = param_2;
    TreeItem::set_custom_color(iVar2,(Color *)0x1);
  }
  else {
    TreeItem::set_checked(iVar2,false);
    TreeItem::set_cell_mode(param_4,1,4);
    TreeItem::set_editable(iVar2,true);
    TreeItem::set_selectable(iVar2,true);
    TreeItem::clear_custom_color(iVar2);
  }
  Variant::Variant((Variant *)&local_58,param_5);
  TreeItem::set_metadata(iVar2,(Variant *)0x1);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined8 __thiscall
ProjectExportDialog::can_drop_data_fw
          (ProjectExportDialog *this,Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Variant *this_00;
  long in_FS_OFFSET;
  Variant local_c8 [8];
  Variant local_c0 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Control **)(this + 0xdd8) == param_3) {
    this_00 = local_c8;
    Variant::operator_cast_to_Dictionary(this_00);
    Variant::Variant((Variant *)local_78,"type");
    cVar1 = Dictionary::has(this_00);
    if (cVar1 == '\0') {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Variant::Variant((Variant *)local_58,"type");
      Dictionary::operator[](this_00);
      Variant::operator_cast_to_String(local_c0);
      cVar1 = String::operator!=((String *)local_c0,"export_preset");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((cVar1 == '\0') &&
         ((iVar2 = ItemList::get_item_at_position(*(Vector2 **)(this + 0xdd8),SUB81(param_1,0)),
          -1 < iVar2 ||
          (cVar1 = ItemList::is_pos_at_end_of_items(*(Vector2 **)(this + 0xdd8)), cVar1 != '\0'))))
      {
        Dictionary::~Dictionary((Dictionary *)this_00);
        goto LAB_00100954;
      }
    }
LAB_001009d8:
    Dictionary::~Dictionary((Dictionary *)this_00);
    uVar3 = 0;
  }
  else {
    if (*(Control **)(this + 0xea0) == param_3) {
      this_00 = local_c0;
      Variant::operator_cast_to_Dictionary(this_00);
      Variant::Variant((Variant *)local_58,"export_patch");
      Variant::Variant((Variant *)local_98,"");
      Variant::Variant((Variant *)local_b8,"type");
      Dictionary::get((Variant *)local_78,this_00);
      cVar1 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((cVar1 != '\0') ||
         (lVar4 = Tree::get_item_at_position(*(Vector2 **)(this + 0xea0)), lVar4 == 0))
      goto LAB_001009d8;
      Tree::set_drop_mode_flags((int)*(undefined8 *)(this + 0xea0));
      Dictionary::~Dictionary((Dictionary *)this_00);
    }
LAB_00100954:
    uVar3 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* ProjectExportDialog::_get_resource_export_header(EditorExportPreset::ExportFilter) const */

String * ProjectExportDialog::_get_resource_export_header
                   (String *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 3) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Resources to exclude:";
    local_40 = 0x15;
  }
  else if (param_3 == 4) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Resources to override export behavior:";
    local_40 = 0x26;
  }
  else {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Resources to export:";
    local_40 = 0x14;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR(param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_propagate_file_export_mode(TreeItem*, EditorExportPreset::FileExportMode)
    */

void __thiscall
ProjectExportDialog::_propagate_file_export_mode
          (ProjectExportDialog *this,undefined8 param_1,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::get_metadata((int)(Variant *)local_58);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar1 == 0) {
    if (param_3 == 0) {
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      TreeItem::set_text(param_1,1,(StrRange *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_00100fa6;
    }
    PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xe58));
    PopupMenu::get_item_text((int)(String *)&local_88);
    local_78 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    local_68 = "(Inherited)";
    local_60 = 0xb;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    operator+((char *)&local_68,(String *)&_LC29);
    String::operator+=((String *)&local_88,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    iVar1 = param_3;
  }
  else {
    PopupMenu::get_item_index((int)*(undefined8 *)(this + 0xe58));
    PopupMenu::get_item_text((int)&local_88);
  }
  local_68 = (undefined *)0x0;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_88);
  }
  TreeItem::set_text(param_1,1,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00100fa6:
  iVar4 = 0;
  iVar2 = TreeItem::get_child_count();
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + 1;
      uVar3 = TreeItem::get_child((int)param_1);
      _propagate_file_export_mode(this,uVar3,iVar1);
      iVar2 = TreeItem::get_child_count();
    } while (iVar4 < iVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportTextureFormatError::show_for_texture_format(String const&, String const&) */

void __thiscall
ProjectExportTextureFormatError::show_for_texture_format
          (ProjectExportTextureFormatError *this,String *param_1,String *param_2)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = *(String **)(this + 0xa10);
  String::replace((char *)local_68,(char *)param_1);
  local_60 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_1);
  }
  local_78 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_78);
  local_58 = "Target platform requires \'%s\' texture compression. Enable \'Import %s\' to fix.";
  local_80 = 0;
  local_50 = 0x4d;
  String::parse_latin1((StrRange *)&local_80);
  TTR(local_70,(String *)&local_80);
  vformat<String,String>
            ((CowData<char32_t> *)&local_58,local_70,(CowData<char32_t> *)&local_60,local_68);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_68);
  if (*(long *)(this + 0xa20) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa20),(CowData *)param_2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_open_key_help_link() */

void ProjectExportDialog::_open_key_help_link(void)

{
  code *pcVar1;
  char *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)OS::get_singleton();
  local_50 = 0;
  pcVar1 = *(code **)(*plVar3 + 0x150);
  local_40 = 0x4f;
  local_48 = "%s/contributing/development/compiling/compiling_with_script_encryption_key.html";
  String::parse_latin1((StrRange *)&local_50);
  vformat<char_const*>((String *)&local_48,(char *)&local_50);
  (*pcVar1)(plVar3);
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportTextureFormatError::ProjectExportTextureFormatError() */

void __thiscall
ProjectExportTextureFormatError::ProjectExportTextureFormatError
          (ProjectExportTextureFormatError *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  Label *this_00;
  LinkButton *this_01;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  this[0xa0c] = (ProjectExportTextureFormatError)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00124260;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  this_00 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(Label **)(this + 0xa10) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  this_01 = (LinkButton *)operator_new(0xb10,"");
  local_58 = (char *)0x0;
  LinkButton::LinkButton(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(LinkButton **)(this + 0xa18) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),4);
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa18);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Fix Import";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  LinkButton::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00124bc8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar4;
  *(code **)(this_02 + 0x38) = _on_fix_texture_format_pressed;
  *(ProjectExportTextureFormatError **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "ProjectExportTextureFormatError::_on_fix_texture_format_pressed";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_validate_export_path(String const&) */

void ProjectExportDialog::_validate_export_path(String *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_file();
  String::get_basename();
  if ((local_48[0] == 0) || (iVar4 = (int)*(undefined8 *)(local_48[0] + -8), iVar4 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_50);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_50);
    if (iVar4 != 1) {
      cVar3 = BaseButton::is_disabled();
      if (cVar3 != '\0') {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0xf20) + 0xd88),0));
        plVar1 = *(long **)(*(char **)(param_1 + 0xf20) + 0xe70);
        pcVar2 = *(code **)(*plVar1 + 0x108);
        create_custom_callable_function_pointer<EditorFileDialog,String_const&>
                  ((EditorFileDialog *)local_48,*(char **)(param_1 + 0xf20),
                   (_func_void_String_ptr *)"&EditorFileDialog::_file_submitted");
        (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)local_48,0);
        Callable::~Callable((Callable *)local_48);
      }
      goto LAB_0010171d;
    }
  }
  cVar3 = BaseButton::is_disabled();
  if (cVar3 == '\0') {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0xf20) + 0xd88),0));
    plVar1 = *(long **)(*(char **)(param_1 + 0xf20) + 0xe70);
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<EditorFileDialog,String_const&>
              ((EditorFileDialog *)local_48,*(char **)(param_1 + 0xf20),
               (_func_void_String_ptr *)"&EditorFileDialog::_file_submitted");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)local_48);
    Callable::~Callable((Callable *)local_48);
  }
LAB_0010171d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_fill_tree(EditorFileSystemDirectory*, TreeItem*, Ref<EditorExportPreset>&,
   EditorExportPreset::ExportFilter) */

undefined4 __thiscall
ProjectExportDialog::_fill_tree
          (ProjectExportDialog *this,int param_2_00,undefined8 param_2,undefined8 *param_3,
          int param_5)

{
  StringName *pSVar1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  Object *pOVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long in_FS_OFFSET;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  long local_70;
  Object *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::set_cell_mode(param_2,0,1);
  pSVar1 = *(StringName **)(this + 0xdd8);
  if ((_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
       ::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                                   ::{lambda()#2}::operator()()::sname), iVar6 != 0)) {
    _scs_create((char *)&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                         ::{lambda()#2}::operator()()::sname);
  }
  if ((_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                                   ::{lambda()#1}::operator()()::sname), iVar6 != 0)) {
    _scs_create((char *)&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_fill_tree(EditorFileSystemDirectory*,TreeItem*,Ref<EditorExportPreset>&,EditorExportPreset::ExportFilter)
                         ::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_68,pSVar1);
  iVar6 = (int)param_2;
  TreeItem::set_icon(iVar6,(Ref *)0x0);
  if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
  local_70 = 0;
  local_68 = (Object *)&_LC36;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  EditorFileSystemDirectory::get_name();
  String::operator+((String *)&local_68,(String *)local_78);
  TreeItem::set_text(param_2,0,(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  TreeItem::set_editable(iVar6,false);
  EditorFileSystemDirectory::get_path();
  Variant::Variant((Variant *)local_58,(String *)&local_68);
  TreeItem::set_metadata(iVar6,(Variant *)0x0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (param_5 == 4) {
    uVar8 = *param_3;
    EditorFileSystemDirectory::get_path();
    uVar5 = EditorExportPreset::get_file_export_mode(uVar8,(StringName *)&local_68,0);
    _setup_item_for_file_mode(this,param_2,uVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  iVar9 = 0;
  uVar5 = 0;
  iVar4 = EditorFileSystemDirectory::get_subdir_count();
  uVar10 = uVar5;
  if (0 < iVar4) {
    do {
      pOVar7 = (Object *)Tree::create_item(*(TreeItem **)(this + 0xe48),iVar6);
      uVar8 = EditorFileSystemDirectory::get_subdir(param_2_00);
      uVar5 = _fill_tree(this,uVar8,pOVar7,param_3,param_5);
      if (((char)uVar5 == '\0') &&
         (cVar3 = predelete_handler(pOVar7), uVar5 = uVar10, cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      iVar9 = iVar9 + 1;
      iVar4 = EditorFileSystemDirectory::get_subdir_count();
      uVar10 = uVar5;
    } while (iVar9 < iVar4);
  }
  iVar4 = 0;
  do {
    iVar9 = EditorFileSystemDirectory::get_file_count();
    if (iVar9 <= iVar4) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    EditorFileSystemDirectory::get_file_type((int)(StrRange *)&local_70);
    if (local_70 == 0) {
      local_80 = 0;
    }
    else {
      pOVar7 = *(Object **)(local_70 + 8);
      local_80 = 0;
      if (pOVar7 == (Object *)0x0) {
        if (*(long *)(local_70 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_70 + 0x10));
          goto LAB_00101b4b;
        }
        if (StringName::configured == '\0') goto LAB_00101b64;
      }
      else {
        local_60 = strlen((char *)pOVar7);
        local_68 = pOVar7;
        String::parse_latin1((StrRange *)&local_80);
LAB_00101b4b:
        if ((StringName::configured == '\0') || (local_70 == 0)) goto LAB_00101b64;
      }
      StringName::unref();
    }
LAB_00101b64:
    if ((param_5 == 1) &&
       (cVar3 = String::operator!=((String *)&local_80,"PackedScene"), cVar3 != '\0')) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    else {
      cVar3 = String::operator==((String *)&local_80,"TextFile");
      if ((cVar3 == '\0') &&
         (cVar3 = String::operator==((String *)&local_80,"OtherFile"), cVar3 == '\0')) {
        uVar8 = Tree::create_item(*(TreeItem **)(this + 0xe48),iVar6);
        TreeItem::set_cell_mode(uVar8,0,1);
        EditorFileSystemDirectory::get_file((int)(StringName *)&local_68);
        TreeItem::set_text(uVar8,0,(StringName *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        EditorFileSystemDirectory::get_file_path((int)local_78);
        pSVar2 = EditorNode::singleton;
        local_70 = 0;
        local_68 = (Object *)&_LC15;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        EditorNode::get_class_icon((String *)&local_68,pSVar2);
        iVar9 = (int)uVar8;
        TreeItem::set_icon(iVar9,(Ref *)0x0);
        if ((local_68 != (Object *)0x0) &&
           ((cVar3 = RefCounted::unreference(), pOVar7 = local_68, cVar3 != '\0' &&
            (cVar3 = predelete_handler(local_68), cVar3 != '\0')))) {
          (**(code **)(*(long *)pOVar7 + 0x140))();
          Memory::free_static(pOVar7,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        TreeItem::set_editable(iVar9,false);
        Variant::Variant((Variant *)local_58,(String *)local_78);
        TreeItem::set_metadata(iVar9,(Variant *)0x0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (param_5 == 4) {
          uVar5 = EditorExportPreset::get_file_export_mode((String *)*param_3,local_78,0);
          _setup_item_for_file_mode(this,uVar8,uVar5);
        }
        else {
          EditorExportPreset::has_export_file((String *)*param_3);
          TreeItem::set_checked(iVar9,false);
          TreeItem::propagate_check(iVar9,false);
        }
        uVar5 = 1;
        CowData<char32_t>::_unref(local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* ProjectExportDialog::_fill_resource_tree() */

void __thiscall ProjectExportDialog::_fill_resource_tree(ProjectExportDialog *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  CanvasItem::hide();
  CanvasItem::hide();
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_38);
  if (local_38 != (Object *)0x0) {
    iVar2 = EditorExportPreset::get_export_filter();
    if (iVar2 != 0) {
      uVar3 = Tree::create_item(*(TreeItem **)(this + 0xe48),0);
      if (iVar2 == 4) {
        Tree::set_columns((int)*(undefined8 *)(this + 0xe48));
        Tree::set_column_expand((int)*(undefined8 *)(this + 0xe48),true);
        uVar4 = *(undefined8 *)(this + 0xe48);
        EditorScale::get_scale();
        Tree::set_column_custom_minimum_width((int)uVar4,1);
        CanvasItem::show();
        CanvasItem::show();
        uVar4 = EditorFileSystem::get_filesystem();
        _fill_tree(this,uVar4,uVar3,&local_38,4);
        uVar3 = Tree::get_root();
        _propagate_file_export_mode(this,uVar3,0);
      }
      else {
        Tree::set_columns((int)*(undefined8 *)(this + 0xe48));
        CanvasItem::show();
        CanvasItem::show();
        uVar4 = EditorFileSystem::get_filesystem();
        _fill_tree(this,uVar4,uVar3,&local_38,iVar2);
      }
    }
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
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



/* ProjectExportDialog::_update_export_all() */

void __thiscall ProjectExportDialog::_update_export_all(ProjectExportDialog *this)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  String *pSVar9;
  long in_FS_OFFSET;
  undefined1 local_71;
  Object *local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = EditorExport::get_export_preset_count();
  do {
    iVar7 = EditorExport::get_export_preset_count();
    if (iVar7 <= iVar8) {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe78),0));
      if (iVar6 < 1) {
LAB_001022dd:
        local_60 = 0;
        local_50 = 0;
        pSVar9 = *(String **)(this + 0xe78);
        local_58 = (Object *)&_LC15;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = (Object *)0x114638;
        local_50 = 0x44;
      }
      else {
        local_60 = 0;
        local_58 = (Object *)&_LC15;
        pSVar9 = *(String **)(this + 0xe78);
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_60);
        local_58 = (Object *)0x114608;
        local_50 = 0x2f;
      }
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      TTR((String *)&local_58,(String *)&local_68);
      Control::set_tooltip_text(pSVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    EditorExport::get_export_preset((int)&local_70);
    local_68 = 0;
    EditorExportPreset::get_export_path();
    if (local_60 == 0) {
LAB_001022a8:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (((local_70 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe78),0));
      goto LAB_001022dd;
    }
    iVar7 = (int)*(undefined8 *)(local_60 + -8);
    if ((iVar7 == 0) || (iVar7 == 1)) {
      bVar4 = 1;
LAB_00102076:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    else {
      EditorExportPreset::get_platform();
      bVar4 = (**(code **)(*(long *)local_58 + 0x240))
                        (local_58,&local_70,(StrRange *)&local_68,&local_71,0);
      bVar4 = bVar4 ^ 1;
      if (((local_58 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar2 = local_58, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
      if (local_60 != 0) goto LAB_00102076;
    }
    lVar3 = local_68;
    if (bVar4 != 0) goto LAB_001022a8;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (((local_70 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar2 = local_70, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



/* ProjectExportDialog::_tree_changed() */

void __thiscall ProjectExportDialog::_tree_changed(ProjectExportDialog *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_58;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xe10] == (ProjectExportDialog)0x0) &&
     (get_current_preset((ProjectExportDialog *)&local_58), local_58 != (Object *)0x0)) {
    lVar4 = Tree::get_edited();
    if (lVar4 != 0) {
      iVar2 = EditorExportPreset::get_export_filter();
      if (iVar2 == 4) {
        TreeItem::get_metadata((int)local_48);
        Variant::operator_cast_to_String(local_50);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar3 = 0;
        cVar1 = TreeItem::is_checked((int)lVar4);
        if (cVar1 != '\0') {
          uVar3 = EditorExportPreset::get_file_export_mode(local_58,local_50,1);
        }
        EditorExportPreset::set_file_export_mode(local_58,local_50,uVar3);
        _setup_item_for_file_mode(this,lVar4,uVar3);
        uVar5 = Tree::get_root();
        _propagate_file_export_mode(this,uVar5,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      }
      else {
        TreeItem::propagate_check((int)lVar4,false);
      }
    }
    if (((local_58 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_58), cVar1 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectExportDialog::_check_propagated_to_item(Object*, int) */

void ProjectExportDialog::_check_propagated_to_item(Object *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  Object *local_48;
  Variant local_40 [8];
  int local_38 [6];
  long local_20;
  
  lVar2 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_48);
  if (local_48 != (Object *)0x0) {
    if (lVar2 != 0) {
      lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&TreeItem::typeinfo,0);
    }
    TreeItem::get_metadata((int)local_38);
    Variant::operator_cast_to_String(local_40);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = String::ends_with((char *)local_40);
    if (cVar1 == '\0') {
      cVar1 = TreeItem::is_checked((int)lVar2);
      if (cVar1 == '\0') {
        EditorExportPreset::remove_export_file((String *)local_48);
      }
      else {
        EditorExportPreset::add_export_file((String *)local_48);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
    if (local_48 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_48);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Removing unreachable block (ram,0x00102d6a) */
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
  String *pSVar9;
  CowData *pCVar10;
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
LAB_0010293b:
      local_60 = local_60 + -1;
      pSVar9 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar9);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
        if (cVar3 != '\0') goto LAB_00102999;
        cVar3 = String::operator<(pSVar9,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar9,pSVar5);
        pSVar8 = pSVar9;
        if (cVar3 != '\0') goto LAB_00102999;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar9 = pSVar4;
      }
      pSVar8 = pSVar9;
      if (cVar3 != '\0') {
        pSVar8 = pSVar5;
      }
LAB_00102999:
      local_48 = 0;
      if (*(long *)pSVar8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar8);
      }
      pSVar9 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar9,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_001029f7:
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
          if (lVar12 <= local_80) goto LAB_00102a90;
          lVar11 = *(long *)pSVar9;
          *(undefined8 *)pSVar9 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar9 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_001029f7;
        }
        pSVar9 = pSVar9 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_00102b5a:
    lVar11 = lVar12 + -2 >> 1;
    pSVar4 = param_3 + (lVar11 + param_1) * 8;
    while( true ) {
      local_48 = 0;
      if (*(long *)pSVar4 == 0) {
        adjust_heap(param_1,lVar11,lVar12,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar4);
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,(CowData<char32_t> *)&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar2 = (long *)(lVar6 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) break;
      pSVar4 = (String *)((CowData *)pSVar4 + -8);
      lVar11 = lVar11 + -1;
    }
    pSVar4 = param_3 + local_80 * 8 + -8;
    pCVar10 = (CowData *)(param_3 + param_1 * 8);
    lVar12 = (local_80 + -1) - param_1;
    do {
      plVar2 = (long *)(*(long *)pSVar4 + -0x10);
      if (*(long *)pSVar4 == 0) {
LAB_00102d08:
        if (*(long *)pCVar10 != *(long *)pSVar4) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar10);
        }
LAB_00102d28:
        local_48 = 0;
        adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        do {
          lVar11 = *plVar2;
          if (lVar11 == 0) goto LAB_00102d08;
          LOCK();
          lVar6 = *plVar2;
          bVar13 = lVar11 == lVar6;
          if (bVar13) {
            *plVar2 = lVar11 + 1;
            lVar6 = lVar11;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar6 == -1) goto LAB_00102d08;
        lVar11 = *(long *)pSVar4;
        if (lVar11 != *(long *)pCVar10) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar10);
        }
        local_48 = 0;
        if (lVar11 == 0) goto LAB_00102d28;
        plVar2 = (long *)(lVar11 + -0x10);
        do {
          lVar6 = *plVar2;
          if (lVar6 == 0) goto LAB_00102d43;
          LOCK();
          lVar7 = *plVar2;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar2 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 == -1) {
LAB_00102d43:
          adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
        }
        else {
          local_48 = lVar11;
          adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static(plVar2,false);
        }
      }
      pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
      bVar13 = 1 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar13);
  }
LAB_00102b2f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102a90:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_00102b2f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_00102b5a;
  goto LAB_0010293b;
}



/* SortArray<String, _DefaultComparator<String>, true>::sort_range(long, long, String*) const [clone
   .part.0] [clone .constprop.0] [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::sort_range
               (long param_1,long param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  CowData *pCVar6;
  CowData<char32_t> *pCVar7;
  CowData *pCVar8;
  CowData<char32_t> *pCVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_70;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      introsort(0,1,(String *)param_2,0);
      return;
    }
  }
  else {
    lVar5 = 0;
    lVar10 = param_1;
    do {
      lVar10 = lVar10 >> 1;
      lVar5 = lVar5 + 1;
    } while (lVar10 != 1);
    introsort(0,param_1,(String *)param_2,lVar5 * 2);
    if (param_1 < 0x11) {
      if (param_1 != 0) {
        lVar10 = 1;
        pCVar6 = (CowData *)(param_2 + 8);
        do {
          local_50 = 0;
          if (*(long *)pCVar6 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,pCVar6);
          }
          cVar3 = String::operator<((String *)&local_50,(String *)param_2);
          pCVar8 = pCVar6;
          lVar5 = lVar10;
          if (cVar3 == '\0') {
            local_48 = 0;
            if (local_50 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
            }
            while( true ) {
              pCVar9 = (CowData<char32_t> *)pCVar8;
              pCVar8 = (CowData *)(pCVar9 + -8);
              cVar3 = String::operator<((String *)&local_48,(String *)pCVar8);
              if (cVar3 == '\0') break;
              if (pCVar9 == (CowData<char32_t> *)(param_2 + 8)) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              if (*(long *)pCVar9 != *(long *)(pCVar9 + -8)) {
                CowData<char32_t>::_ref(pCVar9,pCVar8);
              }
            }
            if (*(long *)pCVar9 != local_48) {
              CowData<char32_t>::_ref(pCVar9,(CowData *)&local_48);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
          else {
            do {
              if (*(long *)pCVar8 != *(long *)((CowData<char32_t> *)pCVar8 + -8)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar8,(CowData *)((CowData<char32_t> *)pCVar8 + -8)
                          );
              }
              lVar5 = lVar5 + -1;
              pCVar8 = (CowData *)((CowData<char32_t> *)pCVar8 + -8);
            } while (lVar5 != 0);
            if (*(long *)param_2 != local_50) {
              CowData<char32_t>::_ref((CowData<char32_t> *)param_2,(CowData *)&local_50);
            }
          }
          lVar5 = local_50;
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
          lVar10 = lVar10 + 1;
          pCVar6 = pCVar6 + 8;
        } while (param_1 != lVar10);
      }
    }
    else {
      local_70 = 1;
      pCVar9 = (CowData<char32_t> *)(param_2 + 8);
      do {
        local_48 = 0;
        plVar1 = (long *)(*(long *)pCVar9 + -0x10);
        if (*(long *)pCVar9 != 0) {
          do {
            lVar10 = *plVar1;
            if (lVar10 == 0) goto LAB_00102e66;
            LOCK();
            lVar5 = *plVar1;
            bVar11 = lVar10 == lVar5;
            if (bVar11) {
              *plVar1 = lVar10 + 1;
              lVar5 = lVar10;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar5 != -1) {
            local_48 = *(long *)pCVar9;
          }
        }
LAB_00102e66:
        cVar3 = String::operator<((String *)&local_48,(String *)param_2);
        pCVar7 = pCVar9;
        if (cVar3 == '\0') {
          local_50 = 0;
          pCVar6 = (CowData *)pCVar9;
          if (local_48 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_48);
          }
          while( true ) {
            pCVar7 = (CowData<char32_t> *)pCVar6;
            pCVar6 = (CowData *)(pCVar7 + -8);
            cVar3 = String::operator<((String *)&local_50,(String *)pCVar6);
            if (cVar3 == '\0') break;
            if (pCVar7 == (CowData<char32_t> *)(param_2 + 8)) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            if (*(long *)pCVar7 != *(long *)(pCVar7 + -8)) {
              CowData<char32_t>::_ref(pCVar7,pCVar6);
            }
          }
          if (*(long *)pCVar7 != local_50) {
            CowData<char32_t>::_ref(pCVar7,(CowData *)&local_50);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        }
        else {
          do {
            pCVar6 = (CowData *)(pCVar7 + -8);
            if (*(long *)pCVar7 != *(long *)(pCVar7 + -8)) {
              CowData<char32_t>::_ref(pCVar7,pCVar6);
            }
            pCVar7 = (CowData<char32_t> *)pCVar6;
          } while ((CowData *)param_2 != pCVar6);
          if (*(long *)param_2 != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t> *)param_2,(CowData *)&local_48);
          }
        }
        lVar10 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        local_70 = local_70 + 1;
        pCVar9 = pCVar9 + 8;
      } while (local_70 != 0x10);
      pCVar9 = (CowData<char32_t> *)(param_2 + 0x80);
      lVar10 = 0x10;
      do {
        local_48 = 0;
        plVar1 = (long *)(*(long *)pCVar9 + -0x10);
        pCVar6 = (CowData *)pCVar9;
        lVar5 = lVar10;
        if (*(long *)pCVar9 != 0) {
          do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0010302b;
            LOCK();
            lVar4 = *plVar1;
            bVar11 = lVar2 == lVar4;
            if (bVar11) {
              *plVar1 = lVar2 + 1;
              lVar4 = lVar2;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar4 != -1) {
            local_48 = *(long *)pCVar9;
          }
        }
LAB_0010302b:
        pCVar7 = (CowData<char32_t> *)pCVar6;
        lVar5 = lVar5 + -1;
        pCVar6 = (CowData *)(pCVar7 + -8);
        cVar3 = String::operator<((String *)&local_48,(String *)pCVar6);
        if (cVar3 != '\0') {
          if (lVar5 == 0) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00103068;
          }
          if (*(long *)pCVar7 != *(long *)(pCVar7 + -8)) {
            CowData<char32_t>::_ref(pCVar7,pCVar6);
          }
          goto LAB_0010302b;
        }
LAB_00103068:
        if (*(long *)pCVar7 != local_48) {
          CowData<char32_t>::_ref(pCVar7,(CowData *)&local_48);
        }
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
        lVar10 = lVar10 + 1;
        pCVar9 = pCVar9 + 8;
      } while (param_1 != lVar10);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::~ProjectExportDialog() */

void __thiscall ProjectExportDialog::~ProjectExportDialog(ProjectExportDialog *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00124950;
  if (*(long *)(this + 0xf08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xf08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xf08);
      *(undefined8 *)(this + 0xf08) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  RBSet<String,Comparator<String>,DefaultAllocator>::clear
            ((RBSet<String,Comparator<String>,DefaultAllocator> *)(this + 0xe88));
  pvVar2 = *(void **)(this + 0xe88);
  if (pvVar2 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x30));
    Memory::free_static(pvVar2,false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00123fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ProjectExportDialog::~ProjectExportDialog() */

void __thiscall ProjectExportDialog::~ProjectExportDialog(ProjectExportDialog *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00124950;
  if (*(long *)(this + 0xf08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xf08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xf08);
      *(undefined8 *)(this + 0xf08) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  RBSet<String,Comparator<String>,DefaultAllocator>::clear
            ((RBSet<String,Comparator<String>,DefaultAllocator> *)(this + 0xe88));
  pvVar2 = *(void **)(this + 0xe88);
  if (pvVar2 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x30));
    Memory::free_static(pvVar2,false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00123fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xf60);
  return;
}



/* ProjectExportTextureFormatError::_bind_methods() */

void ProjectExportTextureFormatError::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
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
  local_d0 = 0;
  local_b0 = 0x16;
  local_b8 = "texture_format_enabled";
  String::parse_latin1((StrRange *)&local_d0);
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
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0x1f;
  local_c8 = "ProjectExportTextureFormatError";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * ProjectExportDialog::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  int iVar1;
  BoxContainer *this;
  TextureRect *this_00;
  long lVar2;
  Variant *pVVar3;
  Label *pLVar4;
  Vector2 *in_RCX;
  bool in_DL;
  Control *pCVar5;
  long in_FS_OFFSET;
  Dictionary *local_a0;
  Dictionary local_88 [8];
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Vector2 **)(param_2 + 0xdd8) == in_RCX) {
    iVar1 = ItemList::get_item_at_position(in_RCX,in_DL);
    if (-1 < iVar1) {
      Dictionary::Dictionary(local_88);
      Variant::Variant((Variant *)local_58,"export_preset");
      Variant::Variant((Variant *)local_78,"type");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
      Variant::Variant((Variant *)local_58,iVar1);
      Variant::Variant((Variant *)local_78,"preset");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
      this = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this,false);
      this[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)this = &PTR__initialize_classv_001238f8;
      postinitialize_handler((Object *)this);
      this_00 = (TextureRect *)operator_new(0x9e0,"");
      TextureRect::TextureRect(this_00);
      postinitialize_handler((Object *)this_00);
      iVar1 = (int)(Ref<Texture2D> *)&local_80;
      ItemList::get_item_icon(iVar1);
      TextureRect::set_texture((Ref *)this_00);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
      Node::add_child(this,this_00,0,0);
      pLVar4 = (Label *)operator_new(0xad8,"");
      local_80 = 0;
      Label::Label(pLVar4,(String *)&local_80);
      postinitialize_handler((Object *)pLVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      ItemList::get_item_text(iVar1);
      Label::set_text((String *)pLVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      Node::set_auto_translate_mode(pLVar4,2);
      Node::add_child(this,pLVar4,0,0);
      pCVar5 = *(Control **)(param_2 + 0xdd8);
LAB_0010396b:
      local_a0 = local_88;
      Control::set_drag_preview(pCVar5);
      Variant::Variant((Variant *)param_1,local_a0);
      Dictionary::~Dictionary(local_a0);
      goto LAB_001036f0;
    }
  }
  else if (*(Vector2 **)(param_2 + 0xea0) == in_RCX) {
    lVar2 = Tree::get_item_at_position(in_RCX);
    if (lVar2 != 0) {
      TreeItem::get_metadata((int)(Variant *)local_58);
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary(local_88);
      Variant::Variant((Variant *)local_58,"export_patch");
      Variant::Variant((Variant *)local_78,"type");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
      Variant::Variant((Variant *)local_58,iVar1);
      Variant::Variant((Variant *)local_78,"patch");
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
      pLVar4 = (Label *)operator_new(0xad8,"");
      local_80 = 0;
      Label::Label(pLVar4,(String *)&local_80);
      postinitialize_handler((Object *)pLVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      TreeItem::get_text((int)(CowData<char32_t> *)&local_80);
      Label::set_text((String *)pLVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      pCVar5 = *(Control **)(param_2 + 0xea0);
      goto LAB_0010396b;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001036f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_notification(int) */

void __thiscall ProjectExportDialog::_notification(ProjectExportDialog *this,int param_1)

{
  Ref *pRVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1e) {
    cVar3 = Window::is_visible();
    if (cVar3 == '\0') {
      pSVar5 = (String *)EditorSettings::get_singleton();
      local_70 = Window::get_size();
      uVar6 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_70);
      local_78 = Window::get_position();
      local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
      local_60 = uVar6;
      Variant::Variant((Variant *)local_58,(Rect2 *)&local_68);
      local_88[0] = 0;
      String::parse_latin1((String *)local_88,"export");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"dialog_bounds");
      EditorSettings::set_project_metadata(pSVar5,(String *)&local_90,(Variant *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else if (param_1 == 0x20) {
    pRVar1 = *(Ref **)(this + 0xdc8);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar1 = *(Ref **)(this + 0xdd0);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar1 = *(Ref **)(this + 0xec0);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  }
  else if (param_1 == 0xd) {
    pRVar1 = *(Ref **)(this + 0xdc8);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar1 = *(Ref **)(this + 0xdd0);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar1 = *(Ref **)(this + 0xec0);
    if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pcVar2 = *(code **)(*(long *)this + 0x108);
    create_custom_callable_function_pointer<ProjectExportDialog>
              ((ProjectExportDialog *)local_88,(char *)this,
               (_func_void *)"&ProjectExportDialog::_export_pck_zip");
    (*pcVar2)(this,SceneStringNames::singleton + 0x268,(StringName *)local_88,0);
    Callable::~Callable((Callable *)local_88);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_export_all(this);
      return;
    }
    goto LAB_0010416d;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010416d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::set_export_path(String const&) */

void ProjectExportDialog::set_export_path(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  String *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_28);
  if (local_28 == (String *)0x0) {
    _err_print_error("set_export_path","editor/export/project_export.cpp",0x215,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_28);
  }
  else {
    EditorExportPreset::set_export_path(local_28);
    if (local_28 != (String *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)local_28);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_delete_preset() */

void __thiscall ProjectExportDialog::_delete_preset(ProjectExportDialog *this)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  String local_68 [8];
  CowData<char32_t> local_60 [8];
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_80);
  if (local_80 == (Object *)0x0) {
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_80);
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xe28);
    EditorExportPreset::get_name();
    local_58 = "";
    local_70 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = "Delete preset \'%s\'?";
    local_78 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_78);
    TTR(local_68,(String *)&local_78);
    vformat<String>((CowData<char32_t> *)&local_58,local_68,local_60);
    AcceptDialog::set_text(uVar1,(CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_60);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xe28));
    if (local_80 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_80);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
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



/* ProjectExportDialog::_filter_changed(String const&) */

void ProjectExportDialog::_filter_changed(String *param_1)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  String *local_30;
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_30);
    pSVar1 = local_30;
    if (local_30 == (String *)0x0) {
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_30);
    }
    else {
      LineEdit::get_text();
      EditorExportPreset::set_include_filter(pSVar1);
      CowData<char32_t>::_unref(local_28);
      pSVar1 = local_30;
      LineEdit::get_text();
      EditorExportPreset::set_exclude_filter(pSVar1);
      CowData<char32_t>::_unref(local_28);
      if (local_30 != (String *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)local_30);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_export_type_changed(int) */

void __thiscall ProjectExportDialog::_export_type_changed(ProjectExportDialog *this,int param_1)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe10] == (ProjectExportDialog)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_40);
    if (local_40 == (Object *)0x0) {
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_40);
    }
    else {
      EditorExportPreset::set_export_filter(local_40,param_1);
      EditorExportPreset::set_dedicated_server(SUB81(local_40,0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe50),0));
      if (param_1 == 4) {
        iVar5 = EditorExportPreset::get_customized_files_count();
        pOVar2 = local_40;
        if (iVar5 == 0) {
          local_38 = 0;
          String::parse_latin1((String *)&local_38,"res://");
          EditorExportPreset::set_file_export_mode(pOVar2,(String *)&local_38,1);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
        }
      }
      pSVar1 = *(String **)(this + 0xe60);
      uVar4 = EditorExportPreset::get_export_filter();
      _get_resource_export_header((CowData<char32_t> *)&local_38,this,uVar4);
      Label::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      this[0xe10] = (ProjectExportDialog)0x1;
      _fill_resource_tree(this);
      this[0xe10] = (ProjectExportDialog)0x0;
      if (((local_40 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_40), cVar3 != '\0')) {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectExportDialog::_set_file_export_mode(int) */

void __thiscall ProjectExportDialog::_set_file_export_mode(ProjectExportDialog *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_68);
  if (local_68 == (Object *)0x0) {
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_68);
  }
  else {
    iVar2 = Tree::get_edited();
    TreeItem::get_metadata((int)(Variant *)local_58);
    Variant::operator_cast_to_String(local_60);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorExportPreset::set_file_export_mode(local_68,local_60,param_1);
    Variant::Variant((Variant *)local_58,param_1);
    TreeItem::set_metadata(iVar2,(Variant *)0x1);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar3 = Tree::get_root();
    _propagate_file_export_mode(this,uVar3,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    if (local_68 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_68);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_68 + 0x140))(local_68);
          Memory::free_static(local_68,false);
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



/* ProjectExportDialog::_patch_tree_item_edited() */

void ProjectExportDialog::_patch_tree_item_edited(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_48;
  CowData<char32_t> local_40 [8];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_edited();
  if (lVar3 != 0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_48);
    if (local_48 == (Object *)0x0) {
      _err_print_error("_patch_tree_item_edited","editor/export/project_export.cpp",0x47e,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_48);
    }
    else {
      TreeItem::get_metadata((int)(Variant *)local_38);
      uVar2 = Variant::operator_cast_to_int((Variant *)local_38);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::get_text((int)local_40);
      EditorExportPreset::set_patch((int)local_48,(String *)(ulong)uVar2);
      TreeItem::set_tooltip_text((int)lVar3,(String *)0x0);
      CowData<char32_t>::_unref(local_40);
      if (local_48 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_48);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_48 + 0x140))(local_48);
            Memory::free_static(local_48,false);
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_export_pck_zip() */

void __thiscall ProjectExportDialog::_export_pck_zip(ProjectExportDialog *this)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_38;
  CowData<char32_t> local_30 [8];
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_38);
  if (local_38 == (Object *)0x0) {
    _err_print_error("_export_pck_zip","editor/export/project_export.cpp",0x4ac,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
  }
  else {
    EditorExportPreset::get_export_path();
    String::get_base_dir();
    CowData<char32_t>::_unref(local_28);
    EditorFileDialog::set_current_dir(*(String **)(this + 0xf18));
    EditorFileDialog::popup_file_dialog();
    CowData<char32_t>::_unref(local_30);
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_export_project() */

void __thiscall ProjectExportDialog::_export_project(ProjectExportDialog *this)

{
  long *plVar1;
  String *pSVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_98;
  Object *local_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_current_preset((ProjectExportDialog *)&local_98);
  if (local_98 == (Object *)0x0) {
    _err_print_error(_LC100,"editor/export/project_export.cpp",0x4ee,
                     "Condition \"current.is_null()\" is true.",0,0);
  }
  else {
    EditorExportPreset::get_platform();
    if (local_90 != (Object *)0x0) {
      EditorFileDialog::set_access(*(undefined8 *)(this + 0xf20),2);
      EditorFileDialog::clear_filters();
      (**(code **)(*(long *)local_90 + 600))
                ((List<String,DefaultAllocator> *)&local_88,local_90,
                 (ProjectExportDialog *)&local_98);
      if ((local_88 != (long *)0x0) && (lVar8 = *local_88, lVar8 != 0)) {
        do {
          pSVar2 = *(String **)(this + 0xf20);
          (**(code **)(*(long *)local_90 + 0x1e0))(local_60);
          local_58 = "";
          local_70 = 0;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_70);
          local_58 = "%s Export";
          local_78 = 0;
          local_50 = 9;
          String::parse_latin1((StrRange *)&local_78);
          TTR((String *)&local_68,(String *)&local_78);
          vformat<String>(&local_58,(String *)&local_68,local_60);
          operator+((char *)&local_80,(String *)&_LC103);
          EditorFileDialog::add_filter(pSVar2,(String *)&local_80);
          lVar5 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          pcVar6 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref(local_60);
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != 0);
      }
      EditorExportPreset::get_export_path();
      if ((local_58 == (char *)0x0) || (uVar3 = *(undefined8 *)(local_58 + -8), (int)uVar3 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_00104e0a:
        pSVar2 = *(String **)(this + 0xf20);
        if ((local_88 == (long *)0x0) || ((int)local_88[2] < 1)) {
          EditorFileDialog::set_current_file(pSVar2);
        }
        else {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,".");
          String::operator+((String *)local_60,(String *)(this + 0xf08));
          String::operator+((String *)&local_58,(String *)local_60);
          EditorFileDialog::set_current_file(pSVar2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref(local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if ((int)uVar3 == 1) goto LAB_00104e0a;
        pSVar2 = *(String **)(this + 0xf20);
        EditorExportPreset::get_export_path();
        EditorFileDialog::set_current_path(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      plVar1 = *(long **)(*(char **)(this + 0xf20) + 0xe70);
      pcVar4 = *(code **)(*plVar1 + 0x118);
      create_custom_callable_function_pointer<EditorFileDialog,String_const&>
                ((EditorFileDialog *)&local_58,*(char **)(this + 0xf20),
                 (_func_void_String_ptr *)"&EditorFileDialog::_file_submitted");
      cVar7 = (*pcVar4)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58);
      Callable::~Callable((Callable *)&local_58);
      if (cVar7 == '\0') {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(this + 0xf20) + 0xd88),0));
        plVar1 = *(long **)(*(char **)(this + 0xf20) + 0xe70);
        pcVar4 = *(code **)(*plVar1 + 0x108);
        create_custom_callable_function_pointer<EditorFileDialog,String_const&>
                  ((EditorFileDialog *)&local_58,*(char **)(this + 0xf20),
                   (_func_void_String_ptr *)"&EditorFileDialog::_file_submitted");
        (*pcVar4)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58,0);
        Callable::~Callable((Callable *)&local_58);
      }
      EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xf20));
      EditorFileDialog::popup_file_dialog();
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
      if (((local_90 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_90), cVar7 != '\0')) {
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
      }
      if (((local_98 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_98), cVar7 != '\0')) {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
      goto LAB_00104ee9;
    }
    _err_print_error(_LC100,"editor/export/project_export.cpp",0x4f0,
                     "Condition \"platform.is_null()\" is true.",0,0);
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_90);
  }
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_98);
LAB_00104ee9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectExportDialog::_update_presets() */

void __thiscall ProjectExportDialog::_update_presets(ProjectExportDialog *this)

{
  long *plVar1;
  String *pSVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  Object *local_c0;
  Object *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  CowData<char32_t> local_68 [8];
  Object *local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xe10] = (ProjectExportDialog)0x1;
  iVar6 = ItemList::get_current();
  if (iVar6 < 0) {
LAB_00105160:
    local_c0 = (Object *)0x0;
  }
  else {
    iVar6 = ItemList::get_current();
    iVar8 = ItemList::get_item_count();
    if (iVar8 <= iVar6) goto LAB_00105160;
    get_current_preset((ProjectExportDialog *)&local_60);
    pOVar3 = local_60;
    local_c0 = local_60;
    if (local_60 != (Object *)0x0) {
      local_58 = (Object *)0x0;
      cVar5 = RefCounted::reference();
      local_c0 = (Object *)0x0;
      if (cVar5 != '\0') {
        local_c0 = pOVar3;
      }
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_58);
    }
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_60);
  }
  iVar8 = 0;
  iVar6 = -1;
  ItemList::clear();
  while( true ) {
    iVar7 = EditorExport::get_export_preset_count();
    if (iVar7 <= iVar8) break;
    EditorExport::get_export_preset((int)&local_90);
    if (local_90 == local_c0) {
      iVar6 = iVar8;
    }
    EditorExportPreset::get_name();
    cVar5 = EditorExportPreset::is_runnable();
    if (cVar5 != '\0') {
      local_58 = (Object *)&_LC104;
      local_60 = (Object *)0x0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_60);
      local_58 = (Object *)&_LC15;
      local_78 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_80 = 0;
      local_58 = (Object *)0x1116bd;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_70,(String *)&local_80);
      operator+((char *)local_68,(String *)&_LC106);
      String::operator+((String *)&local_58,(String *)local_68);
      String::operator+=((String *)&local_88,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    EditorExportPreset::update_files();
    pSVar2 = *(String **)(this + 0xdd8);
    EditorExportPreset::get_platform();
    (**(code **)(*(long *)local_60 + 0x1e8))((String *)&local_58);
    ItemList::add_item(pSVar2,(Ref *)&local_88,SUB81((String *)&local_58,0));
    if (local_58 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar3 = local_58;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_58);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (local_60 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar3 = local_60;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_60);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    lVar4 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (local_90 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar3 = local_90;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_90);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (iVar6 != -1) {
    ItemList::select((int)*(undefined8 *)(this + 0xdd8),SUB41(iVar6,0));
  }
  this[0xe10] = (ProjectExportDialog)0x0;
  if (local_c0 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_c0);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_c0,false);
          return;
        }
        goto LAB_001055c9;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001055c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_advanced_options_pressed() */

void __thiscall ProjectExportDialog::_advanced_options_pressed(ProjectExportDialog *this)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe10] == (ProjectExportDialog)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_28);
    pOVar1 = local_28;
    if (local_28 == (Object *)0x0) {
      _err_print_error("_advanced_options_pressed","editor/export/project_export.cpp",0x1eb,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_28);
    }
    else {
      BaseButton::is_pressed();
      EditorExportPreset::set_advanced_options_enabled(SUB81(pOVar1,0));
      _update_presets(this);
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_runnable_pressed() */

void __thiscall ProjectExportDialog::_runnable_pressed(ProjectExportDialog *this)

{
  Object *pOVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_60;
  Object *local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe10] == (ProjectExportDialog)0x0) {
    get_current_preset((ProjectExportDialog *)&local_60);
    if (local_60 == (Object *)0x0) {
      _err_print_error("_runnable_pressed","editor/export/project_export.cpp",0x1f7,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_60);
    }
    else {
      iVar6 = 0;
      cVar4 = BaseButton::is_pressed();
      if (cVar4 == '\0') {
        EditorExportPreset::set_runnable(SUB81(local_60,0));
      }
      else {
        for (; iVar5 = EditorExport::get_export_preset_count(), iVar6 < iVar5; iVar6 = iVar6 + 1) {
          EditorExport::get_export_preset((int)&local_58);
          EditorExportPreset::get_platform();
          EditorExportPreset::get_platform();
          pOVar3 = local_48;
          pOVar1 = local_50;
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
          if (pOVar1 == pOVar3) {
            EditorExportPreset::set_runnable(SUB81(local_58,0));
          }
          if (((local_58 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar1 = local_58, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      _update_presets(this);
      if (((local_60 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_name_changed(String const&) */

void ProjectExportDialog::_name_changed(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  String *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (String *)0x0) {
      _err_print_error("_name_changed","editor/export/project_export.cpp",0x20d,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_name(local_38);
      _update_presets((ProjectExportDialog *)param_1);
      if (local_38 != (String *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler((Object *)local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_export_path_changed(StringName const&, Variant const&, String const&, bool)
    */

void ProjectExportDialog::_export_path_changed
               (StringName *param_1,Variant *param_2,String *param_3,bool param_4)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  String *local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (StringName)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_40);
    pSVar1 = local_40;
    if (local_40 == (String *)0x0) {
      _err_print_error("_export_path_changed","editor/export/project_export.cpp",0x22b,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_40);
    }
    else {
      Variant::operator_cast_to_String(local_38);
      EditorExportPreset::set_export_path(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
      _update_presets((ProjectExportDialog *)param_1);
      _update_export_all((ProjectExportDialog *)param_1);
      if (local_40 != (String *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)local_40);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_40 + 0x140))(local_40);
            Memory::free_static(local_40,false);
          }
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



/* ProjectExportDialog::_bind_methods() */

void ProjectExportDialog::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  CowData<char32_t> local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<ProjectExportDialog,String_const&>(set_export_path);
  StringName::StringName((StringName *)&local_88,"set_export_path",false);
  local_78 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
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
      lVar6 = 0;
      local_78 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<ProjectExportDialog,String>(get_export_path);
  StringName::StringName((StringName *)&local_88,"get_export_path",false);
  local_78 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
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
      lVar6 = 0;
      local_78 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<ProjectExportDialog,Ref<EditorExportPreset>>(get_current_preset);
  StringName::StringName((StringName *)&local_88,"get_current_preset",false);
  local_78 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_88,(Variant **)0x0,0);
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
      lVar6 = 0;
      local_78 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  _scs_create((char *)&local_a0,true);
  _scs_create((char *)&local_a8,true);
  local_88 = "";
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = 0;
  local_88 = "export_path";
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_88,4,(StrRange *)&local_c0,0,(StrRange *)&local_b8,6,&local_b0);
  local_c8 = 0;
  local_90 = 0x13;
  local_98 = "ProjectExportDialog";
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_98,(String *)&local_c8,false);
  ClassDB::add_property
            ((StringName *)&local_98,(PropertyInfo *)&local_88,(StringName *)&local_a8,
             (StringName *)&local_a0,-1);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref(local_68);
  if ((StringName::configured != '\0') && (local_78 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((((StringName::configured != '\0') &&
       ((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_a8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectExportDialog::_patch_tree_button_clicked(Object*, int, int, int) */

void ProjectExportDialog::_patch_tree_button_clicked
               (Object *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_register_00000034;
  long lVar4;
  long in_FS_OFFSET;
  Object *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  CowData<char32_t> local_80 [16];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (CONCAT44(in_register_00000034,param_2) != 0) {
    __dynamic_cast(CONCAT44(in_register_00000034,param_2),&Object::typeinfo,&TreeItem::typeinfo,0);
  }
  TreeItem::get_metadata((int)(Variant *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(param_1 + 0xea8) = iVar3;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  ItemList::get_current();
  EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_a0);
  if (local_a0 == (Object *)0x0) {
    _err_print_error("_patch_tree_button_clicked","editor/export/project_export.cpp",0x46b,
                     "Condition \"current.is_null()\" is true.",0,0);
  }
  else {
    if (param_4 != 0) {
      EditorFileDialog::popup_file_dialog();
LAB_00106205:
      if (local_a0 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_a0);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
            Memory::free_static(local_a0,false);
          }
        }
      }
      goto LAB_0010621c;
    }
    EditorExportPreset::get_patches();
    iVar3 = *(int *)(param_1 + 0xea8);
    if (iVar3 < 0) {
      if (local_70 == 0) goto LAB_00106448;
      lVar4 = *(long *)(local_70 + -8);
    }
    else {
      if (local_70 != 0) {
        lVar4 = *(long *)(local_70 + -8);
        if (lVar4 <= iVar3) goto LAB_00106401;
        uVar1 = *(undefined8 *)(param_1 + 0xeb8);
        String::get_file();
        local_68 = "";
        local_90 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_90);
        local_68 = "Delete patch \'%s\' from list?";
        local_98 = 0;
        local_60 = 0x1c;
        String::parse_latin1((StrRange *)&local_98);
        TTR(local_88,(String *)&local_98);
        vformat<String>((CowData<char32_t> *)&local_68,local_88,local_80);
        AcceptDialog::set_text(uVar1,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref(local_80);
        local_58[0] = 0;
        local_58[1] = 0;
        Window::popup_centered(*(Vector2i **)(param_1 + 0xeb8));
        CowData<String>::_unref((CowData<String> *)&local_70);
        goto LAB_00106205;
      }
LAB_00106448:
      lVar4 = 0;
    }
LAB_00106401:
    _err_print_index_error
              ("_patch_tree_button_clicked","editor/export/project_export.cpp",0x46f,(long)iVar3,
               lVar4,"patch_index","preset_patches.size()","",false,false);
    CowData<String>::_unref((CowData<String> *)&local_70);
  }
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_a0);
LAB_0010621c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_patch_add_pack_pressed() */

void __thiscall ProjectExportDialog::_patch_add_pack_pressed(ProjectExportDialog *this)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  Object *local_40 [2];
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)local_40);
  if (local_40[0] == (Object *)0x0) {
    _err_print_error("_patch_add_pack_pressed","editor/export/project_export.cpp",0x4a4,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)local_40);
  }
  else {
    EditorExportPreset::get_patches();
    if (local_30[0] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(local_30[0] + -8);
    }
    *(undefined4 *)(this + 0xea8) = uVar2;
    CowData<String>::_unref((CowData<String> *)local_30);
    EditorFileDialog::popup_file_dialog();
    if (local_40[0] != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_40[0]);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_40[0] + 0x140))(local_40[0]);
          Memory::free_static(local_40[0],false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_export_pck_zip_selected(String const&) */

void __thiscall
ProjectExportDialog::_export_pck_zip_selected(ProjectExportDialog *this,String *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  String *pSVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  Object *local_d0;
  Object *local_c8;
  Variant local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_current_preset((ProjectExportDialog *)&local_d0);
  if (local_d0 == (Object *)0x0) {
    _err_print_error("_export_pck_zip_selected","editor/export/project_export.cpp",0x4b6,
                     "Condition \"current.is_null()\" is true.",0,0);
  }
  else {
    EditorExportPreset::get_platform();
    if (local_c8 != (Object *)0x0) {
      EditorFileDialog::get_selected_options();
      Variant::Variant((Variant *)local_78,true);
      local_a8 = "";
      local_b0 = 0;
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "Export With Debug";
      local_b8 = 0;
      local_a0 = 0x11;
      String::parse_latin1((StrRange *)&local_b8);
      TTR((String *)&local_a8,(String *)&local_b8);
      Variant::Variant((Variant *)local_98,(String *)&local_a8);
      Dictionary::get((Variant *)local_58,local_c0);
      bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,true);
      local_a8 = "";
      local_b0 = 0;
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "Export As Patch";
      local_b8 = 0;
      local_a0 = 0xf;
      String::parse_latin1((StrRange *)&local_b8);
      TTR((String *)&local_a8,(String *)&local_b8);
      Variant::Variant((Variant *)local_98,(String *)&local_a8);
      Dictionary::get((Variant *)local_58,local_c0);
      bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_58,bVar1);
      local_a8 = "export_debug";
      local_b0 = 0;
      local_a0 = 0xc;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "export_options";
      local_b8 = 0;
      local_a0 = 0xe;
      String::parse_latin1((StrRange *)&local_b8);
      EditorSettings::set_project_metadata(pSVar4,(String *)&local_b8,(Variant *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_58,bVar2);
      local_a8 = "export_as_patch";
      local_b0 = 0;
      local_a0 = 0xf;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "export_options";
      local_b8 = 0;
      local_a0 = 0xe;
      String::parse_latin1((StrRange *)&local_b8);
      EditorSettings::set_project_metadata(pSVar4,(String *)&local_b8,(Variant *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar3 = String::ends_with((char *)param_1);
      if (cVar3 == '\0') {
        cVar3 = String::ends_with((char *)param_1);
        if (cVar3 == '\0') {
          _err_print_error("_export_pck_zip_selected","editor/export/project_export.cpp",0x4ce,
                           "Method/function failed.","Path must end with .pck or .zip",0,0);
          Dictionary::~Dictionary((Dictionary *)local_c0);
          goto LAB_00106b5d;
        }
        if (bVar2) {
          pcVar5 = *(code **)(*(long *)local_c8 + 0x278);
          goto LAB_00106a19;
        }
        (**(code **)(*(long *)local_c8 + 0x268))
                  (local_c8,(ProjectExportDialog *)&local_d0,bVar1,param_1,0);
      }
      else if (bVar2) {
        pcVar5 = *(code **)(*(long *)local_c8 + 0x280);
LAB_00106a19:
        local_a0 = 0;
        (*pcVar5)(local_c8,(ProjectExportDialog *)&local_d0,bVar1,param_1,(String *)&local_a8,0);
        CowData<String>::_unref((CowData<String> *)&local_a0);
      }
      else {
        (**(code **)(*(long *)local_c8 + 0x270))
                  (local_c8,(ProjectExportDialog *)&local_d0,bVar1,param_1,0);
      }
      Dictionary::~Dictionary((Dictionary *)local_c0);
      if (local_c8 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_c8);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
            Memory::free_static(local_c8,false);
          }
        }
      }
      if (local_d0 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_d0);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_d0 + 0x140))(local_d0);
            Memory::free_static(local_d0,false);
          }
        }
      }
      goto LAB_001069d0;
    }
    _err_print_error("_export_pck_zip_selected","editor/export/project_export.cpp",0x4b8,
                     "Condition \"platform.is_null()\" is true.",0,0);
LAB_00106b5d:
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_c8);
  }
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_d0);
LAB_001069d0:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectExportDialog::ProjectExportDialog() */

void __thiscall ProjectExportDialog::ProjectExportDialog(ProjectExportDialog *this)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  Vector2 *pVVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  BoxContainer *this_01;
  SplitContainer *this_02;
  BoxContainer *pBVar8;
  Label *pLVar9;
  BoxContainer *pBVar10;
  MenuButton *this_03;
  long *plVar11;
  MarginContainer *pMVar12;
  ItemList *this_04;
  Button *pBVar13;
  LineEdit *pLVar14;
  CheckButton *pCVar15;
  EditorPropertyPath *this_05;
  CallableCustom *pCVar16;
  TabContainer *this_06;
  EditorInspector *this_07;
  ScrollContainer *pSVar17;
  OptionButton *pOVar18;
  Tree *pTVar19;
  PopupMenu *this_08;
  EditorFileDialog *pEVar20;
  ConfirmationDialog *pCVar21;
  RichTextLabel *pRVar22;
  LinkButton *pLVar23;
  undefined8 uVar24;
  ProjectExportTextureFormatError *this_09;
  AcceptDialog *this_10;
  String *pSVar25;
  String *pSVar26;
  String *extraout_RDX;
  bool bVar27;
  StringName *pSVar28;
  Object *pOVar29;
  long in_FS_OFFSET;
  float fVar30;
  undefined1 auVar31 [16];
  CowData<String> *local_118;
  long *local_e0;
  ItemList local_d8 [16];
  undefined8 local_c8 [2];
  undefined8 local_b8 [2];
  long local_a8 [2];
  long local_98 [2];
  long local_88;
  long local_80;
  int local_78 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined ***)this = &PTR__initialize_classv_00124950;
  *(undefined8 **)(this + 0xe90) = &_GlobalNilClass::_nil;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xeb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xec0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xed0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xee0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xef0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xf48) = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0xf58) = 0;
  *(undefined8 *)(this + 0xe08) = 0;
  this[0xe10] = (ProjectExportDialog)0x0;
  *(undefined8 *)(this + 0xe88) = 0;
  *(undefined4 *)(this + 0xe98) = 0;
  *(undefined8 *)(this + 0xea0) = 0;
  *(undefined4 *)(this + 0xea8) = 0xffffffff;
  this[0xf10] = (ProjectExportDialog)0x0;
  this[0xf5a] = (ProjectExportDialog)0x0;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export");
  TTR((String *)local_a8,(String *)local_98);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Window::set_clamp_to_embedder(SUB81(this,0));
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)this_01);
  Node::add_child(this,this_01,0,0);
  this_02 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_02,false);
  this_02[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_001245d8;
  postinitialize_handler((Object *)this_02);
  Node::add_child(this_01,this_02,0,0);
  Control::set_v_size_flags(this_02,3);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  Control::set_h_size_flags(pBVar8,3);
  Node::add_child(this_02,pBVar8,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Presets");
  TTR((String *)local_a8,(String *)local_98);
  Label::Label(pLVar9,(String *)local_a8);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  StringName::StringName((StringName *)&local_88,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar9);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_001238f8;
  postinitialize_handler((Object *)pBVar10);
  Node::add_child(pBVar10,pLVar9,0,0);
  BoxContainer::add_spacer(SUB81(pBVar10,0));
  Node::add_child(pBVar8,pBVar10,0,0);
  this_03 = (MenuButton *)operator_new(0xc68,"");
  local_88 = 0;
  MenuButton::MenuButton(this_03,(String *)&local_88);
  postinitialize_handler((Object *)this_03);
  *(MenuButton **)(this + 0xdc0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xdc0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Add...");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = (long *)MenuButton::get_popup();
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_add_preset");
  StringName::StringName((StringName *)local_98,"index_pressed",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdc0),0,0);
  pMVar12 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(pMVar12);
  postinitialize_handler((Object *)pMVar12);
  Node::add_child(pBVar8,pMVar12,0,0);
  Control::set_v_size_flags(pMVar12,3);
  this_04 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_04);
  postinitialize_handler((Object *)this_04);
  *(ItemList **)(this + 0xdd8) = this_04;
  StringName::StringName((StringName *)&local_88,"ItemListSecondary",false);
  Control::set_theme_type_variation((StringName *)this_04);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xdd8),2);
  plVar11 = *(long **)(this + 0xdd8);
  pcVar1 = *(code **)(*plVar11 + 0x318);
  create_custom_callable_function_pointer<ProjectExportDialog,Vector2_const&,Variant_const&,Control*>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_Vector2_ptr_Variant_ptr_Control_ptr *)"&ProjectExportDialog::drop_data_fw")
  ;
  Callable::bind<ItemList*>((ItemList *)local_98);
  create_custom_callable_function_pointer<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
            ((ProjectExportDialog *)local_a8,(char *)this,
             (_func_bool_Vector2_ptr_Variant_ptr_Control_ptr *)
             "&ProjectExportDialog::can_drop_data_fw");
  Callable::bind<ItemList*>((ItemList *)local_b8);
  create_custom_callable_function_pointer<ProjectExportDialog,Variant,Vector2_const&,Control*>
            ((ProjectExportDialog *)local_c8,(char *)this,
             (_func_Variant_Vector2_ptr_Control_ptr *)"&ProjectExportDialog::get_drag_data_fw");
  Callable::bind<ItemList*>(local_d8);
  (*pcVar1)(plVar11,local_d8,(ItemList *)local_b8,(String *)local_98);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable((Callable *)local_c8);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pMVar12,*(undefined8 *)(this + 0xdd8),0,0);
  plVar11 = *(long **)(this + 0xdd8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_edit_preset");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x260,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_88 = 0;
  Button::Button(pBVar13,(String *)&local_88);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xdc8) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xdc8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Duplicate");
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xdc8),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdc8),0,0);
  plVar11 = *(long **)(this + 0xdc8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_duplicate_preset");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_88 = 0;
  Button::Button(pBVar13,(String *)&local_88);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xdd0) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xdd0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Delete");
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xdd0),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdd0),0,0);
  plVar11 = *(long **)(this + 0xdd0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_delete_preset");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  Control::set_h_size_flags(pBVar8,3);
  Node::add_child(this_02,pBVar8,0,0);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xde0) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xde0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Name:");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xde0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_name_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pCVar15 = (CheckButton *)operator_new(0xc60,"");
  local_88 = 0;
  CheckButton::CheckButton(pCVar15,(String *)&local_88);
  postinitialize_handler((Object *)pCVar15);
  *(CheckButton **)(this + 0xdf8) = pCVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xdf8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Runnable");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xdf8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "If checked, the preset will be available for use in one-click deploy.\nOnly one preset per platform may be marked as runnable."
            );
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xdf8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_runnable_pressed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pCVar15 = (CheckButton *)operator_new(0xc60,"");
  local_88 = 0;
  CheckButton::CheckButton(pCVar15,(String *)&local_88);
  postinitialize_handler((Object *)pCVar15);
  *(CheckButton **)(this + 0xe00) = pCVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe00);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Advanced Options");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe00);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"If checked, the advanced options will be shown.");
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe00);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_advanced_options_pressed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_001238f8;
  postinitialize_handler((Object *)pBVar10);
  BoxContainer::add_spacer(SUB81(pBVar10,0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xe00),0,0);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xdf8),0,0);
  Node::add_child(pBVar8,pBVar10,0,0);
  this_05 = (EditorPropertyPath *)operator_new(0xb88,"");
  EditorPropertyPath::EditorPropertyPath(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorPropertyPath **)(this + 0xde8) = this_05;
  Node::add_child(pBVar8,this_05,0,0);
  pSVar26 = *(String **)(this + 0xde8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export Path");
  TTR((String *)local_a8,(String *)local_98);
  EditorProperty::set_label(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pOVar29 = *(Object **)(this + 0xde8);
  StringName::StringName((StringName *)&local_88,"export_path",false);
  EditorProperty::set_object_and_property(pOVar29,(StringName *)this);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  EditorPropertyPath::set_save_mode();
  plVar11 = *(long **)(this + 0xde8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  pCVar16 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar16);
  *(undefined8 *)(pCVar16 + 0x40) = 0;
  *(undefined **)(pCVar16 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar16 = &PTR_hash_00125048;
  uVar24 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar16 + 0x10) = 0;
  *(undefined8 *)(pCVar16 + 0x30) = uVar24;
  *(code **)(pCVar16 + 0x38) = _export_path_changed;
  *(ProjectExportDialog **)(pCVar16 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
  *(char **)(pCVar16 + 0x20) = "ProjectExportDialog::_export_path_changed";
  Callable::Callable((Callable *)&local_88,pCVar16);
  StringName::StringName((StringName *)local_98,"property_changed",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  this_06 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(this_06);
  postinitialize_handler((Object *)this_06);
  *(TabContainer **)(this + 0xdb8) = this_06;
  TabContainer::set_use_hidden_tabs_for_min_size(SUB81(this_06,0));
  pSVar28 = *(StringName **)(this + 0xdb8);
  StringName::StringName((StringName *)&local_88,"TabContainerOdd",false);
  Control::set_theme_type_variation(pSVar28);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdb8),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdb8),3);
  this_07 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_07);
  postinitialize_handler((Object *)this_07);
  *(EditorInspector **)(this + 0xdf0) = this_07;
  Node::add_child(*(undefined8 *)(this + 0xdb8),this_07,0,0);
  pSVar26 = *(String **)(this + 0xdf0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Options");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdf0),3);
  EditorInspector::set_use_doc_hints(SUB81(*(undefined8 *)(this + 0xdf0),0));
  plVar11 = *(long **)(this + 0xdf0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_update_parameters");
  StringName::StringName((StringName *)local_98,"property_edited",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = EditorExport::singleton;
  pcVar1 = *(code **)(*EditorExport::singleton + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_force_update_current_preset_parameters");
  StringName::StringName((StringName *)local_98,"export_presets_updated",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  pSVar17 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(pSVar17);
  postinitialize_handler((Object *)pSVar17);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Resources");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name((String *)pSVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  ScrollContainer::set_horizontal_scroll_mode(pSVar17,0);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pSVar17,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  Control::set_h_size_flags(pBVar8,3);
  Control::set_v_size_flags(pBVar8,3);
  Node::add_child(pSVar17,pBVar8,0,0);
  pOVar18 = (OptionButton *)operator_new(0xd00,"");
  local_88 = 0;
  OptionButton::OptionButton(pOVar18,(String *)&local_88);
  postinitialize_handler((Object *)pOVar18);
  *(OptionButton **)(this + 0xe30) = pOVar18;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export all resources in the project");
  TTR((String *)local_a8,(String *)local_98);
  iVar6 = (int)(String *)local_a8;
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export selected scenes (and dependencies)");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export selected resources (and dependencies)");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,"Export all resources in the project except resources checked below"
            );
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export as dedicated server");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export Mode:");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe30);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_export_type_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x260,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xe60) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe60);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Resources to export:");
  TTR((String *)local_a8,(String *)local_98);
  Label::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe60),0,0);
  pMVar12 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(pMVar12);
  postinitialize_handler((Object *)pMVar12);
  *(MarginContainer **)(this + 0xe68) = pMVar12;
  Control::set_v_size_flags(pMVar12,3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe68),0,0);
  pTVar19 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar19);
  postinitialize_handler((Object *)pTVar19);
  *(Tree **)(this + 0xe48) = pTVar19;
  fVar30 = (float)EditorScale::get_scale();
  local_58._4_4_ = fVar30 * __LC182;
  local_58._0_4_ = 0x3f800000;
  Control::set_custom_minimum_size((Vector2 *)pTVar19);
  Node::add_child(*(undefined8 *)(this + 0xe68),*(undefined8 *)(this + 0xe48),0,0);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xe48),2);
  plVar11 = *(long **)(this + 0xe48);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_tree_changed");
  StringName::StringName((StringName *)local_98,"item_edited",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = *(long **)(this + 0xe48);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  pCVar16 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar16);
  *(undefined8 *)(pCVar16 + 0x40) = 0;
  *(undefined **)(pCVar16 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar16 = &PTR_hash_001250d8;
  uVar24 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar16 + 0x10) = 0;
  *(undefined8 *)(pCVar16 + 0x30) = uVar24;
  *(code **)(pCVar16 + 0x38) = _check_propagated_to_item;
  *(ProjectExportDialog **)(pCVar16 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
  *(char **)(pCVar16 + 0x20) = "ProjectExportDialog::_check_propagated_to_item";
  Callable::Callable((Callable *)&local_88,pCVar16);
  StringName::StringName((StringName *)local_98,"check_propagated_to_item",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = *(long **)(this + 0xe48);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,bool>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&ProjectExportDialog::_tree_popup_edited");
  StringName::StringName((StringName *)local_98,"custom_popup_edited",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xe50) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe50),0));
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe50),3);
  pVVar2 = *(Vector2 **)(this + 0xe50);
  fVar30 = (float)EditorScale::get_scale();
  local_58._4_4_ = 0x3f800000;
  local_58._0_4_ = fVar30 * (float)_LC189;
  Control::set_custom_minimum_size(pVVar2);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe50),0,0);
  local_e0 = (long *)0x0;
  StringName::StringName((StringName *)&local_88,"Resource",false);
  ClassDB::get_inheriters_from_class((StringName *)&local_88,(List *)&local_e0);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_80 = 0;
  if ((local_e0 != (long *)0x0) && (pSVar28 = (StringName *)*local_e0, pSVar28 != (StringName *)0x0)
     ) {
    do {
      StringName::StringName((StringName *)local_98,"create_placeholder",false);
      cVar4 = ClassDB::has_method(pSVar28,(StringName *)local_98,true);
      if ((StringName::configured != '\0') && (local_98[0] != 0)) {
        StringName::unref();
      }
      if (cVar4 != '\0') {
        lVar3 = *(long *)pSVar28;
        if (lVar3 == 0) {
          local_98[0] = 0;
        }
        else {
          local_98[0] = 0;
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            if (*(long *)(lVar3 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)(lVar3 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)local_98,*(char **)(lVar3 + 8));
          }
        }
        Vector<String>::push_back((Vector<String> *)&local_88,(String *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      }
      pSVar28 = *(StringName **)(pSVar28 + 8);
    } while (pSVar28 != (StringName *)0x0);
    if (local_80 != 0) {
      lVar3 = *(long *)(local_80 + -8);
      if (lVar3 != 0) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_80);
        SortArray<String,_DefaultComparator<String>,true>::sort_range(lVar3,local_80,extraout_RDX);
      }
    }
  }
  local_118 = (CowData<String> *)&local_80;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98," ");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"");
  local_b8[0] = 0;
  String::parse_latin1
            ((String *)local_b8,
             "\"Strip Visuals\" will replace the following resources with placeholders:");
  TTR((String *)local_c8,(String *)local_b8);
  String::operator+((String *)local_d8,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,", ");
  String::join((Vector *)local_a8);
  String::operator+=((String *)local_d8,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Label::set_text(*(String **)(this + 0xe50));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<String>::_unref(local_118);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_e0);
  this_08 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_08);
  postinitialize_handler((Object *)this_08);
  *(PopupMenu **)(this + 0xe58) = this_08;
  Node::add_child(this,this_08,0,0);
  uVar24 = *(undefined8 *)(this + 0xe58);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Strip Visuals");
  TTR((String *)local_a8,(String *)local_98);
  PopupMenu::add_item(uVar24,(String *)local_a8,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe58);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Keep");
  TTR((String *)local_a8,(String *)local_98);
  PopupMenu::add_item(uVar24,(String *)local_a8,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe58);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Remove");
  TTR((String *)local_a8,(String *)local_98);
  PopupMenu::add_item(uVar24,(String *)local_a8,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe58);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_set_file_export_mode");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x240,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xe38) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe38);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Filters to export non-resource files/folders\n(comma-separated, e.g: *.json, *.txt, docs/*)"
            );
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe38);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_filter_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xe40) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe40);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Filters to exclude files/folders from project\n(comma-separated, e.g: *.json, *.txt, docs/*)"
            );
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe40);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_filter_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar8,0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Patches");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pTVar19 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar19);
  postinitialize_handler((Object *)pTVar19);
  *(Tree **)(this + 0xea0) = pTVar19;
  Control::set_v_size_flags(pTVar19,3);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xea0),0));
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xea0),2);
  plVar11 = *(long **)(this + 0xea0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  pCVar16 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar16);
  *(undefined8 *)(pCVar16 + 0x40) = 0;
  *(undefined **)(pCVar16 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar16 = &PTR_hash_001251f8;
  uVar24 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar16 + 0x10) = 0;
  *(undefined8 *)(pCVar16 + 0x30) = uVar24;
  *(code **)(pCVar16 + 0x38) = _patch_tree_button_clicked;
  *(ProjectExportDialog **)(pCVar16 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
  *(char **)(pCVar16 + 0x20) = "ProjectExportDialog::_patch_tree_button_clicked";
  Callable::Callable((Callable *)&local_88,pCVar16);
  StringName::StringName((StringName *)local_98,"button_clicked",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = *(long **)(this + 0xea0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_patch_tree_item_edited");
  StringName::StringName((StringName *)local_98,"item_edited",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = *(long **)(this + 0xea0);
  pcVar1 = *(code **)(*plVar11 + 0x318);
  create_custom_callable_function_pointer<ProjectExportDialog,Vector2_const&,Variant_const&,Control*>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_Vector2_ptr_Variant_ptr_Control_ptr *)"&ProjectExportDialog::drop_data_fw")
  ;
  Callable::bind<Tree*>((Tree *)local_98);
  create_custom_callable_function_pointer<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
            ((ProjectExportDialog *)local_a8,(char *)this,
             (_func_bool_Vector2_ptr_Variant_ptr_Control_ptr *)
             "&ProjectExportDialog::can_drop_data_fw");
  Callable::bind<Tree*>((Tree *)local_b8);
  create_custom_callable_function_pointer<ProjectExportDialog,Variant,Vector2_const&,Control*>
            ((ProjectExportDialog *)local_c8,(char *)this,
             (_func_Variant_Vector2_ptr_Control_ptr *)"&ProjectExportDialog::get_drag_data_fw");
  Callable::bind<Tree*>((Tree *)local_d8);
  (*pcVar1)(plVar11,local_d8,(ItemList *)local_b8,(String *)local_98);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable((Callable *)local_c8);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  Tree::set_edit_checkbox_cell_only_when_checkbox_is_pressed(SUB81(*(undefined8 *)(this + 0xea0),0))
  ;
  uVar24 = *(undefined8 *)(this + 0xea0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Base Packs:");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pEVar20 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar20);
  postinitialize_handler((Object *)pEVar20);
  *(EditorFileDialog **)(this + 0xeb0) = pEVar20;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Godot Project Pack");
  TTR((String *)local_a8,(String *)local_98);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"*.pck");
  EditorFileDialog::add_filter((String *)pEVar20,(String *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xeb0),2);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xeb0),0);
  plVar11 = *(long **)(this + 0xeb0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_patch_file_selected");
  StringName::StringName((StringName *)local_98,"file_selected",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this,*(undefined8 *)(this + 0xeb0),0,0);
  pCVar21 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar21);
  postinitialize_handler((Object *)pCVar21);
  *(ConfirmationDialog **)(this + 0xeb8) = pCVar21;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Delete");
  TTR((String *)local_a8,(String *)local_98);
  AcceptDialog::set_ok_button_text(pCVar21,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xeb8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_patch_delete_confirmed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x268,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this,*(undefined8 *)(this + 0xeb8),0,0);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_88 = 0;
  Button::Button(pBVar13,(String *)&local_88);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xec0) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xec0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Add Pack");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xec0),4);
  plVar11 = *(long **)(this + 0xec0);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_patch_add_pack_pressed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xec0),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Features");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(pBVar8,3);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xec8) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xec8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_custom_features_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xec8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Custom (comma-separated):");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pRVar22 = (RichTextLabel *)operator_new(0xcf0,"");
  local_88 = 0;
  RichTextLabel::RichTextLabel(pRVar22,(String *)&local_88);
  postinitialize_handler((Object *)pRVar22);
  *(RichTextLabel **)(this + 0xed0) = pRVar22;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pVVar2 = *(Vector2 **)(this + 0xed0);
  fVar30 = (float)EditorScale::get_scale();
  local_58._4_4_ = fVar30 * __LC182;
  local_58._0_4_ = 0x3f800000;
  Control::set_custom_minimum_size(pVVar2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xed0),3);
  uVar24 = *(undefined8 *)(this + 0xed0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Feature List:");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar8,0,0);
  pSVar17 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(pSVar17);
  postinitialize_handler((Object *)pSVar17);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Encryption");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name((String *)pSVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  ScrollContainer::set_horizontal_scroll_mode(pSVar17,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  Control::set_h_size_flags(pBVar8,3);
  Node::add_child(pSVar17,pBVar8,0,0);
  pCVar15 = (CheckButton *)operator_new(0xc60,"");
  local_88 = 0;
  CheckButton::CheckButton(pCVar15,(String *)&local_88);
  postinitialize_handler((Object *)pCVar15);
  *(CheckButton **)(this + 0xf28) = pCVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf28);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,bool>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&ProjectExportDialog::_enc_pck_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x248,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  pSVar26 = *(String **)(this + 0xf28);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Encrypt Exported PCK");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xf28),0,0);
  pCVar15 = (CheckButton *)operator_new(0xc60,"");
  local_88 = 0;
  CheckButton::CheckButton(pCVar15,(String *)&local_88);
  postinitialize_handler((Object *)pCVar15);
  *(CheckButton **)(this + 0xf30) = pCVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf30);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,bool>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_bool *)"&ProjectExportDialog::_enc_directory_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x248,(String *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  pSVar26 = *(String **)(this + 0xf30);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Encrypt Index (File Names and Info)");
  TTR((String *)local_a8,(String *)local_98);
  Button::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xf30),0,0);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xf38) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf38);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_enc_filters_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xf38);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Filters to include files/folders\n(comma-separated, e.g: *.tscn, *.tres, scenes/*)");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xf40) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf40);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_enc_filters_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xf40);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Filters to exclude files/folders\n(comma-separated, e.g: *.ctex, *.import, music/*)");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xed8) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xed8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_script_encryption_key_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xee0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xee0);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,"Invalid Encryption Key (must be 64 hexadecimal characters long)");
  TTR((String *)local_a8,(String *)local_98);
  String::utf8((char *)local_b8,0x111aad);
  String::operator+((String *)local_c8,(String *)local_b8);
  Label::set_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar28 = *(StringName **)(this + 0xee0);
  pOVar29 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar29 == (Object *)0x0) {
ProjectExportDialog_ProjectExportDialog:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar4 = RefCounted::reference();
  uVar24 = EditorStringNames::singleton;
  if (cVar4 == '\0') {
    pOVar29 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar29 + 0x1e8);
  if ((ProjectExportDialog()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&ProjectExportDialog()::{lambda()#1}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&ProjectExportDialog()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ProjectExportDialog()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ProjectExportDialog()::{lambda()#1}::operator()()::sname);
  }
  _local_58 = (*pcVar1)(pOVar29,&ProjectExportDialog()::{lambda()#1}::operator()()::sname,uVar24);
  Control::add_theme_color_override(pSVar28,(Color *)(SceneStringNames::singleton + 0xb0));
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar29);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
      Memory::free_static(pOVar29,false);
    }
  }
  uVar24 = *(undefined8 *)(this + 0xed8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Encryption Key (256-bits as hexadecimal):");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xee0),0,0);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pSVar17,0,0);
  pLVar14 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = 0;
  LineEdit::LineEdit(pLVar14,(String *)&local_88);
  postinitialize_handler((Object *)pLVar14);
  *(LineEdit **)(this + 0xf48) = pLVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf48);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_seed_input_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xf48);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Initialization vector seed");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Note: Encryption key needs to be stored in the binary,\nyou need to build the export templates from source."
            );
  TTR((String *)local_a8,(String *)local_98);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(pBVar8,pLVar9,0,0);
  pLVar23 = (LinkButton *)operator_new(0xb10,"");
  local_88 = 0;
  LinkButton::LinkButton(pLVar23,(String *)&local_88);
  postinitialize_handler((Object *)pLVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"More Info...");
  TTR((String *)local_a8,(String *)local_98);
  LinkButton::set_text((String *)pLVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pcVar1 = *(code **)(*(long *)pLVar23 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_open_key_help_link");
  (*pcVar1)(pLVar23,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar8,pLVar23,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00123c70;
  postinitialize_handler((Object *)pBVar8);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Scripts");
  TTR((String *)local_a8,(String *)local_98);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pOVar18 = (OptionButton *)operator_new(0xd00,"");
  local_88 = 0;
  OptionButton::OptionButton(pOVar18,(String *)&local_88);
  postinitialize_handler((Object *)pOVar18);
  *(OptionButton **)(this + 0xf50) = pOVar18;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xf50);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"GDScript Export Mode:");
  TTR((String *)local_a8,(String *)local_98);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_a8,SUB81(uVar24,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xf50);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Text (easier debugging)");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xf50);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Binary tokens (faster loading)");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xf50);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Compressed binary tokens (smaller files)");
  TTR((String *)local_a8,(String *)local_98);
  OptionButton::add_item(pSVar26,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xf50);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_script_export_mode_changed");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x260,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar8,0,0);
  plVar11 = *(long **)(this + 0xdb8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,int>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_int *)"&ProjectExportDialog::_tab_changed");
  StringName::StringName((StringName *)local_98,"tab_changed",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xde0),0));
  CanvasItem::hide();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd0),0));
  CanvasItem::hide();
  CanvasItem::hide();
  EditorInspector::edit(*(Object **)(this + 0xdf0));
  pCVar21 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar21);
  postinitialize_handler((Object *)pCVar21);
  *(ConfirmationDialog **)(this + 0xe28) = pCVar21;
  Node::add_child(this,pCVar21,0,0);
  uVar24 = *(undefined8 *)(this + 0xe28);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Delete");
  TTR((String *)local_a8,(String *)local_98);
  AcceptDialog::set_ok_button_text(uVar24,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe28);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_delete_preset_confirm");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x268,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Close");
  TTR((String *)local_a8,(String *)local_98);
  ConfirmationDialog::set_cancel_button_text(this,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export PCK/ZIP...");
  TTR((String *)local_a8,(String *)local_98);
  AcceptDialog::set_ok_button_text(this,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xd88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Export the project resources as a PCK or ZIP package. This is not a playable build, only the project data without a Godot executable."
            );
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"export");
  uVar5 = (**(code **)(*DisplayServer::singleton + 0x690))();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Export Project...");
  TTR((String *)local_b8,(String *)local_a8);
  bVar27 = SUB81((ItemList *)local_b8,0);
  uVar24 = AcceptDialog::add_button((String *)this,bVar27,(String *)(ulong)((uVar5 ^ 1) & 0xff));
  *(undefined8 *)(this + 0xe70) = uVar24;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe70);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "Export the project as a playable build (Godot executable and project data) for the selected preset."
            );
  TTR((String *)local_a8,(String *)local_98);
  Control::set_tooltip_text(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe70);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_export_project");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe70),0));
  pCVar21 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar21);
  postinitialize_handler((Object *)pCVar21);
  *(ConfirmationDialog **)(this + 0xe80) = pCVar21;
  Node::add_child(this,pCVar21,0,0);
  pSVar26 = *(String **)(this + 0xe80);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Export All");
  TTR((String *)local_a8,(String *)local_98);
  Window::set_title(pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar24 = *(undefined8 *)(this + 0xe80);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Choose an export mode:");
  TTR((String *)local_a8,(String *)local_98);
  AcceptDialog::set_text(uVar24,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CanvasItem::hide();
  pSVar26 = *(String **)(this + 0xe80);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"debug");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Debug");
  TTR((String *)local_b8,(String *)local_a8);
  AcceptDialog::add_button(pSVar26,bVar27,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xe80);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"release");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Release");
  TTR((String *)local_b8,(String *)local_a8);
  AcceptDialog::add_button(pSVar26,bVar27,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe80);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_export_all_dialog_action");
  StringName::StringName((StringName *)local_98,"custom_action",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"export");
  uVar5 = (**(code **)(*DisplayServer::singleton + 0x690))();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Export All...");
  TTR((String *)local_b8,(String *)local_a8);
  uVar24 = AcceptDialog::add_button((String *)this,bVar27,(String *)(ulong)((uVar5 ^ 1) & 0xff));
  *(undefined8 *)(this + 0xe78) = uVar24;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar11 = *(long **)(this + 0xe78);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_export_all_dialog");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe78),0));
  pEVar20 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar20);
  postinitialize_handler((Object *)pEVar20);
  *(EditorFileDialog **)(this + 0xf18) = pEVar20;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"ZIP File");
  TTR((String *)local_a8,(String *)local_98);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"*.zip");
  EditorFileDialog::add_filter((String *)pEVar20,(String *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar26 = *(String **)(this + 0xf18);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Godot Project Pack");
  TTR((String *)local_a8,(String *)local_98);
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"*.pck");
  EditorFileDialog::add_filter(pSVar26,(String *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  EditorFileDialog::set_access(*(undefined8 *)(this + 0xf18),2);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xf18),4);
  Node::add_child(this,*(undefined8 *)(this + 0xf18),0,0);
  plVar11 = *(long **)(this + 0xf18);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_export_pck_zip_selected");
  StringName::StringName((StringName *)local_98,"file_selected",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  this_09 = (ProjectExportTextureFormatError *)operator_new(0xa28,"");
  ProjectExportTextureFormatError::ProjectExportTextureFormatError(this_09);
  postinitialize_handler((Object *)this_09);
  *(ProjectExportTextureFormatError **)(this + 0xee8) = this_09;
  Node::add_child(this_01,this_09,0,0);
  CanvasItem::hide();
  plVar11 = *(long **)(this + 0xee8);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_update_current_preset");
  StringName::StringName((StringName *)local_98,"texture_format_enabled",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xef0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xef0),0,0);
  CanvasItem::hide();
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xef0),4);
  pSVar28 = *(StringName **)(this + 0xef0);
  pOVar29 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar29 == (Object *)0x0) goto ProjectExportDialog_ProjectExportDialog;
  cVar4 = RefCounted::reference();
  uVar24 = EditorStringNames::singleton;
  if (cVar4 == '\0') {
    pOVar29 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar29 + 0x1e8);
  if (ProjectExportDialog()::{lambda()#2}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ProjectExportDialog()::{lambda()#2}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ProjectExportDialog()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&ProjectExportDialog()::{lambda()#2}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&ProjectExportDialog()::{lambda()#2}::operator()()::sname);
    }
  }
  auVar31 = (*pcVar1)(pOVar29,&ProjectExportDialog()::{lambda()#2}::operator()()::sname,uVar24);
  _local_58 = auVar31;
  Control::add_theme_color_override(pSVar28,(Color *)(SceneStringNames::singleton + 0xb0));
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar29);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
      Memory::free_static(pOVar29,false);
    }
  }
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xef8) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(this_01,*(undefined8 *)(this + 0xef8),0,0);
  CanvasItem::hide();
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xef8),4);
  pSVar28 = *(StringName **)(this + 0xef8);
  pOVar29 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar29 == (Object *)0x0) goto ProjectExportDialog_ProjectExportDialog;
  cVar4 = RefCounted::reference();
  uVar24 = EditorStringNames::singleton;
  if (cVar4 == '\0') {
    pOVar29 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar29 + 0x1e8);
  if (ProjectExportDialog()::{lambda()#3}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ProjectExportDialog()::{lambda()#3}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ProjectExportDialog()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&ProjectExportDialog()::{lambda()#3}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&ProjectExportDialog()::{lambda()#3}::operator()()::sname);
    }
  }
  auVar31 = (*pcVar1)(pOVar29,&ProjectExportDialog()::{lambda()#3}::operator()()::sname,uVar24);
  _local_58 = auVar31;
  Control::add_theme_color_override(pSVar28,(Color *)(SceneStringNames::singleton + 0xb0));
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar29);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
      Memory::free_static(pOVar29,false);
    }
  }
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_001238f8;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xf00) = pBVar8;
  Node::add_child(this_01,pBVar8,0,0);
  CanvasItem::hide();
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_88 = 0;
  Label::Label(pLVar9,(String *)&local_88);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xf00),pLVar9,0,0);
  Label::set_text_overrun_behavior(pLVar9,4);
  pOVar29 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar29 == (Object *)0x0) goto ProjectExportDialog_ProjectExportDialog;
  cVar4 = RefCounted::reference();
  uVar24 = EditorStringNames::singleton;
  if (cVar4 == '\0') {
    pOVar29 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar29 + 0x1e8);
  if (ProjectExportDialog()::{lambda()#4}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&ProjectExportDialog()::{lambda()#4}::operator()()::sname);
    if (iVar6 != 0) {
      _scs_create((char *)&ProjectExportDialog()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&ProjectExportDialog()::{lambda()#4}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&ProjectExportDialog()::{lambda()#4}::operator()()::sname);
    }
  }
  auVar31 = (*pcVar1)(pOVar29,&ProjectExportDialog()::{lambda()#4}::operator()()::sname,uVar24);
  _local_58 = auVar31;
  Control::add_theme_color_override
            ((StringName *)pLVar9,(Color *)(SceneStringNames::singleton + 0xb0));
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar29);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
      Memory::free_static(pOVar29,false);
    }
  }
  local_88 = 0;
  String::parse_latin1((String *)&local_88," ");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Export templates for this platform are missing:");
  TTR((String *)local_b8,(String *)local_a8);
  String::utf8((char *)local_c8,0x111aad);
  String::operator+((String *)local_d8,(String *)local_c8);
  String::operator+((String *)&local_e0,(String *)local_d8);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  this_10 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_10);
  postinitialize_handler((Object *)this_10);
  *(AcceptDialog **)(this + 0xe20) = this_10;
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Project Export");
  TTR((String *)local_a8,(String *)local_98);
  Window::set_title((String *)this_10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pRVar22 = (RichTextLabel *)operator_new(0xcf0,"");
  local_88 = 0;
  RichTextLabel::RichTextLabel(pRVar22,(String *)&local_88);
  postinitialize_handler((Object *)pRVar22);
  *(RichTextLabel **)(this + 0xe18) = pRVar22;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pVVar2 = *(Vector2 **)(this + 0xe18);
  fVar30 = (float)EditorScale::get_scale();
  local_58 = (undefined1  [8])CONCAT44(fVar30 * _LC189._4_4_,fVar30 * (float)_LC189);
  Control::set_custom_minimum_size(pVVar2);
  Node::add_child(*(undefined8 *)(this + 0xe20),*(undefined8 *)(this + 0xe18),0,0);
  Node::add_child(this_01,*(undefined8 *)(this + 0xe20),0,0);
  Window::hide();
  pLVar23 = (LinkButton *)operator_new(0xb10,"");
  local_88 = 0;
  LinkButton::LinkButton(pLVar23,(String *)&local_88);
  postinitialize_handler((Object *)pLVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Manage Export Templates");
  TTR((String *)local_a8,(String *)local_98);
  LinkButton::set_text((String *)pLVar23);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_v_size_flags(pLVar23,4);
  Node::add_child(*(undefined8 *)(this + 0xf00),pLVar23,0,0);
  pcVar1 = *(code **)(*(long *)pLVar23 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void *)"&ProjectExportDialog::_open_export_template_manager");
  (*pcVar1)(pLVar23,SceneStringNames::singleton + 0x238,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pEVar20 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar20);
  postinitialize_handler((Object *)pEVar20);
  *(EditorFileDialog **)(this + 0xf20) = pEVar20;
  EditorFileDialog::set_access(pEVar20,2);
  Node::add_child(this,*(undefined8 *)(this + 0xf20),0,0);
  plVar11 = *(long **)(this + 0xf20);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_export_project_to_path");
  StringName::StringName((StringName *)local_98,"file_selected",false);
  (*pcVar1)(plVar11,(String *)local_98,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar11 = *(long **)(*(long *)(this + 0xf20) + 0xe70);
  pcVar1 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
            ((ProjectExportDialog *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ProjectExportDialog::_validate_export_path");
  (*pcVar1)(plVar11,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  pSVar26 = *(String **)(this + 0xf20);
  pSVar25 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,true);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"export_debug");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"export_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar25,(Variant *)local_a8);
  Variant::operator_cast_to_int((Variant *)local_78);
  local_80 = 0;
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"");
  local_c8[0] = 0;
  String::parse_latin1((String *)local_c8,"Export With Debug");
  TTR((String *)local_d8,(String *)local_c8);
  iVar6 = (int)(String *)&local_88;
  EditorFileDialog::add_option(pSVar26,(Vector *)local_d8,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<String>::_unref(local_118);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  pSVar26 = *(String **)(this + 0xf18);
  pSVar25 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,true);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"export_debug");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"export_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar25,(Variant *)local_a8);
  Variant::operator_cast_to_int((Variant *)local_78);
  local_80 = 0;
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"");
  local_c8[0] = 0;
  String::parse_latin1((String *)local_c8,"Export With Debug");
  TTR((String *)local_d8,(String *)local_c8);
  EditorFileDialog::add_option(pSVar26,(Vector *)local_d8,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<String>::_unref(local_118);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  pSVar26 = *(String **)(this + 0xf18);
  pSVar25 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,true);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"export_as_patch");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"export_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar25,(Variant *)local_a8);
  Variant::operator_cast_to_int((Variant *)local_78);
  local_80 = 0;
  local_b8[0] = 0;
  String::parse_latin1((String *)local_b8,"");
  local_c8[0] = 0;
  String::parse_latin1((String *)local_c8,"Export As Patch");
  TTR((String *)local_d8,(String *)local_c8);
  EditorFileDialog::add_option(pSVar26,(Vector *)local_d8,iVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<String>::_unref(local_118);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  pSVar26 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"default_filename");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"export_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar26,(Variant *)local_98);
  Variant::operator_cast_to_String((Variant *)local_a8);
  this_00 = (CowData<char32_t> *)(this + 0xf08);
  if (*(long *)(this + 0xf08) != local_a8[0]) {
    CowData<char32_t>::_unref(this_00);
    lVar3 = local_a8[0];
    local_a8[0] = 0;
    *(long *)(this + 0xf08) = lVar3;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((*(long *)(this + 0xf08) == 0) || (*(uint *)(*(long *)(this + 0xf08) + -8) < 2)) {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_88,"application/config/name",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)local_98);
    if (*(long *)(this + 0xf08) != local_98[0]) {
      CowData<char32_t>::_unref(this_00);
      lVar3 = local_98[0];
      local_98[0] = 0;
      *(long *)(this + 0xf08) = lVar3;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    if ((*(long *)(this + 0xf08) == 0) || (*(uint *)(*(long *)(this + 0xf08) + -8) < 2)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        String::parse_latin1((String *)this_00,"UnnamedProject");
        return;
      }
      goto LAB_0010c59c;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c59c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert(String const&) [clone .isra.0] */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_insert
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,String *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = *(long *)this;
  lVar2 = *(long *)(lVar8 + 0x10);
  if (*(long *)(lVar8 + 0x10) != *(long *)(this + 8)) {
    do {
      while( true ) {
        lVar8 = lVar2;
        cVar3 = String::operator<(param_1,(String *)(lVar8 + 0x30));
        if (cVar3 != '\0') break;
        cVar3 = String::operator<((String *)(lVar8 + 0x30),param_1);
        if (cVar3 == '\0') {
          return;
        }
        lVar2 = *(long *)(lVar8 + 8);
        if (*(long *)(this + 8) == *(long *)(lVar8 + 8)) goto LAB_0010c617;
      }
      lVar2 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(this + 8) != *(long *)(lVar8 + 0x10));
  }
LAB_0010c617:
  pEVar4 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(pEVar4 + 0x20) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(pEVar4 + 0x30) = 0;
  lVar2 = *(long *)param_1;
  *(undefined4 *)pEVar4 = 0;
  *(long *)(pEVar4 + 0x18) = lVar8;
  *(undefined8 *)(pEVar4 + 8) = uVar1;
  *(undefined8 *)(pEVar4 + 0x10) = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pEVar4 + 0x30),(CowData *)param_1);
  }
  if ((*(long *)this == lVar8) ||
     (cVar3 = String::operator<(param_1,(String *)(lVar8 + 0x30)), cVar3 != '\0')) {
    *(Element **)(lVar8 + 0x10) = pEVar4;
  }
  else {
    *(Element **)(lVar8 + 8) = pEVar4;
  }
  pEVar7 = *(Element **)(pEVar4 + 8);
  pEVar6 = pEVar4;
  if (*(Element **)(this + 8) == pEVar7) {
    do {
      pEVar5 = *(Element **)(pEVar6 + 0x18);
      bVar9 = pEVar6 == *(Element **)(pEVar5 + 8);
      pEVar6 = pEVar5;
    } while (bVar9);
    if (*(Element **)this == pEVar5) {
      pEVar5 = (Element *)0x0;
    }
  }
  else {
    do {
      pEVar6 = pEVar7 + 0x10;
      pEVar5 = pEVar7;
      pEVar7 = *(Element **)pEVar6;
    } while (*(Element **)(this + 8) != *(Element **)pEVar6);
  }
  *(Element **)(pEVar4 + 0x20) = pEVar5;
  pEVar6 = *(Element **)(pEVar4 + 0x10);
  pEVar7 = pEVar4;
  if (*(Element **)(this + 8) == *(Element **)(pEVar4 + 0x10)) {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 0x18);
    } while (pEVar6 == *(Element **)(pEVar7 + 0x10));
    if (*(Element **)this != pEVar6) goto LAB_0010c6dc;
    *(undefined8 *)(pEVar4 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0010c6f6;
LAB_0010c6e5:
    *(Element **)(pEVar5 + 0x28) = pEVar4;
    pEVar7 = *(Element **)(pEVar4 + 0x28);
    if (pEVar7 == (Element *)0x0) goto LAB_0010c6f6;
  }
  else {
    do {
      pEVar7 = pEVar6;
      pEVar6 = *(Element **)(pEVar7 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar7 + 8));
LAB_0010c6dc:
    *(Element **)(pEVar4 + 0x28) = pEVar7;
    if (pEVar5 != (Element *)0x0) goto LAB_0010c6e5;
  }
  *(Element **)(pEVar7 + 0x20) = pEVar4;
LAB_0010c6f6:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar4);
  return;
}



/* ProjectExportDialog::_update_feature_list() */

void __thiscall ProjectExportDialog::_update_feature_list(ProjectExportDialog *this)

{
  Object *pOVar1;
  RBSet<String,Comparator<String>,DefaultAllocator> *this_00;
  undefined8 uVar2;
  String *pSVar3;
  Object *pOVar4;
  char cVar5;
  CowData<char32_t> *this_01;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_88;
  undefined1 (*local_80) [16];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char local_68 [8];
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_current_preset((ProjectExportDialog *)&local_88);
  if (local_88 == (Object *)0x0) {
    _err_print_error("_update_feature_list","editor/export/project_export.cpp",0x1a8,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_88);
LAB_0010cb45:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_80 = (undefined1 (*) [16])0x0;
  EditorExportPreset::get_platform();
  (**(code **)(*(long *)local_58 + 0x288))();
  if (((local_58 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar1 = local_58, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  EditorExportPreset::get_platform();
  (**(code **)(*(long *)local_58 + 0x158))
            (local_58,(ProjectExportDialog *)&local_88,(List<String,DefaultAllocator> *)&local_80);
  if (((local_58 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar1 = local_58, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  lVar7 = 0;
  EditorExportPreset::get_custom_features();
  String::split(local_68,SUB81(local_78,0),0x111c32);
joined_r0x0010c892:
  if (local_60 != 0) {
    do {
      if (*(long *)(local_60 + -8) <= lVar7) break;
      String::strip_edges(SUB81((String *)&local_58,0),(bool)((char)local_60 + (char)lVar7 * '\b'));
      if (local_58 != (Object *)0x0) {
        if (1 < *(uint *)(local_58 + -8)) {
          if (local_80 == (undefined1 (*) [16])0x0) {
            local_80 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)local_80[1] = 0;
            *local_80 = (undefined1  [16])0x0;
          }
          this_01 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_01 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_01 + 0x10) = (undefined1  [16])0x0;
          if (local_58 != (Object *)0x0) {
            CowData<char32_t>::_ref(this_01,(CowData *)&local_58);
          }
          lVar8 = *(long *)(*local_80 + 8);
          *(undefined8 *)(this_01 + 8) = 0;
          *(undefined1 (**) [16])(this_01 + 0x18) = local_80;
          *(long *)(this_01 + 0x10) = lVar8;
          if (lVar8 != 0) {
            *(CowData<char32_t> **)(lVar8 + 8) = this_01;
          }
          lVar8 = *(long *)*local_80;
          *(CowData<char32_t> **)(*local_80 + 8) = this_01;
          if (lVar8 == 0) {
            *(CowData<char32_t> **)*local_80 = this_01;
          }
          *(int *)local_80[1] = *(int *)local_80[1] + 1;
          if (local_58 == (Object *)0x0) goto code_r0x0010c981;
        }
        pOVar4 = local_58;
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar7 = lVar7 + 1;
      if (local_60 == 0) break;
    } while( true );
  }
  this_00 = (RBSet<String,Comparator<String>,DefaultAllocator> *)(this + 0xe88);
  RBSet<String,Comparator<String>,DefaultAllocator>::clear(this_00);
  if (local_80 != (undefined1 (*) [16])0x0) {
    for (pSVar3 = *(String **)*local_80; pSVar3 != (String *)0x0; pSVar3 = *(String **)(pSVar3 + 8))
    {
      if (*(long *)(this + 0xe88) == 0) {
        puVar6 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(puVar6 + 8) = (undefined1  [16])0x0;
        uVar2 = *(undefined8 *)(this + 0xe90);
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(undefined4 **)(this + 0xe88) = puVar6;
        *puVar6 = 1;
        *(undefined8 *)(puVar6 + 2) = uVar2;
        *(undefined8 *)(puVar6 + 4) = uVar2;
        *(undefined8 *)(puVar6 + 6) = uVar2;
      }
      RBSet<String,Comparator<String>,DefaultAllocator>::_insert(this_00,pSVar3);
    }
  }
  local_70 = 0;
  local_58 = (Object *)0x111c34;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_70);
  if (*(long *)(this + 0xe88) == 0) {
    puVar6 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(puVar6 + 8) = (undefined1  [16])0x0;
    uVar2 = *(undefined8 *)(this + 0xe90);
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined4 **)(this + 0xe88) = puVar6;
    *puVar6 = 1;
    *(undefined8 *)(puVar6 + 2) = uVar2;
    *(undefined8 *)(puVar6 + 4) = uVar2;
    *(undefined8 *)(puVar6 + 6) = uVar2;
  }
  RBSet<String,Comparator<String>,DefaultAllocator>::_insert(this_00,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  RichTextLabel::clear();
  local_58 = (Object *)0x0;
  if (*(long *)(this + 0xe88) != 0) {
    lVar7 = *(long *)(*(long *)(this + 0xe88) + 0x10);
    if (lVar7 != *(long *)(this + 0xe90)) {
      do {
        lVar8 = lVar7;
        lVar7 = *(long *)(lVar8 + 0x10);
      } while (*(long *)(this + 0xe90) != *(long *)(lVar8 + 0x10));
      while( true ) {
        String::operator+=((String *)&local_58,(String *)(lVar8 + 0x30));
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) break;
        String::operator+=((String *)&local_58,", ");
      }
    }
  }
  RichTextLabel::add_text(*(String **)(this + 0xed0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<String>::_unref((CowData<String> *)&local_60);
  CowData<char32_t>::_unref(local_78);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_80);
  if (((local_88 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
    (**(code **)(*(long *)local_88 + 0x140))(local_88);
    Memory::free_static(local_88,false);
  }
  goto LAB_0010cb45;
code_r0x0010c981:
  lVar7 = lVar7 + 1;
  goto joined_r0x0010c892;
}



/* ProjectExportDialog::_custom_features_changed(String const&) */

void ProjectExportDialog::_custom_features_changed(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  String *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (String *)0x0) {
      _err_print_error("_custom_features_changed","editor/export/project_export.cpp",0x1d7,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_custom_features(local_38);
      _update_feature_list((ProjectExportDialog *)param_1);
      if (local_38 != (String *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler((Object *)local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_tab_changed(int) */

void ProjectExportDialog::_tab_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_feature_list((ProjectExportDialog *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* ProjectExportDialog::_edit_preset(int) */

void __thiscall ProjectExportDialog::_edit_preset(ProjectExportDialog *this,int param_1)

{
  String *pSVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  ProjectExportTextureFormatError *this_00;
  long in_FS_OFFSET;
  char local_b9;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  Vector<String> local_88 [8];
  undefined8 local_80;
  long *local_78;
  long local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (iVar5 = ItemList::get_item_count(), iVar5 <= param_1)) {
    uVar11 = *(undefined8 *)(this + 0xde0);
    local_68 = (Object *)0x0;
    String::parse_latin1((String *)&local_68,"");
    LineEdit::set_text(uVar11,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xde0),0));
    CanvasItem::hide();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
    EditorInspector::edit(*(Object **)(this + 0xdf0));
    ItemList::deselect_all();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd0),0));
    CanvasItem::hide();
    Tree::clear();
    CanvasItem::hide();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
    goto LAB_0010e05e;
  }
  EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_b8);
  if (local_b8 == 0) {
    _err_print_error("_edit_preset","editor/export/project_export.cpp",0x103,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_b8);
  }
  else {
    this[0xe10] = (ProjectExportDialog)0x1;
    ItemList::select((int)*(undefined8 *)(this + 0xdd8),SUB41(param_1,0));
    CanvasItem::show();
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xde0),0));
    CanvasItem::show();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd0),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    uVar11 = *(undefined8 *)(this + 0xde0);
    EditorExportPreset::get_name();
    LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    EditorExportPreset::get_platform();
    (**(code **)(*(long *)local_68 + 600))
              ((List<String,DefaultAllocator> *)&local_b0,local_68,
               (Ref<EditorExportPreset> *)&local_b8);
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_68);
    local_80 = 0;
    if (local_b0 != (long *)0x0) {
      for (lVar9 = *local_b0; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        operator+((char *)&local_68,(String *)&_LC103);
        Vector<String>::push_back(local_88,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
    EditorPropertyPath::setup(*(Vector **)(this + 0xde8),SUB81(local_88,0),false);
    (**(code **)(**(long **)(this + 0xde8) + 0x380))();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
    uVar11 = *(undefined8 *)(this + 0xe00);
    EditorExportPreset::are_advanced_options_enabled();
    BaseButton::set_pressed(SUB81(uVar11,0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
    uVar11 = *(undefined8 *)(this + 0xdf8);
    EditorExportPreset::is_runnable();
    BaseButton::set_pressed(SUB81(uVar11,0));
    lVar9 = EditorInspector::get_edited_object();
    if (local_b8 != lVar9) {
      EditorExportPreset::update_value_overrides();
    }
    pSVar1 = *(String **)(this + 0xdf0);
    EditorExportPreset::get_platform();
    if (local_78[1] == 0) {
      plVar10 = (long *)local_78[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*local_78 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(local_78[1] + 0x20);
    }
    lVar9 = *plVar10;
    if (lVar9 == 0) {
      local_68 = (Object *)0x0;
    }
    else {
      local_68 = (Object *)0x0;
      if (*(char **)(lVar9 + 8) == (char *)0x0) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar9 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_68,*(char **)(lVar9 + 8));
      }
    }
    EditorInspector::set_object_class(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_78);
    EditorInspector::edit(*(Object **)(this + 0xdf0));
    uVar11 = *(undefined8 *)(this + 0xe30);
    EditorExportPreset::get_export_filter();
    OptionButton::select((int)uVar11);
    uVar11 = *(undefined8 *)(this + 0xe38);
    EditorExportPreset::get_include_filter();
    LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pSVar1 = *(String **)(this + 0xe60);
    uVar6 = EditorExportPreset::get_export_filter();
    _get_resource_export_header((CowData<char32_t> *)&local_68,this,uVar6);
    Label::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar11 = *(undefined8 *)(this + 0xe40);
    EditorExportPreset::get_exclude_filter();
    LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar11 = *(undefined8 *)(this + 0xe50);
    EditorExportPreset::get_export_filter();
    CanvasItem::set_visible(SUB81(uVar11,0));
    Tree::clear();
    iVar5 = Tree::create_item(*(TreeItem **)(this + 0xea0),0);
    EditorExportPreset::get_patches();
    for (lVar9 = 0; (local_70 != 0 && (lVar9 < *(long *)(local_70 + -8))); lVar9 = lVar9 + 1) {
      uVar11 = Tree::create_item(*(TreeItem **)(this + 0xea0),iVar5);
      if (local_70 == 0) {
        lVar15 = 0;
        goto LAB_0010db37;
      }
      lVar15 = *(long *)(local_70 + -8);
      if (lVar15 <= lVar9) goto LAB_0010db37;
      TreeItem::set_cell_mode(uVar11,0,0);
      iVar14 = (int)uVar11;
      TreeItem::set_editable(iVar14,false);
      String::get_file();
      TreeItem::set_text(uVar11,0,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      TreeItem::set_tooltip_text(iVar14,(String *)0x0);
      Variant::Variant((Variant *)local_58,(int)lVar9);
      TreeItem::set_metadata(iVar14,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = 0;
      local_68 = (Object *)&_LC15;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_90);
      if ((_edit_preset(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_edit_preset(int)::{lambda()#1}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_edit_preset(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_edit_preset(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_edit_preset(int)::{lambda()#1}::operator()()::sname);
      }
      Window::get_editor_theme_icon((StringName *)&local_68);
      iVar7 = (int)(CowData<char32_t> *)&local_68;
      TreeItem::add_button(iVar14,(Ref *)0x0,iVar7,false,(String *)0x0);
      if (((local_68 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_68, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_68 = (Object *)&_LC15;
      local_90 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_90);
      if ((_edit_preset(int)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&_edit_preset(int)::{lambda()#2}::operator()()::sname),
         iVar8 != 0)) {
        _scs_create((char *)&_edit_preset(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_edit_preset(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_edit_preset(int)::{lambda()#2}::operator()()::sname);
      }
      Window::get_editor_theme_icon((StringName *)&local_68);
      TreeItem::add_button(iVar14,(Ref *)0x0,iVar7,true,(String *)0x0);
      if (((local_68 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_68, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    _fill_resource_tree(this);
    local_a8 = 0;
    EditorExportPreset::get_platform();
    cVar4 = (**(code **)(*(long *)local_68 + 0x240))
                      (local_68,(Ref<EditorExportPreset> *)&local_b8,(CowData<char32_t> *)&local_a8,
                       &local_b9);
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_68);
    bVar12 = SUB81((CowData<char32_t> *)&local_a8,0);
    if (cVar4 == '\0') {
      if ((local_a8 == 0) || (*(uint *)(local_a8 + -8) < 2)) {
        CanvasItem::hide();
      }
      else {
        String::split((char *)&local_68,bVar12,0x111c70);
        String::parse_latin1((String *)&local_a8,"");
        for (lVar9 = 0; (local_60 != 0 && (lVar9 < *(long *)(local_60 + -8))); lVar9 = lVar9 + 1) {
          if (lVar9 != 0) {
            String::operator+=((String *)&local_a8,"\n");
          }
          if (local_60 == 0) {
LAB_0010de40:
            lVar15 = 0;
LAB_0010db37:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar15 = *(long *)(local_60 + -8);
          if (lVar15 <= lVar9) goto LAB_0010db37;
          operator+((char *)&local_90,(String *)&_LC286);
          String::operator+=((String *)&local_a8,(String *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        }
        Label::set_text(*(String **)(this + 0xef0));
        CanvasItem::show();
        CowData<String>::_unref((CowData<String> *)&local_60);
      }
      if (local_b9 == '\0') {
        CanvasItem::hide();
      }
      else {
        CanvasItem::show();
      }
      CanvasItem::hide();
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe70),0));
    }
    else {
      local_68 = (Object *)0x0;
      cVar4 = String::operator!=((String *)&local_a8,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (cVar4 == '\0') {
        CanvasItem::hide();
      }
      else {
        String::split((char *)&local_68,bVar12,0x111c70);
        String::parse_latin1((String *)&local_a8,"");
        for (lVar9 = 0; (local_60 != 0 && (lVar9 < *(long *)(local_60 + -8))); lVar9 = lVar9 + 1) {
          if (lVar9 != 0) {
            String::operator+=((String *)&local_a8,"\n");
          }
          if (local_60 == 0) goto LAB_0010de40;
          lVar15 = *(long *)(local_60 + -8);
          if (lVar15 <= lVar9) goto LAB_0010db37;
          operator+((char *)&local_90,(String *)&_LC286);
          String::operator+=((String *)&local_a8,(String *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        }
        Label::set_text(*(String **)(this + 0xef8));
        CanvasItem::show();
        CowData<String>::_unref((CowData<String> *)&local_60);
      }
      CanvasItem::hide();
      CanvasItem::hide();
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe70),0));
    }
    uVar11 = *(undefined8 *)(this + 0xec8);
    EditorExportPreset::get_custom_features();
    LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _update_feature_list(this);
    _update_export_all(this);
    Window::child_controls_changed();
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"s3tc");
    if (*(long *)(this + 0xe88) != 0) {
      for (lVar9 = *(long *)(*(long *)(this + 0xe88) + 0x10); *(long *)(this + 0xe90) != lVar9;
          lVar9 = *(long *)(lVar9 + 8)) {
        while( true ) {
          cVar4 = String::operator<((String *)&local_90,(String *)(lVar9 + 0x30));
          if (cVar4 == '\0') break;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (*(long *)(this + 0xe90) == lVar9) goto LAB_0010d77d;
        }
        cVar4 = String::operator<((String *)(lVar9 + 0x30),(String *)&local_90);
        if (cVar4 == '\0') {
          if (lVar9 != 0) {
            cVar4 = ResourceImporterTextureSettings::should_import_s3tc_bptc();
            if (cVar4 == '\0') goto LAB_0010dea5;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            goto LAB_0010d7ed;
          }
          break;
        }
      }
    }
LAB_0010d77d:
    local_68 = (Object *)0x0;
    String::parse_latin1((String *)&local_68,"bptc");
    if (*(long *)(this + 0xe88) != 0) {
      lVar9 = *(long *)(*(long *)(this + 0xe88) + 0x10);
LAB_0010d7b0:
      if (lVar9 != *(long *)(this + 0xe90)) {
        while( true ) {
          cVar4 = String::operator<((String *)&local_68,(String *)(lVar9 + 0x30));
          if (cVar4 == '\0') break;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == *(long *)(this + 0xe90)) goto LAB_0010d7dd;
        }
        cVar4 = String::operator<((String *)(lVar9 + 0x30),(String *)&local_68);
        if (cVar4 != '\0') goto code_r0x0010dcc3;
        if ((lVar9 != 0) &&
           (cVar4 = ResourceImporterTextureSettings::should_import_s3tc_bptc(), cVar4 == '\0')) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0010dea5:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_68 = (Object *)0x0;
          this_00 = *(ProjectExportTextureFormatError **)(this + 0xee8);
          String::parse_latin1
                    ((String *)&local_68,"rendering/textures/vram_compression/import_s3tc_bptc");
          pcVar13 = "S3TC/BPTC";
          goto LAB_0010dedc;
        }
      }
    }
LAB_0010d7dd:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010d7ed:
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"etc2");
    if (*(long *)(this + 0xe88) != 0) {
      for (lVar9 = *(long *)(*(long *)(this + 0xe88) + 0x10); lVar9 != *(long *)(this + 0xe90);
          lVar9 = *(long *)(lVar9 + 8)) {
        while( true ) {
          cVar4 = String::operator<((String *)&local_90,(String *)(lVar9 + 0x30));
          if (cVar4 == '\0') break;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == *(long *)(this + 0xe90)) goto LAB_0010d845;
        }
        cVar4 = String::operator<((String *)(lVar9 + 0x30),(String *)&local_90);
        if (cVar4 == '\0') {
          if (lVar9 != 0) {
            cVar4 = ResourceImporterTextureSettings::should_import_etc2_astc();
            if (cVar4 == '\0') goto LAB_0010dff0;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            goto LAB_0010d8ad;
          }
          break;
        }
      }
    }
LAB_0010d845:
    local_68 = (Object *)0x0;
    String::parse_latin1((String *)&local_68,"astc");
    if (*(long *)(this + 0xe88) != 0) {
      lVar9 = *(long *)(*(long *)(this + 0xe88) + 0x10);
LAB_0010d870:
      if (*(long *)(this + 0xe90) != lVar9) {
        while( true ) {
          cVar4 = String::operator<((String *)&local_68,(String *)(lVar9 + 0x30));
          if (cVar4 == '\0') break;
          lVar9 = *(long *)(lVar9 + 0x10);
          if (*(long *)(this + 0xe90) == lVar9) goto LAB_0010d89d;
        }
        cVar4 = String::operator<((String *)(lVar9 + 0x30),(String *)&local_68);
        if (cVar4 != '\0') goto code_r0x0010dd03;
        if ((lVar9 != 0) &&
           (cVar4 = ResourceImporterTextureSettings::should_import_etc2_astc(), cVar4 == '\0')) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0010dff0:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_68 = (Object *)0x0;
          this_00 = *(ProjectExportTextureFormatError **)(this + 0xee8);
          String::parse_latin1
                    ((String *)&local_68,"rendering/textures/vram_compression/import_etc2_astc");
          pcVar13 = "ETC2/ASTC";
LAB_0010dedc:
          local_90 = 0;
          String::parse_latin1((String *)&local_90,pcVar13);
          ProjectExportTextureFormatError::show_for_texture_format
                    (this_00,(String *)&local_90,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          goto LAB_0010d8b9;
        }
      }
    }
LAB_0010d89d:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010d8ad:
    CanvasItem::hide();
LAB_0010d8b9:
    EditorExportPreset::get_enc_in_filter();
    EditorExportPreset::get_enc_ex_filter();
    if (this[0xf59] == (ProjectExportDialog)0x0) {
      uVar11 = *(undefined8 *)(this + 0xf38);
      local_68 = (Object *)0x0;
      if (local_a0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      }
      LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = (Object *)0x0;
      uVar11 = *(undefined8 *)(this + 0xf40);
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_98);
      }
      LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    cVar4 = EditorExportPreset::get_enc_pck();
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xf28),0));
    EditorExportPreset::get_seed();
    if (this[0xf5a] == (ProjectExportDialog)0x0) {
      uVar11 = *(undefined8 *)(this + 0xf48);
      itos((long)&local_68);
      LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xf30),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xf38),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xf40),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xed8),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xf48),0));
    EditorExportPreset::get_enc_directory();
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xf30),0));
    EditorExportPreset::get_script_encryption_key();
    if (this[0xf58] == (ProjectExportDialog)0x0) {
      uVar11 = *(undefined8 *)(this + 0xed8);
      local_68 = (Object *)0x0;
      if (local_90 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
      }
      LineEdit::set_text(uVar11,(CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    if (cVar4 == '\0') {
      LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xed8),0));
LAB_0010dd1e:
      CanvasItem::hide();
    }
    else {
      LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xed8),0));
      cVar4 = _validate_script_encryption_key(this,(String *)&local_90);
      if (cVar4 != '\0') goto LAB_0010dd1e;
      CanvasItem::show();
    }
    EditorExportPreset::get_script_export_mode();
    OptionButton::select((int)*(undefined8 *)(this + 0xf50));
    this[0xe10] = (ProjectExportDialog)0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<String>::_unref((CowData<String> *)&local_70);
    CowData<String>::_unref((CowData<String> *)&local_80);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_b0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_b8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e05e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010dcc3:
  lVar9 = *(long *)(lVar9 + 8);
  goto LAB_0010d7b0;
code_r0x0010dd03:
  lVar9 = *(long *)(lVar9 + 8);
  goto LAB_0010d870;
}



/* ProjectExportDialog::_add_preset(int) */

void ProjectExportDialog::_add_preset(int param_1)

{
  Object *pOVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_register_0000003c;
  Object *pOVar7;
  long in_FS_OFFSET;
  String *local_90;
  Object *local_88;
  Object *local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  Object *local_68;
  Object *local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = (int)(String *)&local_58;
  EditorExport::get_export_platform(iVar6);
  (**(code **)(*(long *)local_58 + 0x160))((Ref<EditorExportPreset> *)&local_90);
  if (((local_58 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  if (local_90 == (String *)0x0) {
    _err_print_error("_add_preset","editor/export/project_export.cpp",0x8d,
                     "Condition \"preset.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_90);
LAB_0010e3df:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  EditorExport::get_export_platform(iVar6);
  (**(code **)(*(long *)local_58 + 0x1e0))((CowData<char32_t> *)&local_88);
  if (((local_58 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  bVar2 = true;
LAB_0010e14d:
  iVar6 = 0;
  do {
    iVar5 = EditorExport::get_export_preset_count();
    if (iVar5 <= iVar6) {
      EditorExportPreset::set_name(local_90);
      if (bVar2) {
        EditorExportPreset::set_runnable(SUB81(local_90,0));
      }
      EditorExport::add_export_preset
                (EditorExport::singleton,(int)(Ref<EditorExportPreset> *)&local_90);
      _update_presets((ProjectExportDialog *)CONCAT44(in_register_0000003c,param_1));
      iVar6 = EditorExport::get_export_preset_count();
      _edit_preset((ProjectExportDialog *)CONCAT44(in_register_0000003c,param_1),iVar6 + -1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (((local_90 != (String *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler((Object *)local_90), cVar3 != '\0')) {
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
      }
      goto LAB_0010e3df;
    }
    EditorExport::get_export_preset((int)(String *)&local_68);
    EditorExportPreset::get_platform();
    EditorExportPreset::get_platform();
    if (local_58 == local_60) {
      cVar4 = EditorExportPreset::is_runnable();
      cVar3 = cVar4;
      if (local_60 != (Object *)0x0) goto LAB_0010e158;
LAB_0010e165:
      if (((local_58 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
LAB_0010e287:
        (**(code **)(*(long *)pOVar7 + 0x140))();
        Memory::free_static(pOVar7,false);
      }
      if (cVar4 != '\0') {
        bVar2 = false;
      }
    }
    else {
      cVar4 = '\0';
      cVar3 = '\0';
      if (local_60 != (Object *)0x0) {
LAB_0010e158:
        cVar4 = cVar3;
        cVar3 = RefCounted::unreference();
        pOVar7 = local_60;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))();
          Memory::free_static(pOVar7,false);
        }
        goto LAB_0010e165;
      }
      if (((local_58 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_58), cVar3 != '\0')) goto LAB_0010e287;
    }
    EditorExportPreset::get_name();
    cVar3 = String::operator==((String *)&local_58,(String *)&local_88);
    pOVar7 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_58 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar7 + -0x10,false);
      }
    }
    if (cVar3 != '\0') break;
    if (((local_68 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar7 = local_68, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    iVar6 = iVar6 + 1;
  } while( true );
  if (((local_68 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar7 = local_68, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  itos((long)&local_60);
  local_58 = (Object *)&_LC29;
  local_70 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  EditorExport::get_export_platform((int)&local_80);
  (**(code **)(*(long *)local_80 + 0x1e0))(local_78);
  String::operator+((String *)&local_68,(String *)local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  if (local_88 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    local_88 = local_58;
    local_58 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  if (((local_80 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar7 = local_80, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  goto LAB_0010e14d;
}



/* ProjectExportDialog::_update_current_preset() */

void __thiscall ProjectExportDialog::_update_current_preset(ProjectExportDialog *this)

{
  int iVar1;
  
  iVar1 = ItemList::get_current();
  _edit_preset(this,iVar1);
  return;
}



/* ProjectExportDialog::_duplicate_preset() */

void __thiscall ProjectExportDialog::_duplicate_preset(ProjectExportDialog *this)

{
  Object *pOVar1;
  undefined8 *puVar2;
  bool bVar3;
  String *pSVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  long local_80;
  String *local_78;
  String local_70 [8];
  Object *local_68;
  Object *local_60;
  Object *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_current_preset((ProjectExportDialog *)&local_80);
  if (local_80 != 0) {
    EditorExportPreset::get_platform();
    (**(code **)(*(long *)local_58 + 0x160))((Ref<EditorExportPreset> *)&local_78);
    if (((local_58 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar10 = local_58, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
    if (local_78 != (String *)0x0) {
      local_60 = (Object *)0x0;
      local_58 = (Object *)0x111cbc;
      bVar3 = true;
      local_50[0] = 7;
      String::parse_latin1((StrRange *)&local_60);
      EditorExportPreset::get_name();
      String::operator+(local_70,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010e796:
      iVar9 = 0;
      do {
        iVar7 = EditorExport::get_export_preset_count();
        if (iVar7 <= iVar9) {
          EditorExportPreset::set_name(local_78);
          if (bVar3) {
            EditorExportPreset::set_runnable(SUB81(local_78,0));
          }
          pSVar4 = local_78;
          EditorExportPreset::are_advanced_options_enabled();
          EditorExportPreset::set_advanced_options_enabled(SUB81(pSVar4,0));
          pSVar4 = local_78;
          EditorExportPreset::is_dedicated_server();
          EditorExportPreset::set_dedicated_server(SUB81(pSVar4,0));
          pSVar4 = local_78;
          uVar8 = EditorExportPreset::get_export_filter();
          EditorExportPreset::set_export_filter(pSVar4,uVar8);
          pSVar4 = local_78;
          EditorExportPreset::get_include_filter();
          EditorExportPreset::set_include_filter(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_exclude_filter();
          EditorExportPreset::set_exclude_filter(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_patches();
          EditorExportPreset::set_patches((Vector *)pSVar4);
          CowData<String>::_unref((CowData<String> *)local_50);
          pSVar4 = local_78;
          EditorExportPreset::get_custom_features();
          EditorExportPreset::set_custom_features(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_enc_in_filter();
          EditorExportPreset::set_enc_in_filter(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_enc_ex_filter();
          EditorExportPreset::set_enc_ex_filter(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_enc_pck();
          EditorExportPreset::set_enc_pck(SUB81(pSVar4,0));
          pSVar4 = local_78;
          EditorExportPreset::get_enc_directory();
          EditorExportPreset::set_enc_directory(SUB81(pSVar4,0));
          pSVar4 = local_78;
          EditorExportPreset::get_script_encryption_key();
          EditorExportPreset::set_script_encryption_key(pSVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pSVar4 = local_78;
          EditorExportPreset::get_script_export_mode();
          EditorExportPreset::set_script_export_mode((int)pSVar4);
          for (puVar2 = *(undefined8 **)(local_80 + 0x268); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            Object::set((StringName *)local_78,(Variant *)(puVar2 + 2),(bool *)(puVar2 + 3));
          }
          EditorExport::add_export_preset
                    (EditorExport::singleton,(int)(Ref<EditorExportPreset> *)&local_78);
          _update_presets(this);
          iVar9 = EditorExport::get_export_preset_count();
          _edit_preset(this,iVar9 + -1);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_78);
          Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_80);
          goto LAB_0010ebf3;
        }
        EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_68);
        EditorExportPreset::get_platform();
        EditorExportPreset::get_platform();
        if (local_58 == local_60) {
          cVar6 = EditorExportPreset::is_runnable();
          cVar5 = cVar6;
          if (local_60 != (Object *)0x0) goto LAB_0010e7a0;
LAB_0010e7ad:
          if (((local_58 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar10 = local_58, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
LAB_0010e8cb:
            (**(code **)(*(long *)pOVar10 + 0x140))();
            Memory::free_static(pOVar10,false);
          }
          if (cVar6 != '\0') {
            bVar3 = false;
          }
        }
        else {
          cVar6 = '\0';
          cVar5 = '\0';
          if (local_60 != (Object *)0x0) {
LAB_0010e7a0:
            cVar6 = cVar5;
            cVar5 = RefCounted::unreference();
            pOVar10 = local_60;
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))();
              Memory::free_static(pOVar10,false);
            }
            goto LAB_0010e7ad;
          }
          if (((local_58 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar10 = local_58, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_58), cVar5 != '\0')) goto LAB_0010e8cb;
        }
        EditorExportPreset::get_name();
        cVar5 = String::operator==((String *)&local_58,local_70);
        pOVar10 = local_58;
        if (local_58 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_58 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_58 = (Object *)0x0;
            Memory::free_static(pOVar10 + -0x10,false);
          }
        }
        if (cVar5 != '\0') goto LAB_0010ec20;
        if (((local_68 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar10 = local_68, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        iVar9 = iVar9 + 1;
      } while( true );
    }
    _err_print_error("_duplicate_preset","editor/export/project_export.cpp",0x29f,
                     "Condition \"preset.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_78);
  }
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_80);
LAB_0010ebf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010ec20:
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_68);
  String::operator+=(local_70," (copy)");
  goto LAB_0010e796;
}



/* ProjectExportDialog::_delete_preset_confirm() */

void __thiscall ProjectExportDialog::_delete_preset_confirm(ProjectExportDialog *this)

{
  ItemList::get_current();
  _edit_preset(this,-1);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe70),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  EditorExport::remove_export_preset((int)EditorExport::singleton);
  _update_presets(this);
  _update_export_all(this);
  return;
}



/* ProjectExportDialog::_update_parameters(String const&) */

void ProjectExportDialog::_update_parameters(String *param_1)

{
  int iVar1;
  
  iVar1 = ItemList::get_current();
  _edit_preset((ProjectExportDialog *)param_1,iVar1);
  return;
}



/* ProjectExportDialog::_force_update_current_preset_parameters() */

void __thiscall
ProjectExportDialog::_force_update_current_preset_parameters(ProjectExportDialog *this)

{
  int iVar1;
  
  EditorInspector::edit(*(Object **)(this + 0xdf0));
  iVar1 = ItemList::get_current();
  _edit_preset(this,iVar1);
  return;
}



/* ProjectExportDialog::_patch_file_selected(String const&) */

void ProjectExportDialog::_patch_file_selected(String *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  String *local_58;
  String local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)&local_58);
  if (local_58 == (String *)0x0) {
    _err_print_error("_patch_file_selected","editor/export/project_export.cpp",0x489,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_58);
  }
  else {
    ProjectSettings::get_singleton();
    ProjectSettings::get_resource_path();
    String::path_to_file(local_50);
    CowData<char32_t>::_unref(local_48);
    EditorExportPreset::get_patches();
    if (local_40[0] == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_40[0] + -8);
    }
    if (*(int *)(param_1 + 0xea8) < lVar3) {
      EditorExportPreset::set_patch((int)local_58,(String *)(long)*(int *)(param_1 + 0xea8));
    }
    else {
      EditorExportPreset::add_patch(local_58,(int)local_50);
    }
    iVar2 = ItemList::get_current();
    _edit_preset((ProjectExportDialog *)param_1,iVar2);
    CowData<String>::_unref((CowData<String> *)local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    if (local_58 != (String *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)local_58);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
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



/* ProjectExportDialog::_script_export_mode_changed(int) */

void ProjectExportDialog::_script_export_mode_changed(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ProjectExportDialog *)CONCAT44(in_register_0000003c,param_1))[0xe10] ==
      (ProjectExportDialog)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (Object *)0x0) {
      _err_print_error("_script_export_mode_changed","editor/export/project_export.cpp",0x291,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_script_export_mode((int)local_38);
      iVar2 = ItemList::get_current();
      _edit_preset((ProjectExportDialog *)CONCAT44(in_register_0000003c,param_1),iVar2);
      if (local_38 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_enc_directory_changed(bool) */

void ProjectExportDialog::_enc_directory_changed(bool param_1)

{
  char cVar1;
  int iVar2;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ProjectExportDialog *)CONCAT71(in_register_00000039,param_1))[0xe10] ==
      (ProjectExportDialog)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (Object *)0x0) {
      _err_print_error("_enc_directory_changed","editor/export/project_export.cpp",0x26c,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_enc_directory(SUB81(local_38,0));
      iVar2 = ItemList::get_current();
      _edit_preset((ProjectExportDialog *)CONCAT71(in_register_00000039,param_1),iVar2);
      if (local_38 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_script_encryption_key_changed(String const&) */

void ProjectExportDialog::_script_encryption_key_changed(String *param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  String *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (String *)0x0) {
      _err_print_error("_script_encryption_key_changed","editor/export/project_export.cpp",0x279,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_script_encryption_key(local_38);
      param_1[0xf58] = (String)0x1;
      iVar2 = ItemList::get_current();
      _edit_preset((ProjectExportDialog *)param_1,iVar2);
      param_1[0xf58] = (String)0x0;
      if (local_38 != (String *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler((Object *)local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_seed_input_changed(String const&) */

void ProjectExportDialog::_seed_input_changed(String *param_1)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_30;
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_30);
    pOVar1 = local_30;
    if (local_30 == (Object *)0x0) {
      _err_print_error("_seed_input_changed","editor/export/project_export.cpp",0x25d,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_30);
    }
    else {
      LineEdit::get_text();
      String::to_int();
      EditorExportPreset::set_seed((ulong)pOVar1);
      CowData<char32_t>::_unref(local_28);
      param_1[0xf5a] = (String)0x1;
      iVar3 = ItemList::get_current();
      _edit_preset((ProjectExportDialog *)param_1,iVar3);
      param_1[0xf5a] = (String)0x0;
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
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_enc_pck_changed(bool) */

void ProjectExportDialog::_enc_pck_changed(bool param_1)

{
  char cVar1;
  int iVar2;
  undefined7 in_register_00000039;
  ProjectExportDialog *this;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  this = (ProjectExportDialog *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe10] == (ProjectExportDialog)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)&local_38);
    if (local_38 == (Object *)0x0) {
      _err_print_error("_enc_pck_changed","editor/export/project_export.cpp",0x24c,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_38);
    }
    else {
      EditorExportPreset::set_enc_pck(SUB81(local_38,0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xf30),0));
      LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xf38),0));
      LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xf40),0));
      LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xed8),0));
      iVar2 = ItemList::get_current();
      _edit_preset(this,iVar2);
      if (local_38 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
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



/* ProjectExportDialog::_enc_filters_changed(String const&) */

void ProjectExportDialog::_enc_filters_changed(String *param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  String *local_30;
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xe10] == (String)0x0) {
    ItemList::get_current();
    EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)&local_30);
    pSVar1 = local_30;
    if (local_30 == (String *)0x0) {
      _err_print_error("_enc_filters_changed","editor/export/project_export.cpp",0x238,
                       "Condition \"current.is_null()\" is true.",0,0);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_30);
    }
    else {
      LineEdit::get_text();
      EditorExportPreset::set_enc_in_filter(pSVar1);
      CowData<char32_t>::_unref(local_28);
      pSVar1 = local_30;
      LineEdit::get_text();
      EditorExportPreset::set_enc_ex_filter(pSVar1);
      CowData<char32_t>::_unref(local_28);
      param_1[0xf59] = (String)0x1;
      iVar3 = ItemList::get_current();
      _edit_preset((ProjectExportDialog *)param_1,iVar3);
      param_1[0xf59] = (String)0x0;
      if (local_30 != (String *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)local_30);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_patch_delete_confirmed() */

void __thiscall ProjectExportDialog::_patch_delete_confirmed(ProjectExportDialog *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_40 [2];
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_current();
  EditorExport::get_export_preset((int)(Ref<EditorExportPreset> *)local_40);
  if (local_40[0] == (Object *)0x0) {
    _err_print_error("_patch_delete_confirmed","editor/export/project_export.cpp",0x499,
                     "Condition \"current.is_null()\" is true.",0,0);
    Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)local_40);
  }
  else {
    EditorExportPreset::get_patches();
    if (local_30[0] == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_30[0] + -8);
    }
    if (*(int *)(this + 0xea8) < lVar3) {
      EditorExportPreset::remove_patch((int)local_40[0]);
      iVar2 = ItemList::get_current();
      _edit_preset(this,iVar2);
    }
    CowData<String>::_unref((CowData<String> *)local_30);
    if (local_40[0] != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_40[0]);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_40[0] + 0x140))(local_40[0]);
          Memory::free_static(local_40[0],false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::popup_export() */

void __thiscall ProjectExportDialog::popup_export(ProjectExportDialog *this)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  String *pSVar9;
  int iVar10;
  long in_FS_OFFSET;
  float fVar11;
  Object *local_b8;
  Object *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined1 local_58 [16];
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar5 = (bool)MenuButton::get_popup();
  PopupMenu::clear(bVar5);
  while( true ) {
    iVar7 = EditorExport::get_export_platform_count();
    if (iVar7 <= iVar10) break;
    EditorExport::get_export_platform((int)&local_b8);
    uVar8 = MenuButton::get_popup();
    (**(code **)(*(long *)local_b8 + 0x1e0))(&local_a8);
    (**(code **)(*(long *)local_b8 + 0x1e8))((StrRange *)&local_b0);
    PopupMenu::add_icon_item(uVar8,(StrRange *)&local_b0,&local_a8,0xffffffff,0);
    if (((local_b0 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar3 = local_b0, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b0), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pcVar4 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar3 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    iVar10 = iVar10 + 1;
  }
  _update_presets(this);
  iVar10 = ItemList::get_current();
  if (-1 < iVar10) {
    iVar10 = ItemList::get_current();
    _edit_preset(this,iVar10);
  }
  pSVar9 = (String *)EditorSettings::get_singleton();
  local_88 = 0;
  local_80 = 0;
  Variant::Variant((Variant *)local_78,(Rect2 *)&local_88);
  local_a8 = "export";
  local_b0 = (Object *)0x0;
  local_a0 = 6;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = "dialog_bounds";
  local_b8 = (Object *)0x0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  EditorSettings::get_project_metadata((String *)local_58,pSVar9,(Variant *)&local_b8);
  _local_98 = Variant::operator_cast_to_Rect2((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((((float)local_98._0_4_ == 0.0) && ((float)local_98._4_4_ == 0.0)) && (local_90 == 0.0)) &&
     (fStack_8c == 0.0)) {
    fVar11 = (float)EditorScale::get_scale();
    local_78[0] = CONCAT44(fVar11 * _LC308._4_4_,fVar11 * (float)_LC308);
    local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
    Window::popup_centered_clamped((Vector2i *)this,_LC309);
  }
  else {
    pcVar2 = *(code **)(*(long *)this + 0x240);
    local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_98);
    (*pcVar2)(this,(String *)local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ProjectExportDialog::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void __thiscall
ProjectExportDialog::drop_data_fw
          (ProjectExportDialog *this,Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long lVar5;
  long in_FS_OFFSET;
  Variant local_70 [8];
  String *local_68;
  Ref<EditorExportPreset> local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Control **)(this + 0xdd8) != param_3) {
    if (*(Control **)(this + 0xea0) == param_3) {
      Variant::operator_cast_to_Dictionary(local_70);
      Variant::Variant((Variant *)local_58,"patch");
      pVVar4 = (Variant *)Dictionary::operator[](local_70);
      Variant::operator_cast_to_int(pVVar4);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar5 = Tree::get_item_at_position(*(Vector2 **)(this + 0xea0));
      if (lVar5 != 0) {
        TreeItem::get_metadata((int)(Variant *)local_58);
        Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Tree::get_drop_section_at_position(*(Vector2 **)(this + 0xea0));
        get_current_preset((ProjectExportDialog *)&local_68);
        iVar3 = (int)(CowData<char32_t> *)local_60;
        EditorExportPreset::get_patch(iVar3);
        EditorExportPreset::remove_patch((int)local_68);
        EditorExportPreset::add_patch(local_68,iVar3);
        iVar3 = ItemList::get_current();
        _edit_preset(this,iVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_68);
      }
      Dictionary::~Dictionary((Dictionary *)local_70);
    }
    goto LAB_0010fc4e;
  }
  Variant::operator_cast_to_Dictionary((Variant *)&local_68);
  Variant::Variant((Variant *)local_58,"preset");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_68);
  iVar3 = Variant::operator_cast_to_int(pVVar4);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar2 = ItemList::get_item_at_position(*(Vector2 **)(this + 0xdd8),SUB81(param_1,0));
  if (iVar2 < 0) {
LAB_0010feb0:
    iVar2 = -1;
    cVar1 = ItemList::is_pos_at_end_of_items(*(Vector2 **)(this + 0xdd8));
    if (cVar1 != '\0') goto LAB_0010fd04;
  }
  else {
    iVar2 = ItemList::get_item_at_position(*(Vector2 **)(this + 0xdd8),SUB81(param_1,0));
    if (iVar2 == -1) goto LAB_0010feb0;
LAB_0010fd04:
    if (iVar3 != iVar2) {
      iVar2 = iVar2 - (uint)(iVar3 < iVar2);
      iVar3 = (int)local_60;
      EditorExport::get_export_preset(iVar3);
      EditorExport::remove_export_preset((int)EditorExport::singleton);
      EditorExport::add_export_preset(EditorExport::singleton,iVar3);
      _update_presets(this);
      if (iVar2 < 0) {
        iVar3 = ItemList::get_item_count();
        _edit_preset(this,iVar3 + -1);
      }
      else {
        _edit_preset(this,iVar2);
      }
      Ref<EditorExportPreset>::unref(local_60);
      Dictionary::~Dictionary((Dictionary *)&local_68);
      goto LAB_0010fc4e;
    }
  }
  Dictionary::~Dictionary((Dictionary *)&local_68);
LAB_0010fc4e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::_export_all(bool) */

void __thiscall ProjectExportDialog::_export_all(ProjectExportDialog *this,bool param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  Object *pOVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  EditorProgress *local_c8;
  String local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78;
  Object *local_70;
  Object *local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xf10] = (ProjectExportDialog)0x1;
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  if (param_1) {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Debug";
    local_50 = 5;
  }
  else {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Release";
    local_50 = 7;
  }
  local_c8 = (EditorProgress *)&local_58;
  local_68 = (Object *)0x0;
  String::parse_latin1((StrRange *)&local_68);
  TTR(local_98,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar8 = EditorExport::get_export_preset_count();
  local_78 = 0;
  local_58 = " ";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_78);
  local_58 = "";
  local_88 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_58 = "Exporting All";
  local_90 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  TTR(local_80,(String *)&local_90);
  String::operator+((String *)&local_70,local_80);
  String::operator+((String *)&local_68,(String *)&local_70);
  local_58 = "exportall";
  local_60 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_60);
  EditorProgress::EditorProgress(local_c8,(String *)&local_60,(String *)&local_68,iVar8,true,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  iVar8 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  RichTextLabel::clear();
  bVar2 = 0;
  do {
    iVar9 = EditorExport::get_export_preset_count();
    if (iVar9 <= iVar8) {
      EditorProgress::~EditorProgress(local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (bVar2 != 0) {
        Window::popup_centered_ratio(_LC315);
      }
      this[0xf10] = (ProjectExportDialog)0x0;
LAB_00110426:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    EditorExport::get_export_preset((int)(String *)&local_70);
    if (local_70 == (Object *)0x0) {
      this[0xf10] = (ProjectExportDialog)0x0;
      _err_print_error("_export_all","editor/export/project_export.cpp",0x549,
                       "Method/function failed.",
                       "Failed to start the export: one of the presets is invalid.",0,0);
LAB_00110489:
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
      EditorProgress::~EditorProgress(local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      goto LAB_00110426;
    }
    EditorExportPreset::get_platform();
    if (local_68 == (Object *)0x0) {
      this[0xf10] = (ProjectExportDialog)0x0;
      _err_print_error("_export_all","editor/export/project_export.cpp",0x54f,
                       "Method/function failed.",
                       "Failed to start the export: one of the presets has no valid platform.",0,0);
LAB_001104f9:
      Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_68);
      goto LAB_00110489;
    }
    EditorExportPreset::get_name();
    EditorProgress::step((String *)local_c8,(int)(CowData<char32_t> *)&local_60,SUB41(iVar8,0));
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (*(code **)(*(long *)local_68 + 0x170) == EditorExportPlatform::clear_messages) {
      if ((*(long *)(local_68 + 0x188) != 0) && (*(long *)(*(long *)(local_68 + 0x188) + -8) != 0))
      {
        CowData<EditorExportPlatform::ExportMessage>::_unref
                  ((CowData<EditorExportPlatform::ExportMessage> *)(local_68 + 0x188));
      }
    }
    else {
      (**(code **)(*(long *)local_68 + 0x170))();
    }
    EditorExportPreset::update_value_overrides();
    pOVar4 = local_68;
    pcVar3 = *(code **)(*(long *)local_68 + 0x260);
    EditorExportPreset::get_export_path();
    iVar9 = (*pcVar3)(pOVar4,(String *)&local_70,param_1,(CowData<char32_t> *)&local_60,0);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (iVar9 == 0x2d) {
      this[0xf10] = (ProjectExportDialog)0x0;
      goto LAB_001104f9;
    }
    bVar6 = (**(code **)(*(long *)local_68 + 0x1b0))();
    bVar2 = bVar2 | bVar6;
    if (local_68 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar4 = local_68;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_68);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (local_70 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar4 = local_70;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_70);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



/* ProjectExportDialog::_export_all_dialog_action(String const&) */

void __thiscall
ProjectExportDialog::_export_all_dialog_action(ProjectExportDialog *this,String *param_1)

{
  bool bVar1;
  
  Window::hide();
  bVar1 = (bool)String::operator!=(param_1,"release");
  _export_all(this,bVar1);
  return;
}



/* ProjectExportDialog::_export_project_to_path(String const&) */

void ProjectExportDialog::_export_project_to_path(String *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  String *pSVar7;
  long in_FS_OFFSET;
  String *local_d0;
  Object *local_c8;
  Variant local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_file();
  String::get_basename();
  if ((char *)*(long *)(param_1 + 0xf08) != local_a8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0xf08));
    pcVar3 = local_a8;
    local_a8 = (char *)0x0;
    *(char **)(param_1 + 0xf08) = pcVar3;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  pSVar7 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,param_1 + 0xf08);
  local_a8 = "default_filename";
  local_b0 = 0;
  local_a0 = 0x10;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = "export_options";
  local_b8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  EditorSettings::set_project_metadata(pSVar7,(String *)&local_b8,(Variant *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  get_current_preset((ProjectExportDialog *)&local_d0);
  if (local_d0 == (String *)0x0) {
    _err_print_error("_export_project_to_path","editor/export/project_export.cpp",0x518,
                     "Condition \"current.is_null()\" is true.",
                     "Failed to start the export: current preset is invalid.",0,0);
  }
  else {
    EditorExportPreset::get_platform();
    if (local_c8 != (Object *)0x0) {
      EditorExportPreset::set_export_path(local_d0);
      param_1[0xf10] = (String)0x1;
      if (*(code **)(*(long *)local_c8 + 0x170) == EditorExportPlatform::clear_messages) {
        if ((*(long *)(local_c8 + 0x188) != 0) && (*(long *)(*(long *)(local_c8 + 0x188) + -8) != 0)
           ) {
          CowData<EditorExportPlatform::ExportMessage>::_unref
                    ((CowData<EditorExportPlatform::ExportMessage> *)(local_c8 + 0x188));
        }
      }
      else {
        (**(code **)(*(long *)local_c8 + 0x170))();
      }
      EditorExportPreset::update_value_overrides();
      EditorFileDialog::get_selected_options();
      Variant::Variant((Variant *)local_78,true);
      local_a8 = "";
      local_b0 = 0;
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "Export With Debug";
      local_b8 = 0;
      local_a0 = 0x11;
      String::parse_latin1((StrRange *)&local_b8);
      TTR((String *)&local_a8,(String *)&local_b8);
      Variant::Variant((Variant *)local_98,(String *)&local_a8);
      Dictionary::get((Variant *)local_58,local_c0);
      bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      pSVar7 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_58,bVar4);
      local_a8 = "export_debug";
      local_b0 = 0;
      local_a0 = 0xc;
      String::parse_latin1((StrRange *)&local_b0);
      local_a8 = "export_options";
      local_b8 = 0;
      local_a0 = 0xe;
      String::parse_latin1((StrRange *)&local_b8);
      EditorSettings::set_project_metadata(pSVar7,(String *)&local_b8,(Variant *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pOVar2 = local_c8;
      pcVar1 = *(code **)(*(long *)local_c8 + 0x260);
      EditorExportPreset::get_export_path();
      iVar6 = (*pcVar1)(pOVar2,(ProjectExportDialog *)&local_d0,bVar4,(CowData<char32_t> *)&local_a8
                        ,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      RichTextLabel::clear();
      if (iVar6 != 0x2d) {
        cVar5 = (**(code **)(*(long *)local_c8 + 0x1b0))
                          (local_c8,*(undefined8 *)(param_1 + 0xe18),iVar6);
        if (cVar5 != '\0') {
          Window::popup_centered_ratio(_LC315);
        }
      }
      param_1[0xf10] = (String)0x0;
      Dictionary::~Dictionary((Dictionary *)local_c0);
      if (local_c8 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_c8);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
            Memory::free_static(local_c8,false);
          }
        }
      }
      if (local_d0 != (String *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler((Object *)local_d0);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)local_d0 + 0x140))(local_d0);
            Memory::free_static(local_d0,false);
          }
        }
      }
      goto LAB_001109f2;
    }
    _err_print_error("_export_project_to_path","editor/export/project_export.cpp",0x51a,
                     "Condition \"platform.is_null()\" is true.",
                     "Failed to start the export: current preset has no valid platform.",0,0);
    Ref<EditorExportPlatform>::unref((Ref<EditorExportPlatform> *)&local_c8);
  }
  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_d0);
LAB_001109f2:
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



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1256,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1256,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1256,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1256,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ConfirmationDialog::_property_can_revertv(StringName const&) const */

undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProjectExportDialog::_property_can_revertv(StringName const&) const */

undefined8 ProjectExportDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ProjectExportDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ProjectExportDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFileDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectExportTextureFormatError,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this)

{
  return;
}



/* MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<EditorExportPreset>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<EditorExportPreset>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String>::_gen_argument_type(int) const */

undefined8 MethodBindTR<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTR<String>::get_argument_meta(int) const */

undefined8 MethodBindTR<String>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFileDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectExportTextureFormatError, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::get_argument_count
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ProjectExportTextureFormatError,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFileDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
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



/* ProjectExportTextureFormatError::_property_get_revertv(StringName const&, Variant&) const */

undefined8
ProjectExportTextureFormatError::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ProjectExportTextureFormatError::_property_can_revertv(StringName const&) const */

undefined8 ProjectExportTextureFormatError::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125288;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125288;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001252e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001252e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125348;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125348;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00123fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00123fe8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0012c010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectExportDialog::_getv(StringName const&, Variant&) const */

undefined8 ProjectExportDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0012c010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012c018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectExportDialog::_setv(StringName const&, Variant const&) */

undefined8 ProjectExportDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012c018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ProjectExportDialog::_validate_propertyv(PropertyInfo&) const */

void ProjectExportDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c028 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this)

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
      goto LAB_0011203d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011203d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011203d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1256,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1254,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this)

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
      goto LAB_001121ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001121ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001121ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this)

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
      goto LAB_001122ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001122ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001122ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportTextureFormatError, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::get_object
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this)

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
      goto LAB_001123ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001123ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001123ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFileDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this)

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
      goto LAB_001124ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001124ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001124ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001125ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001125ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001125ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
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
      goto LAB_001126ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001126ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001126ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int, int>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this)

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
      goto LAB_001127ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001127ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001127ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001128ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001128ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001128ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this)

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
      goto LAB_001129ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001129ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001129ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&, Control*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_00112aad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112aad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112aad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::get_object
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this)

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
      goto LAB_00112bad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112bad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112bad:
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
  if ((code *)PTR__validate_property_0012c030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ProjectExportTextureFormatError::_validate_propertyv(PropertyInfo&) const */

void ProjectExportTextureFormatError::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012c030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012c030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c038 != Window::_notification) {
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
  if ((code *)PTR__notification_0012c038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* ProjectExportDialog::is_class_ptr(void*) const */

uint ProjectExportDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1256,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ProjectExportTextureFormatError::_setv(StringName const&, Variant const&) */

undefined8 ProjectExportTextureFormatError::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012c040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012c040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012c040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012c040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
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
    uVar1 = (uint)CONCAT71(0x1256,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1256,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ProjectExportTextureFormatError::is_class_ptr(void*) const */

ulong ProjectExportTextureFormatError::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1256,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1256,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1256,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1256,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1256,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1256,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x001132c8) */
/* ProjectExportTextureFormatError::_getv(StringName const&, Variant&) const */

undefined8 ProjectExportTextureFormatError::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113338) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001133a8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113418) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012c048 != CanvasItem::_get) &&
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
      if (StringName::configured == '\0') goto LAB_00113480;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113480:
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
      if (StringName::configured == '\0') goto LAB_001134e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001134e0:
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
      if (StringName::configured == '\0') goto LAB_00113540;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113540:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_001135b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001135b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c050 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0012c050 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012c058 != Container::_notification) {
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
  if ((code *)PTR__notification_0012c058 == Container::_notification) {
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
    if ((code *)PTR__notification_0012c058 != Container::_notification) {
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
  if ((code *)PTR__notification_0012c058 == Container::_notification) {
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a5f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113a5f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113c0f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113c0f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* ProjectExportDialog::_get_class_namev() const */

undefined8 * ProjectExportDialog::_get_class_namev(void)

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
LAB_00113d53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113d53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ProjectExportDialog");
      goto LAB_00113dbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectExportDialog");
LAB_00113dbe:
  return &_get_class_namev()::_class_name_static;
}



/* ConfirmationDialog::_get_class_namev() const */

undefined8 * ConfirmationDialog::_get_class_namev(void)

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
LAB_00113e43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113e43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00113eae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00113eae:
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
LAB_00113f33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113f33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00113f9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00113f9e:
  return &_get_class_namev()::_class_name_static;
}



/* ProjectExportTextureFormatError::_get_class_namev() const */

undefined8 * ProjectExportTextureFormatError::_get_class_namev(void)

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
LAB_00114033:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114033;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ProjectExportTextureFormatError");
      goto LAB_0011409e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ProjectExportTextureFormatError"
            );
LAB_0011409e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_00114123:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114123;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0011418e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0011418e:
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
LAB_00114213:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114213;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011427e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011427e:
  return &_get_class_namev()::_class_name_static;
}



/* ProjectExportTextureFormatError::_notificationv(int, bool) */

void __thiscall
ProjectExportTextureFormatError::_notificationv
          (ProjectExportTextureFormatError *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0012c058 != Container::_notification) {
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
  if ((code *)PTR__notification_0012c058 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
  return;
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



/* ProjectExportTextureFormatError::~ProjectExportTextureFormatError() */

void __thiscall
ProjectExportTextureFormatError::~ProjectExportTextureFormatError
          (ProjectExportTextureFormatError *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00124260;
  if (*(long *)(this + 0xa20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa20);
      *(undefined8 *)(this + 0xa20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001156fe;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001156fe:
  Control::~Control((Control *)this);
  return;
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



/* ConfirmationDialog::get_class() const */

void ConfirmationDialog::get_class(void)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ProjectExportDialog::get_class() const */

void ProjectExportDialog::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* ProjectExportTextureFormatError::get_class() const */

void ProjectExportTextureFormatError::get_class(void)

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



/* Callable create_custom_callable_function_pointer<ProjectExportDialog>(ProjectExportDialog*, char
   const*, void (ProjectExportDialog::*)()) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog>
          (ProjectExportDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124c58;
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



/* Callable create_custom_callable_function_pointer<EditorFileDialog, String
   const&>(EditorFileDialog*, char const*, void (EditorFileDialog::*)(String const&)) */

EditorFileDialog *
create_custom_callable_function_pointer<EditorFileDialog,String_const&>
          (EditorFileDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124ce8;
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



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, int>(ProjectExportDialog*,
   char const*, void (ProjectExportDialog::*)(int)) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,int>
          (ProjectExportDialog *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124d78;
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



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, Variant, Vector2 const&,
   Control*>(ProjectExportDialog*, char const*, Variant (ProjectExportDialog::*)(Vector2 const&,
   Control*)) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,Variant,Vector2_const&,Control*>
          (ProjectExportDialog *param_1,char *param_2,_func_Variant_Vector2_ptr_Control_ptr *param_3
          )

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124e08;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_Variant_Vector2_ptr_Control_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<ItemList*>(ItemList*) const */

ItemList * Callable::bind<ItemList*>(ItemList *param_1)

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



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, bool, Vector2 const&,
   Variant const&, Control*>(ProjectExportDialog*, char const*, bool
   (ProjectExportDialog::*)(Vector2 const&, Variant const&, Control*) const) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
          (ProjectExportDialog *param_1,char *param_2,
          _func_bool_Vector2_ptr_Variant_ptr_Control_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124e98;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_bool_Vector2_ptr_Variant_ptr_Control_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, Vector2 const&, Variant
   const&, Control*>(ProjectExportDialog*, char const*, void (ProjectExportDialog::*)(Vector2
   const&, Variant const&, Control*)) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,Vector2_const&,Variant_const&,Control*>
          (ProjectExportDialog *param_1,char *param_2,
          _func_void_Vector2_ptr_Variant_ptr_Control_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124f28;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector2_ptr_Variant_ptr_Control_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, String
   const&>(ProjectExportDialog*, char const*, void (ProjectExportDialog::*)(String const&)) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,String_const&>
          (ProjectExportDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124fb8;
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



/* Callable create_custom_callable_function_pointer<ProjectExportDialog, bool>(ProjectExportDialog*,
   char const*, void (ProjectExportDialog::*)(bool)) */

ProjectExportDialog *
create_custom_callable_function_pointer<ProjectExportDialog,bool>
          (ProjectExportDialog *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00125168;
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
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
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



/* MethodBindTR<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00116885;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00116885:
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



/* WARNING: Removing unreachable block (ram,0x00116a98) */
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



/* WARNING: Removing unreachable block (ram,0x00116dd0) */
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



/* WARNING: Removing unreachable block (ram,0x00117078) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
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



/* MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<EditorExportPreset>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "EditorExportPreset";
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00117415;
    }
  }
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
LAB_00117415:
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



/* CallableCustomMethodPointer<ProjectExportDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this,Variant **param_1,int param_2
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
      goto LAB_001176af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001176af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117771;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001176af:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117771:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportTextureFormatError, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::call
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this,Variant **param_1
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
      goto LAB_001178cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001178cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001178a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117991;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001178cf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
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
      goto LAB_00117b94;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00117b94;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC57;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00117b23:
          uVar3 = _LC58;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00117b23;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6,iVar5);
          return;
        }
        goto LAB_00117c77;
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
LAB_00117b94:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117c77:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  uint uVar11;
  ulong *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00117ee0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_00117ee0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar4 = _LC59;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar4 = _LC60;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[2]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC57;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar8 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00117e68:
          uVar4 = _LC58;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          pOVar10 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar10 == (Object *)0x0) && (pOVar9 != (Object *)0x0)) goto LAB_00117e68;
        }
        pOVar9 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar9,iVar8,iVar7,iVar6);
          return;
        }
        goto LAB_00117fdb;
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
LAB_00117ee0:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117fdb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this,Variant **param_1,
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
      goto LAB_00118198;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00118198;
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
        uVar3 = _LC61;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00118249;
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
LAB_00118198:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00118249:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this,Variant **param_1,
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
      goto LAB_00118409;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00118409;
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
        uVar3 = _LC62;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001183b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_001184ba;
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
LAB_00118409:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001184ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_00118585;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00118585;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0011860f:
          uVar4 = _LC63;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011860f;
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
        uVar4 = _LC65;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00118585;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00118585:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_00118904;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00118904;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0011898c:
          uVar4 = _LC63;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0011898c;
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
        uVar4 = _LC65;
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
        goto LAB_00118904;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00118904:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this,
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
          goto LAB_00118cac;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00118cac;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_00118d2c:
          uVar3 = _LC66;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00118d2c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC65;
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
        goto LAB_00118cac;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00118cac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorFileDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::call
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this,Variant **param_1,
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
            uVar3 = _LC67;
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
        goto LAB_00118fee;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00118fee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::call
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this,
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
            uVar3 = _LC67;
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
        goto LAB_0011924e;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011924e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
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
            uVar4 = _LC68;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC69;
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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC70;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
              StringName::unref();
            }
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
        goto LAB_001194ac;
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
  _err_print_error(&_LC56,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001194ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
    local_68 = &_LC15;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
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



/* ProjectExportTextureFormatError::~ProjectExportTextureFormatError() */

void __thiscall
ProjectExportTextureFormatError::~ProjectExportTextureFormatError
          (ProjectExportTextureFormatError *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00124260;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa20));
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011995a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011995a:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  return;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::clear() */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::clear
          (RBSet<String,Comparator<String>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar7) {
            pEVar5 = *(Element **)(pEVar7 + 0x10);
            if (pEVar2 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar7 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar7 != pEVar3) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar6 + 8);
          if (pEVar7 != pEVar3) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x30));
    Memory::free_static(pvVar4,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* ConfirmationDialog::_initialize_classv() */

void ConfirmationDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_58 = "Viewport";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Window";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
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
      AcceptDialog::_bind_methods();
      if ((code *)PTR__bind_compatibility_methods_0012c060 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfirmationDialog";
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
    if ((code *)PTR__bind_methods_0012c068 != AcceptDialog::_bind_methods) {
      ConfirmationDialog::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0012c078 !=
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
      local_58 = "SplitContainer";
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
      if ((code *)PTR__bind_methods_0012c080 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HSplitContainer";
    local_70 = 0;
    local_50 = 0xf;
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
              if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0012c078 !=
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
      if ((code *)PTR__bind_methods_0012c088 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0012c078 !=
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
      if ((code *)PTR__bind_methods_0012c088 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0011bccb;
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
      if (cVar5 != '\0') goto LAB_0011bccb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011bccb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011becb;
  }
  cVar5 = String::operator==(param_1,"Window");
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
      if (cVar5 != '\0') goto LAB_0011becb;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011bfce;
    }
  }
LAB_0011becb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011bfce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011c0db;
  }
  cVar5 = String::operator==(param_1,"ConfirmationDialog");
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
      if (cVar5 != '\0') goto LAB_0011c0db;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0011c1de;
    }
  }
LAB_0011c0db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011c1de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportDialog::is_class(String const&) const */

undefined8 __thiscall ProjectExportDialog::is_class(ProjectExportDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011c2eb;
  }
  cVar4 = String::operator==(param_1,"ProjectExportDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011c2eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0011c43b;
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
      if (cVar5 != '\0') goto LAB_0011c43b;
    }
    cVar5 = String::operator==(param_1,"Control");
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
        if (cVar5 != '\0') goto LAB_0011c43b;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0011c5de;
      }
    }
  }
LAB_0011c43b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011c5de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011c6eb;
  }
  cVar5 = String::operator==(param_1,"HSplitContainer");
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
      if (cVar5 != '\0') goto LAB_0011c6eb;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011c7ee;
    }
  }
LAB_0011c6eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011c7ee:
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
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
        if (pvVar5 == (void *)0x0) goto LAB_0011c916;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011c916:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ProjectExportTextureFormatError::is_class(String const&) const */

undefined8 __thiscall
ProjectExportTextureFormatError::is_class(ProjectExportTextureFormatError *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011ca6b;
  }
  cVar5 = String::operator==(param_1,"ProjectExportTextureFormatError");
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
      if (cVar5 != '\0') goto LAB_0011ca6b;
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
        if (cVar5 != '\0') goto LAB_0011ca6b;
      }
      cVar5 = String::operator==(param_1,"BoxContainer");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Container::is_class((Container *)this,param_1);
          return uVar6;
        }
        goto LAB_0011cc58;
      }
    }
  }
LAB_0011ca6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011cc58:
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
    if (cVar5 != '\0') goto LAB_0011cd5b;
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
      if (cVar5 != '\0') goto LAB_0011cd5b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011ce5e;
    }
  }
LAB_0011cd5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ce5e:
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
    if (cVar5 != '\0') goto LAB_0011cf6b;
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
      if (cVar5 != '\0') goto LAB_0011cf6b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011d06e;
    }
  }
LAB_0011cf6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011d06e:
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
  local_78 = &_LC76;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC76;
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
      goto LAB_0011d1dc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d1dc:
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_0011d441;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d441:
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
      goto LAB_0011d6f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d6f1:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012c090 != Object::_get_property_list) {
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
      goto LAB_0011d9c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d9c1:
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



/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConfirmationDialog::_get_property_listv(ConfirmationDialog *this,List *param_1,bool param_2)

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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfirmationDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfirmationDialog";
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
      goto LAB_0011dc71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011dc71:
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
  StringName::StringName((StringName *)&local_78,"ConfirmationDialog",false);
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



/* ProjectExportDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ProjectExportDialog::_get_property_listv(ProjectExportDialog *this,List *param_1,bool param_2)

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
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectExportDialog";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectExportDialog";
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
      goto LAB_0011df21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011df21:
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
  StringName::StringName((StringName *)&local_78,"ProjectExportDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,true);
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
      goto LAB_0011e1d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e1d1:
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
  if ((code *)PTR__get_property_list_0012c098 != Object::_get_property_list) {
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
      goto LAB_0011e4a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e4a1:
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
  if ((code *)PTR__get_property_list_0012c0a0 != CanvasItem::_get_property_list) {
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
      goto LAB_0011e771;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e771:
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
      goto LAB_0011ea21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ea21:
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
      goto LAB_0011ecd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ecd1:
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



/* ProjectExportTextureFormatError::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ProjectExportTextureFormatError::_get_property_listv
          (ProjectExportTextureFormatError *this,List *param_1,bool param_2)

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
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ProjectExportTextureFormatError";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ProjectExportTextureFormatError";
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
      goto LAB_0011ef81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ef81:
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
  StringName::StringName((StringName *)&local_78,"ProjectExportTextureFormatError",false);
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
      goto LAB_0011f231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011f231:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
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
      goto LAB_0011f4e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011f4e1:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
  local_98 = 0;
  local_70 = 0xf;
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
      goto LAB_0011f791;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011f791:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
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



/* ProjectExportTextureFormatError::_bind_methods() [clone .cold] */

void ProjectExportTextureFormatError::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectExportDialog::_bind_methods() [clone .cold] */

void ProjectExportDialog::_bind_methods(void)

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



/* ProjectExportDialog::ProjectExportDialog() [clone .cold] */

void __thiscall ProjectExportDialog::ProjectExportDialog(ProjectExportDialog *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ProjectExportTextureFormatError::_initialize_classv() */

void ProjectExportTextureFormatError::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0012c078 !=
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
        if ((code *)PTR__bind_methods_0012c088 != Container::_bind_methods) {
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
    local_58 = "ProjectExportTextureFormatError";
    local_70 = 0;
    local_50 = 0x1f;
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



/* ProjectExportDialog::_notificationv(int, bool) */

void __thiscall
ProjectExportDialog::_notificationv(ProjectExportDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* Ref<EditorExportPlatform>::unref() */

void __thiscall Ref<EditorExportPlatform>::unref(Ref<EditorExportPlatform> *this)

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



/* Ref<EditorExportPreset>::unref() */

void __thiscall Ref<EditorExportPreset>::unref(Ref<EditorExportPreset> *this)

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



/* MethodBind* create_method_bind<ProjectExportDialog, String const&>(void
   (ProjectExportDialog::*)(String const&)) */

MethodBind * create_method_bind<ProjectExportDialog,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125288;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ProjectExportDialog";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<ProjectExportDialog, String>(String (ProjectExportDialog::*)()) */

MethodBind * create_method_bind<ProjectExportDialog,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001252e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ProjectExportDialog";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<ProjectExportDialog,
   Ref<EditorExportPreset>>(Ref<EditorExportPreset> (ProjectExportDialog::*)() const) */

MethodBind * create_method_bind<ProjectExportDialog,Ref<EditorExportPreset>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125348;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ProjectExportDialog";
  local_30 = 0x13;
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



/* ProjectExportDialog::_initialize_classv() */

void ProjectExportDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        if (Window::initialize_class()::initialized == '\0') {
          if (Viewport::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0012c070 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Viewport");
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
            Viewport::_bind_methods();
            Viewport::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Viewport");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Window");
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
          Window::_bind_methods();
          Window::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Window";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "AcceptDialog";
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0012c060 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ConfirmationDialog";
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
      if ((code *)PTR__bind_methods_0012c068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ProjectExportDialog";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_00121000:
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
  if (lVar9 == 0) goto LAB_00121000;
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
    goto LAB_00121056;
  }
  if (lVar9 == lVar5) {
LAB_00120f7b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00121056:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00120eef;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00120f7b;
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
LAB_00120eef:
  puVar7[-1] = param_1;
  return 0;
}



/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix
          (RBSet<String,Comparator<String>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0012116d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00121290;
LAB_00121116:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00121116;
LAB_00121290:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00121153:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00121382:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00121382;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00121350;
LAB_001211e0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_001211e0;
LAB_00121350:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00121153;
    }
LAB_0012116d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* CowData<EditorExportPlatform::ExportMessage>::_unref() */

void __thiscall
CowData<EditorExportPlatform::ExportMessage>::_unref
          (CowData<EditorExportPlatform::ExportMessage> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorExportPlatform::clear_messages() */

void __thiscall EditorExportPlatform::clear_messages(EditorExportPlatform *this)

{
  if ((*(long *)(this + 0x188) != 0) && (*(long *)(*(long *)(this + 0x188) + -8) != 0)) {
    CowData<EditorExportPlatform::ExportMessage>::_unref
              ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001215e8) */
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



/* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<String>::call
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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121970;
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
LAB_00121970:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String>::validated_call
          (MethodBindTR<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1217b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121c3c;
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
LAB_00121c3c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String>::ptrcall
          (MethodBindTR<String> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x1217b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121e0d;
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
LAB_00121e0d:
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
      goto LAB_00122141;
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
                    /* WARNING: Could not recover jumptable at 0x00121fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00122141:
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
      goto LAB_00122321;
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
                    /* WARNING: Could not recover jumptable at 0x001221a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00122321:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<EditorExportPreset>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<EditorExportPreset>>::call
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
      local_58 = (Object *)0x1217b8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122400;
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
      (*(code *)pVVar2)((Ref<EditorExportPreset> *)&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_58);
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
LAB_00122400:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<EditorExportPreset>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<EditorExportPreset>>::ptrcall
          (MethodBindTRC<Ref<EditorExportPreset>> *this,Object *param_1,void **param_2,void *param_3
          )

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
      local_48 = (Object *)0x1217b8;
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
      goto LAB_00122686;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00122686;
    *(undefined8 *)param_3 = 0;
    goto LAB_001226c9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001226c9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001226c9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00122686;
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
LAB_00122686:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122a30;
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
      if (in_R8D != 1) goto LAB_00122a80;
LAB_00122a70:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122a80:
        uVar6 = 4;
        goto LAB_00122a25;
      }
      if (in_R8D == 1) goto LAB_00122a70;
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
    uVar4 = _LC67;
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
LAB_00122a25:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00122a30:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<EditorExportPreset>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<EditorExportPreset>>::validated_call
          (MethodBindTRC<Ref<EditorExportPreset>> *this,Object *param_1,Variant **param_2,
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
      local_48 = (Variant **)0x1217b8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00122cc6;
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
LAB_00122cc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProjectExportTextureFormatError::_on_fix_texture_format_pressed() */

void ProjectExportTextureFormatError::_GLOBAL__sub_I__on_fix_texture_format_pressed(void)

{
  undefined8 uStack_18;
  
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
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated == '\0') {
    EditorExport::_export_presets_runnable_updated = '\x01';
    EditorExport::_export_presets_runnable_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,
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
               uStack_18);
  return;
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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* ProjectExportTextureFormatError::~ProjectExportTextureFormatError() */

void __thiscall
ProjectExportTextureFormatError::~ProjectExportTextureFormatError
          (ProjectExportTextureFormatError *this)

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
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

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
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<EditorExportPreset>>::~MethodBindTRC(MethodBindTRC<Ref<EditorExportPreset>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

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
/* CallableCustomMethodPointer<ProjectExportTextureFormatError,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportTextureFormatError,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportTextureFormatError,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFileDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<ProjectExportDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ProjectExportDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectExportDialog, void, Object*, int, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectExportDialog,void,Object*,int,int,int> *this)

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


